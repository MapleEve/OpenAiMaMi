# Owner — load_mcp_servers (AiMaMi 1.1.1 win64)

session: <审计会话>
machine: <本地机器>
role: producer
sha: d24e429a
idb: <本地路径>

## Identity

| Field | Value |
|-------|-------|
| 逆向分析 name | `load_mcp_servers_owner_sys` |
| VA | `0x14001c4c0` |
| IPC command string | `"load_mcp_servers"` |
| String anchor VA | `0x1412ac10f` (xref: `0x14001c547`) |
| Called from | `tauri_ipc_main_dispatcher_sys @ 0x14000d2a0` branch @ `0x14000fb74` |
| Delta class | `integrity_recovered` vs baseline 1.0.9 |

## Role

This function is the Tauri IPC command handler for `load_mcp_servers`. It is the sole owner of the `"load_mcp_servers"` trace string and the entry point for all downstream logic. Its primary new behaviour in 1.1.1 (relative to 1.0.9) is persisting a full skill snapshot to disk after every successful query — a capability that did not exist in 1.0.9.

## Call flow (high-level)

```
load_mcp_servers_owner_sys (0x14001c4c0)
  ├── [COPY] sub_141212FB0: memcpy repo_str (520 B) + path_str (400 B) from ctx
  ├── [LOCK] pending_auto_switch_state_lock_acquire_111 (0x14006edc0)
  │     locked → query_installed_skills_with_repo_111 (0x141214620)
  │     tag≠6 (Err) → error fast-path → sub_14080C3C0 (IPC resolver)
  ├── [DELTA] load_mcp_servers_write_snapshot_111 (0x1401c42c0)   ← NEW in 1.1.1
  ├── [DISPATCH] load_mcp_servers_result_dispatch_111 (0x140831bd0)
  │     └── sub_14080C3C0 (0x14080c3c0) IPC resolver vtable+24
  └── [CLEANUP] has_notch_arc_listener_drop_loop (0x14033ab50); free vec stride=96
```

## Arg contract

Caller passes single pointer `ctx` (a1). Stack layout extracted from decompile:

| Offset | Size | Content |
|--------|------|---------|
| +0 | 520 | repo path string (copied to v13) |
| +520 | 400 | base path string (copied to v15) |
| +880 | 16 | result oword (used in error fast-path) |
| +896 | 8 | err_b |
| +920 | 16 | writtenAt oword (dropped at cleanup, stride=96 per element) |
| +936 | 8 | version/context count |

## IDB write-back

- Renamed to `load_mcp_servers_owner_sys` (was `load_mcp_servers_handler_111`)
- Comment at `0x14001c4c0`: `gold-leaf for load_mcp_servers; sha d24e429a; session <审计会话>; not gate promotion`
- `<工具调用>` confirmed ok in this session
