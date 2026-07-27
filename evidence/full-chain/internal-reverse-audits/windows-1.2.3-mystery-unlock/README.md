# AiMaMi 1.2.3 Windows — "mystery unlock" cluster: understand + ToS classify

同步时间：2026-07-25
范围：`codexmate_lib::core::relay::router_unlock_auth::*`（12 个函数/闭包）、`codexmate_lib::core::relay::legacy_virtual_auth::*`（7 个函数/闭包），windows-x64，1.2.3，`sha256_binary=aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`（PE/AMD64）
**任务性质**：本包是 **understand + classify** 的 Windows 独立复核，不是实现依据包。本轮结论完全基于**本次亲自逐个读过**的 19 个 Windows 原生 `.c` 伪代码文件，不采信、不外推 macOS 证据；macOS 侧已有的姊妹包 `audits/macos-1.2.3-mystery-unlock/`（2026-07-24 产出，同一命名空间/同一函数簇）只作**对照参考**，用来标注跨平台一致/差异点，不作为本包结论的证据来源。

## 结论摘要

逐个读完 19 个 Windows 原生函数后，我自己的判定（不是照抄 macOS 结论）：

1. **`router_unlock_auth`（12 个）+ `legacy_virtual_auth`（7 个）是同一条能力链，在 Windows 上做的事情与 macOS 侧描述完全一致**：当本地没有一个"可用的真实 ChatGPT OAuth 登录"时，程序会在 Codex 的 `auth.json` 位置**写入一份结构上冒充真实 OpenAI/ChatGPT OAuth 会话的凭据文件**——固定虚构身份 `niuniu@woyao.pro` / `NIUNIU WOYAO` / `user-niuniu-woyao-pro-unlock`，写入与真实 OpenAI 客户端一致的字段名（`chatgpt_account_id`、`chatgpt_account_user_id`、`chatgpt_user_id`、`chatgpt_plan_type`、`tokens.{id_token,access_token,refresh_token}`），`id_token`/`access_token` 是自制的 `alg:none` 未签名 JWT，其 `iss` claim 字面写的是 `"https://auth.openai.com"`——一个真实的第三方（OpenAI）域名字符串，被写进一份该第三方从未签发、从未验证过的凭据里。写入前备份已存在的真实凭据，留 marker 文件记录"这是装的假凭据"，供之后撤走/恢复。文件内嵌了厂商自己写的免责声明 `"AiMaMi router unlock auth. This is not a real OpenAI account."`——这不是我的推断，是二进制里逐字节确认的字面量：厂商自己承认这不是真账号，同时把它做成结构上像真账号的样子，目的就是让某个依赖读这份文件判断"登录态"的逻辑把它当真。
   → **我的判定：`tos_circumvention`。理由见下方「我自己的判断依据」和 `TOS-CLASSIFICATION.md`。**

2. **数据流向 / 是否对外发送**：19 个函数里没有一处 HTTP/网络调用。所有 I/O 都是本地文件系统读写（路径拼装 `sub_141473FA0`、写文件 `sub_1408726C0`、删文件 `sub_141485EF0`、读文件 `sub_14148D130`/`sub_14148D3C0`）。这份伪造凭据**从未被发送给 OpenAI 或任何网络对端**——它只需要骗过本机上"读这个文件判断是否已登录"的本地校验逻辑（大概率是打包/关联的 Codex CLI 组件自身的启动检查），程序自己的 relay/router 之后会接管真实的请求转发，走用户自己配置的 provider。这一点 Windows 证据与 macOS 侧结论完全一致（macOS 侧同样没有网络调用），是本次独立读代码亲自确认的，不是照抄。

## 我自己的判断依据（不是照抄 macOS 结论）

在看到 `audits/macos-1.2.3-mystery-unlock/` 之前，我已经把 Windows 的 19 个函数逐个读完并形成了下面的判断：

