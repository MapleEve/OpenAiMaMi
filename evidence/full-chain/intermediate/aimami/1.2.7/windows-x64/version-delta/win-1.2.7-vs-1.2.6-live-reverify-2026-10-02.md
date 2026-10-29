# win-1.2.7-vs-1.2.6-live-reverify-2026-10-02.md — 更新前 1.2.7 逐字节核查（live 双 IDB）

- session: `<审计会话>`（windows-x64，只读 IDA，零 open_file / 零版本切换 / 零 IDB 写）
- 输入: 1.2.7 win IDB = `AiMaMi.1.2.7 win64.exe`（**更新前**旧 exe，server_health module 名实证 + 12/12 已知新 handler EA 的 size/bb 与 2026-09-30 census 全等）；1.2.6 win IDB = `AiMaMi 1.2.6 win64.exe`
- 方法: 逐函数 reloc-masked body-hash 全二进制匹配（带 xref 指令尾部 min(4,len-1) 字节清零掩重定位位），分块 live 枚举，集合求交
- 结论性质: 覆盖**更新前**的 1.2.7。用户更新后的新 1.2.7 exe 未加载到任何 IDA 实例，本报告不含新 exe 的任何结论（见文末 BLOCKED）

## 1. 全二进制体级匹配（live 重算，2026-10-02）

| 指标 | 值 |
|---|---|
| 1.2.6 函数数 | 106272 |
| 1.2.7 函数数 | 112715 |
| 体级一致(modulo 重定位) | 84431 |
| 仅 1.2.6 有 | 21841 |
| 仅 1.2.7 有 | 28284 |
| 净新增函数 | +6443 |
| 1.2.6 匹配率 | 79.45% |
| 1.2.7 匹配率 | 74.91% |
| 1.2.6 未匹配字节占比 | 46.7% |
| 1.2.7 未匹配字节占比 | 50.5% |

复算与既有 artifact `win-body-match-1.2.6-to-1.2.7.json`（2026-10-01）计数**完全一致**（84431/21841/28284）→ 既有 artifact 仍准确描述当前加载的旧 1.2.7；字节总数微差（23590510 vs 23706642）源于 XrefsFrom 异常回落时保守掩码，属方法噪声非版本漂移。

## 2. 命令集 diff（符号名级）

- **1.2.7 新增 28 命令**（handler EA 全部 live 复核；30/32 handler 体级 unmatched vs 1.2.6 即真实新增，2 个 EA 0x1405a0d00/0x1405a0420 已 live 证实为函数起点且尺寸与 census 一致）：
  clean_catalog_ghost_threads, clean_global_state_tmp_files, clean_missing_rollout_rows, clean_orphan_rollouts, export_sessions_batch, export_thread_statistics, get_account_reset_credit_history, get_account_reset_credits, get_usage_refresh_all_accounts, inspect_session_index_health, load_dashboard_analytics, load_session_messages, load_thread_analytics, load_thread_analytics_detail, run_codex_router_diagnostics, set_account_alias, set_dashboard_analytics_active, set_usage_refresh_all_accounts, fix_codex_router_issue, reveal_relay_api_key, get_usage_refresh_interval, set_usage_refresh_interval, switch_account, switch_account_and_restart_codex, confirm_pending_auto_switch_and_restart_codex, load_pending_auto_switch, preview_account_import, set_codex_router_no_account_mode
- **1.2.7 删除 7 命令**：get_codex_router_auth_readiness, load_change_analytics, load_session_analytics, load_token_analytics, load_tool_analytics, load_usage_analytics, set_codex_no_account_slots —— 7 串在 1.2.7 IDB 全段字节扫描 0 命中（live 复核 2026-10-02）。

## 3. 重点关注面逐字节分类（census 目标函数）

| 面 | census 目标 | 体级变更 vs 1.2.6 | 未变更 | 其他（邻域/共享） |
|---|---|---|---|---|
| accounts 账号卡片切换/添加/重置/到期高亮 | 44 | 34 | 3 | 10 |
| sessions 线程管理重构 | 73 | 69 | 2 | 4 |
| router 智能路由重构 | 33 | 28 | 6 | 3 |
| anthropic+platform Anthropic V1/ChatGPT 目录 | 20 | 19 | 0 | 1 |

各面具体内容（owner/规模/判定）见四份分册 `backend-fullchain-win-{accounts,sessions-analytics,router-catalog,anthropic-platform}.md` 与结构化件 `win127-live-reverify-bytecheck-2026-10-02.json`；本表为其 live 体级复核结论，无推翻。

## 4. 与既有 artifact 的一致性裁决

既有 win 1.2.7 delta 证据束（win-symbol-body-diff / 四角度 / 四分册 / body-match）在**旧 1.2.7**口径下全部复算一致，未发现需要推翻的结论。用户「更新后多了几百 KB、修了一堆 bug」指向的是**另一个更新的 1.2.7 构建**，当前任何 IDA 实例都未加载它。

## 5. BLOCKED（需用户动作）

1. 用户更新后的新 1.2.7 win exe **未加载到任何 IDA 实例**（红线37：agent 禁止 open_file/切换版本）。要核「新 1.2.7 vs 1.2.6」或「新 1.2.7 vs 旧 1.2.7」，须用户把新版 exe 加载进 IDA 后告知端口。
2. 新版 exe 二进制本体未入 `raw/binary/` SOT（仅有 2026-09-30 的 `AiMaMi.1.2.7 win64.exe`）。
