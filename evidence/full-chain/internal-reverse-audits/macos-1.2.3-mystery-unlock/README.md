# AiMaMi 1.2.3 macOS — "mystery unlock" cluster: understand + ToS classify

同步时间：2026-07-24
范围：`core/relay/router_unlock_auth`、`core/relay/legacy_virtual_auth`、`core/auth::is_aimami_managed_virtual_auth`、`core/relay/codex_diagnostic::{check,fix}_router_unlock_auth_residue`、`commands/system::{get,merge}_mystery_unlock_grants` + `core/repository::{get,merge}_mystery_unlock_grants`（macOS arm64，1.2.3，SHA/binary 见 pointers）
**任务性质**：本包是 **understand + classify**，不是实现依据包。对 `tos_circumvention` 项本包只回答"是什么、为什么 SKIP"，不给可照抄的字段清单/序列化步骤/复刻算法。`implementation_policy=understand_only` 的项禁止被后续任何 worker 当 logic 依据使用。

## 结论摘要

这一批命名带 "mystery"/"unlock"/"virtual auth" 的符号，实际拆开后是**两个完全不相关的子系统**，必须分开判定，不能因为名字相似就笼统打包：

1. **`router_unlock_auth` + `legacy_virtual_auth`（旧代）+ `is_aimami_managed_virtual_auth` + `codex_diagnostic` 里两个 residue check/fix** —— 这是同一条能力链：当本地没有一个"可用的真实 ChatGPT OAuth 登录"（`auth_is_usable_real_oauth` 判否）、而用户选择用 Codex 原生登录态模式接入 router 时，程序会在 Codex 的 `auth.json` 路径处**伪造写入一份结构上冒充真实 ChatGPT OAuth 会话的凭据文件**（固定虚构身份 `niuniu@woyao.pro`，包含 `chatgpt_account_id`/`chatgpt_account_user_id`/`chatgpt_user_id`/`chatgpt_plan_type`/`access_token`/`refresh_token` 等与真实 OpenAI 客户端写入格式一致的字段，`access_token`/`refresh_token` 是自制的未签名 JWT），并留一个 marker 文件记录"这是我们装的假凭据，之后要能撤走"；一旦本地又出现真实可用的 OAuth（用户后来真的登录了），或 router 关闭，就把伪造文件清理掉、把此前备份的真实 `auth.json` 恢复回去。`is_aimami_managed_virtual_auth` 是配套的"这是不是我们自己塞的假凭据"识别函数；`codex_diagnostic` 里的两个 residue check/fix 是这条链路的善后诊断（检测/修复因异常退出而卡住的假凭据/marker 残留），本身不产生新能力，只服务于这条链路。
   → **判定：`tos_circumvention`。SKIP，Polaris 不实现。** 详见 `TOS-CLASSIFICATION.md`。

2. **`mystery_unlock_grants`（`commands/system` + `core/repository`）** —— 与上面完全不同的另一套东西：一个**纯本地、无网络调用**的"隐藏功能解锁授权"过期清理机制。`Repository::get_mystery_unlock_grants` 从本地设置里读一份 grant 列表，按当前时间（毫秒）过滤掉已过期项，变化了就回写精简后的列表；配套 `Repository::mystery_route_allowed`（非本次读取范围内，backend-baseline 已有记录）是一个路由名白名单校验，只认 `mcp`/`skills`/`overview`/`accounts`/`sessions`/`settings`/`maintenance`/`subscription` 等 App 内已知功能区名字。整体是一个受时间限制、按 App 功能区分发的**本地隐藏特性开关/彩蛋/灰度权益**系统，不涉及任何第三方账号、订阅、provider 鉴权。
   → **判定：`normal_feature`。可正常记录供实现（若产品需要）。**

## 证据索引

