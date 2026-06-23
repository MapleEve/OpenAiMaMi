# load_relay_state — Call Tree (windows-x64, 1.1.1)
<!-- session=<审计会话> | machine=<本地机器> | producer -->
<!-- prev_session=<审计会话> | upgraded=gold-leaf -->
<!-- delta_class=callee_set_restructure+DTO_field_addition | baseline=1.0.9 | sha=d24e429a -->

## Call Tree Table (depth ≥ 5, all branches)

| depth | VA | symbol | role | delta_1.1.1 | terminated_reason |
|---|---|---|---|---|---|
| 0 | 0x140015870 | load_relay_state_ipc_handler_111 | IPC handler owner | — | — |
| 1 | 0x14006F4B0 | run_codex_router_diagnostics_owner_sys | Tokio dispatcher try-lock gate | no-delta | leaf(Tokio-sync: CAS+SIMD+vtable+WakeByAddressSingle) |
| 2 | 0x14124A510 | sub_14124A510 | Tokio mutex wait (park) | no-delta | leaf(OS-wait) |
| 2 | 0x14124B1D0 | sub_14124B1D0 | Tokio tracing gate | no-delta | leaf |
| 2 | 0x14124A5D0 | WakeByAddressSingle | OS mutex wake / unlock | no-delta | leaf(OS-wake) |
| 1 | 0x141214620 | query_installed_skills_with_repo_111 | pre-flight skill store query | **NEW_IN_1.1.1** | — |
| 2 | 0x1410A1DF0 | sub_1410A1DF0 | closure builder (filter fn) | no-delta | leaf |
| 2 | 0x141222DD0 | sub_141222DD0 | iter adapter | no-delta | leaf |
| 2 | 0x14106D960 | skill_store_get_all_111 | thunk → skill_store_iter_111 | no-delta | — |
| 3 | 0x14106DE20 | skill_store_iter_111 | Arc in-memory iterator | no-delta | leaf(pure-iterator) |
| 2 | 0x14106D970 | sub_14106D970 | iter cleanup | no-delta | leaf |
| 1 | 0x14080C3C0 | has_notch_invoke_resolver_respond | error-path IPC respond | no-delta | leaf(Tauri-IPC) |
| 1 | 0x140217490 | relay_state_snapshot_to_ok_response_sys | success-path orchestrator | new-callee-added | — |
| 2 | 0x1406DCF50 | relay_state_pre_response_log_check_sys | pre-response log check | no-delta | leaf(log-readonly) |
| 2 | 0x1406DA970 | relay_config_connection_refresh_and_write_sys | TCP conn refresh + config write | **NEW_CALL_PATH_1.1.1** | — |
| 3 | 0x14124A510 | sub_14124A510 | Tokio mutex wait | no-delta | leaf(OS-wait) |
| 3 | 0x14124B1D0 | sub_14124B1D0 | Tokio tracing gate | no-delta | leaf |
| 3 | 0x14124A5D0 | WakeByAddressSingle | mutex wake/unlock | no-delta | leaf(OS-wake) |
| 3 | 0x141077F30 | sub_141077F30 | TCP connect (300ms timeout) | no-delta | leaf(OS-socket) |
| 3 | 0x1402F87A0 | sub_1402F87A0 | close probe socket | no-delta | leaf(OS-socket-close) |
| 3 | 0x14108D4A0 | sub_14108D4A0 | sleep 50ms (retry delay) | no-delta | leaf(OS-sleep) |
| 3 | 0x14124DED8 | closesocket | Winsock closesocket (connect-fail path) | no-delta | leaf(Winsock) |
| 3 | 0x140ECE370 | sub_140ECE370 | tracing log event (connect-ok) | no-delta | leaf(tracing) |
| 3 | 0x1405A4BF0 | sub_1405A4BF0 | drop connection Arc handle | no-delta | leaf(Arc-drop) |
| 3 | 0x1405AA280 | sub_1405AA280 | relay config Arc ref clone | no-delta | leaf(Arc-clone) |
| 3 | 0x1406EAED0 | relay_config_serialize_and_atomic_write_sys | JSON serialize + atomic write (BOTH branches) | **NEW_SIDE_EFFECT_1.1.1** | — |
| 4 | 0x1406F2870 | relay_config_check_parent_dirs_sys | parent dir existence check | no-delta | leaf(FS-check-readonly) |
| 4 | 0x14020A3E0 | sub_14020A3E0 | serde_json relay config serializer | no-delta | leaf(serde) |
| 4 | 0x140504310 | relay_atomic_write_leaf_sys | WIN CreateFile+WriteFile+rename atomic write | no-delta | — |
| 5 | 0x14107A3E0 | sub_14107A3E0 | parent dir check | no-delta | leaf(FS-check) |
| 5 | 0x141082B80 | sub_141082B80 | path string builder | no-delta | leaf |
| 5 | 0x14108B3B0 | GetCurrentProcessId | Win32 GetCurrentProcessId | no-delta | leaf(Win32) |
| 5 | 0x140F5A860 | uuid_v4_generate_raw_sys | tmpfile UUID suffix generator | no-delta | leaf(UUID) |
| 5 | 0x1410A1DF0 | sub_1410A1DF0 | closure builder (path fmt) | no-delta | leaf |
| 5 | 0x141097C30 | sub_141097C30 | WriteFile wrapper | no-delta | leaf(Win32-WriteFile) |
| 5 | 0x14107AD30 | sub_14107AD30 | CreateFile wrapper | no-delta | leaf(Win32-CreateFile) |
| 5 | 0x14124D788 | __imp_CloseHandle | Win32 CloseHandle (import thunk) | no-delta | leaf(Win32-CloseHandle) |
| 5 | 0x140504130 | sub_140504130 | rename tmpfile → target path | no-delta | leaf(Win32-rename) |
| 5 | 0x14108BF60 | snooze_file_delete_111 | deferred delete tmpfile on rename fail | no-delta | leaf(deferred-cleanup) |
| 5 | 0x140504900 | sub_140504900 | cleanup temp path strings | no-delta | leaf |
| 3 | 0x1405A5120 | sub_1405A5120 | drop outer Arc (RelayConfig) | no-delta | leaf(Arc-drop) |
| 2 | 0x1406E8480 | relay_state_read_lock_snapshot_sys | Arc RwLock read + state snapshot | no-delta | — |
| 3 | 0x14124A510 | sub_14124A510 | Tokio mutex wait | no-delta | leaf(OS-wait) |
| 3 | 0x14072A3A0 | sub_14072A3A0 | clone/extract relay state struct | no-delta | leaf(memclone) |
| 3 | 0x14124A5D0 | WakeByAddressSingle | release read lock | no-delta | leaf(OS-wake) |
| 2 | 0x14072A3A0 | sub_14072A3A0 | relay state convert (outer) | no-delta | leaf |
| 2 | 0x140234AC0 | relay_state_snapshot_drop_sys | RAII drop relay snapshot | no-delta | leaf |
| 2 | 0x140243FC0 | sub_140243FC0 | serde Display encode (relay state) | no-delta | leaf(serde) |
| 2 | 0x1402342B0 | sub_1402342B0 | drop source buf after encode | no-delta | leaf |
| 2 | 0x140216BA0 | set_codex_api_slots_ok_response_build_sys | build Ok response struct | no-delta | leaf(struct-builder) |
| 1 | 0x140831F00 | relay_state_send_ipc_response_sys | IPC response dispatch | warnings-field-added-in-dto | — |
| 2 | 0x1402291E0 | relay_state_response_serialize_dto_sys | JSON DTO serializer | **warnings_field_added_1.1.1** | — |
| 3 | 0x140261480 | sub_140261480 | write JSON field: schemaVersion | no-delta | leaf(JSON-writer) |
| 3 | 0x1402580F0 | sub_1402580F0 | write JSON field: success | no-delta | leaf(JSON-writer) |
| 3 | 0x14025C400 | sub_14025C400 | write JSON field: code | no-delta | leaf(JSON-writer) |
| 3 | 0x14025C400 | sub_14025C400 | write JSON field: message | no-delta | leaf(JSON-writer) |
| 3 | 0x1402494C0 | relay_response_field_warnings_write_sys | write JSON field: warnings | **NEW_IN_1.1.1** | leaf(JSON-field-writer) |
| 4 | 0x140257CD0 | sub_140257CD0 | JSON key-value writer primitive | no-delta | leaf(JSON-writer) |
| 3 | 0x140257250 | sub_140257250 | write JSON field: data | no-delta | leaf(JSON-writer) |
| 2 | 0x14080C3C0 | has_notch_invoke_resolver_respond | Tauri IPC InvokeResolver dispatch | no-delta | leaf(Tauri-IPC) |
| 1 | 0x14033AB50 | has_notch_arc_listener_drop_loop | Arc listener RAII cleanup loop | no-delta | leaf(Arc-drop-loop) |
| 1 | 0x140042650 | sub_140042650 | drop InvokeResolver context | no-delta | leaf(RAII-drop) |

