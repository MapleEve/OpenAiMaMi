# pseudocode — merge_mystery_unlock_grants (windows-x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
producer: claude-sonnet-4-6 (pure-producer, gold-leaf pass)
delta_class: integrity_recovered
idb: <本地路径>
hexrays_ready: true
baseline: 1.0.9
sha: d24e429a

---

## Symbol Table

| Symbol | VA | Size | Role |
|---|---|---|---|
| `merge_mystery_unlock_grants_owner_sys` | `0x1400254C0` | `0x4B1` | IPC owner / dispatcher |
| `pending_auto_switch_state_lock_acquire_111` | `0x14006EDC0` | ~`0x1E0` | NEW in 1.1.1 futex gate |
| `query_installed_skills_with_repo_111` | `0x141214620` | — | skill repo lookup |
| `deserialize_grants_payload_111` | `0x140360C10` | ~`0x110` | payload JSON decode |
| `mystery_grant_mutex_lock_and_write_111` | `0x14078AEB0` | ~`0x260` | mutex + write orchestrator |
| `hotspot_merge_grants_into_config_111` | `0x1401B3630` | ~`0x7B0` | core merge loop |
| `hotspot_hashmap_upsert_111` | `0x140373E70` | ~`0x1A0` | Robin-Hood HashMap upsert |
| `codexmate_settings_hotspot_read_full_sys_111` | `0x1401A15D0` | — | platform READ hotspot config |
| `hotspot_config_serialize_5field_json_and_write_sys` | `0x1401A1D90` | — | platform WRITE hotspot config |
| `relay_config_check_parent_dirs_sys` | `0x1406F2870` | — | write-gate: parent dir check |
| `system_time_precise_u32_111` | `0x14107B7E0` | — | GetSystemTimePreciseAsFileTime wrapper |
| `elapsed_since_ts_111` | `0x14107B790` | — | duration computation |

IPC command string: `"merge_mystery_unlock_grants"` @ `0x1412AC3B3`

---

## 1. Owner: `merge_mystery_unlock_grants_owner_sys` @ 0x1400254C0

Full decompiled body (HexRays output, addresses inlined):

```c
// IPC: merge_mystery_unlock_grants
// Entry: a1 = &InvokeContext (stack layout: [0..520] = resolver, [520..920] = payload, [920..936] = opts)
// NEW vs 1.0.9: pending_auto_switch gate + mutex-guarded write path
__int64 __fastcall merge_mystery_unlock_grants_owner_sys(__int64 invoke_ctx)
{
    // --- prologue / clone ---
    v43 = -2;                                        // 0x1400254d9 stack guard
    sub_141212FB0(v15, invoke_ctx, 520);             // 0x1400254fa clone resolver region
    sub_141212FB0(v17, invoke_ctx+520, 400);         // 0x140025516 clone payload region
    v38 = *(invoke_ctx + 936);                       // 0x140025522 opts qword
    v37 = *(invoke_ctx + 920);                       // 0x140025530 opts __int128

    // --- build dispatch params for skill lookup ---
    v21 = "merge_mystery_unlock_grants";             // 0x140025549 @ 0x1412AC3B3
    v22[0] = 27;                                     // 0x140025550 len of cmd string
    v22[1] = "repo";                                 // 0x140025562 @ 0x1412AC6D1 field key
    v22[2] = 4;                                      // 0x140025569 field key len
    v22[3] = &v15;                                   // 0x140025574 &resolver clone

    // --- [NEW IN 1.1.1] pending auto-switch gate ---
    v4 = pending_auto_switch_state_lock_acquire_111(v16+16, ...);  // 0x1400255a1
    if (!v4) {
        // auto-switch NOT active: look up skill by repo field
        query_installed_skills_with_repo_111(&v31, &v21, &v22[1]);  // 0x1400255c5
        if (v31[0] != 6) {
            // discriminant != 6 => Err: skill not found
            sub_14080C3C0(v14, v18, &v21, &v27, v19, v20);         // 0x14002582f error IPC reply
            goto LABEL_18;
        }
        v4 = v31[1];  // 0x1400255d8 extract skill handle (Ok value)
    }
    // v4 = skill_handle (may be 0 if auto-switch active, handled below)

    // --- deserialize grants from payload field "grants" ---
    v21 = "merge_mystery_unlock_grants";             // 0x1400255ea
    v22[0] = 27;
    v22[1] = "grants";                               // 0x140025603 @ 0x1412AC798 field key
    v22[2] = 6;                                      // 0x14002560a
    v22[3] = &v15;
    deserialize_grants_payload_111(&v36, &v21);      // 0x140025638

    if (v36[0] == 6) {
        // Ok(vec) — grants decoded
        v30 = v36[3];                                // capacity
        v29 = v36[1..2];                             // (ptr, len) of Vec<MysteryRouteGrant>

        // --- [NEW IN 1.1.1] mutex-guarded write ---
        mystery_grant_mutex_lock_and_write_111(&v32, v4, &v29);   // 0x14002567f

        sub_141212FB0(&v21, invoke_ctx+520, 400);   // 0x140025695 re-clone payload for response

        if (v32 != 1) {
            // write succeeded (discriminant=0=Ok)
            // build Ok IPC result, drop grants Vec on heap
            // drop loop: 96-byte stride for MysteryRouteGrant drop glue
            // (call sub_14033AB50 per element; dealloc at sub_140001370)
            ipc_response_result_dispatch_111(&v21, &v36);  // 0x1400258b8
            goto LABEL_18;
        }
        // discriminant==1 => Err from write
        // ... clone error string, wrap in Err IPC response
        ipc_response_result_dispatch_111(&v21, &v36);  // 0x1400258b8
        goto LABEL_18;
    }
    // grants deserialization error path
    sub_14080C3C0(v13, v18, &v21, &v25, v19, v20);  // 0x14002576e error IPC reply

LABEL_18:
    // drop grants Vec (capacity checked at v37 qword)
    while (v39 != v40) {
        sub_14033AB50();   // drop MysteryRouteGrant (96-byte stride)
        v10 += 96;
        ++v40;
    }
    if (v37) sub_140001370(v37+1, 96*v37, 8);   // dealloc Vec backing store

    return sub_140042650(v15);  // 0x14002594c drop resolver + return
}
```

