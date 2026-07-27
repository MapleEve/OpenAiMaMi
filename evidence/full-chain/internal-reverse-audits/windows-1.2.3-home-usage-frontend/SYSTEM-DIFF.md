# System Diff — windows-1.2.3-home-usage-frontend

平台聚焦：windows-x64（单平台 canonical）。凡 macOS 字样仅作对照，不作为 win 证据字段。

## Platform Artifacts

- Windows PE 二进制 SOT：`raw/binary/AiMaMi.1.2.3 win64.exe`，SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`，33667584 B，PE/AMD64。win IDB `raw/binary/AiMaMi.1.2.3 win64.exe.i64`（本轮未起 IDA）。
- Windows 前端资产：tauri-dumper 提取的原始 chunk（`index-B40jKs17.js` 应用壳、`analytics-panel-6jtfGEeX.js` AnalyticsPanel、`accounts-page-GdJYDnGj.js` accounts 页），在 `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/`。
- macOS 对照 artifact：不在本包 scope；macOS 单平台包为并行会话产物。

## Frontend IPC / Control-flow

- **命令面**：win `ipc-contracts.jsonl` 131 命令，本模块 13 命令子集全部存在（grounded）。与 mac 命令集逐字节相同（zero-diff，grounded 对照）——但这是**命令面**一致，不代表 UI 层或后端行为一致。
- **控制流**：win `frontend-control-flow.jsonl` 248 行，本模块每命令有 terminal_call 行（minified-static 层）。捕获 wrapper 方法、argKeys、invoke 别名（`re`）、source chunk、部分 guard。**无**页面级组件/路由/状态模型（renderSurfaceReady 未闭合）。
- 相对 macOS 的 diff：命令面 = 零差异；render-surface reduce 深度 = 不对称（mac 有 `pages/*.md` 页面级，win 无）——**证据深度差异**，非产品行为差异，win UI 层行为对比仍 Unknown。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

Unknown（win）。本轮未起 IDA，本模块 13 命令的 win 后端 owner、pseudocode、call-tree、implementation leaf 均无证据。mac `backend-baseline/commands-baseline.md`（对照）对本模块命令零覆盖，故两平台后端均为空白。

## Interface / Error / Boundary

- interface（入参）：win-native argKeys 逐命令 grounded（见 README 矩阵 / logic）。
- interface（出参 DTO）：Unknown（需后端）。
- error envelope：Unknown（backend 未逆）；唯 `refresh_single_account_usage` 的前端 guard 片段暴露一处 `.warnings[]` 消费（`v.warnings.length>0?v.warnings.map(...)`），属前端消费侧线索，非后端 error 契约。
- boundary：命令面平台一致性 grounded（zero-diff）；UI 层 + 后端边界 Unknown。

## Gate Leaf

- 每命令 gate leaf = candidate-only（11）/ diagnostic-only（2）。
- 包级 gate_tier：低于 consumerStartReady（frontend-command-surface 证据包）。
- `full_leaf_100_definition_v2`：dim1 部分（命令级 CCF 有、页面 render-surface 无）、dim2/dim3 缺、dim4 部分（仅入参名）、dim5 win-native 但 UI/后端边界 Unknown、dim6 缺 → 六维全不闭合。

## Plugin / Capability

不涉及插件模块。`load_mcp_servers` 属 home dashboard 的 MCP 统计卡入口（命令面 grounded，后端 Unknown），非 plugins 模块 leaf。

## OTA / Package

不涉及 OTA/版本升级差异（本包为 1.2.3 单版本前端命令面证据包，无跨版本 diff）。win 包来源为 `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/`（tauri-dumper 解包）。

## Resource / Binary Surface

- win 前端 chunk：`index-B40jKs17.js`（shell，承载 `load_bootstrap_state`/`load_snapshot`/`refresh_usage_snapshot`/`get_/set_usage_refresh_interval`/`load_mcp_servers`）、`analytics-panel-6jtfGEeX.js`（承载 6 个 analytics + `load_quota_history`）、`accounts-page-GdJYDnGj.js`（承载 `refresh_single_account_usage`）。
- win PE 后端：本轮未展开（无 IDA）。

## Unknown

1. Windows 页面级 UI render-surface（组件树/hooks/交互映射/可见 UX）。
2. win 本模块命令后端 owner/pseudocode/call-tree/leaf。
3. 出参 DTO / error envelope / side-effect boundary。
4. `get_/set_usage_refresh_interval` 具体 UI 触发点。
5. dim6 test/acceptance mapping。