## Termination Summary

| symbol | VA | terminated_reason |
|---|---|---|
| run_codex_router_diagnostics_owner_sys | 0x14006F4B0 | leaf: Tokio sync (CAS+SIMD hashmap+vtable+WakeByAddressSingle) |
| skill_store_iter_111 | 0x14106DE20 | leaf: pure in-memory Arc iterator |
| relay_state_pre_response_log_check_sys | 0x1406DCF50 | leaf: log only, no state change |
| relay_config_check_parent_dirs_sys | 0x1406F2870 | leaf: FS check (read-only) |
| relay_atomic_write_leaf_sys | 0x140504310 | leaf: Win32 FS (CreateFile/WriteFile/CloseHandle/rename + snooze_file_delete_111) |
| relay_response_field_warnings_write_sys | 0x1402494C0 | leaf: JSON field writer (no FS/HTTP/sidecar) |
| relay_state_read_lock_snapshot_sys | 0x1406E8480 | leaf: Arc RwLock read + memclone + WakeByAddressSingle |
| set_codex_api_slots_ok_response_build_sys | 0x140216BA0 | leaf: pure struct builder |
| has_notch_invoke_resolver_respond | 0x14080C3C0 | leaf: Tauri IPC InvokeResolver dispatch |
| has_notch_arc_listener_drop_loop | 0x14033AB50 | leaf: Arc RAII drop loop |

