# deactivate_relay_provider — Windows x64 Pseudocode (Gold Leaf)
**Binary**: AiMaMi 1.1.1 win64.exe (imagebase 0x140000000)
**Session**: <审计会话> / machine=<本地机器>
**delta_class**: integrity_recovered
**gate_tier**: gold-leaf (full real decompile bodies, call-tree depth≥5, all dims 1-5 closed)
**sha**: d24e429a

---

## dim1 — Frontend CCF (confirmed)

**invoke snippet** (`assets/index-DdcCOEJG.js:86:119655`):
```js
vt("deactivate_relay_provider", { providerId: t, ide: e })
```
- Wrapper function `deactivate(providerId, ide)` in minified bundle; called via `Zt.deactivate(b, C)` from `mutationFn` at line 306.
- Frontend sends **two** keys: `providerId` + `ide`. `manager` is **not** sent from frontend — it is resolved server-side by the owner-gate (`run_codex_router_diagnostics_owner_sys`).
- IPC dispatcher: `tauri_ipc_main_dispatcher_sys` @0x14000D2A0 routes to handler at `0x14000EE54`.

---

## Layer 0 — IPC Command Handler (owner sys)
**Symbol**: `deactivate_relay_provider_owner_sys` (renamed from cmd_handler)
**VA**: `0x14001F940` (size 0x5CE)
**IPC string**: `deactivate_relay_provider` @0x1412AC501

```c
// IPC entry for "deactivate_relay_provider"
// Params from msgpack payload: manager(str,len7), providerId(str,len10), ide(str,len3)
// Frontend only sends {providerId, ide}; manager resolved by owner-gate internally.
__int64 __fastcall deactivate_relay_provider_owner_sys(__int64 a1) {
    // copy IPC command buffer (520 bytes) + session context (400 bytes)
    sub_141212FB0(cmd_buf,  a1,       520);   // @0x14001F97A
    sub_141212FB0(sess_ctx, a1 + 520, 400);   // @0x14001F996

    // cmd_name = "deactivate_relay_provider" (25 chars @0x1412AC501)
    // field_name = "manager" (7 chars @0x1412AC6C0)
    v26 = aDeactivateRela;  v27[0] = 25;
    v27[1] = aManager;      v27[2] = 7;
    v27[3] = cmd_buf;

    // Phase 1: owner/session gate
    // try-lock Tokio dispatcher; probe hashmap 0x945CA2F02A2B6F44; vtable[3]=sub_140031D80
    __int64 owner_handle = run_codex_router_diagnostics_owner_sys(sess_ctx+16, ...);  // @0x14006F4B0
    if (!owner_handle) {
        // fallback: extract "manager" field from IPC payload
        // sub_141214620 = query_installed_skills_with_repo_111 (reused field extractor)
        Result mgr = sub_141214620(&v36, &v26, &v27[1]);   // @0x14001FA45
        if (v36.tag != 6 /*Ok*/) {
            // send error response and return
            sub_14080C3C0(sess_ctx_copy, chan, &err, ...);  // @0x14001FD23
            goto LABEL_23;
        }
        owner_handle = v36.value;  // mgr handle from payload
    }

    // Phase 2: parse "providerId" field (len=10, key="providerId" @0x1412AC6C7)
    // sub_1402FED40 = remove_skill_parse_id_param_111 (reused extractor)
    sub_1402FED40(&v37, &v26);   // @0x14001FAB8
    if (v37.tag != 6 /*Ok*/) {
        sub_14080C3C0(sess_ctx_copy, chan, &err, ...);
        goto LABEL_23;
    }
    // v39 = (ptr, len, cap) triple for providerId string
    v40 = v37.cap;  v39 = (v37.ptr, v37.len);

    // Phase 3: parse "ide" field (len=3, key="ide" @0x1412AC727)
    sub_140240B70(v21, &v26);    // @0x14001FB39
    if (v21[0].tag != 6 /*Ok*/) {
        // drop v39 (providerId) if allocated
        if (v39) sub_140001370(v39+1, v39, 1);
        sub_14080C3C0(sess_ctx_copy, chan, &err, ...);
        goto LABEL_23;
    }

    // Phase 4: core deactivation
    deactivate_relay_provider_core_sys(v19, owner_handle, &v39);  // @0x14001FB65

    // Phase 5: build + send response
    // sub_140831F00 = relay_state_send_ipc_response_sys
    sub_141212FB0(v21, a1+520, 400);
    // error path: write 0x8000000000000000 discriminant + copy/alloc error payload
    // ok path: sub_141212FB0(out, v19, 448) direct copy
    relay_state_send_ipc_response_sys(v21, &v26);  // @0x14001FE5B

LABEL_23:
    // drop session array (stride 96, count from v41/v42)
    while (v43 != v44) { ++v44; sub_14033AB50(); v11 = v12; }
    if (v41) sub_140001370(v41+1, 96*v41, 8);
    return sub_140042650(cmd_buf);  // cmd_buf drop
}
```

