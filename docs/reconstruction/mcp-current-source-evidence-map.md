# MCP current-source 证据映射

## 目的

本文只记录当前公开源码中 MCP 后端四个命令的证据来源、六边形 owner 归属和当前可验证边界。它不是 raw/internal 审计报告的替代品，也不把当前仓库声明为已经恢复闭源后端全量业务。

本文覆盖的 IPC 命令：

- `load_mcp_servers`
- `upsert_mcp_server`
- `set_mcp_server_enabled`
- `remove_mcp_server`

## 证据来源

| 证据路径 | 本文使用方式 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-mcp/gate-report.json` | 确认 Windows 1.0.9 MCP 队列为 PASS，四个命令均 `readyToImplement=true`、`full_leaf_100=true`，线程模型均为同步 mutex/TOML 路径且 `no async/spawn`。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-mcp/gate-report.json` | 确认 macOS 1.0.9 MCP 队列具有相同四个命令和 gate 状态；本文不把平台差异推导为已实现的平台副作用。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/load_mcp_servers/manifest.json` | 确认 `load_mcp_servers` 的公开叶子证据只覆盖读取 `config.toml` 中 MCP server blocks、DTO 列表和 CoreEnvelope 成功/错误 envelope，不覆盖写入、网络或进程行为。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/upsert_mcp_server/manifest.json` | 确认 `upsert_mcp_server` 的公开叶子证据覆盖 name、transport/mode、command、args、url、headers、environment/open/path 字段，插入或替换 MCP server block，并持久写入 `config.toml`。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/set_mcp_server_enabled/manifest.json` | 确认 `set_mcp_server_enabled` 的公开叶子证据覆盖 name/enabled DTO、缺失时 not-found 语义、读取现有服务后切换 enabled 并持久写入 `config.toml`。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/remove_mcp_server/manifest.json` | 确认 `remove_mcp_server` 的公开叶子证据覆盖 name DTO、删除 MCP server block，并持久写入 `config.toml`。 |

## 当前源码 owner 归属

| owner | 当前源码路径 | 可验证归属 |
| --- | --- | --- |
| IPC 注册 | `src-tauri/src/lib.rs` | `tauri::generate_handler!` 注册 `commands::mcp::{load_mcp_servers,upsert_mcp_server,set_mcp_server_enabled,remove_mcp_server}`。 |
| command adapter | `src-tauri/src/commands/mcp.rs` | 只做 Tauri 参数反序列化、`State<Mutex<Repository>>` 获取、调用 usecase 和 `CoreEnvelope::ok` 封装。 |
| usecase | `src-tauri/src/application/usecase/mcp.rs` | 编排四个用户动作，校验服务名，把 repository 结果映射为 IPC payload 和 backend status；当前 status 使用 `BackendEffect::NoOp`，不声明运行时副作用。 |
| contracts | `src-tauri/src/contracts/mcp.rs` | 只声明 `McpServerSummary`、输入 DTO、列表 payload、mutation payload 和 remove payload，不读写 `config.toml`。 |
| repository | `src-tauri/src/repository/mcp.rs` | owning `config.toml` 路径安全、可替换 `FileSystemAdapter` 读写、临时文件写入和 rename 持久化；纯 TOML 解析、扫描和渲染委托给 core parser。 |
| core parser | `src-tauri/src/core/parser/mcp.rs` | owning `mcp_servers` TOML 语义解析、托管块扫描、注释保留替换、删除、渲染和渲染后 TOML 有效性校验。 |
| core model | `src-tauri/src/core/model/mcp.rs` | owning `McpServerTransport` 和 `McpServerConfig` 领域值对象，只表达 `mcp_servers` 表块字段。 |

## 四个命令的当前闭环

