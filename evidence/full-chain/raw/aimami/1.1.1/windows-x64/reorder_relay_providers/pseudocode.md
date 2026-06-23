# reorder_relay_providers — Pseudocode (Win x64 1.1.1)

session: <审计会话>
produced_at: 2026-06-16

## Layer 1: Owner Wrapper (reorder_relay_providers_owner_sys @ 0x14001D5E0, 1217B)

```
fn reorder_relay_providers_owner_sys(invoke_ctx: *InvokeContext) -> Result<()> {
    // Extract manager param (7B key "manager")
    let manager: String = param_extract_or_relay_lookup(invoke_ctx, "manager");

    // Extract orderedIds param (10B key "orderedIds")
    let ordered_ids_result = sub_140360DA0(invoke_ctx, "orderedIds");
    if ordered_ids_result.tag != 6 {
        // error: missing/invalid orderedIds param
        return send_error_response(invoke_ctx, ordered_ids_result);
    }
    let ordered_ids: Vec<String> = ordered_ids_result.value;

    // Delegate to reorder+persist core
    let result = relay_providers_reorder_vec_validate_sys(ordered_ids.len(), manager, ordered_ids);

    if result.len == 0 {
        // Empty orderedIds: build null result
        send_ok_null_response(invoke_ctx);
    } else {
        // Non-zero: serialize and send
        send_response_with_payload(invoke_ctx, result);
    }

    // Cleanup: iterate relay provider slots (stride=96B) for dealloc
    // relay_provider_slot_dealloc loop: stride=96B, count=v38 (from invoke_ctx+920)
}
```

## Layer 2: Vec Validate (relay_providers_reorder_vec_validate_sys @ 0x14021BC90, body size ~2KB)

```
fn relay_providers_reorder_vec_validate_sys(
    result_out: *mut ReorderResult,
    provider_count: usize,   // from relay state TLS
    ordered_ids: Vec<String>
) {
    // Get current relay state provider count
    let state_len = sub_1406E6D20();  // TLS relay state, acquires WIN lock

    // Validate: orderedIds.len must match state provider count
    let ok = sub_140243FC0(ordered_ids.as_slice(), state_len_ref);
    if !ok {
        // Mismatch: return Err("orderedIds length mismatch")
        // oword sentinel: *result = 0x8000000000000000
        return error_sentinel;
    }

    // Delegate to persist core
    relay_providers_reorder_and_persist_sys(result_out, provider_count, ordered_ids_slice);

    // If result_out.len == 0: build null result via sub_140216BA0
    //   sub_140216BA0 alloc: 2B *v6=27503(0x6B6F="ko"?), 7B v8=[1667462483, 1936942435]
    //   sets result fields: tag=2, ptr=v6, len=2, ptr2=v8, len2=7, padding=0, extra=8
}
```

## Layer 3: Reorder+Persist Core (relay_providers_reorder_and_persist_sys @ 0x1406E6D20, large body)

```
fn relay_providers_reorder_and_persist_sys(
    result_out: *mut (),
    app_handle_or_state: *AppHandleOrState,
    ordered_ids_slice: &[String],
) {
    // 1. Acquire relay state WIN lock
    //    _InterlockedCompareExchange8(state+16, 1, 0)  [WIN: spin-wait via sub_14124A510]
    //    panic on poisoned: "relay state poisoned" @ 0x1412ea5ed

    // 2. Get ordered_ids count and current providers Vec
    //    sub_14072A3A0: get relay state inner (providers Vec, TLS)
    //    sub_140730AA0: rebuild TLS id-index HashMap from current providers
    //       - calls sub_141077010() -> TLS slot for relay provider lookup table
    //       - stride: 8B per entry in provider id-index
    //       - sub_141217CF0: pre-alloc HashMap capacity = orderedIds.len (/ 3 * mul trick)
    //       - sub_140371CF0: insert (id_str_ptr, id_str_len, index) entries

    // 3. Reorder providers Vec by orderedIds order
    //    sub_140312480(result, [current_providers_begin, end, id_index_hashmap]):
    //       - stride = 232B per RelayProvider entry
    //       - SIMD Robin-Hood probe: sub_140624F90(hash), _mm_cmpeq_epi8, tzcnt
    //       - sub_1410A2210: clone individual RelayProvider (232B struct)
    //       - builds new ordered Vec<RelayProvider> in result

    // 4. Write reordered Vec back to relay state + persist
    //    sub_1406E6960(result, app_handle, new_ordered_vec):
    //       relay_providers_config_write_and_persist_sys(...)

    // 5. Release WIN lock
    //    *lock = 0;  if was_2: WakeByAddressSingle(lock_addr)

    // 6. Drop old provider entries (SIMD scan bitmap, 24B per entry, tzcnt)

    *result_out = ();  // null/unit result
}
```

## Layer 4: Config Write+Persist (relay_providers_config_write_and_persist_sys @ 0x1406E6960, 446B)

```
fn relay_providers_config_write_and_persist_sys(
    result_out: *mut (),
    app_handle_or_relay_mgr: *RelayManager,
    new_ordered_vec: &[RelayProvider],
) {
    // 1. Serialize relay state via sub_1406DA6B0 (under WIN lock)
    //    sub_1406DA6B0: acquires relay state lock (_InterlockedCompareExchange8+WakeByAddressSingle)
    //    reads relay state fields and writes to scratch buffer
    //    schemaVersion, providers (new ordered), activeByIde, proxy, codexRouterEnabled,
    //    codexApiLogin, codexApiSlots, displayTagGlobal, displayTagWoyao

    // 2. atomic_write path via sub_1406EAED0:
    //    a. sub_1406F2870: validate/get config file path (from relay_mgr+808/816)
    //    b. sub_14020A3E0: JSON serialize (writes { schemaVersion, providers, activeByIde,
    //       proxy, codexRouterEnabled, codexApiLogin, codexApiSlots, displayTagGlobal, displayTagWoyao })
    //    c. sub_140504310: codexmate_lib::core::relay::atomic_write
    //       - GetCurrentProcessId() for temp file naming
    //       - CreateFile/WriteFile/CloseHandle (WIN fs leaf)
    //       - Error: "atomic write: missing parent" (missing parent dir)

    // 3. Write new_ordered_vec to relay state in-memory (relay_mgr+24 field)
    //    sub_141212FB0(relay_state.providers, new_ordered_vec, 368)
    //    *result_out = 10 (Ok sentinel)

    // 4. Release relay state WIN lock
    //    WakeByAddressSingle(state+16) if waiters
}
```

## Layer 5: atomic_write Leaf (sub_140504310 @ 0x140504310, 1167B)

```
// codexmate_lib::core::relay::atomic_write
// Writes relay config JSON atomically to disk
// Uses GetCurrentProcessId for temp suffix, then rename
// WIN specific: CreateFile/WriteFile/CloseHandle pattern
// Error: "atomic write: missing parent" (no parent dir)
fn atomic_write(file_path: &str, content: &[u8]) -> Result<()>
```

## JSON Serialization Fields (sub_14020A3E0 @ 0x14020A3E0)

Fields serialized on every reorder_relay_providers call:
- `schemaVersion` (a1+360)
- `providers` (a1+0, ordered Vec)  ← THIS IS WHAT REORDER CHANGES
- `activeByIde` (a1+24)
- `proxy` (a1+48)
- `codexRouterEnabled` (a1+364, bool)
- `codexApiLogin` (a1+365, bool)
- `codexApiSlots` (a1+128, slot data)
- `displayTagGlobal` (a1+152)
- `displayTagWoyao` (a1+176)
