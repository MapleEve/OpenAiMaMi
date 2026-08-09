# FULL-CHAIN-1.2.3 — macOS accounts（前端 → invoke → 后端 → core → 持久化/HTTP 叶子）

来源：`raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md`、`backend-baseline/{account-auth,commands}-baseline.md`（本次只读整理，未新逆）。**本文档是模块级链路叙述，不是逐命令 call-tree-to-leaf 规约**（dim3 partial-asymmetric，见 gate-report.json）。

## 1. 前端触发层

`AccountsPage`（`accounts-page-GdJYDnGj.js`，导出名 `Jn`，3082 行 beautify）：

- 组件树：`AccountsPage` → `AccountImportExportControls`（导入/导出工具条，含 `SelectExportAccountsDialog`/`ExportConfirmDialog`/`ImportPreviewDialog`）+ `AddAccountOAuthDialog`（"+"新增账号）+ 共享 `ProxyConfigDialog`/`ConnectivityBadge` + 4 个内联对话框（切换确认/移除确认/自动切换阈值/快捷设置）+ 账号卡片网格（`SortableAccountCard` → `AccountCard` → `PlanBadge`/`TokenStatusBadge`/`InfoField`×4/`QuotaRing`×2/`IconActionButton`×4）。
- 25 条交互→命令映射见 `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md` §3；关键路径：
  - 导入：点"导入"→原生文件选择→`preview_account_import`→勾选预览→"确认"→`import_accounts_from_file`。
  - 导出：点"导出"→本地选择账号（无 IPC）→风险确认弹窗→"继续"→`export_accounts_to_file`。
  - 切换账号：卡片"切换"→确认弹窗→`switch_account_and_restart_codex`；成功后按返回 warnings（`CLIENT_RESTART_FAILED`/`CLIENT_RESTART_DEFERRED`）分流 toast。
  - 移除账号：卡片"移除"（激活账号禁用）→确认弹窗（destructive）→`remove_accounts`。
  - 新增账号：点"+"→`AddAccountOAuthDialog`"开始"→`begin_chatgpt_oauth_login`；busy 中"取消"→`cancel_chatgpt_oauth_login`。
  - 单卡刷新配额：图标按钮→`refresh_single_account_usage`（不经 useMutation，独立 try/finally 管理每卡片 spinner）。

## 2. 后端命令层（`commands::accounts` / `commands::account_io` / `commands::account_oauth`）

- **`commands::accounts`（46 文件）**：本应用最重的状态机模块——负责"哪个账号当前生效"的完整生命周期。核心函数：`perform_switch_payload_with_restart`（切换总编排：`FileLock`/`CodexTransitionFence` → `Repository::switch_account`〔核心层，本包 out-of-scope，见 §3〕→ `CodexProcessLifecycle::launch` 拉起新账号进程 → `verify_account_switch*` 校验 → 失败转 `finish_switch_failure` 回滚）；`switch_account_and_restart_sync`（另一实现分支，共享同一套 FileLock/Fence/Repository 调用链）；`finish_switch_failure`/`FileRestoreState::restore`（回滚原语，仅 `remove_file` 切换期间新建的文件，有条件判定非裸删）；`remove_accounts`/`logout` closure（均薄委托给 `Repository::remove_accounts`/`Repository::logout`，深叶在 out-of-scope 的 `core::repository`）；`broadcast_runtime_snapshot_with_account`（`tauri::Emitter::emit` 广播给前端+触发托盘刷新）；`load_full_runtime_snapshot_with_policy`/`load_usage_only_runtime_snapshot`/`get_cached_display_snapshot`/`load_snapshot`（三种粒度的运行时快照读取，供前端展示）；`refresh_single_account_usage`/`refresh_usage_snapshot_with_retry`（带重试的用量刷新）。
- **`commands::account_io`（3 文件）**：薄 wrapper——`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import` 三个 Tauri 命令闭包，反序列化入参→`tauri::state::StateManager::try_get` 拿 State 锁→调 `core::account_io::{export_accounts,import_accounts,preview_import}`（本包 in-scope）→序列化响应/`CoreError` 错误信封。已读 `preview_account_import` 完整伪代码确认此模式（见 `pointers/evidence-paths.md`）。
- **`commands::account_oauth`（5 文件）**：`begin_chatgpt_oauth_login` closure（登录发起主体：`generate_pkce`→`build_authorize_url`→`open_in_browser`（`/usr/bin/open` spawn）→起本地临时 `axum::Router`+`tokio TcpListener` 收 OAuth 回调→`tokio::time::timeout` 限时等 `oneshot`→`advance_operation`/`finish_operation` 状态机推进）；`run_oauth_login` closure（码换 token 成功后调 `core::account_io::persist_account_auth` 写凭据文件）；`cancel_chatgpt_oauth_login`（`tokio::oneshot::Sender::send` 发取消信号中止本地回环）。

