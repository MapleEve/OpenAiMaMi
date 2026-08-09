# AiMaMi 1.2.3 home-usage-frontend — Cross-Platform Synthesis

同步时间：2026-07-25（v1，过渡性蒸馏）→ **2026-07-26（v2，标准合成升级）**
范围：Home/Dashboard 页 + Usage/Analytics 面板前端渲染层与命令面（对齐 `cross-1.0.9-home-usage-frontend` 模板的 scope：home-dashboard + usage-snapshot-panel，1.2.3 mac 侧对应组件 `K1()`=Dashboard/overview 与 `LH`=lazy(`AnalyticsPanel`)）。
最终结论：**consumerStartReady（macOS 侧，8/10 本模块 in-scope 命令）；Windows 侧 dim1 render-surface 未闭合（0/10，仅 minified-static CCF）**。

**v2 更新（2026-07-26）**：v1 记录的依赖缺口已解除——`audits/macos-1.2.3-home-usage-frontend/` 与
`audits/windows-1.2.3-home-usage-frontend/` 两个 canonical 单平台包**均已落地**（分别由
`macos-1.2.3-home-usage-frontend-reduce-20260726` / `windows-1.2.3-home-usage-frontend-reduce-20260726` 产出）。
本包按 v1 自己承诺的路径改走**标准合成**：读两个单平台包 + 交叉引用另外 6 组已落地的相关模块 canonical 包
（sessions-analytics / relay / accounts / bootstrap+daemon-autoswitch / system-usage / mcp），完成
rust-reverse-cookbook §1 角度 D 的四分类孤儿清查。详见 `logic/FULL-CHAIN-1.2.3.md`。

## v1 历史记录（保留，供追溯）——为什么当时没有走「合成两个 canonical 包」的标准路径

按 skill 指令要求先读 `internal-reverse/audits/` 完整列表核对依赖是否存在，2026-07-25 当时结果：

