# system hotspot 当前源码证据映射

## 目的

本文只记录当前公开源码与 Windows/macOS 1.0.9 system hotspot 证据之间的映射，以及本分支允许补齐的后端六边形 hotspot 骨架位置。它不是原始审计报告的替代品，也不把 hotspot 标记为 strict gate 已闭合。

`get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready` 的当前 frontend chain 已由 `windows-1.0.9-system-hotspot/frontend-callchain-report.json` 记录为 `current-source-frontend-chain-closed-non-gating`。这个结论只说明公开源码里的 IPC contract、system/settings service、settings query/mutation/cache/page/panel、typed mock 和 mock validator 链路已经有 owner；strict gate 仍未闭合，原因仍是后端平台行为和 raw/internal dim6 证据未闭合。

## 已读取证据

| 证据路径 | 本文使用方式 |
| --- | --- |
| `docs/reconstruction/relay-core-current-source-evidence-map.md` | 作为 current-source 证据映射格式参考：先限定目的，再列证据、当前 owner、未恢复内容和验证口径。 |
| `docs/reconstruction/system-runtime-watchers-current-source-map.md` | 作为 system current-source 文档格式参考：区分前端链路闭合、后端骨架和 strict gate 状态。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 确认已有 `system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout`，该条目只登记非 gating 当前源码前端链路。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/frontend-callchain-report.json` | 确认三条 hotspot IPC 命令的当前 frontend chain 已闭合，但 `full_leaf=false`、`gate_report_fields_unchanged=true`、`backend_platform_evidence_required=true`。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json` | 确认 cluster 仍为 `gate_tier=strictImplementationUse`，`gate_accepted=false`，`implementation_use=false`，`dim6_missing=true`。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/manifest.json` | 确认 Windows 三条 leaf 已有 dim1-dim5 证据；`set_hotspot_enabled` 有 settings persist 和 post-write notify 证据，`hotspot_ready` 是运行时状态查询。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-hotspot/gate-report.json` | 确认 macOS bundle 的 `strictImplementationUse` 计数为 3，`dim6_mapping=null`。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-hotspot/manifest.json` | 确认 macOS 与 Windows 的 `hotspot_ready` 语义不同：macOS 是 window action，Windows 是 runtime state query。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-hotspot/data/producer-ledger.json` | 确认三条 macOS leaf 的 owner 地址和 strictImplementationUse 结论来源。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-hotspot/pointers/evidence-paths.md` | 确认 macOS raw evidence path、`create_hotspot_window`、`apply_native_hotspot_properties`、`set_window_alpha` 等证据入口。 |
| `src-tauri/src/commands/hotspot.rs`、`src-tauri/src/application/usecase/hotspot.rs` | 当前 Rust hotspot command/usecase 接线证据。 |
| `src-tauri/src/core/model/hotspot.rs`、`src-tauri/src/core/hotspot.rs` | 当前 hotspot core/model owner 证据：配置快照、平台能力、状态码和 pending/skeleton 领域结果。 |
| `src-tauri/src/repository/hotspot.rs`、`src-tauri/src/repository/settings.rs`、`src-tauri/src/contracts/system.rs` | 当前 hotspot repository snapshot、settings 持久化和 `hotspot_enabled` DTO 字段证据。 |
| `src-tauri/src/application/ports.rs`、`src-tauri/src/platform/hotspot.rs` | 当前 `HotspotPlatformPort` 端口和 hotspot platform capability adapter 证据。 |
| `src-tauri/src/commands/hotspot.rs`、`src-tauri/src/core/mod.rs`、`src-tauri/src/core/model/mod.rs`、`src-tauri/src/repository/mod.rs`、`src-tauri/src/commands/mod.rs`、`src-tauri/src/platform/mod.rs`、`src-tauri/src/lib.rs` | 当前 hotspot 边界文件、模块注册和 Tauri command 注册证据。 |

## 三条 hotspot 命令状态

| 命令 | 当前 frontend chain | gate 状态 | 当前公开源码结论 |
| --- | --- | --- | --- |
| `get_hotspot_enabled` | IPC contract、system service、settings facade、settings query、cache、page/panel 和 typed mock 已在 current-source report 中闭合。 | Windows gate-report: `strictImplementationUse`，dim1-dim5 done，dim6 missing，`gate_accepted=false`，`implementation_use=false`。macOS gate-report: strictImplementationUse 计数覆盖该 leaf，dim6 mapping 为空。 | Rust command 归属 `commands/hotspot.rs` 并调用 hotspot usecase；usecase 通过 hotspot repository 读取 settings snapshot，再交给 hotspot core 生成 `SettingsSnapshotReady` 结果。这是 settings snapshot 骨架，不是平台热点能力恢复。 |
| `set_hotspot_enabled` | IPC contract、system service、settings mutation、page action、panel toggle 和 typed mock 已在 current-source report 中闭合。 | Windows gate-report: `strictImplementationUse`，dim1-dim5 done，dim6 missing，`gate_accepted=false`，`implementation_use=false`；manifest 记录 settings persist 和 post-write notify 证据。macOS evidence path 指向真实窗口创建和 native 属性入口。 | Rust command 归属 `commands/hotspot.rs` 并调用 hotspot usecase；usecase 通过 hotspot repository 保存 `hotspot_enabled`，再由 hotspot core 返回 `SettingsSaved` 结果；没有创建真实热点窗口，没有设置 native props，也没有恢复 post-write notify。 |
| `hotspot_ready` | IPC contract、system/settings service、settings mutation、page action 和 typed mock 已在 current-source report 中闭合。 | Windows gate-report: `strictImplementationUse`，dim1-dim5 done，dim6 missing，`gate_accepted=false`，`implementation_use=false`。macOS manifest 记录它与 Windows 语义不同。 | Rust command 归属 `commands/hotspot.rs`，usecase 调用 `HotspotPlatformPort::hotspot_capability()`，再交给 hotspot core 返回 `PlatformCapabilitySkeleton` pending 结果。这只是 platform capability 骨架，不恢复 macOS window action，也不恢复 Windows runtime discriminant 检查。 |

## 当前源码 owner 映射

### 前端 owner

| owner | 当前可验证内容 | 边界 |
| --- | --- | --- |
| `src/contracts/ipc/commands.ts` | 登记 `get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready` IPC contract。 | 只说明公开前端知道这些命令。 |
| `src/services/system/index.ts`、`src/services/settings/index.ts` | system service 调用 Tauri IPC，settings service 作为 facade 暴露 hotspot 操作。 | 不声明后端平台实现。 |
| `src/features/settings/hooks/query.ts`、`src/features/settings/hooks/mutation.ts`、`src/features/settings/cache/index.ts` | query/mutation/cache owner 覆盖 hotspot enabled 查询、设置和 ready action。 | 不替代 raw/internal dim6。 |
| `src/features/settings/hooks/page.ts`、`src/features/settings/panels/appearance.tsx` | settings 页面消费 query/mutation 和 locale 文案，面板只发出用户意图。 | 不说明 macOS 或 Windows native 行为已恢复。 |
| `src/mocks/fixtures/commands.ts`、`scripts/validate-e2e-mocks.mjs` | typed mock 和 validator 覆盖三条 hotspot 命令。 | mock 只镜像当前公开前端合同。 |

### 后端 owner

| owner | 当前可验证内容 | 边界 |
| --- | --- | --- |
| `src-tauri/src/commands/hotspot.rs` | `has_notch`、`get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready` 只取得 repository 或 platform adapter，再调用 hotspot usecase。 | command 层不是业务 owner，也不直接访问 repository helper、core helper 或 settings 文件。 |
| `src-tauri/src/application/usecase/hotspot.rs` | `get_hotspot_enabled`、`set_hotspot_enabled` 组织 hotspot repository 和 hotspot core；`has_notch`、`hotspot_ready` 组织 `HotspotPlatformPort` 和 hotspot core。 | usecase 只做用户动作级事务编排和返回，不创建窗口、不设置 native props、不检查 runtime discriminant。 |
| `src-tauri/src/core/model/hotspot.rs` | `HotspotCommand`、`HotspotStatusCode`、`HotspotSettingsSnapshot`、`HotspotPlatformCapability` 和 `HotspotDomainResult` owning hotspot 领域模型和值对象。 | 纯模型不持有窗口、系统对象、平台端口或跨命令运行态。 |
| `src-tauri/src/application/ports.rs` | `HotspotPlatformPort` owning 应用层对 hotspot 平台能力的窄端口，返回 `HotspotPlatformCapability`。 | 端口只定义 usecase 与 platform adapter 的协作合同，不承载领域模型或真实平台实现。 |
| `src-tauri/src/core/hotspot.rs` | `get_hotspot_enabled`、`set_hotspot_enabled`、`hotspot_ready`、`has_notch` 生成 settings snapshot 或 platform capability 的 domain result。 | 只产出 pending/skeleton 或 settings snapshot 结果，不恢复平台行为。 |
| `src-tauri/src/repository/hotspot.rs` | `load_hotspot_settings_snapshot`、`save_hotspot_enabled` owning hotspot settings snapshot。 | 只处理可替换 FS 的 settings 读写，不保存跨命令平台状态。 |
| `src-tauri/src/repository/settings.rs` | 继续提供 settings 文件读写基础能力。 | 不直接承担 hotspot 领域结果。 |
| `src-tauri/src/contracts/system.rs` | `AppSettingsFile.hotspot_enabled` 承载当前 settings DTO 字段，默认值为 `false`。 | DTO 字段不等于真实平台能力。 |
| `src-tauri/src/platform/hotspot.rs` | `HotspotPlatformAdapter` 当前返回 unsupported skeleton capability，并明确只公开六边形架构骨架。 | 不恢复 macOS notch/window 行为，不恢复 Windows runtime state query。 |
| `src-tauri/src/core/mod.rs`、`src-tauri/src/core/model/mod.rs`、`src-tauri/src/repository/mod.rs`、`src-tauri/src/commands/mod.rs`、`src-tauri/src/platform/mod.rs`、`src-tauri/src/lib.rs` | 注册 `core::hotspot`、`core::model::hotspot`、`repository::hotspot`、`commands::hotspot`、`platform::hotspot` 和 `application::usecase::hotspot`，并在 Tauri handler 中注册 hotspot commands。 | 模块注册只说明 owner 位置存在，不关闭 gate-report。 |

## 本分支允许/目标包含的 Rust hotspot 骨架

本分支允许并包含 `src-tauri/src/core/model/hotspot.rs`、`src-tauri/src/core/hotspot.rs`、`src-tauri/src/repository/hotspot.rs`、`src-tauri/src/platform/hotspot.rs`、`src-tauri/src/application/usecase/hotspot.rs`、`src-tauri/src/commands/hotspot.rs` 接线和相关 mod 注册。Rust 只做 pending/skeleton 和 settings snapshot，不恢复平台副作用。

| 层 | 允许/目标 | 当前源码落点 | 不允许内容 |
| --- | --- | --- | --- |
| core/model | hotspot 相关状态落在纯值对象、状态码、DTO 转换和错误语义中；settings flag 与 IPC DTO 分开说明。 | `src-tauri/src/core/model/hotspot.rs`。 | 不依赖 Tauri UI，不读取文件，不调用平台 API。 |
| core hotspot | 纯 domain owner 表达 hotspot enabled、ready、unsupported、pending skeleton 等语义。 | `src-tauri/src/core/hotspot.rs`。 | 不把窗口创建、native props、runtime discriminant 或真实 platform query 写进 core。 |
| repository snapshot | 通过 repository owner 从可替换 FS 读取 settings snapshot，并更新 `hotspot_enabled` 字段。 | `src-tauri/src/repository/hotspot.rs`，底层复用 `src-tauri/src/repository/settings.rs`。 | 不保存跨命令内存状态，不把平台运行态伪装成 repository 事实。 |
| platform capability | 通过窄端口表达 notch/ready 探针和 unsupported 结果。 | `src-tauri/src/application/ports.rs`、`src-tauri/src/platform/hotspot.rs`。 | 不在 usecase 内直接调用 OS window、native props、runtime state 或外部进程。 |
| hotspot usecase 接线 | 用户动作由 hotspot usecase 组织 repository/platform/core owner，并由 hotspot command adapter 返回 envelope payload。 | `src-tauri/src/application/usecase/hotspot.rs`、`src-tauri/src/commands/hotspot.rs`。 | 不让 command 层 owning 业务规则，不绕过 repository 或 platform port。 |
| mod 注册 | hotspot 相关入口必须有清楚模块注册，避免隐式散落。 | `src-tauri/src/core/mod.rs`、`src-tauri/src/core/model/mod.rs`、`src-tauri/src/repository/mod.rs`、`src-tauri/src/commands/mod.rs`、`src-tauri/src/platform/mod.rs`、`src-tauri/src/lib.rs` 已提供当前边界注册。 | 不新增用于降低失败噪声的 gate 字段，不把注册当作验收通过。 |

## 明确未恢复内容

- 不创建真实热点窗口。
- 不设置 native props。
- 不恢复 macOS notch/window 行为。
- 不恢复 Windows runtime discriminant 检查。
- 不恢复 macOS `hotspot_ready` 的 window action 语义。
- 不恢复 Windows `set_hotspot_enabled` 的 post-write notify 行为。
- 不把 `HotspotPlatformAdapter` 的 `false` 返回解释为真实平台判断。
- 不关闭 gate-report，不修改 gate-report 字段，不新增用于关闭失败项的字段。
- 不声明 `implementation_use`、`gate_accepted`、`full_leaf` 或 `full_leaf_100` 已完成。
- 不把 current-source frontend chain 闭合解释为后端平台实现恢复。

## strict gate 状态

Windows `gate-report.json` 的当前字段保持为：`gate_tier=strictImplementationUse`、`gate_accepted=false`、`implementation_use=false`、`dim6_missing=true`。三条 leaf 的 `dims_done` 都是 dim1-dim5，`dim6` 都是 `missing`。

Windows `frontend-callchain-report.json` 的当前字段保持为：`status=current-source-frontend-chain-closed-non-gating`、`full_leaf=false`、`gate_report_fields_unchanged=true`、`backend_platform_evidence_required=true`。

macOS `gate-report.json` 的当前字段保持为：`strict_count=3`、`ready_count=0`、`dim6_mapping=null`。macOS `manifest.json` 还记录 `hotspot_ready` 与 Windows 语义不同，因此不能把一个平台的行为写成另一个平台的事实。

## 验证口径

本分支对 system hotspot 的可验收范围只包括当前源码证据映射和后端 owner 骨架说明：

- 本分支包含 Rust hotspot owner 骨架：`core/model/hotspot.rs`、`core/hotspot.rs`、`repository/hotspot.rs`、`platform/hotspot.rs`、`application/usecase/hotspot.rs`、`commands/hotspot.rs` 接线和相关 mod 注册。
- Rust hotspot 范围只做 pending/skeleton 和 settings snapshot。
- 不修改 voice、gate-report 或前端运行入口。
- 不新增 closeout JSON，不修改 manifest 或 gate-report 字段。
- 不关闭 strict gate，不声明 `implementation_use`、`gate_accepted`、`full_leaf` 或 `full_leaf_100` 已完成。
- Run `npm run validate:frontend-system-hotspot-current-source` to pin this map, the existing closeout, the open leaf queue boundary, and the current frontend service/mock/cache chain.
- 运行 `npm run validate:backend-hotspot-owner`。
- 运行 `npm run validate:frontend-closeouts`。
- 检查本文档不包含乱码字符。
