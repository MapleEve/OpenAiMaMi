# plugins current-source 证据映射

## 目的

本文只记录 plugins 在当前公开源码中的前端 current-source partial closeout 证据链。它用于说明历史 frontend full-chain 文档里缺失的 route/API/command/mock 链路，已经在当前源码中以可验证文件落点补齐一部分。

本文不修改 raw/internal 证据，不声明 raw gate 通过，不声明 `gate_accepted`、`implementation_use` 或 `full_leaf_100` 已恢复，也不声明前端已达到双平台全 leaf 完成状态。

## 证据来源

| 路径 | 使用方式 |
| --- | --- |
| `evidence/full-chain/raw/aimami/1.0.9/windows/plugins_frontend_acceptance_mapping/evidence/acceptance-matrix.json` | 确认 `list_plugins` 和 `toggle_plugin` 有可见 UI 触发与前端消费映射；确认 `get_plugin_config` 与 `update_plugin_config` 没有可见配置 UI trigger，仍为 blocked。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-plugins/frontend/FRONTEND-FULL-CHAIN-109.md` | 记录 Windows frontend source archive 当时缺 route、API wrapper、Tauri command registration 和 shell load point。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-plugins/frontend/FRONTEND-FULL-CHAIN-109.md` | 记录 macOS frontend source archive 当时缺同一条 route/API/command/mock 链路。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 记录 `plugins-current-route-api-command-mock-chain` 只做 current-source partial closeout，关闭 `list_plugins` 与 `toggle_plugin`，并把 config 两个命令保持为 `contract-service-only`。 |
| `docs/reconstruction/frontend-leaf-restoration-queue.json` | 记录 `plugins-config-visible-leaf` 仍被 raw observation 阻塞，不能编造 UI leaf。 |

## 当前源码链路

当前源码存在一条可验证的 plugins 路由、展示、查询、mutation、service、IPC mock 链路：

- `src/routes/registry/registry.tsx` 注册 `route: "plugins"`，使用 `Puzzle` 图标、`nav.plugins` title key、可见路由、`["plugins-list"]` 高 IO query key，并 lazy preload `@/routes/desktop/main/plugins/page`。
- `src/routes/desktop/main/plugins/page.tsx` 只作为 route shell，挂载 `PluginsFeature`。
- `src/features/plugins/Content.tsx` 渲染 `DumpedContractBoundary` 与 `DUMPED_PLUGINS_COMMANDS`，再挂载 `<PluginsPage />`。
- `src/features/plugins/panels/page.tsx` 渲染 plugins 列表、空态、启用数量 copy signal，并通过 `controller.togglePlugin.run(id, checked)` 暴露非 builtin plugin 的 toggle 入口。
- `src/features/plugins/hooks/query.ts` 通过 `pluginsService.list()` 读取列表，并用 `writePluginsListQueryPayload` 写入 TanStack cache。
- `src/features/plugins/hooks/refresh.ts` 通过 `pluginsService.list()` 执行刷新，并用 `writePluginsRefreshPayload` 合并 payload。
- `src/features/plugins/hooks/mutation.ts` 通过 `pluginsService.toggle` 执行开关 mutation，并覆盖 optimistic update、rollback 和 authoritative mutation payload 写入。
- `src/services/plugins/index.ts` 把 plugins 门面收口到 `runtimeExtensionsService`，包括 `list`、`toggle`、`getConfig` 与 `updateConfig`。
- `src/services/runtime-extensions/index.ts` 通过 `invokeIpc` 暴露 `list_plugins`、`toggle_plugin`、`get_plugin_config` 与 `update_plugin_config`。
- `src/mocks/fixtures/commands.ts` 提供 `listPluginsHandler`、`togglePluginHandler`、`getPluginConfigHandler` 与 `updatePluginConfigHandler`，并在 `pluginsCommandHandlers` 中注册四个命令。

## 已覆盖范围

- `list_plugins`：当前源码已有可见 route、page、query hook、service wrapper、runtime-extension IPC wrapper、mock handler 和 list cache 写入。
- `toggle_plugin`：当前源码已有可见 Switch 入口、mutation hook、optimistic update、rollback、authoritative mutation payload 写入、service wrapper、runtime-extension IPC wrapper 和 mock handler。
- `get_plugin_config`：当前源码只登记为 service/runtime-extension IPC wrapper 与 mock handler 合同链路，不声明有可见配置 UI leaf。
- `update_plugin_config`：当前源码只登记为 service/runtime-extension IPC wrapper 与 mock handler 合同链路，不声明有可见配置保存 UI leaf。

## 未声明边界

- 不把 `get_plugin_config` / `update_plugin_config` 写成有可见配置 UI leaf。
- 不声明 raw/internal gate 已通过。
- 不声明 `gate_accepted`、`implementation_use` 或 `full_leaf_100` 已恢复。
- 不声明前端已达到双平台全 leaf 完成状态。
- 不声明后端闭源业务已全量还原。
- 不修改 evidence、后端源码、README 或用户可见业务源码。

## 验证入口

- `scripts/validate-frontend-plugins-current-source.mjs` 验证本文、raw/internal 证据路径、当前源码路径、`package.json` npm 入口、`scripts/validate-frontend.mjs` 聚合入口，以及上述未声明边界。
- `npm run validate:frontend-plugins-current-source` 只验证 plugins current-source 证据闭环。
- `npm run validate:frontend-closeouts` 继续验证全局 current-source closeout JSON。
- `npm run validate:frontend` 聚合运行该验证和其他前端验证。
