# Evidence Pointers — windows-1.2.3-accounts

所有路径均相对 ``（本会话按红线 16 硬编码 SMB 绝对路径，未用 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` 写盘）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, in-scope，本包主证据）

- `raw/aimami/1.2.3/windows-x64/account_io/ida/pseudocode/*.c` — 1 个文件（`sub_14052D960`，未具名）
- `raw/aimami/1.2.3/windows-x64/auth/ida/pseudocode/*.c` — 3 个文件（全部未具名）
- `raw/aimami/1.2.3/windows-x64/oauth_login/ida/pseudocode/*.c` — 12 个文件（含具名 `exchange_code_for_tokens`）
- `raw/aimami/1.2.3/windows-x64/oauth_refresh/ida/pseudocode/*.c` — 10 个文件（含具名 `refresh_token_with_policy`）
- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/*.c` — 42 个文件（8 个具名 tauri command handler，4 个反编译失败）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/export_accounts_to_file_0x140ca88a0.c`
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/import_accounts_from_file_0x140ca4d00.c`（反编译失败）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/preview_account_import_0x140ca72c0.c`
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/begin_chatgpt_oauth_login_0x140caa1f0.c`

## raw evidence（backend, 明确排除但相邻）

- `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/*.c` — 6 个文件（全部未具名，auto-switch 相关子集）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/{configure_auto_switch,confirm_pending_auto_switch,set_auto_switch}_*.c` — auto-switch 命令，物理归属 commands::system
- `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/set_codex_router_no_account_mode_0x140cb8050.c` — relay-adjacent
- `raw/aimami/1.2.3/windows-x64/sessions/ida/pseudocode/*.c` — 17 个文件（Codex 会话管理，不同域，本包排除，同 mac 排除理由）

## raw evidence（backend, 供补充交叉引用, out-of-scope 不计入本包覆盖数字）

- `raw/aimami/1.2.3/windows-x64/repository/ida/pseudocode/*.c` — 72 个文件；8 个具名+跨平台等价确认：`switch_account_0_0x1403897f0.c`、`remove_accounts_0_0x14038b750.c`、`rollback_0x140386ca0.c`、`recover_account_removal_quarantine_0x1403a9770.c`、`remove_account_backup_files_0x1403bf740.c`、`persist_registry_0x14038fb30.c`、`hashed_account_snapshot_path_0x1403cc8d0.c`、`auto_switch_config_0x1403904c0.c`
- `raw/aimami/1.2.3/windows-x64/models/ida/pseudocode/*.c` — 3 个文件（`error_hint`/`normalize_relay_models`/1 未具名；**不含**任何 Account* DTO）

## 方法论底稿（win-native 归属方法，本次只读引用）

- `internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`（三层方法：panic-Location xref 真值 / 调用图传播 inferred / tauri 命令名精确命名真值；867 个 App 函数模块归属，111/129 命令精确命名，18 个未精确命名）

## raw evidence（frontend, win 自有独立提取）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 条 IPC 命令（win 自身独立提取，非借用 mac）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` — 248 行，含账号相关触发点记录
- `raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json` — 87163 行
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md`
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/accounts-page-GdJYDnGj.js` — 67,080 字节，SHA-256 `09336d32548087c04de52882ad2b37d9236a26678e7b53483bd1dd22c3d10c55`，本会话与 mac 侧同名文件双向核对**字节级完全相同**

## raw evidence（frontend, 复用自 mac 侧，proven byte-identical artifact）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` — AccountsPage 完整逆向（147 行，25 条交互），因源 JS 字节相同而对 win 同样适用
- `raw/aimami/1.2.3/macos-arm64/dumped/assets/accounts-page-GdJYDnGj.js` — 用于本会话哈希核对的 mac 侧原始副本

## raw binary（win）

- `raw/binary/AiMaMi.1.2.3 win64.exe` — 33,667,584 字节，SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`（本会话重新哈希，与 `windows-1.2.3-relay/manifest.json` 已记录值一致）
- `raw/binary/AiMaMi.1.2.3 win64.exe.i64` — 对应 IDB

## 结论底稿（internal-reverse 根级，非 audits/ canonical，供本包提炼溯源）

- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`

## 对位包（同批次任务产出，结构/措辞模板参照，非 win 证据来源）

- `internal-reverse/audits/macos-1.2.3-accounts/`（8/12 consumerStartReady；本包只在"字节级相同的前端文件"这一点上真正复用其证据，其余结论独立得出）
- `internal-reverse/audits/windows-1.2.3-relay/`（同一 win 1.2.3 二进制批次，binary SHA 一致，验证同批产出）

## 历史 win accounts 包（本包未读取内容，仅记录存在性）

- `internal-reverse/audits/windows-1.0.9-accounts/`
- `internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`（已作为方法论底稿引用，见上）

## INDEX.jsonl 命中（本次核实/append）

- 既有：`aimami/1.2.3/windows-x64/frontend/ipc-contracts-and-control-flow` 等
- 本次 append（append-only，未改旧行）：4 个 `aimami/1.2.3/windows-x64/{account_io,auth,oauth_login,oauth_refresh}/backend-pseudocode-surface` 条目 + 1 个 `aimami/1.2.3/windows-x64/commands/accounts/backend-pseudocode-surface` 条目 + 1 个 `aimami/1.2.3/windows-x64/codexmate_lib/backend-pseudocode-surface-accounts-subset` 条目 + 1 个 `aimami/1.2.3/windows-x64/repository/backend-pseudocode-surface-crossref-accounts` 条目（out-of-scope 交叉引用）+ 1 个 `aimami/1.2.3/windows-x64/models/backend-pseudocode-surface-crossref-accounts` 条目 + 1 个 `aimami/1.2.3/windows-x64/accounts/frontend-control-flow-native` 条目 + 1 个 `internal-reverse/audits/windows-1.2.3-accounts/distillation-conclusion` 条目。见 session `windows-accounts123-distillation-conclusion-append-20260725`。
