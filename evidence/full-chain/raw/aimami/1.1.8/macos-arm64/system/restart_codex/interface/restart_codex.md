# Interface — `restart_codex` (AiMaMi 1.1.8, macos-arm64)

session `<审计会话>` | deep gold-leaf 20/29 (macos-arm64 batch) | owner `codexmate_lib::commands::system::restart_codex::hb63e3eeac5d259e2` @ `0x1006c8fb0`

## Request (frontend -> IPC)

- Tauri command name: `restart_codex`
- `argKeys`: `[]` (zero-argument command; confirmed via `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 82 — `{"argKeys": [], "argObject": null, "callee": "te", "command": "restart_codex", "file": "assets/index-CX-I_QAq.js", "kind": "tauriInvokeWrapper", "line": 86, "params": "()"}`)
- Unchanged vs 1.0.9/1.1.1 frontend surface (`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-same.mac.txt` line 82)

## Response

- Result-niche encoding, no explicit success payload: `Ok(())` on success, `Err(CoreError)` on failure.
- Success discriminant: both `stop_codex_for_file_edit` and `launch_codex_app` must return discriminant `10` (their own internal "ok" tag); `restart_codex` itself then zeroes/returns without setting the Err-niche sentinel.
- Err-niche sentinel: `0x8000000000000000` written to the first machine word of the return struct when either sub-step fails.
- Error payload (failure path only): the `CoreError` returned by `stop_codex_for_file_edit` is converted with `Display::fmt`; a failed `Display::fmt` call itself triggers `core::result::unwrap_failed` (Rust panic) — an internal invariant violation path, not a normally reachable user-facing branch (Display::fmt on this crate's own error enum practically cannot fail).
- `launch_codex_app`'s own failure message on relaunch spawn/poll failure is a **byte-identical 22-byte literal `"Codex launch timed out"`** to the one already documented in the 1.1.1 baseline (`REVERSE-STATUS.md` line 376) — zero delta.
- Generic OS-level `open`/`stat` spawn failures separately format `"open app failed: {io_error}"` (`aOpenAppFailed` literal).

## Side effects (all local-machine, no HTTP/network, no sidecar dispatch)

1. **Graceful quit attempt** — `request_codex_app_quit` spawns `osascript -e 'tell application "Codex" to quit'` (AppleScript) targeting the `Codex.app`/`Codex Helper` process tree. Only attempted if `is_process_running()` is true. Its own error (if any) is intentionally discarded (dropped, not propagated) — a best-effort step.
2. **Bounded poll wait** — after the graceful-quit attempt, a `std::time::Instant`-based loop (budget = 5s, 50ms sleep interval) re-checks `is_process_running()` until it clears or the budget is exhausted.
3. **Forceful cleanup (unconditional)** — regardless of whether step 2 succeeded, `kill_codex_processes_until_clear` always runs: it (a) enumerates live processes via `ps -A -o pid=,command=`, filters for Codex-named entries, and additionally (b) enumerates PIDs holding an open file handle on the local Codex state-db (and its `-wal`/`-shm` companion files, resolved via `CodexPaths::resolve_codex_home`/`resolve_codex_state_db`) via `lsof`; both PID sets are merged (minus this process' own PID via `std::process::id`) into a kill-target map, each filtered through `extract_process_name`'s basename exclusion so AiMaMi's own process, Cursor.app, and `.cursor/extensions` helper processes are never targeted; the merged target set is then `kill`ed (SIGKILL/forceful), looped with an `Instant`/`Duration` timeout + `sleep` re-check.
4. **Relaunch** — `launch_codex_app` spawns `open -b com.openai.Codex` (Launch Services relaunch by bundle identifier), with a home-dir + `stat()`-equivalent `metadata()` existence probe as a candidate-path check beforehand, then polls `is_process_running()` for up to 3s (80ms sleep interval) to confirm the relaunch succeeded.

No filesystem writes, no HTTP/network calls, and no sidecar/child-daemon dispatch were observed anywhere in this command's call tree (all "external_call" termini are local OS process-management subprocess spawns: `osascript`, `ps`, `lsof`, `kill`, `open`).

## Cross-version delta (1.0.9 -> 1.1.1 -> 1.1.8)

- 1.0.9: no standalone `restart_codex` full-chain leaf was ever produced (only the composite commands `confirm_pending_auto_switch_and_restart_codex` and `switch_account_and_restart_codex` were reversed at that version); frontend command itself already existed.
- 1.1.1: full-chain leaf DONE (`REVERSE-STATUS.md` line 367, session `<审计会话>`), owner `0x100616150` (299B), same 6-function set (`stop_codex_for_file_edit`/`launch_codex_app`/`request_codex_app_quit`/`kill_codex_processes_until_clear`/`is_process_running` + IPC dispatcher), call-tree depth reached there = 3 (20 edges), same terminal syscalls (`pgrep -x Codex` / `osascript quit` / `kill -9` / `open -b bundleId` / `open Codex.app`), argKeys=[], response niche `0x8000000000000000`, error `"Codex launch timed out"` (22B) — **byte-identical** to this round's finding.
- 1.1.8 (this leaf): VA churn only (owner `0x100616150` -> `0x1006c8fb0`); same function set confirmed, PLUS this round traces one level deeper into `kill_codex_processes_until_clear`'s own callees (`collect_codex_kill_targets` -> `list_codex_db_holder_processes`/`list_codex_processes_matching`/`extract_process_name`), reaching call-tree depth 5 (20 edges vs the 1.1.1 baseline's depth-3/20-edge trace) — a strictly deeper trace of the same unchanged behavioral contract, not a behavioral delta. Zero observed behavioral delta 1.1.1->1.1.8.

## Fake-wall / anti-cheat check

`accepted_unknown=false`; `genuine_ceiling=false`. All 10 functions in the traced call tree (owner + 9 callees) decompiled to a real, non-truncated Hex-Rays body (largest: `list_codex_db_holder_processes` at 29071 chars raw code, no truncation marker, no `basic_blocks` chunking required). No async/poll state machine, no vtable/dynamic dispatch, no ICF folding encountered anywhere in this leaf.
