# activate_relay_provider — Windows x64 Pseudocode (Gold Leaf)

**session**: wf-aimami111-delta-20260618-goldleaf
**machine**: <本地机器>
**binary**: AiMaMi 1.1.1 win64.exe (imagebase 0x140000000)
**delta_class**: integrity_recovered (vs baseline 1.0.9)
**produced**: 2026-06-18
**gate_tier**: gold_leaf

> 校正说明（vs 2026-06-17 sweep pseudocode）：
> - owner 不直接调 `relay_activate_core_and_persist_sys`；正确路径为 owner → `activate_relay_provider_build_response_sys` → `relay_activate_core_and_persist_sys`
> - `relay_providers_config_write_and_persist_sys` 内部新增已命名 callee `relay_state_serialize_under_lock_sys @ 0x1406DA6B0`
> - `relay_activate_core_and_persist_sys` 的 not-found 分支调用 `relay_config_connection_refresh_and_write_sys @ 0x1406DA970`
> - call_tree_depth 更新为 6

---

## Layer 0 — IPC String Entry

String xref: `"activate_relay_provider"` @ `0x1412AC4EA`
Handler owner VA: **`0x140017EC0`** (`activate_relay_provider_owner_sys`)
String referenced at owner+`0x140017F49`.

---

## Layer 1 — IPC Owner (`activate_relay_provider_owner_sys` @ 0x140017EC0, size=0x5CE)

```rust
fn activate_relay_provider_owner_sys(a1: *InvokeArgs) -> Response {
    // Step 1: Diagnostics gate (try-lock Tokio dispatcher, hash=0x945CA2F02A2B6F44)
    let owner = run_codex_router_diagnostics_owner_sys(&a1.ctx.lock_byte+16, ...);
    // run_codex_router_diagnostics_owner_sys @ 0x14006F4B0
    // vtable[3] = sub_140031D80
    // returns 0 on gate fail (non-zero = owner handle)
    if owner == 0 {
        // gate fail: immediate error, no param parsing
        return sub_14080C3C0(error_ctx);  // error response builder
    }

    // Step 2: Parse "manager" param (7 chars key, string)
    let manager_result = sub_141214620(&out, cmd="activate_relay_provider"(23), key="manager"(7), args_frame);
    // sub_141214620 @ 0x141214620 (iterator dispatch -> string parse)
    if manager_result.tag != 6 {  // 6 = Ok variant
        return sub_14080C3C0(error_ctx);
    }
    let manager: String = manager_result.value;

    // Step 3: Parse "providerId" param (10 chars key, u64/serialized)
    let provider_id_result = relay_activate_provider_id_parse_sys(&out, &cmd_ctx);
    // relay_activate_provider_id_parse_sys @ 0x1402FED40
    // tag==3 -> clone str bytes; else serde deserialize via sub_1412233C0
    // returns tag=6 on Ok, value in [1..=2] QWORD fields
    if provider_id_result.tag != 6 {
        return sub_14080C3C0(error_ctx);
    }
    let provider_id_ref = &provider_id_result;  // v39 = OWORD at rsp+DB0

    // Step 4: Parse "ide" param (3 chars key, e.g. "vsc"/"jb")
    let ide_result = sub_140240B70(&out, &cmd_ctx);
    // sub_140240B70 @ 0x140240B70 (iterator dispatch pattern)
    if ide_result.tag != 6 {
        // free provider_id_ref if allocated
        if provider_id_result.ptr != 0 { dealloc(provider_id_result.ptr); }
        return sub_14080C3C0(error_ctx);
    }

    // Step 5: Core activate via response builder
    let response = activate_relay_provider_build_response_sys(
        &out,           // a1: output buffer (448B)
        owner,          // a2: owner handle (RelayManagerHandle)
        provider_id_ref // a3: &[providerId.ptr, providerId.len, ...]
    );
    // activate_relay_provider_build_response_sys @ 0x14021B9B0
    // -> internally calls relay_activate_core_and_persist_sys @ 0x1406E7880

    // Step 6: Send IPC response
    relay_state_send_ipc_response_sys(&response_frame, &out);
    // relay_state_send_ipc_response_sys @ 0x140831F00

    // Cleanup: drop providers array (stride=96B per entry, sub_14033AB50)
    while v43 != v44 {
        sub_14033AB50();  // drop entry
        providers_ptr += 96;
    }
    if providers_len > 0 { dealloc(providers_ptr, 96 * providers_len, 8); }

    return sub_140042650(frame);  // IPC frame cleanup
}
```

