# AI Handoff: Windows 1.2.3 bootstrap

status: consumerStartReady (1 leaf: manager_bootstrap); reduce-only, no new IDA decompile this
  session; 5 RULE9-baseline leaves are genuine raw-thinness gaps
evidence_root: raw/aimami/1.2.3/windows-x64/{manager,commands,commands/accounts,commands/tray_menu}/ida/pseudocode/
versions: 1.2.3
platforms: windows-x64 only (this package); macos-1.2.3-bootstrap is the same-version sibling,
  referenced not migrated
target_universe: 5 raw files matched by filename/owner-map-name "bootstrap" this session; of these,
  only 1 (manager_bootstrap) is a new canonical leaf, 4 are cross-referenced to sibling packages that
  already own them. Additionally, 5 RULE9-baseline leaves from windows-1.0.9-bootstrap have zero
  1.2.3 raw evidence (gap_needs_new_raw).
locator_audit: grep -rli across the full raw/aimami/1.2.3/windows-x64/ tree for "bootstrap" filename/
  content matches (5 hits) + grep -rli for RULE9-baseline leaf name patterns
  (app_run_entry/managed_state/cli_dispatch/boot_spawn, 0 hits) + grep -rl collision-gate ownership
  check against every audits/windows-1.2.3-*/ sibling package for each of the 5 bootstrap-matched
  files (4/5 already owned elsewhere).
coverage: 5/5 candidate files have a recorded classification (1 new leaf + 4 cross-referenced); 5/5
  RULE9-baseline leaves have a recorded gap status. Nothing left unclassified.
coverage_mode: backend-owned-target-universe, reduce-only (not full leaf-100)
owner_resolution_status: closed for manager_bootstrap (dim2); the 5 RULE9-baseline leaves have no
  owner because no raw evidence exists yet
full_app_coverage_status: not-full-app
per_target_required_results: see gate-report.json dim_status and rule9_baseline_gap_leaves
frontend_ccf_status: not-produced for manager_bootstrap this session (accepted_unknown N/A);
  produced (hit-count only, not full trace) for the 6 cross-referenced command leaves via this
  platform's own frontend-control-flow.jsonl
backend_ccf_status: closed for manager_bootstrap (full 646-line read); not applicable to the 5
  RULE9-baseline gap leaves (no raw to read)
pseudocode_status: pre-existing for manager_bootstrap (session manager-win-deepdecompile-20260724,
  consumed not re-derived); absent for the 5 RULE9-baseline gap leaves
call_tree_status: one-hop for manager_bootstrap (ensure_proxy_started, sub_14085A1E0); not traced
  further; not-applicable for the 5 gap leaves
interface_status: not-produced
error_path_status: not-produced
boundary_status: not-produced
gate_leaf_status: manager_bootstrap=consumerStartReady; strictImplementationUse=false;
  readyToImplement=false; all others either cross-referenced (see owning package) or
  gap_needs_new_raw
scripts: none packaged (collision-gate greps were ad-hoc during this session, not saved as reusable
  tools per AGENTS.md storage red line — bulk generated content stays out of internal-reverse/); the
  method and exact commands run are documented in prose in logic/FULL-CHAIN-1.2.3.md §4
unknowns:
  - manager_bootstrap dim1 (N/A accepted but not independently re-verified) (accepted_unknown)
  - manager_bootstrap dim3 depth beyond ensure_proxy_started/sub_14085A1E0 (blocks_start)
  - app_run_entry/boot_spawn_threads/managed_state_registry/bootstrap_cache-standalone/
    load_snapshot-system-shell-init-supplement: zero 1.2.3 windows raw evidence (blocks_start,
    RULE9 diff_required)
  - commands/accounts load_snapshot (0x140cb5e50) vs 1.0.9 system-shell-init load_snapshot identity
    unresolved (blocks_start)
  - cross-platform module-boundary mismatch: macos-1.2.3-bootstrap claims load_bootstrap_state/
    dismiss_pending_auto_switch/load_pending_auto_switch as its own leaves; windows-1.2.3-daemon-
    autoswitch canonically owns the Windows-side equivalents. Pre-existing inconsistency, not
    resolved by this session (product_decision, needs EXPLICIT_REASSIGN_OWNER)
do_not_infer:
  - Do not infer macOS 1.2.3 bootstrap behavior from this Windows-only package.
  - Do not assume the 5 RULE9-baseline leaves are absent/removed in 1.2.3 windows -- Unknown, not
    confirmed-absent; they may exist inside an as-yet-unlocated true process-entry-point file.
  - Do not assume commands/accounts load_snapshot (0x140cb5e50) is or is not the successor of the
    1.0.9 system-shell-init load_snapshot leaf without opening both bodies.
  - Do not treat manager_bootstrap as strictImplementationUse or readyToImplement.
  - Do not duplicate reverse work on load_bootstrap_state / the 4 auto-switch commands (owned by
    windows-1.2.3-daemon-autoswitch) / load_snapshot+store_bootstrap_snapshot_best_effort (owned by
    windows-1.2.3-accounts) / create_bootstrap_tray_menu (owned by windows-1.2.3-tray) -- track their
    gate status in those packages, not here.

## Next-session quickstart

1. Read `logic/FULL-CHAIN-1.2.3.md` in full (contains the 5-file classification table + the RULE9
   gap analysis + the collision-gate method).
2. To find the true 1.2.3 windows process entry point (app_run_entry analog): search near the PE
   entry point / `tauri::Builder`/`generate_context!` string constants; none of
   `raw/aimami/1.2.3/windows-x64/{codexmate_lib,commands,manager,mod}/` contain it currently — this
   is genuinely new IDA work, not a reduce task.
3. To close dim3 for manager_bootstrap: open `ensure_proxy_started` and `sub_14085A1E0`'s own bodies
   (both already have raw .c files in `raw/aimami/1.2.3/windows-x64/manager/ida/pseudocode/` per the
   same owner-map batch — this may be another reduce-only pass, verify before assuming new decompile
   is needed).
4. To resolve the load_snapshot identity question: open both
   `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/load_snapshot_0x140cb5e50.c` (this
   package's cross-reference) and compare against the 1.0.9 windows system-shell-init leaf's VA shape
   recorded in `internal-reverse/audits/windows-1.0.9-bootstrap/logic/WIN-SYSTEM-SHELL-INIT-
   DISTILLED-109.md`.
