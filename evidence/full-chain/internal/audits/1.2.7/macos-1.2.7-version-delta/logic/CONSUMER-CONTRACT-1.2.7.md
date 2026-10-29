# CONSUMER-CONTRACT-1.2.7.md — AiMaMi 1.2.7 消费者自足合同（macos-arm64）

- session: `<审计会话>`（dim4 字段级补闭 + 合同合成），2026-09-30，machine <本地机器>
- 上游: AiMaMi 1.2.7 测试包（版本字符串仍 1.2.6），mac fat sha256 `ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9` / arm64 thin `1ac56cdd5003d7f5edf3e630a20050a2792420b1c543702ed89fe998aa6f8164`
- 自足性: 本合同覆盖 1.2.6→1.2.7 五个 delta 目标的 dim1-5 全部消费面（命令/owner/调用链/DTO 字段/错误/副作用/平台门）。实现侧按本合同即可动工，无需回读 raw 证据；未覆盖面在 §9 显式列出并标禁实现/待办。
- 证据根（需要核源时）: `<内部存储>/intermediate/aimami/1.2.7/`，指针见 `pointers/evidence-paths.md`
- voice/audio/capture/runtime-settings/trigger-listener out-of-scope；dim6 留白（实现侧验收）
- 门控: `consumerStartReady=true` / `strictImplementationUse=true`（限五个 delta 目标面）/ `readyToImplement=false`（dim6 未做 + LIVE_REFERENCE_NOT_RUN + §9 开放面）

---

## 1. 命令面总账（ipc 134→147；+20/−7/1 参数漂移）

### 1.1 新增命令（20，按 delta 目标分组）

| delta 目标 | 命令 | owner（mac EA） |
|---|---|---|
| accounts 添加账号 | `set_account_alias` | `core::repository::account_alias::<impl Repository>::set_account_alias`（bb=91） |
| accounts 重置卡 | `get_account_reset_credits` / `get_account_reset_credit_history` | `commands::account_reset_credits::request_context` @ `0x100b36d60` → `core::account_reset_credits::{fetch_credits @ 0x10071fc80, fetch_history @ 0x100720370, validate_cursor @ 0x100720c10}` |
| accounts 到期高亮 | `get_usage_refresh_all_accounts` / `set_usage_refresh_all_accounts` | `commands::system` 族 → `core::repository::normalize_usage_refresh_interval`（interval 归一 machinery 为 1.2.6 既有：默认 5m；特殊值 usage_401_retry，行为面见 §2.4） |
| accounts 运行时显示快照 | `load_runtime_display_snapshot` | mac 1.2.7 零符号（win-only 注册：win glue `0x1405EC7D0` full-chain，完整合同见 win 分册 §8.1 与本合同 §9.1；mac 前端仍携带该 invoke，调用将得 tauri 未注册命令错误，mac 消费侧如需实现须先补 mac 侧证据） |
| threads 管理 | `inspect_session_index_health` / `clean_catalog_ghost_threads` / `clean_missing_rollout_rows` / `clean_orphan_rollouts` / `clean_global_state_tmp_files` / `export_sessions_batch` / `load_session_messages` | `core::sessions::health::*` / `core::sessions::export::export_sessions_batch` @ `0x1005993D0` / `core::sessions::detail::load_session_messages` |
| router 诊断 | `run_codex_router_diagnostics` / `fix_codex_router_issue` | `core::relay::codex_diagnostic::run_diagnostics_with_mode`（bb=1243）/ `fix_issue` @ `0x10077B370` + `RelayManager::fix_diagnostic_issue` @ `0x100584E60` |
| threads analytics | `load_dashboard_analytics` / `set_dashboard_analytics_active` / `load_thread_analytics` / `load_thread_analytics_detail` / `export_thread_statistics` | `core::analytics::load_dashboard`（bb=75）/ `commands::analytics::set_dashboard_analytics_active`（反编译器 空体，core 侧 `analytics::set_active` 闭合）/ `core::analytics::threads::{load_summaries, load_detail}` / `core::analytics::threads::write_export` |

