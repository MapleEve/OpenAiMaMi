# load_skill_backups — AiMaMi 1.1.1 win64 — Pseudocode (Gold-Leaf)
<!-- session=<审计会话> machine=<本地机器> sha=d24e429a delta_class=integrity_recovered -->

## Owner

`load_skill_backups_owner_sys` (renamed from `load_skill_backups_handler_111`) @ **0x140028120** (size 0x38f / 911 bytes)

IPC command string: `"load_skill_backups"` @ 0x1412ac16c
Frontend CCF: `skillsApi.tsx` → `invoke("load_skill_backups")` ← `useSkillsCache.tsx`

---

## 1. Owner Decompiled Body (true 逆向分析 output)

```c
// load_skill_backups_owner_sys @ 0x140028120
// IPC command "load_skill_backups" @ 0x1412ac16c
// Pre-flight: pending_auto_switch lock + query_installed_skills_with_repo gate
// Dispatch: async waiter sub_1407DBD50 → skill_backup_store_load_and_sort_all_111
// Response: load_skill_backups_wrap_and_dispatch_111 → IPC resolver vtable+24
__int64 __fastcall load_skill_backups_owner_sys(__int64 a1)
{
    _BYTE v16[512];   // resolver state from ctx+0
    char  v18[384];   // repo/store handle from ctx+520
    __int64 v38;      // skill list count, ctx+936
    __int128 v37;     // skill list (oword), ctx+920

    sub_141212FB0(v16, a1, 520);           // copy resolver state
    sub_141212FB0(v18, a1 + 520, 400);     // copy repo handle
    v38 = *(_QWORD *)(a1 + 936);           // skill count
    v37 = *(_OWORD *)(a1 + 920);           // skill list ptr+cap

    // Set up IPC command name + request field descriptors
    v22 = (aLoadSkillBacku);              // "load_skill_backups" @ 0x1412ac16c
    // v23 = {len=18, ptr=aRepo}          // "repo" field descriptor
    // v24 = {len=4, ptr=v16}             // resolver slot
    // v25 = &v37                          // skill list ref

    // Pre-flight gate 1: pending auto-switch state lock (read-only)
    v4 = pending_auto_switch_state_lock_acquire_111(ctx+16);  // 0x14006EDC0
    if (!v4) {
        // Pre-flight gate 2: repo validation  ★ NEW IN 1.1.1
        query_installed_skills_with_repo_111(&v31, &v22, &v23+8);  // 0x141214620
        if ((BYTE)v31 != 6) {              // discriminant 6 = None/Err → skip
            // Some(skills) path: delegate to async waiter
            sub_141212FB0(v15, a1+520, 360);
            v34 = *(_OWORD *)(a1+880);
            v35 = *(_QWORD *)(a1+896);
            v22 = 1;
            sub_14080C3C0(v15, v19, &v22, &v34, v20, v21);  // ← NOTE: code goes to LABEL_16
            goto LABEL_16;
        }
        v4 = *((_QWORD *)&v31 + 1);
    }
    // Async waiter path (v31.discriminant == 3, Some)
    sub_1407DBD50(&v27, v4);              // async skill-store waiter 0x1407DBD50
    sub_141212FB0(&v22, a1+520, 400);
    // Pack waiter result into v31 discriminant structure
    // discriminant=3 path: copy 144 bytes from v27 into v31
    // discriminant error path: boxed error copy + WakeByAddressSingle
    // ...
    // Serialize and dispatch response
    load_skill_backups_wrap_and_dispatch_111(&v22, &v31);  // 0x1408333E0

LABEL_16:
    // Cleanup skill list Vec<T> (stride 96 per entry)
    for (i=0; i < v38; i++) {
        sub_14033AB50(v37_ptr + i*96);    // dtor each SkillListEntry
    }
    if (v37) sub_140001370(v37_ptr, 96*v38, 8);  // dealloc vec
    return sub_140042650(v16);            // finalize resolver
}
```

---

## 2. Pre-flight Gate: `query_installed_skills_with_repo_111` @ 0x141214620 ★ NEW IN 1.1.1

