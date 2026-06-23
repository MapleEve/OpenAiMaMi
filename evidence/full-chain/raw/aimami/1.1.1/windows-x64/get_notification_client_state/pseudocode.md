# get_notification_client_state — Windows x64 Pseudocode (gold-leaf)
## session: <审计会话> | machine: <本地机器> | producer-only
## sha: d24e429a | delta_class: integrity_recovered | baseline: 1.0.9 (command absent)
## owner_va: 0x140122010 | owner_name: get_notification_client_state_owner_sys | owner_size: 6160 bytes

---

## dim1 — Frontend CCF

```typescript
// lib/api.ts:704
invoke<NotificationClientStatePayload>("get_notification_client_state")
// argKeys: []  — no payload args, pure state query
// Confirmed via ast-facts.json: tauriInvoke entry, callee="invoke"
```

---

## dim2 — Arg Extractor

argKeys: [] (zero-arg command — no argument extraction in dispatcher)
Return type (frontend): `NotificationClientStatePayload`

---

## IPC Dispatch Entry

```
// tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
// String match block: 0x14000D47E (len=29) — "get_notification_client_state" @ 0x1412AC3CE
// xref: data ref from tauri_ipc_main_dispatcher_sys (0x14000D522)
// On match → setup block 0x14000D4AA (209B)
//   sets up IPC closure struct: cmd-name str ptr, field "repo"(4), window ref
//   calls sub_141212FB0 x3 (string-slice helpers)
//   calls sub_140065710+0x31B0 (0x140068DC0) — generic async invoke dispatcher
// Success path: 0x14000D5BC → 0x14000D5D3 → 0x14000D5F7 → 0x14000D612 → 0x1400104E1
// Failure path: 0x14000D586 → panic/error via sub_140114F20 chain
```

---

## dim3 — Full Call Tree (depth ≥ 5)

### Dispatch Chain

| depth | VA | name |
|---|---|---|
| 0 | 0x14000D2A0 | tauri_ipc_main_dispatcher_sys |
| 1 | 0x140068DC0 | sub_140065710+0x31B0 (generic async invoke) |
| 2 | 0x1400354B0 | notification_client_state_executor_wrapper_sys |
| 3 | 0x140058620 | notification_client_state_async_executor_sys |
| 4 | 0x1403473E0 | notification_client_state_poll_step_sys |
| 5 | 0x140122010 | get_notification_client_state_owner_sys (owner) |

### Owner Callees (depth 6 from dispatcher / depth 1 from owner)

```
get_notification_client_state_owner_sys @ 0x140122010
  ├── sub_1410A2210                                 Arc copy helper (0x1410A2210)
  ├── sub_141070A80                                 OnceLock try_get / Arc clone (0x141070A80)
  ├── sub_140001360                                 rust_alloc (0x140001360)
  ├── sub_141212FB0                                 memcpy/memmove helper (0x141212FB0)
  ├── sub_1400803E0                                 task-context clone (0x1400803E0)
  ├── hotspot_ready_state_discriminant_check_sys_111  window-ID discriminant (0x14038D560) [×2]
  ├── sub_140552BD0                                 discriminant result extractor (0x140552BD0)
  ├── sub_1405B19B0                                 context drop/cleanup (0x1405B19B0)
  ├── sub_1401025D0                                 Arc context drop (0x1401025D0)
  ├── sub_1405A4370                                 Arc decrement+drop (0x1405A4370)
  ├── sub_1405A5990                                 Arc decrement+drop (variant B) (0x1405A5990)
  ├── notification_state_step_poll_A_sys            poll step A (0x140113170) [×2]
  ├── notification_state_step_poll_B_sys            poll step B (0x140115AC0)
  ├── sub_140117B40                                 poll step C (0x140117B40)
  ├── sub_140116660                                 poll step D (0x140116660)
  ├── sub_14011B850                                 poll step E (0x14011B850, 168B ctx)
  ├── sub_140113D10                                 poll step G (0x140113D10)
  ├── notification_state_step_poll_F_sys            poll step F (0x140114F20)
  ├── sub_140118940                                 poll step H (0x140118940)
  ├── sub_1401125D0                                 poll step I (0x1401125D0)
  ├── sub_14012E940                                 tauri key-table lookup (window_menu / help_menu)
  ├── sub_1400801E0                                 Arc ownership transfer (0x1400801E0)
  ├── sub_140E224D0                                 Option<T> extractor (0x140E224D0)
  ├── sub_140101870                                 inner Arc drop (0x140101870)
  ├── sub_140582E60                                 join waker / Future join alloc (0x140582E60)
  ├── sub_140405820                                 hotspot state extraction + discriminant
  ├── sub_14012CB30                                 multi-way Arc join (0x14012CB30) [×2]
  └── sub_140120390                                 hotspot_config_serialize + write (0x140120390)
```

### Key Callees Depth-2 (depth 7 from dispatcher)

#### `hotspot_ready_state_discriminant_check_sys_111` @ 0x14038D560

