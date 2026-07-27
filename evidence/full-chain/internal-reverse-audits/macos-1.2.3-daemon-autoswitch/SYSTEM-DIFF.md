# System Diff — AiMaMi 1.2.3 daemon-autoswitch (macOS-arm64)

## Platform Artifacts

- Binary: macOS arm64 Mach-O, SHA cited from sibling `../macos-1.2.3-relay/manifest.json` (`e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`) since this domain shares the same App binary; NOT independently re-verified against these specific .c files' own provenance this pass (same open caveat the Windows sibling recorded for its own raw tree).
- Windows sibling: see `../windows-1.2.3-daemon-autoswitch/SYSTEM-DIFF.md`; PE AMD64, SHA `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (same binary cited by `../windows-1.2.3-relay/` and `../windows-1.2.3-maintenance/`).

## Frontend IPC / Control-flow

- 8/13 canonical commands have `tauriInvokeWrapper` hits in `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`: `run_daemon_once`, `load_bootstrap_state`, `load_pending_auto_switch`, `dismiss_pending_auto_switch`, `confirm_pending_auto_switch`, `confirm_pending_auto_switch_and_restart_codex`, `configure_auto_switch`, `set_auto_switch`.
- 5/13 have zero hits: `note_usage_refresh_activity`, `schedule_full_runtime_refresh`, `start_usage_refresh_watcher`, `update_usage_refresh_schedule`, `start_auto_switch_pending_watcher` -- consistent with the 1.0.9 baseline's "native-thread, no IPC surface" classification for the same 5 commands, not independently re-verified backend-side this pass.
- Of the 8 with facade hits, only 5 have a traced UI-component caller in the 3 already-extracted page docs read this pass (`configure_auto_switch`, `set_auto_switch`, `load_pending_auto_switch`, `dismiss_pending_auto_switch`, `confirm_pending_auto_switch_and_restart_codex`); `run_daemon_once`, `load_bootstrap_state`, and `confirm_pending_auto_switch` (plain) are registered in the facade but no calling component was found -- for `confirm_pending_auto_switch` specifically this raises an open possible-dead-code question since only its `...AndRestartCodex` sibling is actually called.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 9/13 canonical commands: exact-name-matched, complete, non-truncated Hex-Rays pseudocode (`load_bootstrap_state`, `note_usage_refresh_activity`, `start_usage_refresh_watcher`, `update_usage_refresh_schedule`, `start_auto_switch_pending_watcher`, `load_pending_auto_switch`, `dismiss_pending_auto_switch`, `configure_auto_switch`, `set_auto_switch`).
- 1/13 (`schedule_full_runtime_refresh`): zero raw evidence anywhere in the macOS 1.2.3 tree.
- 3/13 (`run_daemon_once`, `confirm_pending_auto_switch`, `confirm_pending_auto_switch_and_restart_codex`): no exact-name match; each has a plausible-but-unconfirmed name-adjacent candidate (`run_daemon_once_blocking`, `confirm_pending_auto_switch_async`, `perform_switch_payload_with_restart` respectively).
- Real behavior-change signal vs 1.2.2: 8 functions in the underlying `core::repository`/`commands` support layer carry a genuine, header-embedded `1.2.3 NEW-delta` provenance tag: `perform_switch_payload_with_restart`, `run_daemon_once_blocking`(0x1007c8fe0), `clear_pending_auto_switch_request`, `clear_pending_auto_switch_request_if_cur`, `confirm_pending_auto_switch`(one of two addresses), `reconcile_auto_switch_request`, `restore_auto_switch_service`, `update_auto_switch_config`. Consistent with the "account switching stability" changelog item cross-referenced from `../macos-1.2.3-relay/README.md`.
- Backend decompile completeness: all 59 scoped raw .c files (55 auto-switch-domain + 4 additional exact daemon-command matches) checked for brace-balance + TRUNCATED/chars-total markers this pass -- 0 flagged, i.e. every produced file is a genuine complete decompile, not a truncation stub masquerading as complete (red line 20 check).
- launchd-level implementation detail (not a canonical command itself): `platform::daemon::install_daemon` writes `~/Library/LaunchAgents/dev.aionsale.auto-switch.plist` (label `dev.aionsale.auto-switch`), runs `launchctl unload`+`load` and `xattr -c` to strip quarantine; `check_daemon_state` combines `fs::metadata` + `launchctl_label_exists` into a 3-state result (loaded / installed-not-loaded / not-installed).

## Interface / Error / Boundary

Not independently extracted for 1.2.3 (dim4 gap, see gate-report.json). `../macos-1.0.9-daemon-autoswitch/interfaces/{autoswitch-commands.md,daemon-commands.md}` exist but are historical-reference-only, not 1.2.3 evidence.

## Gate Leaf

consumerStartReady 0/13; strictImplementationUse 0/13; readyToImplement 0/13. See gate-report.json for the deliberate-conservative-posture rationale.

## Plugin / Capability

Not in scope for this daemon-autoswitch-only package.

## OTA / Package

Not evaluated this pass (out of scope).

## Resource / Binary Surface

Daemon domain: 8 raw .c files across `platform/daemon/` (6) + `run_daemon_once_cli`/`run_daemon_once_inner` (2). Auto-switch domain: 47 raw .c files across `commands/system` + `commands/accounts` + `core/repository` + `core/models`. Total 55 unique files matched via `auto_switch`/`autoswitch`/`AutoSwitch` substring grep, cross-checked with 4 additional exact-command-name matches not caught by that grep pattern (`load_bootstrap_state`, `note_usage_refresh_activity`, `start_usage_refresh_watcher`, `update_usage_refresh_schedule`).

## Unknown

- 3 command-identity mappings (`run_daemon_once`, `confirm_pending_auto_switch`, `confirm_pending_auto_switch_and_restart_codex`) unresolved.
- `schedule_full_runtime_refresh` existence at 1.2.3 unconfirmed (zero raw evidence, not IDA-verified absent).
- 5 zero-frontend-hit commands' true dim1 status at 1.2.3 unconfirmed (consistent-with-1.0.9-pattern only, weak grep-level cross-check).
- Whether the 32 `基线 same-set`-tagged functions in this domain are genuinely byte-identical to their 1.0.9 counterparts is NOT independently re-verified this pass -- the tag is inherited provenance metadata from a prior collection pass, read but not re-confirmed.
