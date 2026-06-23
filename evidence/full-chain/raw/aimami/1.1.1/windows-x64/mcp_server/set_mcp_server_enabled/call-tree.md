# set_mcp_server_enabled — Call Tree (Windows x64, Gold Leaf)
session: <审计会话>
delta_class: integrity_recovered
depth_reached: 8 (extended from 6; additional callee bodies recovered in gold-leaf)
terminated_reason: relay_atomic_write_leaf_sys is FS write terminal leaf; Win32 IO primitives below are noise

```
set_mcp_server_enabled_handler_111  [0x14001dcc0]  size=0x5CE
│  IPC params: { name:str, enabled:bool, repo:str }
│  string refs: aSetMcpServerEn@0x1412AC130, aRepo@0x1412AC6D1, aName_0@0x1412AC732, aEnabled@0x1412AC720
│
├── sub_141212FB0  (IPC context copy, twice: request+session blocks)  [noise]
│
├── pending_auto_switch_state_lock_acquire_111  [0x14006edc0]  size=0x1E7  [NEW vs 1.0.9]
│   │  Purpose: Windows futex guard — block if auto-switch pending
│   │  Returns 0 (proceed) or non-zero (blocked → handler returns IPC error)
│   │
│   ├── _InterlockedCompareExchange8  (CAS 0→1 on mutex byte)  [EXTERNAL/intrinsic]
│   ├── sub_14124A510  (WaitOnAddress spinwait loop)
│   ├── sub_14124B1D0  (Rust threading helper, multi-threaded path)
│   ├── off_141899DC0  (threading mode flag: 0=single, non-zero=multi)
│   ├── xmmword_14124E090/A0  (SIMD sentinel values for hashmap slot scan)
│   ├── vtable dispatch @ offset +24  (pending-state handler, per pending_state entry)
│   │   └── [vtable dispatch: class-specific handler for each pending auto-switch entry]
│   └── WakeByAddressSingle  [EXTERNAL, synchapi.dll]  @ 0x14124A5D0
│
├── query_installed_skills_with_repo_111  [0x141214620]  size=0xBF  [NEW vs 1.0.9]
│   │  Purpose: Look up MCP/skill entry by repo string in skills store
│   │  Returns Result with disc=3 (some) or propagates skill_store error
│   │
│   ├── sub_1410A1DF0  (string-into-result formatter, called twice)
│   ├── unk_1412B0057  (lookup spec / key template)
│   ├── sub_141222DD0  (build skill lookup key)
│   ├── skill_store_get_all_111  [0x14106D960]  (fetch all installed skills)
│   ├── sub_140082100  (standard drop fn vtable)
│   └── sub_14106D970  (result consumer / Option extractor)
│
├── sub_1402FED40  (= remove_skill_parse_id_param_111 — parse "name" string IPC param)
│
├── parse_bool_from_ipc_arg_sys  [0x1402FF1A0]  (parse "enabled" bool IPC param)
│
├── set_mcp_server_enabled_core_111  [0x1401c6c70]  size=0x796
│   │  Side-effects: RwLock acquire, TOML read×2, TOML write (atomic), RwLock release
│   │
│   ├── _InterlockedCompareExchange8  (RwLock acquire CAS)  [EXTERNAL/intrinsic]
│   ├── sub_14124A510  (WaitOnAddress spinwait)
│   ├── sub_14124B1D0  (Rust threading helper)
│   ├── off_141899DC0  (threading mode flag)
│   │
│   ├── sub_1410B1930  (poison-guard panic path)  [NOISE — only if Mutex poisoned]
│   │   └── aPoisonedLockAn@0x1412E6BB3 = "poisoned lock: another task failed inside"
│   │
│   ├── mcp_server_find_and_rewrite_toml_111  [0x140680220]  size=0x2B8  depth=3
│   │   │  Purpose: Find server by name in TOML, call section writer
│   │   │
│   │   ├── mcp_config_toml_parse_and_remove_111  [0x1406790d0]  size=0x1DE2  depth=4
│   │   │   │  Purpose: Parse codex-router TOML, return McpServerList
│   │   │   ├── snooze_file_open_111  [0x14108C6F0]  (retry-on-lock file open)
│   │   │   ├── win32_file_read_bytes_111  [0x141093260]  (ReadFile wrapper)
│   │   │   ├── sub_141077010  (TOML parser — section/key tokenizer)
│   │   │   └── sub_141095530  (error context builder)
│   │   │
│   │   ├── sub_141213640  (strcmp/memcmp — name length + content match)
│   │   ├── sub_140729FE0  (extract/clone McpServer entry from list)
│   │   ├── sub_1410A1DF0  (string-into-result formatter — not-found error path)
│   │   ├── byte_1412E92F8  (error message data: "server not found")
│   │   ├── sub_140082100  (standard drop fn vtable)
│   │   │
│   │   └── set_codex_router_toml_section_write_win_sys  [0x14067CA20]  size=0x1D44  depth=4
│   │       │  Purpose: Open TOML, scan markers, splice sections, atomic write
│   │       │  Marker strings confirmed:
│   │       │    "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)" @0x1412E941C
│   │       │    "# <<< aimami-relay codex-router top end"                          @0x1412EA00D
│   │       │    "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)"          @0x1412E9348
│   │       │    "# <<< aimami-relay managed end"                                   @0x1412E9FCB
│   │       │    "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)"     @0x1412E93E0
│   │       │    "# <<< aimami-relay managed end (top)"                             @0x1412E9FE9
│   │       │
│   │       ├── snooze_file_open_111  [0x14108C6F0]  (same as above)
│   │       ├── win32_file_read_bytes_111  [0x141093260]  (ReadFile)
│   │       ├── sub_1402F87A0  (close file handle on new-file path)
│   │       ├── mcp_server_list_build_toml_sections_111  [0x14067F850]  size=0x46A  depth=5
│   │       │   └── (builds TOML section string list: [mcp_servers.<name>] entries
│   │       │        with command/enabled/env/headers fields)
│   │       ├── sub_14070B280  (entry-to-TOML formatter: env/headers expansion)
│   │       ├── sub_140311F60  (string list builder)
│   │       ├── sub_14033EB00  (serialize section list to string buffer)
│   │       ├── sub_141213640  (strcmp — marker line detection, len-dispatch)
│   │       ├── sub_1403654F0  (line splitter / list-from-bytes)
│   │       ├── sub_140678BF0  (section splicer — insert new list into marker bounds)
│   │       ├── sub_1403677C0  (section range calculator)
│   │       ├── sub_140624F90  (hash function for hashmap slot lookup)
│   │       │
│   │       ├── relay_atomic_write_leaf_with_newline_111  [0x14067BE90]  size=0x14E  depth=6
│   │       │   │  Terminal wrapper: appends '\n' if content missing, delegates to atomic write
│   │       │   └── relay_atomic_write_leaf_sys  [0x140504310]  size=0x48F  depth=7  ← FS LEAF
│   │       │       │  Module: codexmate_lib::core::relay::atomic_write
│   │       │       │  Error: "atomic write: missing parent" @0x1412D9476
│   │       │       │
│   │       │       ├── sub_14107A3E0  (validate parent dir exists)
│   │       │       ├── sub_141082B80  (mkdir -p equivalent)
│   │       │       ├── sub_14107A5E0  (get temp dir path)
│   │       │       ├── sub_1410A9010  (path joiner)
│   │       │       ├── GetCurrentProcessId  [EXTERNAL, kernel32]  depth=8 ← NOISE FLOOR
│   │       │       ├── uuid_v4_generate_raw_sys  [0x140F5A860]  (uuid4 for temp name)
│   │       │       ├── sub_141087E20  (CreateFile equivalent: open temp for write)
│   │       │       ├── sub_141097C30  (WriteFile loop: handles partial writes)
│   │       │       ├── CloseHandle  [EXTERNAL, kernel32]  depth=8 ← NOISE FLOOR
│   │       │       ├── sub_140504130  (MoveFileEx / atomic rename)
│   │       │       ├── snooze_file_delete_111  [0x14108BF60]  (delete temp on error/cleanup)
│   │       │       ├── sub_1403A6670  (final handle cleanup on rename)
│   │       │       ├── sub_14107AD30  (handle close helper)
│   │       │       ├── off_141899A88  (verbosity flag for structured log)
│   │       │       └── sub_14031F0B0  (structured log emitter: "codexmate_lib::core::relay::atomic_write")
│   │       │
│   │       └── mcp_config_toml_parse_and_remove_111  [0x1406790d0]  (second parse, after write)
│   │           (same callee subtree as above — re-parse to build return payload)
│   │
│   ├── sub_140243FC0  (error discriminant builder — Err encoding)
│   ├── mcp_config_toml_parse_and_remove_111  [0x1406790d0]  (second call: Ok path)
│   ├── sub_140213C70  (build McpConfigPayload — tag=0x6B2F, field="enabled\0")
│   ├── sub_141095530  (error context builder)
│   ├── usage_fetch_error_drop_111  [0x1401D4C70]  (drop error value)
│   ├── sub_1401D5810  (drop McpServer entry)
│   ├── sub_141212FB0  (memcpy 0x150 bytes: McpConfigPayload → out)
│   └── WakeByAddressSingle  [EXTERNAL, synchapi.dll]  (RwLock release)
│
├── sub_14080C3C0  (= has_notch_invoke_resolver_respond — IPC error response)
│   (called on all error paths: pending_lock, repo_not_found, bad_name, bad_enabled)
│
├── sub_140830710  (IPC ok response serializer)
│
└── sub_140042650  (IPC context finalizer / cleanup)
    └── sub_14033AB50  (= has_notch_arc_listener_drop_loop — Arc drop loop)
```

## Depth Summary

| Depth | Layer |
|---|---|
| 1 | `set_mcp_server_enabled_handler_111` (owner) |
| 2 | `pending_auto_switch_state_lock_acquire_111` / `query_installed_skills_with_repo_111` / `set_mcp_server_enabled_core_111` |
| 3 | `mcp_server_find_and_rewrite_toml_111` |
| 4 | `mcp_config_toml_parse_and_remove_111` / `set_codex_router_toml_section_write_win_sys` |
| 5 | `mcp_server_list_build_toml_sections_111` / `snooze_file_open_111` / `win32_file_read_bytes_111` |
| 6 | `relay_atomic_write_leaf_with_newline_111` |
| 7 | `relay_atomic_write_leaf_sys` ← FS write leaf |
| 8 | `GetCurrentProcessId`, `CloseHandle`, `WriteFile` ← Win32 noise floor |

## Terminated Reason

`relay_atomic_write_leaf_sys` is the filesystem write terminal leaf. No further app-level
callees touch business logic below it. Win32 IO primitives (CreateFile/WriteFile/MoveFileEx/
CloseHandle) at depth 8 are OS noise — not counted toward call-tree depth requirement.
Total app-level depth: **7** (depth ≥ 5 requirement satisfied).
