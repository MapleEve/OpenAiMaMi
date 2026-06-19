# accounts/sessions 前端 current-source 证据映射

本文只记录 `accounts` 与 `sessions` 在当前公开前端源码中的 route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract 链路。它不修改 raw/internal gate-report，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明双平台全 leaf、全文案验收或闭源业务完整恢复。

## 当前源码链

| 层 | 路径 | owner 边界 |
| --- | --- | --- |
| route registry | `src/routes/registry/registry.tsx` | 只登记 `accounts` 与 `sessions` route、title、预加载、skeleton 和高 IO query key。 |
| route shell | `src/routes/desktop/main/accounts/page.tsx`、`src/routes/desktop/main/sessions/page.tsx` | 只挂载 `AccountsFeature` / `SessionsFeature`，不 owning query、mutation、dialog 或业务状态。 |
| feature root | `src/features/accounts/index.ts`、`src/features/sessions/index.ts` | 组合模块 Provider 与 Content。 |
| provider/updater | `src/features/accounts/Provider.tsx`、`src/features/accounts/StoreUpdater.tsx`、`src/features/sessions/Provider.tsx`、`src/features/sessions/StoreUpdater.tsx` | 只建立模块 cache owner 到 store updater 的同步边界。 |
| content | `src/features/accounts/Content.tsx`、`src/features/sessions/Content.tsx` | 挂载 dumped contract boundary 和页面内容。 |
| contract | `src/features/accounts/contract.ts`、`src/features/sessions/contract.ts` | 固定 accounts 八条 dumped IPC 与 sessions 四条 dumped IPC。 |
| service | `src/services/accounts/index.ts`、`src/services/sessions/index.ts` | 前端唯一模块 service wrapper，经 `invokeIpc` 调用 accounts/sessions IPC；账号文件对话框只在 service wrapper 内封装。 |
| query | `src/features/accounts/hooks/query.ts`、`src/features/sessions/hooks/query.ts` | 列表与 snapshot 读取只通过 cache helper 写入 TanStack cache。 |
| mutation | `src/features/accounts/hooks/mutation.ts`、`src/features/sessions/hooks/mutation.ts` | mutation payload 先写模块 cache，再按模块合同失效 query。 |
| cache | `src/features/accounts/cache/index.ts`、`src/features/sessions/cache/index.ts` | owning authoritative query key、mutation fence、stale/delayed/replay 防护和合同 query 失效。 |
| 页面控制器 | `src/features/accounts/hooks/page.ts`、`src/features/sessions/hooks/page.ts` | 只 owning 搜索、选择、展开、弹窗开关和用户意图调度，不直接拼 IPC。 |
| dialogs/panels | `src/features/accounts/dialogs/`、`src/features/accounts/panels/`、`src/features/sessions/dialogs/`、`src/features/sessions/panels/` | 只渲染模块 UI 和发出 controller 意图。 |
| E2E mock | `src/mocks/fixtures/commands.ts` | accounts 与 sessions IPC 有专用 mock handler 和状态变更镜像。 |
| IPC contract | `src/contracts/ipc/commands.ts` | accounts 八条 IPC 归属 `accounts` domain，sessions 四条 IPC 归属 `sessions` domain。 |

## 已收口范围

- 当前公开前端源码可回指 accounts 八条 IPC：`begin_add_account_attach_monitor`、`export_accounts_to_file`、`import_accounts_from_file`、`logout`、`preview_account_import`、`remove_accounts`、`switch_account`、`switch_account_and_restart_codex`。
- 当前公开前端源码可回指 sessions 四条 IPC：`delete_sessions`、`import_chatgpt_session_account`、`load_session_analytics`、`load_sessions`。
- `accounts` 与 `sessions` route shell 不 owning 业务流程。
- TanStack cache 由模块 cache/helper owning，mutation payload 先写 cache，再失效合同 query。
- `import_chatgpt_session_account` 的当前前端入口通过 accounts UI/service 暴露 sessionJson 与 overwriteExisting 参数，但本文不声明后端 ChatGPT session account 导入真实业务已恢复。

## 未恢复和禁止声明

- 不声明 raw/internal gate 已闭合，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不声明双平台全 leaf、全文案验收或闭源业务完整恢复。
- 不新增业务行为，不改变 accounts/sessions 后端 owner，只登记当前前端源码链。
- 不声明 ChatGPT session account 导入、账号写入、refresh token 或 snapshot 生成已经恢复。
- 不碰 `voice`，不把 accounts/sessions 链路接入 voice 入口、路由、IPC mock 或后端命令。

## 验证入口

- `scripts/validate-frontend-accounts-sessions-current-source.mjs` 直接验证本文、closeout 台账、源码链、mock、IPC contract、聚合入口和索引边界。
- `npm run validate:frontend-accounts-sessions-current-source` 进入 `npm run validate:frontend`，再进入 `npm run validate:all`。
