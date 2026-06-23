# pseudocode.md — remove_skill (win64, AiMaMi 1.1.1)

session: <审计会话>
sha: d24e429a

---

## Layer 1 — Owner: remove_skill_owner_sys @ 0x140022920

```
fn remove_skill_owner_sys(ctx: IpcContext) {
    // Step 1 — DELTA-NEW: acquire pending_auto_switch_state lock
    let lock_ok = pending_auto_switch_state_lock_acquire_111(ctx.state_lock_ptr);
    // lock_ok == 0 means acquired; non-zero means blocked/error

    if lock_ok == 0 {
        // Step 2 — query installed skills filtered by repo param
        let skills = query_installed_skills_with_repo_111(
            cmd: "remove_skill",
            param_key: "repo",
            params: ctx.params,
        );
        if skills.discriminant != 6 {
            // repo match succeeded — continue
        } else {
            // no match → respond error via has_notch_invoke_resolver_respond
            return respond_error(ctx);
        }
    }

    // Step 3 — parse id param
    // Result discriminant 6 = Some(String), 3 = parse failure
    let id_result = remove_skill_parse_id_param_111(cmd: "remove_skill", param_key: "id", params: ctx.params);

    if id_result.discriminant == 6 {
        let skill_id: String = id_result.value;

        // Step 4 — async-locked backup+delete
        // sub_1407DB760 acquires its own InterlockedCompareExchange8 mutex,
        // then calls skill_backup_replace_111
        let op_result = sub_1407DB760(out_buf, repo_lock_state_ptr, &[skill_id]);

        if op_result.ok {
            // Step 5 — serialize reply
            sub_140839F20(ctx, &op_result);
            // ↳ relay_response_build_remove_skill_reply_111(out_buf, result_ptr)
            //   writes JSON: {schemaVersion, success, code, message, warnings, ...}
            //   fills removedSkillID, backup, remainingInstalledCount
        } else {
            // error variant — pass through
            respond_error(ctx, op_result.err);
        }
    } else {
        // id parse failed → respond error
        has_notch_invoke_resolver_respond(ctx, error_payload);
    }

    // cleanup: drop pending_auto_switch listener arc refs (loop)
    // drop repo-query result
    return sub_140042650(ctx.frame);  // stack frame cleanup
}
```

---

## Layer 2 — DELTA-NEW guard: pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0

```
fn pending_auto_switch_state_lock_acquire_111(addr: *mut u8) -> i64 {
    // InterlockedCompareExchange8: try set addr[0] = 1 (locked) from 0
    let prev = atomic_compare_exchange_8(addr, expected=0, new=1);
    if prev != 0 {
        // already locked — spin-wait via sub_14124A510 (WaitOnAddress loop)
        sub_14124A510(addr);
    }
    // Check poisoned-lock flag (addr[1])
    if addr[1] != 0 {
        // poisoned — panic via sub_14124BFE0("called Result::unwrap() on Err")
        sub_14124BFE0(...);
    }
    // Walk vtable dispatch table for registered state listeners
    if state_table[addr] has entries {
        for each listener in table {
            // dispatch listener vtable+24 (notify fn)
            listener.notify_fn(listener.context);
        }
    }
    // Release: addr[0] = 0; if addr[0] was 2 → WakeByAddressSingle(addr)
    addr[0] = 0;
    if was_2 { WakeByAddressSingle(addr); }
    return listener_result;  // 0 = success / acquired
}
```

---

## Layer 3 — Async lock wrapper: sub_1407DB760 @ 0x1407DB760

```
fn sub_1407DB760(out: *mut ResultBuf, lock_state: *mut u8, id_slice: &[String]) -> ResultBuf {
    // Acquire per-operation InterlockedCompareExchange8 mutex on lock_state
    let prev = atomic_compare_exchange_8(lock_state, 0, 1);
    if prev != 0 { sub_14124A510(lock_state); }  // spin wait

    if lock_state[1] != 0 {
        // poisoned → build PoisonError result, release lock, return
        build_poison_error_result(out, "poisoned lock: another task failed inside");
        atomic_release(lock_state);
        WakeByAddressSingle(lock_state) if lock_state[0] == 2;
        return;
    }

    // Main path — call skill_backup_replace_111
    let result = skill_backup_replace_111(
        out_buf:   &local_buf,
        repo_id:   lock_state[240..248],   // repo string slice
        repo_len:  lock_state[248..256],
        path_ptr:  lock_state[464..472],   // skill install path
        path_len:  lock_state[472..480],
        id_ptr:    id_slice[1],            // skill id string ptr
        id_len:    id_slice[2],            // skill id string len
    );

    if result.code == Err {
        // map through sub_140243FC0 (result unwrap), call drop_result_inner_111
        copy result to out;
    } else {
        // success: copy result via sub_140216750 + sub_141212FB0
        copy result to out;
    }

    // Release lock
    atomic_release(lock_state);
    WakeByAddressSingle(lock_state) if was_2;
    // Free id_slice if heap-allocated
    if id_slice[0] > 0 { dealloc(id_slice[1], id_slice[0]); }
    return out;
}
```

---

## Layer 4 — Core FS+DB operation: skill_backup_replace_111 @ 0x1406ECD70

