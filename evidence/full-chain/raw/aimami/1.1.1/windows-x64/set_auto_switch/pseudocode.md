# set_auto_switch — Windows x64 Pseudocode (GOLD LEAF)
# session: <审计会话> / machine: <本地机器>
# delta_class: integrity_recovered
# base: AiMaMi 1.0.9 (already reversed) — covers 1.1.1 delta to gold-leaf standard
# sha: d24e429a  idb: <本地路径>

---

## 1. set_auto_switch_owner_sys  VA=0x1400286B0  size=0x501  [OWNER / ENTRY]

逆向分析 decompile (FastCall, __int64 a1 = InvokeContext ptr):

```c
__int64 __fastcall set_auto_switch_owner_sys(__int64 a1)
{
    // Deserialize resolver blob (a1+0, 520 bytes) and args blob (a1+520, 400 bytes)
    sub_141212FB0(v16,  a1,       520);   // resolver blob
    sub_141212FB0(v18,  a1+520,   400);   // args blob
    v50 = *(_QWORD*)(a1+936);
    v49 = *(_OWORD*)(a1+920);

    // Build IPC arg descriptor: name="set_auto_switch", tag=15, key="repo"
    v22 = (int64)aSetAutoSwitch;   // "set_auto_switch"  VA=0x1412AC1F1
    v23 = {15, aRepo};             // tag=15, "repo"     VA=0x1412AC6D1
    v24 = { 4, v16};               // 4=str, resolver buf
    v25 = &v49;

    // DELTA-NEW: pre-flight pending-switch lock
    // Returns 0 if no pending switch, non-zero if one is active
    v4 = pending_auto_switch_state_lock_acquire_111((char*)(v17+16), v2, v3);  // 0x14006EDC0
    if (!v4) {
        // No pending switch — query installed skills for this repo
        query_installed_skills_with_repo_111(v39, &v22, (char*)&v23+8);   // 0x141214620
        if (LOBYTE(v39[0]) != 6) {    // 6 = Ok tag in this Result encoding
            // skills query error path
            v22 = 1;
            sub_14080C3C0(v15, v19, &v22, &v35, v20, v21);   // IPC error response
            goto LABEL_18;
        }
        v4 = *((_QWORD*)&v39[0]+1);
    }

    // Parse 'enabled' bool from IPC args (tag=7, key="enabled")
    v22 = (int64)aSetAutoSwitch;
    v23 = {15, aEnabled};          // "enabled"  VA=0x1412AC720
    v24 = { 7, v16};               // tag=7 = bool
    v25 = &v49;
    parse_bool_from_ipc_arg_sys(&v40, &v22);   // 0x1402FF1A0

    if ((_BYTE)v40 == 6) {         // 6 = Ok
        // Resolve pending state (reads persisted pending JSON) — DELTA-NEW
        auto_switch_pending_state_resolve_111(&v27, v4, BYTE1(v40));   // 0x140785980

        sub_141212FB0(&v22, a1+520, 400);

        if (!__OFSUB__(0, (_QWORD)v27)) {
            // Ok(state) path: dispatch apply core — DELTA-NEW
            // NOTE: actual apply (schtask CRUD, snooze delete, JSON persist) is inside
            //       auto_switch_pending_state_resolve_111 -> auto_switch_apply_core_111
            // Copy result to v40..v47 and dispatch IPC response
            v47=v34; v46=v33; v45=v32; v44=v31;
            v43=v30; v42=v29; v41=v28; v40=v27;
LABEL_17:
            v53 = 0;
            auto_switch_ipc_response_dispatch_111(&v22, &v40);  // 0x1408387D0
            goto LABEL_18;
        }
        // Error path: build error Result and dispatch
        // ... (omitted: RC string copy + set v40 = Err wrapper, then -> LABEL_17)
    }

    // parse_bool failed path
    v22 = 1;
    sub_14080C3C0(v14, v19, &v22, &v35, v20, v21);

LABEL_18:
    // Cleanup pending ref list (loop: 96-byte stride drop on v49 pending_items)
    if (!__OFSUB__(0, (_QWORD)v49)) {
        v11 = *((_QWORD*)&v49+1);
        while (v51 != v52) {
            ++v52;
            v12 = v11 + 96;
            sub_14033AB50();      // has_notch_arc_listener_drop_loop
            v11 = v12;
        }
        if ((_QWORD)v49)
            sub_140001370(*((_QWORD*)&v49+1), 96*v49, 8);  // dealloc
    }
    return sub_140042650(v16);
}
```