```c
// Window-ID TLS check for hotspot ready state
// *a1 = 18 (Ready), 3 (NotReady-drop), 38 (in-flight/treat-as-Ready)
__int64* hotspot_ready_state_discriminant_check_sys_111(__int64* a1, __int64 a2, __int64 a3)
{
    Arc<Window> tls_arc = sub_14108D200();   // get_current_window_arc_tls: TLS window Arc
    window_id  = tls_arc[+2];               // *(tls_arc+16): u64 window_id
    requested  = *(a2 + 32);                // task context requested window_id
    bool freed = _InterlockedDecrement64(tls_arc) == 0;
    if (window_id == requested) {
        if (freed) sub_141088150(v14);      // arc free
        memcpy(v14, a3, 176);               // sub_141212FB0
        _InterlockedIncrement64(*(a2+24));  // Arc refcount bump x2
        _InterlockedIncrement64(*(a2+80));
        sub_14038E240(a2+40, v14);          // focus_main_window_dispatch (56882B Tauri event pump)
        *a1 = 18;  // discriminant Ready
    } else {
        if (freed) sub_141088150(v14);
        memcpy(v14, a3, 176);
        hotspot_alternate_focus_dispatch_sys_111(v13, a2, v14); // sub_1403C0BD0
        if (v13[0] != 38) {    // 38 = in-flight sentinel; anything else = not-ready
            memcpy(v14, v13, 176);
            hotspot_cleanup_non38_drop_sys_111(v14);  // sub_1403EFD40
            *a1 = 3;  // NotReady
        } else {
            *a1 = 18; // in-flight treated as Ready
        }
    }
    return a1;
}
```

#### Step poll A/B/C/D/E/F/G/H/I — identical template:

```c
// All 9 step polls follow identical structure (demonstrated with poll_A @ 0x140113170)
// Only difference: vtable pointer (off_1412D3E30 / off_1412D34F0 / off_1412D3C70 / etc.)
// and context allocation size (mostly 192B; poll_E uses 168B)
unsigned __int64 notification_state_step_poll_X_sys(__int64 a1, __int64* a2)
{
    // 1. Arc refcount bump on a2[17] and a2[18] (BUG() if overflow)
    _InterlockedIncrement64(a2[17]);
    _InterlockedIncrement64(a2[18]);
    // 2. Alloc 512B context; copy state
    ctx_512 = rust_alloc(512, 128);
    memcpy(ctx_512, &state, 512);
    // 3. Alloc 192B (or 168B for poll_E) intermediate context
    ctx_192 = rust_alloc(192, 8);
    memcpy(ctx_192, &ctx_with_arcs, 192);
    // 4. Set vtable pointer (poll-specific)
    *(state+1) = &off_1412DxxxxX;  // unique per poll step
    state[0] = 28 (0x1C);          // type tag
    // 5. Discriminant check
    hotspot_ready_state_discriminant_check_sys_111(&result, a2, &state);
    if (result.discriminant != 18) {
        sub_1405B19B0(ctx_512);   // drop 512B ctx
        *a1 = result_sentinel;    // 0x8000000000000000 (pending) or 0x10 (error)
        return;
    }
    sub_140552BD0(&state, ctx_512);   // extract inner value
    if (state == 3) {
        *a1 = 0x8000000000000010;     // NotReady early-exit
        return;
    }
    // 6. Pack result, alloc 208B final context
    ctx_208 = rust_alloc(208, 8);
    memcpy(ctx_208, &state, 208);
    *(a1+8) = ctx_208;
    *a1 = 0x8000000000000025;         // Poll::Ready sentinel
}

// Vtable per step:
// poll_A  0x140113170 → off_1412D3E30
// poll_B  0x140115AC0 → off_1412D34F0
// poll_C  0x140117B40 → off_1412D3A90
// poll_D  0x140116660 → off_1412D3B10
// poll_E  0x14011B850 → off_1412D3810  (168B ctx)
// poll_F  0x140114F20 → off_1412D3C70
// poll_G  0x140113D10 → off_1412D4130
// poll_H  0x140118940 → off_1412D3DB0
// poll_I  0x1401125D0 → off_1412D4070
```

#### `hotspot_config_serialize_5field_json_and_write_sys` @ 0x1401A1D90

```c
// [1.1.1 delta] Serializes 5-field hotspot config to JSON and writes to disk
// 1.0.9: only deviceId (single field from OnceLock+auth.json direct read)
// 1.1.1: 5-field struct — usageRefreshInterval/remoteDeviceSecret/notificationsSince all NEW
__int64 hotspot_config_serialize_5field_json_and_write_sys(__int64* out, __int64* repo, __int64 buf)
{
    relay_config_check_parent_dirs_sys(repo);  // 0x1406F2870 — ensure dir exists
    // Allocate JSON scratch buffer: 128B initial
    json_buf = rust_alloc(128, 1);
    *json_buf = '{';   // literal 0x7B
    // Write fields in order:
    sub_14025A8C0(&ctx, "hotspot",              7,  buf+144);  // bool serializer
    sub_140260580(&ctx, "usageRefreshInterval", 20, buf+16);   // u64 serializer  [NEW]
    sub_1402662D0(&ctx, "deviceId",             8,  buf+64);   // Option<str> serializer
    sub_1402662D0(&ctx, "remoteDeviceSecret",   18, buf+88);   // Option<str> serializer [NEW]
    sub_140267450(&ctx, "notificationsSince",   18, buf+0);    // cursor serializer [NEW]
    sub_1401F7930(&ctx, buf+112);   // relay-related extra field
    sub_1401F7910(&ctx, buf+40);    // relay-related extra field
    sub_1401F7950(&ctx);            // finalize JSON (close brace)
    // Write to repo path via win32_file_write_bytes_111 @ 0x141093710
    sub_1403A64F0(repo+72, {buf_len, json_ptr, 1});
    // out[0] = 10 (Ok), or 2 (I/O error), or 3 (serialize error)
}
```

