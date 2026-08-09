# pseudocode — delete_skill_backup (AiMaMi 1.1.1 win64) — GOLD LEAF

session: <审计会话>
machine: <本地机器>
platform: windows-x64
delta_class: integrity_recovered
idb: <本地路径>
<工具调用>d: true
sha: d24e429a

---

## Owner VA / Function Map

| VA | Name | Size | Role |
|---|---|---|---|
| 0x140024D90 | delete_skill_backup_owner_sys | 0x511 | IPC handler / serde entry |
| 0x1406EF5E0 | delete_skill_backup_core_111 | 0x2C2 | Core FS logic |
| 0x1407DC490 | delete_skill_backup_async_wrapper_111 | 0x475 | Async spawn wrapper |
| 0x140211890 | delete_skill_backup_response_ser_111 | 0x118 | **NEW 1.1.1** response serializer |
| 0x140262BA0 | sub_140262BA0 | 0xF9 | JSON comma+colon field separator emitter |
| 0x1406ED6C0 | skill_backup_store_load_and_sort_all_111 | large | Dir-enumerate, metadata.json read, Vec<SkillBackup> build + sort |

---

## IPC Registration Confirmation (dim1)

```
tauri_ipc_main_dispatcher_sys (0x14000D2A0)
  call at 0x14000F754 → delete_skill_backup_owner_sys (0x140024D90)
  data ref  0x1414FDF5C  (jump table / command dispatch table)
  data ref  0x14189EB90  (vtable)
  command string: "delete_skill_backup" @ 0x1412AC1AA (len=19)
```

---

## Owner / IPC Handler — REAL DECOMPILER BODY (0x140024D90)

```c
// IPC command: "delete_skill_backup"
// Registered via tauri_ipc_main_dispatcher_sys (0x14000D2A0) at 0x14000F754
// REQUEST DTO: { repo: String, id: String }  — SAME AS 1.0.9
__int64 __fastcall delete_skill_backup_owner_sys(__int64 a1)
{
  // a1 = Tauri InvokeMessage context
  // v16[512], v18[384] — local arg struct copies (sub_141212FB0 memcpy)
  // v22/v23 — dispatch table search args (key "repo", len=4 @ aRepo=0x1412AC6D1)
  // v38(__m256i) — serde field result discriminant

  sub_141212FB0(v16, a1, 520);          // copy 520B invoke context → local
  sub_141212FB0(v18, a1 + 520, 400);    // copy 400B invoke context tail

  // --- Lookup "repo" field ---
  v22 = aDeleteSkillBac;                // 0x1412AC1AA "delete_skill_backup" (len=19)
  v23.i64[0] = 19;
  v23.i64[1] = aRepo;                   // 0x1412AC6D1 "repo" (len=4)
  v23.i64[2] = 4;
  v23.i64[3] = v16;
  v24 = &v46;
  v4 = pending_auto_switch_state_lock_acquire_111(v17+16, v2, v3);  // spinlock dispatch
  if (!v4) {
    query_installed_skills_with_repo_111(&v38, &v22, &v23.i64[1]);  // serde validate repo
    if (v38.i8[0] != 6) {           // 6 = Ok discriminant
      // ERROR: missing/invalid repo field
      sub_14080C3C0(v15, v19, &v22, &v34, v20, v21);  // Tauri JSON error emitter
      goto LABEL_18;
    }
    v4 = v38.i64[1];               // repo string ptr
  }

  // --- Lookup "id" field ---
  v22 = aDeleteSkillBac;           // reuse command name string
  v23.i64[0] = 19;
  v23.i64[1] = aId_0;             // 0x1412AC77D "id" (len=2)
  v23.i64[2] = 2;
  v23.i64[3] = v16;
  remove_skill_parse_id_param_111(&v39, &v22);   // serde extractor for id
  if (v39.i8[0] == 6) {           // 6 = Ok
    v37 = v39.i64[3];             // id len
    v36 = *(oword*)&v39.u64[1];  // id ptr/len pair
    // --- Dispatch async ---
    delete_skill_backup_async_wrapper_111(&v26, v4, &v36);
    sub_141212FB0(&v22, a1 + 520, 400);   // cleanup / arc decrement prep

    // Check async result discriminant in v26.i64[0]
    if (!__OFSUB__(0, v26.i64[0])) {
      // Ok path: string copy of result + send Tauri response
      sub_140839880(&v22, &v39);
      goto LABEL_18;
    }
    // ...string ref counting (v26 result carrier) then LABEL_17 → LABEL_18
  } else {
    // ERROR: missing/invalid id field
    sub_14080C3C0(v14, v19, &v22, &v32, v20, v21);   // Tauri JSON error emitter
  }
LABEL_18:
  // Cleanup: arc decrement loop on v46 (InvokeMessage Arc<T> items, stride=96B)
  while (v48 != v49) {
    ++v49;
    sub_14033AB50();
    v11 = v12 + 96;
  }
  if (v46) sub_140001370(*(v46+1), 96 * v46, 8);
  return sub_140042650(v16);   // drop local arg struct
}
```