（20 = 上表 1+2+2+1+7+2+5，与 frontend-command-diff `ipc_contracts_added` 集合逐条一致；`get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令、不在 +20 集合（frontend-command-diff 实证），归未变化面迁移、行为面已含于 §2.4；另 `load_quota_history` 参数漂移 +range，见 §9.6）

### 1.2 删除命令（7）

`get_codex_router_auth_readiness`（readiness 面收缩 29→14 fns）/ `set_codex_no_account_slots`（收编为 legacy 校验+恢复链）/ `load_change_analytics` / `load_session_analytics` / `load_token_analytics` / `load_tool_analytics` / `load_usage_analytics`（`core::session_analytics` 8 fns 全删 → `core::analytics` 124 fns 新体系）。

### 1.3 前端控制流（dim1）

双平台前端 bundle 字节级同哈希（同一次构建）；CCF 402 行、unresolved=0；59 个既有命令控制流变化 + 30 个新命令链；证据 `raw/aimami/1.2.7/<platform>/frontend/` + `intermediate/.../version-delta/frontend-{command,ccf}-diff.json`。

---

## 2. accounts — 账号卡片切换/添加/重置卡/到期高亮

### 2.1 切换失败修复（状态机 + 回滚）

- **主链**: `perform_switch_payload_with_restart`（bb=124）→ `capture_switch_rollback_state` @ `0x100439140`（bb 216→462，CHANGED）→ CodexMutationGate/Repository 写（1.2.6 既有链）→ 重启面。
- **强制顺序（修复机理）**: 先取回滚快照，capture 失败即中止（`SWITCH_ROLLBACK_CAPTURE_FAILED`），不进 quiet acquire——消除「切换失败后状态半套」。
- **状态机字面量**: `pending` → `quiet_acquired` → `ready` → `disk_committed`；失败态 `quiet_acquire_failed`。
- **失败收尾（1.2.7 新增）**: `finish_switch_failure_with_client`（bb=352）回滚 + 三重校验：
  1. `Restored auth.json does not match the selected credential generation`
  2. `auth.json still exists after rollback`
  3. `Registry active account does not match the rollback target`
  附带 `runtime_refresh_warning`/`runtime_refresh_failed` 告警通道；文件锁 `account state.oauth-refresh.lock`。
- **启动后校验**: `account_transition::verify_after_launch`（+3 fns）→ 失败映射 `SWITCH_LIVE_VERIFY_FAILED`。
- **rollback snapshot**: 进程内结构（约 30 String 字段 + 5×FileRestoreState 文件快照 + Option 尾）；全名表实证**无 serde 面**，不经 IPC——消费侧不依赖其字段名。
- **副作用 ⚠**: 回滚写 auth.json/registry（fs write）；文件锁互斥。

### 2.2 添加账号修复

- `set_account_alias`：入参 account id + remark；错误 `Invalid account remark` / `Account is no longer available`；与 oauth 刷新互斥文件锁。
- `persist_oauth_account`（+2 fns）：`OAUTH_COMMIT_NOT_STARTED: active account could not be saved` / `OAUTH_CLIENT_UPDATE_DEFERRED` / `CLIENT_RESTART_DEFERR…` / `account_oauth disk_committed`——commit 未启动保护 + 延迟重启分支。

### 2.3 重置卡（全新子系统，四层）

- 链: `request_context`（`Account state is busy`）→ repository `reset_credit_context`（`Account is no longer available` / `Reset card credentials are unreadable` / `Reset card account identity does not match` / `Reset card details require ChatGPT login credentials`）→ HTTP `fetch_json`（`cursor` 参数，UA `reset-credit details`）→ `validate_cursor`（`Invalid reset credit history cursor`）。
- **校验链顺序**: ChatGPT 凭据存在 → 凭据可读 → 账号身份匹配 → 发请求。副作用=只读。
- **DTO（serde 字段级实证）**:
  - `ResetCreditsPayload { credits }`（camelCase；单字段）
  - `ResetCredit { id, expiresAt }`
  - `ResetCreditGrant { id, occurredAt }`
  - `ResetCreditHistoryPayload { events, nextCursor }`
  - 上游线协议 snake_case：响应 `events` / `next_cursor` / 事件字段 `occurred_at` / `kind`；分页=cursor→next_cursor。**前端 camelCase ↔ 上游 snake_case 转换在后端完成**。

### 2.4 到期高亮（观察者 + 用量刷新）

- `commands::account_observer::start` spawn 常驻线程 `aimami-account-observer`（`failed to spawn thread`）；`run`（bb=128）轮询。
- `AuthObservation::read` 守卫链（顺序）: `requires a regular file` → `exceeds size limit` → `no recognized authentication mode` → `incomplete OAuth credentials`；闭包 `is not valid JSON` / `no valid account identity`。
- `AuthFileStamp::read`（mtime/size 戳）+ `still_current`（戳未变跳过）+ `AuthObservationTracker::{poll, applied}`；repository `try_sync_auth_observation`（bb=99，经 oauth-refresh 文件锁写观测态）。
- 观测状态字面量: `authinfo` / `Utf8Json` / `invalid_json` / `invalid_auth` / `sync_failed`；`Account repository lock is poisoned`。
- 用量刷新: interval 默认 `5m`；`usage_401_retry`=401 退避触发；watcher 线程按 schedule 全账号刷新。

---

## 3. threads — 线程管理重构

### 3.1 可见性重写（codex_thread_visibility +47/−14）

- sqlite `threads` 表列: `model_provider` / `model` / `reasoning_effort` / `rollout_path` / `source` / `archived`。
- rollout JSONL JSON 指针: `/payload/model_provider` / `/payload/history_mode` / `/payload/model_reasoning_effort` / `/reasoning/effort` / `ordinal`。
- 关键函数: `repair_missing_rollouts_for_convergence`（58 callees；`missing-rollout repair`/`thread-rollout-repairs`；`rollout backup is missing` / `rollout backup representation changed; history preserved` / `rollout changed while router migration was streaming; retry required`）、`converge_threads_to_provider_with_reads`（`UPDATE threads SET model_provider = ?2 WHERE id = ?1`；`thread_settings_applied` 事件；ROLLBACK 事务）、`cleanup_orphan_router_threads_strict`（provider 归一 `aimai`/`openai` 族；`PRAGMA wal_checkpoint(TRUNCATE)` ⚠）、`restore_no_account_model_threads`（no-account 恢复链；识别 `"subagent"` 与 poison 提示词）、`model_fallback::restore_relay_model_threads`（`invalid model restore metadata` / `history model changed after fallback`）。
- **错误范式**: 「表示变化/竞态 → retry required」「历史保留不删」。**破坏性 ⚠**: UPDATE/DELETE + wal_checkpoint(TRUNCATE)，均有备份+竞态重试防线，无静默删除路径。

### 3.2 sessions 健康/导出（7 新命令）

- `inspect_session_index_health`：`SELECT count(*) FROM thread_items` + thread_id 一致性体检；只读。DTO impl `SessionIndexHealthPayload` @ `0x1003bd240`。
- `clean_catalog_ghost_threads` / `clean_missing_rollout_rows`（sqlite 写 ⚠）/ `clean_orphan_rollouts`（**fs delete ⚠**，有 matching 校验）/ `clean_global_state_tmp_files`（NEW_BACKEND）。
- `export_sessions_batch` @ `0x1005993D0`：扩展名白名单 `jsonl`/`md`；jsonl 每行一个 CodexSession（§3.4 schema）；md 走 `write_export_markdown_stream`；响应 DTO `SessionBatchExportPayload` @ `0x1003bd020`（含 `SessionBatchExportedFile` @ `0x1003bcbc0`）。
- `load_session_messages`：`Untitled Session` 兜底名、`reasoning_effort`；DTO `SessionMessagesPayload`。
- codex_app_server 新 API（HTTP/app-server 叶）: `fork_thread_to_cwd`（`thread/fork`，`excludeTurns`）、`load_legacy_messages`、`load_paginated_messages`（`thread/items/list`，`sortDirection`）、`list_thread_scope`（`thread/list`，`useStateDbOnly`/`sourceKinds`/`parentThreadId`/`recency_at`）。

### 3.3 analytics 重构

- 索引器 `core::analytics::index`：`analytics-v3.sqlite`（表 files/facts/meta，`PRAGMA user_version=3`，WAL，`facts_identity` 索引）；断点续扫 `SELECT fingerprint,state,offset,ordinal,complete FROM files WHERE path=?1`；`analytics source changed/too large` / `invalid analytics offset/ordinal`；后台 worker `aimami-analytics`（`index_worker_unavailable`）。
- 解析器：rollout JSONL 行→fact（`token_usage_record`）；token 字段 `input_tokens`/`output_tokens`/`reasoning_output_tokens`/`cached_input_tokens`/`total_tokens`；legacy/native 双路（`legacy_baseline`/`legacy_counter_reset`）。
- 聚合：`aggregate::dashboard`（bb=294）；虚拟账号识别 `auth.json contains AiMaMi managed virtual auth; not a real account`；身份字段 `chatgpt_subscription_active_until` / `chatgpt_account_id`。
- 导出 `write_export`：`statistics export requires a matching .csv or .json extension` / `statistics exports cannot replace ChatGPT data or symbolic links`（符号链接防护）/ `missing export directory`。

### 3.4 CodexSession DTO（26 字段，serde 字段级实证，`0x1003bf5c0`）

```
id, threadName, updatedAt, fileSize, filePath, projectName, projectPath,
parentSessionId, depth, agentNickname, agentRole, isArchived, excerpt,
projectPathMissing, isConversationThread, rolloutMissing, worktreeMigration,
displayName, preview, tokensUsed, model, reasoningEffort, memoryMode,
historyMode, projectId, gitBranch
```

排序键 `recency_at_ms`/`updated_at_ms`/`created_at_ms`；列表错误码 `CODEX_INDEX_UNAVAILABLE`；subagent 关系字段 = `parentSessionId`/`depth`/`agentNickname`/`agentRole`（1.2.7 新增段）。

---

## 4. router — 智能路由重构

### 4.1 诊断（run_codex_router_diagnostics）

- `run_diagnostics_with_mode`（sz=40131，bb=1243，103 callees），13 诊断项 key：
  `config_access` / `router_recovery_record` / `config_replace_readiness` / `proxy_running` / `router_postcondition` / `thread_history_integrity` / `native_off_invalid_openai_thread_models` / `thread_response_item_ids` / `residual_manifest` / `residual_cache` / `relay-state-cache` / `official_catalog_freshness` / `api_key_integrity`。
- 只读诊断；实现叶 = 进程扫描（mac `ps -ax -o etime=,comm=` + `CFBundleShortVersionString`）+ config/状态缓存读 + catalog 新鲜度。
- **DTO**: `DiagnosticReport { items, hasIssues, transitionInFlight }`；`DiagnosticItem { label, detail, fixable }`（serde 字段级实证）。

### 4.2 修复（fix_codex_router_issue）

- 入口 `fix_issue` @ `0x10077B370`：先 `fix_requires_quiet_window(key)`（force 参数可旁路），再按 key 分派 23 臂（逐分支实证，key→handler 全表）:

| key | handler | key | handler |
|---|---|---|---|
| `config_stale` | `fix_config_stale` | `takeover_backup_orphan` | `fix_takeover_backup_orphan` |
| `auth_integrity` | `fix_auth_integrity` | `config_global_validity` | `fix_config_global_validity` |
| `residual_cache` | `fix_residual_cache` | `config_profile_conflict` | `fix_config_profile_conflict_text` |
| `residual_manifest` | `fix_residual_manifest` | `thread_missing_rollouts` | `fix_thread_missing_rollouts` |
| `catalog_integrity` | `fix_catalog_integrity` | `legacy_migrated_threads` | `fix_legacy_migrated_threads` |
| `config_toml_syntax` | `fix_config_toml_syntax_text` | `project_state_integrity` | `fix_project_state_integrity` |
| `config_third_party` | `fix_config_third_party_text` | `thread_response_item_ids` | `fix_thread_response_item_ids` |
| `state_db_relocation` | `fix_state_db_relocation` | `router_unlock_auth_residue` | `fix_router_unlock_auth_residue` |
| `db_orphan_providers` | `fix_orphan_thread_providers` | `thread_provider_consistency` | `fix_thread_provider_consistency` |
| `rollout_orphan_providers` | `fix_orphan_thread_providers` | `thread_poisoned_instructions` | `fix_thread_poisoned_instructions` |
| `router_http_contract` | `fix_router_http_contract` | `thread_model_catalog_consistency` | `fix_thread_model_catalog_consistency` |
| `catalog_path_validity` | `fix_catalog_path_validity` | | |

- **跨平台键集裁决（字节级，win 对照实证）**：win 1.2.7 fix 分派实测同为 23 键，与 mac 23 键**逐键 1:1（平台差集=零）**；真实差集在版本轴——1.2.6 win 24 键 → 1.2.7 双平台 23 键**收缩**（case 39 `native_off_invalid_openai_thread_models` INLINE 修复臂双平台删除、该键降级为 CHECK-only 诊断键）；`router_recovery_record` 为 1.2.7 新增 CHECK-only 诊断键、不入任一平台 fix 分派表。证据：`raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`（4 份 case 表：1.2.7 win 23 行/14 桶 + 1.2.6 win live 复核 24 行/15 桶 + 2026-10-05 最新 exe 51cb41b6 双重建表）。
- `fix_all` 前置: `diagnostic fix-all requires a verified ChatGPT quiet window`（静默窗校验）。
- `RelayManager::fix_diagnostic_issue` @ `0x100584E60`：`Codex router transition lock is poisoned` / `repairing Codex diagnostics`；输出 `DiagnosticRepairOutcome`（enum：判别字 u32，`FixResult` @+16，判别字≠2 含 `ReconciledRouterTarget`）。
- **DTO**: `FixResult { fixedIds, failedIds, details }`（serde 字段级实证）。
- **副作用 ⚠**: 修复器写 config.toml/threads 表，全部有事务（COMMIT/ROLLBACK）+ 备份（`databaseBackups`/`config-backups`）+ quiet-window 前置；孤儿收养 `thread-provider-adoptions`（`permanentAdoption`/`fallbackModel`）可 `rollback_orphan_thread_adoption` 条件 UPDATE 回滚；config 第三方段隔离标记 `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)`，识别 `cc-switch`/`cc_switch`/`codex-switch` 外来段；poison 提示词清理（`Follow the user's instructions carefully…`）。

