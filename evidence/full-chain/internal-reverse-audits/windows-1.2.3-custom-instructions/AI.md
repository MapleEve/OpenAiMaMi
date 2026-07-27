# AI Handoff

status: accepted_ready_absent_backend_orphan_ida_direct (migrated_no_behavior_diff vs 1.0.9 windows baseline; re-verified live on 1.2.3, not copy-only)
evidence_root: raw/aimami/1.2.3/windows-x64/custom-instructions/
versions: 1.0.9 (baseline, migration source) -> 1.2.3 (this bundle)
platforms: windows-x64 only. macOS 1.2.3 companion module NOT covered by this bundle — do not infer.
target_universe: 5 commands — ['load_custom_instruction_state', 'preview_custom_instruction_apply', 'apply_custom_instruction', 'clear_custom_instruction_block', 'rollback_custom_instruction']
locator_audit: canonical=5, locator=5, missed=0, extra=0 (source: raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl, dual camelCase+snake_case grep)
coverage: 5/5
coverage_mode: backend-owned-target-universe (frontend-orphan cluster; not full-app; fullAppCoverageStatus=not-full-app)
owner_resolution_status: no_owner_confirmed_absent (not Unknown-due-to-tooling; 2 independent live methods both 0 hits per command plus 1 module-wide sweep)
full_app_coverage_status: not-full-app
per_target_required_results: see README.md Per-target Result Matrix
frontend_ccf_status: confirmed (5/5, argKeys byte-identical to 1.0.9 baseline)
backend_ccf_status: absent (5/5, 2-method cross-validated: func_query symbol table + find_regex string pool, both 0 hits per command; module-wide func_query name_regex=custom_instruction also 0 hits)
pseudocode_status: n/a (no owner)
call_tree_status: n/a (no owner)
interface_status: confirmed from frontend contract only (no backend DTO to cross-check)
error_path_status: frontend-only stub semantics unchanged from 1.0.9
boundary_status: confirmed pre-existing cross-version (1.0.9/1.1.1/1.1.8) cross-platform (mac+win) gap per REVERSE-STATUS.md, not a 1.2.3 regression
gate_leaf_status: accepted 5/5, accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command
scripts:
  - tools/IDA CLI win server_health '{}'
  - tools/IDA CLI win func_query '{"queries":[{"name_regex":"<command>"}]}'
  - tools/IDA CLI win func_query '{"queries":[{"name_regex":"custom_instruction"}]}'
  - tools/IDA CLI win find_regex '{"pattern":"<command>"}'
  - tools/IDA CLI win find_regex '{"pattern":"custom.instruct"}'
  - tools/IDA CLI win xrefs_to '{"addrs":["0x1417893f2"]}'
unknowns:
  - macOS 1.2.3 custom-instructions canonical bundle not yet produced (see REVERSE-STATUS.md targets list, line ~4011) — do_not_infer from this windows bundle.
  - Inherited from 1.0.9 baseline, unchanged: load_custom_instruction_state initial-failure UI has no dedicated visible error alert; apply/clear/rollback success path uses setQueryData not invalidation.
do_not_infer: this bundle proves windows-x64 1.2.3 only; must not be used to claim macOS 1.2.3 status, nor any other module's status.