---

## Async Wrapper — REAL DECOMPILER BODY (0x1407DC490)

```c
// Spinlock-protected async task wrapper.
// Reads repo/id from args at byte offsets +464/+472.
__int64 __fastcall delete_skill_backup_async_wrapper_111(__int64 a1, __int64 a2, _QWORD *a3)
{
  // Spinlock: _InterlockedCompareExchange8(a2, 1, 0)
  // If contended: sub_14124A510(a2) [spin-wait]
  if (_InterlockedCompareExchange8((volatile signed __int8 *)a2, 1, 0))
    sub_14124A510((volatile void *)a2);

  // Poison-check on RwLock via sub_1410B1930
  // (panics if "poisoned lock: another task failed inside")
  if (sub_1410B1930(aPoisonedLockAn, 41, &v36)) sub_14124BFE0(...);

  // --- Core call: args at byte offsets 464 and 472 ---
  delete_skill_backup_core_111(&v43, *(QWORD*)(a2+464), *(QWORD*)(a2+472), a3[1], a3[2]);

  if ((int)v43 == 10) {   // discriminant 10 = Ok
    v31 = *(v43+1);
    v32 = v44; v33 = v45;
    sub_140215BF0(&v36, &v31);     // response struct builder (sets "ok"/"Success" constants)
    // Copy result owords into output context (v4 = a1)
    *(oword*)(v4+0)  = v36; *(oword*)(v4+16) = v37;
    *(oword*)(v4+32) = v38; *(oword*)(v4+48) = v39;
    *(oword*)(v4+64) = v40; *(oword*)(v4+80) = v41;
    *(oword*)(v4+96) = v42;
    // sub_140262BA0 (comma+colon) → delete_skill_backup_response_ser_111
    // serializes {deletedBackupID, remainingBackupCount}
    WakeByAddressSingle(Address);  // resolve Tauri async future
  } else {
    // Error path: sub_140243FC0 (format error) → drop_result_inner_111 (0x140809B30)
    sub_140243FC0(&v36, v49);
    sub_140809B30(&v43);          // drop error variant
    *(QWORD*)v4 = 0x8000000000000000uLL;  // error tag
    WakeByAddressSingle(Address);
  }
  // Cleanup a3[0] (string ref)
  if (*a3) sub_140001370(a3[1], *a3, 1);
  return v4;
}
```

---

## Core FS Logic — REAL DECOMPILER BODY (0x1406EF5E0)

