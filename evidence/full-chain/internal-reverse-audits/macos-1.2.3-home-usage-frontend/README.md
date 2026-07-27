# AiMaMi 1.2.3 home-usage-frontend — macOS single-platform (frontend-reachable surface)

同步时间：2026-07-26
范围：Home/Dashboard 页（`K1()` overview）+ Usage/Analytics 面板（`Lt`=AnalyticsPanel）的 **macOS 前端可达面**（dim1 前端控制流 + UI/state + 命令面）。后端 owner/decompile（dim2-dim4）本轮不做，Windows 独立闭合（dim5）。
最终结论：**consumerStartReady（macOS 前端可达面，8 命令）**；`strictImplementationUse=false`；`readyToImplement=false`；`gate_accepted=false`；`implementation_use=false`；`full_leaf_100=false`。

本包是 `cross-1.2.3-home-usage-frontend` 的 gate-report 里 `gap_needs_reducer=2` 所指的两个缺失单平台 canonical 包中的 **macOS 那一个**，现予补齐。它不是全量后端逆向，是前端可达面的 canonical 结论，档位不虚高。

## 为什么是「前端可达面」而非全量

- 本模块命令的**后端 owner + IDA decompile 在两平台均未归并**：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`（258 行）对 `usage_analytics`/`session_analytics`/`token_analytics`/`tool_analytics`/`change_analytics`/`quota_history`/`load_snapshot`/`load_bootstrap` 关键词零命中（已由 `cross-1.2.3-home-usage-frontend` gate-report 交叉印证）。本轮无 IDA session，故 dim2-dim4 保持 Unknown。
- mac 侧**已有页面级人工 reduce**（`frontend/pages/shared-index-app-frontend.md` + `analytics-maintenance-autoswitch-frontend.md`），把 Dashboard 与 AnalyticsPanel 的组件树、状态、useQuery、交互→命令映射还原到组件级——这是 dim1 前端控制流可达面，足以支撑 consumerStartReady。
- 需要本模块 5 个 analytics 命令的**后端**行为时，读兄弟包 `macos-1.2.3-sessions-analytics`（该包已 reduce `core::session_analytics::compute_*` + `core::analytics::compute_usage_analytics` 的 core 体）；本前端-surface 包不重复领取那份后端证据。

## 证据索引

| 证据类型 | 路径（相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`） | 性质 |
|---|---|---|
| App 壳 + Dashboard 页面级 reduce | `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md` | 高置信，组件级 |
| AnalyticsPanel 页面级 reduce | `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` | 高置信，组件级 |
| 命令静态扫描 | `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 命令） | 机器生成 |
| 后端 command owner 基线（本模块未覆盖） | `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` | 见 Gap |
| 跨平台命令面对比来源 | `audits/cross-1.2.3-home-usage-frontend/`（mac 侧结论） | consumed conclusion |

## Coverage

- **covered_commands（8，consumerStartReady，前端可达面）**：`load_usage_analytics` `load_session_analytics` `load_token_analytics` `load_tool_analytics` `load_change_analytics` `load_quota_history` `load_snapshot` `refresh_usage_snapshot`。
- **consumerStartBlocked（2）**：`load_bootstrap_state`（命令扫描存在，页面无触发点定位 → dim1 frontend-control-flow-missing）、`get_usage_refresh_interval`（消费 hook `cU()` 定位到，但设置控件在本模块页面外）。
- **explicit exclusions（3，surfaced-in-home 但他模块 owner）**：`load_mcp_servers`（mcp 模块，Dashboard 统计卡）、`set_usage_refresh_interval`（settings/system-usage，win owner `windows-1.2.3-system-usage`）、`refresh_single_account_usage`（accounts，win owner `windows-1.2.3-accounts`）。
- **后端 owner 覆盖**：0/8（Unknown，两平台）。

## Per-target Result Matrix

| target | 前端CCF(mac) | 后端owner/decompile | callees/xrefs | interface/error/boundary | gate leaf |
|---|---|---|---|---|---|
| load_usage_analytics | Accepted（activity tab `At`，`useQuery` staleTime Infinity） | Unknown（兄弟包 sessions-analytics 有 core::analytics::compute_usage_analytics） | Unknown | 前端入参已知（无参），响应 DTO Unknown | consumerStartReady |
| load_session_analytics | Accepted（sessions tab，`p` useQuery，参数 `range`） | Unknown（兄弟包有 core::session_analytics::compute_session_analytics） | Unknown | 入参 range 已知，DTO Unknown | consumerStartReady |
| load_token_analytics | Accepted（token tab，`d` useQuery，参数 `range`） | Unknown（兄弟包有 core） | Unknown | 入参 range 已知 | consumerStartReady |
| load_tool_analytics | Accepted（tools tab，`x` useQuery，参数 `range`） | Unknown（兄弟包有 core） | Unknown | 入参 range 已知 | consumerStartReady |
| load_change_analytics | Accepted（changes tab，`j` useQuery，参数 `range`） | Unknown（兄弟包有 core） | Unknown | 入参 range 已知 | consumerStartReady |
| load_quota_history | Accepted（quota tab，`h` useQuery，参数 `accountKey`，guard `!!accountKey`） | Unknown | Unknown | 入参 accountKey 已知，最小样本量前端 gating（<2 点 → quotaInsufficient） | consumerStartReady |
| load_snapshot | Accepted（共享 `E2()` hook，Dashboard `BH` 账号卡 + `KH` 健康卡消费；push 驱动 `runtime-state-updated`） | Unknown | Unknown | queryKey `['snapshot','progressive'/'display']`，字面 invoke 名按 shape 推断（accepted_unknown） | consumerStartReady |
| refresh_usage_snapshot | Accepted（`BH()` 刷新，`S.refreshUsageOnly` → `Ee.refreshUsageSnapshot`，800ms/1600ms 两次退避重试） | Unknown | Unknown | 乐观 refreshing 态，finally 复位 | consumerStartReady |
| load_bootstrap_state | Missing（无触发点定位，命令扫描存在） | Unknown | Unknown | Unknown | consumerStartBlocked |
| get_usage_refresh_interval | Partial（消费 hook `cU()` 定位，设置控件在页面外） | Unknown | Unknown | Unknown | consumerStartBlocked |

所有行均不满足 `full_leaf_100_definition_v2` 六维，不得写 `readyToImplement`/`gate_accepted=true`/`implementation_use=true`。

## Frontend Control Flow

见 `logic/FULL-CHAIN-1.2.3.md`（前端触发→guard→useQuery/invoke→命令 的完整链路叙述，源引两份 page reduce）。

## Backend Control Flow / Pseudocode / Call-tree

Unknown（两平台均未对本模块命令做 IDA owner/decompile 归并）。5 个 analytics 命令的 core 体在兄弟包 `macos-1.2.3-sessions-analytics` 有还原，本包不重复领取。

## Interface / Error / Boundary

前端半闭合：请求入参已知（`range` / `accountKey` / staleTime）；响应 DTO / error envelope 待后端。UI 层错误处理已记录：AnalyticsPanel 无独立 error UI 分支（error 落到 loading/skeleton 分支）；空态与 quota 最小样本量 gating 已记录（见 `logic/`）。

## Gate Leaf Status

`consumerStartReady`（macOS 前端可达面，8 命令）。`strictImplementationUse=false`；`readyToImplement=false`；`gate_accepted=false`；`implementation_use=false`；`full_leaf_100=false`。Windows render-surface 维度 `Unknown`，不得用 mac 证据外推（`doNotInferWindowsFromMacOS`）。

## Diff 结论

命令面（`usage|analytics|snapshot|bootstrap` 子集）mac/win 13/13 逐字节相同（consumed 自 cross 包，仅命令名 parity，非 Windows UI 闭合）。render-surface reduce 深度不对称（mac 页面级 / win 仅机器扫描）是**证据深度差异**，非产品行为差异，win 侧 UI 层仍 Unknown。

## Unknown / Missing

1. 本模块 8 命令的后端 owner + IDA decompile + callees（dim2/dim3），两平台 Unknown。
2. 响应 DTO / error envelope / side-effect boundary（dim4）Unknown（前端入参已知）。
3. Windows 侧本模块 UI render-surface（组件树/hooks/交互→命令），无 page reduce → Unknown。
4. `load_bootstrap_state` mac 前端触发点未定位。
5. `get_usage_refresh_interval`/`set_usage_refresh_interval` 的设置控件归属（settings vs 本模块）待产品决策。
6. dim6 test/acceptance mapping 未产出。

## Action / Non-action

- **Action（后续生产者可做）**：① 起 IDA 把 8 covered 命令的后端 owner+decompile+callees 归并（5 个 analytics 命令优先交叉引用兄弟包 `macos-1.2.3-sessions-analytics` 已有 core 体，避免重逆）；② 产 `windows-1.2.3-home-usage-frontend` 补 Windows 页面级 reduce（对齐 mac 深度）；③ 定位 `load_bootstrap_state` 前端触发点（查 `i7()` mount useEffect + 共享 hook 层 L12200-12700）；④ 决策 `get/set_usage_refresh_interval` 归属。
- **Non-action**：不得因命令面零差异就假设 Windows UI 层与 mac 一致（违反 dim5 + `doNotInferWindowsFromMacOS`）；不得把本前端-surface 包提升到 `strictImplementationUse`/`readyToImplement`；不得把本包当作后端已闭合的证明。
