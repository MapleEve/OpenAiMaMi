# Claude (CC) Independent Review — windows-1.2.3-home-usage-frontend

reviewer: Claude (this session, <host>)
date: 2026-07-26

## 使用的 evidence path（env-relative，全 win-native）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl`
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md`
- `raw/binary/AiMaMi.1.2.3 win64.exe`（PE SOT，SHA 核对）
- `REVERSE-STATUS.md`（根 internal-reverse）
- （对照，非证据字段）`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`、`audits/cross-1.2.3-home-usage-frontend/`

## 覆盖范围

- `ls audits/windows-1.2.3-home-usage-frontend` 确认此前不存在；`grep windows-1.2.3-home-usage / home-usage.*windows INDEX.jsonl` = 0 命中；REVERSE-STATUS 无 win home-usage active claim → 写前碰撞门 ALLOW/first，无 collision。并行 `macos-1.2.3-home-usage-frontend-reduce-20260726` 是配对 macOS 半，非撞车。
- `jq` 独立核对 win `ipc-contracts.jsonl`，keyword 过滤得 13 个 home-usage 命令，与 mac 命令集逐字节相同（zero-diff，grounded）。
- 逐命令读 win `frontend-control-flow.jsonl` terminal_call 行，grounded 记录 wrapper 方法、argKeys、invoke 别名（`re`）、source chunk、已捕获 guard（`load_snapshot` in-flight preflight；`refresh_single_account_usage` 去重 Set + toast + `.warnings[]` 消费）。
- 确认 win 侧**无**页面级人工 reduce（无 `pages/*.md`），只有机器提取的命令/控制流/AST。
- grep mac `commands-baseline.md` 核对本模块命令关键词，零命中，确认两平台后端 owner 基线均未覆盖本模块。

## 缺口（诚实标注）

- Windows 页面级 UI render-surface（组件树/hooks/交互映射/可见 UX）：未 reduce，Unknown（renderSurfaceReady 不闭合）。
- 两平台本模块命令后端 owner/decompile/callees/interface 出参/error/boundary：Unknown（本轮无 IDA session）。
- 出参 DTO / error envelope：Unknown（仅入参 argKeys grounded；mac DTO 形状不跨平台/跨版本借用）。
- `get_/set_usage_refresh_interval` UI 触发点：未定位（内联在 shell chunk）。
- dim6 test/acceptance：未做。
- AnalyticsRange 值域（today|week|month）：mac 源码推断，win 侧未独立枚举（标 accepted_unknown，非阻断）。

## 门控判定

- consumerStartReady=false（后端 Unknown 阻断 happyPath/sideEffect/boundary；页面 render-surface 未 reduce 阻断 renderSurface）。strictImplementationUse=false，readyToImplement=false，gate_accepted=false，implementation_use=false，full_leaf_100=false。
- 每命令 gate leaf = candidate-only（11）/ diagnostic-only（2）。
- 未标任何 accepted_unknown 于后端/页面缺口——这些是真实的未 reduce/未逆面（gap_needs_reducer），不是假墙，故不套 accepted_unknown 反作弊豁免；唯一 accepted_unknown = AnalyticsRange 值域（非阻断内部细节）。

## 不应行动项

- 不应把本包当作后端 full-chain 或页面 render-surface 已闭合的证明；两者均为开口 gap。
- 不应基于命令面 zero-diff 外推 Windows UI 层行为与 mac 一致（dim5 + doNotInferWindowsFromMacOS）。
- 不应把 gate_tier 提升到 consumerStartReady 或以上。
- 不应把 `cross-1.0.9-DISTILLED` 的 mac DTO 形状写成 win 1.2.3 证据。

## Cross-review 备注

本包无 `reviews/AGENT.md`（本轮仅 CC 单方复核，未跑 Codex 独立复核），故按 OUTPUT-SPEC「两份都存在时才需 CROSS-REVIEW.md」不产 CROSS-REVIEW.md。后续如补 Codex 复核，须补 `reviews/CROSS-REVIEW.md` 并核对两份口径一致。
