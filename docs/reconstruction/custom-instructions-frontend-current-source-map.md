# custom-instructions 前端 current-source 证据映射

本文只记录 `custom-instructions` 在当前公开前端源码中的 route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract 链路。它不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明双平台全 leaf、全文案验收或闭源业务完整恢复。

## 当前源码链

| 层 | 路径 | owner 边界 |
| --- | --- | --- |
| route registry | `src/routes/registry/registry.tsx` | 只登记 `custom-instructions` route、title、预加载、skeleton 和高 IO query key。 |
| route shell | `src/routes/desktop/main/custom-instructions/page.tsx` | 只挂载 `CustomInstructionsFeature`，不 owning query、mutation、dialog 或业务状态。 |
| feature root | `src/features/custom-instructions/index.ts` | 组合 `CustomInstructionsProvider` 与 `CustomInstructionsContent`。 |
| provider/updater | `src/features/custom-instructions/Provider.tsx`、`src/features/custom-instructions/StoreUpdater.tsx` | 只建立模块 cache owner 到 store updater 的同步边界。 |
| content | `src/features/custom-instructions/Content.tsx` | 挂载 dumped contract boundary 和页面内容。 |
| contract | `src/features/custom-instructions/contract.ts` | 固定五条 dumped IPC 命令：`load_custom_instruction_state`、`preview_custom_instruction_apply`、`apply_custom_instruction`、`clear_custom_instruction_block`、`rollback_custom_instruction`。 |
| service | `src/services/custom-instructions/index.ts` | 前端唯一模块 service wrapper，经 `invokeIpc` 调用五条 custom-instructions IPC，并只代理 `openPath` 到 system service。 |
| query | `src/features/custom-instructions/hooks/query.ts` | `loadState` 只通过 cache helper 写入 TanStack cache。 |
| mutation | `src/features/custom-instructions/hooks/mutation.ts` | apply、clear、rollback 先准备 mutation fence，再写入 authoritative payload。 |
| cache | `src/features/custom-instructions/cache/index.ts` | owning `CUSTOM_INSTRUCTION_STATE_QUERY_KEY`、mutation fence、stale/delayed/replay 防护和合同 query 失效。 |
| 页面控制器 | `src/features/custom-instructions/hooks/page.ts` | 只 owning UI 草稿、弹窗开关、toast 和用户意图调度，不直接拼 IPC。 |
| dialogs/panels | `src/features/custom-instructions/dialogs/`、`src/features/custom-instructions/panels/` | 只渲染模块 UI 和发出 controller 意图。 |
| E2E mock | `src/mocks/fixtures/commands.ts` | 五条 IPC 有专用 mock handler 和状态变更镜像。 |
| IPC contract | `src/contracts/ipc/commands.ts` | 五条 IPC 归属 `custom-instructions` domain。 |

## 已收口范围

- 当前公开前端源码可回指五条 custom-instructions IPC 的 route、service、query、mutation、cache、dialog、panel、mock 和 contract 链路。
- `custom-instructions` route shell 不 owning 业务流程。
- TanStack cache 由模块 cache/helper owning，mutation payload 先写 cache，再失效合同 query。
- 用户可见文案继续归 `src/locales/zh.json` 与 `src/locales/en.json`，本文不新增 UI 文案。

## 未恢复和禁止声明

- 不声明 raw/internal gate 已闭合，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不声明双平台全 leaf、全文案验收或闭源业务完整恢复。
- 不新增业务行为，不改变 custom-instructions 后端 owner，只登记当前前端源码链。
- 不新增 route、sidebar、header、tray、settings 入口。
- 不碰 `voice`，不把 custom-instructions 链路接入 voice 入口、路由、IPC mock 或后端命令。

## 验证入口

- `scripts/validate-frontend-custom-instructions-current-source.mjs` 直接验证本文、closeout 台账、源码链、mock、IPC contract、聚合入口和索引边界。
- `npm run validate:frontend-custom-instructions-current-source` 进入 `npm run validate:frontend`，再进入 `npm run validate:all`。