```
fn skill_backup_replace_111(
    out, repo_id, repo_len, path_ptr, path_len, skill_id_ptr, skill_id_len
) -> Result {
    // 1. Query installed skills list from SQLite
    let skill_list = skill_list_db_query_111(out_buf, repo_id, repo_len);
    if skill_list.code != 10 {
        // not found → return error code 7 "Skill not found"
        build_error(out, code=7, msg="Skill not found");
        return Err;
    }

    // 2. Walk skill list to find matching skill_id
    let entry = skill_list.find(|e| e.id == skill_id);
    if entry == None {
        // build error result via sub_1410A1DF0
        return Err;
    }

    // 3. Build install path via sub_14107A2D0
    let install_path = build_path(repo_dir, entry.subpath);

    // 4. DELTA-NEW: write backup record to DB BEFORE deletion
    import_skill_build_record_db_write_111(
        out_buf,
        skill_list[0], skill_list[1],     // list ptr/len
        repo_id, repo_len,                 // repo
        install_path_ptr, install_path_len,
        &BACKUP_RECORD_TYPE,              // 0x1412EC037
    );
    // ↳ calls: uuid_v4_generate_raw_sys (new backupID)
    //         system_time_precise_u32_111 (timestamp)
    //         sub_1403A6410 (SQLite INSERT into installed_skills backup table)
    //         import_skill_read_parse_skill_md_111 (read SKILL.md for metadata)

    if backup_write failed { return Err propagating backup error; }

    // 5. Open skill dir via snooze_file_open_111 (win32_path_canonicalize_111 + win32_file_open_rw_111)
    let dir_handle = snooze_file_open_111(install_path);
    if dir_handle.code == 2 {
        // dir not found — call sub_1402F87A0 (handle cleanup)
    } else {
        // error opening dir handle
        out.code = 2; out.err_ptr = handle_err_ptr;
        return Err;
    }

    // 6. Re-query skills list to verify post-backup state
    let updated_list = skill_list_db_query_111(out_buf, repo_id, repo_len);
    if updated_list.code == 10 {
        // 7. Delete skill dir entry via sub_14010E700(path, skill_id_len, 0, 1, 1)
        //    (recursive dir remove)
        sub_14010E700(path_buf, skill_id_len, 0, 1, 1);
        // copy id string into output for removedSkillID field
        sub_141212FB0(out.id_field, skill_id_ptr, skill_id_len);
        // write remainingInstalledCount from updated list length
        out.remaining_count = updated_list.count;
        // free temp path allocation
        if backup_path_len > 0 { dealloc(backup_path_ptr, backup_path_len); }
        // free install_path
        if install_path_len > 0 { dealloc(install_path_ptr, install_path_len); }
        // drop skill_list
        sub_1403660C0(&skill_list);
        return Ok { removedSkillID: skill_id, backup: backup_record, remainingInstalledCount: n };
    }
    // updated_list query failed → propagate error
    return Err;
}
```

---

## Layer 5 — DB backup write: import_skill_build_record_db_write_111 @ 0x1406F1360

```
fn import_skill_build_record_db_write_111(out, list_ptr, list_len, repo_id, repo_len, path_ptr, path_len, record_type) {
    // 1. Build path string via sub_14107A2D0
    // 2. Get path bytes via sub_1410A1B60
    // 3. Read SKILL.md from skill dir — import_skill_read_parse_skill_md_111 @ 0x1406EE680
    // 4. Generate UUID for backupID — uuid_v4_generate_raw_sys @ 0x140F5A860
    // 5. Record timestamp — system_time_precise_u32_111 @ 0x14107B7E0
    // 6. Walk skill dir for files — import_skill_iter_dir_match_111 @ 0x1406EB140
    // 7. Write to SQLite — sub_1403A6410 (INSERT INTO skill_backups / skill_backup_files)
    // 8. Build UUID string — import_skill_uuid_to_string_111 @ 0x1406F7540
    // Returns: backup_record {backupID(uuid), timestamp, file_count}
    // terminated_reason: persistence_commit (SQLite INSERT)
}
```

---

## Layer 5 — Reply serializer: relay_response_build_remove_skill_reply_111 @ 0x140227320

```
fn relay_response_build_remove_skill_reply_111(out: *mut QWord, result_ptr: *i64) -> *mut QWord {
    // Alloc 128-byte JSON write buffer
    // Write fields in order:
    //   {
    //     "schemaVersion": <u32>,
    //     "success": <bool>,
    //     "code": <i32>,
    //     "message": <String>,
    //     <warnings via relay_response_field_warnings_write_sys>,
    //     <sub_1402495A0 extra fields>
    //   }
    // On success: out[0] = 0x8000000000000025 (Ok discriminant), out[1..4] = buf ptr/len
    // On error:   out[0] = 0x8000000000000005 (Err discriminant), out[1] = err ptr
    // terminate: sub_14022FA30 (drop result_ptr)
}
```

Note: `remove_skill_backup_response_ser_111` @ 0x14020EF10 serializes the inner payload struct with fields:
- `removedSkillID` (String)
- `backup` (backup record object)
- `remainingInstalledCount` (u32)
