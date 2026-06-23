# restore_skill_backup — Windows x64 Pseudocode (Gold Leaf)
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> platform=windows-x64 -->
<!-- sha=d24e429a binary="AiMaMi 1.1.1 win64.exe" imagebase=0x140000000 delta_class=integrity_recovered -->
<!-- prior-session=wf-aimami111-delta-20260617-sweep; this session adds full decompile bodies + dim1 CCF -->

## Module: restore_skill_backup
Binary: AiMaMi 1.1.1 win64.exe
Imagebase: 0x140000000
Analysis date: 2026-06-18

---

## Owner: restore_skill_backup_owner_sys @ 0x1400201E0
<!-- IDB rename: restore_skill_backup_handler_111 → restore_skill_backup_owner_sys -->
<!-- IDB comment: gold-leaf for restore_skill_backup; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion -->

```c
// Command handler — invoked when IPC command == "restore_skill_backup"
// Dispatch: tauri_ipc_main_dispatcher_sys @ 0x14000D2A0 code-ref @ 0x14000F4C4
// String anchor: aRestoreSkillBa @ 0x1412AC196 "restore_skill_backup"
// xref dispatch table: 0x1414FCF54, 0x14189E77C
// Stack: v16[512]=input DTO, v22[384]=state ctx, v26[384]=param parse result
__int64 __fastcall restore_skill_backup_owner_sys(__int64 a1)
{
    __int64 v4;                // r14: lock result / skill_list_ptr
    __int128 v8;               // rdi: backup record bytes (ptr+len pair)
    _BYTE v16[512];            // [rsp+308h] input DTO block (memmoved from a1, 520B)
    int v18;                   // [rsp+510h] restore_skill_mutex_read result tag (2=found)
    __int64 v19,v20,v21;      // [rsp+518..528h] backup record ptr/len/cap
    _BYTE v22[384];            // [rsp+748h] state context (memmoved from a1+520, 400B)
    _BYTE v26[384];            // [rsp+8D8h] param parse result (from remove_skill_parse_id_param_111)
    __int64 v27;               // [rsp+A68h] command name ptr
    __int128 v28,v29,v30,v31; // [rsp+A70h..] command/param context
    _OWORD v38[2];             // [rsp+CF8h] installed skills query result
    __int64 v40,v41;           // [rsp+D20h..] skill list vec (ptr+len)
    __int64 v42,v43;           // [rsp+D40h..] cleanup loop counters

    // 1. Copy input DTO block and state context
    sub_141212FB0(v16, a1, 520);           // memmove input DTO (520B)
    sub_141212FB0(v22, a1 + 520, 400);    // memmove state context (400B)

    // 2. Set up command context with "restore_skill_backup" and "repo" keys
    v27 = (int64)aRestoreSkillBa;         // 0x1412AC196 "restore_skill_backup"
    v28 = 20; v28_hi = aRepo;             // 0x1412AC6D1 "repo", len=4
    v29 = 2; v29_hi = v16;               // arg len=2, ptr=v16 (DTO block)
    v30 = &v40;                           // skill list out-param

    // 3. Acquire pending_auto_switch_state lock (blocks restore if switch in progress)
    v4 = pending_auto_switch_state_lock_acquire_111((char*)(v17+16), v2, v3);
    if (!v4) {
        // 4. Query installed skills with repo info
        //    Returns Vec<SkillEntry> (96 bytes each), tag 6 = Ok
        query_installed_skills_with_repo_111((int64)v38, (int64)&v27, (int64)&v28 + 8);
        if (LOBYTE(v38[0]) != 6) {
            // Error: forward to response writer
            sub_141212FB0(v15, a1 + 520, 360);
            v27 = 1;
            sub_14080C3C0(v15, v23, &v27, &v32, v24, v25);
            goto LABEL_18;
        }
        v4 = *((QWORD*)&v38[0] + 1);  // ok value = skill list ptr
    }

    // 5. Set up param context with "restore_skill_backup" and "id" key
    v27 = (int64)aRestoreSkillBa;
    v28 = 20; v28_hi = aId_0;            // 0x1412AC77D "id", len=2
    v29 = 2; v29_hi = v16;

    // 6. Parse backup 'id' parameter from request JSON
    //    Output: v26[0] = result tag (6=Ok with str), v26[8..23] = id oword, v26[24] = id len
    remove_skill_parse_id_param_111((int64)v26, &v27);

    if (v26[0] == 6) {  // 6 = Ok with string id
        // 7. Extract backup id slice (oword at v26[8], len at v26[24])
        v37 = *(QWORD*)&v26[24];
        v36 = *(OWORD*)&v26[8];

        // 8. Read backup record under Mutex (backup lookup)
        //    v18: result tag (2=found/ok), v19/v20/v21: backup record ptr/len/cap
        restore_skill_mutex_read_111(&v18, v4, &v36);
        sub_141212FB0(v26, a1 + 520, 400);  // restore state context into v26

        if (v18 != 2) {
            // Not found or error: forward result
            sub_141212FB0(&v27, &v18, 568);
            goto LABEL_17;
        }

        // 9. Copy skill dir bytes from backup record
        //    v21 = cap, v19 = ptr, v20 = len
        if (v21 < 0) { v9 = 0; goto LABEL_8; }
        if (v21) {
            nullsub_1(v5);                          // zero-size type nop
            v9 = 1;
            v10 = sub_140001360(v21, 1);            // alloc(cap, align=1)
            if (!v10) { LABEL_8: v42=v20; v43=v19; sub_14124BCCB(v9, v21); }
            *(QWORD*)&v8 = v10;
            sub_141212FB0(v10, v20, v21);           // copy skill dir bytes
            if (!v19) goto LABEL_16;
        } else {
            *(QWORD*)&v8 = 1;
            if (!v19) goto LABEL_16;
        }
        sub_140001370(v20, v19, 1);  // free old backup record bytes

        LABEL_16:
        // 10. Build response: tag=3 (Ok/Success), attach backup record bytes
        LOBYTE(v28) = 3;             // tag = Ok
        *((QWORD*)&v28 + 1) = *((QWORD*)&v8 + 1);  // backup record len
        v29 = v8;                    // backup record ptr
        v27 = 2;                     // response version

        LABEL_17:
        v44 = 0;
        // 11. Dispatch response to serializer
        sub_140832A30(v26, &v27);
        goto LABEL_18;
    }

    // Id parse error: forward error response
    v29 = *(OWORD*)&v26[16];
    v28 = *(OWORD*)v26;
    sub_141212FB0(v14, a1 + 520, 360);
    v27 = 1;
    sub_14080C3C0(v14, v23, &v27, &v32, v24, v25);

    LABEL_18:
    // 12. Cleanup: drop skill list Vec<SkillEntry> (96 bytes per element)
    if (!__OFSUB__(0, (QWORD)v40)) {
        v11 = *((QWORD*)&v40 + 1);
        v42 = v41; v43 = 0;
        while (v42 != v43) {
            ++v43;
            v12 = v11 + 96;
            sub_14033AB50();   // drop SkillEntry
            v11 = v12;
        }
        if ((QWORD)v40) sub_140001370(*((QWORD*)&v40+1), 96*v40, 8);
    }

    // 13. Serialize and send response
    return sub_140042650(v16);
}
```

