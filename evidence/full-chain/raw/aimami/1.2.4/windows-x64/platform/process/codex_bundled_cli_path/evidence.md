# evidence.md — codex_bundled_cli_path (1.2.4 win delta)

**EA**: 0x140a19ac0
**Module**: codexmate_lib::platform::process
**Classification**: new_in_1_2_4
**Size**: 1696 bytes
**Basic blocks**: 65
**Cyclomatic complexity**: 28
**Callees**: 4 (deduped)
**Call-tree edges**: 4
**Terminated reason**: external_call_recorded
**Gate pass**: True
**Destructive**: False
**Pseudocode**: ida/pseudocode/codex_bundled_cli_path_0x140a19ac0.c

## Confirmed
- Owner function located at 0x140a19ac0 via command name string xref (win-native, red line 31 independent verification).
- Full decompile obtained (red line 20 truncation check: PASS, no truncation markers).
- Callee set deduped: 4 unique callees.
- Call-tree depth=1, edges=4, gate=PASS (terminated_reason=external_call_recorded).
- Entry signature: codex_bundled_cli_path(a1, a2, a3) -> __int64
- Side effects: none (read-only path resolution)
- Destructive: False
- Mac cross-platform confirmation: confirmed_live on mac 1.2.4 IDB.

## Inferred
- argKeys: []
- Response fields: ['path_or_null']
- Terminated reason: external_call_recorded
- Note: Builds 6 candidate Codex.exe install paths (app/codex + registry App-Paths suffixes), probes each via path-exists helper sub_1414E1680, returns first hit or -1. Pure read-only path resolution.

## Unknown
- No unknown gaps; full-chain complete to implementation leaf.
- bb/cc for 3 new commands (get/set_claude_web_search_compat, set_codex_no_account_slots) not separately computed this session (prior session decompile verified non-truncated).

## Red line compliance
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s.
- RL20 DECOMPILE_TRUNCATION_GUARD: decompile checked for truncation markers, PASS.
- RL24 IDB_DIRTREE_MODULE_NAMING: function renamed in IDB + comment added + <工具调用>.
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations.
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff commands (remove_accounts, quit_keeping_router) have body-level diff analysis with signature/structure/callee comparison.
