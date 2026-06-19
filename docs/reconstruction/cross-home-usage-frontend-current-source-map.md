# cross-home-usage 前端当前源码证据映射

本文只记录 `cross-1.0.9-home-usage-frontend` 在当前公开源码中的首页用量链路、面板消费链路和未声明边界。本文不修改 raw/internal 证据，不提升 gate，不声明后端闭源业务恢复，也不接入 `voice`。

## 证据边界

| 来源 | 当前结论 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json` | 该包为 `consumerStartReady`，`prewrite_gate_decision=ALLOW`，范围是 `home-dashboard + usage-snapshot-panel (OverviewPage + AnalyticsPanel)`。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 只登记 `cross-home-usage-frontend-current-source-non-gating-closeout` 的 current-source partial closeout。 |
| `src/features/overview/` | 首页只消费 `load_snapshot`、`refresh_usage_snapshot`、`load_usage_analytics` 的当前公开链路，不拥有 analytics 事实。 |
| `src/features/analytics/` | analytics 面板 owning `usage-analytics` query/cache 和 sequence 防护。 |
| `src/services/accounts/index.ts`、`src/services/system/index.ts`、`src/services/analytics/index.ts` | 前端服务门面收口 `load_snapshot`、`refresh_usage_snapshot`、`load_usage_analytics`，页面和组件不直接拼 IPC。 |
| `src/mocks/fixtures/commands.ts`、`src/contracts/ipc/commands.ts` | E2E mock 与 IPC contract 登记首页用量链路涉及的命令。 |

## 当前源码链路

| 层级 | owner | 说明 |
| --- | --- | --- |
| 路由入口 | `src/routes/desktop/main/overview/page.tsx` | 只挂载 `OverviewFeature`，不承载业务状态。 |
| 模块入口 | `src/features/overview/Content.tsx`、`src/features/overview/components/page.tsx` | 通过 `DumpedContractBoundary` 和 `OverviewPage` 进入模块控制器。 |
| 首页 query | `src/features/overview/hooks/query.ts` | `OVERVIEW_SNAPSHOT_QUERY_KEY` 读取 `accountsService.loadSnapshot(true)`；`OVERVIEW_USAGE_QUERY_KEY` 读取 `analyticsService.loadUsageAnalytics()`。 |
| 首页刷新 | `src/features/overview/hooks/mutation.ts` | `refreshUsageMutation` 调用 `accountsService.refreshUsageSnapshot()`，成功后通过 overview cache helper 写入 snapshot payload 并失效 usage analytics query。 |
| 首页 cache | `src/features/overview/cache/index.ts` | owning snapshot/usage query key、query sequence、mutation fence、`invalidateOverviewUsageMutationQueries`。 |
| 首页展示 | `src/features/overview/hooks/page.ts`、`src/features/overview/panels/data.tsx` | 只从 usage payload 派生今日会话、活跃分钟和 `dailyActivity` 面板，不写后端事实。 |
| analytics query | `src/features/analytics/hooks/query.ts` | `AnalyticsPanelQueryDescriptors.usage()` 通过 `runAnalyticsPanelQuery` 调用 `analyticsService.loadUsageAnalytics()`。 |
| analytics cache | `src/features/analytics/cache/index.ts` | owning `AnalyticsDumpedQueryKeys.usage`、`runAnalyticsPanelQuery` 和 `writeAnalyticsPanelPayload`。 |
| service/API | `src/services/accounts/index.ts`、`src/services/system/index.ts`、`src/services/analytics/index.ts` | 系统 snapshot、刷新 snapshot 和 usage analytics 都经服务门面收口。 |
| mock/contract | `src/mocks/fixtures/commands.ts`、`src/contracts/ipc/commands.ts` | mock handler 和 IPC contract 登记 `load_snapshot`、`refresh_usage_snapshot`、`load_usage_analytics`。 |

## 明确未声明

- 不修改 `gate-report.json`。
- 不声明 `gate_accepted`、`implementation_use` 或 `readyToImplement` 已恢复。
- 不声明 `full_leaf`、`full_leaf_100`、`dim6`、双平台 parity 或全文案验收完成。
- 不声明该 cross 包完成后端 IDA 验证；后端事实继续由每个命令自己的证据包、后端 map 和 owner validator 证明。
- 不恢复真实 watcher、daemon、runtime event、后台采集、平台副作用、真实运行时统计或闭源 token 统计。
- 不新增 route、sidebar、header、tray、prompt host、plugins config 或 `voice` 入口。

## validator 接入

`scripts/validate-frontend-cross-home-usage-current-source.mjs` 必须验证：

- 本文被 `docs/reconstruction/source-map.md` 和 `docs/reconstruction/README.md` 索引。
- package 脚本 `validate:frontend-cross-home-usage-current-source` 与 `scripts/validate-frontend.mjs` 聚合入口已登记。
- gate report 保持 `consumerStartReady`、`gate_accepted=false`、`implementation_use=false`、`readyToImplement=0`。
- closeout 只登记允许的失败字段，并指向本文。
- overview、analytics、service、mock 和 IPC contract 的当前源码链路均可回指。
- 未声明边界没有被写成完成声明。
