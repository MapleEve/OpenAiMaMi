# load_usage_analytics — IPC Interface (Windows x64)
# session: wf-aimami111-win-samedepth-patch-20260619

## IPC Registration
- Command string: `"load_usage_analytics"` (len=20) @ 0x1412ac3eb
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Owner VA: 0x14001B850 (sub_14001B850)

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo identifier |
| ~~range~~ | — | — | **NOT accepted** — unlike other analytics; direct data collection |

## Response
- Builder: `sub_140836690` @ 0x140836690 (usage analytics response builder)
- Error path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON; response is 176-byte struct (larger than other analytics)

## Side Effects (CRITICAL — UNIQUE AMONG ANALYTICS)
| Side Effect | Function | VA |
|---|---|---|
| Relay directory creation | relay_config_check_parent_dirs_sys | 0x1406F2870 |
| MCP snapshot read | load_mcp_servers_read_existing_snapshot_111 | 0x1401BF000 |
| Skill JSON serialization | serialize_skill_snapshot_json_111 | 0x140197420 |
| **File WRITE (CreateFileW)** | win32_file_write_bytes_111 | 0x141093710 |

## Delta vs 1.0.9
- NEW_IN_1.1.1: command did not exist in 1.0.9
- L1 guard: pending_auto_switch mutex (0x14006EDC0) — new in 1.1.1
- L1 gate: skills repo validation (0x141214620) — new in 1.1.1
- **UNIQUE**: No range param — calls sub_1401C9EF0 directly (all other analytics parse range)
- **UNIQUE**: Has file write side effects (CreateFileW via win32_file_write_bytes_111)
- Sub_1401C9EF0: relay dir create + MCP snapshot read + skill JSON serialize + CreateFileW write