Key strings confirmed in IDB:
- `aSetAutoSwitch` VA=0x1412AC1F1 → `"set_auto_switch"`
- `aRepo`          VA=0x1412AC6D1 → `"repo"`
- `aEnabled`       VA=0x1412AC720 → `"enabled"`

---

## 2. pending_auto_switch_state_lock_acquire_111  VA=0x14006EDC0  [DELTA-NEW]

逆向分析 decompile (FastCall, char* Address = atomic spinlock byte):

```c
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(
    char *Address,   // spinlock byte ptr (a1)
    __int64 a2,
    __int64 a3)
{
    // CAS spinlock acquire: _InterlockedCompareExchange8(Address, 1, 0)
    // If already 1 (locked): park via sub_14124A510 (WaitOnAddress spin loop)
    LOBYTE(Address) = 1;
    if (_InterlockedCompareExchange8(Address, 1, 0))   // != 0 means already locked
        sub_14124A510(Address);                         // park / spin

    // Poison check: 2 * *off_141899DC0 = global panic count * 2
    // If poisoned: Address[1] = 1 → panic path
    if (!(2 * *off_141899DC0)) {       // no panic -> normal path
        // Check Address[1] (poison byte)
        if (!Address[1])
            goto LABEL_5;             // no poison
    }
    // Poison path: emit "called Result::unwrap() on an Err value" panic
    sub_14124BFE0(aCalledResultUn, 43, &v23, &off_1412ADB00, &off_1412AEEC0);

LABEL_5:
    // Scan pending items hashtable for collision (SIMD SSE2 search)
    if (*((_QWORD*)Address+4)) {       // pending_items list non-empty
        // SIMD scan using xmmword_14124E090/xmmword_14124E0A0 masks
        // vtable dispatch at offset +24: (vtable[+24])(consumer, item_ptr, a3)
        // Returns v16 = found pending item ptr (non-zero if collision found)
        // ...SSE2 scan omitted for brevity...
        // After dispatch: release spinlock
        *Address = 0;
        if (*Address == 2)
            WakeByAddressSingle(Address);   // 0x14124A5D0
    } else {
        // No pending items: check poison, release lock
        if (!v6 && 2 * *v5 && !sub_14124B1D0(...))
            Address[1] = 1;   // set poison byte
        v16 = 0;
        *Address = 0;         // release spinlock
        if (*Address == 2)
            WakeByAddressSingle(Address);
    }
    return v16;   // 0 = no pending switch, non-zero = collision
}
```

---

## 3. auto_switch_pending_state_resolve_111  VA=0x140785980  [DELTA-NEW]

逆向分析 decompile (simplified; spinlock wrapper around state read):

```c
void auto_switch_pending_state_resolve_111(
    __int128 *out,       // a1: Result<PendingState>
    __int64   lock_ptr,  // a2: spinlock addr (v4 from owner)
    char      enabled_byte) // a3: BYTE1 of parsed bool
{
    // CAS spinlock: _InterlockedCompareExchange8(lock_byte, 1, 0)
    // On collision: sub_14124A510 spin park
    // Poison check: off_141899DC0 * 2
    //   if poisoned -> panic "poisoned lock: another task failed inside"
    if (lock_byte[1] != 0)
        sub_14124BFE0("called Result::unwrap() on an Err value", ...);

    // Read persisted auto-switch state
    let raw = sub_1401A1480(ctx.pending_state_storage);

    // Fill *out = Ok(PendingState) tag=3
    *out = Ok(raw);   // tag byte = struct discriminant 3

    // Release spinlock: *lock_byte = 0; if was 2 -> WakeByAddressSingle
    WakeByAddressSingle(lock_byte);
}
```

