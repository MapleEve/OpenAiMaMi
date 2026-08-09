# DELTA-LOGIC-1.2.4 — Windows platform-process 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/windows-x64/platform/process/` 下 1 个 delta command raw leaf（evidence.md + call-tree.json + interface-report.json + ida/pseudocode/*.c）。只读消费，不连 IDA、不逆二进制、不臆断。

## delta command 一览

| 命令 | EA | 分类 | callees | edges | 终止原因 | 破坏性 | argKeys | responseFields |
|---|---|---|---|---|---|---|---|---|
| `codex_bundled_cli_path` | 0x140a19ac0 | new_in_1_2_4 | 4 | 4 | external_call_recorded | 否 | [] | ['path_or_null'] |

## 逐命令行为摘要

### codex_bundled_cli_path

- **EA**: 0x140a19ac0
- **模块**: codexmate_lib::platform::process
- **分类**: new_in_1_2_4
- **入口签名**: codex_bundled_cli_path(a1, a2, a3) -> __int64
- **副作用**: none (read-only path resolution)
- **破坏性**: 否
- **调用树**: edge=4, 终止=external_call_recorded, gate=PASS
- **伪代码**: `ida/pseudocode/codex_bundled_cli_path_0x140a19ac0.c`

## 破坏性副作用（全部来自真码 destructive 标注，去重）

本 bundle 无破坏性副作用命令。

## 红线合规
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s（underlying decompile sessions）。
- RL20 DECOMPILE_TRUNCATION_GUARD: 所有 delta command decompile checked for truncation markers, PASS。
- RL24 IDB_DIRTREE_MODULE_NAMING: 函数 renamed in IDB + comment added + <工具调用>。
- RL25 LIVE_REFERENCE_PARITY_GATE: 真机未对照，已在 gate-report.json unknowns 中声明。
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations。
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff 命令（remove_accounts, quit_keeping_router）有 body-level diff analysis with signature/structure/callee comparison。