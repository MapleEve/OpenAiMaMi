# evidence.md — quit_keeping_router (1.2.4 win delta)

**EA**: 0x140173f00
**Module**: codexmate_lib::commands::relay
**Classification**: body_diff_vs_1_2_3
**Size**: 1176 bytes
**Basic blocks**: 40
**Cyclomatic complexity**: 11
**Callees**: 14 (deduped)
**Call-tree edges**: 14
**Terminated reason**: error_return
**Gate pass**: True
**Destructive**: False
**Pseudocode**: ida/pseudocode/quit_keeping_router_0x140173f00.c

## Confirmed
- Owner function located at 0x140173f00 via command name string xref (win-native, red line 31 independent verification).
- Full decompile obtained (red line 20 truncation check: PASS, no truncation markers).
- Callee set deduped: 14 unique callees.
- Call-tree depth=1, edges=14, gate=PASS (edges>=5).
- Entry signature: quit_keeping_router(a1) -> __int64 (async state machine)
- Side effects: may quit app while keeping router enabled
- Destructive: False
- Mac cross-platform confirmation: confirmed_live on mac 1.2.4 IDB.

## Body-diff (1.2.3 → 1.2.4)
- 1.2.3 EA: 0x140485420
- 1.2.3 signature: quit_keeping_router_0(a1, a2, a3) -> _QWORD* (3 args, sync, ~47 lines)
- 1.2.4 signature: quit_keeping_router(a1) -> __int64 (1 arg, async state machine, bb=40)
- Finding: 1.2.3=sync 3-arg fn (0x140485420, ~47 lines, linear if/else); 1.2.4=async 1-arg state machine (bb=40,cc=11). Signature+structure+callee set all different. Strings: 'quit_keeping_router','app','manager'. 1.2.3 calls sub_14084FB80/sub_1403565C0/sub_1401B4A10; 1.2.4 calls sub_1401B1BF0/sub_1407A09A0/sub_140B90440/sub_1406CE1D0.

## Inferred
- argKeys: []
- Response fields: ['quit_decision']
- Terminated reason: error_return

## Unknown
- No unknown gaps; full-chain complete to implementation leaf.
- bb/cc for 3 new commands (get/set_claude_web_search_compat, set_codex_no_account_slots) not separately computed this session (prior session decompile verified non-truncated).

## Red line compliance
- RL17 <门控>: server_health confirmed module=AiMaMi 1.2.4 win64.exe / <反编译器>_ready / uptime>30s.
- RL20 DECOMPILE_TRUNCATION_GUARD: decompile checked for truncation markers, PASS.
- RL24 IDB_DIRTREE_MODULE_NAMING: function renamed in IDB + comment added + <工具调用>.
- RL31 IDB_ANNOTATION_NOT_SELF_AUTHENTICATING: owner EA independently verified via live IDA decompile/callees, not chained from prior IDB annotations.
- RL32 SAME_NAME_BODY_DIFF_SCREENING: body-diff commands (remove_accounts, quit_keeping_router) have body-level diff analysis with signature/structure/callee comparison.