| 命令 | 公开证据边界 | 当前源码闭环 |
| --- | --- | --- |
| `load_mcp_servers` | 同步 mutex/TOML parse；读取 `config.toml` MCP server blocks；返回 name、transport、command、args、url、headers、environment、enabled 字段；不写入、不联网、不启动进程。 | command 调 `usecase::mcp::load_servers(&repo)`；usecase 调 `mcp::load_server_snapshot(repo)`；repository 校验 `CODEX_HOME/config.toml` 路径、读取文本并调用 `parse_mcp_servers_from_config`；core parser 解析 `[mcp_servers.*]` 表后映射到 payload。 |
| `upsert_mcp_server` | 同步 mutex/TOML parse-edit-save；插入或替换 MCP server block；持久写入 `config.toml`；成功返回 mutation payload。 | command 解码表单字段后调 `usecase::mcp::upsert_server`；usecase 合并输入并校验名称；repository 调 `upsert_mcp_server_config` 生成下一版文本，经 `write_string` 写临时文件并 `rename` 到 `config.toml`，再重新读取保存结果。 |
| `set_mcp_server_enabled` | 同步 mutex/load-find-upsert；基于 name 查找现有 MCP 服务；切换 enabled；持久写入 `config.toml`；缺失时返回 not-found 语义。 | command 调 `usecase::mcp::set_enabled`；usecase 校验名称；repository 先 `load_server_snapshot`，找到目标后复用 `upsert_server` 保存 enabled 变更并返回 mutation payload。 |
| `remove_mcp_server` | 同步 mutex/TOML remove-save；删除目标 MCP server block；持久写入 `config.toml`；成功返回 remove payload。 | command 调 `usecase::mcp::remove_server`；usecase 校验名称；repository 调 `remove_mcp_server_config` 删除托管块，写临时文件并 `rename`，再读取剩余总数。 |

## 已覆盖边界

- 当前源码覆盖 `src-tauri/src/lib.rs` IPC 注册和 command/usecase/contracts/repository/core parser/core model 六边形 owner。
- 当前源码覆盖 `config.toml` 逻辑路径安全：MCP repository 只允许仓库声明的 `CODEX_HOME/config.toml`。
- 当前源码覆盖可替换文件系统：repository 通过 `FileSystemAdapter` 执行 `exists`、`read_to_string`、`write_string` 和 `rename`，测试可使用 fake FS。
- 当前源码覆盖 `mcp_servers` TOML parse、insert、replace、remove、comment-preserving block scan 和 render fallback。
- 当前源码覆盖 DTO/envelope 字段：`McpServerSummary`、`McpServerConfigInput`、`McpServerListPayload`、`McpServerMutationPayload`、`McpServerRemovePayload`。
- 当前 validator 入口是 `npm run validate:backend-mcp-owner`，聚合入口是 `npm run validate:backend`。

## 未声明边界

- 不声明 MCP server 已启动、已执行或运行时集成完成。
- 不声明网络探测、HTTP/SSE 实际调用、WebSocket/SSE event loop 或远端健康检查。
- 不声明外部进程 spawn、stdio server 启动、子进程生命周期管理或 shell/no-console 行为。
- 不声明平台副作用；Windows/macOS gate-report 只用于确认命令叶子和 TOML 证据，不把平台操作写成当前 MCP 行为。
- 不声明 daemon/watchers、后台 reload、任务调度或运行时事件监听。
- 不声明 voice 集成；voice 保留为独立边界，不由 MCP 命令接线。
- 不声明闭源后端全量还原；本文只约束当前公开源码 evidence map 和 owner validator。

## validator 接入

`scripts/validate-backend-mcp-owner.mjs` 必须验证：

- 本文档存在，并列出上述 evidence、当前源码路径、四个命令、已覆盖边界和未声明边界。
- `docs/reconstruction/source-map.md` 索引本文档。
- Windows/macOS 两个平台 gate-report 存在，且 `module=mcp`、四个命令、gate 状态和 `full_leaf_100=true` 匹配。
- 四个 Windows raw manifest 存在，且命令、owner、threading model、terminal side effect class 和 gate 状态匹配当前实现范围。
- `src-tauri/src/lib.rs` 注册四个 MCP command。
- command/usecase/contracts/repository/core parser/core model 保持六边形 owner 边界，不出现 MCP server 启动、网络探测、HTTP/SSE 实际调用、外部进程 spawn、平台副作用、daemon/watchers 或 voice 集成。
