# set_image_compat — Call Tree (Windows x64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
sha: d24e429a
prev_session: wf-aimami111-delta-20260617-sweep

edges: 18
max_depth: 5
terminated_reason: platform_primitive (CloseHandle @ 0x14124D788, WakeByAddressSingle @ 0x14124A5D0, _InterlockedDecrement64)

---

## ASCII Call Tree

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
└── [len=16 string match "set_image_compat" @ 0x1412AC1E1]
    └── set_image_compat_ipc_handler_111 @ 0x1400173A0  [NEW 1.1.1, size=0x38F]
        │
        ├── sub_141212FB0 @ 0x141212FB0           [memcpy 520B + 400B — infra]
        │
        ├── parse_bool_from_ipc_arg_sys @ 0x1402FF1A0  [bool arg extract]
        │   ├── sub_1402F9EB0 @ 0x1402F9EB0       [JSON token type check]
        │   ├── sub_1412233C0 @ 0x1412233C0       [string→bool coerce]
        │   └── sub_140E30410 @ 0x140E30410       [serde Display deserialize]
        │       └── sub_14124BFE0 @ 0x14124BFE0   [Rust panic handler — terminal]
        │
        ├── [SUCCESS PATH: tag==6]
        │   ├── toml_config_image_compat_writer_sys @ 0x1407868A0  [PERSISTENCE COMMIT]
        │   │   │                                                    [writes image_generation=false to config.toml]
        │   │   ├── codex_home_resolver_sys @ 0x1406F29D0          [resolve CODEX_HOME path]
        │   │   │   ├── sub_141089D90 @ 0x141089D90                [std::env::var("CODEX_HOME")]
        │   │   │   ├── sub_140E96CD0 @ 0x140E96CD0                [dirs::home_dir()]
        │   │   │   └── sub_14107A2D0 @ 0x14107A2D0                [path::join config.toml]
        │   │   │
        │   │   ├── diagnostic_data_builder_sys @ 0x1406F3770      [path buf build]
        │   │   │
        │   │   ├── win32_file_read_bytes_111 @ 0x141093260        [read config.toml]
        │   │   │   ├── sub_14107C990 @ 0x14107C990                [CreateFile(GENERIC_READ)]
        │   │   │   ├── sub_141074720 @ 0x141074720                [GetFileSize]
        │   │   │   ├── sub_14109FE10 @ 0x14109FE10                [alloc read buffer]
        │   │   │   ├── sub_1410A9010 @ 0x1410A9010                [ReadFile loop]
        │   │   │   └── __imp_CloseHandle @ 0x14124D788            [CloseHandle — DEPTH-5 TERMINAL]
        │   │   │
        │   │   ├── sub_140311C90 @ 0x140311C90                    [build (ptr,len) line vec]
        │   │   ├── sub_14072E810 @ 0x14072E810                    [line iterator next()]
        │   │   ├── sub_14070B280 @ 0x14070B280                    [str slice constructor]
        │   │   ├── sub_141220AD0 @ 0x141220AD0                    [Vec grow capacity]
        │   │   ├── sub_141212FB0 @ 0x141212FB0                    [memmove for insert]
        │   │   ├── sub_14033F0C0 @ 0x14033F0C0                    [join lines with "\n"]
        │   │   ├── sub_141221220 @ 0x141221220                    [String grow]
        │   │   │
        │   │   ├── win32_file_write_bytes_111 @ 0x141093710       [write patched config.toml]
        │   │   │   ├── sub_14107C990 @ 0x14107C990                [CreateFile(CREATE_ALWAYS|GENERIC_WRITE)]
        │   │   │   ├── sub_14107BF00 @ 0x14107BF00                [WriteFile loop]
        │   │   │   └── __imp_CloseHandle @ 0x14124D788            [CloseHandle — DEPTH-5 TERMINAL]
        │   │   │
        │   │   ├── sub_1410A1DF0 @ 0x1410A1DF0                    [format I/O error if write fails]
        │   │   ├── sub_140041790 @ 0x140041790                    [cleanup tmp error buf]
        │   │   └── diagnostic_paths_drop_sys @ 0x140046870        [drop path bufs]
        │   │
        │   └── error_response_encoder @ 0x140832D60               [encode Ok(()) + respond]
        │       ├── sub_14022DE20 @ 0x14022DE20                    [Display format err]
        │       ├── sub_140807390 @ 0x140807390                    [drop formatted err]
        │       ├── sub_140E30410 @ 0x140E30410                    [Display vtable dispatch]
        │       └── has_notch_invoke_resolver_respond @ 0x14080C3C0  [IPC respond]
        │           ├── _InterlockedCompareExchange8                [CAS spinlock acquire — TERMINAL]
        │           ├── sub_14124A510 @ 0x14124A510                [futex wait if contended]
        │           ├── sub_14124BF80 @ 0x14124BF80                [panic: "resolver consumed"]
        │           ├── [vtable fn @ *(*(resolver+32)+24)]         [deliver response to frontend]
        │           ├── WakeByAddressSingle @ 0x14124A5D0          [wake frontend await — DEPTH-5 TERMINAL]
        │           └── _InterlockedDecrement64 → sub_140E208A0    [Arc drop if refcount=0]
        │
        ├── [ERROR PATH: tag==3]
        │   └── has_notch_invoke_resolver_respond @ 0x14080C3C0    [IPC respond Err]
        │       └── [same terminals as above]
        │
        ├── has_notch_arc_listener_drop_loop @ 0x14033AB50         [drop listener arc slots]
        ├── sub_140001370 @ 0x140001370                            [dealloc listeners array]
        └── sub_140042650 @ 0x140042650                            [resolver cleanup]
