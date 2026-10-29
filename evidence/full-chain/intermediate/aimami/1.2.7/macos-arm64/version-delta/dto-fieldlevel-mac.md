# dto-fieldlevel-mac.md — AiMaMi 1.2.7 dim4 字段级 DTO/error 定向逆向（macos-arm64）

- session: `<审计会话>`，2026-09-30，machine <本地机器>
- 性质: 对前序轮（backend-delta CLOSURE §5.3 / 各分册 Unknown）遗留的 dim4 字段级缺口做**定向逆向补闭**，非全量重做（红线30）；全部经 mac 1.2.7 活体 IDA 只读（decompile/get_string/直接读字节，零 IDB 写）
- 二进制: mac fat `ac235ae0…` / arm64 thin `1ac56cdd…`（SOT `raw/binary/AiMaMi 1.2.7.app/`）
- voice/audio/capture/runtime-settings/trigger-listener out-of-scope；dim6 留白

---

## 1. accounts — 重置卡 DTO（serde Serialize impl 逐字段实证）

字段名经 serde `serialize_entry(ptr,len)` 的串常量逐字段解码，EA/串地址双锚。

| DTO | 字段（序列化序） | Serialize impl EA | 字段名串证据 |
|---|---|---|---|
| `ResetCredit` | `id`, `expiresAt` | `0x100720d90` | `0x1018c43ba`(len2 `id`) / len9 `expiresAt` |
| `ResetCreditGrant` | `id`, `occurredAt` | `0x100720ea0` | 同上 len2 `id` / len10 `occurredAt`（`0x1018c43c5` 起） |
| `ResetCreditsPayload` | `credits` | `0x100720fb0` | `0x1018c4373` len7 `credits` |
| `ResetCreditHistoryPayload` | `events`, `nextCursor` | `0x100721090` | `0x1018c4393` len6 `events` / `0x1018c43cf` len10 `nextCursor` |

- **大小写合同（关键）**: 前端 DTO 为 camelCase（`nextCursor`/`occurredAt`/`expiresAt`）；上游 API 线协议为 snake_case（`next_cursor`，`0x1018c4393` 缓冲 `eventsnext_cursor` 双字面量邻接）。fetch_history 响应字段 `events`/`next_cursor`/`occurred_at`/`kind`（前序轮）与本轮 Serialize 面互为 Deser/Ser 两侧，互相印证。
- `ResetCreditsPayload` 仅 1 个 serialize_entry → 单字段 `credits`；前序轮记的 `status` 为 fetch_credits 上游解析侧字段，不在前端 payload。

## 2. accounts — 切换回滚快照（内部结构，无 serde 面）

- `capture_switch_rollback_state`（`0x100439140`，bb=462）：tauri StateManager 单例锁内约 30 个 String 字段 memcpy 快照 + 5×`FileRestoreState::capture` 文件快照 + Option 尾部。
- **serde 面核验（本轮全名表扫描）**：`*Rollback*`/`rollback` 相关 Serialize impl **零命中** → 该快照为进程内结构，不经 IPC 序列化。消费侧合同只需状态机字面量（`pending`→`quiet_acquired`→`ready`→`disk_committed`/`quiet_acquire_failed`）+ 错误码 `SWITCH_ROLLBACK_CAPTURE_FAILED`/`SWITCH_LIVE_VERIFY_FAILED`（前序轮已闭），内部字段名不构成消费面缺口（非假墙：serde 缺席已实证，非未尝试）。
- `finish_switch_failure_with_client`（新增，bb=352）回滚三重校验字面量前序轮已闭；win 侧对应格式串为 `Restored file does not match captured state:`（前序轮 win 分册勘误已录）。

## 3. threads — CodexSession 26 字段全 schema（导出 jsonl 行 = 会话 DTO）

`CodexSession::serialize` @ `0x1003bf5c0`，26 个 serialize 条目逐字段解码（序列化序）：

```
id, threadName, updatedAt, fileSize, filePath, projectName, projectPath,
parentSessionId, depth, agentNickname, agentRole, isArchived, excerpt,
projectPathMissing, isConversationThread, rolloutMissing, worktreeMigration,
displayName, preview, tokensUsed, model, reasoningEffort, memoryMode,
historyMode, projectId, gitBranch
```

