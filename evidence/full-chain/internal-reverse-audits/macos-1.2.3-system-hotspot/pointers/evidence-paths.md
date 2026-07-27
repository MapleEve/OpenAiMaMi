# Evidence Pointers — macos-1.2.3-system-hotspot

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, macOS，本包全部 18 文件直接 Read 核实）

- `raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/*.c` — 16 个函数：
  `hotspot_ready_0x1006fd130.c`、`set_window_alpha_0x1006fd220.c`、`focus_main_window_0x1006fd300.c`（NEW-delta）、
  `reveal_main_window_0x1006fd480.c`（NEW-delta）、`get_hotspot_enabled_0x1006fd5e0.c`、`set_hotspot_enabled_0x1006fd820.c`、
  `create_hotspot_window_0x1006fded0.c`、`refresh_hotspot_on_main_0x1006fe740.c`、`force_reveal_main_window_0x1006fe890.c`（NEW-delta）、
  `bring_main_window_forward_0x1006fe9f0.c`、`apply_native_hotspot_properties_0x1006fef70.c`、`schedule_hotspot_relayout_0x1006fec70.c`、
  `install_native_hotspot_observers_0x1006ff200.c`（NEW-delta）、`bring_main_window_force_forward_0x1006ff0f0.c`（NEW-delta）、
  `register_hotspot_relayout_observers_0x1006ff6f0.c`、`has_notch_0x1006ff890.c`
- `raw/aimami/1.2.3/macos-arm64/platform/screen/ida/pseudocode/*.c` — 2 个函数（本包首次归入 hotspot 范围，此前无 baseline 文档覆盖 `platform/screen`）：
  `has_notch_screen_0x1007026c0.c`、`compute_hotspot_frame_0x100702890.c`

## raw evidence（backend, Windows，5 文件全部直接 Read 核实）

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/has_notch_0x140193b70.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/get_hotspot_enabled_0x1401935f0.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/set_hotspot_enabled_0x140192d30.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/hotspot_ready_0x140192270.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/focus_main_window_0x1401927d0.c`
- 注：以上 5 文件位于 `commands/ida/pseudocode/` 根级，Windows 侧**没有**独立的 `commands/hotspot/` 子目录；也没有 `windows-x64/screen` 或 `windows-x64/hotspot` 目录（`find`/`grep -rl` 核实，13 个 macOS-only 函数在 Windows 侧零命中）

## raw evidence（相关 DTO/persistence，core/repository，非本包核心归属，交叉引用）

- `raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/dismiss_pending_auto_switch_0x100a69410.c`（本包核实读过——`RegistryFile` serde `expecting()` 桩，字符串列表含 `HotspotConfig`，但只是结构体名清单，非字段级信息）
- 同类命中（`HotspotConfig` 仅作为 struct-name-list 字符串出现，非 hotspot 专属逻辑）：`core/repository/serialize_0x100a79200.c`、`core/repository/__..._RegistryFile_deserial_0x100b065a0.c`、`core/repository/__..._RegistryItem_deserial_0x100b065c0.c`、`core/voice/workspace/generate_prompt_0x100af9940.c`、`core/relay/codex_runtime/maybe_persist_cache_0x100ac7050.c`（本包全部核实读过，均为同一 serde 泛型 glue 的 `expecting()` 桩，非 hotspot 归属函数）
- `commands/tray_menu/handle_tray_menu_event_0x100356710.c` — 命中 `codexmate_lib::commands::hotspot::focus_main_window` 的字符串引用（托盘菜单可能调用 `focus_main_window`，本包未展开该调用点，记录为交叉引用而非本包归属证据）

## raw evidence（frontend，本包核实读过相关章节）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md` — §1.2「Hotspot 菜单栏小组件」（`af==="hotspot"` 窗口路由分支 + `f7()->R2()` 组件树 + 点击/挂载交互表）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` — Settings 页 hotspot Switch 章节（`useQuery(["has-notch"])`→`useQuery(["hotspot-enabled"])`→`setHotspotEnabled` mutation）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` — Accounts 页 Quick-Settings 弹窗内 hotspot Switch 章节（同款双重门控 query + `set_hotspot_enabled` mutation，独立组件实例）
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 5 命令 grep 核实（`has_notch`/`get_hotspot_enabled`/`set_hotspot_enabled`/`focus_main_window`/`hotspot_ready`）
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md` L199-260/L625-626 — 3 命令 wrapper 交叉核实

## 结论底稿（非 audits/ canonical，供本包溯源，本包核实过）

- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §4「hotspot（16 文件）」— 与本包 §Backend Control Flow 逐函数交叉核对，未发现分歧
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/platform-baseline.md` — 核实其范围明确排除 `platform/screen`（只覆盖 process/paths/debug_log/daemon/single_instance/system_volume/proxy），确认 `platform/screen` 此前未被任何 baseline 文档覆盖，本包是首次归并

## 姊妹包交叉引用（本轮追加 INDEX.jsonl 前强制重读发现，重要）

- `internal-reverse/audits/macos-1.2.3-window-path/` — `focus_main_window`（`0x1006fd300`）的 canonical owner，已达 `strictImplementationUse`（dim1-5 全闭合，从 1.0.9 baseline `migrated_no_behavior_diff`）；其 `logic/WINDOW-PATH-DISTILLED-123.md` 解出该函数闭包为 `WryUserEvent(discriminant=28, focused=true)` via `send_user_message`。本包不重复认领该 leaf，仅交叉引用（详见 README.md/gate-report.json 的更正说明）。该姊妹包同时明确确认 `reveal_main_window`/`force_reveal_main_window`/`bring_main_window_forward`/`bring_main_window_force_forward`/`create_hotspot_window`/`set_window_alpha` **不**属于 window-path cluster（`ipc-contracts.jsonl` 零命中，非独立 IPC 命令），归属本包（`system-hotspot`）——双方范围边界经交叉核实一致，无冲突。

## INDEX.jsonl 命中（既有，历史版本，非本次新增）

- `aimami/1.0.9/{macos-arm64,windows-x64}/system/{get_hotspot_enabled,set_hotspot_enabled,hotspot_ready}` — 1.0.9 版本旧包，`strictImplementationUse`，与本包（1.2.3）版本不同不冲突
- `aimami/1.1.1/macos-arm64/hotspot/{get_hotspot_enabled,focus_main_window}`、`aimami/1.1.1/windows-x64/system/{get_hotspot_enabled,hotspot_ready,set_hotspot_enabled}` — 1.1.1 版本旧包
- `aimami/1.2.3/windows-x64/commands/relay/backend-pseudocode-leaf` 等 1.2.3 relay 条目——版本相同但模块不同，不冲突

## 本轮方法论声明

本轮为**蒸馏**（consolidation），未连接 IDA、未做任何新反编译或新 `func_query`/`export_funcs()` 调用；角度A（符号枚举）用 `find | wc -l` 文件系统计数复核（18 macOS + 5 Windows）；角度B（前端命令 diff）本轮直接对 `ipc-contracts.jsonl` grep 产出，`true_gaps=0`；角度C（语义孤儿扫描）用文本 `grep -rli hotspot` 代理（非 live 语义扫描），逐条命中人工分诊；角度D（manifest diff 四分类）本轮产出，见 gate-report.json unknowns。
