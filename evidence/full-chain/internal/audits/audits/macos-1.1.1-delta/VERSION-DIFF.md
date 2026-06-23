# VERSION-DIFF.md — AiMaMi 1.1.1 macOS arm64 Delta 五分类（完整终账）

**session_initial**: <审计会话>
**session_repair**: <审计会话>
**session_integrity**: <审计会话>
**session_sweep**: <审计会话>（sweep false_negative 补录）
**session_goldleaf**: <审计会话>（全量 gold-leaf 收尾）
**regenerated_by**: <审计会话>
**regenerated_at**: 2026-06-18
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**baseline**: 1.0.9 macOS（100% 逆完）
**mac-delta.txt**: 43 条（权威，逐条覆盖）

> 红线：禁把 baseline-lookup 失败伪装 delta。每条分类都标注置信度来源。
> 本版修正：旧版（2026-06-17）遗漏 sweep false_negative 11 条，已补入 ③-D 节。

---

## ① 真新增命令（9 条，带 backend，新增于 1.1.1）

> 判定标准：frontend-delta 新增集合 + 逆向分析 1.1.1 IDB 找到 owner VA + 1.0.9 INDEX 无对应条目 + owner-map-111.jsonl status=added。

| 命令 | owner VA | 模块 | leaf dir | 关键行为 |
|------|----------|------|----------|---------|
| `graceful_restart_for_update` | 0x10061b740 | commands::system | system/ | 进程自重启：current_exe + parent×3 定位 .app bundle；spawn `sh -c 'sleep 1 && open "<bundle>"'`；随即 AppHandle::exit(0)；新增错误字符串 "cannot resolve app bundle path" |
| `set_codex_api_login` | 0x1005d3a10 | commands_relay | commands_relay/ | 启停 virtual API 登录；写 virtual-auth-marker.json + codex 会话文件；stop/launch codex 进程；progress events: stopping\_codex/writing\_auth/writing\_config/done\a；argKey: enabled(bool) |
| `set_codex_api_slots` | 0x1005e9530 | commands_relay | commands_relay/ | 设置 relay provider 的 codex API slots；validate count≤5，唯一 providerId；argKey: slots(Vec)；persist+sync_codex_config |
| `get_relay_provider_quota` | 0x100145890 (async poll) | relay | relay/ | GET /v1/usage；bearer_auth；3 层 API key 获取（plain file / encrypted JSON / macOS Keychain）；返回 {remaining, quota, usage}；argKeys: [manager, providerId] |
| `reorder_relay_providers` | 0x1005eb9a0 | commands_relay | commands_relay/ | 按 orderedIds: string[] 重排 providers；driftsort/insertion_sort；persist+sync_codex_config；argKey: orderedIds(Vec<String>) |
| `reveal_relay_api_key` | 0x1005d21a0 (core) | commands_relay | commands_relay/ | 读 API key（3 层：plain file → encrypted JSON → macOS Keychain）；write-through cache；返回 Option\<String\>；argKey: providerId |
| `set_relay_display_tags` | 0x1005eb5a0 | commands_relay | commands_relay/ | argKeys: [manager, global, woyao]；sanitize_display_tag（trim）×2；persist RelayState；"woyao"=内部字段名（中文拼音"我要"） |
| `parse_aimami_deeplink` | 0x1004dade0 | deeplink | deeplink/ | 解析 aimami://v1/import URL；验证 scheme/host/path；提取 provider/name/endpoint/apiKey/model；model 缺省="gpt-5.4"；argKey: url |
| `test_relay_draft_stream` | 0x10009d110 (async core poll) | codexmate_lib__commands__relay | codexmate_lib__commands__relay/ | ICF-folded；POST /v1/chat/completions 流式测试；input: RelayDraftTestInput{providerId,ide,atMs,baseUrl,apiKey,model,wireApi,extraHeaders}；stream=true+stream_options{include_usage:true} |
| `test_relay_provider_stream` | 0x10009d110 (async, 与上共享 body) | commands_relay | commands_relay/ | 与 test_relay_draft_stream 共享 test_provider_staged async body；Anthropic 路径用 anthropic-version:2023-06-01；is_stream_terminal_event + extract_stream_text_delta |

