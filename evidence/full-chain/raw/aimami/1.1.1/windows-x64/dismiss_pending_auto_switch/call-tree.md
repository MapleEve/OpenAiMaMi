# dismiss_pending_auto_switch — Call Tree (Windows x64)
# AiMaMi 1.1.1 · delta_class = integrity_recovered
# gold-leaf session = wf-aimami111-delta-20260618-goldleaf · sha = d24e429a

```
tauri_ipc_main_dispatcher_sys (0x14000D2A0)
└── dismiss_pending_auto_switch_handler_111 (0x140029270)  ← IPC ENTRY
    ├── sub_141212FB0                                        memcpy / memmove primitive
    ├── pending_auto_switch_state_lock_acquire_111 (0x14006EDC0)
    │   ├── _InterlockedCompareExchange8                     CAS spin-lock acquire
    │   ├── sub_14124A510                                    lock contention wait
    │   ├── sub_14124B1D0                                    poison-flag check [NOISE]
    │   └── WakeByAddressSingle                              wake blocked waiters
    ├── sub_141214620                                        result-type dispatch
    ├── dismiss_pending_auto_switch_dispatch_111 (0x14078AA20)  ← shim
    │   ├── _InterlockedCompareExchange8                     lock acquire
    │   ├── sub_1410B1930                                    poison guard check [NOISE]
    │   ├── dismiss_pending_auto_switch_core_111 (0x1401B29E0)  ← CORE
    │   │   ├── pending_auto_switch_payload_read_111 (0x1401ABFF0)
    │   │   │   ├── win32_file_read_bytes_111 (0x141093260)  read auto-switch-pending.json
    │   │   │   │   ├── sub_14107C990                        open file handle (CreateFile)
    │   │   │   │   ├── sub_14107CA90                        file metadata
    │   │   │   │   ├── sub_14109FE10                        read loop
    │   │   │   │   ├── sub_141074720                        alloc read buffer
    │   │   │   │   ├── sub_1410A9010                        fill buffer from handle
    │   │   │   │   └── CloseHandle
    │   │   │   └── sub_140004C80                            serde_json::from_slice → PendingAutoSwitchPayload
    │   │   ├── system_time_precise_u32_111 (0x14107B7E0)
    │   │   │   └── GetSystemTimePreciseAsFileTime            Windows precise timestamp
    │   │   ├── elapsed_since_ts_111 (0x14107B790)           compute Duration since ref epoch
    │   │   ├── relay_config_check_parent_dirs_sys (0x1406F2870)  relay path ready?
    │   │   ├── sub_140001360                                 alloc 128-byte JSON buffer
    │   │   ├── sub_140260580 ×2                              json_write_field (currentAccountKey, candidateAccountKey)
    │   │   ├── sub_141248EC0                                 json_write_string_val
    │   │   ├── sub_140268180                                 json_write_duration_field (dismissedAt)
    │   │   ├── sub_14033FA00 (×loop)                        json_append_record (extra entries)
    │   │   ├── sub_1403A64F0                                 persist to auto-switch-snooze.json
    │   │   │   └── win32_file_write_bytes_111 (0x141093710)
    │   │   │       ├── sub_14107C990                        open/create file handle
    │   │   │       ├── sub_14107BF00                        write chunk loop
    │   │   │       ├── sub_141074040                        free handle on error
    │   │   │       └── CloseHandle
    │   │   ├── snooze_file_delete_111 (0x14108BF60)         NEW side-effect: remove stale snooze
    │   │   │   ├── sub_1410938D0                            get running account list
    │   │   │   ├── win32_path_canonicalize_111 (0x1410908E0)
    │   │   │   │   └── GetFullPathNameW
    │   │   │   └── snooze_file_delete_win32_111 (0x14108F810)
    │   │   │       ├── DeleteFileW                          primary delete attempt
    │   │   │       ├── GetLastError
    │   │   │       ├── sub_14107C710                        open handle for POSIX fallback
    │   │   │       └── SetFileInformationByHandle (FileDispositionInfo=19)  delete-on-close
    │   │   └── io_error_classify_111 (0x140152630)         classify Win32 error → restart decision
    │   ├── sub_140243FC0                                    result-type Ok wrapper
    │   └── sub_1407B1650                                    free core result
    ├── sub_14080C3C0                                        build IPC error response
    ├── sub_14082F2D0                                        build IPC ok response
    ├── sub_14033AB50                                        free pending_state slot (96 bytes)
    └── sub_140042650                                        free window_ref
```

### Depth Analysis
- Functional depth to leaf: **7 levels** (handler → dispatch → core → persist → write_bytes → write_chunk → CloseHandle)
- Terminated reasons at leaves: Win32 API calls (CloseHandle, DeleteFileW, SetFileInformationByHandle, GetSystemTimePreciseAsFileTime, GetFullPathNameW)
- All termination_reasons confirmed with 逆向分析 decompile (gold-leaf session)
- Noise-filtered (not in delta): sub_14124B1D0 poison-flag / sub_141899DC0 GLOBAL_PANIC_COUNT / nullsub_1 / alloc size variants

### Termination Evidence (gold-leaf supplement)

| Leaf function | VA | Terminator | Confirmed |
|---|---|---|---|
| `GetSystemTimePreciseAsFileTime` | import | Win32 kernel32 | yes — decompile body |
| `elapsed_since_ts_111` | `0x14107B790` | pure arithmetic (no calls) | yes — decompile body |
| `CloseHandle` (write path) | import | Win32 kernel32 | yes — win32_file_write_bytes_111 body |
| `DeleteFileW` | import | Win32 kernel32 | yes — snooze_file_delete_win32_111 body |
| `SetFileInformationByHandle` | import | Win32 kernel32 | yes — snooze_file_delete_win32_111 body |
| `GetFullPathNameW` | import | Win32 kernel32 | yes — win32_path_canonicalize_111 ref |
| `CloseHandle` (delete fallback) | import | Win32 kernel32 | yes — snooze_file_delete_win32_111 body |

### snooze_file_delete_win32_111 — Terminal Detail (0x14108F810)
```
DeleteFileW(path)
  ├── success → return 0
  └── fail (ACCESS_DENIED=5 only):
      sub_14107C710(path, flags)  ← open with DELETE access
        ├── success → SetFileInformationByHandle(handle, FileRenameInfoEx|FileDispositionInfo, {19}, 4)
        │     ├── success → CloseHandle → return 0
        │     └── fail → GetLastError → CloseHandle → fall through to error return
        └── fail → sub_141074040 (free handle) → fall through
      return (err << 32) | 2  ← Rust Err discriminant
```

### Side-Effect Summary (app-level only)
1. **READ** `auto-switch-pending.json` → deserialize PendingAutoSwitchPayload
2. **WRITE** `auto-switch-snooze.json` → persist AutoSwitchSnoozeRecord {currentAccountKey, candidateAccountKey, dismissedAt}
3. **DELETE** `auto-switch-snooze.json` for OTHER account (if stale snooze exists) — conditional
4. **RESTART GATE**: if old snooze deletion yields a path ≠ None → classify Win32 error → return RestartNeeded variant
   - Win32 5 (ACCESS_DENIED) → io_error_classify returns 1 → RestartNeeded
   - Win32 2 (NOT_FOUND) → io_error_classify returns 0 → no restart
