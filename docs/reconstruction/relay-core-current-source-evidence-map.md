# relay-core 当前源码证据映射

## 目的

本文只记录当前公开源码已经补上的 relay-core owner、可验证入口和证据来源。它不是原始审计报告的替代品，也不把 relay-core 标记为严格门禁已闭合。

前端 dumped、i18n 和文案接受清单已经可以通过，说明当前公开前端的路由、服务门面、DTO、缓存、mock 和文案链条已经有可验证 owner。严格门禁仍未闭合，是因为原始内部材料还要求闭源后端行为、平台副作用、网络转发、配置写入、线程迁移、诊断修复和测试验收链条；当前源码只落地公开骨架和边界，不恢复无证据的闭源业务。

## 已读取证据

| 证据路径 | 本文使用方式 |
| --- | --- |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 确认已有 `relay-current-source-skeleton` 条目，它记录当前源码只做部分关闭，不改变原始审计结论。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/manifest.json` | 确认 Windows relay-core 审计包覆盖 manager、proxy、writer、diagnostic、health、thread migration、models、translator、image compatibility、proxy config、SSE 和 bootstrap 等 cluster；其中仍有若干 cluster 保留测试验收或平台行为缺口。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/pointers/evidence-paths.md` | 确认 raw/intermediate 证据入口，当前源码不能跳过这些入口直接实现真实代理业务。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-RELAY-CORE-INTERNAL-109.md` | 用于识别 manager、diagnostic、thread migration 和 bootstrap 的后端业务复杂度，作为“不在当前公开源码中伪造实现”的依据。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-RELAY-CLOSEOUT-109.md` | 用于确认 translator stream、breaker、models、web executor、web tools 等链条属于后端深层行为，不等同于当前前端 owner 已验收。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-RELAY-MAC-CLOSEOUT-109.md` | 用于确认 translator、diagnostic、writer 的跨平台差异和剩余验收缺口。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-RELAY-IMAGE-COMPAT-109.md` | 用于确认 image compatibility 涉及 config.toml 写入和转发路径，当前源码没有把它写成真实 relay-core 行为。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-RELAY-TRANSPORT-CLOSEOUT-109.md` | 用于确认 proxy config、transport 和代理检测有平台行为，当前源码只保留公开边界。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/logic/WIN-SSE-TRANSLATE-CEILINGCRACK-109.md` | 用于确认 SSE/translator 仍属于深层后端行为，不能由前端 dumped 通过推导为已恢复。 |

## 当前源码已做

### 前端 owner

| owner | 当前可验证内容 |
| --- | --- |
| `src/routes/desktop/main/relay/page.tsx` | relay route shell 只挂载 `RelayFeature`，没有直接 owning 业务状态。 |
| `src/features/relay/Provider.tsx`、`StoreUpdater.tsx`、`Content.tsx` | relay 模块拆出 Provider、StoreUpdater 和 Content；Content 挂载 dumped contract boundary。 |
| `src/features/relay/contract.ts` | 记录 relay dumped command 合同和来源 chunk，覆盖当前公开 relay 命令集合。 |
| `src/services/relay/index.ts` | relay service 统一收口 IPC 调用，包括 provider、router、audit、import/export、diagnostic 和 fix 等命令。 |
| `src/features/relay/cache/index.ts` | 通过 `RelayCache`、query key、sequence guard、mutation payload 写入和 query invalidation 表达 TanStack owner。 |
| `src/features/relay/hooks/query.ts` | owning `load_relay_state`、active state、proxy status、audit log 的 query 入口。 |
| `src/features/relay/hooks/mutation.ts` | owning provider mutation、router toggle、diagnostic、fix、import/export 等用户动作入口；mutation payload 先写 cache，再按合同失效 query。 |
| `src/features/relay/hooks/runtime.ts` | owning router toggle progress 事件到 query cache 的映射，不把事件直接写进展示组件状态。 |
| `src/features/relay/panels/`、`src/features/relay/dialogs/` | relay 页面渲染、表单、弹窗、导入导出确认和网络选择被限制在模块私有 UI owner 内。 |
| `src/locales/zh.json`、`src/locales/en.json` | relay 用户可见文案走 locale key；i18n 静态检查已覆盖 zh/en 同步。 |
| `src/mocks/fixtures/commands.ts` | relay mock 有专用 handler，返回结构化 skeleton payload；diagnostic mock 使用 pending 语义，不伪造成真实恢复。 |

### 后端 owner