---

## Layer 1 — Core Dispatch
**Symbol**: `deactivate_relay_provider_core_sys`
**VA**: `0x14021BEC0`

```c
// Bridges IPC handler to business logic; handles Ok/Err split.
__int64 __fastcall deactivate_relay_provider_core_sys(
    __int64 out, __int64 manager_handle, __int64 *provider_id_kv)
{
    // provider_id_kv = (ptr, len, cap) at a3[0..2]
    __int64 v5 = provider_id_kv[1];   // len
    __int64 v6 = provider_id_kv[2];   // cap
    v28 = provider_id_kv;              // save ptr for drop
    v29 = v5;                          // save len for drop

    // Call business logic
    relay_provider_deactivate_mutate_and_persist_sys(&v11, manager_handle, v5, v6);  // @0x14021BEFE

    if (/*!__OFSUB__(-v11, 1)*/ v11 == Ok) {
        // Success path: v25 = extra result data, v24 = v12 (provider list state)
        sub_141212FB0(v17, (char*)v13+8, 336);    // copy inner result
        v14 = v7;  v15 = v24;  v16 = v25;
        set_codex_api_slots_ok_response_build_sys(&v11, &v14);  // @0x14021C08B
        sub_141212FB0(out, &v11, 448);             // copy 448-byte response to out
        // drop provider_id if allocated
        if (*v28) sub_140001370(v29, *v28, 1);    // @0x14021C0B2
        return out;
    } else {
        // Error path: serialize Err via sub_140243FC0
        // copies v12-v13[4] (6 owords) into v18[0..5]
        // encodes via Result<T,E> formatter with vtable off_1412C23C0
        if ((unsigned char)sub_140243FC0(v18, v21))  // @0x14021BFAF
            sub_14124BFE0(aADisplayImplem_2, 55, ...);  // panic: Display impl error
        v23 = v27;  v22 = v26;
        sub_1402342B0(&v12);          // cleanup
        // write Err to out
        *(out + 24) = v23;            // cap
        *(out +  8) = v22;            // (ptr, len) xmm
        *out = 0x8000000000000000ULL; // Err discriminant
        if (*v28) sub_140001370(v29, *v28, 1);
        return out;
    }
}
```

---

## Layer 2 — Mutate + Persist (main business logic)
**Symbol**: `relay_provider_deactivate_mutate_and_persist_sys`
**VA**: `0x1406D5E70`
**Source**: `codexmate_lib::core::relay::manager` (`src\core\relay\manager.rs`)

