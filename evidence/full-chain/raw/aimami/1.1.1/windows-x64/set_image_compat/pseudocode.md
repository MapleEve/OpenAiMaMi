# set_image_compat — Pseudocode (Windows x64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
sha: d24e429a
prev_session: wf-aimami111-delta-20260617-sweep
delta_class: integrity_recovered (new in 1.1.1, not present in 1.0.9)

gold_leaf: true
call_tree_depth: 5
terminated_reason: platform_primitive (CloseHandle, WakeByAddressSingle, _InterlockedDecrement64)

---

## Handler: set_image_compat_ipc_handler_111 @ 0x1400173A0 (size=0x38F)

Dispatch string at 0x1412AC1E1 = "set_image_compat" (16 bytes)
Arg key string at 0x1412AC720 = "enabled" (7 bytes)

```rust
// Tauri IPC command: "set_image_compat"
// Frontend invoke: invoke<CoreEnvelope<ImageCompatPayload>>("set_image_compat", { enabled: boolean })
// Returns: Ok(()) on success; Err(String) on parse or I/O failure
// Delta vs 1.0.9: command did not exist in 1.0.9; wholly new in 1.1.1
// Key behavioral change: writes "image_generation = false" into CODEX_HOME/config.toml
// under [features] section — this is a persistent TOML config mutation (not in-memory only)

fn set_image_compat_ipc_handler_111(ipc_ctx: *mut IpcContext) -> i64 {
    // 1. Copy invoke context + resolver state buffers
    //    sub_141212FB0 x2: memcpy 520B and 400B blocks from ipc_ctx
    let ctx_copy    = memcpy(ipc_ctx,       520);   // v12 [rsp+198h]
    let resolver_copy = memcpy(ipc_ctx+520, 400);  // v13 [rsp+3A0h]
    let v36 = *(ipc_ctx + 936);   // listener count
    let v35 = *(ipc_ctx + 920);   // listeners base oword

    // 2. Build IPC arg descriptor
    //    descriptor[0]: cmd_name = "set_image_compat" (len=16) @ 0x1412AC1E1
    //    descriptor[1]: arg_key  = "enabled"          (len=7)  @ 0x1412AC720
    //    v19 points to ipc_ctx payload copy

    // 3. Parse bool arg from IPC JSON payload
    let parse_result = parse_bool_from_ipc_arg_sys(&out_tag, &arg_descriptor);
    // out_tag.byte0 == 6  → Ok(bool), bool value at out_tag.byte1
    // out_tag.byte0 == 3  → Err(String payload)

    if out_tag.byte0 == 6 {
        let enabled_byte: u8 = out_tag.byte1;  // BYTE1(v29)

        // 4. Call TOML config writer (primary persistence commit)
        toml_config_image_compat_writer_sys(&write_result, enabled_byte);
        // → resolves CODEX_HOME, reads config.toml, patches [features] section,
        //   writes "image_generation = false", saves file via Win32 WriteFile

        // 5. Encode Ok(()) response
        v39 = 0;  // Ok tag
        encode_ok_unit_and_respond(ctx_copy, &out_tag);  // sub_140832D60

    } else {
        // Error path: re-init sub-context and respond with Err payload
        //   sub_14080C3C0 = has_notch_invoke_resolver_respond
        has_notch_invoke_resolver_respond(
            ctx_copy, v14, &v17, &ipc_ctx.listeners, v15, v16
        );
    }

    // 6. Drop listener Arc slots
    //    for i in 0..count: has_notch_arc_listener_drop_loop()  @ 0x14033AB50
    //    stride = 96 bytes per listener entry
    for _ in 0..v35.count {
        has_notch_arc_listener_drop_loop();  // @ 0x14033AB50
        listener_ptr += 96;
    }
    if listener_count > 0 {
        dealloc(listeners_base, 96 * listener_count, align=8);  // sub_140001370
    }

    // 7. Terminal cleanup
    return sub_140042650(ctx_copy);  // → 0 (Ok return code to Tauri runtime)
}
```

---

