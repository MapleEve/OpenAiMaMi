# set_codex_api_slots — Pseudocode (Windows x64, AiMaMi 1.1.1)

**session**: <审计会话>
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## Layer 1: set_codex_api_slots_owner_sys @ 0x14001BDE0 (1217B)

```c
// Tauri IPC wrapper — param extraction + dispatch
__int64 set_codex_api_slots_owner_sys(__int64 invoke_ctx) {
    // Extract "manager" param (7B key "manager" @ 0x1412ac6c0)
    __int64 manager_val = sub_14006F4B0(*(invoke_ctx + 936 + 16));  // async channel read
    if (!manager_val) {
        // Error path: extract "set_codex_api_slots" + "manager" → error response via sub_141214620
        sub_141214620(err_buf, &("set_codex_api_slots", 19, "manager", 7, ctx_ref));
        goto error_respond;  // sub_14080C3C0
    }

    // Extract "slots" param (5B key "slots" @ 0x1412ac75f)
    sub_140360F30(slots_buf, invoke_ctx_slots_ptr);
    if (slots_buf[0] != 6) {  // tag 6 = Ok
        // Error: slots parse failed → error_respond via sub_14080C3C0
        goto error_respond;
    }

    // Slots extracted as Vec<CodexApiSlot> (ptr + len)
    // Invoke core dispatch
    set_codex_api_slots_core_dispatch_sys(result_buf, manager_val, slots_ptr, slots_len, ctx_ref);
    // ...
    sub_140831F00(ctx_ref, result_buf);  // IPC respond

error_respond:
    sub_14080C3C0(ctx, slots_count, err_buf, ctx_ref, dword1, dword2);
}
```

## Layer 2: sub_140360F30 — slots Vec deserializer @ 0x140360F30

```c
// Deserialize Vec<CodexApiSlot> from JSON
// Calls sub_140417480 (parse array) then sub_140E30410 (validate element types)
// On success: buf[0] = 6 (Ok tag), buf[8..] = {ptr, len, cap} of Vec<CodexApiSlot>
// CodexApiSlot fields: providerId (String, 10B key), model (String, 5B key)
// Verified: serde field table at off_1412BFE38; 2 fields; "CodexApiSlot" @ 0x1412bfdf0
```

## Layer 3: set_codex_api_slots_core_dispatch_sys @ 0x140218120

```c
__int64 set_codex_api_slots_core_dispatch_sys(__int64 result, __int64 manager, ...) {
    // Acquire relay state + perform slots update
    sub_1406D9FC0(&state_ref);  // relay state write-lock gate

    if (state_ref.err) {
        // relay state poisoned error
        sub_140243FC0(v12, v15);  // validate (8-way type switch on slots count)
        sub_1402342B0(&v6);       // cleanup/drop
        // ... build error path
    } else {
        sub_1402342B0(&v6);  // cleanup
        set_codex_api_slots_ok_response_build_sys(result, &state_ref.result);
    }
}
```

## Layer 4: sub_1406D9FC0 — relay state write-lock + mutation gate

```c
// WIN lock pattern (same as reorder_relay_providers / reveal_relay_api_key)
_InterlockedCompareExchange8(volatile_state + 16, 1, 0);  // acquire lock byte
if (poison_bit) {
    sub_14124A510(volatile_state + 16);  // park/wait
}

// Call relay slots Vec updater
sub_1406D7860(result, state_ptr + 24, slots_vec_ptr, slots_count);
// slots_count MUST be <= 5 (validated inside sub_1406D7860)

// Write persist sequence:
relay_providers_config_write_and_persist_sys(result2, state_ptr, ctx);
    // → sub_1406DA6B0 (serialize under WIN lock)
    // → sub_1406EAED0 → sub_14020A3E0 (JSON: schemaVersion/providers/activeByIde/
    //                                   proxy/codexRouterEnabled/codexApiLogin/
    //                                   codexApiSlots/displayTagGlobal/displayTagWoyao)
    // → sub_140504310 (atomic_write: GetCurrentProcessId + CloseHandle)

// Optional post-login sync:
relay_post_login_state_sync_sys(result2, state_ptr);

// Release WIN lock:
*volatile_byte = 0;
WakeByAddressSingle(volatile_state + 16);
```

## Layer 5: sub_1406D7860 — relay provider slots Vec updater

```c
// a4 = slots_count (from Vec<CodexApiSlot>.len())
if (a4 == 0) {
    // Special: alloc 55B error struct (no slots to process path)
    // ... returns error 8 (out-of-bounds or empty)
} else if (a4 > 5) {
    // Error: slots count exceeds maximum (5) — error path, does not write
} else {
    // TLS relay state: sub_141077010() → provider_count increment
    // Scan relay state Vec, stride=232B per RelayProvider entry:
    for each (slot in slots_vec) {
        // match by providerId (sub_141213640 str compare)
        // sub_1410A2210: clone 232B RelayProvider struct
        // sub_1402099E0: update slot data within provider
        // sub_1410A1DF0: insert updated struct back
    }
    // On success: *result = 10 (ok tag)
}
// Cleanup: sub_140082DE0(TLS ctx)
```

## Layer 6: relay_providers_config_write_and_persist_sys @ 0x1406E6960 (shared leaf)

Same as documented in reorder_relay_providers:
- JSON full config rewrite (all relay provider fields)
- `sub_140504310` = `codexmate_lib::core::relay::atomic_write` (GetCurrentProcessId+CloseHandle WIN fs leaf)
- `relay_post_login_state_sync_sys@0x1406E1750` (shared, optional post-write sync)

## Response

Success: `set_codex_api_slots_ok_response_build_sys@0x140216BA0`
- Alloc 2B: `0x6B6F` = "ok"
- Alloc 7B: response container string (internal tauri IPC wrapping)
- Returns via `sub_14080C3C0` IPC resolver leaf
