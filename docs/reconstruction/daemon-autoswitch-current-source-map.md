# 自动切换待确认状态当前源码证据映射

本文只登记当前公开前端源码中 `daemon-autoswitch` 待确认自动切换链路的可审计当前源码证据。它不修改 raw/internal 证据，不声明 `gate_accepted`、`implementation_use`、`dim6`、`full_leaf` 或 `full_leaf_100` 已完成，也不声明后端待确认队列、真实账号切换、真实重启或真实 watcher 已恢复。

## 范围

| 项目 | 边界 |
| --- | --- |
| 模块 | `daemon-autoswitch` |
| 当前源码状态 | 当前源码部分收口 |
| 命令范围 | `load_pending_auto_switch`、`dismiss_pending_auto_switch`、`confirm_pending_auto_switch`、`confirm_pending_auto_switch_and_restart_codex` |
| 前端链路 | system service、daemon-autoswitch service facade、query/mutation/cache、runtime subscription、prompt host、mock handler、IPC contract |
| 明确排除 | 后端待确认队列、真实账号切换、真实重启、真实 watcher、平台副作用、`voice` |

## 当前源码调用链

| 命令 | 当前公开源码证据 | 未声明边界 |
| --- | --- | --- |
| `load_pending_auto_switch` | `src/services/system/index.ts` 调用 IPC；`src/services/daemon-autoswitch/index.ts` 作为 daemon-autoswitch service facade；`src/features/daemon-autoswitch/hooks/query.ts` 通过 `runDaemonAutoswitchQuery` 读取；`src/features/daemon-autoswitch/cache/index.ts` 持有 `DAEMON_AUTOSWITCH_PENDING_QUERY_KEY`。 | 只证明前端待确认 query 链路，不声明后端待确认队列真实恢复。 |
| `dismiss_pending_auto_switch` | `src/services/system/index.ts` 调用 IPC；daemon facade 转发；`src/features/daemon-autoswitch/hooks/mutation.ts` 的 `dismissPendingMutation` 通过 cache helper 写入 mutation payload；`src/app/runtime/pending.ts` 与 `src/app/providers/prompt.tsx` 触发跳过操作。 | 只证明前端 dismiss intent、mock 和 cache 合同，不声明真实账号状态或后端队列语义完成。 |
| `confirm_pending_auto_switch` | `src/services/system/index.ts` 与 daemon facade 暴露 wrapper；`src/mocks/fixtures/commands.ts` 和 `src/contracts/ipc/commands.ts` 登记命令。 | 当前 prompt host 使用 restart 变体，不把本命令声明成独立可见 UI 入口，也不声明真实账号切换已恢复。 |
| `confirm_pending_auto_switch_and_restart_codex` | `src/services/system/index.ts` 调用 IPC；daemon facade 转发；`src/features/daemon-autoswitch/hooks/mutation.ts` 的 `confirmPendingAndRestartMutation` 触发合同 query 失效；`src/app/runtime/pending.ts` 与 `src/app/providers/prompt.tsx` 触发确认并重启操作。 | 只证明前端确认并重启 intent 链路，不声明真实重启、更新、进程或平台副作用已恢复。 |

## cache 与 runtime 边界

`src/features/daemon-autoswitch/cache/index.ts` 是 daemon-autoswitch pending query key、mutation fence、runtime event 到 cache target 映射的 owner。`src/features/daemon-autoswitch/hooks/runtime.ts` 只订阅 `auto-switch-pending` 并调用 `applyDaemonAutoswitchRuntimeEventToCache`，不直接写 TanStack cache，不拥有 prompt 文案，也不拥有后端 watcher 语义。

## prompt host 边界

`src/app/runtime/pending.ts` 只把待确认 query data 转成 prompt view model，并暴露 `dismiss` / `confirmAndRestart` 两个用户意图。`src/app/providers/prompt.tsx` 只渲染全局 prompt host，消费 locale key，不拼 IPC，不创建新的 route、sidebar、header、tray 或 `voice` 入口。

## mock 与 contract 边界

`src/mocks/fixtures/commands.ts` 为四条待确认自动切换命令提供前端 mock handler，用于验证 E2E mock 合同和竞态响应形状。`src/contracts/ipc/commands.ts` 把四条命令登记到 `daemon-autoswitch` domain。该登记不等同于后端真实待确认队列、真实账号切换、真实重启或真实 watcher 已恢复。

## 未声明项

- 不修改 raw/internal 证据。
- 不声明 `gate_accepted`、`implementation_use`、`dim6`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不恢复后端待确认队列、真实账号切换、真实重启、真实 watcher、后台线程或平台副作用。
- 不新增 route、sidebar、header、tray、settings 入口或 `voice` 入口。
- 不把 mock handler 等同真实后端行为。
