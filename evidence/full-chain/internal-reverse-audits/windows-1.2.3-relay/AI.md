# AI Handoff — windows-1.2.3-relay

status: consumerStartReady (22/23 commands; 1 blocked-on-native-evidence); strictImplementationUse/readyToImplement NOT achieved; full_leaf_100_definition_v2 not closed
evidence_root:  (SMB absolute path hardcoded per skill red line 16)
versions: 1.2.3
platforms: windows-x64 (this package); macos-arm64 sibling at ../macos-1.2.3-relay/ (authoritative for frontend + get_codex_router_auth_readiness)
target_universe: core::relay::* (28/32 known submodules present on Windows; 4 macOS-only submodules confirmed-Unknown on Windows) + commands::relay (23 commands, 23 .c files, 1 ICF-folded shared dispatcher + 2 unnamed helpers)
locator_audit: angle-A done via direct top-level directory comparison (Mac 32 subdirs vs Win 32 top-level module dirs incl. relay-core/managed_blocks/mod naming, no 33rd found either side); angle-B (command diff) done, 23/23 commands have decompiled content both platforms, 21/23 identity-confirmed, 2/23 identity-unconfirmed; angle-C (semantic orphan scan) NOT done; angle-D done, see gate-report.json unknowns
coverage: 208 deduped decompiled addresses (out of 311 raw .c files incl. 23 truncation-stub duplicates with confirmed complete twins + 5 version-delta auxiliary-extract duplicates); owner-map baseline 177 rows (relay-core) + 23 rows (commands/relay)
coverage_mode: backend-owned-target-universe (full_app_coverage_status=not-full-app)
owner_resolution_status: resolved for 177 relay-core rows (Tier B named=64, Tier C sub_XXXX-candidate=113) + 23 commands/relay rows; decompile BODY coverage is 208/(177+23)=200 addresses' worth aggregated, NOT a 1:1 per-row confirmation
full_app_coverage_status: not-full-app
per_target_required_results: see gate-report.json dim_status (dim1 N/A-for-this-package, dim2 partial, dim3 weak, dim4 not-closed, dim5 closed-for-existence/open-for-parity, dim6 not-closed)
frontend_ccf_status: N/A-for-this-package (frontend evidence lives in ../macos-1.2.3-relay/, JS bundle is platform-agnostic)
backend_ccf_status: partial (208/~200 addresses decompiled; 18 of the originally-19-zero-decompile submodules have only aggregate-level re-verification, not per-module)
pseudocode_status: partial -- see coverage; 23 historical truncation stubs all have confirmed complete disasm-chunked twins (0 net truncation gaps at address level), but per-module completeness for the 18-module group is not independently re-confirmed
call_tree_status: weak -- no per-command call-tree-to-leaf catalog produced
interface_status: missing (dim4 not started)
error_path_status: missing (bundled into dim4 gap)
boundary_status: partial -- 4 macOS-only submodules explicitly Unknown on Windows, correctly not extrapolated; 1 command (get_codex_router_auth_readiness) has no independent Windows body due to ICF fold, cross-platform boundary documented in blocked_commands
gate_leaf_status: consumerStartReady=22/23; 1 blocked (get_codex_router_auth_readiness, ICF-fold, use Mac evidence); strictImplementationUse=0/23; readyToImplement=0/23
scripts: file-system `find raw/aimami/1.2.3/windows-x64 -name '*.c' | wc -l` + Python dedup-by-address script documented narratively in goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md sec.⑤ (script itself not preserved as a standalone artifact in this pass)
unknowns:
  - 4 macOS-only submodules (transition_journal/breaker/native_responses_compat/upstream_url): product_decision (confirmed zero-evidence via 4-method search, not a reverse-engineering time gap)
  - sub_140187580/sub_140CCE030 identity vs diagnose_codex_router/test_relay_draft_stream: accepted_unknown
  - per-module post-closeout completeness for 18 originally-zero-decompile submodules: blocks_start
  - dim3/dim4/dim6: blocks_start
do_not_infer:
  - Do not infer per-module completeness for the 18-module group from the 208 aggregate figure -- that figure does not distribute evenly or confirm each module individually.
  - Do not extrapolate the 4 macOS-only submodules' existence or behavior from macOS evidence onto Windows.
  - Do not treat get_codex_router_auth_readiness as having independent Windows-native decompile evidence -- it structurally does not (ICF fold), use ../macos-1.2.3-relay/ instead.
  - Do not treat 208/311 or 177/23-owner-map counts as full_leaf_100 or implementation-ready by themselves.