## L2: parse_bool_from_ipc_arg_sys @ 0x1402FF1A0

```rust
// Extracts a bool from the Tauri IPC JSON payload via tagged-union result.
// tag=6 → Ok(bool): bool byte stored at out[+1]
// tag=3 → Err(String): error payload stored in out
fn parse_bool_from_ipc_arg_sys(
    out: *mut TaggedResult,
    descriptor: *const IpcArgDescriptor,
) -> *mut TaggedResult {
    // Check if raw JSON token is a direct bool literal (sub_1402F9EB0)
    if sub_1402F9EB0(descriptor).bit0 == 0 {
        if *token_ptr == 1 {
            // Fast path: bare bool token
            out[+1] = token_ptr[+1];  // copy bool byte
            out[0] = 6;               // Ok tag
            return out;
        }
        // String coercion: "true" / "false" → bool
        token_ptr = sub_1412233C0(token_ptr, &tmp_buf, &unk_1412D5B00);
    }

    // Slow path: serde Display-based deserialization
    // sub_140E30410 = serde_json deserialize via vtable
    // panic if Display impl fails → sub_14124BFE0 = Rust panic handler
    if !sub_140E30410(descriptor_struct, &deserialize_ctx) {
        panic!("a Display implementation returned an error unexpectedly");  // sub_14124BFE0
    }
    // Copy deserialized bool fields to out
    out[0] = 3;  // Err tag (failed deserialization)
    memcpy(out[7..24], result_fields);
    sub_1402F7F90(descriptor_struct);  // cleanup
    return out;
}
```

---

## L2: toml_config_image_compat_writer_sys @ 0x1407868A0

```rust
// Primary persistence commit for set_image_compat.
// Reads CODEX_HOME/config.toml (or $HOME/config.toml), finds or creates [features] section,
// inserts or updates "image_generation = false" (literal string — value is hardcoded regardless
// of `enabled` arg; the arg only controls insert-before vs insert-after vs update branch).
// IMPORTANT DELTA vs 1.0.9: 1.0.9 had no set_image_compat; this is the first version to write
// "image_generation = false" into the TOML config file.
fn toml_config_image_compat_writer_sys(out: *mut Result<()>, enabled: u8) {
    // L3a: resolve config path
    let config_path = codex_home_resolver_sys();  // 0x1406F29D0

    // L3b: build path context
    diagnostic_data_builder_sys(path_buf, config_path);  // 0x1406F3770

    // L3c: read existing file bytes
    let file_bytes = win32_file_read_bytes_111(
        config_path.ptr, config_path.len, config_path.capacity
    );  // 0x141093260 → CreateFile(GENERIC_READ) → ReadFile → CloseHandle

    // L3d: parse TOML lines into (ptr, len) pairs via line iterator
    //      sub_14072E810 = line iterator / next()
    //      sub_14070B280 = str slice constructor
    // Scan for [features] section:
    //   magic: bytes[0..8] ^ 0x657275746165665B == 0
    //          bytes[8..10] ^ 0x5D73 == 0   → "[features]" (10 bytes)
    // Scan for "image_generation = ..." key:
    //   magic: byteswap(bytes[0..8]) == 0x696D6167655F6765  ("ge_image" reversed)
    //          byteswap(bytes[8..16]) == 0x6E65726174696F6E  ("neration" reversed)

    let lines: Vec<(&str, usize)> = parse_toml_lines(file_bytes);

    // L3e: mutation logic
    if found_image_generation_key {
        // Update existing key in-place
        lines[image_gen_idx] = ("image_generation = false", 24);
        let count = file_line_count;
        // sub_14033F0C0: join with "\n"
        let new_content = lines.join("\n");  // 0x14033F0C0

    } else if found_features_section {
        // Insert after [features] header
        lines.insert(features_idx + 1, ("image_generation = false", 24));
        // sub_141220AD0: grow Vec capacity if needed
        let new_content = lines.join("\n");

    } else {
        // Append new section at end
        if !file_ends_with_newline(file_bytes) {
            lines.push(("\n", 1));
        }
        lines.push(("[features]", 10));  // aFeatures @ 0x1412F3743
        lines.push(("image_generation = false", 24));  // 0x1412F37C8
        let count = lines.len();
        let new_content = lines.join("\n");
    }

    // L3f: write back via atomic write
    //      sub_141093710 = win32_file_write_bytes_111
    let write_err = win32_file_write_bytes_111(
        config_path.ptr, config_path.len,
        new_content.ptr, new_content.len
    );  // → CreateFile(CREATE_ALWAYS|GENERIC_WRITE) → WriteFile loop → CloseHandle

    if let Some(err) = write_err {
        // sub_1410A1DF0: format error; sub_140041790: cleanup tmp buf
        *out = Err(format_io_error(err));
        return;
    }
    *out = Ok(());

    // Cleanup: drop path buf, dealloc lines vec
    diagnostic_paths_drop_sys(path_buf);  // 0x140046870
}
```

