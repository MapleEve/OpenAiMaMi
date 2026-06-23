# restore_skill_backup — Call Tree (Windows x64, Gold Leaf)
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> platform=windows-x64 -->
<!-- sha=d24e429a binary="AiMaMi 1.1.1 win64.exe" imagebase=0x140000000 -->
<!-- prior-session=wf-aimami111-delta-20260617-sweep; this session: full decompile verified, depth confirmed ≥6 -->

```
restore_skill_backup_owner_sys @ 0x1400201E0  [COMMAND ENTRY; renamed from restore_skill_backup_handler_111]
├── sub_141212FB0                              @ 0x141212FB0  [memmove: copy input DTO 520B + state ctx 400B]
├── pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0  [Mutex acquire, auto-switch guard]
│     terminated: lock primitive leaf
├── query_installed_skills_with_repo_111       @ 0x141214620  [DB query: installed skills + repo, ~0xBF bytes]
│     terminated: DB query leaf
├── remove_skill_parse_id_param_111            @ 0x1402FED40  [param: parse 'id' string from request JSON]
│     terminated: param parser leaf (~0x1A0 bytes)
├── restore_skill_mutex_read_111               @ 0x1407DCA60  [Mutex read: lookup backup record]
│   ├── _InterlockedCompareExchange8                          [CAS lock acquire; Win32 intrinsic leaf]
│   ├── sub_14124A510                          @ 0x14124A510  [wait on lock contention]
│   ├── off_141899DC0                          @ 0x141899DC0  [GLOBAL_PANIC_COUNT — Rust poison flag]
│   ├── sub_14124B1D0                          @ 0x14124B1D0  [Mutex poison handling]
│   ├── sub_1410B1930                          @ 0x1410B1930  [format "poisoned lock" PoisonError string]
│   ├── restore_skill_do_111                   @ 0x1406EFA10  [CORE RESTORE; see below]
│   ├── sub_140243FC0                          @ 0x140243FC0  [unwrap Option inner value]
│   ├── drop_result_inner_111                  @ 0x140809B30  [drop Result inner value]
│   ├── sub_140217020                          @ 0x140217020  [wrap error into Result]
│   └── WakeByAddressSingle                                   [Win32 API leaf: release mutex waiters]
├── sub_14080C3C0                              @ 0x14080C3C0  [response error writer]
│     (alias: has_notch_invoke_resolver_respond)
├── sub_140832A30                              @ 0x140832A30  [response serializer dispatch]
└── sub_140042650                              @ 0x140042650  [serialize + send IPC response]

restore_skill_do_111 @ 0x1406EFA10  [CORE RESTORE; full decompile confirmed 2026-06-18]
├── sub_14107A2D0                              @ 0x14107A2D0  [path join utility (called 5×)]
├── snooze_file_open_111                       @ 0x14108C6F0  [open backup dir / .skill file (called 3×)]
│     terminated: file-open platform primitive leaf
├── sub_1402F87A0                              @ 0x1402F87A0  [drop file handle on error]
├── sub_1410A1DF0                              @ 0x1410A1DF0  [format error with context string]
├── win32_file_read_bytes_111                  @ 0x141093260  [read backup index file bytes]
│     terminated: Win32 file read leaf
├── sub_140004AA0                              @ 0x140004AA0  [parse JSON backup record into struct]
├── sub_14107A3E0                              @ 0x14107A3E0  [check if path exists]
├── sub_141082B80                              @ 0x141082B80  [acquire path/dir lock slot]
├── sub_14108C150                              @ 0x14108C150  [file slot helper (called after build_record)]
├── import_skill_build_record_db_write_111     @ 0x1406F1360  [write backup record — DELTA #1; see below]
├── sub_140234F20                              @ 0x140234F20  [drop error context]
├── import_skill_iter_dir_match_111            @ 0x1406EB140  [recursive dir scan for matching files]
│   ├── sub_14108C7E0                          @ 0x14108C7E0  [readdir: get next dir entry]
│   ├── sub_140672D70                          @ 0x140672D70  [match predicate]
│   ├── snooze_file_backup_copy_111            @ 0x14108C340  [CopyFileExW side-effect — DELTA #3; see below]
│   │   ├── sub_1410938D0                      @ 0x1410938D0  [pop path from iterator state (called 2×)]
│   │   ├── win32_path_canonicalize_111        @ 0x1410908E0  [canonicalize path for src + dst]
│   │   │     terminated: Win32 path util leaf
│   │   ├── CopyFileExW                                       [Win32 API leaf: copy file]
│   │   ├── ProgressRoutine                    @ 0x1410938B0  [CopyFileExW progress callback]
│   │   ├── GetLastError                                      [Win32 API leaf: get last error]
│   │   └── sub_140001370                      @ 0x140001370  [dealloc WCHAR path strings (align=2)]
│   └── import_skill_iter_dir_match_111        @ 0x1406EB140  [self-recursive: scan subdirs]
│         terminated: recursion terminates at dir leaf or empty dir
├── sub_14107A2D0                              @ 0x14107A2D0  [path join: "SKILL.md"]
├── import_skill_read_parse_skill_md_111       @ 0x1406EE680  [read + parse SKILL.md in backup]
│   ├── win32_file_read_bytes_111              @ 0x141093260  [Win32 file read leaf]
│   ├── snooze_file_open_111                   @ 0x14108C6F0  [open .skill file]
│   ├── sub_14066EA70                          @ 0x14066EA70  [md parser stage 1]
│   ├── sub_14070B280                          @ 0x14070B280  [md parser stage 2]
│   ├── sub_140300350                          @ 0x140300350  [md parser finalize / field extract]
│   └── elapsed_since_ts_111                   @ 0x14107B790  [staleness check]
│         terminated: time util leaf
├── import_skill_uuid_to_string_111            @ 0x1406F7540  [uuid raw bytes → display string]
│     terminated: uuid format leaf
└── sub_141212FB0                              @ 0x141212FB0  [memmove result blocks (2×: 0xB8 + 0x98)]

import_skill_build_record_db_write_111 @ 0x1406F1360  [DELTA #1: new in 1.1.1; full decompile confirmed]
├── sub_14107A2D0                              @ 0x14107A2D0  [path + "SKILL.md" (len=8)]
├── import_skill_read_parse_skill_md_111       @ 0x1406EE680  [read + parse SKILL.md for skillID/name/title/relativePath]
│   └── [see above — md parser chain]
├── sub_140001360                              @ 0x140001360  [alloc(20,1) for "Invalid skill source" error msg]
├── sub_14124BCCB                              @ 0x14124BCCB  [OOM panic handler]
├── sub_141082B80                              @ 0x141082B80  [acquire file write lock slot]
├── system_time_precise_u32_111               @ 0x14107B7E0  [get current time u32; terminated: time primitive leaf]
├── elapsed_since_ts_111                       @ 0x14107B790  [elapsed since snapshot ts; terminated: time util leaf]
├── sub_1407180F0                              @ 0x1407180F0  [build path with "__" separator (asc_1412EC13C="__")]
├── uuid_v4_generate_raw_sys                  @ 0x140F5A860  [DELTA #2: BCryptGenRandom→ProcessPrng 16B + XMM bitmask]
│   ├── ProcessPrng                                           [Win32 API leaf: generate 16 random bytes]
│   ├── _mm_and_si128 / _mm_or_si128                         [XMM RFC4122 bitmask intrinsic leaf]
│   └── sub_14124C240                          @ 0x14124C240  [Rust panic for RNG failure]
├── sub_140F5A900                              @ 0x140F5A900  [uuid raw bytes → hyphenated string]
│     terminated: uuid format leaf
├── sub_14124BFE0                              @ 0x14124BFE0  [Display impl error panic]
├── sub_14124BEE0                              @ 0x14124BEE0  [UTF-8 boundary check / slice_index_order panic]
├── sub_1410A1DF0                              @ 0x1410A1DF0  [path format with vtable context]
├── sub_14107A2D0                              @ 0x14107A2D0  [path join: uuid_str + ".skill"]
├── sub_141082B80                              @ 0x141082B80  [lock path slot]
├── import_skill_iter_dir_match_111            @ 0x1406EB140  [scan dir for backup slot; calls snooze_file_backup_copy_111]
│   └── snooze_file_backup_copy_111            @ 0x14108C340  [DELTA #3: CopyFileExW — see above]
├── sub_140001360                              @ 0x140001360  [alloc(128,1) for JSON buffer]
├── sub_140260580                              @ 0x140260580  [json write str field: "backupID" (8), "skillID" (7), "name" (4), "relativePath" (12)]
│     terminated: JSON serializer leaf
├── sub_1402662D0                              @ 0x1402662D0  [json write str field v2: "title" (5)]
│     terminated: JSON serializer leaf
├── sub_140268180                              @ 0x140268180  [json write timestamp field: "createdAt" (9)]
│     terminated: JSON serializer leaf
├── sub_1401F7950                              @ 0x1401F7950  [json finalize: close brace '}']
│     terminated: JSON serializer leaf
├── sub_141248EC0                              @ 0x141248EC0  [JSON write separator/comma error path]
├── sub_14107A2D0                              @ 0x14107A2D0  [build write path: skill_dir + unk_1412EC051]
├── sub_1403A6410                              @ 0x1403A6410  [win32_file_write_bytes wrapper]  ← DELTA #4
│   └── win32_file_write_bytes_111             @ 0x141093710  [Win32 file write leaf]
│         terminated: Win32 WriteFile wrapper leaf
├── import_skill_uuid_to_string_111            @ 0x1406F7540  [uuid → display string for output struct]
│     terminated: uuid format leaf
├── sub_1410A2210                              @ 0x1410A2210  [copy/move oword field (called 3×)]
└── sub_1401D6360                              @ 0x1401D6360  [drop error context (called on early-return paths)]

restore_skill_backup_response_ser_111 @ 0x14020F2A0  [DELTA #5: 3-field response; full decompile confirmed]
├── sub_141221220                              @ 0x141221220  [grow JSON writer buffer]
├── sub_140266A70                              @ 0x140266A70  ["restoredSkill" field writer; string @ 0x1412C05F3]
│     terminated: JSON field serializer leaf
├── sub_1402654D0                              @ 0x1402654D0  ["backup" field writer (a1+184); string @ 0x1412C0577]
│     terminated: JSON field serializer leaf
├── sub_140260410                              @ 0x140260410  ["rollbackBackup" field writer (a1+336); string @ 0x1412C0600]  ← NEW vs 1.0.9
│     terminated: JSON field serializer leaf
├── sub_141248EC0                              @ 0x141248EC0  [separator/comma error path]
└── sub_14033FA00                              @ 0x14033FA00  [write closing '}' + "string or map" marker]

delete_skill_backup_response_ser_111 @ 0x140211890  [DELTA #6: companion command]
├── sub_14025C400                              @ 0x14025C400  ["deletedBackupID" field; string @ 0x1412C0992]
└── sub_140261480                              @ 0x140261480  ["remainingBackupCount" field; string @ 0x1412C09A1]
```

