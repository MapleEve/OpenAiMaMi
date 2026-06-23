# dismiss_pending_auto_switch — Windows x64 Pseudocode
# AiMaMi 1.1.1 win64.exe · delta_class = integrity_recovered
# session = <审计会话> · gold-leaf = <审计会话>
# machine = <本地机器> · sha = d24e429a

## Owner Functions

| Role | Name | VA | Size |
|---|---|---|---|
| IPC handler | `dismiss_pending_auto_switch_handler_111` | `0x140029270` | 0x36F |
| Core logic | `dismiss_pending_auto_switch_core_111` | `0x1401B29E0` | 0x88F |
| Dispatch shim | `dismiss_pending_auto_switch_dispatch_111` | `0x14078AA20` | 0x338 |

IPC command string: `"dismiss_pending_auto_switch"` @ `0x1412AC2DB`
Registered in: `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0`

---

## dismiss_pending_auto_switch_handler_111 (0x140029270, 0x36F bytes)

```c
__int64 __fastcall dismiss_pending_auto_switch_handler_111(__int64 ipc_ctx)
{
  // 1. Copy IPC window/repo refs from ctx+0 (520 bytes) and ctx+520 (400 bytes)
  memcpy(window_ref, ipc_ctx, 520);
  memcpy(repo_ref, ipc_ctx + 520, 400);

  // 2. Extract pending-state mutex ptr from ctx+920/936
  pending_state_oword = *(oword*)(ipc_ctx + 920);
  pending_state_extra = *(qword*)(ipc_ctx + 936);

  // 3. Build serde log tag: "dismiss_pending_auto_switch" (len=27) + param "repo" (len=4)
  tag.name    = aDismissPending;  // "dismiss_pending_auto_switch"
  tag.name_len = 27;
  tag.param   = aRepo;            // "repo"
  tag.param_len = 4;

  // 4. Acquire state mutex (CAS-based spin lock)
  result = pending_auto_switch_state_lock_acquire_111(
               pending_state_ptr, repo_ref, window_ref);

  if (!result) {
    // 5a. Dispatch through sub_141214620 to get the pending payload handle
    dispatch_result = sub_141214620(&out_result, &tag, tag.param_ptr);

    if (dispatch_result.tag != 6 /*Ok*/) {
      // 5b. Error path: build error response with sub_14080C3C0
      build_error_response(window_ref, &out_result, success=false, ...);
      goto cleanup;
    }
    payload_handle = dispatch_result.inner_ptr;
  }

  // 6. Get count of items from payload_handle via sub_14078AA20
  //    (dispatch shim → calls dismiss_pending_auto_switch_core_111)
  dismiss_pending_auto_switch_dispatch_111(&dispatch_out, payload_handle);
  count      = dispatch_out.count;
  items_ptr  = dispatch_out.items_ptr;

  // 7. Copy result items if present, then build Ok response via sub_14082F2D0
  if (count > 0) {
    result_bytes = alloc_copy(items_ptr, count);
  }
  build_ok_response(&out_buf, &ok_result);

cleanup:
  // 8. Free pending_state (96-byte slot × count) + window_ref
  free_pending_state_slots(...);
  return cleanup_window_ref(window_ref);
}
```

---

## dismiss_pending_auto_switch_core_111 (0x1401B29E0, 0x88F bytes)