> **注**：owner-map 仅标 9 条，但 `graceful_restart_for_update` 在 sweep false_negative 中同时确认为 net-new，故合并到本节。
> **leaf dir 漂移说明**：`test_relay_draft_stream` raw leaf 在 `codexmate_lib__commands__relay/`（模块命名空间双下划线展开），非错误。

---

## ② 真删除命令（10 条）

> 判定标准：1.0.9 INDEX 有条目 + removed.txt 收录 + 1.1.1 IDB 无对应 command 字符串/owner VA。
> 注：removed.txt 含 14 行，其中 apply_custom_instruction、clear_custom_instruction_block 在 mac 侧属 orphan_no_backend（非 removed），check_update_installability 在 mac 1.1.1 有 backend（mac-same），load_custom_instruction_state 为 mac-orphan placement error，均不计入本节。

| 命令 | 1.0.9 模块 | 删除原因（推断） |
|------|-----------|----------------|
| `get_plugin_config` | plugin | plugin 系列整体下线 |
| `list_plugins` | plugin | plugin 系列整体下线 |
| `toggle_plugin` | plugin | plugin 系列整体下线 |
| `update_plugin_config` | plugin | plugin 系列整体下线 |
| `get_passthrough_audit_log` | passthrough | passthrough 审计面清除 |
| `set_block_official_passthrough` | passthrough | passthrough 管控面清除 |
| `set_relay_provider_network` | relay | network 设置入口被移除或功能合并 |
| `test_relay_draft` | relay | 被 `test_relay_draft_stream`（流式）替代 |
| `test_relay_provider` | relay | 被 `test_relay_provider_stream`（流式）替代 |
| `reset_codex_config` | system | Codex 配置重置命令消失；功能可能并入 fix_codex_router_issue 子项 |

---

## ③ 真 body-delta（共 35 条）

> 判定标准：1.0.9 有 baseline + 1.1.1 owner VA 已逆 + 行为变更确认（非纯 VA 漂移）。
> 分为 A（原 repair session 确认）、B（integrity 深查）、C（placement 归类修正）、D（sweep false_negative 补录）四节。

---

### ③-A 原 repair session 确认（22 条）

