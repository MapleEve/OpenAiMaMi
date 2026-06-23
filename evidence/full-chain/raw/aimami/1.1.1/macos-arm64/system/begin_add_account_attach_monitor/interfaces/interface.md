# Interface / DTO / Error Envelope — begin_add_account_attach_monitor

## IPC Command Registration

- **Command name**: `begin_add_account_attach_monitor`
- **Tauri registration string**: confirmed at 0x101147f85 in string pool — part of batch `"get_usage_refresh_interval|set_usage_refresh_interval|begin_add_account_attach_monitor|run_daemon_once"`
- **Module**: `codexmate_lib::commands::system`
- **Handler VA**: `0x10061cc50`
- **Registered by**: `codexmate_lib::run::{{closure}}::{{closure}}` @ 0x100318010

## ArgKeys (Input Parameters)

**argKeys = []** — zero frontend-supplied parameters.

Evidence: owner decompile shows no deserialization of frontend payload; `a2` is AppHandle injected by Tauri runtime, `a3` is Tauri managed state ref. No `serde` deserialization calls in owner body for user-supplied fields.

Frontend CCF (from 1.0.9 baseline, migrated): `invoke("begin_add_account_attach_monitor")` — no args object passed.

## Response / Output Fields

Return type: `CoreEnvelope<CoreSnapshotPayload>` (wrapped in Tauri Ok result)

### Happy path (Ok envelope)
The command returns the current repository snapshot at time of call:
- `*(_QWORD *)v40 = 0x8000000000000000LL` — CoreEnvelope Ok sentinel
- Snapshot fields copied from `load_snapshot_local()` result into return slot
- CoreSnapshotPayload fields (from 1.0.9 reverse, no behavior diff):
  - `accounts: Vec<AccountSummary>` — account list (offset 0..336*n)
  - `codex_path: Option<String>` — current codex binary path (offset 68 in payload, 0x8000000000000000 = None sentinel)
  - `usage_refresh_interval: i32` — quota refresh interval seconds (offset 80 as DWORD)
  - `app_path_state: AppPathState` — path resolution state
  - `active_account_index: u8/u32` — active account discriminant

### Error path (Err envelope)
When `load_snapshot_local()` returns `Err(CoreError)`:
- `v25[0] == 3` discriminant
- `CoreError::fmt` called, written to return slot
- No thread spawn; returns early
- Frontend receives `CoreError` description string

## Side Effects

1. **Thread spawn** (primary side effect):
   `pthread_create` → `thread_start` → closure body (`__rust_begin_short_backtrace@0x100205da0`)
   - Thread is **detached** (JoinHandle immediately dropped)
   - Thread lifetime: max ~120ms (Instant::elapsed <= 0x77 guard)

2. **Async task spawn** (conditional, within thread):
   When `codex_path` or `usage_refresh_interval` changes detected:
   `schedule_full_runtime_refresh` → `tauri::async_runtime::spawn_blocking`
   - Rate-limited: min 8 seconds between refreshes (`LAST_FULL_RUNTIME_REFRESH_REQUEST_AT` atomic)
   - Guard: `FULL_RUNTIME_REFRESH_IN_FLIGHT` atomic flag (re-entrancy prevention)

3. **Persistence side effect** (via `sync_local_runtime_state`):
   - `Repository::persist_registry` → `std::fs::write::inner`
   - `quota_store::save` → fs write
   - `CodexPaths::ensure_directories` → mkdir
   These occur during `load_local_state_synced` → `sync_local_runtime_state` within each poll iteration.

## Error Paths

| Path | Trigger | Behavior |
|---|---|---|
| `load_snapshot_local` Err(CoreError) | Repository read fails (disk error, JSON parse error) | Return CoreError envelope immediately; no thread spawn |
| Thread body: `StateManager::try_get` → None | Tauri state not initialized (race at startup) | `panic_fmt` → abort |
| Thread body: snapshot Err | `load_snapshot_local` Err in poll | Drop CoreError, continue polling |
| `spawn_unchecked` fails | OS thread limit | `unwrap_failed` panic |
| `schedule_full_runtime_refresh` throttled | < 8s since last refresh | Skip dispatch, reset `FULL_RUNTIME_REFRESH_IN_FLIGHT=0` |

## Global State / Atomics

| Symbol | Type | Role |
|---|---|---|
| `FULL_RUNTIME_REFRESH_IN_FLIGHT` | static bool (atomic byte) | Re-entrancy guard for schedule_full_runtime_refresh |
| `LAST_FULL_RUNTIME_REFRESH_REQUEST_AT` | AtomicI64 (seconds since epoch) | Rate-limit: min 8s between full refreshes |

## Thread Watch Fields (Change Detection)

The monitor thread compares two fields from `CoreSnapshotPayload`:

| Field | Payload offset | Type | Change action |
|---|---|---|---|
| `codex_path` | offset 68 (QWORD, 0x8000000000000000=None) | `Option<String>` | Trigger full runtime refresh |
| `usage_refresh_interval` | offset 80 (DWORD/i32) | `i32` | Trigger full runtime refresh |

## Platform Gate

- macOS arm64: **confirmed** (逆向分析 live decompile, AiMaMi 1.1.1 universal binary)
- Windows x64: **Unknown** — not checked in this session; requires separate win 逆向分析 verification