```c
// WIN RwLock pattern: InterlockedCompareExchange8(v8+16, 1, 0)
// Poison string: "relay state poisoned" @0x1412EA5ED
// Lock offset: mgr_inner + 16 (byte 0=write-lock, byte 1=poison flag)
__int64 __fastcall relay_provider_deactivate_mutate_and_persist_sys(
    __int64 out, __int64 *mgr_ptr, __int64 provider_id_ptr, __int64 provider_id_len)
{
    __int64 v8 = mgr_ptr[1];   // manager inner ptr

    // Acquire WIN write lock
    if (_InterlockedCompareExchange8((volatile signed __int8*)(v8+16), 1, 0))
        sub_14124A510((volatile void*)(v8+16));  // wait for lock
    // Poison check: off_141899DC0 = global panic counter
    if (2 * *off_141899DC0) {
        v10 = sub_14124B1D0(...) ^ 1;
        if (*(_BYTE*)(v8+17)) goto LABEL_32_poison_panic;
    }
    // v10 = 0: not poisoned
    if (*(_BYTE*)(v8+17)) goto LABEL_32_poison_panic;

LABEL_5:
    // Snapshot relay state for mutation (deep-copy)
    sub_14072A3A0(v34, v8+24);   // v34 = snapshot, source = mgr_inner+24

    // Lock release state checkpoint (save v14 = v8+16)
    v14 = v8 + 16;

    // ── Guard 1: router_enabled ──────────────────────────────────────────
    // v37 = snapshot field at [+0x11C offset] = codex_router_enabled flag
    if (v37 /*codex_router_enabled*/) {
        // alloc 107-byte string, copy 7 xmmwords from 0x1412EBCF0..EBD40
        v16 = sub_140001360(107, 1);
        if (!v16) sub_14124BCCB(1, 107);  // OOM panic
        *v16        = xmmword_1412EBCF0;
        v16[1]      = xmmword_1412EBD00;
        v16[2]      = xmmword_1412EBD10;
        v16[3]      = xmmword_1412EBD20;
        v16[4]      = xmmword_1412EBD30;
        v16[5]      = xmmword_1412EBD40;
        // error text (107B UTF-8):
        // "当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。"
        *(out+8)  = 9;    // error discriminant
        *(out+16) = 107;  // string length
        *(out+24) = v16;  // string ptr
        *(out+32) = 107;  // string cap
        goto LABEL_29_err;
    }

    // Find/clone step for provider_id within snapshot (initial lookup)
    // v35 = local snapshot_providers slice header
    v38 = provider_id_ptr;
    *(u64*)&v39 = provider_id_len;
    // Note: sub_14033FB70 used here as find/clone, NOT remove
    relay_provider_list_remove_entry_sys(v35, &v38);  // @0x1406D5FDA

    // ── Guard 2: last-active-provider ───────────────────────────────────
    // Condition: !v36 && v17 && v37 → only one active provider remains
    if (!v36 && v17 && v37) {
        // alloc 123-byte string, copy 8 xmmwords from 0x1412EA638..A698
        v19 = sub_140001360(123, 1);
        if (!v19) sub_14124BCCB(1, 123);
        *v19   = xmmword_1412EA638;
        v19[1] = xmmword_1412EA648;
        v19[2] = xmmword_1412EA658;
        v19[3] = xmmword_1412EA668;
        v19[4] = xmmword_1412EA678;
        v19[5] = xmmword_1412EA688;
        v19[6] = xmmword_1412EA698;
        // partial tail: 107-byte aligned
        // error text (123B UTF-8):
        // "无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"
        *(out+8)  = 9;
        *(out+16) = 123;
        *(out+24) = v19;
        *(out+32) = 123;
        goto LABEL_29_err;
    }

    // ── Main mutation: deep-copy snapshot + remove provider ─────────────
    sub_14072A3A0(&v38, v34);   // deep-copy snapshot into v38
    relay_providers_config_write_and_persist_sys(v45, mgr_ptr, &v38);  // @0x1406D60B8

    if (LODWORD(v45[0]) != 10 /*Ok*/) {
        // persist failed: copy v45[0..5] -> out[8..88]
        *out = 0x8000000000000000ULL;
        goto LABEL_30_cleanup;
    }

    // ── Post-login state sync ────────────────────────────────────────────
    relay_post_login_state_sync_sys(&v38, mgr_ptr);  // @0x1406D60D5

    if (v38 != 10 /*Ok*/) {
        // sync failed: copy error codes to out
        *(out+8)  = v20;  // error code from sync
        // copy v39..v44 fields
        *out = 0x8000000000000000ULL;
        goto LABEL_29_err;
    }

    // ── Drop relay draft/test input slots (stride=232) ──────────────────
    // v39[1] = count of draft/test slots, v39[0] = base ptr
    sub_14072A3A0(&v38, v34);
    if (*(v39+1) /*count > 0*/) {
        u64 count = *(v39+1);
        u64 stride_total = 232 * count;
        // Duff's device unrolled (8x): zero slot[i][11] (offset +88) every 232 bytes
        // handles (count & 7) prefix + 8-at-a-time inner loop
        u64 write_ptr = v39[0];
        // prefix: (~(count-1) & 7) iterations
        for (int i = 0; i < (int)(~(count-1) & 7); i++) {
            *(u64*)(write_ptr + 88) = 0;   // zero slot field[11]
            write_ptr += 232;
        }
        // main 8x unrolled loop
        u64 end_ptr = v39[0] + stride_total;
        while (write_ptr != end_ptr) {
            *(u64*)(write_ptr +    88) = 0;
            *(u64*)(write_ptr +   408) = 0;   // +232
            *(u64*)(write_ptr +   728) = 0;   // +464
            *(u64*)(write_ptr +  1048) = 0;
            *(u64*)(write_ptr +  1368) = 0;
            *(u64*)(write_ptr +  1688) = 0;
            *(u64*)(write_ptr +  2008) = 0;
            *(u64*)(write_ptr +  2328) = 0;
            write_ptr += 8*232;
        }
    }
    sub_141212FB0(out, &v38, 368);   // copy 368-byte success result to out

LABEL_29_err:
    *out = 0x8000000000000000ULL;
LABEL_30_cleanup:
    sub_140234AC0(v34);   // relay_state_snapshot_drop_sys: drop snapshot
    // release write lock: *(v8+16) = 0; if *(v8+16)==2: WakeByAddressSingle(v8+16)
    v15 = *(v8+16); *(v8+16) = 0;
    if (v15 == 2) WakeByAddressSingle((PVOID)(v8+16));
    return out;
}
```

