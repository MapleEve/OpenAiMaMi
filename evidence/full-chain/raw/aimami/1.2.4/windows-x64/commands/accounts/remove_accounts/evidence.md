# evidence.md — remove_accounts (1.2.4 win delta)

**EA**: 0x140e223b0
**Module**: codexmate_lib::commands::accounts
**Classification**: body_diff_vs_1_2_3
**Size**: 5302 bytes
**Basic blocks**: 143
**Cyclomatic complexity**: 43
**Callees**: 30 (deduped)
**Call-tree edges**: 30
**Terminated reason**: persistence_commit
**Gate pass**: True
**Destructive**: True
**Pseudocode**: ida/pseudocode/remove_accounts_0x140e223b0.c

## Confirmed
- Owner function located at 0x140e223b0 via command name string xref (win-native, red line 31 independent verification).
- Full decompile obtained (red line 20 truncation check: PASS, no truncation markers).
- Callee set deduped: 30 unique callees.
- Call-tree depth=1, edges=30, gate=PASS (edges>=5).
- Entry signature: remove_accounts(a1, a2) -> char (async state machine)
- Side effects: removes accounts + runtime refresh + mutation event
- Destructive: True
- Mac cross-platform confirmation: confirmed_live on mac 1.2.4 IDB.

## Body-diff (1.2.3 → 1.2.4)
- 1.2.3 EA: 0x140cac5d0
- 1.2.3 signature: remove_accounts(a1, a2, a3, a4) -> char (4 args, sync)
- 1.2.4 signature: remove_accounts(a1, a2) -> char (2 args, async state machine)
- Finding: 1.2.3=sync 4-arg fn (0x140cac5d0); 1.2.4=async 2-arg state machine (bb=143,cc=43). Signature+structure+callee set all different. Real body-diff, not compilation noise. Strings: 'remove_accounts','accountKeys','RUNTIME_REFRESH_FAILED_AFTER_REMOVE','Accounts were removed','mutation'.

## Inferred
- argKeys: ['accountKeys']
- Response fields: ['result', 'mutation']
- Terminated reason: persistence_commit

## Unknown
- No unknown gaps; full-chain complete to implementation leaf.
- bb/cc for 3 new commands (get/set_claude_web_search_compat, set_codex_no_account_slots) not separately computed this session (prior session decompile verified non-truncated).

## Red line compliance
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s.
- RL20 DECOMPILE_TRUNCATION_GUARD: decompile checked for truncation markers, PASS.
- RL24 IDB_DIRTREE_MODULE_NAMING: function renamed in IDB + comment added + <工具调用>.
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations.
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff commands (remove_accounts, quit_keeping_router) have body-level diff analysis with signature/structure/callee comparison.