- `core/relay/router_unlock_auth/ida/pseudocode/*.c`（24 个函数/闭包，含 `auth_is_usable_real_oauth`、`backup_contains_usable_real_oauth`、`build_unlock_auth_json`、`make_unsigned_jwt`、`install_virtual_unlock_auth`、`ensure_auth_for_router`、`prepare_auth_for_router`、`restore_real_auth_for_router`、`cleanup*`、`cleanup_for_native_off`、`has_residue`、`marker_exists`、`live_auth_state`、`readiness`、`read_marker`、`read_cleanup_backup`、`remove_file_if_exists`、`serialize`(RouterUnlockAuthReadiness)、`validate_user_owned_auth_backup`、`verify_real_auth_restore_ready`）
- `core/relay/legacy_virtual_auth/ida/pseudocode/*.c`（8 个函数：`read_user_owned_backup`、`cleanup`×3、`remove_file_if_exists`、`read_marker`、`restorable_backup_auth`、`marker_exists`）
- `core/auth/ida/pseudocode/is_aimami_managed_virtual_auth_0x1008f1cc0.c`
- `core/relay/codex_diagnostic/ida/pseudocode/check_router_unlock_auth_residue_0x10050e800.c`
- `core/relay/codex_diagnostic/ida/pseudocode/fix_router_unlock_auth_residue_0x10050bfe0.c`
- `commands/system/ida/pseudocode/{get,merge}_mystery_unlock_grants_*.c`
- `core/repository/ida/pseudocode/{get,merge}_mystery_unlock_grants_*.c`
- `backend-baseline/models-repository-baseline.md:81`（`mystery_unlock_grants` + `mystery_route_allowed` 既有基线摘要，本包复核一致）
- `backend-baseline/commands-baseline.md:90`（既有基线摘要，本包复核一致）

完整路径见 `pointers/evidence-paths.md`。

## Coverage

- router_unlock_auth 目录 24/24 文件已读（含闭包/serialize）。
- legacy_virtual_auth 目录 8/8 文件已读。
- is_aimami_managed_virtual_auth 1/1 已读。
- codex_diagnostic 目录内与本模块相关的 2 个 check/fix 已读；该目录另有约 40 个与本模块无关的诊断项（config/toml/db-orphan/thread 等）未纳入本包范围，本包不对它们下结论。
- mystery_unlock_grants 4 个文件（2 commands 层 + 2 repository 层）已读，另交叉核对既有 backend-baseline 记录一致。

## Per-target Result Matrix

| target | 属于哪条能力 | 是否涉及第三方凭据/鉴权 | 网络调用 | ToS 分类 |
|---|---|---|---|---|
| `router_unlock_auth::install_virtual_unlock_auth` / `build_unlock_auth_json` / `make_unsigned_jwt` | 虚拟 ChatGPT OAuth 凭据伪造写入 | 是（伪造 OpenAI ChatGPT 账号字段结构） | 否（本地文件写入） | `tos_circumvention` |
| `router_unlock_auth::ensure_auth_for_router` / `prepare_auth_for_router` | 判断是否需要伪造 + 调度伪造/直通 | 是 | 否 | `tos_circumvention` |
| `router_unlock_auth::restore_real_auth_for_router` / `cleanup*` / `cleanup_for_native_off` | 恢复真实凭据 / 清理伪造痕迹 | 是（围绕伪造凭据的生命周期） | 否 | `tos_circumvention` |
| `router_unlock_auth::auth_is_usable_real_oauth` / `backup_contains_usable_real_oauth` / `validate_user_owned_auth_backup` / `verify_real_auth_restore_ready` | 判断"是否存在真实可用登录/备份" | 是（读取判断真实 OAuth 状态） | 否 | `tos_circumvention`（判断逻辑本身依附于伪造凭据链路，脱离该链路无独立意义） |
| `router_unlock_auth::has_residue` / `marker_exists` / `live_auth_state` / `readiness` / `read_marker` / `read_cleanup_backup` / `remove_file_if_exists` / `serialize` | 伪造凭据状态查询/标记读写/UI 状态上报 | 是 | 否 | `tos_circumvention` |
| `legacy_virtual_auth::*`（8 函数） | 同一机制的旧代实现，仅剩迁移期清理/恢复用途 | 是 | 否 | `tos_circumvention` |
| `core::auth::is_aimami_managed_virtual_auth` | 识别"这是不是我们自己伪造的凭据" | 是 | 否 | `tos_circumvention`（判别函数本身依附于伪造机制） |
| `codex_diagnostic::check_router_unlock_auth_residue` / `fix_router_unlock_auth_residue` | 伪造凭据链路的善后诊断/修复 | 是（清理伪造痕迹） | 否 | `tos_circumvention`（该诊断项本身不产生新伪造能力，但只服务于伪造链路，脱离该链路无独立意义） |
| `commands::system::get_mystery_unlock_grants` / `merge_mystery_unlock_grants` | 本地隐藏功能开关列表读取/过期清理 | 否 | 否 | `normal_feature` |
| `core::repository::Repository::get_mystery_unlock_grants` / `merge_mystery_unlock_grants` | 同上，DB/设置存储层 | 否 | 否 | `normal_feature` |

