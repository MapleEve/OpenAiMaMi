# Interface / DTO — delete_sessions (1.1.1 macOS)

## Request

| Field | Type | Required | Notes |
|---|---|---|---|
| `ids` | `Vec<String>` | yes | Array of session ID strings to delete; empty array → Ok([]) fast-path |

Frontend invocation: `ne("delete_sessions", {ids: t})` where `ne` = Tauri invoke wrapper.

## Response

`CoreEnvelope<Vec<(String, f64)>>`

- Ok: array of `(rollout_file_path: String, mtime: f64)` tuples — one entry per successfully deleted rollout file
- Err: `CoreEnvelope<Err(String)>` with CoreError discriminant

Response is NOT a list of deleted thread/session records — it is a list of deleted rollout FILE paths and their mtimes.

## Error Envelope

| CoreError code | Variant | Trigger |
|---|---|---|
| 9 / Other | `"sqlite delete spawn edge: <rusqlite::Error::Display>"` | SQLite error executing DELETE FROM thread_spawn_edges |
| 9 / Other | `"sqlite delete thread: <rusqlite::Error::Display>"` | SQLite error executing DELETE FROM threads |
| 2 / IoError | dynamic string | fs::remove_file failure on rollout file |
| 2 / IoError | dynamic string | fs::read_to_string failure on codex-global-state.json |
| 2 / IoError | dynamic string | fs::write failure on codex-global-state.json |

## Side Effects (ordered)

1. Acquire AppState mutex lock
2. Check metadata of DB path
3. If DB exists: open rusqlite Connection (read-write, busy_timeout=5s)
4. For each id in ids: `DELETE FROM thread_spawn_edges WHERE child_thread_id=?1 OR parent_thread_id=?1`
5. For each id in ids: `DELETE FROM threads WHERE id=?1`
6. Close DB (rusqlite Connection drop)
7. build_rollout_index: scan AppState+120 dir + AppState+144 dir recursively for rollout-*.jsonl files → HashMap<id_key, (path, mtime)>
8. For each id in ids: if matched in rollout_index → `std::fs::remove_file(path)`
9. Check metadata of codex-global-state.json path
10. If exists: read_to_string → parse line-by-line as JSON → filter out lines with `json["id"]` in delete set → write filtered content back (newline-joined)

## Platform Notes

- **macOS ARM64**: confirmed all paths above
- **Windows x64**: not examined; must be independently produced
- platformScopeDeclared: "macOS confirmed; Windows Unknown"

## Delta vs 1.0.9

Owner-map status = `shared/not_yet_queried`. The `delete_sessions` command in 1.0.9 macOS has not been separately documented; this is treated as a new/updated evidence leaf. The SQL schema (thread_spawn_edges + threads tables) is consistent with the sessions model visible across 1.1.1. No breaking interface changes confirmed vs baseline (argKeys=["ids"] likely unchanged, but baseline not verified for this specific command).
