# upsert_mcp_server — Win64 Call Tree
## session: <审计会话> | machine: <本地机器>
## delta_class: integrity_recovered | depth_reached: 5

---

## Call Tree

```
upsert_mcp_server_111 @ 0x140019720  [depth=0, owner]
│
├─ pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0  [depth=1, DELTA:NEW]
│   ├─ sub_14124A510 @ 0x14124A510  [spin-wait, terminated:stdlib]
│   ├─ sub_14124B1D0 @ 0x14124B1D0  [lock state check, terminated:stdlib]
│   ├─ WakeByAddressSingle @ 0x14124A5D0  [terminated:win32-api]
│   └─ sub_14124BFE0 @ 0x14124BFE0  [panic/unwrap handler, terminated:stdlib]
│
├─ query_installed_skills_with_repo_111 @ 0x141214620  [depth=1, DELTA:NEW]
│   ├─ skill_store_get_all_111 @ 0x14106D960  [depth=2, terminated:thunk-8B]
│   ├─ sub_1410A1DF0 @ 0x1410A1DF0  [future combinator, terminated:runtime]
│   ├─ sub_141222DD0 @ 0x141222DD0  [task handle create, terminated:runtime]
│   └─ sub_14106D970 @ 0x14106D970  [task handle drop, terminated:runtime]
│
├─ parse_bool_from_ipc_arg_sys @ 0x1402FF1A0  [depth=1, terminated:sys]
├─ sub_1402FBB30 @ 0x1402FBB30  [Option<String> parser, terminated:sys]
├─ sub_140360DA0 @ 0x140360DA0  [Option<Vec<String>> parser, terminated:sys]
├─ sub_1407CB570 @ 0x1407CB570  [Option<HashMap> parser, terminated:sys]
│
├─ set_codex_router_enabled_blocking_body_win_sys @ 0x1401C59F0  [depth=1, DELTA:MODIFIED]
│   │
│   ├─ sub_14124A510 @ 0x14124A510  [spinlock acquire, terminated:stdlib]
│   ├─ sub_14124B1D0 @ 0x14124B1D0  [lock state, terminated:stdlib]
│   ├─ WakeByAddressSingle @ 0x14124A5D0  [terminated:win32-api]
│   ├─ sub_1410B1930 @ 0x1410B1930  [RwLock poison check, terminated:stdlib]
│   ├─ sub_140082DE0 @ 0x140082DE0  [Option<HashMap> drop, terminated:alloc]
│   │
│   ├─ [DELTA:NEW] set_codex_router_toml_section_write_win_sys @ 0x14067CA20  [depth=2]
│   │   ├─ snooze_file_open_111 @ 0x14108C6F0  [depth=3, terminated:sys-open]
│   │   ├─ win32_file_read_bytes_111 @ 0x141093260  [depth=3, terminated:sys-read]
│   │   ├─ mcp_server_list_build_toml_sections_111 @ 0x14067F850  [depth=3]
│   │   │   ├─ sub_1403085F0  [string builder, terminated:stdlib]
│   │   │   ├─ sub_141077010  [format helper, terminated:stdlib]
│   │   │   ├─ sub_14067FE50  [section formatter, terminated:internal]
│   │   │   ├─ sub_14070B280  [string slice helper, terminated:stdlib]
│   │   │   ├─ sub_141213640  [strcmp, terminated:stdlib]
│   │   │   └─ sub_140001370 / sub_140001360  [dealloc/alloc, terminated:alloc]
│   │   ├─ sub_140678970 @ 0x140678970  [scratch buf init, terminated:internal]
│   │   ├─ sub_141213640 @ 0x141213640  [strcmp for marker match, terminated:stdlib]
│   │   ├─ sub_1403654F0 @ 0x1403654F0  [splice helper, terminated:internal]
│   │   ├─ sub_140678BF0 @ 0x140678BF0  [section replace, terminated:internal]
│   │   ├─ relay_atomic_write_leaf_with_newline_111 @ 0x14067BE90  [depth=3]
│   │   │   └─ relay_atomic_write_leaf_sys @ 0x140504310  [depth=4, terminated:sys-write-leaf]
│   │   └─ mcp_config_toml_parse_and_remove_111 @ 0x1406790D0  [depth=3, DELTA:NEW path]
│   │       ├─ snooze_file_open_111 @ 0x14108C6F0  [depth=4, terminated:sys-open]
│   │       ├─ win32_file_read_bytes_111 @ 0x141093260  [depth=4, terminated:sys-read]
│   │       └─ sub_141077010 / sub_141095530  [terminated:stdlib]
│   │
│   ├─ [DELTA:NEW] mcp_config_toml_parse_and_remove_111 @ 0x1406790D0  [depth=2, second call]
│   │   (same as above — called again directly from blocking body on separate path)
│   │
│   ├─ usage_fetch_error_drop_111 @ 0x1401D4C70  [terminated:internal]
│   ├─ sub_1401D5810 @ 0x1401D5810  [drop helper, terminated:internal]
│   └─ sub_140213C70 @ 0x140213C70  [merge results, terminated:internal]
│
├─ sub_14080C3C0 @ 0x14080C3C0  [IPC error vtable dispatch, terminated:sys]
├─ sub_140830710 @ 0x140830710  [IPC ok response, terminated:sys]
└─ sub_140001370 / sub_140001360  [dealloc/alloc, terminated:alloc]
```

---

## Terminated Reason Legend

| terminated: | Meaning |
|---|---|
| `thunk-8B` | 8-byte trampoline, no app-level callees |
| `sys-write-leaf` | `relay_atomic_write_leaf_sys` — ultimate file write, platform syscall wrapper |
| `sys-open` | `snooze_file_open_111` — file open with retry/wait |
| `sys-read` | `win32_file_read_bytes_111` — Win32 file read |
| `win32-api` | Windows API (WakeByAddressSingle etc.) |
| `stdlib` | Rust stdlib / runtime internal |
| `alloc` | Global allocator (sub_140001370 dealloc / sub_140001360 alloc) |
| `runtime` | Async/Tokio runtime internal |
| `internal` | App-internal helper already fully named/analyzed |
| `sys` | IPC system layer (parser, resolver) |

---

## Depth Reached

- Owner: depth 0
- New gate callees: depth 1–2
- TOML section writer chain: depth 1–4
- Leaf `relay_atomic_write_leaf_sys`: depth 4 — **terminated**
- `skill_store_get_all_111`: depth 2 — **terminated** (thunk)

Maximum depth reached: **5** (counting from owner = 0)
Termination criterion met: all branches either hit known-named system leaves or stdlib.
