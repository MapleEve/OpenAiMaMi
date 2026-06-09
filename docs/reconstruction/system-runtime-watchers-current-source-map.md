# system runtime watcher 当前源码证据映射

## 目的

本文只记录当前公开源码与 macOS 1.0.9 system runtime watcher / schedule 信号之间的证据映射，以及本分支允许补齐的后端六边形 watcher 骨架位置。它不是原始审计报告的替代品，也不把 watcher 或 schedule 标记为严格门禁已闭合。

前端 dumped、service、mock、locale 和 current-source closeout 验证已经覆盖公开前端链路，说明前端入口、服务门面、缓存、mock 和文案层具备可验证 owner。strict gate 仍需要后端真实行为、平台副作用和 raw/internal 证据链闭合；当前公开源码只允许补后端 owner 骨架和待恢复标记，不恢复无证据的闭源行为。

## 已读取证据

| 证据路径 | 本文使用方式 |
| --- | --- |
| `docs/reconstruction/relay-core-current-source-evidence-map.md` | 作为 current-source 证据映射文档格式参考：先说明目的，再列证据、当前源码 owner、未做内容和验证口径。 |
| `docs/reconstruction/frontend-backend-skeleton.md` | 确认后端只做六边形骨架，未证实业务不得写成真实实现。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 确认当前公开前端链路已有 system usage / bootstrap system 相关非 gating closeout，但它不声明后端平台实现或 strict gate 已闭合。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json` | 确认 5 个 watcher / schedule 信号属于 product decision start mode，且不属于 strictImplementationUse 或 readyToImplement。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/frontend-callchain-report.json` | 确认当前公开源码未定位到 5 个 watcher / schedule 信号，sidecar 只登记缺口并保持 gate-report 字段不变。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/logic/USAGE-CLUSTER-DISTILLED-109.md` | 用于确认 `refresh_usage_snapshot`、`get_usage_refresh_interval`、`set_usage_refresh_interval` 的真实证据：usage API、fs 持久化、runtime event、interval 校验和 watcher wakeup 差异。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system/logic/SYSTEM-FULLCHAIN-109.md` | 用于确认 5 个 watcher / schedule 信号只是产品决策本地边界，不宣称 upstream strict parity。 |
| `src-tauri/src/commands/system.rs` | 当前 Tauri command adapter 证据：system 命令只锁 repository、调用 usecase、返回 envelope。 |
| `src-tauri/src/application/usecase/system.rs` | 当前 application usecase 证据：usage refresh 返回 pending 骨架，interval 只解析并持久化，不唤醒 watcher。 |
| `src-tauri/src/core/model/settings.rs` | 当前 core/model 证据：`UsageRefreshInterval` owning 4 个合法 interval 值和解析错误。 |
| `src-tauri/src/repository/settings.rs` | 当前 repository 证据：settings 仓储 owning settings.json 读写和 usage interval 字段级更新。 |
| `src-tauri/src/platform/system.rs`、`src-tauri/src/application/ports.rs` | 当前 platform capability 证据：系统能力通过窄端口暴露，只返回结构化系统信息或 unsupported 结果。 |

## 5 个 watcher / schedule 信号

| 信号 | 证据含义 | 当前源码状态 |
| --- | --- | --- |
| `note_usage_refresh_activity` | 记录用户活跃，供 usage refresh 调度判断是否需要唤醒或延后。USAGE 证据还指出它与 interval 更新共享 watcher wakeup 机制。 | 当前公开源码未定位到该信号；不能声明已有活跃记录、共享 condvar 或 wakeup 行为。 |
| `schedule_full_runtime_refresh` | 调度一次全量 runtime refresh，用于把运行时快照刷新请求交给后端调度层。 | 当前公开源码未定位到该信号；`load_snapshot` 只从 repository / settings 构造公开骨架。 |
| `start_auto_switch_pending_watcher` | 启动自动切换 pending 状态 watcher，用于观察待确认账号切换状态。 | 当前公开源码未定位到该信号；`load_pending_auto_switch`、confirm、dismiss 只保留 IPC/usecase 骨架。 |
| `start_usage_refresh_watcher` | 启动 usage 刷新 watcher，用于按 interval 和活动状态触发 usage-only runtime snapshot 刷新。 | 当前公开源码未定位到该信号；`refresh_usage_snapshot` 只返回 pending backend status，不做真实刷新循环。 |
| `update_usage_refresh_schedule` | 在 interval 修改后更新 usage refresh 调度配置；USAGE 证据中的真实行为包含写入当前秒数并通知 watcher。 | 当前公开源码未定位到该信号；`set_usage_refresh_interval` 只校验和保存 interval 字符串，不发 watcher 通知。 |

## 当前源码 owner 映射

### 已有后端边界

