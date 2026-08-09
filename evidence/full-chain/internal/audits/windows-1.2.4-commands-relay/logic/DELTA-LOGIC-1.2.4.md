# DELTA-LOGIC-1.2.4 — Windows commands-relay 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/windows-x64/commands/relay/` 下 3 个 delta command raw leaf（evidence.md + call-tree.json + interface-report.json + ida/pseudocode/*.c）。只读消费，不连 IDA、不逆二进制、不臆断。

## delta command 一览

| 命令 | EA | 分类 | callees | edges | 终止原因 | 破坏性 | argKeys | responseFields |
|---|---|---|---|---|---|---|---|---|
| `set_claude_web_search_compat` | 0x140e01580 | new_in_1_2_4 | 28 | 28 | persistence_commit | 否 | ['enabled'] | ['success'] |
| `set_codex_no_account_slots` | 0x140e2de30 | new_in_1_2_4 | 29 | 29 | persistence_commit | 否 | ['slots'] | ['success'] |
| `quit_keeping_router` | 0x140173f00 | body_diff_vs_1_2_3 | 14 | 14 | error_return | 否 | [] | ['quit_decision'] |

## 逐命令行为摘要

### set_claude_web_search_compat

- **EA**: 0x140e01580
- **模块**: codexmate_lib::commands::relay
- **分类**: new_in_1_2_4
- **入口签名**: set_claude_web_search_compat(a1, a2) -> char
- **副作用**: writes config (persistence)
- **破坏性**: 否
- **调用树**: edge=28, 终止=persistence_commit, gate=PASS
- **伪代码**: `ida/pseudocode/set_claude_web_search_compat_0x140e01580.c`

### set_codex_no_account_slots

- **EA**: 0x140e2de30
- **模块**: codexmate_lib::commands::relay
- **分类**: new_in_1_2_4
- **入口签名**: set_codex_no_account_slots(a1, a2) -> char
- **副作用**: writes config (persistence)
- **破坏性**: 否
- **调用树**: edge=29, 终止=persistence_commit, gate=PASS
- **伪代码**: `ida/pseudocode/set_codex_no_account_slots_0x140e2de30.c`

### quit_keeping_router

- **EA**: 0x140173f00
- **模块**: codexmate_lib::commands::relay
- **分类**: body_diff_vs_1_2_3
- **入口签名**: quit_keeping_router(a1) -> __int64 (async state machine)
- **副作用**: may quit app while keeping router enabled
- **破坏性**: 否
- **调用树**: edge=14, 终止=error_return, gate=PASS
- **伪代码**: `ida/pseudocode/quit_keeping_router_0x140173f00.c`
- **Body-diff (1.2.3→1.2.4)**: 1.2.3=sync 3-arg fn (0x140485420, ~47 lines, linear if/else); 1.2.4=async 1-arg state machine (bb=40,cc=11). Signature+structure+callee set all different. Strings: 'quit_keeping_router','app','manager'. 1.2.3 calls sub_14084FB80/sub_1403565C0/sub_1401B4A10; 1.2.4 calls sub_1401B1BF0/sub_1407A09A0/sub_140B90440/sub_1406CE1D0.
  - 1.2.3 EA: 0x140485420
  - 1.2.4 EA: 0x140173f00

## 破坏性副作用（全部来自真码 destructive 标注，去重）

本 bundle 无破坏性副作用命令。

## 红线合规
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s（underlying decompile sessions）。
- RL20 DECOMPILE_TRUNCATION_GUARD: 所有 delta command decompile checked for truncation markers, PASS。
- RL24 IDB_DIRTREE_MODULE_NAMING: 函数 renamed in IDB + comment added + <工具调用>。
- RL25 LIVE_REFERENCE_PARITY_GATE: 真机未对照，已在 gate-report.json unknowns 中声明。
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations。
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff 命令（remove_accounts, quit_keeping_router）有 body-level diff analysis with signature/structure/callee comparison。