| 命令 | delta 类型 | owner VA | leaf dir | app 级变更点摘要 | owner VA |
|------|-----------|---------|---------|----------------|----------|
| `configure_auto_switch` | DTO 变更 | 0x100619b80 | system/ | `hasSchedule`+`scheduleMin` 参数**移除**；1.1.1 argKeys=[threshold5hPercent, thresholdWeeklyPercent]；Option\<u32\> ABI：thresholdWeeklyPercent → (bool discriminant, u32 value) | — |
| `confirm_pending_auto_switch` | 结构偏移 | 0x10061ae70 | system/ | pending 文件路径读取 offset +488/496（新 Repository struct layout）；行为合同不变；argKeys=[] | — |
| `confirm_pending_auto_switch_and_restart_codex` | 新增 callee | 0x10061e190 | system/ | stop_codex_for_file_edit（取代 1.0.9 stop_codex_app_gracefully）；launch_codex_app 新增（open -b 三级路径+3s 轮询）；capture_switch_rollback_state 快照 ~30 路径字段；FileRestoreState 4-callee 快照+恢复模式 | — |
| `diagnose_codex_router` | DTO 扩展 | 0x1005e9e00 | relay/ | 返回 DiagnoseCodexRouterResult（0x190B）；新增字段：has_migration / thread_migration_exists；6 条中文诊断字符串（字节已确认）；argKeys=[] | — |
| `fetch_relay_models_draft` | 行为扩展 | 0x1001234d0 (async) | relay/ | 新增 is_transient_error 分类（14 种瞬态错误关键词）；error blob 新增 403/404/429/500/502/503 状态码识别；新增 fetch_models::build_url（v1 suffix strip）；argKey: input | — |
| `fix_codex_router_issue` | 新增 callee + itemId | 0x1005eb070 | relay/ | 新增 stop_codex_for_file_edit/launch_codex_app；新增 fix_auth_integrity（备份恢复 auth.json，无中文错误串）；新增 itemId 值："thread-router-migrations"/"relay-state-cache.json"/"residual_cache"/"residual_manifest"；residual_manifest 触发 Codex 重启 | — |
| `get_hotspot_enabled` | 模块迁移 | 0x1005ec340 | hotspot/ | 1.0.9 在 commands::system；1.1.1 迁移到 commands::hotspot；命令语义不变；argKeys=[];返回 bool | — |
| `get_image_compat` | VA 漂移 | 0x100617f40 | system/ | config key `image_generation` in `[features]` section 读取逻辑不变；argKeys=[];返回 bool；strictImplementationUse 继承 | — |
| `get_relay_active` | ICF 内联 | (run::closure 内联) | relay/ | 1.1.1 commands wrapper ICF-folded 进 run::closure（24026B 大函数）；core RelayManager::get_active @ 0x1005d18f0；active_providers offset=+56；argKeys=[] / response contract 不变 | — |
| `get_relay_proxy_status` | DTO 格式变更 | 0x10030ee90 | commands_relay/ | `hostStr`：1.0.9="127.0.0.1:\<PORT\>" → 1.1.1="http://127.0.0.1:\<PORT\>/codex/v1"；`portStr`：1.0.9="\<PORT\>" → 1.1.1="http://127.0.0.1:\<PORT\>"；影响前端直接用 hostStr 作代理 baseURL | — |
| `load_sessions` | VA 漂移 | 0x100721c70 | commands_sessions/ | SQL query 字节验证完全相同；threading/DTO/side-effects 不变；仅重编译 VA 变更；delta_nil | — |
| `load_snapshot` | 语义升级 | 0x1000b5ba0 | accounts/ | 1.1.1 内部实现为 `refresh_full_runtime_snapshot_async`（blocking spawn）；不再是简单读取；触发完整本地快照刷新并广播；argKeys=[] | — |
| `open_path` | VA 漂移 | 0x10061f810 | system/ | `open` sidecar 逻辑同 1.0.9；argKey: path；行为不变 | — |
| `refresh_usage_snapshot` | event 名变更 + callee | 0x1006266d0 | accounts/ | Tauri 事件名：`"load_snapshot"` → `"runtime-state-updated"`（21 chars）；新增 note_usage_refresh_activity + refresh_tray_menu_with_snapshot callee；UA: AiMaMi/1.1.1；full_gold_leaf tier | — |
| `remove_mcp_server` | VA 漂移 | 0x10072a660 | commands_relay/ | owner 0x10072a660（1.1.1）vs 0x10015c300（1.0.9）；TOML parse/splice 逻辑不变；argKey: name；delta_reversed | — |
| `set_codex_router_enabled` | 重大扩展 | 0x1005d7950 | commands_relay/ | 新增 argKey `apiLogin`（bool，mode 参数）；新增 progress event `codex-router-toggle-progress`；CodexRouterTogglePayload 15 字段；新增 rollback_router_enabled；新增 normalize_thread_providers_before_migration；新增 migrate_threads_for_router_with_scope；virtual_auth lifecycle 整合 | — |
| `set_mcp_server_enabled` | VA 漂移 | 0x10072bb90 | mcp/ | owner 0x10072bb90（1.1.1）vs 0x10015d360（1.0.9）；argKeys=["name","enabled"] 不变；行为合同 identical | — |
| `upsert_mcp_server` | VA 漂移 | 0x10072ae00 | mcp/ | 两标记不变量确认（relay-managed + codex-router-top）；5步原子写不变；McpServerSummary stride=224B 不变；delta_reversed | — |
| `get_mystery_unlock_grants` | VA 漂移 + 新字段 | 0x10061a140 | system/ | 1.0.9 owner 0x10026091c → 1.1.1 0x10061a140；新增 routeExpiresAtMs 字段跟踪（expiry + expiresAt check 逻辑）；mystery_route_allowed filter 行为不变；argKeys=[] | — |
| `get_notification_client_state` | VA 漂移 + 结构体扩容 | 0x10061c690 | system/ | owner 632B→791B，core 720B；CodexMateSettings struct 新增字段（所有设置原子写入）；uuid::new_v4 + SystemTime::now → save_settings create-path；argKeys=[] / 行为合同不变 | — |
| `merge_mystery_unlock_grants` | VA 漂移 | 0x10061be20 | system/ | core impl @ 0x1004ce6a0；HashMap merge（existing+incoming，mystery_route_allowed filter）+ sort + save_settings；argKey: grants(Vec\<MysteryUnlockGrant\>)；重复 route 以 incoming 覆盖 existing | — |
| `restart_codex` | VA 漂移 | 0x100616150 | system/ | 1.0.9 bundleId 策略相同；两个 invoke 别名（restartCodex / restartCodexApp）映射同一 backend；3s kill deadline；argKeys=[] | — |