```

---

## JSONL Edges (18 edges, depth 1-5)

```jsonl
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"sub_141212FB0","to_va":"0x141212FB0","depth":2,"role":"memcpy_invoke_ctx"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"parse_bool_from_ipc_arg_sys","to_va":"0x1402FF1A0","depth":2,"role":"arg_extract"}
{"from":"parse_bool_from_ipc_arg_sys","from_va":"0x1402FF1A0","to":"sub_140E30410","to_va":"0x140E30410","depth":3,"role":"serde_deserialize"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"toml_config_image_compat_writer_sys","to_va":"0x1407868A0","depth":2,"role":"persistence_commit","branch":"success"}
{"from":"toml_config_image_compat_writer_sys","from_va":"0x1407868A0","to":"codex_home_resolver_sys","to_va":"0x1406F29D0","depth":3,"role":"path_resolve"}
{"from":"codex_home_resolver_sys","from_va":"0x1406F29D0","to":"sub_141089D90","to_va":"0x141089D90","depth":4,"role":"env_var_read","var":"CODEX_HOME"}
{"from":"codex_home_resolver_sys","from_va":"0x1406F29D0","to":"sub_140E96CD0","to_va":"0x140E96CD0","depth":4,"role":"home_dir_fallback"}
{"from":"toml_config_image_compat_writer_sys","from_va":"0x1407868A0","to":"win32_file_read_bytes_111","to_va":"0x141093260","depth":3,"role":"file_read"}
{"from":"win32_file_read_bytes_111","from_va":"0x141093260","to":"__imp_CloseHandle","to_va":"0x14124D788","depth":4,"role":"platform_primitive","terminated_reason":"CloseHandle"}
{"from":"toml_config_image_compat_writer_sys","from_va":"0x1407868A0","to":"win32_file_write_bytes_111","to_va":"0x141093710","depth":3,"role":"file_write","writes":"image_generation = false"}
{"from":"win32_file_write_bytes_111","from_va":"0x141093710","to":"sub_14107C990","to_va":"0x14107C990","depth":4,"role":"CreateFile_GENERIC_WRITE"}
{"from":"win32_file_write_bytes_111","from_va":"0x141093710","to":"__imp_CloseHandle","to_va":"0x14124D788","depth":4,"role":"platform_primitive","terminated_reason":"CloseHandle"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"error_response_encoder","to_va":"0x140832D60","depth":2,"role":"encode_response"}
{"from":"error_response_encoder","from_va":"0x140832D60","to":"has_notch_invoke_resolver_respond","to_va":"0x14080C3C0","depth":3,"role":"ipc_respond_terminal"}
{"from":"has_notch_invoke_resolver_respond","from_va":"0x14080C3C0","to":"WakeByAddressSingle","to_va":"0x14124A5D0","depth":4,"role":"platform_primitive","terminated_reason":"WakeByAddressSingle"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"has_notch_invoke_resolver_respond","to_va":"0x14080C3C0","depth":2,"role":"ipc_respond_err","branch":"error"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"has_notch_arc_listener_drop_loop","to_va":"0x14033AB50","depth":2,"role":"listener_arc_drop"}
{"from":"set_image_compat_ipc_handler_111","from_va":"0x1400173A0","to":"sub_140042650","to_va":"0x140042650","depth":2,"role":"resolver_cleanup"}
```

---

## Terminated Leaves

| Function | VA | Reason |
|---|---|---|
| `__imp_CloseHandle` | 0x14124D788 | platform_primitive — Win32 kernel |
| `WakeByAddressSingle` | 0x14124A5D0 | platform_primitive — Win32 sync |
| `_InterlockedDecrement64` | intrinsic | platform_primitive — atomic CPU |
| `sub_14124BFE0` | 0x14124BFE0 | error_return — Rust panic handler |
| `sub_14124BF80` | 0x14124BF80 | error_return — Rust panic "resolver consumed" |

---

## Delta vs 1.0.9

- **1.0.9**: command `set_image_compat` does NOT exist (confirmed absent from 1.0.9 IDB strings + leaf dirs)
- **1.1.1 NEW**: adds `set_image_compat` with **persistent TOML mutation** — writes `image_generation = false` into `CODEX_HOME/config.toml` under `[features]` section
- **Key behavioral change**: 1.0.9 had no file I/O path for image compat; 1.1.1 adds CreateFile(CREATE_ALWAYS) write on every call
- **No in-memory AtomicBool write** observed in the decompiled body — persistence is solely via TOML file; frontend reads back via config reload