---

## Layer 3a — Provider List Remove
**Symbol**: `relay_provider_list_remove_entry_sys`
**VA**: `0x14033FB70`

```c
// In-place compact-remove of matching entry from Vec<String> provider array.
// Array layout: arr[0]=base_ptr, arr[1]=len, arr[2]=cap  (or arr+8/arr+16 for string fields)
// Each entry = (ptr, len, cap) = 3 x u64 = 24 bytes.
// Match: entry.len == key.len && memcmp(entry.ptr, key.ptr, key.len) == 0
void relay_provider_list_remove_entry_sys(__int64 *arr, __int64 *key_kv) {
    u64 count = arr[2];
    char* data = (char*)(arr[1] + 24);  // base ptr + 24-byte header skip
    if (!count) return;

    u64 write_idx = 0;
    for (u64 i = 0; i < count; i++) {
        u64* entry = (u64*)(data + i*24);
        if (entry[1 /*len*/] == key_kv[1]
            && sub_141213640(entry[0 /*ptr*/], key_kv[0], key_kv[1]) == 0 /*match*/)
        {
            // found match: free string if cap > 0
            if (entry[2 /*cap*/])
                sub_140001370(entry[0], entry[2], 1);  // dealloc
            // skip (don't advance write_idx)
        } else {
            // compact: copy to write position
            memcpy(data + write_idx*24, data + i*24, 24);
            write_idx++;
        }
    }
    arr[2] = write_idx;  // update count
}
```

---

## Layer 3b — Config Write + Persist
**Symbol**: `relay_providers_config_write_and_persist_sys`
**VA**: `0x1406E6960`

```c
// Two-phase: serialize relay state under read-lock, then build JSON + atomic write.
// Returns 10=Ok, 9=IoError, 2=serialize_err, 3=other
_OWORD* relay_providers_config_write_and_persist_sys(_OWORD *out, _QWORD *mgr_ptr, __int64 snapshot) {
    sub_141212FB0(v22, snapshot, 368);  // copy 368-byte snapshot locally

    // Phase A: serialize relay state under WIN read-lock
    // relay_state_serialize_under_lock_sys = sub_1406DA6B0 (逆向分析 auto-renamed)
    relay_state_serialize_under_lock_sys(&v28, mgr_ptr[2]);  // @0x1406E69AD
    // clean up intermediate serialization fields (v23/v24/v25/v26)
    if (v23) sub_140001370(v23+1, v23, 1);
    if (v24+1) sub_140001370(v25, v24+1, 1);
    if (!__OFSUB__(-v26, 1) && v26) sub_140001370(v26+1, v26, 1);
    // shift results: v27=v32, v26=v31, v25=v30, v24=v29, v23=v28

    // Phase B: serialize to JSON + atomic write
    relay_config_serialize_and_atomic_write_sys(&v28, mgr_ptr[0]+16, v22);  // @0x1406E6A53

    if (v28 != 10 /*Ok*/) {
        // copy v28..v33 -> out[0..5]; drop snapshot; return
        relay_state_snapshot_drop_sys(v22);
        return out;
    }

    // Phase C: acquire write lock again to swap snapshot into manager state
    __int64 v10 = mgr_ptr[1];
    if (_InterlockedCompareExchange8((volatile signed __int8*)(v10+16), 1, 0))
        sub_14124A510((volatile void*)(v10+16));
    // poison check...

    // Swap: drop current manager state, copy new snapshot in
    relay_state_snapshot_drop_sys(v10+24);           // drop old state
    sub_141212FB0(v10+24, v22, 368);                 // write new snapshot to mgr_inner+24
    *out = 10;                                        // Ok discriminant

    // release lock
    v17 = *(v10+16); *(v10+16) = 0;
    if (v17 == 2) WakeByAddressSingle((PVOID)(v10+16));
    return out;
}
```

