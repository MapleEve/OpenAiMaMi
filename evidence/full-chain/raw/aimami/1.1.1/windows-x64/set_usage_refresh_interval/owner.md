# Owner — set_usage_refresh_interval (AiMaMi 1.1.1 Windows x64)
<!-- session=<审计会话> | machine=<本地机器> | delta_class=integrity_recovered -->
<!-- produced=2026-06-18 | sha=d24e429a -->

| 属性 | 值 |
|---|---|
| IPC command | `set_usage_refresh_interval` |
| Owner function | `set_usage_refresh_interval_owner_sys` |
| VA | `0x140018760` |
| Size | 0x5DE bytes (~1502 bytes) |
| String anchor | `"set_usage_refresh_interval"` @ `0x1412ac243` |
| xref-from dispatcher | `tauri_ipc_main_dispatcher_sys` (`0x14000D2A0`) @ `0x14000FE91` |
| delta_class vs 1.0.9 | `integrity_recovered` — 4 new callees forming complete interval-write pipeline absent in 1.0.9 |
| gate_tier | `full_leaf` |

## Delta vs 1.0.9

In 1.0.9 this command existed but was a stub — no disk persistence, no global-cache notify. In 1.1.1 the owner gained 4 new app-level callees:

| New callee | VA | Role |
|---|---|---|
| `query_installed_skills_with_repo_111` | `0x141214620` | Pre-flight: enumerate installed skills (NEW guard) |
| `hotspot_interval_parse_and_write_sys_111` | `0x1401B2600` | Parse interval enum + write 5-field hotspot JSON to disk |
| `interval_str_to_seconds_111` | `0x1401BCE00` | Pure converter: `30s→30, 1m→60, 3m→180, 5m→300` |
| `usage_refresh_notify_global_state_111` | `0x14078BF40` | Write `qword_1418930D0` cache + `WakeByAddressSingle` notify |

Side effects added vs 1.0.9:
1. **Disk write**: hotspot config JSON (5 fields) via `hotspot_config_serialize_5field_json_and_write_sys` → `hotspot_config_file_write_bytes_sys` → `win32_file_write_bytes_111`
2. **Global state update**: `qword_1418930D0` (interval seconds cache) + `WakeByAddressSingle(&byte_1418930C8)` wakes polling threads

## IDB annotations
- Renames applied: `set_usage_refresh_interval_owner_sys`, `hotspot_config_serialize_5field_json_and_write_sys`, `interval_str_to_seconds_111`, `usage_refresh_notify_global_state_111`, `hotspot_config_file_write_bytes_sys`
- Comments set at all 5 VAs
- IDB saved: `<本地路径>
