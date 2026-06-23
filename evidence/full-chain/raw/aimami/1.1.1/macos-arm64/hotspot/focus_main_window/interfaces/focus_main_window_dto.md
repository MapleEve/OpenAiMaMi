# focus_main_window — Interface / DTO / Error / Side-effect
## AiMaMi 1.1.1 macOS arm64 | Session <审计会话>

---

## Input DTO

| Field | Type | Value | Note |
|---|---|---|---|
| IPC command name | string | `"focus_main_window"` | confirmed in packed string table 0x101148166 |
| JS parameters | none | — | no payload; only `AppHandle<R>` injected by Tauri runtime |
| JS invoke | `invoke("focus_main_window")` | no args | |

## Output DTO

| Field | Type | JS resolution |
|---|---|---|
| Return | `Result<(), tauri::Error>` | Promise resolves `undefined` on Ok; rejects with error string on Err |
| Ok sentinel | `*a1 = 0x8000000000000000` | Rust Result Ok(()) discriminant |

## Internal Event Payload (WryUserEvent discriminant 28)

```
struct FocusWindowPayload {           // 160 bytes, align 8
    handle_clone: [u8; 136],          // __dst[0..16] = 17 x u64 = WryHandle clone
    ptr_atomic_a: *volatile i64,      // __dst[17] = from a2+136
    ptr_atomic_b: *volatile i64,      // __dst[18] = from a2+144
    focused_bool: u8,                 // LOBYTE(__dst[19]) = 0x01 (true = focus)
    _pad: [u8; 7],                    // remainder of __dst[19]
}
// total: 10 x 16-byte owords = 160 bytes
```

**Key behavioral flag**: `focused = 0x01` distinguishes `focus_main_window` from:
- `reveal_main_window` (same vtable, same discriminant 28, but `focused = 0x00`)
- `force_reveal_main_window` (same vtable, same discriminant 28)

## Vtable

| Symbol | VA | Note |
|---|---|---|
| `anon_91b23c3e0afeec67b869976d9683aaed_711` | `0x1013bedd8` | WryUserEvent vtable for discriminant 28; shared with reveal/force_reveal |

## Side Effects

1. **Window focus**: Posts `WryUserEvent(28, focused=true)` → Wry event loop → NSApp window focus (AppKit) on macOS
2. **No file I/O**
3. **No network I/O**
4. **No database/persistence**
5. **No sidecar invocation**

## Error Paths

| Condition | Behavior |
|---|---|
| Refcount atomic overflow (MSB set) | `BUG()` = `__break(1)` = Rust process abort (unrecoverable) |
| OOM (heap alloc 160 bytes) | `handle_alloc_error` = abort |
| `send_user_message` returns non-19 discriminant | Box error, drop, return as `Err(tauri::Error)` |
| `send_user_message` returns 19 | Ok(()) returned to IPC caller |

## Call Paths (dim1)

### IPC path (primary)
```
JS: invoke("focus_main_window")
  → Tauri IPC dispatcher (codexmate_lib::run::{{closure}}::{{closure}}@0x10030eb00)
  → focus_main_window@0x1005ec060
  → tauri_runtime_wry::send_user_message
  → Wry event loop → NSApp focus
```

### Tray event path (native substitute)
```
Tray click: "tray_open_main" (len=14) / "tray_active_title" (len=17) / "tray_active_subtitle" (len=20)
  → handle_tray_menu_event@0x1006278e0
  → focus_main_window@0x1005ec060 (at 0x100627ef2)
  → tauri_runtime_wry::send_user_message
  → Wry event loop → NSApp focus
```
