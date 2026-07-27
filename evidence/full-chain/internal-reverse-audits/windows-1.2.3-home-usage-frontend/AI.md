# AI Handoff — windows-1.2.3-home-usage-frontend

status: partial — Windows-native frontend command-surface (13/13) + minified-static CCF (wrapper/argKeys/partial-guard) reduced this pass; page-level render-surface NOT reduced (no win pages/*.md); backend owner/decompile Unknown (no IDA session this pass); dim6 not done. consumerStartReady=false (backend Unknown blocks happyPath/sideEffect/boundary; page render-surface not reduced blocks renderSurface). This is the first landing of the previously-MISSING canonical windows-1.2.3-home-usage-frontend bundle; it is a frontend-command-surface evidence pack, NOT a full-chain closure.
evidence_root: ${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/aimami/1.2.3/windows-x64/frontend/ (win-native) + raw/binary/AiMaMi.1.2.3 win64.exe (PE SOT)
versions: 1.2.3 (scope template: cross-1.2.3-home-usage-frontend / cross-1.0.9-home-usage-frontend, scope-equivalent; NO cross-version data reuse)
platforms: windows-x64 ONLY (this is the single-platform Windows canonical; macOS is a separate parallel bundle macos-1.2.3-home-usage-frontend-reduce-20260726 — do not merge)
target_universe: load_bootstrap_state, load_snapshot, load_usage_analytics, load_session_analytics, load_token_analytics, load_tool_analytics, load_change_analytics, load_quota_history, refresh_usage_snapshot, refresh_single_account_usage, get_usage_refresh_interval, set_usage_refresh_interval, load_mcp_servers (13 commands; win-native keyword filter usage|analytics|snapshot|bootstrap|quota|mcp_server|refresh_single|usage_refresh over win ipc-contracts.jsonl, 2026-07-26)
locator_audit: canonical=13 (win ipc-contracts.jsonl grep), locator=13, missed=0, extra=0; cross-checked byte-identical to mac 13-command set (grounded) but classified as win-native evidence, not mac inference
coverage: frontend command-surface win=13/13 (grounded); frontend minified-static CCF win=13/13 (wrapper+argKeys+invoke-alias+source-chunk; partial guards on load_snapshot + refresh_single_account_usage); frontend page-level render-surface win=0/13 (NOT reduced); backend owner win=0/13 (no IDA this pass)
coverage_mode: frontend-command-surface + minified-static-CCF ONLY; backend-owned-target-universe NOT claimed
owner_resolution_status: not_attempted (no IDA session run in this distillation pass; backend gap documented as Unknown, consistent with mac commands-baseline.md gap for this module)
full_app_coverage_status: not-full-app
per_target_required_results: see README.md "Per-target Result Matrix" — all rows candidate-only (11) or diagnostic-only (2: get/set_usage_refresh_interval); none accepted at consumerStartReady or above
frontend_ccf_status: win=partial (minified-static: command-level wrapper/argKeys/invoke grounded; page-level component/route/state NOT reduced)
backend_ccf_status: missing (win; no IDA)
pseudocode_status: missing (win; no IDA for this module)
call_tree_status: missing
interface_status: partial (win-native input argKeys only: load_snapshot={localOnly,forceMetadata}, session/token/tool/change_analytics={range}, load_quota_history={accountKey}, refresh_single_account_usage={accountKey}, set_usage_refresh_interval={interval}, others=[]); output DTO / error envelope Unknown
error_path_status: missing (backend not reversed; only refresh_single_account_usage exposes a frontend-side .warnings[] consumption in its guard snippet)
boundary_status: partial (command-surface platform parity vs mac = zero-diff grounded; UI-level + backend boundary Unknown)
gate_leaf_status: consumerStartReady=false (frontend-command-surface pack); strictImplementationUse=false; readyToImplement=false; per-target candidate-only/diagnostic-only

## 依赖检查结果

1. `audits/windows-1.2.3-home-usage-frontend/` 此前 MISSING（`REVERSE-STATUS.md:4011` + `cross-1.2.3-home-usage-frontend` gate-report `gap_needs_reducer=2` 记录）——本包为其首次落地。
2. `audits/macos-1.2.3-home-usage-frontend/` 由并行会话 `macos-1.2.3-home-usage-frontend-reduce-20260726`（machine=<host>）在做；两包为配对两半，各写自有单平台 bundle，不合并、不互推。
3. `cross-1.2.3-home-usage-frontend` 是过渡性跨平台 DISTILLED 包（mac 侧 render-surface 已 reduce，win 侧曾记「command-scan only」）；本 win 单平台包**升级**了 win 侧证据描述：不仅命令面，还含 win-native minified-static CCF（wrapper/argKeys/部分 guard），但仍**无**页面级 reduce、**无**后端。

## Scripts / 复跑入口

- win 命令面清单：`jq -r '.command' raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl | grep -iE 'usage|analytics|snapshot|bootstrap|quota|mcp_server|refresh_single|usage_refresh' | sort -u`
- win 每命令 CCF（wrapper/argKeys/guard）：`jq -c 'select(.terminal_call.command==\"<cmd>\") | {cmd:.terminal_call.command, wrapper:.terminal_call.wrapper, argKeys:.terminal_call.argKeys, guards:[.handler_chain[].guards[]?.snippet]}' raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl`
- 命令面 mac/win diff（zero-diff 复核）：`diff <(jq -r .command raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl|sort) <(jq -r .command raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl|sort)`

## unknowns

- Windows 1.2.3 home/dashboard/analytics 页面级 UI 组件树、hooks、交互→命令映射、可见 UX 状态：Unknown（未 reduce）。
- win 本模块命令后端 owner + IDA decompile + callees/xrefs + 出参 DTO + error envelope + side-effect：Unknown（无 IDA session）。
- `get_usage_refresh_interval`/`set_usage_refresh_interval` 的具体 win UI 触发点（在 shell chunk `index-B40jKs17.js` 内联）。
- dim6 test/acceptance mapping：未做。

## do_not_infer

- 不得用 mac render-surface / mac 页面 reduce 推断 win render-surface（AGENTS.md 明文禁止跨平台外推；`doNotInferWindowsFromMacOS=true`）。
- 不得因命令面 13/13 zero-diff 就升级本包 gate_tier 到 consumerStartReady 或以上——命令存在 + minified CCF ≠ 页面 render-surface 与后端行为契约已闭合。
- 不得把 `cross-1.0.9-home-usage-frontend/DISTILLED` 的 mac DTO 形状（`CoreSnapshotPayload`/`UsageAnalyticsPayload` 等）当作 win 1.2.3 证据字段（跨平台 + 跨版本双重不合规）。
- 不得把本包当作后端 full-chain 已完成的证明。
