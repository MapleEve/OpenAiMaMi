# backend-fullchain-threads-analytics.md — AiMaMi 1.2.7 线程管理重构 + analytics 深 diff

- session: `<审计会话>`（macos-arm64）
- 证据根: `intermediate/aimami/1.2.7/macos-arm64/version-delta/decomp-1.2.7/`；体级比对 `backend-symbol-body-diff.json`
- 变更量级: `core::relay::codex_thread_visibility` +47/−14（3 个新文件面: history / model_fallback）；`core::sessions` 拆分为 sessions/{health,export,detail,history,worktree}；`core::session_analytics`（8 fns）全删 → `core::analytics`（124 fns，parser/index/reader/threads/aggregate/coverage/snapshot）；codex_app_server 新 API 面。

---

## 1. 线程可见性（codex_thread_visibility 重写）

核心重写函数（红线32 全部 ≥2x，判 CHANGED）：

| 函数 | bb | 要点（dim2/3/4） |
|---|---|---|
| `repair_missing_rollouts_for_convergence` | 58 callees，伪代码 80KB | 缺失 rollout 修复：`missing-rollout repair` / `thread-rollout-repairs` 标签；`state.sqlite` 直接操作；`rollout backup is missing` / `rollout backup representation changed; history preserved`（备份表示变化→保历史）/ `rollout changed while router migration was streaming; retry required`（写竞态→重试）；backupPath/rolloutPath 成对处理。实现叶=fs 文件读写+备份+sqlite |
| `verify_convergence_rollout_targets` | bb 24→122 | 收敛目标校验重写（`/payload/history_mode`、`ordinal`、`rollout is missing`） |
| `patch_convergence_rollout_target` | bb 58→151 | rollout 目标补丁重写（`/payload/model_provider` JSON 路径写） |
| `converge_threads_to_provider_with_reads` | 69 callees | SQL: `UPDATE threads SET model_provider = ?2 WHERE id = ?1`；`thread_settings_applied` 事件；ROLLBACK 事务 |
| `converge_router_thread_models_with_reads` | 62 | `thread model convergence` / `relay_model_catalog converged`；`rollout is no longer owned by the router; history preserved` |
| `cleanup_orphan_router_threads_strict` | 42 | `UPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR ?3 OR LIKE…`（provider 归一，`aimai`/`openai` 族）；`PRAGMA wal_checkpoint(TRUNCATE)` |
| `restore_no_account_model_threads` | 41 | `SELECT model, model_provider, COALESCE(rollout_path,''), COALESCE(source,'') FROM threads WHERE id=?1 AND COALESCE(archived,0)=0`；`no-account-model-restore` / `relay_no_account_model_restore`；识别 `"subagent"` 与系统提示词注入（poison 串） |
| `model_fallback::restore_relay_model_threads` | 65（新文件面） | `/payload/model_reasoning_effort` `/reasoning/effort` `reasoning_split` 恢复；`invalid model restore metadata` / `history model changed after fallback` |
| `inspect_thread_history_integrity` | 31 | `ordinal` `/payload/history_base` `reasoning/completed` 完整性检查 |
| `cleanup_private_reasoning_target` | 27 | `private reasoning candidate is no longer readable` / `cannot snapshot rollout before writing` / `rollout changed before private reasoning cleanup; retry required`（写前快照+竞态重试纪律） |
| `open_codex_db_for_convergence` | 22 | `db holders: none detected`（DB 占用探测） |

- **dim4 公共契约**: sqlite `threads` 表列（model_provider/model/reasoning_effort/rollout_path/source/archived）+ rollout JSONL 路径（`/payload/model_provider` 等 JSON 指针）；事件 `thread_settings_applied`；错误范式=「表示变化/竞态 → retry required」「历史保留不删」。
- **dim3 实现叶**: sqlite（WAL/checkpoint/事务 ROLLBACK）、fs rollout 文件与备份、JSON 指针写。
- **破坏性注记（红线20）**: 涉及 UPDATE/DELETE 面与 `wal_checkpoint(TRUNCATE)`；有备份与 retry-required 防线，无静默删除路径发现。

## 2. sessions 健康与导出（新命令面 7 条）

| 命令 | owner | dim3/4 要点 |
|---|---|---|
| `inspect_session_index_health` | `core::sessions::health::inspect_session_index_health`（44 callees，36.8KB 伪代码） | `SELECT count(*) FROM thread_items`、`thread_items`/`thread_id` 一致性体检；只读 |
| `clean_catalog_ghost_threads` | `core::sessions::health::clean_catalog_ghost_threads`（18 callees） | 目录幽灵线程清理（写 sqlite） |
| `clean_missing_rollout_rows` | `…health::clean_missing_rollout_rows`（26，27KB） | rollout 文件缺失行的 DB 行清理 |
| `clean_orphan_rollouts` | `…health::clean_orphan_rollouts`（15） | 孤儿 rollout 文件清理（fs delete 面，破坏性=删文件，有 matching 校验） |
| `clean_global_state_tmp_files` | `…health::clean_global_state_tmp_files`（**1.2.6 无此符号**，NEW_BACKEND） | 全局状态 tmp 清理 |
| `export_sessions_batch` | `core::sessions::export::export_sessions_batch`（47，bb=273） | 批量导出 jsonl（字面量 `jsonl`）；fs write 叶 |
| `load_session_messages` | `core::sessions::detail::load_session_messages`（25，bb=172） | 会话消息装载（`Untitled Session` 兜底名、`reasoning_effort`） |
| `export_thread_statistics` | `core::analytics::threads::write_export` | 见 §3.2 |