```c
// Signature: (result_out, repo_ptr, repo_len, id_ptr, id_len)
// String literals:
//   0x1412EBFED = "skill-backups" (len=13)
//   0x1412EC063 = "Backup not found: " context byte (len=18 phrase)
// Returns: discriminant 10 = Ok((id:str, remaining_count:u32)), 2 = Err(str), 7 = Err(OSstr)
_QWORD *__fastcall delete_skill_backup_core_111(__int64 a1, __int64 a2, __int64 a3,
                                                  __int64 a4, __int64 a5)
{
  // --- Path construction ---
  sub_14107A2D0(&v35, a2, a3, &unk_1412EBFED, 13);   // join skill-backups/<repo>
  sub_14107A2D0(&v37, *(v35+1), v36, a4, a5);         // join /<id>

  // --- UTF-8 → UTF-16 for Windows path ---
  snooze_file_open_111(&v27, *(v37+1), v38);   // sub_14108C6F0 aliased
  if ((int)v27 == 2) {                          // Err: path encode failed
    sub_1402F87A0(v28);
    v27 = v39;  v28 = sub_140082100;
    sub_1410A1DF0(&v25, &unk_1412EC063, &v27); // build "Backup not found: <id>" error
    *(a1+24) = v26; *(oword*)(a1+8) = v25; *a1 = 7;  // return Err(7) = OsStr error
    goto cleanup;
  }

  // --- Path-exists check ---
  v10 = sub_14108C150(v41, v38);   // sub returns 0 if path exists
  if (!v10) {
    // --- Path exists: load+delete ---
    skill_backup_store_load_and_sort_all_111(&v27, v42, v7);   // enumerate, delete, sort
    if ((int*)v27 != (int*)10) {
      // Propagate error from load_all
      *(oword*)(a1+80) = v34; *(oword*)(a1+64) = v20;
      *(oword*)(a1+48) = v19; *(oword*)(a1+32) = v18;
      *(QWORD*)(a1+8)  = v12; *(QWORD*)(a1+16) = v13;
      *(QWORD*)(a1+24) = v14; *a1 = (QWORD*)v27[0];
      goto cleanup;
    }
    // Ok(10): carry id string into result
    // Build return: a1[8]=id_len, a1[16]=id_ptr_copy, a1[24]=id_len, a1[32]=remaining_count
    *(QWORD*)(a1+8)  = a5;    // id len
    *(QWORD*)(a1+16) = v24;   // id ptr (copied via sub_140001360 + sub_141212FB0)
    *(QWORD*)(a1+24) = a5;    // id len again (for DTO field)
    *(DWORD*)(a1+32) = v16;   // remaining backup count (u32)
    *a1 = 10;                  // Ok discriminant
    goto cleanup;
  }
  // path doesn't exist: Err(2)
  *a1 = 2; *(a1+8) = v10;

cleanup:
  if ((QWORD)v35) sub_140001370(v42, v35, 1);   // drop skill-backups/<repo> path
  return (QWORD*)a1;
}
```

---

## Dir-Enumerate-Delete (Deep FS Worker) — REAL DECOMPILER BODY (0x1406ED6C0)

