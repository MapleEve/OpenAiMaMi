# System Diff — macos-1.2.3-system

## Platform Artifacts

- macOS: `.app` bundle Mach-O `codexmate_lib`, sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (same core-module sha referenced by the macos-1.2.3-relay/skills/accounts sibling packages per INDEX.jsonl; this package did not independently recompute it).
- Windows: PE, sha256 not independently confirmed this pass (not carried forward from any INDEX.jsonl entry checked this session).

## Frontend IPC / Control-flow

26 system-domain invoke commands identified via `frontend/ipc-contracts.jsonl` cross-check (angle-B), no component-tree/interaction-sequence reversal performed this pass (dim1 weak, see AI.md). See README.md "Per-target 命令清单" for the full list and README.md "Unknown" item 2 for the confirm_pending_auto_switch ownership ambiguity.

## Backend Commands / Control-flow / Pseudocode / Call-tree

- `commands::system::*`: 34 files, 0 truncation per `commands-baseline.md` §2's batch scan (145-file commands-layer scan, system included). 1.2.3 NEW-delta marked: `run_daemon_once_blocking` + 2 internal closures; remaining 31 files marked `基线 same-set`.
- `platform::{process,paths,debug_log,daemon,single_instance,system_volume,proxy}::*`: 85 files per `platform-baseline.md`'s own table / 95 per this session's independent `find` (discrepancy disclosed in README.md, not reconciled). 0 truncation per `platform-baseline.md`'s batch scan. `process` (34 files) carries no same-set/delta classification at all -- `platform-baseline.md` attributes this to the classification script not having processed that directory, not to decompile failure, and states it verified function-body completeness by direct read.
- Destructive/side-effecting operations identified (from commands-baseline.md §12 + platform-baseline.md's per-function notes, both restricted to this module's scope):
  - `force_kill_codex` (system) -- `CodexProcessLifecycle::force_close_all`, force-terminates ChatGPT/Codex processes.
  - `restart_codex` (system) -- process restart.
  - `open_path` (system) -- `Command::new("open")` spawns external process.
  - `CodexProcessLifecycle::prepare_transition` (platform::process) -- `osascript -e 'tell application id "com.openai.codex" to quit'` (AppleScript quit request to a third-party app), followed by a force-kill escalation path (`kill_codex_processes_until_clear`) if graceful quit does not clear within a ~3s window.
  - `install_daemon`/`uninstall_daemon` (platform::daemon) -- writes/removes a LaunchAgent plist and registers/deregisters with `launchctl`.
  - `single_instance::acquire` (platform::single_instance) -- `flock` exclusive lock + PID write to a lock file (non-destructive lock, listed for completeness).
  - `system_volume::lower_inner`/`clear_marker` (platform::system_volume) -- temporarily modifies macOS system output volume (reversible) + deletes a marker file.
  - `proxy::detect_system_proxy_candidates` (platform::proxy) -- outbound network request to a configured PAC URL (`reqwest::blocking`), a network side effect not a filesystem one.

## Interface / Error / Boundary

Not independently extracted this pass (dim4 gap). `platform::paths::harden_private_file`/`harden_private_tree` and `single_instance::acquire`'s `flock` are boundary-adjacent facts narrated in platform-baseline.md but not compiled into a structured table here.

## Gate Leaf

consumerStartReady 26/26; strictImplementationUse/readyToImplement 0/26. See gate-report.json.

## Plugin / Capability

Not in scope for this package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

- `commands/system`: 34 files, all real-named per commands-baseline.md.
- `platform/*` (7 subdirs): 85 (baseline table) / 95 (this session) files -- see README.md discrepancy note.
- `core::bootstrap_cache` (9 files, backing `load_bootstrap_state`): genuinely un-distilled by any available baseline document -- see README.md Unknown item 4.
- Windows: `commands/system` 6 files (0 named), `system_volume_windows` 3 files (0 named) -- materially thin.

## Unknown

See README.md "Unknown / Missing" (7 items) -- summarized: platform file-count discrepancy, confirm_pending_auto_switch ownership ambiguity, missing frontend control-flow document, un-distilled bootstrap_cache, unattempted semantic orphan scan, unclosed Windows platform gate, unattempted DTO/test-mapping passes.
