# Interface — set_mcp_server_enabled (AiMaMi 1.1.1 macos-arm64)

**session**: <审计会话>
**produced_at**: 2026-06-17
**source_binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## Command Name

`set_mcp_server_enabled`

## ArgKeys

| key | type | required | source |
|-----|------|----------|--------|
| `name` | String | yes | dispatcher v26[3]=4, "name" from packed blob @0x10114a0d8 |
| `enabled` | bool | yes | dispatcher v26[3]=7, &0x1011483c3 bytes: 65 6e 61 62 6c 65 64 = "enabled" |

**argObject**: `{ name: string, enabled: boolean }`

## Response

`CoreEnvelope<Vec<McpServerSummary>>`

- **Ok discriminant**: `0x8000000000000000`
- **Ok payload**: `Vec<McpServerSummary>` — reloaded full MCP server list after toggle
- **McpServerSummary stride**: 224 bytes
- **Err discriminant**: discriminant ≠ `0x8000000000000000`
- **Err payload**: formatted error string

## Error Paths

| condition | error string | addr |
|-----------|-------------|------|
| Server not found by name | `"MCP server not found: <name>"` | 0x1010b6a09 (22B prefix len, text 22B) |
| Mutex poisoned | formatted panic string | panic path |
| load_mcp_servers FS error | CoreError propagated from fs::read_to_string | --- |
| upsert_mcp_server write error | CoreError from write_atomic | --- |

## Side Effects

1. **TOML config.toml write** (durable): `save_config_text` → `write_atomic` (0x10041e960)
   - atomic rename-based write (same pattern as remove_mcp_server/reorder_relay_providers)
   - respects `# <<< aimami-relay managed` sentinel comment boundary in `insert_mcp_block`
2. **No HTTP**: pure local FS mutation
3. **No process spawn**: no sidecar call
4. **No Tauri event emit**: no event emit observed in call tree

## Threading Model

- `std::sys::pal::unix::sync::mutex::Mutex::lock` (0x100f2e7a0) before core dispatch
- `Mutex::unlock` (0x100f2e7c0) after response built
- `OnceBox<T>::initialize` for lazy state init
- **Purely synchronous** — no async/spawn/tokio

## Call Chain Summary

```
IPC dispatcher (0x100312de0)
  → StateManager::try_get [AppState]
  → D::from_command [name: String]
  → D::from_command [enabled: bool]
  → cmd_handler (0x10072bb90)
      → Mutex::lock
      → core::set_mcp_server_enabled (0x1005a3760)
          → load_mcp_servers → fs::read_to_string [FS READ]
          → memcmp [name match]
          → McpServerSummary::clone
          → upsert_mcp_server (0x1005a0d80)
              → load_config_text
              → parse_mcp_document
              → insert_mcp_block [sentinel-aware]
              → save_config_text
                  → write_atomic (0x10041e960) [FS WRITE — terminal]
      → load_mcp_servers [reload for response]
      → CoreEnvelope::ok
      → Mutex::unlock
  → InvokeResolver::respond / return_result
```

## Delta vs 1.0.9

| aspect | 1.0.9 | 1.1.1 |
|--------|-------|-------|
| cmd_handler VA | 0x10015d360 | 0x10072bb90 |
| core impl VA | (within mcp module) | 0x1005a3760 |
| argKeys | ["name", "enabled"] | ["name", "enabled"] ← unchanged |
| response type | CoreEnvelope<Vec<McpServerSummary>> | same |
| side effect | write_atomic TOML | same |
| threading | sync mutex | same |
| module | commands::mcp | commands::mcp ← unchanged |
| behavioral contract | baseline | **identical** — diff_reversed with no behavior change |

## Platform Scope

- **macOS-arm64**: Accepted (this evidence)
- **Windows-x64**: Unknown — requires Windows IDB; do not extrapolate
- **dim6 test/acceptance**: Unknown — C5 implementation side

## Accepted Unknowns

- dim5_win: Windows platform behavior (non-blocking, requires separate Win IDB session)
- dim6: test/acceptance mapping (C5 implementation responsibility)
- McpServerSummary exact field layout beyond name_ptr/name_len (non-blocking)
- enabled flag byte offset in struct (inferred from param passing; non-blocking for implementation)
