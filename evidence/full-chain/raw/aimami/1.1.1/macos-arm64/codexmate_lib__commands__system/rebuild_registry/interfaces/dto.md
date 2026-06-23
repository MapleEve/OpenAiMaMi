# rebuild_registry — Interface / DTO / Error / Side-Effect Spec

## IPC Command Signature

```
command: "rebuild_registry"
input:   none (no payload struct — takes State<AppState> only)
output:  CoreEnvelope<RegistryFile>
```

## Input DTO

None. The command handler takes no input parameters from the frontend.
It receives `State<AppState>` (Tauri managed state) which carries a `Mutex<Repository>`.

## Output DTO — CoreEnvelope<RegistryFile>

```rust
// CoreEnvelope discriminant: 0x8000000000000000 = Err, 0x..0000000A (10) = Ok
struct CoreEnvelope<T> {
    tag: u64,  // 10 = ok, 0x8000000000000000 = err
    payload: T | CoreError,
}

// On Ok: RegistryFile (72 bytes on-stack, contains Vec<RegistryItem>)
struct RegistryFile {
    items: Vec<RegistryItem>,  // each item = 360 bytes
}

// On Err: CoreError (displayed via Display impl)
```

## RegistryItem Layout (360 bytes / 0x168 bytes)

Key fields inferred from struct-fill offsets in pseudocode:
- offset 0x00: tag/version (u64)
- offset 0x10: account_id / plan_type_tag
- offset 0x18: plan_version (u64) — from persist_registry field at a3+24
- offset 0x30: plan_tier (u64) — a3+48
- offset 0x40: auth_mode_tag (u8) — a3+64
- offset 0x41: auth_mode_detail (u16+u8)
- offset 0x48: active_model / pro_tier (u8) — a3+72
- offset 0x58-0x88: account_id string (ptr+len+cap)
- offset 0x88-0xA8: email string (ptr+len+cap) — used for dedup key
- offset 0x160: plan_label_normalized (lowercase string ptr+len)
- offset 0x162: auth_mode_normalized (lowercase string ptr+len)
- offset 0x168: timestamp_secs (u64) — seconds since epoch

## JSON Schema written by persist_registry

```json
{
  "schema_version": <uint>,
  "timestamp": <u64 secs>,
  "accounts": [...],
  "items": [...],
  "<plan_type_field>": "...",
  "<auth_mode_field>": "..."
}
```
Serialized via serde_json with 4 SerializeMap::serialize_entry calls + 2 SerializeStruct::serialize_field calls.
Written atomically to path at a2+216 (a2[27]) via std::fs::write.

## Error Paths

1. `ensure_directories` fails → CoreError propagated, tag=2, no registry written
2. `load_auth_file` fails → primary account skipped, dir scan continues
3. `make_auth_snapshot` fails → account skipped (no panic)
4. `fs::copy` (auth backup) fails → logged/ignored, proceeds
5. `persist_registry` fails → CoreError tag=3 (serialize error) or tag=2 (write error)
6. Mutex poisoned → string error "...poisoned..." returned immediately

## Side Effects

1. **Filesystem write**: registry JSON written to `CodexPaths::registry_path()` (a2+216)
2. **Filesystem backup**: primary auth file copied to `make_snapshot_path()` output before each rebuild
3. **Directory creation**: `ensure_directories` called twice (once in rebuild_registry, once in persist_registry)
4. **No network I/O**: pure local filesystem operation
5. **No database**: no SQLite or other DB touched

## Mutex / Concurrency

The Tauri command handler holds `Mutex<Repository>` for the entire duration of the rebuild.
This is a coarse-grained lock — all other commands that use the same State are blocked.
