# Evidence Pointers — macos-1.2.3-tray

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（本包直接消费，12 文件全部本次会话读完）

- `raw/aimami/1.2.3/macos-arm64/commands/tray_menu/ida/pseudocode/*.c` — 10 个文件（create_tray_menu / create_bootstrap_tray_menu×2地址 / create_tray_menu_from_snapshot / append_codex_router_section / handle_tray_menu_event×2地址 / refresh_tray_menu / refresh_tray_menu_with_snapshot / quota_text）
- `raw/aimami/1.2.3/macos-arm64/load_tray_template_icon/ida/pseudocode/load_tray_template_icon_0x1006f44c0.c` — 1 个文件
- `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/tray/ida/pseudocode/update_tray_recording_state_0x10068a5a0.c` — 1 个文件

## 既有底稿（本包据此交叉核对，非独立新证据）

- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §5（tray_menu，10 文件独立既有分析，本包核对后一致，并记录一处纠正见 gate-report.json）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md` §3（core::voice::runtime::tray，1 文件独立既有分析，本包核对后一致）
- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（全 App 基线，含 1.2.3 相对 1.2.2 的 NEW-delta 函数清单，tray_menu 无成员在列）

## raw evidence（frontend，用于确认 0 IPC 命令面）

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 条全量 IPC 命令，`grep -i tray` 0 命中

## 跨模块 pointer（本包不展开，仅标注调用关系）

- `internal-reverse/audits/macos-1.2.3-accounts/` — `get_cached_display_snapshot`/`load_local_state_synced`/`switch_account_and_restart_sync` 归属
- `internal-reverse/audits/macos-1.2.3-system-hotspot/` — `hotspot::focus_main_window` 归属
- `internal-reverse/audits/macos-1.2.3-relay/` — `RelayManager::snapshot`/`sanitize_for_export` 归属
- `internal-reverse/audits/macos-1.2.3-voice/` — `update_tray_recording_state` 的调用方（`start_capture`/`apply_sidecar_event`）归属
- `raw/aimami/1.2.3/macos-arm64/request_user_quit/ida/pseudocode/` — `request_user_quit`（根命名空间）raw 存在，本包未见对应的 `internal-reverse/audits/macos-1.2.3-*` 结论包，仅指针

## 历史参照（不作证据迁移依据）

- `internal-reverse/audits/macos-1.0.9-tray/` — 见 manifest.json `prior_version_reference`，其 `readyToImplement=true` 声明不迁移到本包
- `internal-reverse/audits/windows-1.0.9-tray/` — 同上，未查看内容，仅记录存在

## Windows 1.2.3 raw（存在但本次未消费，超出本任务范围）

- `raw/aimami/1.2.3/windows-x64/tray/ida/pseudocode/sub_14025D570_0x14025d570.c`
- `raw/aimami/1.2.3/windows-x64/tray/ida/pseudocode/sub_1407190E0_0x1407190e0.c`
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/load_tray_template_icon_0x1401a26f0.c`

## INDEX.jsonl 命中 / 本次 append（append-only，未改旧行，会话前 1854 行 → 会话后 1857 行，+3 精确匹配）

- 既有：`aimami/1.2.3/macos-arm64/voice/core-voice-runtime-tray/backend-pseudocode-leaf`（session `voice123-audit-conclusion-append-20260724`，覆盖 `core/voice/runtime/tray` 1 文件）
- 本次新增（session `tray123-audit-conclusion-append-20260724`）：
  1. `aimami/1.2.3/macos-arm64/tray/commands-tray-menu/backend-pseudocode-leaf`（覆盖 `commands/tray_menu` 10 文件，index catch-up——raw 早于本会话已产出，本会话未连 IDA MCP，`sha256_binary` 如实标 `unknown-not-recorded-in-source-baseline`）
  2. `aimami/1.2.3/macos-arm64/tray/load-tray-template-icon/backend-pseudocode-leaf`（覆盖 `load_tray_template_icon` 1 文件，同上 catch-up 性质）
  3. `internal-reverse/audits/macos-1.2.3-tray/distillation-conclusion`（本结论包落盘的 conclusion-append 记录，`c5cm.internal_reverse.audit_conclusion.v1` schema，与 `macos-1.2.3-system-hotspot` 既有条目同构）
