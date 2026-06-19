# 系统用量当前源码证据映射

本文只记录当前公开源码里 `system-usage` 三条命令的前端当前源码链路。它是当前源码部分收口证据图，不修改 raw/internal 证据，不声明完整叶子验收完成。

## 命令范围

| 命令 | 当前源码前端边界 |
| --- | --- |
| `get_usage_refresh_interval` | `systemService` 读取 IPC envelope 后由 `settingsService` 代理给 settings 查询。 |
| `set_usage_refresh_interval` | `settingsService` 代理到 `systemService`，settings 变更通过 cache helper 写入 TanStack cache 并失效合同查询。 |
| `refresh_usage_snapshot` | overview 的使用量刷新变更触发现有用量刷新 owner，并通过 overview cache helper 写入 snapshot payload、失效 usage analytics 查询。 |

## 证据入口

| 证据 | 作用 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/frontend-callchain-report.json` | 记录三条 usage IPC 的当前源码前端链路，且 `full_leaf` 为 false。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json` | 保留 raw/internal gate 未通过状态；本文不修改其中任何字段。 |
| `src/services/system/index.ts` | `get_usage_refresh_interval`、`set_usage_refresh_interval`、`refresh_usage_snapshot` 的 system 服务门面。 |
| `src/services/settings/index.ts` | settings facade 只代理 usage interval 的 get/set 能力，不 owning IPC 字符串。 |
| `src/app/runtime/events.ts` | runtime initializer 收到 `settings` module reload 后只委托 `applySettingsRuntimeEventToCache`，不直接消费 settings 裸 query key。 |
| `src/features/settings/hooks/query.ts` | usage interval query 只通过 `runSettingsQuery` 与 `SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY` 进入 cache owner。 |
| `src/features/settings/hooks/mutation.ts` | usage interval mutation 通过 `beginSettingsMutation`、`cancelQueries` 和 `writeSettingsMutationPayload` 写入权威 payload。 |
| `src/features/settings/cache/index.ts` | owning usage interval query key、usage schedule runtime event target、sequence fence、mutation payload 写入和合同查询失效。 |
| `src/features/overview/hooks/mutation.ts` | overview usage refresh mutation 使用现有 refresh owner，并交给 overview cache helper 处理返回 payload。 |
| `src/features/overview/cache/index.ts` | owning overview snapshot/usage query key、mutation fence、usage analytics 查询失效。 |
| `src/services/analytics/index.ts` | usage analytics 读取仍由 analytics 服务的 `load_usage_analytics` owner 表达，overview 只消费该事实。 |

## 当前源码调用链

### 读取 usage refresh interval

1. `src/services/system/index.ts` 调用 `invokeIpc<CoreEnvelope<string>>("get_usage_refresh_interval")`。
2. `src/services/settings/index.ts` 只暴露 `getUsageRefreshInterval: systemService.getUsageRefreshInterval`。
3. `src/features/settings/hooks/query.ts` 使用 `SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY`，通过 `runSettingsQuery` 调用 `settingsService.getUsageRefreshInterval()`。
4. `src/features/settings/cache/index.ts` 通过 sequence 与 mutation fence 保护写入，旧 query、延迟响应和事件重放不得覆盖较新的 mutation payload。

### 写入 usage refresh interval

1. `src/features/settings/hooks/mutation.ts` 在 mutate 前调用 `beginSettingsMutation(SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY)` 并取消同 key query。
2. mutation 成功后通过 `writeSettingsMutationPayload` 写入 `SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY`。
3. `src/features/settings/cache/index.ts` 先写 TanStack cache 和 authoritative payload，再按 settings 合同失效 query。
4. `src/services/settings/index.ts` 只代理 `setUsageRefreshInterval: systemService.setUsageRefreshInterval`；IPC 字符串仍在 `systemService` 收口。

### usage schedule runtime event reload

1. `src/app/runtime/initializer.tsx` 只订阅后端 `aimami-runtime-event` 与进程内 `subscribeRuntimeEvent`，不拥有 settings 状态。
2. `src/app/runtime/events.ts` 将后端 `module:reload` payload 标准化为 `RuntimeEvent`，保留 `command`、`statusCode`、`sequence` 与 `receivedAt`。
3. 当前公开后端把 `UpdateUsageRefreshSchedule` 映射为 `moduleId=settings`、`mode=active-only`；前端只把这类 `settings` reload 委托给 `applySettingsRuntimeEventToCache`。
4. `src/features/settings/cache/index.ts` 的 `SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS` 只声明 `SettingsCache.queryKeys.root` 与 `SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY`，并由 `applySettingsRuntimeEventToCache` 执行 active/full invalidation。
5. replay 防护由 `src/app/runtime/events.ts` 的 runtime event cursor 拦截旧 `sequence`；后续 query 返回仍必须经过 `runSettingsQuery` 与 settings mutation fence，旧 query、delayed response 或 replay 不得覆盖较新的 mutation payload。
6. 本段只登记前端 runtime event/cache helper 消费链路；`update_usage_refresh_schedule` 不纳入本条 `currentSourceCommands`，也不声明真实 watcher、condvar、后台 schedule wakeup 或平台事件已经恢复。

### 刷新 usage snapshot

1. `src/services/system/index.ts` 提供 `refreshUsageSnapshot: () => invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")`。
2. `src/features/overview/hooks/mutation.ts` 的 `refreshUsageMutation` 使用现有 usage refresh owner，并通过 `prepareOverviewMutation` 为 `OVERVIEW_SNAPSHOT_QUERY_KEY` 建立 mutation fence。
3. mutation 成功后调用 `writeOverviewMutationPayload` 写入 snapshot payload，并调用 `invalidateOverviewUsageMutationQueries(queryClient)`。
4. `src/features/overview/cache/index.ts` 失效 overview 合同 query、`["usage-analytics"]` 与 `["analytics", "usage"]`。
5. `src/services/analytics/index.ts` 的 `loadUsageAnalytics` 仍是 usage analytics 读取 owner；本条不把 analytics 真实统计口径写成已恢复。

## 未恢复边界

- 不修改 raw/internal 证据，不修改任何 gate-report 字段。
- 不声明 `gate_accepted`、`implementation_use`、`full_leaf_100` 或 `dim6` 已完成。
- 不恢复真实平台 watcher、daemon、runtime event、后台线程、计划调度或平台副作用。
- 不新增 route、sidebar、header、tray、plugins config 或 `voice` 入口。
- 不把 `note_usage_refresh_activity`、`schedule_full_runtime_refresh`、`start_usage_refresh_watcher`、`update_usage_refresh_schedule` 等 watcher/schedule 信号纳入本条前端 usage current-source 边界。
