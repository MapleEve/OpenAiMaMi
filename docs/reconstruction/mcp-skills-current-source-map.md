# mcp/skills current-source 证据映射

本文件只记录 `mcp-servers` 与 `installed-skills` 两个 app-shell index query 在当前公开源码中的 owner-closed 链路。它不修改 raw/internal gate-report，不把 manifest 状态从 `owner-closed` 提升为 `covered`，也不声明前端双平台 100% leaf、全业务 parity 或后端闭源行为已恢复。

## 证据来源

| 来源 | 作用 |
| --- | --- |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 登记 `mcp-skills-index-query-owner-closed-chain`，只关闭 app-shell index query 的 owner-closed 队列项。 |
| `src/restoration/frontend-manifest/index.ts` | 记录 `mcp-servers` 归属 `src/features/mcp/cache/index.ts` / `src/features/mcp/hooks/query.ts`，`installed-skills` 归属 `src/features/skills/cache/index.ts` / `src/features/skills/hooks/query.ts`。 |
| `scripts/validate-frontend-dumped.mjs` | 验证 dumped index query 中 `mcp-servers` 与 `installed-skills` 仍保持 owner-closed 状态。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-mcp/gate-report.json`、`evidence/full-chain/internal/audits/audits/macos-1.0.9-mcp/gate-report.json` | 只作为 MCP 双平台 gate-report 输入，不由本文改写。 |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-skills/gate-report.json`、`evidence/full-chain/internal/audits/audits/macos-1.0.9-skills/gate-report.json` | 只作为 Skills 双平台 gate-report 输入，不由本文改写。 |

## 当前源码链路

| query key | owner | 当前源码边界 |
| --- | --- | --- |
| `mcp-servers` | `src/features/mcp/cache/index.ts`、`src/features/mcp/hooks/query.ts`、`src/services/mcp/index.ts` | `mcpService.loadServers()` 调用 `load_mcp_servers`，query hook 通过 `writeMcpCachePayload` 写入 TanStack cache；overview 只消费摘要，不 owning 第二套 MCP 服务端事实。 |
| `installed-skills` | `src/features/skills/cache/index.ts`、`src/features/skills/hooks/query.ts`、`src/services/skills/index.ts` | `skillsService.loadInstalled()` 调用 `load_installed_skills`，query hook 通过 `writeSkillsCachePayload` 写入 TanStack cache；overview 只消费仪表盘摘要，不长期保存 skills 服务端事实。 |

## 后端入口镜像

| 命令 | 当前公开 owner |
| --- | --- |
| `load_mcp_servers` | `src-tauri/src/commands/mcp.rs` 调用 `usecase::mcp::load_servers`；usecase 返回 restored status；repository 通过可替换 FS 读取 MCP server snapshot。 |
| `load_installed_skills` | `src-tauri/src/commands/skills.rs` 调用 `usecase::skills::load_installed`；usecase 返回 restored status；repository 通过可替换 FS 读取 installed skills。 |

## 明确未声明

- 不声明 `MAC/WIN 100% leaf`。
- 不声明 `full_leaf_100`。
- 不声明 `gate_accepted` 或 `implementation_use` 由本文完成。
- 不修改 raw/internal gate-report。
- 不把 manifest 状态从 `owner-closed` 提升成 `covered`。
- 不新增 UI、route、sidebar、header、tray 或 settings 入口。
- 不碰 `voice`。
- 不声明 mcp/skills 全业务 parity。
- 不声明后端闭源 runtime、network、process、daemon 或 platform 行为恢复。

## validator 接入

`scripts/validate-frontend-mcp-skills-current-source.mjs` 必须验证：

- 本文件被 `docs/reconstruction/frontend-current-source-closeouts.json`、`docs/reconstruction/source-map.md` 和 `docs/reconstruction/README.md` 索引。
- `mcp-servers` 与 `installed-skills` 仍是 `owner-closed`。
- mcp/skills service、query、cache、overview consumer、mock、Tauri command、usecase 和 repository 链路均能回指当前公开源码。
- non-claims 保持，不得把本文写成双平台全 leaf 或闭源业务恢复声明。
