# set_hotspot_enabled — Pseudocode (Windows x64 1.1.1)

**session**: <审计会话>
**owner_va**: 0x140022070

---

## Handler: set_hotspot_enabled_ipc_dispatcher_sys (0x140022070)

```rust
fn set_hotspot_enabled_ipc_dispatcher_sys(ctx: &IpcContext) -> IpcResult {
    // --- App path: usage/refresh interval check ---
    let usage_result = get_usage_refresh_interval_read_sys_111(ctx, "set_hotspot_enabled", "app");
    if usage_result.discriminant != 3 {
        // Error: usage check failed — return error to frontend
        return build_error_response(ctx, usage_result);
    }

    // --- Repo path: acquire repo lock ---
    let repo_guard = sub_14006EDC0(ctx.repo_ptr + 16);
    let repo_data = if repo_guard.is_null() {
        // No lock needed — read directly
        sub_141214620("set_hotspot_enabled", "repo", ctx)
    } else {
        sub_141214620("set_hotspot_enabled", "repo", ctx)
    };
    if repo_data.discriminant != 6 {
        // Error from repo read
        return build_error_response(ctx, repo_data);
    }

    // --- Parse bool arg "enabled" ---
    let enabled_result = parse_bool_from_ipc_arg_sys("set_hotspot_enabled", "enabled", ctx);
    if enabled_result.discriminant != 6 {
        // Parse error
        return build_error_response(ctx, enabled_result);
    }
    let enabled: bool = enabled_result.value;

    // --- Core implementation ---
    let result = set_hotspot_enabled_core_impl_sys(
        &mut out_slot,
        repo_guard,
        mutex_ptr,  // _InterlockedCompareExchange8 target
        enabled,
    );

    // --- Cleanup repo guard ---
    // drop waiters loop (96-byte stride)
    // sub_140001370 free

    build_ok_response(ctx, result)
}
```

---

## Core: set_hotspot_enabled_core_impl_sys (0x14060CE60)

```rust
fn set_hotspot_enabled_core_impl_sys(
    out: &mut OutSlot,
    repo: &RepoHandle,
    mutex: *mut u8,   // atomic byte for _InterlockedCompareExchange8
    enabled: bool,
) {
    // Acquire mutex (spin-wait with _InterlockedCompareExchange8)
    if _InterlockedCompareExchange8(mutex, 1, 0) != 0 {
        sub_14124A510(mutex);  // wait until released
    }

    // Check test/debug mode via off_141899DC0
    let test_mode = 2 * *off_141899DC0;

    // Read full hotspot settings
    let settings = codexmate_settings_hotspot_read_full_sys_111(repo.settings_ptr);
    // settings.discriminant == 10 means "populated settings object"

    if settings.discriminant != 10 {
        // Settings not found — release mutex + return None
        release_mutex(mutex);  // *mutex = 0; if *mutex == 2 { WakeByAddressSingle }
        return OutSlot::none(); // 0x8000000000000000
    }

    release_mutex(mutex);

    if enabled {
        // Enable branch
        let webview_handle = set_hotspot_enabled_enable_branch_sys(repo);
        if let Some(handle) = webview_handle {
            // Update WebView hotspot iframe
            sub_140E30410(handle, hotspot_state);
            sub_14061DD90(handle);
            sub_140001370(handle, 48, 8);  // free
            out.write_ok(hotspot_state);
        } else {
            // hotspot_ready check failed
            out.write_none(); // 0x8000000000000000
        }
    } else {
        // Disable branch
        let disable_result = sub_140076AD0(repo);
        if disable_result.discriminant != 3 {
            // Build error notification via sub_1403C0BD0
            let notif = build_hotspot_disable_notification(disable_result);
            if notif.discriminant != 38 {
                // Broadcast notification
                sub_1403EFD40(&notif);
                // Emit with 0x8000000000000000 / 3 discriminants
            }
            sub_14061EF90(disable_result_ref);
            sub_140041D40(scratch);
        }
        *out.enabled_byte = enabled as u8;  // *(v6+8) = a4
        out.tag = 0x8000000000000000;       // None-success variant
    }
}
```

---

## Enable Branch: set_hotspot_enabled_enable_branch_sys (0x14060D750)

```rust
fn set_hotspot_enabled_enable_branch_sys(repo: &RepoHandle) -> Option<*mut WebviewHandle> {
    // Read repo state
    let repo_state = sub_140076AD0(repo);
    if repo_state.discriminant != 3 {
        sub_14061EF90(&repo_state);
        return None;
    }

    // Set up WebView route: "index.html" base + "hotspot" route
    sub_1410A1B60(route_buf, "index.html", 10);
    sub_14071E3A0(repo_state, repo, "hotspot", 7, route_ref);

    // Multi-step WebView update chain
    sub_140641090(&frame1, &route_ref, 1, 0);
    sub_14063BD20(&frame2, &frame1);
    sub_1406411C0(&frame3, &frame2);
    sub_14063C790(&final_frame, &frame3, enabled_flags);

    // Check hotspot_ready state
    if final_frame.discriminant != 3 {
        hotspot_ready_state_discriminant_check_sys_111(
            &result_slot,
            &inner_state,
            &discriminant_31_42,  // discriminants 31 (0x1F) and 42 (0x2A)
        );
        if result_slot.discriminant != 18 {
            // Error: hotspot not ready
            sub_14061DD90(&err_slot);
        }
        sub_14061EF90(&inner_state);
        return None;
    }

    // Allocate 48-byte WebviewHandle (align=8)
    let handle = alloc(48, 8);
    handle[0] = final_frame.field0;
    handle[1] = final_frame.field1;
    handle[2] = final_frame.field2;
    Some(handle)
}
```

---

## Bool Parse: parse_bool_from_ipc_arg_sys (0x1402FF1A0)

```rust
fn parse_bool_from_ipc_arg_sys(out: &mut IpcResult, args: &IpcArgs) -> &IpcResult {
    // Try fast path: check if arg is already typed bool (discriminant & 1 == 0)
    if (sub_1402F9EB0(args) & 1) == 0 {
        if *arg_bytes == 1 {
            // Error: wrong type tag
            out.error_tag = arg_bytes[1];
            out.discriminant = 6;
            return out;
        }
        // Convert via string decoder
        let decoded = sub_1412233C0(arg_bytes, scratch, &unk_1412D5B00);
    }
    // Pack bool into result: discriminant=3 (Ok), value = bool bytes
    out.discriminant = 3;
    out.payload = decoded_bool_oword;
    out
}
```
