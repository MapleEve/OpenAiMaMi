# FULL-CHAIN-1.2.3 — windows-1.2.3-sessions-analytics

模块级叙事调用链（非逐命令系统化 call-tree-to-leaf 归约文档；与 macOS 姊妹包 `logic/FULL-CHAIN-1.2.3.md` 记录的同一 caveat 一致——本文档只给模块级叙事，非逐命令归约）。

## 前端 → 后端入口（9 命令，命令名层已闭合）

前端 bundle 跨平台共享（单一 Tauri JS bundle），`invoke("<command>")` 目标与 macOS 一致。9 个命令：`load_sessions`/`delete_sessions`/`export_session_markdown`/`migrate_session_worktree`（SessionsPage）+ `load_change_analytics`/`load_session_analytics`/`load_token_analytics`/`load_tool_analytics`/`load_usage_analytics`（AnalyticsPanel）。命令名绑定本轮经 `frontend/ipc-contracts.jsonl` live grep 核实（见 pointers/evidence-paths.md）。

## sessions 命令族：wrapper → (未知中间跳转) → core

- `load_sessions`：入口 `codexmate_lib::load_sessions`（0x140c90f80，656 行，module src/lib.rs，tauri command handler ground-truth）→ ... → `core::sessions::load_sessions_0`（0x14073a730，4721 行，module src/core/sessions.rs，sqlite3+fs 混合读写）。本轮 `callees()` 未在 wrapper 直接 callee 列表中发现 core 函数地址；`xrefs_to()` 反查 core 函数确认调用者含未命名 `sub_14074F3F0`，即存在至少一层中间跳转，未继续向上追踪到 wrapper。
- `delete_sessions`：入口 `commands::delete_sessions`（0x14016c800，167 行，module codexmate_lib/commands，tauri command handler ground-truth）→ ... → `core::sessions::delete_sessions_0`（0x140749420，1126 行）。同样存在未追踪的中间跳转。
- `migrate_session_worktree`：入口 `codexmate_lib::migrate_session_worktree`（0x140c8cd60，807 行）→ ... → `core::sessions::migrate_session_worktree_0`（0x1407514d0，726 行）。`xrefs_to()` 确认 `load_sessions_0` 的调用者之一就是 `migrate_session_worktree_0`（同模块内部相互调用），佐证三者同属 `core::sessions` 紧密耦合模块。
- `export_session_markdown`：入口 `codexmate_lib::export_session_markdown`（0x140c8eb30，953 行）。**核心层对应函数本轮未定位**——953 行本身可能已内联渲染/序列化逻辑，或委托给 `sessions/` 目录内 14 个未命名 `sub_*` 之一，未确认。

## analytics 命令族：wrapper 内联/分散，无独立命名 core 层（与 macOS 结构性差异）

5 个 `load_*_analytics` 命令的 wrapper 均在 `commands/analytics/` 目录且带 ground-truth provenance（module src/commands/analytics.rs）。本轮 `callees()` 对 `load_change_analytics`（0x140cd3d40）做了实际调用：32 个直接 callee **全部**是未命名 `sub_*`，其中若干（如 `sub_14089E7F0`/`sub_140BEDB50`/`sub_140BE6930`）本身就是 `commands/analytics/` 目录内已有的 raw .c 证据文件。

这与 macOS 侧的结构**不对称**：macOS 有 8 个独立命名的 `core::session_analytics::compute_*` 函数，被 5 个 analytics 命令共享调用；Windows 侧目前没有找到对应的独立命名分析计算函数——业务逻辑很可能直接内联进每个 wrapper，或分散在多个未命名 helper 中。`analytics/` 目录唯一命名的核心函数 `compute_usage_analytics`（0x14086c970）本轮**未验证**是否被 `load_usage_analytics` wrapper 直接调用（未对该地址做 callees()/xrefs_to() 核实，留作 next-producer-step）。

## 已确认非本模块范围（angle-C 孤儿，已分类）

`codex_thread_visibility/`（session-meta 锚点查找/替换）与 `version-delta/session_meta_rewrite_{1,2,3}`——已确认属 `windows-1.2.3-relay` 包范围（该包 pointers 已登记 28 个已知子模块目录含 `codex_thread_visibility`），本包不认领。

## 与 macOS 侧的关系（不外推）

本文档记录的 Windows 结构发现（9/9 wrapper 存在、5 个 analytics 命令 core 层缺独立命名函数）**不用于**推翻或关闭 macOS 侧对应缺口/优势——各平台独立闭合，仅在 `data/task-plan.json next_producer_steps` 中作为下一轮生产者的定位线索记录。