---

## restore_skill_mutex_read_111 @ 0x1407DCA60

```c
// Reads backup record under Rust std Mutex guard (WakeByAddressSingle pattern)
// a1 = output result struct, a2 = mutex ptr, a3 = backup_id slice (ptr+len)
// Returns: *a1 tag 2=found+ok, else err
__int64 restore_skill_mutex_read_111(__int64 a1, __int64 a2, _QWORD* a3)
{
    // CAS acquire: InterlockedCompareExchange8(mutex_byte, 1, 0)
    if (_InterlockedCompareExchange8((volatile signed __int8*)a2, 1, 0))
        sub_14124A510(a2);  // contention: spin/wait

    // Check Rust poison flag (off_141899DC0 = GLOBAL_PANIC_COUNT)
    if (2 * *off_141899DC0) {
        sub_14124B1D0(a1, a2, a3);  // poison path
    } else {
        if (*(_BYTE*)(a2 + 1)) {
            // Poisoned lock: write PoisonError result
            sub_1410B1930(aPoisonedLockAn, 41, &v33);  // format "poisoned lock" msg
            *(_QWORD*)a1 = 2;   // tag = Err(PoisonError)
            goto LABEL_22;
        }
    }

    // Delegate to restore_skill_do_111 (actual restore work)
    // a2+240..a2+472 = mutex guard inner data (backup map)
    restore_skill_do_111(&v33, a2 + 240, /*..a2+472*/ a3[1], a3[2]);
    v16 = v33;

    if (v33 == 2) {
        // Success: unwrap inner Option
        sub_140243FC0(&v42, v48);   // unwrap Option inner value
        drop_result_inner_111(&v34);
        // Copy found backup record to output
        *(_QWORD*)(a1 + 24) = v50;
        *(_OWORD*)(a1 + 8) = v38;
        *(_QWORD*)a1 = 2;           // tag = Ok/Found
    } else {
        // Error propagation
        sub_140217020(&v33, &v29);
        sub_141212FB0(a1, &v33, 568);
    }

    LABEL_22:
    // Release mutex: write 0, wake waiters
    *v51_mutex_byte = 0;
    if (prev_val == 2) WakeByAddressSingle(mutex);

    // Drop backup_id slice if owned
    if (*a3) sub_140001370(a3[1], *a3, 1);
    return a1;
}
```

---