---

## Layer 4 — Serialize + Atomic Write
**Symbol**: `relay_config_serialize_and_atomic_write_sys`
**VA**: `0x1406EAED0`

```c
// Calls check_parent_dirs -> alloc 128B buf -> pretty-print JSON -> atomic write.
// Path read from: mgr_lock_base[808..816] (offset into manager inner struct)
// JSON indent: 2 spaces (asc_1412E85F5 = "  ")
// Returns 10=Ok, 9=IoError(wraps OS err), 2=serialize_err, 3=other
_QWORD* relay_config_serialize_and_atomic_write_sys(_QWORD *out, __int64 mgr_lock, __int64 snapshot) {
    // Step 1: ensure parent directories exist
    __int64 err = relay_config_check_parent_dirs_sys(mgr_lock);  // @0x1406F2870
    if (err) { *out = 2; out[1] = err; return out; }             // serialize_err=2

    // Step 2: alloc 128-byte JSON output buffer
    __int64 json_buf = sub_140001360(128, 1);   // alloc(128, align=1)
    if (!json_buf) sub_14124BCCB(1, 128);        // OOM panic
    v22 = {.cap=128, .ptr=json_buf};
    v23 = 0;
    v15 = {.buf=&v22, .indent_str=asc_1412E85F5 /*"  "*/, .indent_len=2, .depth=0};

    // Step 3: serialize relay config JSON (serde pretty-print)
    __int64 ser_err = sub_14020A3E0(snapshot, &v15);  // @0x1406EAF76
    if (ser_err) {
        if (v22.cap) sub_140001370(v22.ptr, v22.cap, 1);
        *out = 3; out[1] = ser_err;  // other error=3
        return out;
    }

    // v9 = json_buf ptr; v21 = json_buf cap; v20 = json data ptr; v23 = json data len
    // Step 4: read write path from mgr inner struct
    __int64 path_ptr = *(mgr_lock + 808);
    __int64 path_len = *(mgr_lock + 816);

    // Step 5: atomic write
    __int64 write_err = relay_atomic_write_leaf_sys(path_ptr, path_len, v20 /*data*/, v23 /*len*/);
    // @0x1406EAFDF
    if (write_err) {
        // wrap OS error: build IoError via sub_1410A1DF0
        v19 = write_err;
        // format error with unk_1412EBFD0 context
        sub_1410A1DF0(&v15, &unk_1412EBFD0, &v22 /*{&v19, sub_141096C10}*/);
        // drop intermediate
        sub_1402F87A0(v19);
        *out = 9; *(out+1..+3) = v22; out[3] = v23;  // IoError=9
        if (!v21) return out;
    } else {
        *out = 10;  // Ok
        if (!v21) return out;
    }
    sub_140001370(v20, v21, 1);   // free json buf
    return out;
}
```

---

## Layer 5 — Atomic Write Leaf (WIN fs)
**Symbol**: `relay_atomic_write_leaf_sys`
**VA**: `0x140504310`
**Source module**: `codexmate_lib::core::relay::atomic_write` (`aCodexmateLibCo_3`)

