# call-trees — switch_account_and_restart_codex (AiMaMi 1.1.1 macOS arm64)

session: wf-aimami111-delta-20260617-sweep
delta_class: integrity_recovered

---

## Primary IPC dispatch tree

```
[Tauri IPC] "switch_account_and_restart_codex"
└── commands::accounts::switch_account_and_restart_codex (async wrapper / BlockingTask closure)
    └── commands::accounts::switch_account_and_restart_sync  0x100624e90  [NEW OWNER]
        ├── commands::accounts::capture_switch_rollback_state  0x100621bb0  [NEW]
        │   ├── tauri::state::StateManager::try_get  0x1005052f0
        │   ├── std::sys::pal::unix::sync::mutex::Mutex::lock  0x100f2e7a0
        │   ├── commands::accounts::FileRestoreState::capture  0x10061fa80  [NEW, x4]
        │   │   └── std::fs::read (reads file bytes into Vec<u8>)
        │   └── std::sys::pal::unix::sync::mutex::Mutex::unlock  0x100f2e7c0
        │
        ├── commands::accounts::switch_account_sync  0x1006200f0  [UNCHANGED callee set]
        │   ├── tauri::state::StateManager::try_get  0x1005052f0
        │   ├── std::sys::pal::unix::sync::mutex::Mutex::lock  0x100f2e7a0
        │   ├── core::repository::Repository::switch_account  0x1004c0350
        │   │   └── [repository internals — not changed in delta scope]
        │   └── std::sys::pal::unix::sync::mutex::Mutex::unlock  0x100f2e7c0
        │
        ├── [ON SWITCH FAILURE]
        │   ├── commands::accounts::FileRestoreState::restore  0x10061fd20  [NEW, x4]
        │   │   ├── std::fs::remove_file  0x100f2a550  (if file was absent before)
        │   │   └── std::fs::write  0x100f25f70  (if file existed before)
        │   │       └── std::fs::DirBuilder::_create  0x100f24d00  (mkdir_p)
        │   └── commands::accounts::refresh_full_runtime_snapshot_with_source  0x100626f60  [NEW]
        │       ├── commands::accounts::load_full_runtime_snapshot  0x100620b90
        │       └── commands::accounts::broadcast_runtime_snapshot  0x100620750  (Tauri event)
        │
        └── [ON SWITCH SUCCESS]
            ├── commands::accounts::relaunch_codex_after_success  0x100621a40  [NEW]
            │   ├── platform::process::stop_codex_for_file_edit  0x10055c090  [NEW]
            │   │   ├── platform::process::is_process_running  0x10055b8c0
            │   │   ├── platform::process::request_codex_app_quit  0x10055bc10
            │   │   │   └── [osascript 'tell application "Codex" to quit']
            │   │   ├── std::thread::sleep (50ms poll)
            │   │   └── platform::process::kill_codex_processes_until_clear  0x10055e390
            │   └── platform::process::launch_codex_app  0x10055afd0  [NEW]
            │       ├── std::sys::process::Command::new + arg + output  (open -b Codex)
            │       ├── std::sys::process::Command::new + arg + output  (/Applications/Codex.app)
            │       ├── dirs::home_dir  (fallback path)
            │       ├── std::fs::metadata  (existence check)
            │       └── std::thread::sleep (80ms poll, 3s timeout each attempt)
            │
            ├── [ON RELAUNCH FAILURE]
            │   ├── commands::accounts::FileRestoreState::restore x4  [NEW]
            │   ├── commands::accounts::relaunch_codex_after_success  (SECOND ATTEMPT)
            │   └── commands::accounts::refresh_full_runtime_snapshot_with_source  [NEW]
            │
            └── [ON RELAUNCH SUCCESS]
                ├── commands::accounts::refresh_full_runtime_snapshot_with_source  0x100626f60
                │   ├── commands::accounts::load_full_runtime_snapshot  0x100620b90
                │   └── commands::accounts::broadcast_runtime_snapshot  0x100620750
                └── [IF SNAPSHOT FAILS]
                    └── commands::accounts::append_switch_warning  0x1006205f0  [NEW]
                        └── hardcoded: "RUNTIME_REFRESH_FAILED_AFTER_SWITCH" (35 bytes)
```

---

## New sibling IPC command tree

```
[Tauri IPC] "confirm_pending_auto_switch_and_restart_codex"
└── commands::system::confirm_pending_auto_switch_and_restart_sync  0x10061e190  [NEW]
    ├── commands::accounts::capture_switch_rollback_state  0x100621bb0
    ├── tauri::state::StateManager::try_get (pending auto-switch state)
    ├── std::sys::pal::unix::sync::mutex::Mutex::lock/unlock
    ├── core::repository::Repository::confirm_pending_auto_switch  0x1004cd9b0  [NEW]
    │   ├── core::repository::Repository::load_pending_auto_switch  0x1004c8200  [NEW]
    │   │   ├── std::fs::read_to_string  0x100f25740  (file: AppState+488/496)
    │   │   └── serde_json::de::from_trait  0x1002e9700  (→ AccountSummary)
    │   └── core::repository::Repository::switch_account  0x1004c0350
    │       └── [unchanged from 1.0.9]
    └── [IDENTICAL relaunch+rollback subtree as switch_account_and_restart_sync]
        ├── commands::accounts::relaunch_codex_after_success
        ├── commands::accounts::FileRestoreState::restore x4
        ├── commands::accounts::relaunch_codex_after_success (2nd attempt)
        ├── commands::accounts::refresh_full_runtime_snapshot_with_source
        └── commands::accounts::append_switch_warning
```

---

## Depth accounting

| Layer | Depth | Terminated by |
|---|---|---|
| IPC dispatch | 0 | async wrapper |
| switch_account_and_restart_sync | 1 | — |
| capture_switch_rollback_state | 2 | mutex + file I/O |
| switch_account_sync | 2 | repository call |
| Repository::switch_account | 3 | repository internals (unchanged) |
| relaunch_codex_after_success | 2 | — |
| stop_codex_for_file_edit | 3 | osascript + kill |
| launch_codex_app | 3 | process::Command::output |
| FileRestoreState::restore | 2 | fs::write / fs::remove_file |
| refresh_full_runtime_snapshot_with_source | 2 | broadcast_runtime_snapshot |
| append_switch_warning | 2 | alloc string push |

Max depth reached: 4 (IPC → sync_body → relaunch → stop_codex → request_quit).
terminated_reason: all app-level callees reached leaf I/O (osascript, fs, process::Command).
