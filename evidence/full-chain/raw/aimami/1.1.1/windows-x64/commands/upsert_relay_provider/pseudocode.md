# upsert_relay_provider — AiMaMi 1.1.1 win64 gold-leaf pseudocode

session: <审计会话>
machine: <本地机器>
delta_class: integrity_recovered
platform: windows-x64
produced_at: 2026-06-18
sha_anchor: d24e429a
note: upgraded from sweep-level to gold-leaf (implementation-level real HexRays bodies)

---

## Owner

**VA**: `0x1400149d0`
**Symbol**: `upsert_relay_provider_cmd_handler_111`
**Size**: 0x5de bytes
**Caller**: `tauri_ipc_main_dispatcher_sys` @ 0x14000d2a0 (xref call @ 0x140011477)
**Data xrefs**: 0x1414fa98c, 0x14189ddbc (vtable / dispatch table entries)
**IPC command string**: `"upsert_relay_provider"` @ 0x1412ac4c0

---

## RelayUpsertInput DTO (serde, 10 fields)

String pool anchored at `0x1412bf0f8` (field ptr-table, 10 × 16 bytes = ptr + len):

| field | serde key | type | notes |
|---|---|---|---|
| 0 | `baseUrl` | String | relay endpoint base URL |
| 1 | `apiKey` | Option\<String\> | provider API key (plaintext in transit, keychain-stored server-side) |
| 2 | `wireApi` | RelayWireApi enum | wire protocol variant (`RelayWireApi` @ 0x1412bfe06) |
| 3 | `brand` | RelayBrand enum | (`RelayBrand` @ 0x1412bfc60) |
| 4 | `models` | Vec\<String\> | enabled model list |
| 5 | `extraHeaders` | Map\<String,String\> | additional HTTP headers |
| 6 | `providerId` | Option\<String\> | existing provider UUID (None = new) |
| 7 | `providerName` | String | display name |
| 8 | `schemaVersion` | u32 | |
| 9 | `routeExpiresAtMs` | Option\<i64\> | expiry timestamp ms |

Struct label: `struct RelayUpsertInput with 10 elements` @ 0x1412da198
Serde deserializer: `sub_140241460` @ 0x140241460 (calls `sub_14041DEA0` with `aRelayupsertinp` = "RelayUpsertInput", 10 fields, field table @ `off_1412BF0F8`)

---

## Response DTO (success path)

Produced by `relay_provider_upsert_ok_response_send_sys` @ 0x140835330.
Fields (from decompile + string pool):
- `schemaVersion`
- `success` (bool)
- `code` (i32, tag=10 on Ok)
- `message` (String)
- `warnings` (via `relay_response_field_warnings_write_sys`)

Sent to frontend via `has_notch_invoke_resolver_respond` / `sub_14080C3C0` (IPC response dispatcher).

---

## Owner body (real HexRays, abridged for readability)

