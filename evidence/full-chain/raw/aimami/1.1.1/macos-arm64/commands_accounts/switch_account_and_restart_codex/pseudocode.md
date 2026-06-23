# pseudocode — switch_account_and_restart_codex (AiMaMi 1.1.1 macOS arm64)

session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
delta_class: integrity_recovered
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

---

## IPC registration

String table 0x1010e7311 lists all Tauri commands in a single concatenated string. The name
`switch_account_and_restart_codex` appears there, placing it in `commands::accounts`.
The companion new command `confirm_pending_auto_switch_and_restart_codex` appears in the same
string and in a second string table at 0x10114801b — it lives in `commands::system`.

---

## Primary sync body

**`switch_account_and_restart_sync`** — `0x100624e90`, size 0x989

```rust
fn switch_account_and_restart_sync(
    envelope: CoreEnvelope<SwitchPayload>,
    app_handle: AppHandle,
) -> Result<SwitchResult, String> {
    // Step 1 — NEW in 1.1.1: snapshot files before touching anything
    let rollback = capture_switch_rollback_state()?;   // acquires state mutex, snapshots 4 files

    // Step 2 — delegate to switch_account_sync (unchanged across versions)
    match switch_account_sync(envelope, app_handle) {
        Err(e) => {
            // ROLLBACK PATH (ret==2):
            FileRestoreState::restore(rollback.slot0)?;  // accounts-db
            FileRestoreState::restore(rollback.slot1)?;  // sessions-db
            FileRestoreState::restore(rollback.slot2)?;  // hotspot-json
            FileRestoreState::restore(rollback.slot3)?;  // config-json
            // refresh snapshot to surface final state
            match refresh_full_runtime_snapshot_with_source(app_handle) {
                Err(snap_err) => {
                    return Err(join([e, snap_err], " | "));
                }
                Ok(_) => return Err(e),
            }
        }
        Ok(switch_result) => {
            // Step 3 — NEW in 1.1.1: relaunch Codex after successful account switch
            match relaunch_codex_after_success() {
                Ok(_pid_str) => {
                    // relaunch succeeded — refresh runtime snapshot
                    match refresh_full_runtime_snapshot_with_source(app_handle) {
                        Err(snap_err) => {
                            // append warning, don't fail the switch
                            switch_result.append_warning("RUNTIME_REFRESH_FAILED_AFTER_SWITCH");
                        }
                        Ok(_) => {}
                    }
                    return Ok(switch_result);
                }
                Err(relaunch_err) => {
                    // relaunch failed — rollback files + refresh
                    let mut warnings = vec![relaunch_err];
                    FileRestoreState::restore(rollback.slot0)?;
                    FileRestoreState::restore(rollback.slot1)?;
                    FileRestoreState::restore(rollback.slot2)?;
                    FileRestoreState::restore(rollback.slot3)?;
                    match relaunch_codex_after_success() {   // second attempt
                        Err(e2) => warnings.push(e2),
                        Ok(_)   => {}
                    }
                    match refresh_full_runtime_snapshot_with_source(app_handle) {
                        Err(e3) => { return Err(join(warnings + [e3], " | ")); }
                        Ok(_)   => { return Err(join(warnings, " | ")); }
                    }
                }
            }
        }
    }
}
```

---

## `capture_switch_rollback_state` — `0x100621bb0`

```rust
fn capture_switch_rollback_state() -> Result<SwitchRollbackState, CoreError> {
    // Acquires StateManager mutex (OnceBox + std::sync::Mutex)
    let guard = state_manager.lock();
    // Reads 4 file paths from AppState via tauri::StateManager::try_get
    FileRestoreState::capture(path_accounts_db)   // slot 0
    FileRestoreState::capture(path_sessions_db)   // slot 1  (+ [rsp+3D0h+16])
    FileRestoreState::capture(path_hotspot_json)  // slot 2  (+ [rsp+3D0h+64])
    FileRestoreState::capture(path_config_json)   // slot 3  (+ [rsp+3D0h+112])
    // capture::h calls std::fs::read → stores (exists, Option<Vec<u8>>) per slot
}
```

---

## `FileRestoreState::restore` — `0x10061fd20`

```rust
fn restore(state: FileRestoreState) -> Result<(), String> {
    if state.captured_as_nonexistent {
        // file did not exist before switch — delete it now
        match std::fs::remove_file(&state.path) {
            Err(e) if e.kind() != NotFound => return Err(format!(..., path, e)),
            _ => {}
        }
    } else {
        // file existed — restore contents
        std::fs::create_dir_all(path.parent())?;
        std::fs::write(&state.path, &state.bytes)
            .map_err(|e| format!(..., path, e))?;
    }
    Ok(())
}
```

---

## `relaunch_codex_after_success` — `0x100621a40`

