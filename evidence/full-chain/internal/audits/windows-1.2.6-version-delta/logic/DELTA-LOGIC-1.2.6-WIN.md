# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 版本 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 逻辑,基于 128cmd-identity-ledger + commands-platform-coexisting-body-diff + backend-function-diff + authoritative-symbol-diff-v2-live-verified。

## 命令集变化

- IPC 命令合同集:134→134(0 added / 0 removed)——identical_contract,前端命令面无变化。
- commands:: 函数:67→74(+7,+10.4% noise_below_2x)
- platform:: 函数:51→53(+2,+3.9% noise_below_2x)
- 128cmd identity ledger:8 already-paired(same handler)+ 126 remaining(v126_renamed=95, v126_still_sub=29, v126_unresolved=10)

## 真实变化候选(body-level diff)

1. **codex_bundled_cli_path 候选串集缩减**:1.2.4 候选集含 Codex.exe(大写)+ App Paths 注册表风格串;1.2.6 同形态函数仅剩小写 codex.exe + 目录段,注册表候选移出。1.2.6 侧已完整反编译。
2. **ChatGPT 桌面应用定位器(sub_140B370F0)**:1.2.6 新增能力——10 环境变量候选 + reg query + powershell + where 四级定位链解析 ChatGPT 桌面应用路径。1.2.4 文档零对应。5839B/227 blocks/25 callees,无截断。

## same-set(handler 已配对确认)

8 命令已配对确认 same handler:clean, get_image_compat, get_claude_web_search_compat, set_claude_web_search_compat, remove_mcp_server, open_path, get_codex_router_auth_readiness, set_codex_no_account_slots。

## 平台分歧

- delete_sessions:mac removed 但 win 1.2.6 handler 存在(0x140d5d450)——平台分歧,非 win removal。
- mac removed 功能符号(router_unlock_auth::cleanup_for_native_off, codex_thread_visibility::fallback/patch/reconcile_threads 等)——win handler 状态需逐一核验。

## 规范 delta 文件引用

- `intermediate/aimami/1.2.6/windows-x64/version-delta/delta-commands.txt` — 126 remaining + 2 real_change_candidates
- `intermediate/aimami/1.2.6/windows-x64/version-delta/same-commands.txt` — 8 paired + 8 function_level_pairs
- `intermediate/aimami/1.2.6/windows-x64/version-delta/removed.txt` — mac removed (win cross-check)
- `intermediate/aimami/1.2.6/windows-x64/version-delta/VERSION-DIFF.md` — full diff with census + 128cmd ledger + closure

## 原始证据引用

- `raw/aimami/1.2.6/windows-x64/backend/{reasoning-content-cleanup,codex-router-auth-readiness,codex-no-account-slots,claude-web-search-compat,voice-runtime-*,deepseek-v4-flash-migration,...}/`
- `internal-reverse/audits/windows-1.2.6-version-delta/pointers/evidence-paths.md`

## Full-chain 结论（消费者面向，2026-08-09）

### Delta 命令 full-chain 产出

对 delta-commands.txt 中所有带 EA 的命令（116 delta + 1 real change candidate = 117）逐个走 full-chain，每个命令产出 4 个规范文件（evidence.md + ida/pseudocode/<slug>.c + call-tree.json + interface-report.json），落盘到 `raw/aimami/1.2.6/windows-x64/<module>/<cmd>/`。

**产出统计**：
- 总命令数：117（116 delta + 1 chatgpt 定位器）
- 反编译成功：114（Hex-Rays decompile OK）
- 反编译失败：3（decompile_null：load_snapshot, import_accounts_from_file, configure_auto_switch）
- 失败命令仍产出 leaf，.c 文件标注 DECOMPILATION FAILED，call-tree/interface 从 callee 集合构建
- Call-tree gate：117/117 PASS（edges >= 5 或 terminated_reason）
- Interface report：117/117 written

**模块分布**（消费者面向，按 Rust 模块路径归类）：

| 模块 | Leaf 数 | 消费者面向结论 |
|---|---|---|
| commands/accounts | 17 | 账号切换/导入导出/自动切换/用量刷新，完整 owner+callee+interface |
| commands/system | 62 | 系统/进程/注册表/调试/代理/守护/通知/热点/自启动/深链解析 |
| commands/relay | 16 | relay provider CRUD/网络/quota/router 配置/导入导出 |
| commands/voice | 2 | voice_processing_done + request_accessibility_permission |
| commands/sessions | 4 | session CRUD/markdown 导出/worktree 迁移 |
| commands/mcp | 3 | MCP server 加载/新增/启停 |
| commands/skills | 6 | skill 安装/备份/恢复/删除 |
| commands/analytics | 6 | 用量/quota/session/token/tool/change 分析 |
| platform/process | 1 | ChatGPT 桌面应用定位器（1.2.6 新增） |

