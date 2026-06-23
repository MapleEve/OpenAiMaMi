# Evidence: set_codex_router_enabled — Windows x64 — AiMaMi 1.1.1

Session: wf-aimami111-delta-20260616 → wf-aimami111-delta-20260617 | Machine: <本地机器> | Date: 2026-06-17
Last-updated-session: wf-aimami111-delta-20260617
逆向分析 Server: <逆向工具通道> | Binary: AiMaMi 1.1.1 win64.exe (PE AMD64 stripped)

---

## Confirmed (≥12 required)

1. **Command string in dispatcher**: `aSetCodexRouter` @ `0x1412faa67` found via dispatcher decompile sub_140963A40@0x140963A40(size=4974B). String confirms IPC command routing entry point.

2. **Arg key "enabled" confirmed**: string literal `enabled` @ `0x1412faa7f` inside dispatcher, parsed by sub_1402FF1A0 (bool parser returning discriminant 3=Ok / 6=Err). Matches mac arg_types: {"enabled": "bool"}.

3. **TOML marker 1 confirmed in win binary**: `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` @ `0x1412e941c` — found via find_regex in win binary, inside set_codex_router_toml_section_write_win_sys@0x14067CA20. CLOSES dim4_blocker from 1.0.9.

4. **TOML marker 2 confirmed**: `# <<< aimami-relay codex-router top end` @ `0x1412ea00d` — same function.

5. **TOML marker 3+4 confirmed**: `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` @ `0x1412e9348` and `# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)` @ `0x1412e93e0` — confirmed in same function.

6. **TOML marker 5+6 confirmed**: `# <<< aimami-relay managed end` @ `0x1412e9fcb` and `# <<< aimami-relay managed end (top)` @ `0x1412e9fe9` — confirmed.

7. **Owner size parity**: `set_codex_router_toml_section_write_win_sys@0x14067CA20` = 7492B (0x1d44). Mac 1.1.1 owner = 7455B. Delta = 37B (0.5%) — within expected inter-platform variation. Strong size parity.

8. **WakeByAddressSingle in blocking body**: confirmed at `sub_14124A5D0` = `WakeByAddressSingle` called from `set_codex_router_enabled_blocking_body_win_sys@0x1401C59F0`. Confirms Windows-specific futex-based async coordination (BlockingTask::poll pattern).

9. **RwLock PoisonError string**: `"poisoned lock: another task failed inside"` present in blocking body@0x1401C59F0 — confirms Rust RwLock usage for relay state guard, identical semantic to mac pattern.

10. **relay_atomic_write_leaf_sys called from 3 paths**: (a) sub_14067BE90 (within TOML writer), (b) sync_codex_config_with_outcome_win_sys@0x1406CCC00, (c) apply_relay_config_section_win_sys@0x1406CFE30. Three independent FS write paths confirmed. side_effect=FS_write_codex_config_toml_atomic.

11. **quit_codex_poll_wait_sys_111@0x1407A39B0 called from orchestration**: confirmed in callees of sub_1406DD250. Callee chain: → `is_process_running_toolhelp_sys_111`, `quit_codex_send_signal_wakebya_sys_111`, `quit_codex_taskkill_imagename_sys_111`, `quit_codex_fallback_kill_sys_111`. Side_effect=OS_process_stop_codex confirmed.

12. **Rollback path confirmed**: `rollback_router_enabled_win_sys@0x140680220` (696B) calls `set_codex_router_toml_section_write_win_sys@0x140680339`. Searches config list by name (sub_141213640=strcmp, sub_140729FE0=list iter). Mac equivalent: rollback_router_enabled@0x1005d6fa0(1614B). Win version smaller (stripped vs debug, inline differences expected).

13. **IDB 4x A-level renames committed and idb_save confirmed**: renames set_codex_router_toml_section_write_win_sys, set_codex_router_enabled_blocking_body_win_sys, sync_codex_config_with_outcome_win_sys, apply_relay_config_section_win_sys all appended with session evidence and idb_save returned ok=true path=<本地路径>

14. **Arg keys "relaunch" + "apiLogin" in dispatcher**: strings @ `0x1412faa86` and `0x1412faa8e` confirmed from dispatcher decompile. Parsed by sub_1402FF330 (returns discriminant 3/6). These args absent from mac 1.1.1 manifest — may be 1.1.1 win extension or dispatcher-level routing for multi-command entry.

15. **Dispatcher callers**: sub_140A98A10@0x140A98A10(size=0x235) and sub_140AA5A00@0x140AA5A00(size=0x235) — two callers of dispatcher, both same size (likely command router slots, typical Tauri Win64 IPC registration pattern).

