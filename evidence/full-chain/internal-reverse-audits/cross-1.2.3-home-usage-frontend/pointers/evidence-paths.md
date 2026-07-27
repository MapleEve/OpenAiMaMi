# Evidence Pointers — cross-1.2.3-home-usage-frontend

所有路径为相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`，不复制 raw artifact，只作指针引用。

## macOS arm64

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md` — App 壳组件树、`i7()` 状态模型、`K1()` Dashboard/overview 页交互→命令表（§1-§3）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` — `AnalyticsPanel`（`Lt`）组件树、状态模型、useQuery 表（§1）
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 条命令静态扫描
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl` — control-flow 静态扫描
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` — 后端 command owner 基线（258 行，本模块命令未覆盖）
- `raw/aimami/1.2.3/macos-arm64/frontend-assets.sha256` — 前端资产 SHA 校验

## Windows x64

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 条命令静态扫描
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md` — 命令级 contract report（798 行，机器生成，无 UI 组件树 reduce）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` — control-flow 静态扫描
- `raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json` — AST 事实提取（1.87MB，未在本轮读取）
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/` — tauri-dumper 提取的原始前端资产（34 assets）

## v2 新增：两个 canonical 单平台包（PRIMARY dependency，2026-07-26 落地）

- `audits/macos-1.2.3-home-usage-frontend/` — macOS 单平台 canonical（`README.md`/`AI.md`/`SYSTEM-DIFF.md`/`manifest.json`/`gate-report.json`/`logic/FULL-CHAIN-1.2.3.md`/`pointers/evidence-paths.md`/`reviews/CLAUDE.md`/`data/{task-plan.json,producer-ledger.json}`）——dim1 前端可达面 8/10 命令 consumerStartReady
- `audits/windows-1.2.3-home-usage-frontend/` — Windows 单平台 canonical（同骨架，缺 `data/producer-ledger.json`）——命令面+minified CCF，dim1 page-level render-surface 未闭合

## v2 新增：后端 dim2 cross-reference 包（read-only，本包不重复领取其证据）

- `audits/macos-1.2.3-sessions-analytics/` + `audits/windows-1.2.3-sessions-analytics/` — 5 个 analytics 命令（load_session/token/tool/change/usage_analytics）的后端 owner+pseudocode（`core::session_analytics::compute_*`、`core::analytics::compute_usage_analytics`；win `commands/analytics/` 5 具名 wrapper）
- `audits/macos-1.2.3-relay/` + `audits/windows-1.2.3-relay/` — `load_quota_history` 后端 owner+pseudocode（mac VA `0x1006d4d30`）；语义身份（relay-provider-quota vs 本模块 account-quota）未独立核实
- `audits/macos-1.2.3-accounts/` + `audits/windows-1.2.3-accounts/` — `load_snapshot`/`refresh_usage_snapshot` 后端 owner+pseudocode（`commands::accounts::load_snapshot`/`refresh_usage_snapshot_with_retry`）；win 侧 `refresh_usage_snapshot` Hex-Rays 反编译失败
- `audits/macos-1.2.3-bootstrap/` — `load_bootstrap_state` mac 后端 owner+pseudocode（leaf `bootstrap_cache`，consumerStartReady）
- `audits/windows-1.2.3-daemon-autoswitch/` — `load_bootstrap_state` **win 侧真实归属包**（非 `windows-1.2.3-bootstrap`），该 leaf 仍 blocks_start；`audits/windows-1.2.3-bootstrap/manifest.json` 自身记录了这处跨平台归属不一致
- `audits/windows-1.2.3-system-usage/` — `get_usage_refresh_interval`（VA `0x14018cbb0`）/`set_usage_refresh_interval`（VA `0x14018c2d0`）win 侧后端 dim2；整包仍 `blocks_start`。macOS 侧无任何包覆盖 `get_usage_refresh_interval`（唯一 truly_undone dim2 缺口）
- `audits/macos-1.2.3-mcp/` + `audits/windows-1.2.3-mcp/` — `load_mcp_servers`（排除命令）归属包，均 consumerStartReady 4/4

## 关联历史（consumed，非本包证据来源，仅作对照）

- `audits/cross-1.0.9-home-usage-frontend/DISTILLED-home-usage-load-chains.md` — 1.0.9 同 scope 模板，供结构/措辞参考，未跨版本复用其数据字段
- `audits/BASELINE-FINAL-1.2.3.md` + `audits/COVERAGE-FINAL-1.2.3.md` — 1.2.3 全量基线终稿（wf-aimami123-delta-20260721），本模块命令未在其明细索引中单独出现
- `REVERSE-STATUS.md:4011` — `wf-aimami123-fullapp-20260724` 账本重建行，独立确认 home-usage-frontend 缺 1.2.3 canonical 包（v1 时的状态；v2 已解除，见上方新增两包）
- `REVERSE-STATUS.md:4332-4351`（`macos-1.2.3-home-usage-frontend-reduce-20260726`）+ `REVERSE-STATUS.md:4340-4346`（`windows-1.2.3-home-usage-frontend-reduce-20260726`）— 两个单平台包的落地记录
