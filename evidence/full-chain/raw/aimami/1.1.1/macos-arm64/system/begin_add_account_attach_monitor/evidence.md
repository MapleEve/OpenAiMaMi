# Evidence — begin_add_account_attach_monitor (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话>
**Machine**: <本地机器>
**Date**: 2026-06-16
**Binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**IDB**: AiMaMi.i64 (IDA decompiler_ready=true, uptime=18068s at session start)
**Owner VA**: `0x10061cc50`
**Module**: `codexmate_lib::commands::system`
**Symbol**: `__ZN13codexmate_lib8commands6system32begin_add_account_attach_monitor17h7913ad9d66f0a797E`
**Size**: 0x64e (1614B) | has_type=true

---

## ## Confirmed

1. **Owner VA confirmed by dual lookup**: `func_query(name_regex=".*begin_add_account_attach_monitor.*")` returned exact symbol with VA=0x10061cc50; string pool `find_regex("begin_add_account_attach_monitor")` hit at 0x101147f85 (Tauri registration string).

2. **Module = system (not accounts)**: demangled namespace is `codexmate_lib::commands::system`, distinct from the `accounts` module despite semantic similarity. Owner-map 1.1.1 had `module=null, not_yet_queried` — now confirmed as `system`.

3. **argKeys = [] (no parameters)**: owner body contains no serde deserialization of frontend payload. All data sourced from Tauri managed state (`a3 = OnceBox<Mutex<Repository>>`).

4. **Thread body identified and decompiled**: true closure body is `__rust_begin_short_backtrace@0x100205da0` (size 1108B), called via `pthread_create → thread_start → vtable[3]`. Not any of the three `drop_in_place` shims (0x1002083c0, 0x1003329d0, 0x100336820) — those are destructor shims for the closure captures.

5. **Poll loop semantics**: Thread polls `Repository::load_snapshot_local` every 2ms (`std::thread::sleep(2ms, 0)`) for maximum ~120ms (`Instant::elapsed <= 0x77`). Timeout is 119ms (0x77 nanoseconds = 119ms when interpreted as elapsed-millis comparison).

6. **Change detection fields**: `codex_path` (at closure capture offset 152/payload offset 68, Option<String>, sentinel 0x8000000000000000=None) and `usage_refresh_interval` (closure capture offset 176/payload offset 80, i32 DWORD). `memcmp` on string content + length comparison for codex_path.

7. **schedule_full_runtime_refresh confirmed**: VA=0x10061ca30, size=259B. Contains `FULL_RUNTIME_REFRESH_IN_FLIGHT` atomic bool + `LAST_FULL_RUNTIME_REFRESH_REQUEST_AT` AtomicI64 rate-limiter (≥8s between calls). Dispatches via `tauri::async_runtime::spawn_blocking`.

8. **load_snapshot_local call chain (depth=5)**: `load_snapshot_local(L2) → load_local_state_synced(L3) → load_local_state(L4) → sys::fs::metadata(L5) + load_current_auth_snapshot(L5) + load_registry(L5) + quota_store::load(L5)`. Terminated at fs syscalls.

9. **sync_local_runtime_state has write side effects**: `persist_registry → std::fs::write::inner`, `quota_store::save → fs::write::inner`, `CodexPaths::ensure_directories → mkdir`. These execute in every poll iteration (within `load_local_state_synced → sync_local_runtime_state`).

10. **JoinHandle detached**: owner calls `drop_in_place<JoinHandle<()>>` immediately after `spawn_unchecked`, making the thread fire-and-forget. No join/await on the monitor result.

11. **Error handling in owner**: `load_snapshot_local` Err path (discriminant==3) is handled before spawn: CoreError formatted and returned as CoreEnvelope::Err without spawning thread.

12. **IDB append_comments confirmed**: `append_comments` returned `appended=true` for both 0x10061cc50 (owner) and 0x100205da0 (thread body). `idb_save` returned `ok=true`.

