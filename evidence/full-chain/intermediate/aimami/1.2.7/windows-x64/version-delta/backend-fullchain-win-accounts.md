# backend-fullchain-win-accounts.md — AiMaMi 1.2.7 Windows 账号模块 delta（切换/添加/重置卡/到期高亮）

- session: `<审计会话>`（windows-x64，接续 mac 侧 `<审计会话>`）
- IDB: `<本地路径>\AiMaMi.1.2.7 win64.exe.i64`（live，auto_analysis_ready=true，反编译就绪=true）；**全程只读 IDA 操作，零 open_file、零版本切换、零 IDB 写**（用户 2026-09-30 指令）
- 口径: 行为合同以 mac 分册（`intermediate/aimami/1.2.7/macos-arm64/version-delta/backend-fullchain-accounts.md`）为准，本文件只记 win 侧 owner 定位、平台差异与新增/保留判定（红线5/8：不重述 mac 结论、不外推）
- 伪代码: `decomp-win-1.2.7/1xxx__accounts__*.c`（本域 44 文件，0 截断 0 失败）；锚点: `win-symbol-body-diff.json` + `_stage1_anchors.json`

## 1. 账号切换修复面（win 实证）

| 函数 | win EA | 规模 | 对应 mac | 判定 |
|---|---|---|---|---|
| 切换命令分派/聚合体 | `0x1405a8ba0` | 28374B / 429bb / 174cal | switch_account 族 | 体内直接引用命令串 `switch_account`（str EA `0x141a09220`）；同一函数亦被 `get_usage_refresh_all_accounts`/`confirm_pending_auto_switch_and_restart_codex` 命令串引用 |
| finish_switch_failure_with_client | `0x140c5b650` | 11113B / 377bb / 60cal | mac 9891B/352bb/59cal | **1.2.7 新增，双平台一致**（三条回滚校验字面量 owner 均为本函数：`Restored auth.json does not match` / `auth.json still exists after rollback` / `Registry active account does not match`；三串在 1.2.6 win 二进制 0 命中） |
| switch_account_and_restart_codex handler | `0x140b0ffd0` | 3721B / 113bb / 26cal | — | 命令串 1.2.7 新增（0→1）；反编译重试后仍 null（与其同尺寸孪生 `0x140b11830` 疑似 ICF 折叠），census 事实在案，行为合同经 `0x1405a8ba0` 主切换体间接闭合 |
| confirm_pending_auto_switch_and_restart_codex handler | `0x140b1d470` | 2499B / 21cal | — | 同上 |
| load_pending_auto_switch handler | `0x14059ea50` | 904B / 12cal | — | — |

- 错误码锚（win 二进制 grep，1.2.6|1.2.7）：`SWITCH_LIVE_VERIFY_FAILED` 2|2、`SWITCH_ROLLBACK_CAPTURE_FAILED` 1|1 —— **两错误码为 1.2.6 底子**；1.2.7 的变化在快照覆盖面（mac 侧 bb 216→462 已证）与 finish_switch_failure 新函数，不在错误码新增。两串在 IDB 内无直接代码 xref（`.rdata` 0x141a39cb4/0x141a39cf4，串存在但 owner 未经直接 xref 解析）——判定 owner 需 1.2.6 win IDB 体级比对，PENDING。
- 与 mac 一致的结论：切换失败修复 = 回滚快照面扩大 + 失败收尾三重验证（auth.json 一致性/残留检测/registry 匹配）。

## 2. 添加账号修复面

- `persist_oauth_account`（win owner `0x140173120`，5196B / 152bb / 35cal，OAUTH_COMMIT_NOT_STARTED owner；该串 1.2.6 win 0|1 新增；`OAUTH_CLIENT_UPDATE_DEFERRED` 同样新增）——「添加账号 commit 未启动保护 + 客户端延迟重启」在 win 侧同样存在。
- `set_account_alias` 命令（win handler `0x140b0c6a0`，4043B / 28cal；命令串 0→1 新增；`Invalid account remark` 字面量 0|1 新增；`src\commands\account_alias.rs` panic 路径在 IDB 双命中）——win 侧确认为新命令。

## 3. 重置卡子系统（全新，win 实证）

| 命令 | win handler | 规模 |
|---|---|---|
| `get_account_reset_credits` | `0x140b0b3a0` | 2998B / 24cal |
| `get_account_reset_credit_history` | `0x140b09e20` | 3464B / 25cal |

- 命令串双 0→1 新增；`src\commands\account_reset_credits.rs` + `src\core\repository\account_reset_credits.rs` panic 路径在 IDB 命中，两跳恰好落回上述两 handler。
- 守卫字面量 win 全部 0|1 新增：`Reset card credentials are unreadable` / `Invalid reset credit history cursor` / `Reset card account identity does not match` —— 与 mac 四层校验链（凭据存在→可读→身份匹配→请求）一致。
- cursor 分页协议（events/next_cursor/occurred_at）为 mac 侧结论，win 侧同构（同一前端合同，红线5 迁移引用）。

## 4. 到期高亮（observer + 用量刷新）

- `account_observer`（win owner `0x140c4f610`，1760B / 66bb / 19cal，`aimami-account-observer` 线程名 ×2 内联命中；线程名字面量 1.2.6 win 0|1 新增）——常驻观察线程 win 在。
- 用量刷新命令族 win handlers：`get_usage_refresh_interval` 0x1405a0d00（904B/12cal）、`set_usage_refresh_interval` 0x1405a0420（1499B/15cal）、`get_usage_refresh_all_accounts` 0x1405a8ba0（共享聚合体）、`set_usage_refresh_all_accounts` 0x14059fd90（1150B/13cal）。
- `usage_401_retry`（0x140216100 owner，1424B/42bb/11cal）1.2.6 win 1|1 **底子保留**；401 退避刷新机制非 1.2.7 新发明，1.2.7 扩展的是 all_accounts 开关与 schedule 面（mac 侧结论）。
- **平台差异（dim5）**：mac 观测状态字面量 `authinfo` 在 win 二进制双版本 0 命中——win 观测状态命名不同（疑为 `auth.json` 直读命名差），owner 级核对待 1.2.6 win IDB，PENDING。

## 5. 未闭合/Unknown（win 侧）

- 1.2.6 win IDB 未开（用户指令：版本切换仅用户操作）→ 同名函数体级 callee 集合比对（红线32 的 1.2.6 侧线）PENDING；本文件判定基于二进制字符串锚 + xref owner + 跨平台规模对应。
- rollback snapshot 的 30 字段级 DTO（mac 侧亦未闭合）在 win 侧同样未逐字段命名。