**Key field offsets in InvokeContext stack layout:**
- `[0..520]` = InvokeResolver clone (`v15`)
- `[520..920]` = payload clone (`v17`)
- `[920..936]` = opts (`v37`/`v38`) — `__int128`
- `[936]` = extra qword (`v38`)

---

## 2. `pending_auto_switch_state_lock_acquire_111` @ 0x14006EDC0

**NEW IN 1.1.1** — blocks `merge_mystery_unlock_grants` while a pending auto-switch is in progress.

```c
// Windows futex spinlock: InterlockedCompareExchange8 on Address[0]
// Global state: off_141899DC0 (pointer to pending-auto-switch flag, 2*flag checked = active)
// Returns: non-zero if auto-switch is pending (merge should be deferred), 0 if safe to proceed
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(char *Address, ...)
{
    v27 = -2;  // 0x14006edcd stack guard
    LOBYTE(Address) = 1;
    if (_InterlockedCompareExchange8(v4, 1, 0))  // 0x14006eddc try-acquire lock byte
        sub_14124A510(v4);                        // 0x14006ef28 park_thread (WaitOnAddress)

    v5 = off_141899DC0;                           // 0x14006ede6 global pending-switch flag
    if (!(2 * *off_141899DC0)) {
        // pending flag not set: check lock byte[1] (second status byte)
        v6 = 0;
        v7 = (uint8_t)v4[1];
        if (!v7) goto LABEL_5;
LABEL_21:
        // Panic: called Result::unwrap() on Err
        // string: "called `Result::unwrap()` on an `Err` value" @ 0x1412ADA10
        sub_14124BFE0(aCalledResultUn, 43, &v23, &off_1412ADB00, &off_1412AEEC0);
    }
    // pending flag set: wait via sub_14124B1D0 (futex_wait_helper)
    v6 = sub_14124B1D0(Address, ...);  // 0x14006ef32
    v6 ^= 1;
    v7 = (uint8_t)v4[1];
    if (v7) goto LABEL_21;

LABEL_5:
    // Perform hashmap scan for skill handle (Robin-Hood SSE2 SIMD probe)
    if (*(v4 + 32)) {
        // Walk ctrl-byte array: _mm_cmpeq_epi8 against xmmword_14124E090/xmmword_14124E0A0
        while (1) {
            a2 = v7 & v9;
            v12 = _mm_loadu_si128(v8 + a2);
            R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128));
            if (R9D) break;
            if (_mm_movemask_epi8(_mm_cmpeq_epi8(v12, -1))) goto LABEL_12;
            v9 = a3 + a2 + 16;  a3 += 16;
        }
        // SIMD match found: invoke vtable dispatch at (v14-8)[vtable+24]
        (*(*v14_minus8 + 24))(&v23, v16, a3);
        // Check pending flag again, conditionally set v25[1]=1
        v4 = v25;
        v22 = *v25;  *v25 = 0;
        if (v22 == 2) WakeByAddressSingle(v25);  // 0x14006ef1b
    } else {
LABEL_12:
        // No match: conditional set v4[1]=1, release lock byte
        v16 = 0;
        v17 = *v4;  *v4 = 0;
        if (v17 == 2) WakeByAddressSingle(v4);  // 0x14006ef1b
    }
    return v16;  // 0 if auto-switch not pending; non-zero if it was
}
```

