# Claude (CC) Independent Review — cross-1.2.3-home-usage-frontend

reviewer: Claude (this session, <host>)
date: 2026-07-25

## 使用的 evidence path（env-relative）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md`
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md`
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md`
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`
- `REVERSE-STATUS.md`（根 internal-reverse 目录）

## 覆盖范围

- 确认了 `internal-reverse/audits/` 目录下不存在 `macos-1.2.3-home-usage-frontend` 与 `windows-1.2.3-home-usage-frontend` 两个 canonical 包（`ls` 直接核对，2026-07-25）。
- 独立 grep 核对 mac/win `ipc-contracts.jsonl` 中与 usage/analytics/snapshot/bootstrap 相关的命令集合，逐字节相同（13/13）。
- 读取 mac 侧两份页面级 reduce 文档，确认 Dashboard（`K1()`）与 AnalyticsPanel（`Lt`）的组件树、hooks、交互→命令映射已被记录，达到 consumerStartReady 所需的 render-surface + UI call entry + happy path 维度（mac 侧）。
- 读取 win 侧 `frontend-contract-report.md` 与目录列表，确认该平台**没有**对应的页面级人工 reduce 产物，只有机器生成的命令/AST 扫描。
- grep `commands-baseline.md`（mac，258 行）核对本模块 8 个目标命令关键词，确认后端 owner 基线**未覆盖**本模块（零命中，除 1 行浅层提及 `refresh_usage_snapshot_with_retry` 无 VA/无 decompile 指针）。

## 缺口

- Windows UI render-surface：完全未覆盖，Unknown。
- 两平台后端 owner/decompile/callees/interface/error/boundary：完全未覆盖，Unknown。
- mac `get_usage_refresh_interval`/`set_usage_refresh_interval` 前端触发点：未在已读两份文档中定位。

## 不应行动项

- 不应把本 cross 包当作两个 canonical 单平台包已完成的证明；两者均不存在，是本次审查最主要的发现。
- 不应基于命令面 zero-diff 外推 Windows UI 层行为与 mac 一致。
- 不应把 gate_tier 提升到 strictImplementationUse 或以上。

---

## 2026-07-26 复核追加 — 合成升级复核

reviewer: Claude（本 session，<host>）
session: cross-1.2.3-home-usage-frontend-synthesis-reduce-20260726

### 触发条件核实

`ls audits/` 独立核对：`macos-1.2.3-home-usage-frontend/` 与 `windows-1.2.3-home-usage-frontend/` **均已存在**
（`macos-1.2.3-home-usage-frontend-reduce-20260726` + `windows-1.2.3-home-usage-frontend-reduce-20260726`，均落地于
2026-07-26），与上方 2026-07-25 复核记录的"两者均不存在"结论形成对照——这正是本包 README.md 承诺的重新合成触发条件。

### 使用的 evidence path（本轮新增，env-relative，全部只读）

- `audits/macos-1.2.3-home-usage-frontend/{README.md,AI.md,gate-report.json,manifest.json,logic/FULL-CHAIN-1.2.3.md,pointers/evidence-paths.md,reviews/CLAUDE.md}`
- `audits/windows-1.2.3-home-usage-frontend/{README.md,AI.md,gate-report.json,manifest.json,logic/FULL-CHAIN-1.2.3.md,pointers/evidence-paths.md,reviews/CLAUDE.md}`
- `audits/macos-1.2.3-sessions-analytics/{gate-report.json,manifest.json}` + `audits/windows-1.2.3-sessions-analytics/gate-report.json`
- `audits/macos-1.2.3-relay/{gate-report.json,logic/REGISTRATION-TABLE-1.2.3.md,data/task-plan.json}` + `audits/windows-1.2.3-relay/gate-report.json`
- `audits/macos-1.2.3-accounts/{manifest.json,gate-report.json,logic/FULL-CHAIN-1.2.3.md}` + `audits/windows-1.2.3-accounts/gate-report.json`
- `audits/macos-1.2.3-bootstrap/gate-report.json` + `audits/windows-1.2.3-bootstrap/manifest.json` + `audits/windows-1.2.3-daemon-autoswitch`（grep 命中）
- `audits/windows-1.2.3-system-usage/{README.md,gate-report.json,manifest.json}`
- `audits/macos-1.2.3-mcp/gate-report.json` + `audits/windows-1.2.3-mcp/gate-report.json`
- `REVERSE-STATUS.md`（4011 行 + 4126-4351 行区间，两个单平台包的 DONE 记录）
- `internal-reverse/INDEX.jsonl`（碰撞门核查，无本包 in-progress 残留，无重复 key）

### 覆盖范围（本轮独立核对的事实）

- 独立核对两个单平台包的 gate-report/manifest 内容，确认 macOS 8 covered + 2 blocked + 3 exclusions、Windows 0 covered
  （全 candidate-only/diagnostic-only）的结论准确反映其自身证据。
- 逐条核对 8 个 macOS covered 命令的后端 dim2 是否已存在于其他 canonical 包中（rust-reverse-cookbook §1 角度 D 四分类）：
  5 个 analytics 命令 → sessions-analytics（双平台）；load_quota_history → relay（双平台）；load_snapshot/refresh_usage_snapshot
  → accounts（macOS 双闭合，Windows load_snapshot 闭合但 refresh_usage_snapshot Hex-Rays 反编译失败）。
- 核对 load_bootstrap_state 的跨平台归属：macOS=bootstrap（已闭合），Windows=daemon-autoswitch（未闭合，非 bootstrap）——
  确认这是 `windows-1.2.3-bootstrap` 自己 manifest 已经如实记录的跨平台模块边界不一致，本轮只引用不越权修改。
  同时确认没有任何 mac 包认领 get_usage_refresh_interval 的后端（15 个 mac 1.2.3 canonical 包逐一 grep 核对，唯一
  真正 truly_undone 的 dim2 缺口）。
- 发现并记录 windows-1.2.3-home-usage-frontend 的 manifest scope.targets 未做 RULE 8a 排除（含全部 13 命令），与
  macOS 包的 10-in-scope 定义不一致——本轮采用 macOS 定义为本模块 canonical scope，不改动任一 sibling 包。

### 门控判定（本轮维持，未虚高）

- gate_tier 维持 `consumerStartReady`（macOS 前端可达面，8/10 命令），**未**因发现 8 个命令有 cross-reference 后端证据
  就提升到 strictImplementationUse——dim3（call-tree 到叶）/ dim4（出参 DTO/error envelope）/ dim6（验收映射）在**所有**
  已核对的 cross-reference 包中均未闭合，是真实瓶颈，不因"找到 owner"而消失。
- `strictImplementationUse=false`、`readyToImplement=false`、`gate_accepted=false`、`implementation_use=false`、
  `full_leaf_100=false` 全部维持。

### implemented-checkpoint（本轮复核确认闭合的 leaf/scope，仅本文件使用，非 gate 档）

| leaf | 对应 gate 档 | 已闭合维度 | 未闭合维度/Unknown |
|---|---|---|---|
| load_usage_analytics / load_session_analytics / load_token_analytics / load_tool_analytics / load_change_analytics | consumerStartReady（macOS） | dim1（macOS，继承自 macos-1.2.3-home-usage-frontend） | dim1(win)/dim3/dim4/dim6；dim2 已 cross-reference 至 sessions-analytics（非本包主证据） |
| load_quota_history | consumerStartReady（macOS） | dim1（macOS） | dim1(win)/dim3/dim4/dim6；dim2 已 cross-reference 至 relay（非本包主证据，语义身份 accepted_unknown） |
| load_snapshot / refresh_usage_snapshot | consumerStartReady（macOS） | dim1（macOS） | dim1(win)/dim3/dim4/dim6；dim2 已 cross-reference 至 accounts（非本包主证据；win 侧 refresh_usage_snapshot 反编译失败） |

范围限制：以上 implemented-checkpoint 不扩大到 Windows dim1、任何 sibling 包自身的 gate 状态、或 dim3/dim4/dim6；
范围外维度保持各自 sibling 包记录的原状。

### 不应行动项（本轮新增）

- 不应因为「后端函数在别的包里能找到」就把本模块的 dim2 状态字段本身标记为 closed——cross-reference ≠ 本包自身证据闭合。
- 不应擅自修改 `macos-1.2.3-bootstrap`/`windows-1.2.3-daemon-autoswitch`/`windows-1.2.3-home-usage-frontend` 等任一
  sibling 包以"修正"跨平台归属不一致或 scope 定义不一致——这些需要用户显式 `EXPLICIT_REASSIGN_OWNER` token，本轮未获取。
- 不应把 `load_quota_history` 的命令名匹配当作函数体参数签名已核实的证据。
- 不应把本包当作 sessions-analytics/relay/accounts/bootstrap/daemon-autoswitch/system-usage/mcp 任一模块的替代品。