```c
// 0x1400149d0: upsert_relay_provider_cmd_handler_111(a1: IpcRequest*) -> i64
//
// Stack layout (key vars):
//   v18[512]  @ rsp+520h  — IPC payload copy (raw bytes, used as input buffer)
//   v22[384]  @ rsp+860h  — app_handle copy
//   v49       @ rsp+E30h  — IPC response count (array size for cleanup loop)
//   v48       @ rsp+E10h  — cleanup array header (__m128i, ptr+count)

v55 = -2;                       // stack canary
sub_141212FB0(v18, a1, 520);    // memcpy IPC payload → v18 (520 bytes)
sub_141212FB0(v22, a1+520, 400); // memcpy app_handle → v22 (400 bytes)
v49 = *(a1+936); v48 = *(a1+920);  // response slot header

// Setup arg context: command="upsert_relay_provider" (len=21), module="app" (string @ 0x1412ac6d5)
v30 = aUpsertRelayPro; v31.lo = 21; v31.hi = aApp;
v32.lo = 3; v32.hi = &v18;      // payload ref
v33 = &v48;                     // response slot

// Gate 1: usage-state check via confirm_pending_auto_switch_deserialize_request_sys
// (reads "upsert_relay_provider" + "app" from arg context)
confirm_pending_auto_switch_deserialize_request_sys(&v26, &v30);  // → writes tag to v26.lo
if ((u32)v26 != 3) {
    // State not ready (tag != 3) → immediately send error response
    sub_141212FB0(v16, a1+520, 360);
    v39 = *(a1+880); v40 = *(a1+896);
    v30 = 1;  // error tag
    sub_14080C3C0(v16, v23, &v30, &v39, v24, v25);  // send IPC error
    goto LABEL_22;
}

// State == 3 path (valid)
// Setup new arg context with module="manager" (@ 0x1412ac6c0)
v30 = aUpsertRelayPro; v31.lo = 21; v31.hi = aManager;
v32.lo = 7; v32.hi = &v18;
v33 = &v48;

// Gate 2: codex-router diagnostics lock
v4 = run_codex_router_diagnostics_owner_sys(v19+16, v2, v3);
if (!v4) {
    // Fallback: query installed skills
    query_installed_skills_with_repo_111(v41, &v30, &v31+8);
    if ((u8)v41[0] != 6) {
        // skill query failed
        sub_141212FB0(v15, a1+520, 360);
        sub_14080C3C0(v15, v23, &v30, &v37, v24, v25);
        sub_140041870(v29);
        goto LABEL_22;
    }
    v4 = v41[0].hi;  // skill store handle
}

// Setup arg context with module="input" (@ 0x1412ac700)
v42 = aUpsertRelayPro; v43.lo = 21; v43.hi = aInput;
v44.lo = 5; v44.hi = &v18;
v45 = &v48;

// Deserialize RelayUpsertInput from payload
sub_140241460(&v30, &v42);     // serde → writes to v30..v32 (Result<RelayUpsertInput>)
v51 = v30;                     // result tag
if (__OFSUB__(-v30, 1)) {      // Err variant (tag == MAX_NEG)
    sub_141212FB0(v14, a1+520, 360);
    sub_14080C3C0(v14, v23, &v42, &v35, v24, v25);
    sub_140041870(v29);
    goto LABEL_22;
}
sub_141212FB0(v17, &v30, 176);  // copy deserialized input to v17 (176 bytes)

// Core upsert
sub_14021A880(v20, v29, v4, v17);  // relay_provider_upsert_wrapper_sys
                                    // (renamed from sub_14021A880)
sub_141212FB0(&v30, a1+520, 400);

if (__OFSUB__(0, v20[0])) {       // Ok path
    // Handle Arc listeners cleanup for response slot
    if (v21 < 0) { v9 = 0; goto LABEL_11; }
    if (v21) {
        v10 = sub_140001360(v21, 1);  // alloc
        sub_141212FB0(v10, v20[2], v21);  // copy response data
    } else { v8 = 1; }
    if (v20[1]) sub_140001370(v20[2], v20[1], 1);  // free old
    LOBYTE(v27) = 3; v27.hi = v21; v28 = v8;
    v26 = 0x8000000000000000ULL;
} else {
    sub_141212FB0(&v26, v20, 312);  // copy full error struct
}

relay_provider_upsert_ok_response_send_sys(&v30, &v26);  // send IPC response
// falls through to LABEL_22

LABEL_22:
// Cleanup: drop Arc listener array
if (!__OFSUB__(0, v48.lo)) {
    v50 = v49;
    while (v50 != v51) { ++v51; sub_14033AB50(); }  // has_notch_arc_listener_drop_loop
    if (v48.lo) sub_140001370(v48.hi, 96*v48.lo, 8);
}
return sub_140042650(v18);  // drop IPC payload buffer
```

---

## relay_provider_upsert_wrapper_sys  VA=0x14021A880
**(renamed from sub_14021A880 in IDB)**

Thin wrapper: calls `relay_provider_upsert_core_sys`, then on Ok dispatches
`relay_post_upsert_tray_refresh_bridge_sys` (DELTA new in 1.1.1).
On Err: builds error struct with two string allocations — `kS` (27503 = 0x6B53) and `codex` (7 bytes, value 0x1667462483 / 0x1936942435 interleaved as "codec"→"codex").