---

## L3a: codex_home_resolver_sys @ 0x1406F29D0

```rust
// Resolves the Codex configuration root path.
// Priority: CODEX_HOME env var (tag=0x8000000000000001) → OS home dir
// Appends "config.toml" from packed string at 0x1412EC185
fn codex_home_resolver_sys(out: *mut PathBuf) {
    let env_result = std::env::var("CODEX_HOME");  // sub_141089D90; string "CODEX_HOME"@0x1412EC17B

    if env_result.is_ok() {
        // tag == 0x8000000000000001 = env var found with value
        *out        = env_result.ptr;
        *(out+16)   = env_result.len;
        *(out+24)   = 1;  // mark as env-sourced
        return;
    }
    if env_result has string data { dealloc(env_result.ptr); }

    // Fallback: OS home dir
    let home = dirs::home_dir();  // sub_140E96CD0
    if home.is_err() {
        let home = Path::new(".");  // sub_1410A1B60 with "." @ 0x1412EA1B8
    }

    // Join config subpath (config.toml is packed into the long string at 0x1412EC185)
    sub_14107A2D0(out, home.drive, home.root, "config.toml", 6);
    if home has allocation { dealloc(home.ptr); }
}
```

---

## L3b: win32_file_read_bytes_111 @ 0x141093260

```rust
// Win32 file read wrapper.
// Terminal at depth 4: __imp_CloseHandle @ 0x14124D788
fn win32_file_read_bytes_111(
    out: *mut Result<Vec<u8>>,
    path_ptr: i64,
    path_len: i64,
) {
    let (handle, err) = sub_14107C990(path_ptr, path_len, &open_flags);  // CreateFile(GENERIC_READ)
    if err { *out = Err(err); return; }

    if os_error_code == 2 {
        // File not found → return empty Ok
        sub_141074040(&v14);  // init empty vec
        *out = Ok(empty_vec);
        CloseHandle(handle);  // __imp_CloseHandle @ 0x14124D788  [DEPTH-4 TERMINAL]
        return;
    }

    // Read all bytes: sub_14109FE10 → allocates buffer, sub_1410A9010 → ReadFile loop
    let file_len = sub_141074720(handle);  // GetFileSize
    let buf = alloc(file_len);
    sub_1410A9010(&read_state, buf.ptr + offset, remaining);  // ReadFile loop

    CloseHandle(handle);  // __imp_CloseHandle @ 0x14124D788  [DEPTH-4 TERMINAL]

    if read_ok {
        *out = Ok(buf);
    } else {
        dealloc(buf);
        *out = Err(os_error);
    }
}
```

---

## L3d: win32_file_write_bytes_111 @ 0x141093710

