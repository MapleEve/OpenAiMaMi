# mcp/skills current-source 证据映射

本文件收口 `mcp-servers`、`installed-skills` 两个 app-shell index query，以及 MCP / Skills 后端本地文件能力在当前公开源码中的 owner 映射。它只记录 current-source 事实，不修改 raw/internal gate-report，不把 manifest 状态从 `owner-closed` 提升为 `covered`，也不声明前端双平台 100% leaf、全业务 parity 或后端闭源行为已恢复。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 登记 `mcp-skills-index-query-owner-closed-chain`，只关闭 app-shell index query 的 owner-closed 队列项。 |
| `src/restoration/frontend-manifest/index.ts` | 记录 `mcp-servers` 归属 `src/features/mcp/cache/index.ts` / `src/features/mcp/hooks/query.ts`，`installed-skills` 归属 `src/features/skills/cache/index.ts` / `src/features/skills/hooks/query.ts`。 |
| `scripts/validate-frontend-dumped.mjs` | 验证 dumped index query 中 `mcp-servers` 与 `installed-skills` 仍保持 owner-closed 状态。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-mcp/gate-report.json` | Windows MCP 四条 IPC 的 gate-report 输入；本文不改写该报告。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-mcp/gate-report.json` | macOS MCP 四条 IPC 的 gate-report 输入；本文不把平台 gate 字段转写成当前公开仓库闭源 runtime 恢复声明。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/load_mcp_servers/manifest.json` | `load_mcp_servers` 的 raw manifest：读取 `config.toml` MCP server blocks、DTO 列表和 envelope，不覆盖写入、网络或进程行为。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/upsert_mcp_server/manifest.json` | `upsert_mcp_server` 的 raw manifest：插入或替换 MCP server block，并持久写入 `config.toml`。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/set_mcp_server_enabled/manifest.json` | `set_mcp_server_enabled` 的 raw manifest：按 name 查找并切换 enabled，缺失时返回 not-found 语义，并持久写入 `config.toml`。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/mcp/remove_mcp_server/manifest.json` | `remove_mcp_server` 的 raw manifest：删除 MCP server block，并持久写入 `config.toml`。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-skills/gate-report.json` | Windows Skills 六条 IPC 的 gate-report 输入；本文不改写该报告。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-skills/gate-report.json` | macOS Skills 六条 IPC 的 gate-report 输入；本文不把 gate 字段转写成动态 skill 执行恢复声明。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/skills/` | Windows Skills raw 命令证据目录。 |
| `evidence/full-chain/raw/aimami/1.0.9/macos/skills/` | macOS Skills raw 命令证据目录。 |

## 前端 index 当前源码链路

| query key | owner | 当前源码边界 |
| --- | --- | --- |
| `mcp-servers` | `src/features/mcp/cache/index.ts`、`src/features/mcp/hooks/query.ts`、`src/services/mcp/index.ts` | `mcpService.loadServers()` 调用 `load_mcp_servers`，query hook 通过 `writeMcpCachePayload` 写入 TanStack cache；overview 只消费摘要，不 owning 第二套 MCP 服务端事实。 |
| `installed-skills` | `src/features/skills/cache/index.ts`、`src/features/skills/hooks/query.ts`、`src/services/skills/index.ts` | `skillsService.loadInstalled()` 调用 `load_installed_skills`，query hook 通过 `writeSkillsCachePayload` 写入 TanStack cache；overview 只消费仪表盘摘要，不长期保存 skills 服务端事实。 |

## MCP current-source 证据映射

### 当前源码 owner 归属

| owner | 当前源码路径 | 可验证归属 |
| --- | --- | --- |
| IPC 注册 | `src-tauri/src/lib.rs` | `tauri::generate_handler!` 注册 `commands::mcp::{load_mcp_servers,upsert_mcp_server,set_mcp_server_enabled,remove_mcp_server}`。 |
| command adapter | `src-tauri/src/commands/mcp.rs` | 只做 Tauri 参数反序列化、`State<Mutex<Repository>>` 获取、调用 usecase 和 `CoreEnvelope::ok` 封装。 |
| usecase | `src-tauri/src/application/usecase/mcp.rs` | 编排四个用户动作，校验服务名，把 repository 结果映射为 IPC payload 和 backend status；当前 status 使用 `BackendEffect::RepositoryWrite` 表达 `config.toml` 写入或 bootstrap cache 写回，不声明运行时副作用。 |
| contracts | `src-tauri/src/contracts/mcp.rs` | 只声明 `McpServerSummary`、输入 DTO、列表 payload、mutation payload 和 remove payload，不读写 `config.toml`。 |
| repository | `src-tauri/src/repository/mcp.rs` | owning `config.toml` 路径安全、可替换 `FileSystemAdapter` 读写、临时文件写入和 rename 持久化；纯 TOML 解析、扫描和渲染委托给 core parser。 |
| core parser | `src-tauri/src/core/parser/mcp.rs` | owning `mcp_servers` TOML 语义解析、托管块扫描、comment-preserving block scan、替换、删除、渲染和渲染后 TOML 有效性校验。 |
| core model | `src-tauri/src/core/model/mcp.rs` | owning `McpServerTransport` 和 `McpServerConfig` 领域值对象，只表达 `mcp_servers` 表块字段。 |

### 四个命令的当前闭环

| 命令 | 当前本地文件能力 | 当前源码闭环 |
| --- | --- | --- |
| `load_mcp_servers` | 读取 `config.toml` 中的 `mcp_servers` blocks，返回 name、transport、command、args、url、headers、environment、enabled 字段。 | command 调 `usecase::mcp::load_servers(&repo)`；usecase 调 `mcp::load_server_snapshot(repo)` 并写回 bootstrap MCP cache；repository 校验 `CODEX_HOME/config.toml` 路径、读取文本并调用 `parse_mcp_servers_from_config`；core parser 解析 `[mcp_servers.*]` 表后映射到 payload。 |
| `upsert_mcp_server` | mutation 类命令；插入或替换 MCP server block，经 `write_string` 写临时文件并 `rename` 到 `config.toml`。 | command 解码平铺字段 `name`、`transport`、`enabled`、`config`、`command`、`args`、`url`、`headers`、`environment` 后调 `usecase::mcp::upsert_server`；usecase 合并输入并校验名称；repository 调 `upsert_mcp_server_config` 生成下一版文本，再重新读取保存结果。 |
| `set_mcp_server_enabled` | mutation 类命令；基于 name 查找现有 MCP 服务，切换 enabled 并持久写入 `config.toml`；缺失时返回 not-found 语义。 | command 调 `usecase::mcp::set_enabled`；usecase 校验名称；repository 先 `load_server_snapshot`，找到目标后复用 `upsert_server` 保存 enabled 变更并返回 mutation payload。 |
| `remove_mcp_server` | mutation 类命令；删除目标 MCP server block 并持久写入 `config.toml`。 | command 调 `usecase::mcp::remove_server`；usecase 校验名称；repository 调 `remove_mcp_server_config` 删除托管块，写临时文件并 `rename`，再读取剩余总数。 |

### 已覆盖边界

- 当前源码覆盖 `src-tauri/src/lib.rs` IPC 注册和 command/usecase/contracts/repository/core parser/core model 六边形 owner。
- 当前源码覆盖 `config.toml` 逻辑路径安全：MCP repository 只允许仓库声明的 `CODEX_HOME/config.toml`。
- 当前源码覆盖可替换文件系统：repository 通过 `FileSystemAdapter` 执行 `exists`、`read_to_string`、`write_string` 和 `rename`，测试可使用 fake FS。
- 当前源码覆盖 `mcp_servers` TOML parse、insert、replace、remove、comment-preserving block scan 和 render fallback。
- 当前源码覆盖 DTO/envelope 字段：`McpServerSummary`、`McpServerConfigInput`、`McpServerListPayload`、`McpServerMutationPayload`、`McpServerRemovePayload`。
- 当前源码覆盖 `upsert_mcp_server` 平铺请求 shape：前端 service 直接发送 `args`、`headers`、`environment`，后端 command 直接接收同名字段，不再包一层 `input`。

## skills 后端 current-source 证据映射

### 当前公开后端边界

| 命令 | 当前 owner | 当前公开本地文件能力 |
| --- | --- | --- |
| `load_installed_skills` | `src-tauri/src/commands/skills.rs` -> `src-tauri/src/application/usecase/skills.rs` -> `src-tauri/src/repository/skills.rs` | 扫描本地 skills 目录中的 `SKILL.md`，返回公开 summary，并写 bootstrap installed skills cache。 |
| `load_skill_backups` | `src-tauri/src/commands/skills.rs` -> `src-tauri/src/application/usecase/skills.rs` -> `src-tauri/src/repository/skills.rs` | 扫描技能备份目录，读取 `metadata.json` 和 staged skill 目录。 |
| `import_skill` | `src-tauri/src/application/usecase/skills.rs` owning 事务，`src-tauri/src/repository/skills.rs` owning 路径和文件操作 | mutation 类命令；解析导入源，判断同源导入，覆盖前备份旧目录，通过可替换 FS 复制技能目录并重新读取结果。 |
| `remove_skill` | `src-tauri/src/application/usecase/skills.rs` owning 事务，`src-tauri/src/repository/skills.rs` owning 备份和删除 | mutation 类命令；从已安装列表选择目标；目标存在时删除前备份、删除安装目录并重新扫描剩余数量；缺失 skill 目录返回成功 payload，`backup` 为 null，不创建备份、不执行删除。 |
| `restore_skill_backup` | `src-tauri/src/application/usecase/skills.rs` owning 事务，`src-tauri/src/repository/skills.rs` owning 备份解析和复制 | mutation 类命令；解析备份，覆盖前写 rollback 备份，复制 staged 目录到安装目录，再读取恢复后的技能 summary。 |
| `delete_skill_backup` | `src-tauri/src/application/usecase/skills.rs` owning 事务，`src-tauri/src/repository/skills.rs` owning 删除 | mutation 类命令；删除指定备份目录，再重新扫描备份数量。 |

### Skills 文件 owner

| owner | 当前源码路径 | 可验证归属 |
| --- | --- | --- |
| command adapter | `src-tauri/src/commands/skills.rs` | 只做参数反序列化、repository state 获取、usecase 调用和 `CoreEnvelope::ok` 封装。 |
| usecase | `src-tauri/src/application/usecase/skills.rs` | owning import/remove/restore/delete backup 用户动作事务，选择目标、组织备份、复制、删除和重新计数，但不直接读写文件。 |
| contracts | `src-tauri/src/contracts/skills.rs` | owning `InstalledSkillSummary`、`SkillBackupSummary` 和各命令 payload DTO。 |
| repository | `src-tauri/src/repository/skills.rs` | owning 扫描、路径解析、复制、备份、删除、metadata 读写和 DTO 组装的窄文件操作。 |
| path guard | `src-tauri/src/repository/path_guard.rs` | owning 单片段、相对路径、子路径、规范化和 containment 校验；文件副作用仍由 repository 经可替换 FS adapter 执行。 |

## 明确未声明

- 不声明 `MAC/WIN 100% leaf`。
- 不声明 `full_leaf_100` 由当前公开仓库完成；gate-report 中的字段只作为证据输入被 validator 核对。
- 不声明 `gate_accepted` 或 `implementation_use` 由本文完成。
- 不修改 raw/internal gate-report。
- 不把 manifest 状态从 `owner-closed` 提升成 `covered`。
- 不新增 UI、route、sidebar、header、tray 或 settings 入口。
- 不碰 `voice`。
- 不新增 `voice` 入口，不调用 `voice` command，不把 mcp/skills 行为挂到 voice。
- 不声明 voice 集成；voice 保留为独立边界。
- 不声明 mcp/skills 全业务 parity。
- 不声明后端闭源 runtime、network、process、daemon 或 platform 行为恢复。
- non-claim：不执行 skill、不启动 MCP server、不做网络、进程、daemon、platform 或 voice 能力。
- 不声明 MCP server 已启动、已执行或运行时集成完成。
- 不声明网络探测、HTTP/SSE 实际调用、WebSocket/SSE event loop 或远端健康检查。
- 不声明外部进程 spawn、stdio server 启动、子进程生命周期管理或 shell/no-console 行为。
- 不声明平台副作用；Windows/macOS gate-report 只用于确认命令叶子和本地文件证据，不把平台操作写成当前 MCP 或 Skills 行为。
- 不声明 daemon/watchers、后台 reload、任务调度或运行时事件监听。
- 不声明执行 skill、动态插件运行、市场安装、网络下载、外部进程、daemon watcher 或平台副作用已经恢复。
- 不声明闭源后端全量还原；本文只约束当前公开源码 evidence map 和 owner validator。

## validator 接入

- `scripts/validate-frontend-mcp-skills-current-source.mjs` 必须验证本文被 `docs/reconstruction/frontend-current-source-closeouts.json`、`docs/reconstruction/source-map.md` 和 `docs/reconstruction/README.md` 索引，且 `mcp-servers` 与 `installed-skills` 仍是 `owner-closed`。
- `scripts/validate-backend-mcp-owner.mjs` 必须验证本文覆盖 MCP 四条 IPC、双平台 gate-report、Windows raw manifest、源码 owner、`RepositoryWrite` backend status、`upsert_mcp_server` 平铺请求 shape 和未声明 runtime/network/process/platform/daemon/voice 边界。
- `scripts/validate-backend-skills-owner.mjs` 必须验证本文覆盖 Skills 六条 IPC、双平台 gate-report、raw skills 证据目录、command/usecase/contracts/repository/path_guard owner、source-map 索引和 reconstruction README 索引。
- `npm run validate:backend-mcp-owner`、`npm run validate:backend-skills-owner` 和 `npm run validate:backend` 是本收口的后端验证入口。