```c
// 0x14021A880: relay_provider_upsert_wrapper_sys(out: *mut UpsertResult, state_arc: *const RelayStateArc, router_handle: i64, input: *const RelayUpsertInput)
v33 = -2;
v31 = a2;  // state_arc saved

relay_provider_upsert_core_sys(&v14, a3, a4);  // 0x14021A8B2 → writes Result<RelayProvider, UpsertError>
v5 = v14;  // tag

if (__OFSUB__(-v14, 1)) {  // Err path (tag is large/negative = Err discriminant)
    // Copy error payload
    v21[0..6] = v16[0..5]; v21[0] = v15;
    // fmt display check
    *v29.lo = 0; *v29.hi = 1; v30 = 0;
    v23[2] = 1610612768;  // growth cap hint
    v23[0] = &v29; v23[1] = &off_1412C23C0;
    if (sub_140243FC0(v21, v23)) sub_14124BFE0(...);  // Display panic
    v25 = v30; v24 = v29;
    sub_1402342B0(&v15);  // drop
    // Build Ok-wrapping result with error message embedded
    *a1+8  = v25; *a1+0 = v24;  // put error string in Ok slot? No — this writes into output struct
    *a1+24 = v25; *a1+8 = v24;
    *a1 = 0x8000000000000000ULL;  // tag = Err
} else {
    // Ok path
    // Copy upsert result fields
    v22 = v27; v19 = v26.lo; v18 = v26; v17 = v5 (tag);
    sub_1407989F0(v31);  // relay_post_upsert_tray_refresh_bridge_sys ← DELTA
    // Alloc error string buffers for error result wrapper
    v8 = alloc(2, 1); *v8 = 27503;  // "kS" = 0x6B53
    v11 = alloc(7, 1); *(v11+3) = 1936942435; *v11 = 1667462483;  // "codex\0\0"
    // Copy 232 bytes of result data to output
    sub_141212FB0(a1+72, &v17, 232);
    *a1 = 2; *(a1+8) = v8; *(a1+16) = 2;
    *(a1+24) = 7; *(a1+32) = v11; *(a1+40) = 7;
    *(a1+48) = 0; *(a1+56) = 8; *(a1+64) = 0;
    *(a1+304) = 1; *(a1+308) = 1;
}
sub_140232B30(v31);  // drop state_arc ref
return a1;
```

**Note on kS / codex values**: `27503 = 0x6B53` and `1667462483 = 0x636F6465` / `1936942435 = 0x73 636F64` → ASCII "code"+"sx" = "codex" (7 bytes). These appear to be internal error code strings for the error response discriminant used by the IPC serializer.

---

## relay_provider_upsert_core_sys  VA=0x1406e4500

Source: `codexmate_lib::core::relay::manager` (`src\core\relay\manager.rs`)
Strings: `0x1412ea8f8` = "codexmate_lib::core::relay::manager", `0x1412ea601` = "src\core\relay\manager.rs"
Poison string: `"relay state poisoned"` @ 0x1412ea5ed
Keychain flag: local var `v130` at `[rsp+700h]`

