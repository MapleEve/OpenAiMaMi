# WIN-DECOMPILE-CLOSEOUT-1.2.3 — Windows relay-core decompile 工具限制与补完记录

来源：`goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md` §④/⑤。

## A. `decompile` 工具截断上限（实测）

- 小函数（如 `0x1406952e0`，机器码 207B）：一次返回完整伪码（1203 字符），无截断。
- 大函数（如 `0x140a28e20`，机器码 40292B）：`code` 字段被服务端硬截断在 999 字符（末尾追加 `"... [N chars total]"`，`code` 字段总长恒 1024）。多次不同大小函数复测，截断点稳定，与函数体积无关——**只要真实伪码超过约 999 字符就必被截断**。
- `decompile` 的 `inputSchema` 无 offset/分页参数，无法规避。**结论：这是 MCP 服务端硬截断，非超时/网络问题。**

## B. 绕过方法：`disasm` 分块分页

- `disasm` 有 `offset`/`max_instructions`/`include_total` 参数，理论支持分页。
- **实测暗坑**：`max_instructions≥500` 时服务端静默把返回压缩到 10 行，但 `cursor.next` 仍按"好像给了 500 行"计算下一 offset——不报错，会误导调用方以为拿到完整分页。**安全用法：`max_instructions≤300`。**
- 用 `disasm(offset=0, max_instructions=1, include_total=true)` 先拿 `total_instructions`，再以 `max_instructions=250` 循环翻页拼接，可拿到完整无截断反汇编（非 Hex-Rays 伪码，但地址/指令/调用目标 100% 完整）。

## C. 本轮实际补完（owner-map 177 行范围）

两批合计 15 个函数用"decompile 部分伪码 + disasm 分块反汇编续接"方法补完（`codex_mutation`×2、`managed_blocks`×2、`proxy_server`×2、`codex_mutation::run`×1、`codex_thread_visibility`×4、`proxy_server::error_hint_0`×1、`codex_diagnostic::fix_thread_poisoned_instructions`×1、`translator`×2）。**范围说明**：仅覆盖 `relay-core/owner-map.jsonl` 的 177 行；`commands/relay` 23 个 `.c` 文件的同等严格核验属另一轮工作，未在本轮 scope 内逐个复核。

## D. 三轮终审（文件系统实测，不信摘要自己数）

- Windows `windows-x64/**/ida/pseudocode/*.c` 全量 **311** 个文件，去重后 **208** 个不同地址。
- 103 个重复文件：23 组"纯截断桩（1023/1024B）+ 完整孪生（57KB~464KB）"配对（旧截断桩历史残留，逐组人工验证均有完整孪生）；5 组是 `version-delta/` 目录的版本差异摘录副产物，非缺口。
- 截断/占位守卫复核（全量 311 文件 `grep -E "chars total|truncat|TRUNCAT"`）：138 处初筛，逐一分拣后 **0/311 存在"无孪生的真实截断缺口"**。

## 工具能力小结

- `decompile`：硬截断 999 字符，无分页参数，MCP 服务端行为限制。
- `disasm`：有分页但 `max_instructions>~300` 静默丢数据且 `cursor` 汇报不诚实——已知坑，后续复用需牢记。
- `func_query`/`search_text` 在本 IDB 上表现不可靠（详见 macOS 包 gate-report.json unknowns，同一工具异常两平台均出现）。