```c
// Builds closure over (a2=cmd_name_ptr, a3=field_desc_ptr),
// calls skill_store_get_all_111 → skill_store_iter_111 to enumerate installed skills.
// Returns discriminant 3 (Some/Ok, skills present) or 6 (None/Err, no skills)
__int64 query_installed_skills_with_repo_111(__int64 a1, __int64 a2, __int64 a3)
{
    // v9 = [a3, &sub_140082100, a2, &sub_140082100] — closure capture array
    v9.m256i_i64[0] = a3;
    v9.m256i_i64[1] = (sub_140082100);
    v9.m256i_i64[2] = a2;
    v9.m256i_i64[3] = (sub_140082100);

    sub_1410A1DF0(v6, &unk_1412B0057, &v9);  // closure builder (0x1410A1DF0)
    v10[0] = sub_141222DD0(v6);               // closure thunk invoke (0x141222DD0)

    // Set up skill_store_get_all call via second closure
    v9.m256i_i64[0] = v10;
    v9.m256i_i64[1] = (skill_store_get_all_111);  // 0x14106D960
    sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);

    // Write result discriminant 3 (Some) into a1
    *(_BYTE *)a1 = 3;
    *(_OWORD *)(a1+1)  = result_lo;
    *(_OWORD *)(a1+16) = result_hi;

    return sub_14106D970(v10);  // result cleanup 0x14106D970
}
```

---

## 3. Async Waiter: `sub_1407DBD50` @ 0x1407DBD50

```c
// Waits on skill-store mutex (_InterlockedCompareExchange8).
// Checks off_141899DC0 runtime flag (feature gate).
// Path A (poison guard triggered): calls sub_1410B1930, packs error, WakeByAddressSingle.
// Path B (Ok, discriminant==10): calls skill_backup_store_load_and_sort_all_111,
//   then measures scan time via system_time_precise_u32_111 + elapsed_since_ts_111,
//   packs timed result via sub_140214260, copies 0x90 bytes to output.
// Path C (Err, discriminant!=10): calls sub_140243FC0 → drop_result_inner_111 (sub_140809B30),
//   packs error result.
// All paths: WakeByAddressSingle on completion byte.

if (_InterlockedCompareExchange8(a2, 1, 0)) {
    sub_14124A510(a2);   // spin-wait helper
}
// runtime flag check: off_141899DC0
if (2 * *off_141899DC0) {
    v16 = sub_14124B1D0(a1, a2, a3);  // runtime flag check
    // poison path if flag set
}
// normal path:
skill_backup_store_load_and_sort_all_111(&v42, a2[62], a2[63]);
if (v42.m256i_i32[0] == 10) {           // discriminant 10 = Ok
    // measure elapsed since scan start
    v42.m256i_i32[0] = system_time_precise_u32_111();  // ★ NEW IN 1.1.1
    elapsed_since_ts_111(&v28, &v42, 0xD53E8000, 27111902);  // ★ NEW IN 1.1.1
    v20 = v28.m256i_i8[0] ? 0 : v28.m256i_i64[1];  // lastScanAt value
    // pack timed result
    sub_140214260(&v28, &v42);           // 0x140214260
    sub_141212FB0(v3, &v28, 0x90);      // copy 144 bytes to output
} else {
    sub_140243FC0(&v28, &v37);          // alternate result path
    drop_result_inner_111(&v42);        // sub_140809B30 (5-case switch)
    // pack error result into v3
}
WakeByAddressSingle(Address);           // 0x14124A5D0
```

---

## 4. Filesystem Scanner: `skill_backup_store_load_and_sort_all_111` @ 0x1406ED6C0

```c
// Input: a1=result_out, a2=repo_ptr, a3=repo_len
// Output: *a1 = 10 (Ok discriminant), a1[1..3] = Vec<SkillBackupEntry> {ptr,len,cap}
//         (or *a1 = 10 with empty vec if root NOT_FOUND)
// Stride: 152 bytes per SkillBackupEntry

snooze_file_open_111(&v17, a2, a3);     // open backup root dir (0x14108C6F0)
if ((DWORD)v17 == 2) {
    // NOT_FOUND — return empty Ok vec
    a1[1]=0; a1[2]=8; a1[3]=0;
    goto LABEL_41;  // *a1 = 10, return
}
sub_14108C7E0(&v17, a2, a3);            // read dir handle (0x14108C7E0)
// copy dir state to v21
while (1) {
    sub_140672D70(v15, &v17);           // dir iterator next (0x140672D70)
    if (!v15[0]) break;                 // no more entries
    sub_141212FB0(v16, v15, 600);       // copy entry
    sub_141082A50(&v57, v16);           // get entry metadata (0x141082A50)
    if (sub_14107A370(v58, v59)) {      // is_valid_skill_dir? (0x14107A370)
        // build "metadata.json" path
        sub_14107A2D0(&v55, v78, v6, "metadata.json", 13);  // 0x14107A2D0
        snooze_file_open_111(&v36, path_ptr, path_len);     // open metadata.json
        if ((DWORD)v36 == 2) { /* skip entry */ goto LABEL_12; }
        win32_file_read_bytes_111(&v52, path, len);          // read bytes (0x141093260)
        if (OFSUB(-v52, 1)) { /* read failed, skip */ }
        else {
            sub_140004AA0(v23, &v36);   // JSON parse → SkillBackupMetadata (0x140004AA0)
            if (OFSUB(-v23[0], 1)) {
                sub_1407037D0(v23);     // parse error drop
            } else {
                // extract "skill" subpath
                sub_14107A2D0(&v34, v78, v6, "skill", 5);  // 0x14107A2D0
                sub_141095530(v51, v50);  // validate entry (0x141095530)
                // grow vec if at capacity
                if (v74 == (QWORD)v73) sub_141220A60(&v73);  // 0x141220A60
                // store entry at vec[v74]
                sub_141212FB0(v73_ptr + 152*v74, &v36, 152);
                v74++;
            }
            // cleanup path strings
        }
    }
    // _InterlockedDecrement64(v16[0]) ref-count
}
sub_1401D6AF0(&v17);  // close dir iterator (0x1401D6AF0)

// Sort result vec
if (v74 >= 2) {
    if (v74 >= 21)
        sub_1407B37B0(v73_ptr, v74, &v17);   // timsort-like (0x1407B37B0)
    else
        sub_1401DB8D0(v73_ptr, v74, 1, &v17); // insertion sort (0x1401DB8D0)
}
a1[3] = v74;
*(_OWORD *)(a1+1) = v73;  // {ptr, len}

LABEL_41:
*a1 = 10;   // Ok discriminant
return a1;
```