---

## Layer 1B — `activate_relay_provider_build_response_sys` (0x14021B9B0, size=0x241)

```rust
fn activate_relay_provider_build_response_sys(
    out: &mut [u8; 448],
    owner: RelayManagerHandle,    // a2
    provider_id_ref: &ProviderId, // a3: ptr to [ptr, len, extra_len]
) -> &mut Output {
    let pid_ptr = provider_id_ref[1];  // a3[1]
    let pid_len = provider_id_ref[2];  // a3[2]

    // Call core activate (0x14021b9ee)
    let core_result = relay_activate_core_and_persist_sys(
        &local_result,  // v11: output (368B)
        owner,          // a2
        pid_ptr,        // a3
        pid_len         // a4
    );
    // relay_activate_core_and_persist_sys @ 0x1406E7880

    if core_result.discriminant != -1 {  // success path (non-0x8000000000000000)
        // Copy result and build ok response
        set_codex_api_slots_ok_response_build_sys(&out_local, &core_result_fields);
        // set_codex_api_slots_ok_response_build_sys @ 0x140216BA0
        // writes: "ok"(2B) + "activated"(7B) + activated=true(bool,+444) + relay_state 368B@+72
        memcpy(out, out_local, 448);
        // free provider_id_ref if needed
        return out;
    } else {
        // Error path: build error response from core_result error enum
        // sub_140243FC0 -> error format; sub_14124BFE0 panic guard
        // writes 0x8000000000000000 discriminant to out[0]
        return out;
    }
}
```

**Response field encoding** (on success):
- `out[0]` = discriminant `2` (Ok)
- hardcoded bytes `0x6B6F` = `"ok"` literal
- `"activated"` 7B literal
- `out[444]` = `1u8` (activated=true bool)
- `out[72..440]` = 368B relay_state copied from core result

---

## Layer 2 — `relay_activate_core_and_persist_sys` (0x1406E7880, size ~0x800)