```rust
// 0x1406e4500: relay_provider_upsert_core_sys(out: *mut RelayProvider, state_arc: *const Arc<RelayState>, input: RelayUpsertInput)
v177 = -2;  // stack canary
v157 = a3;  // input (RelayUpsertInput)
v150 = a2;  // state_arc

// Get current datetime
sub_140C38E50(v116);  // fills v116[0..16] with date fields
// Compute unix ms timestamp from Gregorian fields:
// v4 = year-packed, v5 = year-days, v6 = year-correction
// v31 = 1000*(v158 + 86400*(gregorian_to_days(v5,v6,v4))) + subsecond_ms(v131)
let now_ts_ms = compute_unix_ts_ms(v4, v5, v6, v131, v158);

// CAS spinlock acquire on state+16
sub_1410A2210(&v128, v157+48);  // Arc clone helper
v20 = v150[1];  // state inner pointer
if _InterlockedCompareExchange8(v20+16, 1, 0) { sub_14124A510(v20+16); }  // spinlock wait

// Take snapshot of providers Vec
sub_14072A3A0(&v99, v20+24);  // Vec snapshot (ptr, len, cap) → v99

// Branch: new provider (no existing match) vs. update existing
if (__OFSUB__(0, *(v157+96))) {
    // NEW PROVIDER: v157+96 is None (providerId Option)
    uuid_v4_generate_raw_sys(&v152);   // generate UUID → v152 (16 bytes)
    // Format UUID to String (hyphenated, 36 chars, using separator '-'=45)
    sub_140F5A900(&v152, v116);        // UUID format
    sub_1407180F0(v116, ..., 45, 1, 0); // build String from UUID bytes
    sub_140300A90(&v109, &v134);       // String clone
    // Build new RelayProvider struct at v134..v139 (5 × 24 bytes = 5 String fields)
    // + v140 (models Vec), v141 (extraHeaders len), v142 (extraHeaders cap)
    // + v147=schemaVersion, v148=keychain_stored, v149=wireApi|brand bytes
    // + v144=-1 (no existing slot), v145=0 (routeExpiry), v146=now_ts_ms
    // + v143=0x8000000000000000 (created_at discriminant)
    relay_quota_item_clone_sys(&v116, &v134);  // clone provider struct into working copy
    if v100 == v99.len { sub_141220D00(&v99); }  // Vec grow if needed
    sub_141212FB0(v99.ptr + 232*v100, v116, 232);  // push new provider
    v100 += 1;
    sub_141212FB0(v98, &v134, 232);    // save working copy for later
} else {
    // EXISTING PROVIDER: find by (name_ptr, name_len) match in Vec
    // Linear scan via sub_141213640 (str compare)
    while *providers[i].name_len != v42 || sub_141213640(providers[i].name_ptr, v41, v42) {
        i++; if i >= v100 { goto LABEL_47; }  // not found
    }
    relay_quota_item_clone_sys(&v97, providers[i]);  // clone existing → v97
    sub_141212FB0(&v134, v97, 232);    // copy to working area
    // Update fields from input (baseUrl, apiKey, brand, wireApi, models, extraHeaders,
    //                           schemaVersion, routeExpiresAtMs)
    // Various sub_1410A2210 (Arc clone) calls for String fields
}

// Conditional keychain write
if v130 {  // keychain_flag
    import_accounts_keychain_write_sys(
        &v104,
        *(*v150 + 792),  // keychain handle ptr
        *(*v150 + 800),  // keychain handle len
        v134.name_ptr, *v135 (name_len),
        v129, v130
    );
    if __OFSUB__(0, v104.lo) { /* error → return Err @ a1 */ goto LABEL_114; }
}

// Update models Vec in providers[idx].models if existing
// (sub_1410A2210 for models field Arc)

// Persist to disk (atomic JSON write)
relay_providers_config_write_and_persist_sys(&v109, v150, &v99);
if (v109 as u32) != 10 { goto LABEL_113; }  // disk write failed

// [DELTA vs 1.0.9] Post-upsert state sync + tray rebuild
relay_post_login_state_sync_sys(&v116, v150);
if *v116 as u32 != 10 { goto LABEL_113; }  // sync failed

// Success: clone final provider, write to output
relay_quota_item_clone_sys(&v95, &v134);
sub_141212FB0(a1, v95, 232);  // copy provider to output

// Cleanup
relay_draft_test_input_drop_sys(&v134);
relay_draft_test_input_drop_sys(v98);
// Release spinlock, free snapshots, drop Vec, release Arc refs
```

---

## relay_post_login_state_sync_sys  VA=0x1406e1750

Source: `codexmate_lib::core::relay::manager` (`src\core\relay\manager.rs`)