**Terminated by:** returns 0 or non-zero after futex release + `WakeByAddressSingle` — `external_call` leaf.

---

## 3. `deserialize_grants_payload_111` @ 0x140360C10

```c
__int64 __fastcall deserialize_grants_payload_111(__int64 out, __int64 *params)
{
    v17 = -2;
    // params layout: [0]=cmd_str_ptr, [1]=len, [2]=field_key_ptr, [3]=field_key_len, [4]=payload_ptr, [5]=extra
    v3 = params[0];  v4 = params[1];  v5 = params[2];  v6 = params[3];

    if ((sub_1402F9EB0(params) & 1) == 0) {
        // field not present in payload => Ok(empty Vec)
        sub_140418530(&v12);          // 0x140360c51 build empty Vec<MysteryRouteGrant>
        if (!overflow_sub(0, v12)) {
            *(out + 24) = v13;        // 0x140360cff capacity=0
            *(out + 8)  = v12;        // oword (ptr=1, len=0)
            *out = 6;                 // 0x140360d0b discriminant=6=Ok
            return out;
        }
    }
    // field present: setup serde vtable call
    v11[0] = 0x8000000000000008;  // sentinel / capacity marker
    v11[1..5] = {v3, v4, v5, v6, v7};
    v14 = 0; v14+8 = 1; v15 = 0;
    v10[2] = 1610612768;          // allocator tag
    v10[0] = &v14;
    v10[1] = &off_1412CAD50;      // vtable ptr for Vec<MysteryRouteGrant> deserializer

    if (sub_140E30410(v11, v10))  // serde decode call
        // panic: "a Display implementation returned an error unexpectedly"
        sub_14124BFE0(aADisplayImplem_4, 55, &v16, &unk_1412CB098, &off_1412CAEF8);

    // Move decoded vec into out:
    *(out+7..22) = v14 (oword);
    *(out+23..30) = v15;
    sub_140335FF0(v11);           // drop payload helper
    *out = 3;                     // discriminant=3=Err(deserialized_grants)
    *(out+1..16) = v9[0..15];
    *(out+16..31) = v9[15..30];
    return out;
}
```

**Vtable:** `off_1412CAD50` = serde deserializer vtable for `Vec<MysteryRouteGrant>`.

---

## 4. `mystery_grant_mutex_lock_and_write_111` @ 0x14078AEB0