| owner | 当前可验证内容 | watcher 结论 |
| --- | --- | --- |
| `src-tauri/src/commands/system.rs` | `refresh_usage_snapshot`、`get_usage_refresh_interval`、`set_usage_refresh_interval`、pending auto-switch 相关 command 已注册并调用 usecase。 | command adapter 边界已存在，但 5 个 watcher / schedule 信号没有当前公开源码入口。 |
| `src-tauri/src/application/usecase/system.rs` | `refresh_usage_snapshot` 调用 `load_snapshot` 后返回 pending backend status；`get_usage_refresh_interval` 和 `set_usage_refresh_interval` 通过 settings repository 读写 interval。 | usecase 接线已有最小骨架，但没有启动 watcher、线程、调度循环或 runtime event broadcast。 |
| `src-tauri/src/core/model/settings.rs` | `UsageRefreshInterval` 支持 `"30s"`、`"1m"`、`"3m"`、`"5m"`，非法值映射 `CoreError::InvalidInput`。 | core/model 已覆盖 interval 值对象；尚未覆盖 watcher state、activity marker、schedule request 或 runtime refresh intent。 |
| `src-tauri/src/repository/settings.rs` | settings repository 通过可替换 FS 读取、保存 settings.json，并更新 `usage_refresh_interval` 字段。 | repository 已覆盖 interval 持久化；尚未提供 runtime watcher snapshot 或 activity/schedule snapshot owner。 |
| `src-tauri/src/platform/system.rs`、`src-tauri/src/application/ports.rs` | 平台系统能力通过 `AppSystemPort` 返回系统信息、可执行路径和 unsupported config reset。 | platform capability 只表达结构化能力；尚未暴露 watcher wakeup、后台调度、线程或 condvar 能力。 |
| `src-tauri/src/contracts/system.rs` | `CoreSnapshotPayload`、`AppStatusPayload`、`BackendSkeletonStatus`、`PendingAutoSwitchStatePayload`、usage interval settings 字段已存在。 | DTO 可承载当前 pending 骨架；不表示真实 runtime watcher 合同已经恢复。 |

### 本分支允许补齐的 watcher 骨架

| 层 | owner 方向 | 允许内容 | 不允许内容 |
| --- | --- | --- | --- |
| core/model | 在 core model 中放 watcher 值对象，例如 activity marker、schedule intent、interval seconds、watcher status code。 | 只做解析、状态枚举、错误语义和 DTO 转换需要的纯模型。 | 不依赖 Tauri，不读写文件，不调用平台，不发网络请求。 |
| core runtime | 增加无 UI、无平台副作用的 runtime watcher core 边界，用于表达 `note`、`schedule`、`start`、`update` 这类动作的领域语义。 | 返回结构化 pending / unsupported / no-op 结果，记录需要补证据的位置。 | 不启动真实 watcher，不创建线程，不持有跨命令全局业务状态。 |
| repository snapshot | 增加只读或可替换 FS 的 runtime watcher snapshot owner。 | 读取 settings、bootstrap cache 或公开 runtime skeleton snapshot，并说明文件来源和失效规则。 | 不写真实用户环境外的隐式状态，不把内存 watcher 状态伪装成 repository 事实。 |
| platform capability | 通过 application port 表达平台可用性和能力探针。 | 返回结构化 capability code、available、detail。 | 不直接在 usecase 中调用 OS 线程、condvar、daemon runner、外部进程或通知。 |
| usecase 接线 | system usecase 组织 core/model、repository snapshot、platform capability，再返回 envelope payload。 | 校验输入、组合 owner、返回 pending skeleton 和明确未恢复原因。 | 不把 command 层做成业务 owner，不在 usecase 内启动后台循环或真实 usage API 刷新。 |

## 明确未恢复内容

- 不启动真实 watcher。
- 不创建线程。
- 不发 `Condvar::notify_all` 或等价 condvar 唤醒。
- 不做真实 usage API 刷新，不调用 `fetch_usage_snapshot`，不刷新远端 quota。
- 不广播真实 runtime snapshot event。
- 不恢复 `persist_progressive_state`、`store_bootstrap_snapshot_progressive` 或 quota store 写入。
- 不把 `set_usage_refresh_interval` 写成真实 schedule wakeup；当前只保留 interval 解析和 settings 持久化。
- 不把 pending auto-switch watcher 写成真实监听器；当前 pending confirm / dismiss 仍是公开骨架。
- 不修改或关闭 gate-report，不新增用于降低失败噪声的字段。
- 不把 macOS 证据推导为 Windows 行为，也不把当前公开源码骨架写成 1.0.9 upstream strict parity。

## 前端链路与 strict gate 状态

当前公开前端 dumped、service、typed mock、locale 和 current-source closeout 校验已经覆盖 system usage、bootstrap system 与 daemon-autoswitch 的前端链路。这个结论只说明前端文件、IPC 名称、服务门面、cache helper、mock 和文案 key 已有当前源码证据。

strict gate 仍需后端/平台/证据链继续补齐，至少包括：

- watcher / schedule 信号在后端六边形 owner 中的真实合同。
- runtime watcher 的线程、condvar 或等价调度机制的证据。
- usage-only runtime snapshot 的真实 HTTP、fs 持久化、quota store 和 runtime event 行为。
- pending auto-switch watcher 的平台或 repository 事实来源。
- raw/internal dim6 验收和平台范围确认。

## 验证口径

本分支的通过条件按当前真实变更范围验收：

- 本分支允许并已包含 Rust runtime owner 骨架：`core/model/runtime.rs`、`core/runtime.rs`、`repository/runtime.rs`、`platform/runtime.rs`、`application/usecase/system.rs` 接线和相关 mod 注册。
- 不修改 README、voice、gate-report、前端或验证脚本。
- 不新增 closeout JSON，不修改任何 gate-report 字段。
- Rust 只做 pending/skeleton，不启动真实 watcher、线程、condvar、网络或外部进程。
- 需要通过 `cargo fmt --manifest-path src-tauri/Cargo.toml --check`、`npm run validate:backend-hexagonal`、`npm run validate:frontend-closeouts`。
- strict leaf-copy 仍按原 gate 失败，不作为本分支伪关闭依据。
- 文档不包含 mojibake 字符或禁止公开标识。
