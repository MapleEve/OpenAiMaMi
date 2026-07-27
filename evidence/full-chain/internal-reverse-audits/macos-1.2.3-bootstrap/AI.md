# AI Handoff: macOS 1.2.3 bootstrap

status: consumerStartReady (4 leaves); triage-complete, deep-reverse NOT done
evidence_root: raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/ (89 files, untouched)
versions: 1.2.3
platforms: macos-arm64 only (windows-1.2.3-bootstrap not attempted this session)
target_universe: 89 generic run_0x*.c files from the wf-aimami123-delta-20260721 baseline;
  triaged into 4 bootstrap / 2 non-bootstrap-multi-target / 80 owned-by-other-module / 3 unresolved.
locator_audit: grep -oE codexmate_lib::...::h[0-9a-f]+ call-target extraction per file (complete,
  89/89 files processed), cross-checked against ipc-contracts.jsonl (131 commands) for the 3
  command-named bootstrap leaves.
coverage: 89/89 files have a recorded classification (none skipped); 4 pulled into this bootstrap
  package; 82 explicitly excluded with evidence-based reason; 3 explicitly left Unknown.
coverage_mode: backend-owned-target-universe, triage-only (not full leaf-100)
owner_resolution_status: closed for classification purposes; NOT closed for deep implementation
  (dim3/dim4/dim6 open for all 4 bootstrap leaves)
full_app_coverage_status: not-full-app
per_target_required_results: see gate-report.json dim_status
frontend_ccf_status: not-produced (dim1 open for all 4 leaves)
backend_ccf_status: closed for app_run_entry (full read); grep-target-only for the other 3
pseudocode_status: pre-existing (from wf-aimami123-delta-20260721 baseline, not new this session)
call_tree_status: shallow (1 hop) for app_run_entry; not traced for the other 3
interface_status: not-produced
error_path_status: not-produced
boundary_status: not-produced
gate_leaf_status: consumerStartReady x4, strictImplementationUse=false, readyToImplement=false
scripts: none packaged (classification was done via ad-hoc grep + Python one-off during this
  session, not saved as a reusable tool per AGENTS.md storage red line on bulk-generated content;
  the method is fully documented in prose in logic/FULL-CHAIN-1.2.3.md §2 for reproducibility)
unknowns:
  - boot_spawn_threads analog not located among the 89 files (blocks_start)
  - managed_state_registry now inlined into app_run_entry, not a separate function (accepted_unknown, architecture diff not a gap)
  - run_0x1000cf8f0.c (generic tokio runtime glue, zero business calls) unattributed (blocks_start)
  - run_0x10099df40.c unattributed, not opened in full this session (blocks_start)
  - inner_0x100571850.c has no decompilable body (accepted_unknown, HEXRAYS-EMPTY tool-limitation class)
do_not_infer:
  - Do not infer Windows 1.2.3 bootstrap behavior from this macOS-only package.
  - Do not assume boot_spawn_threads / managed_state_registry are absent in 1.2.3 -- Unknown, not confirmed-absent.
  - Do not treat the 4 consumerStartReady leaves as strictImplementationUse or readyToImplement.
  - Do not duplicate reverse work on the 15 relay-owned or 1 tray-owned closures identified in this
    triage -- they belong to macos-1.2.3-relay / macos-1.2.3-tray canonical bundles.

## Next-session quickstart

1. Read `logic/FULL-CHAIN-1.2.3.md` in full (contains the complete 89-file classification table).
2. To close dim3 for app_run_entry: open `RelayManager::new`, `single_instance::acquire`,
   `CodexPaths::ensure_directories` bodies (NOT among the 89 triaged files, separate raw evidence
   under `raw/aimami/1.2.3/macos-arm64/core/relay/manager/` and `raw/aimami/1.2.3/macos-arm64/platform/`)
   and trace to fs/registry/process leaves.
3. To resolve the boot_spawn_threads Unknown: check inside `RelayManager::new` for a
   `tokio::spawn`/`std::thread::spawn` call launching a long-lived loop (the 1.0.9 windows analog
   was named `relay_manager_bootstrap_sys`); if genuinely absent in 1.2.3, record
   `accepted_unknown` with the negative-search evidence, do not silently drop the question.
4. To close dim1 for the 3 command leaves: cross-reference
   `raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl` (already extracted, 248
   rows) for `load_bootstrap_state`/`dismiss_pending_auto_switch`/`load_pending_auto_switch` --
   this is a synthesis pass over existing evidence, no new extraction needed.
