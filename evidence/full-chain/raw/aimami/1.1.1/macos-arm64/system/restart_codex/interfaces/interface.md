# restart_codex — Interface / DTO / Error Envelope / Side-Effect Boundary
## Platform: macos-arm64  Version: 1.1.1
## Session: <审计会话>

## Command Registration
- IPC command name: `restart_codex`
- Module: `codexmate_lib::commands::system`
- is_upstream: false (内部构建-extra command; not in upstream codex-cli)

## ArgKeys
- `[]` — no arguments required
- `argObject`: `null` / no payload
- Frontend invoke: `ne("restart_codex")` / `vt("restart_codex")` — bare call, no args

## Response
- Success: `CoreEnvelope::ok(())` — discriminant `0x8000000000000000` (unit Ok)
- Error (stop failed): `CoreEnvelope::err(CoreError)` — formatted via `CoreError::fmt`
- Error (launch failed): `CoreEnvelope::err("Codex launch timed out")` — tag=9, 22B string
- Error (launch io): `CoreEnvelope::err(io::Error::Display)` — tag=9, io error string
- Quit timeout: pass-through to kill_until_clear (graceful quit error is non-fatal)

## Response discriminants (macOS)
| tag | meaning |
|-----|---------|
| `0x8000000000000000` | Ok(()) — restart succeeded |
| `9` (via CoreError) | Err(String) — stop or launch failed |
| `10` (platform internal) | Ok discriminant inside platform functions |

## Side Effects
1. **Codex process kill**: sends `osascript -e 'tell application "Codex" to quit'`, then `kill -9 <pids>` via `collect_codex_kill_targets`
2. **Codex process launch**: `open -b <bundleId>` or `open ~/Applications/Codex.app` or `open /Applications/Codex.app`
3. **No persistence**: no file writes, no registry, no config changes
4. **No network**: no HTTP calls
5. **Thread sleep**: 50ms / 80ms / 250ms poll intervals during operation

## Platform Timing (macOS arm64)
- `is_process_running` poll interval: 50ms (stop phase)
- Graceful quit wait timeout: passed from caller (5s based on a2=5 param)
- Kill loop sleep: 300ms per round, 3s deadline
- Launch poll interval: 80ms
- Launch wait timeout: 3s per attempt
- Retry sleep: 250ms between launch attempts

## Platform Delta vs Windows x64
| aspect | macOS arm64 | Windows x64 |
|---|---|---|
| is_process_running | `pgrep -x Codex` | `CreateToolhelp32Snapshot + Process32FirstW/NextW` |
| graceful quit | `osascript -e "tell application Codex to quit"` | `WakeByAddressSingle(&byte_1418933A8)` |
| force kill | `kill -9` per-pid | `taskkill /IM Codex.exe` + `taskkill /F /T /PID` |
| launch paths | `open -b bundleId` → `~/Applications/Codex.app` → `/Applications/Codex.app` | 10-path scan (LOCALAPPDATA/PROGRAMFILES + reg query + where + powershell) |
| launch poll | 80ms / 3s | 80ms / 5s |
| quit timeout | 5s (stop phase) | 5s poll phase |
| kill deadline | 3s | 3s |

## Frontend Consumers (macOS same JS bundle)
- `restartCodex()` → `ne("restart_codex")` col=31166 — `assets/index-DdcCOEJG.js:86`
- `restartCodexApp()` → `vt("restart_codex")` col=120773 — `assets/index-DdcCOEJG.js:86`
- Callsites: `N.restartCodex()` in `assets/maintenance-page-C2wkSNnk.js:17`
- Callsites: `ft.restartCodexApp()` in `assets/relay-page-CsHU7KuS.js:43` (with guard: after api slots mutation if t=true)

## Accepted Unknowns (non-blocking)
- bundleId string exact value at 0x10114F1A0 and 0x10114F1B0 (packed blob, not decoded)
- dim5_win: macOS confirms macos-arm64 only; Windows done separately (INDEX line 1481)
- dim6 test/acceptance mapping: 内部构建 implementation side responsibility
