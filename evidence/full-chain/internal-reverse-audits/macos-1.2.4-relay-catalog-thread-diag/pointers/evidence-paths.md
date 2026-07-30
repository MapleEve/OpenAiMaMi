# Evidence Pointers — macos-1.2.4-relay-catalog-thread-diag

所有路径均为 SMB 绝对路径（`/...`），按 skill red line 16 硬编码，不用 env-var。本文件只给指针，不复制 raw 内容。

## raw evidence — 6dims 详实分析 + 跨平台整合终稿（本包主要文字证据源）

- `/raw/aimami/1.2.4/macos-arm64/version-delta/relay-catalog-thread-diag-6dims.md` — 6dims 详实分析（19177B，45 函数逐函数清单 + 6dims 全维度 + win parity 14 锚点）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md` — 跨平台整合终稿（27345B，4 条主题主线 + 双平台差异 + 6dims 总表 + 破坏性副作用全编目 + 不确定性/红线）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` — changelog↔前端对账（15481B，6 条 changelog 逐条对账到前端 beautified JS 真实行号 + 后端 6dims 证据指针）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md` — 前端控制流 delta（3 新命令 handler_chain + DTO 扩容 + 概念重命名）

## raw evidence — backend .c 伪代码（macOS arm64，本批 45 函数）

### codex_catalog（17 文件）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/canonical_no_account_slot_slug_0x100223380.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/is_no_account_slot_slug_0x100220f00.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/no_account_slot_slugs_0x10021fdc0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/default_no_account_slots_0x1002211e0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/normalize_no_account_slot_preference_0x100226630.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/validate_no_account_slots_0x100222220.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/no_account_slot_routing_changed_0x1002254f0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/supports_reasoning_0x100220fd0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/find_official_reasoning_model_0x100222ee0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/resolve_native_default_model_from_models_0x1002279e0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/parse_model_client_version_text_0x1002255b0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/read_bundled_cli_version_0x100221a60.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/read_bundled_models_0x10021ac70.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/load_official_catalog_snapshot_0x100223520.c` `[FULL]`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/inspect_official_catalog_freshness_0x100225bc0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/prepare_router_catalog_0x10021ffc0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/ida/pseudocode/write_prepared_catalog_0x100220d20.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_catalog/no_account_slot_routing_changed/ida/pseudocode/routing_map_0x100225220.c`（子目录辅助函数）

### codex_thread_visibility（15 文件）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/load_no_account_model_restore_journal_0x1008ef0b0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/remove_no_account_model_restore_journal_0x1008f1140.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/patch_no_account_model_restore_rollout_0x1008f0460.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/restore_no_account_model_threads_0x1008e6080.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/restore_no_account_model_threads_0x1008e76a0.c`（closure）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/session_meta_thread_metadata_0x1008e0590.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/patch_session_meta_line_0x1008d2ae0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/replace_session_meta_lines_with_strategy_0x1008f9090.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/prepare_thread_metadata_rollout_0x1008e2e50.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/apply_thread_metadata_rollout_adoption_0x1008ef8e0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/restore_thread_metadata_rollout_adoption_0x1008fa660.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/inspect_thread_provider_convergence_with_0x1008fb160.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/is_routable_official_passthrough_model_0x1008f0380.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/disposition_0x1008d2630.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/serialize_0x1008d1c40.c`

### codex_diagnostic（11 文件）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/check_rollout_orphan_providers_with_cach_0x1002621a0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/check_thread_provider_consistency_with_c_0x100263840.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/read_0x10024c700.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/orphan_provider_fix_ids_0x1002306b0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/prepare_orphan_thread_adoption_0x10024d710.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/fix_orphan_thread_providers_0x100246ec0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/fix_orphan_thread_providers_with_catalog_0x1002592a0.c` `[FULL]`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/rollback_orphan_thread_adoption_0x100251160.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/with_orphan_adoption_rollback_0x10024c630.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/mark_orphan_thread_adoption_recovery_0x1002583d0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/write_orphan_thread_adoption_recovery_fi_0x1002635c0.c`

### codex_writer（1 文件）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_writer/ida/pseudocode/router_provider_requires_openai_auth_0x1005686a0.c`

