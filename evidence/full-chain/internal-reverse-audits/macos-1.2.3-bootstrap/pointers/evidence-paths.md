# Evidence pointers — macos-1.2.3-bootstrap

All paths are relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (SMB share root
`` on this machine).

## Raw input (untouched, physically unmoved)

- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/*.c` — the 89 triaged files (88 closures +
  1 top-level `run()` function), produced by `<审计会话>

## Bootstrap-classified (4 files)

- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1006f50c0.c` — app_run_entry (top-level `run()`)
- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1009b4d30.c` — bootstrap_cache analog (`load_bootstrap_state`)
- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1009a80d0.c` — auto_switch_pending_emitter analog (`dismiss_pending_auto_switch`)
- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1009b1d50.c` — auto_switch_pending_emitter analog (`load_pending_auto_switch`)

## Comparison baseline (1.0.9)

- `internal-reverse/audits/macos-1.0.9-bootstrap/` — README.md/AI.md/SYSTEM-DIFF.md/manifest.json/
  logic/BOOTSTRAP-DEEP-DISTILLED-109.md (4-leaf 1.0.9 macOS bootstrap package: app_run_entry,
  boot_spawn_threads, bootstrap_cache, managed_state_registry).
- `raw/aimami/1.0.9/macos/bootstrap/{app_run_entry,boot_spawn_threads,bootstrap_cache,managed_state_registry}/`

## Baseline / coverage source docs (1.2.3, consumed not migrated)

- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md` — full independent 1.2.3 baseline (1638
  mac functions, 9 coverage groups incl. `run-app-misc | 155`).
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md` — delta-vs-1.2.2 coverage view.

## Frontend cross-check (used to confirm command names, not re-extracted)

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 registered commands, used to
  confirm `load_bootstrap_state`/`dismiss_pending_auto_switch`/`load_pending_auto_switch` are real
  named Tauri commands.

## Sibling/adjacent canonical bundles referenced (not duplicated here)

- `internal-reverse/audits/macos-1.2.3-relay/` — owns the 15 relay-module `run_0x*` closures
  identified in this triage (`compose_proxy_status`, `get_active`, etc.) — cross-reference only,
  no content copied.
- `internal-reverse/audits/macos-1.2.3-tray/` — owns `run_0x1009a8850.c` (`handle_tray_menu_event`)
  — cross-reference only.

## Working scratch (not evidence, local machine only, not synced)

- Full per-file classification table and grep-derived call-target extraction was computed in a
  local scratch directory during this session (not an evidence path per AGENTS.md storage
  red line — bulk generated/derived text stays out of `internal-reverse/`); the grounded result of
  that computation is captured in full in `logic/FULL-CHAIN-1.2.3.md` §3 of this package.