---

## 4. auto_switch_apply_core_111  VA=0x1401A4EB0  size≈0x2C0  [KEY DELTA FN]

逆向分析 decompile (full):

```c
__int64 __fastcall auto_switch_apply_core_111(
    __int64 a1,   // out: Result<AutoSwitchRecord>
    __int64 a2,   // relay_state ptr
    char    a3)   // enabled flag
{
    // Load previous auto-switch state from relay_state
    sub_1401A1480(&v35, a2);   // reads persisted state JSON from relay

    if ((_DWORD)v35 == 10) {   // 10 = Ok
        if ((_BYTE)v40 == 2)   // 2 = None/disabled prev state
        {  v6 = 0; goto LABEL_9; }
        // else: copy prev state fields -> v49..v53
    } else {
        // Compute elapsed time since last state change
        LODWORD(v49) = system_time_precise_u32_111();    // 0x14107B7E0
        elapsed_since_ts_111(&v54, &v49, 0xD53E8000, 27111902);  // 0x14107B790
        // 0xD53E8000 / 27111902 ≈ 5-minute threshold marker
        v52 = (_BYTE)v54 ? 0 : *((_QWORD*)&v54+1);
        DWORD1(v53) = 2;
        usage_fetch_error_drop_111(&v35);   // 0x1401D4C70 drop helper
    }

LABEL_9:
    // Set current time marker
    LODWORD(v42) = system_time_precise_u32_111();
    elapsed_since_ts_111(&v54, &v42, 0xD53E8000, 27111902);
    *(_QWORD*)&v52 = (_BYTE)v54 ? 0 : *((_QWORD*)&v54+1);

    // Persist initial state (pre-schtask)
    LOBYTE(v10) = 1;
    auto_switch_state_persist_json_111(&v54, a2, &v49, v10);  // 0x1401A6C10

    if ((_DWORD)v54 != 10) goto LABEL_24;  // persist failed

    if (!a3) {
        // ===== DISABLE PATH =====
        // 1. Delete Windows scheduled task
        schtask_codexmate_autoswitch_delete_111(&v54,       // 0x14079F480
            *(_QWORD*)(a2+840), *(_QWORD*)(a2+848));
        if ((_DWORD)v54 == 10) {   // Ok
            // 2. Delete snooze file (call #1)
            v16 = snooze_file_delete_111();   // 0x14108BF60
            if (v16) {
                if (io_error_classify_111(v16)) goto LABEL_22;
                *(_QWORD*)&v54 = v16;
                sub_140041790(&v54);
            }
            // 3. Delete snooze file (call #2 — different account slot)
            v18 = snooze_file_delete_111();
            if (!v18)
                goto LABEL_23;
            if (!io_error_classify_111(v18)) {
                *(_QWORD*)&v54 = v18;
                sub_140041790(&v54);
                goto LABEL_23;
            }
LABEL_22:
            *(_QWORD*)&v54 = 2;
            *((_QWORD*)&v54+1) = v17;
            usage_fetch_error_drop_111((u64*)&v54);
LABEL_23:
            v19 = 0;  // schtask_running = 0 on disable path
            goto LABEL_33;
        }
    } else {
        // ===== ENABLE PATH =====
        // 1. Get exe path (GetModuleFileNameW loop)
        exe_path_get_for_schtask_111(&v54);   // 0x141089D70
        if (__OFSUB__(-(__int64)v54, 1)) {    // path retrieval failed
            // build error string via sub_1410A1DF0
            *(_QWORD*)(a1+8) = 9;   // error tag
            goto LABEL_25;
        }

        // 2. Register schtask: schtasks /Create /SC MINUTE /MO 5 /TN CodexMateAutoSwitch /TR <exe> /F
        daemon_schtasks_register_sys(&v54, a2+840, a2+848, ...);  // 0x14079EF00
        if ((_DWORD)v54 == 10) {   // Ok
            if (v64)
                sub_140001370(v63, v64, 1);
            v19 = v53;   // carry enabled flag forward
            goto LABEL_33;
        }
        // schtask register failed -> error path
        *(_QWORD*)a1 = 0x8000000000000000ULL;
        // ... copy error fields, optionally free exe_path ...
        goto LABEL_26;
    }

LABEL_24:
    // persist failed -> error out (copy v54 error to a1)
    *(_QWORD*)a1 = 0x8000000000000000ULL;
    goto LABEL_26;

LABEL_33:
    // Both paths converge here: query schtask status
    v29 = schtask_codexmate_autoswitch_query_111();   // 0x14079F5C0
    // Returns: 0=running, 1=other, 2=not_found

    // Alloc 22 bytes for bundle_name string
    v31 = sub_140001360(22, 1);
    if (!v31) sub_14124BCCB(1, 22);   // OOM panic

    if (v19 == 2) {                    // was disable path schtask result
        LODWORD(v12) = 0;
        LODWORD(v6)  = 0;
    }

    // Copy bundle name: "dev.aimami.auto-switch" (22 bytes)  — NEW IN 1.1.1
    qmemcpy(v31, "dev.aimami.auto-switch", 22);

    // Build AutoSwitchRecord struct on stack:
    v42 = 22;                // bundle_name len
    v43 = v31;               // bundle_name ptr
    v44 = 22;                // capacity
    v45 = (int)v6;           // updatedAt_low (timestamp low)
    v46 = (int)v12;          // updatedAt_high (timestamp high)
    v47 = (v19 & 1);         // enabled: bool (normalize to 0/1)
    v48 = v29;               // schtask_running: 0=running, 1=other, 2=not_found

    // Serialize record to IPC response format
    sub_140214570(&v54, &v42);

    // Copy serialized record to output a1 (7 OWORD fields at a1+0..a1+112)
    *(_QWORD*)(a1+112) = v61;
    *(_OWORD*)(a1+ 96) = v60;
    *(_OWORD*)(a1+ 80) = v59;
    *(_OWORD*)(a1+ 64) = v58;
    // v32/v33/v34 = v54/v55/v56
    *(_OWORD*)(a1+ 48) = v57;
    *(_OWORD*)(a1+ 32) = v34;
    *(_OWORD*)(a1+ 16) = v33;
    *(_OWORD*)(a1+  0) = v32;

LABEL_26:
    sub_140047480(&v49);   // drop/cleanup pending state
    return a1;
}
```