| owner | 当前可验证内容 |
| --- | --- |
| `src-tauri/src/commands/relay.rs` | Tauri command adapter 只锁定 repository、反序列化参数、调用 usecase、封装 envelope 和 warning。 |
| `src-tauri/src/application/usecase/relay.rs` | relay 用户动作集中在 usecase，返回 DTO skeleton 和 pending warning；不启动代理进程、不发网络请求、不写真实 router 配置。 |
| `src-tauri/src/application/ports.rs` | relay 平台端口只暴露结构化能力和环境代理候选，真实 HTTP、进程和流式转发仍归 platform owner。 |
| `src-tauri/src/core/relay.rs` | relay core 建立领域状态、operation key、cluster boundary、pending test/model/diagnostic/fix 语义，不读写真实文件或网络。 |
| `src-tauri/src/core/model/relay.rs` | relay domain model 拆出 provider、draft、proxy、state、cluster、operation、diagnostic、test 和 snapshot 值对象，不依赖 Tauri 或前端对象。 |
| `src-tauri/src/contracts/relay.rs` | Rust DTO 与前端 TypeScript 类型对齐，覆盖 provider、state、proxy、router toggle、test、import/export、audit、diagnostic 和 fix payload。 |
| `src-tauri/src/repository/relay.rs` | repository 只暴露可替换路径边界、repository snapshot、空 audit 集合和 diagnostic skeleton，不保存跨命令业务状态。 |
| `src-tauri/src/platform/relay.rs` | relay platform adapter 只封装 OS 环境代理候选和能力占位，不解释 relay 业务状态，也不发起真实网络或进程操作。 |
| `src-tauri/src/core/model/diagnostics.rs` | core model 只承载诊断只读值对象，没有写入无证据闭源业务字段。 |
| `src-tauri/src/repository/diagnostics.rs` | diagnostics repository 只从 repository paths 和 FS adapter 读取可验证路径事实，不触碰真实用户环境之外的隐式状态。 |

## 未做内容

- 未恢复真实 relay provider 存储、密钥系统、router catalog、config.toml 写入、官方直连拦截、代理进程启动、网络请求、模型拉取、SSE 转换、线程迁移、健康检查、诊断修复和导入导出文件事务。
- 未把 Windows 证据直接推导为 macOS 行为，也未把 macOS 行为写成 Windows 通用事实。
- 未修改任何原始审计报告字段，也未新增用于关闭失败项的 JSON 字段。
- 未把当前源码的 skeleton payload 解释为真实业务恢复。
- 未触碰 README、前端语音入口、后端语音命令或 evidence 报告文件。

## 为什么严格门禁仍未闭合

前端 dumped 验收的对象是公开源码中的 route、module、service、DTO、cache、mock 和 locale owner；这些 owner 已经能证明“当前公开前端链条有位置、有类型、有缓存合同、有 mock 镜像”。

严格门禁的对象更大：它要求内部审计包中的后端 cluster 逐项闭合，包括真实文件读写、副作用、平台差异、网络行为、代理转发、诊断修复、线程迁移和验收映射。当前 Rust relay usecase 明确返回 pending skeleton，repository 也只提供路径和空集合边界。因此，当前分支只能说明“可验证 owner 已补齐到公开骨架”，不能说明“闭源 relay-core 业务已经恢复”。

## 本分支可验证 owner 摘要

- 前端 route/module owner：`src/routes/desktop/main/relay/page.tsx` 到 `src/features/relay/Content.tsx`。
- 前端服务和 IPC owner：`src/services/relay/index.ts`、`src/features/relay/contract.ts`。
- 前端状态 owner：`src/features/relay/cache/index.ts`、`src/features/relay/hooks/query.ts`、`src/features/relay/hooks/mutation.ts`、`src/features/relay/hooks/runtime.ts`。
- 前端交互 owner：`src/features/relay/panels/`、`src/features/relay/dialogs/`。
- E2E mock owner：`src/mocks/fixtures/commands.ts`。
- 后端 command/usecase/contracts/core/repository/platform owner：`src-tauri/src/commands/relay.rs`、`src-tauri/src/application/usecase/relay.rs`、`src-tauri/src/application/ports.rs`、`src-tauri/src/contracts/relay.rs`、`src-tauri/src/core/relay.rs`、`src-tauri/src/core/model/relay.rs`、`src-tauri/src/repository/relay.rs`、`src-tauri/src/platform/relay.rs`。

## 后续补证据建议

后续如果要推进真实业务恢复，应按 cluster 单独补证据和测试：先从 raw/internal 路径确认 DTO、错误语义、副作用和平台差异，再进入 contracts、application、repository、platform 或 adapter；最后用 E2E mock 覆盖 delayed、stale、failure、concurrency、cancel、abort 和 event replay。任何 cluster 在证据和测试未补齐前，都只应保留 skeleton 或明确的 pending 语义。
