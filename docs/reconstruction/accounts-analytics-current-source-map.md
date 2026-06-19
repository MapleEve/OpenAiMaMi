# accounts/analytics 前端链路与后端公开 owner 证据映射

本文只记录 `quota-history` 与 `usage-analytics` 两个 app-shell index query 在当前公开源码中的前端 owner-closed 链路，以及它们回指到后端公开文件事实聚合 owner 的边界。本文不修改 raw/internal gate-report，不把 manifest 状态从 `owner-closed` 提升为 `covered`，也不声明前端双平台 100% leaf、全文案验收、闭源 token 统计、真实运行时统计或严格平台 parity 已完成。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 登记 `accounts-analytics-index-query-owner-closed-chain`，只关闭 app-shell index query 的 owner-closed 队列项。 |
| `src/restoration/frontend-manifest/index.ts` | 记录 `quota-history` 归属 `src/features/accounts/cache/index.ts` / `src/features/accounts/hooks/mutation.ts`，`usage-analytics` 归属 `src/features/analytics/cache/index.ts` / `src/features/analytics/hooks/query.ts`。 |
| `docs/reconstruction/sessions-analytics-current-source-evidence-map.md` | 记录后端 sessions/analytics 只读取公开 session、rollout、quota-history、token、tool、change 文件事实。 |
| `scripts/validate-backend-analytics-owner.mjs` | 验证 analytics usecase、repository、core 聚合、quota-history JSONL 和未恢复边界。 |
| `scripts/validate-backend-sessions-owner.mjs` | 验证 sessions 文件事实和 session analytics 只读边界。 |

## 当前前端源码链路

| query key | owner | 当前源码边界 |
| --- | --- | --- |
| `quota-history` | `src/features/accounts/cache/index.ts`、`src/features/accounts/hooks/mutation.ts`、`src/services/accounts/index.ts` | `accountsService.refreshUsageSnapshot()` 代理到 `systemService.refreshUsageSnapshot()`；accounts cache owning `AccountsDumpedQueryKeys.quotaHistory` 与 `invalidateAccountsDumpedQueries`，overview 只能触发刷新并失效相关 query，不 owning 配额事实。 |
| `usage-analytics` | `src/features/analytics/cache/index.ts`、`src/features/analytics/hooks/query.ts`、`src/services/analytics/index.ts` | `analyticsService.loadUsageAnalytics()` 调用 `load_usage_analytics`；analytics query 通过 `runAnalyticsPanelQuery` 写入模块 cache，sessions/overview 只能消费摘要或触发失效，不建立第二套事实 owner。 |

## 当前后端公开能力

| 命令 | 当前公开 owner |
| --- | --- |
| `load_snapshot` | `src-tauri/src/commands/system.rs` 调用 `usecase::system::load_snapshot`，`snapshot_bootstrap.rs` 返回 system restored status。 |
| `refresh_usage_snapshot` | `src-tauri/src/commands/system.rs` 调用 `usecase::system::refresh_usage_snapshot`，只返回当前公开 snapshot payload 与 restored status，不声明真实后台采集恢复。 |
| `load_usage_analytics` | `src-tauri/src/commands/analytics.rs` 调用 `usecase::analytics::load_usage_analytics`，repository 读取公开 session/rollout 文件事实并交给 core 聚合。 |
| `load_quota_history` | `src-tauri/src/commands/analytics.rs` 调用 `usecase::analytics::load_quota_history`，再由 `src-tauri/src/repository/quota.rs` 的 `load_public_quota_history` 读取 `accounts/quota-history.jsonl` 公开点位并保留 compaction write 边界。 |
| `load_token_analytics` / `load_tool_analytics` / `load_change_analytics` | 当前只恢复公开 JSONL 文件事实聚合，不声明闭源 token 或严格运行时统计口径恢复。 |

## 明确未声明

- 不把 `accounts` 或 `analytics` 的 manifest 状态改成 `covered`。
- 不声明全文案验收完成。
- 不声明 `MAC/WIN 100% leaf` 已完成。
- 不声明 analytics 闭源 token、真实运行时统计或严格平台 parity 已完成。
- 不声明 raw/internal gate 由本文关闭。
- 不接入 `voice`。

## validator 接入

`scripts/validate-frontend-accounts-analytics-current-source.mjs` 必须验证：

- 本文被 `docs/reconstruction/frontend-current-source-closeouts.json`、`docs/reconstruction/source-map.md` 和 `docs/reconstruction/README.md` 索引。
- `quota-history` 与 `usage-analytics` 仍是 `owner-closed`，不得提升为 `covered`。
- accounts/system/analytics service、query、mutation、cache、overview consumer、mock、IPC contract 定义、Tauri command、usecase、repository 和 DTO 均能回指当前公开源码；不得把 IPC contract 的 `source` 字段改写或声明成 `current-source`。
- 后端公开能力只声明公开文件事实聚合与六边形 owner，不写成闭源运行时统计恢复。
