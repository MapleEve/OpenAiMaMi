# Evidence pointers — windows-1.2.3-bootstrap

All paths are relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` (SMB share root
`` on this machine).

## New canonical leaf (this package)

- `raw/aimami/1.2.3/windows-x64/manager/ida/pseudocode/bootstrap_0x14085a330.c` — `manager_bootstrap`
  (core::relay::manager::bootstrap), 646 lines, full non-truncated Hex-Rays decompile.
- `INDEX.jsonl` key `aimami/1.2.3/windows-x64/manager/backend-pseudocode-leaf` (session
  `manager-win-deepdecompile-20260724`) — pre-existing narrative summary and owner-map source for
  the same function, consumed not re-derived this session.
- `raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl` — owner-map source (177 entries) that
  attributes VA 0x14085a330 to `core::relay::manager` module, `bootstrap` name.

## Cross-referenced, owned by sibling canonical packages (NOT duplicated here)

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/load_bootstrap_state_0x14018b520.c` — owner:
  `internal-reverse/audits/windows-1.2.3-daemon-autoswitch/`.
- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/store_bootstrap_snapshot_best_effort_0x1403ec5e0.c`
  — owner: `internal-reverse/audits/windows-1.2.3-accounts/`.
- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/load_snapshot_0x140cb5e50.c` —
  owner: `internal-reverse/audits/windows-1.2.3-accounts/`.
- `raw/aimami/1.2.3/windows-x64/commands/tray_menu/ida/pseudocode/create_bootstrap_tray_menu_0x1403f2350.c`
  — owner: `internal-reverse/audits/windows-1.2.3-tray/`.
- `dismiss_pending_auto_switch` / `load_pending_auto_switch` / `confirm_pending_auto_switch` /
  `confirm_pending_auto_switch_and_restart_codex` raw evidence — owner:
  `internal-reverse/audits/windows-1.2.3-daemon-autoswitch/` (see that package's own
  `pointers/evidence-paths.md` for exact file paths; not re-listed here to avoid a second
  authoritative pointer to the same raw file, per RULE8 one-canonical-name-per-leaf).

## Frontend cross-check (dim1, this platform's own frontend)

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` (131 commands) — confirmed
  `load_bootstrap_state` present (`tauriInvokeWrapper`, line 87 minified bundle
  `assets/index-B40jKs17.js`).
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` (248 rows) — grep hit counts
  this session: `load_bootstrap_state`=2, `load_pending_auto_switch`=3,
  `dismiss_pending_auto_switch`=2, `confirm_pending_auto_switch`=1,
  `confirm_pending_auto_switch_and_restart_codex`=2, `load_snapshot`=2,
  `store_bootstrap_snapshot_best_effort`=0, `create_bootstrap_tray_menu`=0 (the last two are
  internal helpers, not direct invoke() targets, consistent with zero hits).

## RULE9 comparison baseline (1.0.9, same platform prior version)

- `internal-reverse/audits/windows-1.0.9-bootstrap/` — full strictImplementationUse-tier 5-leaf
  package (app_run_entry, boot_spawn_threads, bootstrap_cache, managed_state_registry, plus
  system-shell-init supplement load_snapshot). Referenced for VA/shape comparison; NOT migrated
  (zero 1.2.3 windows raw evidence exists to support migration per RULE9 `diff_required`).
- `raw/aimami/1.0.9/windows/bootstrap/{app_run_entry,boot_spawn_threads,bootstrap_cache,managed_state_registry}/`

## Cross-version, cross-platform comparison (referenced, not migrated)

- `internal-reverse/audits/macos-1.2.3-bootstrap/` — same-version macOS sibling (consumerStartReady
  4/4, triage-only). `AI.md` §"Next-session quickstart" step 3 records that `RelayManager::new`'s
  own body was not opened on the macOS side either — this package's `manager_bootstrap` evidence is
  a candidate lead for that open question, cross-referenced not merged.
- `internal-reverse/audits/cross-1.2.3-relay-core-bootstrap/` — diagnostic-only dependency-
  completeness finding that recorded windows-1.2.3-bootstrap as "completely absent, unattempted"
  prior to this session (confirms no owner collision existed before this package was created).

## Working scratch (not evidence)

- Collision-gate ownership checks (`grep -rl` across every `audits/windows-1.2.3-*/` for each of the
  5 bootstrap-filename-matched raw files, plus RULE9-baseline VA/name searches across the full
  windows-x64 1.2.3 raw tree) were run ad-hoc during this session and are not saved as reusable
  scripts (AGENTS.md storage red line — bulk generated output stays out of `internal-reverse/`); the
  grounded results are captured in full in `manifest.json` §coverage and §known_residuals and in
  `gate-report.json` §cross_referenced_not_duplicated / §rule9_baseline_gap_leaves.
