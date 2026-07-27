# FULL-CHAIN-1.2.3 — Windows-x64 mcp 端到端调用链

来源：本会话读完的 4 个 wrapper 文件（`raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/{load_mcp_servers,upsert_mcp_server,set_mcp_server_enabled,remove_mcp_server}_0x*.c`）+ 16 个 core 文件（`raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/*.c`，15 个原有 + 1 个本会话经 live IDA 新增捕获）+ live IDA `find_regex`/`xrefs_to`/`decompile` 会话记录。

## 通用 wrapper 模式（4 个命令共享）

```
前端 invoke(command_name, args)
  → win native Tauri command handler（具名函数，ground-truth via command-name string xref）
      - sub_141684120 拷贝 Tauri 调用上下文（520+400 字节两段）
      - sub_140003640 获取 "repo"(4B) 资源锁；失败 → 走统一错误信封路径
      - sub_1400048C0 获取 "mutationgate"(12B) 资源锁（仅 mutating 命令：upsert/set_enabled/remove；
        load_mcp_servers 只读，未观察到此锁获取步骤）；失败 → 同上
      - 按声明顺序，用专用 helper（sub_1409757B0=普通字符串字段 / sub_140973410=可选字符串字段 /
        sub_1401BCE80=bool 字段 / sub_1401BBA60=Vec<(String,String)>-like 字段，如 env/headers）
        依次从调用上下文按字面量 key 名抽取每个入参字段，每步失败都走同一套错误信封短路径
      - 全部字段抽取成功后，调用共享 trampoline
        sub_14047E370（return path）或 sub_140435080/sub_1404349E0（success path）
        统一分发+错误信封转换（未在本 4 个 wrapper 文件之外独立追踪 trampoline 内部实现）
      - sub_140014270(v_ctx_buffer) 收尾，释放临时缓冲
  → 返回 CoreEnvelope<T> 或 CoreError（信封结构与转换逻辑未独立解析）
```

**叶子（wrapper 层）**：两把命名资源锁的获取路径本身（`"repo"`/`"mutationgate"`）——这两把锁的底层实现（是否对应 mac 的 `CodexMutationGate`，或是否是不同粒度的两把独立锁）未独立核实，标 Unknown。

## 1. load_mcp_servers（唯一只读命令）

```
wrapper（0x1401788e0，ground-truth 具名，无字段抽取——确认无入参，与 mac 一致）
  → 仅获取 "repo" 锁（未观察到 "mutationgate" 锁获取步骤，符合只读命令预期）
  → [core 侧实现未在 16 个 core 文件中找到确认对应项 -- Unknown]
  → 返回 CoreEnvelope<Vec<McpServerSummary>> 或 CoreError（信封结构未独立解析）
```

**核心实现（core::mcp::load_mcp_servers 的 win 对应函数）身份 Unknown**——16 个 core 文件均未被判定为此角色的高/中置信度匹配对象。

## 2. upsert_mcp_server（唯一有完整 wrapper+core ground-truth 证据链的命令）

```
wrapper（0x140177050，ground-truth 具名）
  → "repo" 锁 → "mutationgate" 锁
  → 依次抽取 8 个字段（ground-truth 字面量 key）：
      name(4B) → transport(9B) → enabled(7B) → command(7B) → args(4B) → url(3B) → headers(7B) → environment(11B)
      （每步都有独立的成功/失败分支，失败即走统一错误信封短路径；观察到的抽取顺序即代码里
      条件分支的先后顺序，不代表字段在 DTO struct 里的声明顺序，未独立核实两者是否一致）
  → sub_14096D030(...) 把 8 个已抽取字段打包传递（本会话未独立解析此函数是否直接调用
    upsert_mcp_server_0，还是先构造一个中间 DTO struct 再走间接分发；trampoline/dispatch
    机制内部未追踪）
  → [推断路径，未逐跳确认] core::mcp::upsert_mcp_server 的 win 实现
      upsert_mcp_server_0（0x1409e86f0，ground-truth 具名，本会话新增捕获落盘）
      - 内部引用 3 处不同的 "\r[mcp_servers.<name>" 段落模板字符串变体（地址 0x1417a74f0/
        0x1417a7549/0x1417a755f），推断对应新增段落时的格式化分支（具体触发条件未逐分支解析）
      - 大量 SIMD HashMap 操作辅助调用（结构上与其余 core 文件里反复出现的
        HashMap::insert 风格一致，是否为同一份代码或不同单态化实例未独立核实）
      - 800 行反编译体（含逐指令地址注释），仅核实首尾结构完整（非截断）+ 关键字符串引用位置，
        未逐分支追踪到具体的 fs::read/write 或 toml_edit 调用叶子（dim3 partial）
  → 返回 CoreEnvelope<Vec<McpServerSummary>> 或 CoreError
```