## Stats

| 指标 | 值 |
|---|---|
| max_depth_reached | 6 (GetCurrentProcessId, WriteFile, CloseHandle @ relay_atomic_write_leaf_sys) |
| total_unique_callees | 42 (including all Win32 and Tokio primitives) |
| named_callees | 16 |
| NEW_IN_1.1.1 edges | 4 (query_installed_skills_with_repo_111, relay_config_connection_refresh_and_write_sys, relay_config_serialize_and_atomic_write_sys×2-branches, relay_response_field_warnings_write_sys) |
| terminated_branches | 10 named leaf-terminated functions |
| session_upgraded_from | <审计会话> |

## Delta Edges (1.1.1 vs 1.0.9)

| edge | from → to | type |
|---|---|---|
| NEW | load_relay_state_ipc_handler_111 → query_installed_skills_with_repo_111 | pre-flight skill check |
| NEW | relay_state_snapshot_to_ok_response_sys → relay_config_connection_refresh_and_write_sys | TCP conn refresh |
| NEW | relay_config_connection_refresh_and_write_sys → relay_config_serialize_and_atomic_write_sys (branch-A) | atomic write (connect-ok) |
| NEW | relay_config_connection_refresh_and_write_sys → relay_config_serialize_and_atomic_write_sys (branch-B) | atomic write (connect-fail) |
| NEW | relay_state_response_serialize_dto_sys → relay_response_field_warnings_write_sys | warnings DTO field |
| REMOVED | (1.0.9) auth_guard → load_relay_state_core | RwLock read core |
| REMOVED | (1.0.9) JSON_state_dispatcher → response_serialize | old serializer |