```c
// Windows futex mutex on a2 (byte at &mutex_byte); off_141899DC0 = global pending-switch flag
__int64 __fastcall mystery_grant_mutex_lock_and_write_111(__int64 out, _BYTE *mutex, _QWORD *grants_vec)
{
    v48 = -2;
    v43 = grants_vec;
    v3  = out;

    LOBYTE(a1) = 1;
    if (_InterlockedCompareExchange8(mutex, 1, 0))   // 0x14078aee2 try acquire
    {
        v47 = 1;
        v19 = mutex;
        sub_14124A510(mutex);                        // 0x14078b056 park_thread
        mutex = v19;
    }

    v4 = off_141899DC0;                              // global pending-switch state
    if (2 * *off_141899DC0) {
        // pending auto-switch active: wait
        v47 = 1;
        v20 = mutex;
        v21 = sub_14124B1D0(a1, mutex, grants_vec); // 0x14078b06d futex_wait_helper
        mutex = v20;
        v21 ^= 1;
        v45 = v21;
        Address = mutex;
        if (mutex[1]) goto LABEL_5;
    } else {
        v45 = 0;
        v5 = mutex[1];
        Address = mutex;
        if (v5) {
LABEL_5:
            // POISONED LOCK PATH
            // Check poison: sub_1410B1930("poisoned lock: another task failed inside", 41, ...)
            // string @ 0x1412E6BB3
            if (sub_1410B1930(aPoisonedLockAn, 41, &v28))
                sub_14124BFE0(aADisplayImplem_8, 55, &v46, &unk_1412F4FF8, &off_1412F4F10);
                // panic: "a Display implementation returned an error unexpectedly"

            // Fill result with mutex status fields (+8..+32)
            v9  = v35[0..15]; v10 = v35[16];
            v40[0] = *((int32*)(v35+17));
            *((dword*)v40 + 1) = v35.i32[5];
            v11 = Address;

            // Conditional: if NOT v45 and pending active, set mutex[1]=1
            if (!v45 && 2 * *v4)
            {
                v47 = 1;
                if (!sub_14124B1D0(...)) v11[1] = 1;
            }
            v12 = *v11; *v11 = 0;
            if (v12 == 2) WakeByAddressSingle(v11);  // 0x14078b22e

            // Fill out struct with poison status (counters u32 at +25, +28)
            *(out+28) = *(dword*)((char*)v40+3);
            *(out+25) = v13;
            *(out+8)  = v9;   // __int128
            *(out+24) = v10;
            *out = 1;          // discriminant=1=PoisonedLockOk

            // Drop grants vec: iterate 40-byte stride, dealloc each string
            v16 = grants_vec[2];
            if (v16) {
                v17 = grants_vec[1] + 24;
                do {
                    v18 = *(v17-1);
                    if (v18) sub_140001370(*v17, v18, 1);  // dealloc string data
                    v17 += 5; --v16;
                } while (v16);
            }
            if (*grants_vec) sub_140001370(grants_vec[1], 40 * *grants_vec, 8);  // dealloc vec
            return out;
        }
    }

    // HOT PATH: call core merge function
    v28[2] = grants_vec[2];
    *(oword*)v28[0..1] = *(oword*)grants_vec;
    sub_1401B3630(&v35, mutex+8, &v28);   // 0x14078b0b3 hotspot_merge_grants_into_config_111

    if (v35[0] != 10) {
        // Merge error: format error msg via sub_140243FC0, wrap in Err
        // fill out struct with error string; call sub_1407B1650 (drop string)
        *out = 1; *(out+8..24) = error fields;
        // conditional WakeByAddressSingle
        goto LABEL_24;
    }

    // Merge success: discriminant=0
    *(out+24) = v35[3];
    *(out+8)  = v35[1..2];
    *out = 0;

LABEL_23:
    if (!(v45) && 2 * *v4) {
        v47 = 0;
        if (!sub_14124B1D0(...)) v25[1] = 1;
    }
LABEL_24:
    v26 = *v25; *v25 = 0;
    if (v26 == 2) WakeByAddressSingle(v25);  // 0x14078b243
    return out;
}
```

**Terminated by:** `WakeByAddressSingle` release + return — `external_call` leaf.

---

## 5. `hotspot_merge_grants_into_config_111` @ 0x1401B3630

This is the core write function. Two-phase grant-key dispatch loop using length switch + inline byte comparison / SIMD.