**Delta vs 1.0.9**: `auto_switch_apply_core_111` is entirely new. 1.0.9 had no schtask CRUD,
no `dev.aimami.auto-switch` bundle string, no snooze file management, no `enabled=false` delete path.

---

## 5. auto_switch_state_persist_json_111  VA=0x1401A6C10  [DELTA-NEW]

逆向分析 decompile (simplified key path):

```c
__int64 __fastcall auto_switch_state_persist_json_111(
    __int64 *a1,   // out: Result<()>
    _QWORD  *a2,   // relay_state ptr
    __int64  a3,   // payload: AutoSwitchRecord
    char     a4)   // is_enable: bool
{
    // Pre-check parent directory chain (9 path checks against relay config)
    result = relay_config_check_parent_dirs_sys(a2);  // 0x1406F2870
    if (result) {
        *a1   = 2;       // Err tag
        a1[1] = result;
        return result;
    }

    if (a4) {   // enable path only:
        v9 = a2[37];   // snooze src path ptr
        v10 = a2[38];  // snooze dst path ptr
        // Open existing snooze file for timestamp comparison
        snooze_file_open_111(&v40);   // 0x14108C6F0

        if ((_DWORD)v40 == 2) {
            // No existing snooze file -> skip backup copy
            *(_QWORD*)&v35 = 2;
        } else if ((_QWORD)v40 != 2) {
            // Snooze file found: check elapsed time (5-min threshold)
            LODWORD(v35) = system_time_precise_u32_111();
            elapsed_since_ts_111(&v40, &v35, 0xD53E8000, 27111902);
            // If threshold exceeded: backup copy
            // sub_1410A1DF0: display format helper
            sub_14107A2D0(&v40, a2[49], a2[50], v33, v34);
            // CopyFileExW(src, dst) via snooze_file_backup_copy_111
            v26 = snooze_file_backup_copy_111(v9, v10, *((_QWORD*)&v40+1), ...);  // 0x14108C340
        }
    }

    // === JSON serialization (all paths) ===
    // Read items array from a3 (AutoSwitchRecord layout)
    sub_140363970(&v35, a3);  // read items list
    // Format timestamp
    sub_1410A2210(&v45, a3+24);  // format updatedAt

    // Allocate 128-byte JSON buffer
    v15 = (_BYTE*)sub_140001360(128, 1);   // alloc
    if (!v15) sub_14124BCCB(1, 128);       // OOM panic
    *v15 = '{';   // JSON open brace (ASCII 123)
    v46 = 1;

    // Write JSON key-value pairs (serde_json pattern):
    //   key "updatedAt"        (9 chars)  via sub_140268180
    //   key "activeAccountKey" (16 chars) via sub_1402662D0
    //   key "items"            (5 chars)  via sub_14025F4E0
    //     -> array open + items via sub_1401F78F0
    //     -> array close       via sub_1401F7870
    //   object close '}'       via sub_1401F7950
    v18 = sub_140263D50(&v47, &qword_1412B6550, 13, (char*)&v43+4);   // key="updatedAt"?
    v18 = sub_140268180(&v47, aUpdatedat_0, 9, &v42);    // "updatedAt" value (u32)
    v18 = sub_1402662D0(&v47, aActiveaccountk_0, 16, &v41.m256i_i64[1]);  // "activeAccountKey"
    v18 = sub_14025F4E0(&v47, aItems_0, 5, &v40);        // "items" array open
    v18 = sub_1401F78F0(&v47, (char*)&v42+8);            // write array items
    v18 = sub_1401F7870(&v47, (char*)&v43+8);            // array close ']'
    sub_1401F7950(&v29);                                  // object close '}'

    // DB write: relay_manager_state struct at a2+36
    v30 = v45; v31 = v46;
    v18 = sub_1403A64F0((__int64)(a2+36), &v30);   // persist JSON bytes
    if (!v18) {
        *a1 = 10;   // Ok tag
        return sub_140047480(&v40);
    }
    // error path
    *a1   = v21;   // error tag
    a1[1] = v18;
    return sub_140047480(&v40);
}
```