## restore_skill_do_111 @ 0x1406EFA10

```c
// Core restore logic: open snooze dir, read + deserialize backup index,
// build record, CopyFileExW backup files, parse SKILL.md, build result struct.
// All 6 callee depth levels terminate at Win32 API or named leaf.
__int64 __fastcall restore_skill_do_111(
    __int64 a1,      // output result
    __int128* a2,    // skill root path (oword: ptr + len)
    __int64 a3,      // skill path len
    __int64 a4,      // snooze base path ptr
    __int64 a5,      // snooze base path len
    __int64 a6,      // skill dir ptr
    __int64 a7)      // skill dir len
{
    // 1. Build path: snooze_base + unk_1412EBFED (sub-path component, len=13)
    sub_14107A2D0(&v81, a4, a5, &unk_1412EBFED, 13);
    v10 = v82;   // joined path len
    v112 = *((QWORD*)&v81 + 1);

    // 2. Build path: snooze_joined + "/" + skill_dir (a6, a7)
    sub_14107A2D0(&v79, *((int64*)&v81+1), v82, a6, a7);
    v11 = v80;
    v115 = *((QWORD*)&v79 + 1);

    // 3. Open snooze dir (backup storage)
    snooze_file_open_111(v103);
    if (*(DWORD*)v103 == 2) {  // 2 = Err
        sub_1402F87A0(*(int64*)&v103[8]);  // drop file handle
        // Error code 7: snooze dir not found
        sub_1410A1DF0(&v55, byte_1412EC063, (uint64)v103);
        *(QWORD*)(a1+32) = v56;
        *(OWORD*)(a1+16) = v55;
        *(QWORD*)(a1+8) = 7;
        *(QWORD*)a1 = 2;   // Err
        goto LABEL_23;
    }

    // 4. Read backup index file (unk_1412EC051 = sub-path, len=13)
    sub_14107A2D0(v103, v115, v11, &unk_1412EC051, 13);
    v122 = *(QWORD*)&v103[8];
    win32_file_read_bytes_111((int64)v57, *(int64*)&v103[8], *(int64*)&v103[16]);
    if (*(QWORD*)v103) sub_140001370(v122, *(QWORD*)v103, 1);  // drop path

    if (__OFSUB__(-*(QWORD*)v57, 1)) {
        // File read error
        *(QWORD*)(a1+8) = 2; *(QWORD*)(a1+16) = v12; *(QWORD*)a1 = 2;
        goto LABEL_23;
    }

    // 5. Deserialize backup record JSON (sub_140004AA0 = JSON parser)
    sub_140004AA0(v103, v57);

    if (!__OFSUB__(-*(QWORD*)v103, 1)) {  // success
        // Extract backup record fields into locals
        v101 = *(OWORD*)&v103[112];  // field at +112
        v100 = *(OWORD*)&v103[96];   // field at +96
        v99  = *(OWORD*)&v103[80];   // relativePath (uuid bytes area)
        v98  = *(OWORD*)&v103[64];   // field at +64
        v97  = *(__m256i*)&v103[32]; // 4-oword block at +32
        v96  = *(OWORD*)&v103[16];   // field at +16
        v117 = *(QWORD*)v103;        // backupID raw qword
        v95  = *(OWORD*)v103;        // backupID oword (ptr+len)
        v114 = *(QWORD*)&v103[8];    // skillID ptr

        // 6. Open ".skill" sub-path in backup dir (unk_1412EC05E = ".skill", len=5)
        sub_14107A2D0(&v77, v115, v11, &unk_1412EC05E, 5);
        snooze_file_open_111(v103);
        if (*(DWORD*)v103 == 2) {
            // Error code 8: .skill file missing
            sub_1410A1DF0(&v53, byte_1412EC107, (uint64)v103);
            *(QWORD*)(a1+8) = 8;
            *(QWORD*)a1 = 2;
            goto LABEL_18;
        }

        // 7. Build path: uuid_from_v99 + skill_relative_path
        v16 = *((QWORD*)&v99 + 1);   // uuid bytes ptr
        sub_14107A2D0(&v75, (int64)a2, a3, v99, v16);
        v17 = v76;
        v121 = *((QWORD*)&v75 + 1);

        // 8. Check if uuid path already exists (sub_14107A3E0 = path_exists)
        v18 = sub_14107A3E0(*((QWORD*)&v75+1), v76);
        if (!v18) { v20 = a3; v18 = (int64)a2; }  // fallback to original path

        // 9. Lock path slot
        v103[0] = 1;
        v21 = sub_141082B80(v103, v18, v20);  // create dir/file lock slot
        if (v21) {
            *(QWORD*)(a1+8) = 2; *(QWORD*)(a1+16) = v21;
            *(QWORD*)a1 = 2;
            goto LABEL_16;
        }

        // [10a] Optional: open additional snooze file (second snooze_file_open_111 call)
        //       If fails: skip import_skill_build_record_db_write_111
        snooze_file_open_111(v103);
        if (*(DWORD*)v103 == 2) {
            sub_1402F87A0(*(int64*)&v103[8]);
            // Skip to iter_dir
        } else {
            // 10. Write backup record to persistent store (DELTA-1 side effect)
            import_skill_build_record_db_write_111(
                (int64)v103, v121, v17, a2, a3, v112, v10,
                (__int128*)aRestoreRollbac  // 0x1412EC11C "restore-rollbackBackup corrupted"
            );

            if (__OFSUB__(-*(QWORD*)v103, 1)) {
                // build_record failed: propagate error
                *(OWORD*)(a1+88) = v94; *(OWORD*)(a1+72) = v93;
                // ... copy error owords to a1+8..a1+56
                goto LABEL_15;
            }

            // Extract result fields from build_record output
            v49 = v104; v48 = *(OWORD*)&v103[120]; v47 = *(OWORD*)&v103[104];
            v40 = *(QWORD*)v103;      // backup record tag/id
            v41..v46 = fields from v103[8..94];
        }

        // 11. Scan backup dir for matching files + CopyFileExW (DELTA-3 side effect)
        //     tag 10 = match found
        import_skill_iter_dir_match_111(
            (int64)v103, v116, v15, v121, v17
        );

        if (*(DWORD*)v103 == 10) {   // 10 = match found
            // 12. Read and parse SKILL.md in backup dir (unk_1412EC001 = "SKILL.md", len=8)
            sub_14107A2D0(&v73, v121, v17, &unk_1412EC001, 8);
            import_skill_read_parse_skill_md_111(
                (int64*)v103, *((int64*)&v73+1), v74, (int64)a2, a3
            );

            if (*(QWORD*)v103 != 2) {
                // Extract parsed skill fields from v103 (offsets 8..120)
                v72..v83 = skill metadata fields;

                // 13. Convert uuid bytes to display string
                *((QWORD*)&v50[0]) = v116;   // uuid bytes
                *(((QWORD*)&v50[0])+1) = v15;
                import_skill_uuid_to_string_111((int64)v103, (int64)v50);

                // 14. Build full result struct at a1:
                //   a1+0..a1+0xB7 (184B): skill data (sub_141212FB0 from v57)
                //   a1+0x150..a1+0x1D7 (152B): backup record (sub_141212FB0 from v40)
                //   a1+184: backupID raw (v117)
                //   a1+192: skillID ptr (v114)
                //   a1+200..240: relativePath, uuid-string-related owords
                //   a1+280: uuid_oword (*(OWORD*)v103)
                //   a1+296: uuid_str_len (*(QWORD*)&v103[16])
                //   a1+304..328: remaining skill fields
                sub_141212FB0((m128i*)a1, (const m128i*)v57, 0xB8);
                sub_141212FB0((m128i*)(a1+336), (const m128i*)&v40, 0x98);
                *(QWORD*)(a1+184) = v117;   // backupID
                *(QWORD*)(a1+192) = v114;   // skillID ptr
                *(OWORD*)(a1+200) = v35;
                *(QWORD*)(a1+216) = v109;
                *(OWORD*)(a1+224) = v36;
                *(QWORD*)(a1+240) = v110;
                *(OWORD*)(a1+248) = v38;
                *(QWORD*)(a1+264) = v107;
                *(QWORD*)(a1+272) = v16;   // uuid bytes len
                *(OWORD*)(a1+280) = *(OWORD*)v103;  // uuid string oword
                *(QWORD*)(a1+296) = *(QWORD*)&v103[16];  // uuid string len
                *(QWORD*)(a1+304) = v118;
                *(QWORD*)(a1+312) = v108;
                *(QWORD*)(a1+320) = v37;
                *(QWORD*)(a1+328) = v39;
            }
        }
    } else {
        // JSON parse error
        *(QWORD*)(a1+8) = 3; *(QWORD*)(a1+16) = v13;
        *(QWORD*)a1 = 2;
    }

    LABEL_23:
    // Free path strings
    if ((QWORD)v79) sub_140001370(v115, v79, 1);
    if ((QWORD)v81) sub_140001370(v112, v81, 1);
    return a1;
}
```