**叶子**：未逐跳确认到具体 fs/toml_edit 调用（dim3 partial，与 mac 包"叶子=std::fs::DirBuilder::_create/atomic_write"级别的确定性不同）。

**重要澄清**：本会话最初（在发现 `upsert_mcp_server_0` 之前）曾将 `sub_1409E1D30`（1284 行，位于原 15 文件census中）临时判定为 upsert_mcp_server 的候选实现，理由是其内部包含对 `transport` 字段（9B 字面量 key，内联比较）的 stdio/http/sse 三态解析逻辑。发现 `upsert_mcp_server_0` 具有 IDB 既有跨平台签名注释后，`sub_1409E1D30` 的身份判定已降级为"中等置信度，未具名确认"——它与 `upsert_mcp_server_0` 的确切关系（是否为其调用的内部辅助函数，或是共享的独立转换函数）本会话**未解析**，不得假设两者是同一函数或有直接调用关系。

## 3. set_mcp_server_enabled

```
wrapper（0x140176630，ground-truth 具名）
  → "repo" 锁 → "mutationgate" 锁
  → 依次抽取 2 个字段（ground-truth）：name(4B) → enabled(7B)
  → [core 侧实现未在 16 个 core 文件中找到确认对应项 -- Unknown]
  → 返回 CoreEnvelope<Vec<McpServerSummary>> 或 CoreError
```

`editable_mcp_server_table`（`sub_1409E7A10`，高置信度，引用字面量 `"mcp_servers"`(11B) + 错误信息 `"mcp_servers must be a TOML table"`）在结构上与 mac 侧同名函数的"定位/创建可编辑 Table"职责一致，**很可能被 set_mcp_server_enabled 的核心实现调用**，但本会话未找到 set_mcp_server_enabled 核心实现本身（该函数会调用 editable_mcp_server_table 只是共享的通用 helper，不代表 set_mcp_server_enabled 命令特有的 "disabled" 字段写入逻辑已被定位）。

## 4. remove_mcp_server

```
wrapper（0x140175e20，ground-truth 具名）
  → "repo" 锁 → "mutationgate" 锁
  → 抽取 1 个字段（ground-truth）：name(4B)
  → [core 侧实现未在 16 个 core 文件中找到确认对应项 -- Unknown]
  → 返回 CoreEnvelope<Vec<McpServerSummary>> 或 CoreError
```

`insert_mcp_block`（`sub_1409E1880`，高置信度，引用 55 字节 managed marker 字符串）在结构上与 mac 侧同名函数的"按 marker 定位插入点、Vec 元素级插入/移除"职责一致，remove 操作理论上也需要类似的段落定位+移除逻辑，但**mac 侧的 `core::mcp::remove_mcp_server` 本身是 1.2.3 NEW-delta 新增函数**（非沿用旧逻辑），因此不能假设 win 侧的 remove 逻辑就是 `insert_mcp_block` 本身或其简单变体——核心实现身份仍是 Unknown。

## 共性观察（诚实版，不照抄 mac 包结论）

- 4 个 wrapper 命令共享统一的锁获取+字段抽取+trampoline 分发骨架，这一层的证据是 ground-truth 且完整。
- 只有 `upsert_mcp_server` 一条命令在 core 层拿到了 ground-truth 身份确认（`upsert_mcp_server_0`），且其内部逻辑*尚未*逐跳追踪到具体文件系统/TOML 叶子操作。
- 其余 3 条命令（`load_mcp_servers`/`set_mcp_server_enabled`/`remove_mcp_server`）的核心实现身份均为 Unknown——本会话发现的 7 个高置信度辅助函数（`unquote_toml`/`insert_mcp_block`/`parse_mcp_document`/`strip_toml_comment`/`replace_string_table`/`parse_mcp_section_header`/`editable_mcp_server_table`）是**跨命令共享的文本/TOML 处理工具函数**，不是任何单个命令独有的"核心 mutation/read 实现"，不得把"找到了共享 helper"等同于"找到了该命令的核心实现"。
- `managed-block marker`（55 字节，`# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)`）与 `mcp_servers.`（12 字节前缀）两个跨平台常量在 win 侧均已独立确认存在，逻辑与 mac 侧描述一致。
- 本会话的最大方法论发现：`upsert_mcp_server_0` 在 IDB 中早已被前序会话具名签名匹配，却从未被写入 raw/ 或记录进 INDEX.jsonl——说明"IDA 内已分析"与"已落盘蒸馏"之间存在系统性缺口，原 15 地址 census 并不穷尽，本包据此把 dim2 诚实降级为 `partial`。
