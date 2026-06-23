# deactivate_relay_provider — Owner (Windows x64, Gold Leaf)
**Session**: wf-aimami111-delta-20260618-goldleaf
**delta_class**: integrity_recovered

## Owner Function

| Field | Value |
|---|---|
| Symbol | `deactivate_relay_provider_owner_sys` (renamed from `deactivate_relay_provider_cmd_handler`) |
| VA | `0x14001F940` |
| Size | `0x5CE` bytes |
| IPC command string | `"deactivate_relay_provider"` @0x1412AC501 |
| IPC dispatcher xref | `tauri_ipc_main_dispatcher_sys` @0x14000D2A0 → call @0x14000EE54 |
| Data xrefs | 0x1414FCDE4, 0x14189E710 (jump table / vtable entries) |
| Source module | `codexmate_lib::core::relay::manager` |
| Source file | `src\core\relay\manager.rs` (`aSrcCoreRelayMa_0` @0x1412EA601) |

## IDB Annotation
- **Renamed**: `sub_14001F940` → `deactivate_relay_provider_owner_sys` (逆向分析 Win, 2026-06-18)
- **Comment set** at 0x14001F940: `"gold-leaf for deactivate_relay_provider; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion"`
- **IDB saved**: `<本地路径>

## Call Chain (depth=6)
```
depth 0: deactivate_relay_provider_owner_sys          @0x14001F940  IPC entry
depth 1: deactivate_relay_provider_core_sys           @0x14021BEC0  core bridge
depth 2: relay_provider_deactivate_mutate_and_persist_sys @0x1406D5E70 business logic + WIN lock
depth 3: relay_providers_config_write_and_persist_sys @0x1406E6960  serialize + persist
depth 3: relay_post_login_state_sync_sys              @0x1406E1750  post-change state sync
depth 4: relay_config_serialize_and_atomic_write_sys  @0x1406EAED0  JSON build + atomic write
depth 4: relay_state_read_lock_snapshot_sys           @0x1406E8480  read-lock snapshot
depth 4: sub_14073BC50                                @0x14073BC50  state-machine drive
depth 4: relay_draft_test_input_drop_sys              @0x1401D6220  NEW 1.1.1 slot drop
depth 5: relay_config_check_parent_dirs_sys           @0x1406F2870  NEW 1.1.1 parent dir gate
depth 5: relay_atomic_write_leaf_sys                  @0x140504310  WIN fs atomic write (leaf)
depth 6: GetCurrentProcessId / CloseHandle / MoveFileEx            WIN API leaves (terminated)
```

## Related Named Functions (same session, already in IDB)
- `relay_provider_list_remove_entry_sys` @0x14033FB70
- `relay_state_serialize_under_lock_sys` @0x1406DA6B0 (逆向分析 auto-named)
- `relay_state_snapshot_drop_sys` / `sub_140234AC0` @0x140234AC0 (逆向分析 auto-named)
- `set_codex_api_slots_ok_response_build_sys` @0x140216BA0
- `relay_state_send_ipc_response_sys` @0x140831F00
- `uuid_v4_generate_raw_sys` @0x140F5A860
- `snooze_file_delete_111` @0x14108BF60
