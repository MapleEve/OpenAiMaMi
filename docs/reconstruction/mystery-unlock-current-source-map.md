# mystery unlock 前后端当前源码证据映射

本文件只登记当前公开源码中 mystery unlock grants、后端 settings 持久化事务与 route gate/helper 的 current-source partial 证据。它不是 raw/internal gate-report 修正，只登记非 `full_leaf_100` 的 gate-report 非绿字段作为当前源码边界说明，不声明 `dim6`、`gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。

## 范围

| 范围 | 当前源码证据 |
| --- | --- |
| IPC commands | `get_mystery_unlock_grants`、`merge_mystery_unlock_grants` 是真实 IPC command，登记在 `src/contracts/ipc/commands.ts`，由 `src/services/system/index.ts` 的 `systemService` 包装。 |
| grants cache/query | `src/features/overview/cache/index.ts` owns `OVERVIEW_MYSTERY_GRANTS_QUERY_KEY`、`writeOverviewMysteryGrantsPayload` 和 `invalidateOverviewMysteryGrantsQueries`。 |
| grants query hook | `src/features/overview/hooks/query.ts` 通过 `runOverviewQuery` 调用 `systemService.getMysteryUnlockGrants()`。 |
| grants mutation hook | `src/features/overview/hooks/mutation.ts` 通过 `prepareOverviewMutation`、`readOverviewMutationSequence` 和 `writeOverviewMysteryGrantsPayload` 接收 `systemService.mergeMysteryUnlockGrants(grants)` 的权威 payload。 |
| 后端 command / usecase | `src-tauri/src/commands/mystery.rs` 只做 IPC adapter；`src-tauri/src/application/usecase/mystery.rs` owning grant 清理、合并、过期过滤、route normalization 和 settings 持久化事务。 |
| 后端 repository / DTO | `src-tauri/src/repository/settings.rs` owns `load_mystery_unlock_grants` 与 `save_mystery_unlock_grants`；`src-tauri/src/contracts/mystery.rs` owns `MysteryRouteGrant` DTO，并兼容 `epochMs` / `epoch_ms`。 |
| route helper | `src/routes/registry/gates.ts` 的 `resolveMysteryGrantRoute`、`isRouteVisibleByMysteryGrant` 和 `resolveRouteVisibility` 是前端 route gate/helper，不是 IPC command。 |
| shell 接线 | `src/app/router/shell.tsx` 使用 `useOverviewMysteryUnlockGrantsQuery()`，把 grants context 传给 route meta、visible route、prewarm 与 Outlet context。 |
| mock 合同 | `src/mocks/fixtures/commands.ts` 提供 `getMysteryUnlockGrantsHandler` 和 `mergeMysteryUnlockGrantsHandler`，只模拟 E2E IPC payload 和竞态合同，不等同真实后端业务。 |

## Route Helper 边界

`mystery_route_allowed` / `route_allowed` 只来自 raw/internal helper gap 语义。当前公开源码没有注册这两个 IPC command，也不把 route helper 当作 IPC closeout。route helper 的 current-source 证据只说明：

- `relayModel` grant alias 映射到当前公开 `relay` route。
- grant 必须满足 `epochMs >= nowMs` 才能放开 route。
- route meta、可见 route、prewarm 和 route guard 只消费同一份 grants context。
- route helper 不是 IPC command，不进入 `src/contracts/ipc/commands.ts`、`systemService` 或 mock command handler 表。

## 未声明

- 不修改任何 raw/internal `gate-report.json`。
- 只登记 `macos-1.0.9-mystery-unlock/gate-report.json` 中非 `full_leaf_100` 的 10 个非绿字段作为 current-source partial 边界；不登记 `full_leaf_100`，不把登记视为 gate 通过。
- 不声明 `dim6`、`gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不接入 `voice`，不新增 voice route、voice service、voice mock 或 voice command。
- 不声明后端闭源业务、真实平台副作用、真实 daemon/watcher 或完整 leaf parity 已恢复。

## 验证入口

- `scripts/validate-frontend-mystery-unlock-current-source.mjs` 验证本文、closeout 台账、package script、聚合验证、IPC/service/cache/query/mutation/mock/route helper 和后端 mystery owner 边界。
- `scripts/validate-frontend-mystery-gates.mjs` 继续验证 route gate 的更细粒度 route registry 接线。
- `scripts/validate-backend-mystery-owner.mjs` 验证后端 mystery command/usecase/repository/DTO owner，且不把 route allowlist 回流到后端。
- `scripts/validate-frontend-current-source-closeouts.mjs` 验证 closeout 台账只登记 current-source partial，且只允许 mystery-unlock 非 `full_leaf_100` gate 非绿字段进入 partial closeout。
