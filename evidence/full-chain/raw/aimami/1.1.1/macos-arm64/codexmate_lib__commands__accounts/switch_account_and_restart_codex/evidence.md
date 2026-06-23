# Evidence — switch_account_and_restart_codex (AiMaMi 1.1.1 macOS)

session: wf-aimami111-delta-20260618-mac100
machine: <本地机器>
produced_at: 2026-06-18
binary: AiMaMi 1.1.1 universal.app / macOS arm64
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
baseline: 1.0.9 macOS leaf (SYSTEM-DIFF.md + AI.md)

---

## Confirmed

- Owner function `switch_account_and_restart_sync` at VA `0x100624e90` (size `0x989`); mangled: `__ZN13codexmate_lib8commands8accounts31switch_account_and_restart_sync17h3c9e0a10dbfbbe67E`
- IPC is a Tokio blocking-task async wrapper over `switch_account_and_restart_sync`; drop_in_place symbols confirm `BlockingTask<closure<closure>>` at addresses `0x100013440`, `0x100018840`, `0x1000bd5e0`
- `capture_switch_rollback_state @ 0x100621bb0`: uses `StateManager::try_get` + `Mutex::lock`; copies up to 11 string fields (path bytes) from accounts state into `SwitchRollbackState` struct; 4 `FileRestoreState::capture` calls
- `switch_account_sync @ 0x1006200f0`: acquires accounts mutex; calls `Repository::switch_account @ 0x1004c0350`; propagates failure as CoreError Display string
- `Repository::switch_account @ 0x1004c0350` (size `0xc75`): registry load → accountKey linear scan (stride 360 bytes) → auth file backup with timestamp → `std::sys::fs::copy` to active path → `clear_auto_switch_transient_state` (NEW 1.1.1) → persist registry → load_auth_file → make_auth_snapshot → load_or_default quota → make_account_summary_from_item → `ok_with_warnings` with `CLIENT_RESTART_RECOMMENDED` string (26 bytes) and description (63 bytes)
- `clear_auto_switch_transient_state @ 0x1004cfc50` is called inside `Repository::switch_account` before `persist_registry`; this callee was absent in 1.0.9 baseline
- `FileRestoreState::restore @ 0x10061fd20`: 2 branches — (1) `*a2+24 < 0` (delete-sentinel): calls `std::sys::fs::remove_file`; (2) else: `Path::parent` + `DirBuilder::_create(mode=0o777)` + `std::fs::write::inner`; error on dir create or file write
- `FileRestoreState::capture @ 0x10061fa80`: `std::fs::read::inner` + error-kind check (NotFound treated as Ok(empty)); returns file bytes in slot
- `relaunch_codex_after_success @ 0x100621a40`: calls `stop_codex_for_file_edit(timeout_secs=5)` then `launch_codex_app`; returns `0x8000000000000000` sentinel on Ok
- `stop_codex_for_file_edit @ 0x10055c090`: checks `is_process_running` → `request_codex_app_quit @ 0x10055bc10` (AppleEvent quit) → 50ms poll loop up to timeout → `kill_codex_processes_until_clear @ 0x10055e390`
- `launch_codex_app @ 0x10055afd0`: `Command::new("open") .arg("-b") .arg("Codex")` (bundle_id) then `Command::new("open") .arg(<path>)` fallback; polls `is_process_running` up to 3s (80ms sleep); error string `"Codex launch timed out"` (22 bytes) confirmed in binary
- `refresh_full_runtime_snapshot_with_source @ 0x100626f60`: calls `load_full_runtime_snapshot @ 0x100620b90` then `broadcast_runtime_snapshot @ 0x100620750`; discriminant 3 = error (AppStatusPayload error variant)
- `append_switch_warning @ 0x1006205f0` appends warning to Ok response when refresh fails after successful switch+relaunch
- Error join separator ` | ` (3 bytes) confirmed from string literal at `0x101154e8c`
- 4 restore slots (offsets +0, +16, +64, +112 from rollback state copy) confirmed by 4x `FileRestoreState::restore` calls in both switch-failure and relaunch-failure branches
- Success return: `memcpy(__dst, v58, 0x1D8)` — full 472-byte CoreEnvelope copied to output buffer

## Inferred

- `SwitchRollbackState` struct contains ≥4 `FileRestoreState` fields (matching 4 capture calls in `capture_switch_rollback_state` and 4 restore calls); each `FileRestoreState` = {path_ptr, path_len, content_ptr, content_len, delete_sentinel: bool}
- `FileRestoreState::capture` treats `ErrorKind::NotFound` as "file didn't exist → no-op/skip" rather than error, allowing rollback of newly created files
- The retry-relaunch-after-restore sequence (relaunch called twice in relaunch-failure path) is a 1.1.1 new behavior vs 1.0.9's single-attempt relaunch
- `clear_auto_switch_transient_state` clears any in-flight auto-switch schedule (e.g., pending `confirm_pending_auto_switch_and_restart_codex`) before registry persist; this prevents race between manual switch and queued auto-switch
- `CLIENT_RESTART_RECOMMENDED` warning is injected unconditionally on every successful switch (hardcoded in `Repository::switch_account`), not conditionally based on active processes
- `launch_codex_app` uses `dirs::home_dir` to resolve `~/Applications/Codex.app` as path fallback if system `/Applications/Codex.app` metadata check fails
- Process stop timeout of 5 seconds (passed as `a2=5` to `stop_codex_for_file_edit`) is hardcoded in `relaunch_codex_after_success`
- Launch readiness poll timeout is 3 seconds (passed as `3` to `Instant::add`)

## Unknown

- Exact `SwitchRollbackState` struct layout in memory (stride, field order) beyond the 4-capture pattern; exact size unknown
- Whether `capture_switch_rollback_state` mutex guards a `Mutex<RegistryFile>` or a broader accounts state lock; poisoning behavior on previous task panic is confirmed by error string but lock scope unclear
- Whether `broadcast_runtime_snapshot` uses a named Tauri event string or a typed event; event name not extracted in this session
- Exact `confirm_pending_auto_switch_and_restart_codex` interaction with `clear_auto_switch_transient_state`; only callee from `switch_account` confirmed, not the inverse
- Whether rollback always restores all 4 slots or short-circuits on first successful restore; code iterates all 4 unconditionally but each result is independently evaluated
- Windows behavior of this command; this evidence covers macOS arm64 only
- Integration test coverage for relaunch-failure → restore → retry-relaunch path in 1.1.1
- Whether `append_switch_warning` modifies the warning array in-place or appends to a new allocation; implementation not fully decompiled in this session
