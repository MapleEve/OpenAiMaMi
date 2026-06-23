# Interface / DTO — switch_account_and_restart_codex (AiMaMi 1.1.1 macOS)

## IPC Command Registration

Registered as Tauri IPC command via blocking-task wrapper.
Frontend invoke: `switch_account_and_restart_codex`

## Input DTO

Inferred from `switch_account_sync` call signature and `Repository::switch_account` parameter handling:

| Field | Type | Notes |
|---|---|---|
| `accountKey` | `String` | account identifier; matched against `registry[entry+136..+144]` (ptr+len) |

Envelope: `CoreEnvelope<SwitchPayload>` wraps input; `SwitchPayload` contains `accountKey` field confirmed by `drop_in_place<CoreEnvelope<SwitchPayload>>` symbol.

## Output DTO

### Success (discriminant = Ok / 0)

`CoreEnvelope<SwitchPayload>` containing:
- `SwitchPayload` (same as `switch_account`)
- warnings array: may include `CLIENT_RESTART_RECOMMENDED` (always present, from Repository layer)
- warnings array: may additionally include `RUNTIME_REFRESH_FAILED_AFTER_SWITCH` if post-relaunch snapshot refresh failed

### Error (discriminant = 2 / Err)

String joined with ` | ` separator. Possible components:
- Switch failure: CoreError from `Repository::switch_account` formatted via Display
- Rollback failure: `"Rollback failed: <path> — <io_error>"`
- Relaunch failure: `"Codex restart failed: <CoreError>"`
- Recovery relaunch failure: `"Codex recovery failed: <CoreError>"`
- Refresh failure: `"Switched account, but runtime refresh failed: <AppStatusPayload_error_string>"`
- Stop timeout: `"CODEX_APP_QUIT_TIMEOUT: Codex did not quit in time; please quit Codex manually and try again"`
- Launch timeout: `"Codex launch timed out"`

### Rollback capture error (discriminant = 2 / Err, early exit)

Returns immediately if `capture_switch_rollback_state` fails with mutex error:
- `"poisoned lock: another task failed inside"`

## Side Effects

1. **File system** (on success):
   - Auth file backup: `<authFilePath>.<timestamp>` (copy of previous auth file)
   - Active auth file: overwritten with new account auth file
   - Registry file: updated (new account marked active, timestamp set, auto-switch state cleared)
   - `CodexPaths::ensure_directories` called to create missing directories

2. **File system** (on rollback — 4 restore slots):
   - Each `FileRestoreState` slot: either `remove_file` (delete-sentinel) or `mkdir_all + fs::write` (restore bytes)

3. **Process** (on success path):
   - Codex process quit request (AppleEvent) + 50ms polling wait (up to 5s timeout)
   - `kill_codex_processes_until_clear` (SIGKILL fallback)
   - Codex app launch via `open -b <bundle_id>` + 3s readiness poll (80ms intervals)

4. **Tauri event broadcast** (always, on refresh):
   - `broadcast_runtime_snapshot` → emits runtime state event to all frontend windows

## Error Taxonomy

| Error string | Condition | Blocking |
|---|---|---|
| `No AiMaMi registry exists yet` | registry file not found | yes |
| `CODEX_APP_QUIT_TIMEOUT: ...` | Codex did not quit in timeout window | yes |
| `Codex launch timed out` | Codex not running after 3s + retry exhausted | yes |
| `Rollback failed: ...` | restore file write/remove failed | yes (in error join) |
| `CLIENT_RESTART_RECOMMENDED` | always present in success warnings | no (warning only) |
| `RUNTIME_REFRESH_FAILED_AFTER_SWITCH` | snapshot refresh failed after successful switch+relaunch | no (warning only) |