**Confirmed JSON schema** (serde strings in IDB):
- `aUpdatedat_0`      VA=0x1412B6C28 → `"updatedAt"`
- `aActiveaccountk_0` VA=0x1412B6C31 → `"activeAccountKey"`
- `aItems_0`          VA=0x1412B6C41 → `"items"`

---

## 6. daemon_schtasks_register_sys  VA=0x14079EF00  [DELTA-NEW]

```c
Result<()> daemon_schtasks_register_sys(exe_path: &str, ...) {
    // Build arg vector for process spawn:
    //   "schtasks" "/Create" "/SC" "MINUTE" "/MO" "5"
    //   "/TN" "CodexMateAutoSwitch" "/TR" <exe_path> "/F"
    // sub_1410828F0: cmd vec init
    // sub_1410827D0: push_arg (called x8, one per arg segment)
    // sub_1410878D0: spawn + WaitForSingleObject + collect exit code
    // sub_14070B280: parse exit code -> Ok(10) / Err(IoError)
    // Returns Ok(10) on success, Err on non-zero exit
}
```

---

## 7. schtask_codexmate_autoswitch_query_111  VA=0x14079F5C0  [DELTA-NEW]

```c
u8 schtask_codexmate_autoswitch_query_111() {
    // CMD: schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV
    // sub_1410828F0 + sub_1410827D0 x6: build arg list
    // sub_1410878D0: spawn + capture stdout
    // sub_14109FB90: parse CSV output
    // sub_1410A0350: extract status field from CSV row
    // sub_14072E9F0: case-insensitive strcmp with "running" (7 bytes)
    // Returns:
    //   0 = status field matched "running" (task is executing)
    //   1 = other status string
    //   2 = exec error / task not found
}
```

