# set_mcp_server_enabled — Owner Record (Windows x64)
session: <审计会话>
platform: windows-x64
binary: AiMaMi 1.1.1 win64.exe
idb: <本地路径>
sha: d24e429a

## Owner Function

| Field | Value |
|---|---|
| name | `set_mcp_server_enabled_handler_111` |
| VA | `0x14001dcc0` |
| size | 0x5CE (1486 bytes) |
| 逆向分析 rename | done (<审计会话>) |
| 逆向分析 comment | "gold-leaf for set_mcp_server_enabled; sha d24e429a; session <审计会话>; not gate promotion" |
| decompile status | full body recovered |

## Core Function

| Field | Value |
|---|---|
| name | `set_mcp_server_enabled_core_111` |
| VA | `0x1401c6c70` |
| size | 0x796 (1942 bytes) |
| 逆向分析 comment | set (<审计会话>) |
| decompile status | full body recovered |

## Key Callees Summary

| Name | VA | Size | Role | Delta? |
|---|---|---|---|---|
| `pending_auto_switch_state_lock_acquire_111` | 0x14006edc0 | 0x1E7 | Guard: block if auto-switch pending | NEW vs 1.0.9 |
| `query_installed_skills_with_repo_111` | 0x141214620 | 0xBF | Validate repo param in skills store | NEW vs 1.0.9 |
| `sub_1402FED40` (remove_skill_parse_id_param_111) | 0x1402FED40 | - | Parse "name" string IPC param | same |
| `parse_bool_from_ipc_arg_sys` | 0x1402FF1A0 | - | Parse "enabled" bool IPC param | same |
| `set_mcp_server_enabled_core_111` | 0x1401c6c70 | 0x796 | Core: RwLock + rewrite + persist | same (internals changed) |
| `mcp_server_find_and_rewrite_toml_111` | 0x140680220 | 0x2B8 | Find server by name, call section writer | same |
| `mcp_config_toml_parse_and_remove_111` | 0x1406790d0 | 0x1DE2 | Parse codex-router TOML | same |
| `set_codex_router_toml_section_write_win_sys` | 0x14067CA20 | 0x1D44 | Write updated TOML section (markers+splice) | same |
| `relay_atomic_write_leaf_with_newline_111` | 0x14067BE90 | 0x14E | Normalize newline, delegate to atomic write | same |
| `relay_atomic_write_leaf_sys` | 0x140504310 | 0x48F | FS atomic write leaf (pid+uuid temp+rename) | same |
| `mcp_server_list_build_toml_sections_111` | 0x14067F850 | 0x46A | Build TOML section string list | same |
| `sub_140213C70` | 0x140213C70 | ~0x80 | Build McpConfigPayload (tag=0x6B2F) | same |
| `usage_fetch_error_drop_111` | 0x1401D4C70 | - | Drop error value | same |
| `sub_1410B1930` | 0x1410B1930 | - | Poison lock panic handler | noise |

## IDB Inline Evidence

Comments written to IDB:
- `0x14001dcc0` — handler
- `0x1401c6c70` — core
- `0x140680220` — find_and_rewrite
- `0x14067CA20` — section_write
- `0x14006edc0` — pending_auto_switch lock (gold-leaf session)
- `0x141214620` — query_installed_skills (gold-leaf session)

idb_save: confirmed (<审计会话> + <审计会话>)
