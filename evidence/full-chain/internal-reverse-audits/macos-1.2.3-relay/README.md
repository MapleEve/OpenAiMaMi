# AiMaMi 1.2.3 macOS relay — internal-reverse 结论包

同步时间：2026-07-24
范围：`core::relay::*`（32 子模块）+ `commands::relay`（23 上游命令，Mac 侧对应 22 个反编译文件）+ 前端 `RelayModelPage`（relay-page-iqa4dxHn.js）
最终结论：**字节级反编译覆盖已达高完整度（638 个去重函数、0 截断桩），但六维 full_leaf_100 门未闭合**（缺 dim4 interface/DTO 抽取、dim6 test/acceptance mapping）。当前档位为 `consumerStartReady`（23/23 命令），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

**2026-07-24 措辞纠正**：本文档及 `gate-report.json`/`manifest.json`/`AI.md`/`SYSTEM-DIFF.md` 此前均引用 `goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md` §C 的结论声称 `fetch_relay_models_draft_0x100193810.c`（唯一命中截断标记的文件）"已用 disasm 续接补完"。经本轮 grounded 复验，该声称为**假**——该检查只验证了原始反汇编指令范围落在函数正确边界内，从未验证 `.c` 伪代码文件本身内容；实测该文件当时仍含字面 `!! TRUNCATED STUB - 未完整 !!` 标记、括号不配平（开1/闭0）、结尾是裸反汇编而非闭合的 C 函数。本轮已通过 `IDA Python` 在 IDA 主机侧执行 `IDA decompiler.decompile(0x100193810)`（绕开 ~1024 字符 MCP 响应通道截断，直写 SMB）真正补完，产出 54,909 字符、括号配平（63/63）、以 `return result; }}` 正常闭合的伪代码；旧桩文件保留为 `.c.stub.bak` 供审计对照。**"0 截断桩"这一结论现在才是真的（此前是未经验证的过度自信声明，非美化，是纠正）。** 全树扫描（`raw/aimami/1.2.3/macos-arm64` 全部 1853 个 `.c` 文件，marker grep + 独立括号配平脚本）未发现其他真截断；命中的 11 处括号不配平均为字符串/字符字面量假阳性（如 `case '{':`、`"}false"`），逐一核实为完整闭合函数。

## 证据索引

- 底稿：`internal-reverse/audits/BASELINE-FINAL-1.2.3.md`（独立完整基线，1638 全 App 函数 mac 侧，含 relay 9 组模块之一）、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（相对 1.2.2 的 216 函数 delta 视图）
- 双平台字节级门禁终审：`goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md`（2026-07-24，四轮独立审计，含工具异常记录、方法论修正、终审文件系统实测）
- 已拍板 Polaris 侧 parity 决策：`goal-aimami-122/RELAY-PARITY-DECISIONS.md`（extraHeaders 恢复/官方模型目录缓存要做/keychain 保持明文/billing header 不带/reasoning 分模型处理）
- 逐命令/模块 gap 明细：`goal-aimami-122/RELAY-PARITY-G1.md`~`G6.md`、`RELAY-GAP-BYTELEVEL.md`、`RELAY-1.2.3-BYTELEVEL-DIFF.md`
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **32 个 `core::relay` 子模块**：全部有产出（0 未归类孤儿目录）。首轮审计（2026-07-23/24）计 570 函数；同日晚些时候复核发现聚合数已升至 616（增量集中在 translator/dialects/manager/keychain，未逐子模块重新核实分布）；三轮终审（文件系统直接 `find`）得出 mac `core/relay/*` 合计 **638**（含 22 个 `commands/relay` 文件），638 个不同反编译地址、0 重复、0 真截断桩（见上方 2026-07-24 措辞纠正：此数字此前基于未验证声明，现已实际补完并复验为真）。
- **前端**：`RelayModelPage` 组件树/状态模型/交互→invoke 命令全逆（21 组件/34 useState/10 useMutation），CodexRouter 开关的二次确认+5 段进度弹窗时序已还原。
- **命令面**：23 条上游命令，Mac 侧 22 个 `.c` 文件覆盖（`get_codex_router_auth_readiness` 的 Windows 对应体是 ICF 折叠共享 dispatcher，Mac 侧以独立函数 `0x10053fd20` 为准，不产出额外 Win 对应文件）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：mostly-closed
- dim2 后端 owner+pseudocode：strong（638 函数，0 截断——2026-07-24 纠正后实际验证为真，见上方措辞纠正段）
- dim3 call-tree 到实现叶子：partial（函数体已逆到真实逻辑，但未产出逐命令系统性调用树规约文档）
- dim4 interface/DTO/error/side-effect 边界：**not-closed**
- dim5 同平台 gate：closed-for-existence / open-for-parity（4 个 Mac-only 子模块 Windows 侧零证据，标 Unknown）
- dim6 test/acceptance mapping：**not-closed**

