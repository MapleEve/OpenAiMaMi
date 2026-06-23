# get_notification_client_state — Owner Record (Windows x64) [gold-leaf]
## session: <审计会话> | sha: d24e429a

| Field | Value |
|---|---|
| owner_va | 0x140122010 |
| owner_name | get_notification_client_state_owner_sys |
| owner_size_bytes | 6160 |
| dispatcher_match_va | 0x14000D47E |
| dispatcher_string_va | 0x1412AC3CE |
| dispatcher_string | "get_notification_client_state" (29B) |
| dispatcher_xref_from | tauri_ipc_main_dispatcher_sys @ 0x14000D2A0 (data ref at 0x14000D522) |
| executor_wrapper_va | 0x1400354B0 — notification_client_state_executor_wrapper_sys |
| async_executor_va | 0x140058620 — notification_client_state_async_executor_sys (4C32B) |
| poll_step_va | 0x1403473E0 — notification_client_state_poll_step_sys |
| serializer_va | 0x1401A1D90 — hotspot_config_serialize_5field_json_and_write_sys |
| settings_reader_va | 0x1401A15D0 — codexmate_settings_hotspot_read_full_sys_111 |
| idb_path | <本地路径>|
| imagebase | 0x140000000 |
| binary | AiMaMi 1.1.1 win64.exe |
| baseline | 1.0.9 — command absent in 1.0.9 dispatcher |
| delta_class | integrity_recovered |
| gate_tier | full_leaf |

## IDB Annotations Applied

- `get_notification_client_state_owner_sys` renamed at 0x140122010
- Comments set at 0x140122010, 0x140113170, 0x140115AC0, 0x140114F20, 0x140117B40,
  0x140116660, 0x14011B850, 0x140113D10, 0x140118940, 0x1401125D0, 0x1401A1D90, 0x1401A15D0
- Gold-leaf comment: "gold-leaf for get_notification_client_state; sha d24e429a; session <审计会话>; not gate promotion"
- idb_save confirmed ok

## Prior Annotations (from sweep session <审计会话>)

Previous renames preserved/reused:
- notification_client_state_poll_step_sys @ 0x1403473E0
- notification_state_step_poll_A_sys @ 0x140113170
- notification_state_step_poll_B_sys @ 0x140115AC0
- notification_state_step_poll_F_sys @ 0x140114F20
- notification_client_state_async_executor_sys @ 0x140058620
- notification_client_state_executor_wrapper_sys @ 0x1400354B0
- hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560
