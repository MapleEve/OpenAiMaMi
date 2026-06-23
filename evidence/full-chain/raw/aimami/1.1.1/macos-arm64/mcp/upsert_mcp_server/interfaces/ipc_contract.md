# IPC Contract: upsert_mcp_server (AiMaMi 1.1.1 macOS arm64)

## Session
<审计会话>

## Tauri Command Entry
- Symbol: `codexmate_lib::commands::mcp::upsert_mcp_server`
- VA: `0x10072ae00`
- Protected by: OnceBox-initialized global Mutex (Unix pthread mutex)

## Input Parameters (from commands layer deserialization)
The commands function receives 10 args; key DTO fields recovered:
- `a4` → `_QWORD*` McpServerConfig (name/url/command/args/env/headers/enabled/type)
- `a5` → `char` (bool flag, likely "update_if_exists" or "create_missing")
- `a6` → `__int64*` config path (ptr+len via Display formatter → path string)
- `a7..a10` → Vec/HashMap inputs that are freed after call

## Return Type
`CoreEnvelope<McpServerSummary>` — tagged union:
- Success variant: tag=`0` or non-sentinel, followed by McpServerSummary (224 bytes)
- Error variant: tag=`0x8000000000000000` (sentinel), followed by CoreError Display string

## Core Function Signature (recovered)
```rust
fn upsert_mcp_server(
    config_path: &Path,
    server: McpServerConfig,  // name, type, url/command, args, env, headers, enabled
) -> Result<McpServerSummary, CoreError>
```

## Side Effects
1. Reads `<config_path>/config.toml` (via std::fs::read_to_string)
2. Parses TOML line-by-line into section HashMap
3. Builds replacement TOML lines for the server entry
4. Splices new lines into existing document preserving relay-managed blocks
5. Writes updated config atomically: tmp file → sync_data → rename
6. Calls sync_parent_dir after successful rename
7. Reloads all MCP servers to return updated summary

## Error Paths
- `load_config_text` failure → CoreError propagated
- `insert_mcp_block` / splice failure → CoreError propagated
- `save_config_text` / write_atomic failure → CoreError propagated
- `load_mcp_servers` failure after successful write → CoreError propagated
- All intermediate allocations freed on both success and error paths (confirmed by drop analysis)
