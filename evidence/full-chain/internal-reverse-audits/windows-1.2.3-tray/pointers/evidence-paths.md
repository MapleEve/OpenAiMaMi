# Evidence Pointers — windows-1.2.3-tray

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（本包直接消费，5 文件全部本次会话读完）

- `raw/aimami/1.2.3/windows-x64/commands/tray_menu/ida/pseudocode/create_bootstrap_tray_menu_0x1403f2350.c` — 本次会话新 decompile（exact-name lookup_funcs 命中）
- `raw/aimami/1.2.3/windows-x64/commands/tray_menu/ida/pseudocode/handle_tray_menu_event_0x1403f1850.c` — 本次会话新 decompile（exact-name lookup_funcs 命中）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/load_tray_template_icon_0x1401a26f0.c` — 既有（2026-07-24 之前产出，跨平台字符串签名匹配）
- `raw/aimami/1.2.3/windows-x64/tray/ida/pseudocode/sub_14025D570_0x14025d570.c` — 既有（win-1.2.3-app-function-inventory-gapfill-20260724 session 产出，owner 未确认，见 unknowns）
- `raw/aimami/1.2.3/windows-x64/tray/ida/pseudocode/sub_1407190E0_0x1407190e0.c` — 既有，同上

## 未找到（本次会话 lookup_funcs exact-name 查询，7/10 Not found）

对 mac 侧 10 个 target family 名逐个在 live IDA MCP（<host>，本会话 server_health 已确认 status=ok/IDA decompiler_ready=true/module=AiMaMi.1.2.3 win64.exe）跑 `lookup_funcs`：

- `create_tray_menu` — Not found
- `create_tray_menu_from_snapshot` — Not found
- `append_codex_router_section` — Not found
- `refresh_tray_menu` — Not found
- `refresh_tray_menu_with_snapshot` — Not found
- `quota_text` — Not found
- `update_tray_recording_state` — Not found

以上 7 项本会话未再走 panic-Location xref / 调用图传播（RULE24 win-strip 方法论）；不当作已覆盖，`gate-report.json`/`data/task-plan.json` 标 `truly_undone`。

## 既有底稿（本包据此交叉核对，非独立新证据）

- `intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl` — 1133 行全 App win 归属集；`grep -i tray` 命中 3 行（sub_14025D570/sub_1407190E0/load_tray_template_icon），均 `on_disk:false`（本会话核实该字段已过期——三者 raw .c 实际均已在盘，字段未回写）
- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`

## raw evidence（frontend，用于确认 0 IPC 命令面）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 条全量 IPC 命令（与 mac 同版本同数），`grep -i tray` 0 命中

## 跨平台 sibling（不作证据外推依据）

- `internal-reverse/audits/macos-1.2.3-tray/` — 10/10 named target families, 12/12 raw .c files, consumerStartReady。本包仅借用其 target 名清单作为 win 侧 lookup_funcs 查询集，不将 mac 覆盖结果外推为 windows 覆盖（platformPolicy.doNotInferWindowsFromMacOS）

## 历史参照（不作证据迁移依据）

- `internal-reverse/audits/windows-1.0.9-tray/` — 声明 `accepted_full_leaf_100_windows_ida`，走原生 `Shell_NotifyIconW`/`RegisterClassW`/`TrackPopupMenu` API 链；本包未对其跑 RULE 9 diff，不迁移其 ready 档位。1.0.9 与 1.2.3 windows tray 疑似经历了从原生 win32 API 到 Tauri 跨平台 tray-icon 抽象层的架构迁移（依据：1.2.3 的 2 个命中函数名与 mac Rust 模块路径完全一致），未正式 diff 确认，记为 next_producer_steps。

## INDEX.jsonl 命中 / 本次 append（append-only，未改旧行）

- 既有：`aimami/1.2.3/windows-x64/tray/win-app-inventory-gapfill-leaf`（session `win-1.2.3-app-function-inventory-gapfill-20260724`，覆盖 sub_14025D570/sub_1407190E0 2 文件）
- 既有：`aimami/1.2.3/windows-x64/codexmate_lib/backend-pseudocode-surface-accounts-subset`（session `windows-accounts123-distillation-conclusion-append-20260725`，与 tray 无直接关系，仅同批次相邻行）
- 本次新增（session `windows-1.2.3-tray-audit-distillation-20260725`）：
  1. `aimami/1.2.3/windows-x64/commands/tray_menu/win-tray-audit-gapfill-leaf`（覆盖 `commands/tray_menu` 2 文件：create_bootstrap_tray_menu、handle_tray_menu_event，`sha256_binary` 本会话独立复核 = `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`）