```c
__m128i* __fastcall hotspot_merge_grants_into_config_111(__m128i *out, _QWORD *a2, __int64 *grants_arr)
{
    v85 = -2;
    v73 = grants_arr;

    // --- READ config from disk/cache ---
    codexmate_settings_hotspot_read_full_sys_111(v55, a2);  // 0x1401b367c
    // v55 = HotspotConfig struct (144B+ layout):
    //   +0:   mysteryUnlockGrants (HashMap<String,GrantValue>, Rust HashMap layout)
    //   +16:  mysteryUnlockedRoutes
    //   +144: present flag byte

    // Init thread-local counter (TLS slot via sub_141077010 / sub_14108CEE0)
    v5 = sub_141077010();  // 0x1401b3689
    if (*byte(v5+16) == 1) { v7 = *v5; v8 = *(v5+8); }
    else { v7 = sub_14108CEE0(); *v5=v7; *(v5+8)=v8; *byte(v5+16)=1; }
    *v5 = v7 + 1;  // increment access counter

    // Load SIMD constants for 18-char "customInstructions" match
    si128 = xmmword_1412B5240;   // 0x1401b3706 first 16 bytes of "customInstructions"
    v13   = _mm_cvtsi32_si128(0x736E);  // 0x1401b370e last 2 bytes "ns" (bytes 16-17)

    // --- PHASE 1: iterate existing config grants ---
    // v9 = config.mystery_unlock_grants.data ptr
    // v11 = end ptr (v56[1] + 40*v57)
    while (v9 != end_ptr) {
        v14 = v9;
        v15 = v9[3];  // key ptr
        v16 = v9[4];  // key len
        v17 = sub_14070B280(v15, v16);  // get str bytes ptr
        v9 += 5;  // advance 40 bytes (5 qwords per entry)

        switch (key_len) {  // v18 = resolved key len
        case 3:
            if (*(uint16*)v17 == 0x636D && v17[2] == 0x70)  // "mcp"
                goto LABEL_19;
        case 6:
            if (*(uint32*)v17 == 0x6C696B73 && *(uint16*)(v17+4) == 0x736C)  // "skills"
                goto LABEL_19;
        case 8:
            if (*(uint64*)v17 == 0x776569767265766F  // "overview"
             || *(uint64*)v17 == 0x73746E756F636361  // "accounts"
             || *(uint64*)v17 == 0x736E6F6973736573  // "sessions"
             || *(uint64*)v17 == 0x73676E6974746573) // "settings"
                goto LABEL_19;
        case 11:
            if (*(uint64*)v17 == 0x616E65746E69616D   // "maintenan"
             && *(uint64*)(v17+3) == 0x65636E616E65746E)  // "enance" overlap
                goto LABEL_19;
        case 12:
            if (*(uint64*)v17 == 0x7069726373627573  // "subscrip"
             && *(uint32*)(v17+8) == 0x6E6F6974)     // "tion"
                goto LABEL_19;
        case 18:
            // SIMD 16+2 byte match for "customInstructions"
            if (_mm_movemask_epi8(
                    _mm_and_si128(
                        _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(uint16*)(v17+16)), v13),
                        _mm_cmpeq_epi8(_mm_loadu_si128(v17), si128))) == 0xFFFF)
                goto LABEL_19;
        default:
            continue;
LABEL_19:
            sub_1410A2210(&v66, v14+2);           // copy key string to stack slot
            v19 = *v14;  v20 = v14[1];            // grant: (version, value)
            hotspot_hashmap_upsert_111(&v62, &v66, v19, v20);  // upsert into in-memory map
        }
    }

    // --- PHASE 2: iterate incoming grants from IPC payload ---
    v22 = grants_arr[1];  v23 = grants_arr[2];
    v24 = v22 + 40 * v23;  // end of incoming grants
    v25 = v22 + 40;
    while (v23) {
        v26 = *(v25-40);  // grant discriminant (2=Ok/present)
        if (v26 == 2) break;  // terminal discriminant

        v27 = *(v25-32);  v78 = *(v25-24);
        v28 = *(v25-16);  v29 = *(v25-8);

        v30 = sub_14070B280(v28, v29);  // get key bytes
        switch (key_len) {
        // [identical switch as Phase 1 — same 6 key categories]
        // On match:
            v76[0] = v78;  v76[1] = v75;  v77 = v29;
            hotspot_hashmap_upsert_111(&v62, &v76, v26, v27);  // upsert
        // No match:
            if (v78) sub_140001370(v75, v78, 1);  // free unmatched grant string
        }
        v25 = v72 + 40;
        if (v72 == v24) goto LABEL_47;
    }

    // free remaining unmatched grants
    if (v24 != v25) {
        v32 = (v24-v25)/40;
        do { if (*(v33-1)) sub_140001370(*v33, *(v33-1), 1); v33+=5; --v32; } while(v32);
    }
LABEL_47:
    if (v71) sub_140001370(v22, 40*v71, 8);  // dealloc incoming grants vec

    // --- TIMING ---
    v76.i32[0] = system_time_precise_u32_111();  // 0x1401b3b61 -> GetSystemTimePreciseAsFileTime
    elapsed_since_ts_111(&v66, &v76, 0xD53E8000, 27111902);  // 0x1401b3b8e
    if (v66.i8[0])
        v38 = 0;
    else
        v38 = 1000 * v66.i64[1] + v67[0].u32[0] / 1000000;  // ms computation
    v68 = v38;  // elapsed_ms

    // Log slow path: if elapsed >= 21ms -> sub_1407B4610 (long path); else sub_1401DBB10
    if (v77 >= 2) {
        if (v77 >= 0x15) sub_1407B4610(v76.i64[1], v77, &v66);  // 0x1401b3e6b
        else             sub_1401DBB10(v76.i64[1], v77);         // 0x1401b3e54
    }
    sub_140362790(&v66, &v76);  // build result struct

    // Free config read buffer
    if (v10) { for (i=0; i<v10; i++) { if (*(v45-1)) sub_140001370(*v45, *(v45-1), 1); v45+=5; } }
    if (v56.i64[0]) sub_140001370(v44, 40*v56.i64[0], 8);

    // Update out with updated grants HashMap state
    v57 = v67[0].i64[0];
    v56 = v66;

    // --- WRITE config back to disk ---
    hotspot_config_serialize_5field_json_and_write_sys(&v66, a2, v55);  // 0x1401b3d1e

    if (v66.i32[0] == 10) {
        // Success: discriminant=10
        out->i64[1] = v77;  // elapsed_ms in result
        *((oword*)(out+8)) = v76;
        out->i64[0] = 10;
    } else {
        // Error: copy full error owords into out
        out[5] = v67[4];  out[4] = v67[3];
        v48 = v66;  v49 = v67[0];  v50 = v67[1];
        out[3] = v67[2];  out[2] = v50;  out[1] = v49;  *out = v48;
        // free error string vec if present
        if (v43) { do { if (*(v51-1)) sub_140001370(*v51, *(v51-1), 1); v51+=5; --v43; } while(v43); }
        if (v76.i64[0]) sub_140001370(v42, 40*v76.i64[0], 8);
    }

    sub_1400485A0(v55);  // drop hotspot read buffer
    return out;
}
```