- `audits/macos-1.2.3-home-usage-frontend/` — **不存在**（2026-07-26 已产出）
- `audits/windows-1.2.3-home-usage-frontend/` — **不存在**（2026-07-26 已产出）
- `REVERSE-STATUS.md:4011`（`<审计会话> 账本重建行）显式把 `home-usage-frontend`（与 `relay-core-bootstrap`）列为「cross-platform 两个跨平台模块，均缺 1.2.3 canonical `audits/<platform>-1.2.3-<module>/` 结论包」，现状仅有部分 raw 证据，尚未按 RULE 8 归并/reduce。

这与 1.0.9 时代不同：1.0.9 的 `cross-1.0.9-home-usage-frontend` 本身也不是从两个 canonical 单平台包合成的（它自己也没有对应的 `macos-1.0.9-home-usage-frontend`/`windows-1.0.9-home-usage-frontend` canonical 包），而是直接产出一份 `DISTILLED-home-usage-load-chains.md` + `gate-report.json`（frontend-source-dump 证据，无 IDA 后端）。v1 沿用同一务实做法，但补齐 1.0.9 模板缺失的 `README.md`/`AI.md`/`SYSTEM-DIFF.md`/`manifest.json`/`pointers/`/`reviews/` 骨架（RULE 8(b) 白名单要求）。

## 证据索引（v2：新增两个 canonical 单平台包 + 六组 cross-reference 包）

| 平台 | 证据类型 | 路径 | 性质 |
|---|---|---|---|
| macOS arm64 | **单平台 canonical 包（PRIMARY dependency）** | `audits/macos-1.2.3-home-usage-frontend/` | canonical，consumerStartReady |
| Windows x64 | **单平台 canonical 包（PRIMARY dependency）** | `audits/windows-1.2.3-home-usage-frontend/` | canonical，belowConsumerStartReady |
| macOS+Windows | 5 个 analytics 命令后端 dim2 cross-reference | `audits/macos-1.2.3-sessions-analytics/` + `audits/windows-1.2.3-sessions-analytics/` | canonical，consumerStartReady（各自模块内） |
| macOS+Windows | `load_quota_history` 后端 dim2 cross-reference | `audits/macos-1.2.3-relay/` + `audits/windows-1.2.3-relay/` | canonical，consumerStartReady（各自模块内） |
| macOS+Windows | `load_snapshot`/`refresh_usage_snapshot` 后端 dim2 cross-reference | `audits/macos-1.2.3-accounts/` + `audits/windows-1.2.3-accounts/` | canonical；win 侧 `refresh_usage_snapshot` 反编译失败 |
| macOS | `load_bootstrap_state` 后端 dim2 cross-reference | `audits/macos-1.2.3-bootstrap/` | canonical，consumerStartReady（该 leaf） |
| Windows | `load_bootstrap_state` 归属包（非 bootstrap） | `audits/windows-1.2.3-daemon-autoswitch/` | canonical，该 leaf blocks_start |
| Windows | `get_usage_refresh_interval`/`set_usage_refresh_interval` 后端 dim2 cross-reference | `audits/windows-1.2.3-system-usage/` | canonical，整包 blocks_start |
| macOS+Windows | `load_mcp_servers` 归属包（排除项） | `audits/macos-1.2.3-mcp/` + `audits/windows-1.2.3-mcp/` | canonical，consumerStartReady 4/4 |

v1 原始 raw 证据索引（本模块自身前端 reduce 的第一手来源，保留）：

| 平台 | 证据类型 | 路径（相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`） | 性质 |
|---|---|---|---|
| macOS arm64 | 前端页面级 UI 组件树 + 交互→命令表（人工 reduce） | `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md`（App 壳 + `K1()` Dashboard） | 高置信，被 macos-1.2.3-home-usage-frontend 承接为其 canonical 证据 |
| macOS arm64 | AnalyticsPanel 组件树 + useQuery 表 | `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` | 同上 |
| macOS arm64 | 命令静态扫描 | `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 命令） | 机器生成 |
| Windows x64 | 命令静态扫描 + control-flow | `raw/aimami/1.2.3/windows-x64/frontend/{ipc-contracts.jsonl,frontend-control-flow.jsonl,frontend-contract-report.md}` | 机器生成，被 windows-1.2.3-home-usage-frontend 承接 |

## Coverage（v2 合成结论）

- **命令面（frontend command surface）**：grounded 核对 — mac 与 win `ipc-contracts.jsonl` 中过滤 `usage|analytics|snapshot|bootstrap` 关键词后的命令集合逐字节相同，13/13。本模块（RULE 8a 单 owner 纪律）实际 covered scope 为 **10** 个（排除 `load_mcp_servers`/`set_usage_refresh_interval`/`refresh_single_account_usage` 三个他模块 owner 命令）。
- **前端 UI render surface**：mac 8/10 已还原到组件级（`macos-1.2.3-home-usage-frontend` 承接）；win 0/10 到组件级，仅 minified-static CCF（`windows-1.2.3-home-usage-frontend` 承接）。
- **后端 owner/IDA decompile（v2 新结论，四分类孤儿清查）**：本模块 10 个 in-scope 命令中 **8 个**在其他 canonical 包中已有非失败 dim2 证据（cross-reference，非本模块自身证据）——5 个 analytics 命令 → sessions-analytics；`load_quota_history` → relay；`load_snapshot`/`refresh_usage_snapshot` → accounts（win 侧 `refresh_usage_snapshot` 反编译失败）。`load_bootstrap_state` 存在跨平台跨模块归属不一致（mac=bootstrap 已闭合 / win=daemon-autoswitch 未闭合）。`get_usage_refresh_interval` 是本模块**唯一确认的 truly_undone** dim2 缺口（mac 侧无任何包覆盖；win 侧 system-usage 有证据但整包仍 blocks_start）。详见 `manifest.json` `four_category_orphan_classification`。

## Per-target Result Matrix（v2，仅本模块 10-in-scope 命令）

| target | 前端CCF(mac) | 前端CCF(win) | 后端dim2（cross-ref） | dim3 call-tree | dim4 interface/error | gate leaf |
|---|---|---|---|---|---|---|
| load_bootstrap_state | Missing（无触发点） | Accepted（命令级） | **已闭合**（mac: macos-1.2.3-bootstrap `bootstrap_cache`）；win 归属 daemon-autoswitch 未闭合 | Unknown | Unknown | consumerStartBlocked |
| load_snapshot | Accepted（页面级，`E2()`共享hook） | Accepted（命令级） | **已闭合**（mac+win: macos/windows-1.2.3-accounts） | Unknown（leaf=core::repository，交叉包内也未闭合） | 入参已知，出参Unknown | consumerStartReady(mac) |
| load_usage_analytics | Accepted（页面级，`At` tab） | Accepted（命令级） | **已闭合**（mac+win: sessions-analytics） | Unknown | 入参已知，出参Unknown | consumerStartReady(mac) |
| load_session_analytics / load_token_analytics / load_tool_analytics / load_change_analytics | Accepted（页面级，`Lt` 5 个 useQuery） | Accepted（命令级） | **已闭合**（mac+win: sessions-analytics） | Unknown | 入参 range 已知 | consumerStartReady(mac) |
| load_quota_history | Accepted（页面级） | Accepted（命令级） | **已闭合**（mac+win: relay，语义身份 accepted_unknown） | Unknown | 入参 accountKey 已知 | consumerStartReady(mac) |
| refresh_usage_snapshot | Accepted（页面级，`BH()` 刷新按钮，含重试时序） | Accepted（命令级） | mac **已闭合**（accounts）；win **反编译失败**（真实缺口） | Unknown | Unknown | consumerStartReady(mac) |
| get_usage_refresh_interval | Partial（消费hook定位，设置控件出模块） | Accepted（命令级，diagnostic-only） | mac **truly_undone**（唯一）；win 已有证据（system-usage，但整包未达任何 gate） | Unknown | Unknown | consumerStartBlocked |

所有行均不满足 `full_leaf_100_definition_v2` 六维（dim3/dim4/dim6 在全部 cross-reference 包中均未闭合），不得写 `readyToImplement`/`gate_accepted=true`/`implementation_use=true`。（`load_mcp_servers`/`set_usage_refresh_interval`/`refresh_single_account_usage` 三个排除命令的归属包状态见 `manifest.json` `scope.explicit_exclusions`。）

## Frontend Control Flow

macOS：见 `audits/macos-1.2.3-home-usage-frontend/logic/FULL-CHAIN-1.2.3.md`（组件拓扑 + 8 个 covered 命令的完整前端链路）。
Windows：见 `audits/windows-1.2.3-home-usage-frontend/logic/FULL-CHAIN-1.2.3.md`（command→wrapper→invoke 映射表，minified-static 层）。
本包自身的跨平台合成叙述见 `logic/FULL-CHAIN-1.2.3.md`。

## Backend Control Flow / Pseudocode / Call-tree

**v2 更新**：不再是「两平台均 Unknown」——8/10 命令的 dim2（owner+pseudocode）已在其他 canonical 包中 cross-reference 到（见上表 + `manifest.json`）。但 dim3（call-tree 到叶）在**全部**这些 cross-reference 包内部也仍未闭合——这是当前真正的瓶颈，不是"找不到 owner"。

## Interface / Error / Boundary

前端半闭合（入参 range/accountKey/argKeys 已知，来自两个单平台包）；后端出参 DTO/error envelope（dim4 字段级）在本包及全部 cross-reference 包中均未闭合。

## Gate Leaf Status

`consumerStartReady`（仅 macOS 前端 render-surface + 命令面，8/10 in-scope 命令）；`strictImplementationUse=false`；`readyToImplement=false`；`gate_accepted=false`；`implementation_use=false`。Windows dim1 维度仍 `Unknown`，不得用 mac 证据外推（AGENTS.md 红线「不用某平台 artifact 结果推断另一个平台」）。

## Diff 结论

命令面零差异（13/13 identical，grounded）；render-surface reduce 深度不对称（mac 有页面级人工 reduce，win 只有机器扫描）——这是**证据深度差异**，不是产品行为差异；不得据此推断 win 端 UI 与 mac 不同或相同，此维度对 win 侧仍是 Unknown。**潜在低成本闭合路径（假设，未验证）**：`windows-1.2.3-accounts` 已证实 `accounts-page-GdJYDnGj.js` 在 mac/win 间 SHA-256 逐字节相同；若本模块的 `index-B40jKs17.js`/`analytics-panel-6jtfGEeX.js` 同样逐字节相同，可用 mac 页面级 reduce 作为「proven byte-identical artifact」直接复用为 win dim1 证据，未验证。

## Unknown / Missing（v2，去重更新）

1. Windows 侧本模块 UI render-surface（组件树/hooks/交互→命令映射）——10/10 未还原；见上方潜在低成本路径。
2. `get_usage_refresh_interval` macOS 后端 dim2——本模块唯一确认的 `truly_undone` 缺口（15 个 mac 1.2.3 canonical 包逐一核对，无一覆盖）。
3. `refresh_usage_snapshot` Windows 后端 dim2——`windows-1.2.3-accounts` 内 Hex-Rays 反编译失败，真实缺口（非未尝试）。
4. `load_bootstrap_state` 跨平台+跨模块归属不一致（mac=bootstrap 已闭合 / win=daemon-autoswitch 未闭合）——`windows-1.2.3-bootstrap` 自身已记录此缺口，需 `EXPLICIT_REASSIGN_OWNER` 协调，非本次授权范围。
5. `windows-1.2.3-home-usage-frontend` 的 manifest scope 未做 RULE 8a 排除（含 13 命令），与 mac 包 10-in-scope 定义不一致，需未来协调。
6. `load_quota_history` 的 relay-owner 与本模块消费点是否为同一 handler——命令名匹配，函数体参数签名未独立核实（accepted_unknown）。
7. dim3（call-tree 到叶）/dim4（出参 DTO/error envelope 字段级）/dim6（验收映射）——本包及全部 cross-reference 包中均未闭合。

## Action / Non-action

- **Action（后续生产者可做，详见 `logic/FULL-CHAIN-1.2.3.md §6` 与 `data/task-plan.json`）**：①校验 shell/analytics chunk 是否 mac/win 逐字节相同（可能低成本闭合 win dim1）；②对 `get_usage_refresh_interval` 起 macOS IDA session（唯一 truly_undone dim2）；③对 `refresh_usage_snapshot` win 侧反编译失败做破墙尝试（在 accounts 包范围内）；④对已 cross-reference 的 8 个命令深化 dim3（在各自归属包内，不在本包重复）；⑤补 dim4 字段级提取 + dim6 验收映射；⑥协调 `load_bootstrap_state` 跨平台归属不一致（需 token）；⑦协调两个单平台包的 scope 定义不一致（需 token）；⑧核实 `load_quota_history` 语义身份。
- **Non-action**：不得因命令面零差异就假设 Windows UI 层与 mac 一致并跳过 win 独立 reduce（违反 dim5 + `doNotInferWindowsFromMacOS`）；不得把本 cross 包提升到 `strictImplementationUse`/`readyToImplement`；不得把 8 个已 cross-reference 的命令当作本包自身已闭合 dim2 的证据（pointer-only，非本包主证据）；不得未经 `EXPLICIT_REASSIGN_OWNER` token 修改任一 sibling 包。
