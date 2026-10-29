# backend-fullchain-win-sessions-analytics.md — AiMaMi 1.2.7 Windows 线程管理重构 + analytics delta

- session: `<审计会话>`（windows-x64）；行为合同以 mac 分册 `backend-fullchain-threads-analytics.md` 为准（红线5），本文件记 win owner/平台差异/新增判定
- 伪代码: `decomp-win-1.2.7/2xxx__sessions__*.c`（本域 73 文件，0 截断 0 失败）

## 1. sessions 健康与清理（7 条新命令，win 全部落位）

| 命令 | win handler | 规模 | 判定 |
|---|---|---|---|
| `inspect_session_index_health` | `0x140ae8340` | 4816B / 30cal | 命令串 0→1 新增；`SELECT count(*) FROM thread_items` owner `0x14035b070`（1526B/60bb/17cal，内联命中） |
| `clean_catalog_ghost_threads` | `0x140ae1940` | 4690B / 29cal | 0→1 新增 |
| `clean_missing_rollout_rows` | `0x140ae33c0` | 4690B / 29cal | 0→1 新增 |
| `clean_orphan_rollouts` | `0x140ae4e40` | 4690B / 29cal | 0→1 新增 |
| `clean_global_state_tmp_files` | `0x140ae68c0` | 4690B / 29cal | 0→1 新增（mac 侧亦判 NEW_BACKEND） |
| `export_sessions_batch` | `0x140ae9d50` | 6723B / 34cal | 0→1 新增；`jsonl` 字面量 5|18 倍增（导出面扩张） |
| `load_session_messages` | `0x140aec460` | 5480B / 32cal | 0→1 新增；`Untitled Session` 1|2 |

- 四个 clean_* handler 同为 4690B/29cal —— tauri 包装层同模板；真实清理逻辑在各 callee（已包含在 decomp 集）。

## 2. 线程可见性重写（thread_visibility 族，win 对应体）

| 函数 | win EA | 规模 | 判定 |
|---|---|---|---|
| repair_missing_rollouts_for_convergence | `0x14025c3f0` | 17666B / 630bb / **58cal** | mac 58cal —— callee 数精确一致；`missing-rollout repair` 串 2|2 底子保留，1.2.7 扩写（mac 80KB 伪代码级重写） |
| restore_no_account_model_threads | `0x140230dc0` | — | `no-account-model-restore` 内联命中；1.2.6 `set_codex_no_account_slots` IPC 删除后的收编恢复链（mac 红线32 CHANGED 清单成员） |
| model_fallback::restore_relay_model_threads | `0x140c90350` | — | `invalid model restore metadata` 内联命中；新文件面（`codex_thread_visibility_model_fallback.rs` panic 路径 IDB 双命中，1.2.6 win 0|2 新增） |
| 竞态重试/历史保留纪律 | 同上族 | — | `rollout changed while router migration was streaming` 串在 win 二进制存在（grep 1.2.6|1.2.7 均≥1，底子保留）；`thread_settings_applied` 0|1 新增 |

- `src\core\relay\codex_thread_visibility_history.rs` panic 路径 IDB 命中 `0x1419d595c`（前轮已证）；本轮两跳解析落位 history 新文件函数集。

## 3. analytics 重构（session_analytics 全删 → analytics 新体系）

- 新缓存: `analytics-v3.sqlite` owner `0x140f7eb70`（2046B / 46bb / 18cal，内联命中；字面量 1.2.6 win **0|1 新增**）—— 索引器 advance_generation 缓存 schema v3 在 win 同构。
- 解析器: `0x140f82290`（token_usage_record 内联命中；decomp 106666 字符，本轮最大单文件）；legacy 双路 tokens `0x140f95a00`（legacy_counter_reset owner）；后台 worker `0x140f7e180`（index_worker_unavailable owner，0|1 新增）。
- 命令面: `load_dashboard_analytics` → 0x140b37d80（5092B/35cal）、`set_dashboard_analytics_active` → 0x1405a8150（1150B/13cal）、`load_thread_analytics`/`load_thread_analytics_detail` → 0x140b32940（4863B/34cal，双命令共享）+ 0x140b36340（4509B/32cal）、`export_thread_statistics` → 0x140b34640（4665B/32cal）。全部命令串 0→1 新增。
- 导出防护: `statistics exports cannot replace`（符号链接防护）owner `0x14035cee0`（1463B/60bb/16cal，0|1 新增）。
- 删除面: `load_change/session/token/tool/usage_analytics` 5 条命令串在 1.2.7 win 二进制**全部消失**（1|0）——与 mac `core::session_analytics` 8 fns 全删结论一致。

## 4. codex_app_server 新 API + quota_history

- `thread/list` owner `0x140bbaa20`（6588B / 263bb / 27cal）+ `0x140c4a970`（5992B / 230bb / 25cal）；`thread/items/list`、`thread/fork` 命令串各 0→1/0→2 新增。
- **平台差异**：`useStateDbOnly` 在 win 双版本二进制均 0 命中（mac list_thread_scope 使用）——win app-server 载荷字段面与 mac 存在差异，深层核对待 1.2.6 win IDB，PENDING。
- `load_quota_history` 命令双版本在（2|2）；range 参数漂移的后端新增面：`src\core\quota_history.rs` 两跳落位 `0x140ec7a00`（2573B / 104bb / 23cal）≈ mac load_history_range sz 2676 —— **跨平台规模高度对应**。

## 5. 未闭合/Unknown

- 1.2.6 win IDB 体级比对 PENDING（同 win-accounts §5）。
- export jsonl 行 schema 字段级（mac 侧 Unknown）win 侧同未闭合。
- `clean_orphan_rollouts` 删除白名单匹配条件未逐行核（mac 侧同此建议）。
