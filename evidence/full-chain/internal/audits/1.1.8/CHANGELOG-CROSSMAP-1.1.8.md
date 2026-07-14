# CHANGELOG-CROSSMAP — 1.1.8 官方 changelog ↔ 逆向命令

| changelog 项 | 对应逆向命令/后端(1.1.8 delta) | 反编译佐证 |
|---|---|---|
| 智能路由 / 中转注入重构 + API 登录模式 | begin/cancel_chatgpt_oauth_login, get_codex_router_auth_readiness, set_codex_router_no_account_mode, detect_api_proxy_config, activate/deactivate/upsert_relay_provider | account_oauth 闭包 spawn; relay::manager save; detect proxy config(sub_140A4AB80) |
| 中转连接稳定性 | get_relay_provider_quota, refresh_usage_snapshot_with_retry, detect_api_proxy_config | async Hyper/reqwest quota; retry + PROGRESSIVE_STATE_SAVE_FAILED; proxy 探测 |
| 中转 agent 任务体验 / 自动切换 | confirm_pending_auto_switch(_and_restart_codex), switch_account_and_restart_codex, test_relay_draft_stream, test_relay_provider_stream | dev.aimami.auto-switch; model/content/stream; async stream poll |
| Windows 一键导入修复 + 托盘图标 | parse_aimami_deeplink, take_required, get_image_compat(win absent), tray_menu 组(backend-only 6) | aimami:// Url 解析; tray create/refresh/handle_event from_snapshot |
| 系统诊断 xhigh + 线程 DB 迁移 | diagnose_codex_router, fix_codex_router_issue, force_kill_codex, delete_sessions, refresh_usage_snapshot | osascript quit+lsof/kill; DELETE FROM threads WHERE id=?1 + remove_file; AUTO_SWITCH_DAEMON_REPAIR_FAILED |

结论: 5 大 changelog 主题全部有对应的 1.1.8 delta 命令/后端反编译佐证, 无「changelog 声称但逆向未见」的空缺, 亦无「逆向见变化但 changelog 未提」需额外解释项(relay stream/quota/reveal/reorder/display_tags 属 1.1.x 中转能力细化)。
