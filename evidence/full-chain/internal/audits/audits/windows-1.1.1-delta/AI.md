# AI.md — 消费者快速入口

**给 内部构建 实现侧消费者的最短摘要。完整证据链在 VERSION-DIFF.md 和 logic/ 目录。**

---

## 你可以立即实现的命令（gate ≥ consumerStartReady）

| 命令 | gate 级别 | 关键约束 |
|---|---|---|
| `set_codex_api_login` | consumerStartReady | params: manager(String)+enabled(bool)+relaunch(bool)；relaunch=true 时触发 quit Codex；rollback on persist fail |
| `set_codex_api_slots` | consumerStartReady | params: manager(String)+slots(?); 写 relay config JSON 原子写 |
| `set_relay_display_tags` | consumerStartReady | params: manager(String)+displayTagGlobal+displayTagWoyao; 写 relay config JSON 9字段 |
| `get_relay_provider_quota` | strictImplementationUse_candidate | params: manager(String)+providerId(String); 11 provider URL 路由; MiniMax 专用 response parser; RelayProviderQuota stride=232B |
| `reorder_relay_providers` | strictImplementationUse_candidate | params: manager(String)+orderedIds(Vec<String>); len 必须等于当前 providers 数量；SIMD reorder stride=232B；TLS id-index 重建 |
| `reveal_relay_api_key` | strictImplementationUse | params: manager:Option<String>=None; response 字段 label='Success'(不是'apiKey'); 共享 keychain 叶子 |
| `parse_aimami_deeplink` | strictImplementationUse_candidate | deeplink URL 解析；详见 logic/parse_aimami_deeplink.md |
| `test_relay_draft_stream` | consumerStartReady | params: manager+input(RelayDraftTestInput 8字段)+onEvent(Handler); SSE 流; POST /v1/chat/completions 或 /v1/messages |
| `test_relay_provider_stream` | consumerStartReady | params: manager+providerId+model+onEvent; stream 测试替代旧 test_relay_provider |

---

## body-delta 命令（同名但 1.1.1 行为变更）

| 命令 | 变更摘要 |
|---|---|
| `confirm_pending_auto_switch_and_restart_codex` | 协程架构变：4-outer-state + nested sub-state，relay provider type vtable 分叉（off_141899420）；dim1 CCF 缺失，gate=consumerStartReady=false |
| `import_accounts_from_file` | 新增 relay provider vtable 并发导入路径（off_141899420 → sub_14023EDA0/sub_14023EAB0）；win 专有错误 RUNTIME_REFRESH_FAILED_AFTER_IMPORT |
| `restart_codex` | VA 漂移（1.0.9 VA 已被复用）；新 VA=0x14001AE30；behavior 结构不变 |
| `set_codex_router_enabled` | 新增 apiLogin 参数（前端合约已变更）；backend 字符串在 sub_14096A2D0 确认 |
| `diagnose` / `diagnose_codex_router` / `run_codex_router_diagnostics` | 均在 1.1.1 dispatcher 确认；xhigh reasoning effort 识别（string 0x1412c723a）；fix_codex_router_issue 为新增 |

---

## 你不需要实现的（删除 / orphan）

- **plugin 系列（4条）**：get_plugin_config / list_plugins / toggle_plugin / update_plugin_config — 前端+backend 全下线
- **passthrough 系列（2条）**：get_passthrough_audit_log / set_block_official_passthrough — 前端+backend 全下线
- **relay 替换删除**：test_relay_draft（被 test_relay_draft_stream 替代）/ test_relay_provider（被 test_relay_provider_stream 替代）/ set_relay_provider_network（移除）
- **reset_codex_config**：前端+backend 全下线
- **voice 全家（43条 orphan）**：无 win backend，macOS/桌面专有功能，产品决策不逆

---

## 跨平台警示

win 1.1.1 **没有** 以下命令的 IPC backend：
- relay_proxy_server（Changelog #3 SSE relay agent continuity）
- append_assistant_and_tool_results
- migrate_threads_for_router / has_router_thread_migration / rollback_threads_for_router（Changelog #5 线程迁移修复是内部启动时逻辑）
- signal_codex_quit_wake（macOS-only，5 pattern 搜索全 0 hit）
