# win-backend-delta-notes.md — AiMaMi 1.2.7 Windows 侧后端 delta 现状（census 级 + 本轮活体抽查）

> **2026-09-30 续轮状态回执**（session `<审计会话>`，只读 IDA、零版本切换）：本文 §4 工作单已由续轮部分闭合——①win 变更面深提取完成（558 目标函数 census + 176 份 live decompile 落盘，`decomp-win-1.2.7/`，0 截断 0 空桩；2 个反编译 null 体如实记录在 win-symbol-body-diff.json：0x140b0ffd0/0x140b11830 同尺寸疑似 ICF 孪生，桩文件不留盘）；②红线32 win 线以「二进制字符串锚 + xref owner 映射 + 跨平台规模对应」方式闭合到 provisional 粒度（`win-symbol-body-diff.json`；1.2.6 win IDB 未开，体级 callee 线仍 PENDING）；③`platform::process` 差异已闭合（Toolhelp32 API 族 vs mac ps 子进程，见 `backend-fullchain-win-router-catalog.md` §3）；④`load_runtime_display_snapshot` 双平台双版本二进制 0 命中强化。四份分册：`backend-fullchain-win-{accounts,sessions-analytics,router-catalog,anthropic-platform}.md`。win 深恢复（红线24 全量 dirtree 命名）仍未做——本轮 IDA 只读纪律禁止 IDB 写操作，留工作单。以下为原 census 级记录（历史，保留）。

- session: `<审计会话>`
- 二进制: `raw/binary/AiMaMi.1.2.7 win64.exe`（sha256 `06091864…`，盘点轮记录）；IDB `<本地路径>\AiMaMi.1.2.7 win64.exe.i64`
- IDA 状态（本轮 server_health 实测）: status=ok，**auto_analysis_ready=true**（盘点轮时为 false，现已完成），反编译就绪=true
- 定位: 本文件为 win 侧本轮可达深度（census + strings 活体抽查）；win 深恢复（红线24 三层：panic-Location 两跳 + 调用图传播 + 命令名命名）与 win 函数体级红线32 比对 = **下轮工作单**，本轮不做、不宣布 win 完成（红线28：mac 未收口前不开 win 新深工）

## 1. 本轮 win 活体抽查（win IDB find_regex 实测，2026-09-30）

| 证据 | 结果 |
|---|---|
| `reveal_relay_api_key` 命令串 | 命中 `0x141a10ac7` —— 盘点轮边缘项关闭：win 1.2.7 已注册该命令 |
| `get_account_reset_credits` / `get_account_reset_credit_history` | 命中 `0x141a29f94` / `0x141a29f64` —— 重置卡命令双平台在 |
| panic-Location 路径 | `src\core\repository\account_reset_credits.rs`（`0x1419d8ad9`）+ 模块名串 `codexmate_lib::core::repository::account_reset_credits`（`0x1419d8b20`）+ `src\commands\account_reset_credits.rs`（`0x141a2b528`） |
| `src\core\relay\codex_thread_visibility_history.rs` | 命中 `0x1419d595c`（线程可见性新文件面 win 在） |
| Anthropic 面 | `src\core\relay\translator\anthropic_search.rs`（`0x1419d6a0f`）/ `anthropic_tools.rs`（`0x1419e67e8`）/ `chat_content.rs`（`0x141a6d2e5`）+ 错误串 `anthropic_search_incomplete`（两处） |
| `src\core\relay\native_repair_catalog.rs` | 命中 `0x1419eca5e` |
| `src\commands\account_observer.rs` + `codexmate_lib::commands::account_observer` | 命中 `0x141a3dcf5` / `0x141a3dd16` |
| `load_runtime_display_snapshot` | **0 命中**（与 mac census 一致）→ 双平台均无后端符号，强化 migration-matrix open_items 判定 |

> 2026-10-08 补记（fable 对抗终验残留收口，session `<审计会话>`）：上行「0 命中→双平台均无后端符号」结论已于 2026-10-06 被池化碎片机制证伪——win 真 handler glue `0x1405EC7D0` 已命名注册在案（dispatcher 池化双窗 + `.rdata` IPC 注册表项），禁实现已撤销（win 合同 §8.1 与 2026-10-06 unban amendment）；「与 mac census 一致」仍如实（mac 侧零符号，win-only 注册）。本文为日期化中间证据，原文保留不改动。

## 2. 承接盘点轮的 win census 结论（引用，不重跑）

- 新增 27 个 src 路径与 mac 模块面 1:1（`intermediate/aimami/1.2.7/version-delta/win-src-path-diff.json`）
- 20 条新增 IPC 命令 18 条 win strings 命中；本轮活体抽查再把 `reveal_relay_api_key` 关闭为 win 在（该命令不在 20 条清单内，属 CCF 边缘项）
- 删除的 7 条命令 win strings 全消失；`fix_codex_router_issue`/`run_codex_router_diagnostics` 串在 1.2.6 win 已存在（底子），1.2.7 正式命令化

## 3. win 侧 dim5 平台差异备忘（供下轮验证，非本轮结论）

- `run_diagnostics_with_mode` 的进程扫描叶 mac 为 `ps -ax -o etime=,comm=`；win 必为不同实现（tasklist/NtQuerySystemInformation 族），**未验证**
- `open_macos_privacy_pane` 为 mac-only 命令（mac census 双侧在）；win 对应面未查
- CodexPaths 目录族 win 布局未逆

## 4. 下轮 win 工作单（不阻塞本轮 mac 结论）

1. win 1.2.7 深恢复（红线24）：panic-Location 两跳 → 严格调用图传播 → tauri 命令名精确命名（本机 IDB 已 auto-analysis 完成，可直接开工）
2. win 红线32 体级比对：43 个真实漂移候选的 win 对应函数（恢复命名后）basic_blocks + callee 集合比对
3. `platform::process`、`CodexPaths` win 路径族、HTTP 客户端栈差异核对
4. `load_runtime_display_snapshot` 若消费侧需要：从 mac/win IPC 注册表（tauri generate_handler）双向定位注册与否

   2026-10-08 补记：本工作单项已于 2026-10-06 完成（unban 轮经 dispatcher 池化双窗 + `.rdata` IPC 注册表项双向定位：win 注册在案、mac 零符号），不再是待办。