```c
__int64 __fastcall dismiss_pending_auto_switch_core_111(__int64 *out, account_mgr_t *acct)
{
  // 1. Read PendingAutoSwitchPayload from account manager
  //    Uses pending_auto_switch_payload_read_111(0x1401ABFF0)
  //    Reads from acct+648/656 — file path for auto-switch-pending.json
  PendingAutoSwitchPayload payload = pending_auto_switch_payload_read_111(acct);
  if (payload.tag == 2 /*Err*/) {
    out->tag = 10; // not-found / no pending switch
    out->flag = 0;
    return out;
  }

  // 2. Extract DTO fields from payload (80-element qword array v38[]):
  //    currentAccountKey  (v38[10]/v38[11])   — string ptr+len
  //    candidateAccountKey (v38[16]/v38[17])  — string ptr+len
  //    dismissedAt NOT in payload input — generated fresh below
  //    plus several optional fields (snooze config, timestamps)

  // 3. Get current precise timestamp for dismissedAt
  //    system_time_precise_u32_111(0x14107B7E0) → GetSystemTimePreciseAsFileTime low-32
  //    elapsed_since_ts_111(0x14107B790): computes (ref_ts - now) / 10_000_000 → seconds
  u32 now_raw   = system_time_precise_u32_111();  // Windows FILETIME low dword
  Duration elapsed = elapsed_since_ts_111(&out_dur, &now_raw,
                                            3577643008u, 27111902u);
  //    The constants 3577643008 / 27111902 are a fixed reference epoch (Windows FILETIME
  //    at Unix epoch: 116444736000000000 ticks ÷ 10_000_000 → sec + nsec parts).
  //    This yields a Unix-seconds + sub-second Duration struct:
  //      elapsed.sign   @ out+0
  //      elapsed.secs   @ out+8
  //      elapsed.nanos  @ out+16 (= 100 * (ticks % 10_000_000))

  // 4. Check relay parent-dir readiness
  relay_ok = relay_config_check_parent_dirs_sys(acct);  // 0x1406F2870

  if (!relay_ok) {
    // 5. Allocate 128-byte JSON scratch buffer, write opening '{'
    u8 *json_buf = alloc(128, 1);
    json_buf[0] = '{';   // 0x7B

    // 6. Write "currentAccountKey" field
    //    sub_140260580(&json_ctx, "currentAccountKey", 17, &currentAccountKey_val)
    err = json_write_field(&json_ctx, aCurrentaccount_0, 17, &currentAccountKey);
    if (err) goto write_error;

    // 7. Write "candidateAccountKey" field
    //    sub_140260580(&json_ctx, "candidateAccountKey", 19, &candidateAccountKey_val)
    err = json_write_field(&json_ctx, aCandidateaccou_1, 19, &candidateAccountKey);
    if (err) goto write_error;

    // 8. Write "dismissedAt" field (elapsed Duration struct)
    //    sub_140268180(&json_ctx, "dismissedAt", 11, &elapsed)
    err = json_write_duration_field(&json_ctx, aDismissedat_0, 11, &elapsed);
    if (err) goto write_error;

    // 9. Optionally write array of extra records via sub_14033FA00
    //    (JSON newline separator + item serializer loop)
    if (has_extra_records) {
      for i in 0..extra_count:
        json_append_record(json_buf, extra_records_ptr, extra_records_end);
    }
    json_buf_end = json_buf + written_len;

    // 10. Persist AutoSwitchSnoozeRecord to auto-switch-snooze.json
    //     sub_1403A64F0(acct+84*8, json_slice) — file handle at acct+(84*sizeof_ptr)
    //     → win32_file_write_bytes_111(file_handle, path_ptr, path_len, json_buf, json_len)
    //     → CloseHandle after write
    err = sub_1403A64F0((acct + 84), &json_slice);
    if (err) goto write_error;

    // 11. Free currentAccountKey and candidateAccountKey string copies

    // 12. Check if snooze file should be removed (for a DIFFERENT account)
    //     snooze_file_delete_111(0x14108BF60):
    //       a. sub_1410938D0 → get running account list
    //       b. sub_1410908E0 → canonicalize snooze file path (win32_path_canonicalize_111)
    //       c. sub_14108F810 → snooze_file_delete_win32_111:
    //            DeleteFileW(snooze_path)
    //            on ERROR_ACCESS_DENIED(5): open handle, SetFileInformationByHandle
    //            POSIX_SEMANTICS delete-on-close as fallback
    //     Returns Option<path>: Some if file existed and was removed
    Option<path> old_snooze = snooze_file_delete_111(acct->account_id_ptr, acct->account_id_len);

    // 13. If old snooze file existed — classify the IO error code
    //     io_error_classify_111(0x140152630): maps WinError codes to Rust io::ErrorKind
    //     non-zero return ≠ 0 means "need restart" → set out->inner = old_snooze_path
    if (old_snooze != None) {
      u8 needs_restart = io_error_classify_111(old_snooze.path_repr);
      if (needs_restart) {
        out->tag     = 2;  // Ok(RestartNeeded)
        out->inner   = old_snooze_path;
        goto cleanup_and_return;
      }
      // drop old_snooze path
      sub_140041790(&old_snooze);
    }

    // 14. Success: return Ok(dismissed=true)
    out->tag      = 10;
    out->flag     = 1;   // dismissed = true (vs 0 = already dismissed / no-op)
    goto cleanup_and_return;
  }

write_error:
  // 15. Error return: tag=2 or tag=3 (IoError / SerdeError)
  if (json_buf) free(json_buf, 128);
  out->tag   = v10;  // 2=Err, 3=JsonErr
  out->inner = err;

cleanup_and_return:
  // 16. Free all borrowed string fields (currentAccountKey, candidateAccountKey,
  //     dismissedAt duration, optional arrays) — 15+ dealloc calls
  return out;
}
```

