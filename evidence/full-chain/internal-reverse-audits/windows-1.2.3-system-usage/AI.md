# AI Handoff — AiMaMi 1.2.3 Windows system-usage

status: blocks_start
evidence_root: raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/ (owned targets); raw/aimami/1.2.3/windows-x64/commands/accounts/ + analytics/ + commands/analytics/ (pointer-only targets, see owned_elsewhere)
versions: 1.2.3
platforms: windows-x64
binary_sha12: aeccccd78e47
session: windows-1.2.3-system-usage-distill-20260725
machine: <host>
produced_at: 2026-07-25

target_universe (user-framed "usage snapshot domain", 6 constituent commands):
  owned_by_this_bundle:
    - get_usage_refresh_interval (VA 0x14018cbb0)
    - set_usage_refresh_interval (VA 0x14018c2d0)
  owned_elsewhere_pointer_only:
    - refresh_usage_snapshot (VA 0x140cb44a0) -> audits/windows-1.2.3-accounts/ (consumerStartBlocked, Hex-Rays decompile failed)
    - refresh_single_account_usage (VA 0x140cb15d0) -> audits/windows-1.2.3-accounts/ (consumerStartBlocked, same failure class)
    - compute_usage_analytics (VA 0x14086c970) -> audits/windows-1.2.3-sessions-analytics/ (consumerStartReady, dim2-wrapper only)
    - load_usage_analytics (VA 0x140cde3c0) -> audits/windows-1.2.3-sessions-analytics/ (consumerStartReady, dim2-wrapper only)

locator_audit:
  canonical: [get_usage_refresh_interval, set_usage_refresh_interval, refresh_usage_snapshot, refresh_single_account_usage, compute_usage_analytics, load_usage_analytics]
  locator: [get_usage_refresh_interval, set_usage_refresh_interval, refresh_usage_snapshot, refresh_single_account_usage, compute_usage_analytics, load_usage_analytics]
  missed: []
  extra: []
  note: "6/6 raw-named files accounted for and correctly classified by owner (2 owned here, 4 pointer-only). No orphans remain undiscovered in this pass; 0 truly_undone."

coverage: 0/2 owned leaves consumerStartReady; dim2-wrapper only for both
coverage_mode: backend-owned-target-universe (is_upstream=false for both owned targets; C5-authored per 1.0.9 precedent)
owner_resolution_status: both owned targets confirmed via raw pseudocode file header (ground-truth tauri command handler name via string xref); no live IDA MCP session this pass, so callee/xref chase not performed
full_app_coverage_status: not-full-app (usage-settings sub-cluster scope only)

per_target_required_results:
  get_usage_refresh_interval:
    owner_va: "0x14018cbb0"
    gate_tier: gap_needs_reducer
    is_upstream: false
    consumerStartReady: false
    strictImplementationUse: false
    readyToImplement: false
    dim1_missing: true
    dim3_missing: true
    dim4_missing: true
    dim6_missing: true
  set_usage_refresh_interval:
    owner_va: "0x14018c2d0"
    gate_tier: gap_needs_reducer
    is_upstream: false
    consumerStartReady: false
    strictImplementationUse: false
    readyToImplement: false
    dim1_missing: true
    dim3_missing: true
    dim4_missing: true
    dim6_missing: true

frontend_ccf_status: not verified this pass (string-presence in ipc-contracts.jsonl only, not CCF proof)
backend_ccf_status: partial (command registration entry point confirmed via wrapper decompile; no owner-chain deeper than the wrapper traced)
pseudocode_status: A-level wrapper (non-truncated, brace-balanced) for both owned targets; see logic/WIN-USAGE-SETTINGS-DISTILLED-123.md
call_tree_status: depth=1 (wrapper only); callees enumerated in pseudocode text but not chased via live IDA tooling
interface_status: not closed
error_path_status: not closed (1.0.9 baseline had Mutex poison / InvalidVariant(8); not re-verified for 1.2.3)
boundary_status: partial -- Windows-native raw confirmed; one platform-density gap noted (macOS has core/repository/ deep layer, Windows repository/ has zero usage-named files) as an observation, not resolved
gate_leaf_status: gap_needs_reducer (both owned targets); pointer targets carry their own canonical bundle's gate leaf status (see manifest.json targets_owned_elsewhere_pointer_only)

scripts:
  distilled: logic/WIN-USAGE-SETTINGS-DISTILLED-123.md
  gate_report: gate-report.json
  task_plan: data/task-plan.json

unknowns:
  - dim1 (frontend control-flow / UI trigger): missing for both owned targets, both platforms
  - dim3 (deep call-tree to fs/registry leaf): missing, no live IDA session this pass
  - dim4 (interface/DTO/error envelope): missing
  - dim6 (test/acceptance mapping): missing -- C5 implementation side
  - RULE9 1.0.9->1.2.3 behavior diff: not calibrated, diff_required
  - Windows core/repository/ deep-layer equivalent of macOS's 3 usage_refresh_interval-adjacent files: not found under "usage" naming, targeted search not performed

do_not_infer:
  - Do not infer macOS behavior/depth from Windows evidence, or vice versa
  - Do not treat the 1.0.9 strictImplementationUse baseline as automatically applicable to 1.2.3 (VA changed, diff not calibrated)
  - Do not re-derive or duplicate refresh_usage_snapshot / refresh_single_account_usage / compute_usage_analytics / load_usage_analytics evidence here -- read their canonical owning bundles (windows-1.2.3-accounts, windows-1.2.3-sessions-analytics) directly
