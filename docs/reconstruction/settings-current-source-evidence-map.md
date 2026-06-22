# settings current-source 证据映射

本文件只登记当前公开源码的 settings owner 边界，用于说明 settings 后端 current-source owner 如何落在命令适配、用例事务、仓储、领域模型、DTO 合同和平台动作委托上。它不恢复闭源业务，不作为 raw/internal gate、双平台 full leaf、闭源后端全量还原或运行时副作用恢复声明。

## 当前源码 owner

| 路径 | owner 边界 | 当前能力 |
| --- | --- | --- |
| `src-tauri/src/commands/settings.rs` | settings command adapter | 只做 Tauri 参数反序列化、`Repository` state 获取、平台 adapter 装配、`CoreEnvelope` 包装和 `usecase::settings` 调度；不写业务规则、文件事务或 UI 文案。 |
| `src-tauri/src/application/usecase/settings.rs` | settings usecase | owning settings 用户动作事务：API proxy 配置写入、API proxy 格式校验、使用量刷新间隔读取/写入、`UsageRefreshInterval` 解析、`settings_repository` 调度、`daemon_usecase::update_usage_refresh_schedule` 调度，以及 `platform_actions` 委托。 |
| `src-tauri/src/repository/settings.rs` | settings repository | owning `settings.json` 的 `load_app_settings`、`save_app_settings`、临时文件替换写入、`usage_refresh_interval` 持久化和字段级 helper；只通过 repository/FS adapter 读写公开设置文件。 |
| `src-tauri/src/core/model/settings.rs` | settings core model | owning `UsageRefreshInterval` 的 `parse`、`as_str`、默认值和错误语义，不依赖 Tauri、repository 或平台对象。 |
| `src-tauri/src/contracts/settings.rs` | settings contracts | owning `AppSettingsFile`、`ApiProxyMode`、`ApiProxyConfigPayload`、`ApiModePayload`、`ApiProxyTestPayload`、`ApiProxyDetectPayload` 等可序列化 DTO 和默认值。 |
| `src-tauri/src/application/usecase/platform_actions.rs` | platform_actions 委托边界 | settings 只委托 `check_update_installability` 和 `graceful_restart_for_update` 到平台端口 owner；不在 settings usecase 内扩展真实更新安装或重启动作。 |
| `src-tauri/src/lib.rs` | Tauri 注册表 | 注册 settings command adapter，使公开 IPC 表面指向 `commands::settings::*`，不回流到 `commands::system::*`。 |

## 命令与能力覆盖

| 命令 | 当前 owner | 说明 |
| --- | --- | --- |
| `set_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` | 写入 `AppSettingsFile.api_proxy`，返回 `ApiModePayload`；不触发真实网络探测。 |
| `test_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` | 只做公开后端的 API proxy test 格式校验，`ApiProxyTestPayload.status_code` 保持 `None`。 |
| `detect_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` | 返回当前公开源码中的无发现探测结果，不扫描系统代理或网络环境。 |
| `get_usage_refresh_interval` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` -> `core/model/settings.rs` | 读取 `settings.json` 并由 `UsageRefreshInterval` 解析。 |
| `set_usage_refresh_interval` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` -> `daemon_usecase` | 写入 `usage_refresh_interval` 后调度公开 runtime schedule 更新；不声明真实 daemon watcher 全量恢复。 |
| `check_update_installability` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `platform_actions.rs` | 只委托平台端口读取安装可行性状态。 |
| `graceful_restart_for_update` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `platform_actions.rs` | 只委托平台端口并返回公开 unsupported 状态；不新增真实 update/restart 平台副作用。 |

## 不声明边界

- 不恢复闭源业务，也不把当前公开 settings owner 写成闭源 settings 后端完整还原。
- 不把 API proxy test 写成真实网络探测；当前公开后端只校验代理模式和 URL 形态，不发起 HTTP、TCP 或系统代理扫描。
- 不新增真实 update/restart 平台副作用；`check_update_installability` 和 `graceful_restart_for_update` 的平台动作仍由 `platform_actions` 统一收口。
- 不把 hotspot/mystery/notification/daemon 的 settings 字段 helper 扩大为对应业务 owner；这些字段在 `AppSettingsFile` 或 `repository/settings.rs` 中只表达 settings 持久化字段边界。
- 不处理 voice，不接 voice 命令、voice 空骨架、voice validator、前端入口或运行时链路。

## 验证入口

| 入口 | 作用 |
| --- | --- |
| `scripts/validate-backend-settings-owner.mjs` | 专名校验 settings command adapter、settings usecase、Tauri 注册、settings current-source evidence map、source-map 索引和 reconstruction README 索引。 |
| `npm run validate:backend-settings-owner` | package.json 暴露的 settings owner 专名验证入口。 |
| `scripts/validate-backend.mjs` | 后端聚合验证脚本，必须继续纳入 `validate-backend-settings-owner.mjs`。 |
| `npm run validate:backend` | 后端聚合验证入口，包含 settings owner validator。 |
