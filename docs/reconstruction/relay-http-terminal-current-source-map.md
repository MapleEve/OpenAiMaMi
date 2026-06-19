# relay HTTP-terminal 当前源码映射

## 目的

本文只记录 `test_relay_provider`、`test_relay_draft` 和 `fetch_relay_models_draft` 在当前公开源码中的前端触发链、mock IPC、后端 usecase、platform mock terminal、core request builder 和错误语义 owner。本文不修改 raw/internal gate-report，不声明 Windows `readyToImplement` 已恢复，也不声明真实 HTTP、真实模型拉取、真实 stream retry 或真实代理进程已经恢复。

## 证据入口

| 证据路径 | 使用方式 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay/gate-report.json` | 记录 `test_relay_provider`、`test_relay_draft`、`fetch_relay_models_draft` 仍属于 strictImplementationUse，残留 blocker 是 `dim1 frontend CCF not_closed_windows`。 |
| `evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/frontend-callchain-report.json` | 记录当前源码 partial closeout：不改变 gate-report 字段，不声明 full leaf。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | `relay-targeted-http-terminal-ui-trigger-current-source-chain` 收口当前源码命令、source signal 和 non-claim。 |

## 当前源码链路

| 层 | 路径 | 当前职责 |
| --- | --- | --- |
| IPC 合同 | `src/contracts/ipc/commands.ts` | 登记 `test_relay_provider`、`test_relay_draft`、`fetch_relay_models_draft`。 |
| UI 触发 | `src/features/relay/panels/panels.tsx` | 暴露 provider test、draft test 和 fetch models 的用户触发入口。 |
| 页面控制 | `src/features/relay/hooks/page.ts` | 将 UI 意图转成模块 action，不直接拼 IPC。 |
| 变更操作归属 | `src/features/relay/hooks/mutation.ts` | owning `testProvider`、`testDraft`、`fetchModelsDraft` mutation。 |
| service wrapper | `src/services/relay/index.ts` | 统一调用三个 IPC 命令。 |
| E2E mock | `src/mocks/fixtures/commands.ts` | 提供 relay test 和 model fetch mock handler。 |
| Tauri command | `src-tauri/src/commands/relay.rs` | 薄 adapter：参数、repository state、usecase 和 envelope。 |
| usecase | `src-tauri/src/application/usecase/relay.rs`、`src-tauri/src/application/usecase/relay/models.rs` | 编排 provider/draft 输入、platform mock terminal、core 解析和 repository health 记录；`test_relay_draft` 的 backend status 使用 `BackendEffect::Platform`，不再把 mock terminal 动作标成 `NoOp`。 |
| core | `src-tauri/src/core/relay.rs`、`src-tauri/src/core/relay/request_builder.rs` | owning request builder、model ID parser、health check parser、relay test retry/stream retry 错误语义。 |
| platform | `src-tauri/src/platform/relay.rs` | 只提供 mock terminal；不发起真实外部联网。 |

## 已恢复边界

- 前端 UI 触发链已从面板、page hook、mutation hook、service wrapper 到 IPC mock 闭合。
- 后端 command/usecase/platform/core 链路已能构建 mock terminal request、解析 mock response，并把 provider health 写回 repository；draft 测试链路按 platform mock terminal effect 归类。
- relay test 错误语义由 `src-tauri/src/core/relay.rs` owning，覆盖 stream retry 和 relay test retry 文本分类。
- 当前 validator 是 `npm run validate:frontend-relay-http-terminal-ccf` 与 `npm run validate:backend-relay-owner`；聚合入口是 `npm run validate:frontend`、`npm run validate:backend` 和 `npm run validate:all`。

## 未声明边界

- 不声明 raw/internal gate 字段已经变绿。
- 不声明 `implementation_use`、`gate_accepted`、`full_leaf` 或 `full_leaf_100` 已恢复。
- 不声明真实 HTTP 网络、远端模型拉取、真实 stream retry、SSE 转发、外部代理进程或平台副作用已经恢复。
- 不把 macOS 证据推导为 Windows 行为，也不把当前 mock terminal 解释成闭源后端全量恢复。
