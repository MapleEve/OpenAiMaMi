# AI Handoff — macos-1.2.3-home-usage-frontend

status: consumerStartReady (macOS frontend-reachable surface, 8 commands) -- closes the macOS half of cross-1.2.3-home-usage-frontend gap_needs_reducer=2. Backend owner/decompile (dim2-dim4) Unknown this pass; Windows (dim5) independent/Unknown; dim6 not produced.
evidence_root: ${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/aimami/1.2.3/macos-arm64/frontend/
versions: 1.2.3 (template/scope reference: cross-1.0.9-home-usage-frontend + cross-1.2.3-home-usage-frontend; NO cross-version data inference)
platforms: macos-arm64 (frontend render-surface: reduced to component level). Windows-x64 out of this bundle's scope (see windows-1.2.3-home-usage-frontend, not yet produced).
target_universe: 8 covered (load_usage_analytics, load_session_analytics, load_token_analytics, load_tool_analytics, load_change_analytics, load_quota_history, load_snapshot, refresh_usage_snapshot) + 2 consumerStartBlocked (load_bootstrap_state, get_usage_refresh_interval) + 3 excluded other-module-owned (load_mcp_servers=mcp, set_usage_refresh_interval=system-usage, refresh_single_account_usage=accounts)
locator_audit: canonical=10 in-scope (8 covered + 2 blocked), locator=10, missed=0, extra=0 (excluded 3 documented separately in manifest scope.explicit_exclusions)
coverage: frontend render-surface mac 8/10 in-scope commands have page-level component/query/interaction mapping (consumerStartReady); 2/10 blocked (1 no trigger, 1 partial-call-entry). backend owner 0/8 (Unknown this pass, both platforms).
coverage_mode: frontend-control-flow + UI/state only (dim1); NOT backend-owned-target-universe.
owner_resolution_status: not_attempted (frontend-surface reduce, no IDA session). Backend gap for this module's commands is documented Unknown, matching upstream commands-baseline.md gap (cross-checked in cross-1.2.3-home-usage-frontend).
full_app_coverage_status: not-full-app
per_target_required_results: see README.md "Per-target Result Matrix" -- 8 rows consumerStartReady (frontend surface), 2 consumerStartBlocked; none accepted at full_leaf_100.
frontend_ccf_status: mac=mostly-closed (2 source page docs, component-level). win=out-of-scope (Unknown; no page reduce exists).
backend_ccf_status: missing (both platforms) -- but 5 analytics commands' core bodies exist in sibling macos-1.2.3-sessions-analytics.
pseudocode_status: missing (this bundle) -- see sibling macos-1.2.3-sessions-analytics for the 5 analytics core:: functions.
call_tree_status: missing
interface_status: partial-frontend-only (request params known: range/accountKey/staleTime; response DTO/error envelope Unknown)
error_path_status: partial (UI-layer error handling documented -- AnalyticsPanel has no dedicated error UI, error falls to loading/skeleton; empty-state + quota min-sample gating documented). Backend error envelope Unknown.
boundary_status: partial (macOS frontend platform surface documented; command-name parity with Windows confirmed; Windows UI-layer boundary Unknown).
gate_leaf_status: consumerStartReady (macOS frontend-reachable surface, startMode=reverse_guided for the 8 covered commands); strictImplementationUse=false; readyToImplement=false.

## 依赖/来源检查结果

1. `cross-1.2.3-home-usage-frontend/gate-report.json` 的 `cluster_gate_summary.gap_needs_reducer=2` 明指两个缺失单平台包（`macos-1.2.3-home-usage-frontend` + `windows-1.2.3-home-usage-frontend`）。本包补齐 macOS 那一个。
2. `grep home-usage-frontend INDEX.jsonl` = 0 命中（无 producer 认领，first write，无 collision）。
3. mac 页面级证据（`shared-index-app-frontend.md` + `analytics-maintenance-autoswitch-frontend.md`）是 `<审计会话> baseline 产出，本轮只读消费，未新产 raw。
4. 5 个 analytics 命令的 core 后端体在兄弟包 `macos-1.2.3-sessions-analytics` 已 reduce（该包 covered_commands 含 load_session/token/tool/change/usage_analytics）；本前端-surface 包不重复领取，consumers 需后端时读那个包。

## Scripts / 复跑入口

- 命令面确认：`grep -oE '"command"[: ]*"[a-z_]+"' raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl | sort -u`
- mac 页面级证据源：`raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md`、`.../analytics-maintenance-autoswitch-frontend.md`
- 后端基线核对（本模块零命中确认）：`grep -iE 'usage_analytics|session_analytics|token_analytics|tool_analytics|change_analytics|quota_history|load_snapshot|load_bootstrap' raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`

## Unknowns

- 8 covered 命令的后端 owner + IDA decompile + callees/xrefs（dim2/dim3）：Unknown（未归并；5 analytics 命令的 core 体见兄弟包 sessions-analytics）。
- 响应 DTO / error envelope / side-effect boundary（dim4）：Unknown（前端入参已知）。
- Windows 1.2.3 home/dashboard/analytics 页面级 UI 组件树、hooks、交互→命令映射：Unknown（无 page reduce）。
- `load_bootstrap_state` mac 前端触发点：Unknown（命令扫描存在，页面未定位）。
- `get_usage_refresh_interval`/`set_usage_refresh_interval` 设置控件归属：product_decision（settings vs 本模块）。
- `load_snapshot` 字面 invoke 名：accepted_unknown（按 queryKey shape 推断，未见字面 invoke）。

## do_not_infer

- 不得用 mac render-surface 证据推断 win render-surface 一致（AGENTS.md 明文禁止跨平台外推）。
- 不得因命令面 13/13 zero-diff 升级 gate_tier 到 strictImplementationUse（命令存在 ≠ 前端/后端行为契约闭合）。
- 不得把本前端-surface 包当作后端（dim2-dim4）已闭合的证明，也不得当作 Windows（dim5）已闭合的证明。
- 不得把本包当作 `windows-1.2.3-home-usage-frontend` 的替代品；后者仍是 open producer work。
