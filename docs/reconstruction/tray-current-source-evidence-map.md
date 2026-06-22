# tray current-source 证据映射

## 目的

本文只记录当前公开源码中的后端 tray owner 骨架、Windows 1.0.9 accepted tray target，以及当前源码额外路径之间的映射。它不是原始审计报告的替代品，也不把真实原生托盘、macOS dim6 或真实运行闭合声明为已恢复。

当前后端提供 tray 六边形骨架和公开本地文件事实读取：command 层返回 envelope，usecase 层组织 repository、platform port 与 core，repository 层只读账号 registry、relay 配置和 quota-history 最新公开点位，core 层分类菜单事件并把公开事实映射为 quota/model，platform 层只暴露结构化 capability。这个结论只说明 owner 边界存在，不创建真实原生托盘，不设置真实菜单，不执行窗口 focus，不退出应用，不 emit navigate，不读取运行时 relay state、真实 provider runtime 或 quota runtime，不执行账号切换，也不做 native tray refresh。

## 已读取证据

| 证据路径 | 本文使用方式 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/gate-report.json` | 确认 Windows accepted tray target 只有 `create_tray_icon_window`、`create_or_refresh_tray_menu`、`handle_tray_menu_event`、`tray_relay_usage_quota_model`，并确认 `tray_router_open` 是 current-source extra。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/manifest.json` | 确认 Windows tray 证据独立于 macOS，且不得用 macOS 推导 Windows 行为。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/frontend/FRONTEND-FULL-CHAIN-109.md` | 作为前端 tray 链路、事件名和菜单事件映射的原始审计入口。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/logic/TRAY-WINDOWS-APP-OWNER-IDA-109.md` | 作为 Windows app owner、菜单创建、刷新和事件处理证据入口。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/pointers/evidence-paths.md` | 确认 Windows 原始证据入口和 IDA 证据路径。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-tray/gate-report.json` | 只作为 macOS tray reducer 状态记录；本文不声明 macOS dim6 已由当前源码闭合。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-tray/logic/TRAY-SIX-DIM-MIGRATION-109.md` | 确认 macOS tray 证据指向 system-shell-init reducer；不把该 reducer 写成当前后端 tray 原生实现。 |
| `docs/reconstruction/system-runtime-watchers-current-source-map.md` | 作为 current-source 文档格式参考：区分骨架 owner、真实行为和未恢复边界。 |
| `docs/reconstruction/system-hotspot-current-source-map.md` | 作为 current-source 文档格式参考：不把平台行为或 dim6 证据写成当前源码闭合。 |
| `src-tauri/src/commands/tray.rs` | 当前 command owner，只做 IPC 参数和 envelope 适配。 |
| `src-tauri/src/application/usecase/tray.rs` | 当前 usecase owner，组织 tray core 与 platform capability。 |
| `src-tauri/src/core/tray.rs` | 当前 core owner，分类 event id、返回空 quota model 和可验证菜单 key。 |
| `src-tauri/src/repository/tray.rs` | 当前 tray repository owner，聚合公开本地文件事实用于 quota model。 |
| `src-tauri/src/repository/quota.rs` | 当前 quota repository owner，为 tray 暴露不触发 compaction 写回的最新公开点位只读 helper。 |
| `src-tauri/src/platform/tray.rs` | 当前 platform owner，只返回 capability，不创建真实托盘资源。 |

## 目标分类

| 分类 | 目标 | 当前源码落点 | 当前结论 |
| --- | --- | --- | --- |
| Windows accepted tray target | `create_tray_icon_window` | `src-tauri/src/commands/tray.rs`、`src-tauri/src/application/usecase/tray.rs` | 后端有 command/usecase/platform skeleton，返回 `created: false`，不创建真实 icon window。 |
| Windows accepted tray target | `create_or_refresh_tray_menu` | `src-tauri/src/application/usecase/tray.rs`、`src-tauri/src/core/tray.rs` | 后端可生成空骨架菜单项 payload，不调用真实 menu builder，不做 native tray refresh。 |
| Windows accepted tray target | `handle_tray_menu_event` | `src-tauri/src/application/usecase/tray.rs`、`src-tauri/src/core/tray.rs` | 后端可分类 event id 并返回结构化 payload，不执行 focus、quit、navigate emit 或账号切换。 |
| Windows accepted tray target | `tray_relay_usage_quota_model` | `src-tauri/src/commands/tray.rs`、`src-tauri/src/application/usecase/tray.rs`、`src-tauri/src/repository/tray.rs`、`src-tauri/src/core/tray.rs` | 后端只读取公开本地文件事实：active account、active relay provider/model 和 quota-history 最新点位；不读取运行时 relay state、真实 provider runtime 或 quota runtime。 |
| current-source extra | `set_tray_locale` | `src-tauri/src/commands/tray.rs`、`src-tauri/src/application/usecase/tray.rs` | 当前源码保留 locale refresh 命令骨架，返回 `refreshed: false`，不重建真实 native tray 菜单。 |
| current-source extra | `tray_router_open` | `src-tauri/src/core/tray.rs`、`evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/gate-report.json` | 只作为当前源码 classifier extra 和 `source_archive_extra` 标记；不是 Windows 1.0.9 accepted menu item。 |

## 后端 owner 映射

| owner | 当前可验证内容 | 边界 |
| --- | --- | --- |
| `src-tauri/src/commands/tray.rs` | 五个 Tauri command 只构造 `TrayPlatformAdapter`、获取 `Repository` state、调用 tray usecase 并返回 `CoreEnvelope::ok`。 | command 层不写业务规则，不创建 `TrayIconBuilder`，不访问真实窗口、菜单、运行时 relay state 或账号切换状态。 |
| `src-tauri/src/application/usecase/tray.rs` | usecase 组织 repository、platform capability、core classifier、空菜单项和公开文件事实 quota model。 | usecase 层只做用户动作级编排，不执行真实 focus、quit、emit navigate、账号切换或 native refresh。 |
| `src-tauri/src/repository/tray.rs` | repository 聚合 active account、active relay provider/model 和 quota-history 最新公开点位。 | repository 只通过可替换 FS 读取公开文件事实，不读取运行时 relay state、provider runtime、quota runtime 或真实托盘对象。 |
| `src-tauri/src/core/tray.rs` | core owning `classify_tray_menu_event`、`quota_model_from_public_fact`、`empty_tray_quota_model` 和 `empty_menu_item_keys`。 | core 只表达 event id 到 payload 语义和公开事实到 quota model 的纯映射，不依赖 Tauri UI 对象、平台对象或 repository。 |
| `src-tauri/src/core/model/tray.rs` | model owning `TrayMenuEventDecision`、`TrayMenuEventKind`、`TrayMenuRefreshReason` 和 `TrayQuotaModel`。 | model 是纯值对象，不承载 native 句柄或运行时状态。 |
| `src-tauri/src/application/ports.rs` | `TrayPlatformPort` owning usecase 与 platform adapter 的窄端口。 | 端口只返回 capability，不暴露真实菜单、窗口或通知 API。 |
| `src-tauri/src/platform/tray.rs` | `TrayPlatformAdapter` 返回 `creates_native_icon: false` 与 `emits_navigation_event: false`。 | platform 层当前不创建真实托盘图标，不设置菜单，不发事件，不退出应用。 |

## 明确未恢复内容

- 不创建真实原生托盘。
- 不使用真实 `TrayIconBuilder`。
- 不设置真实菜单、图标、tooltip 或 title。
- 不执行窗口 focus。
- 不退出应用。
- 不 emit navigate。
- 不读取运行时 relay state、真实 provider runtime 或 quota runtime。
- 不把公开本地文件事实读取声明成闭源 tray、relay 或 quota runtime 恢复。
- 不执行账号切换。
- 不做 native tray refresh。
- 不声明 macOS dim6 已由当前源码闭合。
- 不声明真实运行闭合。
- 不把 `tray_router_open` 写成 Windows accepted tray target。
- 不修改 gate-report、manifest 或 raw/internal 审计事实。

## 验证入口

- `scripts/validate-backend-tray-owner.mjs` 验证后端 tray owner、Windows accepted tray target、current-source extra 和未恢复边界。
- `scripts/validate-frontend-tray-current-source.mjs` 验证前端 tray current-source 链路和 hidden shell 边界。
- `scripts/validate-backend-hexagonal.mjs` 验证后端命令 owner 与六边形结构。
- `scripts/validate-public-boundary.mjs` 验证公开边界。
