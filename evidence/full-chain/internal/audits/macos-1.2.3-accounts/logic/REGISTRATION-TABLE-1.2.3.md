# REGISTRATION-TABLE-1.2.3 — macOS accounts 命令注册表

来源：`frontend/ipc-contracts.jsonl` 关键词过滤 + `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` + `backend-baseline/{account-auth,commands}-baseline.md`。命令名为前端 `invoke()` 字符串，非 Rust 内部函数名（两者常不同，见各行"疑似后端函数"列，标 `(cross-ref, out-of-scope)` 的行深叶在 `core::repository`，本包未独立验证）。

## consumerStartReady（8 条，前端调用点已确认）

| 前端命令 | 入参（argKeys） | 前端触发点 | 后端 wrapper 文件（commands/*) | 疑似后端深叶 |
|---|---|---|---|---|
| `switch_account_and_restart_codex` | accountKey | 卡片"切换"→确认弹窗 | `commands/accounts/perform_switch_payload_with_restart_*.c` / `switch_account_and_restart_sync_*.c`（两个实现分支） | `Repository::switch_account`（cross-ref, out-of-scope） |
| `remove_accounts` | accountKeys[] | 卡片"移除"→确认弹窗（destructive） | `commands/accounts/remove_accounts_0x100700090.c` | `Repository::remove_accounts` → `SnapshotQuarantine::{stage,commit_and_purge,rollback}`（cross-ref, out-of-scope） |
| `refresh_single_account_usage` | accountKey | 卡片"刷新配额"图标 | `commands/accounts/refresh_single_account_usage_0x100700580.c` | `Repository`-层用量富化簇（cross-ref, out-of-scope） |
| `export_accounts_to_file` | path, selectedKeys | 导出流程"继续"确认 | `commands/account_io/export_accounts_to_file_0x1006f9b70.c` | `core::account_io::export_accounts`（in-scope，已读） |
| `import_accounts_from_file` | filePath, expectedContentSha256, overwriteExisting, selectedKeys | 导入预览弹窗"确认" | `commands/account_io/import_accounts_from_file_0x1006fa3d0.c` | `core::account_io::import_accounts`（in-scope） |
| `preview_account_import` | path | 导入按钮→原生文件选择 | `commands/account_io/preview_account_import_0x1006f94f0.c` | `core::account_io::preview_import`（in-scope，已读完整伪代码） |
| `begin_chatgpt_oauth_login` | （无参） | "+ 添加账号"→"开始" | `commands/account_oauth/begin_chatgpt_oauth_login_0x1000e7050.c` | `core::oauth_login::{generate_pkce,build_authorize_url,open_in_browser,exchange_code_for_tokens}` + `core::account_io::persist_account_auth`（均 in-scope） |
| `cancel_chatgpt_oauth_login` | （无参） | OAuth 弹窗 busy 中"取消" | `commands/account_oauth/cancel_chatgpt_oauth_login_0x1005dc7a0.c` | 本地状态机 `advance_operation`/`finish_operation`（in-scope，同目录） |

## consumerStartBlocked（4 条，前端调用点本页内未确认）

| 前端命令 | 后端 wrapper 文件 | 状态 |
|---|---|---|
| `load_snapshot` | `commands/accounts/load_snapshot_0x1006ffc90.c` | 后端已逆；前端仅**推断**（非确认）为 `refreshLive` prop 的实现，命名/参数形状吻合但未逐层反查父组件源码 |
| `logout` | `commands/accounts/logout_0x100701a70.c` | 后端已逆；`AccountsPage` 25 条交互中未见调用，可能在 Settings 或其它未逆页面 |
| `switch_account` | 无独立 wrapper 文件命中（`commands/accounts` 46 文件中未见与此字面量直接对应的文件名；1.0.9 版本历史证据显示曾有独立 owner `0x1005e3cd0`/wrapper `0x1001e32c4`，1.2.3 未重新核实） | 后端存在于共享 IPC 命令注册表（`index-B40jKs17.js`），`AccountsPage` 未见调用，可能走 tray_menu 原生分发 |
| `refresh_usage_snapshot` | `commands/accounts/refresh_usage_snapshot_with_retry_0x1006a0ea0.c`（推断，字面量后缀 `_with_retry` 与命令名 `refresh_usage_snapshot` 不完全一致） | 后端已逆；`AccountsPage` 未见调用 |

## 明确排除（accounts-adjacent，不属本包）

| 前端命令 | 实际拥有者 | 排除理由 |
|---|---|---|
| `configure_auto_switch` / `set_auto_switch` / `dismiss_pending_auto_switch` / `confirm_pending_auto_switch` / `confirm_pending_auto_switch_and_restart_codex` / `load_pending_auto_switch` | `commands::system` | 物理实现不在 `commands::accounts`，见 `commands-baseline.md` §2 |
| `has_notch` / `get_hotspot_enabled` / `set_hotspot_enabled` / `hotspot_ready` | `commands::hotspot` | 独立悬浮小窗模块，被 AccountsPage 快捷设置弹窗消费但非账号域 |

## 破坏性副作用小结（引自 commands-baseline.md §12，本包命令子集）

| 命令 | 破坏性动作 | 是否有回滚/备份保护 |
|---|---|---|
| `remove_accounts` | 仓库层物理移除账号记录（deep leaf: `SnapshotQuarantine::commit_and_purge` 的 `remove_dir_all`） | 是——二阶段暂存-提交模式，失败走 `rollback` |
| `logout` | 清除账号登录态/托管凭据 | Unknown（`Repository::logout` 未在本包 in-scope 内读到实现细节） |
| `switch_account_and_restart_codex` | 间接触发进程重启；失败时 `finish_switch_failure`/`FileRestoreState::restore` 会 `remove_file` | 是——切换前 capture，失败回滚 |
