# Full Chain — sessions-analytics (AiMaMi 1.2.3, macOS-arm64)

模块级端到端调用链叙述（narrative only — 非逐命令 call-tree-to-leaf 归约文档，见 gate-report.json dim3 caveat）。

## 1. Sessions（会话/线程管理）

**前端触发**：`SessionsPage`（`Js` 根组件，`sessions-page-D0Y3peQj.js`）挂载即 `useQuery(["sessions"], () => z.loadSessions())`（无 `staleTime`）→ `invoke("load_sessions")`。

**后端**：`codexmate_lib::core::sessions::load_sessions`（`0x1005292a0`，5205 行伪代码 — Rust 单态化/内联导致的超大函数体，非截断桩，已确认非失败反编译）。核心逻辑：打开 codex CLI 的 sqlite 数据库（`open_codex_db`）→ 读取 rollout 索引（`build_rollout_index`）→ 逐会话补丁 cwd（`patch_rollout_cwd`，两个重载）→ 判定可见性（`is_codex_visible_session`）→ 组装 session 列表返回前端。

**删除**：`SessionsPage` 复选框选中 + 确认弹窗 → `delete_sessions` mutation → 命令 `commands::sessions::delete_sessions`（`0x1005dca30`，183 行专名 wrapper，含 tracing mutex/panic-count 样板）→ `core::sessions::delete_sessions`（`0x1005330f0`）→ sqlite 删除 + 关联备份清理。

**导出 Markdown**：行内导出图标 → 前端先动态 import 拿 Tauri 原生保存对话框 → 用户选路径 → `export_session_markdown(id, path)` → 命令层是一个纯 thin closure wrapper（`0x1007020d0`，20 行，只做参数拆包+内存释放）直接调 `core::sessions::export_session_markdown`（`0x100537c00`，156 行）→ `render_export_markdown` 渲染正文 → `normalize_export_text`/`sanitize_backup_segment`/`ensure_markdown_extension`/`format_export_timestamp` 辅助规范化 → `serialize_export_content` → `std::fs` 写文件。

**迁移 worktree**：行内迁移图标（仅 `canMigrate===true` 时渲染）→ `migrate_session_worktree(id)` → 命令 `commands::sessions::migrate_session_worktree`（`0x1007021b0`，156 行专名 wrapper）→ `core::sessions::migrate_session_worktree`（3 个重载 VA：`0x10053a020`/`0x10053b930`/`0x10053b9b0`，大概率是针对不同调用点的单态化实例而非 3 个不同函数）→ `normalize_workspace_root` → `update_session_cwd_in_connection`（3 个重载）→ sqlite 更新 + `patch_rollout_cwd`。

**备份/恢复叶子**：`backup_codex_db`/`backup_regular_file`/`restore_regular_file_from_backup`/`migration_backup_path` 是共享的 fs 备份基础设施，被上述多条链路复用；`walkdir::visit`（`0x10053cb30`）用于遍历会话目录树。

## 2. Session/Usage Analytics（六 tab 数据面板）

**前端触发**：`AnalyticsPanel`（`Lt`，`analytics-panel-6jtfGEeX.js`）按 tab 懒加载：

- `sessions` tab → `p` query → `load_session_analytics(range)` → `core::session_analytics::compute_session_analytics`（`0x100a886f0`，399 行）
- `token` tab → `d` query → `load_token_analytics(range)` → `compute_token_analytics`（`0x100a87560`，502 行）
- `tools` tab → `x` query → `load_tool_analytics(range)` → `compute_tool_analytics`（`0x100a86be0`，537 行）
- `changes` tab → `j` query → `load_change_analytics(range)` → `compute_change_analytics`（`0x100a87f80`，381 行）
- `activity` tab（`At` 子组件独立 query，`staleTime:Infinity`）→ `load_usage_analytics()` → `core::analytics::compute_usage_analytics`（`0x10068b060`，1553 行，全模块最大函数）

4 个 `compute_*_analytics`（除 usage）共享同一套输入管道：`parse_all_sessions`（`0x100a854a0`，988 行，遍历+解析全部会话 rollout 文件）→ `range_to_cutoff`（"today"/"week"/"month" → 时间戳截止点）→ `timestamp_to_date`（分桶）→ `visit_dir`（`0x100a88e50`，walkdir 遍历辅助）。`compute_usage_analytics` 走独立管道（`core::analytics` 命名空间下自己的 5 个 DTO serialize 函数 + 2 个 deserialize field-visitor，对应 `SessionStats`/`DailyActivity`/`TodaySummary`/`UsageAnalyticsIndex`/`UsageAnalyticsPayload` 等 DTO 类型的 serde 手写实现）。

**命令层缺口**：以上 5 个 `load_*` 命令在 macOS 侧原始证据树中**没有**对应的 `commands::sessions::load_*_analytics` 或 `commands::analytics::load_*` 专名 wrapper 文件——只有 core 层的 `compute_*` 实现。`load_sessions` 同样没有独立的 `commands::sessions::load_sessions` wrapper 文件，`core::sessions::load_sessions` 本身即是目前唯一的证据锚点。18 个通用 `framework-monomorph/tauri-ipc-dispatch/ida/pseudocode/ipc_dispatch_0x*.c` 是 Tauri 命令分发的单态化桩，但未在本轮证据中与具体命令名做 xref 绑定。Windows 侧证据显示 `commands::analytics` 是真实存在的独立 Rust 源码模块（见 SYSTEM-DIFF.md），提示 macOS 侧此缺口更可能是证据采集缺口而非折叠匿名分发——留给下一轮生产者用 rodata-xref 方法（cookbook §4）定位。

## 3. 重复归档说明

`core/analytics/ida/pseudocode/session_analytics_*.c`（8 个文件）与 `core/session_analytics/ida/pseudocode/*.c` 中对应 8 个文件是**同一 VA、同一函数体**的重复归档（diff 验证仅 header 注释行不同），不是额外反编译的函数，见 manifest.json `dedup_note`。