```rust
fn relay_activate_core_and_persist_sys(
    a1: &mut Output,              // 368B output
    a2: &mut RelayManagerHandle,  // manager ptr
    a3: u64,                      // providerId.ptr
    a4: u64,                      // providerId.len
) -> ActivateResult {

    // Phase 0: Read lock snapshot
    relay_state_read_lock_snapshot_sys(&snapshot, a2, a3);
    // relay_state_read_lock_snapshot_sys @ 0x1406E8480
    // WIN ICEX8 on a2[1]+16; copies quota Vec snapshot via sub_14072A3A0
    relay_state_snapshot_drop_sys(&snapshot);  // lock release path sub_140234AC0

    // Phase 1: Quota Vec scan (entry header stride=24B, data stride varies)
    relay_quota_state_lookup_sys(&lookup_out, a2, a3, a4);
    // relay_quota_state_lookup_sys @ 0x1406DB960
    // Vec: ptr=a2[1]+56 / count=a2[1]+64
    // match: entry+16==providerId(u64) && sub_141213640(str_eq, entry+8, manager)
    // Hit: sub_14072A3A0(snapshot, v119+24) -> copies 368B quota state
    // Miss: goto LABEL_28 (not-found branch)

    if lookup_out.discriminant == 0x8000000000000000 {
        // Provider not found branch (LABEL_28)
        // WIN lock release (WakeByAddressSingle on mgr+16)
        relay_config_connection_refresh_and_write_sys(a2);
        // relay_config_connection_refresh_and_write_sys @ 0x1406DA970
        // (connection refresh + secondary write on not-found path)

        // Re-acquire WIN lock (ICEX8 on a2[1]+16)
        sub_14072A3A0(&v74_snapshot, mgr+24);

        // Build error with ide string + provider_id
        // ... a1[0] = 0x8000000000000000 (error discriminant)
        // goto LABEL_60 (cleanup + return)
    }

    // Phase 2: Active flag zeroing loop on providers Vec (stride=232B)
    // Clears entry[11] (at byte offset 88 = 11*8) for all quota entries
    // Unrolled 8-at-a-time loop with remainder handler
    // Threshold: >= 0x658 bytes uses full 8x unroll

    // Phase 3: Vec insert updated quota
    sub_140209E70(providers_vec_ptr+8, &updated_quota);
    // Insert activated quota entry back into providers Vec

    // Phase 4: Draft cleanup
    sub_14072A3A0(&v67_final, &v74_snapshot);  // copy final state

    // Phase 5: Config write
    relay_providers_config_write_and_persist_sys(&write_out, a2, &quota_state);
    // relay_providers_config_write_and_persist_sys @ 0x1406E6960
    // Returns 10=ok / 9=IoError / 2=serialize_err / 3=other

    if write_out.code == 10 {
        // Phase 6: Post-login sync
        relay_post_login_state_sync_sys(&sync_out, a2);
        // relay_post_login_state_sync_sys @ 0x1406E1750
        // src: codexmate_lib::core::relay::manager (src\core\relay\manager.rs)
        if sync_out.code == 10 {
            memcpy(a1, &v67_final, 368);  // copy final state to output
            // success! goto LABEL_60
        } else {
            // sync error: copy sync error fields to a1[8..96]
            a1[0] = 0x8000000000000000;  // error discriminant
        }
    } else {
        // write error: copy write_out fields to a1[8..104]
        a1[0] = 0x8000000000000000;  // error discriminant
    }

    // LABEL_60: cleanup
    relay_draft_test_input_drop_sys(&v77_snapshot);
    // relay_draft_test_input_drop_sys @ 0x1401D6220 (pure drop, 23 fields, noise)
    return a1;
}
```

**关键副作用**（按顺序）:
1. WIN lock acquire/release on `a2[1]+16`
2. keychain read via `relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0` (inside lookup snapshot)
3. providers Vec mutation (activation flag zeroing loop, stride=232B)
4. config file atomic write (via `relay_providers_config_write_and_persist_sys`)
5. post-login state machine drive (via `relay_post_login_state_sync_sys`)

---

## Layer 3A — `relay_providers_config_write_and_persist_sys` (0x1406E6960)

```rust
fn relay_providers_config_write_and_persist_sys(
    out: &mut WriteResult,
    a2: &RelayManagerHandle,
    a3: &QuotaState,  // 368B
) -> WriteResult {
    let state_snapshot = memcpy(local, a3, 368);  // copy quota state

    // Serialize relay state under WIN lock
    relay_state_serialize_under_lock_sys(&serialize_out, a2[2], ...);
    // relay_state_serialize_under_lock_sys @ 0x1406DA6B0
    // NEW callee (not in sweep pseudocode)
    // WIN ICEX8 on mgr+16; reads providers list at mgr+32; builds SerializeOut struct

    // Free intermediate string fields from serialize_out (3 optional OWORD fields)
    for f in [serialize_out+16, serialize_out+24, serialize_out+32]:
        if f.ptr != 0: dealloc(f.ptr, f.len, 1)

    // Atomic write
    relay_config_serialize_and_atomic_write_sys(&write_result, a2[0]+16, state_snapshot);
    // relay_config_serialize_and_atomic_write_sys @ 0x1406EAED0

    if write_result.code != 10 {
        // write failed: copy error result to out
        relay_state_snapshot_drop_sys(state_snapshot);
        return out;  // error
    }

    // Success: acquire WIN lock on a2[1]+16
    _InterlockedCompareExchange8(a2[1]+16, 1, 0);
    // copy state_snapshot into live mgr storage at a2[1]+24 (368B)
    relay_state_snapshot_drop_sys(a2[1]+24);
    memcpy(a2[1]+24, state_snapshot, 368);
    *out = 10;  // ok code
    // Release: WakeByAddressSingle(a2[1]+16)
    return out;
}
```