---

## ## Inferred

1. **Caller context**: `codexmate_lib::run::{{closure}}::{{closure}}@0x100318010` is the Tauri command registration wrapper — standard `invoke_handler` pattern. This runs when frontend calls `invoke("begin_add_account_attach_monitor")`.

2. **Business purpose**: "add account attach monitor" = after user initiates account add flow, this command starts a short-lived background monitor that watches for the codex binary path or usage interval to change (indicating a new account was successfully attached by the daemon), then triggers a full UI refresh. ~120ms total watch window with 2ms granularity.

3. **Thread lifetime short by design**: The 120ms ceiling is intentional — this is a polling bridge while daemon attach completes, not a long-running background service. The main `boot_spawn_threads` command (referenced in boot_spawn_threads leaf from 1.0.9) handles long-running monitors separately.

4. **Rate-limiting in schedule_full_runtime_refresh (8s)**: Prevents UI flash storms if multiple account changes fire in rapid succession. The `FULL_RUNTIME_REFRESH_IN_FLIGHT` guard ensures only one refresh task is in the Tokio executor at a time.

5. **StateManager::try_get offset pattern**: `*(_QWORD *)(*(_QWORD *)(a1 + 136) + 4872LL) + 16LL` — consistent with 1.0.9 AppHandle layout: offset 136 = WryHandle inner, +4872 = state manager slot, +16 = TypeMap entry for Repository. Same as observed in other system commands.

6. **CoreSnapshotPayload structure**: payload field offsets (codex_path@68, usage_refresh_interval@80) are consistent with 1.0.9 baseline struct layout (no layout change detected in 1.1.1 for these fields).

7. **Drop-in-place shims not the closure**: Three shim functions (0x1002083c0, 0x1003329d0, 0x100336820) are ICF-deduplicated destructors for the closure capture type. They are called during cleanup paths, not as the thread entry point.

---

## ## Unknown

1. **Windows x64 behavior**: Not verified in this session. `owner-map-111.jsonl` has `status=shared` for this command — Windows may have a different implementation or be absent. Requires win 逆向分析 MCP verification.

2. **Exact CoreSnapshotPayload serialization format**: Field offsets inferred from pointer arithmetic in decompile, not from Serde derive attributes. Exact JSON field names for `codex_path` and `usage_refresh_interval` not confirmed from source symbols.

3. **spawn_blocking task body**: `tauri::async_runtime::spawn_blocking` is called with an AppHandle clone — the actual async task function it dispatches to is not directly decompiled in this session (would require following the task vtable).

4. **`sync_local_runtime_state` write conditions**: The exact conditions under which `persist_registry` and `quota_store::save` are called (vs. read-only path) are not fully decompiled from the 6240B function body — only callee set confirmed.

5. **Thread name**: `spawn_unchecked` call with `v25` context — whether a thread name is set via `pthread_setname_np` in `thread_start` is observable (thread_start does set name from `ThreadInit.name` field), but the actual name string for this thread is not extracted.

6. **Behavior diff vs 1.0.9 on this command**: `owner-map-111.jsonl` entry was `not_yet_queried` — no prior 1.1.1 evidence exists. 1.0.9 windows had an evidence bundle for `begin_add_account_attach_monitor` (INDEX key confirmed). The 1.0.9 macOS behavior was referenced as `begin_add_account_attach_monitor@0x100262db4` (caller VA in boot_spawn_threads, not the owner), which was stale. The 1.1.1 macOS owner VA is 0x10061cc50 — VA has shifted significantly from any 1.0.9 reference.

7. **`FULL_RUNTIME_REFRESH_IN_FLIGHT` reset path**: The static is set to 1 at entry and reset to 0 in the throttle branch (< 8s). Whether it is reset to 0 after `spawn_blocking` completes is not confirmed — the JoinHandle is dropped, so reset may only occur in the throttle path.
