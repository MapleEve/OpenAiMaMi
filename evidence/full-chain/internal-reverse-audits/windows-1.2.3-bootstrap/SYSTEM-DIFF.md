# System Diff — Windows 1.2.3 bootstrap (vs windows-1.0.9-bootstrap baseline, RULE9)

## Platform Artifacts

- Windows-x64 only, binary SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`
  (matches sibling windows-1.2.3-relay/windows-1.2.3-maintenance/windows-1.2.3-daemon-autoswitch
  packages' cited binary).
- macOS: Unknown from this package's own work — see macos-1.2.3-bootstrap (independent package, not
  migrated here); do not infer macOS from this Windows-only package.

## Frontend IPC / Control-flow

- Not independently traced for `manager_bootstrap` this session (dim1 accepted N/A, not
  re-verified).
- The 6 IPC-command-level bootstrap-domain functions found by filename search
  (`load_bootstrap_state`, `dismiss_pending_auto_switch`, `load_pending_auto_switch`,
  `confirm_pending_auto_switch`, `confirm_pending_auto_switch_and_restart_codex`, `load_snapshot`)
  all have confirmed hits in `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl`
  (this platform's own frontend, per the task's dim5 instruction) — but all 6 are already canonically
  owned by `windows-1.2.3-daemon-autoswitch` (5) or `windows-1.2.3-accounts` (1), not this package.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- `manager_bootstrap` (`core::relay::manager::bootstrap`, VA 0x14085a330, 646-line full decompile,
  read in full this session): calls `ensure_proxy_started` (same module, starts the local relay
  proxy listener if not already running) and the internal helper `sub_14085A1E0` (poisoned-lock/
  state-transition support) — one hop traced, neither callee's own body opened.
- vs windows-1.0.9-bootstrap: **no direct VA/name match** among the 5 baseline leaves
  (app_run_entry/boot_spawn_threads/bootstrap_cache/managed_state_registry/load_snapshot). This may
  be a genuinely new 1.2.3 architecture element (relay manager subsystem split out as its own
  bootstrap step) or may correspond to implementation detail inside one of the 1.0.9 leaves that
  wasn't itself individually named at that VA granularity in the 1.0.9 build — not determined this
  session, recorded Unknown rather than guessed.
- The 5 windows-1.0.9-bootstrap baseline leaves (`app_run_entry` 0x140004B30, `boot_spawn_threads`
  0x14028CCB0, `bootstrap_cache` 0x140272E80/0x1402663E0, `managed_state_registry` 0x141208810,
  `load_snapshot`-system-shell-init-supplement 0x1408c2e10/0x14084DF80/0x1400AF970/0x14000F3E0) have
  **zero corresponding raw evidence** anywhere in `raw/aimami/1.2.3/windows-x64/` as of this session
  — full-tree grep for their name patterns returned no hits. RULE9 verdict: `diff_required` for all
  5 (no evidence to support `migrated_no_behavior_diff` or `unchanged_reused`).

## Interface / Error / Boundary

Unknown — not produced this session (dim4 open for manager_bootstrap; not applicable to the 5 gap
leaves).

## Gate Leaf

1 leaf (`manager_bootstrap`) at `consumerStartReady`; 0 at `strictImplementationUse`/
`readyToImplement`. 6 leaves cross-referenced to sibling packages (see those packages' own gate
status). 5 leaves `gap_needs_new_raw`. See `gate-report.json`.

## Plugin / Capability

Not in scope this session (no plugin/capability-registration code observed in the one leaf read).

## OTA / Package

Not in scope this session.

## Resource / Binary Surface

Not in scope this session.

## Unknown

See `gate-report.json` `unknowns` array (5 items, all classified).
