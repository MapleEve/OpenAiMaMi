# Evidence Pointers — macos-1.2.3-accounts

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, in-scope，本包主证据）

- `raw/aimami/1.2.3/macos-arm64/core/account_coordination/ida/pseudocode/*.c` — 10 个文件（FileLock 等文件锁原语）
- `raw/aimami/1.2.3/macos-arm64/core/account_io/ida/pseudocode/*.c` — 18 个文件（快照读写编排）
- `raw/aimami/1.2.3/macos-arm64/core/account_metadata/ida/pseudocode/*.c` — 7 个文件（订阅元数据拉取）
- `raw/aimami/1.2.3/macos-arm64/core/auth/ida/pseudocode/*.c` — 29 个文件（凭据模型/JWT）
- `raw/aimami/1.2.3/macos-arm64/core/oauth_login/ida/pseudocode/*.c` — 8 个文件（PKCE 登录流程）
- `raw/aimami/1.2.3/macos-arm64/core/oauth_refresh/ida/pseudocode/*.c` — 15 个文件（token 刷新策略）
- `raw/aimami/1.2.3/macos-arm64/commands/accounts/ida/pseudocode/*.c` — 46 个文件（账号切换状态机）
- `raw/aimami/1.2.3/macos-arm64/commands/account_io/ida/pseudocode/*.c` — 3 个文件（导入导出预览命令）
- `raw/aimami/1.2.3/macos-arm64/commands/account_oauth/ida/pseudocode/*.c` — 5 个文件（OAuth 登录命令层）

## raw evidence（backend, 明确排除但相邻）

- `raw/aimami/1.2.3/macos-arm64/core/bootstrap_cache/ida/pseudocode/*.c` — 6 个文件（通用启动缓存，非账号专属，本包排除）
- `raw/aimami/1.2.3/macos-arm64/core/sessions/ida/pseudocode/*.c` — 28 个文件（Codex 会话管理，不同域，本包排除）
- `raw/aimami/1.2.3/macos-arm64/core/session_analytics/ida/pseudocode/*.c` — 8 个文件（会话用量分析，不同域，本包排除）
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/*.c`（34 文件中的 auto-switch 子集：`configure_auto_switch`/`set_auto_switch`/`dismiss_pending_auto_switch`/`confirm_pending_auto_switch_async` 等）— 物理归属 commands::system，本包排除
- `raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/*.c` — 16 个文件，本包排除

## raw evidence（backend, 供补充交叉引用, out-of-scope 不计入本包覆盖数字）

- `raw/aimami/1.2.3/macos-arm64/core/repository/ida/pseudocode/*.c` — 99 个文件（`Repository::switch_account`/`remove_accounts`/`clean`/`SnapshotQuarantine::*`/auto-switch 编排等真实深叶所在，30 个标 `1.2.3 NEW-delta`）——归纳见 `raw/aimami/1.2.3/macos-arm64/backend-baseline/models-repository-baseline.md` §2
- `raw/aimami/1.2.3/macos-arm64/core/models/ida/pseudocode/*.c` — 175 个文件（DTO/serde 胶水层，含 Account*/Logout*/Remove*/Switch*/OauthLogin*/AutoSwitch*/PendingAutoSwitch* 系列 payload 类型）——归纳见同上文档 §1
- `raw/aimami/1.2.3/macos-arm64/core/plan_mapping/ida/pseudocode/*.c`、`core/quota_store/ida/pseudocode/*.c`、`core/api_client/ida/pseudocode/*.c` — 分别 9/7/6 个文件，`account_metadata::fetch_json` 复用 `api_client::http_client`——归纳见同上文档 §3-5

## 既有归纳文档（本次只读，未新逆，本包据此蒸馏）

- `raw/aimami/1.2.3/macos-arm64/backend-baseline/account-auth-baseline.md`（119 行，account-auth 九模块 120 函数，含本包 6 个 in-scope 核心模块的 module_roles + key_functions 全量归纳）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`（259 行，commands 层 10 个真实存在子模块 145 文件，含本包 3 个 in-scope commands 模块的完整 key_functions 表格）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/models-repository-baseline.md`（143 行，models/repository/plan_mapping/quota_store/api_client 五模块 296 函数，本包用作 out-of-scope 交叉引用）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` — AccountsPage 完整逆向（147 行，组件树/状态模型/25 条交互）
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/accounts-page-GdJYDnGj.js` — beautify 后源文件
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 131 条 IPC 命令映射（含 accounts 相关 12 条候选）

## Windows（本包未读，仅记录存在性）

- `raw/aimami/1.2.3/windows-x64/account_io/` — 存在，本次未打开
- `raw/aimami/1.2.3/windows-x64/commands/accounts/` — 存在，本次未打开

## 结论底稿（internal-reverse 根级，非 audits/ canonical，供本包提炼溯源）

- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`

## 前一版本包（历史参照，RULE9 diff 未验证，不作本包依据）

- `internal-reverse/audits/macos-1.0.9-accounts/`（曾达 `full_leaf_100_ida_accepted` 9/9：`switch_account`/`switch_account_and_restart_codex`/`preview_account_import`/`import_accounts_from_file`/`export_accounts_to_file`/`logout`/`remove_accounts`/`begin_add_account_attach_monitor`/`import_chatgpt_session_account`，含 byte-level owner/wrapper/callsite VA）
- `internal-reverse/audits/windows-1.0.9-accounts/`（同版本 Windows 侧，本包未读取）

## 同批次同源包（同一 1.2.3 macos-arm64 binary，可交叉核对方法论）

- `internal-reverse/audits/macos-1.2.3-relay/`（本包 manifest.json 中的两个 binary SHA 与该包完全一致，验证同一次反编译批次产出）

## INDEX.jsonl 命中（本次核实/append）

- 既有：`aimami/1.2.3/macos-arm64/relay/*`（relay 域，非本包）等
- 本次 append（append-only，未改旧行）：9 个 `aimami/1.2.3/macos-arm64/core/<module>/backend-pseudocode-surface` 条目（6 个 in-scope 核心模块 + repository/models/api_client 3 个 out-of-scope 交叉引用模块各记一条 surface 级条目，未逐函数展开）+ 3 个 `aimami/1.2.3/macos-arm64/commands/<module>/backend-pseudocode-surface` 条目（accounts/account_io/account_oauth）+ 1 个 `aimami/1.2.3/macos-arm64/accounts/frontend-control-flow` 条目 + 1 个 `internal-reverse/audits/macos-1.2.3-accounts/distillation-conclusion` 条目。见 session `accounts123-distillation-conclusion-append-20260724`。