---

## Key DTO Shapes

```
struct PendingAutoSwitchPayload {   // "struct PendingAutoSwitchPayload with 5 elements" @ 0x1412ACF73
  currentAccountKey:   String,      // @ v38[10]/v38[11]  (ptr+len)
  candidateAccountKey: String,      // @ v38[16]/v38[17]
  dismissedAt:         Option<Duration>, // NOT in file, generated at dismiss time
  // + 2 more optional fields (snooze config, schedule)
}

struct AutoSwitchSnoozeRecord {     // "struct AutoSwitchSnoozeRecord with 3 elements" @ 0x1412AD107
  currentAccountKey:   String,      // serde key "currentAccountKey"   @ 0x1412AD0D8
  candidateAccountKey: String,      // serde key "candidateAccountKey" @ 0x1412AD0E9
  dismissedAt:         Duration,    // serde key "dismissedAt"         @ 0x1412AD0FC
                                    // = Unix timestamp (secs + nanos) from GetSystemTimePreciseAsFileTime
}
```

Persisted to: `<data_dir>/auto-switch-snooze.json`
File path slot: `acct + 84 * sizeof(ptr)` (i.e. `a2 + 84` in `sub_1403A64F0`)

---

## NEW in 1.1.1 — Key Callee Bodies (gold-leaf supplement)

### system_time_precise_u32_111 (0x14107B7E0)

```c
__int64 system_time_precise_u32_111()
{
  __int64 v1 = 0;  // FILETIME (low+high DWORDs packed)
  GetSystemTimePreciseAsFileTime(&v1);
  return (unsigned int)v1;  // low DWORD only
}
```

Returns: `FILETIME` low DWORD (100-nanosecond intervals since 1601-01-01 00:00:00 UTC).

---

### elapsed_since_ts_111 (0x14107B790)

```c
__int64 __fastcall elapsed_since_ts_111(__int64 out, __int64 *filetime_low, unsigned int ref_lo, __int64 ref_hi)
{
  // Combine reference epoch: (ref_hi << 32) | ref_lo = 3577643008 | (27111902 << 32)
  // = FILETIME of Unix epoch (1970-01-01): 116444736000000000 ticks (× 100ns each)
  // Low 32 bits: 3577643008 = 0xD53E8000 — but passed as separate halves
  __int64 epoch_combined = (ref_hi << 32) | ref_lo;  // 0x019DB1DED53E8000
  __int64 now = *filetime_low;
  bool subtracted_ok = (now >= epoch_combined);
  __int64 delta_ticks = subtracted_ok ? (now - epoch_combined) : (epoch_combined - now);

  *(out + 8)  = delta_ticks / 10_000_000;            // seconds (div by 0x989680)
  *(out + 16) = 100 * (delta_ticks % 10_000_000);   // nanoseconds (100-ns × 100)
  *(out + 0)  = (subtracted_ok ? 0 : 1);             // sign: 0=positive, 1=negative

  return out;
}
// Note: actual 逆向分析 output uses v6=sf, v7=of, v9=carry for carry-borrow detection
// The above is the semantic equivalent
```

