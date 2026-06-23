# import_skill — call tree  (AiMaMi 1.1.1 windows-x64)

session: wf-aimami111-delta-20260617-sweep
delta_class: integrity_recovered

```
import_skill_cmd_111  [0x14001CA50]  ← IPC entry
├── pending_auto_switch_state_lock_acquire_111  [0x14006EDC0]  ← DELTA: NEW LOCK
├── query_installed_skills_with_repo_111  [0x141214620]  ← DELTA: NEW PRE-GATE
│   ├── sub_1410A1DF0  (closure builder, unk_1412B0057)
│   ├── sub_141222DD0  (iterator adapter)
│   └── skill_store_get_all_111  [0x14106D960]  (full skills store read)
│       └── sub_14106D970  (store iter cleanup)
├── sub_1402FED40  (parse path string from IPC ctx)
├── sub_1407DB160  (path string resolve/convert)
└── import_skill_resolve_path_install_111  [0x1406EB800]
    ├── snooze_file_open_111  [0x14108C6F0]  (open file/dir for stat)
    ├── sub_14107A370  (is_directory check)
    ├── sub_14107A5E0  (filename extract)
    ├── sub_14107A3E0  (parent path extract)
    ├── sub_141079810  (canonicalize base)
    ├── sub_14108C050  (path join / normalize)
    ├── sub_140364640  (path buf ops)
    ├── sub_1406ECC10  (error context wrap)
    ├── sub_1410795D0  (version tuple parse)  ← for version-compare gate
    ├── sub_141213640  (string compare)
    ├── sub_1407B2550  (version compare gate)  ← DELTA: NEW
    ├── sub_14108C150  (notify event)  ← DELTA: NEW
    ├── sub_1406ECBA0  (error detail extract)
    ├── sub_1406ECD00  (error cleanup)
    ├── import_skill_read_parse_skill_md_111  [0x1406EE680]  ← called 1..2×
    │   ├── win32_file_read_bytes_111  [0x141093260]
    │   ├── sub_14107A3E0  (path stem)
    │   ├── sub_14066EA70  (line iterator)
    │   ├── sub_14070B280  (byte-slice trim)
    │   ├── sub_140300350  (heading parse / split_at '#')
    │   ├── elapsed_since_ts_111  [0x14107B790]  (timestamp check)
    │   ├── sub_141079B50  (skill path resolver)  ← DELTA: NEW
    │   ├── sub_141079810  (canonical path ops)
    │   ├── sub_14107A5E0  (filename)
    │   ├── sub_1410A1B60  (path buf from parts)
    │   ├── sub_1410A9010  (file size/content check)  ← DELTA: NEW
    │   ├── sub_141095530  (UUID Display impl)  [3× calls]
    │   ├── sub_14010E700  (string push / extend)
    │   └── sub_1410A2210  (Arc<str> / string intern)
    ├── import_skill_build_record_db_write_111  [0x1406F1360]  ← called 0..1×
    │   ├── import_skill_read_parse_skill_md_111  [0x1406EE680]  (re-called)
    │   ├── sub_141082B80  (path buf alloc)
    │   ├── system_time_precise_u32_111  [0x14107B7E0]
    │   ├── elapsed_since_ts_111  [0x14107B790]
    │   ├── sub_1407180F0  (path append "__" separator)
    │   ├── uuid_v4_generate_raw_sys  [0x140F5A860]  ← generates backupID
    │   ├── sub_140F5A900  (UUID Display to string)
    │   ├── sub_14124BEE0  (UUID string validate/pad)
    │   ├── sub_1410A1DF0  (formatter closure)
    │   ├── sub_1410A2210  [3× Arc<str> intern]
    │   ├── sub_140260580  [backupID, skillID, name, relativePath JSON field write]
    │   ├── sub_1402662D0  [title JSON field write]
    │   ├── sub_140268180  [createdAt JSON field write]
    │   ├── sub_1401F7950  (JSON close brace)
    │   ├── sub_1403A6410  (SQLite write: installed_skills table)  ← SIDE EFFECT
    │   ├── sub_1400481C0  (SkillSummary drop/cleanup)
    │   ├── import_skill_iter_dir_match_111  [0x1406EB140]  ← 2nd call (file copy)
    │   └── import_skill_uuid_to_string_111  [0x1406F7540]
    │       └── sub_141095530  (Display impl)
    └── import_skill_iter_dir_match_111  [0x1406EB140]  ← 1st call (validate/copy)
        ├── sub_141082B80  (path buf alloc)
        ├── sub_14108C7E0  (opendir)
        ├── sub_140672D70  (readdir / next entry)
        ├── sub_141082B60  (entry name)
        ├── sub_14107A2D0  (path join)
        ├── sub_141082A50  (entry fullpath)
        ├── sub_14107A370  (is_directory)
        ├── snooze_file_backup_copy_111  [0x14108C340]  ← CopyFileExW (leaf)
        │   └── CopyFileExW  [0x14124D1A0]  (Win32 API)
        ├── import_skill_iter_dir_match_111  (self-recurse for subdirs)
        └── sub_1401D6AF0  (dir handle drop)
```

### Depth accounting

| Layer | Function | Depth |
|-------|----------|-------|
| 0 | import_skill_cmd_111 | entry |
| 1 | query_installed_skills_with_repo_111 | new gate |
| 1 | import_skill_resolve_path_install_111 | main orchestrator |
| 2 | import_skill_read_parse_skill_md_111 | metadata parser |
| 2 | import_skill_build_record_db_write_111 | DB writer |
| 3 | import_skill_iter_dir_match_111 | recursive copier |
| 4 | snooze_file_backup_copy_111 / CopyFileExW | leaf (terminated) |
| 3 | sub_1403A6410 | SQLite leaf (terminated) |
| 3 | uuid_v4_generate_raw_sys | UUID leaf (terminated) |

Depth ≥ 5 not reached; all paths terminated at Win32 API or stdlib leaf.
