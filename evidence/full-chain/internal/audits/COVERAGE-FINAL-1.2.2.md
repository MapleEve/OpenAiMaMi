# COVERAGE-FINAL — AiMaMi 1.1.8 → 1.2.2(mac)/1.2.1(win) delta 终稿

> 平台版本不同步: mac=1.2.2, win=1.2.1。baseline=1.1.8(已封顶)。
> 所有数字经 orchestrator 扫盘 grounded 复核(截断守卫 红线20 + VA 抽验)。

## 1. 前端命令 delta(base 131→129, 两平台一致)
- ADDED(7): default_debug_bundle_file_name, export_debug_bundle, export_session_markdown, migrate_session_worktree, set_voice_overlay_style, upload_debug_report, write_client_debug_log
- REMOVED(9): diagnose_codex_router, fix_codex_router_issue, get_or_create_remote_device_secret, graceful_restart_for_update, import_remote_device_secret_if_empty, run_codex_router_diagnostics, set_relay_display_tags, test_relay_draft_stream, test_relay_provider_stream
  - 4 仅前端脱钩后端还在(diagnose_codex_router/remote_device_secret×2/test_relay_draft_stream), 5 疑真删。
- ARGKEY_CHANGED(1): voice_processing_done

## 2. 命令 owner 逆向(STAGE2 deep)
- 6/7 双平台深逆(export_session_markdown/migrate_session_worktree/upload_debug_report/write_client_debug_log/export_debug_bundle/set_voice_overlay_style)。
- default_debug_bundle_file_name: owner_unresolved(tauri handler 宏派发文件名 helper)。

## 3. 非命令新后端(STAGE2.5 全模块枚举, 红线19)
- 27 个 NEW behavioral backend 补逆, 含:
  - **core::debug_bundle::***(auth/config/schema/thread/catalog/process_shape + redact_json_value_with_key) —— debug 诊断包打包机(新 export_debug_bundle 后端)。
  - **core::relay::storage::plan/apply_provider_id_migrations + preserve_state_before_provider_id_migration** —— relay provider ID 迁移(新 relay 后端变更, 对上"relay 前端更新")。
  - core::voice::runtime::overlay::show/hide_voice_overlay(新 set_voice_overlay_style 后端)。
  - core::relay::codex_diagnostic::fix_legacy_migrated_threads(1.1.8 check_ → 1.2.2 fix_, 线程迁移演进)。
  - core::debug_report_upload::TempBundleGuard, platform::macos_main_bundle/process::*。

## 4. 前端组件(用户重点)
- relay/account/settings/mcp/skills page 组件变(纯 UI 重构, 命令级 diff=0)。图标库→lucide-react Vite 动态导入(createLucideIcon/__vite__mapDeps)。见 version-delta/frontend-delta/RELAY-ACCOUNT-ICON-ANALYSIS.md。

## 5. 落盘 + fraud-scan
- mac 1.2.2 = 34 叶(7 delta + 27 behavioral) - 1 噪声 = 33; win 1.2.1 = 6 叶。
- fraud-scan: 真实/总, VA 抽验真 decompile, 截断守卫无裸 artifact。<工具调用> 双平台。
