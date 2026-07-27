# System Diff — AiMaMi 1.2.3 home-usage-frontend (cross-platform)

## Platform Artifacts

- macOS arm64: `raw/binary/` AiMaMi.app 1.2.3（bundle: `frontend/beautified/index-B40jKs17.js` 主 bundle 43743 行 + 4 个插件包装文件；具体 SHA 见 `pointers/evidence-paths.md`）。
- Windows x64: `AiMaMi.1.2.3 win64.exe`（单文件 Tauri exe，无 NSIS installer wrapper，sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`，per `win-1.2.3-frontend-extract-20260724` DONE 行）；34 assets via tauri-dumper。

## Frontend IPC / Control-flow

- 命令面（关键词过滤 `usage|analytics|snapshot|bootstrap`）：mac 与 win **逐字节相同**，13 条：`get_usage_refresh_interval` `load_bootstrap_state` `load_change_analytics` `load_mcp_servers` `load_quota_history` `load_session_analytics` `load_snapshot` `load_token_analytics` `load_tool_analytics` `load_usage_analytics` `refresh_single_account_usage` `refresh_usage_snapshot` `set_usage_refresh_interval`。
- 全量命令面：`win-1.2.3-frontend-extract-20260724` 已记录 mac/win 全量 131/131 命令 zero-diff（本次只针对本模块子集重新 grounded 核对，结论一致）。
- **UI render-surface 深度不对称**：mac 有页面级人工 reduce（组件树/hooks/queryKey/交互→命令表，来自 `frontend/pages/shared-index-app-frontend.md` + `analytics-maintenance-autoswitch-frontend.md`）；win 只有机器扫描产物（`ipc-contracts.jsonl`/`frontend-control-flow.jsonl`/`ast-facts.json`/`frontend-contract-report.md`），无对应 `pages/*.md`。这是**证据产出深度差异**，不是从 win 侧证据观察到的产品行为差异——win UI 层是否与 mac 一致仍是 Unknown，禁止外推。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

**v2 更新（2026-07-26）**：不再是「两平台均未归并」——通过读盘 cross-reference 6 组 sibling canonical 包，本模块 10 个 in-scope 命令中 **8 个**已在其他模块的 canonical 包中找到非失败 dim2 证据（owner + 非失败反编译，见下表），但**均非本包自身证据**，只作 pointer 引用：

| 命令 | dim2 归属（mac） | dim2 归属（win） |
|---|---|---|
| 5 个 analytics 命令 | `macos-1.2.3-sessions-analytics`（consumerStartReady） | `windows-1.2.3-sessions-analytics`（consumerStartReady，command-wrapper 层反而强于 mac） |
| `load_quota_history` | `macos-1.2.3-relay`（VA `0x1006d4d30`，consumerStartReady） | `windows-1.2.3-relay`（consumerStartReady 22/23） |
| `load_snapshot` | `macos-1.2.3-accounts`（141 文件 0 截断，dim2 closed） | `windows-1.2.3-accounts`（dim2 clean） |
| `refresh_usage_snapshot` | `macos-1.2.3-accounts`（dim2 closed） | `windows-1.2.3-accounts`（**Hex-Rays 反编译失败**，真实缺口） |
| `load_bootstrap_state` | `macos-1.2.3-bootstrap`（`bootstrap_cache`，dim2 closed） | `windows-1.2.3-daemon-autoswitch`（**非** `windows-1.2.3-bootstrap`，未闭合——跨平台跨模块归属不一致） |
| `get_usage_refresh_interval` | **无任何包覆盖（truly_undone，唯一）** | `windows-1.2.3-system-usage`（dim2 available，但整包 blocks_start） |

原始 mac `backend-baseline/commands-baseline.md`（258 行）对本模块关键词零命中的发现依然成立（这份 baseline 本身确实未覆盖本模块），但**这不等于本模块命令在全部 canonical 包中都没有后端证据**——它们只是分散在其他模块专属的包里（sessions-analytics/relay/accounts/bootstrap），四分类孤儿清查详见 `manifest.json`。

## Interface / Error / Boundary

前端半闭合（入参 range/accountKey/argKeys，来自两个单平台包）。后端出参 DTO/error envelope（dim4 字段级）在本包及全部 6 组 cross-reference 包中均未闭合——最深也只到类型名枚举（如 `macos-1.2.3-accounts` 的 `core::models` 175 文件类型名列表）或 win-native 入参 argKeys 级，无一做字段级出参/error envelope 提取。1.0.9 模板的 `DISTILLED-home-usage-load-chains.md` 中 `CoreSnapshotPayload` 等 DTO 定义**不**跨版本复用为 1.2.3 证据。

## Gate Leaf

`consumerStartReady`（仅 macOS 前端 render-surface + 双平台命令面对比，8/10 in-scope 命令）；见 `gate-report.json`。dim3（call-tree 到叶）/dim4（出参字段级）/dim6（验收映射）在本包及全部 cross-reference 包中均未闭合，是当前真正瓶颈。

## Plugin / Capability

不适用（本模块非 plugin 系统范围）。

## OTA / Package

不适用（本次未涉及包体/OTA 差异分析）。

## Resource / Binary Surface

见「Platform Artifacts」；未做进一步资源级差异分析。

## Unknown（v2 更新）

1. Windows 侧本模块 UI render-surface（组件树、hooks、交互→命令映射）——10/10 未还原；潜在低成本路径（chunk SHA-256 复用）未验证。
2. dim3（call-tree 到叶）+ dim4（出参字段级 interface/error/boundary）+ dim6（验收映射）——本包及全部 6 组 cross-reference 包均未闭合（dim2 owner-location 已大幅 cross-reference，见上方表格）。
3. `get_usage_refresh_interval` macOS dim2——唯一确认的 `truly_undone` 缺口。
4. `refresh_usage_snapshot` Windows dim2——`windows-1.2.3-accounts` 内 Hex-Rays 反编译失败，真实缺口。
5. `load_bootstrap_state` 跨平台+跨模块归属不一致（mac=bootstrap 已闭合 / win=daemon-autoswitch 未闭合），需 `EXPLICIT_REASSIGN_OWNER` 协调。
6. 两个单平台包 scope 定义不一致（win 未做 RULE 8a 排除）。
7. `load_quota_history` 的 relay-owner 与本模块消费点是否为同一 handler（命令名匹配，函数体参数签名未独立核实）。
8. `get_usage_refresh_interval`/`set_usage_refresh_interval` 的 mac 前端触发点（get 已部分定位消费 hook，set 完全排除本模块）。
