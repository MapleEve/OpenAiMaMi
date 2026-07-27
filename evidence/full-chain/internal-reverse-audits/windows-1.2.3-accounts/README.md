# AiMaMi 1.2.3 Windows accounts — internal-reverse 结论包

同步时间：2026-07-24
范围：win-native 可归属的账号相关模块 `account_io`(1)/`auth`(3)/`oauth_login`(12)/`oauth_refresh`(10) + `commands/accounts`(42) + `codexmate_lib` 抓总目录内 4 个账号相关命令 wrapper（`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import`/`begin_chatgpt_oauth_login`）= 72 个 in-scope 反编译文件；`core::repository`(72 文件)作为 supplementary cross-reference。前端：与 macOS `AccountsPage`（`accounts-page-GdJYDnGj.js`）**字节级完全一致**（SHA-256 `09336d32548087c04de52882ad2b37d9236a26678e7b53483bd1dd22c3d10c55`，win 自身 tauri-dumped-assets 抽取件与 mac raw dump 双向核对），且 win 自有 `frontend/ipc-contracts.jsonl`（131 条，独立于 mac 提取）与 mac 数字一致。

**本包性质**：与 `macos-1.2.3-accounts` 同批任务的 **win 对位蒸馏**——归并本机已用 IDA MCP 反编译好的 win `.c` 伪代码（多数携带 `WIN-1.2.1-MODULE-RECOVERY.md` 记录的方法论产出：panic-Location xref / 调用图传播 / tauri 命令名精确命名）与 win 自有前端提取产物，整理成 canonical 结论包。**本次会话未新建 IDA 反编译**（无新 `decompile`/`xrefs_to`/`callees` 调用）。

