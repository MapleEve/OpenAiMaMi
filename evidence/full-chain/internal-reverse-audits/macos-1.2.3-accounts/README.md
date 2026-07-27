# AiMaMi 1.2.3 macOS accounts — internal-reverse 结论包

同步时间：2026-07-24
范围：`core::{account_coordination, account_io, account_metadata, auth, oauth_login, oauth_refresh}`（87 个反编译文件）+ `commands::{accounts, account_io, account_oauth}`（54 个反编译文件，共 141 个文件）+ 前端 `AccountsPage`（accounts-page-GdJYDnGj.js）
最终结论：**字节级反编译覆盖强（141 个文件、0 截断），前端 AccountsPage 全逆（25 条交互→命令映射），但六维 full_leaf_100 门未闭合**；且诚实发现 12 个账号域相关命令中有 4 个（`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot`）在本页逆向范围内找不到确认的前端调用点，未计入 consumerStartReady。当前档位为 `consumerStartReady`（8/12 命令），`consumerStartBlocked`（4/12），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

**本包性质**：这是一次**蒸馏（distillation）**任务——把本机（或此前会话）已用 IDA MCP 反编译好的 `.c` 伪代码 + 已产出的 `backend-baseline/*.md`/`frontend/pages/accounts-frontend.md` 只读归并整理成 canonical 结论包，**本次会话未新建 IDA 反编译**（无新 `decompile`/`xrefs_to`/`callees` 调用），字节级 owner/wrapper/callsite VA 图（1.0.9 accounts 包曾产出的那种）未在本次重新验证。

## 范围边界说明（关键决策，务必先读）

用户任务原文范围是"`commands/accounts`、`core/accounts`（该目录字面不存在）、`core/account_*`（若确属 accounts）等相关子目录"。本包据此把范围锁定为：

- **核心 in-scope（6 个 core 模块，87 文件）**：`account_coordination`(10)/`account_io`(18)/`account_metadata`(7) 直接匹配 `account_*` 前缀；另加 `auth`(29)/`oauth_login`(8)/`oauth_refresh`(15) —— 这三个模块虽不带 `account_` 前缀，但是账号身份/凭据模型（`AuthFile`/`AuthTokens`/`AuthSnapshot`）与 OAuth 登录/刷新流程本身，`commands/account_oauth` 的后端 owner 正落在这里；不纳入会让 `commands/account_oauth` 的 dim2/dim3 无源可查。此分组与已有原始证据 `backend-baseline/account-auth-baseline.md` 自己采用的 "account-auth" 分组一致。
- **明确排除（同一份 account-auth-baseline.md 里但本包不算）**：`bootstrap_cache`(6)/`sessions`(28)/`session_analytics`(8) —— 前者是通用启动缓存非账号专属，后两者管理 Codex 会话/对话历史，是完全不同的域。
- **commands in-scope（3 个模块，54 文件）**：`commands/accounts`(46)/`commands/account_io`(3)/`commands/account_oauth`(5)。
- **明确排除（毗邻但不算）**：`commands/system` 里的自动切换簇（`configure_auto_switch`/`set_auto_switch`/`dismiss_pending_auto_switch`/`confirm_pending_auto_switch*`/`load_pending_auto_switch`，见 `backend-baseline/commands-baseline.md` §2）语义上是账号自动切换，但物理实现在 `commands::system` 不在 `commands::accounts`；`commands/hotspot`（悬浮小窗，被 AccountsPage 快捷设置弹窗消费但不属于账号域）。
- **仅作交叉引用、不计入本包覆盖数字**：`core::repository`（99 文件，`Repository::switch_account`/`remove_accounts`/`clean`/`SnapshotQuarantine` 二阶段删除原语的真实实现所在地）与 `core::models`（175 文件，DTO/serde 胶水层）——两者已由既有 `backend-baseline/models-repository-baseline.md` 归纳，本包通过 `pointers/` 引用作补充证据，但因是与 quota/plan_mapping/api_client 共享的跨域基础设施，不计入本包主范围覆盖数字。

## 证据索引