---

## import_skill_build_record_db_write_111 @ 0x1406F1360
<!-- DELTA-1: new in 1.1.1 — not present in 1.0.9 -->
<!-- IDB comment set: gold-leaf callee: DELTA-1, writes backup record DTO -->

```c
// Builds and persists backup record JSON to snooze dir.
// Input: a2/a3=snooze_dir path, a4/a5=skill_root path, a6/a7=skill_dir
// Output a1: backup record struct (152B): backupID, skillID, name, title, relativePath, createdAt
// Error: "Invalid skill source" (heap-alloc'd, 20B) if SKILL.md parse fails
__int64 __fastcall import_skill_build_record_db_write_111(
    __int64 a1, __int64 a2, __int64 a3, __int128* a4,
    __int64 a5, __int64 a6, __int64 a7, __int128 a8)
{
    // 1. Build path: a2/a3 + "SKILL.md" (unk_1412EC001, len=8)
    sub_14107A2D0(&v94, a2, a3, &unk_1412EC001, 8);
    v100 = *((QWORD*)&v94+1);

    // 2. Read + parse SKILL.md (extracts skillID, name, title, relativePath)
    import_skill_read_parse_skill_md_111(v71, DWORD2(v94), v95, (int)a4, a5);
    if (*(QWORD*)v71 == 2) {
        // Parse failed: alloc + copy "Invalid skill source" (20B)
        nullsub_1(v12);
        v13 = (void*)sub_140001360(20, 1);  // alloc(20, 1)
        if (!v13) sub_14124BCCB(1, 20);      // OOM panic
        qmemcpy(v13, "Invalid skill source", 20);
        *(QWORD*)(a1+8) = 8;
        *(QWORD*)(a1+16) = 20;
        *(QWORD*)(a1+24) = v13;             // error msg ptr
        *(QWORD*)(a1+32) = 20;
        *(QWORD*)a1 = 0x8000000000000000ULL; // Err tag
        if ((QWORD)v94) sub_140001370(v100, v94, 1);
        return;
    }

    // 3. Extract SKILL.md fields from v71 struct:
    //    v71[0..7]:   discriminant / status
    //    v71[8..15]:  skillID ptr
    //    v71[16..23]: skillID len
    //    v71[24..31]: name ptr
    //    v71[32..39]: name len
    //    v71[40..55]: relativePath oword (ptr+len)
    //    v71[56..71]: title oword
    //    v71[72..87]: another field
    //    v71[88..103]: another field
    //    v71[96..103]: title len area
    v56 = *(OWORD*)&v71[40];   v57 = *(OWORD*)&v71[56];
    v58 = *(OWORD*)&v71[72];   v59 = *(OWORD*)&v71[88];
    v87 = *(QWORD*)&v71[16];   // skillID len
    v52 = *(QWORD*)v71;        // status/disc
    v53 = *(OWORD*)&v71[8];    // skillID (ptr+len)
    v83 = v54 = *(QWORD*)&v71[24];  // name ptr
    v51 = v55 = *(QWORD*)&v71[32];  // name len

    if ((QWORD)v94) sub_140001370(v100, v94, 1);  // free SKILL.md path

    // 4. Lock file write slot
    v74 = &v58;
    v71[0] = 1; v108 = 1;
    v17 = sub_141082B80(v71, a6, a7);   // acquire write lock
    if (v17) {
        *(QWORD*)(a1+8) = 2; *(QWORD*)(a1+16) = v17;
        *(QWORD*)a1 = 0x8000000000000000ULL;
        return sub_1401D6360(&v52);
    }

    // 5. Get current timestamp u32
    LODWORD(v94) = system_time_precise_u32_111();   // @ 0x14107B7E0
    DWORD1(v94) = v18;

    // 6. Check elapsed since snapshot (threshold 0xD53E8000 / 27111902)
    elapsed_since_ts_111((int64)v71, &v94, 0xD53E8000, 27111902);
    v82 = v71[0] ? 0 : *(QWORD*)&v71[8];

    // 7. Build path with "__" separator (asc_1412EC13C = "__")
    sub_1407180F0((uint)&v67, v58, DWORD2(v58), 47, (int64)asc_1412EC13C, 2);

    // 8. Generate UUID v4 via ProcessPrng (BCryptGenRandom pattern)
    uuid_v4_generate_raw_sys(&v69);   // @ 0x140F5A860 → ProcessPrng(16B) + XMM bitmask

    // 9. Format UUID bytes as string
    //    sub_140F5A900: uuid raw bytes → hyphenated string (e.g. "xxxxxxxx-xxxx-4xxx-...")
    *(QWORD*)&v94 = 0; *((QWORD*)&v94+1) = 1;
    v95 = 0;
    *(QWORD*)&v71[16] = 1610612768;  // vtable / capacity hint
    *(QWORD*)v71 = &v94;
    *(QWORD*)&v71[8] = &off_1412EC6E8;
    if ((uint8_t)sub_140F5A900(&v69, v71))
        sub_14124BFE0(...);   // Display impl error panic (should not hit)
    v88 = *((QWORD*)&v94+1);
    v100 = v94;

    // 10. UTF-8 boundary check on uuid string
    if (v95 <= 8) {
        if (v95 != 8) sub_14124BEE0(DWORD2(v94), v95, 0, 8, &off_1412EC158);
    } else if (*(char*)(*((QWORD*)&v94+1) + 8LL) <= -65) {
        sub_14124BEE0(...);
    }

    // 11. Build path: skill_dir (a6/a7) + uuid_str + ".skill" (unk_1412EC05E, len=5)
    *((QWORD*)&v65) = *((QWORD*)&v94+1); *((QWORD*)&v65+1) = 8;
    // Set up path context vtable pointers for sub_1410A1DF0
    *(QWORD*)v71 = &v82; *(QWORD*)&v71[8] = sub_1410B13B0;
    *(QWORD*)&v71[16] = &v67; *(QWORD*)&v71[24] = sub_140001000;
    *(QWORD*)&v71[32] = &v46; *(QWORD*)&v71[40] = sub_140082100;
    *(QWORD*)&v71[48] = &v65; *(QWORD*)&v71[56] = sub_140082100;
    sub_1410A1DF0(&v94, byte_1412EC170, (uint64)v71);  // format path
    if (v100) sub_140001370(v88, v100, 1);

    sub_14107A2D0(&v65, a6, a7, *((int64*)&v94+1), v95);  // join path
    v21 = v66;
    v100 = *((QWORD*)&v65+1);
    sub_14107A2D0(&v69, *((int64*)&v65+1), v66, &unk_1412EC05E, 5);  // + ".skill"

    // 12. Lock path slot
    v71[0] = 1; v106 = 1;
    v22 = sub_141082B80(v71, v100, v21);
    if (v22) {
        *(QWORD*)(a1+8) = 2; *(QWORD*)(a1+16) = v22;
        goto LABEL_26;
    }

    // 13. Scan dir for matching backup slot (recursive dir iterator)
    //     tag 10 = match found; calls snooze_file_backup_copy_111 → CopyFileExW
    import_skill_iter_dir_match_111((uint)v71, v10, v9, DWORD2(v69), v70);
    if (*(DWORD*)v71 != 10) {
        // Dir match failed: propagate error
        // Copy error owords to a1+8..a1+88
        *(QWORD*)a1 = 0x8000000000000000ULL;
        goto cleanup;
    }

    // 14. Build JSON record in heap buffer (128B initial)
    v31 = (_BYTE*)sub_140001360(128, 1);   // alloc(128, align=1)
    if (!v31) { v105 = 1; sub_14124BCCB(1, 128); }  // OOM panic
    *(QWORD*)&v92 = 128; *((QWORD*)&v92+1) = v31;
    *(QWORD*)&v94 = &v92; *((QWORD*)&v94+1) = asc_1412E85F5;  // "  " padding
    v95=2; v96=1; v97=0;
    *v31 = 123;   // '{' (0x7B) — begin JSON object

    // Serialize fields in order (sub_140260580 = write str field):
    v36 = sub_140260580(&v89, aBackupid_0, 8, v71);       // "backupID": <uuid_str>
    if (v36) goto LABEL_43;
    if ((_BYTE)v89) goto LABEL_40;

    v36 = sub_140260580(&v89, aSkillid_1, 7, &v71[24]);   // "skillID": <id>
    if (v36) goto LABEL_43;
    if ((_BYTE)v89) goto LABEL_40;

    v36 = sub_140260580(&v89, aName_6, 4, &v71[48]);      // "name": <name>
    if (v36) goto LABEL_43;
    if ((_BYTE)v89) goto LABEL_40;

    v36 = sub_1402662D0(&v89, aTitle_3, 5, &v71[96]);     // "title": <title>
    if (v36) goto LABEL_43;
    if ((_BYTE)v89) goto LABEL_40;

    v37 = sub_140260580(&v89, aRelativepath_2, 12, &v71[72]); // "relativePath": <path>
    if (v37) goto LABEL_41;
    if ((_BYTE)v89) goto LABEL_40;

    v37 = sub_140268180(&v89, aCreatedat_2, 9, v73);      // "createdAt": <ts>
    if (v37) goto LABEL_41;

    sub_1401F7950(&v89);   // finalize: close JSON brace '}'

    // 15. Build output write path: a6/a7 + unk_1412EC051 (len=13)
    sub_14107A2D0(&v94, v100, v21, &unk_1412EC051, 13);
    *(QWORD*)&v92 = v91; *((QWORD*)&v92+1) = v99;
    v93 = v39;

    // 16. Write JSON to file (sub_1403A6410 → win32_file_write_bytes_111 @ 0x141093710)
    v40 = sub_1403A6410(&v94, &v92);
    if (v40) {
        v38 = 2; v36 = v40;
        v28 = v100;
        goto LABEL_46;
    }

    // 17. Convert uuid to display string for output struct
    import_skill_uuid_to_string_111(&v94, &v92);   // @ 0x1406F7540

    // 18. Build output struct at a1 (152B):
    //   a1+0:   backupID raw (v80 = uuid raw)
    //   a1+8:   uuid_str ptr (v88)
    //   a1+16:  backupID uuid raw bytes len (v20)
    //   a1+24:  skillID ptr (v87)
    //   a1+32:  name ptr (v83)
    //   a1+40:  name len (v51)
    //   a1+48:  relativePath ptr (v86 = v56)
    //   a1+56:  relativePath len (v76)
    //   a1+64:  title oword (v42 = v57)
    //   a1+80:  title ptr (v78 = v58)
    //   a1+88:  title len (v43)
    //   a1+96:  uuid string oword (v94)
    //   a1+112: uuid string len (v95)
    //   a1+120: title cap (v84 = *(QWORD*)&v62+1)
    //   a1+128: name cap (v77 = v79)
    //   a1+136: relativePath cap (v41 = v63)
    //   a1+144: elapsed_since_ts result (v82)
    *(QWORD*)(a1+112) = v95;
    *(OWORD*)(a1+96) = v94;
    *(QWORD*)a1 = v85;      // backupID raw low qword
    *(QWORD*)(a1+8) = v88;  // uuid_str ptr
    *(QWORD*)(a1+16) = v20; // uuid raw len
    *(QWORD*)(a1+24) = v87; // skillID ptr
    *(QWORD*)(a1+32) = v83; // name ptr
    *(QWORD*)(a1+40) = v51; // name len
    *(QWORD*)(a1+48) = v86; // relativePath ptr
    *(QWORD*)(a1+56) = v76; // relativePath len
    *(OWORD*)(a1+64) = v42; // title (oword)
    *(QWORD*)(a1+80) = v78; // title ptr
    *(QWORD*)(a1+88) = v43; // title len
    *(QWORD*)(a1+120) = v84;
    *(QWORD*)(a1+128) = v77;
    *(QWORD*)(a1+136) = v41;
    *(QWORD*)(a1+144) = v82; // elapsed_since_ts
    // cleanup path strings, drop v52 context
    return Ok(a1);
}
```