Output `Duration` struct layout:
- `out+0`:  sign (u64, 0=positive elapsed from epoch, 1=negative)
- `out+8`:  secs (u64)
- `out+16`: subsec_nanos (u32, = 100 × remaining 100-ns ticks)

---

### sub_1403A64F0 / snooze_persist (0x1403A64F0)

```c
__int64 __fastcall sub_1403A64F0(__int64 file_slot_ptr, _QWORD *json_slice)
{
  // a1 = acct + 84 (qword-aligned slot for snooze file handle)
  // json_slice[0] = len, json_slice[1] = ptr, json_slice[2] = cap
  __int64 result = win32_file_write_bytes_111(
      *(a1 + 8),    // file handle (CreateFile'd path ptr)
      *(a1 + 16),   // path len (wchar count)
      json_slice[1], // json bytes ptr
      json_slice[2]  // json bytes len
  );
  if (*json_slice) {  // if len > 0, free json buf
    sub_140001370(json_slice[1], *json_slice, 1);
  }
  return result;
}
```

---

### win32_file_write_bytes_111 (0x141093710)

```c
void *__fastcall win32_file_write_bytes_111(__int64 path_handle, __int64 path_len, __int64 buf_ptr, unsigned __int64 buf_len)
{
  // Open/create file via sub_14107C990 (CreateFile with GENERIC_WRITE | CREATE_ALWAYS)
  if ((sub_14107C990(path_handle, path_len, &file_ctx) & 1) != 0)
    return error;  // open failed
  HANDLE hObject = file_ctx.handle;
  if (buf_len == 0) goto close_ok;

  // Write loop via sub_14107BF00 (WriteFile chunks)
  while (1) {
    result = sub_14107BF00(&file_handle, buf_ptr, buf_len, 0);
    written = result.bytes_written;
    if (result.status != 1) break;
    // Handle EINTR (ErrorKind 35 = Interrupted) — retry
    if (classify_error(written) == 35) { sub_141074040(&error); continue; }
    if (buf_len == 0) goto close_ok;
  }
  if (written > 0) {
    if (buf_len < written) panic(written, buf_len, &off_1414EB8A0);
    buf_ptr += written; buf_len -= written;
    continue;  // back to write loop
  }
  error_val = written;  // error pointer
close_ok:
  CloseHandle(hObject);
  return error_val;  // 0 = success
}
```
Terminals: `CreateFile`, `WriteFile` (via sub_14107BF00), `CloseHandle`.

---

### snooze_file_delete_111 (0x14108BF60)

```c
__int64 snooze_file_delete_111(__int64 account_id_ptr, __int64 account_id_len)
{
  // Step 1: get running account path list (sub_1410938D0)
  __int64 path_result;
  sub_1410938D0(&path_result);
  if (OFSUB(-path_result, 1)) return path_result.err;  // no path

  // Step 2: canonicalize path with POSIX-semantics flag
  __int64 canonical_path;
  win32_path_canonicalize_111(&canonical_path, path_result, /*posix=*/1);
  if (OFSUB(-canonical_path, 1)) return canonical_path.err;

  // Step 3: delete the actual file
  __int64 result = snooze_file_delete_win32_111(canonical_path);

  // Step 4: free canonical path string
  if (path_result.len) sub_140001370(path_result.ptr, 2 * path_result.len, 2);
  return result;  // 0 = deleted ok; (err << 32) | 2 = failure
}
```

