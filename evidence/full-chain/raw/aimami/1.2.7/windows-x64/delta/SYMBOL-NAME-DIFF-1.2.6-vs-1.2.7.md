# win 1.2.7 vs 1.2.6 符号名 diff（函数符号枚举 + 集合差）

- 生成时间：2026-10-03
- session 类型：只读枚举 diff（红线 30 delta 范围；红线 37 IDA 实例用户已挂载两版本，agent 不切换）
- 数据面：
  - win 1.2.7：IDA 端口 <审计环境>，IDB `<内部存储>\AiMaMi.1.2.7 win64.exe.i64`，imagebase `0x140000000`
  - win 1.2.6：IDA 端口 <审计环境>，IDB `<内部存储>\AiMaMi 1.2.6 win64.exe.i64`，imagebase `0x140000000`
- 方法：`` 内联调 `idautils.Functions()` + `ida_name.get_name(ea)`，**禁止**用 `nm` / 外部 VA 表（偏移/内联会错位）。两侧各枚举全量函数名 + size，分别落 `<内部存储>\funcs_127_names.json` 与 `<内部存储>\funcs_126_names.json`，再在 win 侧做集合 diff（避免 SMB/mac 跨机读）。

## 1. 全量函数符号计数

| 维度 | win 1.2.6 | win 1.2.7 | Δ |
|---|---:|---:|---:|
| 函数总数（IDA 枚举） | 106,272 | 112,594 | **+6,322（+5.9%）** |
| 已命名（非 `sub_*` / 非 `nullsub_*`） | 355 | 170 | -185 |
| `sub_*` 未命名 | ~105,900 | 112,415 | ≈ +6,500 |
| `nullsub_*` | 少量 | 9 | — |
| 代码总字节（函数 end-start 求和） | 0x169bc12（≈23.7 MB） | 0x188ea18（≈25.7 MB） | **+0x1F2E06（≈+2.0 MB，+8.4%）** |

### 1.2.7 尺寸分布
- `tiny <0x20`：7,393
- `small <0x100`：87,920
- `mid <0x1000`：16,667
- `large ≥0x1000`：614

### 1.2.6 尺寸分布
- `tiny <0x20`：6,934
- `small <0x100`：83,556
- `mid <0x1000`：15,240
- `large ≥0x1000`：542

**形态结论**：+6,322 个新增函数里，绝大多数落 `small`（+4,364）与 `mid`（+1,427）段，`large` 净增 72 个。代码体量 +8.4%，函数数量 +5.9%——属于中等规模的功能性新增 + 重构，不是纯 hotfix，也不是大规模重写。

## 2. 符号名集合 diff（已命名部分）

### 2.1 命名函数集合
- 1.2.6 已命名：355
- 1.2.7 已命名：170
- 两侧交集：170（全部为 Windows API / CRT / 编译器 runtime 符号）
- 仅 1.2.6 有：185
- 仅 1.2.7 有：0

### 2.2 关键事实（必须读）
**1.2.7 IDB 当前 0 个产品代码符号已命名**——170 个「已命名」全部是：
- Windows API（`CreateFileW` / `GetCurrentProcessId` / `RegQueryValueExW` 等）
- CRT（`malloc`/`free`/`strcmp`/`floor`/`pow` 等）
- 编译器 helper（`__security_check_cookie` / `_guard_dispatch_icall_nop` 等）
- 第三方库（`aws_lc_0_41_0_jent_*`）

**1.2.6 IDB 的 185 个独有名字不是「1.2.7 删掉的函数」**，而是前序逆向工作在 1.2.6 IDB 内手工恢复的语义名（tauri command handler / relay translator / proxy_server / repository_* / session migration / voice 等）。这些函数在 1.2.7 二进制中**几乎全部仍然存在**，只是 1.2.7 IDB 尚未做命名恢复。

### 2.3 因此「符号名 diff」在本轮的诚实输出
- **新增（1.2.7 相对 1.2.6 的符号名新增）**：0 个产品级符号（1.2.7 IDB 未做任何命名恢复，无法从符号名层面识别新增）
- **删除（1.2.7 相对 1.2.6 的符号名删除）**：185 个名字在 1.2.7 IDB 无同名——但这反映的是「1.2.7 IDB 未命名」，**不**等于 1.2.7 二进制移除了这些函数
- **改名**：无法从符号名层面识别（1.2.7 IDB 全是 `sub_*`）

### 2.4 1.2.6 IDB 中已命名的 185 个产品符号（按子系统聚类）

这些名字是 1.2.6 的逆向恢复成果，在 1.2.7 中应以「同 VA 锚定 + 函数体 diff」的方式重新定位（见同目录 `FUNCTION-BODY-DIFF-1.2.6-vs-1.2.7.md`），不是「1.2.7 删除了它们」。

按前缀聚类（不在此处做完整性声明，仅按名字分组）：