---

## Layer 3B — `relay_state_serialize_under_lock_sys` (0x1406DA6B0) — NEW callee

```rust
fn relay_state_serialize_under_lock_sys(
    out: &mut SerializeOut,  // 75B output struct
    mgr_state: *MgrState,
    _ctx: u64,
) {
    // Acquire WIN ICEX8 lock on mgr_state+16
    _InterlockedCompareExchange8(mgr_state+16, 1, 0);
    // Poison guard check: if mgr_state+17 set -> sub_14124BFE0 panic

    if *mgr_state+24 == 0 {
        // No providers: write zeroed SerializeOut
        out = {schema=0, active=1, entries_ptr=0, entries_count=1,
               optional_str=None, end_sentinel=0x8000000000000000}
    } else {
        // Read schemaVersion = mgr_state+32 (u16)
        let schema_version = *(mgr_state+32) as u16;
        out[72] = 1u8;              // has_schema flag
        out[73] = schema_version;   // u16 (2 bytes at +72)
        out[74] = 1u8;              // active indicator

        // Build provider list iterator
        // sub_1410A1DF0(&oiter1, byte_1412DDC46/*iter_type*/, &{mgr+32, sub_1410AFA10/*iter_fn*/})
        // sub_1410A1DF0(&oiter2, byte_1412DDC28/*iter_type*/, &{mgr+32, sub_1410AFA10})
        // Write iterator results to out[0..64]
        out[48] = 0x8000000000000000;  // end-of-list sentinel
    }

    // Release: *mgr_state+16 = 0; if was==2: WakeByAddressSingle(mgr_state+16)
}
```

**SerializeOut struct layout** (75B, reconstructed):
- `+0..15`:  OWORD iterator outer field 1
- `+16`:     QWORD optional string len
- `+17..23`: padding / string ptr
- `+24..31`: OWORD iterator outer field 2 ptr
- `+32..47`: OWORD optional string fields
- `+48`:     `0x8000000000000000` end sentinel
- `+72`:     `u8` has_schema
- `+73`:     `u16` schema_version
- `+74`:     `u8` active indicator

---

## Layer 4 — `relay_config_serialize_and_atomic_write_sys` (0x1406EAED0)

```rust
fn relay_config_serialize_and_atomic_write_sys(
    out: &mut WriteResult,
    mgr_inner: *MgrState,   // a2: config state ptr
    state_snapshot: *u8,    // a3: 368B quota state
) -> WriteResult {
    // Check parent dirs (9 path indices in RelayManagerState)
    let check = relay_config_check_parent_dirs_sys(mgr_inner);
    // relay_config_check_parent_dirs_sys @ 0x1406F2870
    if check != 0 {
        *out = 2;  // serialize_err (parent dir missing)
        return out;
    }

    // Alloc 128B JSON buffer
    let json_buf_ptr = alloc(128, 1);
    let json_buf = {ptr: json_buf_ptr, capacity: 128, written: 0};

    // Pretty-print JSON (2-space indent)
    // sub_14020A3E0(state_snapshot, &{buf: &json_buf, indent_str: "  " @ 0x1412E85F5, indent_level: 2})
    let serialize_err = sub_14020A3E0(state_snapshot, &serializer_opts);
    if serialize_err != 0 {
        if json_buf.capacity > 0 { dealloc(json_buf.ptr, json_buf.capacity, 1); }
        *out = 3;  // other error
        return out;
    }

    // Atomic write to config file
    // path_ptr = *(mgr_inner + 808), path_len = *(mgr_inner + 816)
    let write_err = relay_atomic_write_leaf_sys(
        *(mgr_inner+808),  // config file path ptr
        *(mgr_inner+816),  // path len
        json_buf.ptr,
        json_buf.written   // written bytes count (from json_buf.len field after serialize)
    );
    // relay_atomic_write_leaf_sys @ 0x140504310

    if write_err != 0 {
        // IoError: build error via sub_141096C10 + sub_1410A1DF0
        // sub_1402F87A0(write_err) — error display
        *out[1..4] = {err_ref, err_display_fn, ...};
        *out = 9;  // IoError
        dealloc(json_buf.ptr, json_buf.capacity, 1);
        return out;
    }

    *out = 10;  // ok
    dealloc(json_buf.ptr, json_buf.capacity, 1);
    return out;
}
```