**Terminated by:** `hotspot_config_serialize_5field_json_and_write_sys` → `sub_1403A64F0` (file write) = `persistence_commit` leaf.

---

## 6. `hotspot_hashmap_upsert_111` @ 0x140373E70

Robin-Hood HashMap upsert (Rust std `HashMap` with SSE2 control-byte scan):

```c
__int64 __fastcall hotspot_hashmap_upsert_111(__int64 map, __int64 key_slot, __int64 version, __int64 value)
{
    v45 = -2;
    v6 = map;  v7 = map + 32;  v44 = key_slot;

    // SipHash the key
    _RAX = sub_140624F90(map+32, key_slot);  // 0x140373eb6 SipHash
    v10 = _RAX;  // full hash

    if (!*(map+16)) {
        // Map empty: grow first
        sub_141216410(map, 1, map+32, ...);  // 0x1403740d1 HashMap grow/rehash
    }

    v11 = *map;         // ctrl byte array ptr (SSE2 layout)
    v12 = *(map+8);     // capacity mask
    v13 = v10 >> 57;    // probe tag (high 7 bits)
    v14 = _mm_cvtsi32_si128(v13);
    v15 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v14, v14), 0), 68);  // broadcast tag

    v16 = key_slot;  v17 = *(key_slot+8);  v18 = *(key_slot+16);

    // Robin-Hood probe loop
    for (i=0; ; i+=16) {
        v21 = v12 & v10;                               // slot index
        v22 = _mm_loadu_si128(ctrl + v21);             // load 16 ctrl bytes
        R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v22, v15));  // find matching tags
        if (R12D) break;  // potential match found
LABEL_9:
        if (R10 != 1) {
            _RAX = _mm_movemask_epi8(v22);             // find empty slots (0x00)
            if (!_RAX) { v19 = 0; goto LABEL_15; }
            tzcnt R10, EAX;
            _R10 = v12 & (v21 + R10);
        }
        _RAX = _mm_movemask_epi8(_mm_cmpeq_epi8(v22, -1));  // tombstone (0xFF)?
        if (_RAX) {
            // INSERT at tombstone slot
            v30 = ctrl[R10];
            if (v30 >= 0) { _EAX = _mm_movemask_epi8(ctrl[0]); tzcnt R10, EAX; v30 = ctrl[R10]; }
            v36 = v16[2];  v35 = *v16;           // copy key metadata
            ctrl[R10] = v13;                      // write probe tag
            ctrl_mirror[v12 & (R10-16)] = v13;   // mirror write
            // Update len/capacity atomic
            *(map+16) = _mm_sub_epi64(*(map+16), f(v30&1));
            // Write entry: (key_ptr, key_len, value)
            v32 = -5*R10;
            data[v32-1] = v36;
            data[v32-2..0] = v35;   // key __m128i
            data[v32+1] = v31;      // value
            data[v32] = a4;         // extra value field
            return 2;  // INSERTED_AT_TOMBSTONE
        }
        v19 = 1;
LABEL_15:
        _R10 = v41;
        v10 = i + v21 + 16;
    }

    // Match found: compare keys
    while (1) {
        tzcnt EAX, R12D;
        v24 = -5 * (v12 & (v21 + _RAX));
        if (v18 == data[v24-1]) {
            // Length matches: full key compare
            v25 = &ctrl[8*v24];
            v26 = v18;
            v27 = sub_141213640(v17, data[v24-4], v18);  // 0x140373f65 key_eq
            v18 = v26;
            v16 = key_slot;
            if (!v27) break;  // keys equal: UPDATE
        }
        _RAX = R12D & (R12D-1);  // clear lowest set bit
        R12D = _RAX;
        if (!(uint16)_RAX) goto LABEL_9;
    }

    // UPDATE existing entry
    v29 = data[v25-2];         // old value
    data[v25-2] = v42;         // new version
    data[v25-1] = v43;         // new value
    if (*v16) sub_140001370(v16[1], *v16, 1);  // drop old key string if heap
    return v29;  // UPDATED (returns old value)
}
```

