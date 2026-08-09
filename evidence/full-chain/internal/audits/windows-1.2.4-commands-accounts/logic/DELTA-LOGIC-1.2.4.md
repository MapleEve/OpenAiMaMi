# DELTA-LOGIC-1.2.4 — Windows commands-accounts 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/windows-x64/commands/accounts/` 下 1 个 delta command raw leaf（evidence.md + call-tree.json + interface-report.json + ida/pseudocode/*.c）。只读消费，不连 IDA、不逆二进制、不臆断。

## delta command 一览

| 命令 | EA | 分类 | callees | edges | 终止原因 | 破坏性 | argKeys | responseFields |
|---|---|---|---|---|---|---|---|---|
| `remove_accounts` | 0x140e223b0 | body_diff_vs_1_2_3 | 30 | 30 | persistence_commit | 是 | ['accountKeys'] | ['result', 'mutation'] |

## 逐命令行为摘要

### remove_accounts

- **EA**: 0x140e223b0
- **模块**: codexmate_lib::commands::accounts
- **分类**: body_diff_vs_1_2_3
- **入口签名**: remove_accounts(a1, a2) -> char (async state machine)
- **副作用**: removes accounts + runtime refresh + mutation event
- **破坏性**: 是
- **调用树**: edge=30, 终止=persistence_commit, gate=PASS
- **伪代码**: `ida/pseudocode/remove_accounts_0x140e223b0.c`
- **Body-diff (1.2.3→1.2.4)**: 1.2.3=sync 4-arg fn (0x140cac5d0); 1.2.4=async 2-arg state machine (bb=143,cc=43). Signature+structure+callee set all different. Real body-diff, not compilation noise. Strings: 'remove_accounts','accountKeys','RUNTIME_REFRESH_FAILED_AFTER_REMOVE','Accounts were removed','mutation'.
  - 1.2.3 EA: 0x140cac5d0
  - 1.2.4 EA: 0x140e223b0

## 破坏性副作用（全部来自真码 destructive 标注，去重）

- **remove_accounts**: removes accounts + runtime refresh + mutation event

## 红线合规
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s（underlying decompile sessions）。
- RL20 DECOMPILE_TRUNCATION_GUARD: 所有 delta command decompile checked for truncation markers, PASS。
- RL24 IDB_DIRTREE_MODULE_NAMING: 函数 renamed in IDB + comment added + <工具调用>。
- RL25 LIVE_REFERENCE_PARITY_GATE: 真机未对照，已在 gate-report.json unknowns 中声明。
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations。
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff 命令（remove_accounts, quit_keeping_router）有 body-level diff analysis with signature/structure/callee comparison。