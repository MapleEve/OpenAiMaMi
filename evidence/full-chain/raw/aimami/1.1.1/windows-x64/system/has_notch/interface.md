# has_notch — Interface / DTO / Error / Side-Effect Boundary
# Platform: windows-x64 | Version: 1.1.1 | Session: <审计会话>

## Command
- IPC command string: `"has_notch"` @ `0x1412ac463`
- Context: `"app"`

## Input (argKeys)
- `argKeys = []` — no input parameters
- Frontend invoke: `invoke("has_notch")` with no args

## Output
- Return type: `bool`
- Return value (Windows): `true` (fixed constant, `v28 = 1` @ `0x14002314f`)
- Encoding: Tauri IPC JSON response envelope `Ok(true)`
- Frontend consumption: boolean value used to control notch-related UI

## Error Envelope
- On param parse failure (`v19 != 3`): standard Tauri error response via `sub_14082F2D0`
- No domain-specific error cases (no IO, no system API)

## Side Effects
- None — pure read-only response, no file/registry/process/sidecar activity

## Platform Differences
| Platform | Behavior | Evidence |
|---|---|---|
| Windows x64 | Returns `true` (fixed constant) | 0x14002314f: `v28=1`, no system API |
| macOS arm64 | Checks hardware notch via display geometry (NSScreen) | 1.0.9 baseline |

## Notes
- Windows implementation is a compile-time/startup constant, not a runtime hardware check
- Possible intent: Windows AiMaMi always presents as "notch available" for UI consistency
- Or: Windows port has simplified stub implementation
