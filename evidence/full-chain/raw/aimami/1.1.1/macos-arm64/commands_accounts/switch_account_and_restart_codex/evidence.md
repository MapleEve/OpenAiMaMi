# evidence — switch_account_and_restart_codex delta (AiMaMi 1.1.1 macOS arm64)

session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
delta_class: integrity_recovered
baseline: AiMaMi 1.0.9 (fully reversed)
date: 2026-06-17

---

## 逆向分析 health at reversal time

```json
{"status":"ok","module":"AiMaMi","hexrays_ready":true,"auto_analysis_ready":true,
 "strings_cache_size":14495,
 "idb_path":"<来源位置>/raw/binary/AiMaMi-1.1.1-idb"}
```

---

## Delta summary — what actually changed vs 1.0.9

### New app-level callees in switch_account_and_restart_codex cluster

| Function | VA | Status | Delta significance |
|---|---|---|---|
| `capture_switch_rollback_state` | 0x100621bb0 | NEW | Pre-switch file snapshot; enables rollback |
| `FileRestoreState::restore` | 0x10061fd20 | NEW | fs::write or fs::remove_file rollback |
| `FileRestoreState::capture` | 0x10061fa80 | NEW | fs::read capture per file slot |
| `relaunch_codex_after_success` | 0x100621a40 | NEW | Orchestrates stop+relaunch cycle |
| `stop_codex_for_file_edit` | 0x10055c090 | NEW | Graceful quit + hard kill with 5s timeout |
| `launch_codex_app` | 0x10055afd0 | NEW | 3-path launch with 3s poll loops |
| `request_codex_app_quit` | 0x10055bc10 | NEW (called) | osascript 'tell application "Codex" to quit' |
| `kill_codex_processes_until_clear` | 0x10055e390 | NEW (called) | Hard kill after graceful attempt |
| `refresh_full_runtime_snapshot_with_source` | 0x100626f60 | NEW | load_full_runtime_snapshot + broadcast Tauri event |
| `broadcast_runtime_snapshot` | 0x100620750 | NEW (called) | Tauri event emit to frontend |
| `append_switch_warning` | 0x1006205f0 | NEW | Pushes "RUNTIME_REFRESH_FAILED_AFTER_SWITCH" warning |
| `confirm_pending_auto_switch_and_restart_sync` | 0x10061e190 | NEW IPC | New Tauri command in system module |
| `Repository::confirm_pending_auto_switch` | 0x1004cd9b0 | NEW | Load+apply pending auto-switch |
| `Repository::load_pending_auto_switch` | 0x1004c8200 | NEW | serde_json parse pending switch file |

### Unchanged from 1.0.9

| Function | VA | Note |
|---|---|---|
| `switch_account_sync` | 0x1006200f0 | callee set identical — StateManager + Repository::switch_account |
| `Repository::switch_account` | 0x1004c0350 | unchanged |

### Noise filtered (not delta)

- All `drop_in_place` / tokio `Stage`/`Cell` wrappers for the closure type — name changed to include
  `switch_account_and_restart_codex` namespace but that is Rust monomorphisation rename, not app logic.
- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / `Mutex::lock` / `Mutex::unlock` — compiler pattern, unchanged.
- Alloc size adjustments in `rust_alloc` calls — stack frame grew due to new locals, not app logic.

---

## Key strings discovered

| Address | Content | Significance |
|---|---|---|
| 0x10055b772 | `"Codex launch timed out"` (22 bytes) | Error code 9 on launch timeout |
| 0x10055b2b6 arg | `"/Applications/Codex.app"` (23 bytes) | Fallback launch path 2 |
| 0x1006205f0 alloc | `"RUNTIME_REFRESH_FAILED_AFTER_SWITCH"` (35 bytes) | Warning code in SwitchResult |
| 0x1004cda34 | `"No pending auto-switch request"` (30 bytes) | Error code 7, no pending |
| 0x1010e7311 | contains `switch_account_and_restart_codex` | IPC command name |
| 0x10114801b | contains `confirm_pending_auto_switch_and_restart_codex` | New IPC name |

---

## DTOs / interfaces inferred

### SwitchRollbackState (new struct)
Captured at `capture_switch_rollback_state`. Passed as `v60[0..3]` (4 slots) to
`FileRestoreState::restore`. Layout from stack offsets:
- slot 0: accounts-db file state (base `v60`)
- slot 1: sessions-db file state (`__dsta + 16`)
- slot 2: hotspot-json file state (`__dsta + 64`)
- slot 3: config-json file state (`__dsta + 112`)

Each `FileRestoreState` slot: `{ exists: bool, path: String, bytes: Option<Vec<u8>> }`
(inferred from `restore`: branch on `captured_as_nonexistent` flag, then `remove_file` vs `write`).

### Warning code string
`"RUNTIME_REFRESH_FAILED_AFTER_SWITCH"` — pushed as `Warning { code: str, message: CoreError_string }`
into `SwitchResult.warnings` (stride=48 bytes per entry, cap field at +55, len at +57).

### Pending auto-switch file
Path: `AppState` fields at offset +488 (ptr) and +496 (len) — a `&str` / `String` path.
Content: JSON-serialized `AccountSummary` (serde_json).
Error code 7 = "No pending auto-switch request".

---

## Side-effects matrix

| Side-effect | 1.0.9 | 1.1.1 |
|---|---|---|
| Write account files (switch_account) | YES | YES |
| Read 4 config/db files before switch | NO | YES (new capture) |
| Write back 4 config/db files on failure | NO | YES (new restore) |
| Send osascript quit to Codex.app | NO | YES (stop_codex_for_file_edit) |
| Kill Codex process (SIGKILL path) | NO | YES (kill_codex_processes_until_clear) |
| Launch Codex.app (open -b / path) | NO | YES (launch_codex_app) |
| Emit Tauri broadcast event to frontend | NO | YES (broadcast_runtime_snapshot) |
| Append warning string to SwitchResult | NO | YES (RUNTIME_REFRESH_FAILED_AFTER_SWITCH) |
| Read pending auto-switch JSON file | NO | YES (confirm_pending_auto_switch path) |

---

## IDB annotations written

All functions annotated with `append_comments` (scope=func):
- 0x100624e90, 0x100621a40, 0x100621bb0, 0x10061fd20
- 0x1006205f0, 0x100626f60, 0x10061e190, 0x1004cd9b0
- 0x10055afd0, 0x10055c090

idb_save: see separate confirmation below.

---

## Gate verdict

delta_class: integrity_recovered (was mis-classified as "same" in prior sweep)
completeness: FULL — all 5 layers reached (IPC → sync_body → rollback/relaunch → platform → fs/process leaf)
three-angle check:
  1. Function symbol enumeration: 14 new app-level symbols found via func_query name_regex
  2. String evidence: 5 new hardcoded strings discovered
  3. Side-effect / DTO: new SwitchRollbackState struct, Warning code string, pending-switch JSON file path
readyToImplement: YES
strictImplementationUse: YES