### codex_config_reconciler（1 文件）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/codex_config_reconciler/ida/pseudocode/reconcile_inner_0x100a19310.c`

## raw evidence — win parity 锚点（windows-x64 delta，14 锚点，供跨平台对照）

- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_set_codex_no_account_slots_0x140e2de30.c` — 命令壳
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay13codex_catalog19read_bund_0x140a2b420.c` — catalog read_bundled_models
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay13codex_catalog22prepare_r_0x140a32820.c` — catalog prepare_router_catalog
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay13codex_catalog22write_pre_0x140a339f0.c` — catalog write_prepared_catalog
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay13codex_catalog24read_bund_0x140a34430.c` — catalog read_bundled_cli_version
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay13codex_catalog30load_offi_0x140a35fd0.c` — catalog load_official_catalog_snapshot
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay16codex_diagnostic36mark_o_0x140a6c7e0.c` — diagnostic mark_orphan_thread_adoption_recovery
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay16codex_diagnostic41check__0x140a78db0.c` — diagnostic check_thread_provider_consistency_with_cache
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_config_reconciler1_0x140a98730.c` — config_reconciler reconcile_inner
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_thread_visibility3_0x1404ae140.c` — thread_visibility (1/5)
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_thread_visibility3_0x14053fb50.c` — thread_visibility (2/5)
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_thread_visibility3_0x140542290.c` — thread_visibility (3/5)
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_thread_visibility4_0x140538780.c` — thread_visibility (4/5)
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay23codex_thread_visibility4_0x14054d260.c` — thread_visibility (5/5)

## raw evidence — binary / version baseline

- `/raw/aimami/1.2.4/macos-arm64/VERSION-BASELINE.md` — binary sha256 `24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288`，app_bundle `dev.aimami.desktop`，app_version `1.2.4`
- `/raw/aimami/1.2.4/macos-arm64/MANIFEST.md` — reverse evidence manifest（tauri-dumper 0.1.5 / python3 3.13.5 / node v24.4.1 / rust_demangle 0.2.1 / rizin 0.8.2）
- `/raw/aimami/1.2.4/macos-arm64/frontend-assets.sha256` — 全量前端 asset 哈希（含 relay-page-pfdbI0wX.js / maintenance-page-Cfv_qYNg.js / index-UqyngLFp.js）

## raw evidence — frontend（本批不直接覆盖，经 DELTA-FINAL/CHANGELOG-ALIGNMENT/FRONTEND-CCF 引用）

- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/relay-page-pfdbI0wX.js` — relay 页 beautified（4331 行，no-account-slots 卡 + codex-router 板块）
- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/maintenance-page-Cfv_qYNg.js` — maintenance 页 beautified（826 行，ClaudeWebSearchCompat toggle）
- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/index-UqyngLFp.js` — 主 bundle beautified（43813 行，Pe 合约表 + mock + wrapper）
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl` — 前端控制流（134 行，1:1 对应 134 命令）
- `/raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射
- `/raw/aimami/1.2.4/macos-arm64/frontend/pages/relay-accounts-voice-delta.md` — 前端 delta（relay+accounts+voice）
- `/raw/aimami/1.2.4/macos-arm64/frontend/pages/other-pages-shared-delta.md` — 前端 delta（other pages + shared）

## baseline bundle（consumed_bundles）

- `internal-reverse/audits/macos-1.2.3-relay/` — 1.2.3 baseline bundle（manifest.json/gate-report.json/README.md/logic/pointers/data/reviews，consumerStartReady 23/23，readyToImplement=false，strictImplementationUse=false，638 去重函数）

## cross_platform_sibling（尚未组装）

- `internal-reverse/audits/windows-1.2.4-relay-catalog-thread-diag/` — 尚未组装；win delta pseudocode 锚点已存在于 `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/`（20 文件），6dims doc 记录 14 个 win parity 锚点确认跨平台行为对齐。Sibling bundle assembly 是独立 producer 任务。
