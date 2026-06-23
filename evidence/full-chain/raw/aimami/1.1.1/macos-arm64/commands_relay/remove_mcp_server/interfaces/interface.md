# remove_mcp_server — Interface / DTO / Error / Side-Effect

## ArgKeys

- `name`: String — name of the MCP server to remove (required)
- argObject: `{name: t}` — single required field
- IPC invocation: `invoke("remove_mcp_server", {name})`

## Response

- type: `CoreEnvelope<Vec<McpServerSummary>>`
- Ok discriminant: `0x8000000000000000` (i64 MSB set)
- Ok body: `Vec<McpServerSummary>` — updated list after removal; memcpy 0x88 (136B) envelope
- McpServerSummary stride: 224B (confirmed from drop_in_place loop `v17 += 224`)
- McpServerSummary fields: not directly extracted from this function; consistent with list_mcp_servers response struct

## Error Paths

| path | trigger | format |
|------|---------|--------|
| mutex poisoned | std::sys::pal::unix::sync::mutex poisoned flag set | CoreError fmt → String via Display |
| load_config_text IO error | config file read fails (metadata/read_to_string) | IoError string, Err discriminant |
| name not found | hash lookup misses (entry absent in HashMap) | format_inner: "name not found or similar" (format string @0x1010B6A09 + name) |
| save_config_text / atomic_write error | OpenOptions open/write_all/sync_data/rename fails | IoError string |

## Side Effects

- Removes matched `[[<name>]]` section (and its key lines) from TOML config file
- Atomic durable write: `load→parse→splice→rejoin→write_atomic(tmpfile→rename→fsync)`
- No HTTP calls, no sidecar, no registry, no database
- Config path determined at runtime from AppState (v39[9]=path_ptr, v39[10]=path_len)
- Atomic temp file naming: `<parent>/<filename>.<pid>.<uuid4>` (process::id + uuid::v4::new_v4)

## Threading Model

- sync mutex (std::sys::pal::unix::sync::mutex::Mutex lock/unlock)
- No async/spawn; no tokio runtime involvement
- Lock held for duration of load+parse+splice+save (blocking IO under mutex)

## Platform

- macOS arm64: confirmed (1.1.1 macos-arm64 IDB)
- Windows: Unknown — separate producer task required
- POSIX rename semantics (macOS): atomic at VFS level + sync_parent_dir for durability

## Comparison with 1.0.9 baseline

| aspect | 1.0.9 | 1.1.1 |
|--------|-------|-------|
| owner VA | 0x10015c300 | 0x10072a660 |
| core VA | (inlined/adjacent) | 0x1005a0510 (explicit symbol) |
| argKeys | ["name"] | ["name"] (unchanged) |
| thread model | sync mutex/TOML | sync mutex/TOML (unchanged) |
| side effect | remove+TOML write | remove+TOML write (unchanged) |
| response | Vec<McpServerSummary> | Vec<McpServerSummary> (unchanged) |
| delta | — | VA change only (monomorphization); behavioral contract identical |
