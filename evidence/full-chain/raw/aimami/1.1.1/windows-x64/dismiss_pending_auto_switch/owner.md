# dismiss_pending_auto_switch — Owner Summary (Windows x64)
# AiMaMi 1.1.1 win64.exe · gold-leaf session = <审计会话>
# sha d24e429a · machine = <本地机器>

## Owner Function Registry

| Role | Symbol | VA | Size (bytes) | IDB Renamed |
|---|---|---|---|---|
| IPC handler | `dismiss_pending_auto_switch_handler_111` | `0x140029270` | 0x36F | yes |
| Core logic | `dismiss_pending_auto_switch_core_111` | `0x1401B29E0` | 0x88F | yes |
| Dispatch shim | `dismiss_pending_auto_switch_dispatch_111` | `0x14078AA20` | 0x338 | yes |

IPC command string: `"dismiss_pending_auto_switch"` @ `0x1412AC2DB`
Registered in: `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0`

---

## Role Definitions

### dismiss_pending_auto_switch_handler_111 (0x140029270)
IPC entry point. Copies window (520 bytes) and repo (400 bytes) from ipc_ctx, extracts pending-state mutex ptr from ctx+920/936, acquires state lock, then calls dispatch shim. Builds Ok/Error IPC responses. Frees pending_state slots (96-byte × count) and window_ref on exit.

**New in 1.1.1 vs 1.0.9**: handler now reads `"repo"` param (len=4) from IPC args for mutex scoping. 1.0.9 used direct global state access without mutex parameterisation.

### dismiss_pending_auto_switch_core_111 (0x1401B29E0)
Core business logic. Contains the full snooze-file write side-effect chain:
1. Reads `auto-switch-pending.json` → `PendingAutoSwitchPayload`
2. Computes `dismissedAt` via `GetSystemTimePreciseAsFileTime`
3. Writes `AutoSwitchSnoozeRecord` → `auto-switch-snooze.json`
4. Conditionally deletes stale snooze file for OTHER account
5. Classifies Win32 error for restart gate decision

**New in 1.1.1 vs 1.0.9**: entire snooze-file write + stale-delete + restart-gate path absent in 1.0.9. 1.0.9 core only returned `Option<String>` (old pendingSwitchAccountKey or null). 1.1.1 now has three return variants: `Ok(dismissed=true)`, `Ok(RestartNeeded)`, `Err`.

### dismiss_pending_auto_switch_dispatch_111 (0x14078AA20)
Mutex dispatch shim. Acquires inner mutex via CAS (_InterlockedCompareExchange8), runs poison guard check, then calls core. Wraps core result in Ok-type wrapper via sub_140243FC0.

---

## Key Callee Ownership

| Function | VA | New in 1.1.1 | Purpose |
|---|---|---|---|
| `pending_auto_switch_payload_read_111` | `0x1401ABFF0` | no | Reads auto-switch-pending.json, deserializes PendingAutoSwitchPayload |
| `system_time_precise_u32_111` | `0x14107B7E0` | yes | GetSystemTimePreciseAsFileTime → low DWORD |
| `elapsed_since_ts_111` | `0x14107B790` | yes | Converts FILETIME to Duration (secs/nanos since epoch) |
| `relay_config_check_parent_dirs_sys` | `0x1406F2870` | no | Checks relay parent dirs are ready |
| `sub_1403A64F0` (snooze_persist) | `0x1403A64F0` | yes | Calls win32_file_write_bytes_111 to write snooze record |
| `win32_file_write_bytes_111` | `0x141093710` | yes | CreateFile + write loop + CloseHandle |
| `snooze_file_delete_111` | `0x14108BF60` | yes | Canonicalize + DeleteFileW + SetFileInformationByHandle fallback |
| `snooze_file_delete_win32_111` | `0x14108F810` | yes | Win32 leaf: DeleteFileW / fallback FileDispositionInfo delete-on-close |
| `io_error_classify_111` | `0x140152630` | yes | Maps Win32 error codes to Rust io::ErrorKind discriminants |
| `win32_path_canonicalize_111` | `0x1410908E0` | yes | GetFullPathNameW wrapper |

---

## Return Variants (1.1.1)

| Tag | Name | Condition |
|---|---|---|
| `out->tag = 10, flag = 0` | Ok(NotDismissed) | No pending payload found |
| `out->tag = 10, flag = 1` | Ok(Dismissed) | Snooze written, no restart needed |
| `out->tag = 2` | Ok(RestartNeeded) | Stale snooze deleted + io_error_classify ≠ 0; returns snooze_path |
| `out->tag = 3` | Err(JsonError) | JSON serialization failure during snooze write |
| `out->tag = 2 (Err)` | Err(IoError) | File write failure |
