# Interface Contract: command=clean (AiMaMi 1.1.1 macOS ARM64)

## Parameters (arg_keys)

```
[] — zero-arity; no frontend parameters
```

The command takes no user-supplied arguments. All inputs come from the Repository state (registry.json path, quota.json path, sessions_dir path, second_data_dir path).

## Response (success)

```
CoreEnvelope<CleanResult> {
  files_deleted: u32    // total count of files removed from sessions_dir + second_data_dir
  accounts_removed: i32 // original_registry_item_count - retained_registry_item_count
}
```

Envelope tag = 0 (Ok). Envelope is 0x60 bytes. Serialized as standard CoreEnvelope JSON with `{ok: true, data: {files_deleted, accounts_removed}}` (per CoreEnvelope::ok pattern from prior commands).

## Response (error)

```
CoreEnvelope tag = 0x8000000000000000 (sentinel error tag)
Error string from CoreError as Display (fmt)
```

Error is returned only if `Repository::persist_registry` fails (IoError or SerError). File-delete errors are NOT propagated (silently swallowed per-file). Quota-load failure results in treating quota as empty (not an error to caller). Quota-save failure IS propagated as Err.

## Side Effects (in order, all under Repository Mutex)

1. **Registry filter**: `registry.json` rewritten with only accounts whose `codex_path` still exists on disk. Accounts whose Codex installation directory is gone are dropped. `activeAccountKey` cleared to sentinel if the active account was dropped.
2. **sessions_dir purge**: all files in `sessions_dir` (repository+272) are deleted individually via `unlink`. Directory itself is NOT removed. Subdirectories are NOT recursed into (flat `read_dir`). Per-file errors silently swallowed.
3. **second_data_dir purge**: all files in `second_data_dir` (repository+296) are deleted individually. Same semantics as sessions_dir purge.
4. **Registry persist**: `registry.json` written with `{schemaVersion, updatedAt, activeAccountKey, items}`. No backup (a4=false in this command). `ensure_directories` called first (creates 9 Codex dirs if missing).
5. **Quota filter + persist**: quota store loaded, filtered to only retain entries matching surviving account keys, persisted back as `{schemaVersion, updatedAt, items}`.

## Error Envelope

```rust
enum CoreError { IoError(std::io::Error), ParseError(serde_json::Error), ... }
// wrapped in CoreEnvelope<T> with Err discriminant
```

## DTO Fields (registry.json schema written by persist_registry)

```json
{
  "schemaVersion": <i32>,
  "updatedAt": <u64_unix_timestamp_nanos>,
  "activeAccountKey": <string | null>,
  "items": [<RegistryItem>, ...]
}
```

## DTO Fields (quota.json schema written by quota_store::save)

```json
{
  "schemaVersion": <i32>,
  "updatedAt": <u64_unix_timestamp_nanos>,
  "items": [<QuotaItem>, ...]
}
```

## Platform Notes

- macOS ARM64: confirmed via AiMaMi 1.1.1 universal binary 逆向分析 analysis.
- Windows: not analyzed this session. Windows Unknown.
- Mutex: `std::sys::pal::unix::sync::mutex::Mutex` — POSIX pthread mutex.
- File ops: `std::sys::fs::*` — POSIX syscalls (open/read/write/unlink/opendir/fstat).

## Boundary Conditions

- If registry.json does not exist or fails to parse: synthetic empty RegistryFile used (all accounts treated as absent → 0 retained, all cleaned).
- If sessions_dir does not exist (metadata fails): directory scan skipped silently, i stays 0.
- If second_data_dir does not exist: same, v32 stays 0.
- If persist_registry fails: command returns Err; quota NOT processed (quota retain/save not reached).
- If quota.json does not exist: empty QuotaFile used (0 items). No error to caller.
- If quota_store::save fails: Err returned to caller after successful registry persist.
- Repository mutex held for entire duration — no concurrent IPC can read/write registry during clean.
