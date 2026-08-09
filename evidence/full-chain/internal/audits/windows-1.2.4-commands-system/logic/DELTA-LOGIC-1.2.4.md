# DELTA-LOGIC-1.2.4 — Windows commands-system 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/windows-x64/commands/system/` 下 1 个 delta command raw leaf（evidence.md + call-tree.json + interface-report.json + ida/pseudocode/*.c）。只读消费，不连 IDA、不逆二进制、不臆断。

## delta command 一览

| 命令 | EA | 分类 | callees | edges | 终止原因 | 破坏性 | argKeys | responseFields |
|---|---|---|---|---|---|---|---|---|
| `get_claude_web_search_compat` | 0x140156ef0 | new_in_1_2_4 | 12 | 12 | None | 否 | [] | ['web_search_compat_state'] |

## 逐命令行为摘要

### get_claude_web_search_compat

- **EA**: 0x140156ef0
- **模块**: codexmate_lib::commands::system
- **分类**: new_in_1_2_4
- **入口签名**: get_claude_web_search_compat(a1) -> __int64
- **副作用**: none (read-only getter)
- **破坏性**: 否
- **调用树**: edge=12, 终止=None, gate=PASS
- **伪代码**: `ida/pseudocode/get_claude_web_search_compat_0x140156ef0.c`

## 破坏性副作用（全部来自真码 destructive 标注，去重）

本 bundle 无破坏性副作用命令。

## 红线合规
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s（underlying decompile sessions）。
- RL20 DECOMPILE_TRUNCATION_GUARD: 所有 delta command decompile checked for truncation markers, PASS。
- RL24 IDB_DIRTREE_MODULE_NAMING: 函数 renamed in IDB + comment added + <工具调用>。
- RL25 LIVE_REFERENCE_PARITY_GATE: 真机未对照，已在 gate-report.json unknowns 中声明。
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations。
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff 命令（remove_accounts, quit_keeping_router）有 body-level diff analysis with signature/structure/callee comparison。