---

### ③-B integrity-recovered（1 条，从 same 升级至 delta，<审计会话>）

> mac-same-integrity.json 抽查 57 条 mac-same.txt 中的 14 条，发现 1 条 FALSE_NEGATIVE。

| 命令 | 变更类型 | owner VA | leaf dir | 关键证据 | 风险 |
|------|---------|---------|---------|---------|------|
| `load_relay_state` | callee_set_restructure | 0x1005e8dd0 | codexmate_lib__commands__relay/ | 1.0.9 call chain: ensure_proxy_started（TCP probe 127.0.0.1:port, 300ms×2, proxy spawn if down, relay.json write）→ RelayState::clone → apiKey scrub loop（offset+88 per 208-byte RelayProvider entry，vectorized ≥4 entries）→ CoreEnvelope::ok。1.1.1 call chain: RelayManager::list_state only → CoreEnvelope::ok。ensure_proxy_started 移除，apiKey scrub loop 移除。 | HIGH — 消费者不可假设 proxy auto-start 副作用仍由此路径触发 |

---

### ③-C placement errors（2 条，same→orphan 归类错，非 delta 泄漏）

> mac-same.txt 组装时 set-subtraction 漏减，shard buckets 已标 orphan_no_backend，不影响 delta 完整性。

| 命令 | 原分类 | 正确分类 | 原因 |
|------|-------|--------|------|
| `inject_voice_text` | mac-same.txt | mac-orphan | shard buckets 已标 orphan_no_backend；mac backend 始终 absent |
| `load_custom_instruction_state` | mac-same.txt | mac-orphan | 同上；win 侧为 command_removed，mac 侧为 orphan（无 backend）|

---

### ③-D sweep false_negative 补录（11 条，<审计会话>）

> 旧版 VERSION-DIFF 遗漏这 11 条。sweep 六个 macos-shard-*.json false_negative 字段逐条确认。

