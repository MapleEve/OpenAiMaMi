# Claude (CC) Independent Review — macos-1.2.3-home-usage-frontend

reviewer: Claude (this session, <host>)
date: 2026-07-26
session: macos-1.2.3-home-usage-frontend-reduce-20260726

## 使用的 evidence path（env-relative）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md`
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md`
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`（本模块零命中确认）
- `audits/cross-1.2.3-home-usage-frontend/`（mac 侧结论 + gap_needs_reducer=2 依据）
- `internal-reverse/{AGENTS.md,GATE-SPEC.md,CONSUMER-GATE-SCHEMA.md,OUTPUT-SPEC.md,REVERSE-STATUS.md,INDEX.jsonl}`（owner gate + schema）

## 覆盖范围（本轮独立核对的事实）

- **依赖核查**：`ls audits/` 确认 `macos-1.2.3-home-usage-frontend` 本包写入前不存在；`grep home-usage-frontend INDEX.jsonl` = 0 命中 → first write，无 collision，无 EXPLICIT token 需求。cross 包 gate-report `cluster_gate_summary.gap_needs_reducer=2` 明指本包（+ Windows 那个）为待补 reducer。
- **命令面**：读两份 page reduce + `ipc-contracts.jsonl`，确认本模块前端可达命令面 = 8 covered + 2 blocked + 3 exclusions（他模块 owner）。
- **dim1 前端 render-surface（macOS）**：Dashboard `K1()`（含 `BH` 账号卡 + `KH` 健康卡 + 共享 `E2()` 快照 hook）与 AnalyticsPanel `Lt`（6 tab、6 useQuery、activity `At`）的组件树/状态/交互→命令映射均已还原到组件级，达 consumerStartReady 所需 render-surface + UI call entry + frontend consumption 维度（macOS）。
- **dim2 后端 gap**：grep `commands-baseline.md`（258 行）本模块 8 命令关键词零命中（除 `refresh_usage_snapshot_with_retry` 一行浅层提及），确认后端 owner 基线未覆盖本模块 → dim2 honestly Unknown。交叉发现：5 个 analytics 命令的 core 体在兄弟包 `macos-1.2.3-sessions-analytics` 有 reduce，本包不重复领取。
- **gate 档位**：consumerStartReady（前端可达面），未虚高——`happyPathReady` 明确标为 frontend-half（invoke→backend owner Unknown），dim2-dim6 全 open，写入 forbiddenUntilStrictImplementationUse / forbiddenUntilReady。

## 缺口（honest open gaps）

- 本模块 8 命令后端 owner/decompile/callees（dim2/dim3）：Unknown，两平台（5 analytics 命令 core 体见兄弟包）。
- 响应 DTO / error envelope / side-effect boundary（dim4）：Unknown（前端入参已知）。
- Windows UI render-surface：完全未覆盖（无 page reduce），Unknown；命令名 parity ≠ dim1 闭合。
- `load_bootstrap_state` mac 前端触发点：未定位。
- `get_usage_refresh_interval`/`set_usage_refresh_interval` 设置控件归属：product_decision。
- `load_snapshot` 字面 invoke 名：accepted_unknown（按 queryKey shape 推断）。
- dim6 test/acceptance mapping：未产出。

## implemented-checkpoint（本轮复核确认闭合的 leaf/scope，仅本文件使用，非 gate 档）

| leaf | 对应 gate 档 | 已闭合维度 | 未闭合维度/Unknown |
|---|---|---|---|
| load_usage_analytics / load_session_analytics / load_token_analytics / load_tool_analytics / load_change_analytics / load_quota_history | consumerStartReady | dim1（前端 CCF + UI/state + frontend consumption，macOS） | dim2/dim3/dim4-response/dim5-win/dim6 |
| load_snapshot | consumerStartReady | dim1（render-surface via E2 shared hook + refresh path） | dim2/dim3/dim4/dim5-win/dim6；字面 invoke 名 accepted_unknown |
| refresh_usage_snapshot | consumerStartReady | dim1（BH 刷新触发 + 退避重试时序） | dim2/dim3/dim4/dim5-win/dim6 |

范围限制：以上 implemented-checkpoint 不扩大到 Windows、后端 helper 或 full-app；范围外 leaf 保持 diagnostic-only / consumerStartBlocked（`load_bootstrap_state`、`get_usage_refresh_interval`）。

## 不应行动项

- 不应把本前端-surface 包当作后端（dim2-dim4）或 Windows（dim5）已闭合的证明。
- 不应基于命令面 zero-diff 外推 Windows UI 层行为与 mac 一致。
- 不应把 gate_tier 提升到 strictImplementationUse 或以上（前端控制流单独绝不放行 strict）。
- 不应把本包当作 `windows-1.2.3-home-usage-frontend` 的替代品；后者仍是 open producer work。
- 需本模块 analytics 命令后端行为时，读兄弟包 `macos-1.2.3-sessions-analytics`，不在本包重逆。
