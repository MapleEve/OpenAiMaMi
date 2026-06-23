# upsert_mcp_server — Owner Record (Win64)
## session: <审计会话> | machine: <本地机器>
## role: producer | sha: d24e429a | gate_tier: full_gold_leaf

---

## Identity

| Field | Value |
|---|---|
| **Symbol** | `upsert_mcp_server_111` |
| **VA** | `0x140019720` |
| **Size** | `0xD3C` (3388 bytes) |
| **Platform** | WIN64 |
| **IPC command string** | `"upsert_mcp_server"` @ `0x1412AC11F` |
| **Delta class** | `integrity_recovered` vs 1.0.9 |
| **IDB path** | `<本地路径>|

---

## Role

IPC command handler for `upsert_mcp_server`. Receives a Tauri IPC payload, parses 9 DTO fields, applies a new 1.1.1 pending-auto-switch gate, validates the repo param against the installed skill store, then calls the blocking TOML writer to upsert a `[mcp_servers.<name>]` section in the codex-router config file.

---

## DTO Fields (serde key parse order)

| Key | Rust Type | String VA |
|---|---|---|
| `repo` | `String` | `0x1412AC6D1` |
| `name` | `String` | `0x1412AC732` |
| `transport` | `String` | `0x1412AC736` |
| `enabled` | `bool` | `0x1412AC720` |
| `command` | `Option<String>` | `0x1412AC73F` |
| `args` | `Option<Vec<String>>` | `0x1412AC746` |
| `url` | `Option<String>` | `0x1412AC74A` |
| `headers` | `Option<HashMap<String,String>>` | `0x1412AC74D` |
| `environment` | `Option<HashMap<String,String>>` | `0x1412AC754` |

DTO field count: 9. Unchanged vs 1.0.9 (confirmed by body-compare).

---

## Delta vs 1.0.9

| Change | Detail |
|---|---|
| `pending_auto_switch_state_lock_acquire_111` | NEW — futex gate added before skill store query; blocks handler if pending auto-switch is active |
| `query_installed_skills_with_repo_111` | NEW — repo validation via skill store before write; returns Result<Vec<InstalledSkill>> |
| `set_codex_router_enabled_blocking_body_win_sys` | MODIFIED — now calls toml section write + parse_and_remove on separate paths |
| `mcp_config_toml_parse_and_remove_111` | NEW in upsert path — parses and removes matching entry from MCP config TOML |
| DTO fields | UNCHANGED |
| IPC command string | UNCHANGED |

---

## Side Effects

1. Acquires pending-auto-switch futex spinlock for the duration of the write
2. Reads installed skill store via `skill_store_get_all_111`
3. Writes/rewrites `[mcp_servers.<name>]` section in codex-router TOML via `relay_atomic_write_leaf_sys`
4. Parses and removes matching entry from MCP config TOML via `mcp_config_toml_parse_and_remove_111`

---

## Callee Summary (depth 1)

| Symbol | VA | Status |
|---|---|---|
| `pending_auto_switch_state_lock_acquire_111` | `0x14006EDC0` | DELTA:NEW |
| `query_installed_skills_with_repo_111` | `0x141214620` | DELTA:NEW |
| `parse_bool_from_ipc_arg_sys` | `0x1402FF1A0` | unchanged |
| `sub_1402FBB30` (Option\<String\>) | `0x1402FBB30` | unchanged |
| `sub_140360DA0` (Option\<Vec\<String\>\>) | `0x140360DA0` | unchanged |
| `sub_1407CB570` (Option\<HashMap\>) | `0x1407CB570` | unchanged |
| `set_codex_router_enabled_blocking_body_win_sys` | `0x1401C59F0` | DELTA:MODIFIED |
| `has_notch_invoke_resolver_respond` | `0x14080C3C0` | unchanged (IPC error) |
| `sub_140830710` | `0x140830710` | unchanged (IPC ok) |

---

## IDB Annotations

- Function renamed: `upsert_mcp_server_111` at `0x140019720`
- Comment set at owner VA: see `gate-report.json` for full comment text
- IDB saved: 2026-06-18

---

## Note

`remove_skill_parse_id_param_111` (`0x1402FED40`) appears in callees list — this is a reused Option\<String\> parser (same underlying sub called for `name`, `command`, `url`); not a meaningful delta.