### 4.3 router_unlock_auth 收缩 + live_auth_state 重写

- 29→14 fns；readiness 支撑面删除。`live_auth_state`（bb 14→42）：从 readiness 标记读改为**活体凭据推断**——字段 `auth_mode` / `OPENAI_API_KEY` / `tokens`（读 auth.json/tokens 结构）。
- 保留增强: `has_residue` / `marker_exists`（bb 3→11）/ `cleanup_unlocked` / `read_cleanup_backup`（bb 58→105）。

### 4.4 router_transition 生命周期

状态机: `stopping_codex` → `stop_complete` → `reconciling` → `postcondition_failed`/`settle_failed` → `reconcile_retry` / `stop_failed` / `retry_exhausted`；埋点 `start`/`url`/`elapsedMs`/`firstToken`/`ok`/`firstTokenMs`/`totalMs`；postcondition 失败 → 诊断 → 修复 → 重试闭环。

---

## 5. engine — ChatGPT 引擎目录适配

### 5.1 端点集（双平台一致）

```
https://chatgpt.com/backend-api/codex
https://chatgpt.com/backend-api/codex/models
https://chatgpt.com/backend-api/codex/responses
https://chatgpt.com/backend-api/codex/responses/compact
https://chatgpt.com/backend-api/codex/images/generations
https://chatgpt.com/backend-api/codex/images/edits
```