**Terminated by:** returns old value or `2` (inserted). Key equality via `sub_141213640` = `platform-primitive` leaf.

---

## 7. `codexmate_settings_hotspot_read_full_sys_111` @ 0x1401A15D0

```c
// Reads from file path stored at a2+584/a2+592
// Also reads optional fields: mysteryUnlockGrants (19B @ 0x1412B684A), mysteryUnlockedRoutes (21B @ 0x1412B685D)
// Field lookup key: "CodexMateSettings" (17B) via codexmate_settings_field_lookup_sys_111 @ 0x14040CC30
__int64 __fastcall codexmate_settings_hotspot_read_full_sys_111(__int64 out, __int64 a2)
{
    v36 = -2;
    win32_file_read_bytes_111(&v19, *(a2+584), *(a2+592));  // 0x1401a1608 read raw bytes

    if (OFSUB(-v19, 1)) {
        // File not present / empty: initialize zero config
        *(out+144) = 0;  *(out+16) = 0;  *(out+24) = 1;
        *(out+32) = 0 (oword);  *(out+64) = 0x8000000000000000;
        *(out+88) = 0x8000000000000000;  *out = 0;
        *(out+112) = 0x8000000000000000;  *(out+136) = 0;
        *(out+48) = 8;  *(out+56) = 0;
        return sub_140041790(&v19+8);
    }

    // Parse JSON: sub_140002FA0 (serde::from_slice equivalent)
    sub_140002FA0(&v27, &v19);
    if (v27.discriminant == 6) {
        // Parse error: return zero config
        // [zero-init same as above]
        sub_1401D2850(&v27);
        if (v32) sub_140001370(v31, v32, 1);
        return;
    }

    // Optional field lookup: "mysteryUnlockGrants" (19 chars)
    if (!sub_14103A480(aMysteryunlockg, 19, &v17)) {
        // Also look up "mysteryUnlockedRoutes" (21 chars)
        v8 = sub_14103A480(aMysteryunlocke, 21, &v17);
        if (v8) {
            // Discriminate on type tag at *v8:
            switch (*v8) {
            case 0: LOBYTE(v19) = 0; break;
            case 1: case 2: v9 = *v8; v20 = v8[1]; v19 = v9; break;
            case 3: sub_1410A2210(&v19+8, v8+8); LOBYTE(v19)=3; break;  // String
            case 4: sub_140362910(&v19+8, v8+8); LOBYTE(v19)=4; break;  // Array
            case 5: sub_140406C30(&v19+8, v8+8); LOBYTE(v19)=5; break;  // Object
            }
            // If type=4 (array): convert via sub_14030F100 + sub_1403059A0
            // Then write back via sub_14103A580("mysteryUnlockGrants", 19, &v17)
        }
    }

    // Primary field lookup: "CodexMateSettings" (17 chars)
    codexmate_settings_field_lookup_sys_111(&v19, &v27, aCodexmatesetti, 17, &off_1412B6EC8, 7);
    // 0x1401a17d8

    if (v19 != 2) {
        // Success: memcpy 152 bytes of parsed struct into out
        sub_141212FB0(out, &v19, 152);
        if (v32) sub_140001370(v31, v32, 1);
        return;
    }
    // Tag=2 error: return zero config + cleanup
}
```

