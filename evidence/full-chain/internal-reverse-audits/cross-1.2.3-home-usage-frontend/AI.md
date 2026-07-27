# AI Handoff — cross-1.2.3-home-usage-frontend (v2, 2026-07-26 synthesis upgrade)

status: v2 upgrade of a v1 (2026-07-25) transitional-DISTILLED bundle. v1's documented dependency gap (macos-1.2.3-home-usage-frontend / windows-1.2.3-home-usage-frontend both missing) is now resolved -- both landed 2026-07-26. This v2 synthesizes the two single-platform canonical bundles plus performs a read-only four-category orphan classification (rust-reverse-cookbook.md sec1 angle D) of this module's dim2 backend status against 6 additional cross-referenced canonical packages (sessions-analytics/relay/accounts/bootstrap+daemon-autoswitch/system-usage/mcp, each on both platforms where they exist). No new IDA MCP session run; no new raw/intermediate evidence produced; all cross-references are read-only pointers, no sibling package modified.
evidence_root: audits/macos-1.2.3-home-usage-frontend/ (PRIMARY) + audits/windows-1.2.3-home-usage-frontend/ (PRIMARY) + read-only cross-reference of audits/{macos,windows}-1.2.3-sessions-analytics, audits/{macos,windows}-1.2.3-relay, audits/{macos,windows}-1.2.3-accounts, audits/macos-1.2.3-bootstrap, audits/windows-1.2.3-daemon-autoswitch, audits/windows-1.2.3-system-usage, audits/{macos,windows}-1.2.3-mcp
versions: 1.2.3 (template/scope reference: cross-1.0.9-home-usage-frontend; NO cross-version data inference performed)
platforms: macos-arm64 (dim1 closed 8/10 in-scope commands, via macos-1.2.3-home-usage-frontend) + windows-x64 (dim1 NOT closed for any of 10, command-level minified-CCF only, via windows-1.2.3-home-usage-frontend)
target_universe: 13 total command-surface (mac==win byte-identical, grounded); 10-in-scope for this module per RULE 8a exclusion of load_mcp_servers(mcp)/set_usage_refresh_interval(system-usage)/refresh_single_account_usage(accounts). 10-in-scope: load_bootstrap_state, load_snapshot, load_usage_analytics, load_session_analytics, load_token_analytics, load_tool_analytics, load_change_analytics, load_quota_history, refresh_usage_snapshot, get_usage_refresh_interval.
locator_audit: canonical=10 in-scope, locator=10, missed=0, extra=0 (3 explicitly excluded and separately tracked, not silently dropped)
coverage: dim1 macOS 8/10 consumerStartReady + 2/10 consumerStartBlocked; dim1 Windows 0/10 closed (10/10 command-level-only). dim2 (backend, cross-referenced not primary): 8/10 have non-failed evidence in at least one sibling on at least one platform; 1/10 (load_bootstrap_state) has a cross-platform owner inconsistency; 1/10 (get_usage_refresh_interval) has a genuine truly_undone macOS gap.
coverage_mode: cross-platform-dim1-synthesis + read-only-dim2-cross-reference (NOT backend-owned-target-universe; this bundle owns no backend evidence itself)
owner_resolution_status: dim1 owner resolution delegated to and inherited from the two single-platform siblings (both consumerStartReady/belowConsumerStartReady tier already assigned by their own producer sessions). dim2 owner resolution for 8/10 commands performed THIS PASS via cross-reference read of 6 sibling package groups (angle D orphan classification) -- see manifest.json four_category_orphan_classification for full detail.
full_app_coverage_status: not-full-app
per_target_required_results: see README.md "Per-target Result Matrix (v2)" -- 8 rows consumerStartReady (mac) with cross-referenced dim2; 2 rows consumerStartBlocked; none accepted at full_leaf_100/strictImplementationUse/readyToImplement.
frontend_ccf_status: mac=mostly-closed (inherited from macos-1.2.3-home-usage-frontend, 2 source page docs, component-level, 8/10). win=command-level-only (inherited from windows-1.2.3-home-usage-frontend, minified-static, 0/10 page-level).
backend_ccf_status: cross-referenced for 8/10 (sessions-analytics x2 for 5 analytics commands; relay x2 for load_quota_history; accounts x2 for load_snapshot+refresh_usage_snapshot [win refresh_usage_snapshot FAILED]); different_machine_owner-with-open-status for load_bootstrap_state (mac closed via bootstrap, win open via daemon-autoswitch); truly_undone for get_usage_refresh_interval on macOS specifically (win has evidence via system-usage but that package itself is far from any gate tier).
pseudocode_status: cross-referenced only (see backend_ccf_status); this bundle does not itself hold any pseudocode evidence.
call_tree_status: missing everywhere -- dim3 not closed in this bundle OR in any of the 6 cross-referenced sibling groups. This is the real remaining bottleneck, distinct from dim2 owner-location (now largely cross-referenced).
interface_status: partial-frontend-input-only both platforms (range/accountKey/argKeys known); response DTO/error-envelope field-level extraction not done anywhere in any cross-referenced sibling either.
error_path_status: partial (UI-layer error/empty-state handling documented in macos-1.2.3-home-usage-frontend's own logic doc). Backend error envelope Unknown everywhere.
boundary_status: partial (command-surface platform parity grounded 13/13; UI-level Windows boundary Unknown; cross-platform module-boundary INCONSISTENCY discovered for load_bootstrap_state, see unknowns).
gate_leaf_status: consumerStartReady (macOS, 8/10, startMode=reverse_guided, inherited); strictImplementationUse=false; readyToImplement=false. Not upgraded despite 8/10 commands now having cross-referenced dim2 evidence -- dim3/dim4/dim6 remain open everywhere, which is the actual strict-tier gate, not owner-location.

## 依赖检查结果（v2 核心发现）

1. **v1 的依赖缺口已解除**：`audits/macos-1.2.3-home-usage-frontend/` 与 `audits/windows-1.2.3-home-usage-frontend/` 均已于 2026-07-26 落地。
2. **本模块 8/10 命令的后端已在 6 组 sibling 包中被 cross-reference 到**（详见 manifest.json four_category_orphan_classification）：
   - 5 analytics 命令 → `macos/windows-1.2.3-sessions-analytics`（均 consumerStartReady）。
   - `load_quota_history` → `macos/windows-1.2.3-relay`（均 consumerStartReady，语义身份 accepted_unknown）。
   - `load_snapshot`/`refresh_usage_snapshot` → `macos/windows-1.2.3-accounts`（mac 双闭合；win `load_snapshot` 闭合但 `refresh_usage_snapshot` Hex-Rays 反编译失败）。
3. **`load_bootstrap_state` 存在跨平台+跨模块归属不一致**：mac 由 `macos-1.2.3-bootstrap` 认领（已闭合，leaf `bootstrap_cache`）；win 由 `windows-1.2.3-daemon-autoswitch` 认领（未闭合，非 `windows-1.2.3-bootstrap`）——`windows-1.2.3-bootstrap` 自身 manifest 已经如实记录此不一致，需 `EXPLICIT_REASSIGN_OWNER` token 才可协调，本次不处理。
4. **`get_usage_refresh_interval` 的 macOS 后端是本模块唯一确认的 `truly_undone` 缺口**：逐一核对全部 15 个 macOS 1.2.3 canonical 包，无一覆盖此命令。Windows 侧 `windows-1.2.3-system-usage` 有 dim2 证据（VA `0x14018cbb0`），但该包整体仍 `blocks_start`。
5. **两个单平台 sibling 包的 scope 定义不一致**：`windows-1.2.3-home-usage-frontend/manifest.json` 未做 RULE 8a 排除（含全部 13 命令），与 `macos-1.2.3-home-usage-frontend` 的 10-in-scope 定义不同——本合成层采用 mac 定义为 canonical scope，把不一致列为待协调残留。

## Scripts / 复跑入口

- 命令面 diff 复核：`grep -oE '"command"[: ]*"[a-z_]+"' raw/aimami/1.2.3/{macos-arm64,windows-x64}/frontend/ipc-contracts.jsonl | sort -u`
- 两个单平台包详情：`audits/macos-1.2.3-home-usage-frontend/{README.md,gate-report.json,logic/FULL-CHAIN-1.2.3.md}`、`audits/windows-1.2.3-home-usage-frontend/{README.md,gate-report.json,logic/FULL-CHAIN-1.2.3.md}`
- 后端 cross-reference 核对：`audits/{macos,windows}-1.2.3-sessions-analytics/gate-report.json`、`audits/{macos,windows}-1.2.3-relay/{gate-report.json,logic/REGISTRATION-TABLE-1.2.3.md}`、`audits/{macos,windows}-1.2.3-accounts/{manifest.json,gate-report.json}`、`audits/macos-1.2.3-bootstrap/gate-report.json`、`audits/windows-1.2.3-bootstrap/manifest.json`（记录归属不一致的一方）、`audits/windows-1.2.3-system-usage/README.md`

## Unknowns

- Windows dim1 render-surface（10/10 命令）：Unknown，未 reduce；潜在低成本路径（chunk SHA-256 复用）未验证。
- `get_usage_refresh_interval` macOS dim2：`truly_undone`（唯一确认缺口）。
- `refresh_usage_snapshot` Windows dim2：Hex-Rays 反编译失败（真实缺口，非 accepted_unknown）。
- `load_bootstrap_state` 跨平台归属：mac/win 不一致，需协调。
- `load_quota_history` relay-owner 与本模块消费点是否同一 handler：`accepted_unknown`（命令名匹配，函数体未独立核实）。
- dim3/dim4/dim6：本包及全部 cross-reference 包均未闭合。

## do_not_infer

- 不得用 mac render-surface 证据推断 win render-surface 一致（AGENTS.md 明文禁止跨平台外推）。
- 不得因命令面 13/13 zero-diff 或 8/10 命令 dim2 已 cross-reference 就升级本包 gate_tier 到 strictImplementationUse——dim3/dim4/dim6 仍全开。
- 不得把本包当作 `macos-1.2.3-home-usage-frontend`/`windows-1.2.3-home-usage-frontend` 或任一后端归属包（sessions-analytics/relay/accounts/bootstrap/daemon-autoswitch/system-usage/mcp）的替代品——本包只做跨平台合成 + pointer 引用，不重复领取任何后端证据。
- 不得未经用户显式 `EXPLICIT_REASSIGN_OWNER` token 修改任一 sibling 包以"修正"跨平台归属不一致或 scope 定义不一致。
- 不得把 `load_quota_history` 的命令名匹配当作函数体参数签名已核实的证据。