```c
// skill_backup_store_load_and_sort_all_111
// Entry: (result_out, repo_path_ptr, repo_path_len)
// Vec<SkillBackup> entry size = 152 bytes. Sort: n<21 → sub_1401DB8D0, n>=21 → sub_1407B37B0
// String literals used:
//   0x1412EC051 = "metadata.json" (len=13)  — path join for metadata check
//   0x1412EC05E = "skill"         (len=5)   — directory kind filter
_QWORD *__fastcall skill_backup_store_load_and_sort_all_111(_QWORD *a1, __int64 a2, __int64 a3)
{
  // v73 = Vec header (ptr, cap=8 initial), v74 = len=0
  *((QWORD*)&v73)   = 0;
  *((QWORD*)&v73+1) = 8;
  v74 = 0;

  // Open dir handle via snooze_file_open_111 (UTF8→UTF16 + CreateFileW)
  snooze_file_open_111(&v17, a2, a3);
  if ((int)v17 == 2) {          // Err: dir open failed
    a1[1]=0; a1[2]=8; a1[3]=0;
    goto LABEL_41_return_ok_empty;
  }
  // Init ReadDirectory via sub_14108C7E0
  sub_14108C7E0(&v17, a2, a3);
  if ((int)v17 == 2) { v22=v18; v21=2; goto LABEL_38_cleanup_err; }

  sub_141212FB0(&v21, &v17, 624);   // copy dir iterator state
  if (v21 == 2) goto LABEL_38_cleanup_err;
  sub_141212FB0(v20, &v21, 624);    // local copy for iteration

  // --- Dir entry iteration loop ---
  while (1) {
    sub_140672D70(v15, &v17);        // ReadDirectoryChanges: next DirEntry → v15
    if (!v15[0]) break;              // no more entries
    sub_141212FB0(v16, v15, 600);    // copy DirEntry (600B struct)
    sub_141082A50(&v57, v16);        // DirEntry name → OsStr (v57=ptr, v58=len, v59=len2)
    v6 = v59; v78 = v58;

    if (sub_14107A370(v58, v59)) {   // is_dir check (metadata bit)
      // --- Process backup directory entry ---
      sub_14107A2D0(&v55, v78, v6, &unk_1412EC051, 13); // join "metadata.json"
      v7 = v56; v77 = *(v55+1);

      snooze_file_open_111(&v36, *(v55+1), v56);        // open metadata.json path
      if ((int)v36 == 2) goto LABEL_12_skip_entry;      // not a valid backup dir

      win32_file_read_bytes_111(&v52, v77, v7);          // fs::read metadata.json bytes
      if (__OFSUB__(-v52, 1)) goto cleanup_and_skip;     // read error

      // delete backup dir: sub_140004AA0 (remove_dir_all adapter)
      sub_140004AA0(v23, &v36);
      if (__OFSUB__(-v23[0], 1)) {
        sub_1407037D0(v23);    // drop/cleanup on remove error
      } else {
        // build "skill" path and serialize backup entry to JSON via sub_141095530
        sub_14107A2D0(&v34, v78, v6, &unk_1412EC05E, 5); // join "skill" path
        sub_141095530(v51, v50);   // serialize SkillBackupEntry to JSON
        // Vec::push: grow if needed (sub_141220A60), then memcpy 152B
        if (v74 == (QWORD)v73) sub_141220A60(&v73);
        sub_141212FB0(*(v73+1) + 152*v13, &v36, 152);   // copy 152B struct into Vec slot
        v74 = v13 + 1;
      }
    }
LABEL_12_skip_entry:
    // Arc decrement on DirEntry: _InterlockedDecrement64(v16[0])
    if (!_InterlockedDecrement64(v16[0])) sub_141030540(v16);
  }

  sub_1401D6AF0(&v17);  // close dir iterator

LABEL_39:
  // Sort remaining Vec if len >= 2
  if (v74 >= 2) {
    if (v74 >= 0x15)   // 21+ entries: pattern-defeating quicksort
      sub_1407B37B0(*(v73+1), v74, &v17);
    else               // <21: insertion sort
      sub_1401DB8D0(*(v73+1), v74, 1, &v17);
  }
  a1[3] = v74;                   // remaining count
  *(oword*)(a1+1) = v73;         // Vec ptr+cap

LABEL_41_return_ok_empty:
  *a1 = 10;   // Ok discriminant
  return a1;
}
```

---

## Response Serializer (NEW 1.1.1) — REAL DECOMPILER BODY (0x140211890)

```c
// delete_skill_backup_response_ser_111
// Writes JSON: { "deletedBackupID": <id_str>, "remainingBackupCount": <n_u32> }
// 0x7B='{', 0x7D='}', 0x3A=':', 0x2C=','
// String constants: aDeletedbackupi="deletedBackupID"(len=15)@0x1412C0992
//                   aRemainingbacku="remainingBackupCount"(len=20)@0x1412C09A1
__int64 __fastcall delete_skill_backup_response_ser_111(__int64 a1, __int64 *a2,
                                                          __int64 a3, __int64 a4,
                                                          __int64 a5, __int64 a6, __int64 a7)
{
  v8 = *a2;
  v9 = *(QWORD*)(*a2 + 16);     // writer buffer position
  if (*(QWORD*)*a2 == v9)        // buffer full? grow
    sub_141221220(v8, v9, 1, 1, 1);
  *(BYTE*)( *(QWORD*)(v8+8) + v9 ) = 123;   // emit '{'
  *(QWORD*)(v8+16) = v9 + 1;

  v19 = 256;   // state word
  v20 = a2;
  // emit "deletedBackupID" field (key + value a1)
  result = sub_14025C400(&v19, aDeletedbackupi, 15, a1);
  if (!result) {
    if ((BYTE)v19 == 1) {
      return sub_141248EC0(v12, v11, v13, v14, a5, a6, a7);  // error path
    } else {
      // emit "remainingBackupCount" field (key + value a1+24)
      result = sub_140261480(&v19, aRemainingbacku, 20, a1+24, v18);
      if (!result) {
        if (!(v19 & 1)) {
          if (HIBYTE(v19)) {
            // emit '}'
            v15 = *v20; v16 = *(QWORD*)(*v20+16);
            if (*(QWORD*)*v20 == v16) { sub_141221220(v15,v16,1,1,1); v16=*(QWORD*)(v15+16); }
            *(BYTE*)( *(QWORD*)(v15+8) + v16 ) = 125;  // emit '}'
            *(QWORD*)(v15+16) = v16 + 1;
            return 0;  // Ok
          }
        }
      }
    }
  }
  return result;
}
```