**Terminated by:** `win32_file_read_bytes_111` = `external_call`/`platform-primitive` (Win32 file I/O).

---

## 8. `hotspot_config_serialize_5field_json_and_write_sys` @ 0x1401A1D90

5-field JSON serializer + file writer:

```c
// JSON keys (in order): hotspot, usageRefreshInterval, deviceId, remoteDeviceSecret, notificationsSince
// Delta vs 1.0.9: was single-field (deviceId only); now 5-field config
__int64 __fastcall hotspot_config_serialize_5field_json_and_write_sys(_QWORD *out, _QWORD *a2, __int64 cfg)
{
    v18 = -2;

    // Gate: check parent dirs exist
    result = relay_config_check_parent_dirs_sys(a2);  // 0x1401a1db9 @ 0x1406F2870
    if (result) { *out=2; out[1]=result; return result; }  // LABEL_2: dir-check fail

    // Alloc 128-byte JSON scratch buffer
    v8 = sub_140001360(128, 1);  // alloc
    v14 = 128; v15 = v8;
    *v8 = '{';  v16 = 1;

    // Write field 1: "hotspot" (7 chars, cfg+144)
    sub_14025A8C0(&v17, "hotspot", 7, cfg+144);  // 0x1401a1e54
    if (v17.err) goto LABEL_8;
    if (v17.flush_needed) { sub_141248EC0(); goto LABEL_8; }

    // Write field 2: "usageRefreshInterval" (20 chars, cfg+16)
    sub_140260580(&v17, "usageRefreshInterval", 20, cfg+16);  // 0x1401a1e88
    if (v17.err) goto LABEL_8;

    // Write field 3: "deviceId" (8 chars, cfg+64)
    sub_1402662D0(&v17, "deviceId", 8, cfg+64);  // 0x1401a1ee2
    if (v17.err) goto LABEL_8;

    // Write field 4: "remoteDeviceSecret" (18 chars, cfg+88)
    sub_1402662D0(&v17, "remoteDeviceSecret", 18, cfg+88);  // 0x1401a1f0f
    if (v17.err) goto LABEL_8;

    // Write field 5: "notificationsSince" (18 chars, cfg+0)
    sub_140267450(&v17, "notificationsSince", 18, cfg);  // 0x1401a1f3f
    if (v17.err) goto LABEL_8;

    // Final: write mysteryUnlockGrants + close JSON
    sub_1401F7930(&v17, cfg+112);  // 0x1401a1f59 (grants field writer)
    sub_1401F7910(&v17, cfg+40);   // 0x1401a1f76 (routes field writer)
    sub_1401F7950(&v10);           // 0x1401a1f94 finalize/close '}'

    // Write to file via sub_1403A64F0(a2+72, {len, ptr, cap})  = persistence_commit
    sub_1403A64F0(a2+72, v13);  // 0x1401a1fcc
    if (result) { *out=3; out[1]=v9; return; }  // LABEL_10: write error

    *out = 10;  // SUCCESS discriminant
    return;

LABEL_8:
    if (v14) sub_140001370(v15, v14, 1);  // free JSON buffer
LABEL_10:
    *out = 3; out[1] = v9; return;
}
```

**Terminated by:** `sub_1403A64F0` (file write to `a2+72` path) = `persistence_commit` leaf.

---

## Delta vs 1.0.9 Summary

| Change | Detail |
|---|---|
| `pending_auto_switch_state_lock_acquire_111` | NEW gate: blocks merge during auto-switch |
| `mystery_grant_mutex_lock_and_write_111` | NEW: wraps write in futex mutex; adds poisoned-lock detection |
| `hotspot_merge_grants_into_config_111` | NEW: atomic read-modify-write with 6 grant key categories |
| `customInstructions` key (18B SIMD) | NEW grant category not in 1.0.9 |
| `mysteryUnlockedRoutes` DTO field | NEW companion field in hotspot JSON |
| 5-field JSON serializer | 1.0.9 was single-field; now writes 5 fields |
| Elapsed timing telemetry | NEW: `system_time_precise_u32_111` captures merge latency |