- `install_virtual_unlock_auth`（0x1404949c0）+ 其 JSON 构造子过程 `sub_14048FF80`：直接 `qmemcpy` 写死字面量 `"user-niuniu-woyao-pro-unlock::00000000-0000-4000-8000-000000000001"`、`"chatgpt_account_id"`、`"00000000-0000-4000-8000-000000000001"`、`"chatgpt_plan_type"`（4 字节常量解出 `"free"`）、`"https://auth.openai.com"`、`"aimami-router-unlock"`、`"niuniu@woyao.pro"`、`"NIUNIU WOYAO"`、`"aimami-router-unlock-refresh-token"`、`"2026-06-01T00:00:00Z"`、`"aimami_router_unlock_auth"`、`"AiMaMi router unlock auth. This is not a real OpenAI account."` —— 这些不是我的推断，是十六进制/字符串字面量的直接读出。
- `sub_14048F130`（JWT 构造）：把 header/payload 用 `.` 拼接、`alg:none` 语义（从不校验签名），claim 里塞入 `iss="https://auth.openai.com"`（真实第三方域名）——这是我判定"冒充"而非"仅仅是本地占位标记"的关键：如果只是想做一个本地状态标记，不需要在 claim 里写一个真实的 OpenAI 域名当 issuer；写这个字段的唯一合理动机是让读这份 claim 的逻辑把它当作"由 openai.com 签发"的凭据来解读。
- `cleanup`（0x140497830）：569 行完整读完，内部按一个 0/1/2/3 状态（来自 `sub_14048ED60(a2)`，未在本模块内单独命名，见下方「平台差异」）分支处理 marker + backup + auth.json 的读写/清理/恢复，状态机设计与 macOS 侧描述的 `live_auth_state` 四态模型完全对应——这说明这是一套经过认真设计、有完整生命周期管理的产品功能，不是遗留/调试代码。
- `read_cleanup_backup`（0x14048f550）：读备份文件后做校验，命中 `"aimami_router_unlock_auth"` 字段为真、或 `"OPENAI_API_KEY"` 字段值末尾匹配一个 8 字节 SIMD 比对的常量对（`xmmword_141748DB0`/`xmmword_141748DA0`，与 macOS 侧描述的 `-unlock` 后缀检查手法一致）、或 `"tokens"` 字段存在，都会拒绝把这份内容当"用户自己的真实备份"——这是"防止把自己伪造的凭据误当真实备份"的校验，进一步证明整条链路是围绕"区分真实登录 vs 我方伪造"精心设计的。
- `legacy_virtual_auth::read_user_owned_backup`（0x140579800）+ `cleanup_0`（0x14057a0e0）：旧代实现同样的拒绝逻辑（`OPENAI_API_KEY` 后缀检查、`tokens` 字段检查），marker 文件名不同（旧代字符串证据里出现独立的 marker 命名，新代是 `router-unlock-auth-marker.json` 类），确认这是同一机制的前一代实现，现在仅剩迁移期清理/恢复用途。

综合以上，我自己独立得出的结论与 macOS 侧一致：**这条链路的目的和必要组成部分，就是让本地某个依赖"是否存在有效 OpenAI/ChatGPT 登录凭据"做判断的逻辑，把一份自制、包含真实 OpenAI 域名标识、结构上模仿真实凭据格式的伪造文件当作真的接受**。是否严格构成"ToS 违反"取决于 OpenAI/Codex CLI 具体条款原文（本包未去核实条款原文，只基于代码行为本身做技术定性），但"伪造第三方身份标识以骗过该方产品自身的登录态校验"这一行为模式，落在通常意义的"规避访问控制/凭据欺骗"范畴内，这是我基于读到的字面量和控制流独立做出的判断，不是因为看到了同名的 macOS 结论就跟着写。

## 证据索引