```rust
// Win32 file write wrapper. Opens with CREATE_ALWAYS (truncate-and-write).
// Terminal at depth 4: __imp_CloseHandle @ 0x14124D788
fn win32_file_write_bytes_111(
    path_ptr: i64,
    path_len: i64,
    buf: i64,
    buf_len: u64,
) -> Option<OsError> {
    let (handle, err) = sub_14107C990(path_ptr, path_len, &write_flags);
    // write_flags includes: GENERIC_WRITE | CREATE_ALWAYS | FILE_ATTRIBUTE_NORMAL
    if err { return Some(err); }

    if buf_len == 0 {
        CloseHandle(handle);  // [DEPTH-4 TERMINAL]
        return None;
    }

    // Write loop: sub_14107BF00 = WriteFile wrapper
    loop {
        let (written, state) = sub_14107BF00(&handle, buf, buf_len, 0);
        // state dispatch: 0=ptr+16, 1=ptr+15, 2=comment('#'), 3=HIDWORD cap
        if written == 0 { break; }
        buf     += written;
        buf_len -= written;
        if buf_len == 0 { break; }
    }

    CloseHandle(handle);  // __imp_CloseHandle @ 0x14124D788  [DEPTH-4 TERMINAL]
    return None;  // success
}
```

---

## L2 error path: error_response_encoder @ 0x140832D60

```rust
// Encodes Err payload from set_image_compat into IPC response format,
// then calls has_notch_invoke_resolver_respond for terminal IPC dispatch.
fn error_response_encoder(
    ipc_ctx_copy: *const IpcCtxCopy,
    err_payload: *mut TaggedResult,
) {
    memcpy(local_copy, ipc_ctx_copy, 0x168);  // sub_141212FB0

    if err_payload.is_explicit_err() {
        // Err with v21/v22 payload in v20
        copy err bytes into v21.lo/v21.hi;
        v20 = 1;  // Err arm
    } else {
        // Encode via Display vtable: sub_14022DE20 + sub_140807390
        if *v18 == 0x8000000000000025 {
            // fast sentinel: copy raw bytes into v21
            v20 = 0;
        } else {
            // full Display format via sub_140E30410
            if Display fails { panic!(sub_14124BFE0); }
            encode formatted string into v22;
            v20 = 1;
        }
    }

    // Terminal: IPC respond
    has_notch_invoke_resolver_respond(
        local_copy, v4, &v20,
        &ipc_ctx_copy[listeners_at_0x168], v12, v13
    );  // 0x14080C3C0  [DEPTH-3 TERMINAL → depth-4 WakeByAddressSingle]
}
```

---

## L2/L3 terminal: has_notch_invoke_resolver_respond @ 0x14080C3C0

```rust
// InvokeResolver::respond.
// Depth-4 terminals: WakeByAddressSingle @ 0x14124A5D0, _InterlockedDecrement64
// Acquires CAS spinlock, dispatches result via vtable, wakes frontend await.
fn has_notch_invoke_resolver_respond(
    ctx: i64,
    resolver_ptr: i64,         // *const InvokeResolver (Arc<InvokeResolver>)
    response: *mut i128,
    listeners: *mut i128,
    a5: i32, a6: i32,
) {
    // Acquire lock: CAS8(resolver+16, new=1, expected=0)
    if _InterlockedCompareExchange8(resolver+16, 1, 0) != 0 {
        // Contended: spin/wait
        sub_14124A510(resolver+16);  // futex-style wait
    }

    // Sanity: resolver must not be already consumed
    if *(resolver+17) != 0 {
        panic!("resolver consumed");  // sub_14124BF80
    }

    // Copy response data into local bufs
    memcpy(local_ctx, ctx, 360);
    local_response = *response;
    local_listeners = *listeners;

    // Vtable dispatch: fn_ptr at *(*(resolver+32) + 24)
    let vtable_fn = *(*(resolver+32) + 24);
    vtable_fn(*(resolver+24), local_ctx, &local_response, &local_listeners, a5, a6);

    // Drop vtable resources (sub_140001370 if alloc > 0)

    // Wake frontend awaiter
    WakeByAddressSingle(resolver+16);  // @ 0x14124A5D0  [DEPTH-4 TERMINAL]

    // Decrement Arc refcount; if 0 → drop resolver
    if _InterlockedDecrement64(resolver) == 0 {
        sub_140E208A0(&resolver);  // drop resolver
    }
}
```
