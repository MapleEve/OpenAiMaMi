# Evidence Pointers — windows-1.2.3-daemon-autoswitch

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（canonical 13 命令 universe 内，本 pass 已读取）

- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/run_daemon_once_0x140cc2700.c` — 完整伪代码，509 行
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/load_bootstrap_state_0x14018b520.c` — 完整伪代码（存在性确认，未全文读取）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/set_auto_switch_0x140c8b7a0.c` — 完整伪代码，636 行
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/configure_auto_switch_0x140cc5ed0.c` — **HEXRAYS_DECOMPILE_FAILED，仅原始反汇编，[TRUNCATED] 标记**
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/confirm_pending_auto_switch_0x140cbf6f0.c` — 完整伪代码，411 行
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/dismiss_pending_auto_switch_0x14018aa10.c` — 完整伪代码，143 行，本 pass 全文已读
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/load_pending_auto_switch_0x14018af90.c` — 完整伪代码，149 行，本 pass 全文已读
- `raw/aimami/1.2.3/windows-x64/repository/ida/pseudocode/auto_switch_config_0x1403904c0.c` — 完整伪代码，163 行，本 pass 全文已读（支撑性 leaf，非命令本体）
- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/switch_account_and_restart_codex_0x140cae510.c` — **HEXRAYS_DECOMPILE_FAILED，仅原始反汇编**；身份是否等价 `confirm_pending_auto_switch_and_restart_codex` 未确认

**canonical 命令名下零证据（5 条，与 1.0.9 缺失模式一致但未独立复核）**：`note_usage_refresh_activity`、`schedule_full_runtime_refresh`、`start_usage_refresh_watcher`、`update_usage_refresh_schedule`、`start_auto_switch_pending_watcher` — 全树 `find`/`grep` 零命中。

**canonical 命令名 `confirm_pending_auto_switch_and_restart_codex` 下零证据** — 全树 `grep -rl` 零命中。

## raw evidence（canonical scope 外，本 pass 附带读取的相邻发现）

- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/restart_codex_0x140cc0730.c` — 完整伪代码，427 行，本 pass 全文已读
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/export_debug_bundle_0x140cbce20.c` — 完整伪代码，643 行（行数确认，未全文读取）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/upload_debug_report_0x140cdff20.c` — 完整伪代码，445 行（行数确认，未全文读取）

## frontend evidence

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — win-native dim5 权威来源（任务指定），本 pass 逐命令 `grep -c`/`grep` 核实 13 canonical 命令 + 3 相邻 maintenance 命令的 tauriInvokeWrapper 命中情况
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` — 已产出的前端页面逆向文档（analytics-panel + maintenance-page + auto-switch 校验模块），本 pass 全文已读；`auto-switch-DujJXz0W.js` 一节的 `configureAutoSwitch` 参数与本 pass ipc-contracts.jsonl 观察到的 argKeys 精确匹配

## 结论底稿 / 姊妹包（internal-reverse 内）

- `internal-reverse/audits/windows-1.0.9-daemon-autoswitch/` — RULE9 baseline 参照（readyToImplement 9/13 + ABSENT 4/13），非迁移依据，本 pass 未做 diff-confirmed-empty 判定
- `internal-reverse/audits/windows-1.0.9-maintenance/` — `restart_codex` 1.0.9 baseline（strictImplementationUse），仅作背景参照，不构成本包证据
- `internal-reverse/audits/windows-1.2.3-relay/` — 同二进制不同模块姊妹包；其 `pointers/evidence-paths.md` 独立引用了 `auto_switch_config` 等 8 个函数作为 cross-reference（供交叉核对本包对该函数的独立读取结论）
- `internal-reverse/audits/windows-1.2.3-maintenance/` — 不同 3 命令域姊妹包（`rebuild_registry`/`clean`/`load_snapshot`），**不覆盖**本包相邻发现的 `restart_codex`/`export_debug_bundle`/`upload_debug_report`（已核实其 target_universe 声明，无重叠）

## INDEX.jsonl 命中（本次核实，未 append 新行——本 pass 未产出新 raw 证据，仅归并已有证据；INDEX append 留给下一轮真正跑 IDA 的生产者 pass）

- 既有 1.2.3 windows-x64 相关条目已核实存在（`repository/backend-pseudocode-surface-crossref-accounts` 引用 `auto_switch_config`）。
- 既有 1.0.9 windows daemon/auto-switch 相关条目（13 行左右，`aimami/1.0.9/windows/daemon/*`、`aimami/1.0.9/windows/*auto_switch*`、`consumer_bundle_closure`/`consumer_bundle_correction` 两条 daemon-autoswitch 收尾记录）已读取核对，用于本包 RULE9 baseline 对照。
- 本 pass 未新增 INDEX.jsonl 行——遵守红线6（append-only）且本 pass 未产出新 raw 证据（无新 `.c`/manifest 落盘），只产出本 `internal-reverse/audits/` 结论包本身。若需要为本结论包本身的产出登记一条 conclusion 类 INDEX 行，留给编排器在本 agent 返回后统一处理（参见任务描述"INDEX 追加(记 conclusion)"，由主循环执行 append 动作）。