- **relay / proxy_server / translator**：`activate_relay_provider`、`deactivate_relay_provider`、`delete_relay_provider`、`upsert_relay_provider`、`reorder_relay_providers`、`set_relay_provider_network`、`get_relay_active`、`get_relay_provider_quota`、`get_relay_proxy_status`、`fetch_relay_models_draft`、`load_relay_state`、`export_relay_config`、`import_relay_config`、`reveal_relay_api_key`、`commit_auth_for_router`、`reconcile_router_on`、`get_codex_router_auth_readiness_owner_sys`、`set_codex_router_enabled`、`set_codex_router_no_account_mode`、`set_codex_no_account_slots`、`proxy_server_handle_http_request`、`proxy_server_route_dispatch`、`proxy_server_request_handler_b/c/d/e`、`proxy_server_sse_forward`、`proxy_server_sse_handler_a/b/c`、`proxy_server_util`、`translate_anthropic_response_to_output_items`、`translator_sse_stream_a/b`、`translator_stream_emit`、`set_anthropic_thinking_carrier`、`emit_response_done_events_for_delta`
- **账号 / 切换 / 自动切换**：`switch_account`、`switch_account_and_restart_codex`、`remove_accounts`、`refresh_single_account_usage`、`refresh_usage_snapshot`、`export_accounts_to_file`、`import_accounts_from_file`、`preview_account_import`、`repository_apply_account_state`、`repository_resolve_account_state`、`repository_synchronize_account_state`、`repository_resolve_account_transition`、`repository_auto_switch_gating`、`repository_config_repair`、`repository_dispatch_daemon_payload`、`load_pending_auto_switch`、`set_auto_switch`、`configure_auto_switch`、`confirm_pending_auto_switch`、`confirm_pending_auto_switch_and_restart_codex`、`dismiss_pending_auto_switch`、`auto_switch_daemon_once_core`、`restart_codex`、`force_kill_codex`
- **sessions / threads 管理**：`load_sessions`、`delete_sessions`、`export_session_markdown`、`migrate_session_worktree`、`check_legacy_migrated_threads`、`legacy_migrated_threads_apply`、`append_thread_reconcile_warnings`、`check_and_fix_thread_poisoned_instructions`、`repair_invalid_ids_in_rollout`、`orphan_thread_adoption_row_to_json_MAPFOLD`、`write_orphan_thread_adoption_recovery`、`thread_model_catalog_converge_owner_sys`、`thread_provider_consistency_with_cache_check_owner_sys`、`thread_response_item_ids_check_report_owner`、`thread_response_item_ids_repair_worker_sys`、`ensure_transition_rollout_write_capacity`、`staged_file_cleanup_drop`
- **ChatGPT 引擎 / 平台**：`begin_chatgpt_oauth_login`、`locate_chatgpt_desktop_app`、`resolve_chatgpt_app_bundled_cli_candidates`、`codex_bundled_cli_path`、`run_bundled_cli`、`migrate_legacy_deepseek_v4_flash_official_protocol`、`official_reasoning_profile`、`set_image_compat`
- **daemon / 单实例 / 启动**：`main_cli_daemon_run_once_dispatch`、`run_daemon_once_async_wrapper_a/b`、`run_daemon_once_tauri_dispatcher`、`start_capture_core_and_sidecar_scheduler`、`single_instance_activation_request_prepare`、`single_instance_activation_request_commit`、`single_instance_activation_watcher`、`focus_main_window`、`open_path`、`request_accessibility_permission`、`has_notch`、`get_device_id`、`get_autostart_state`、`set_autostart_enabled`、`load_bootstrap_state`
- **诊断 / 修复**：`diagnose`、`inspect`、`repair`、`repair_if_needed`、`preflight_save`、`preflight_save_cleanup_closure`、`rebuild_registry`、`fix_takeover_backup_orphan`、`check_takeover_backup_orphan`、`takeover_backup_orphan_check_guard`、`takeover_backup_orphan_fix_worker`、`takeover`、`stability_issue`、`project_state_integrity_diagnostic_key_verify_owner_sys`、`project_state_integrity_diagnostic_key_verify_classify_owner_sys`、`codex_diagnostic_requires_quiet_window_owner_sys`、`collect_project_state_from_active_db`、`collect_cwd_backfill_candidates`、`upload_debug_report`、`export_debug_bundle`、`write_client_debug_log`
- **配额 / 用量分析**：`load_usage_analytics`、`load_quota_history`、`load_token_analytics`、`load_tool_analytics`、`load_session_analytics`、`load_change_analytics`、`load_snapshot`、`get_usage_refresh_interval`、`set_usage_refresh_interval`、`coop_budget_poll_wrapper`
- **Claude / Anthropic 兼容**：`get_claude_web_search_compat`、`set_claude_web_search_compat`
- **hotspot / proxy config**：`get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready`、`detect_api_proxy_config`、`set_api_proxy_config`、`test_api_proxy_config`
- **skills / mcp**：`load_installed_skills`、`import_skill`、`remove_skill`、`load_skill_backups`、`delete_skill_backup`、`restore_skill_backup`、`load_mcp_servers`、`upsert_mcp_server`、`remove_mcp_server`、`set_mcp_server_enabled`
- **mystery / 杂项**：`get_mystery_unlock_grants`、`merge_mystery_unlock_grants`、`get_notification_client_state`、`parse_aimami_deeplink`、`logout`、`is_aimami_owned_model_section`、`generic_enum_option_drop_glue`、`string_array_from_map`、`toml_lexical_state_line_is_structural`、`Vec_from_iter`、`vendor_base64_decode_driver`、`vendor_json_parse_str_with_trailing_check`、`reconcile_inner`、`reconcile_native_off_with_progress`、`reconcile_native_off_after_stop_with_progress`、`run_config_mutation_with_windows_retry`、`rewrite_session_meta_base_instructions_helper_sys`、`apply_handler_invoke_shared_glue`、`tauri_master_invoke_handler_shared_dispatcher`、`TlsCallback_1`
- **voice（用户已明确排除，列出仅为完整性，不计入工作范围）**：`emit_voice_runtime_status`、`load_voice_runtime_status`、`load_voice_runtime_status_owner_sys`、`set_voice_global_shortcut`、`set_voice_overlay_style`、`set_voice_processing_mode_id`、`start_voice_capture`、`stop_voice_capture_core_sys`、`stop_voice_capture_owner_sys`、`update_voice_runtime_settings`、`update_voice_runtime_settings_internal`、`restart_trigger_listener_internal`、`voice_search_overlay_ready`、`tauri_cmd_update_voice_runtime_settings_dispatch`

