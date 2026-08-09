# AiMaMi 1.2.3 windows-x64 home-usage-frontend — Single-Platform Canonical

同步时间：2026-07-26
范围：Home/Dashboard 页 + Usage/Analytics 面板的 **Windows-x64 前端可达面**（命令面 + minified-static 控制流）。scope 对齐 `cross-1.2.3-home-usage-frontend` 与 `cross-1.0.9-home-usage-frontend` 模板（home-dashboard + usage-snapshot-panel）。
最终结论：**consumerStartReady=false —— Windows 前端命令面证据包（frontend-command-surface + minified CCF）；页面级 render-surface 未 reduce、后端 owner/decompile Unknown、dim6 未做 → 每命令 gate leaf = candidate-only，`gap_needs_reducer`（backend + 页面 render-surface）。不虚高。**

本包是此前记为 **MISSING** 的 `audits/windows-1.2.3-home-usage-frontend/` canonical 单平台包的首次落地，回应 `REVERSE-STATUS.md:4011`（`<审计会话> `cross-1.2.3-home-usage-frontend` 的 `gate_needs_reducer=2` 缺口之一（另一半 = 并行会话 `macos-1.2.3-home-usage-frontend-reduce-20260726`）。

## 诚实定位（本包不是什么）

- **不是**从后端 IDA 逆向合成的 full-chain 包。本轮**未跑任何 IDA session**，无后端 owner/decompile/callees。
- **不是**页面级 UI 组件树 reduce。Windows 侧**没有** mac 那样的 `pages/*.md` 人工 reduce（mac 有 `shared-index-app-frontend.md` / `analytics-maintenance-autoswitch-frontend.md`）；win 侧只有机器提取的命令面 + minified-static 控制流。
- **不是** mac 证据的跨平台外推。所有 Windows 结论均由 Windows-native artifact（win `raw/aimami/1.2.3/windows-x64/frontend/` 提取物 + win PE 二进制 SHA）支撑；mac 页面 reduce 仅作为 scope/结构参照，**不**作为 win 的证据字段（遵守 `doNotInferWindowsFromMacOS`）。
- **是**：Windows-native 前端命令面 + minified-static CCF 的诚实蒸馏证据包，供后续 producer 在其上补页面级 reduce 与后端 IDA 归并。

## 证据索引

| 平台 | 证据类型 | 路径（相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`） | 性质 |
|---|---|---|---|
| windows-x64 | 命令静态扫描（131 命令，本模块 13 命令子集） | `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` | 机器生成，win-native，grounded |
| windows-x64 | minified-static control-flow（248 行，含本模块每命令 terminal_call 行） | `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` | 机器生成，win-native，含 wrapper/argKeys/部分 guard |
| windows-x64 | 命令级 contract report（argKeys 逐命令） | `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md` | 机器生成，win-native |
| windows-x64 | AST 事实 | `raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json` | 机器生成，win-native（本轮未逐字节展开） |
| windows-x64 | tauri-dumper 原始前端资产（chunk `index-B40jKs17.js` / `analytics-panel-6jtfGEeX.js` / `accounts-page-GdJYDnGj.js`） | `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/` | win-native 解包产物 |
| windows-x64 | PE 二进制 SOT | `raw/binary/AiMaMi.1.2.3 win64.exe`（SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, 33667584 B, PE/AMD64） | binary SOT |
| （对照） | mac 同 scope 页面 reduce | `raw/aimami/1.2.3/macos-arm64/frontend/pages/{shared-index-app-frontend.md,analytics-maintenance-autoswitch-frontend.md}` | 仅 scope/结构参照，**非 win 证据字段** |

## Coverage

- **命令面（frontend command surface）**：grounded —— win `ipc-contracts.jsonl` 过滤 `usage|analytics|snapshot|bootstrap|quota|mcp_server|refresh_single|usage_refresh` 后得 **13 个 home-usage 命令**（与 mac 命令集逐字节相同，交叉印证 `win-1.2.3-frontend-extract-20260724` 记录的「win 131 vs mac 131 zero diff」）：`load_bootstrap_state` `load_snapshot` `load_usage_analytics` `load_session_analytics` `load_token_analytics` `load_tool_analytics` `load_change_analytics` `load_quota_history` `load_quota_history` `refresh_usage_snapshot` `refresh_single_account_usage` `get_usage_refresh_interval` `set_usage_refresh_interval` `load_mcp_servers`。
- **前端 minified-static CCF（dim1 部分）**：win `frontend-control-flow.jsonl` 对每个命令有 terminal_call 行，grounded 捕获：wrapper 方法名、argKeys、invoke 别名（`re(...)`）、source chunk 文件、以及**部分** guard（`load_snapshot` 的 `if(!x||C.forceMetadata)return C.promise;` preflight；`refresh_single_account_usage` 的 `if(!Oe.has(o))` 去重 + toast）。**但无**页面级 component/route/state 组件树 reduce。
- **页面级 render-surface（renderSurfaceReady）**：win **未 reduce**（无 `pages/*.md`）。这是 win 侧相对 mac 的**证据深度缺口**，标 Unknown/gap，不用 mac 证据补。
- **后端 owner/IDA decompile（dim2/dim3/dim4）**：**Unknown（两平台）**。mac `backend-baseline/commands-baseline.md`（258 行）逐词核对本模块命令零命中（仅 1 行浅层提及 `refresh_usage_snapshot_with_retry` 无 VA/无 decompile 指针）；win 侧本模块命令无任何 IDA 逆向落盘。
- **dim6 test/acceptance**：未做。

## Per-target Result Matrix（Windows-native）

| target | 命令面(win) | 前端CCF(win, minified) | 页面 render-surface(win) | 后端 owner/decompile | interface/DTO/error/boundary | gate leaf |
|---|---|---|---|---|---|---|
| load_bootstrap_state | Accepted | Accepted（`re("load_bootstrap_state")`, argKeys=[], chunk `index-B40jKs17.js`） | Unknown（未 reduce） | Unknown | Unknown（无 IDA；仅入参名级） | candidate-only |
| load_snapshot | Accepted | Accepted（wrapper `loadSnapshot`, argKeys=`localOnly,forceMetadata`, guard `if(!x||C.forceMetadata)`） | Unknown | Unknown | 部分（入参 argKeys grounded；出参/error Unknown） | candidate-only |
| load_usage_analytics | Accepted | Accepted（wrapper `loadUsageAnalytics`, argKeys=[], chunk `analytics-panel-6jtfGEeX.js`） | Unknown | Unknown | Unknown | candidate-only |
| load_session_analytics | Accepted | Accepted（wrapper `loadSessionAnalytics`, argKeys=`range`） | Unknown | Unknown | 部分（入参 `range`） | candidate-only |
| load_token_analytics | Accepted | Accepted（wrapper `loadTokenAnalytics`, argKeys=`range`） | Unknown | Unknown | 部分（入参 `range`） | candidate-only |
| load_tool_analytics | Accepted | Accepted（wrapper `loadToolAnalytics`, argKeys=`range`） | Unknown | Unknown | 部分（入参 `range`） | candidate-only |
| load_change_analytics | Accepted | Accepted（wrapper `loadChangeAnalytics`, argKeys=`range`） | Unknown | Unknown | 部分（入参 `range`） | candidate-only |
| load_quota_history | Accepted | Accepted（wrapper `loadQuotaHistory`, argKeys=`accountKey`） | Unknown | Unknown | 部分（入参 `accountKey`） | candidate-only |
| refresh_usage_snapshot | Accepted | Accepted（`re("refresh_usage_snapshot")`, argKeys=[], chunk `index-B40jKs17.js`） | Unknown | Unknown | Unknown | candidate-only |
| refresh_single_account_usage | Accepted | Accepted（wrapper `refreshSingleAccountUsage`, argKeys=`accountKey`, guard 去重+toast, chunk `accounts-page-GdJYDnGj.js`） | Unknown | Unknown | 部分（入参 `accountKey`；`.warnings[]` 出参在 guard 片段可见） | candidate-only |
| get_usage_refresh_interval | Accepted | Accepted（`re("get_usage_refresh_interval")`, argKeys=[], chunk `index-B40jKs17.js`） | Unknown | Unknown | Unknown | diagnostic-only |
| set_usage_refresh_interval | Accepted | Accepted（`re("set_usage_refresh_interval")`, argKeys=`interval`） | Unknown | Unknown | 部分（入参 `interval`） | diagnostic-only |
| load_mcp_servers | Accepted | Accepted（`re("load_mcp_servers")`, argKeys=[], chunk `index-B40jKs17.js`） | Unknown | Unknown | Unknown | candidate-only |

所有行均**不满足** `full_leaf_100_definition_v2` 六维；均**不满足** `consumerStartReady` 九维（后端 Unknown 阻断 happyPath/sideEffect/boundary；页面 render-surface 未 reduce 阻断 renderSurface）。不得写 `readyToImplement`/`gate_accepted=true`/`implementation_use=true`/`strictImplementationUse=true`。

## Frontend Control Flow

见 `logic/FULL-CHAIN-1.2.3.md`（Windows-native 命令面加载链，从 win `frontend-control-flow.jsonl` + `frontend-contract-report.md` 蒸馏：每命令 wrapper→invoke 别名→argKeys→source chunk→已捕获 guard）。win 侧仅 minified-static 层，无页面级组件/路由/状态模型（renderSurfaceReady 未闭合）。

## Backend Control Flow / Pseudocode / Call-tree

Unknown（两平台均未对本模块命令做 IDA owner/decompile 归并；mac `commands-baseline.md` 未覆盖，win 无对应 raw 逆向）。dim2/dim3 全空。

## Interface / Error / Boundary

部分 —— 仅**入参 argKeys 级**（win-native，逐命令 grounded）；出参 DTO / error envelope / side-effect boundary **Unknown**（需后端 IDA）。**注意**：`cross-1.0.9-home-usage-frontend/DISTILLED` 中的 DTO 形状（`CoreSnapshotPayload` 等）是 **mac 1.0.9 前端源码**推得，属跨平台 + 跨版本，**不**作为本 win 1.2.3 包的证据字段；本包只记 win-native 入参名。

## Gate Leaf Status

`consumerStartReady=false`；`strictImplementationUse=false`；`readyToImplement=false`；`gate_accepted=false`；`implementation_use=false`；`full_leaf_100=false`。
`platformScopeDeclared = "Windows confirmed (frontend command-surface + minified-static CCF only); page render-surface not reduced; backend Unknown"`。
每命令 gate leaf = `candidate-only`（11）/ `diagnostic-only`（2: `get/set_usage_refresh_interval`）。

## Diff 结论

命令面零差异（win 13 == mac 13，逐字节，grounded）。render-surface reduce 深度不对称（mac 有页面级人工 reduce，win 只有机器扫描）——这是**证据深度差异**，不是产品行为差异；不得据此推断 win 端 UI 与 mac 相同或不同，该维度对 win 仍是 Unknown。

## Unknown / Missing

1. Windows 本模块页面级 UI render-surface（组件树 / hooks / 交互→命令映射 / 可见 UX 状态）——未 reduce，Unknown（renderSurfaceReady 不闭合）。
2. 两平台本模块命令的后端 owner + IDA decompile + callees/xrefs——完全 Unknown（未归并；mac baseline 覆盖不到，win 无 IDA 逆）。
3. 出参 DTO / error envelope / side-effect boundary（dim4 出参侧）——Unknown（需后端）。
4. `get_usage_refresh_interval` / `set_usage_refresh_interval` 的具体 UI 触发点（在 shell chunk `index-B40jKs17.js` 内联，未定位到具体 JSX/settings 入口）。
5. dim6 test/acceptance mapping——未做。

## Action / Non-action

- **Action（后续 producer）**：① 对本模块 13 命令（尤其 6 个 analytics + `load_snapshot`/`refresh_usage_snapshot`/`load_bootstrap_state`）做 Windows-native 页面级人工 reduce（对齐 mac `shared-index-app-frontend.md`/`analytics-maintenance-autoswitch-frontend.md` 的深度），闭合 renderSurfaceReady；② 用 IDA（win IDB `raw/binary/AiMaMi.1.2.3 win64.exe.i64`）归并本模块命令的后端 owner+decompile+callees（dim2/dim3/dim4 出参侧）；③ 补 dim6。
- **Non-action**：不得因命令面零差异就假设 Windows UI 层与 mac 一致并跳过 win 独立 reduce（违反 dim5 + `doNotInferWindowsFromMacOS`）；不得把本包提升到 `consumerStartReady`/`strictImplementationUse`/`readyToImplement`；不得把 `cross-1.0.9-DISTILLED` 的 mac DTO 形状当作 win 1.2.3 证据。