目录缓存头 `x-aimami-catalog-revision`；repair catalog DTO 字段 `model_providers` / `requires_openai_auth` / `http_headers` / `base_url`；`OfficialCatalogStatus { available, checkedAt, modelCount, droppedEntries, failure }`；`CatalogFailure.kind ∈ { missingAuth, network, invalidCatalog }`；`validate_official_models` 校验 `models`/`slug`/`tier`；转发头治理白名单 `authorization`/`cookie`/`set-cookie`/`origin`/`referer`/`via`/`forwarded`。

### 5.2 CodexPaths 路径合同（字段级实证，`from_home` @ `0x100b3f770`）

- home 解析: `$CODEX_HOME` 优先，否则 `~/.codex`。
- 布局: `auth.json` / `config.toml` / `session_index.jsonl` / `sessions/` / `archived_sessions/` / `skills/` / `AGENTS.md` / `accounts/{registry.json, snapshots/, backups/, registry-backups/, auto-switch.log}` / `codexmate/{skill-backups/, quota-history.jsonl, quota-store.json, settings.json, bootstrap-cache.json, auto-switch-pending.json, auto-switch-snooze.json, relay/state.json, custom-instructions/history/}`（voice 两文件 out-of-scope 不列）。
- state db: 搜索目录族 + 兜底 `<dir>/state_5.sqlite`；`$CODEX_SQLITE_HOME` 可覆盖（`configured_sqlite_home`）。
- catalog db: 候选 `[configured_sqlite_home/codex-dev.db, home/codex-dev.db]` 首个 is_file 命中，兜底 `home/sqlite/codex-dev.db`。
- mac 自启: `~/Library/LaunchAgents/dev.aimami.auto-switch.plist`。
- **legacy 迁移**: `home/aionsale` 存在且 `home/codexmate` 不存在 → 就地 rename aionsale→codexmate。
- legacy 校验: `validate_legacy_no_account_aliases` @ `0x1002BE650` = trim + `validate_relay_provider_id` + `is_no_account_slot_slug` + 按 slug 去重。

### 5.3 config_takeover 扩展

备份 `router-takeover-backup.json` / `codex_router_top_level_backup.json`；managed 段标记 `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)`；`quarantine_damaged_backups`（隔离不删除）/ `split_foreign_surface` / `merge_runtime_quarantine` / `read_legacy_backup_lines`（legacy 行兼容）；config.toml 原子改写 ⚠（有备份）。

---

## 6. protocol — Anthropic V1 协议适配

### 6.1 协议常量

- 请求头: `x-api-key` + **`anthropic-version: 2023-06-01`**（V1 版本协商字段）+ `Content-Type`；`anthropic-beta` 头存在，beta 值含 `inline-tools-2026-09-15`。
- 模型族表: `sonnet-5-5` / `opus-5` / `opus-5-5` / `fable-5` / `fable-5-1` / `mythos-5` / `mythos-5-1`（邻接另见 `opus-4-8`）；effort `ultra-` 档前缀；`effort_to_thinking_budget` → `budget_tokens`。
- 模型能力门: `This Anthropic model does not support mid-conversation tool additions` / `Dynamic Anthropic additions support client tools only` / `Unsupported namespaced tool type`（gemini/claude 命名空间拒绝）/ `Conflicting discovered tool definitions; signed history was not modified`（签名历史保护）。

### 6.2 请求方向（OpenAI Chat/Responses → Anthropic）

