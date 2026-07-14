# AiMaMi 1.0.9→1.1.8 后端四角度完整性 (STAGE2.5)



## 角度A — mac 符号枚举(权威)
- mac 总函数 32806;codexmate_lib::commands:: owner(去 drop/closure glue)=105 distinct 命令。
- 前端 CCF universe=131;**backend-only(后端有实现/前端无 invoke)=38**。
- 其中 30 继承自 1.1.1 已characterized(hotspot 窗口/runtime snapshot/auto-switch watcher/switch_sync);refresh_usage_snapshot_with_retry 已由本轮 delta leaf(refresh_usage_snapshot owner=同VA)覆盖。
- **NEW-in-1.1.8 backend-only=8,本轮已逆(角度C truly_undone→已逆)**:
  - create_bootstrap_tray_menu (tray_menu 0x1004d1d60)
  - create_tray_menu (tray_menu 0x1004d0830)
  - create_tray_menu_from_snapshot (tray_menu 0x1004d3710)
  - handle_tray_menu_event (tray_menu 0x1004d0f50)
  - perform_switch_payload_with_restart (accounts 0x1004ccfa0)
  - refresh_tray_menu (tray_menu 0x1004d0e30)
  - refresh_tray_menu_with_snapshot (tray_menu 0x1004d4e90)
  - take_required (deeplink 0x100694800)
  → tray_menu 组 6(托盘图标特性后端,对应 changelog『Windows 一键导入修复+托盘图标』) + perform_switch_payload_with_restart(账号切换重启后端) + take_required(deeplink 助手)。
  → 每条 BFS+DFS spine 到 depth3-8 + 真实伪代码 + evidence,inline comment 回写,保存分析库。

## 角度B — 前端 CCF
- 131 命令宇宙,mac/win 逐条比对(STAGE1)。

## 角度C — export/orphan 语义扫
- core::relay/proxy_server/daemon/auto_switch 内部实现:已被 1.0.9/1.1.1 canonical relay/* 叶 + 本轮 delta 叶覆盖(already_in_canonical)。NEW truly_undone=上述8,已逆。

## 角度D — manifest diff
- 见 frontend-delta/FRONTEND-DELTA.md(added15/removed11/argkey_changed0)。

## Win 侧限制(如实)
- win64 二进制完全 strip,无 Rust 符号,backend-only 无法用符号枚举(需 dispatcher switch 分析)。前端 20 delta 已全逆;深度 backend-only 枚举与 1.1.1 同为方法学受限项(1.1.1 亦标 UNKNOWN)。tray/hotspot 后端在 win 存在但未逐一符号化。


## 【复审修正 — 用户复审后补漏】角度A/C 从 commands:: 扩到全模块
首轮角度A/C **只枚举了 `codexmate_lib::commands::`**,漏了非命令行为后端。离线枚举 全模块直方图: core 667 / commands 119 / run 69 / platform 36 / run_daemon_once_cli 2。补逆 **48 个非命令行为后端**(3批):
- 批1(13): platform::daemon(install/uninstall/check_state/run_daemon_once_cli) + platform::single_instance(acquire/parse_activation/prepare_dir/request_path/**start_activation_watcher**〔=1.1.1 truly_undone 同函数〕/request_existing_instance_activation_with_url) + core::relay::codex_diagnostic::**check_legacy_migrated_threads**〔=changelog『线程DB迁移』〕 + repository::build_daemon_payload/resolve_daemon_binary。
- 批2(24): core::relay::proxy_server 中转注入管线 13(resolve_relay_route/build_upstream_client+headers+direct/codex_router_lookup_model/sanitize_body_for_official_upstream/**expand_aimami_compactions_for_upstream**/codex_local_takeover_fallback_response/compact_compat/drop_cross_provider_previous_response_id/record_codex_route+passthrough/pick_free_port)〔=changelog #1『中转注入重构』〕 + translator(clean_tool_schema/responses_to_sse_payload/sse_event) + repository bootstrap stores(mcp/analytics/skills) + notification_client_state + quota_history + breaker + RelayManager::bootstrap。
- 批3(11): thread_visibility(repair_missing_rollouts_for_convergence/restore_rollout_mtime_best_effort)〔auto-switch daemon 修复〕 + translator::stream 5 emitter(OpenAI↔Anthropic↔Responses 格式转译) + router_unlock_auth::install_virtual_unlock_auth + mcp::save_config_text + account_io::persist_account_auth + keychain::delete_api_key。
- 每个 BFS+DFS depth2-8 + 真实伪代码(均77KB/叶) + evidence + inline comment + 保存分析库。
- **收敛判定**: 再扫剩余强副作用非命令函数 19 个,均为已逆命令/函数的 impl 助手(RelayManager 方法/proxy 内部/diagnostic 子函数 check+fix_router_unlock_auth_residue 属 diagnose/fix 命令 impl/router_unlock 子助手/mystery_unlock_grants) → already_in_canonical,父叶已记录,同 1.1.1 方法不单独出叶。
- 诚实边界: core:: 667 函数未做逐函数穷举叶(那是不同量级 scope);已覆盖 = 全部命令可达(transitive)+ 全部新行为簇(48)。covered VA 集合 7644。