```rust
// 0x1406e1750: relay_post_login_state_sync_sys(out: *mut SyncResult, state_arc: *const Arc<RelayState>)
relay_state_read_lock_snapshot_sys(v67);       // acquire RwLock read snapshot → v67
sub_14030B390(&v102, v68, v68+232*v69);        // snapshot derive helper (count/ptr)
sub_1403654F0(&v94, v70);                      // result accumulate helper

// CAS spinlock on state+16 (a2[2]+16)
v6 = a2[2]; v7 = v6+16;
if _InterlockedCompareExchange8(v6+16, 1, 0) { sub_14124A510(v6+16); }

if *(v6+24) == 0 { ... early path with no relay state }

// Build RwLock read arc (via sub_1410AFA10)
sub_1410A1DF0(&v96, byte_1412DDC46, { ptr: v6+32, vtable: sub_1410AFA10 });

// Main: state machine dispatch
sub_14073BC50(
    &v76,      // out: SyncResult
    *a2+16,    // relay state inner
    v103,      // snapshot ptr
    v6,        // relay state ptr
    v95,       // snapshot count
    v15,       // snapshot end
    v31,       // login_flag (v16&1 ? v71 : 0)
    v32,       // v72 (extra context)
    &v83       // aux args
);

if (v76 as u32) == 10 {
    // Ok path
    *a1+8 = v37;  // sync flags byte
    *a1 = 10;     // tag = Ok
    // cleanup string/snapshot refs
    // drive tray refresh
    relay_post_upsert_tray_refresh_bridge_sys ... NOT called directly here;
    // Actually: sub_140732660 writes result; then cleanup drops relay_draft_test_input_drop_sys items
    // Return leaves *a1 = 10 for caller to check
} else {
    // Err path: copy error structs out (v96..v101 → a1 range)
    // Call sub_140708350 to clean error state
}
// Release spinlock, drop snapshots
return relay_state_snapshot_drop_sys(v67);
```

**Clarification**: `relay_post_upsert_tray_refresh_bridge_sys` is called from `relay_provider_upsert_wrapper_sys` (0x14021A880, not from this function directly). This function drives the internal state machine and writes sync result; the wrapper calls tray refresh after Ok.

---

## relay_providers_config_write_and_persist_sys  VA=0x1406e6960

JSON schema fields written:
- `schemaVersion`, `providers` (Vec), `activeByIde`, `proxy`, `codexRouterEnabled`
- `codexApiLogin`, `codexApiSlots`, `displayTagGlobal`, `displayTagWoyao`

```rust
// 0x1406e6960
sub_141212FB0(v22, a3, 368);                    // copy Vec snapshot (368 bytes)
relay_state_serialize_under_lock_sys(&v28, a2[2]); // serialize relay state under WIN CAS lock → v28 (JSON intermediate)
// Drop intermediate refs v23/v24/v25/v26

relay_config_serialize_and_atomic_write_sys(&v28, a2[0]+16, v22); // a2[0]+16 = config path ptr
if (v28 as u32) != 10 { /* error: copy v28..v33 to a1; drop snapshot; return */ }

// Success: take WIN CAS spinlock on a2[1]+16, then:
relay_state_snapshot_drop_sys(a2[1]+24);         // drop old snapshot in state
sub_141212FB0(a2[1]+24, v22, 368);               // atomic replace: copy new snapshot in
*a1 = 10;
// Release spinlock (CAS 0, WakeByAddressSingle if waiting)
```

---

## relay_config_serialize_and_atomic_write_sys  VA=0x1406eaed0

```rust
// 0x1406eaed0
let dir_err = relay_config_check_parent_dirs_sys(a2);
if dir_err { *a1 = 2; a1[1] = dir_err; return; }  // return code 2 = dir error

let mut buf = alloc(128, 1);  // initial JSON buffer 128 bytes
// Pretty-print with 2-space indent (asc_1412E85F5 = "  ")
let serialize_err = sub_14020A3E0(a3, &{ buf, indent: "  " });
if serialize_err { *a1 = 3; a1[1] = serialize_err; return; }  // return code 3 = serialize error

// Atomic write: path = *(a2+808) / *(a2+816) (ptr+len)
let write_err = relay_atomic_write_leaf_sys(*(a2+808), *(a2+816), buf_ptr, buf_len);
if write_err {
    // wrap err in sub_1410A1DF0 fmt
    *a1 = 9; return;   // return code 9 = write error
}
*a1 = 10;  // return code 10 = Ok
// free buf
```