---

## snooze_file_backup_copy_111 @ 0x14108C340
<!-- DELTA-3: CopyFileExW new in 1.1.1; IDB comment set -->

```c
// Backup-before-restore file copy via Win32 CopyFileExW.
// Both src and dst paths are canonicalized before copy.
// Called from import_skill_iter_dir_match_111 during dir scan.
// Returns 0=success, 1=error.
__int64 snooze_file_backup_copy_111()
{
    // 1. Pop src path from iterator state
    sub_1410938D0(&v10);
    if (__OFSUB__(-v10, 1)) return 1;  // empty iterator

    Data = v10; v14 = v11; v15 = v12;
    // 2. Canonicalize src path (win32_path_canonicalize_111 @ 0x1410908E0)
    win32_path_canonicalize_111((int64)&v8, (int64)&Data, 1);
    if (__OFSUB__(-v8, 1)) return 1;
    v17 = v8;
    lpExistingFileName = lpNewFileName;  // save src canonical

    // 3. Pop dst path from iterator state
    sub_1410938D0(&v10);
    if (!__OFSUB__(-v10, 1)) {
        Data = v10; v14 = v11; v15 = v12;
        // 4. Canonicalize dst path
        win32_path_canonicalize_111((int64)&v8, (int64)&Data, 1);
        v1 = v8;
        if (!__OFSUB__(-v8, 1)) {
            Data = 0;
            v2 = lpExistingFileName;  // src (LPCWSTR)
            v4 = lpNewFileName;       // dst (LPCWSTR)

            // 5. CopyFileExW(src, dst, ProgressRoutine, &Data, nullptr, 0)
            //    ProgressRoutine @ 0x1410938B0 (progress callback)
            if (CopyFileExW(lpExistingFileName, lpNewFileName,
                            ProgressRoutine, &Data, nullptr, 0)) {
                result = 0;  // success
            } else {
                GetLastError();
                result = 1;  // error
            }
            // 6. Free path strings (sub_140001370 = dealloc, size=2*len, align=2 for WCHAR)
            if (v1) sub_140001370(v4, 2*v1, 2);
            if (v17) sub_140001370(v2, 2*v17, 2);
            return result;
        }
    }
    // canonicalize failed: free src if needed, return error
    v2 = lpExistingFileName;
    result = 1; v3 = v17;
    if (v17) { v7=result; sub_140001370(v2, 2*v3, 2); return v7; }
    return result;
}
```