`openai_chat_to_anthropic_request`（bb 202→508）映射: `messages`/`max_tokens`（`max_completion_tokens` 换算）/`temperature`/`top_p`/`stop_sequences`/`stream`/`parallel_tool_calls`/`tool_choice`；tool_calls ↔ `tool_use`/`tool_result`（`tool_use_id`，`toolu_` 前缀）；系统注入 `"You have a web_search tool available.\n"`；reasoning `encrypted_content`/`/reasoning/summary`/`output_config`。

### 6.3 流方向（Anthropic SSE → Responses 事件）

- SSE 事件全集: `message_start` / `content_block_start` / `content_block_delta` / `content_block_stop` / `message_delta` / `message_stop` + error。
- 发出的 Responses 事件: `response.created` / `response.in_progress` / `response.output_text.done` / `response.content_part.done` / `response.reasoning_summary_text.done` / `response.function_call_arguments.delta/.done` / `response.custom_tool_call_input.delta/.done` / `response.output_item.done`（`encrypted_content`）/ `response.failed`；`sequence_number` / `created_at`。
- 错误 envelope: `upstream_protocol_error` / `stream_truncated`（`Upstream Anthropic stream ended before message_stop`）/ `http_status` / `anthropic_search_incomplete`（`Search result has no matching call`）；状态纪律: 完成后拒收内容（`Chat content or conflicting finish_reason arrived after completion` / `Conflicting Anthropic stop_reason` / `Duplicate Anthropic message_start`）。
- 上游错误映射: `invalid_request_error` / `authentication_error` / `not_found_error` / `request_too_large` / `upstream_http_error` / `upstream_connection_error`。

### 6.4 服务器工具与续传

- web_search server 工具 `web_search_20250305`；**`external_web_access=false` 拒绝**（`Anthropic web search cannot honor external_web_access=false`）；`allowed_domains`/`user_location` 校验；`safe_url` https 强制。
- 续传 `anthropic_continuation::Exchange::resume`：限制/错误 `Anthropic server continuation rejected by upstream (HTTP …)` 族（win 分册勘误后的真实串）/ `Anthropic paused without a supported server search tool` / `Invalid Anthropic paused content`；续传历史校验 `Anthropic server history does not match its visible message` / `Incomplete Anthropic server tool history`。
- trace 侧通道 `anthropic_trace`：`error_class` ∈ `unclosed`/`missing_message_stop`/`open_block`/`missing_stop_reason`/`encrypted_state`/`assistant_prefill`/`objectinvalid`；usage 字段双协议名 `cache_read_input_tokens`/`cache_creation_input_tokens`/`cached_input_tokens`。**无密钥明文写日志证据**（header 白名单治理）。
- `handle_event` 全转移表：行为合同级闭合（事件枚举+分派+错误面字段级已闭；269K 字符状态机未逐转移枚举，如实标注）。

---

## 7. 平台门（dim5 终判）

- DTO/错误面/端点/模型族/协议常量: 双平台串池独立实证 **零分叉**（win 抽查 10 项全 PASS，`dto-fieldlevel-win.md`）。
- 已证分叉（OS 原生面）: 进程扫描 mac `ps` vs win Toolhelp32 API 族；mac LaunchAgents 自启；`system_volume`→`system_volume_windows`（voice 邻接，out-of-scope）；`useStateDbOnly`/`authinfo` 字面量 win 0 命中（1.2.7 当前 build 内待深核，不阻塞 dim5——DTO/错误/端点已实证零分叉；红线38：不因它重开 1.2.6 baseline IDB）。
- win owner EA 见 win bundle 合同与 `win-symbol-body-diff.json` / `win-diagnostic-key-owners.json`。

## 8. 消费侧实现纪律（从证据反推的硬约束）

1. 切换必须先 capture 快照再进 quiet acquire；capture 失败即中止并映射 `SWITCH_ROLLBACK_CAPTURE_FAILED`。
2. 回滚必须过三重校验（凭据代次/残留/registry 一致），失败不静默。
3. 重置卡校验链顺序不可换：凭据存在→可读→身份匹配→请求。
4. 修复类操作必须有 quiet-window 前置 + 备份 + 事务；孤儿收养必须可回滚。
5. Anthropic 流完成后拒收内容；续传必须校验历史一致；`external_web_access=false` 必须拒绝 web_search。
6. config.toml 第三方段识别 `cc-switch`/`cc_switch`/`codex-switch` 并隔离到 managed 标记段外。
7. 前端 camelCase DTO ↔ 上游 snake_case 线协议的转换在后端。
8. 内部端点红线（红线26）: 反编译端点 `chatgpt.com/backend-api/codex*` 与 OTA `aionsale.iiiwp.com` 为上游事实记录，消费侧实现时须走可配置项，不得硬编码为自有生产端点。

## 9. 未覆盖/禁实现/待办（显式边界）

