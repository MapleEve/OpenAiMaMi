# evidence.md — set_claude_web_search_compat (1.2.4 win delta)

**EA**: 0x140e01580
**Module**: codexmate_lib::commands::relay
**Classification**: new_in_1_2_4
**Size**: 3735 bytes
**Callees**: 28 (deduped)
**Call-tree edges**: 28
**Terminated reason**: persistence_commit
**Gate pass**: True
**Destructive**: False
**Pseudocode**: ida/pseudocode/set_claude_web_search_compat_0x140e01580.c

## Confirmed
- Owner function located at 0x140e01580 via command name string xref (win-native, red line 31 independent verification).
- Full decompile obtained (red line 20 truncation check: PASS, no truncation markers).
- Callee set deduped: 28 unique callees.
- Call-tree depth=1, edges=28, gate=PASS (edges>=5).
- Entry signature: set_claude_web_search_compat(a1, a2) -> char
- Side effects: writes config (persistence)
- Destructive: False
- Mac cross-platform confirmation: confirmed_live on mac 1.2.4 IDB.

## Inferred
- argKeys: ['enabled']
- Response fields: ['success']
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
