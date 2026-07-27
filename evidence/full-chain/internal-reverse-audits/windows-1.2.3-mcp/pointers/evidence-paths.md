# Evidence Pointers — windows-1.2.3-mcp

所有路径均相对 ``（本会话按红线 16 全程硬编码 SMB 绝对路径写盘，未使用 env-var 表达式）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend wrapper，本会话读完的 4 个 ground-truth 具名文件）

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/load_mcp_servers_0x1401788e0.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/upsert_mcp_server_0x140177050.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/set_mcp_server_enabled_0x140176630.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/remove_mcp_server_0x140175e20.c`

## raw evidence（backend core，16 个文件——15 个原有 + 1 个本会话新增）

原有 15 个（`win-app-inventory-gapfill-leaf`，产出于 2026-07-24T13:20:34Z，本会话首次蒸馏读完）：
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_14034CAE0_0x14034cae0.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140472C30_0x140472c30.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140983900_0x140983900.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E14D0_0x1409e14d0.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E1880_0x1409e1880.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E1D30_0x1409e1d30.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E5800_0x1409e5800.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E5DC0_0x1409e5dc0.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E6250_0x1409e6250.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E74F0_0x1409e74f0.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_1409E7A10_0x1409e7a10.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140F3FD00_0x140f3fd00.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140F3FE00_0x140f3fe00.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140FC6D90_0x140fc6d90.c`
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/sub_140FC6EA0_0x140fc6ea0.c`

新增 1 个（本会话经 live IDA 发现+反编译+落盘）：
- `raw/aimami/1.2.3/windows-x64/mcp/ida/pseudocode/upsert_mcp_server_0x1409e86f0.c`

## raw evidence（frontend，复用 macOS 既有产出，未重复劳动）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1 — McpPage 完整逆向（组件树/状态模型/交互表），跨平台共享
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/mcp-page-LchViioT.js` — 本会话核实存在，与 mac 侧同名文件（未做逐字节 diff，仅核实文件名+路径存在）
- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（131 条，4 条 mcp-* 命令本会话独立核实）

## 历史基线（1.0.9，仅供参考指针，非 1.2.3 证据）

- `internal-reverse/audits/windows-1.0.9-mcp/` — legacy schema，4/4 readyToImplement=true，字段集不含 transport/url/headers/environment，预生效于当前 full_leaf_100_definition_v2 规则前，未重新验证

## macOS 1.2.3 对照包（独立证据，仅 SYSTEM-DIFF.md 中做交叉引用叙述，未用于推断 win 覆盖率）

- `internal-reverse/audits/macos-1.2.3-mcp/`

## live IDA 会话记录（本会话，win host <host>:13337，工具 `tools/IDA CLI`）

1. `server_health {}` → `status=ok, uptime_sec=118766.14, module="AiMaMi.1.2.3 win64.exe", IDA decompiler_ready=true, strings_cache_ready=true(29581条)` （满足红线17前置条件）
2. `func_query {"queries":["core::mcp","commands::mcp"]}` → 返回值疑似忽略过滤条件返回全量函数表，未进一步追查（时间预算限制）
3. `search_text {"pattern":"mcp_servers"}` → 首次超时（30s 客户端超时截断），重试一次（60s）→ **服务端 60s 超时**（`ida_mcp.sync.IDASyncError: Tool timed out after 60.00s`），按红线17"重试1次仍失败即停"处理，未继续强行重试
4. `find_regex {"pattern":"mcp_servers"}` → 成功，6 处字符串命中（`0x1416cd56e`="load_mcp_servers", `0x1417a4daf`="mcp_servers.", `0x1417a74f0`/`0x1417a7549`/`0x1417a755f`="\r[mcp_servers.", `0x1417a76e0`="mcp_servers"）
5. `xrefs_to {"addrs":["0x1417a76e0"]}` → 3 处引用，全部来自 `sub_1409E7A10`（0x1409e7a10）
6. `xrefs_to {"addrs":["0x1417a4daf"]}` → 0 处引用（编译器内联为立即数比较，非 rodata 指针加载，符合 `parse_mcp_section_header` 的内联 XOR 实现观察）
7. `xrefs_to {"addrs":["0x1417a74f0","0x1417a7549","0x1417a755f","0x1416cd56e"]}` → 前三者全部指向新函数 `upsert_mcp_server_0`（0x1409e86f0，size 0x1290）；后者指向 `load_mcp_servers`（0x1401788e0，size 0x388，已知 wrapper）
8. `decompile {"addr":"0x1409e86f0"}` → 返回完整伪代码（31513 字符，含逐指令地址注释），首行已有前序会话遗留的跨平台签名注释 `// win 1.2.3 | = mac codexmate_lib::core::mcp::upsert_mcp_server | 跨平台字符串签名匹配(名↔函数一致)`；本会话核实此地址此前不在 `raw/` 磁盘上也不在 `INDEX.jsonl` 中，遂落盘为第 16 个 core 文件并追加 INDEX.jsonl 条目

## INDEX.jsonl 命中/追加

- 既有：`aimami/1.2.3/windows-x64/mcp/win-app-inventory-gapfill-leaf`（15 地址，2026-07-24T13:20:34Z）
- **本次追加**（红线 6，append-only）：`aimami/1.2.3/windows-x64/mcp/upsert-mcp-server-0-live-discovery-20260725`（1 地址 `0x1409e86f0`，本会话产出）
- **本次追加**（红线 6，append-only）：`aimami/1.2.3/windows-x64/mcp/cluster-distilled`（本次蒸馏产出的 canonical 包指针条目，指向 `internal-reverse/audits/windows-1.2.3-mcp/README.md`）
