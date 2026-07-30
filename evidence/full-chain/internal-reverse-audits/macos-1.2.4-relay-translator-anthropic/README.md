# AiMaMi 1.2.4 macOS relay-translator — internal-reverse 消费者结论包

同步时间：2026-07-29
范围：`core::relay::translator`（9 函数）+ `core::relay::translator::stream`（6 函数）+ `core::relay::anthropic_reasoning`（NEW，7 函数）+ `core::relay::anthropic_history`（NEW，5 函数）+ `core::relay::native_responses_compat`（1 函数）+ `core::relay::models`（4 函数）= 32 个反编译函数，跨 6 个模块；3 条新增上游 IPC 命令（`get_claude_web_search_compat` / `set_claude_web_search_compat` / `set_codex_no_account_slots`）。
baseline：1.2.3（已消费 `internal-reverse/audits/macos-1.2.3-relay/`，其 relay 模块门为 `consumerStartReady` 23/23、`readyToImplement=0`）。
最终结论：**六维 full_leaf_100 门未闭合**（dim4 仅 partial-closed，dim6 not-closed），`gate_accepted=false`、`implementation_use=false`。当前档位为 `consumerStartReady`（3/3 新命令），`strictImplementationUse`/`readyToImplement` 均为 0。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 模块职责（一句话）

1.2.4 把 Anthropic relay 翻译层拆成「**推理决策**（`anthropic_reasoning`，新模块）+ **历史修正**（`anthropic_history`，新模块）+ **流式直转 Responses**（`translator`/`translator::stream` 整体重写）」三段。核心新增能力是 **adaptive thinking**：按模型名（fable-5 / mythos-5 / sonnet-5 / opus 系等共 9 类）和 codex effort 等级动态决定要不要给 Anthropic 请求塞 thinking budget；并在历史回放时 **SHA-256 校验/剔除非法 thinking signature**，防止上游拒绝。stream 侧把 1.2.3 的 `close_text_block`/`close_thinking_block`/`close_tool_blocks`/`flush` 一锅端，重写成统一的 `close_anthropic_block` 分发器 + `close_all_blocks` 迭代器 + `finish_response`/`fail_with_type` 收尾，新增 `redacted_thinking`、`reasoning_summary_*`、`custom_tool_call`、`tool_search_call` 等 Responses 事件类型。这些都是**中转代理内部翻译逻辑**，不动 IPC 名、不动持久化结构、不拉起/重启 Codex 进程。

## 6dims 摘要

| 维度 | 状态 | 证据要点 |
|---|---|---|
| dim1 前端控制流 | partial | 2/3 新命令有前端 CCF：`get/set_claude_web_search_compat` 落 maintenance-page（`ia` 组件，useQuery+useMutation+invalidate+toast，L434-L446）；`set_codex_no_account_slots` 落 relay-page（`Os` NoAccountSlots 卡，L3072-L3261，18 i18n key，min/max 守卫 st=5）。translator/anthropic_reasoning/anthropic_history 是纯函数库，**前端零投影**（changelog C 确认 backend-only）。 |
| dim2 后端 owner+pseudocode | strong | 32 个去重反编译函数，0 截断桩，全部带 `[FULL decompile]` 头；大函数（`anthropic_to_responses_response_with_tool_maps` 3192 行、`normalize_messages` 66KB）显式标 FULL。 |
| dim3 call-tree 到实现叶子 | partial | stream 收尾路径（`finish_response`/`fail_with_type`/`close_anthropic_block`/`close_all_blocks`）和 anthropic_history 修正路径（`rectify_invalid_thinking_signature` retain_mut 闭包）已追到叶子（BTreeMap/Vec/retain_mut 操作、event sink 写、finished 标志置位）；但未对全部 32 函数产出独立逐函数 call-tree-to-leaf 规约文档。 |
| dim4 interface/DTO/error/boundary | **partial-closed** | `CodexNoAccountSlot` DTO（3 份 serialize 单态 @0x10057cbe0/cd30/cea0，结构体布局 offset 0..24/24..48/48=Option<i64>，None 用 `0x8000000000000000` 哨兵，字段数 `__OFSUB__(-v2,1)^3`）+ `AnthropicDirectToResponsesStream` 输出 DTO（`finish_response` response 信封：id/object:"response"/created_at/status/model/output/usage；`fail_with_type` error 子对象：type/message/status:"failed"）已抽（6dims §2）；但逐命令 DTO/error-envelope/side-effect 边界未系统化闭合。 |
| dim5 同平台 gate | closed-for-existence | win `0x1408a2a20`(`uses_adaptive_thinking`) 与 mac `0x1005731d0` 逻辑等价（9 个模型名明文串逐一对应）；3 命令名跨平台一致；本 scope 无 `cfg(windows)` 专支。独立 `windows-1.2.4-relay-translator-anthropic/` bundle 尚未产出。 |
| dim6 test/acceptance mapping | **not-closed** | 未产出；是推进到 `strictImplementationUse` 的下一步工作。 |

## changelog 归属

本包对应 1.2.4 changelog 的 **C 条**（优化 Anthropic relay 翻译层，支持 adaptive thinking 动态决策与 thinking signature 校验）——纯后端协议层，前端无 UI 改动（`CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` 对账确认 backend-only）。

同时交叉覆盖 **B 条**（新增 Claude WebSearch 声明过滤兼容开关）的后端实现：`native_responses_compat::strip_hosted_web_search_tools` + `get/set_claude_web_search_compat` IPC（前端由 maintenance-page 消费）。

