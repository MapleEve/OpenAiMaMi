# Evidence Pointers — macos-1.2.3-daemon-autoswitch

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend，daemon 6 命令）

- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/load_bootstrap_state_0x1007c8780.c`（92 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/note_usage_refresh_activity_0x1007cbfc0.c`（49 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/start_usage_refresh_watcher_0x1007cc0d0.c`（135 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/update_usage_refresh_schedule_0x1007cc7b0.c`（50 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/run_daemon_once_blocking_0x1007c8fe0.c`（620 行，**1.2.3 NEW-delta**，run_daemon_once 候选，身份未确认）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/run_daemon_once_blocking_0x1007ca0b0.c`（33 行，薄 dispatcher）
- `raw/aimami/1.2.3/macos-arm64/run_daemon_once_cli/ida/pseudocode/run_daemon_once_cli_0x1006f3190.c`（510 行，基线 same-set，LaunchAgent 实际调用的 CLI 入口）
- `raw/aimami/1.2.3/macos-arm64/run_daemon_once_inner/ida/pseudocode/run_daemon_once_inner_0x1006f43f0.c`（27 行，基线 same-set）
- **schedule_full_runtime_refresh：全树零命中，无 raw 证据**

## raw evidence（backend，daemon 底层 launchd 辅助函数，platform::daemon）

- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/install_daemon_0x10035ba10.c`（244 行，基线 same-set；写 `~/Library/LaunchAgents/dev.aionsale.auto-switch.plist`，label `dev.aionsale.auto-switch`，xattr -c 去隔离，launchctl unload+load）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/uninstall_daemon_0x10035c340.c`（440 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/check_daemon_state_0x10035d1a0.c`（50 行，no-tag；`fs::metadata` + `launchctl_label_exists` 双检查，三态：已装载/已安装未装载/未安装）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/launchctl_label_exists_0x10035d4e0.c`（54 行，基线 same-set；`launchctl list <label>` 退出码检查）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/command_error_text_0x10035d2d0.c`（117 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/escape_xml_text_0x10035c180.c`（60 行，基线 same-set）

## raw evidence（backend，auto-switch 7 命令 + 底层 repository/models）

- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/start_auto_switch_pending_watcher_0x1007cc8e0.c`（39 行，基线 same-set；`std::thread::lifecycle::spawn_unchecked` 后台线程 + tauri Context clone）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/load_pending_auto_switch_0x1007c8db0.c`（91 行，基线 same-set；包 `Repository::load_pending_auto_switch` mutex）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/dismiss_pending_auto_switch_0x1007cb840.c`（135 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/configure_auto_switch_0x1006fc4c0.c`（156 行，基线 same-set）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/set_auto_switch_0x1006fc0b0.c`（157 行，基线 same-set；包 `Repository::update_auto_switch_config` mutex，poisoned-lock 错误路径）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/confirm_pending_auto_switch_async_0x1000eac80.c`（104 行，no-tag；confirm_pending_auto_switch 候选，身份未确认）
- `raw/aimami/1.2.3/macos-arm64/commands/accounts/ida/pseudocode/perform_switch_payload_with_restart_0x1006a1800.c`（1360 行，**1.2.3 NEW-delta**，`[FULL — IDA decompiler 全解 53045B, 超大体分页取回]`；confirm_pending_auto_switch_and_restart_codex 候选，身份未确认）
- `raw/aimami/1.2.3/macos-arm64/commands/accounts/ida/pseudocode/resolve_cached_auto_switch_service_state_0x1006a6a80.c`（140 行，基线 same-set，非本 13 命令 canonical 清单成员，邻接证据）
- `raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/*.c` — 23 个文件，含 `auto_switch_config`/`update_auto_switch_config`（**NEW-delta**）/`sync_auto_switch_request`/`reconcile_auto_switch_request`（**NEW-delta**）/`restore_auto_switch_service`（**NEW-delta**）/`confirm_pending_auto_switch`(x2 地址，一个 NEW-delta 一个 same-set)/`dismiss_pending_auto_switch`/`clear_pending_auto_switch_request`（**NEW-delta**）/`clear_pending_auto_switch_request_if_cur`（**NEW-delta**）/`clear_auto_switch_transient_state`/`load_pending_auto_switch`/`load_local_state_synced`/`switch_account`/`logout`/`remove_accounts`/`store_bootstrap_snapshot_progressive`/`serialize`（x2）+ 5 个 serde `Deserialize` impl（`AutoSwitchConfig`/`AutoSwitchSnoozeRecord`/`RegistryFile`/`RegistryItem`）
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/*.c` — 12 个文件，`PendingAutoSwitchPayload`/`AutoSwitchStatusPayload`/`AutoSwitchRuntimeState` 的 `serialize`/`Deserialize`/`PartialEq` impl

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射；本包用 `grep -c "\"command\": \"<name>\""` 逐命令核对 8/13 有命中、5/13 零命中
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` — `set_auto_switch`（关闭切换按钮 + 乐观更新）、`configure_auto_switch`（阈值弹窗 + 前端 1-100 整数校验，L85-116/139）完整组件级触发链
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md` — App 根组件"待确认自动切号"横幅（`a7`/`s7`，L43429-43561）：`load_pending_auto_switch`（挂载拉取）+ `dismiss_pending_auto_switch`（跳过按钮）+ `confirm_pending_auto_switch_and_restart_codex`（确认按钮，字面量确认）完整组件级触发链，含 `auto-switch-pending` 事件监听
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` §3 — `auto-switch-DujJXz0W.js` 阈值校验/提交辅助模块（`configure_auto_switch` 参数装配细节，含 `enabled` 字段 undefined-vs-false 语义区分）

## RULE9 版本对照参照（历史基线，非 1.2.3 证据本身）

- `internal-reverse/audits/macos-1.0.9-daemon-autoswitch/`（同一 13 命令 canonical universe 起源，readyToImplement=true/full_leaf_100=true 全 13 命令，dim1-dim6 全闭合；gate-report.json/interfaces/{autoswitch-commands.md,daemon-commands.md}/logic/ACCEPTANCE-MAPPING-109.md 仅作 1.2.3 dim4/dim6 未来工作的结构模板参照，不作为 1.2.3 证据本身，尤其 8 个已确认 1.2.3 NEW-delta 函数在 1.0.9 时点根本不存在）
- `internal-reverse/audits/windows-1.2.3-daemon-autoswitch/`（同版本跨平台姊妹包，同日产出；本包 gate 姿态刻意与其对齐，见 reviews/CLAUDE.md）
- `internal-reverse/audits/macos-1.2.3-relay/README.md` — changelog 交叉引用来源："账号切换稳定性"条目

## INDEX.jsonl 命中（本次核实/append）

- 未新增 raw 证据（本次为 reduce-only pass，未跑新 IDA decompile）；本包合成依据的全部 .c 文件在 INDEX.jsonl 中已有既存条目（1.2.3 macos-arm64 raw-collection 大批次的一部分）
- 本次 append 1 行（kind=daemon_autoswitch_conclusion_reduce），见 session `mac-1.2.3-daemon-autoswitch-reduce-20260725`