---

## 8. schtask_codexmate_autoswitch_delete_111  VA=0x14079F480  [DELTA-NEW]

```c
() schtask_codexmate_autoswitch_delete_111(out, ...) {
    // CMD: schtasks /Delete /TN CodexMateAutoSwitch /F
    // sub_1410878D0: spawn + wait
    // Always sets *out = Ok(10) regardless of schtasks exit code
    // (best-effort delete — errors silently ignored)
}
```

---

## 9. snooze_file_delete_111  VA=0x14108BF60  [DELTA-NEW]

```c
Option<IoError> snooze_file_delete_111() {
    sub_1410938D0(...)          // get running account dir path (wide string)
    win32_path_canonicalize_111(...)  // 0x1410908E0: PathCanonicalize(path)
    snooze_file_delete_win32_111(...) // 0x14108F810
    //   -> DeleteFileW(path)
    //   -> on ERROR_ACCESS_DENIED (5):
    //       open handle + SetFileInformationByHandle(FileDispositionInfo|FileRenameInfoEx=19)
    //       CloseHandle
    // Returns None on success, Some(IoError) on failure
}
```

---

## 10. snooze_file_backup_copy_111  VA=0x14108C340  [DELTA-NEW]

```c
bool snooze_file_backup_copy_111(src_path: PCWSTR, dst_path: PCWSTR, ...) -> bool {
    // CopyFileExW(src, dst, NULL ProgressRoutine, &dwData=0, NULL, 0)
    // Returns false on failure (GetLastError recorded in err slot)
}
```

---

## 11. exe_path_get_for_schtask_111  VA=0x141089D70  [DELTA-NEW]

```c
void exe_path_get_for_schtask_111(out: *Result<WStr>) {
    exe_path_get_win32_111(out)  // 0x141091130
    //   -> GetModuleFileNameW(NULL, buf, buf_len)
    //   -> if ERROR_INSUFFICIENT_BUFFER: double buf_len and retry (loop)
    //   -> canonicalize result
}
```

---

## Terminated leaf set (Win32 / IPC primitives — no further app callees)

| Function                    | Termination reason           |
|-----------------------------|------------------------------|
| `WakeByAddressSingle`       | Win32 kernel primitive       |
| `_InterlockedCompareExchange8` | CPU interlocked primitive |
| `DeleteFileW`               | Win32 file primitive         |
| `SetFileInformationByHandle`| Win32 file primitive         |
| `CloseHandle`               | Win32 primitive              |
| `CopyFileExW`               | Win32 file primitive         |
| `GetModuleFileNameW`        | Win32 process primitive      |
| `GetLastError`              | Win32 primitive              |
| `sub_1403A64F0`             | DB slot write (opaque leaf)  |
| `vtable[+24](consumer)`     | IPC response vtable dispatch |
| `sub_14080C3C0`             | IPC error response dispatch  |