以及 **A 条**（优化无账号登录模式）的 DTO 侧：`models::CodexNoAccountSlot` + 3 份 serialize 单态（前端由 relay-page `Os` 组件消费 `set_codex_no_account_slots`）。

## 破坏性副作用

【人话结论】本批 6 个模块 **零文件/DB/Keychain/config.toml 破坏性副作用，零 sidecar 行为**。它们是内存态翻译/决策库。

- `anthropic_reasoning` / `anthropic_history` / `translator` / `translator::stream`：纯内存。stream 的 BTreeMap/Vec 都是请求生命周期内的缓冲区，请求结束即弃。无文件读写、无 DB、无 Keychain。
- `native_responses_compat::strip_hosted_web_search_tools`：只改内存 JSON Value（serde_json::Value），不落盘。真正的持久化在上层 `set_claude_web_search_compat` command（manager 层），写的是 Claude web_search 兼容开关配置。
- `models::CodexNoAccountSlot`：定义 DTO + Serialize，自身不落盘；由 `set_codex_no_account_slots` command 序列化后写「无账号槽」配置（在 manager/command 层落盘）。

**内存态可观测副作用**（非破坏性，但需 consumer 知悉）：
- `push_anthropic_message_block` / `push_anthropic_thinking_block` / `push_tool_result_block`：写 messages Vec / content 数组（grow/insert/memmove）。
- `close_all_blocks`：清空 self@+25..+27 blocks 根。
- `finish_response` / `fail_with_type`：置 finished@253=1；写 event sink。
- `rectify_invalid_thinking_signature` + 其 `{closure}`：**删** thinking/redacted_thinking 块（return 0）；**删** object 块的 `signature` 字段；retain 消息；写 3 个移除计数器。
- `strip_hosted_web_search_tools`：删 tools 数组项/键、tool_choice 键；返回剥离计数。
- `contains_http_status_code`：越界走 `core::panicking::panic_bounds_check`(@0x10057e300)——本批唯一显式 panic 点，属库内不变量违例，非业务路径。

## 证据指针

- 6dims 详实分析：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-translator-anthropic-6dims.md`（24278 字节，本包主要证据源）
- 跨平台整合终稿：`raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md`（27345 字节）
- 前端对账：`raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`（15481 字节）
- 前端 CCF delta：`raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md`（17308 字节）
- raw `.c` 伪代码路径：见 `pointers/evidence-paths.md`
- baseline 1.2.3 relay bundle：`internal-reverse/audits/macos-1.2.3-relay/`（已消费，其 gate-report.json/manifest.json/README.md/logic/*/pointers/data/reviews/CLAUDE.md 为本包模板源）

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 逐维度状态）与 `data/producer-ledger.json`。摘要：
- dim1 前端控制流：partial（2/3 命令有 CCF，translator 三段无前端投影）
- dim2 后端 owner+pseudocode：strong（32 函数，0 截断）
- dim3 call-tree 到实现叶子：partial
- dim4 interface/DTO/error/boundary：**partial-closed**
- dim5 同平台 gate：closed-for-existence
- dim6 test/acceptance mapping：**not-closed**

## Gate Leaf Status

`consumerStartReady` 全 3 条新命令；`strictImplementationUse`/`readyToImplement` 为空。详见 `gate-report.json`。

## Diff 结论

相对 1.2.3：translator/stream 整体重写（`with_tool_name_map` 单图 → `with_tool_maps` 双图；`close_text_block`/`close_thinking_block`/`close_tool_blocks`/`flush` 合并重写为 `close_anthropic_block` 分发器 + `close_all_blocks` 迭代器 + `finish_response`/`fail_with_type` 双收尾径）；新增 `anthropic_reasoning`（7 函数）+ `anthropic_history`（5 函数）两个模块；新增 `strip_hosted_web_search_tools` 函数 + `CodexNoAccountSlot` DTO。核心重构主题：**策略与翻译解耦**——1.2.3 的 stream 是「按块类型分散收尾」，1.2.4 统一成「单入口分发 + 批量迭代 + 成功/失败双径」，并把「要不要 thinking / thinking 合不合法」的决策抽成独立模块。详见 `logic/DELTA-LOGIC-1.2.4.md`。

## Unknown / Missing

1. `handle_event`（stream 主事件循环）未在本批 delta 伪代码中露出，无法确认其对 `redacted_thinking`/`tool_search_call` 新块类型的分发是否新增；标 **待查**，不臆断。
2. `normalize_messages`（66KB）内嵌 SHA-256 轮常量，强烈指向 thinking signature 计算；完整 signature 算法需逐 round 还原，本次只确认「使用了 SHA-256」，**不展开伪算法**。
3. `codex_effort_to_anthropic` 的 len3(low/max)/len5(xhigh) 返回的具体静态串是哪几个 anthropic effort 枚举值，需交叉 anon 数据段确认；本次只确认映射存在，**不强行命名**。
4. 1.2.3 `native_responses_compat` 的 `rejects_hosted_web_search`/`sanitize_request` 在 1.2.4 是否仍存在，标 **待对账**。
5. `set_claude_web_search_compat` mac setter 实现体不在本批 NEW-delta 制品（仅 DTO serialize @0x1005825c0），以 win 行为 @0x140e01580 为准。
6. dim4 逐命令 DTO/error-envelope/side-effect 边界、dim6 test/acceptance mapping：均未系统化产出，是推进到 `strictImplementationUse` 的下一步工作。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足，Polaris 可基于 32 个已逆函数的行为语义开始实现，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把本包的 dim2 覆盖数字（32）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 mac 证据外推 win `set_claude_web_search_compat` setter 行为（以 win @0x140e01580 为准）。