## 3. 对「重点关注」五个方向的符号名层面回答

| 方向 | 符号名 diff 信号 | 备注 |
|---|---|---|
| 账号卡片切换/添加/重置/到期高亮（accounts） | 无法从符号名识别新增/删除（1.2.7 全 strip） | 需走函数体 diff + panic-Location 锚定，见同目录 FUNCTION-BODY-DIFF 文档 |
| 线程管理重构（sessions/threads） | 同上 | 同上 |
| 智能路由重构（relay router） | 同上 | 同上 |
| ChatGPT 引擎目录适配（platform/process） | 同上 | 同上 |
| Anthropic V1 协议（relay translator） | 同上 | 同上 |

**本轮符号名 diff 的真实价值**：确认 1.2.7 函数体量 +5.9%、代码字节 +8.4%、大中型函数（≥0x1000）净增 72 个，且 1.2.7 IDB 是未命名状态——下一步「识别新增/删除/改名」必须走 **VA 锚定 + 函数体 diff + panic-Location 两跳 xref + tauri 命令名串精确命名**（红线 24 的 win-native 恢复路径），不能靠符号名 diff 直接回答。

## 4. 数据落盘

- win 侧中间产物（归 1.2.7 IDB 同机目录）：
  - `<内部存储>\funcs_126_names.json`（106,272 个名字）
  - `<内部存储>\funcs_127_names.json`（112,594 个名字）
  - `<内部存储>\diff_126_127_added.json` / `diff_126_127_removed.json`（含 `sub_*` 的原始集合差，诊断用）
  - `<内部存储>\diff_named_added.json` / `diff_named_removed.json` / `diff_named_common.json`（仅命名函数集合差）
  - `<内部存储>\diff_base_added.json` / `diff_base_removed.json` / `diff_base_common.json`（剥 hash 后基名集合差，诊断用）
- SMB 侧本 leaf：`<内部存储>/raw/aimami/1.2.7/windows-x64/delta/SYMBOL-NAME-DIFF-1.2.6-vs-1.2.7.md`

## 5. 红线自查

- 红线 12（claim-first）：本轮为单 target 只读枚举 diff，不开新工作单，无需在 REVERSE-STATUS.md 登记 in-progress
- 红线 13（accepted_unknown）：未标任何 accepted_unknown
- 红线 16（SMB 绝对路径）：本 leaf 走硬编码 `<内部存储>/...`，写前已 `ls` 核挂载
- 红线 28（平台收口）：本轮仅 windows-x64 delta，不声明跨平台完成度
- 红线 30（delta ≠ baseline 重做）：仅做符号枚举 + 集合差，未对 1.2.6 重做 baseline
- 红线 31（IDB 注释不自证）：未引用 1.2.6 IDB 既有注释作为 1.2.7 的佐证
- 红线 32（同名函数体 diff）：本轮零同名产品符号，故同名函数体 diff 由既有 `FUNCTION-BODY-DIFF-1.2.6-vs-1.2.7.md` 覆盖；本 leaf 仅做符号名集合差
- 红线 37（IDA 实例用户切换）：两 IDB 均由用户预挂载，agent 未发起 open_file / new_database / 跨版本 select_instance；两个 `select_instance` 调用均指向「用户当前挂载的对应版本」本身（<审计环境>↔1.2.7、<审计环境>↔1.2.6），未触发版本切换
- 红线 38（baseline 是输入）：未要求重开 1.2.6 IDB 之外的 baseline 数据；1.2.6 命名函数清单来自现役 1.2.6 IDB（用户已挂载），不是重新逆向

LEAF_WRITTEN