## 3. Core 层（6 个 in-scope 模块）

- **`auth`（29 文件）**：AiMaMi 本地凭据模型层——`AuthFile`/`AuthTokens`/`AuthSnapshot` 定义与解析、JWT claims 解码、真实账号 vs API Key vs 虚拟托管占位判定（`is_aimami_managed_virtual_auth`）、账号快照文件名去重与路径穿越防护（`account_snapshot_path`/`ensure_managed_account_snapshot_location`/`hashed_account_snapshot_path`）。
- **`account_io`（18 文件）**：账号快照文件读写编排——`persist_account_auth`（保存单账号主流程：目录确保→凭据类型校验→加锁→所有权校验→写前 capture→原子写→重建注册表→失败回滚）、`export_accounts`/`import_accounts`/`preview_import`（批量导入导出+预览，含冲突分类 `ACCOUNT_MISSING_TOKEN`/`ACTIVE_ACCOUNT_PROTECTED`/`CONFLICT_SKIPPED`/`INVALID_ACCOUNT_KEY`/`UNSUPPORTED_AUTH_MODE`）、`is_valid_account_key`（第二道路径穿越防线）、`SnapshotWriteRecord::capture`/`failure_after_snapshot_writes`（写前拷问+失败回滚）。
- **`account_coordination`（10 文件）**：基于 OS 级 `flock`（`fs2::try_lock_exclusive`）的文件锁原语——`FileLock`/`LiveAuthLock`/`AccountDomainLock`/`AccountSnapshotLock`，20 秒超时、25ms 轮询。
- **`account_metadata`（7 文件）**：ChatGPT 账号订阅元数据远程拉取——`fetch_json`（带鉴权头的 HTTP GET，响应体大小限制）、`fetch_subscription_metadata`（两次 HTTP 调用+`plan_mapping::parse_chatgpt_plan_label`+`infer_active_subscription`）、`is_usable_account`（多形态 deactivated/disabled/suspended 判定）。
- **`oauth_refresh`（15 文件）**：`refresh_token_with_policy`（后台刷新核心策略：锁定→身份/新鲜度校验→与真实 Codex App 让路检测（`is_codex_app_running`/`external_codex_writer_is_present`/`assert_no_external_codex_writers`）→固定 `client_id=app_EMoamEEZ73f0CkXaXp7hrann` 向 `https://auth.openai.com/oauth/token` 发 `refresh_token` grant→原子写回）。
- **`oauth_login`（8 文件）**：`run_login_flow`/`generate_pkce`/`build_authorize_url`/`open_in_browser`/`resolve_callback`/`exchange_code_for_tokens`（标准 PKCE 授权码流程，`User-Agent: AiMaMi/1.2.3`，向同一 `https://auth.openai.com/oauth/token` 端点发 `authorization_code` grant）。

## 4. 持久化/HTTP 叶子（in-scope 部分闭合，out-of-scope 部分仅交叉引用）

- **In-scope 闭合**：`account_io::persist_account_auth`/`export_accounts`/`import_accounts` → `write_atomic_with_mode` 原子写快照文件；`oauth_login::exchange_code_for_tokens`/`oauth_refresh::call_token_endpoint` → HTTPS POST `auth.openai.com/oauth/token`；`account_oauth::begin_chatgpt_oauth_login` → 本地临时 axum HTTP 服务器（生命周期内，非持久监听）。
- **Out-of-scope 交叉引用（未在本包独立验证）**：`switch_account_and_restart_codex`/`remove_accounts`/`logout` 的真实深叶在 `core::repository`——`Repository::switch_account`（`ExactFileState::capture`抓拍→`atomic_write::copy_atomic_private`覆盖写 live 快照→失败`ExactFileState::restore`回滚）、`Repository::remove_accounts`→`SnapshotQuarantine::stage`（暂存非直删）→成功`commit_and_purge`（`remove_dir_all`不可逆）/失败`rollback`（`rename`移回）。详见 `pointers/evidence-paths.md` 指向 `backend-baseline/models-repository-baseline.md`。

**注**：以上叶子归纳来自已读伪代码+已有归纳文档，未做逐命令 fs/http/registry/process/sidecar/response/error termination 的系统化标注（dim3 partial-asymmetric，非 dim3 closed）。
