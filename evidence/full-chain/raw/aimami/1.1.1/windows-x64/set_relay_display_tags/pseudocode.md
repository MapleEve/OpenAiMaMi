# set_relay_display_tags — Full-Chain Pseudocode (windows-x64, AiMaMi 1.1.1)

**Session**: wf-aimami111-delta-20260616 | **Date**: 2026-06-16

## Layer 1: Owner Handler — `set_relay_display_tags_owner_sys` @ 0x14001F080

```rust
fn set_relay_display_tags_owner_sys(invoke_ctx: &InvokeContext) -> IpcResult {
    // Extract IPC raw bytes into local buffers
    let ipc_payload: [u8; 520] = copy_from(invoke_ctx, offset=0);
    let ipc_env: [u8; 400] = copy_from(invoke_ctx, offset=520);
    let invoke_resolver_ptr = invoke_ctx[936];
    let invoke_meta = invoke_ctx[920..936];   // 128-bit OWord

    // --- Param 1: manager (String, required) ---
    // param_descriptor: cmd="set_relay_display_tags"(22B), key="manager"(7B)
    let manager_result = extract_string_param(ipc_payload, cmd="set_relay_display_tags", key="manager");
    // sub_14006F4B0 → returns Result<String>; on Err → IPC error path
    if manager_result.is_err() {
        return ipc_error_respond(invoke_ctx, manager_result.err());
        // sub_14080C3C0 IPC resolver leaf ★
    }
    let manager: String = manager_result.ok();

    // --- Param 2: global (Option<String>, optional) ---
    // param_descriptor: cmd="set_relay_display_tags"(22B), key="global"(6B)
    let global_result = parse_option_string_param(ipc_payload, cmd="set_relay_display_tags", key="global");
    // sub_1402FED40 → returns Result<Option<String>>
    // tag=6 means Some(String extracted), tag=3 means None
    if global_result.is_err() {
        return ipc_error_respond(invoke_ctx, global_result.err());
        // sub_14080C3C0 IPC resolver leaf ★
    }
    let global: Option<String> = global_result.ok();  // tag=6 → Some, tag=3 → None

    // --- Param 3: woyao (Option<String>, optional) ---
    // param_descriptor: cmd="set_relay_display_tags"(22B), key="woyao"(5B)
    let woyao_result = parse_option_string_param(ipc_payload, cmd="set_relay_display_tags", key="woyao");
    // sub_1402FED40 (same parser)
    if woyao_result.is_err() {
        return ipc_error_respond(invoke_ctx, woyao_result.err());
        // sub_14080C3C0 IPC resolver leaf ★
    }
    let woyao: Option<String> = woyao_result.ok();

    // --- Core dispatch ---
    let result = set_relay_display_tags_core_dispatch(manager, global, woyao);
    // sub_140831F00: response builder → sub_14080C3C0 IPC resolver
    return build_and_send_response(result);
}
```

## Layer 2: Core Dispatch — `set_relay_display_tags_core_dispatch_sys` @ 0x14021B780

```rust
fn set_relay_display_tags_core_dispatch_sys(
    manager: String,
    global: Option<String>,
    woyao: Option<String>,
) -> Result<OkResponse, RelayError> {
    // Acquire relay state → write display tags → persist
    let write_result = set_relay_display_tags_write_and_sync(manager, global, woyao);
    // sub_1406D71D0

    match write_result {
        Ok(ok_val) => {
            // type validation pass (sub_140243FC0, 8-way type validator)
            let response = build_ok_response(ok_val);
            // set_codex_api_slots_ok_response_build_sys@0x140216BA0 — shared "ok" 2B builder
            return Ok(response);
        }
        Err(e) => {
            // sub_1402342B0 cleanup/drop
            return Err(e);
        }
    }
}
```

## Layer 3: Write + Sync — `set_relay_display_tags_write_and_sync_sys` @ 0x1406D71D0

