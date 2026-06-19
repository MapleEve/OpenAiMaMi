# relay-core 当前源码证据映射

## 目的

本文只记录当前公开源码已经补上的 relay-core owner、可验证入口和证据来源。它不是原始审计报告的替代品，也不把 relay-core 标记为严格门禁已闭合。

前端 dumped、i18n 和文案接受清单已经可以通过，说明当前公开前端的路由、服务门面、DTO、缓存、mock 和文案链条已经有可验证 owner。严格门禁仍未闭合，是因为原始内部材料还要求闭源后端行为、平台副作用、网络转发、线程迁移、真实代理运行时和测试验收链条；当前源码只恢复可由公开 owner 验证的本地配置读写、受管 router 配置注入/移除、诊断修复本地配置事务和 mock terminal 边界，不恢复无证据的闭源代理业务。

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
| `evidence/full-chain/internal/leaves/aimami/1.0.9/windows-x64/relay_thread_migration/migrate_threads_for_router_with_scope/data/manifest.json` | 确认 `relay_thread_migration` 的公开证据入口、函数名 `migrate_threads_for_router_with_scope`、Windows 1.0.9 平台、`strictImplementationUse` 层级、`implementation_use=true`、`gate_accepted=true` 和 caller 为 `switch_account_stop_codex_restart`；本文只把它登记为证据来源，不把内部 gate 直接转写成公开运行时实现。 |
| `evidence/full-chain/internal/leaves/aimami/1.0.9/windows-x64/relay_thread_migration/migrate_threads_for_router_with_scope/data/producer-ledger.json` | 确认该 leaf 的内部 callee 包含进程列表扫描、并行 patch、session meta 替换等闭源行为；当前公开源码不得据此实现真实进程扫描、线程 patch、SQLite patch、session meta 替换、Codex 重启或真实运行时迁移。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/gate-report.json` 中 `relay_thread_migration` 段落 | 确认内部审计段落把 `relay_thread_migration` 标成 `readyToImplement`、`gate_accepted=true`、`implementation_use=true`、`dim6_test_acceptance=closed`；公开仓库仍按项目范围只落空操作/待处理 owner，不声明 raw/internal gate 全闭合或闭源业务全恢复。 |

## 当前源码已做

### 前端 owner

| owner | 当前可验证内容 |
| --- | --- |
| `src/routes/desktop/main/relay/page.tsx` | relay route shell 只挂载 `RelayFeature`，没有直接 owning 业务状态。 |
| `src/features/relay/Provider.tsx`、`StoreUpdater.tsx`、`Content.tsx` | relay 模块拆出 Provider、StoreUpdater 和 Content；Content 挂载 dumped contract boundary。 |
| `src/features/relay/contract.ts` | 记录 relay dumped command 合同和来源 chunk，覆盖当前公开 relay 命令集合。 |
| `src/services/relay/index.ts` | relay service 统一收口 IPC 调用，包括 provider、router、audit、import/export、diagnostic 和 fix 等命令。 |
| `src/features/relay/cache/index.ts` | 通过 `RelayCache`、query key、sequence guard、mutation payload 写入和 query 失效 表达 TanStack owner。 |
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
| `src-tauri/src/application/usecase/relay.rs`、`src-tauri/src/application/usecase/relay/` | relay 用户动作集中在 usecase；provider CRUD、active provider、passthrough policy、import/export、router diagnostic/fix、model/test mock terminal 和 payload 映射已拆分到子 owner；不启动代理进程、不发真实网络请求、不实现闭源流式代理。 |
| `src-tauri/src/application/ports.rs` | relay 平台端口只暴露结构化能力和环境代理候选，真实 HTTP、进程和流式转发仍归 platform owner。 |
| `src-tauri/src/core/relay.rs` | relay core 建立领域状态、operation key、cluster boundary、pending test/model/diagnostic/fix 语义，以及 `needs_stream_retry` / `should_retry_relay_test` 错误分类；不读写真实文件或网络。 |
| `src-tauri/src/core/model/relay.rs` | relay 领域模型 拆出 provider、draft、proxy、state、cluster、operation、diagnostic、test 和 snapshot 值对象，不依赖 Tauri 或前端对象。 |
| `src-tauri/src/contracts/relay.rs` | Rust DTO 与前端 TypeScript 类型对齐，覆盖 provider、state、proxy、router toggle、test、import/export、audit、diagnostic 和 fix payload。 |
| `src-tauri/src/repository/relay.rs` | repository 通过可替换 FS 读写 `relay-config.json`，恢复 provider CRUD、active provider、`blockOfficialPassthrough`、import/export、passthrough audit 读取、受管 router config 注入/移除和 diagnostic snapshot；不保存跨命令内存业务状态。 |
| `src-tauri/src/platform/relay.rs` | relay platform adapter 只封装 OS 环境代理候选和能力占位，不解释 relay 业务状态，也不发起真实网络或进程操作。 |
| `src-tauri/src/core/model/diagnostics.rs` | core model 只承载诊断只读值对象，没有写入无证据闭源业务字段。 |
| `src-tauri/src/repository/diagnostics.rs` | diagnostics repository 只从 repository paths 和 FS adapter 读取可验证路径事实，不触碰真实用户环境之外的隐式状态。 |

### relay_thread_migration 空操作 owner 边界

`relay_thread_migration` 的公开证据已经能定位到内部函数、leaf manifest、producer ledger 和 gate-report 段落，但这些材料描述的是闭源运行时迁移能力，不等同于当前公开仓库可以直接恢复真实业务。当前公开源码应只保留独立的 thread migration owner，并由 `set_codex_router_enabled` 消费该 owner 返回的空操作/待处理 payload；迁移 payload 不应内联在 relay usecase 主文件中。

该公开 owner 的唯一允许语义是：`migrated_count=0`、`rolled_back_count=0`、`skipped_count=0`、`manifest_path=None`，并保持 `thread_migration_exists=false`。它可以说明“当前没有执行公开运行时迁移”，不能执行或声明真实进程扫描、线程 patch、SQLite patch、session meta 替换、Codex 重启、relaunch 或真实运行时迁移。

因此，`scripts/validate-backend-relay-owner.mjs` 需要同时检查文档和后端源码：存在独立 thread migration owner；router toggle 不内联 migration payload；count 全为 0；`manifest_path` 为 `None`；`thread_migration_exists` 保持 `false`；relay 后端 owner 中不得出现 `std::process`、`Command::new`、`spawn`、process scan、SQLite patch、restart/relaunch 执行逻辑。若后端代码 worker 尚未落地该 owner，validator 应报告 FAIL，而不应扩大到 README 或 evidence 原件中记录流水账。

### relay test 错误语义

当前源码在 `src-tauri/src/core/relay.rs` 中恢复了 `needs_stream_retry`、`should_retry_relay_test` 和 `relay_test_error_message`。词表覆盖 `stream mode is required`、`stream must be true`、`must enable stream`、`streaming required`、`only stream`、`request failed`、`timeout`、`connection reset`、`connection refused`、`no response data` 和 `stream read failed`。

这只说明 relay test 的 mock terminal 错误语义已经由 core owning，并由 `src-tauri/src/application/usecase/relay/payload.rs` 消费到 payload/warning 文案；它不发起真实 HTTP，不执行真实 stream retry，也不启动代理进程。

### relay 状态读边界

`get_relay_active` 与 `get_relay_proxy_status` 只读取本地 `relay-config.json` 经 core 归一化后的 active/proxy snapshot。当前源码把 payload status 和 warning 都收口到 repository read 边界；未知 relay 命令不得通过 `BackendEffect::NoOp` fallback 伪装成 restored。这个状态读边界不启动代理进程、不探测真实网络端口、不恢复运行时健康检查，也不声明闭源 proxy lifecycle 已恢复。

## 未做内容

- 未恢复密钥系统、真实代理进程启动、真实网络请求、真实模型拉取、SSE 转换、真实线程迁移、运行时健康检查、keychain、安全凭据迁移和闭源代理转发。
- 未把 `relay_thread_migration` 内部 `readyToImplement` / `gate_accepted` / `implementation_use` 结论声明为公开源码 raw/internal gate 全闭合，也未恢复进程扫描、线程 patch、SQLite patch、session meta 替换、Codex 重启或运行时迁移。
- 未声明本地 `relay-config.json`、受管 `config.toml` router block、catalog 空文件和导入导出文件事务等公开 FS 能力等同于闭源 relay-core 全量业务恢复。
- 未声明 `needs_stream_retry` / `should_retry_relay_test` 已连接真实网络重试；当前只证明错误语义和 mock terminal payload 分类。
- 未把 Windows 证据直接推导为 macOS 行为，也未把 macOS 行为写成 Windows 通用事实。
- 未修改任何原始审计报告字段，也未新增用于关闭失败项的 JSON 字段。
- 未把当前源码的 skeleton payload 解释为真实业务恢复。
- 未触碰 README、前端语音入口、后端语音命令或 evidence 报告文件。

## 为什么严格门禁仍未闭合

前端 dumped 验收的对象是公开源码中的 route、module、service、DTO、cache、mock 和 locale owner；这些 owner 已经能证明“当前公开前端链条有位置、有类型、有缓存合同、有 mock 镜像”。

严格门禁的对象更大：它要求内部审计包中的后端 cluster 逐项闭合，包括副作用、平台差异、网络行为、代理转发、线程迁移、真实运行时和验收映射。当前 Rust relay usecase 已把公开可验证的本地配置事务标为 repository restored，并仍把真实网络、进程和流式代理保留为 pending/mock terminal。因此，当前分支只能说明“可验证 owner 已补齐到公开本地配置实现和骨架”，不能说明“闭源 relay-core 业务已经恢复”。

## 本分支可验证 owner 摘要

- 前端 route/module owner：`src/routes/desktop/main/relay/page.tsx` 到 `src/features/relay/Content.tsx`。
- 前端服务和 IPC owner：`src/services/relay/index.ts`、`src/features/relay/contract.ts`。
- 前端状态 owner：`src/features/relay/cache/index.ts`、`src/features/relay/hooks/query.ts`、`src/features/relay/hooks/mutation.ts`、`src/features/relay/hooks/runtime.ts`。
- 前端交互 owner：`src/features/relay/panels/`、`src/features/relay/dialogs/`。
- E2E mock owner：`src/mocks/fixtures/commands.ts`。
- 后端 command/usecase/contracts/core/repository/platform owner：`src-tauri/src/commands/relay.rs`、`src-tauri/src/application/usecase/relay.rs`、`src-tauri/src/application/usecase/relay/payload.rs`、`src-tauri/src/application/usecase/relay/provider.rs`、`src-tauri/src/application/usecase/relay/models.rs`、`src-tauri/src/application/usecase/relay/diagnostics.rs`、`src-tauri/src/application/ports.rs`、`src-tauri/src/contracts/relay.rs`、`src-tauri/src/core/relay.rs`、`src-tauri/src/core/relay/request_builder.rs`、`src-tauri/src/core/relay/router_config.rs`、`src-tauri/src/core/model/relay.rs`、`src-tauri/src/repository/relay.rs`、`src-tauri/src/platform/relay.rs`。
- 后端错误语义 owner：`src-tauri/src/core/relay.rs` owning relay test retry/stream retry 分类，`src-tauri/src/application/usecase/relay/payload.rs` 只消费 core 分类结果。

## 后续补证据建议

后续如果要推进真实业务恢复，应按 cluster 单独补证据和测试：先从 raw/internal 路径确认 DTO、错误语义、副作用和平台差异，再进入 contracts、application、repository、platform 或 adapter；最后用 E2E mock 覆盖 delayed、stale、failure、concurrency、cancel、abort 和 event replay。任何 cluster 在证据和测试未补齐前，都只应保留 skeleton 或明确的 pending 语义。