- 底稿：`internal-reverse/audits/BASELINE-FINAL-1.2.3.md`（独立完整基线，1638 全 App 函数 mac 侧，accounts 是 9 组模块之一 + 6 页前端之一）、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（相对 1.2.2 的 216 函数 delta 视图）
- 已有 raw 归纳文档（本次只读，未重新反编译）：`raw/aimami/1.2.3/macos-arm64/backend-baseline/account-auth-baseline.md`（120 函数，account-auth 九模块含本包 6 个 in-scope）、`commands-baseline.md`（145 文件，含本包 3 个 in-scope commands 模块）、`models-repository-baseline.md`（296 文件，含 core::repository/core::models 交叉引用证据）、`frontend/pages/accounts-frontend.md`（147 行，AccountsPage 全逆）
- 前一版本包（历史参照，RULE9 diff 未验证，不作本包依据）：`internal-reverse/audits/macos-1.0.9-accounts/`（曾达 `full_leaf_100_ida_accepted` 9/9 目标，含 byte-level owner/wrapper/callsite VA）
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **6 个 core 模块（87 文件）+ 3 个 commands 模块（54 文件）= 141 文件**，本次会话对全部 9 个 in-scope 目录独立跑 `grep -rl "TRUNCATED|DECOMPILE-FAILED|chars total"`，**0 命中**；与既有 `account-auth-baseline.md`（超集扫描 120 函数）、`commands-baseline.md`（超集扫描 145 文件）各自独立报告的 0 截断结论交叉核对一致，无分歧。
- **前端**：`AccountsPage` 组件树/状态模型/25 条交互→命令映射全逆（16 useState + 1 useRef + 5 useMemo + 2 useQuery + 6 useMutation，另有嵌套子组件 `AccountImportExportControls` 的 3 个 useMutation）。
- **命令面**：12 个账号域相关前端命令中，8 个在 `AccountsPage` 内有确认调用点（见下方 Gate Leaf Status），4 个（`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot`）后端 wrapper 已逆但本页内找不到确认调用点——诚实记为 gap，不算 consumerStartReady。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：mixed（8/12 confirmed，4/12 open）
- dim2 后端 owner+pseudocode：strong（141 文件，0 截断）
- dim3 call-tree 到实现叶子：partial 且不对称（5 个纯 account_io/account_oauth 命令在本包范围内闭合到真实叶子；7 个依赖 `core::repository` 的命令只有交叉引用证据，非本包独立闭合）
- dim4 interface/DTO/error/side-effect 边界：partial（DTO 类型名已知——`AccountSummary`/`AccountTokenStatus`/`SwitchPayload`/`LogoutPayload`/`RemovePayload` 等——但字段级抽取未做）
- dim5 同平台 gate：macOS-only（Windows 1.2.3 raw 证据存在但本次未读，标 Unknown，不外推）
- dim6 test/acceptance mapping：**not-closed**

## Frontend Control Flow