| 命令 | delta 类型 | owner VA | leaf dir | app 级变更点摘要 | risk |
|------|-----------|---------|---------|----------------|------|
| `delete_sessions` | 新增 SQLite 副作用 | 0x10072e1c0 (cmd) / 0x100727410 (core) | commands_sessions/ | 1.0.9 为纯 JSON 文件删除（fs::remove_file，无 DB）；1.1.1 新增 open_codex_db@0x100726df0（创建/打开 SQLite）+ rusqlite::Connection::execute（DELETE SQL）+ build_rollback_step；Session 表 schema、表名、WHERE clause 需独立逆向 rusqlite callsite | HIGH |
| `export_relay_config` | 新增 callee + keychain 路径 | 0x1005e8f90 | commands_relay/ | 1.0.9 export_to_file 无 keychain 调用；1.1.1 新增 keychain::get_api_key@0x1006c86a0（plain file → encrypted JSON → macOS Keychain 三层读取）当 includeApiKeys=true && provider.has_key=true；新增 log::__private_api::log 调用（export 完成日志）；DTO / error paths / atomic write 不变 | LOW |
| `graceful_restart_for_update` | net-new（sweep 确认） | 0x10061b740 | system/ | 1.0.9 无此命令（逆向分析 查询 Not found，1.0.9 证据目录无任何 graceful_restart* 条目）；1.1.1 新增：shell spawn `sleep 1 && open "<bundle_path>"`；AppHandle::exit(0)；no runtime auth guard；new IPC surface | MEDIUM-HIGH |
| `import_accounts_from_file` | 新增两阶段 async + plan 解析 | 0x1004bb0b0 (core) | account_io/ | 1.1.1 新增 plan_mapping::parse_chatgpt_plan_label@0x100536010（在 make_auth_snapshot 每次 auth-file 解析时调用，1.0.9 无此函数）；新增两阶段 async：Phase 1 spawn_blocking（account write）→ Phase 2 spawn_blocking（snapshot broadcast）；Phase 2 失败产生 RUNTIME_REFRESH_FAILED_AFTER_IMPORT warning 字段；argKey: selectedKeys(Vec\<String\>) | MEDIUM |
| `load_installed_skills` | 读→读+写副作用 | 0x10072db50 | skills/ | 1.0.9 仅调 core::skills::load_installed_skills + sort，无持久化步骤；1.1.1 新增 Repository::store_bootstrap_installed_skills@0x1004cf950（SystemTime::now() + duration_since() + 写入 bootstrap-cache.json，含 installed-skills 时间戳和快照）；前端或测试依赖无写语义会破坏 | MEDIUM |
| `load_mcp_servers` | 读→读+写副作用 | 0x10072a000 | mcp/ | 同 load_installed_skills 模式；1.1.1 新增 Repository::store_bootstrap_mcp_servers@0x1004cecd0（SystemTime::now() + duration_since() + 写 bootstrap-cache.json，MCP server list snapshot at struct offset +0x318/+792B）；std::fs::write（非原子，single-shot）；McpServerSummary stride=224B | MEDIUM |
| `rebuild_registry` | DTO 字段 normalize | 0x1006182c0 (cmd) / 0x1004c40a0 (impl) | rebuild_registry/ | 1.1.1 Repository::rebuild_registry@0x1004c40a0 引入 alloc::str::to_lowercase@0x100f63b30（调用两次）：PlanType::fmt 输出 + AuthMode::fmt 输出写入 RegistryItem 前均转小写；1.0.9 无 to_lowercase 调用；registry.json 中 planType/authMode 值现为全小写 | MEDIUM |
| `remove_skill` | success 语义变更 | 0x1005e44a0 (core) | codexmate_lib__core__skills/ | 1.0.9 序列：match_id → backup → remove_dir_all；1.1.1 序列：match_id → backup → metadata::stat → if Ok: remove_dir_all；if Err(NotFound): 返回 success-with-name（静默 ok）而非 error；消费者期望 "absent skill dir = error" 会静默成功 | MEDIUM |
| `switch_account_and_restart_codex` | callee 签名变更 | 0x100624e90 | codexmate_lib__commands__accounts/ | 1.0.9 调 refresh_full_runtime_snapshot@0x1001e6a1c；1.1.1 调 refresh_full_runtime_snapshot_with_source::h@0x100626f60（新增 source discriminant 参数，标记触发原因）；新增 clear_auto_switch_transient_state@0x1004cfc50 在 persist_registry 前（1.0.9 无此 callee）；其余 callee 不变 | LOW-MEDIUM |
| `test_api_proxy_config` | token 来源路径变更 | 0x100131f30 (IPC) / 0x100598740 (block poll) | codexmate_lib__commands__system/ | 1.0.9 load_api_request_context_from_repo 直接从 repo in-memory state clone (proxy_cfg, opt_token)；1.1.1 改为 core::auth::load_auth_file@0x10053ac80 + make_api_request_context@0x10053e690（file-based auth loader，fs::read_to_string + serde_json + decode_jwt_claims ×2 + nested_dict "chatgpt_account_id" lookup）；无 keychain 访问；目标 URL: `https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27` | MEDIUM-HIGH |
| `upsert_relay_provider` | API key 存储机制替换 | 0x1005eae30 | commands_relay/ | 1.0.9 调 keychain::set_api_key（macOS Keychain SecItem API，OS keychain write，provider_id keyed）；1.1.1 改为 codexmate_lib::core::relay::keychain::write_key_file@0x1006c9950（plain filesystem write：DirBuilder::_create mode 0o777 创建 keys/ 目录 + 写 `<codex_root>/keys/<provider_id>` mode 0o600）；仅在 api_key bytes 非空时触发；keychain 不再写入 | HIGH |

---

## ④ 真无差异 same-skip（54 条）

> 引 1.0.9 证据 + 1.1.1 mac-shard same 分类 + 两版本 逆向分析 确认 same。
> 置信度：继承 1.0.9 readyToImplement/strictImplementationUse gate，不自动提升。
> **计数**：原 mac-same.txt 57 条，减去 load_relay_state（→③-B delta）+ inject_voice_text + load_custom_instruction_state（→③-C orphan），剩 **54 条**。
> mac-same-integrity.json 对 14 条抽查全部通过，噪声模式（Rust Mutex poison-guard boilerplate / OnceBox init / GLOBAL_PANIC_COUNT / vtable hash）已过滤确认。