注：大量 voice 命令被归入 commands/system（因 IDA 注释指向 src\commands\system.rs 而非 voice.rs）。模块归属基于 IDA 反编译器注释中的源码路径推断，非最终确认。

### Same 命令复用（不重逆）

8 命令已配对确认 same handler，复用 1.2.4 raw 证据：
- clean, get_image_compat, open_path, get_codex_router_auth_readiness → shared dispatcher (0x140174120)
- get_claude_web_search_compat (0x14014ade0), set_claude_web_search_compat (0x140d47c70)
- remove_mcp_server (0x140156d90), set_codex_no_account_slots (0x140d75ea0)

### Confirmed absent（不产出 rawleaf）

10 命令在 win 1.2.6 IDB 中未找到 handler EA（v126_ea=None），标记 confirmed_absent：
default_debug_bundle_file_name, cancel_chatgpt_oauth_login, check_update_installability, load_custom_instruction_state, cancel_voice_trigger_capture, preview_custom_instruction_apply, apply_custom_instruction, clear_custom_instruction_block, rollback_custom_instruction, get_system_info

可能原因：(a) 前端声明但后端未实现；(b) 编译器多块即时字节比较消除符号；(c) 平台差异。前端 IPC 合同集 134=134 无变化。

### 破坏性副作用编目

在 117 leaf 的 interface-report.json 中检测到以下破坏性副作用关键词（非穷尽，基于伪代码文本扫描）：
- restart/kill：switch_account_and_restart_codex（重启 Codex 进程）、force_kill_codex、restart_codex、confirm_pending_auto_switch_and_restart_codex
- delete/remove：remove_accounts、delete_sessions、remove_skill、delete_skill_backup、remove_voice_template 等
- 详见各 leaf 的 interface-report.json `side_effects` 字段

### Gate 状态（2026-08-09 round9 disk-grounded 验证终稿）

- delta_gate_verdict: PASS_100_PERCENT_implementation_leaf（117/117 命令到达 implementation leaf）
- dim1: PASS — 前端 134 IPC 命令 + 254 CCF 节点；全部 134 条 ipc-contracts.jsonl 有 argKeys 字段（49 个空 [] 为无参命令）；orphan=0
- dim2: PASS — 117/117 delta 命令有 owner_ea + pseudocode；114 decompile_ok + 3 decompile_null 经 callee_count>=5 门通过；10 confirmed_absent；8 same-command reuse
- dim3: PASS — 125/125 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason（8 个 backend leaf 用多目标 targets[] schema）
- dim4: PASS — 125/125 raw leaf 有 interface-report.json 且含 argKeys/sideEffects/error_strings（8 个 backend leaf 用 commands[].argKeys+sideEffects 多命令 schema）
- dim5: PASS — 126 raw leaf 全部在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true/module=AiMaMi 1.2.6 win64.exe；win 证据独立产出，非从 macOS 外推
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（阻塞于 dim6 pending + live_reference_parity=false）
- gate_accepted: false（缺 dim6 验收 + 真机对照）
- live_reference_parity: false（red line 25 未对照）

### 四角度完整性（cookbook§1，2026-08-09 验证）

- 角度A func_query 符号枚举: PASS — 1050 attributed functions across 69 App src/*.rs modules；117 delta 命令 owner 全部经 win-strip 三层恢复法（红线24）定位
- 角度B 前端 CCF + invoke grep: PASS — 134 命令全部有 argKeys 字段；10 个 confirmed_absent（非 true_gaps，经 find_regex+find_bytes 验证命令名字符串在 1.2.6 win 镜像中完全缺失）；orphan=0
- 角度C exports 全量函数语义扫描: PASS — 限定 string-pool 扫描找到 116 个 src-path 命中收敛到同样的 69 个模块；run/daemon 命名空间检查 0 命中；非命令后端面检查发现 single-instance watcher + voice_trigger 已在 69 模块归因内；无孤儿模块
- 角度D manifest covered_commands diff: PASS — 10 个孤儿分类为 truly_undone 后经 find_regex+find_bytes 验证重分类为 confirmed_absent；0 truly_undone 残留；无需新开工作单

### 破坏性副作用编目（消费者面向）

⚠ 以下命令含破坏性副作用，实现侧须特别注意：
- restart/kill: switch_account_and_restart_codex（重启 Codex 进程）、force_kill_codex、restart_codex、confirm_pending_auto_switch_and_restart_codex
- delete/remove: remove_accounts、delete_sessions、remove_skill、delete_skill_backup、remove_voice_template、remove_voice_vocabulary、remove_voice_vocabulary_app_scope、remove_voice_mode_shortcut、remove_voice_history_entry
- write/mutation: configure_auto_switch（配置文件写入+运行时刷新）、set_auto_switch、update_voice_runtime_settings、import_accounts_from_file、import_relay_config、import_skill
- 详见各 leaf 的 interface-report.json `side_effects` 字段