16. **Owner dispatcher pseudocode body confirmed** (session wf-aimami111-delta-20260617): Full HexRays decompile of `sub_140963A40@0x140963A40` (4974 B) obtained and written to `ida/pseudocode/owner_sub_140963A40.c`. Outer FSM resume discriminant at a1+3536 (4 stages). Arg parse order confirmed: manager(string) → enabled(bool via parse_bool_from_ipc_arg_sys@0x1402FF1A0) → relaunch(bool via sub_1402FF330@0x1402FF330) → apiLogin(bool via sub_1402FF330). State pack layout a1+2504..2835 confirmed. Coroutine dispatch via `sub_1408711F0@0x1408711F0`. Reply via `sub_14080C3C0@0x14080C3C0`. Error path via `run_codex_router_diagnostics_owner_sys@0x14006F4B0` (Tokio dispatcher lock, hashmap probe pattern). 34 direct callees confirmed.

17. **apiLogin coroutine true body confirmed** (session wf-aimami111-delta-20260617): Full HexRays decompile of `sub_14096A2D0@0x14096A2D0` (3696 B) obtained and written to `ida/pseudocode/apilogin_coroutine_sub_14096A2D0.c`. Command string `aSwitchAccountA="switch_account_and_restart_codex"@0x1412FA9F1`, arg key `aAccountkey_2="accountKey"@0x1412FAA11`. Parsed via `sub_1402FED40@0x1402FED40` (string IPC arg reader). Poll via `sub_140871EA0@0x140871EA0` (DIFFERENT from owner's sub_1408711F0). Spawn via `sub_140240810@0x140240810` (DIFFERENT from owner's sub_140240520). Finalizer via `sub_1408EF790@0x1408EF790`. FSM offsets at a1+4688/4672/4664/4656/4648 (separate coroutine state from owner). 26 direct callees confirmed.

18. **parse_bool_from_ipc_arg_sys body confirmed** (session wf-aimami111-delta-20260617): Full decompile of `0x1402FF1A0` (named `parse_bool_from_ipc_arg_sys`). Pattern: calls `sub_1402F9EB0` (IPC arg type check). If type discriminant==1 → direct bool copy to `a1+1`. If type!=1 → `sub_1412233C0` (string parse). Result packed at `a1+0` (discriminant 3=Ok, 6=Err) + `a1+1` (bool value). Confirms `enabled` arg parsing path.

19. **sub_1402FF330 body confirmed** (session wf-aimami111-delta-20260617): Full decompile of `0x1402FF330` (used for relaunch + apiLogin args). If `*(v7+480)==6` → wrap via `sub_1410A1DF0` (async-aware path). Else → `sub_14103A480` (direct extract), if type==1 returns bool directly, else `sub_1412233C0` string parse. Returns discriminant 3=Ok / 6=Err. Confirms relaunch and apiLogin are optional bool-or-absent args.

20. **run_codex_router_diagnostics_owner_sys body confirmed** (session wf-aimami111-delta-20260617): Full decompile of `0x14006F4B0`. Pattern: `_InterlockedCompareExchange8` (try-acquire spinlock). On success: probes `off_141899DC0` hashmap using hash `0x945CA2F02A2B6F44` with SIMD xmm search. On hit: calls vtable[3] (`sub_140031D80`). On fail: `sub_14124B1D0` (Tokio runtime check). Uses `WakeByAddressSingle` (already confirmed in `sub_14124A5D0`). Returns 0 if entry not found (fast path for dispatcher lock). This is the Tokio channel/dispatcher liveness check gate before command routing.

---

## Inferred (≥9 required)

1. **sub_1406DD250 is top-level async closure** (relay_manager_set_codex_router_enabled_orchestration_win_sys): calls quit_codex_poll_wait_sys_111 (stop Codex), sync_codex_config_with_outcome_win_sys (write config), apply_relay_config_section_win_sys (apply section), relay_get_active_providers_vec_sys, relay_providers_config_write_and_persist_sys, relay_post_login_state_sync_sys. All 6 calls map to mac side_effects: OS_process_stop_codex, FS_write_codex_config_toml_atomic, catalog_write_or_remove, tcp_proxy_liveness_check_or_spawn.

2. **sub_1406790D0 = config load/parse equivalent**: 33 callees, 54658 chars decompile output, contains "a Display implementation returned an error unexpectedly" (Rust fmt Display error). Called by both set_codex_router_toml_section_write_win_sys AND rollback_router_enabled_win_sys — shared config loader.

3. **Progress steps**: stopping_codex → rolling_back_threads → writing_config → starting_proxy → launching_codex → done. Inferred from orchestration call ordering in sub_1406DD250 + mac parity. Win binary stripped, no progress string literals found in orchestration body.

4. **codex-router-toggle-progress Tauri event**: present in mac@0x1011542f7. Not directly confirmed in win (stripped), but orchestration pattern identical — inferred emitted from orchestration context.

5. **tcp_proxy_liveness_check_or_spawn side effect**: sub_1406DD250 calls sub_1406DC5D0 and sub_1407169C0 — these are relay state management functions. Mac manifest lists tcp_proxy_liveness_check_or_spawn; win orchestration has corresponding call cluster.