```c
// WIN fs atomic write: temp-file + rename pattern.
// Error: "atomic write: missing parent" @0x1412D9476 (28 bytes)
// Uses GetCurrentProcessId + UUID v4 for unique temp file name.
__int64 relay_atomic_write_leaf_sys(__int64 path_ptr, __int64 path_len, __int64 data, __int64 data_len) {
    // Step 1: get parent dir of path
    __int64 parent = sub_14107A3E0(path_ptr, path_len);
    if (!parent) {
        // "atomic write: missing parent"
        return sub_141072000(20, aAtomicWriteMis, 28);
    }

    // Step 2: build temp file path: parent + "/" + PID + "-" + UUIDv4
    DWORD pid = GetCurrentProcessId();           // @0x14108B3B0 (WIN API)
    uuid_v4_generate_raw_sys(&v43);              // @0x140F5A860 — generate UUID v4
    // compose: parent/pid-uuid  (format via sub_1410A1DF0 with unk_1412D9492)
    sub_1410A1DF0(&v32, &unk_1412D9492, &v43);  // format temp path
    sub_14107A2D0(&v29, parent_ptr, parent_len, v33, v34);  // join paths

    // Step 3: open/create temp file
    __int64 file_handle = sub_141087E20(&v43);   // CreateFile equivalent
    if (file_handle == 1 /*INVALID*/) { return v13; }

    // Step 4: write data to temp file (loop until all bytes written)
    hObject[0] = file_handle;
    u64 remaining = data_len;
    char* write_ptr = data;
    while (remaining) {
        v23 = sub_141097C30(hObject, write_ptr, remaining);  // WriteFile equivalent
        if (v23.tag == 1 /*break/eof*/) {
            // handle IO error subcases (0=OS err, 1=interrupted, 2=other, 3=EOF/Interrupted)
            switch (BYTE8(v23) & 3) {
                case 0: LOBYTE(v23) = *(v23.value+16); goto LABEL_26;
                case 1: LOBYTE(v23) = *(v23.value+15); goto LABEL_26;
                case 2: goto LABEL_28;
                case 3: // retry on interrupt (code==35)
                    if (HIDWORD(v23.value) >= 0x2A) LOBYTE(v23) = 42;
LABEL_26:           if ((u8)v23 == 35) { sub_140041790(&v43+8); continue; }
LABEL_28:           if (!v23.value) goto LABEL_29;
                    CloseHandle(hObject[0]); return v13;
            }
        }
        if (!v23.count) { v13 = &off_1412CFCE0; goto LABEL_30_close; }
        if (remaining < v23.count) sub_14124C270(...);  // overflow panic
        write_ptr += v23.count;
        remaining -= v23.count;
    }

LABEL_29:
    // Step 5: flush temp file
    v13 = sub_14107AD30(hObject);   // FlushFile/sync
    if (v13) {
LABEL_30_close:
        CloseHandle(hObject[0]);
        return v13;
    }
    CloseHandle(hObject[0]);

    // Step 6: rename temp -> final path (atomic on WIN NTFS)
    __int64 rename_err = sub_140504130(v29.ptr, v29.len, path_ptr, path_len);  // MoveFileEx
    if (rename_err) {
        // log error via sub_14031F0B0 if log_level > 1
        // delete temp file via snooze_file_delete_111 @0x14108BF60
        snooze_file_delete_111(v29.ptr, v29.len);
        // attempt fallback copy: sub_1403A6670 then CloseHandle
        // ...
        sub_140041790(&v39);  // drop rename error
        return v13;
    }

    // cleanup parent dir ref
    sub_140504900(parent_ptr, parent_len);
    if (v29.cap) sub_140001370(v29.ptr+1, v29.cap, 1);
    return 0;  // SUCCESS
}
```

---

## Layer 4b — Post-Login State Sync
**Symbol**: `relay_post_login_state_sync_sys`
**VA**: `0x1406E1750`
**Source**: `codexmate_lib::core::relay::manager` (`src\core\relay\manager.rs`)

