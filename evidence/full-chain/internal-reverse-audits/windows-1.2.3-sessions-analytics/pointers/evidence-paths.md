# Evidence Pointers — windows-1.2.3-sessions-analytics

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, Windows — 本轮核实/新增）

- `raw/aimami/1.2.3/windows-x64/sessions/ida/pseudocode/*.c` — 17 个文件。3 个专名核心层函数：`delete_sessions_0_0x140749420.c`（1126 行）/`load_sessions_0_0x14073a730.c`（4721 行）/`migrate_session_worktree_0_0x1407514d0.c`（726 行），header 标注 `module src/core/sessions.rs`；14 个 `sub_*` 未命名。
- `raw/aimami/1.2.3/windows-x64/analytics/ida/pseudocode/*.c` — 4 个文件。1 个专名：`compute_usage_analytics_0x14086c970.c`；1 个 `log_0x141683e59.c`（日志辅助非业务函数）；2 个 `sub_*` 未命名（`sub_14067FA70`/`sub_140FFC490`，本轮 live decompile 核实两者均已带 `module src/core/analytics.rs | attributed via call-graph propagation` header，即目录归属已存在，仅业务命名未定）。
- `raw/aimami/1.2.3/windows-x64/commands/analytics/ida/pseudocode/*.c` — 15 个文件。5 个专名 command wrapper：`load_change_analytics_0x140cd3d40.c`/`load_session_analytics_0x140cd99b0.c`/`load_token_analytics_0x140cd79e0.c`/`load_tool_analytics_0x140cd5b90.c`/`load_usage_analytics_0x140cde3c0.c`，header 标注 `module src/commands/analytics.rs | tauri command handler ... ground-truth`；10 个 `sub_*` 未命名。
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/{load_sessions_0x140c90f80.c, migrate_session_worktree_0x140c8cd60.c, export_session_markdown_0x140c8eb30.c}` — **本轮新纳入指针**（macOS 姊妹包的 cross_platform_sibling 注记未提及这 3 个文件）。header 标注 `module src/lib.rs | tauri command handler = <name> | mapped via command-name string xref (win-native, ground-truth)`，与 `sessions/` 目录下同名核心函数是不同 VA 的独立函数（本轮读取两份 header 确认，非去重复制品）。
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/delete_sessions_0x14016c800.c` — **本轮新纳入指针**（167 行，`module codexmate_lib/commands`，header 标注 tauri command handler ground-truth，与 `sessions/delete_sessions_0_0x140749420.c` 是不同 VA 的独立函数）。

## raw evidence（frontend）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 行）— 本轮 live grep 核实 9 个目标命令全部命中：`delete_sessions`/`export_session_markdown`/`load_sessions`/`migrate_session_worktree`/`load_change_analytics`/`load_session_analytics`/`load_token_analytics`/`load_tool_analytics`/`load_usage_analytics`。
- 无 Windows 专属 `frontend/pages/*session*.md`/`*analytics*.md` 文档；本包按「跨平台共享单一 Tauri JS bundle」假设复用 macOS 姊妹包的 `frontend/pages/mcp-sessions-settings-skills-frontend.md` §2 与 `frontend/pages/analytics-maintenance-autoswitch-frontend.md` §1（该假设本轮仅在命令名层核实，未在组件树/状态模型层为 Windows 独立复核）。

## live IDA MCP 调用记录（本轮，<host>，红线17门通过）

- `server_health` → `status=ok, uptime_sec=122661.071, IDA decompiler_ready=true, module="AiMaMi.1.2.3 win64.exe"`（门通过后才进行下方调用）
- `decompile {"addr":"0x14067fa70"}` → 确认 module attribution header（analytics/ 未命名 sub 之一）
- `callees {"addrs":["0x140cd3d40"]}` → `load_change_analytics` 32 个直接 callee，全部为未命名 `sub_*`（其中数个已在 `commands/analytics/` 目录有对应 raw .c）
- `callees {"addrs":["0x140c8eb30","0x140c90f80","0x140c8cd60"]}` → 3 个 `codexmate_lib` command wrapper 的直接 callee 列表均不含 `sessions/` 核心函数地址
- `xrefs_to {"addrs":["0x14073a730","0x1407514d0","0x140749420"]}` → `load_sessions_0` 的确认调用者含 `migrate_session_worktree_0`（同模块自引用）与未命名 `sub_14074F3F0`（中间跳转，未继续追踪）
- `func_query {"queries":["session"]}` → 返回非过滤的通用前 50 函数列表，0 条含 "session"，判定该工具参数不是简单名称子串过滤，记为 accepted_unknown（tool-limitation，非覆盖率缺口）

## angle-C 孤儿扫描命中（已分类，不认领）

- `raw/aimami/1.2.3/windows-x64/codex_thread_visibility/ida/pseudocode/{find_session_meta_anchors,find_first_session_meta_line,stream_replace_session_meta_lines}*.c`
- `raw/aimami/1.2.3/windows-x64/version-delta/ida/pseudocode/session_meta_rewrite_{1,2,3}*.c`
- 以上均已在 `internal-reverse/audits/windows-1.2.3-relay/pointers/evidence-paths.md` 记录的 28 个已知 Windows 子模块目录清单内（含 `codex_thread_visibility`）——already_in_canonical，属 `windows-1.2.3-relay` 包范围，本包不认领、不进一步逆。

## 结论底稿参照（RULE8 骨架模板来源）

- `internal-reverse/audits/macos-1.2.3-sessions-analytics/`（同模块姊妹包，target_universe 命令清单与前端页面文档复用来源；本包不外推其 gate 结论到 Windows）
- `internal-reverse/audits/windows-1.2.3-relay/`（Windows 侧 RULE8 骨架格式参照）

## INDEX.jsonl 命中（本次核实/append）

见 `internal-reverse/INDEX.jsonl` 本次 append 的 `aimami/1.2.3/windows-x64/{sessions,analytics,commands/analytics,codexmate_lib,commands}/backend-pseudocode-leaf` 条目，session id `sessions-analytics123-win-audit-distill-20260725`。append-only，未改旧行。