- 证据: anon 串 `.1009`=threadName(len10) / `.31`=updatedAt(len9) / `.509`=filePath(len8) / `.658`=displayName(len11)，其余字段名在同一常量池邻接字面量逐 len 切片；`worktreeMigration` 经 `Compound::serialize_field` 泛型闭包（`0x10041c0b0`）。
- **导出合同**: `export_sessions_batch`（`0x1005993D0`，bb=273）→ `load_sessions_by_ids` 取会话 → `.jsonl` 每行一个 CodexSession JSON；`.md` 变体走 `write_export_markdown_stream`。相关命令 DTO impl 已定位: `SessionBatchExportedFile` @ `0x1003bcbc0`、`SessionBatchExportPayload` @ `0x1003bd020`、`SessionIndexHealthPayload` @ `0x1003bd240`、`SessionListPayload` @ `0x1003b79f0`、`SessionMessage` @ `0x1003b44e0`。
- 排序键（load_sessions_internal `0262` decomp）: `recency_at_ms`/`updated_at_ms`/`created_at_ms`；错误码 `CODEX_INDEX_UNAVAILABLE`。

## 4. router — 诊断/修复 DTO 与 fix_issue 全分派表

### 4.1 DTO（serde impl 逐字段）

| DTO | 字段 | 证据 |
|---|---|---|
| `FixResult` | `fixedIds`, `failedIds`, `details` | Serialize @ `0x100737d30`；串 `0x1018c515d` 起 len8/9/7 |
| `DiagnosticItem` | `label`, `detail`, `fixable` | 同常量池邻接（`0x1018c516e` 后） |
| `DiagnosticReport` | `items`, `hasIssues`, `transitionInFlight` | 同池 |
| `DiagnosticRepairOutcome` | **enum**：判别字 u32（`2`=无 target 变体）；`FixResult` @+16；判别字≠2 时含 `ReconciledRouterTarget` | drop_in_place @ `0x10089c970`（drop 顺序实证）；无独立 Serialize 符号（全名表扫确认），经 command handler 映射返回 |

### 4.2 fix_issue 分派表（23 key → 23 handler，二进制常量逐分支解码）

`fix_issue`（`0x10077B370`，bb=99）：先 `fix_requires_quiet_window(key)`（a8=force 旁路），再 `switch(key.len)` + 逐字节 XOR/SSE 比对。key 常量经标量 XOR（LE 整数）与 xmmword 常量池（`0x1018C3600`+、`0x101831660`+，活体精确读字节）程序化解码：

| issue key | handler |
|---|---|
| `config_stale` | `fix_config_stale` |
| `auth_integrity` | `fix_auth_integrity` |
| `residual_cache` | `fix_residual_cache` |
| `residual_manifest` | `fix_residual_manifest` |
| `catalog_integrity` | `fix_catalog_integrity` |
| `config_toml_syntax` | `fix_config_toml_syntax_text` |
| `config_third_party` | `fix_config_third_party_text` |
| `state_db_relocation` | `fix_state_db_relocation` |
| `db_orphan_providers` | `fix_orphan_thread_providers`（两 key 共 handler，见下注） |
| `rollout_orphan_providers` | `fix_orphan_thread_providers` |
| `router_http_contract` | `fix_router_http_contract` |
| `catalog_path_validity` | `fix_catalog_path_validity` |
| `takeover_backup_orphan` | `fix_takeover_backup_orphan` |
| `config_global_validity` | `fix_config_global_validity` |
| `config_profile_conflict` | `fix_config_profile_conflict_text` |
| `thread_missing_rollouts` | `fix_thread_missing_rollouts` |
| `legacy_migrated_threads` | `fix_legacy_migrated_threads` |
| `project_state_integrity` | `fix_project_state_integrity` |
| `thread_response_item_ids` | `fix_thread_response_item_ids` |
| `router_unlock_auth_residue` | `fix_router_unlock_auth_residue` |
| `thread_provider_consistency` | `fix_thread_provider_consistency` |
| `thread_poisoned_instructions` | `fix_thread_poisoned_instructions` |
| `thread_model_catalog_consistency` | `fix_thread_model_catalog_consistency` |

- 注1: `db_orphan_providers` 与 `rollout_orphan_providers` 两分派臂均落 `fix_orphan_thread_providers`（内部再分 DB/rollout 两面；`fix_orphan_thread_providers_with_catalog` 为其下收养实现）。
- 注2: key 解码个别末字节因常量池重叠只显示前缀（如 `residual_manifes`），由 len + 前缀 + handler 名镜像三元唯一确定，身份无歧义。
- 前序轮 router 分册 §6「fix_issue 逐分支复核 PENDING」**本轮闭合**。

## 5. engine — CodexPaths 全路径布局（31 字段）+ legacy 迁移

`CodexPaths::from_home` @ `0x100b3f770` 逐 join 解码（home = `$CODEX_HOME` 或 `~/.codex`，`resolve_codex_home` @ `0x100b3d7d0` 实证：env `CODEX_HOME`(len10) 优先，否则 home_dir+`.codex`(len6)）：