#### `codexmate_settings_hotspot_read_full_sys_111` @ 0x1401A15D0

```c
// Reads hotspot config from CodexMateSettings JSON file
// New in 1.1.1: also reads mysteryUnlockGrants (19B) + mysteryUnlockedRoutes (21B) optional keys
__int64 codexmate_settings_hotspot_read_full_sys_111(__int64 a1, __int64 a2)
{
    win32_file_read_bytes_111(&v19, *(a2+584), *(a2+592));  // 0x141093260
    if (file_read_failed) {
        // zero-fill output struct 152B; set deviceId/remoteDeviceSecret=0x8000...(None)
        return sub_140041790(v19+8);  // release file bytes
    }
    sub_140002FA0(&json_tree, &v19);  // JSON parse
    if (json_tree.tag == 6) { /* parse error */ return; }
    // Optional: mysteryUnlockGrants
    if (sub_14103A480("mysteryUnlockGrants", 19, &json_tree)) { /* found */ }
    // Optional: mysteryUnlockedRoutes
    if (sub_14103A480("mysteryUnlockedRoutes", 21, &json_tree)) {
        switch (discriminant) {
            case 3: sub_1410A2210(&v19+8, v8+8); break; // Array clone
            case 4: sub_140362910(&v19+8, v8+8); break; // Map clone
            case 5: sub_140406C30(&v19+8, v8+8); break; // other
        }
        // if Array: sort/dedup via sub_14030F100 + sub_1403059A0
    }
    // Primary key lookup: "CodexMateSettings" (17B) via codexmate_settings_field_lookup_sys_111
    codexmate_settings_field_lookup_sys_111(&v19, &json_tree,
        "CodexMateSettings", 17, &off_1412B6EC8, 7);
    if (v19.discriminant != 2) {
        memcpy(a1, &v19, 152);  // success: copy 152B output struct
        return;
    }
    // else: zero-fill output struct (key not found)
}
// Output struct layout @ a1 (152B):
//   +0:   notificationsSince cursor (Option<String>)
//   +16:  usageRefreshInterval (u64)
//   +32:  Option struct (16B)
//   +40:  relay field B
//   +48:  size=8 (default)
//   +56:  padding/size field
//   +64:  deviceId (Option<String>, 0x8000...=None)
//   +88:  remoteDeviceSecret (Option<String>, 0x8000...=None)
//   +112: relay field C (Option)
//   +136: bool flag
//   +144: hotspot (bool)
```

---

## dim4 — DTO / Response Struct

```rust
// NotificationClientStatePayload (inferred from serializer string literals @ 0x1401A1D90)
// JSON field order confirmed by serializer code
struct NotificationClientStatePayload {
    hotspot: bool,                        // a3+144, "hotspot" (7B)
    usageRefreshInterval: u64,            // a3+16, "usageRefreshInterval" (20B) [NEW vs 1.0.9]
    deviceId: Option<String>,             // a3+64, "deviceId" (8B)
    remoteDeviceSecret: Option<String>,   // a3+88, "remoteDeviceSecret" (18B)  [NEW vs 1.0.9]
    notificationsSince: Option<String>,   // a3+0,  "notificationsSince" (18B)  [NEW vs 1.0.9]
}
// 1.0.9 equivalent: only had deviceId (single field from OnceLock+auth.json direct read)
```

---

## dim5 — Platform Gate (Windows x64)

- Dispatcher string: `get_notification_client_state` @ 0x1412AC3CE
- Xref: single site from `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0 (ref at 0x14000D522)
- gate_tier: full_leaf (all 5 dims confirmed with implementation-level evidence)

---

## diff vs 1.0.9

| Aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| Command in dispatcher | absent | present @ 0x14000D47E |
| Async state machine | absent | 6160B, 9 poll steps, 2 discriminant checks |
| Response DTO fields | none | 5 fields (hotspot/usageRefreshInterval/deviceId/remoteDeviceSecret/notificationsSince) |
| Settings read keys | none | hotspot (primary) + mysteryUnlockGrants + mysteryUnlockedRoutes (optional) |
| Window menu resolve | none | __tauri_window_menu__ + __tauri_help_menu__ via sub_14012E940 |
| WakeByAddressSingle | none | on poll completion in notification_client_state_poll_step_sys @ 0x1403473E0 |
| Multi-way async join | none | 7-way (id=1953064005) + 2-way (id=1701603654) + 4-way final |