```rust
fn relaunch_codex_after_success() -> Result<String, CoreError> {
    // stop_codex_for_file_edit(timeout_secs=5)
    //   → request_codex_app_quit (osascript 'tell application "Codex" to quit')
    //   → poll is_process_running every 50ms for 5s
    //   → kill_codex_processes_until_clear
    stop_codex_for_file_edit(5)?;

    // launch_codex_app: tries 3 paths with 3s poll loops each
    let pid_str = launch_codex_app()?;
    Ok(pid_str)
}
```

---

## `launch_codex_app` — `0x10055afd0`

```rust
fn launch_codex_app() -> Result<String, CoreError> {
    // Attempt 1: open -b Codex  (bundle ID, unk_10114F1A0 = "Codex")
    // Attempt 2: open /Applications/Codex.app
    // Attempt 3: open {home_dir}/Applications/Codex.app
    // Each attempt polls is_process_running every 80ms for 3 seconds
    // On all attempts exhausted: Err { code=9, msg="Codex launch timed out" }
    // On success: *a1 = 10 (sentinel for Ok(pid))
}
```

String evidence: `"Codex launch timed out"` at 0x10055b772 (22 bytes).
App path fragment: `"/Applications/Codex.app"` at 0x10055b2b6.
Bundle arg: `"-b"` followed by `"Codex"` reconstructed from arg array offsets.

---

## `stop_codex_for_file_edit` — `0x10055c090`

```rust
fn stop_codex_for_file_edit(timeout_secs: u64) {
    if is_process_running() {
        let _ = request_codex_app_quit();  // osascript 'tell application "Codex" to quit'
        let deadline = Instant::now() + Duration::from_secs(timeout_secs);
        while is_process_running() && Instant::now() < deadline {
            thread::sleep(Duration::from_millis(50));
        }
    }
    kill_codex_processes_until_clear();  // unconditional hard kill
}
```

---

## `append_switch_warning` — `0x1006205f0`

```rust
fn append_switch_warning(result: &mut SwitchResult, error_msg: String) {
    // Allocs 35-byte string "RUNTIME_REFRESH_FAILED_AFTER_SWITCH"
    // Pushes Warning { code: "RUNTIME_REFRESH_FAILED_AFTER_SWITCH", message: error_msg }
    // into result.warnings Vec (stride=48, offset fields at result+55*8..+57*8)
}
```

---

## `refresh_full_runtime_snapshot_with_source` — `0x100626f60`

```rust
fn refresh_full_runtime_snapshot_with_source(app: AppHandle) -> Result<AppStatusPayload, CoreError> {
    // Requires StateManager (panics if not found)
    load_full_runtime_snapshot()   // reads state from disk
    → if Err (discriminant 3): return Err
    → if Ok:
        broadcast_runtime_snapshot(app, snapshot)   // Tauri emit event to frontend
        return Ok(AppStatusPayload { accounts: Vec<AccountSummary>, ... })
}
```

---

## New IPC command: `confirm_pending_auto_switch_and_restart_codex`

**`confirm_pending_auto_switch_and_restart_sync`** — `0x10061e190`, size 0xd9b, module: `commands::system`

```rust
fn confirm_pending_auto_switch_and_restart_sync(app_handle: AppHandle) -> Result<SwitchResult, String> {
    let rollback = capture_switch_rollback_state()?;

    // Reads pending auto-switch from file (AppState offset +488/+496)
    // serde_json::from_trait deserializes into AccountSummary
    let pending = Repository::load_pending_auto_switch(repo)?;

    match Repository::confirm_pending_auto_switch(repo) {
        Err(CoreError { code: 7, msg: "No pending auto-switch request" }) => {
            // Early return — no pending
        }
        Ok(switch_result) | Err(_) => {
            // same restart+rollback logic as switch_account_and_restart_sync
            relaunch_codex_after_success() ...
            FileRestoreState::restore x4 ...
            refresh_full_runtime_snapshot_with_source ...
            append_switch_warning("RUNTIME_REFRESH_FAILED_AFTER_SWITCH") ...
        }
    }
}
```

**`Repository::confirm_pending_auto_switch`** — `0x1004cd9b0`:
```rust
fn confirm_pending_auto_switch(repo: &Repository) -> Result<SwitchResult, CoreError> {
    let pending = load_pending_auto_switch(repo)?;  // file at AppState+488, serde_json parse
    match pending {
        None => Err(CoreError { code: 7, msg: "No pending auto-switch request" }),
        Some(account) => {
            // Drops AccountSummary after extracting key+index fields (__dst[52], __dst[53])
            Repository::switch_account(repo, account.key, account.index)
        }
    }
}
```

**`Repository::load_pending_auto_switch`** — `0x1004c8200`:
```rust
fn load_pending_auto_switch(repo: &Repository) -> Result<Option<AccountSummary>, CoreError> {
    let text = std::fs::read_to_string(repo.pending_auto_switch_path)?;  // AppState+488/496
    match serde_json::from_str::<AccountSummary>(&text) {
        Ok(acct) => Ok(Some(acct)),
        Err(_)   => Ok(None),   // discriminant 2 path returns *dst=2
    }
}
```