```
home/                     auth.json, config.toml, session_index.jsonl, sessions/,
                          archived_sessions/, skills/, accounts/, codexmate/, AGENTS.md
home/accounts/            registry.json, snapshots/, backups/, registry-backups/, auto-switch.log
home/codexmate/           skill-backups/, quota-history.jsonl, quota-store.json, settings.json,
                          bootstrap-cache.json, auto-switch-pending.json, auto-switch-snooze.json,
                          voice-workspace.json(oos), voice-runtime.json(oos), relay/, custom-instructions/
home/codexmate/relay/     state.json
home/codexmate/custom-instructions/  history/
state db                  resolve_codex_state_db → 搜索目录族 + 兜底 <dir>/state_5.sqlite（$CODEX_SQLITE_HOME 可覆盖）
catalog db                catalog_db_path → 候选 [configured_sqlite_home/codex-dev.db, 既有字段, home/codex-dev.db]，
                          首个 is_file 命中，兜底 home/sqlite/codex-dev.db
mac 自启                  ~/Library/LaunchAgents/dev.aimami.auto-switch.plist（49 字符常量）
```

- **legacy 迁移（新证据）**: `home/aionsale` 存在且 `home/codexmate` 不存在 → `rename(aionsale → codexmate)`（旧品牌目录到现行目录的就地迁移；aionsale=上游 OTA 域名同根）。
- `validate_legacy_no_account_aliases`（`0x1002BE650`，bb=22）：逐 alias 项（72B 步长）trim key → `validate_relay_provider_id` → `is_no_account_slot_slug` 判定 → HashMap 按 slug 去重。前序轮「精确校验规则 Unknown」**本轮闭合**。
- 引擎端点集（mac 串池）: `https://chatgpt.com/backend-api/codex` + `/models` + `/responses` + `/responses/compact` + `/images/generations` + `/images/edits`；目录头 `x-aimami-catalog-revision`；DTO 字段 `model_providers`/`requires_openai_auth`/`http_headers`；`OfficialCatalogStatus{available,checkedAt,modelCount,droppedEntries,failure}` + `CatalogFailure.kind ∈ {missingAuth,network,invalidCatalog}`。
- `experimental_realtime_ws_base_url` / `experimental_realtime_webrtc_call_base_url` 与 base 串邻接（realtime 实验面，记录不入合同主体）。

## 6. protocol — Anthropic V1 协议常量面

- **版本协商（前序轮 Unknown，本轮闭合）**: 请求头 `x-api-key` + `anthropic-version: 2023-06-01` + `Content-Type`（`0x1018c8b78`、`0x1018cd040` 两处）；`anthropic-beta` 头存在（`0x1018cd318`），beta 值含 `inline-tools-2026-09-15`（`0x1018cda0a` 邻接）。V1.0 = `2023-06-01` 协议版本头。
- **模型族常量表**（`model_profile`/`output_token_limit`/`is_sonnet_5_5`/`model_matches_family`，anon 串 `.1126-.1133` 解码）: `sonnet-5-5`(10), `opus-5`(6), `opus-5-5`(8), `fable-5`(7), `fable-5-1`(9), `mythos-5`(7), `mythos-5-1`(9), 邻接另见 `opus-4-8`。effort 档 `ultra-` 前缀（`0144` decomp 内联）。
- **SSE 事件枚举（完整）**: `message_start`/`content_block_start`/`content_block_delta`/`content_block_stop`/`message_delta`/`message_stop`（`0x10182173b` 串池全枚举）+ error 面（`Anthropic upstream emitted an error`、`Duplicate Anthropic message_start` @ `0x1018c4758`）；截断/失败 envelope `stream_truncated`/`http_status`/`response.failed`（feed_line `0119` decomp 内联）。
- 路由转态机串池（`0x1018ce470`）: `stopping_codex`/`stop_complete`/`reconciling`/`postcondition_failed`/`settle_failed`/`reconcile_retry`/`stop_failed`/`retry_exhausted`。
- `handle_event` 全转移表维持行为合同级闭合（269K 字符状态机；事件枚举 + 分派面 + 错误面字段级已闭，逐转移枚举非消费面必要项，如实标注不标 accepted_unknown）。

## 7. 附带发现（邻接常量池，供消费侧参考）

- `QuotaStoreItem` 字段: `accountKey`/`capturedAt`/`usageSource`/`primaryWindow`/`secondaryWindow`/`availableResetCredits`/`tokenStatus`/`tokenStatusUpdatedAt`（quota 面，邻接串池）。
- 账号相关键: `id_token`/`authMode`/`isActive`/`resetsAt`/`backupID`/`revision`（accounts registry 面邻接）。

## 8. 本轮未动项（如实）

- 1.2.6 双平台 IDB 体级 callee 双线：维持 PENDING（1.2.6 IDB 未开，版本切换仅用户操作）。
- win 红线24 dirtree 全量命名：维持已登记工作单（需 IDB 写授权）。
- `load_runtime_display_snapshot` 等 4 个 open_items：维持四角度 D1 落位（owner 未定位前禁实现）。
