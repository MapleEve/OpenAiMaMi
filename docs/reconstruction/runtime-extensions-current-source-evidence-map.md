# runtime-extensions current-source 证据映射

## 目的

本文只记录当前公开源码中 runtime-extensions 后端四个命令的证据来源、六边形 owner 归属和当前可验证边界。它不是 raw/internal 审计报告的替代品，也不把当前仓库声明为已经恢复闭源后端全量业务。

本文覆盖的 IPC 命令：

- `list_plugins`
- `toggle_plugin`
- `get_plugin_config`
- `update_plugin_config`

## 证据来源

| 证据路径 | 本文使用方式 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-plugins/gate-report.json` | 确认 Windows 1.0.9 plugins 队列为 `accepted_full_leaf_100_ida_direct_plugins_13_of_13`，命令集合包含四个 IPC 命令、registry 方法、store 序列化和两个 builtin plugin info。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-plugins/gate-report.json` | 确认 macOS 1.0.9 plugins 队列具有相同 13 个叶子和 gate 状态；本文不把平台差异推导为已实现的平台副作用。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/plugins/list_plugins/manifest.json` | 确认 `list_plugins` 的公开叶子证据只覆盖 registry list、PluginEntry DTO 映射、CoreEnvelope ok list 和无持久写入。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/plugins/toggle_plugin/manifest.json` | 确认 `toggle_plugin` 的公开叶子证据覆盖 id/enabled 解码、`set_enabled`、store 保存和 CoreEnvelope ok enabled。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/plugins/get_plugin_config/manifest.json` | 确认 `get_plugin_config` 的公开叶子证据覆盖 id 解码、`get_config` 和 CoreEnvelope ok config。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/plugins/update_plugin_config/manifest.json` | 确认 `update_plugin_config` 的公开叶子证据覆盖 id/settings 解码、`update_settings`、store 保存和 CoreEnvelope ok bool/config 语义。 |

## 当前源码 owner 归属

| owner | 当前源码路径 | 可验证归属 |
| --- | --- | --- |
| IPC 注册 | `src-tauri/src/lib.rs` | `tauri::generate_handler!` 注册 `commands::runtime_extensions::{list_plugins,toggle_plugin,get_plugin_config,update_plugin_config}`。 |
| command adapter | `src-tauri/src/commands/runtime_extensions.rs` | 只做 Tauri 参数反序列化、`State<Mutex<Repository>>` 获取、调用 usecase 和 `CoreEnvelope::ok` 封装。 |
| usecase | `src-tauri/src/application/usecase/runtime_extensions.rs` | 编排 `list`、`toggle`、`config` 用户动作，把 repository 结果映射为 IPC payload 和 backend status；`list_plugins`、`toggle_plugin`、`update_plugin_config` 标记为 `RepositoryWrite`，`get_plugin_config` 标记为 `RepositoryRead`。 |
| contracts | `src-tauri/src/contracts/runtime_extensions.rs` | 只声明可序列化 payload 和 `RuntimeExtensionSettingsValue`，不读取或保存 `plugins.json`。 |
| repository | `src-tauri/src/repository/runtime_extensions.rs` | owning registry/store 文档结构、内建 plugin 列表、store merge、id 校验、读写、原子替换和 repository 层单元测试。 |
| repository paths | `src-tauri/src/repository/paths.rs` | owning `runtime_extensions_path = app_data_dir.join("plugins.json")` 的逻辑路径来源；不写入机器绝对路径。 |

## 四个命令的当前闭环

| 命令 | 公开证据边界 | 当前源码闭环 |
| --- | --- | --- |
| `list_plugins` | registry list、DTO 映射、返回 list，无持久业务副作用声明。 | command 调 `usecase::runtime_extensions::list(&repo)`；usecase 调 `runtime_extensions::list_plugins(repo)`；repository merge builtin 和 store 后返回 `RuntimeExtensionListPayload`，当前源码会保存合并后的 store，因此 backend status 标记为 `RepositoryWrite`。 |
| `toggle_plugin` | id/enabled 解码、`set_enabled`、save store、返回 enabled 状态。 | command 调 `toggle(&repo, id, enabled)`；usecase 调 `set_enabled`；repository 校验 id、修改 enabled、保存 `plugins.json` 并返回当前 plugin 与列表。 |
| `get_plugin_config` | id 解码、`get_config`、返回 config。 | command 调 `config(&repo, id, None)`；usecase 选择 `get_plugin_config` backend status 并标记 `RepositoryRead`；repository 读取合并后的 store 并返回 settings JSON。 |
| `update_plugin_config` | id/settings 解码、`update_settings`、save store。 | command 调 `config(&repo, id, Some(settings))`；usecase 选择 `update_plugin_config` backend status 并标记 `RepositoryWrite`；repository 更新 settings 后保存 `plugins.json`。 |

## 已覆盖边界

- 当前源码覆盖 command/usecase/contracts/repository 四层 owner，并通过 `src-tauri/src/lib.rs` 注册 IPC 表面。
- 当前源码覆盖 `plugins.json` 的逻辑路径、schema version、builtin registry、store merge、settings 透传、enabled/config 持久化和原子替换。
- 当前源码保留 raw 证据可支撑的 builtin plugin 字段：`web-tools`、`image-support`、category `0`、capability id、version、author、enabled 和 settings。
- 当前源码通过 repository 单元测试覆盖 store 缺失、map store、重复 id、schema version、空 id、toggle、config roundtrip、builtin 字段保护和 missing plugin。
- 当前 validator 入口是 `npm run validate:backend-runtime-extensions-owner`，聚合入口是 `npm run validate:backend`。

## 未声明边界

- 不声明动态插件加载；当前源码没有 `libloading`、`LoadLibrary`、`dlopen` 或动态库打开路径。
- 不声明外部插件执行；当前源码没有为 runtime-extensions 启动外部进程或执行插件代码。
- 不声明市场导入安装；当前源码没有 marketplace、下载、安装包导入或远端 registry 行为。
- 不声明真实 capability 执行；capabilities 只作为 registry/store 字段透传，不触发工具、网络、图片或系统能力。
- 不声明 voice 集成；voice 保留为独立边界，不由 runtime-extensions 命令接线。
- 不声明闭源后端全量还原；本文只约束当前公开源码 evidence map 和 owner validator。
- 不声明平台副作用；macOS/Windows gate-report 只用于确认命令叶子和 registry/store 证据，不把平台操作写成当前 runtime-extensions 行为。

## validator 接入

`scripts/validate-backend-runtime-extensions-owner.mjs` 必须验证：

- 本文档存在，并列出上述 evidence、当前源码路径、四个命令、已覆盖边界和未声明边界。
- 两个平台 gate-report 存在，且 `module=plugins`、`command_count=13`、`full_leaf_100=true`、`gate_accepted=true`。
- 四个 Windows raw manifest 存在，且命令、side effect class 和 gate 状态匹配当前实现范围。
- `src-tauri/src/lib.rs` 注册四个 runtime-extensions command。
- command/usecase/contracts/repository/paths 保持六边形 owner 边界，不出现动态加载、外部执行、voice 入口或平台副作用。
