# app-shell source-only 当前源码证据映射

本文件只记录当前公开源码中 app-shell 的 source-only 边界。它不是 covered 声明，不修改 raw/internal gate-report，也不把 `assets/index-CL22l5v8.js` 中无法审计到真实端点的片段提升为完整恢复。

## 证据范围

| 边界 | 当前源码 owner | source-only 说明 |
| --- | --- | --- |
| index asset source | `src/restoration/frontend-manifest/index.ts` 的 `FRONTEND_DUMPED_INDEX_ASSET_SOURCES` | `app-shell` 只登记 `assets/index-CL22l5v8.js` 来源，状态必须保持 `source-only`。 |
| remote secret runtime | `src/app/runtime/secret.ts` | 只覆盖启动期 remote secret 迁移运行时：读取旧 `localStorage` 值、调用 `systemService.importRemoteDeviceSecretIfEmpty`、再调用 `systemService.getOrCreateRemoteDeviceSecret` 并写入 QueryClient 缓存。 |
| desktop-message query key | `src/app/runtime/message.ts` | 只登记 `DESKTOP_MESSAGE_QUERY_KEY = ["desktop-message"]`、`DESKTOP_MESSAGE_SOURCE_STATUS.sourceOnly` 和 `loadDesktopMessageBoundary` 的空 payload 边界；dumped 证据没有可审计 endpoint，不能补未经审计的 endpoint。 |
| popover consumer | `src/app/runtime/popover.tsx` | `DesktopMessagePopover` 只通过 `useDesktopMessageQuery` 消费 message owner，不直接拼 query key，也不直接 owning `useQuery`。 |
| system service wrapper | `src/services/system/index.ts` | 只登记 app-shell 能消费的 service wrapper：`checkUpdateInstallability`、`gracefulRestartForUpdate`、`openPath`、`getMysteryUnlockGrants`、`mergeMysteryUnlockGrants`、`importRemoteDeviceSecretIfEmpty`、`getOrCreateRemoteDeviceSecret`。 |
| platform_actions 后端边界 | `src-tauri/src/application/usecase/platform_actions.rs` | 只说明更新、重启和打开路径类动作落在 platform_actions 边界；公开源码不声明 update、restart 或 window-path 后端完整恢复。 |

## 验证入口

- `scripts/validate-frontend-app-shell-source-only.mjs`
- `npm run validate:frontend-app-shell-source-only`
- `scripts/validate-frontend-dumped.mjs` 仍负责 dumped evidence、manifest、remote secret runtime 和 `desktop-message` source-only 查询矩阵的现有 app-shell 检查。
- `scripts/validate-frontend-current-source-closeouts.mjs` 必须要求 `app-shell-source-only-index-and-desktop-message-boundary` 绑定本 map，并检查 source-only、desktop-message、voice 与 non-claim 片段。

## 不声明边界

- 不把 app-shell 的 source-only manifest 状态改成 covered。
- 不给 `desktop-message` 编造可审计 endpoint。
- desktop-message 不可编造 endpoint：dumped 证据没有可审计 endpoint，不能补未经审计的 endpoint。
- 不新增 route、runtime initializer、mock handler 或后端命令入口。
- 不声明 update、restart 或 window-path 后端完整恢复。
- 非 covered：本 map 只登记 source-only 边界，不把 app-shell 或 desktop-message 提升为 covered。
- 非 full leaf：本 map 不声明双平台全 leaf、`full_leaf`、`full_leaf_100` 或闭源业务完整恢复。
- 非 update/restart/window-path 完整恢复：`platform_actions` 只作为公开源码边界证据，不作为真实平台副作用闭环。
- 不修改 raw/internal gate-report。
- 不处理 `voice`，也不把 app-shell source-only 边界接入 `voice`。
- 不声明全文案验收、双平台全 leaf、`full_leaf_100` 或闭源业务完整恢复。
