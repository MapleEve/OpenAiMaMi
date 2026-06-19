# system runtime watcher 当前源码证据映射

## 目的

本文只记录当前公开源码与 macOS 1.0.9 system runtime watcher / schedule 信号之间的证据映射。它不是原始审计报告的替代品，也不把 watcher、schedule、condvar、后台线程或 runtime event 标记为严格门禁已闭合。

当前源码已经补齐后端六边形 watcher 骨架：usecase 读取 repository snapshot，调用 runtime core，读取 platform capability，并返回 pending skeleton status。这个结论只说明后端 owner 边界存在；不声明真实闭源行为已经恢复。

## 已读取证据

| 证据路径 | 本文使用方式 |
| --- | --- |
| `docs/reconstruction/frontend-backend-skeleton.md` | 确认后端只做六边形骨架，未证实业务不得写成真实实现。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 确认 current-source closeout 只能登记当前源码链路和已知残留，不能修改 gate-report。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json` | 确认 5 个 watcher / schedule 信号属于 product decision start mode，仍不是 readyToImplement。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/frontend-callchain-report.json` | 记录当前源码后端 watcher 骨架 sidecar，并保持 gate-report 字段不变。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/logic/USAGE-CLUSTER-DISTILLED-109.md` | 确认真实行为涉及 usage API、fs 持久化、runtime event、interval 校验和 watcher wakeup 差异。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/logic/SYSTEM-FULLCHAIN-109.md` | 确认 5 个 watcher / schedule 信号只是产品决策本地边界，不宣称 upstream strict parity。 |
| `src-tauri/src/application/usecase/daemon.rs` | 当前 watcher usecase 组织 repository snapshot、runtime core 和 runtime platform port；system/settings 只通过命令用例转入该边界。 |
| `src-tauri/src/core/runtime.rs` | 当前 runtime core owning 5 个 watcher / schedule 信号的 pending skeleton 决策。 |
| `src-tauri/src/core/model/runtime.rs` | 当前 runtime model owning signal、operation key、status code、snapshot、platform capability 和 decision。 |
| `src-tauri/src/repository/runtime.rs` | 当前 repository 只从 settings 文件重建 watcher snapshot，不保存跨命令业务状态。 |
| `src-tauri/src/platform/runtime.rs` | 当前 platform adapter 只返回结构化 capability，不创建真实线程、事件或用户环境副作用。 |
| `src/app/runtime/events.ts` | 当前前端只标准化 runtime event payload、维护 sequence cursor，并把 settings schedule reload 委托给模块 cache helper。 |
| `src/features/settings/cache/index.ts` | 当前 settings cache helper owning usage schedule runtime event target，不让 runtime initializer 直写 settings 裸 query key。 |
| `src-tauri/src/contracts/backend_skeleton.rs` | `RuntimeBridgeEventPayload` 只作为 skeleton DTO 暴露 `type/moduleId/mode/sequence/receivedAt/command/signal/operationKey/statusCode/scheduleIntervalSeconds/scheduleSource/platformEffect`，不代表真实 watcher broadcast 已恢复。 |

## 5 个 watcher / schedule 信号

| 信号 | 当前源码状态 | 仍未恢复内容 |
| --- | --- | --- |
| `note_usage_refresh_activity` | `application/usecase/daemon.rs` 调用 `runtime_core::note_usage_refresh_activity`，返回 pending skeleton status。 | 不记录真实活跃时间，不通知真实 condvar，不触发 runtime refresh。 |
| `schedule_full_runtime_refresh` | `refresh_usage_snapshot` 和 usecase helper 能进入 `runtime_core::schedule_full_runtime_refresh`。 | 不发起真实网络刷新，不写 runtime snapshot，不广播 runtime event。 |
| `start_auto_switch_pending_watcher` | `run_daemon_once` 和 usecase helper 能进入 `runtime_core::start_auto_switch_pending_watcher`。 | 不创建后台线程，不读取闭源队列，不触发账号切换。 |
| `start_usage_refresh_watcher` | usecase helper 能进入 `runtime_core::start_usage_refresh_watcher`。 | 不创建后台线程，不轮询接口，不写用户环境。 |
| `update_usage_refresh_schedule` | `set_usage_refresh_interval` 保存 interval 后尝试进入 `RuntimeWatcherSignal::UpdateUsageRefreshSchedule`。 | 不通知真实条件变量，不恢复 upstream schedule wakeup。 |

## 当前源码 owner 映射

