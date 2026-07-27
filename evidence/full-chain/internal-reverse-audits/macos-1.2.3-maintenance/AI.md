# AI Handoff — macos-1.2.3-maintenance

status: partial (2/3 leaves consumerStartReady, 1/3 consumerStartBlocked); read-only distillation pass, no new IDA work performed
evidence_root: raw/aimami/1.2.3/macos-arm64/
versions: 1.2.3 (this package); 1.0.9 (RULE9 historical baseline, not migrated — see logic/DELTA-LOGIC-1.2.3.md)
platforms: macos-arm64 only. windows-1.2.3-maintenance sibling exists independently, NOT consumed here.
target_universe: clean, rebuild_registry, load_snapshot (task-named domain: 注册表 rebuild/clean/load_snapshot 域). 10 additional commands share the same MaintenancePage UI surface (get_image_compat/set_image_compat/force_kill_codex/restart_codex/debug bundle export/upload/router diagnostics/configure_auto_switch) but are explicitly OUT OF SCOPE for this package — see manifest.json.scope.commands_out_of_scope_same_ui_surface.
locator_audit: angle A = static disk enumeration (find/wc -l), no live IDA MCP session this pass, accepted_unknown tool-limitation class (consistent with macos-1.2.3-mcp package precedent). angle B = ipc-contracts.jsonl command-name diff, true_gaps=0 for the 3 named commands. angle C = keyword grep (rebuild_registry/clean_registry/load_snapshot/registry_rebuild/registry_clean) across full macos-arm64 1.2.3 raw tree — hits outside the 3 named leaves belong to other modules (account_io/accounts/relay/tauri-ipc-dispatch generic infra), not maintenance orphans. angle D = manifest covered_commands = [clean, rebuild_registry, load_snapshot], 0 truly_undone orphans found within domain scope.
coverage: 6 primary .c files read in full or near-full (3 command wrappers + 3 core owners), 0 truncation markers; 8 candidate downstream core/repository files enumerated on disk, not read/traced this pass.
coverage_mode: backend-owned-target-universe, not full-app.
owner_resolution_status: no prior producer/session claimed this exact bundle path before this pass (checked INDEX.jsonl, task-plan.json, existing audits/ directory listing — no macos-1.2.3-maintenance existed).
full_app_coverage_status: not-full-app.
per_target_required_results: see gate-report.json dim_status and logic/MAINTENANCE-DISTILLED-1.2.3.md per-leaf sections.
frontend_ccf_status: clean=pass (confirmed real UI action card + mutation chain); load_snapshot=partial (guarded wrapper-callsite confirmed, top UI element inferred); rebuild_registry=missing (no UI element evidence of any kind beyond bare wrapper definition).
backend_ccf_status: pass for all 3 (command wrapper -> core owner call confirmed for all 3, real non-stub bodies).
pseudocode_status: pass for all 6 primary files (0 truncation markers, real Hex-Rays bodies with mutex/error-handling logic visible).
call_tree_status: partial for all 3 (core owner confirmed; downstream leaf reduction candidate-only, not traced via callees()/xrefs_to()).
interface_status: partial for clean (response field names from frontend echo only) and load_snapshot (request params confirmed, response unconfirmed); missing for rebuild_registry (no fields known at all for 1.2.3).
error_path_status: mutex-poisoned-lock pattern confirmed in all 3 wrappers; deeper core-level error paths not re-verified this pass.
boundary_status: not systematically extracted this pass for any leaf.
gate_leaf_status: clean=consumerStartReady; load_snapshot=consumerStartReady; rebuild_registry=consumerStartBlocked.

## Next-step queue (see data/task-plan.json.next_producer_steps for full detail)

1. **Highest value**: locate rebuild_registry's real UI trigger — the only leaf below consumerStartReady, and its backend evidence is otherwise the strongest of the three (2132-line core body, confirmed new-vs-1.2.2 delta).
2. Trace the 8 candidate downstream core/repository files via callees()/xrefs_to() to close dim3 with a real call-tree (not name-pattern candidates).
3. Read rebuild_registry_with_policy_0x100a6a890.c in full (only first ~90 lines read this pass) to derive the 2 new policy parameters' semantics.
4. Run a systematic dim4 pass across all 3 leaves (request/response DTO fields, defaults, error envelope) — in particular re-verify clean's response field names against the actual 1.2.3 backend struct, since the frontend-echoed names differ from the 1.0.9-documented CleanResult shape.
5. Run a dim6 pass mapping each leaf's side effects to C5's own test/acceptance surface.

## scripts

None run this pass (read-only distillation; no IDA MCP calls, no frontend re-extraction). Existing artifacts consumed as-is: `ipc-contracts.jsonl`, `frontend-control-flow.jsonl`, `ast-facts.json` (all pre-existing, produced by an earlier session's `tauri-dumper` + `extract_frontend_contracts.py` + `extract_frontend_ast.mjs` run — not re-run this pass).

## unknowns

See gate-report.json.unknowns for the full classified list (blocks_start / accepted_unknown / product_decision). Summary: rebuild_registry's UI trigger (blocks_start), rebuild_registry_with_policy's 2 new params (blocks_start on semantics, existence confirmed), load_snapshot's exact UI element (accepted_unknown), clean's response DTO naming delta vs 1.0.9 (accepted_unknown), 8 candidate call-tree files' reachability (blocks_start for dim3 closure), Windows parity (product_decision, doNotInferWindowsFromMacOS).

## do_not_infer

- Do not infer Windows behavior from this macOS package, or vice versa from windows-1.2.3-maintenance.
- Do not treat the 1.0.9 package's `CleanResult`/`RebuildRegistryPayload`/`AppStatusPayload` field names as confirmed for 1.2.3 — they are historical reference only per logic/DELTA-LOGIC-1.2.3.md.
- Do not treat `基线 same-set` header annotations as a substitute for independent 1.2.3 dim1/dim4 verification — they are a core-body-similarity signal only, placed by a prior producer pass, not re-verified by this pass.
- Do not upgrade rebuild_registry to consumerStartReady without first closing the UI-trigger gap (dim1) — its strong dim2 evidence does not substitute for a missing frontend call entry per GATE-SPEC.md Gate 1.
- Do not treat the 8 candidate downstream core/repository files as a confirmed call-tree — naming-pattern analogy only, not traced.
