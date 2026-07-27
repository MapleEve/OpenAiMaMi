# REGISTRATION-TABLE-1.2.3 — windows-x64 accounts 命令注册表

来源：win 自有 `frontend/ipc-contracts.jsonl`（131 条，独立提取）+ 与 macOS 字节级相同的 `accounts-page-GdJYDnGj.js`（SHA-256 验证） + `raw/aimami/1.2.3/windows-x64/{account_io,auth,oauth_login,oauth_refresh,commands/accounts,codexmate_lib,repository}/ida/pseudocode/*.c`。命令名为前端 `invoke()` 字符串，非 Rust 内部函数名。

## consumerStartReady（4 条，前端调用点已确认 + 后端 wrapper 反编译成功）

| 前端命令 | 入参（argKeys，来自 win 自有 ipc-contracts.jsonl） | 前端触发点（继承自字节级相同页面） | 后端 wrapper 文件（win） | 疑似后端深叶 |
|---|---|---|---|---|
| `remove_accounts` | accountKeys | 卡片"移除"→确认弹窗（destructive） | `commands/accounts/remove_accounts_0x140cac5d0.c`（tauri command handler ground-truth 命名，pseudocode 完整） | `repository/remove_accounts_0_0x14038b750.c`（= mac `Repository::remove_accounts`，跨平台字符串签名匹配确认，cross-ref out-of-scope） |
| `export_accounts_to_file` | targetPath, accountKeys | 导出流程"继续"确认 | `codexmate_lib/export_accounts_to_file_0x140ca88a0.c`（tauri command handler ground-truth 命名，667 行 pseudocode 完整） | win `account_io`(1 文件，未具名) 证据极薄，未能独立闭合到 fs 写叶子；对照 mac `core::account_io::export_accounts` |
| `preview_account_import` | filePath | 导入按钮→原生文件选择 | `codexmate_lib/preview_account_import_0x140ca72c0.c`（565 行 pseudocode 完整，携带 `win 1.2.3 \| = mac codexmate_lib::run::{{closure}}` 跨平台注释） | 同上，win account_io 证据薄 |
| `begin_chatgpt_oauth_login` | （无参） | "+ 添加账号"→"开始" | `codexmate_lib/begin_chatgpt_oauth_login_0x140caa1f0.c`（tauri command handler ground-truth 命名，240 行 pseudocode 完整） | `oauth_login/exchange_code_for_tokens_0x1403c5510.c`（= mac `core::oauth_login::exchange_code_for_tokens`，跨平台字符串签名匹配确认，in-scope） |

## consumerStartBlocked（8 条）

### A. 后端 wrapper Hex-Rays 反编译失败（5 条，disasm-only，dim2 broken）

| 前端命令 | 后端 wrapper 文件 | 失败详情 |
|---|---|---|
| `switch_account_and_restart_codex` | `commands/accounts/switch_account_and_restart_codex_0x140cae510.c` | `HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CAF37A for case 5`；687 行仅反汇编，含 `src\commands\accounts.rs` panic-string 证据 |
| `refresh_single_account_usage` | `commands/accounts/refresh_single_account_usage_0x140cb15d0.c` | 同类失败（不同 case/target），760 行仅反汇编 |
| `switch_account` | `commands/accounts/switch_account_0x140cafd70.c` | 同类失败，687 行仅反汇编 |
| `refresh_usage_snapshot` | `commands/accounts/refresh_usage_snapshot_0x140cb44a0.c` | 同类失败，743 行仅反汇编 |
| `import_accounts_from_file` | `codexmate_lib/import_accounts_from_file_0x140ca4d00.c` | `HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CA5257 for case 5` |

注：`switch_account`/`switch_account_and_restart_codex` 虽 wrapper 本身反编译失败，但其深叶 `repository/switch_account_0_0x1403897f0.c`（= mac `Repository::switch_account`，跨平台字符串签名匹配确认）**反编译成功且携带完整 pseudocode**——这是 dim3 深叶证据强、但 dim2 wrapper 层证据缺失的不对称情形，本包遵循 Strict Leaf Readiness Clarification，不因深叶强而提升该 target 的档位。

### B. 后端 owner 完全未解析（1 条）

| 前端命令 | 状态 |
|---|---|
| `cancel_chatgpt_oauth_login` | win 自有 `ipc-contracts.jsonl` 确认命令存在于前端注册表，但全树 `grep` 未找到任何具名或可归属的 `.c` 文件。极可能是 `WIN-1.2.1-MODULE-RECOVERY.md` 记录的 18 个未精确命名 tauri 命令之一（字符串池无独立命中，或 2-函数歧义），本包未逐一核实具体是哪一个。 |

### C. 前端调用点本页内未确认（2 条，继承 mac 同文件发现）

| 前端命令 | 后端 wrapper 文件 | 状态 |
|---|---|---|
| `load_snapshot` | `commands/accounts/load_snapshot_0x140cb5e50.c`（tauri command handler ground-truth 命名，pseudocode 完整） | 后端已逆；因前端 JS 字节级与 mac 相同，`AccountsPage` 25 条交互内未见调用（mac 侧同一发现：仅推断为 `refreshLive` prop 实现，非确认），本包据同一份字节相同文件继承此结论 |
| `logout` | `commands/accounts/logout_0x140caaad0.c`（tauri command handler ground-truth 命名，pseudocode 完整） | 后端已逆；同上，25 条交互内未见调用 |

## 明确排除（accounts-adjacent，不属本包）

| 前端命令 | 实际拥有者 | 排除理由 |
|---|---|---|
| `configure_auto_switch` / `set_auto_switch` / `dismiss_pending_auto_switch` / `confirm_pending_auto_switch` / `confirm_pending_auto_switch_and_restart_codex` / `load_pending_auto_switch` | `commands::system`（win 侧部分在 `commands/system` 独立目录，部分在 `codexmate_lib` 抓总目录） | 同 mac 排除理由——物理实现不在 `commands::accounts` |
| `get_codex_router_auth_readiness` / `set_codex_router_no_account_mode` | `commands::relay` | win 侧确认于 `commands/relay/ida/pseudocode/set_codex_router_no_account_mode_0x140cb8050.c`，relay-adjacent，非账号域 |

## 破坏性副作用小结（本包命令子集，win 侧证据）

| 命令 | 破坏性动作 | 证据来源 | 是否有回滚/备份保护 |
|---|---|---|---|
| `remove_accounts` | 仓库层物理移除账号记录 | `repository/remove_accounts_0` → `rollback`/`recover_account_removal_quarantine`（均具名，跨平台字符串签名匹配确认，cross-ref） | 是（继承 mac 已记录的二阶段暂存-提交模式，本包未独立重读两个函数完整 body 逐行核实，仅确认函数存在+命名+行数） |
| `switch_account` / `switch_account_and_restart_codex` | 间接触发进程重启，深叶 `repository/switch_account_0`（= mac `Repository::switch_account`） | wrapper 本身反编译失败，无法读取回滚分支的 win 侧具体控制流；深叶函数存在但本包未独立重读其完整 body | Unknown（wrapper 层证据缺失） |
