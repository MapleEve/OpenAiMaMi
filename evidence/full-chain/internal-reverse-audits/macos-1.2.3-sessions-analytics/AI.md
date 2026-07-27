# AI Handoff — macos-1.2.3-sessions-analytics

status: consumerStartReady (9/9 commands); strictImplementationUse=0; readyToImplement=0
evidence_root:  (env: ${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT})
versions: 1.2.3
platforms: macos-arm64 (primary, this package); windows-x64 (raw evidence located, NOT analyzed to closure this pass)
target_universe: |
  9 frontend-invoked commands: load_sessions, delete_sessions, export_session_markdown,
  migrate_session_worktree, load_session_analytics, load_token_analytics, load_tool_analytics,
  load_change_analytics, load_usage_analytics.
  Backend dirs: commands/sessions (3 files) + core/sessions (29 fn) + core/session_analytics (8 fn)
  + core/analytics (24 files / 16 unique VA after dedup vs core/session_analytics).
  Explicitly OUT of scope: load_quota_history (owned by core::quota_history/core::relay), 
  get_usage_refresh_interval/set_usage_refresh_interval/refresh_single_account_usage/refresh_usage_snapshot
  (different owning module, not investigated this pass).
locator_audit: |
  Angle A (func_query): SUBSTITUTED with filesystem find (no live IDA MCP this session) -- 64 raw .c
  files / 56 unique VA across the 4 scope dirs. NOT equivalent to canonical func_query; recorded
  accepted_unknown tool-limitation.
  Angle B (frontend command diff): jq over frontend/ipc-contracts.jsonl -- 9 in-scope commands found,
  true_gaps=0 at command-name level.
  Angle C (orphan scan): grep for session/analytics/rollout/worktree keywords outside the 4 scope dirs
  found ~35 core::relay::codex_thread_visibility/codex_project_state/codex_diagnostic functions
  (already_in_canonical -- owned by sibling macos-1.2.3-relay package, different module: rollout-file/
  session-meta patching for router visibility, not session/analytics UI) + 1 core/repository::
  store_bootstrap_usage_analytics_0x100a70800.c (different_machine_owner / adjacent-module-no-package-yet,
  NOT claimed as covered, NOT reversed further).
  Angle D (manifest diff): comm -23 between 9 frontend commands and covered_commands -- 0 missing.
coverage: |
  Core business-logic layer: strong, non-failed, reaches real leaves (sqlite3/std::fs/walkdir).
  Command-wrapper layer: only 3/9 (delete_sessions/export_session_markdown/migrate_session_worktree)
  have a dedicated commands::sessions::* wrapper .c file on macOS. load_sessions + 5 load_*_analytics
  commands have NO dedicated macOS wrapper file. CROSS-PLATFORM FINDING: Windows raw evidence at
  raw/aimami/1.2.3/windows-x64/commands/analytics/ida/pseudocode/ has ALL 5 load_*_analytics commands
  individually named with provenance "module src/commands/analytics.rs" -- confirms this is a real
  upstream Rust module, so the macOS gap is most likely evidence-collection (mac side never produced
  a commands/analytics/ dir), not folded/anonymous dispatch. Per platform-independence rule this is
  NOT used to close the macOS gap -- only redirects next producer step.
coverage_mode: backend-owned-target-universe
owner_resolution_status: |
  All 9 commands have a resolved core:: owner. 6 of 9 lack a resolved commands:: wrapper owner on
  macOS (see coverage above); Windows-side wrapper owners are resolved for load_sessions/delete_sessions/
  migrate_session_worktree/all 5 analytics commands (export_session_markdown has no Windows-named
  counterpart found -- likely among the unnamed sub_*.c files in windows-x64/sessions/).
full_app_coverage_status: not-full-app
per_target_required_results: see README.md "Per-target Result Matrix"
frontend_ccf_status: mostly-closed (Bs() bento-stats command binding unconfirmed; all 9 in-scope commands otherwise have full component-tree + state-model + interaction-to-command mapping in the two frontend page docs)
backend_ccf_status: partial (core strong, command-wrapper thin for 6/9 on macOS -- see coverage)
pseudocode_status: non-failed for all 56 unique-VA functions sampled/scanned this pass
call_tree_status: partial -- reaches real leaves (sqlite3/fs/walkdir) but no systematic per-command reduction doc produced
interface_status: not-closed (dim4 not run)
error_path_status: not-closed (dim4 not run)
boundary_status: not-closed (dim4 not run)
gate_leaf_status: consumerStartReady for all 9; see gate-report.json
scripts: |
  No new scripts run this pass. This is a filesystem-only distillation session (find/grep/wc/diff/jq
  over pre-existing raw evidence) -- no IDA MCP, no frontend extractor re-run (extract_frontend_contracts.py
  outputs were pre-existing and read as-is).
unknowns:
  - "SessionsPage Bs() bento-stats query command binding (accepted_unknown, plausibly load_usage_analytics by shape, unconfirmed)"
  - "macOS commands-layer wrapper identity for load_sessions + 5 load_*_analytics (blocks_start, real gap, see coverage)"
  - "dim4 interface/DTO extraction (blocks_start, not run)"
  - "dim6 test/acceptance mapping (blocks_start, not run)"
  - "Windows dim5 gate closure (blocks_start, evidence located but not analyzed)"
  - "core/repository::store_bootstrap_usage_analytics ownership/scope decision (product_decision, angle-C orphan, adjacent module)"
do_not_infer: |
  Do not infer Windows behavior/coverage from this macOS-only package beyond the specific
  cross-platform symbol-name confirmations already recorded (load_sessions core-function identity,
  commands::analytics module existence). Do not treat the 3 macOS-named command wrappers as proof
  that the other 6 commands' macOS wrappers don't exist -- they were not found, which is different
  from confirmed-absent. Do not treat core/analytics' 8 duplicate-VA files as 8 additional
  independently-reversed functions (see manifest.json dedup_note). Do not treat consumerStartReady
  as strictImplementationUse or readyToImplement -- dim4/dim6 are open for all 9 commands.
