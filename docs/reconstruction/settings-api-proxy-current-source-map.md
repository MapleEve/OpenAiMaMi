# settings API proxy 当前源码映射

本文只记录 settings API proxy 在当前公开源码中的前端调用链、缓存写回、mock 形状和验证入口。它不是 raw/internal gate 关闭声明，不是闭源业务还原声明，也不表示双平台全 leaf 已经完成。

## 已做

| 层级 | 路径 | 当前边界 |
| --- | --- | --- |
| 系统服务 | `src/services/system/index.ts` | 收口 `set_api_proxy_config`、`test_api_proxy_config`、`detect_api_proxy_config` 三条 IPC 调用，并返回 `CoreEnvelope`。 |
| 设置服务 | `src/services/settings/index.ts` | 只代理 `systemService.setApiProxyConfig`、`systemService.testApiProxyConfig`、`systemService.detectApiProxyConfig`。 |
| 前端 API 门面 | `src/lib/api.ts` | 暴露 `setApiProxyConfig`、`testApiProxyConfig`、`detectApiProxyConfig`，页面和组件不直接拼 IPC。 |
| IPC 合同 | `src/contracts/ipc/commands.ts` | 登记 settings 域三条 API proxy 命令、wrapper 名和参数键。 |
| dumped 合同 | `src/features/settings/contract.ts` | 保留三条 API proxy 命令在当前前端 dumped 合同中的来源、参数和控制流计数。 |
| mutation hook | `src/features/settings/hooks/mutation.ts` | `useApiProxyMutations` 统一调用 settings service；保存成功后用 `writeSettingsApiProxyMutationPayload` 写入 settings runtime snapshot。 |
| 页面控制器 | `src/features/settings/hooks/page.ts` | 负责 proxy dialog 开关、草稿模式、草稿 URL、测试结果、busy action 和 toast；只发出保存、测试、检测意图。 |
| cache helper | `src/features/settings/cache/index.ts` | `writeSettingsApiProxyMutationPayload` 只把后端 mutation payload 中的 `api` 写回 `SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY`。 |
| 对话框 | `src/features/settings/dialogs/proxy.tsx` | 只消费 controller 状态与动作，渲染模式选择、手动 URL、检测、测试和保存按钮。 |
| 模式面板 | `src/features/settings/panels/mode.tsx` | 展示当前 API proxy 模式 badge，并通过 controller 打开对话框。 |
| settings 页面 | `src/features/settings/components/page.tsx` | 只装配 `SettingsModeSwitchPanel` 和 `SettingsApiProxyDialog`。 |
| E2E mock | `src/mocks/fixtures/commands.ts` | 为三条 API proxy IPC 增加专用 mock handler，把保存结果写回 snapshot 中的 `status.api.proxy`，并用 `apiProxyMockEnvironmentCandidates` 与 `apiProxyMockReachableUrls` 模拟 env/probe payload；mock 不调用真实 OS 或网络 API。 |
| mock 验证器 | `scripts/validate-e2e-mocks.mjs` | 保留 settings handler 聚合边界，并验证 API proxy 专用 handler、状态写回、`statusCode: null`、env/probe 模拟和无真实 OS/network 调用边界。 |

## 未做

- 不接入 voice，不把 settings API proxy 链路接到 voice 命令、voice 空骨架、前端 voice 入口或运行时链路。
- 前端不直接执行真实网络探测或系统代理扫描；前端只传递用户动作、后端返回的 probe/detect payload 和缓存写回。
- 后端 current-source 只声明受限平台端口探针；它通过公开平台端口读取环境候选并做 200ms TCP probe，不声明业务 HTTP 请求、账号私密值读取、订阅接口探测或闭源 settings 业务全量恢复。
- 不声明 100% 还原，不声明 full leaf 完成，不声明全功能完成，不把本文作为 raw/internal gate 关闭证明。
- 不把 mock handler 当作真实后端能力完成证明；它只用于前端 E2E 合同、状态竞争和 payload 形状验证。

## 验证入口

| 入口 | 作用 |
| --- | --- |
| `scripts/validate-frontend-settings-api-proxy-current-source.mjs` | 专名验证 settings API proxy 的 UI、controller、service、API、IPC、cache、mock 当前源码链路和未声明边界。 |
| `npm run validate:frontend-settings-api-proxy-current-source` | package.json 暴露的专名验证入口。 |
| `scripts/validate-frontend.mjs` | 前端聚合验证入口，已纳入本专名验证器。 |
