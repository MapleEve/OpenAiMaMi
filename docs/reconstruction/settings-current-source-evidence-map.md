# settings current-source 证据映射

本文件只登记当前公开源码的 settings owner 边界，用于说明 settings 后端 current-source owner 如何落在命令适配、用例事务、仓储、领域模型、DTO 合同、API proxy 平台端口探针和平台动作委托上。它不恢复闭源业务，不作为 raw/internal gate、双平台 full leaf、闭源后端全量还原或运行时副作用恢复声明。

## 当前源码 owner

| 路径 | owner 边界 | 当前能力 |
| --- | --- | --- |
| `src-tauri/src/commands/settings.rs` | settings command adapter | 只做 Tauri 参数反序列化、`Repository` state 获取、平台 adapter 装配、`CoreEnvelope` 包装和 `usecase::settings` 调度；不写业务规则、文件事务或 UI 文案。 |
| `src-tauri/src/application/usecase/settings.rs` | settings usecase | owning settings 用户动作事务：API proxy 配置写入、API proxy test/detect payload 组装、使用量刷新间隔读取/写入、`UsageRefreshInterval` 解析、`settings_repository` 调度、`daemon_usecase::update_usage_refresh_schedule` 调度，以及 `platform_actions` 委托。 |
| `src-tauri/src/application/ports.rs` | API proxy 平台端口合同 | `ApiProxyPlatformPort` 只暴露 URL 规范化、环境代理候选和 TCP 探针结果；usecase 不直接读取环境变量或调用网络 API。 |
| `src-tauri/src/platform/proxy.rs` | API proxy platform adapter | owning `HTTPS_PROXY`、`HTTP_PROXY`、`ALL_PROXY` 及小写候选读取、URL scheme/host/port 规范化、去重和 200ms TCP connect probe；不读取账号私密值，不发起业务 HTTP 请求。 |
| `src-tauri/src/repository/settings.rs` | settings repository | owning `settings.json` 的 `load_app_settings`、`save_app_settings`、临时文件替换写入、`usage_refresh_interval` 持久化和字段级 helper；只通过 repository/FS adapter 读写公开设置文件。 |
| `src-tauri/src/core/model/settings.rs` | settings core model | owning `UsageRefreshInterval` 的 `parse`、`as_str`、默认值和错误语义，不依赖 Tauri、repository 或平台对象。 |
| `src-tauri/src/contracts/settings.rs` | settings contracts | owning `AppSettingsFile`、`ApiProxyMode`、`ApiProxyConfigPayload`、`ApiModePayload`、`ApiProxyTestPayload`、`ApiProxyDetectPayload` 等可序列化 DTO 和默认值。 |
| `src-tauri/src/application/usecase/platform_actions.rs` | platform_actions 委托边界 | settings 只委托 `check_update_installability` 和 `graceful_restart_for_update` 到平台端口 owner；不在 settings usecase 内扩展真实更新安装或重启动作。 |
| `src-tauri/src/lib.rs` | Tauri 注册表 | 注册 settings command adapter，使公开 IPC 表面指向 `commands::settings::*`，不回流到 `commands::system::*`。 |

## 命令与能力覆盖

| 命令 | 当前 owner | 说明 |
| --- | --- | --- |
| `set_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` | 写入 `AppSettingsFile.api_proxy`，返回 `ApiModePayload`；保存动作本身不触发探测。 |
| `test_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `application/ports.rs` -> `platform/proxy.rs` | `direct` 返回公开直连快速结果；`manual` 经平台端口校验 `http`、`https`、`socks5`、`socks5h`，解析 host/port 后执行 200ms TCP 探针；`ApiProxyTestPayload.status_code` 保持 `None`。 |
| `detect_api_proxy_config` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `application/ports.rs` -> `platform/proxy.rs` | 读取公开环境变量候选，去重，跳过 `localhost`、`127.0.0.1` 和 `::1`，按候选执行 200ms TCP 探针，命中后返回 `manual` proxy payload；不读凭据，不发起业务 HTTP 请求。 |
| `get_usage_refresh_interval` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` -> `core/model/settings.rs` | 读取 `settings.json` 并由 `UsageRefreshInterval` 解析。 |
| `set_usage_refresh_interval` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `repository/settings.rs` -> `daemon_usecase` | 写入 `usage_refresh_interval` 后调度公开 runtime schedule 更新；不声明真实 daemon watcher 全量恢复。 |
| `check_update_installability` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `platform_actions.rs` | 只委托平台端口读取安装可行性状态。 |
| `graceful_restart_for_update` | `commands/settings.rs` -> `application/usecase/settings.rs` -> `platform_actions.rs` | 委托 `platform_actions` / `AppProcessPort` 承载非阻塞 relaunch spawn；spawn 错误经 `Result` 返回；不实现 update install，不扩展 settings 业务逻辑。 |

## 不声明边界

- 不恢复闭源业务，也不把当前公开 settings owner 写成闭源 settings 后端完整还原。
- API proxy 真实探测只限平台端口的 200ms TCP 探针；不发起业务 HTTP 请求，不读取账号私密值，不声明 API 连通性或订阅接口探测完成。
- 不新增真实 update/restart 平台副作用；不实现 update install，不把 `graceful_restart_for_update` 提升为更新安装闭环；其公开边界是委托 `platform_actions` / `AppProcessPort` 承载非阻塞 relaunch spawn，不扩展 settings 业务逻辑，也不声明完整平台副作用验收。
- 不把 hotspot/mystery/notification/daemon 的 settings 字段 helper 扩大为对应业务 owner；这些字段在 `AppSettingsFile` 或 `repository/settings.rs` 中只表达 settings 持久化字段边界。
- 不处理 voice，不接 voice 命令、voice 空骨架、voice validator、前端入口或运行时链路。

## 验证入口

| 入口 | 作用 |
| --- | --- |
| `scripts/validate-backend-settings-owner.mjs` | 专名校验 settings command adapter、settings usecase、API proxy 平台端口、Tauri 注册、settings current-source evidence map、source-map 索引和 reconstruction README 索引。 |
| `npm run validate:backend-settings-owner` | package.json 暴露的 settings owner 专名验证入口。 |
| `scripts/validate-backend.mjs` | 后端聚合验证脚本，必须继续纳入 `validate-backend-settings-owner.mjs`。 |
| `npm run validate:backend` | 后端聚合验证入口，包含 settings owner validator。 |