- `raw/aimami/1.2.3/windows-x64/router_unlock_auth/ida/pseudocode/*.c`（12 个文件：`install_virtual_unlock_auth`、`cleanup`、`read_marker`、`read_cleanup_backup`、`serialize`、3 个闭包、`sub_14048EF50`、`sub_14048F130`、`sub_14048FE80`、`sub_14048FF80`）
- `raw/aimami/1.2.3/windows-x64/legacy_virtual_auth/ida/pseudocode/*.c`（7 个文件：`cleanup_0`、`read_marker_0`、`read_user_owned_backup`、`sub_1404F99D0`、`sub_140579700`、2 个闭包）
- `intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl`：确认这 19 行是 win-native census 里 `module` 精确等于 `codexmate_lib/core/relay/router_unlock_auth`（12 行）/`codexmate_lib/core/relay/legacy_virtual_auth`（7 行）的**全部**行，无剩余 `on_disk:false` 未落盘项——对这两个具体模块名而言是完整census闭合，不是抽样。
- `internal-reverse/INDEX.jsonl` 既有条目（session `win-group2of4-relay-modules-20260724` + `win-1.2.3-app-function-inventory-gapfill-20260724`）：先于本包已存在，回溯索引这批 raw 证据的产出过程，本包不重复产出，只归并整理。
- 对照参考（非证据来源）：`audits/macos-1.2.3-mystery-unlock/`（macOS arm64，2026-07-24 产出，33 个函数，同一判定）；` macOS 函数簇的详细逆向底料，见「与既有分析的关系」一节）。

完整路径见 `pointers/evidence-paths.md`。

## Coverage

- `router_unlock_auth` 目录：12/12 文件已读（win-native census 全部 12 行，0 剩余）。
- `legacy_virtual_auth` 目录：7/7 文件已读（win-native census 全部 7 行，0 剩余）。
- `core::auth::is_aimami_managed_virtual_auth`、`core::relay::codex_diagnostic::{check,fix}_router_unlock_auth_residue` 的 Windows 对应函数：**本包未读，标 Unknown/out-of-scope**——任务范围明确限定在 `router_unlock_auth`/`legacy_virtual_auth`/`virtual_auth` 三个目录；`auth/`、`codex_diagnostic/` 是两个大得多的通用目录（各自另有几十个与本簇无关的函数），按文件名搜索未命中 `*managed_virtual*`/`*router_unlock*residue*`，说明这两个具体函数**这一轮 Windows 证据里没有被单独提取/命名**，不代表二进制里不存在（`codex_diagnostic` 子模块本身已在 win-native relay-core 表面枚举里确认存在，只是内部函数未逐个提取）。不臆测其内容。

## Per-target Result Matrix

| target | 是否涉及第三方凭据/鉴权 | 网络调用 | ToS 分类（本包独立判定） | 与 macOS 判定一致性 |
|---|---|---|---|---|
| `router_unlock_auth::install_virtual_unlock_auth`（0x1404949c0） | 是（构造并写入冒充凭据） | 否（本地文件写） | `tos_circumvention` | 一致 |
| `router_unlock_auth::sub_14048FF80`（JSON 构造，≈macOS `build_unlock_auth_json`） | 是 | 否 | `tos_circumvention` | 一致（字段/字面量逐一比对完全相同，见 SYSTEM-DIFF.md） |
| `router_unlock_auth::sub_14048F130`（JWT 构造，≈macOS `make_unsigned_jwt`） | 是（嵌入真实 OpenAI 域名 issuer） | 否 | `tos_circumvention` | 一致 |
| `router_unlock_auth::cleanup`（0x140497830，含 4 闭包） | 是（伪造凭据生命周期清理/恢复） | 否 | `tos_circumvention` | 一致（四态状态机语义一致） |
| `router_unlock_auth::read_marker` / `read_cleanup_backup` / `serialize` | 是（状态查询/标记读写/UI 上报） | 否 | `tos_circumvention` | 一致 |
| `router_unlock_auth::sub_14048EF50` / `sub_14048FE80`（未命名 helper，写入/校验辅助） | 是 | 否 | `tos_circumvention`（依附判定） | 一致（功能角色对应 macOS 的字符串/marker 辅助函数） |
| `legacy_virtual_auth::cleanup_0` / `read_marker_0` / `read_user_owned_backup` / `sub_1404F99D0` / `sub_140579700` + 2 闭包 | 是 | 否 | `tos_circumvention` | 一致（旧代实现，同一机制） |

## Frontend Control Flow

未做前端 CCF 精确定位（与 macOS 侧一致的处理：既然判定 SKIP，不为不打算实现的功能补前端定位工作）。但做了一项负向核对（四角度自核角度 B，见 `reviews/CLAUDE.md`）：`grep -icE 'router_unlock|virtual_auth' raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` → **0 命中**，Windows 前端 IPC 命令表里没有直接以这两个模块命名的 Tauri command，与 macOS 侧独立得到的同一负向结果一致（本簇大概率经更上层的 relay/router 开关命令间接触发，未做穷举）。触发入口本身仍标 `Unknown`，不臆测。

## Backend Control Flow / Pseudocode / Call-tree / Leaf

- 19/19 函数为非失败 decompile（brace-balanced，无截断标记，`WIN-APP-FUNCTION-INVENTORY.jsonl` 逐行确认）。
- Call-tree 叶子：本地文件系统读写（`sub_1408726C0`=写、`sub_141485EF0`=删、`sub_14148D130`/`sub_14148D3C0`=读、`sub_141473FA0`=路径拼装）+ JSON 序列化/反序列化（`sub_140307860` 等）+ 内存分配/释放（`sub_140001650`/`sub_140001660`）。无 HTTP/网络叶子。
- 因判定为 `tos_circumvention`，本包**不产出可实现的字段级构造步骤/序列化算法**——README/SYSTEM-DIFF/logic 只描述行为轮廓与跨平台对照事实，不写"如何照抄实现"。

## Interface / Error / Boundary

- 写入目标：与 macOS 侧一致的语义——Codex 原生登录态读取的 auth 文件路径；写入前备份已存在内容，marker 记录伪造状态。
- 错误路径：`install_virtual_unlock_auth`/`sub_14048FF80` 内多处 `sub_1416C2D4B`（分配失败 panic）、`CoreError` 分支（`*a1 = -1`/`10` 等 tag 值区分 Ok/Err），文件写入失败/JSON 序列化失败均有独立分支，未见吞错静默。
- 边界：本包仅覆盖 `router_unlock_auth`/`legacy_virtual_auth` 两个模块名下的 Windows 原生函数；`is_aimami_managed_virtual_auth`/`codex_diagnostic` residue check-fix 的 Windows 对应实现未核实（Unknown）。

## Gate Leaf Status

本包不写 `consumerStartReady=true`/`strictImplementationUse=true`/`readyToImplement=true`。对全部 19 个 `tos_circumvention` 目标，`implementation_use` 永久锁定为 `false`（产品决策，非证据缺口——即使证据 100% 完整，SKIP 结论也不变）。详见 `gate-report.json`。

## Diff 结论（平台差异，dim5 独立闭合）

- **跨平台一致**（独立确认，非外推）：占位 `auth.json` 的全部字段名/字面值/固定身份/免责声明字符串、JWT claim 构造模式、`live_auth_state` 语义对应的 4 态清理分支结构、备份内容拒绝校验逻辑（`-unlock` 后缀 SIMD 比对 + `aimami_router_unlock_auth`/`tokens` 字段检测）—— Windows 与 macOS 两侧独立读出的字面量/控制流完全一致，不是用 macOS 结论套 Windows，是两份独立证据互相印证。
- **跨平台差异**：函数分解粒度不同。macOS 侧 `router_unlock_auth` 目录有 24 个独立命名函数（含 `ensure_auth_for_router`、`prepare_auth_for_router`、`restore_real_auth_for_router`、`live_auth_state`、`has_residue`、`marker_exists`、`auth_is_usable_real_oauth`、`backup_contains_usable_real_oauth`、`validate_user_owned_auth_backup`、`verify_real_auth_restore_ready`、`readiness`、`cleanup_for_native_off` 等独立符号）；Windows 侧对应模块 census 只有 12 个（`legacy_virtual_auth` mac 8 个 vs win 7 个，差异更小）。逐个读完 Windows 的 5 个"顶层"函数（`install_virtual_unlock_auth`/`cleanup`/`read_marker`/`read_cleanup_backup`/`serialize`）后观察到：`install_virtual_unlock_auth` 单个函数体（约 350 行伪代码）内联了 macOS 侧 `ensure_auth_for_router`/`live_auth_state` 等函数的判断逻辑（调用未在本模块命名的 `sub_14048ED60` 取状态、按 force 标志 `a3` 分支）；`cleanup` 单个函数体（约 550 行）同样内联了四态分支逻辑。**这是一个观察到的强烈迹象、不是 100% 证实的结论**：win-native census（`WIN-APP-FUNCTION-INVENTORY.jsonl`）对这两个模块名已确认零剩余未提取函数，所以更可能是 Windows release 构建把这些子函数内联合并了（不同平台编译器/LTO 边界差异），而不是"证据没提取全"——但本包没有做全二进制范围搜索去证实这些内联函数是否作为独立符号存在于其它未命名/未攻克的地址，因此该差异结论本身标 `high confidence, not fully proven`。
- 不用 macOS 结论替代 Windows 证据：本包所有"跨平台一致"的表述都基于 Windows 侧独立读出的字面量核对，不是"假设 macOS 怎样 Windows 就怎样"。

## Unknown / Missing

- `core::auth::is_aimami_managed_virtual_auth`、`core::relay::codex_diagnostic::{check,fix}_router_unlock_auth_residue` 的 Windows 实现：Unknown（本包范围外，未读）。
- Windows 侧 `sub_14048ED60`（`cleanup`/`install_virtual_unlock_auth` 内调用的状态判定 helper，功能上对应 macOS `live_auth_state`）本身未被单独解读——它不在本模块的 19 个 census 行内，可能属于同文件的其它模块或被内联；本包**未**声称已读过这个函数的独立实现，只观察到调用点和返回值被 switch(0/1/2/3) 消费的事实。
- JWT 段落拼接细节（是否补第三段空签名）：与 macOS SPEC 记录一致的 `accepted_unknown`（signature 从不校验，不影响行为判定）。
- 前端触发入口：Unknown（有意不补，因 SKIP，同 macOS 侧处理原则）。

## Action / Non-action

- **Non-action（SKIP）**：`router_unlock_auth`、`legacy_virtual_auth` 全部 19 个目标，判定 `tos_circumvention`，`implementation_policy=understand_only`，**Polaris 不实现、不作为任何后续 worker 的 logic 依据**。理由见上方「我自己的判断依据」与 `TOS-CLASSIFICATION.md`。
- 与 macOS 侧的姊妹包判定一致，双平台各自独立复核后互相印证，无冲突。

## 与既有分析的关系（必须如实指出的冲突）

任务指派时要求参考 ` macOS 函数簇——`router_unlock_auth`/`legacy_virtual_auth`/`is_aimami_managed_virtual_auth`/`codex_diagnostic` 两个 residue 函数——的详细逆向底料）。逐字读完该文件后，必须如实指出：**该文件的定性框架与本包（以及本包核对时发现的姊妹包 `audits/macos-1.2.3-mystery-unlock/`）结论方向相反**。

