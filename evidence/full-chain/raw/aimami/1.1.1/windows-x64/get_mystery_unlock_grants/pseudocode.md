# get_mystery_unlock_grants — Windows x64 Pseudocode (gold-leaf)
session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
producer: pure
delta_class: integrity_recovered
baseline: AiMaMi 1.0.9 (command absent)
target: AiMaMi 1.1.1 win64.exe (IDB: <本地路径>
sha: d24e429a

---

## Owner Function

**VA**: `0x140023560`
**IDB name**: `get_mystery_unlock_grants_handler_111`
**Size**: 0x37F bytes (895 B)
**IPC command string**: `"get_mystery_unlock_grants"` @ `0x1412AC39A`
**Frontend CCF wrapper**: `getMysteryUnlockGrants` in `assets/index-DdcCOEJG.js`

> Sweep bucket `va_111=0x140789210` was a data-entry error — that VA is a generic
> Result-unwrap/poison-guard shim called *inside* the owner at owner+0x12B.
> True owner confirmed: `get_mystery_unlock_grants_handler_111` name pre-existing in IDB,
> xref from `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0`.

---

## Layer 1 — Owner (get_mystery_unlock_grants_handler_111 @ 0x140023560)

```c
// IPC command: "get_mystery_unlock_grants"
// No payload/args. Returns HotspotConfig JSON incl. mysteryUnlockGrants.
// Registered in tauri_ipc_main_dispatcher_sys @ 0x14000D2A0.

int64 get_mystery_unlock_grants_handler_111(InvokeContext *ctx) {
    // 1. Copy resolver buffers from ctx
    copy_mem(buf_a, ctx + 0,   520);
    copy_mem(buf_b, ctx + 520, 400);
    resolver_oword  = *(ctx + 920);
    resolver_refcnt = *(ctx + 936);

    // 2. Mutex poison-guard (CAS on lock byte)
    v40 = 0;
    if (_InterlockedCompareExchange8(ctx->lock_byte, 1, 0)) {
        sub_14124A510(ctx->lock_byte);   // futex wakeup
    }

    // 3. Tracing / concurrency gate
    v4 = off_141899DC0;
    if (2 * *off_141899DC0) {
        v40 = sub_14124B1D0(...);
        if (!v40) goto DISPATCH;
    }

DISPATCH:
    // 4. Core: read hotspot + filter grants
    hotspot_read_and_check_elapsed_111(&out_buf, ctx + 8);  // 0x1401AF310

    if (out_buf.tag != 10 /*Err*/) {
        // Success path: copy filtered grant state into ctx_out
        *(ctx_out + 24) = out_buf.qword_at_24;
        *(ctx_out +  8) = out_buf.oword_at_8;
        *(ctx_out +  0) = 1;   // Ok tag
    } else {
        // Error path: unwrap via Result-shim, serialize Err payload
        sub_140789210(&local_out, ctx->lock_byte + 8);   // 0x140789210 — shim
        sub_140243FC0(&out_buf2, &local_out, v28_arr);   // err payload → oword
        sub_1407B1650(&out_buf2);                        // drop local_out
        *(ctx_out + 24) = v30;
        *(ctx_out +  8) = v29;
        *(ctx_out +  0) = 1;
    }

    // 5. Resolve futex
    v21 = *v20;
    *v20 = 0;
    if (v21 == 2) WakeByAddressSingle(v20);

    return ctx_out;
}
```

---

## Layer 2 — Core (hotspot_read_and_check_elapsed_111 @ 0x1401AF310)

**Delta vs 1.0.9**: 1.0.9 core (0x140560640) had only allowlist filter +
`settings_serialize_with_usage_refresh`. No hotspot read, no timer, no mysteryUnlockGrants.

```c
__int64 hotspot_read_and_check_elapsed_111(__int64 *out, _QWORD *ctx_ptr) {
    // Step 1: Read full hotspot settings from disk (NEW in 1.1.1)
    codexmate_settings_hotspot_read_full_sys_111(v18_buf, ctx_ptr);
    // v18_buf has: hotspot_str, usageRefreshInterval, deviceId,
    //   remoteDeviceSecret, notificationsSince, apiProxy,
    //   mysteryUnlockGrants Vec, mysteryUnlockedRoutes companion

    // Step 2: Current time (NEW epoch-ms pair — 1.0.9 used FILETIME)
    {u32_lo, u32_hi} = system_time_precise_u32_111();    // 0x14107B7E0
    elapsed = elapsed_since_ts_111(
        &v12, {u32_lo, u32_hi},
        0xD5500000UL /*3577643008*/, 0x019D5D1E /*27111902*/
    );                                                    // 0x14107B790
    // elapsed_ms = 0 if ok==false, else 1000*secs + nanos/1_000_000
    elapsed_ms = (elapsed.ok) ? 0 : 1000*elapsed.secs + elapsed.nanos/1000000;
    v29 = elapsed_ms;

    // Step 3: Filter expired grants in-place (NEW in 1.1.1)
    v11[0] = &v21.grants_ptr;
    v11[1] = &v21.grants_ptr;
    v11[2] = v21.grants_cap;
    v11[3] = v21.grants_ptr + 40 * grant_count;   // stride=40 per MysteryUnlockGrant
    v11[4] = &elapsed_ms;                          // predicate: keep if expiresAtMs >= now
    sub_14010D900(&v12, v11);                      // 0x14010D900

    // Step 4: Check if grant list changed
    if (new_count == old_count) {
        // No change — no persist needed
        *(out+24) = new_count;
        *(out+8)  = filtered_vec_oword;
        *out      = 10;
        dealloc_string_fields(v18_buf);
        return out;
    }

    // Step 5: Persist updated settings (conditional write)
    hotspot_config_serialize_json_sys_111(&v12, ctx_ptr, v18_buf);  // 0x1401A1D90
    if (v12.tag == 10 /*Err*/) {
        copy_owords(out, &v12, 6);   // propagate 96 bytes of Err state
        drop(v18_buf);
        return out;
    }

    // Step 6: Success — output filtered grants
    *(out+24) = new_count;
    *(out+8)  = filtered_vec_oword;
    *out      = 10;
    dealloc_strings(v19..v28);
    return out;
}
```

---

## Layer 3a — codexmate_settings_hotspot_read_full_sys_111 @ 0x1401A15D0

**Purpose**: Reads `CodexMateSettings` JSON file. Parses `mysteryUnlockGrants` (key 19B
@ `0x1412B684A`) and `mysteryUnlockedRoutes` (key 21B @ `0x1412B685D`). Both NEW in 1.1.1.

```c
__int64 codexmate_settings_hotspot_read_full_sys_111(__int64 out, __int64 ctx) {
    // File path at ctx+584 (ptr+len at ctx+592)
    win32_file_read_bytes_111(&v19, *(ctx+584), *(ctx+592));  // 0x141093260

    if (file_err(v19)) {
        // Zero defaults: all Option<u64> fields = 0x8000000000000000, Vec = {ptr=0,len=0,cap=8}
        set_defaults(out);
        return drop_err(v19+8);
    }

    // JSON tokenize
    sub_140002FA0(&v27, &v19);
    if (v27.tag == 6) {
        set_defaults(out);
        return drop_err_tokens(v27);
    }

    // Lookup mysteryUnlockGrants (19B)
    if (!sub_14103A480("mysteryUnlockGrants", 19, &v17)) {
        // Not found — try companion mysteryUnlockedRoutes (21B)
        v8 = sub_14103A480("mysteryUnlockedRoutes", 21, &v17);
        if (v8) {
            // Clone JSON value by tag (0=Null,1/2=scalar,3=String,4=Array,5=Object)
            clone_json_value(&v19, v8);

            if (v19.tag == 4 /*Array*/) {
                // Convert JSON token array → Vec<MysteryUnlockGrant>
                sub_14030F100(&v22, build_filter_arr(v19));   // token array convert
                sub_1403059A0(&v27, &v22);                    // → Grant Vec
                drop_token_entries(v22, stride=40);
                dealloc(token_buf, 40*count, 8);
                // Reset staging vec
                v19 = {tag=4, ptr=0, cap=8};
                // Insert parsed Vec back into JSON map
                v33 = sub_14103A580("mysteryUnlockGrants", 19, &v17);
                *v33 = parsed_grant_vec;
            }
            if ((v10 & 5) != 4) drop(v25);
        }
    }

    // Populate out struct from hotspot map
    set_defaults(out);
    v4 = codexmate_settings_field_lookup_sys_111(
        &v19, &v27, "CodexMateSettings", 17, &off_1412B6EC8, 7
    );  // 0x14040CC30
    if (v19.tag != 2) {
        memcpy(out, &v19, 152);
        return dealloc_file_buf(v31,v32);
    }
    // Fill individual fields from hotspot Object map...
    dealloc_file_buf(v31, v32);
    return out;
}
```

---

## Layer 3b — sub_14010D900 @ 0x14010D900 (grant expiry filter)

**Purpose**: Stable partition of `Vec<MysteryUnlockGrant>`, retaining only non-expired grants.
Element stride = 40 bytes (0x28). Uses `sub_140304CD0` for partition logic.

```c
_QWORD *sub_14010D900(_QWORD *out, _QWORD *a2) {
    // a2[0..4] = {vec_base, vec_base, grant_count, end_ptr, &epoch_ms}
    _QWORD *vec_base = a2[0];
    u64 grant_count  = a2[2];

    _QWORD filter_desc[4] = {a2+4, a2+4, a2[3], 0};
    sub_140304CD0(a2, vec_base, vec_base, filter_desc);  // stable retain

    u64 remaining = (new_end - vec_base) / 8 * 0xCCCCCCCCCCCCCCCDULL >> 3;

    // Reset vec meta
    *a2=8; a2[1]=8; a2[3]=8; a2[2]=0;

    // Drop string fields of removed entries (stride=40, route.len at entry-8)
    foreach_removed(entry) {
        if (entry.route_len) dealloc(entry.route_ptr, entry.route_len, 1);
    }

    out[0] = grant_count;   // original count
    out[1] = vec_base;      // base ptr
    out[2] = remaining;     // new count after filter

    if (a2[2]) dealloc(*a2, 40*a2[2], 8);
    return out;
}
```

---

## Layer 3c — hotspot_config_serialize_json_sys_111 @ 0x1401A1D90

**Purpose**: Full `HotspotConfig` → JSON + write to disk.
Field order (positions 1-6 same as 1.0.9; position 7 is NEW):

| # | Key | Serializer | Notes |
|---|---|---|---|
| 1 | `"hotspot"` (7B) | sub_14025A8C0 | unchanged |
| 2 | `"usageRefreshInterval"` (20B) | sub_140260580 | unchanged |
| 3 | `"deviceId"` (8B) | sub_1402662D0 | unchanged |
| 4 | `"remoteDeviceSecret"` (18B) | sub_1402662D0 | unchanged |
| 5 | `"notificationsSince"` (18B) | sub_140267450 | unchanged |
| 6 | `"apiProxy"` (8B, optional) | sub_1401F7930 | unchanged |
| 7 | **`"mysteryUnlockGrants"` (19B)** | sub_1401F7910 → `mystery_unlock_grants_vec_json_serialize_111` | **NEW** |

Pre-write: `relay_config_check_parent_dirs_sys` (0x1406F2870) ensures output dir exists.

---

## Layer 4 — mystery_unlock_grants_vec_json_serialize_111 @ 0x14025DD50

**Purpose**: Serializes `Vec<MysteryUnlockGrant>` → JSON `[...]`.
Emits `[` (0x5B), iterates elements at stride=40, calls grant item serializer per element,
emits `]` (0x5D). Handles serde_json pretty-print indentation/newline state.

```c
__int64 mystery_unlock_grants_vec_json_serialize_111(__int64 a1, ..., __int64 a4) {
    u64 count = *(a4+16);   // Vec.len
    u64 base  = *(a4+8);    // Vec.ptr

    emit_indent_newline_or_comma(a1);
    emit_byte('[');

    if (!count) { emit_byte(']'); return 0; }

    bool first = true;
    for (u64 *e = base; e < base + 40*count; e += 40) {
        if (first) emit_byte('\n');
        else       emit_bytes(",\n");
        emit_indent(depth+1);
        int err = mystery_unlock_grant_item_json_serialize_111(e, serializer);
        if (err) return err;
        first = false;
    }

    emit_byte('\n');
    emit_indent(depth);
    emit_byte(']');
    return 0;
}
```

---

## Layer 5 (terminal leaf) — mystery_unlock_grant_item_json_serialize_111 @ 0x1401BA120

**Purpose**: Single `MysteryUnlockGrant` → JSON `{"route":"...","expiresAtMs":...}`.
`expiresAtMs` omitted when `a1[0] == 0` (Option::None).

```c
// MysteryUnlockGrant memory layout (stride=40 / 0x28):
// offset  0 : u64   expiresAtMs  (0 = None / no expiry)
// offset  8 : u64   (padding)
// offset 16 : u64   route.ptr
// offset 24 : u64   route.len
// offset 32 : u64   route.cap

__int64 mystery_unlock_grant_item_json_serialize_111(__int64 *a1, __int64 a2) {
    u64 expires_at_ms = *a1;    // a1[0]
    emit_byte('{');

    // "route" (5B @ 0x1412B6EB1) — always present
    int err = sub_140260580(&state, "route", 5, a1+2);
    if (err) return err;

    if (expires_at_ms == 0) goto CLOSE;   // None — omit expiresAtMs

    if (state.had_separator) return err_separator_conflict();

    // "expiresAtMs" (11B @ 0x1412B6EB6) — conditional
    err = sub_140267450(&state, "expiresAtMs", 11, a1);
    if (err) goto CLOSE;

CLOSE:
    if (state.had_element) {
        emit_byte('\n');
        emit_indent(depth);
    }
    emit_byte('}');
    return 0;
}
```

---

## Delta vs 1.0.9 — Summary

| Dimension | 1.0.9 | 1.1.1 |
|---|---|---|
| Command exists | NO | YES |
| `mysteryUnlockGrants` field | absent | read + expiry-filtered + serialized |
| `mysteryUnlockedRoutes` companion | absent | read as fallback/internal |
| Hotspot read callee | n/a | `codexmate_settings_hotspot_read_full_sys_111` |
| Timer pair | absent | `system_time_precise_u32_111` + `elapsed_since_ts_111` |
| Grant expiry filter | absent | `sub_14010D900` (stable partition, stride=40) |
| Persist callee | `settings_serialize_with_usage_refresh` | `hotspot_config_serialize_json_sys_111` (7 fields vs 6) |
| DTO response fields | n/a | 7: hotspot, interval, deviceId, secret, notifSince, apiProxy, grants |

---

## Error Paths

| Condition | Handler |
|---|---|
| File read fail | zero-defaults struct returned |
| JSON parse fail | zero-defaults struct returned |
| `CodexMateSettings` field missing | `memcpy(out, partial, 152)` |
| Poisoned Mutex | `sub_14124A510` → panic via `sub_14124BFE0` |
| Grant persist Err | propagate 96-byte Err oword |
| InvokeResolver consumed | panic `sub_14124BF80` |

---

## Side Effects

1. **File read**: `win32_file_read_bytes_111` reads CodexMate settings at `ctx+584`
2. **File write** (conditional): `hotspot_config_serialize_json_sys_111` only when grant count changes
3. **WakeByAddressSingle**: Windows futex on IPC resolver complete
4. **`_InterlockedCompareExchange8`**: atomic CAS for resolver lock
5. No HTTP, no sidecar, no DB

---

*gold-leaf; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; machine <本地机器>*
