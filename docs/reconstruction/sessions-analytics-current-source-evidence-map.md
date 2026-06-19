# sessions/analytics current-source 证据映射

本文件只记录后端 `sessions` / `analytics` 当前公开源码可以证明的 source evidence map，用来约束 owner validator。它不修改 raw/internal 证据，不把双平台 gate-report 的 `full_leaf_100=true` 改写为当前仓库已经完成，也不声明跨平台手工验收已经完成。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-sessions-analytics/gate-report.json` | 确认 Windows 1.0.9 sessions/analytics 队列包含 `load_sessions`、`delete_sessions`、`load_usage_analytics`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_change_analytics`、`load_quota_history`。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-sessions-analytics/gate-report.json` | 确认 macOS 1.0.9 同一队列，并记录 `load_usage_analytics` 写 bootstrap cache、`load_quota_history` 做 7 天 compaction rewrite 的 current-source 侧效应边界。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 只作为前端 current-source partial closeout 参考；本文件不更新该 JSON，不声明前端或整仓 leaf 完成。 |
| `src-tauri/src/commands/analytics.rs`、`src-tauri/src/commands/sessions.rs` | 确认 command 层只做 Tauri 参数、state/repository 获取、usecase 调度和 envelope 返回。 |
| `src-tauri/src/application/usecase/analytics.rs`、`src-tauri/src/application/usecase/sessions.rs` | 确认用户动作事务只编排 repository/core，并区分 restored 与 pending。 |
| `src-tauri/src/repository/analytics.rs`、`src-tauri/src/repository/quota.rs` | 确认公开文件事实由 repository owner 通过可替换 FS 读取。 |
| `src-tauri/src/core/model/analytics.rs` | 确认 usage/session/token/tool/change/quota 的公开事实聚合由 core model owning。 |

## 当前公开文件事实聚合

backend status 的 effect 语义按当前源码真实仓储边界区分：`load_sessions`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_change_analytics` 标记为 `RepositoryRead`；`delete_sessions`、`load_usage_analytics`、`load_quota_history` 标记为 `RepositoryWrite`。这里的 `RepositoryWrite` 只表示公开源码确实写入会话文件、bootstrap cache 或 quota compaction，不扩大为闭源业务还原。

| 状态 | 命令 / 聚合 | 当前公开来源 | owner 边界 |
| --- | --- | --- | --- |
| restored | `load_sessions` | `sessions_dir` 下已扫描到的 session 文件元数据、file size、created/modified time、session JSONL 中的 `payload/cwd`、`payload/source/subagent/thread_spawn/parent_thread_id`、`payload/agent_nickname`、`payload/agent_role`、`payload/role`。 | `commands/sessions.rs` 调用 `usecase::sessions::load_sessions`；usecase 只排序和映射 DTO；`repository/sessions.rs` 通过 `FileSystemAdapter` 读取公开文件元数据和 JSONL 字段。 |
| restored | `delete_sessions` | 仅删除 `load_session_file_metadata` 已扫描出的 session id 对应文件。 | usecase 调用 `sessions_repository::delete_session_files`；repository 通过 `FileSystemAdapter::remove_file` 删除已确认路径，不恢复 SQLite/global-state 事务。 |
| restored | `load_usage_analytics` | 公开 session 文件事实：updated_at、created_at、file_size、turn_count、activity_timestamps。 | `analytics_repository::load_public_session_facts` 提供事实；`core/model/analytics.rs` 聚合 365 天窗口、补零、activityLevel 和 active minutes estimate；usecase 写回 bootstrap usage cache。 |
| restored | `load_session_analytics` | 同一批公开 session 文件事实。 | `sessions` usecase 通过 `analytics_repository::load_public_session_facts` 和 `aggregate_public_usage_for_range` 聚合 range 内 session count / avg_turns / active_days / series。 |
| restored | `load_token_analytics` | `sessions_dir` 与 `rollouts` 下公开 JSONL 中的 `usage.input_tokens`、`usage.output_tokens`、`usage.output_tokens_details.reasoning_tokens`、`usage.total_tokens` 及同义 camelCase 字段。 | `repository/analytics.rs` 递归读取公开 JSONL 的 token 数字字段；core 只做 range window、input/output/reasoning/total、avg per session、percent 和 day series 聚合；usecase 返回 `RepositoryRead`。 |
| restored | `load_tool_analytics` | `sessions_dir` 与 `rollouts` 下 `rollout-*.jsonl` 的 `response_item/function_call` path/name 事实。 | `repository/analytics.rs` 递归读取 rollout JSONL；core 只做公开 path 计数、search/edit 分类和 topTools path/count 聚合。 |
| restored | `load_change_analytics` | `rollout-*.jsonl` 中 `response_item/function_call` 且 name 为 `exec_command` 的 arguments command 事实。 | repository 解析公开 command 字段；core 依据公开分类表聚合 total/write/read/other 和 day series。 |
| restored | `load_quota_history` | `accounts/quota-history.jsonl` 的 timestamp、accountKey、primaryUsedPercent、secondaryUsedPercent。 | `repository/quota.rs` 通过 `FileSystemAdapter` 读取 JSONL、按 accountKey 过滤、保留 7 天窗口，并仅在大文件阈值后 compaction write。 |

## pending 边界

| pending 项 | 当前边界 |
| --- | --- |
| `import_chatgpt_session_account` | 只保留公开 IPC / DTO 骨架和 pending status；不声明 ChatGPT session account 导入、账号写入、refresh token 或 snapshot 生成已恢复。 |
| SQLite / rusqlite session index | 当前公开实现不恢复 SQLite/rusqlite 索引事务；session list 只读公开文件元数据和 JSONL 字段。 |
| 运行时统计精确口径 | `active_minutes_estimate`、token/tool/change 分类和 quota history 只来自公开可重建文件事实；不声明真实运行时统计口径、闭源敏感字段路径之外的 token 语义或闭源一致性。 |
| 跨平台验收 | 本文件只约束 current-source 静态 owner；不声明 Windows/macOS 手工验收，不声明整仓 100% leaf，也不声明 raw/internal gate 已由当前仓库完成。 |

## validator 接入

- `scripts/validate-backend-sessions-owner.mjs` 必须验证本 evidence map 存在，且记录公开 session 文件事实、`load_session_analytics` owner、pending 的 session account import 和不恢复 SQLite/rusqlite 索引事务。
- `scripts/validate-backend-analytics-owner.mjs` 必须验证本 evidence map 存在，且记录公开 session/rollout/quota-history 文件事实聚合、token analytics 公开 JSONL 只读聚合边界、quota-history 7 天 compaction 和不声明闭源运行时一致性。