---

## JSON Field Separator Helper — REAL DECOMPILER BODY (0x140262BA0)

```c
// Emits: ',' (0x2C) then ':' (0x3A) then calls delete_skill_backup_response_ser_111
// Guards against double-call with state byte check at a1[0]
__int64 __fastcall sub_140262BA0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  if (*(BYTE*)a1 == 1) sub_14124C220(aInternalErrorE_98, 40, &off_1412C8FD8);  // panic: unreachable

  v9 = *(QWORD**)(a1 + 8);
  if (*(BYTE*)(a1+1) != 1) {   // not first field: emit comma
    v10 = *v9;
    v11 = *(QWORD*)(*v9 + 16);
    if (*(QWORD*)*v9 == v11) sub_141221220(v10, v11, 1, 1, 1);
    *(BYTE*)( *(QWORD*)(v10+8) + v11 ) = 44;   // ','
    *(QWORD*)(v10+16) = v11 + 1;
  }
  *(BYTE*)(a1+1) = 2;          // mark field as visited

  sub_14026A280(v9, a2, a2, a3);  // emit field key string

  v14 = *v9;
  v15 = *(QWORD*)(*v9+16);
  if (*(QWORD*)*v9 == v15) { sub_141221220(v14,v15,1,1,1); v15=*(QWORD*)(v14+16); }
  *(BYTE*)( *(QWORD*)(v14+8) + v15 ) = 58;   // ':'
  *(QWORD*)(v14+16) = v15+1;

  return delete_skill_backup_response_ser_111(a4, v9, v12, v13, a5, a6, a7);
}
```

---

## SkillBackup DTO

### Request (UNCHANGED from 1.0.9)
```typescript
interface DeleteSkillBackupRequest {
  repo: string;   // skill registry repo path (key "repo" len=4)
  id: string;     // backup identifier to delete (key "id" len=2)
}
```

### Response (CHANGED — 1.1.1 delta)
```typescript
// 1.0.9:
interface DeleteSkillBackupResponse_109 { status: "ok"; message: "Success"; }

// 1.1.1 (NEW structured DTO):
interface DeleteSkillBackupResponse_111 {
  deletedBackupID: string;        // the id that was deleted
  remainingBackupCount: number;   // u32: count of remaining backups after deletion
}
```

### SkillBackup struct (internal, 152 bytes/entry)
```typescript
interface SkillBackup {
  backupID: string;
  skillID: string;
  title: string;
  relativePath: string;
  createdAt: string;   // ISO timestamp
}
```

### Error response
```
"Backup not found: <id>"   // Tauri error response string @ 0x1412EC064 len=18
```

---

## Side Effects

1. FS: removes `<codex_skills_root>/skill-backups/<repo>/<id>/` directory tree (sub_140004AA0)
2. FS: reads `metadata.json` per backup dir to validate before delete (win32_file_read_bytes_111)
3. Memory: rebuilds Vec<SkillBackup> 152B/entry of remaining backups — **NEW in 1.1.1**
4. Memory: sort_unstable on remaining Vec — **NEW in 1.1.1** (n<21: insertion, n>=21: pdq)
5. No HTTP / network. No sidecar subprocess.
6. Win32: WakeByAddressSingle to resolve Tauri async future