```c
// Post-deactivation state sync: re-snapshot, drive state-machine, write result back.
// NEW vs 1.0.9: relay_draft_test_input_drop_sys callee present in 1.1.1 (new side-effect).
__int64 relay_post_login_state_sync_sys(__int64 out, __int64 *mgr_ptr) {
    // Step 1: read-lock snapshot of current relay state
    relay_state_read_lock_snapshot_sys(v67);  // @0x1406E8480
    sub_14030B390(&v102, v68, v68 + 232 * v69);  // build provider slice
    sub_1403654F0(&v94, v70);                     // build ide-count slice

    // Step 2: acquire write lock on manager inner
    __int64 v6 = mgr_ptr[2];  // manager inner ptr (second level)
    if (_InterlockedCompareExchange8((volatile signed __int8*)(v6+16), 1, 0))
        sub_14124A510((volatile void*)(v6+16));

    // Poison check / lock health assertions...

    // Early exit: if mgr_inner+24 (*(_QWORD*)(v6+24)) is null → no active provider
    if (!*(_QWORD*)(v6+24)) {
        v11 = 0x8000000000000000ULL;
        goto LABEL_15_release_lock;
    }

    // Step 3: build context for state-machine drive
    // sub_1410A1DF0 formats mgr+32 (provider data ptr) with vtable sub_1410AFA10
    sub_1410A1DF0(&v96, &byte_1412DDC46, &v88);   // context build

    // Step 4: drive relay state-machine
    // sub_14073BC50 = primary async state-machine driver
    sub_14073BC50(&v76, v21+16, v103, v6, v95, v15, v31, v32, &v83);  // @0x14073BC50
    // On success (v76==10): v22 = result ptr, v24 = extra data
    // On failure: log via sub_140ECE370 if log_level>1, cleanup via sub_140708350
    //             v22 = 0x8000000000000000

    // Step 5: write result back to manager
    sub_140732660(&v96, v6+16, &v88);  // @0x140732660 — result write-back
    // Updates mgr_inner state, returns 10=Ok or error

    if (v96 == 10 /*Ok*/) {
        // Step 6: drop relay draft/test input slots (NEW in 1.1.1)
        // relay_draft_test_input_drop_sys called per-slot, stride=232
        // count from v103[1] (slot count field)
        *(_BYTE*)(out+8) = v37;
        *out = 10;
        // free intermediate allocations: v108, v111/v40 len, v110 len
        // cleanup v95 provider list copies (stride 24, count v42)
        // cleanup v94 entries (24*v94 bytes)
        // Drop loop: while (slot_ptr != slot_end)
        //   relay_draft_test_input_drop_sys(slot_ptr); slot_ptr += 232;
        u64 slot_count = v103[1];
        __int64 slot_ptr = v103[0];
        for (u64 i = 0; i < slot_count; i++) {
            relay_draft_test_input_drop_sys(slot_ptr);  // @0x1401D6220
            slot_ptr += 232;
        }
        // Free slot array: sub_140001370(v111, 232*v102, 8) if v102>0
        if (v102) sub_140001370(v111, 232*v102, 8);
    } else {
        // Error path: copy v96..v101 to out
        // Same slot-drop and cleanup sequence
        // ...
    }

    // Step 7: release lock; drop snapshot
    return sub_140234AC0(v67);   // relay_state_snapshot_drop_sys
}
```

---

## Layer 5b — Parent Dir Check (new in 1.1.1)
**Symbol**: `relay_config_check_parent_dirs_sys`
**VA**: `0x1406F2870`
**Delta vs 1.0.9**: NOT present in 1.0.9 persist chain — new guard added in 1.1.1.

```c
// Pre-write existence check: 9 config parent directories in RelayManagerState.
// Indices probed: [33,34], [41,42], [45,46], [49,50], [57,58], [61,62], [113,114], [117,118], [97,98]
// sub_141082B80 = path_exists_check_sys (returns 0=exists, nonzero=err)
__int64 relay_config_check_parent_dirs_sys(_QWORD *mgr_lock) {
    if (sub_141082B80(&v3, mgr_lock[33], mgr_lock[34])) return result;
    if (sub_141082B80(&v4, mgr_lock[41], mgr_lock[42])) return result;
    if (sub_141082B80(&v5, mgr_lock[45], mgr_lock[46])) return result;
    if (sub_141082B80(&v6, mgr_lock[49], mgr_lock[50])) return result;
    if (sub_141082B80(&v7, mgr_lock[57], mgr_lock[58])) return result;
    if (sub_141082B80(&v8, mgr_lock[61], mgr_lock[62])) return result;
    if (sub_141082B80(&v9, mgr_lock[113], mgr_lock[114])) return result;
    if (sub_141082B80(&v10, mgr_lock[117], mgr_lock[118])) return result;
    return sub_141082B80(v11, mgr_lock[97], mgr_lock[98]);
}
```

---

## Delta vs 1.0.9 — Summary

| Aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| `relay_post_login_state_sync_sys` | present | present (confirmed) |
| `relay_draft_test_input_drop_sys` in sync path | **ABSENT** | **PRESENT** (new side-effect) |
| `relay_config_check_parent_dirs_sys` | **ABSENT** | **PRESENT** (new persist guard) |
| Guard error strings | same UTF-8 | same UTF-8 (not a delta) |
| JSON schema fields (9 keys) | same | same (not a delta) |
| Lock mechanism (WIN futex) | same | same |
| Atomic write pattern (UUID temp + rename) | same | same |

**Key 1.1.1 additions**:
1. Pre-write parent-dir existence gate (`relay_config_check_parent_dirs_sys`) — 9 path checks before any atomic write attempt.
2. `relay_draft_test_input_drop_sys` called per-slot (stride 232) after successful state sync — clears relay draft/test inputs from memory.