---

## 5. Response Serializer: `load_skill_backups_response_ser_111` @ 0x140210D20

```c
// Serializes: { "items": [...], "total": u64, "rootPath": str, "lastScanAt": DateTime }
// "{" written first; fields written sequentially; "}" closed by sub_14033FA00
// Field key string VAs:
//   "items"      @ 0x1412BE913 (len=5)
//   "total"      @ 0x1412C0507 (len=5)
//   "rootPath"   @ 0x1412C050C (len=8)  ★ NEW IN 1.1.1
//   "lastScanAt" @ 0x1412C03FC (len=10) ★ NEW IN 1.1.1

// Emit "{"
*(_BYTE *)(*(_QWORD *)(v7+8) + v8) = 123;
*(_QWORD *)(v7+16) = v8+1;

skill_backup_items_array_ser_111(&v15, "items", 5, a1);      // 0x1402687D0
sub_140261480(&v15, "total", 5, a1+56);
sub_14025C400(&v15, "rootPath", 8, a1+24);                  // ★ NEW
sub_1402612D0(&v15, "lastScanAt", 10, a1+48);               // ★ NEW (DateTime ser)
// close "}" via sub_14033FA00
```

---

## 6. Entry Serializer: `skill_backup_entry_ser_111` @ 0x14020EC10

```c
// Stride: 152 bytes per entry
// Field order and offsets:
// "id"           @ entry+0    → sub_14025C400 (string ser)
// "skillID"      @ entry+24   → sub_14025C400
// "name"         @ entry+48   → sub_14025C400
// "title"        @ entry+120  → sub_1402576B0 (alternate string ser)
// "relativePath" @ entry+72   → sub_14025C400
// "backupPath"   @ entry+96   → sub_14025C400  ★ NEW IN 1.1.1
// "createdAt"    @ entry+144  → sub_1402612D0 (DateTime ser)  ★ NEW IN 1.1.1
// String key VAs: id=0x1412BF091, skillID=0x1412C0545, name=0x1412BE5C6,
//   title=0x1412BDB7D, relativePath=0x1412C054C, backupPath=0x1412C0558, createdAt=0x1412BFEC1
```

---

## 7. Wrap-and-Dispatch: `load_skill_backups_wrap_and_dispatch_111` @ 0x1408333E0

```c
// Serializes outer JSON envelope via sub_14022D130:
//   schemaVersion (sub_140261480), success (sub_1402580F0), code+message (sub_14025C400),
//   warnings (relay_response_field_warnings_write_sys @ 0x1402494C0),
//   data (load_skill_backups_response_ser_111)
// On error discriminant: calls sub_140E30410 → sub_140807390 (Result drop)
// Dispatches via IPC resolver vtable call+24:
//   sub_14080C3C0(v13, v4, &v17, *(v3+22)+8, v9, v10)
```

---

## Terminated Reason

Call-tree depth = 6 from handler to leaf. Termination at:
- `win32_file_read_bytes_111` @ `0x141093260` — OS read syscall shim (platform-primitive)
- `skill_backup_entry_ser_111` @ `0x14020EC10` — field-level JSON serialization (response_serialize)
- `WakeByAddressSingle` @ `0x14124A5D0` — OS synchronization primitive (external_call)
- `sub_14033FA00` — JSON object close (external_call)
