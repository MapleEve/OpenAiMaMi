# 07 · target 1.1.8 (baseline 1.0.9)

前端命令宇宙 131。mac delta 29 / same 60 / orphan 42；win delta 20 / same 68 / orphan 43；removed 11（9 真删除 + 2 rename→_stream）。

## 主题（对上官方 changelog）
- 智能路由 / 中转注入重构 + API 登录模式：begin/cancel_chatgpt_oauth_login、get_codex_router_auth_readiness、set_codex_router_no_account_mode、detect_api_proxy_config、activate/deactivate/upsert_relay_provider。
- 中转连接稳定性：get_relay_provider_quota、refresh_usage_snapshot(with_retry)、detect_api_proxy_config。
- 中转 agent 任务体验 / 自动切换：confirm_pending_auto_switch(_and_restart_codex)、switch_account_and_restart_codex、test_relay_draft/provider_stream。
- Windows 一键导入 + 托盘图标：parse_aimami_deeplink、tray_menu 组、get_image_compat。
- 系统诊断 + 线程 DB 迁移：diagnose_codex_router、fix_codex_router_issue、force_kill_codex、delete_sessions、check_legacy_migrated_threads、refresh_usage_snapshot。

详见 audits/1.1.8/COVERAGE-FINAL-1.1.8.md、CHANGELOG-CROSSMAP-1.1.8.md、BACKEND-FOUR-ANGLE-1.1.8.md。