## Call Depth Summary

| Level | Function | Termination |
|---|---|---|
| 0 (root) | `restore_skill_backup_owner_sys` | command entry |
| 1 | `restore_skill_mutex_read_111` | Mutex guard |
| 2 | `restore_skill_do_111` | core restore impl |
| 3 | `import_skill_build_record_db_write_111` | record write |
| 4 | `import_skill_iter_dir_match_111` | dir scan |
| 5 | `snooze_file_backup_copy_111` | CopyFileExW wrapper |
| 6 | `CopyFileExW` | Win32 API leaf — **terminated** |

**Max depth: 6 levels.** All paths terminate at Win32 API leaf, named platform primitive, or JSON serializer leaf.

## Termination Index

| Function | Terminated Reason |
|---|---|
| `pending_auto_switch_state_lock_acquire_111` | lock primitive |
| `query_installed_skills_with_repo_111` | DB query leaf |
| `remove_skill_parse_id_param_111` | param parser leaf |
| `WakeByAddressSingle` | Win32 API |
| `_InterlockedCompareExchange8` | Win32 intrinsic |
| `win32_file_read_bytes_111` | Win32 file read |
| `win32_file_write_bytes_111` | Win32 file write |
| `CopyFileExW` | Win32 API |
| `ProcessPrng` | Win32 API (BCryptGenRandom pattern) |
| `GetLastError` | Win32 API |
| `win32_path_canonicalize_111` | Win32 path util |
| `system_time_precise_u32_111` | time primitive |
| `elapsed_since_ts_111` | time util |
| `import_skill_read_parse_skill_md_111` | md parser chain leaf |
| `import_skill_uuid_to_string_111` | uuid format leaf |
| `sub_140F5A900` | uuid format leaf |
| `sub_140260580`, `sub_1402662D0`, `sub_140268180`, `sub_1401F7950` | JSON serializer leaves |
| `sub_140266A70`, `sub_1402654D0`, `sub_140260410` | JSON field serializer leaves |
