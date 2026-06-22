# system-window-maintenance 前端 current-source 证据映射

本文只记录 `system-window-maintenance` 在当前公开前端源码中的 route、service、query、mutation、cache、mock、IPC contract、`load_snapshot` 后端 snapshot-bootstrap owner 和 closeout 链路。它不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明 MAC/WIN 100%、maintenance/window 全部平台副作用恢复或闭源业务完整恢复。

## 当前源码链

| 层 | 路径 | owner 边界 |
| --- | --- | --- |
| route registry | `src/routes/registry/registry.tsx` | 只登记 `maintenance` route、title、预加载、skeleton 和高 IO query key。 |
| route shell | `src/routes/desktop/main/maintenance/page.tsx` | 只挂载 `MaintenanceFeature`，不 owning query、mutation、dialog 或业务状态。 |
| feature root | `src/features/maintenance/index.ts` | 组合 `MaintenanceProvider` 与 `MaintenanceContent`。 |
| content | `src/features/maintenance/Content.tsx` | 挂载 dumped contract boundary 和页面内容。 |
| contract | `src/features/maintenance/contract.ts` | 固定维护页 dumped IPC 合同，包含 `clean`、`open_path`、`rebuild_registry` 和 `restart_codex` 等命令。 |
| service facade | `src/services/maintenance/index.ts` | 维护模块唯一 service wrapper，转发 `clean`、`rebuildRegistry`、`restartCodex`、`openPath`、`loadSnapshot` 等 system service 能力，并直接封装 router diagnostics 命令。 |
| system service | `src/services/system/index.ts` | 收口 `focus_main_window`、`open_path`、`clean`、`rebuild_registry`、`graceful_restart_for_update`、`restart_codex` 和 `load_snapshot` 的 IPC transport。 |
| query | `src/features/maintenance/hooks/query.ts` | `loadSnapshot(true)` 只作为 snapshot query 读取，不作为本 closeout 的 closed command。 |
| mutation | `src/features/maintenance/hooks/mutation.ts` | clean、rebuild、restart、openPath 等用户动作只经 maintenance service 调度，再由 cache helper 写入 mutation payload 或失效合同 query。 |
| cache | `src/features/maintenance/cache/index.ts` | owning `MAINTENANCE_IMAGE_COMPAT_QUERY_KEY`、`MAINTENANCE_SYSTEM_INFO_QUERY_KEY`、`MAINTENANCE_SNAPSHOT_QUERY_KEY`、mutation fence 和合同 query 失效。 |
| E2E mock | `src/mocks/fixtures/commands.ts` | 维护和 system 相关 IPC 有 typed mock handler；mock 只作为前端合同镜像，不等同真实 OS、进程或平台副作用。 |
| IPC contract | `src/contracts/ipc/commands.ts` | 当前公开 TypeScript IPC contract 登记本 closeout 的 closed command，并把 `load_snapshot` 绑定到 snapshot-bootstrap 公开文件事实 owner。 |
| closeout 台账 | `docs/reconstruction/frontend-current-source-closeouts.json` | 只登记 non-gating current-source partial closeout；`load_snapshot` 按前端 service/query/cache/mock/IPC contract 和后端 snapshot-bootstrap owner 链路登记，gate-report false 字段保持原状。 |

## 已收口范围

- 当前公开前端源码可回指七条 non-gating current-source command：`focus_main_window`、`open_path`、`clean`、`rebuild_registry`、`graceful_restart_for_update`、`restart_codex`、`load_snapshot`。
- `load_snapshot` 作为当前源码 closed command 登记：前端已具备 maintenance service facade、system service IPC、snapshot query、TanStack cache owner、typed mock handler 和 IPC contract 链路；后端由 `src-tauri/src/application/usecase/system/snapshot_bootstrap.rs` owning 公开文件事实读取和 bootstrap cache 写入。
- 不声明 maintenance/window 全部平台副作用恢复；`focus_main_window`、`open_path`、`graceful_restart_for_update` 和 `restart_codex` 仍只按当前公开平台动作边界登记。
- `maintenance` route shell 不 owning 业务流程。
- `clean` 与 `rebuild_registry` 已经从前端 service、mock、E2E validator 和 Rust maintenance owner 信号回指到 `commands::maintenance` 与 `application/usecase/maintenance` 边界。
- `open_path`、`focus_main_window`、`graceful_restart_for_update` 和 `restart_codex` 只登记当前前端和 system service 调用链，不提升为真实平台副作用完成声明。

## 未恢复和禁止声明

- 不声明 raw/internal gate 已闭合，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不启用后端真实恢复，不声明 MAC/WIN 100% 或双平台全 leaf。
- 不修改 gate-report，不新增 gate-report accepted 字段，不登记任何 `full_leaf_100=false` 字段。
- 不把 `load_snapshot` 提升为 maintenance/window 全量闭环、平台副作用恢复、raw/internal gate 通过或 full leaf 完成声明。
- 不把 typed mock、E2E mock 或 current-source service wrapper 等同真实 OS、进程、窗口、更新、重启或平台副作用。
- 不处理 `voice`，不把 maintenance 链路接入 voice 入口、路由、IPC mock 或后端命令。

## 验证入口

- `scripts/validate-frontend-system-window-maintenance-current-source.mjs` 直接验证本文、closeout 台账、源码链、mock、IPC contract、聚合入口和索引边界。
- `npm run validate:frontend-system-window-maintenance-current-source` 进入 `npm run validate:frontend`，再进入 `npm run validate:all`。
