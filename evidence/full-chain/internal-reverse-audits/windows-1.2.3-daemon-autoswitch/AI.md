# AI Handoff — windows-1.2.3-daemon-autoswitch

status: partial_evidence_pack (all three gate tiers empty/0-13); this was a reduce/read-only pass, no IDA MCP session run
evidence_root:  (SMB absolute path hardcoded per skill red line 16)
versions: 1.2.3
platforms: windows-x64 (this package); no macos-1.2.3-daemon-autoswitch sibling exists yet (checked audits/ listing this pass)
task_kind: reduce/distillation-only -- this session read pre-existing raw/aimami/1.2.3/windows-x64/{codexmate_lib,commands,repository}/ida/pseudocode/*.c files, raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl, and raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md, and synthesized this package. No IDA tool calls made.

target_universe (canonical, inherited from ../windows-1.0.9-daemon-autoswitch/ per RULE9, NOT expanded this pass):
  daemon (6):
    - run_daemon_once
    - load_bootstrap_state
    - note_usage_refresh_activity
    - schedule_full_runtime_refresh
    - start_usage_refresh_watcher
    - update_usage_refresh_schedule
  auto-switch (7):
    - start_auto_switch_pending_watcher
    - load_pending_auto_switch
    - confirm_pending_auto_switch
    - dismiss_pending_auto_switch
    - confirm_pending_auto_switch_and_restart_codex
    - configure_auto_switch
    - set_auto_switch

locator_audit:
  angle-A (IDA symbol enumeration): NOT performed this pass (no live IDA MCP access, reduce-only task)
  angle-B (frontend ipc-contracts.jsonl command diff): DONE via grep -c per canonical command name; 11/13 hit as tauriInvokeWrapper, 2 (start_auto_switch_pending_watcher + one of the 4 daemon watchers... actually all 5 absent commands) zero hits, consistent with 1.0.9 pattern
  angle-C (semantic orphan scan): NOT done this pass
  angle-D (manifest covered_commands diff + orphan four-class): partially done -- restart_codex/export_debug_bundle/upload_debug_report identified as orphans (not in this package's canonical scope, not in ../windows-1.2.3-maintenance/'s declared 3-command scope either); classed local_outtake/truly_undone pending a producer/product decision, not resolved this pass

coverage: 9/13 canonical commands have complete non-truncated Hex-Rays pseudocode (or, for auto_switch_config, a directly-relevant repository-layer support leaf); 1/13 (configure_auto_switch) is HEXRAYS_DECOMPILE_FAILED raw-disasm-only; 1/13 (confirm_pending_auto_switch_and_restart_codex) has zero raw evidence under its canonical name (one identity-unconfirmed, also-decompile-failed candidate exists: switch_account_and_restart_codex); 5/13 (4 daemon watchers + start_auto_switch_pending_watcher) have zero raw evidence, frontend-existence-consistent with 1.0.9's confirmed-absent/native-thread pattern but NOT independently re-verified backend-side at 1.2.3.

coverage_mode: backend-owned-target-universe (full_app_coverage_status=not-full-app)

owner_resolution_status: resolved (command-name string xref, win-native ground-truth per each .c file's own header comment) for 9/13 with usable pseudocode; UNRESOLVED for configure_auto_switch (decompile failed, cannot read owner logic body even though the wrapper function's existence/address is known) and confirm_pending_auto_switch_and_restart_codex (no file at all); N/A for the 5 absent commands.

full_app_coverage_status: not-full-app

per_target_required_results: see gate-report.json dim_status (dim1 partial-strong-for-11, dim2 mixed 9-usable/1-failed/1-missing/5-absent, dim3 not_produced_this_pass, dim4 not-closed, dim5 closed-for-existence/open-for-parity, dim6 not-closed)

frontend_ccf_status: partial -- ipc-contracts.jsonl tauriInvokeWrapper hits confirmed for 11/13 (same evidentiary kind the 1.0.9 predecessor package itself accepted as dim1-Accepted), but this pass did NOT read/trace actual React component source for the daemon/auto-switch settings UI (unlike the adjacent MaintenancePage commands, for which a full pre-existing CCF doc — analytics-maintenance-autoswitch-frontend.md — was read and gives real onClick/useMutation trace detail). This asymmetry means dim1 for the 11 daemon/auto-switch commands is weaker than dim1 for the 3 adjacent (out-of-canonical-scope) maintenance commands, even though both show tauriInvokeWrapper hits.

backend_ccf_status: mixed, see coverage above

pseudocode_status: 9/13 non-truncated complete (verified via full-file read for run_daemon_once/set_auto_switch/configure_auto_switch[FAILED]/confirm_pending_auto_switch/restart_codex/export_debug_bundle/upload_debug_report line-count check, and full-file read for dismiss_pending_auto_switch/load_pending_auto_switch/auto_switch_config); 1 decompile-failed with explicit [TRUNCATED] marker (configure_auto_switch); 1 missing entirely under canonical name

call_tree_status: not_produced_this_pass

interface_status: not_produced_this_pass (incidental dispatch-string constants observed while reading dismiss_pending_auto_switch/load_pending_auto_switch: aDismissPending/aLoadPendingAut/aRepo -- not formally catalogued)

error_path_status: not_produced_this_pass

boundary_status: partial -- 5 absent commands correctly recorded Unknown/product_decision, not extrapolated as confirmed-absent-at-1.2.3 from the 1.0.9 finding; the "win 1.2.1" provenance-comment-vs-1.2.3-raw-path discrepancy is an unresolved boundary/provenance question (see manifest.json known_residuals)

gate_leaf_status: readyToImplement=0/13; strictImplementationUse=0/13; consumerStartReady=0/13; consumerStartBlocked=2 (configure_auto_switch, confirm_pending_auto_switch_and_restart_codex); blocks_start=6 (the 6 usable-pseudocode daemon/auto-switch commands, pending dim3/4/6); product_decision=5 (absent commands)

scripts:
  discovery: `find raw/aimami/1.2.3/windows-x64 -type f -iname "*.c" \( -iname "*daemon*" -o -iname "*maintenance*" -o -iname "*autoswitch*" -o -iname "*auto_switch*" \)` (initial keyword pass, later corrected by canonical-name cross-check against ../windows-1.0.9-daemon-autoswitch/AI.md's 13-command list, which surfaced load_bootstrap_state and switch_account_and_restart_codex that the keyword search missed)
  ipc_diff: `grep -c "\"command\": \"<name>\"" raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` per canonical command name
  truncation_check: manual header-comment read of each .c file for HEXRAYS_DECOMPILE_FAILED / [TRUNCATED] markers (2 hits: configure_auto_switch, switch_account_and_restart_codex)
  no scripts preserved as standalone artifacts; documented narratively here and in README.md

unknowns:
  - configure_auto_switch: blocks_start (decompile failure, no breakthrough attempted this pass)
  - confirm_pending_auto_switch_and_restart_codex: blocks_start (no canonical-name evidence; identity-unconfirmed candidate also decompile-failed)
  - 5 absent commands: product_decision (consistent with 1.0.9 pattern, not independently re-verified backend-side at 1.2.3)
  - dim3/dim4/dim6 for all 13 targets: blocks_start (not produced this pass)
  - "win 1.2.1" header-comment provenance vs 1.2.3 raw path: blocks_start (unresolved)
  - restart_codex/export_debug_bundle/upload_debug_report ownership: product_decision (orphaned between this package and ../windows-1.2.3-maintenance/, neither declares them in scope)

do_not_infer:
  - Do not infer the 5 absent-from-ipc-contracts commands are confirmed-absent from the Windows 1.2.3 BINARY -- only the frontend-existence signal was re-checked this pass, not an independent backend IDA search.
  - Do not treat switch_account_and_restart_codex as confirmed identity-equivalent to confirm_pending_auto_switch_and_restart_codex -- no byte-signature or callee cross-check was performed.
  - Do not treat the 9 commands with usable pseudocode as consumerStartReady -- dim3/dim4/dim6 are not closed, and dim1 for these 9 (unlike the 3 adjacent maintenance commands) is API-wrapper-hit-only, not full-CCF-traced.
  - Do not treat ../windows-1.0.9-daemon-autoswitch/'s readyToImplement gate as migrated to any 1.2.3 target -- no diff-confirmed-empty basis was established this pass for any of the 13 targets (RULE9 diff_required, not migrated_no_behavior_diff).
  - Do not claim restart_codex/export_debug_bundle/upload_debug_report as covered by this package or by ../windows-1.2.3-maintenance/ -- both explicitly exclude them from their declared scope.
