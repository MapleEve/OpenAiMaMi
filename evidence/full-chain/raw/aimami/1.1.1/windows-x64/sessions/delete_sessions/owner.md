# owner.md — delete_sessions (windows-x64, AiMaMi 1.1.1)
session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
platform: windows-x64
binary: AiMaMi 1.1.1 win64.exe
sha: d24e429a
delta_class: integrity_recovered
baseline: 1.0.9

---

## Owner function

| field | value |
|---|---|
| name | delete_sessions_handler_111 |
| va | 0x140023f80 |
| size | 0x511 bytes |
| idb_name (inline) | delete_sessions_owner_sys |
| role | IPC command entry point — parses Tauri invoke payload, dispatches async executor, serializes response |

## IPC binding

```
command:  "delete_sessions"   (string @ 0x1412ac1bd)
arg[0]:   "repo"              (String, type-tag 15, @ 0x1412ac6d1)
arg[1]:   "ids"               (Vec<String>, type-tag 3, @ 0x1412ac78f)
returns:  Result<Vec<SessionResult>>
```

## Execution path summary

```
delete_sessions_handler_111 (0x140023f80)  [IPC entry]
  └─ delete_sessions_async_executor_111 (0x1407dd860)  [mutex gate]
       └─ delete_sessions_core_111 (0x14077fe10)  [PRIMARY DELTA LOCUS]
            ├─ delete_sessions_build_session_list_111 (0x140781830)  [NEW in 1.1.1]
            ├─ delete_sessions_open_db_111 (0x14077f5e0)
            ├─ [per-id SQL loop]
            │    ├─ DELETE FROM thread_spawn_edges  [NEW cascade, 0x1412f32f8]
            │    └─ DELETE FROM threads
            ├─ win32_file_read_bytes_111 (0x141093260)
            ├─ snooze_file_delete_111 (0x14108bf60)
            ├─ win32_file_write_bytes_111 (0x141093710)
            └─ delete_sessions_collect_results_111 (0x140311630)
```

## Delta vs 1.0.9

1. **New function** `delete_sessions_build_session_list_111` (0x140781830) — scans thread entries for `-rollout.json` files; normalizes `\`→`/` via SSE2 SIMD; absent from 1.0.9.
2. **New SQL** `DELETE FROM thread_spawn_edges WHERE child_thread_id=?1 OR parent_thread_id=?1` — cascade before thread row delete; string @ 0x1412f32f8.
3. **SQL order change** — 1.0.9 did only `DELETE FROM threads`; 1.1.1 does cascade first, then thread delete.
4. All other components (handler, async_executor, open_db, collect_results) have no behavioral delta.

## Side effects

| type | detail |
|---|---|
| db_write | DELETE FROM thread_spawn_edges (NEW cascade) |
| db_write | DELETE FROM threads |
| file_read | thread state file (win32_file_read_bytes_111) |
| file_write | updated thread state (win32_file_write_bytes_111) |
| file_read | scans -rollout.json files via build_session_list (NEW) |
| file_delete | snooze file removed via snooze_file_delete_111 (win32 DeleteFileW/SetFileInformationByHandle) |

## Error handling

| code / condition | behavior |
|---|---|
| empty ids | early return Ok([]) before any DB open |
| 0x8000000000000016 (row-not-found) | silently skipped in both SQL steps |
| other SQL error | propagated as Err(9, error_string) via sub_1410A1DF0 |
| mutex poison | panic via sub_14124BFE0 "poisoned lock: another task failed inside" |
| alloc failure (Vec grow) | sub_14124BCCB OOM panic |