| owner | 当前可验证内容 | watcher 结论 |
| --- | --- | --- |
| `src-tauri/src/application/usecase/daemon.rs` | 组织 `runtime_repository::load_runtime_watcher_snapshot`、`RuntimePlatformPort` 和 `runtime_core::*`。 | usecase 边界存在，但只返回 pending skeleton status。 |
| `src-tauri/src/core/model/runtime.rs` | 定义 `RuntimeWatcherSignal`、`RuntimeWatcherOperationKey`、`RuntimeWatcherStatusCode`、`RuntimeWatcherSnapshot`、`RuntimeWatcherDecision`。 | 领域模型存在，但不持有线程或平台对象。 |
| `src-tauri/src/core/runtime.rs` | 为 5 个信号生成结构化 decision 和中文 pending note。 | core 只表达状态机语义，不启动真实 watcher。 |
| `src-tauri/src/repository/runtime.rs` | 从 settings repository 重建 interval、auto-switch enabled 和 settings path。 | repository 只持有可重建文件事实，不保存跨命令业务状态。 |
| `src-tauri/src/platform/runtime.rs` | 返回 condvar/thread/schedule notify/event/user-environment capability。 | platform 只返回结构化能力结果，不创建真实资源。 |
| `src/app/runtime/events.ts` | `settings` module reload 保留 `command/statusCode/sequence/receivedAt`，旧 sequence 被 runtime event cursor 拒绝。 | 前端只消费已到达的 event envelope，不声明后端真实广播已恢复。 |
| `src/features/settings/cache/index.ts` | `applySettingsRuntimeEventToCache` 只失效 usage schedule 相关 cache target。 | usage schedule reload 经模块 cache helper 消费，不越过 settings owner。 |

## 前端 usage schedule 事件消费补充

- `update_usage_refresh_schedule` 在当前后端骨架中只会生成 `moduleId=settings`、`mode=active-only` 的 runtime event envelope；这仍不是后台 watcher、condvar 或真实 schedule wakeup。
- 后端 `RuntimeBridgeEventPayload` 额外保留 `signal`、`operationKey`、`statusCode`、`scheduleIntervalSeconds`、`scheduleSource` 和 `platformEffect`，用于说明 watcher skeleton 决策来源；前端 `BackendRuntimeEventPayload` 仅同步 DTO shape 并消费 `command/statusCode`，不据此声明真实事件广播。
- 前端 `RuntimeInitializer` 只负责订阅并把 payload 交给 `applyRuntimeEventToQueryCache`，不保存业务状态。
- `src/app/runtime/events.ts` 对旧 `sequence` 的事件重放直接返回；被接受的 settings reload 再委托 `src/features/settings/cache/index.ts` 的 `applySettingsRuntimeEventToCache`。
- `applySettingsRuntimeEventToCache` 只声明并失效 `SettingsCache.queryKeys.root` 与 `SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY`，后续重新读取仍必须经过 `runSettingsQuery` 的 sequence 与 mutation fence。
- 该前端闭环只提高 current-source 可审计性，不把 runtime event、后台线程、平台 watcher 或真实 usage schedule 行为标记为已恢复。

## 明确未恢复内容

- 不启动真实 watcher。
- 不创建后台线程。
- 不发 `Condvar::notify_all` 或等价 wakeup。
- 不做真实 usage API 刷新，不调用远端 quota。
- 不广播真实 runtime snapshot event。
- 不恢复 `persist_progressive_state`、`store_bootstrap_snapshot_progressive` 或 quota store 写入。
- 不把 `set_usage_refresh_interval` 写成真实 schedule wakeup。
- 不把 pending auto-switch watcher 写成真实监听器。
- 不修改或关闭 gate-report，不新增用于降低失败噪声的 gate-report 字段。
- 不把 macOS 证据推导为 Windows 行为，也不把当前公开源码骨架写成 1.0.9 upstream strict parity。

## strict gate 状态

当前源码可证明 5 个 watcher / schedule 信号已经有后端六边形骨架 owner，因此可以把对应 `readyToImplement=false` 登记为 current-source partial closeout 的已知残留。

这不表示 strict gate 已通过。以下内容仍需要 raw/internal 证据或后端平台真实实现继续补齐：

- watcher / schedule 信号的真实合同。
- runtime watcher 的线程、condvar 或等价调度机制。
- usage-only runtime snapshot 的真实 HTTP、fs 持久化、quota store 和 runtime event 行为。
- pending auto-switch watcher 的平台或 repository 事实来源。
- raw/internal dim6 验收和平台范围确认。

## 验证口径

- 允许更新 current-source sidecar 和 closeout JSON，登记 5 个 `readyToImplement=false` 残留。
- 不允许登记 `implementation_use`、`gate_accepted`、`full_leaf_100`、dim6 或聚合门。
- README 只保持归纳状态摘要；不修改 voice、gate-report 或 raw 审计事实。
- Rust 只做 pending skeleton，不启动真实 watcher、线程、condvar、网络或外部进程。
- `scripts/validate-backend-daemon-owner.mjs` 直接约束 `RuntimeBridgeEventPayload` 新字段、`runtime_bridge_event` 字段组装，以及 `usage_activity_records_timestamp_and_notify_sequence`、`full_refresh_uses_eight_second_debounce`、`start_usage_watcher_is_guarded`、`schedule_update_tracks_settings_interval_and_sequence` runtime test 断言。
- 需要通过 `npm run validate:frontend-closeouts`、`npm run validate:backend-hexagonal`、`npm run validate:public-boundary`。
- strict leaf-copy 仍按剩余 gate 失败，不作为本分支伪关闭依据。
