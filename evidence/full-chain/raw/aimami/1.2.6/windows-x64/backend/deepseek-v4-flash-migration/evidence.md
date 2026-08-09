# evidence: deepseek-v4-flash-migration (AiMaMi 1.2.6, windows-x64)

## 任务
扩大 Windows 侧符号搜索关键词（deepseek / v4_flash / v4flash 等变体），排查 mac
`is_deepseek_v4_flash_model` (0x1007750a0) / `migrate_legacy_deepseek_v4_flash_official_protocol`
(0x100778c20) 在 Windows 1.2.6 是否有对应实现，命名是否存在差异。

## 符号搜索过程（诚实记录，含失败尝试）
1. `func_query` 用 glob filter 依次尝试 `*storage*` / `*relay*` / `*codexmate_lib*` / `*deepseek*` /
   `*v4_flash*` / `*v4flash*` —— **全部返回空结果**。确认 Windows 构建对这部分模块的函数符号
   已被剥离（strip），无 Rust demangled 名称保留，与 mac 构建形成鲜明对比。
2. 转用 `find_regex(pattern="deepseek")` 搜索字符串常量（非函数名），命中 7 处，其中最关键：
   - `0x1418638d7` = `"deepseek-v4-flash"`
   - `0x141863ba9` 附近 = `"...legacy DeepSeek V4 Flash official model protocol(s) to openai-responses"`
     （疑似迁移日志文案，与目标行为语义高度吻合）
   - `0x14180a888` = `"api.deepseek.com"`
3. `xrefs_to("0x1418638d7")` 定位到唯一引用函数 `sub_140B5F590`，且被引用 **3 次**（与 mac 版本
   `is_deepseek_v4_flash_model` 被调用 3 次的模式完全吻合，是强对应信号）。
4. `decompile(0x140b5f590)` 完整反编译（1169 字节，无截断标记），逐分支比对确认与 mac
   `migrate_legacy_deepseek_v4_flash_official_protocol` **逻辑完全等价**：相同的 232 字节条目 stride、
   相同的 https/host/path 三段校验、相同的 96 字节 models 子数组、相同的迁移标志字节偏移
   （`+230` / `+88`）。

## 核心结论：符号内联而非行为缺失
Windows 构建中，`is_deepseek_v4_flash_model` **没有保留为独立函数**——其判定逻辑被 Rust
编译器/LLVM 后端**内联进了 `sub_140B5F590`（即 migrate 函数）内部**，出现 3 处内联调用点
（`0x140b5f87d` / `0x140b5f922` / `0x140b5f9bf`），每处都调用共享 SIMD 比较 helper
`sub_140A839D0(ptr, len, "deepseek-v4-flash", 17)` 做 17 字节 ASCII 大小写不敏感比较。
这是编译器优化策略差异（mac 构建保留了该谓词函数为独立符号，Windows 构建做了跨函数内联），
**不是功能缺失**。

## 共享 helper 命名纪律
`sub_140A839D0` 经 `xrefs_to` 确认被至少 4 处不同调用方复用（`sub_140B414C0` /
`migrate_legacy_deepseek_v4_flash_official_protocol` / `sub_140B66350` / `sub_14127D460`），
是一个通用 ASCII 大小写不敏感字符串比较 helper，**未重命名为 deepseek 专属名称**（避免用单一
调用方语境误导后续读者），仅加中文注释说明其在本上下文中的具体用途。

## 常量核实
`xmmword_141859630`（host 比较用常量）经 `get_bytes` 读取，字节 =
`61 70 69 2e 64 65 65 70 73 65 65 6b 2e 63 6f 6d` = `"api.deepseek.com"`，与 mac 版本
`xmmword_1016EEE80` **字节完全相同**（双端核实，非假设）。

## IDB 变更
- `sub_140B5F590` → 重命名为 `migrate_legacy_deepseek_v4_flash_official_protocol`
- 为 `0x140b5f590` 与 `0x140a839d0` 加详细中文注释
- `<工具调用>` 完成，路径 `<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`

## 未完成项（诚实标注，非伪造闭合）
- 调用方 `sub_140B5D9D0`（疑为 mac `storage::load` 的 Windows 对应位置）**未做完整验证**、
  未重命名，仅记录调用链索引 `0x140b5e54c` 处调用一次。
- 迁移日志字符串 `0x141863ba9` 附近未在函数体内直接找到字节级 xref（可能因 Rust
  `fmt::Arguments` 字面量分段表结构未被 xref 工具直接捕获），标注为语义关联而非字节级证据闭环。