---

## uuid_v4_generate_raw_sys @ 0x140F5A860
<!-- DELTA-2: BCryptGenRandom→ProcessPrng pattern; IDB comment set -->

```c
// UUID v4 generator using Windows ProcessPrng (BCryptGenRandom pattern).
// Generates 16 random bytes, applies RFC 4122 variant/version bitmask via XMM ops.
// NEW in 1.1.1 restore path; 1.0.9 used uuid::new_v4 with pre-formatted hyphenated strings.
_QWORD* __fastcall uuid_v4_generate_raw_sys(_QWORD* a1)
{
    __m128i v2;    // uuid bitmask result
    __m128i v5;    // raw random bytes buffer (16B)

    v5 = 0;  // zero initialize

    // 1. Generate 16 random bytes via ProcessPrng (BCryptGenRandom wrapper)
    if ((uint)ProcessPrng(&v5, 16) != 1) {
        // Error: construct RNG failure struct and panic
        v4 = 65538;                        // error code
        v6[0] = &v4;
        v6[1] = sub_140F5AE00;            // error type vtable
        sub_14124C240(&unk_141417030, v6, &off_1414170C0);  // panic!
    }

    // 2. Apply RFC 4122 UUID v4 bitmask via XMM:
    //    xmmword_141416FF0 = AND mask (clears variant/version bits: 0x3f..0x0f pattern)
    //    xmmword_141417000 = OR mask (sets variant=0x80, version=0x40 → UUID v4)
    v2 = _mm_or_si128(
        _mm_and_si128(_mm_load_si128(&v5), (m128i)xmmword_141416FF0),
        (m128i)xmmword_141417000
    );

    // 3. Store as two big-endian QWORD (byteswap for wire format)
    a1[1] = _byteswap_uint64(v2.m128i_u64[0]);
    *a1   = _byteswap_uint64(_mm_shuffle_epi32(v2, 238).m128i_u64[0]);

    return a1;
}
```