- codex_app_server 新 API（ChatGPT 引擎通信面，HTTP/app-server 叶）: `fork_thread_to_cwd`（`thread/fork`、`excludeTurns`）、`load_legacy_messages`、`load_paginated_messages`（`thread/items/list`、`sortDirection`）、`list_thread_scope`（`thread/list`、`useStateDbOnly`、`sourceKinds`、`parentThreadId`、`recency_at`）。
- `core::sessions::load_sessions_internal`（bb=—, 79 callees）：列表装配；`CODEX_INDEX_UNAVAILABLE` 错误码；subagent 字段（`subAgent/thread_spawn/depth/parent_thread_id`、`agent_nickname/agent_role`）；排序键 `recency_at_ms/updated_at_ms/created_at_ms`。

## 3. analytics 重构（5 条旧 analytics 命令 → dashboard/thread 两维）

### 3.1 删除面（已证实）
`core::session_analytics` 8 fns（`compute_tool_analytics` / `compute_token_analytics` / `compute_change_analytics` / `parse_all_sessions` / `range_to_cutoff` / `timestamp_to_date` …）在 1.2.7 **全删**；对应 IPC `load_change/session/token/tool/usage_analytics` 5 条删除。

### 3.2 新面
- **索引器** `core::analytics::index`：`advance_generation` 内嵌完整 cache schema（`analytics-v3.sqlite`，表 files/facts/meta，`PRAGMA user_version=3`，WAL，`facts_identity` 索引）；`scan`/`scan_file`（断点续扫：`SELECT fingerprint,state,offset,ordinal,complete FROM files WHERE path=?1`、`analytics source changed/too large`、`invalid analytics offset/ordinal`）；`status`（`scan_complete`/`updated_at`/incomplete+failed 统计）；`history_gaps`（`json_extract(state,'$.history_base.rollout_id')`）；后台 worker（`aimami-analytics`、`index_worker_unavailable`）。
- **解析器** `core::analytics::parser`：`parse_line`（rollout JSONL 行→fact，`token_usage_record`）；tools 面（apply_patch/shell/tool_search/web_search/called 状态机、`turn_id`、`call_id`）；tokens 面（legacy/native 双路：`total_token_usage` `legacy_baseline` `legacy_partial_usage` `coverage_group` `legacy_counter_reset`；token 字段 `input_tokens/output_tokens/reasoning_output_tokens/cached_input_tokens/total_tokens`）。
- **读取器** `core::analytics::reader`：`Lines::open/next`（`analytics compressed checkpoint changed`）、`Fingerprint::{capture,can_append_to}`（增量指纹）。
- **聚合** `core::analytics::threads::aggregate`（bb=228）：线程维聚合；`aggregate::dashboard`（sz 15883，bb=294）：总览维聚合；account 身份字面量 `chatgpt_subscription_active_until` / `chatgpt_account_id` / `auth.json contains AiMaMi managed virtual auth; not a real account`（虚拟账号识别）。
- **查询** `threads::{load_summaries, load_detail}`（ROLLBACK 事务、`invalid thread identity`）+ facts SQL（winner priority 去重 + token model 归因 `json_set` 子查询）。
- **导出** `threads::write_export`：`statistics export requires a matching .csv or .json extension` / `statistics exports cannot replace ChatGPT data or symbolic links`（符号链接防护）/ `missing export directory`。
- **命令面**: `load_dashboard_analytics` → owner `core::analytics::load_dashboard`（bb=75）+ `aggregate::dashboard`；`set_dashboard_analytics_active` → `commands::analytics::set_dashboard_analytics_active`（**反编译为空，仅 census 事实** sz=5501 bb=271；core 侧 `analytics::set_active` sz=210）。`load_thread_analytics`/`load_thread_analytics_detail` → `threads::{load_summaries, load_detail}`。

### 3.3 已知反编译缺口（如实）
- `commands::analytics::set_dashboard_analytics_active` 与 `run::inner::{{closure}}`（389KB 状态机）反编译返回空体（census/EA/callee 事实在案）。属反编译体积/形态限制，非 IDA 故障；两函数的行为合同经 core 层对应函数（set_active/装配闭包）间接闭合，未据此标 accepted_unknown。

## 4. 平台门（dim5）

win 侧（census 级）：`core/analytics/{aggregate,index,reader,parser/tools}.rs`、`core/sessions/{detail,health,worktree}.rs` 新 src 路径与 mac 模块面 1:1（盘点轮 win-src-path-diff.json）；7 条新线程命令 win strings 18/20 命中。win 深比对待下轮（红线8：不外推）。

## 5. Unknown

- thread_visibility 各重写函数的 1.2.6 侧伪代码对照未做（1.2.6 IDB 不可达）；变更判据=符号 diff+bb/size+字面量。
- `export_sessions_batch` 的导出格式 schema 字段（jsonl 行结构）未逐字段枚举；`clean_orphan_rollouts` 的删除白名单匹配条件未逐行核（有 matching 语义，建议消费侧实现前补一轮针对性 decompile 复核）。
