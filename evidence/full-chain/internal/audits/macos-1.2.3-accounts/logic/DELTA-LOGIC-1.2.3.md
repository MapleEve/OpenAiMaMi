# DELTA-LOGIC-1.2.3 — macOS accounts（相对 1.2.2 / 1.0.9，诚实未闭合说明）

## 状态：RULE9 版本迭代 diff 未执行

`internal-reverse/AGENTS.md` RULE 9 要求版本迭代默认先做同平台 diff 迁移，不默认重头逆。本次是纯只读蒸馏任务（无 IDA MCP 访问），**未能**独立执行以下任一 diff 判定：

- 无法对比 1.2.2 macOS 二进制的 `core::account_*`/`commands::accounts` owner 符号/地址（`same-version-reuse` 判定需要 IDA `func_query`/`decompile` 对比两版本伪代码体，本次不可用）。
- 无法确认哪些 accounts 命令属于 `migrated_no_behavior_diff` / `unchanged_reused` / `diff_required` / `diff_reversed` 四类口径中的哪一类。

因此本包**不得**被当作已完成 diff 迁移的 delta 包使用；所有 141 个 in-scope 文件均按"当前版本独立证据"对待，不声称相对 1.2.2/1.0.9 无行为差异。

## 已知背景（间接引用，非本包独立验证）

1. `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md` 记录 1.2.3 相对 1.2.2 的三项 changelog 之一涉及"账号切换稳定性"，但该文档未展开到 accounts 模块内部函数级细节，本包未做逐函数核实。
2. `raw/aimami/1.2.3/macos-arm64/backend-baseline/models-repository-baseline.md` 独立观察到 `core::repository`（99 文件，本包 out-of-scope）中 **30 个（约 30%）** 函数标注 `1.2.3 NEW-delta`，改动集中在：
   - 账号导入别名应用（`apply_imported_alias`）
   - 计划状态应用（`apply_plan_state`）
   - 账号用量富化（`enrich_accounts_via_api_with_subscription`、`enrich_active_account_usage_via_api`、`enrich_single_account_usage`×2）
   - 订阅对账（`reconcile_subscription_with_live_plan`、`refresh_subscription_metadata`）
   - 备份清理（`remove_account_backup_files`，**1.2.3 新增函数**，逐条 `remove_file` 清理两类账号备份/临时文件目录）
   - 自动切换请求协调（`sync_auto_switch_request`、`reconcile_auto_switch_request`）
3. `raw/aimami/1.2.3/macos-arm64/backend-baseline/account-auth-baseline.md`（本包 6 个 in-scope 核心模块的原始证据来源）**未标注任何 `1.2.3 NEW-delta`**——即 `account_coordination`/`account_io`/`account_metadata`/`auth`/`oauth_login`/`oauth_refresh` 这 6 个模块本身在 1.2.3 相对 1.2.2 没有函数级改动痕迹（该文档的措辞是所有函数头注释均隐含 `基线 same-set`，未见 delta 标记提及）。**这是本包唯一可以间接支持的"account-auth 核心层无改动"观察，但未做独立 IDA 对比验证，仍标 Unknown 而非 accepted no-diff。**
4. `commands-baseline.md` 报告 `commands::accounts`（46 文件）里有 2 个函数带 `1.2.3 NEW-delta` 标记：`accounts::perform_switch_payload_with_restart` 与 `accounts::refresh_local_runtime_snapshot_after_mutation_async::{closure}::{closure}`（地址 `0x100701570`）——即账号切换总编排函数本身在 1.2.3 有改动，与 changelog"账号切换稳定性"项吻合，但具体改了什么本包未做前后版本伪代码逐行对比。

## 与 1.0.9 baseline 的关系

`internal-reverse/audits/macos-1.0.9-accounts/` 曾对 9 个目标（`switch_account`/`switch_account_and_restart_codex`/`preview_account_import`/`import_accounts_from_file`/`export_accounts_to_file`/`logout`/`remove_accounts`/`begin_add_account_attach_monitor` 等）做到 `full_leaf_100_ida_accepted`，含 byte-level owner/wrapper/callsite VA 三元组。本包**不继承**该档位——原因：

- 版本跨度大（1.0.9 → 1.2.3），中间经过多次未记录的迭代，不能假设零行为差异。
- 命令名本身有变化迹象：1.0.9 记录了 `begin_add_account_attach_monitor`，1.2.3 前端命令面里对应的是 `begin_chatgpt_oauth_login`（命名不同，语义可能演进，未核实是否为同一命令改名或全新实现）。
- 本次无 IDA MCP 访问，无法做 RULE9 要求的 "owner 两版本都在 + IDA 反编译体等价" 复用判定。

**结论**：本 DELTA-LOGIC 文档本身即是"诚实未闭合"声明——它记录了本包检查过什么、间接引用了什么，但不冒充已完成的 diff 迁移证据。