## Frontend Control Flow

见 `pointers/evidence-paths.md` 指向 `raw/aimami/1.2.3/macos-arm64/frontend/pages/relay-frontend.md`（164 行，组件树+状态模型+交互时序完整逆向）。关键交互：CodexRouter 开关先 `get_codex_router_auth_readiness` 判虚拟邮箱鉴权→二次确认弹窗(5 段实时进度)→`set_codex_router_enabled`→成功后调 `diagnose_codex_router` 核实 config.toml 真写入。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`、`logic/REGISTRATION-TABLE-1.2.3.md`、`logic/DELTA-LOGIC-1.2.3.md`。32 子模块职责总览（`manager`=RelayManager 中枢/`proxy_server`=本地 axum 代理/`router_transition`+`router_reconciler`=开关状态机/`router_unlock_auth`=虚拟鉴权/`config_takeover`=config.toml 标记块接管归还/`transition_journal`=Mac-only 迁移日志/`health_check`=健康检查；`translator`=Anthropic↔OpenAI 双向转换 98K 行/`stream`=4 个 SSE 状态机/`models`/`codex_catalog`/`image_compat`=视觉模型剥图/`quota`=多 provider 余额/`storage`=原子写+MiniMax M3 迁移/`keychain`=三级密钥/`dialects`=reasoning 注入；`codex_diagnostic`=线程污染诊断自愈/`codex_thread_visibility`=rollout session_meta 改写/`codex_writer`=config 注入块+剥离孤儿 `aimami_relay_`/`codex_project_state`/`invariants`/`managed_blocks`〔Win 独立目录，Mac 并入 codex_writer〕/`fetch_models`/`legacy_virtual_auth`）。

## Interface / Error / Boundary

**未闭合**（dim4）。已知的 Polaris 侧契约调整决策见 `goal-aimami-122/RELAY-PARITY-DECISIONS.md`（不代表 1.2.3 upstream 的 DTO 逆向已完成，是 Polaris 自己已拍板的实现决策，与本包证据平行存在）。

## Gate Leaf Status

`consumerStartReady` 全 23 条命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

相对 1.2.2：mac 真 App 函数 1267→1638（216 新增，非仅 relay），changelog 三项均为行为后端变更（自动处理 ChatGPT/Codex 进程占用、账号切换稳定性、新旧客户端兼容+修复无法关闭路由、中转模型协议+推理层级适配）+ autostart（未记录）+ account-token 相关（未记录，量最大）。relay 域内关键新逻辑：`strip_invalid_router_top_level_model`（剥离引用失效 provider 的残留 model 指令+清理孤儿 `aimami_relay_*` 键，是"无法关闭路由"bug 的根因修复）。详见 `logic/DELTA-LOGIC-1.2.3.md`。

## Unknown / Missing

1. 是否存在第 33 个 `core::relay` 子模块——`func_query` 工具在本次会话异常（固定返回 10 条不受 filter 影响），改用 `find_regex` 对 `core/relay/` 路径字符串扫描（n=30, exhaustive）未发现新模块名，但未能用主证据路线独立证伪，记 `accepted_unknown`（工具限制类，已交叉核查，非未查）。
2. 语义关键词孤儿扫描（`brand`/`litellm`/`defaultWireApi`/`noAccountMode`）——**完全未执行**，诚实记为 `blocks_start`，非 accepted_unknown。
3. 2 条命令（Win `sub_140187580`/`sub_140CCE030` vs Mac `diagnose_codex_router`/`test_relay_draft_stream`）身份映射未做字节签名比对，仅体量/位置吻合的弱推测。
4. dim4 interface/DTO 抽取、dim6 test/acceptance mapping：均未产出，是推进到 `strictImplementationUse` 的下一步工作。
5. 4 个 Mac-only 子模块（`transition_journal`/`breaker`/`native_responses_compat`/`upstream_url`，20 函数）在 Windows 侧零证据，标 `Unknown`（非确认不存在）。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足，Polaris 可基于 638 个已逆函数的行为语义 + `goal-aimami-122/RELAY-PARITY-DECISIONS.md` 已拍板决策开始实现，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把本包的 dim2 覆盖数字（638/616/570）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 Mac 证据外推 Windows 4 个 Mac-only 子模块的行为。