1. **禁实现（2 项）**: `custom_instructions_entry_enabled` / `recharge_entry_enabled`（前端侧名称，无后端符号）。~~`load_runtime_display_snapshot`~~ 已于 2026-10-06 由用户裁决撤销禁实现：win 侧经池化碎片锚定找到真 handler（glue 0x1405EC7D0）并完成 full-chain（完整合同见 win 合同 §8.1 与 raw leaf `raw/aimami/1.2.7/windows-x64/backend/commands/accounts/load_runtime_display_snapshot/`）；**mac 侧维持零符号如实标注**（win-only 注册，mac 1.2.7 无此命令后端；mac 前端仍携带该 invoke，调用将得到 tauri 未注册命令错误——mac 消费侧如需实现须先补 mac 侧证据）。~~`graceful_restart_for_update`~~ 已于 2026-10-07 由用户「欠账全做完 0 残留」直派撤销禁实现，**且 mac 侧经只读核验推翻既往「零符号」**：既往「双侧后端 census 零命中」系全名搜索假阴性——mac 1.2.7 tauri 名字表串 0x1018c0328 串内偏移 301（0x1018c0455）含该命令名（dispatcher `codexmate_lib::run::{{closure}}` 0x1006119c0 比较点 0x100615586）+ 真 wrapper `run::{{closure}}::{{closure}}` 0x100638510（`<AppHandle as CommandArg>::from_command` 0x100712c60 提取 state key "app" → 成功调 `AppHandle::request_restart` 0x1006e9010【置 restart flag@+5192 + tao Proxy::send_event(EventLoopMessage(31))，成功**返回**】→ drop → `InvokeResolver::respond` 应答 unit；send 失败 → `cleanup_before_exit`+`Manager::env`+`tauri::process::restart` 0x101408100【current_exe→bundle 解析 Info.plist CFBundleExecutable→`Command::spawn`+原 argv→失败仅 log→`exit(0)`】）。零参数命令；⚠破坏性副作用：进程退出+重启。**与 win 行为分叉（完整 win 合同见 win 合同 §8.2）**：mac 有 IPC 响应（unit/null）而 win 无（win 调发散重启，ud2 证实）；spawn 失败 mac log+exit(0) 而 win panic。mac 侧证据为只读核验级（无独立 mac leaf），mac 消费侧逐字段实现前按 win leaf evidence.md §8 mac 地址段补证。
2. **25 簇实现叶已完成（原开放工作单收口）**: 四角度 D1 truly_undone 25 簇 1.2.7 新增非命令业务面（atomic_write 族/transition_journal/proxy_server Anthropic 适配侧/health_check ProbeStream/upstream_url/storage 重组/repository registry 重建/account_io+FileLock/codex_writer/platform::process 等）——mac 侧 80/80 函数深逆至 semantic implementation leaf、`strictImplementationUse=true`（限本 80 函数面；`raw/aimami/1.2.7/macos-arm64/backend/non-command-backend-fullchain/`，80 伪码 0 截断 0 空桩）；win 侧 347 函数重逆（leaf 1070 记录/90 模块，伪码 1070+377 份，`raw/aimami/1.2.7/windows-x64/backend/non-command-backend-fullchain/`）；最新 exe（51cb41b6）重基准 21 NEEDS_REDO 项 18 全闭+3 部分（proxy_server 26/29、codex_config 4/7、codex_mutation 5/7）+85 非 voice unlocated 如实开放。win 红线24 dirtree 全量命名已完成（1016 归目录+1070 注释，`audits/WIN-1.2.7-IDB-WRITEBACK.md`）。
3. **1.2.6 callee 双线已终局（2026-10-01，原 PENDING 收口）**: 同名稳定面 2406 个终局裁决——**1627 证实未变 + 779 推翻为体级 CHANGED**（463 callee 真实增删 + 231 体字节变 + 33 变体集/体变 + 51 size 变 glue 残差 + 1 双变；并修正前序筛查阈值缺陷：收缩型 bb_ratio<0.5 共 92 例与 callee-only 变化 383 例原漏网）；命令级影响：127 条 already_in_canonical 中 15 条 handler 体级变化（12 非 voice）。证据：`intermediate/aimami/1.2.7/macos-arm64/version-delta/samename-callee-diff-1.2.6-to-1.2.7.json`（2449 项逐函数 verdict）+ win 侧全二进制 body-hash 匹配 `intermediate/aimami/1.2.7/windows-x64/version-delta/win-body-match-1.2.6-to-1.2.7.json`（84431 函数字节级一致 modulo 重定位）。`handle_event` 逐转移枚举：win 最新 exe（51cb41b6）四后继通路已枚举闭合（旧单体拆 vendor 直转 0x14116A730 + AnthropicToChat 0x140A5FA60 / ChatToResponses 0x140A375F0 / ChatToAnthropic 0x140A32260，见 win 合同 §6 与 raw leaf interface-report `handle_event_transitions_latest_exe` 键）；mac 侧 269K 字符状态机维持行为合同级（§6.4 如实标注）。
4. **勘误沿用**: win 分册两处字面量以二进制实串为准（`Restored file does not match captured state:` / `Anthropic server continuation rejected by upstream (HTTP …)` 族）。
5. **LIVE_REFERENCE_NOT_RUN**: 未启动真实 App 对照（红线25 声明「未对照」）；dim6 验收留白（实现侧）。
6. **local_outtake（已恢复）**: `load_quota_history`（changed_rewritten）与 `reveal_relay_api_key`（changed_new_backend）原为 local_outtake（census/owner-located 级）——已恢复（2026-09-30 recovery 轮 session `<审计会话>`，以现有 1.2.7 IDB live decompile 恢复完整函数体，双平台 bundle `interface-report.json` status=PASS，gate-report 2026-09-30 amendment 在案；与 COVERAGE-FINAL §5.3 对齐；四角度 D angle_b 分类维持 local_outtake 登记未改判）。
7. **细节条目已恢复（原「实现前建议补一轮定向 decompile 复核」断言已过时，2026-09-30 recovery 轮闭合）**: `clean_orphan_rollouts` 删除白名单匹配条件与 `native_catalog::revision` 缓存失效策略已由 recovery 轮（session `<审计会话>`，同 §9.6 轮）以现有 1.2.7 IDB live decompile 恢复落盘，mac bundle `interface-report.json` 两条目 status=PASS：前者含 `behavior.whitelist_match_conditions`（白名单构建=以完整健康线程行 map 为源、关联 Option 为 Some 的 id 克隆进 HashSet；清理条件=orphan rollout id 不在白名单集合即判 cleanable 收集进删除列表；保留条件=在白名单内即 filter 丢弃不删；空列表短路跳过 delete_sessions；removedCount/removedBytes/failed 统计语义；白名单过滤核 `cleanable_orphan_rollout_ids` @ `0x1002d86a0`、orchestrator `clean_orphan_rollouts` @ `0x1002d2710`），后者含 `behavior.revision_invalidation_strategy`（revision=lowercase hex SHA-256〔serde_json 序列化 relay models 数组〕纯函数实时重算 @ `0x100857f30`；失效判定 `codex_config_stale_reason_for_snapshot` @ `0x10058f580`：前置 7 类 stale 条件先于 revision 比对、存储位置 `model_providers.aimai1.http_headers["x-aimami-catalog-revision"]`、存储值缺失或与实时重算不一致即 stale、失效后由 `persist_with_commit` 等调用方重写）。与 win 合同 §8、SoT（REVERSE-STATUS recovery 轮 CLAIM/CLOSURE + 双 INDEX + 双平台 ledger backfill）一致；消费者无需再补定向 decompile 复核。