**核心诚实结论（务必先读）**：Windows 侧账号域证据显著弱于 macOS 侧。12 个账号域命令中，**仅 4 个达到 consumerStartReady**（`remove_accounts`/`export_accounts_to_file`/`preview_account_import`/`begin_chatgpt_oauth_login`），**8 个 consumerStartBlocked**——其中 5 个（`switch_account_and_restart_codex`/`refresh_single_account_usage`/`import_accounts_from_file`/`switch_account`/`refresh_usage_snapshot`）是**同一根因的 Hex-Rays 反编译失败**（`switch analysis failed: bad target 0x... for caseN`，仅剩反汇编骨架，非完整伪代码）；1 个（`cancel_chatgpt_oauth_login`）**在全部 win raw 证据中未找到任何具名或可归属的 backend wrapper**（owner 未解析）；2 个（`load_snapshot`/`logout`）继承 macOS 侧同一发现——`AccountsPage` 内无确认调用点（因前端 JS 字节级相同，此结论对 win 同样成立，非跨平台外推而是同一 artifact 的必然结果）。`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，不对外发布（红线 23）。

## 范围边界说明

- **核心 in-scope（win-native 目录，72 文件）**：`account_io`(1)/`auth`(3)/`oauth_login`(12)/`oauth_refresh`(10) = 26 core 文件 + `commands/accounts`(42) + `codexmate_lib` 内 4 个账号相关具名 wrapper（`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import`/`begin_chatgpt_oauth_login`，该目录是 win 反编译流水线的抓总目录，非独立模块，混杂 accounts/voice/skills/debug 等多域命令，本包只计入其中账号相关的 4 个）。
- **win 侧结构性缺口（相对 mac 的诚实差异，非本包遗漏）**：`account_coordination`（mac 10 文件，flock 文件锁原语）与 `account_metadata`（mac 7 文件，订阅元数据拉取）**两个目录在 win raw 证据树中完全不存在**——`find`/`grep` 对 `FileLock`/`AccountDomainLock`/`AccountSnapshotLock`/`fetch_subscription_metadata`/`try_lock_exclusive` 等符号名在全部 win `.c` 文件中 **0 命中**。这不是本包漏读，而是 win strip 后符号名不可见 + `WIN-1.2.1-MODULE-RECOVERY.md` 记录的恢复方法论（867/3875 App 函数，远小于 mac 的 1482 全量）本身就没有覆盖到这两个模块——它们的函数极可能散落在未归属的 `sub_` 函数池中，未被本轮或此前的 win-native 恢复识别出来。
- **`commands/account_io`/`commands/account_oauth` 目录在 win 不存在**：mac 侧这两个子模块（各 3/5 文件）在 win 侧被合并进抓总目录 `codexmate_lib`（无独立子目录）。
- **`commands/system` 里的 auto-switch 簇**（`configure_auto_switch`/`confirm_pending_auto_switch`/`set_auto_switch` 等，win `commands/system` 6 文件多数为此，另一部分在 `codexmate_lib`）：同 mac 一致的排除决策——物理实现不在 `commands::accounts`，见 pointers。
- **仅作交叉引用**：`core::repository`（72 文件，win 侧比 mac 少 27 个，但关键账号深叶函数——`switch_account_0`/`remove_accounts_0`/`rollback`/`recover_account_removal_quarantine`/`remove_account_backup_files`/`persist_registry`/`hashed_account_snapshot_path`/`auto_switch_config`——均已具名且携带**跨平台字符串签名匹配**注释指向对应 mac 符号，是本包 dim3 的关键补充证据）与 `core::models`（win 侧仅 3 文件：`error_hint`/`normalize_relay_models`/1 个未命名，**不含任何 Account\* DTO**，与 mac 175 文件形成鲜明对比，dim4 因此严重弱于 mac）。

## 证据索引

- 对位包：`internal-reverse/audits/macos-1.2.3-accounts/`（本包结构/措辞模板参照，8/12 consumerStartReady）
- 同批次同源包：`internal-reverse/audits/windows-1.2.3-relay/`（同一 win 1.2.3 二进制，SHA 一致）
- 方法论底稿：`internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`（win strip 后模块恢复三层方法：panic-Location xref 真值 / 调用图传播 inferred / tauri 命令名精确命名真值；867 个 App 函数模块归属，111/129 命令精确命名，18 个命令因字符串池无独立命中或 2-函数歧义未精确命名——`cancel_chatgpt_oauth_login` 极可能是这 18 个之一，本包未逐一核实具体是哪 18 个）
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **72 个 in-scope 文件**（26 core：account_io 1/auth 3/oauth_login 12/oauth_refresh 10 + commands/accounts 42 + codexmate_lib 内 4 个账号相关命令 = 72；`42+26+4=72`）。
- **截断/失败反编译：5 个**（`switch_account_and_restart_codex`/`refresh_single_account_usage`/`import_accounts_from_file`/`switch_account`/`refresh_usage_snapshot`），全部同一根因：`HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x... for case N`（IDA/Hex-Rays 对该 async 状态机 switch-dispatch 模式反编译失败，仅剩反汇编+跳转表，本次会话未做红线 13 要求的破墙尝试，未标 `accepted_unknown`，诚实记为 `dim2 partial/failed`）。
- **前端**：与 macOS `AccountsPage` 字节级完全一致（SHA-256 双向核对，见 SYSTEM-DIFF.md）；win 自有 `frontend/ipc-contracts.jsonl`（131 条，独立提取）确认同一组 12 个账号域候选命令名与 mac 一致；win 自有 `frontend/frontend-control-flow.jsonl`（248 行）包含账号相关触发点记录。
- **命令面**：12 个账号域命令中，4 个 consumerStartReady，8 个 consumerStartBlocked（5 个 dim2 反编译失败 + 1 个 owner 未解析 + 2 个 dim1 无确认前端调用点，继承 mac 同文件发现）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：mixed（与 mac 完全相同的 8/12 confirmed + 4/12 open 结构，因前端 JS 字节级相同；但本包命令面拆分不同——见下方 Gate Leaf Status）
- dim2 后端 owner+pseudocode：**weak-mixed**——67/72 文件 0 截断，但 12 个账号域命令中有 5 个的 wrapper 本身反编译失败（仅反汇编），1 个 wrapper 完全未找到；与 mac 141/141 0 截断的强证据形成鲜明对比
- dim3 call-tree 到实现叶子：partial 且不对称，但对已闭合的部分（`switch_account`/`remove_accounts`/`rollback`/`recover_account_removal_quarantine`/`remove_account_backup_files` 等 repository 深叶）有**跨平台字符串签名匹配**的具名交叉验证，是本包相对 mac 的一处更强证据（mac 该包把 repository 排除出主范围，本包纳入 in-scope 交叉引用并具体点名函数）
- dim4 interface/DTO/error/side-effect 边界：**弱于 mac**——win `core::models` 仅 3 文件且不含 Account* DTO；仅能靠 win 自有 `ipc-contracts.jsonl` 的 argKeys（如 `remove_accounts→accountKeys`/`switch_account→accountKey`）做参数名级（非结构体字段级）证据
- dim5 同平台 gate：**win-native**（本包证据全部来自 win 自身 artifact：win raw pseudocode + win 自有 ipc-contracts.jsonl + win 自有 tauri-dumped-assets，未用 mac 证据外推；前端 JS 因字节级哈希相同而共享解读，非外推）
- dim6 test/acceptance mapping：not-closed（同 mac）

## Frontend Control Flow

见 `pointers/evidence-paths.md`。因 `accounts-page-GdJYDnGj.js` 在 mac/win 两平台**字节级完全相同**（SHA-256 `09336d32...` 双向核对一致），mac 侧已产出的 `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md`（147 行，25 条交互）对 win 同样适用——这是**同一 artifact 的直接复用**，不是跨平台外推（红线 8 禁止的是"用 A 平台**证据**推断 B 平台**行为**"，此处是"A/B 平台交付的是同一份 web 资源文件，已用双平台各自提取的原始文件哈希验证字节相同"）。win 自有 `ipc-contracts.jsonl`（131 条，win 自身独立提取）与 win 自有 `frontend-control-flow.jsonl`（248 行）进一步独立确认了同一组命令名存在于 win 前端调用点，未依赖 mac 提取工具链。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。72 个 in-scope 文件角色总览：`auth`(3 文件，均为 `sub_` 未具名，`win 1.2.1 | module src/core/auth.rs` 归属真实但函数语义未恢复)/`account_io`(1 文件，同样 `sub_` 未具名)/`oauth_login`(12 文件，含具名 `exchange_code_for_tokens` 并携带跨平台等价注释)/`oauth_refresh`(10 文件，含具名 `refresh_token_with_policy` 并携带跨平台等价注释)/`commands/accounts`(42 文件，本应用最重状态机模块，8 个具名 tauri 命令 handler 中 4 个反编译失败)/`codexmate_lib` 抓总目录内 4 个具名账号命令 wrapper（其中 `import_accounts_from_file` 反编译失败）。

## Interface / Error / Boundary

**弱闭合**（dim4 partial-weak）。Win `core::models`（3 文件）不含任何 Account* DTO 序列化胶水代码——与 mac 175 文件形成鲜明反差，这是本包相对 mac 最大的结构性弱项之一。可用证据仅为 win 自有 `ipc-contracts.jsonl` 的 argKeys 参数名列表（见 `logic/REGISTRATION-TABLE-1.2.3.md`），无字段级 DTO 结构、无 error envelope、无 side-effect 边界系统化标注。已知破坏性副作用（继承自 repository 交叉引用证据）：`remove_accounts_0`（=mac `Repository::remove_accounts`）→ `rollback`/`recover_account_removal_quarantine` 二阶段暂存删除模式，与 mac 一致（同一源码 `src/core/repository.rs`，跨平台字符串签名匹配确认）。

## Gate Leaf Status

`consumerStartReady` 4 条：`remove_accounts`/`export_accounts_to_file`/`preview_account_import`/`begin_chatgpt_oauth_login`。
`consumerStartBlocked` 8 条：`switch_account_and_restart_codex`/`refresh_single_account_usage`/`import_accounts_from_file`/`switch_account`/`refresh_usage_snapshot`（均 Hex-Rays 反编译失败，dim2 broken）、`cancel_chatgpt_oauth_login`（owner 完全未解析）、`load_snapshot`/`logout`（dim1 无确认前端调用点，继承 mac 同文件发现）。
`strictImplementationUse`/`readyToImplement` 均为空。详见 `gate-report.json`。

## Diff 结论

未执行 RULE9 版本迭代 diff（本次无 IDA MCP 访问）。已知背景：win 侧多数具名函数的归属注释标注为「win 1.2.1」产出（`WIN-1.2.1-MODULE-RECOVERY.md`），说明该模块归属/命名工作实际发生在 1.2.1 版本的 IDB 上，随后被迁移/沿用到 1.2.3 raw 证据树——**这本身构成一次未经 RULE9 验证的隐性版本迁移假设**：本包据此如实标注每个文件的原始归属版本（`win 1.2.1`）与本次交叉验证版本（`win 1.2.3`，仅对已标注"跨平台字符串签名匹配"的具名函数做过二次确认），未做过 1.2.1→1.2.3 的独立 no-behavior-diff 验证。详见 `logic/DELTA-LOGIC-1.2.3.md`。

## Unknown / Missing

1. `account_coordination`/`account_metadata` 两个 core 模块在 win 侧完全无归属证据——`blocks_start`，不外推自 mac。
2. `cancel_chatgpt_oauth_login` 的 win backend wrapper——全树未找到具名或可归属文件，`blocks_start`；极可能是 `WIN-1.2.1-MODULE-RECOVERY.md` 记录的 18 个未精确命名命令之一，但本包未逐一核实。
3. 5 个命令（`switch_account_and_restart_codex`/`refresh_single_account_usage`/`import_accounts_from_file`/`switch_account`/`refresh_usage_snapshot`）的 wrapper 本身反编译失败——`blocks_start`；未做红线 13 破墙尝试（无 live IDA 访问），不得标 `accepted_unknown`。
4. dim4 字段级 DTO——win 侧因 `core::models` 缺少 Account* DTO，比 mac 更彻底地未闭合，`blocks_start`。
5. dim6 test/acceptance mapping——完全未做，`blocks_start`。
6. 语义关键词孤儿扫描（四角度协议角度 C）——未在 win 侧独立执行，`blocks_start`。
7. `WIN-1.2.1-MODULE-RECOVERY.md` 记录的 18 个未精确命名命令具体是哪些——本包未逐一核对是否含账号域命令（除已确认的 `cancel_chatgpt_oauth_login` 缺失外，未系统性排查）。

## Action / Non-action

- **可以做**：4 条 consumerStartReady 命令（`remove_accounts`/`export_accounts_to_file`/`preview_account_import`/`begin_chatgpt_oauth_login`）后端 wrapper 完整反编译（非截断）+ 前端调用点经字节级相同文件确认，Polaris 可基于此开始 win 侧实现，但 DTO 字段形状需参照 mac 侧 `models-repository-baseline.md`（win 自身无对应证据）。
- **不要做**：不得把 8 条 consumerStartBlocked 命令当作可开工依据，尤其是 5 个反编译失败的命令——它们的 wrapper 层逻辑目前只有反汇编骨架，任何"看起来能推断出的行为"都必须先经过红线 13 破墙流程验证；不得把 `account_coordination`/`account_metadata` 缺失当作"win 不需要这两个能力"——它们的 win 端实现大概率存在但归属未恢复；不得用本包的字节级前端复用当作"已做 win 前端独立逆向"的证据（前端逆向本体仍是 mac 侧产出，本包只是验证了字节相同）；不得对外发布本包任何内容（红线 23）。
