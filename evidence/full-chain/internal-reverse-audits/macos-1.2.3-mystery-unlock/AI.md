# AI Handoff — mystery-unlock cluster (AiMaMi 1.2.3 macOS arm64)

status: understand_and_classify_complete; NOT an implementation-basis package for tos_circumvention items
evidence_root: raw/aimami/1.2.3/macos-arm64/core/relay/{router_unlock_auth,legacy_virtual_auth,codex_diagnostic}, raw/aimami/1.2.3/macos-arm64/core/auth, raw/aimami/1.2.3/macos-arm64/commands/system, raw/aimami/1.2.3/macos-arm64/core/repository
versions: aimami 1.2.3
platforms: macos-arm64 (Windows not read — Unknown)
target_universe: |
  cluster A (tos_circumvention, SKIP): router_unlock_auth::{install_virtual_unlock_auth, build_unlock_auth_json,
  make_unsigned_jwt, ensure_auth_for_router, prepare_auth_for_router, restore_real_auth_for_router, cleanup(+4 closures),
  cleanup_for_native_off, has_residue, marker_exists, live_auth_state, readiness, read_marker, read_cleanup_backup,
  remove_file_if_exists, serialize(RouterUnlockAuthReadiness), auth_is_usable_real_oauth,
  backup_contains_usable_real_oauth, validate_user_owned_auth_backup, verify_real_auth_restore_ready};
  legacy_virtual_auth::{read_user_owned_backup, cleanup(x3), remove_file_if_exists, read_marker,
  restorable_backup_auth, marker_exists}; core::auth::is_aimami_managed_virtual_auth;
  codex_diagnostic::{check_router_unlock_auth_residue, fix_router_unlock_auth_residue}.
  cluster B (normal_feature, implementable): commands::system::{get,merge}_mystery_unlock_grants;
  core::repository::Repository::{get,merge}_mystery_unlock_grants; (Repository::mystery_route_allowed referenced
  from existing backend-baseline, not re-read this pass).
locator_audit: not run (understand+classify pass, not a full-leaf coverage pass; see cookbook 四角度 — not applicable,
  scope was explicitly the two named symbols + their immediate call graph, not a module-wide sweep)
coverage: router_unlock_auth 24/24 files read; legacy_virtual_auth 8/8 files read; is_aimami_managed_virtual_auth 1/1;
  codex_diagnostic 2/2 relevant check+fix pair read (module has ~40 unrelated diagnostic items, out of scope);
  mystery_unlock_grants 4/4 files read + cross-checked against existing backend-baseline docs (consistent).
coverage_mode: backend-owned-target-universe (this package's explicit symbol list only, not full-app)
owner_resolution_status: all symbols resolved to real owners (core::relay / core::auth / core::repository /
  commands::system), same-version same-platform pseudocode, non-failed decompile.
full_app_coverage_status: not-full-app
per_target_required_results: see README.md "Per-target Result Matrix" and TOS-CLASSIFICATION.md 结论表
frontend_ccf_status: missing (deliberately not pursued for cluster A because SKIP; open for cluster B if productized)
backend_ccf_status: present for both clusters (owner + call chain to fs/serde leaves for A, to local settings
  store for B)
pseudocode_status: non-failed for all 33 read symbols
call_tree_status: closed to implementation leaves (fs read/write/atomic_write/remove_file for A; local settings
  store read/write for B); this package does not restate the leaf-level call tree for cluster A because it is SKIP
interface_status: missing (deliberately not detailed for cluster A; open/Unknown for cluster B)
error_path_status: present for cluster A (CoreError envelope on fs/parse failures, verified no silent-swallow);
  Unknown for cluster B (not this pass's focus)
boundary_status: Windows platform Unknown for both clusters; no cross-platform inference made
gate_leaf_status: cluster A = permanently implementation_use=false (product decision: tos_circumvention, not a
  gate that more evidence would unlock); cluster B = pre_acceptance_evidence_pack, consumerStartReady candidate
  pending frontend CCF + DTO + Windows + acceptance mapping
scripts: none produced (no reducer/extractor scripts needed for an understand+classify pass)
unknowns:
  - Windows-side equivalent of both clusters: Unknown, not read this pass.
  - Cluster A frontend trigger entry (which UI toggle / invoke leads into prepare_auth_for_router): Unknown,
    deliberately not pursued because the target is SKIP.
  - Repository::mystery_route_allowed 18-char unresolved constant branch: Unknown, referencing existing
    backend-baseline note only, not re-verified this pass.
do_not_infer:
  - Do not infer that cluster A's SKIP status is a coverage gap that more IDA work would resolve — it is a
    product/ToS decision independent of evidence completeness.
  - Do not infer Windows behavior from this macOS-only package for either cluster.
  - Do not treat this package as an implementation-basis for cluster A under any future gate upgrade; any
    future worker that finds this package must treat `implementation_policy: understand_only` as binding for
    the SKIP list in TOS-CLASSIFICATION.md, not as staleness to be "fixed" by writing implementation logic.