- `SPEC-virtual-auth-mode.md` 第 0 节把整条机制预先定性为"正当功能"（"虚拟 auth / 无账号模式是**正当功能**"），并在第 5 节列出 5 条"fork 缺口"（G1-G5），其中 G1（独立残留态检测+修复）、G2（占位文件内嵌免责声明字段）被写成"**建议新增**"——即建议 Polaris 照抄/补齐这套伪造机制的更多能力。
- 本包（以及 `audits/macos-1.2.3-mystery-unlock/`）读的是**完全相同的一批底层函数**（字段名、固定身份、JWT claim、四态清理模型逐一比对一致，见上方「与 macOS 判定一致性」列），但独立得出的定性是 `tos_circumvention`——理由是这套机制的手段是"伪造包含真实 OpenAI 域名标识的第三方账号凭据结构，骗过依赖该凭据判断登录态的逻辑"，不是"纯本地状态标记"。
- 两份文档不可能同时都对："这是正当功能，建议照抄增强"与"这是规避条款的凭据伪造，不实现"是互斥结论，不是同一结论的两种措辞。本包**没有权限也没有义务替用户裁决 Polaris 的产品/合规决策**，但按任务指令"如实写出理由"的要求，必须把这个冲突摆出来，不能因为任务提示引用了前者就默认采信前者、也不能默认姊妹包的结论一定优先。
- 记录在案的事实：`audits/macos-1.2.3-mystery-unlock/manifest.json` 产出时间戳 `2026-07-24`，晚于 `SPEC-virtual-auth-mode.md` 的分析批次；本包（Windows）产出于 `2026-07-25`。时间上更晚的两份文档（macOS 分类包 + 本 Windows 分类包）判定一致，与更早的 `SPEC-virtual-auth-mode.md` 判定相反——但"更晚"不构成"更正确"的证明，只是记录时序事实，供用户自行判断哪一份代表当前有效决策。
- 本包的立场：本包自己独立读完 19 个 Windows 函数后（在核对到 macOS 姊妹包之前）已经形成 `tos_circumvention` 的判断，理由见上方「我自己的判断依据」一节，是基于代码里逐字节确认的字面量（真实 OpenAI 域名字符串、厂商自己的"不是真账号"免责声明字符串），不是因为看到了同名结论就附和。是否采纳这个判定作为 Polaris 的最终产品决策，留给用户/后续人工复核裁定，本包不越权替用户拍板，但拒绝把两份互斥结论都当作"同等有效"含糊带过。