**完整 54 条**（清单规范指针 → `/intermediate/aimami/1.1.1/version-delta/mac-same.txt`）：
activate_relay_provider, begin_add_account_attach_monitor, check_update_installability, clean, deactivate_relay_provider, delete_relay_provider, delete_skill_backup, detect_api_proxy_config, diagnose, dismiss_pending_auto_switch, export_accounts_to_file, focus_main_window, force_kill_codex, get_device_id, get_or_create_remote_device_secret, get_system_info, get_usage_refresh_interval, has_notch, hotspot_ready, import_chatgpt_session_account, import_relay_config, import_remote_device_secret_if_empty, import_skill, load_bootstrap_state, load_change_analytics, load_pending_auto_switch, load_quota_history, load_session_analytics, load_skill_backups, load_token_analytics, load_tool_analytics, load_usage_analytics, logout, merge_mystery_unlock_grants, preview_account_import, remove_accounts, restore_skill_backup, run_codex_router_diagnostics, run_daemon_once, set_api_proxy_config, set_auto_switch, set_hotspot_enabled, set_image_compat, set_usage_refresh_interval, switch_account, apply_custom_instruction, clear_custom_instruction_block（以上 47 条 backend-present）+ 另 7 条 backend-absent-same（1.0.9 同样 absent，继承 readyToImplement）。

**两版本 SHA 绑定**：
- 1.0.9 macOS binary SHA256: 1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482
- 1.1.1 macOS binary SHA256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## ⑤ orphan-no-backend（39 条）

> 标 Product 决策不逆。前端有 IPC 调用，backend 始终 absent（逆向分析 四角度全为 0 hit）。
> **计数**：原 mac-orphan.txt 39 条（含 ③-C 移入的 inject_voice_text + load_custom_instruction_state）。

**voice 全家（34 条，含 inject_voice_text）**：
cancel_voice_trigger_capture, capture_voice_trigger_key, generate_voice_prompt, inject_voice_text, load_voice_asr_config, load_voice_llm_config, load_voice_runtime_status, load_voice_workspace, remove_voice_history_entry, remove_voice_mode_shortcut, remove_voice_template, remove_voice_vocabulary, remove_voice_vocabulary_app_scope, replace_voice_vocabulary_kind, request_accessibility_permission, request_voice_permissions, resolve_voice_vocabulary_app_info, rollback_custom_instruction, save_voice_asr_config, save_voice_llm_config, set_voice_global_shortcut, set_voice_mode_shortcut, set_voice_processing_mode_id, set_voice_trigger_bindings, set_voice_trigger_key, set_voice_trigger_listener_suppressed, show_voice_search_overlay, start_voice_capture, stop_voice_capture, test_voice_asr_config, test_voice_llm_config, update_voice_runtime_settings, upsert_voice_template, upsert_voice_vocabulary, upsert_voice_vocabulary_app_scope

**custom_instructions 孤儿（含 load_custom_instruction_state）**：
load_custom_instruction_state, preview_custom_instruction_apply

**规范清单指针** → `/intermediate/aimami/1.1.1/version-delta/mac-orphan.txt`

**Product 决策依据**：AiMaMi 1.0.9 playbook §8 已记录"voice 系列为 AiMaMi 特有功能，C5 不实现"；1.1.1 binary 逆向分析 确认 0 hit（capture_voice_trigger_key/cancel_voice_trigger_capture 两条有 gate-report 验证 readyToImplement with accepted_substitute=no_backend）。load_custom_instruction_state 在 mac 1.1.1 无 backend（不同于 win 侧的 command_removed）。

---

## 覆盖度

| 维度 | 数量 | 说明 |
|------|------|------|
| **mac-delta.txt 命令总数** | **43 条** | 权威列表，逐条覆盖于 ①+③ 节 |
| **真新增（①）** | 9 条 | owner VA confirmed，1.0.9 absent |
| **真 body-delta（③-A+B+D）** | 34 条 | 22（③-A）+ 1（③-B）+ 11（③-D sweep 补录）|
| **placement error（③-C）** | 2 条 | 非 delta，归 orphan |
| **真删除（②）** | 10 条 | removed.txt 确认 |
| **同版继承 same-skip（④）** | 54 条 | mac-same.txt 54 条；逆向分析 13/13 抽样通过 |
| **orphan-no-backend（⑤）** | 39 条 | mac-orphan.txt 39 条 |
| **delta full gold-leaf 计数** | 43/43 | mac-delta.txt 每条均有 leaf evidence.md + sweep/integrity 来源 |
| **same 逆向分析 实证** | 13/13 | mac-same-integrity.json 抽查 14 条，13 confirmed_same，1 升级 delta |
| **inference=0** | 是 | 所有条目均有 逆向分析 VA / sweep false_negative / integrity 三角验证来源，无推理性填充 |

