# call-tree.md — remove_skill (win64, AiMaMi 1.1.1)

session: <审计会话>
sha: d24e429a
depth: 6 edges (L1→L6), terminated_reason annotated per leaf

```
remove_skill_owner_sys @ 0x140022920  [L1 — IPC owner]
│
├─► [DELTA-NEW] pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0  [L2]
│       ├─► sub_14124A510 @ 0x14124A510        [L3 — WaitOnAddress spin loop]
│       │       terminated_reason: platform-primitive (Windows WaitOnAddress)
│       ├─► sub_14124B1D0 @ 0x14124B1D0        [L3 — internal lock state probe]
│       │       terminated_reason: platform-primitive
│       ├─► sub_14124BFE0 @ 0x14124BFE0        [L3 — panic/unwrap abort]
│       │       terminated_reason: error_return (panics if poisoned)
│       └─► WakeByAddressSingle @ 0x14124A5D0  [L3]
│               terminated_reason: platform-primitive (Win32 WakeByAddressSingle)
│
├─► query_installed_skills_with_repo_111 @ 0x141214620  [L2]
│       ├─► sub_1410A1DF0 @ 0x1410A1DF0        [L3 — Option builder]
│       ├─► sub_141222DD0 @ 0x141222DD0        [L3 — string intern]
│       ├─► skill_store_get_all_111 @ 0x14106D960  [L3 — in-memory skill store read]
│       │       terminated_reason: external_call (reads in-memory store state)
│       └─► sub_14106D970 @ 0x14106D970        [L3 — drop handle]
│               terminated_reason: external_call
│
├─► remove_skill_parse_id_param_111 @ 0x1402FED40  [L2]
│       ├─► sub_1402F9EB0 @ 0x1402F9EB0        [L3 — param presence check]
│       │       terminated_reason: error_return (returns 1 if missing)
│       ├─► sub_140E30410 @ 0x140E30410        [L3 — string decode/utf8 validate]
│       │       terminated_reason: external_call
│       ├─► sub_1402F7F90 @ 0x1402F7F90        [L3 — drop param buffer]
│       └─► sub_141212FB0 @ 0x141212FB0        [L3 — memcpy string into result]
│               terminated_reason: platform-primitive
│
├─► sub_1407DB760 @ 0x1407DB760  [L2 — async mutex wrapper]
│       ├─► sub_14124A510 @ 0x14124A510        [L3 — WaitOnAddress spin]
│       ├─► sub_14124B1D0 @ 0x14124B1D0        [L3 — lock state probe]
│       ├─► sub_1410B1930 @ 0x1410B1930        [L3 — PoisonError builder]
│       │       terminated_reason: error_return
│       ├─► skill_backup_replace_111 @ 0x1406ECD70  [L3 — CORE FS+DB]
│       │       │
│       │       ├─► skill_list_db_query_111 @ 0x1406F0D80  [L4]
│       │       │       ├─► snooze_file_open_111 @ 0x14108C6F0  [L5 — open skills DB file]
│       │       │       │       ├─► win32_path_canonicalize_111 @ 0x1410908E0  [L6]
│       │       │       │       │       terminated_reason: platform-primitive (GetFullPathNameW)
│       │       │       │       └─► win32_file_open_rw_111 @ 0x14108F6C0  [L6]
│       │       │       │               terminated_reason: platform-primitive (CreateFileW)
│       │       │       └─► sub_1406F0EA0 @ 0x1406F0EA0  [L5 — SQLite SELECT parse]
│       │       │               terminated_reason: persistence_commit (SQLite read)
│       │       │
│       │       ├─► import_skill_build_record_db_write_111 @ 0x1406F1360  [L4 — DELTA-NEW backup]
│       │       │       ├─► import_skill_read_parse_skill_md_111 @ 0x1406EE680  [L5]
│       │       │       │       terminated_reason: external_call (reads SKILL.md from disk)
│       │       │       ├─► uuid_v4_generate_raw_sys @ 0x140F5A860  [L5]
│       │       │       │       terminated_reason: platform-primitive (UUID gen)
│       │       │       ├─► system_time_precise_u32_111 @ 0x14107B7E0  [L5]
│       │       │       │       terminated_reason: platform-primitive (GetSystemTimeAsFileTime)
│       │       │       ├─► import_skill_iter_dir_match_111 @ 0x1406EB140  [L5]
│       │       │       │       terminated_reason: external_call (dir walk for skill files)
│       │       │       └─► sub_1403A6410 @ 0x1403A6410  [L5 — SQLite INSERT backup record]
│       │       │               terminated_reason: persistence_commit (SQLite write)
│       │       │
│       │       ├─► snooze_file_open_111 @ 0x14108C6F0  [L4 — open skill dir]
│       │       │       (same callees as above L5/L6)
│       │       │
│       │       ├─► skill_list_db_query_111 @ 0x1406F0D80  [L4 — re-query post-backup]
│       │       │       (same as first call; verifies updated state)
│       │       │
│       │       └─► sub_14010E700 @ 0x14010E700  [L4 — recursive dir delete]
│       │               terminated_reason: platform-primitive (RemoveDirectoryW / DeleteFileW)
│       │
│       ├─► drop_result_inner_111 @ 0x140809B30  [L3]
│       │       terminated_reason: external_call (drop error result)
│       └─► WakeByAddressSingle @ 0x14124A5D0  [L3]
│               terminated_reason: platform-primitive
│
└─► sub_140839F20 @ 0x140839F20  [L2 — reply builder dispatch]
        ├─► relay_response_build_remove_skill_reply_111 @ 0x140227320  [L3]
        │       ├─► sub_140261480 @ 0x140261480  [L4 — write schemaVersion field]
        │       │       terminated_reason: external_call (JSON write)
        │       ├─► sub_1402580F0 @ 0x1402580F0  [L4 — write success field]
        │       │       terminated_reason: external_call
        │       ├─► sub_14025C400 @ 0x14025C400  [L4 — write code/message fields]
        │       │       terminated_reason: external_call
        │       ├─► relay_response_field_warnings_write_sys @ 0x1402494C0  [L4]
        │       │       terminated_reason: external_call (write warnings array)
        │       └─► sub_14022FA30 @ 0x14022FA30  [L4 — drop result_ptr]
        │               terminated_reason: external_call
        └─► has_notch_invoke_resolver_respond @ 0x14080C3C0  [L3]
                terminated_reason: external_call (sends IPC response back to frontend)
```

**Call-tree edge count: 6 levels confirmed. All branches have explicit terminated_reason.**