**JSON schema fields** written by `sub_14020A3E0`:
```json
{
  "schemaVersion": <u16>,
  "providers": [...],
  "activeByIde": {...},
  "proxy": {...},
  "codexRouterEnabled": <bool>,
  "codexApiLogin": {...},
  "codexApiSlots": [...],
  "displayTagGlobal": <str>,
  "displayTagWoyao": <str>
}
```

---

## Layer 5 — `relay_atomic_write_leaf_sys` (0x140504310) — FS TERMINAL LEAF

```
GetCurrentProcessId() -> PID u32
build temp_path = final_path + "." + PID + ".tmp"
CreateFile(temp_path, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)
  -> INVALID_HANDLE_VALUE: return error "atomic write: missing parent"
WriteFile(handle, buf_ptr, buf_len, &written, NULL)  [loop for large buffers]
CloseHandle(handle)
sub_140504130:
  MoveFileExW(temp_path, final_path, MOVEFILE_REPLACE_EXISTING)
    -> on failure: DeleteFileW(temp_path)
CloseHandle(handle)

Terminated: external_call (WIN32 fs ops)
Source: codexmate_lib::core::relay::atomic_write
```

---

## Post-Login Sync Chain — `relay_post_login_state_sync_sys` (0x1406E1750)

```
relay_post_login_state_sync_sys @ 0x1406E1750
  src: codexmate_lib::core::relay::manager (src\core\relay\manager.rs)
  WIN lock: ICEX8(relay_mgr[2]+16)
  |
  ├── relay_state_read_lock_snapshot_sys @ 0x1406E8480  [lock snapshot]
  ├── sub_14030B390  [slot range init]
  ├── sub_1403654F0  [quota init]
  ├── sub_14073C050  [state machine branch select]
  ├── sub_14073BC50 @ 0x14073BC50  [STATE MACHINE DRIVE]
  |     ├── relay_config_check_parent_dirs_sys @ 0x1406F2870
  |     ├── sub_140744790  [provider state transition]
  |     ├── sub_14073C8B0  [slot assignment]
  |     └── relay_atomic_write_leaf_sys @ 0x140504310  [FS LEAF TERMINAL]
  |
  └── sub_140732660 @ 0x140732660  [RESULT WRITE]
        ├── relay_config_check_parent_dirs_sys @ 0x1406F2870
        ├── sub_140732D00  [result serialization]
        └── relay_atomic_write_leaf_sys @ 0x140504310  [FS LEAF TERMINAL]
```

---

## Call Tree Depth Summary

| Path | Depth | Terminated |
|---|---|---|
| owner → build_response → core → write_persist → serialize_atomic → FS_leaf | **6** | external_call (WIN32) |
| core → post_login_sync → state_machine_drive → FS_leaf | **5** | external_call (WIN32) |
| core → post_login_sync → result_write → FS_leaf | **5** | external_call (WIN32) |
| core → quota_lookup → keychain_lookup | **4** | persistence_commit (secrets.json) |
| write_persist → serialize_under_lock (new) | **4** | platform-primitive (WIN ICEX8) |

**call_tree_depth = 6** (longest path)
**terminated_reason**: all_branches_hit_known_leaves