见 `pointers/evidence-paths.md` 指向 `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md`（147 行，组件树+状态模型+25 条交互时序完整逆向）。关键交互：导入="导入"按钮→`preview_account_import`→预览弹窗勾选→"确认"→`import_accounts_from_file`；导出="导出"按钮→本地选择弹窗→风险确认弹窗→"继续"→`export_accounts_to_file`；切换账号=卡片"切换"按钮→确认弹窗→`switch_account_and_restart_codex`（按返回 warnings 中 `CLIENT_RESTART_FAILED`/`CLIENT_RESTART_DEFERRED` 分流 toast）；新增账号="+ 添加账号"→`begin_chatgpt_oauth_login`（busy 中可"取消"→`cancel_chatgpt_oauth_login`）；单卡刷新配额→`refresh_single_account_usage`（不经 useMutation，独立 try/finally 管理每卡片 spinner）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`。6 个 in-scope core 模块职责总览：`auth`=账号凭据模型/JWT 解码/虚拟托管占位判定(26函数)/`account_io`=快照文件读写编排+批量导入导出+写前拷问回滚(18函数)/`account_coordination`=基于 `flock` 的跨进程文件锁原语(9函数)/`account_metadata`=ChatGPT 订阅元数据远程拉取(7函数)/`oauth_refresh`=token 后台刷新策略引擎，含与真实 Codex App 的让路机制(11函数)/`oauth_login`=交互式 PKCE OAuth 登录流程(7函数)。3 个 in-scope commands 模块：`accounts`(46文件)=账号切换/快照/登出核心状态机，最重的业务模块；`account_io`(3文件)=导入导出预览命令的薄 wrapper；`account_oauth`(5文件)=ChatGPT OAuth PKCE 本地回环登录的命令层编排（本地 axum HTTP 服务收回调）。

## Interface / Error / Boundary

**部分闭合**（dim4 partial）。已知 DTO 类型名（经 `core::models` serde glue 符号名枚举，非字段级抽取）：`AccountExportPayload`/`AccountImportPayload`/`AccountImportPreviewEntry`/`AccountImportPreviewPayload`/`AccountImportSkipped`/`AccountRefreshReport`/`AccountSummary`/`AccountTokenStatus`/`AccountTokenStatusCode`/`LogoutPayload`/`RemovePayload`/`SwitchPayload`/`OauthLoginPayload`。破坏性副作用（见 `backend-baseline/commands-baseline.md` §12 与 `models-repository-baseline.md` §2）：`remove_accounts` 走"隔离区暂存→提交时 `remove_dir_all`"二阶段删除（非裸删）；`logout` 清除登录态/托管凭据；导入/导出走原子写。

## Gate Leaf Status

`consumerStartReady` 8 条：`switch_account_and_restart_codex`/`remove_accounts`/`refresh_single_account_usage`/`export_accounts_to_file`/`import_accounts_from_file`/`preview_account_import`/`begin_chatgpt_oauth_login`/`cancel_chatgpt_oauth_login`。
`consumerStartBlocked` 4 条：`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot`（后端已逆，前端调用点本页内未确认）。
`strictImplementationUse`/`readyToImplement` 均为空。详见 `gate-report.json`。

## Diff 结论

未执行 RULE9 版本迭代 diff（本次无 IDA MCP 访问，无法独立验证与 1.0.9/1.2.2 基线的 no-behavior-diff）。已知背景（引自 `COVERAGE-FINAL-1.2.3.md`）：1.2.3 changelog 三项之一"账号切换稳定性"改动与账号域相关，但具体差异内容未在本次账号蒸馏中逐项核实，见 `logic/DELTA-LOGIC-1.2.3.md` 的诚实缺口标注。`models-repository-baseline.md` 独立观察到 `core::repository` 99 个文件中 30 个（约 30%）标 `1.2.3 NEW-delta`，改动集中在账号导入别名、计划状态应用、账号用量富化、订阅对账、备份清理、自动切换请求协调——这部分改动落在本包范围外的 `core::repository`，仅作交叉引用记录，非本包独立验证。

## Unknown / Missing

1. `load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot` 的前端确认调用点——本页（`accounts-frontend.md`）内未见，可能在 tray_menu/Settings/其它未逆页面，`blocks_start`。
2. dim4 字段级 DTO/error-envelope/side-effect 边界抽取——完全未做，仅有类型名级证据，`blocks_start`。
3. dim6 test/acceptance mapping——完全未做，`blocks_start`。
4. Windows 1.2.3 accounts 平台 gate——raw 证据目录存在（`raw/aimami/1.2.3/windows-x64/{account_io,commands/accounts}/`）但本次未读，`blocks_start`，不外推。
5. 语义关键词孤儿扫描（account/snapshot/registry/lock 关键词，超出 9 个 in-scope 目录范围）——完全未执行，`blocks_start`。
6. RULE9 版本迭代 diff 迁移（vs 1.0.9 baseline 的 9/9 `full_leaf_100_ida_accepted`）——未执行，`blocks_start`，本包不继承该档位。
7. `core::repository`（switch/remove/logout/clean 真实深叶）证据存在但故意排除出本包主范围——`product_decision`，非未查。

## Action / Non-action

- **可以做**：8 条 consumerStartReady 命令（导入导出预览三件套 + OAuth 登录/取消 + 切换重启 + 移除账号 + 单卡刷新配额）已满足前端确认调用点+后端 0 截断反编译，Polaris 可基于此开始实现，但不得宣称与 upstream 100% 等价，且 `remove_accounts`/`switch_account_and_restart_codex` 的深叶证据（`core::repository`）需另行查阅 `models-repository-baseline.md`（本包只是 cross-reference，非独立验证）。
- **不要做**：不得把 4 条 `consumerStartBlocked` 命令（`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot`）当作可开工依据；不得把 141 文件 0 截断这个数字当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 macOS 证据外推 Windows；不得把本包继承为 1.0.9 accounts 包已达到的 `full_leaf_100_ida_accepted` 档位（未做 RULE9 diff 验证）。