## Frontend Control Flow

未在本轮范围内做前端 CCF 精确定位（consumerStartReady 前端维度未闭合）。`ipc-contracts.jsonl` 抽查未直接命中 `router_unlock_auth`/`virtual_auth`/`mystery_unlock` 相关 Tauri command 名（这些函数多为 core 内部逻辑，可能经更上层的 relay/router 启用命令间接触发，未做穷举）。本包不对前端触发路径下结论；如需前端闭合，需单独立项且仍然只服务于本包已定性为 `tos_circumvention` 的用途判断，不产出实现依据。

## Backend Control Flow / Pseudocode / Call-tree

见「结论摘要」与「Per-target Result Matrix」；详细调用关系见证据文件本身（`pointers/evidence-paths.md` 指向的 raw pseudocode），本 README 不复述内部实现细节。

## Interface / Error / Boundary

- `router_unlock_auth` 写入目标是 `CodexPaths` 解析出的 auth 文件路径（即 Codex 原生登录态读取的凭据文件位置）；写入前会先备份已存在的真实凭据（`user-owned backup`），marker 文件记录伪造状态，供后续 `restore_real_auth_for_router` 回滚。
- 错误路径：目录创建失败、文件读写失败、JSON 序列化失败均有对应 `CoreError` 分支（fs/parse 错误 envelope），未见吞错静默。
- 边界：仅 macOS arm64 已读；Windows 同名机制未在本轮核实，`SYSTEM-DIFF.md` 标 Unknown。

## Gate Leaf Status

本包不写 `consumerStartReady=true`/`strictImplementationUse=true`/`readyToImplement=true`。对 `tos_circumvention` 项，`implementation_use` 永久锁定为 `false`（产品决策，非证据缺口）。对 `normal_feature` 项（mystery_unlock_grants），后端 owner/pseudocode 已闭合，但前端 CCF、DTO 边界、Windows 平台证据、test/acceptance mapping 未闭合，按 `full_leaf_100_definition_v2` 仍为 `consumerStartReady` 候选，未到 `strictImplementationUse`/`readyToImplement`；若产品要做，需另立包补齐前端 CCF + DTO + 双平台 + 验收映射。详见 `gate-report.json`。

## Diff 结论

未做版本 diff（无前序同模块 canonical bundle 可比对）；本包是该模块在 1.2.3 macOS 的首次 understand+classify 记录。

## Unknown / Missing

- Windows 平台是否存在同名/同构机制：Unknown（未读 Windows artifact）。
- 前端具体哪个 UI 入口/开关触发 `router_unlock_auth` 链路：Unknown（未做前端 CCF 定位，且本包判定该链路整体 SKIP，不追加前端定位工作）。
- `mystery_route_allowed`（`0x100a5d600`）本轮未重新读取，仅交叉引用 backend-baseline 既有摘要；其中提到"还有一个 18 字符分支未完全解出常量值，字节长度与 `voice_translation` 等 Voice 路由名吻合"——按用户记忆 [[polaris-123-delta-closure-state]]，Voice 在 Polaris 是 ADR-0002 退役状态，此处不追加逆向工作。

## Action / Non-action

- **Action**：`mystery_unlock_grants` 可作为 `normal_feature` 记录进 Polaris 需求候选（本地功能开关/灰度权益），如需实现需另立 consumerStartReady 起步的证据包（前端 CCF + DTO + 双平台 + 验收映射）。
- **Non-action（SKIP）**：`router_unlock_auth`、`legacy_virtual_auth`、`is_aimami_managed_virtual_auth`、`codex_diagnostic` 的两个 residue check/fix —— 全部标 `tos_circumvention`，`implementation_policy=understand_only`，**Polaris 不实现、不作为任何后续 worker 的 logic 依据**。理由与依据见 `TOS-CLASSIFICATION.md`。
