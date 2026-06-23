# set_image_compat — Owner (Windows x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
sha: d24e429a

---

## Handler VA

```
set_image_compat_ipc_handler_111  @ 0x1400173A0
```

Size: 0x38F bytes (911 bytes)
逆向分析 name after rename: `set_image_compat_owner_sys`

---

## Dispatch Entry Point

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
  → case len=16, string="set_image_compat" (0x1412AC1E1)
  → call 0x1400173A0
```

---

## Key Symbols

| Symbol | VA | Role |
|---|---|---|
| `set_image_compat_ipc_handler_111` | 0x1400173A0 | IPC command owner (handler) |
| `toml_config_image_compat_writer_sys` | 0x1407868A0 | persistence commit (TOML writer) |
| `parse_bool_from_ipc_arg_sys` | 0x1402FF1A0 | arg extractor |
| `codex_home_resolver_sys` | 0x1406F29D0 | CODEX_HOME path resolver |
| `win32_file_read_bytes_111` | 0x141093260 | Win32 file read (config.toml) |
| `win32_file_write_bytes_111` | 0x141093710 | Win32 file write (config.toml) |
| `has_notch_invoke_resolver_respond` | 0x14080C3C0 | IPC response dispatch |
| `error_response_encoder` | 0x140832D60 | Err response encoder |
| `has_notch_arc_listener_drop_loop` | 0x14033AB50 | listener Arc drop loop |
| `aSetImageCompat` (string) | 0x1412AC1E1 | "set_image_compat" dispatch key |
| `aEnabled` (string) | 0x1412AC720 | "enabled" arg key |
| `aFeatures` (string) | 0x1412F3743 | "[features]" TOML section |
| `aImageGeneratio_1` (string) | 0x1412F37C8 | "image_generation = false" |

---

## Ownership Classification

- **dim2 owner**: `set_image_compat_ipc_handler_111` @ 0x1400173A0
- **persistence owner**: `toml_config_image_compat_writer_sys` @ 0x1407868A0
- **platform layer**: `win32_file_read_bytes_111` @ 0x141093260, `win32_file_write_bytes_111` @ 0x141093710
- **IPC response**: `has_notch_invoke_resolver_respond` @ 0x14080C3C0

---

## Delta Classification

delta_class: `integrity_recovered`
Reason: command is wholly new in 1.1.1; not present in 1.0.9 binary.
The body-compare that triggered this leaf (sweep session <审计会话>)
confirmed: string "set_image_compat" at 0x1412AC1E1 exists in 1.1.1, absent from 1.0.9 binary.