```rust
fn set_relay_display_tags_write_and_sync_sys(
    manager: String,
    global: Option<String>,
    woyao: Option<String>,
) -> Result<WriteResult, RelayError> {
    // Step 1: Acquire relay state read-lock + snapshot current RelayProvider
    let relay_snapshot = relay_state_read_lock_and_snapshot();
    // sub_1406E8480: WIN lock = _InterlockedCompareExchange8(lock_byte+16, 1, 0)
    //   if lock busy → sub_14124A510 (wait/spin); then sub_14072A3A0 copies RelayProvider data
    //   stride=232B per RelayProvider; offsets: +24 (id/name), +48 (transport), +96 (codexApiSlots),
    //   +128 (env), +152..+176 (slots), +200 (global displayTag), +224 (woyao displayTag),
    //   +248..+312 (further fields), +344 (count), +352 (flags), +360 (int_id), +364/+365 (bool flags)
    //   WakeByAddressSingle on release

    // Step 2: Set global display tag on matched provider
    let global_tag_str: String = set_display_tag_field(relay_snapshot, global);
    // sub_14073D5C0(v34, global_ptr, global_len):
    //   sub_1403007F0 → str range init
    //   sub_14070B280 → string pointer calc
    //   alloc + memcpy (sub_140001360 alloc, sub_141212FB0 copy)
    //   sets RelayProvider.displayTagGlobal field

    // Step 3: Set woyao display tag on matched provider
    let woyao_tag_str: String = set_display_tag_field(relay_snapshot, woyao);
    // sub_14073D5C0(v34, woyao_ptr, woyao_len): same setter, woyao field

    // Step 4: Persist relay config to disk (atomic write)
    let persist_result = relay_providers_config_write_and_persist_sys(relay_snapshot, manager);
    // relay_providers_config_write_and_persist_sys@0x1406E6960 (SHARED with set_codex_api_slots, reorder_relay_providers)
    //   → sub_1406DA6B0: serialize under WIN lock (_InterlockedCompareExchange8)
    //   → sub_1406EAED0 → sub_14020A3E0: JSON builder:
    //       schemaVersion / providers / activeByIde / proxy / codexRouterEnabled /
    //       codexApiLogin / codexApiSlots / displayTagGlobal / displayTagWoyao
    //   → sub_140504310: codexmate_lib::core::relay::atomic_write
    //       GetCurrentProcessId + CloseHandle → WIN fs leaf ★ (file write)
    //   → WakeByAddressSingle on completion

    match persist_result {
        // tag != 10 means Ok
        Ok(_) => {
            // Step 5 (conditional): post-login state sync
            if global.is_some() {  // v6 flag = true when global present
                let sync_result = relay_post_login_state_sync_sys(relay_snapshot, manager);
                // relay_post_login_state_sync_sys@0x1406E1750 (shared, optional post-write sync)
                if sync_result.is_err() { return Err(sync_result.err()); }
            }
            return Ok(write_result);
        }
        Err(e) => {
            // Error: sub_14072A3A0 builds error output struct from relay provider snapshot
            // then sub_140234AC0 cleanup
            return Err(e);
        }
    }
    // Cleanup: drop global/woyao String buffers (sub_140001370 dealloc)
}
```

## Layer 4: Sub-functions (Terminal Leaves)

### `sub_1406E8480` — relay_state_read_lock (WIN)
```rust
// WIN lock protocol:
_InterlockedCompareExchange8(lock_byte+16, new=1, expected=0)
// if busy → sub_14124A510 (futex wait / spin)
// then sub_14072A3A0: copy RelayProvider fields (strides/offsets confirmed)
// on release: *lock_byte = 0; if was 2 → WakeByAddressSingle ★ (WIN fs leaf)
```

### `sub_14073D5C0` — display_tag_option_string_setter
```rust
// Sets a display tag string field on the relay provider snapshot
// sub_1403007F0(&range, str_ptr, str_ptr + str_len)  // string range init
// sub_14070B280(ptr, len) → raw String pointer
// sub_140001360(len, 1) → alloc (WIN heap leaf ★)
// sub_141212FB0(dst, src, len) → memcpy (WIN memory leaf ★)
// Returns: (len: u64, ptr: *u8, cap: u64) fat String repr
```

### `relay_providers_config_write_and_persist_sys` @ 0x1406E6960 (SHARED)
```rust
// WIN lock acquire → serialize full relay config JSON → atomic_write
// JSON fields: schemaVersion/providers/activeByIde/proxy/codexRouterEnabled/
//              codexApiLogin/codexApiSlots/displayTagGlobal/displayTagWoyao
// sub_140504310 → codexmate_lib::core::relay::atomic_write:
//   GetCurrentProcessId + CloseHandle → write file ★ (WIN fs leaf)
// WakeByAddressSingle on lock release ★ (WIN sync leaf)
```

### `relay_post_login_state_sync_sys` @ 0x1406E1750 (SHARED, conditional)
```rust
// Optional post-write state sync (triggered when global tag is Some)
// Shared with set_codex_api_slots, reorder_relay_providers
```

### `sub_14080C3C0` — IPC resolver leaf (SHARED)
```rust
// IPC error/response serialize + dispatch ★ (terminal)
```