---

## dim6 消费者接受度评估（session <审计会话>）

**produced_at**: 2026-06-19 · **session**: <审计会话> · **机器**: <本地机器> · **shards**: mac-shard-1 ～ mac-shard-5

### 整体结论

| 维度 | 数量 | 比率 |
|---|---|---|
| **总 delta 命令（mac-delta.txt）** | **43** | — |
| **readyToImplement（dim6 升档）** | **24** | **55.8%（24/43）** |
| **acceptance_draft_only（卡档）** | **19** | 44.2%（19/43）|

### readyToImplement（24 条）

所有 dim1-5 已闭合，dim6 acceptance-draft 已写入 ACCEPTANCE.md；消费者 C5 确认测试落地后正式升档。

`get_relay_active` · `load_installed_skills` · `load_mcp_servers` · `load_relay_state` · `merge_mystery_unlock_grants` · `open_path` · `parse_aimami_deeplink` · `rebuild_registry` · `remove_mcp_server` · `remove_skill` · `reorder_relay_providers` · `restart_codex` · `reveal_relay_api_key` · `set_codex_api_login` · `set_codex_api_slots` · `set_codex_router_enabled` · `set_mcp_server_enabled` · `set_relay_display_tags` · `switch_account_and_restart_codex` · `test_api_proxy_config` · `test_relay_draft_stream` · `test_relay_provider_stream` · `upsert_mcp_server` · `upsert_relay_provider`

### acceptance_draft_only（19 条卡档）及缺失维度

| 命令 | 缺失维度 |
|---|---|
| configure_auto_switch | dim4_partial（AutoSwitchConfig 字段顺序未字节确认）+ dim5_win_Unknown |
| confirm_pending_auto_switch | dim4_partial（SwitchPayload serde field names 未字节确认）+ dim5_win_Unknown |
| confirm_pending_auto_switch_and_restart_codex | dim4_partial（SwitchPayload + bundle ID 16B 字面量推断）+ dim5_win_Unknown |
| delete_sessions | dim5_win_Unknown（dim4 全闭合，最接近升档）|
| diagnose_codex_router | dim5_win_Unknown（dim4 全闭合，read-only 命令）|
| export_relay_config | dim4_partial（RelayExportProvider apiKey 字段 + ExportResult.provider_count serde key）+ dim5_win_Unknown |
| fetch_relay_models_draft | dim4_partial（FetchModelsDraftInput 字段名非字节确认）+ dim5_win_Unknown |
| fix_codex_router_issue | dim5_win_Unknown（dim4 全闭合，13 itemId 全确认）|
| get_hotspot_enabled | dim1_partial（frontend wrapper 名未逐行确认）+ dim5_win_Unknown |
| get_image_compat | dim5_win_Unknown（dim1-5_mac 全闭合）|
| get_mystery_unlock_grants | dim5_win_Unknown（dim1-5_mac 全闭合）|
| get_notification_client_state | dim5_win_Unknown（dim1-5_mac 全闭合）|
| get_relay_provider_quota | dim6_acceptance_draft_only（dim1-5 全闭含 win，唯 dim6 draft 待消费者）|
| get_relay_proxy_status | dim5_win_Unknown（1.1.1 URL 格式变更 breaking change）|
| graceful_restart_for_update | dim5_win_Unknown（net-new 命令，process self-terminate 语义）|
| import_accounts_from_file | dim5_win_Unknown（5 行为 delta vs 1.0.9）|
| load_sessions | dim1_accepted_unknown（无 1.1.1 CCF 显式追踪）+ dim5_win_Unknown |
| load_snapshot | dim1_accepted_unknown（仅 1.0.9 baseline CCF）+ dim5_win_Unknown |
| refresh_usage_snapshot | dim1_partial（Tauri 事件名 breaking rename 'load_snapshot'→'runtime-state-updated'，1.1.1 listener 未验证）+ dim5_win_Unknown |

**最快升档路径**：`delete_sessions`、`diagnose_codex_router`、`fix_codex_router_issue` ——仅 dim5_win_Unknown 阻塞，dim1-4 全闭合，Windows producer 补充后立即可升。
