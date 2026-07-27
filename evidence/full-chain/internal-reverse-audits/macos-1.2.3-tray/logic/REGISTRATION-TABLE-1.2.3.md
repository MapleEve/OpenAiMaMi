# REGISTRATION-TABLE-1.2.3 — macOS tray（10 target / 12 raw .c 文件）

无前端 IPC 注册表条目（本模块无 `invoke()` 面，见 `SYSTEM-DIFF.md`）。下表为原生符号 → 地址 → 源目录 → 行为一览，供实现参照。

| # | 符号（mangled 短名） | 地址 | 源目录 | 一句话行为 | 破坏性/副作用 |
|---|---|---|---|---|---|
| 1 | `create_tray_menu` | 0x100356120 | `commands/tray_menu` | 统一入口：按快照就绪态分派 bootstrap / from_snapshot | — |
| 2 | `create_bootstrap_tray_menu` | 0x100357130 | `commands/tray_menu` | 引导态菜单构建（占位标题/副标题 + 路由子菜单 + 打开主窗口 + 退出） | — |
| 2b | `create_bootstrap_tray_menu::{closure}` | 0x100358060 | `commands/tray_menu` | `tauri::Error` 到字符串格式化的公用 panic-path helper | — |
| 3 | `create_tray_menu_from_snapshot` | 0x100358ae0 | `commands/tray_menu` | 完整态菜单构建（标题+用量副标题+逐账号 CheckMenuItem 列表+路由子菜单+打开主窗口+退出） | — |
| 4 | `append_codex_router_section` | 0x100358130 | `commands/tray_menu` | 追加"Codex Router 状态"子菜单区块（读 RelayManager 快照，按 provider 数格式化文案） | — |
| 5 | `handle_tray_menu_event` | 0x100356710 | `commands/tray_menu` | 菜单点击事件分发器（按 id 前缀/长度路由） | 间接触发应用退出（`tray_quit`→`request_user_quit`） |
| 5b | `handle_tray_menu_event::{closure}::{closure}` | 0x100702600 | `commands/tray_menu` | 调 `switch_account_and_restart_sync`，成功后 `refresh_tray_menu` | 进程重启（间接，经账号切换） |
| 6 | `refresh_tray_menu` | 0x1003565f0 | `commands/tray_menu` | **完整重建**（调 create_tray_menu）+ `TrayIcon::set_menu` 替换 | UI 状态变更 |
| 7 | `refresh_tray_menu_with_snapshot` | 0x10035a260 | `commands/tray_menu` | **完整重建**（调 create_tray_menu_from_snapshot）+ `TrayIcon::set_menu` 替换 | UI 状态变更 |
| 8 | `quota_text` | 0x100356050 | `commands/tray_menu` | 用量数字格式化为菜单项展示文案 | — |
| 9 | `load_tray_template_icon` | 0x1006f44c0 | `load_tray_template_icon`（根命名空间，非 `commands::`） | 解码内嵌 PNG → RGBA8 像素缓冲（基础托盘图标源） | — |
| 10 | `update_tray_recording_state` | 0x10068a5a0 | `core/voice/runtime/tray` | 找 "main" 托盘图标，重解码同一 PNG，录音中叠加红点，`set_icon`+`set_icon_as_template` | UI 状态变更 |

## 菜单项 id 命名空间（从字符串字面量交叉确认，非独立 xref 验证）

| id | 长度 | 语义 | 出现于 |
|---|---|---|---|
| `tray_bootstrap_title` | 21 | 引导态标题占位 | `create_bootstrap_tray_menu` |
| `tray_bootstrap_subtitle` | 20/23（两种上下文） | 引导态副标题占位 | `create_bootstrap_tray_menu` |
| `tray_active_title` | 17/18（字面量长度与 id 串长度对应关系未逐字节复核） | 已加载态标题 | `create_tray_menu_from_snapshot` |
| `tray_active_subtitle` | 20 | 已加载态副标题（用量文案） | `create_tray_menu_from_snapshot` |
| `tray_codex_router_status` | 24 | 路由状态子菜单 | `append_codex_router_section` |
| `tray_open_main` | 14 | 打开/前置主窗口 | `create_bootstrap_tray_menu`、`create_tray_menu_from_snapshot` |
| `tray_quit` | 9 | 退出应用 | 两条构建路径共用 |
| `tray_account:<key>` | 13+key长度（前缀匹配） | 逐账号切换项 | `create_tray_menu_from_snapshot`（生成）+ `handle_tray_menu_event`（消费） |

## 跨模块依赖（pointer-only，本包不展开这些函数自身逻辑）

- `commands::accounts::get_cached_display_snapshot` / `Repository::load_local_state_synced` / `commands::accounts::switch_account_and_restart_sync` — 见 `internal-reverse/audits/macos-1.2.3-accounts/`。
- `codexmate_lib::request_user_quit` — 未见独立 1.2.3 audits 包，raw 见 `raw/aimami/1.2.3/macos-arm64/request_user_quit/ida/pseudocode/`。
- `commands::hotspot::focus_main_window` — 见 `internal-reverse/audits/macos-1.2.3-system-hotspot/`。
- `core::relay::manager::RelayManager::snapshot` / `core::relay::storage::sanitize_for_export` — 见 `internal-reverse/audits/macos-1.2.3-relay/`。
- `core::voice::runtime::start_capture` / `apply_sidecar_event`（`update_tray_recording_state` 的调用方） — 见 `internal-reverse/audits/macos-1.2.3-voice/`。
