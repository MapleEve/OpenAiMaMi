# FULL-CHAIN-1.2.3 — windows-x64 accounts（前端 → invoke → 后端 → core/repository → 持久化/HTTP 叶子）

来源：win 自有 `frontend/{ipc-contracts.jsonl,frontend-control-flow.jsonl}`、`raw/aimami/1.2.3/windows-x64/{account_io,auth,oauth_login,oauth_refresh,commands/accounts,codexmate_lib,repository}/ida/pseudocode/*.c`（本次只读整理，未新逆）+ 字节级相同的 mac `accounts-frontend.md`。**本文档是模块级链路叙述，不是逐命令 call-tree-to-leaf 规约**（dim3 partial-asymmetric，见 gate-report.json）。

## 1. 前端触发层

`AccountsPage`（`accounts-page-GdJYDnGj.js`，与 macOS **字节级完全相同**，SHA-256 `09336d32548087c04de52882ad2b37d9236a26678e7b53483bd1dd22c3d10c55`）：组件树、状态模型、25 条交互→命令映射与 `macos-1.2.3-accounts/logic/FULL-CHAIN-1.2.3.md` §1 完全一致（同一份编译产物），此处不重复展开，见 `pointers/evidence-paths.md` 指向 mac 侧的 `accounts-frontend.md`。win 自有 `ipc-contracts.jsonl`（131 条）+ `frontend-control-flow.jsonl`（248 行）独立确认了同一组命令名存在于 win 自身的前端提取产物中。

## 2. 后端命令层（win：`commands::accounts`〈42 文件〉+ `codexmate_lib` 抓总目录内 4 个账号命令）

- **`commands/accounts`（42 文件）**：与 mac 同名模块一样是最重的状态机模块。8 个具名 tauri command handler（`load_snapshot`/`logout`/`refresh_single_account_usage`/`refresh_usage_snapshot`/`remove_accounts`/`switch_account`/`switch_account_and_restart_codex`/`store_bootstrap_snapshot_best_effort`）中 **4 个反编译失败**（`switch_account_and_restart_codex`/`refresh_single_account_usage`/`switch_account`/`refresh_usage_snapshot`，均为 `switch analysis failed` 类 Hex-Rays 失败），其余 4 个（`load_snapshot`/`logout`/`remove_accounts`/`store_bootstrap_snapshot_best_effort`）及 30 个未具名 `sub_` 函数（module-attributed 但 semantic-unnamed）反编译成功。`remove_accounts`/`load_snapshot`/`logout` 三个 wrapper 完整可读，但本包本次只做了 header+行数级检查，未逐行通读 body 与 mac 版本逐句比对差异。
- **`codexmate_lib`（32 文件抓总目录，4 个账号相关）**：`export_accounts_to_file`（667 行）/`preview_account_import`（565 行）/`begin_chatgpt_oauth_login`（240 行）反编译成功且为 ground-truth tauri command handler 命名；`import_accounts_from_file` 反编译失败（同一 `switch analysis failed` 类）。`cancel_chatgpt_oauth_login` **不在此目录，也不在任何其它 win in-scope 目录中**——完全未找到。

## 3. Core 层（win：4 个 in-scope 模块，证据显著薄于 mac）

- **`auth`（3 文件，全部 `sub_` 未具名）**：mac 侧 29 文件覆盖 `AuthFile`/`AuthTokens`/`AuthSnapshot`/JWT 解码/虚拟托管占位判定/路径穿越防护等完整凭据模型层；win 侧仅 3 个未命名函数，携带 `win 1.2.1 | module src/core/auth.rs` 目录归属注释（真实但语义未恢复），本包**未能**判断这 3 个函数具体对应 mac 29 个函数中的哪几个。
- **`account_io`（1 文件，`sub_` 未具名）**：mac 侧 18 文件覆盖 `persist_account_auth`/`export_accounts`/`import_accounts`/`preview_import`/`SnapshotWriteRecord` 等完整快照读写编排；win 侧仅 1 个未命名函数（`sub_14052D960`，同样 `win 1.2.1` 归属注释）。本包**未能**确认 mac 侧任何具体已命名函数（如 `persist_account_auth`）在 win 侧是否存在对应实现——`grep "persist_account_auth"` 全树 0 命中。这是本包最大的诚实缺口之一：4 个 consumerStartReady 命令中有 3 个（`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import`）逻辑上应当调用 `core::account_io` 的批量导入导出/预览函数，但 win 侧该 core 模块几乎不存在独立证据，wrapper 内部具体调用了什么在本包范围内未被追踪（wrapper pseudocode 本身存在且非截断，但本包未逐行分析其调用图）。
- **`account_coordination`/`account_metadata`**：完全无 win 证据，见 README.md / manifest.json 结构性缺口说明。
- **`oauth_refresh`（10 文件）**：含具名 `refresh_token_with_policy`（携带 `win 1.2.3 | = mac codexmate_lib::core::oauth_refresh::refresh_token_with_policy` 跨平台等价注释），其余 9 个 `sub_` 未具名。
- **`oauth_login`（12 文件）**：含具名 `exchange_code_for_tokens`（跨平台等价注释确认），其余 11 个 `sub_` 未具名。

## 4. Core::repository 交叉引用层（out-of-scope，72 文件，8 个具名+跨平台等价确认）

`switch_account_0`（=mac `Repository::switch_account`）、`remove_accounts_0`（=mac `Repository::remove_accounts`）、`rollback`（=mac `SnapshotQuarantine::rollback`）、`recover_account_removal_quarantine`、`remove_account_backup_files`、`persist_registry`、`hashed_account_snapshot_path`（跨模块映射到 mac 的 `core::auth`，非 `core::repository`——一处真实的跨平台模块边界差异）、`auto_switch_config`——均携带 `跨平台字符串签名匹配(名↔函数一致)` 注释。这 8 个函数是本包相对 `macos-1.2.3-accounts`（该包把 repository 完全排除出 in-scope）**唯一更强**的一处证据：具体点名了哪些 win 函数对应哪些 mac 已知深叶函数，而不仅仅是笼统引用 `models-repository-baseline.md`。

## 5. 持久化/HTTP 叶子（部分闭合，多数未独立验证）

- **具名+跨平台确认，但本包未重读 body 细节**：`repository/remove_accounts_0` → `rollback`/`recover_account_removal_quarantine`（二阶段暂存-提交删除模式，继承 mac 已记录行为，未在 win 侧逐行重新验证）；`oauth_login/exchange_code_for_tokens`/`oauth_refresh/refresh_token_with_policy` → HTTPS POST `auth.openai.com/oauth/token`（跨平台等价确认，域名/协议本包未在 win pseudocode body 内独立重新读取确认，仅确认函数命名等价）。
- **未闭合**：`account_io`/`auth`/`account_coordination`/`account_metadata` 层的实际文件系统写入路径（`write_atomic_with_mode` 等价物）、锁原语（`flock`/`try_lock_exclusive` 等价物）在 win 侧完全未找到对应证据。

**注**：以上叙述基于文件头注释 + 行数 + 少量 body 首尾抽样，**未逐函数完整通读**，比 `macos-1.2.3-accounts` 的证据深度更浅——该包复核者至少全文通读了 3 份 backend-baseline 文档 + 抽样读了若干完整 `.c` 文件；本包受限于时间与证据本身的稀疏性（win 侧大量文件是未具名 `sub_`，无法像 mac 那样直接按函数名索引到语义），只做到 header+truncation+行数级核查 + 8 个具名 repository 深叶函数的跨平台注释确认。