Return codes: `10`=Ok, `9`=atomic-write-error, `3`=serialize-error, `2`=dir-error.

---

## relay_post_upsert_tray_refresh_bridge_sys  VA=0x1407989f0

```rust
// 0x1407989f0 — bridge between upsert_wrapper and tray rebuild
tray_rebuild_on_relay_state_change_sys(&v6, a1);  // → v6 = (tag, arc_ptr)
let result_tag = -v6[0].lo;
if __OFSUB__(result_tag, 1) {  // has result
    v13 = v6[0].hi;            // arc pointer
    v12 = v6[0].hi;
    // check if IpcMessage is response type 3 (query response frame @ a1+136)
    sub_14051C460(&v4, *(a1+136)+4744, a1, &unk_1412F3A1D, 4);
    if v4[0].lo == 3 {
        // Arc decrement — if reaches 0, call sub_140E21BC0 (drop)
        if !_InterlockedDecrement64(v13) { sub_140E21BC0(&v12); }
    } else {
        sub_141212FB0(v6, v4, 0xD0);  // copy result frame
        sub_1407C0400(v5, v6, v13);   // dispatch to pending watcher
        if v5[0] != 0x8000000000000025 { sub_1407B05F0(v5); }  // cleanup
        // drop string fields
        if v7 { sub_140001370(v8, v7, 1); }
        if v9 { sub_140001370(v10, v9, 1); }
        if (*v11)-- == 1 { sub_14033E8A0(&v11); }  // Arc inner drop
        sub_140041870(&v6);  // cleanup
    }
}
```

---

## tray_rebuild_on_relay_state_change_sys  VA=0x1407981a0

```rust
// 0x1407981a0 — DELTA: new in 1.1.1 upsert path
// Mutex type: std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::Repository> @ 0x1412ae238

sub_140791920(&v38);   // read tray state → v38.lo (u32)

if v38.lo == 3 {
    // Relay state == 3 (active relay mode)
    let lock = pending_auto_switch_state_lock_acquire_111(
        *( *(a2+136) + 5016 ) + 16,  // Mutex guard inner ptr
        v4, v5
    );
    if !lock { PANIC("std::sync::poison::mutex::Mutex<...>", 76); }

    // CAS spinlock acquire on lock
    if _InterlockedCompareExchange8(lock, 1, 0) { sub_14124A510(lock); }

    // Check poison state
    if *(lock+1) {
        // Poisoned: format "poisoned lock: another task failed inside" → panic
        sub_1410B1930(aPoisonedLockAn, 41, &v38);
        sub_14124BFE0(...);  // panic
    }

    // Load MCP server snapshot using lock fields [78] and [79]
    load_mcp_servers_read_existing_snapshot_111(&v43, *(lock+78*8), *(lock+79*8));

    // Release spinlock
    let old = *lock; *lock = 0;
    if old == 2 { WakeByAddressSingle(lock); }

    // Dispatch based on MCP snapshot result
    if v44[0].lo == 3 {
        sub_140799E00(a1, a2);               // alt path: state=3 + mcp=3 branch
    } else {
        sub_141212FB0(&v38, v44, 0x2A8);     // copy mcp snapshot (680 bytes)
        tray_menu_rebuild_active_sys(a1, a2, &v38);  // ← main tray rebuild
        sub_1407B1CA0(v44);                  // cleanup mcp snapshot
        // drop notification listeners loop (stride=336 bytes)
    }
} else {
    // Relay state != 3 — direct tray rebuild without MCP snapshot
    sub_141212FB0(&v43, &v38, 0x2A8);
    tray_menu_rebuild_active_sys(a1, a2, &v43);
    sub_1407B1CA0(&v38);
    // drop notification listeners loop
}
```

---

## Side-effects summary (gold-leaf)