---

## 10. 1.2.7 pre → release 按 SHA 的消费增量（2026-10-16）

### 10.1 合同归属与门控

以上 §1–9 原文和既有门控均属于历史 pre：`ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9` / 71,204,992 B，不作重新裁决。本节目标是 release：`f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0` / 68,357,552 B，同一1.2.7版本、macOS平台。与旧条款冲突时，本节仅对这个 release SHA 生效；例如旧 §5.2 catalog 首路径选择、§6.4 hosted搜索/Exchange续传不可直接迁移成 release 行为。

本节是本次静态差异的消费者合同，不是实现放行：release consumerStartReady/strictImplementationUse/readyToImplement/implementation_use/gate_accepted/full_leaf_100 全false。五模块变化面、当前注册对账、全名字面/入口候选筛查均已消费，content_closed=true；最新事实单写/53EA独立readback/20份快照及保存链通过，persistence_complete=true。最终双路复审与grounded待编排层完成，mac_closed/readiness仍false、execution_ready_for_final_review=true。dim6与真实App对照均未做。不得借历史pre true字段提升release，也不以mac合同外推Windows。原§9的零符号/禁实现说明只属pre历史；本release的两个entry_enabled是localStorage键误报，load_runtime_display_snapshot则有当前注册映射，不沿用旧pre结论覆盖当前SHA事实。

### 10.2 Skills DTO、合并、告警及操作边界

InstalledSkillSummary固定11键：`id,name,title,summary,relativePath,directoryPath,skillFilePath,updatedAt,managed,source,enabled`；相对pre新增后三键。enabled始终输出null/false/true。source值为managed/user/project/plugin/system/admin/native；这是来源枚举，不是七个命令。

managed项来自既有扫描；原生项来自app-server `project/list` → `skills/list`。总deadline30s、每请求至多10s；project页limit100/至多20页/根至多256，校验绝对目录、canonicalize/去重/重复cursor；skills/list带验证过的cwds及forceReload=true，返回cwd必须在请求集合且不重复，skill路径必须绝对且文件名SKILL.md。只证明本机客户端校验，不推导外部服务扫描行为。

按canonical SKILL.md合并：匹配managed项时不重复追加外部条目，只补enabled；冲突转null并登记冲突。外部项managed=false、id/skillFilePath为canonical文件绝对路径、relativePath/directoryPath为其父目录、updatedAt=null。warning不放入SkillListPayload.data字段：payload仍items/total/rootPath/lastScanAt，告警为外层warnings。原生不可用时保留managed列表并成功返回skills_native_unavailable；partial/路径异常/冲突返回skills_native_partial，不冒成全列表空或失败。

⚠ remove_skill首先拒绝绝对id，先于锁、备份、删除；managed仍先备份后删除。备份metadata精确键为backupID/skillID/name/title/relativePath/createdAt，先临时写再rename，失败清理。release仅warnings为空时更新bootstrap缓存，失败只日志、列表仍成功；pre原有cache更新，不计新增持久化能力。UI隐藏managed=false删除入口并区分warning/status和失败/alert，但后端保护不能仅靠UI。

### 10.3 Accounts的真实变化和已撤销误报

PlanType JSON九项增为十一项：新增go/pro500，其余free/plus/pro5x/pro20x/team/business/enterprise/edu/unknown保留；ordinal是内部表示，不当IPC整数。AccountSummary仍25键；ExportedAccount仍14键，含auth；可选字段省略规则不变。

明确撤销两个已证伪中间断言：OAuth没有取消启动后三次重试，真实caller `0x100323998 → 0x10032b7e0`仍100/250/500ms采样与连续成功判据；`0x10032bd90`为disk/reentry verify。action+64保存凭据校验pre `0x1007c1350`已有，不是新增保护。alias第七native参数pre栈已传入，不是新增IPC参数。

用量刷新最多5项批次、原子发布、锁、认证重试、告警及条件恢复保留。NoAccountModelRestoreEntry serializer消失为writer内联；snapshot锁变体减少亦有caller内联证据，不能报功能删除。⚠ auth/registry写与回滚继续先快照/互斥/失败验证，不得因helper外提省略防线；导出auth不得写进日志。

### 10.4 Threads与analytics

新增过滤分支：`line_is_unusable_reasoning_response_item@0x1004b0390`经helper `0x1004f8b60`识别ccswitch-anthropic-thinking-v1:，既有清理链额外过滤此类reasoning；不是token/计费安全升级。detect_worktree_copies两符号消失为列表父函数内联：cwd收集/排序/至多4组/scoped线程/映射传build均保留。fork_thread_to_cwd内联，thread/fork、excludeTurns、120/0、cwd校验保留。

instruction_meta_digest是pre已有SHA-256/摘要不符retry外提；PathContext.windows/prefixes原有。⚠ rollout成功rename覆盖历史，失败清临时文件；ReadStamp只检测竞态，不是持久备份。missing_candidate是UPDATE非DELETE，provider收养事务/恢复、fork创建线程照旧。`0x100310250`仍反编译器 -12，必要控制流以1135指令/271块原生证明，不称反编译成功。

### 10.5 请求、响应、SSE、search

