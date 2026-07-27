# System Diff — AiMaMi 1.2.3 home-usage-frontend (macOS single-platform, frontend-reachable surface)

## Platform Artifacts

- macOS arm64: AiMaMi.app 1.2.3, main bundle `frontend/beautified/index-B40jKs17.js`（43743 行）+ lazy chunk `analytics-panel-6jtfGEeX.js`（1647 行）。binary SHA 见 `raw/binary/` SOT（本轮未重算）。
- Windows x64: 不在本单平台包 scope 内。Windows sibling 二进制 `AiMaMi.1.2.3 win64.exe`（sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`）仅作交叉引用，Windows render-surface 归属 `windows-1.2.3-home-usage-frontend`（未产出）。

## Frontend IPC / Control-flow

- **本模块前端可达命令面（macOS）**：8 covered（`load_usage_analytics` `load_session_analytics` `load_token_analytics` `load_tool_analytics` `load_change_analytics` `load_quota_history` `load_snapshot` `refresh_usage_snapshot`）+ 2 consumerStartBlocked（`load_bootstrap_state` `get_usage_refresh_interval`）。
- **组件级还原**：Dashboard `K1()`（overview 页）与 AnalyticsPanel `Lt`（6 tab：activity/sessions/token/tools/changes/quota）均有组件树 + 状态模型 + useQuery 表 + 交互→命令映射（源引两份 page reduce）。
- **命令面跨平台对比（consumed，非本包 dim5 闭合）**：`usage|analytics|snapshot|bootstrap` 子集 mac/win 13/13 逐字节相同（源 `cross-1.2.3-home-usage-frontend`）。仅命令名 parity；Windows UI render-surface Unknown（win 只有机器扫描 `ipc-contracts.jsonl`/`frontend-control-flow.jsonl`/`ast-facts.json`/`frontend-contract-report.md`，无 `pages/*.md` 人工 reduce）。这是**证据产出深度差异**，非从 win 侧观察到的产品行为差异——禁止外推。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

Unknown（本模块命令的后端 owner/decompile 两平台均未在本包归并）。mac `backend-baseline/commands-baseline.md`（258 行）对本模块命令关键词零命中（cross 包已交叉印证）。**注意**：5 个 analytics 命令的 core 业务体在兄弟包 `macos-1.2.3-sessions-analytics` 有还原（`core::session_analytics::compute_*` + `core::analytics::compute_usage_analytics`）——本前端-surface 包不重复领取，consumers 需后端时读那个包。

## Interface / Error / Boundary

- 前端半闭合：请求入参已知（`load_*_analytics` 带 `range`；`load_quota_history` 带 `accountKey`；staleTime：5 tab query 各 5min，quota 60s，activity Infinity）。响应 DTO / error envelope 待后端（Unknown）。
- UI 层错误/边界（已记录）：AnalyticsPanel 无独立 error UI 分支（error 落到 loading/skeleton）；空态占位（`totalSessions/totalCalls/totalCommands/totalTokens===0`）；quota 最小样本量 gating（数据点 <2 → quotaInsufficient）；quota 无 accountKey → quotaNoAccount 空态（不发请求）。

## Gate Leaf

`consumerStartReady`（macOS 前端可达面，8 命令）；见 `gate-report.json`。

## Plugin / Capability

不适用（本模块非 plugin 系统范围）。

## OTA / Package

不适用（本轮未涉及包体/OTA 差异分析）。

## Resource / Binary Surface

见「Platform Artifacts」；未做进一步资源级差异分析。

## Unknown

1. 本模块 8 命令的后端 owner + IDA decompile + callees（dim2/dim3），两平台。
2. 响应 DTO / error envelope / side-effect boundary（dim4）。
3. Windows 侧本模块 UI render-surface（组件树、hooks、交互→命令映射）——归属 `windows-1.2.3-home-usage-frontend`（未产出）。
4. `load_bootstrap_state` mac 前端触发点。
5. `get_usage_refresh_interval`/`set_usage_refresh_interval` 设置控件归属（settings vs 本模块）。
6. dim6 test/acceptance mapping。