| # | side-effect | function | VA | delta? | terminated_reason |
|---|---|---|---|---|---|
| 1 | Disk persist relay config (JSON atomic write) | `relay_providers_config_write_and_persist_sys` | 0x1406e6960 | no | persistence_commit |
| 2 | Keychain write (conditional: v130 flag) | `import_accounts_keychain_write_sys` | 0x1402f08b0 | no | platform_primitive (Windows Credential Store) |
| 3 | Tray menu rebuild after successful upsert | `tray_menu_rebuild_active_sys` | 0x14079bde0 | **YES** | external_call (tray API leaf) |
| 4 | MCP server snapshot read for tray | `load_mcp_servers_read_existing_snapshot_111` | 0x1401bf000 | **YES** | platform_primitive (read-only snapshot) |
| 5 | Alt tray path (state==3 + mcp==3) | `sub_140799E00` | 0x140799e00 | **YES** | external_call (alt tray branch) |
| 6 | State machine drive (post-upsert sync) | `sub_14073BC50` | — | **YES** | complex_internal (depth 5, not further expanded) |

---

## Error paths (gold-leaf)

| path | trigger | return |
|---|---|---|
| gate-1 early | `confirm_pending_auto_switch_deserialize_request_sys` → tag != 3 (NOT == 3) | IPC error via `sub_14080C3C0` |
| codex-router null + skill fail | `run_codex_router_diagnostics_owner_sys` null AND `query_installed_skills_with_repo_111` tag != 6 | IPC error |
| serde fail | `sub_140241460` → Err discriminant | IPC error |
| disk write fail | `relay_providers_config_write_and_persist_sys` → tag != 10 | propagate Err (LABEL_113) |
| state sync fail | `relay_post_login_state_sync_sys` → tag != 10 | propagate Err (LABEL_113) |
| keychain write fail | `import_accounts_keychain_write_sys` → Err | propagate Err (LABEL_114) |
| dir create fail | `relay_config_check_parent_dirs_sys` → err | relay_config_serialize... returns 2 |
| serialize fail | `sub_14020A3E0` → err | relay_config_serialize... returns 3 |
| atomic write fail | `relay_atomic_write_leaf_sys` → err | relay_config_serialize... returns 9 |

**Note on gate-1 logic**: The 逆向分析 decompile shows `if (v26 != 3)` → early error, then the `else`/state==3 path continues. This means gate-1 passes when result is NOT 3 and falls through to the error branch when == 3. The original pseudocode had the sense inverted. **Corrected**: if `confirm_pending_auto_switch_deserialize_request_sys` returns tag == 3 → EARLY ERROR (command not applicable in this state); if tag != 3 → proceed to normal upsert flow.

---

## Delta vs 1.0.9 (gold-leaf confirmed)

| aspect | 1.0.9 | 1.1.1 | evidence |
|---|---|---|---|
| DTO fields | same 10 fields | same 10 fields | serde string pool unchanged |
| Gate-1 | present | present | same structure |
| `relay_post_login_state_sync_sys` call | absent | **present** (after `relay_providers_config_write_and_persist_sys` Ok) | real decompile line 0x1406e552d |
| Tray rebuild chain | absent | **relay_post_upsert_tray_refresh_bridge_sys → tray_rebuild_on_relay_state_change_sys → tray_menu_rebuild_active_sys** | real decompile |
| MCP snapshot read on upsert | absent | **present** (`load_mcp_servers_read_existing_snapshot_111`) | real decompile |
| Error response format | `kS`+`codex` strings | same | unchanged |
| Disk persist JSON fields | same 9 fields | same 9 fields | string pool |

---

## Compilation noise (excluded)

- `sub_141212FB0` — memcpy/memmove (ubiquitous)
- `nullsub_1` (0x1400013a0) — no-op stub
- `sub_140001360` / `sub_140001370` — alloc/dealloc (rust_alloc wrappers)
- `sub_14124BCCB` — capacity_overflow panic shim
- `sub_14124BFE0` — Display panic shim
- CAS spinlock patterns (`_InterlockedCompareExchange8` + `WakeByAddressSingle`)
- Stack frame canaries (`v55 = -2`, `v177 = -2`)
- `sub_14033AB50` — `has_notch_arc_listener_drop_loop`
- `sub_140042650` — IPC buffer drop