6. **thread_migration_write side effect**: rollback_router_enabled_win_sys@0x140680220 rewrites TOML section after searching provider list — consistent with thread migration rollback semantics from mac manifest (thread_migration_write).

7. **catalog_write_or_remove side effect**: relay_providers_config_write_and_persist_sys@0x1406E6960 called from orchestration — handles provider catalog persistence, maps to catalog_write_or_remove side effect.

8. **virtual_auth_marker_write_or_cleanup side effect**: relay_post_login_state_sync_sys@0x1406E1750 called from orchestration — handles auth state synchronization; maps to virtual_auth_marker_write_or_cleanup from mac manifest.

9. **CodexRouterTogglePayload 15 fields**: inferred from mac 1.1.1 manifest (strong parity). Win binary stripped — response struct field name strings not found in win binary. Same codebase → same field layout expected.

10. **A-level rename size heuristic validity**: set_codex_router_toml_section_write_win_sys(7492B) / mac owner(7455B) = 1.005 ratio. For Rust PE vs Mach-O across same codebase version: ratios consistently <3% in prior win/mac pairs (observed across restart_codex, reveal_relay_api_key pairs). Ratio within threshold.

---

## Unknown / Accepted Unknown (≥6 required)

1. **relaunch + apiLogin args**: present in win 1.1.1 dispatcher but absent from mac 1.1.1 manifest. Unknown whether: (a) mac dispatcher also has these but mac session did not drill dispatcher this deeply, (b) win-specific addition, or (c) routing artifact from shared dispatcher entry for multiple commands. No mac evidence contradicts; accepted_unknown.

2. **Binary SHA256**: win 1.1.1 binary SHA256 not computed this session (逆向分析 server does not expose file hash directly). Recorded as "pending_sha256_win111". accepted_unknown for INDEX purposes — will need separate file hash step.

3. **codex-router-toggle-progress event VA in win**: mac has 0x1011542f7, win has no equivalent string literal found (stripped). Event name known from mac; win emission point unknown. accepted_unknown.

4. **payload win field order / layout**: 15 fields inferred from mac parity. If C5 team reorganized struct for win build (different Rust target feature flags, alignment differences), win layout could differ. No evidence of divergence; accepted_unknown.

5. **Secondary callers of orchestration (sub_1406DC5D0, sub_1406E85D0)**: two VAs call sync_codex_config_with_outcome_win_sys. Their roles not decompiled this session. May be additional async paths or error recovery. accepted_unknown.

6. **sub_1406790D0 full identity**: 33 callees, 54658-char decompile — config load function shared between TOML writer and rollback. Full call tree of this shared utility not traced to all leaves this session. accepted_unknown for depth beyond L3.

7. **ICF status of dispatcher callers**: sub_140A98A10 and sub_140AA5A00 both 0x235 bytes — identical size. May be ICF merge of two command handler slots or genuinely separate registration paths. Not decompiled; accepted_unknown.

8. **sub_1408711F0 vs sub_140871EA0 divergence**: owner uses sub_1408711F0(5 callees), apiLogin coroutine uses sub_140871EA0. Both are Tokio poll dispatchers but handle different future types. Inner signatures not decompiled this session; semantics inferred from context. accepted_unknown pending deeper callee trace.

9. **sub_140240520 vs sub_140240810 divergence**: owner uses sub_140240520 to spawn async task, apiLogin uses sub_140240810. Different runtime task-spawn wrappers (different future type or priority). Not decompiled this session. accepted_unknown.

10. **apiLogin coroutine ownership boundary**: sub_14096A2D0 is referenced by owner dispatcher xref chain; unclear if it is invoked as a nested coroutine poll or as a separate Tauri command entry point sharing dispatcher routing logic. String evidence ("switch_account_and_restart_codex") suggests separate command, but both strings appear in same dispatcher decompile (sub_140963A40). Routing mechanism accepted_unknown pending caller xref decompile.

## Gate-Report Supplement (wf-aimami111-delta-20260617)

- dim1 (pseudocode): UPDATED — owner_sub_140963A40.c + apilogin_coroutine_sub_14096A2D0.c written to ida/pseudocode/; pseudocode-manifest.jsonl indices 8+9 appended
- dim2 (call-tree): existing set_codex_router_enabled.jsonl retained; callees of owner (34) and apiLogin coroutine (26) confirmed live this session
- dim3 (evidence): this file — 20 Confirmed / 10 Inferred / 10 Unknown
- dim4 (IDB inline): renames from wf-aimami111-delta-20260616 retained; new session will add 2 renames (owner dispatcher + apiLogin coroutine) and idb_save
- dim5 (interface): interfaces/ dir — not modified this session
- dim6 (impl boundary): N/A — production role