旧Anthropic116符号迁入cc_switch_anthropic新库，不计116项功能删除，也不视为仅符号改名。prepare_request在HTTP前拒绝旧aimami-anthropic-thinking-v1:加密reasoning和compaction/compaction_summary/compaction_trigger；context_compaction仅encrypted_content存在且非null拒绝。错误保留原记录，要求原模型/新会话。

新Context/tool replay按签名历史、动态system/tool、allowed_tools/thinking/forced tool_choice校验，不可安全保留即拒绝。工具schema归一化在发送前。model尾[1m]大小写不敏感移除/trim，原模型决定context-1m beta；messages URL/query与accept/identity头按新链。

错误先提供方敏感片段[REDACTED]，再现有文本脱敏及递归JSON；413为上游限制。真流由MapErr::poll_frame→StreamBody::poll_frame→AsyncStream::poll_next→新SSE状态机，不拿非流aggregate_sse替代。顺序/index/开块/非法工具JSON/thinking签名与terminal reason严格校验，invalid_utf8/stream_error/stream_truncated非成功。

旧web_search_20250305/Exchange::resume不能无差别迁移：未知server_tool_use/web_search_tool_result在新流为空输出，不是一律显式拒绝；成功stop reason仅end_turn/tool_use/stop_sequence，pause_turn走unsupported/failed，不旧自动续传。native Responses净化由protocol/channel/model/base URL守卫，移除tools中web_search/web_search_preview/web_search_前缀和additional_tools中的同类项及滤空条目，处理对应tool_choice/allowed_tools；未证明删除所有web_search_call历史，不关闭所有搜索。

compat enabled DTO/get/set/锁/未变不写/变化persist_with_commit/成功acknowledge仍在；当前Anthropic新链没有传enabled，不足以证明其仍控制旧hosted链，也不足以证明全App无读点。TextCounts仍chars/ufffd与原错误合同，差异只清理外提，不推导请求/token/计费。analytics搜索统计和state_db_search_dirs不可混作转发能力。

### 10.6 Router、引擎、MCP和回滚

CLI检测新增细分失败合同，最低版本0.155.0-alpha.9.2保留；1.5s/25ms/kill-wait旧版已有。MCP新增写前validated_mcp_config/结构行词法守卫；toml_edit/目标块编辑/3retry/原子发布原有。catalog_db_path改为两类DB枚举、canonicalize去重和验证、ChatGPT主PID与DB持有者筛选，多持有/歧义报错；不能按旧首路径/默认路径选择。

recovery journal/backup、commit_pending/require_sync及commit告警/清理原有。hex_digest参数泛化slice但当前两个caller仍传32并产64字符hex，不是新摘要算法。with_betas(...,1)保留；compaction装配顺序变化按两条实际caller消费，不扩大为全局功能删除。audited修复包装不压平为旧generic fix_issue。⚠ config/MCP/DB写、进程终止/重启仍须quiet-window、备份、事务/冲突/失败回滚与日志，不因展开/内联省略。

### 10.7 当前注册、完整性与证据等级

App1870集合按32/257/335/119/1127唯一归属，缺失/重复0；必要pre内容和选定语义待判0。稳定面只按size/BB/directcalls浅筛迁移，不是1870逐体same/full_leaf。候选0x1000edc50和bad-SP serializer保持原置信度，native证明只用于已穿透分支/字段。

当前dispatcher `run::{{closure}}@0x1006eac40`确认112注册，105分离handler+7内联入口。109wrapper/103原始CCF/交94/并118的提取来源数保留；纠错为2个localStorage键非IPC、5个unused未注册wrapper、clean真实调用漏CCF，观察到App调用102且缺handler0/未解0。原15wrapper-only分为clean1、已注册无页面观察9、unused5；原9direct-only为真实native7、localStorage2、plugin0。native-only diagnose_codex_router另列；注册但未观察页面调用10个。完整逐名/长度/比较分支/handler证据已采纳，不再把34无同名符号当待补注册，也不借pre147清单填值。

40,277完整EA/名字及5406入口已落盘；其余35369名字不再缺失。扩展关键词去commands后10544命中按App、泛型胶水、依赖及cc_switch_anthropic后端库分列；54匿名候选与main两侧内容已经裁定，scope未解0。C_diff_scan_complete=true而C_semantic_unqualified_pass=false：本比较盲点闭合，不是所有依赖逐body或全库业务无变化证书。cc_switch_anthropic148独立普查与38个正文引用不混入App1870；真流streamer/状态机仍按§10.5消费，不能因其非前端可达就排除。

四分类按比较证据层：App函数1870、实际调用102各为already_in_canonical，其余local_outtake/different_machine_owner/truly_undone均0；112注册另有分派映射，5unused及2非IPC不是行为缺口。148库/main/54候选已按来源明确纳入本包，而非仅给未采纳outtake指针。详SYSTEM-DIFF §8与manifest.release_comparison。

OAuth独立有界验证通过，329530评论槽七错误断言0、自有marker重复0、六纠正块及真实postlaunch原指令证明通过。最新事实单写完成53EA、19模块/20save；本消费者独立重hash20份快照、解读20份原始保存回包、fresh核53EA名字/注释/目录，失配0。当前host/SMB i64同为349775547B、SHA68fedeab38e84f2fdf6303392bef386c2910431dcd8c76ae41968de27f57d62c，persistence_complete=true。content_closed=true；mac_closed/readiness仍false仅因最终双审/grounded尚待，execution_ready_for_final_review=true。Windows与实现门不由本合同替代；dim6/live_reference=false。活动来源SHA见manifest与pointers，历史pre合同及原过程日志保留。

## 原任务最终交付状态说明

本次mac静态比较局部终态以manifest.release_comparison为准：既有mac_closed/readiness/final_review_complete/grounded_complete已为true。旧正文中的待终审/待注册对账/C清查描述是历史检查点，完整当前注册/四角度见SYSTEM-DIFF第2、8、11节，不应再重复开逆向工作。联合任务由对应Windows独立正文与最终包审查收尾；不是重做mac基线，不提升实现门或真实App对照。
