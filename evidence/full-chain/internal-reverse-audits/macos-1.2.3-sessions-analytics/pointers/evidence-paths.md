# Evidence Pointers — macos-1.2.3-sessions-analytics

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, macOS）

- `raw/aimami/1.2.3/macos-arm64/commands/sessions/ida/pseudocode/*.c` — 3 个命令 wrapper 文件（delete_sessions/export_session_markdown/migrate_session_worktree）
- `raw/aimami/1.2.3/macos-arm64/core/sessions/ida/pseudocode/*.c` — 29 个函数（含 walkdir/visit_0x10053cb30.c 子目录一份）
- `raw/aimami/1.2.3/macos-arm64/core/session_analytics/ida/pseudocode/*.c` — 8 个函数
- `raw/aimami/1.2.3/macos-arm64/core/analytics/ida/pseudocode/*.c` — 24 个文件（16 个去重函数，见 manifest.json dedup_note）

## raw evidence（backend, Windows — 已定位未闭合）

- `raw/aimami/1.2.3/windows-x64/sessions/ida/pseudocode/*.c` — 17 个文件（3 个专名：delete_sessions_0/load_sessions_0/migrate_session_worktree_0；14 个 sub_* 未命名）
- `raw/aimami/1.2.3/windows-x64/analytics/ida/pseudocode/*.c` — 4 个文件（含 compute_usage_analytics 专名）
- `raw/aimami/1.2.3/windows-x64/commands/analytics/ida/pseudocode/*.c` — 15 个文件（5 个专名：load_change/session/token/tool/usage_analytics；10 个 sub_* 未命名）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §2 — SessionsPage 完整逆向
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` §1 — AnalyticsPanel 完整逆向
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（131 行）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/index-B40jKs17.js` — beautify 后源文件

## angle-C 孤儿扫描命中（已分类，不认领）

- `raw/aimami/1.2.3/macos-arm64/core/relay/codex_thread_visibility/ida/pseudocode/*.c`（~30 个函数：session-meta/rollout 补丁与恢复）— already_in_canonical，属 `internal-reverse/audits/macos-1.2.3-relay/` 包范围
- `raw/aimami/1.2.3/macos-arm64/core/relay/codex_project_state/ida/pseudocode/backfill_missing_cwd_from_rollouts_*.c`（3 个重载）— 同上
- `raw/aimami/1.2.3/macos-arm64/core/relay/codex_diagnostic/ida/pseudocode/*.c`（6 个函数）— 同上
- `raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/store_bootstrap_usage_analytics_0x100a70800.c` — different_machine_owner / 相邻持久化模块，尚无 audit 包，本轮不认领

## 结论底稿参照（同批产出的姊妹包，供交叉核对方法论）

- `internal-reverse/audits/macos-1.2.3-relay/`（RULE8 骨架模板来源）

## INDEX.jsonl 命中（本次核实/append）

见 `internal-reverse/INDEX.jsonl` 本次 append 的 `aimami/1.2.3/macos-arm64/{commands/sessions,core/sessions,core/session_analytics,core/analytics}/backend-pseudocode-leaf` 条目，session id `sessions-analytics123-audit-distill-20260724`。append-only，未改旧行。