---

### snooze_file_delete_win32_111 (0x14108F810)

```c
__int64 __fastcall snooze_file_delete_win32_111(const WCHAR *path)
{
  // Primary: simple delete
  if (DeleteFileW(path)) return 0;

  DWORD err = GetLastError();
  if (err == ERROR_ACCESS_DENIED /*5*/) {
    // Fallback: POSIX delete-on-close (handle kept open until all refs drop)
    // Open with DELETE access + FILE_FLAG_DELETE_ON_CLOSE semantics via SetFileInformationByHandle
    v9 = sub_14107C710(path, flags);   // CreateFile with DELETE access
    if (v9 & 1) {
      sub_141074040(&handle);           // open failed — free resources
    } else {
      FileInformation[0] = 19;          // FileDispositionInfo = 19 (delete-on-close)
      if (SetFileInformationByHandle(handle, FileRenameInfoEx|FileDispositionInfo, &FileInformation, 4)) {
        CloseHandle(handle);
        return 0;  // success via POSIX semantics
      }
      GetLastError();
      CloseHandle(handle);
    }
  }
  return ((QWORD)err << 32) | 2;  // encode error as Rust Err discriminant
}
```
Terminals: `DeleteFileW`, `GetLastError`, `SetFileInformationByHandle`, `CloseHandle`.

---

### io_error_classify_111 (0x140152630)

Maps a Win32 error value (in Rust tagged-pointer encoding) to a Rust `io::ErrorKind` discriminant (u8).

Input pointer `a1` low 2 bits indicate encoding:
- `0b00`: `*((a1 + 16) as *u8)` — direct byte read
- `0b01`: `*((a1 + 15) as *u8)`
- `0b10`: HIDWORD(a1) = Win32 error code → mapped by large switch
- `0b11`: HIDWORD(a1) = simple index → `min(index, 42)`

Key Win32 mappings (case `0b10`, selected):
```
WinErr 2,3,15,53,67  → 0  (NotFound)
WinErr 5             → 1  (PermissionDenied → "restart needed" when non-zero)
WinErr 8,14          → 38 (OutOfMemory)
WinErr 19            → 17 (ReadOnly)
WinErr 39,112        → 24 (StorageFull)
WinErr 80,183        → 12 (AlreadyExists)
WinErr 109,232       → 11 (BrokenPipe)
WinErr 120           → 36 (Unsupported)
WinErr 121,258       → 22 (TimedOut)
WinErr 123,161,206   → 33 (InvalidInput)
WinErr 10013         → 1  (PermissionDenied)
```

In dismiss_pending_auto_switch context: **non-zero return = "needs restart"**.
WinErr 5 (ACCESS_DENIED on snooze file delete) → returns 1 → triggers RestartNeeded variant.
WinErr 2 (NOT_FOUND, file didn't exist) → returns 0 → no restart needed.

---

### pending_auto_switch_payload_read_111 (0x1401ABFF0) — body for completeness

```c
_QWORD *pending_auto_switch_payload_read_111(_QWORD *out, __int64 acct)
{
  // Read file: acct+648 = path ptr, acct+656 = path len
  __int64 file_bytes;
  sub_141093260(&file_bytes, *(acct+648), *(acct+656));  // win32_file_read_bytes_111

  if (OFSUB(-file_bytes, 1)) {
    sub_140041790(&v9);  // free error
    *out = 2;            // Err tag
    return out;
  }

  // Deserialize: sub_140004C80 = serde_json::from_slice → PendingAutoSwitchPayload (5 fields)
  sub_140004C80(&result, file_bytes_slice);
  if (result.tag != 2) {
    sub_141212FB0(out, &result, 688);  // memcpy 688 bytes = full v38[80] + extras
    return out;
  }

  // Serde error path: free the parsed error, return Err
  *out = 2;
  // ... free error discriminant + string ...
  return out;
}
```