---

## restore_skill_backup_response_ser_111 @ 0x14020F2A0
<!-- DELTA-5: NEW structured response vs 1.0.9 bare {status,message} -->
<!-- IDB comment set: gold-leaf, DELTA-5, session wf-aimami111-delta-20260618-goldleaf -->

```c
// Serializes restore_skill_backup response to JSON writer.
// Writes 3-field object: {"restoredSkill": ..., "backup": ..., "rollbackBackup": ...}
// NEW vs 1.0.9 which returned {"status":"ok","message":"Success"}
__int64 __fastcall restore_skill_backup_response_ser_111(
    __int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
    // 1. Write '{' to JSON writer buffer
    v7 = *a2;
    v8 = *(_QWORD*)(*a2 + 16LL);
    if (*(_QWORD*)*a2 == v8)
        sub_141221220(v7, v8, 1, 1, 1);  // grow buffer
    *(_BYTE*)(*(_QWORD*)(v7+8) + v8) = 123;  // '{' = 0x7B
    *(_QWORD*)(v7+16) = v8 + 1;

    // 2. Write "restoredSkill" field (sub_140266A70, string @ 0x1412C05F3)
    result = sub_140266A70(&v15, aRestoredskill, 13, a1);
    if (!result) {
        if ((_BYTE)v15) return sub_141248EC0(...);  // separator/comma error

        // 3. Write "backup" field (sub_1402654D0, string @ 0x1412C0577, a1+184)
        result = sub_1402654D0(&v15, aBackup, 6, a1 + 184);
        if (!result) {
            if ((_BYTE)v15) return sub_141248EC0(...);

            // 4. Write "rollbackBackup" field (sub_140260410, string @ 0x1412C0600, a1+336)
            //    NEW FIELD vs 1.0.9
            result = sub_140260410(&v15, aRollbackbackup, 14, a1 + 336);
            if (!result) {
                result = 0;
                if ((v15 & 1) == 0) {
                    if (HIBYTE(v15)) {
                        // 5. Write closing '}' + optional comma
                        sub_14033FA00(*v16, "}string or map", 1);
                        return 0;
                    }
                }
            }
        }
    }
    return result;
}
```

---

## Response Field Offsets (a1 struct layout)

| Offset | Field | Source |
|---|---|---|
| a1+0   | restoredSkill base (184B block) | `sub_141212FB0(a1, v57, 0xB8)` |
| a1+184 | backupID raw qword | `v117 = *(QWORD*)v103` |
| a1+192 | skillID ptr | `v114 = *(QWORD*)&v103[8]` |
| a1+200 | relativePath oword | `v35 = v96` |
| a1+216 | uuid bytes low | `v109 = v97[0]` |
| a1+224 | uuid bytes oword | `v36` |
| a1+240 | uuid bytes high | `v110 = v97[3]` |
| a1+248 | title-related oword | `v38 = v98` |
| a1+264 | relativePath (v107) | `v107 = v99` |
| a1+272 | uuid bytes len | `v16` |
| a1+280 | uuid string oword | `*(OWORD*)v103` |
| a1+296 | uuid string len | `*(QWORD*)&v103[16]` |
| a1+304 | v118 (backupID raw high) | |
| a1+312 | v108 | |
| a1+320 | v37 | |
| a1+328 | v39 | |
| a1+336 | rollbackBackup base (152B block) | `sub_141212FB0(a1+336, &v40, 0x98)` |
