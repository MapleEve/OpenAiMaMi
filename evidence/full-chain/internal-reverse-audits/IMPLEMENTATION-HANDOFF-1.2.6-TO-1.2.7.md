# 1.2.6 → 1.2.7 行为变更实现指南（Implementation Handoff）

> **适用版本线**：1.2.6 → 1.2.7（含 1.2.7 内部 pre→release 两段增量，合并后的最终目标行为）。
> **用途**：实现侧据此还原 1.2.6 → 1.2.7 的目标行为变更。本指南只描述目标行为与验收方法。
> **阅读顺序**：先读 §1 建立变更地图；实现某模块前跳读 §2 对应小节；动手实现前必读 §3 实现注意事项与 §4 平台差异要点；实现完成后按 §5 验收标准逐项核对。
> **目标口径**：目标行为 = 1.2.7 正式版行为。文中出现的「pre 段」仅用于标注行为演变来源或提示「不得按 pre 语义实现」，不作为实现目标。
> **字符串常量约定**：文中引号内字符串（错误文案、协议字面量、字段名、键名、事件名）均为行为合同的组成部分，除品牌段外必须逐字实现。品牌段统一写作 `{PRODUCT}`，实现时替换为实现产品的品牌名。少量自有内部标识（线程名、探针文件名、本地状态文件内部布局等）标注「品牌化命名」，实现可自行命名但须读写两端全局一致。协议字面量 `ccswitch-anthropic-thinking-v1:` 为固定常量：实现可整体改用自有品牌前缀，但产出端、解析端与历史前缀拒绝门必须同步一致，且不与参照应用的历史本地数据互通。
> 本指南描述 1.2.6 → 1.2.7 的目标行为变更，供内部实现使用，不对外发布。

---

## 目录

- [1. 行为变更总览](#1-行为变更总览)
- [2. 逐模块行为规格](#2-逐模块行为规格)
  - [2.1 relay-anthropic-stream](#21-relay-anthropic-stream)
  - [2.2 relay-anthropic-aggregate](#22-relay-anthropic-aggregate)
  - [2.3 relay-anthropic-request](#23-relay-anthropic-request)
  - [2.4 pre 段与 release 段差异专项](#24-pre-段与-release-段差异专项)
  - [2.5 relay-probe-upstream-url](#25-relay-probe-upstream-url)
  - [2.6 router-catalog-config](#26-router-catalog-config)
  - [2.7 router-no-account-pre](#27-router-no-account-pre)
  - [2.8 accounts](#28-accounts)
  - [2.9 skills](#29-skills)
  - [2.10 threads-sessions](#210-threads-sessions)
  - [2.11 anthropic-trace](#211-anthropic-trace)
  - [2.12 启动期上下文构造器](#212-启动期上下文构造器)
- [3. 实现注意事项](#3-实现注意事项)
- [4. 平台差异要点](#4-平台差异要点)
- [5. 验收标准](#5-验收标准)

---

## 1. 行为变更总览

本指南描述 1.2.6 → 1.2.7 的目标行为变更。变更覆盖：IPC 命令面、后端模块结构、DTO 合同、Anthropic 协议链（请求翻译 + 流式/聚合响应）、模型目录与路由诊断、账号、技能、会话管理、诊断字段与启动期装配。voice / audio / capture / runtime-settings / trigger-listener 全程不在范围内。

### 1.1 IPC 命令面（双平台一致）

- IPC 命令 134 → 147：新增 20、删除 7、参数漂移 1。
  - 新增 20：`get_account_reset_credits`、`get_account_reset_credit_history`、`set_account_alias`、`get_usage_refresh_all_accounts`、`set_usage_refresh_all_accounts`、`load_runtime_display_snapshot`、`clean_catalog_ghost_threads`、`clean_global_state_tmp_files`、`clean_missing_rollout_rows`、`clean_orphan_rollouts`、`inspect_session_index_health`、`export_sessions_batch`、`export_thread_statistics`、`load_session_messages`、`run_codex_router_diagnostics`、`fix_codex_router_issue`、`load_dashboard_analytics`、`set_dashboard_analytics_active`、`load_thread_analytics`、`load_thread_analytics_detail`。
  - 删除 7：`get_codex_router_auth_readiness`、`load_change_analytics`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_usage_analytics`、`set_codex_no_account_slots`。
  - 参数漂移 1：`load_quota_history` 增 `range` 参数（`{accountKey}` → `{accountKey, range}`；后端对应 `core::quota_history::load_history_range`）。
- 前端控制流观察集合中另有 6+1 条后端双版本既有命令（`get_or_create_remote_device_secret`、`open_macos_privacy_pane`、`quit_keeping_router`、`quit_after_closing_router`、`test_relay_draft_stream`、`test_relay_provider_stream`、`import_remote_device_secret_if_empty`）；`custom_instructions_entry_enabled`、`recharge_entry_enabled` 是前端读 localStorage 键，无后端命令（维持不实现）；`graceful_restart_for_update` 后端双平台均有实现，但应答形态平台分叉（见 §4）。
- 双平台使用同一前端构建（前端资源字节级一致，仅 index.html 有平台差异）→ 前端命令面即全平台命令面。

### 1.2 后端模块结构变化

- 新增模块/子系统：`core/relay/translator` 子模块群（`anthropic_search`、`anthropic_tools`、`chat_content` 等）、`core/relay/codex_thread_visibility`（history / model_fallback 两文件面）、`core/analytics/*`（parser/threads/index/reader/aggregate）、`anthropic_trace`/`anthropic_reasoning`/`anthropic_continuation`/`anthropic_history`、`codex_diagnostic`、`relay/manager`、`router_transition`、`codex_catalog`、`native_catalog`、`native_repair_catalog`、`config_takeover`、`platform/paths/CodexPaths`、`core/sessions/{health,history,export,worktree,detail}`、`codex_app_server`、account_reset_credits 四层子系统、account_observer/account_observation/usage_refresh、`relay/keychain/revisions`、`response_item_id_compat`、`core/mcp`、`core/quota_history`。
- 删除主面：`router_unlock_auth`（readiness 支撑面收缩）、translator 旧 OpenAI-only 路径、`codex_catalog` 部分旧函数、`core/session_analytics` 8 函数全删（对应 5 条旧 analytics IPC 删除）、`core/sessions.rs` 拆为子模块（函数重组保留）。
- 1.2.7 内部 pre→release：Anthropic 协议主链（请求/响应/SSE）从 pre 段自带实现改为由独立协议库承载（pre 段自带的旧 Anthropic 命名空间实现不再存在）。

### 1.3 DTO / 字段级合同

- accounts：`ResetCredit{id,expiresAt}` / `ResetCreditGrant{id,occurredAt}` / `ResetCreditsPayload{credits}` / `ResetCreditHistoryPayload{events,nextCursor}`；前端 camelCase ↔ 上游 snake_case（`events`/`next_cursor`/`occurred_at`/`kind`）双合同。
- threads：`CodexSession` 26 字段全 schema（`id, threadName, updatedAt, fileSize, filePath, projectName, projectPath, parentSessionId, depth, agentNickname, agentRole, isArchived, excerpt, projectPathMissing, isConversationThread, rolloutMissing, worktreeMigration, displayName, preview, tokensUsed, model, reasoningEffort, memoryMode, historyMode, projectId, gitBranch`）；`export_sessions_batch` 的 jsonl 行 = CodexSession JSON。
- router：`FixResult{fixedIds,failedIds,details}` / `DiagnosticItem{label,detail,fixable}` / `DiagnosticReport{items,hasIssues,transitionInFlight}` / `DiagnosticRepairOutcome` 枚举（含 `ReconciledRouterTarget`）。
- engine：`CodexPaths` 31 字段布局（mac/win 1:1）；state_db 四级解析（`CODEX_SQLITE_HOME` → config `sqlite_home` → `state_*.sqlite` 数字茎扫描 → `state_5.sqlite` 兜底）。
- protocol：`anthropic-version: 2023-06-01`（+`x-api-key`、`anthropic-beta: inline-tools-2026-09-15`）、模型族表（`sonnet-5-5`/`opus-5`/`opus-5-5`/`fable-5`/`fable-5-1`/`mythos-5`/`mythos-5-1`/`opus-4-8` 等）、SSE 六事件全集 + Responses 事件集 + 错误 envelope——双平台一致。
- skills：`InstalledSkillSummary` 8 → 11 键（新增 `managed`/`source`/`enabled`；mac 侧为 pre→release 变化，win 两侧均已是 11 键）；`AccountSummary` 仍 25 键、`ExportedAccount` 仍 14 键含 auth；`PlanType` 9 → 11（+`go`/`pro500`，内部 ordinal 非 IPC 整数）。
- 既有 DTO 无删除性字段漂移。

### 1.4 删除面与改名面

- 删除：`core::session_analytics` 8 函数全删 → 5 条旧 analytics IPC 删除；`router_unlock_auth` readiness 收缩 → `get_codex_router_auth_readiness` IPC 删除；`set_codex_no_account_slots` 收编为 `restore_no_account_model_threads` + `validate_legacy_no_account_aliases`；translator 旧 OpenAI-only 路径删除。
- 改名：`get_codex_router_auth_readiness` → `run_codex_router_diagnostics` + `fix_codex_router_issue`；5 条旧 analytics → 新两维 5 命令；`perform_switch_payload` → `perform_switch_payload_with_restart`；`session_analytics::compute_*`（8）→ `analytics::{index,parser,reader,threads,aggregate}`；`core/sessions.rs` → `core/sessions/{health,export,detail,history,worktree}.rs`；`core/relay/translator.rs` → `translator/` 子目录；`core/relay/storage.rs` → `storage/` 子目录；`core/session_analytics` → `core/analytics`。

### 1.5 命令注册面

- 后端注册命令与前端调用面一致；`custom_instructions_entry_enabled` / `recharge_entry_enabled` 两个前端 localStorage 读取键不是后端命令，维持不实现；前端另有若干已注册但未观察页面调用的命令，属保留边界（不据此删除注册）。

---

## 2. 逐模块行为规格

> 1.2.7 内部存在两个构建段（pre 测试段与 release 正式段）。本节以 release 段行为为目标；凡标注「pre 行为」的内容仅用于说明演变或标注「不要按 pre 语义实现」。

---

### 2.1 relay-anthropic-stream

**Anthropic SSE → Responses 事件流翻译与流式核心**

#### 行为面（1.2.6 → 1.2.7）

- 1.2.6 → pre 引入：新流类型 `AnthropicDirectToResponsesStream`（函数群：`feed_line` / `handle_event` / `close_anthropic_block` / `close_anthropic_tool_block` / `close_all_blocks` / `close_pending_text` / `finish_text_block` / `emit_terminal_items` / `ensure_created` / `fail_with_status` / `failure_diagnostic` / `responses_event` / `enable_server_continuation` / `with_tool_maps`）；新子模块 `anthropic_continuation`（`Exchange::{resume,stream,with_trace}`、`Failure::network`、`enabled` 等）、`anthropic_history`、`anthropic_reasoning`、`anthropic_trace`、`translator::anthropic_search`、`anthropic_tools`、`chat_content`；translator 旧 OpenAI-only 路径删除。
- pre → release：请求/响应/SSE 主链迁入独立协议库（下称「协议库」），状态机类型为协议库 `streaming_codex_anthropic` / `transform_codex_anthropic` 下的 `AnthropicToResponsesState` 体系。真流调用链：流驱动 `poll_next`（经 `poll_frame`）→ SSE 状态机。
- SSE 输入/终态合同逐项收紧（双平台一致，详见下）：非法 UTF-8 改增量解码报 `invalid_utf8`；EOF 无 message_stop 报 `stream_truncated`；message_start 唯一性与顺序守卫；content block index 校验；block 收尾推迟到 message_stop；工具参数/思考签名终态校验；终态映射白名单化（仅 end_turn/tool_use/stop_sequence 判 completed）。
- win 侧流引擎以错误文案 `anthropic_search_incomplete` 与 `Conflicting Anthropic stop_reason` 为状态机行为锚；feed_line 族三函数承载 `Upstream Anthropic stream ended before message_stop` 文案。

#### 行为规格

**SSE 增量 UTF-8 解码** — `append_anthropic_utf8`（协议库）：把上一块残留的半截字节（pending 缓冲）拼到新 chunk 前，再整体 `str::from_utf8` 校验，三分支：

```
全合法            → 追加全部，返回 Ok
Err 且 error_len=Some（确定非法） → 返回 Err → 调用方 failed_event("Invalid Anthropic SSE UTF-8", "invalid_utf8")
Err 且 error_len=None（尾部可补全）→ 合法前缀进输出，剩余尾部写回 pending 留下一 chunk
EOF 时 pending 非空 → failed_event("Incomplete Anthropic SSE UTF-8", "invalid_utf8")
```

诊断链互证：`anthropic_trace::error_class` 把含 "utf-8" 的错误归类 "utf8"。**pre 行为**：非法字节替换为 U+FFFD、保留可跨 chunk 尾部——不要按 pre 实现。

**EOF 终态判定** — 流驱动 `poll_next` EOF 分支：若「尚未见到 message_stop 且尚未按失败收尾」两标志均为假，构造 `Upstream Anthropic stream ended before message_stop` + `"stream_truncated"` 调 `AnthropicToResponsesState::failed_event`。即终态判定只认 message_stop 事件；message_delta 带的 stop_reason 字段本身不算终态信号。相邻分支：上游 Err(io) → `failed_event(Display(err), "stream_error")`；EOF 且 response 未开始且缓冲构成完整 JSON 文档（`json_document_candidate` 判定）→ aggregate 回放回退（见 §2.2）。**pre 行为**：有部分输出时可合成 max_tokens/incomplete——不要按 pre 实现。

**事件分派与状态机** — `AnthropicDirectToResponsesStream::handle_event`（pre 段同名体）与 release 协议库状态机分派器 `process_anthropic_sse_block` 行为合同：

- 一级分派按 `event["type"]` 长度：5=error / 12=message_stop / 13=message_start|message_delta / 18=content_block_stop / 19=content_block_start|content_block_delta；其余（含 ping）静默忽略。data JSON 解析失败 → `protocol_failure("Invalid JSON in Anthropic SSE event")`；未知 type 忽略。
- **post-stop 守卫**：stop_reason 已设置后，error/message_stop/message_delta 仍受理；message_start/content_block_start/delta/stop 一律 `fail_with_status("upstream_protocol_error", "Anthropic content arrived after stop_reason")`。
- block 类型长度表：4=text、8=thinking|tool_use、15=server_tool_use、17=redacted_thinking、22=web_search_tool_result；delta 类型：10=text_delta、14=thinking_delta、15=citations_delta|signature_delta、16=input_json_delta。
- 发出的 Responses 事件清单：response.created / output_item.added / content_part.added / output_text.delta / reasoning_summary_part.added / reasoning_summary_text.delta / function_call_arguments.delta / completed / failed / incomplete；`responses_event` 自动注入 `sequence_number` 自增序号。
- id 前缀约定：message_item="msg_"+uuid12、reasoning_item="rs_"+uuid12、function_call="fc_"（碰撞循环）、tool_call 回退="call_"+uuid16、web_search_call="ws_"+uuid。

**message_start / 事件顺序守卫** — `handle_message_start`：message_start 必须首个且唯一（状态标志位先查后置），`event["message"]` 必须是 JSON 对象，id 无 "resp_" 前缀时经 fmt 重排补齐；任一不满足 → `protocol_failure("Invalid or duplicate Anthropic message_start")`。`handle_content_block_start` 入口守卫：message_start 未见到 → `protocol_failure("Anthropic content arrived before message_start")`。release 无 "Conflicting stop_reason" 拒绝——stop_reason 为 last-wins 覆盖（`handle_message_delta` 提取 `/delta/stop_reason`，仅存在且为 string 时覆盖）。**pre 行为**：较宽松。

**content block index 校验** — 三 handler（block_start / delta / stop）共同判据：index 必须存在且为**非负整数 JSON number**（无小数部分）；区块登记在有序 map 中。

- block_start：index 缺失/非法 → `"Anthropic content block is missing its index"`；查重命中 → `"Duplicate Anthropic content block index"`。
- delta：index 缺失 → `"Anthropic delta is missing its content index"`；登记树未命中 → `"Anthropic delta has no matching content block"`；区块已关闭 / delta 类型与区块登记类型不匹配 / 载荷缺失或非 string → `"Invalid Anthropic content delta"`。
- block_stop：index 非法 → `"Anthropic content_block_stop is missing its index"`；已关闭区块重复 stop → `"Duplicate Anthropic content_block_stop"`；**未知 index 静默空返回**（不报错）。
- 以上全部为 protocol_failure（error.type=invalid_response）。

**区块收尾推迟到 message_stop** — `handle_content_block_stop` 只置关闭标记，**自身不产生任何 SSE 事件**；`finalize` 的 completed 路径遍历全部区块，任一区块未关闭 → `protocol_failure("Anthropic message ended with an open content block")`；全部关闭才逐区块产出 output_item 并调 `codex_responses_sse::response_completed`。**pre 行为**：block_stop 立即关闭/发 done；message_stop 尚有 open block 时可补关闭——不要按 pre 实现。

**工具调用终态校验** — finalize completed 路径：工具区块 id 或 name 为空 → `protocol_failure("Invalid Anthropic tool arguments")`；delta 阶段 `input_json_delta` 的 partial_json 逐段累积进区块参数缓冲；终态时解析累积串，解析失败或结果不是 JSON 对象 → 同一错误。通过后按工具类型发 `function_call_arguments_done` / `custom_tool_call_input_done`。**pre 行为**：参数在旧 block finalizer 中组装，无此校验。

**thinking 签名终态校验** — finalize 对 thinking 区块调 `anthropic_history::responses_reasoning_item_from_anthropic_block` → `encode_anthropic_thinking_block`：block.type=="redacted_thinking" 取 "data" 字段；type=="thinking" 取 "signature" 字段；该字段必须 string 且长度非零，否则 → `protocol_failure("Anthropic thinking block has no signature")`。命中后组装可重放信封：`"ccswitch-anthropic-thinking-v1:" + base64(JSON(block))`（前缀常量见文档头约定），reasoning item 含 `encrypted_content`；标志位开启时再插 `{"replay":"ordered_v1","block":<原 block>}`。win 侧等价判据：签名字符串 ≥31 字节且前缀全等 `ccswitch-anthropic-thinking-v1:`，去前缀 base64 解码 + JSON 解析。

**终态映射** — `map_anthropic_stop_reason_to_status`：

| stop_reason | status | reason |
|---|---|---|
| end_turn / tool_use / stop_sequence | completed | — |
| max_tokens | incomplete | max_output_tokens |
| model_context_window_exceeded | incomplete | max_output_tokens |
| refusal | incomplete | content_filter |
| pause_turn / 未知值 / 缺失 | **failed** | invalid_response + `"Missing or unsupported Anthropic terminal reason"` |

finalize 对 incomplete 发 `response.incomplete` SSE（incomplete_details.reason 写入）；对 failed 走 `protocol_failure`（error.type="invalid_response"）。缺失 stop_reason 与未知值汇合到同一 failed 出口。另有一层规范化把 model_context_window_exceeded 归一为 `"context_limit"` 供 anthropic_trace 下游使用，与终态判定层的原始字面量比较并存。**pre 行为**：pause_turn 判 completed、缺失/未知 stop_reason 默认 completed——不要按 pre 实现。

**trace 诊断（anthropic_trace）** — `Trace::{new,event,bytes,finish,attempt,headers,json_usage,json_result,output_item,response_text,response_usage,upstream_error}` + `Inner::emit` + `summary`。summary 字段：block_starts/block_stops/delta_counts/error_class/error_kind/first_byte_ms/last_byte_ms/max_gap_ms/message_stop/usage_omitted/usage_samples——纯诊断/计时/计数字段，不是业务能力。`error_class`：上游错误文本转小写后按序子串分类（"prefill"→assistant_prefill、"effort"→effort、"signature"、"encrypt"→encrypted_state、"without stop_reason"→missing_stop_reason、"unclosed"→open_block、"before message_stop"→missing_message_stop、"utf-8"、"json"、"connection"、"limit"/"budget"，兜底 unclassified/空串 none）；结果写入 trace 的 error_class 键。`record_usage` 兼容双协议 token 字段名（cache_read_input_tokens/cache_creation_input_tokens/cached_input_tokens）。

#### 实现注意（详见 §3.1）

- pause_turn 改判 failed，**不再自动续传**：pre 段的 `anthropic_continuation::Exchange::resume` 自动续传链（continuation limit 计数、enabled 门、validate_pause 校验，错误面 `"Anthropic server continuation limit reached"` / `"Anthropic paused without a supported server search tool"` / `"Invalid Anthropic paused content"`，HTTP 502）**不得迁移成 release 现行能力**。消费侧若按 pre 语义实现续传，release 上会直接收到 failed。
- stop_reason 字段 ≠ 终态信号；content_block_stop 静默；thinking 信封前缀有两个版本且不兼容（见 §2.3 PROTO-10）。
- release 侧续传相关错误实串为 `Anthropic server continuation rejected by upstream (HTTP …)` / `… failed (…` 族；文案以本指南所录为准。
- 错误面全集（release 状态机）：upstream_protocol_error（content after stop_reason / Conflicting stop_reason / Invalid server message state / tool input not complete JSON object / Search call has no id / Duplicate search call id / Unsupported server tool / Search result has no matching call）、anthropic_continuation_required（`"Anthropic search has not returned its result; use an authorized client search tool instead"`）、stream_truncated（`"message ended with an unclosed content block"`）、anthropic_search_incomplete、upstream_error。状态机本身无文件/进程级破坏性副作用（内存状态机 + SSE 帧 + debug_log + trace）。

---

### 2.2 relay-anthropic-aggregate

**非流式（aggregate）Anthropic 响应路径**

#### 行为面（1.2.6 → 1.2.7）

- 非流式响应校验/回放体系随 V1 链引入（1.2.6→pre），release 收紧：形状/终态/区块逐项校验，失败显式拒绝。
- release 新增 **EOF 聚合回退**：流式 EOF 时若 response 未开始且缓冲构成完整 JSON 文档（`json_document_candidate` 判定），按 aggregate 路径回放——这是 stream_truncated 收紧后的唯一合法兜底。
- release 聚合错误簇（win）：`"{PRODUCT} Anthropic response decode failed"` / `"conversion failed"` / `"Invalid Anthropic JSON response"` / `"Invalid Anthropic response UTF-8"` / `"decoded response exceeds relay buffer limit"`。

#### 行为规格

**聚合校验 `validate_message`**：

```
消息必须是 JSON 对象；"content" 必须存在且为数组
"type" 缺省或 == "message"；"role" 缺省或 == "assistant"
"stop_reason" 存在且为 string → 调 map_anthropic_stop_reason_to_status；
  映射结果 == "failed" → Err "Invalid Anthropic message shape or terminal reason"
  —— 即 aggregate 侧 pause_turn/未知/缺失 stop_reason 同样被拒
逐 content block 调 validate_content_block：
  text/thinking 区块同名载荷字段必须为 string，否则 Err "Invalid Anthropic text or thinking block"
```

**聚合回放 `responses_sse_events_from_anthropic_message`**：非对象/错误信封 → failed；validate_message 不过 → failed("Invalid Anthropic message shape or terminal reason")；通过则把整则消息按 message_start → content_block_* → message_delta → finalize 顺序**回放进同一个 AnthropicToResponsesState 流式状态机**，产出 Responses SSE 事件序列——聚合路径复用流式状态机而非独立宽松路径。win 侧同构。

#### 实现注意（详见 §3.2）

- 聚合不是宽松后门：aggregate 复用流式状态机与同一终态映射，stop_reason 映射为 failed 即整则拒绝。
- EOF 聚合回退边界严格：只有「response 未开始 且 缓冲是完整 JSON 文档」才回退；已经开始产出事件后被截断的流不会静默转成聚合成功。

---

### 2.3 relay-anthropic-request

**请求方向翻译、工具/schema/推理策略与转发**

#### 行为面（1.2.6 → 1.2.7）

- `translator::openai_chat_to_anthropic_request` 重写；`responses_to_anthropic_request_with_context` 与 `responses_to_chat_request` 大装配家族；translator 同名体级变化面覆盖 responses_to_chat_request / anthropic_to_openai_chat_request / anthropic_to_openai_chat_response / openai_chat_to_anthropic_response / responses_tool_to_anthropic_tool / strip_anthropic_web_search_tools / clean_input_for_anthropic_relay / set_anthropic_thinking_carrier / normalize_anthropic_tool_choice_for_tools / translate_anthropic_message_to_openai 等 25+ 函数。
- proxy_server 转发面变化：try_translate / try_pass_through / try_codex_responses_via_translation / forward_codex_responses_internal / forward_codex_router_responses_internal / summarize_upstream_error / upstream_error_with_reason / expand_{PRODUCT}_compactions_for_upstream / is_anthropic_thinking_signature_rejection。
- 旧 `translator.rs` 单文件路径消失，拆分为子模块结构（双平台一致；win 侧新路径 `anthropic_search.rs`/`anthropic_tools.rs`/`chat_content.rs`，`anthropic_reasoning.rs`/`anthropic_history.rs` 为底子文件扩展）。
- pre → release 增量：`anthropic-beta: inline-tools-2026-09-15` 请求头新增链；型号 effort 词表新增 `ultra`（命中时以 `ultra-` 标签参与档位匹配）；effort 拒绝措辞识别进入 trace error_class；请求侧收紧（compaction 类输入 HTTP 前拒绝、allowed_tools 显式拒绝、json_schema 改走 output_config.format、oneOf/anyOf/allOf 发送前归一化、cannot-disable-thinking 报错、签名历史保序/replay 版本混用校验）；上游错误脱敏（[REDACTED]）与 413 归属改写；native Responses 托管 web_search 净化扩展到 additional_tools/allowed_tools。

#### 行为规格

**compaction 类输入 HTTP 前拒绝** — 两条入口：

1. `proxy_server::anthropic::request::prepare_request`：扫描 input[] 每项——type=="reasoning" 且 encrypted_content 为 string ≥29B 且前缀为**历史品牌段思考信封前缀**（即与现行 `ccswitch-anthropic-thinking-v1:` 同构、仅品牌段不同的旧前缀，如 `<历史品牌>-anthropic-thinking-v1:`）→ 返回 Err（用户可见中文：「此会话包含旧版{PRODUCT} Claude 推理记录，当前版本无法安全续接。请新建会话；原记录不会被修改。」）；type 长度 18 命中 "compaction_summary"/"compaction_trigger" 即拒；"context_compaction" 还要 encrypted_content 存在且非 null 才拒。全部在发 HTTP 之前返回。
2. `forward_codex_router_responses_internal` 闭包：路由解析返回 native compaction 标记 → log `"reject legacy relay compaction model="` + `upstream_error_with_reason(400, "router.native_compaction_required", …)`，msg=「中转模型请使用 ChatGPT 原生上下文压缩；请更新 ChatGPT 并重新打开任务。{PRODUCT}不再生成兼容性伪摘要。」——HTTP 400 直接返回，不进上游转发。平台差异：win release 无 "compaction_summary"/"compaction_trigger"/"context_compaction" 同名字面量，拒绝键控在 `/responses/compact` 路由与 encrypted_content 存在性上。

**allowed_tools 显式拒绝** — `responses_request_to_anthropic_with_policy`：读 `/tool_choice/type`，命中 "allowed_tools"（len 13）→ 显式 Err：`"Anthropic cannot safely preserve this allowed_tools constraint; it was not relaxed"`（82 字节；不降级不放宽）。可表达集合对照 `map_tool_choice_to_anthropic`：字符串 "required"→any / "auto"→auto / "none"→none / 未知→默认 auto；对象 type=="function"/"custom" 经 `CodexToolContext::chat_name_for_response_function` 映射名字；type=="tool_search" 结构化输出。

**text.format=json_schema → output_config.format** — 同函数：读 request.text.format.type——"text" 跳过；"json_schema" 进入结构化输出装配：format 与 schema 都必须为对象；format 键白名单（只允许 type/name/description/strict/schema，多出键即拒绝）；strict 缺省或简单值；装配 `{"type":"json_schema","schema":<原 schema>}`；能力门 `supports_structured_output`（模型画像能力位）通过则目标对象不存在时先建 `output_config` 空对象再写入 "format" 键；模型不支持 → Err `"Structured output is not supported by this Anthropic model"`；其他 format → `"Unsupported Responses output format"`；text 配置非法 → `"Invalid Responses text configuration"`。

**工具 schema 发送前归一化** — 触发器 `normalize_tool_schemas::normalize`：取工具的 "input_schema"，仅当含 oneOf/anyOf/allOf 任一键才处理 → 调 `anthropic_schema::tool_input` 归一化 → 写回；失败显式 Err（不进 HTTP）。归一化规则：空/缺失 parameters 补默认 `{"type":"object"}`；组合 schema 处理 "$schema"（draft-04）与自有 $defs 品牌化键的重定位（`relocate_local_refs` 递归遍历 properties/patternProperties/definitions/dependencies/not/if/prefixItems/additionalItems/additionalProperties/unevaluatedProperties/propertyNames/contentSchema 等）；遇未限定作用域的 $recursiveRef/$dynamicRef → Err `"Anthropic composed tool schemas with unscoped recursive anchors are not supported"`。input_schema 非对象 → `"Anthropic tool input_schema must describe an object"`。

**推理策略与型号档位** — `anthropic_reasoning` 模块：

- `codex_effort_to_anthropic`：trim + 转小写后按长度分派——len3 "low"/"max"、len4 "high"、len5 "xhigh" 或 "ultra"（命中时以档标签字面量 "ultra-" 参与档位表匹配）、len6 "medium"、len7 "minimal"；随后调 `model_profile` 取模型档位表（(label,len) 对数组）逐项匹配；xhigh 有回退链（查不到 xhigh 档时找 len3 "max" 项），ultra 有存在性回退。effort 非法 → 上游 prepare_request 报 `"Unsupported Anthropic reasoning effort"`。
- `model_profile`：`normalize_model_name` 后 `model_matches_family` 逐族前缀匹配，产出档位结构（档表指针 + tier 编号 5/4/3 + effort 标签 + 能力布尔位；全不匹配 → tier 2）。
- 三项校验分离：effort 小写归一后比对 "off"/"none"/"disabled" → 请求关闭推理；`thinking_cannot_be_disabled(model)` 为真 → Err `"This Anthropic model cannot disable thinking; select a supported reasoning effort"`（81 字节）；映射后 tool_choice type=="tool"/"any" 且模型要求自适应 thinking → Err `"Anthropic model requires adaptive thinking and cannot honor a forced tool_choice"`（80 字节）。两条错误判据分离为独立标志位。
- 型号档位表：`sonnet-5-5`/`fable-5-1`/`mythos-5-1`/`opus-5-5`/`fable-5`/`mythos-5` → 档5 high（opus-5-5 命中时 medium）；`mythos-preview` → 档4；`opus-5`/`sonnet-5`/`opus-4-8`/`opus-4-7` → 档5；`opus-4-6`/`sonnet-4-6` → 档4；`opus-4-5` → 档3；旧名表（`3-7-sonnet`/`sonnet-4`/`sonnet-4-5`/`haiku-4-5`/`opus-4`/`opus-4-1`）→ 档4 medium；全不匹配 → 档2。effort 标签表 "mediumlowhighxhigh"（pre 段无 ultra；release 侧 effort "ultra" 以 "ultra-" 标签参与匹配）。

**签名历史保序 / 动态工具 replay / namespace 声明先行 / replay 版本混用** — `anthropic_history` 模块函数群：

- `tool_schema_refs_for_request`：遍历 request.tools 取每项的思考信封载体字段（品牌化字段名，语义为「携带 base64(JSON) 信封」），与版本标记 "root_ref_v1" 比较；首项定型后后续项版本不一致 → Err `"Mixed Anthropic tool schema replay versions cannot preserve the signed prefix"`。
- `HistoryPlan::validate_placement`：首项 role 必须 "user"；其后每个 user 项前驱必须 "assistant" 且非末项时后继有完整 tool-result 回合；违例 → Err `"Incomplete history cannot preserve mid-conversation Anthropic instructions/tools"`。
- `HistoryPlan::new`：识别 "additional_tools" 动态声明；声明项类型非法或 role=="developer" → `"Invalid dynamic Anthropic tool declaration"` / `"Unsupported dynamic Anthropic tool declaration"`。
- `validate_delegation_replay`：is_codex_delegation 命中的工具其 "codex_delegation" 字段必须 == "v1"，否则 Err `"This signed Anthropic history predates delegation input support; start a new delegated task. Existing history was not modified"`。
- namespace 声明先行：`build_anthropic_tool_context` 先收集声明（`collect_input_declared_tools` / `add_namespace_tool`）；声明项 type 非 "function"/"custom" → Err `"Unsupported namespace tool kind; declaration was not partially loaded"`；命名空间转换后撞名 → Err `"Anthropic tool names collide after namespace conversion"`。
- win 侧等价行为：载体解析（前缀校验 → base64 → JSON 必须对象；"codex_delegation"=="v1"、"replay"=="ordered_v1" 才回放 "block"）；信封组装（namespace=="collaboration" 按 name∈{follow_up_task,send_message,spawn_agent} 白名单插入 "encrypted_function…" 字段）；请求侧校验失败 `"Invalid Anthropic thinking carrier; history was not modified"`（60 字节——不改写历史）。

**上游错误脱敏与 413 归属改写** — `anthropic::response::redact_error_text`：当且仅当 fragment 非空时 `str::replace(text, fragment, "[REDACTED]")`——**调用方提供的字面片段精确匹配替换，不是模式/正则**；随后无条件再套 `platform::debug_log::redact_text_inner`（客户端错误文本与 debug 日志复用同一通用脱敏例程）。`redact_error` 是对上游错误体的递归遍历：JSON String→redact_error_text，Array/Object 逐元素/逐值递归——错误 JSON 里每个字符串值都过一遍。作用面 = 客户端错误响应 + 协议库内部错误（`anthropic::forward` 闭包经 `Context::with_error_redactor` 把脱敏闭包挂进协议库 Context）。413 映射在 `error_response`：`/error/message` 长度 ≥52 且前缀全等 `"Upstream provider rejected the request with HTTP 413"` → `str::replacen(msg, "not a CC Switch limit.", 22, "not a {PRODUCT} limit.", 20, 1)`——只改归属文案，不改状态码语义；状态码由独立 error-kind→HTTP 映射表决定（1→409；2/7/8/9/10/12→503；6→502；11→透传上游；14/16→400；15→422；17/18→504；19→401；默认 500）。

**native Responses 托管 web_search 净化扩展** — 调用链 `try_codex_responses` → `sanitize_body_for_native_responses_upstream` → `native_responses_compat::sanitize_request` → 守卫 `rejects_hosted_web_search`。守卫四值：① protocol 标志必须 ==1（native Responses）；② channel 标志非零时 ∈{3,4} 即拒绝，==0 时改按 `brand_for_model(model)` ∈{3,4} 判定；③ model 小写化取最后一个 '/' 分段，前缀命中 `mimo`/`minimax`/`longcat`/`qwen3-coder` 即拒绝；④ base_url 小写化包含 `xiaomimimo.com`/`longcat.chat`/`minimax.io` 即拒绝，最终返回值 = 是否包含 `minimaxi.com`。净化语义（守卫通过且 body 为对象时）：tools[] 过滤（retain）移除 type∈{web_search, web_search_preview, web_search_minimax}，滤空则 `remove("tools")`；input[] 内 type=="additional_tools" 的项对其嵌套 tools 数组套同一谓词，滤空的 additional_tools 项被移除；tool_choice 字符串匹配 web_search_preview/web_search/web_search_ 前缀 → `remove("tool_choice")`；对象形 type=="allowed_tools" → 对其嵌套 tools 套同一谓词；tools 已整体移除时一并 remove tool_choice。

**inline-tools beta 头注入/校验** — `proxy_server::require_anthropic_inline_tools_header`：

```
头不存在 → 注入 "anthropic-beta: inline-tools-2026-09-15"
头已存在 → 按 ',' 切分 trim，token 长度==23 且值全等 "inline-tools-2026-09-15" → 放行
         token 含非法字节（<32 且 !=9，或 ==127）或不匹配 → Err "Invalid Anthropic beta header"
```

触发门 `requires_inline_tools`：body tools[] 任一 `defer_loading==true`，或 messages[] 存在 role=="system" 且其 content[] 任一项 type=="tool_addition"。调用链时序（`anthropic::forward`）：先 `upstream_headers`（含 context-1m beta 逻辑）→ 置 attempt 标志 → 触发门 false 直接发送；true → 注入/校验，校验失败 → `Trace::finish("translation_error","invalid_beta_header")` + `upstream_error_with_reason(400,"proxy.anthropic_translation")`，**不重试**。另一条独立 beta 路径：模型发生翻译（upstream_model 不等）时向 anthropic-beta 注入/追加 `context-1m-2025-08-07`。

**effort 拒绝措辞识别** — 即 anthropic_trace::error_class 的 "effort" 子串分类；只写 trace 的 error_class 键，**不驱动任何重试/改写分支**。

**「上游拒绝 beta 后去掉 anthropic-beta 重试」不存在** — release 的 anthropic 转发路径无此逻辑：anthropic-beta 字面量全部引用点均为构建/注入/校验，无任何 remove；`anthropic::forward` 状态机仅单次 send 无回边；invalid beta 的处置是直接 400 失败。（pre 段 mac 侧曾有 `remove_rejected_optional_anthropic_beta` 重试链：计数器上限 2 + `Trace::retry('optional_beta_rejected')` + 重发段，以及 effort 拒绝→摘 effort→重发——release 已删除，不得实现。）

#### 实现注意（详见 §3.3）

- 旧签名推理记录被硬拒且用户只能新建会话；不迁移、不降级。
- compaction 拒绝产生用户可见 400；依赖兼容伪摘要的上游在 release 直接断。
- allowed_tools 不静默放宽；inline-tools beta 校验失败 = 400 直接失败且无重试。
- schema 归一化拒绝递归锚；强制推理型号双门判据分离；签名历史校验只读（三条错误文案都带 "history was not modified" 语义保证）。
- 净化的守卫是四值与关系；不满足守卫的 native Responses 请求原样透传托管 web_search 工具。
- 模型名末尾 `[1m]` 后缀大小写不敏感移除并 trim；原模型决定 context-1m beta。
- 多处校验按长度先行分派（allowed_tools len13、inline-tools token len23、model_context_window_exceeded len29 等）；长度不符直接落默认分支，差一个字符就是不同行为路径。

---

### 2.4 pre 段与 release 段差异专项

目标行为 = release 段。本节列出 pre 段与 release 段的行为差异，实现时**不得把 pre 行为当作 release 行为复用**。

| 面 | pre 段 | release 段（目标） |
|---|---|---|
| anthropic-beta: inline-tools-2026-09-15 | 不存在（pre 实际 beta 值只有 interleaved-thinking-2025-05-14 / fine-grained-tool-streaming-2025-05-14 / context-1m-2025-08-07 三个） | 存在完整链（字面量+注入/校验+触发门+调用方，双平台） |
| ultra effort 标签 | 不存在（pre 的 effort 展示标签表 minimal/low/medium/high/xhigh/max/ultra 属 trace 展示层，与请求侧档位匹配无关） | effort "ultra" 以 "ultra-" 标签参与档位匹配 |
| effort 拒绝措辞识别 | pre 段 mac 侧有 `is_anthropic_effort_rejection`（4 措辞→摘 effort→重发） | 仅 trace error_class 分类，无重试分支 |
| 去 anthropic-beta 重试 | pre 段 mac 侧存在（remove_rejected_optional_anthropic_beta + 计数上限 2 + 重发） | release 不存在 |
| 转发头治理名单 | 存在（见下） | 实现按同一名单处理（release 段指南未单列差异） |
| SSE/终态合同 | 宽松（见下表） | 收紧（目标） |

**pre 段转发头治理名单**（`extra_headers_from_json` / `apply_extra_headers` / `proxy_access::allowed`）：extraHeaders JSON 合并进探测/请求头时按头名匹配名单，命中即丢弃（不并入）。名单覆盖：

```
te | via | host | expect/cookie/origin | upgrade/referer | trailers
x-api-key/forwarded/x-real-ip | connection/keep-alive/set-cookie/cf-visitor
x-client-ip 等 | cf-ipcountry/x-azure-fdid/x-request-id/x-b3-traceid/x-b3-sampled
authorization | content-length/x-true-client-ip | x-forwarded-for/x-amzn-trace-id
sk-{PRODUCT}-relay-x/x-forwarded-host/x-forwarded-port/cf-connecting-ip/fastly-client-ip
x-azure-clientip/x-forwarded-proto
```

即名单覆盖 hop-by-hop 头、鉴权相邻头、CDN 客户端识别头与 x-forwarded-\* 家族——语义是「禁止 extraHeaders 覆盖/注入这些头」。调用方：`build_openai_probe_headers` 与 `build_anthropic_probe_headers`。相关面：extraHeaders 值形状解析（非法 shape 报 `"invalid header shape"`，日志打码 `"[REDACTED]"`，并引用 api key/token/secret/cookie/jwt/bearer 敏感词拼接表做值打码）。

**pre → release SSE/终态行为对照**（双平台同构）：

| 面 | pre | release（目标） |
|---|---|---|
| 非法 UTF-8 | 替换为 U+FFFD，保留可跨 chunk 尾部 | 区分可续接尾部与确定非法；非法或 EOF 残片报 invalid_utf8 |
| 未见 message_stop 的 EOF | 有部分输出时可合成 max_tokens/incomplete | 不据已有内容推成功；报 stream_truncated（保留明确 aggregate fallback 边界） |
| message_start | 较宽松 | message 必须为对象且只能一次 |
| block index / delta | 多处缺失或错误索引为空输出 | 要求非负有效 index、已登记匹配 block，重复 index 拒绝 |
| block_stop | 立即关闭/发 done | 先标 closed，完整收口延至 message_stop 校验 |
| message_stop 尚有 open block | 可补关闭 | failed/invalid_response |
| tool 参数 | 旧 block finalizer 中组装 | id/name 必须非空，partial_json/input 必须可解析且为对象 |
| thinking | 旧宽松收口 | signature 或 redacted data 必须满足非空可重放要求 |
| pause_turn | completed（win）/ 自动续传（mac） | failed/invalid_response |
| 缺失/未知 stop reason | 默认 completed | failed/invalid_response |

---

### 2.5 relay-probe-upstream-url

**模型发现 / 健康探测 / 上游 URL 拼接**

#### 行为面（1.2.6 → 1.2.7）

1. `fetch_relay_models_draft`（模型发现）整段重写：30 秒墙钟总预算包住整段分页发现调用，超时产出固定错误 `"model discovery exceeded its 30 second total budget"`；旧终态 `all retries exhausted` 移除（目标行为中不存在）。
2. 健康探测新增 `health_check::ProbeStream` 三协议流终态分类面（OpenAI `finish_reason` / Anthropic `stop_reason`+`message_stop` / Responses `response.*` 状态），并新增 embedding 探测的 `error`/`data` 校验。
3. 新增 `join_upstream_url_with_query` + `validate_endpoint_path`，由 health、quota、proxy、模型发现四处共用：端点路径拒绝 query/fragment/路径穿越，Base URL 自带 query 与请求 query 键冲突时报错。
4. 前端维度：`test_relay_draft_stream`、`test_relay_provider_stream` 出现在前端新增观察集中，但不在 +20 正式注册集合内——归属以后端注册面为准（双版本既有后端命令）。

#### 行为规格

**fetch_relay_models_draft —— 30 秒墙钟单包发现**：

- 30 秒预算包住整段分页发现；预算内允许多页顺序请求，**不做失败重试**，超时即终态（51 字节错误）。非超时错误按错误编码直接返回。`join_upstream_url_with_query(..., "/v1/models", ...)` 全程仅调用一次。
- 内层分页发现失败面全集：`model discovery exceeded the page limit` / `model discovery exceeded the model count limit` / `model list pagination did not advance` / `model list pagination conflicts with the configured URL query` / `upstream returned unsupported model list pagination` / `invalid model list pagination metadata`；请求头 `x-api-key`、`anthropic-version: 2023-06-01`；分页游标 `has_more`/`last_id`/`after_id`。

**ProbeStream —— 三协议流终态分类**：

- 探测主流程：`build_anthropic_probe_headers` / `build_openai_probe_headers` → `join_upstream_url_with_query` → `read_probe_response_body` → `probe_stream_feed` / `probe_stream_finish`；embedding 走 `validate_embedding_response`。
- `probe_stream_finish`（终态收口）逻辑：

```
if stream ended 标志:
    if 已有模型输出 → 成功
    else → "upstream returned no model output for this probe"
else → "upstream stream ended without a successful terminal event"
```

- 收口前先经 `probe_stream_next_frame` 排干剩余帧，再 `probe_stream_dispatch` 解析尾部事件。
- `probe_stream_dispatch`（三协议终态解析）：
  - SSE 行尾处理 + `[DONE]` 哨兵识别。
  - SSE `event: error` 分支 → 提取错误对象按模板 `"upstream returned error: {0}"` 格式化；长度不符给 `"upstream emitted an error event"`。
  - JSON 解析失败 → `"invalid JSON in probe SSE"`；另有 `"invalid UTF-8 in probe SSE"`。
  - OpenAI 协议：JSON 指针 `choices/0/finish_reason` == `content_filter` → `"upstream filtered this probe"`。
  - Responses 协议：`response.failed` / `response.incomplete` → `"upstream probe failed or was incomplete"`；`response.completed` 时还须 `response.status` == `completed`，否则 `"upstream returned conflicting terminal status"`。
  - Anthropic 协议：`delta.stop_reason` == `refusal` → `"upstream refused this probe"`；`type == "message_stop"` → 置 ended 标志。
  - 增量文本由 `probe_extract_delta_text` 累计到计数器，超过 400 即提前置 ended。
- `validate_embedding_response`：JSON 解析（带尾部检查）失败 → `"upstream returned invalid embedding JSON"`；`error` 字段存在且为真值 → 无效；`data` 数组逐元素要求 `embedding` 非空且逐元素为数值；任一不符 → `"upstream returned no valid embedding for this probe"`；全过返回成功。

**join_upstream_url_with_query / validate_endpoint_path**：

- `validate_endpoint_path`：逐字符扫描（含 UTF-8 多字节路径），拒绝 `#`（fragment）、`?`（query）、`\`（反斜杠）；随后按 `/` 切段，逐段拒绝 `.` 与 `..`（逐段比较，不是子串匹配）。任何违规落到同一错误：`"relay endpoint must be a path without query, fragment or traversal"`。
- `join_upstream_url_with_query`：先调 validate_endpoint_path 校验 endpoint 段；再分别解析 Base URL 自带 query 与请求 query 的键集合，键冲突时构造错误 `"relay request query conflicts with configured Base URL"`。
- 调用方面：模型发现（`/v1/models`）、health probe 链、proxy 转发链、`responses_upstream_url`。

#### 实现注意（详见 §3.4）

- 探测成功需要「终态事件 + 有模型输出」双条件；两个失败面文案不同，不能把「流结束」当成功。
- 增量文本超 400 字符即提前置 ended——探测只采样开头，不是完整生成。
- Responses 协议 `response.completed` 事件单独出现不算成功，还须 `response.status == "completed"`。
- OpenAI `content_filter` 与 Anthropic `refusal` 是分类终态不是成功。
- 端点路径校验连 `\` 也拒——Windows 风格反斜杠路径在 endpoint 配置里同样非法。
- 模型发现 30 秒预算内零重试：失败/超时都直接终态；旧 `all retries exhausted` 语义不存在，等待重试的消费方会失去该信号。
- 本节行为描述以 win 段为准，mac 侧预期同构（指南未单列 mac 差异）。

---

### 2.6 router-catalog-config

**官方目录 / 引擎检测 / MCP 守卫 / provider 管理 / quota 三命令 / 转场收尾**

#### 行为面（1.2.6 → 1.2.7）

**新增**

1. 官方模型目录由编译期内嵌快照改为运行时获取并校验（删除约 113KB 内嵌官方模型表）：`native_catalog` 新模块（13 函数，含 `validate_official_models` / `official_headers` / `response_identity` / `revision` / `CatalogReply::into_http_response`）、`native_repair_catalog` 新模块（7 函数）、本地服务端点 `/codex/router/v1/models`、目录修订响应头（品牌化头名，形态 `x-{PRODUCT}-catalog-revision`，服务端与客户端两端一致）。
2. MCP 写配置前新增候选校验 + 结构行词法守卫：`validated_mcp_config`。
3. `run_codex_router_diagnostics` / `fix_codex_router_issue` 正式命令化（跨平台 IPC）。
4. quota/usage refresh 族：`get_usage_refresh_all_accounts` / `set_usage_refresh_all_accounts` 新增；`load_quota_history` 增 `range` 参数；`get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令。
5. `CodexPaths` +6 函数（新目录布局 + 老版探测）；`config_takeover` +7（`quarantine_damaged_backups` / `split_foreign_surface` / `merge_runtime_quarantine` / `validate_recovery_backups` / `read_backup_bytes` / `read_legacy_backup_lines` / `normalize_catalog_path`）。

**修改**

6. CLI 引擎检测细分失败合同：缺引擎/spawn/wait/退出失败从单一不兼容错误改为 `NOT_FOUND` / `ACCESS_DENIED` / `PROBE_FAILED` / `PROBE_TIMEOUT` / `PROBE_EXIT` / `VERSION_UNKNOWN` / `VERSION_UNSUPPORTED` 分型传播；最低版本仍 0.155.0-alpha.9.2；1.5 秒 deadline、25ms 轮询、超时 kill/wait 为 1.2.6 既有。
7. `codex_bundled_cli_path`：缺失语义由 Option None 改为 Result 错误 `CODEX_ENGINE_NOT_FOUND`，明确**不退到独立 CLI / IDE 插件**；仍只探测 ChatGPT bundle 内嵌路径。
8. `CodexPaths::catalog_db_path`：由「首个存在路径/默认路径」改为枚举 sqlite/root/configured home 三处的 codex.db 与 codex-dev.db → metadata 严格区分 not-found 与不可读/非普通文件 → canonicalize 去重 → 验证目录库 → 多候选时按 ChatGPT 主进程 PID 与 DB 持有者列表筛选实际持有库；持有者唯一则验证返回，多持有或归属歧义**明确报错**；无候选返回 None 而不是伪造默认可用路径。
9. `quota`、`proxy_status`、`get_relay_active` 三命令实现面展开（行为见下）。
10. `RelayManager::set_codex_router_no_account_mode` 与 `RelayManager::set_codex_router_enabled` 行为链展开（见 §2.7 R7/R8）。
11. 第三方段隔离（E7）：`codex_diagnostic` 族 `check_config_third_party` / `fix_config_third_party` / `fix_config_third_party_text` / `find_third_party_base_url` / `is_explicit_third_party_marker`（行为见下）。

**移除**

12. provider 增删改排/激活前的独立 config preflight 步骤（RT-14）：六个 manager 命令 handler 不再含 preflight/reconciler 调用。
13. `get_codex_router_auth_readiness` IPC 删除：`router_unlock_auth` 模块 readiness 支撑面删除；`live_auth_state` 重写为活体凭据状态推断。
14. `set_codex_no_account_slots` IPC 删除：收编为 `validate_legacy_no_account_aliases` 兼容校验 + `restore_no_account_model_threads` 恢复链。

**转场收尾安全闸（win）**

15. 转场收尾段新增/存在受保护进程 DB 持有检测，静默关窗重试耗尽后仍被持有则报 `CODEX_DB_HELD_BY_PROTECTED_PROCESS` 并阻断转场。

#### 行为规格

**官方目录运行时获取**：

- 请求 handler（`/codex/router/v1/models` 端点）：构造 4 秒墙钟单次包裹 `native_catalog::fetch_official`，随后调 `validate_official_models` 与 `revision`；上游来源 `https://chatgpt.com/backend-api/codex/models`。
- `validate_official_models`：读 catalog JSON 的 `models` 数组（缺失/非数组 → 错误），逐项取 `slug` 并 trim，丢弃两类 slug——含 `::` 的、以及前缀命中自有内部 relay slug（品牌化前缀，形态 `{PRODUCT}_relay_i…`）的条目；经 map 去重后产出保留列表 + dropped 计数（DTO `droppedEntries`）。
- `official_headers`：取 `authorization` 头（值须可打印且以 `"Bearer "` 开头）；trim 后 token 命中自有 relay key 前缀（`{PRODUCT}-` 或 `sk-{PRODUCT}-` 形态）即拒绝；随后按 8 项白名单头名表逐个拷贝转发头。任何一步不满足 → 返回空结果。
- `response_identity`：校验 etag 可打印（控制字符拒绝），把「etag + 分隔 + revision」格式化后做 SHA-256 再小写十六进制——即 ETag = sha256(etag 分隔 revision)。
- DTO：`OfficialCatalogStatus` 写 5 字段 `available/checkedAt/modelCount/droppedEntries/failure`；`CatalogFailure` 按判别值输出 kind——mac 侧 3 种 `missingAuth/network/invalidCatalog`，win 侧 5 种（多 `timeout`/`tooLarge`）。
- win 直连通道：带 etag 缓存、`invalid client_version` 校验，失败终态 `"official_catalog_unavailable"` + `"Official model catalog refresh failed. No replacement catalog was returned."`，保护分支 `"native catalog is not active"` / `"relay state poisoned"` / `"catalog configuration changed; reload client"`；app-server 链按 JSON-RPC 顺序 `config/read` → `model/list`（参数含 `includeLayers`/`includeHidden`）。本地端点 `/codex/router/v1/models` 由 proxy_server 暴露。
- 目录修复装配：`native_repair_catalog::PreparedRepairCatalog::prepare`——入口守卫不满足时直接返回内联错误；随后 `read_optional` 两段来源 → `codex_app_server::models::read_model_list`（连接 AppServerClient、发 `config/read` 带 includeLayers、validate_source 后再 model/list，含 includeHidden 构造）→ 收集。关键常量：`model_providers`/`requires_openai_auth`/`http_headers`/修订头名/`https://chatgpt.com/backend-api/codex`/`base_url`。六端点集（base/`/models`/`/responses`/`/responses/compact`/`/images/generations`/`/images/edits`）双平台一致。
- legacy 兼容：`codex_catalog::validate_legacy_no_account_aliases`——按定长条目（参照实现 72 字节步进）遍历别名条目，每条 trim 后先 `validate_relay_provider_id` 校验 provider 字段，再要求 legacy 别名命中 `is_no_account_slot_slug`；合规条目进 map 去重，任一条目不合规即整体报错；全过返回 Ok。

**MCP 写前守卫** — `validated_mcp_config`：先调 `codex_config::validate_candidate` 做候选配置校验，非 Ok 直接透传错误；再构造「当前配置 vs 候选配置」的规范化段序列（解析形态/受管标记序列），逐段长度比较 + 内容比较；任一不一致 → 返回错误，58 字节中文文案「MCP 编辑会改变路由受管块标记，未修改配置」——即结构行词法守卫：候选写会改动路由受管块标记序列时显式拒绝且**不写盘**。配套变化：`parse_mcp_document` 新增 `TomlLexicalState::line_is_structural` 状态守卫（非结构行不作为 section/managed 标记处理）；`upsert_mcp_server` / `set_mcp_server_enabled` 在编辑输出写回前插入 validated_mcp_config 调用。toml_edit 目标块编辑、3 次冲突重试、原子发布为既有行为。受管块标记行字面量：`# >>> {PRODUCT}-relay managed start (DO NOT EDIT MANUALLY)`（品牌段两端一致）。

**provider 管理命令与 preflight 归位（RT-14）** — 六个 handler（`activate_relay_provider` / `upsert_relay_provider` / `delete_relay_provider` / `reorder_relay_providers` / `set_relay_provider_network` / `deactivate_relay_provider`）均为纯 dispatch：只含参数提取、结果序列化与辅助调用，无任何 preflight/reconciler 调用。preflight 函数只存在于 router_transition 管线内部：config/auth preflight 本体（内部调 config.toml 修复）的调用者为 router toggle、auth-mode toggle + NativeOff 补偿、router auth-mode toggle；relay-state preflight 写的调用者为诊断修复路径。结论：写配置驱动 transition，preflight 与激活动作同层而非前置独立步骤。

**quota / proxy_status / get_relay_active**：

- `get_relay_provider_quota`：poll `core::relay::quota::fetch_async`；quota 模块面：`fetch_siliconflow` / `fetch_kimi_balance` / `fetch_minimax_coding_plan` / `get_json` / `detect_official_provider` / `QuotaDraft::with_provider` / `sanitize_api_key` / `parse_extra_headers`；格式化族 `value_to_f64/format_percent/format_currency/format_number_like`；错误族 `unsupported/unsupported_known/failed`。
- `RelayManager::compose_proxy_status`：锁内读状态并格式化报告字符串的纯组装（Mutex lock → format → unlock）。
- `RelayManager::get_active`：锁内 clone 当前激活列表。
- win 侧两者为同构 dispatch（仅类型特化序列化胶水不同）；`get_relay_provider_quota` 为多态 async 状态机。

**usage refresh 系（quota 旁系）**：

- `core::repository::normalize_usage_refresh_interval`：按长度分派规范化间隔串——len 2：`1m`/`3m`/`5m`；len 3：`30s`；len 6：`manual`；其余返回空（走默认）。
- `usage_refresh_interval_seconds`：normalize 失败回落默认 `"1m"`；归一结果为 `"manual"` 时返回 false（不排程自动刷新），其余 true。
- `commands::system::update_usage_refresh_schedule`：初始化全局 watcher 状态 → Mutex 锁内写调度参数，**间隔下限钳制 30（秒）**（传入 <30 静默抬到 30）→ Condvar notify_all；锁中毒路径置标志字节。
- `commands::system::start_usage_refresh_watcher`：一次性守卫（`USAGE_REFRESH_WATCHER_STARTED`，已启动直接返回）→ 取 Repository 状态 → 读 `get_usage_refresh_interval` 并 normalize（缺省路径常量 60）→ `update_usage_refresh_schedule` → `note_usage_refresh_activity`（SystemTime 打点）→ 起 watcher 线程（detach 语义）。
- 刷新纪律（win 合同）：先取/复制必要状态 → 释放锁执行慢操作 → 重取锁保存；保存失败成为 warning 而不是撤销已取得用量；可选额外刷新至多三轮，三轮仍待定时可返回首次快照（返回值不必等于最近广播值）；显示快照按同 epoch 的 revision/sequence 防旧覆盖新；事件 wire 为 `{snapshot, source, accountKey?}`，accountKey 为 None 时整个键省略。mac 侧另有「用量刷新至多 5 项一批」。

**live_auth_state 重写**（随 readiness 收缩）— `router_unlock_auth::live_auth_state`：metadata 失败 → 返回 0；`read_to_string` 失败 → 4；JSON 解析失败 → 4；之后查 `auth_mode` 字段：等于 `apikey`（大小写不敏感）且 `OPENAI_API_KEY` 存在（trim 后长度 ≥23 且匹配固定模式常量）→ 状态 1；否则查 `tokens` 字段（数组且非空）等分支落到判别值 3 族。即从 readiness 标记读改为读 auth.json/tokens 结构做活体凭据推断。保留面：`has_residue` / `marker_exists` / `cleanup_unlocked` / `read_cleanup_backup` 反而增强。

**转场收尾受保护进程 DB 持有闸（RT-13，win）**：

- 持有检测链（`src/platform/process.rs`）用 Windows Restart Manager——`RmStartSession` → `RmRegisterResources`（注册 DB 文件为资源）→ `RmGetList`（取占用者进程信息）。
- 阻断链（`src/core/relay/router_reconciler.rs`）：先跑静默关窗尝试循环（日志 `"quiet-window safe shutdown request failed attempt={1}/{11} exhausted={2}"`，每轮间隔 300ms，共 11 轮），再重新枚举持有者；持有者列表非空则以 `" | "` 连接持有者显示名并套模板返回 Err：
  `CODEX_DB_HELD_BY_PROTECTED_PROCESS: Codex 线程数据库仍被受保护进程占用，请先关闭相关 IDE/Codex 窗口后重试：{holders}`
- 阻断点：枚举受保护进程 → 静默关闭+复查 → 仍持有（Err）则发 `codex_process_lifecycle` / `force_close_completed` 生命周期事件并向上传错——转场收尾中止。

**第三方段隔离（E7）**：

- `is_explicit_third_party_marker` 识别第三方切换工具标记 `cc_switch` / `cc-switch` / `ccswitch` / `codex-switch`。
- `fix_config_third_party_text` 含路由受管块标记 `# >>> {PRODUCT}-relay managed start (DO NOT EDIT MANUALLY)`，文本级修复把第三方段与受管块隔离改写。
- `check_config_third_party`（诊断项 id `config_third_party`）；`find_third_party_base_url`；结构化修复入口 `fix_config_third_party` 被 `codex_diagnostic::fix_all` 调用。
- win 侧三函数结构：入口/回写 + 隔离核心（三分支各构不同后缀的诊断消息）+ 主处理面。

#### 实现注意（详见 §3.5）

- CatalogFailure kind 集合参照行为双平台不一致（3 种 vs 5 种）；实现需自定义统一值域并保证前后端一致。
- `codex_bundled_cli_path` 缺失即硬错误 `CODEX_ENGINE_NOT_FOUND`，明确不退独立 CLI/IDE 插件；任何「找不到就退而求其次」的兜底都违背该边界。
- `catalog_db_path` 多候选歧义是显式错误，不再取首个存在路径；无候选返回 None 而非默认路径。依赖旧「默认路径兜底」行为的消费方会断。
- validated_mcp_config 拒绝即不写盘；守卫比对的是「受管块标记序列」而不是语义等价——重写排版/换行若改变标记段序列同样被拒。
- official_headers 拒绝自有 relay key 前缀 token；Bearer 前缀缺失或值含不可打印字符也走空结果分支。
- 官方目录拉取 4 秒单次超时不重试；win 直连通道中毒态（relay state poisoned）不重载就直接失败。
- quota/proxy_status/get_active 三命令的状态读取都在 Mutex 锁内完成——消费侧不能假设无锁快照。
- usage refresh 的保存失败只降级为 warning，不回滚已取得的用量；至多三轮额外刷新仍待定时返回首次快照——返回值可能落后于最近广播。事件里 accountKey 为 None 时整键省略（不是 null）。
- update_usage_refresh_schedule 间隔下限钳 30（秒）；`manual` 归一结果是「不排程」而不是报错。
- RT-13 阻断链只限 win（Restart Manager API；静默关窗重试分母 11、每轮 300ms）；本模块 mac 侧无同形行为，不外推。
- 破坏性副作用面：路由修复/恢复、MCP/config 写、DB UPDATE、进程终止/重启仍是原有破坏性副作用；当前库/路径错误会阻止写入而不是 fallback 到别的数据库；诊断修复包装不可无差别压平为旧 generic fix_issue。

---

### 2.7 router-no-account-pre

**转场闭环 / no-account 提交边界 / 诊断修复键**

#### 行为面（1.2.6 → 1.2.7）

**新增**

1. 只检查诊断键 `router_recovery_record`（RT-12）：诊断 runner 内两处引用，两侧修复分派均无对应臂——CHECK-only。
2. 诊断命令化面：13 个诊断键（`config_access` / `router_recovery_record` / `config_replace_readiness` / `proxy_running` / `router_postcondition` / `thread_history_integrity` / `native_off_invalid_openai_thread_models` / `thread_response_item_ids` / `residual_manifest` / `residual_cache` / `relay-state-cache` / `official_catalog_freshness` / `api_key_integrity`）；DTO 面 DiagnosticReport/DiagnosticItem/FixResult 字段级闭合。
3. RT-09 转场 journal committing 相位与 `ROUTER_COMMIT_*` 恢复态合同（见行为规格）。

**修改**

4. 诊断修复分派键 24→23（RT-11）：`native_off_invalid_openai_thread_models` 的 INLINE 修复臂双平台删除，键降级为只检查；mac 23 键 == win 23 键 1:1。
5. R7/R8 行为链展开（见下）。
6. R4 postcondition→诊断→修复→重试闭环双侧成立（见下）。
7. RT-10 no-account provider 门：`verify_no_account_commit_boundary` 的拒绝路径逐条条件（见下）。

**移除**

8. `native_off_invalid_openai_thread_models` 修复臂（同 4；release 同样 23 键）。
9. `set_codex_no_account_slots` IPC 删除（收编 legacy 校验 + 恢复链）。

#### 行为规格

**fix_issue —— 23 臂修复分派（RT-11 行为基座）**

`codex_diagnostic::fix_issue`：入口先跑 `fix_requires_quiet_window` 静默窗校验（调用方强制标志可绕过）；随后按键长分派 + 逐键常量比较分派到 23 个 `fix_*` 实现；键不匹配落默认分支。臂清单：

```
fix_config_stale, fix_auth_integrity, fix_residual_cache, fix_catalog_integrity,
fix_residual_manifest, fix_state_db_relocation, fix_router_http_contract,
fix_catalog_path_validity, fix_requires_quiet_window, fix_config_global_validity,
fix_takeover_backup_orphan, fix_config_third_party_text, fix_config_toml_syntax_text,
fix_legacy_migrated_threads, fix_orphan_thread_providers, fix_project_state_integrity,
fix_thread_missing_rollouts, fix_thread_response_item_ids, fix_router_unlock_auth_residue,
fix_thread_provider_consistency, fix_config_profile_conflict_text,
fix_thread_poisoned_instructions, fix_thread_model_catalog_consistency   (23)
```

`fix_all`（前置条件：`"diagnostic fix-all requires a verified ChatGPT quiet window"`）覆盖 auth_integrity / router_unlock_auth_residue / takeover_backup_orphan / config_toml_syntax / config_third_party / config_profile_conflict / config_stale / router_http_contract / catalog_integrity / catalog_path_validity / rollout_orphan_providers / db_orphan_providers。命令层 `RelayManager::fix_diagnostic_issue` 引用键仅 `router_postcondition` / `missing_rollouts` / `thread_missing_rollouts` / `reconciling_threads` / `restoring_config` / `all`，输出 `DiagnosticRepairOutcome`；字面量 `"Codex router transition lock is poisoned"` / `"repairing Codex diagnostics"`。

`native_off_invalid_openai_thread_models` 键只存在于检查侧：诊断 runner 多站点构造 issue 记录、键匹配器 case 39（39 字符键串比较）；描述串「NativeOff 官方线程模型检查（路由启用中，跳过）」「NativeOff 官方线程模型正常」「…条旧对话保留了中转模型选择」——只读检查语义，路由启用中跳过。**这是行为删除**：保留中转模型选择的旧对话从此只被诊断、不再被自动修复。

**router_recovery_record —— 只检查键的判定链（RT-12）**

诊断 runner 内 `std::fs::read_to_string` 读恢复记录文件 → `std::io::Error::kind` 分类 → 成功走 `ok_item`（相邻文案「路由恢复记录可正常读取」）；随后 `router_transition::ensure_recovery_records_allowed` 做链式只读校验——`transition_journal::read_checked` → `codex_thread_visibility::validate_model_restore_journals` → `config_takeover::validate_recovery_backups`，任一级失败即返回错误结构，全程无写；失败路径走错误构造。win 侧描述串：「路由恢复记录可正常读取」「路由恢复记录需要单独处理」「恢复资料已保留；当前自动修复不会覆盖或删除它。」——明示自动修复不触碰该记录。

**R4 闭环 —— postcondition→诊断→修复→重试**

mac 侧执行器 `router_transition::run_with_environment` 内调用序列：

```
ensure_recovery_records_allowed        ; 前置：恢复记录校验（RT-12 同链）
write_journal + CodexTransitionFence::acquire_with_policy
…（迁移 mutation 段：commit_reconciled_target / persist_with_commit）
codex_diagnostic::fix_issue            ; 诊断+单键修复
verify_target_state_at_with_depth      ; postcondition 校验①
reconcile_current_mode_after_stop      ; 不一致时重收敛
codex_diagnostic::fix_all              ; 内含 2× run_diagnostics_with_mode + fix_issue
CodexTransitionFence::finish
verify_target_state_at_with_depth      ; postcondition 校验②（修复后重验）
format_violations                      ; 仍违规 → 违规清单进错误
```

`verify_target_state_at_with_depth` → `invariants::verify_invariants_with_depth`（RouterConfigSurface::parse / verify_thread_provider / verify_router_on_http_contract / config_surface_violations_for_surface）+ `proxy_handle_port_accepts`。`run_with_environment` 被 R8（`set_codex_router_enabled`）调用；R7 走姊妹入口 `run_with_writer_policy`。

win 侧行为：postcondition 探针（字符串面含品牌化探针临时文件与 `router_postcondition` 键，命名 callee 含 `check_takeover_backup_orphan` / `legacy_migrated_threads_apply`）；转场主状态机调探针；失败时格式化 `" postcondition still failed: {0}"` 并以 `postcondition_failed` 为事件名发事件；修复链 `repair_if_needed` + 修复后接诊断键校验分类（修复失败构造错误）；消息表原文：`"remained clean after Codex re-entry (attempt={1}…)"` / `"Codex re-entry changed {0}; retrying (attempt={1}, violations={2})"` / `"retrying attempt={0} error={1}"` / `"settle_failed"` / `"reconcile_failed"`——attempt 计数贯穿，postcondition 失败 → 诊断/修复 → 重试直至 clean 或耗尽。

**RT-09 —— 转场 journal 提交回读与恢复态**

- 恢复可见阶段为 `retrying` / `committing` / `reconciling` / `stopping_codex`；**已 committing 记录不能被普通新阶段覆盖**；target 不符或同步未确认时保留恢复记录并返回 `ROUTER_COMMIT_RECOVERY_REQUIRED`，明确**不自动启动 ChatGPT**；三个 transition 完成器区分 `commit_failed` / `commit_sync_unconfirmed` / `degraded`；只有成功路径写完成阶段并清理相应恢复记录。
- mac 侧：`has_confirmed_target_state` 完整旧体读取 journal 后检测十字节 `committing` 标记——journal 读错或处于 committing 均判 false，其余走 `verify_target_state_at_with_depth(...,0)` 且 violation 数为 0 才 true；`rollback_router_enabled_stably` 已有 `begin_commit` / pending commit 检查 / `persist_with_commit` / `Publication::require_sync` / `warn_after_commit` / 失败保留警告全链。
- mac 错误面：`begin_commit`→write phase=committing+require_sync（fsync）；`verify_router_commit` 回读逐字段比对（`ROUTER_COMMIT_STATE_CONFLICT`）；`commit_pending_error` 产出 `ROUTER_COMMIT_RECOVERY_REQUIRED`（含「ChatGPT 不会自动启动」）；`commit_verified` 编排 + commit_failed/commit_sync_unconfirmed/degraded 收尾。

**RT-10 —— no-account provider 提交边界门（六/七条拒绝路径）**

mac 侧 `router_reconciler::verify_no_account_commit_boundary` 六条拒绝构造点（命中即终止，无部分提交）：

| # | 判定条件 | 消息前缀（`no-account provider refused: ` 省略） |
|---|---|---|
| 1 | 本地代理 URL 解析失败 | `invalid local proxy URL: ` |
| 2 | 代理非精确 loopback HTTP 端点：scheme 必须 `http`、host 必须 `127.0.0.1`、path 必须空或 `/` | `proxy is not an exact loopback HTTP endpoint (` |
| 3 | `std::fs::read_to_string` 读 converged config.toml 失败 | `cannot read converged config.toml: ` |
| 4 | router HTTP contract 校验 mismatch 列表非空（`" | "` 分隔符 join 后格式化） | `router HTTP contract mismatch: ` |
| 5 | `codex_writer::read_top_level_string_value("model_catalog_json")` 读取失败，或读出路径与预期路径 components 不等 | `model_catalog_json does not point to ` |
| 6 | `read_catalog_model_slugs` + `read_catalog_no_account_mode` 后，no-account 目录 slug 集与选中 relay 模型/legacy 别名集合不等 | `no-account catalog does not match the selected relay models and legacy aliases; ` |

另有无前缀姊妹错误 `"no-account catalog mode mismatch"`（read_catalog_no_account_mode 后 mode 标志不符）。第 7 条变体 `"converged config.toml is invalid: "`（TOML 解析失败映射，同属第 3 条关卡的不同失败面）。

win 侧：实测 7 条带前缀拒绝 + 1 条无前缀姊妹错误；与 mac 差异——第 2 条增加 port 非零要求；第 3/4 条（cannot read / invalid config.toml）是独立包装函数；第 6 条两侧路径分别 canonicalize 后比较。调用者唯一：router_transition——拒绝面发生在 router 转场/no-account 校验段。

**R7 / R8 行为链**

- R7（`RelayManager::set_codex_router_no_account_mode`）：release 改为经 `run_with_environment`（R4 闭环执行器）执行（pre 是 run_with_writer_policy），链为 gate→snapshot→journal read_checked/commit_pending/commit_pending_error→RouterOnPlan from_state/prepare→run_with_environment→into_verified_parts→verify→restore_stably→persist_with_commit+Publication::acknowledge；DTO `CodexRouterNoAccountModePayload`。
- R8（`RelayManager::set_codex_router_enabled`）：保留 relaunch/rollback/format_invariant_violations 全链（`CodexRelaunchPolicy::relaunch_after_verified_state`、`record_router_event/timing`、`relaunch_error_detail`、`format_invariant_violations`、`app_event`）。
- 共享脚手架（win）：设置存储写、事件 emit、catalog 读写族。

**model_fallback / legacy 恢复链**

`codex_thread_visibility::model_fallback::restore_relay_model_threads`——正文级细节在指南内未完全展开（见 §3.13）。旧 `set_codex_no_account_slots` 命令面删除后，legacy 别名经 `validate_legacy_no_account_aliases` 校验、恢复走 restore 链，诊断面新增 `router_recovery_record` 只检查键看守恢复记录。

#### 实现注意（详见 §3.6）

- fix_issue 静默窗门可被调用方强制标志绕过——「修复前必静默窗」不是绝对不变量。
- no-account 门命中即终止，无部分提交；条件按固定顺序评估，先命中者决定用户看到的错误。
- loopback 判定是精确值比较：scheme 恰为 `http`、host 恰为 `127.0.0.1`、path 空或 `/`（win 另要求 port 非零）——`localhost`、IPv6 `::1`、`https` 一律拒绝。
- 拒绝路径计数：mac 6 条主函数 + 1 条闭包变体；win 7 条带前缀 + 1 条无前缀姊妹错误——不要强行凑「六」。
- `router_recovery_record` 明示自动修复不触碰恢复资料；该键异常需要人工/单独处理路径。
- win 侧 postcondition 探针带品牌化探针临时文件写——诊断不全是纯读。
- R4 闭环的 postcondition 校验跑两次（迁移后一次、fix_all 后一次）；第二次仍违规时 `format_violations` 把完整违规清单（`" | "` 连接）拼进错误——错误文本体量随违规数增长。
- RT-09 已 committing 的 journal 记录不可被普通新阶段覆盖；返回 `ROUTER_COMMIT_RECOVERY_REQUIRED` 且**不自动启动 ChatGPT**——恢复是显式动作，不能假设转场失败后系统会自愈或自动拉起引擎。
- release 侧 R7 换了执行器（run_with_environment）——按本指南实现统一走 run_with_environment 形态。
- 破坏性副作用集中在 fix_\* 家族：config/threads 表写、SQL 事务 COMMIT/ROLLBACK、`databaseBackups`/`config-backups` 备份、孤儿线程收养的条件 UPDATE（`WHERE id=?2 AND COALESCE(archived,0)=0 AND model_provider=?3` 及条件变体）、收养回滚 UPDATE、`-wal`/`-shm` 占用探测（lsof）、`fix_thread_poisoned_instructions` 清理注入系统提示词——全部有备份 + quiet-window 前置纪律，但均为真实写操作。
- 诊断进程扫描叶平台分叉：mac 用 `ps -ax -o etime=,comm=` 子进程 + `CFBundleShortVersionString` 读取；win 用 Toolhelp32 API 族（`CreateToolhelp32Snapshot`/`Process32FirstW`/`Process32NextW`），win 侧无 shell-out（`ps`/`tasklist` 均不存在）。

---

### 2.8 accounts

**账号**

#### 行为面（1.2.6 → 1.2.7）

**命令集（IPC）**：accounts 域新增 4 条：

| 命令 | 说明 |
|---|---|
| `set_account_alias` | 账号备注编辑（A4/ACC-03） |
| `get_account_reset_credits` | 重置卡余额/状态 |
| `get_account_reset_credit_history` | 重置卡发放历史 cursor 分页（A6/ACC-05） |
| `load_runtime_display_snapshot` | 运行时显示快照 getter；**win-only 注册**（mac 无此命令）；getter 零参只读，`data=RuntimeDisplaySnapshot|null` 不把成功信封改失败 |

用量刷新族新增 2 条：`get_usage_refresh_all_accounts` / `set_usage_refresh_all_accounts`。注意 `get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令，不在新增集合。

**参数漂移**：`load_quota_history` 增加 `range` 参数（前端契约 `argKeys:["accountKey","range"]`，默认 `"week"`，双平台一致）。

**DTO / 值域**：

- `PlanType` JSON 值域 9 → 11 项：新增 `go`、`pro500`。完整值域 = `{free, go, plus, pro5x, pro20x, pro500, team, business, enterprise, edu, unknown}`；`unknown` 判别值由 8 漂移到 **10**。`is_pro_500_label` 规则：pro500/chatgptpromax 直中 + promax 令牌 + pro+500 组合令牌。
- `AccountSummary` 仍 25 键、`ExportedAccount` 仍 14 键且包含 auth——**无字段面删除**。

**内部状态机（非 IPC，行为变化）**：

- 切换失败回滚重写：`capture_switch_rollback_state`（快照字段扩到约 30 个 String + 5 次 `FileRestoreState::capture`）；新增 `finish_switch_failure_with_client`（1.2.6 无此函数）；新错误码 `SWITCH_ROLLBACK_CAPTURE_FAILED`、`SWITCH_LIVE_VERIFY_FAILED`。
- OAuth 持久化新增 `OAUTH_COMMIT_NOT_STARTED` / `OAUTH_CLIENT_UPDATE_DEFERRED` 分支。
- 账号观测者新子系统：`commands::account_observer::{run,start}` + `core::account_observation` 8 函数（常驻观测线程，品牌化线程名；auth.json 守卫链），服务到期高亮。
- 启动后核验链 pre→release 地址换面但算法保留（见 ACC-12 行为规格）。
- refresh 请求 User-Agent 版本段随版本号更新（1.2.6→1.2.7）；POST endpoint、grant 面与 **15 秒 HTTP 时限保留**。

**前端变更面**（双平台一致）：

- Go/Pro500 名称与徽标（ACC-01 badge）：徽标映射表 `gr={free:Cs,go:Ps,plus:Ts,pro5x:At,pro20x:At,pro500:Ss,team:_s,business:ws,enterprise:Ht,edu:ks,unknown:null}`，徽标渲染 `br({plan,unknownLabel})` 输出 `<span class="account-plan-badge" data-plan data-premium data-pro>`；套餐顺序表 `Dr=["free","go","plus","pro5x","pro20x","pro500","team","business","enterprise","edu"]`。
- Go/Pro500 价格展示（ACC-02）：名称/价格表 `$m={free:{name:"Free"},go:{name:"Go"},plus:{name:"Plus"},pro5x:{name:"Pro",price:"$100"},pro20x:{name:"Pro",price:"$200"},pro500:{name:"Pro",price:"$500"},team:{name:"Team"},business:{name:"Business"},enterprise:{name:"Enterprise"},edu:{name:"Edu"},unknown:{name:"Unknown"}}`；查询函数未命中回落 `unknown`，拼接函数输出 `"name price"`（Go 无 price 键）。
- 账号卡备注编辑入口（ACC-03 前端）：卡内联编辑组件（编辑态/草稿 state），i18n keys `accounts.remark` / `accounts.editRemark` / `accounts.remarkSaveFailed`，保存链 `setAccountAlias(accountKey, alias)` mutation。
- 重置卡历史展示区（ACC-05 前端）：`useInfiniteQuery` + `pageParam` → `get_account_reset_credit_history(accountKey, cursor)`；details/summary 折叠区（`accounts.resetCards.history`/`historyRange`）；「更多」按钮 `fetchNextPage`（加载中 spinner + disabled）；行内 `occurredAt`/`received`，`viewDetails` 对话框。
- 刷新全部账号开关（ACC-06 前端）：独立设置项 Switch `settings.refreshAllAccounts` + `settings.refreshAllAccountsDesc`；设置页接线；IPC 读写 `get/set_usage_refresh_all_accounts`。
- 配额历史 range 切换（ACC-07 前端）：quota tab 下 `["today","week","month"]` 三档分段按钮（activity tab 另为 `["week","month","year"]`），`aria-pressed` 标当前档；选中档同时进 `queryKey:["quota-history",…]` 与 `loadQuotaHistory` 第二参，`staleTime=30000`。

#### 行为规格

**`set_account_alias`（ACC-03，A4）** — `core::repository::account_alias::<impl Repository>::set_account_alias`：

1. `normalize_alias` 先校验/规整备注文本（校验失败直接返回错误变体）。
2. `FileLock::acquire("account state.oauth-refresh.lock")`——**与 OAuth 刷新/持久化共用同一把文件锁**（该锁全库 26 个调用方，含 `oauth_refresh::refresh_token_with_policy`、`account_oauth::persist_oauth_account`）。
3. 锁内 `load_local_state`，第一轮按定长（参照实现 384 字节）步进扫账号记录、按 id 精确匹配定位；第二轮按定长（参照实现 424 字节）步进扫 registry 条目，先比对现存 alias（条目 +272/+280 偏移）。
4. alias 不同则重新分配并把新串三元组（ptr/len/cap）写入条目偏移 +256/+264/+272，随后 `persist_registry(…, 1)` 持久化。
5. 找到活跃账号（记录内标志位）→ clone 其 `AccountSummary` → `make_status_payload_with_service_state` 重建运行时显示快照 → `CoreEnvelope::ok_with_warnings` 返回。
6. 错误路径：账号 id 未命中 → `"Account is no longer available"`；锁失败/载入失败原样透传。win 侧：handler 内 `runtime_display_state_update_and_emit(…, "account-alias", …)` 把别名并入运行时显示快照并 emit；核心实现（`src\commands\account_alias.rs`）带锁占用守卫与 Mutex poison 检测。

**重置卡历史分页（ACC-05，A6）** —— 四层结构（commands/core/repository/serde）：

- 命令上下文 `commands::account_reset_credits::request_context`：装配请求上下文，忙时 `"Account state is busy"`；守卫链 = ChatGPT 凭据存在 → 凭据可读 → 账号身份匹配，错误面 `"Account is no longer available"` / `"Reset card credentials are unreadable"` / `"Reset card account identity does not match"` / `"Reset card details require ChatGPT login credentials"`。
- 分页协议：`fetch_history`：解析响应 `events` 数组 + `next_cursor`（snake_case 键原样解析）；对响应里的 `next_cursor` 也跑 `validate_cursor`；逐事件校验 `type=="granted"` 且 `id` 存在且 ≤256；`occurred_at` 经 `chrono::DateTime::parse_from_rfc3339` 解析；事件按 id 进 map 去重。任一不符 → `"Reset credit details returned an invalid response"`。
- 游标校验 `validate_cursor`：null 游标放行；长度 >2048 拒绝；逐 UTF-8 字符解码，拒绝控制字符（<32）与 127–159 区段，错误文案 `"Invalid reset credit history cursor"`。
- 副作用=只读（无本地写）；snake_case→camelCase 由 serde 层承担（4 个 Serialize impl）。
- win 侧同构（同 events/next_cursor/granted 校验与同无效响应文案）。win 侧同款游标专属文案未独立核验——实现以本指南文案为准。

**刷新全部账号开关（ACC-06，A8）** — mac release 命令 glue 调 `commands::system::set_usage_refresh_all_accounts`（入参 `enabled` bool + `repo` state）；win 侧 setter 写设置存储后读回校验，getter 读设置存储后唤醒等待者（守护任务按开关等待/唤醒）。守护侧：仓储模块 `core/repository/usage_refresh.rs`，`normalize_usage_refresh_interval` 默认 `5m`、特殊值 `usage_401_retry`（401 退避触发刷新）；watcher 线程按 schedule 轮刷——开关开启时刷全部账号、关闭时只刷活跃账号（守护循环体细节未在指南内逐行展开，见 §3.13）。

**配额历史 range 切窗（ACC-07）** — `load_quota_history` range 解析/切窗（`quota_history.rs` 面）：先取本地时间（失败守卫 `"Local time out of range"`），再按串长度+内容分派——`today`=自然日 0 点（日序号换算，400 年=146097 天儒略历修正）、`week`=自然周起点（weekday 偏移归周）、`month`=自然月 1 日（月长表 + 修正表；日期越界报 `"Quota history date is out of range"`）；其它值 → `"Quota history range must be today, week, or month"`（错误变体 9）。文件不存在时返回空列表。「剔除未来时间戳」行为未在指南内独立隔离（见 §3.13）。

**OAuth 持久化两新分支（ACC-09）** — `persist_oauth_account`：

- `OAUTH_COMMIT_NOT_STARTED`：commit 状态 = 未开始的 else 臂，组装 `"OAUTH_COMMIT_NOT_STARTED: active account could not be saved"` 并入聚合错误串返回——**错误变体，非延迟**。
- `OAUTH_CLIENT_UPDATE_DEFERRED`：commit 已完成但客户端登录态更新未确认时触发；错误码套中文说明模板「新凭据已保存，但客户端登录状态尚未确认，请确认当前登录状态后重新授权该账号：」，随后记入 deferred 状态继续（**非致命**）。
- 写入顺序：先持久化并发事件 `account_oauth`/`disk_committed`，再更新客户端登录态；邻接后缀模板 `" | CLIENT_RESTART_FAILED: "` / `" | CLIENT_RESTART_DEFERRED: "`。持锁面：`.account-transition.lock` + `Mutex<Repository>`。
- 该两分支为 release 段新增（pre 段 mac 侧不存在该分支本体；win pre 段已有）。

**切号后启动三次采样核验（ACC-12）** — `verify_after_launch`：

```
sleep(100ms);  r1 = verify_account_switch(target);   // 第 1 次采样
sleep(250ms);  r2 = verify_account_switch(target);   // 第 2 次，失败则保留 r1
sleep(500ms);  r3 = verify_account_switch(target);   // 第 3 次
// 收尾：三次都成功 → 成功；r3 失败且 r2 成功 → 用 r2 结果；
// r2/r3 均失败且当前无具体错误 → 报 SWITCH_LIVE_VERIFY_FAILED
```

- 语义钉死：**固定执行三次，成功不提前结束；失败清零连续成功计数但不重置重试索引；仅 SSS、FSS 成功（最后两次必须连续通过），SSF 不成功；最终失败保留最后一次具体错误**。
- 核验内容是 registry active 身份与 auth 派生身份在长度和字节上等于同一目标身份（不是逐项比 access_token）；虚拟受管 auth / API-key 模式 / 不可用 token 形态的排除保护为 1.2.6 既有。
- 两条错误全文均 82 字节、两版逐字节相同：`SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account`、`SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested account`。
- 850ms 只是名义等待和，不是总切换时限；win 等待落到 waitable timer / `WaitForSingleObject`，失败回落 `Sleep`。
- 1.2.6 已有 `verify_after_launch` 面，1.2.7 +3 函数并新增 live-verify 错误码。

#### 实现注意（详见 §3.7）

- 账号切换/恢复写 auth.json/registry 是破坏性写：先快照（capture_switch_rollback_state）、互斥（quiet acquire）、失败验证（finish_switch_failure_with_client 三条硬校验：回滚后 auth.json 与凭据代次一致 / auth.json 残留检测 / registry active 与回滚目标一致），任一失败即报错；这条链不能收窄。`SWITCH_ROLLBACK_CAPTURE_FAILED` 下 capture 失败即中止切换、不进 quiet acquire（顺序强制）。
- 账号导出仍含 auth（`ExportedAccount` 14 键含 auth）——不得当脱敏日志处理。
- `OAUTH_CLIENT_UPDATE_DEFERRED` 是**延迟语义不是失败**：凭据已持久化（disk_committed 先发），只是客户端登录态未确认；不能把它当错误重试持久化。
- `PlanType` 内部 ordinal 不是 IPC 整数合同；`unknown` 判别值 8→10 属值域漂移——按位置/判别值消费双方都会错。
- `set_account_alias` 与 OAuth 刷新/持久化**共用同一把文件锁**，并发模型上 alias 写会阻塞 OAuth 刷新，反之亦然。
- 三次采样核验**不提前成功退出**（SSS/FSS 才过），把它当「一次成功即返回」实现会误判时序；100/250/500ms 是三次独立等待，不是 850ms 总时限。
- `load_runtime_display_snapshot` 是 **win-only 注册**（mac 无此命令）——跨平台消费时 mac 侧没有这条命令；事件 wire 为 `{snapshot, source, accountKey?}`，`accountKey` 为 None 时整键省略。
- 两项旧中间结论为误报、不得用于实现：①「取消 OAuth 启动后三次重试」（三次采样仍在）；②「保存凭据校验新增」（1.2.6 既有）。

---

### 2.9 skills

**技能**

#### 行为面（1.2.6 → 1.2.7）

**DTO（SK1）**：`InstalledSkillSummary` 8 键 → 11 键，新增 `managed` / `source` / `enabled`：

- 字段布局（mac release 偏移）：`updatedAt@0, id@16, name@40, relativePath@64, directoryPath@88, skillFilePath@112, title@136, summary@160, managed@184, enabled@185, source@186`，size 184→192。
- `source` 七值枚举：`managed(0)/user(1)/project(2)/plugin(3)/system(4)/admin(5)/native(6)`——七项是来源**值**，不是新增 7 个 IPC。构造规则：plugin 来源 Option 为 Some 优先于 scope 判定；无 plugin 归属时按 scope=user/repo/system/admin 映射，其余或未知 scope → native；managed 文件扫描得到且与 native 同 canonical 路径合并时仍保留 managed。
- `enabled` 三态：键**始终存在**，字节 2 写 null / 0 写 false / 1 写 true，不是 None 时省略。
- **平台口径**：mac 侧字段 8→11 属 pre→release 变化；**win 两侧都已是 11 字段**，不是 win 的 release 新增。

**原生库存合并（SK2）**：`load_installed_skills` 调用链 = `BlockingTask::poll` → `inventory::load_inventory` → `codex_app_server::skills::read_skills` → request 闭包 → `AppServerClient::request_with_timeout`。行为合同：

- 总 deadline 30 秒、单请求至多 10 秒。
- `project/list`：分页 limit 100、至多 20 页、根至多 256；初始 Codex home canonicalize；project 根必须绝对且 is_dir；canonicalize 后去重；重复 cursor 防线。
- `skills/list`：入参 `cwds`=已验证根列表 + **`forceReload=true`（mac）/ `false`（win，两侧均如此——平台分叉）**；响应 root 为 `data`；每个返回 cwd canonicalize、必须属于请求集合且不重复；skill path 必须绝对且末名 `SKILL.md`；不合法返回 CoreError → inventory 统一按 unavailable 降级。
- 合并规则：managed 扫描与 app-server 库存按 **canonical SKILL.md 路径**合并；相同路径保留 managed 身份并补 enabled（`managed_index_helper`：对每个 managed.skillFilePath canonicalize 成功插入 path→index，失败跳过；原生同 key 不追加外部条目）。enabled 冲突转 null 并把该 path 放冲突集合，后续不反复覆盖。
- 外部条目形态：`managed=false`，id = canonical SKILL.md 绝对路径显示串，directoryPath/relativePath = 父目录，updatedAt=null，enabled 保留原生三态。
- 告警 envelope：数据是 `SkillListPayload {items,total,rootPath,lastScanAt}`，warnings 在外层 envelope 不在 data 内。库存失败降级为 managed 列表成功结果 + `skills_native_unavailable`（「ChatGPT 原生 Skills 列表暂不可用，当前仅显示{PRODUCT}管理的技能。」）；原生 partial、单项 canonicalize 失败、缺父目录或 enabled 冲突 → `skills_native_partial`（「部分 ChatGPT Skills 来源未能读取，当前列表可能不完整。」）。

**删除保护（SK3）**：`remove_skill` 新增绝对路径 id 只读拒绝。`core::skills::remove_skill` 首分支即判：

```
if ( Path::is_absolute(id) ) {
    // "External Skills are read-only"（29 字节）
    return Err;   // 在 lock_skill_mutations / load_installed_skills / 备份 / 删除之前
}
```

managed 删除仍**先备份后删除**：`backup_skill_directory(…, "remove", 6)`；备份目录 `skill-backups`；备份 metadata 六键 `backupID/skillID/name/title/relativePath/createdAt`；先写临时内容再 rename 发布，失败清理规则保留。

**bootstrap 缓存守卫（SK4）**：release 技能列表只在 **warnings 为空**时更新 bootstrap 缓存。技能列表命令闭包：warnings vec 长度非 0 → 跳过 store；仅空 warnings 才执行 `Repository::store_bootstrap_installed_skills`；store 失败 → 构造错误并 log 后照常继续（let _ 丢弃）。`store_bootstrap_installed_skills` 内部调 `bootstrap_cache::update`；响应仍由 `CoreEnvelope::ok_with_warnings` 组装——warnings 随响应返回但缓存不刷新。

**前端变更面**：

- SK5：已安装技能查询 `staleTime` 由 `Infinity` 改为 `60000`，加 `refetchOnMount:"always"`、`refetchOnWindowFocus:false`；新增按当前 tab（installed/backups）手动刷新按钮，分别调对应 query 的 `refetch()`，`isFetching` 期间 disabled 防重入。
- SK6：列表行渲染来源标签 `` t(`skills.sources.${s.source??"managed"}`) ``；`managed===false` 显示只读徽标 `skills.readOnly`；installed tab 顶部渲染 warnings 列表（`role=status`，message/code 键）；删除按钮整体被 `s.managed!==false` 门控；`enabled===false` 显示 `skills.disabled` 徽标。列表失败 alert 与库存降级 warning 分开。

#### 行为规格（加载主链与降级语义）

- 加载主链：IPC `load_installed_skills` → spawn → `BlockingTask::poll` → `inventory::load_inventory`（managed 文件扫描 + 原生 RPC 合并 + 降级/告警组装）→ `read_skills`（app-server JSON-RPC 客户端，30s deadline/10s 单请求）→ 按 canonical 路径合并 → `SkillListPayload` + envelope warnings → 空 warnings 才刷 bootstrap 缓存。
- 导入/备份/恢复面（既有命令，1.2.7 沿用）：`import_skill` 两闭包按 canonicalize fallback 与 `"Invalid skill source"` 内容唯一消歧；`load_skill_backups` / `restore_skill_backup` / `delete_skill_backup` 均在 release 命令表。
- 降级语义：`skills_native_unavailable` 时**仍返回成功的 managed 列表**，不把原生失败冒成整列表错误或空列表；`skills_native_partial` 同理只加告警不删 managed 结果。

#### 实现注意（详见 §3.8）

- `remove_skill` 的绝对路径 = 外部条目：外部条目 id 就是 canonical SKILL.md 绝对路径，所以「id 是绝对路径」等价于「外部条目」；拒绝发生在锁、备份及删除**之前**。
- `forceReload` 平台分叉：mac `skills/list` 用 `forceReload=true`，win 两侧用 `false`——跨平台实现不能统一照抄。
- win pre 已有 11 字段与外部条目只读删除保护：把「字段 8→11、绝对 id 拒绝」当 win 的 release 新增是错的；它们只属于 mac pre→release 变化面。
- warnings 位置：warnings 属外层 envelope，不在 `data` 内；前端 HTTP 响应对象再包一层——不能因页面 `.data.warnings` 就改 IPC 字段位置。
- enabled 冲突合并语义：冲突转 null 且入冲突集合后**不再反复覆盖**——不要指望后续扫描能自愈该字段。
- 「bootstrap 缓存只在空 warnings 时更新」意味着降级/部分失败的会话里缓存保持旧值——缓存新鲜度不能从「列表刚加载过」推断。
- Skills 来源枚举里的 `plugin` 是来源**值**，不得据此推导新增 Tauri plugin/capability 权限。
- 前端 enabled 展示实测只有二态（false → disabled 徽标），第三态（null）无独立渲染分支；DTO 三态属后端口径。

---

### 2.10 threads-sessions

**线程与会话**

#### 行为面（1.2.6 → 1.2.7）

**命令集**：sessions 域新增 7 条 IPC：

| 命令 | mac release core owner |
|---|---|
| `inspect_session_index_health` | `core::sessions::health::inspect_session_index_health` |
| `clean_catalog_ghost_threads` | `core::sessions::health::clean_catalog_ghost_threads` |
| `clean_missing_rollout_rows` | `core::sessions::health::clean_missing_rollout_rows` |
| `clean_orphan_rollouts` | `core::sessions::health::clean_orphan_rollouts` |
| `clean_global_state_tmp_files` | （1.2.6 无此符号，全新后端命令） |
| `export_sessions_batch` | `core::sessions::export::export_sessions_batch` |
| `load_session_messages` | `core::sessions::detail::load_session_messages` |

**删除面**：`core::session_analytics` 8 函数全删 → 旧 IPC `load_change/session/token/tool/usage_analytics` 5 条删除；session 分析由 `core::analytics`（index/parser/reader/threads/aggregate）接替。

**模块结构**：`core::sessions` 拆分为 `sessions/{health,export,detail,history,worktree}`；`core::relay::codex_thread_visibility` 扩展（history / model_fallback 两新文件面）；`codex_app_server` 新 API：`fork_thread_to_cwd`（`thread/fork`、`excludeTurns`）、`load_legacy_messages`、`load_paginated_messages`（`thread/items/list`、`sortDirection`）、`list_thread_scope`（`thread/list`、`useStateDbOnly`、`sourceKinds`、`parentThreadId`、`recency_at`）。

**T1（线程收敛/可见性重写）**：win 侧三函数链——事件识别器（逐行扫 rollout JSONL，识别 `type=="event_msg"` 且 `/payload/type=="thread_settings_applied"`，命中提取该行写入状态）、一致性检查器（"thread_settings" 键）、重写 applier（可见性重写主循环逐行处理 rollout 并写回规范化行）；保留历史有独立模块面 `codex_thread_visibility_history.rs`。mac 侧重写函数族：`repair_missing_rollouts_for_convergence`、`verify_convergence_rollout_targets`、`patch_convergence_rollout_target`、`converge_threads_to_provider_with_reads`（SQL `UPDATE threads SET model_provider = ?2 WHERE id = ?1` + `thread_settings_applied` 事件 + ROLLBACK 事务）、`converge_router_thread_models_with_reads`、`cleanup_orphan_router_threads_strict`、`restore_no_account_model_threads`、`model_fallback::restore_relay_model_threads`、`inspect_thread_history_integrity`、`cleanup_private_reasoning_target`、`open_codex_db_for_convergence`（`db holders: none detected` 占用探测）。

**T3（CodexSession 子代理关系字段）**：四字段 `parentSessionId` / `depth` / `agentNickname` / `agentRole` 在 CodexSession 序列化/反序列化双向确认（win 序列化器逐字段写入；反序列化键表含 `parentThreadId`/`agentNickname`/`agentRole`/`projectId`/`historyMode`/`gitInfo`）。mac 侧 `load_sessions_internal` 装配列表，含 `subAgent/thread_spawn/depth/parent_thread_id`、`agent_nickname/agent_role` 面与排序键 `recency_at_ms/updated_at_ms/created_at_ms`；`CODEX_INDEX_UNAVAILABLE` 错误码。depth 计算上游函数与 nickname/role 赋值规则正文未确认（见 §3.13）。

**W1（线程 fork 到指定 cwd）**：后端存在——`codex_app_server::fork_thread_to_cwd`；release 把它**内联进创建副本的调用方**，行为不变：`thread/fork`、`excludeTurns`、120 秒超时与 cwd 校验保留。前端 **fork 本体 UI 入口不存在**（release 前端 147 命令无双平台 fork/copy 类命令，sessions 页无 fork/copyTo/duplicateThread 字样）；相邻能力 `migrate_session_worktree`（搬迁非复制）有 UI 入口：线程详情区 migrate 按钮（`canMigrate` 门控 + `blockedReason` 提示），错误路径匹配 `WORKTREE_MIGRATION_REQUIRES_CODEX_EXIT|CODEX_EXTERNAL_WRITER_RUNNING`，i18n keys `sessions.migrateWorktree/CheckBeforeRetry/Failed/Success/Unavailable/Uncertain`。

**前端变更面（T2 七条入口，双平台一致）**：

- 体检：`inspectSessionIndexHealth()` 无参 query（`staleTime:1e4`，`networkMode:"always"`），健康面板驱动四条清理行计数展示。
- 四条清理：各配 mutation（`cleanGlobalStateTmpFiles/cleanOrphanRollouts/cleanMissingRolloutRows/cleanCatalogGhostThreads`）与行项（计数/字节描述）；点击进确认对话框（`sessions.sessionIndexCleanConfirmTitle/Desc/Action`），执行中整组 disabled，结果 toast `sessionIndexCleanDone/Failed/Partial`。
- 批量导出：目录选择器（`batchExportPickDir`）→ `exportSessionsBatch(ids, targetDir, format)`；toasts `batchExportSuccess/PartialTitle/Failed`。
- 消息加载：会话详情对话框内 `loadSessionMessages(sessionId)`（`staleTime:15e3`）。
- 七条命令双平台契约：`ipc-contracts.jsonl` 各 147 条，七条均在且 argKeys 一致。

#### 行为规格

**`fork_thread_to_cwd`（W1 后端）**：

1. `AppServerClient::connect`；两个入参（thread id、目标 cwd）各自 trim 后必须非空（win 侧文案「目标工作目录不能为空」）。
2. 组装参数 map：`"threadId"`、`"cwd"`、`"excludeTurns"`（值 true）。
3. `AppServerClient::request_rpc_with_timeout("thread/fork", 11, params, 120, 0)`——120 秒超时。
4. 响应按 `ThreadReadResponse` deserialize_struct 解析；**副本探测/一致性校验**：返回的工作目录 trim 后与请求目标逐字节比对，不一致 → 错误「ChatGPT app-server 返回的工作目录与目标不一致：{0}」；未返回有效新线程 ID → 49 字节错误；全部通过 → 拷贝响应字段返回成功变体。

**七条会话命令**：

- `inspect_session_index_health`（44 callees 级别实现）：`SELECT count(*) FROM thread_items`、`thread_items`/`thread_id` 一致性体检；**只读**。
- `clean_orphan_rollouts`：`HistoryInventory::load` → `HistoryInventory::health` → `cleanable_orphan_rollout_ids`（过滤出可清理孤儿）→ 日志（`src/core/sessions/health.rs`）→ **`delete_sessions`** 执行删除 → `deletion_cleanup_result` 汇总。另有 `reconcile_official_thread_rows`、`load_complete_health_thread_rows` 参与匹配。删除白名单匹配条件未逐行核（见 §3.13，实现前须定向复核）。
- `clean_missing_rollout_rows`：rollout 文件缺失行的 DB 行清理。
- `clean_catalog_ghost_threads`：目录幽灵线程清理，写 sqlite；调 `CodexPaths::catalog_db_path`。
- `clean_global_state_tmp_files`（全新后端命令）：全局状态 tmp 清理；win 侧日志串 `"cleaning stale global-state tmp files"`、失败日志 `"[{PRODUCT}][sessions] remove stale global-state tmp failed"`。
- `export_sessions_batch`：jsonl / md 两格式分支（字面量 `jsonl`）；文件写；jsonl 行 = CodexSession JSON。
- `load_session_messages`：会话消息装载，`"Untitled Session"` 兜底名、`reasoning_effort` 面。

**线程可见性重写的公共契约（T1）**：sqlite `threads` 表列（`model_provider/model/reasoning_effort/rollout_path/source/archived`）+ rollout JSONL JSON 指针写（`/payload/model_provider`、`/payload/history_mode`、`/payload/history_base`、`/payload/model_reasoning_effort`、`/reasoning/effort`）；错误范式=「表示变化/竞态 → retry required」「历史保留不删」：`rollout backup representation changed; history preserved` / `rollout changed while router migration was streaming; retry required` / `rollout changed before private reasoning cleanup; retry required` / `rollout is no longer owned by the router; history preserved`。

**release 段 pre→release 变化**：真实变化为 `line_is_unusable_reasoning_response_item` 经 helper 新增**现行思考信封前缀**（`ccswitch-anthropic-thinking-v1:`）判断（pre 只识别历史品牌段前缀）——既有历史清理因此额外过滤这些 reasoning 条目，不是 token/计费安全改进。两个 `detect_worktree_copies` 消失为内联：列表父函数仍收集/排序 cwd、至多 4 组调度、scoped 线程、结果映射传给 `build_codex_session`。

#### 实现注意（详见 §3.9）

- 四条清理命令全部有破坏性副作用：`clean_orphan_rollouts` 走 `delete_sessions` 删 sqlite 行与 rollout 文件（fs delete）；`clean_missing_rollout_rows` / `clean_catalog_ghost_threads` 写 sqlite（含 DB 行删除）；`clean_global_state_tmp_files` 删全局临时文件，**删除失败仅记日志**，不冒错不补偿。前端虽有确认对话框，后端无二次确认。
- rollout 重写纪律：成功 rename **覆盖**历史，失败回收临时文件；`ReadStamp` 只是并发变更检测，**不等于持久备份**。`missing_candidate` 是 UPDATE 不是 DELETE；provider 收养保留事务/恢复写入；fork 仍创建线程。
- `PRAGMA wal_checkpoint(TRUNCATE)` 出现在 `cleanup_orphan_router_threads_strict`（provider 归一清理）——WAL 截断是全局 DB 副作用，不只影响目标行。
- 竞态错误范式是「retry required」不是自动重试：检出竞态即报错要求调用方重试，不能把错误吞掉当成功。
- 导出防护（analytics 侧 `write_export`，同族纪律）：`"statistics export requires a matching .csv or .json extension"` / `"statistics exports cannot replace ChatGPT data or symbolic links"`（符号链接防护）/ `"missing export directory"`——sessions 批量导出应沿用同级防护意识。
- fork 与 migrate 是两个能力：`thread/fork` = 复制线程到指定 cwd（有 `excludeTurns`）；`migrate_session_worktree` = 搬迁（有 `canMigrate` 门控与 blockedReason）。前端 release 只暴露 migrate 入口；fork 无 UI、无 IPC 命令面——要做 fork UI 属新增能力。
- `load_session_messages` 读面边界：消息读取有 2MiB/64KiB 预算与服务失败回退 warning；不要把回退 warning 当空会话。
- 反直觉：`thread_settings_applied` 事件识别器未命中时返回 -1（不是错误抛出）；可见性重写写回的是**规范化行**（会改写 rollout 文件内容）。
- 平台差异：健康检查、路径解析、删除后的 UI/广播和持久化结果分开——后置刷新 warning 不等于前置删除自动回滚。

---

### 2.11 anthropic-trace

**诊断字段扩展**

#### 行为面（1.2.6 → 1.2.7）

Anthropic 协议 V1.0 迁移伴随的诊断面：**`anthropic_trace` 诊断 DTO 字段扩展**——这是诊断字段，**不是新增上游业务能力**。

诊断对象完整字段表（两侧合同相同、内联/外提变化）：`outcome`、`error_class`、`error_kind`、`attempts`、`events`、`deltas`、`delta_counts`、`bytes`、`first_byte_ms`、`last_byte_ms`、`max_gap_ms`、`block_starts`、`block_stops`、`message_stop`、`stop`、`tail`、`text`、`usage_samples`、`usage_omitted`。mac release 对应体：`core::relay::anthropic_trace::summary` 与 `record_usage`。

#### 行为规格

- **summary**：由 `finish`/`Inner::drop` 调用，`Inner::emit` 最终流向 `debug_log::app_event`——**消费者是诊断计数**，不是请求长度/token 计费或工具限制。序列化语义：`delta_counts` 固定按六个原始 u64 顺序；`first/last_byte_ms` 可空；`tail` 按环形缓冲逻辑顺序（先连续尾段再环回段，不按物理数组）；`text` 内 upstream/responses 的非 Some 写 null；`usage_omitted` = samples 减 8 的饱和减法；**末尾才发布完整本地对象**，序列化失败清理暂存并可能 panic，不返回部分成功 JSON；不写日志文件、不发 HTTP。
- **record_usage**：usage 字段双协议名归一——Anthropic 侧 `input_tokens/output_tokens/cache_read_input_tokens/cache_creation_input_tokens` + Responses/Chat 侧 `cached_input_tokens/responses_cached_tokens/input_tokens_details/chat_cached_tokens/prompt_tokens_details`；分类串 `invalid/object`；附带 `usage_stage/usage_state/observed_ms`。
- **错误分类器（win）**：`anthropic_trace_classify_error_helper_sys`——先把错误串转小写，再按子串匹配归类：`prefill→assistant_prefill`、`unclosed→unclosed`、`before message stop→missing_message_stop`、`without stop reason→missing_stop_reason`、`encrypt→encrypted_state`、`utf8`、`json→objectinvalid`、`timeout/timed out`、`connection`、`budget`、空串→`none`、兜底 `unclassified`。`error_class` 值域与 mac 侧一致（`unclosed/missing_message_stop/open_block/missing_stop_reason/encrypted_state/assistant_prefill/objectinvalid`）。
- **安全边界**：无密钥明文写日志（header 白名单治理）；错误提供方敏感片段先替换为 `[REDACTED]` 再经文本脱敏并递归 JSON。

#### 实现注意（详见 §3.10）

- 诊断字段 ≠ 业务能力：不得据此声称新增上游协议能力或计费口径。
- `usage_omitted` 是**饱和减法**（samples−8），samples 小于 8 时为 0，不做负值；环形缓冲 `tail` 逻辑顺序 ≠ 物理数组顺序，按数组顺序读会错位。
- 序列化失败路径可 panic，不返回部分成功 JSON——诊断面不能当可靠遥测通道做容错假设。
- 错误分类是**小写化后的子串包含匹配**，不是精确码表——上游错误文案微调会落进 `unclassified`。

---

### 2.12 启动期上下文构造器

**启动期上下文构造器（非事件分派体）**

#### 行为面（1.2.6 → 1.2.7）

`run::inner` 闭包（315,645 字节，按控制流分块方式完成行为重建）的定性：**不是事件循环/命令分派体**，而是启动时一次性运行的应用上下文构造器：

- config 解析（updater 端点解析、各平台 config 组装、`semver::Version::from_str`、产品元数据物化——产品名/版本号/作者/内部代号均按实现产品填写）→ capability/ACL 清单解析（216 个 glob from_str）→ 108 个命令逐一对窗口标签 'hotspot'/'main' 各编译一次权限作用域 glob 并 insert → `RuntimeAuthority::new`（全函数唯一一次）收口写出返回。
- **无分派表、无循环**：出度分布 {0,1,2}，无 ≥3 后继块——命令分派在 generate_handler 系函数，不在本体内；大量相邻「回边」为逐命令单元错误汇合形态，非循环——一次性线性构造的直接佐证。
- 冷区：大量 `core::result::unwrap_failed` 桩（panic Location 指 `src/lib.rs`）+ 大量 alloc 失败桩，全部汇入 ud2；正常路径只有单一 retn。
- **副作用面**：全部唯一 callee 无文件删除/keychain 删/进程 kill 等破坏性 API；updater 端点为 `http://localhost:3123/`（明文 HTTP + 本地地址，minisign 公钥 ID 9718C9FEBC6D1926 内嵌）——**不得当生产端点硬编码**（参照构建的开发配置）。

#### 实现注意（详见 §3.11）

- 超大体 ≠ 分派体：体积来自 108 命令 × 2 窗口标签的 ACL glob 编译内联 + unwrap/alloc 桩；在命令分派意义上本函数是空面，找命令分派须移步 generate_handler 系。
- panic 面即启动崩溃面：启动期任何 config/ACL 解析失败直接 panic 终止、无降级路径；复刻启动逻辑时这些 unwrap 应换显式错误传播，否则行为是「启动即崩」。
- 行为重建口径边界：区域语义由锚点（命名 callee / 字符串 / 常量）+ 控制流拓扑交叉确认，非逐指令精读——实现按本指南列出的行为合同即可，不复刻内部结构。

---

## 3. 实现注意事项

各模块注意事项汇总（每条：类型 → 影响 → 规避）。明细与上下文见 §2 对应小节。

### 3.1 协议流式核心（§2.1）

1. 【终态判定】pause_turn/未知/缺失 stop_reason 一律 failed（invalid_response）→ pre 的自动续传链不得迁移成现行能力，按 pre 语义实现续传会直接收到 failed。规避：按 §2.1 终态映射表实现。
2. 【终态信号】message_delta 带的 stop_reason 字段 ≠ 终态信号 → EOF 前无 message_stop 事件即 stream_truncated，不能凭已有内容推断成功。
3. 【事件语义】content_block_stop 只标记关闭不发任何 SSE 帧；未知 index 的 block_stop 静默空返回 → 「没报错」≠「被处理」，调试时勿误判。
4. 【版本兼容】thinking 信封 `ccswitch-anthropic-thinking-v1:` 与历史品牌段前缀不兼容；历史前缀记录发 HTTP 前硬拒（中文提示新建会话）→ 跨版本历史不能混用；实现若改自有前缀须同步三端（产出/解析/拒绝门）。
5. 【字面量口径】续传相关错误文案在不同构建实串不同 → 引用以本指南所录 release 实串为准，勿用二手转述。
6. 【错误面边界】release 状态机错误面全集见 §2.1 → 状态机无文件/进程级破坏性副作用；未列出的转移按「静默忽略未知 type」兜底，无需逐转移复刻参照内部结构。

### 3.2 聚合路径（§2.2）

1. 【行为边界】aggregate 复用流式状态机与同一终态映射，不是宽松后门 → 非流式路径不接受流式被拒的内容。
2. 【回退边界】EOF 聚合回退仅限「response 未开始且缓冲构成完整 JSON 文档」→ 已产出事件后被截断的流不静默转聚合成功。

### 3.3 请求方向（§2.3）

1. 【兼容性】旧品牌段前缀签名推理记录硬拒，用户只能新建会话 → 不迁移、不降级。
2. 【兼容性】compaction 拒绝产生用户可见 400（router.native_compaction_required + 「不再生成兼容性伪摘要」）→ 依赖兼容伪摘要的上游直接断。
3. 【语义保持】allowed_tools 无法等价表达时显式 82 字节错误，不静默放宽 → 按「放宽成任意工具」实现即行为不符。
4. 【重试】inline-tools beta 头校验失败 = 400 直接失败且无重试 → 不存在「去掉 beta 重试」兜底（release 已删除该路径）。
5. 【状态码】413 归属改写只把 "not a CC Switch limit." 改写为 "not a {PRODUCT} limit."，不改状态码语义 → 真正状态由 error-kind→HTTP 映射表决定，不要把文案改写当成 413 特殊状态处理。
6. 【脱敏】精确片段替换（fragment 为空不替换），不是模式/正则 → 脱敏强度完全取决于调用方传入的片段；通用脱敏另有 debug_log::redact_text_inner 一层。
7. 【schema】oneOf/anyOf/allOf 组合 schema 含无作用域 $recursiveRef/$dynamicRef 直接装配失败，不静默通过。
8. 【推理门】cannot disable thinking（81 字节）与 adaptive thinking + forced tool_choice 冲突（80 字节）是两条独立错误 → 判据分离为独立标志位。
9. 【历史校验】签名历史校验只读 → 版本混用/委托过旧/载体非法三条错误都带 "history was not modified" 语义保证。
10. 【净化守卫】web_search 净化是四值与关系（protocol==1 且 channel/model/base_url 命中）→ 不满足守卫的 native Responses 请求原样透传托管 web_search 工具，不要把 sanitize 当无条件执行。
11. 【模型名】末尾 `[1m]` 后缀大小写不敏感移除并 trim → 原模型决定 context-1m beta。
12. 【实现细节】多处校验按长度先行分派（allowed_tools len13 / inline-tools token len23 / context_window len29 等）→ 长度不符直接落默认分支，差一个字符就是不同行为路径。
13. 【概念区分】trace 展示层 effort 标签表的 ultra ≠ 请求侧 effort→档位匹配的 "ultra-" 标签 → 两条线不要互相推导；改档位表的责任方是 model_profile。
14. 【治理名单】转发头治理名单按 §2.4 所录名单实现（release 段未单列差异）→ 实现按名单处理并保持两端一致。

### 3.4 探测与发现（§2.5）

1. 【成功判据】探测成功需「终态事件 + 有模型输出」双条件 → 两个失败面文案不同，不能把「流结束」当成功。
2. 【采样截断】增量文本超 400 字符即提前置 ended → 探测只采样开头，不是完整生成。
3. 【成功判据】Responses 协议 `response.completed` 事件单独出现不算成功 → 还须 `response.status=="completed"`。
4. 【终态分类】OpenAI `content_filter` 与 Anthropic `refusal` 是分类终态不是成功。
5. 【输入校验】端点路径连 `\` 也拒；`.`/`..` 段拒绝是逐段比较不是子串匹配。
6. 【重试】模型发现 30 秒预算内零重试 → 失败/超时都直接终态；旧 `all retries exhausted` 终态已移除。
7. 【口径】本节行为以 win 段描述为准，mac 侧预期同构 → 指南未单列 mac 差异，实现按同构处理。

### 3.5 目录与配置（§2.6）

1. 【跨平台枚举】CatalogFailure kind 参照行为两平台不同（mac 3 种 / win 5 种）→ 实现需自定义统一值域并保证前后端/双平台一致，不能假设同一判别值表。
2. 【硬错误】`codex_bundled_cli_path` 缺失即 `CODEX_ENGINE_NOT_FOUND`，明确不退独立 CLI/IDE 插件 → 任何兜底都违背边界。
3. 【路径解析】`catalog_db_path` 多候选歧义显式报错，不再取首个存在路径 → 无候选返回 None 而非伪造默认路径。
4. 【写守卫】`validated_mcp_config` 比对受管块标记序列（词法非语义等价），重写排版/换行改变标记段序列同样被拒 → 拒绝即不写盘。
5. 【凭据边界】`official_headers` 拒自有 relay key 前缀 token → 自有 relay key 不能当官方目录凭据用；Bearer 缺失或值含不可打印字符走空结果。
6. 【超时】官方目录拉取 4 秒单次超时不重试 → win 直连通道中毒态（relay state poisoned）不重载就直接失败。
7. 【并发】quota/proxy_status/get_active 三命令状态读取全在 Mutex 锁内完成 → 不能假设无锁快照。
8. 【刷新语义】usage 保存失败只降级 warning 不回滚已取得用量 → 至多三轮额外刷新仍待定时返回首次快照；事件 accountKey 为 None 时整键省略。
9. 【参数钳制】`update_usage_refresh_schedule` 间隔下限钳 30 秒（<30 静默抬升）→ `manual` 归一结果是不排程不是报错。
10. 【平台限定】受保护进程 DB 持有闸仅 win（Restart Manager API；静默关窗重试分母 11、每轮 300ms）→ mac 无同形行为，不外推。
11. 【副作用】路由修复/恢复、MCP/config 写、DB UPDATE、进程终止/重启仍是破坏性副作用 → 当前库/路径错误阻止写入而非 fallback；诊断修复不可压平为旧 generic fix_issue。

### 3.6 转场与诊断（§2.7）

1. 【前置门】fix_issue 静默窗校验可被调用方强制标志绕过 → 「修复前必静默窗」非绝对不变量。
2. 【提交边界】no-account 门命中即终止，无部分提交 → 条件按固定顺序评估，先命中者掩盖后序条件。
3. 【精确比较】loopback 判定为精确值：scheme 恰 http、host 恰 127.0.0.1、path 空或 `/`（win 另要求 port 非零）→ localhost/::1/https 一律拒绝。
4. 【计数口径】拒绝路径 mac 6 条主函数 + 1 条闭包变体 / win 7 条带前缀 + 1 条无前缀姊妹错误 → 不要强行凑「六」。
5. 【行为删除】`native_off_invalid_openai_thread_models` 修复臂删除、键降级 CHECK-only → 保留中转模型选择的旧对话只被诊断不再被自动修复。
6. 【恢复保护】`router_recovery_record` 明示自动修复不触碰恢复资料（「不会覆盖或删除它」）→ 该键异常需人工/单独处理。
7. 【诊断副作用】win postcondition 探针带品牌化探针临时文件写 → 诊断不全是纯读。
8. 【闭环】R4 postcondition 校验跑两次（迁移后、fix_all 后）→ 第二次仍违规把完整违规清单拼进错误，错误文本体量随违规数增长。
9. 【恢复语义】已 committing 的 journal 记录不可被普通新阶段覆盖 → target 不符/同步未确认返回 `ROUTER_COMMIT_RECOVERY_REQUIRED` 且不自动启动 ChatGPT——恢复是显式动作。
10. 【执行器】release R7 改走 run_with_environment → 实现统一走 run_with_environment 形态，不照搬 pre 双入口分工。
11. 【写面】fix_\* 家族含 config/threads 表写、SQL COMMIT/ROLLBACK、条件 UPDATE、lsof 探测、注入提示词清理 → 全部有备份 + quiet-window 前置，但均为真实写操作。
12. 【平台分叉】诊断进程扫描 mac=`ps -ax` 子进程 / win=Toolhelp32 API 族纯 API（win 无 shell-out）→ 不能跨平台照搬。

### 3.7 账号（§2.8）

1. 【破坏性写】切号/恢复写 auth.json+registry：先快照、互斥、失败三条硬校验，链不能收窄 → capture 失败即中止切换（顺序强制）。
2. 【敏感数据】`ExportedAccount` 14 键含 auth → 不得当脱敏日志处理。
3. 【语义】`OAUTH_CLIENT_UPDATE_DEFERRED` 是延迟语义不是失败：凭据已持久化（disk_committed 先发）→ 不能当错误重试持久化。
4. 【值域漂移】PlanType 内部 ordinal 不是 IPC 整数合同；`unknown` 判别值 8→10 → 按位置/判别值消费双方都会错。
5. 【并发】`set_account_alias` 与 OAuth 刷新/持久化共用同一把文件锁 → 互相阻塞。
6. 【时序】三次采样核验不提前成功退出（仅 SSS/FSS 过）→ 100/250/500ms 是三次独立等待，不是 850ms 总时限。
7. 【平台限定】`load_runtime_display_snapshot` 是 win-only 注册（mac 无此命令）→ 事件 wire accountKey 为 None 时整键省略。
8. 【刷新语义】usage 保存失败可成 warning 而非撤销；可选额外刷新最多三轮 → 返回值不必等于最近广播值。
9. 【平台分叉】进程扫描 win=Toolhelp32 API 族 / mac=ps 子进程 → 切换/观测的进程面实现不能跨平台照搬。
10. 【失效结论】两项旧中间结论为误报不得用于实现：「取消 OAuth 启动后三次重试」（三次采样仍在）、「保存凭据校验新增」（1.2.6 既有）。

### 3.8 技能（§2.9）

1. 【删除保护】`remove_skill` 绝对路径 id = 外部条目，拒绝发生在锁、备份及删除之前（`External Skills are read-only`）。
2. 【平台分叉】`skills/list` forceReload：mac=true / win 两侧=false → 跨平台实现不能统一照抄。
3. 【归因】win 两侧已有 11 字段与外部条目只读删除保护 → 字段 8→11、绝对 id 拒绝只是 mac pre→release 变化面。
4. 【合同位置】warnings 在外层 envelope 不在 data 内 → 不能因页面 `.data.warnings` 就改 IPC 字段位置。
5. 【合并语义】enabled 冲突转 null 并入冲突集合后不再反复覆盖 → 后续扫描不能自愈该字段。
6. 【缓存新鲜度】bootstrap 缓存只在空 warnings 时更新 → 降级/部分失败会话缓存保持旧值，新鲜度不能从「列表刚加载过」推断。
7. 【权限】source 枚举的 `plugin` 是来源值 → 不得据此推导新增 Tauri plugin/capability 权限。
8. 【展示口径】前端 enabled 展示实测只有二态（false→disabled 徽标），第三态 null 无独立渲染分支 → DTO 三态属后端口径。

### 3.9 会话（§2.10）

1. 【破坏性写】四条清理命令全部有破坏性副作用（delete_sessions 删 sqlite 行与 rollout 文件、写 sqlite、删全局 tmp）→ tmp 删除失败仅记日志不冒错不补偿；后端无二次确认。
2. 【重写纪律】rollout 重写成功 rename 覆盖历史，失败回收临时文件 → `ReadStamp` 只是并发变更检测，不等于持久备份；missing_candidate 是 UPDATE 不是 DELETE。
3. 【DB 副作用】`cleanup_orphan_router_threads_strict` 含 `PRAGMA wal_checkpoint(TRUNCATE)` → WAL 截断是全局 DB 副作用。
4. 【竞态范式】「retry required」是报错要求调用方重试，不是自动重试 → 不能把错误吞掉当成功。
5. 【导出防护】扩展名匹配（.csv/.json）+ 符号链接防护 + 目录存在校验 → sessions 批量导出应沿用同级防护意识。
6. 【能力区分】`thread/fork`（复制，带 excludeTurns）与 `migrate_session_worktree`（搬迁）是两个能力 → release 前端只暴露 migrate 入口，fork 无 UI 无 IPC 面——做 fork UI 属新增能力。
7. 【读面边界】`load_session_messages` 有 2MiB/64KiB 预算与服务失败回退 warning → 不要把回退 warning 当空会话。
8. 【反直觉】`thread_settings_applied` 识别器未命中返回 -1（非错误抛出）→ 可见性重写写回规范化行会改写 rollout 文件内容。
9. 【口径】删除后的 UI 广播与持久化结果分开 → 后置刷新 warning ≠ 前置删除自动回滚。

### 3.10 诊断字段（§2.11）

1. 【定性】anthropic_trace 诊断字段扩展 ≠ 新增上游协议能力或计费口径。
2. 【序列化】`usage_omitted` 是饱和减法（samples−8）；`tail` 环形缓冲逻辑顺序 ≠ 物理数组顺序 → 按数组顺序读会错位。
3. 【可靠性】序列化失败路径可 panic，不返回部分成功 JSON → 诊断面不能当可靠遥测通道。
4. 【分类器】error_class 是小写化后的子串包含匹配不是精确码表 → 上游错误文案微调会落 `unclassified`。

### 3.11 启动期（§2.12）

1. 【结构】启动期超大闭包是上下文构造器不是命令分派体 → 别在里面找分派表，命令分派在 generate_handler 系。
2. 【panic 面】启动期 config/ACL 解析失败直接 panic 无降级 → 复刻启动逻辑时应换显式错误传播，否则行为是「启动即崩」。
3. 【端点】updater 端点 `http://localhost:3123/` 为参照构建的开发配置 → 不得当生产端点硬编码。

### 3.12 跨平台总则（§4）

1. 【跨平台外推】禁止跨平台外推：mac 的 Skills 字段 8→11/绝对 id 拒绝/forceReload=true 不能记到 win（win 既有）；win pre 的 pause_turn=completed 不能套 mac 的续传叙述；反之亦然。
2. 【口径】前端 bundle 字节级同哈希 ≠ 后端同构 → 后端进程扫描/自启/等待原语/注册面均有实质分叉。
3. 【应答分叉】`graceful_restart_for_update`：win 无 IPC 响应 / mac 应答 unit → 按任一侧假设写 awaiting 逻辑都会在另一侧挂起；且命令触发进程退出+重启，验收环境不可随意调。
4. 【注册缺口】`load_runtime_display_snapshot` 的 mac 缺席是真实缺口不是笔误 → 不得在 mac 上实现该命令调用。
5. 【进程判别】win 多值进程判别不可压 bool：名称/路径 fallback、退出后复查、提权一次、Restart Manager 边界缺一不可 → 省略任何一环都会在真实 win 上误判 DB 持有者。

### 3.13 规格未完全展开处（实现前需补充确认）

以下细节在源行为描述中未完全展开，实现到对应点时需先定向复核（见文末来源说明）：

- `clean_orphan_rollouts` 删除白名单匹配条件未逐行核（有 matching 语义，实现前须定向复核）。
- `codex_thread_visibility::model_fallback::restore_relay_model_threads` 正文级逻辑未完全展开（行为描述截断）。
- T3：`compute_session_depths` 上游计算未定位；`agentNickname`/`agentRole` 赋值规则正文未确认（字段面已确认，赋值规则止于 app-server 载荷透传级）。
- ACC-07：「剔除未来时间戳」行为未独立隔离（已查路径未命中，仅存结构级信息）。
- ACC-06：usage refresh 守护轮刷循环体未逐行展开。
- win HTTP 客户端栈（TLS/代理链）专项差异未覆盖，维持 Unknown。
- `official_headers` 的 8 项白名单头名集合未展开（长度序列提示存在但名单内容未定）——实现按语义「仅转发白名单内的头」自定义名单即可。
- 启动期超大闭包的区域语义为锚点+拓扑交叉确认口径，非逐指令级——实现按 §2.12 行为合同即可。

---

## 4. 平台差异要点

### 4.1 双平台零分叉面

DTO 字段集（ResetCredit 系/CodexSession 26/FixResult 系/CodexPaths 31）、错误面、引擎端点集（base/`/models`/`/responses`/`/responses/compact`/`/images/generations`/`/images/edits` + 目录修订头）、模型族表、`anthropic-version: 2023-06-01` 协议头、SSE 事件枚举、fix 23 键分派表。

### 4.2 双平台已证分叉面

1. **Skills 基线分叉（pre→release 维度最重要的一条）**：win pre **已有** 11 个 `InstalledSkillSummary` 字段与外部条目（`managed=false`）只读删除保护，且 win 两侧 `skills/list.forceReload=false`；mac 侧字段 8→11、绝对 id 删除前拒绝、`forceReload=true` 均为 mac release 侧变化。两边「现状」在 release 收敛，但变更归因完全不同——mac 记为新增，win 记为既有。
2. **SSE `pause_turn` 旧行为分叉**：win pre 对 `pause_turn` 的处理是 `completed`；mac 旧链是自动续传。release 两侧统一为 failed/invalid_response（成功白名单 `end_turn/tool_use/stop_sequence`）。不得把 mac 的续传叙述套到 win pre，也不得反向套用。
3. **进程枚举架构差异**：mac = `ps -ax -o etime=,comm=` 子进程 shell-out；win = Toolhelp32 API 族纯 API 枚举（`CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS)` + `Process32FirstW/NextW`；`tasklist` 与 `ps` 字面量在 win 侧不存在）。
4. **自启面**：mac 有 `~/Library/LaunchAgents/dev.{PRODUCT}.auto-switch.plist`；win 自有自启面不在本指南范围（不判缺席）。
5. **命名差异**：`system_volume`（mac）vs `system_volume_windows`（win）——voice 邻接面，范围外，仅登记。
6. **字面量缺席（待核）**：`useStateDbOnly`（`codex_app_server::list_thread_scope` payload 字段）与 `authinfo`（mac `account_observer` 观测状态字面量）在 win 两侧 0 命中；DTO/错误/端点已确认零分叉，不阻塞合同——实现按 mac 侧字面量为准。
7. **`load_runtime_display_snapshot` 注册分叉**：win-only 注册（mac 无此命令）。
8. **`graceful_restart_for_update` 应答分叉**：后端双平台均在，但 win 无 IPC 响应、mac 应答 unit；且语义为进程退出+重启（破坏性）。
9. **OAuth 启动后核验链双平台独立**：算法同构（每次检查前同步等待 100/250/500ms、固定三次、仅 `SSS`/`FSS` 通过、失败清零连续成功计数不重置重试索引、最终失败保留最后一次错误），实现原语不同——win 用 waitable timer/`WaitForSingleObject`、失败回落 `Sleep`（850ms 只是名义等待和，不是总切换时限）；两条 82 字节错误全文双平台逐字节相同。
10. **catalog DB 持有者判别**：共同语义 = 枚举两类 DB、canonicalize 去重验证、按 ChatGPT 主进程 PID 与 DB 持有者筛选、多持有/归属歧义明确报错（不取首个存在路径）；实现分叉——mac 持有者谓词，win 走原生 Restart Manager 边界、名称/路径 fallback、退出后复查、提权一次，多值进程判别不得压成 bool。
11. **前端零分叉**：双平台 JS 资产字节级同哈希（同一前端构建），前端命令面即全平台命令面；唯一平台差异为 index.html。
12. **注册计数不可移植**：mac 侧的 112 注册/102 实际观察调用是 mac 独立对账结果；win 侧仅证「活动命令标签匹配、缺 handler 0」，不得把 112/102 移植成 win 结果。

### 4.3 平台差异陷阱

1. 禁止跨平台外推：mac 的 Skills 变化不能记到 win 头上（win pre 已有）；win pre 的 pause_turn=completed 不能套 mac 的续传叙述；反之亦然。
2. 前端同哈希 ≠ 后端同构：bundle 字节一致只覆盖前端；后端进程扫描/自启/等待原语/注册面均有实质分叉。
3. `graceful_restart_for_update` 双平台应答形态不同：按任一侧假设写 awaiting 逻辑都会在另一侧挂起；且命令本身触发进程退出+重启，验收环境不可随意调。
4. `load_runtime_display_snapshot` 的 mac 缺席是真缺口不是笔误：不得按 win 合同在 mac 上实现该命令调用。
5. win 侧字面量 0 命中 ≠ 功能缺席：`useStateDbOnly`/`authinfo` 维持「待核」而非「删除」——实现按 mac 侧为准。
6. win 多值进程判别不可压 bool：名称/路径 fallback、退出后复查、提权一次、Restart Manager 边界都是合同的一部分。

---

## 5. 验收标准

每点 = 应实现的行为 + 验收方法。实现完成后逐项核对；构造输入 → 观察输出与文案。

| 验收项 | 应实现的行为 | 验收方法 |
|---|---|---|
| PROTO-01a | 终态映射白名单：end_turn/tool_use/stop_sequence→completed，max_tokens/context_window→incomplete | 构造各 stop_reason 的 SSE 流，观察 status 与 reason 逐项对应 |
| PROTO-01b | 缺失/未知 stop_reason 与 pause_turn 汇合同一 failed 出口（invalid_response） | 构造 pause_turn/未知/缺失流，观察均报 failed + "Missing or unsupported Anthropic terminal reason" |
| PROTO-02 | 三分支增量 UTF-8 解码 + EOF 残片双路径 invalid_utf8 | 跨 chunk 撕裂多字节字符→正常拼接；确定非法字节→"Invalid Anthropic SSE UTF-8"；EOF 残留→"Incomplete Anthropic SSE UTF-8" |
| PROTO-03 | EOF 双旗标门控 → stream_truncated；聚合回退边界严格 | EOF 无 message_stop→"Upstream Anthropic stream ended before message_stop"+stream_truncated；response 未开始+完整 JSON 文档→聚合回放成功 |
| PROTO-04 | message_start 唯一/对象校验 + content 顺序守卫 + 终态幂等 | 重复 message_start/非对象 message/stop_reason 后 content→各对应 protocol_failure 文案 |
| PROTO-05 | block index 非负整数/查重/delta 对不上区块三类校验 | 缺 index/重复 index/delta 未命中→逐条错误文案；未知 index 的 block_stop→静默空返回 |
| PROTO-06 | block_stop 只标记；message_stop 全量扫未关闭区块 → failed | block_stop 不发帧；open block 到 message_stop→"Anthropic message ended with an open content block" |
| PROTO-07 | 工具 id/name 非空 + partial_json 必须解析为 JSON 对象 | 空 id/name 或非法 partial_json→"Invalid Anthropic tool arguments"；合法→arguments_done 事件 |
| PROTO-08 | thinking signature/redacted data 非空 + ccswitch 信封组装/解析双向 | 空 signature→"Anthropic thinking block has no signature"；合法→前缀+base64(JSON(block)) 信封可回放 |
| PROTO-09 | aggregate 形状/终态/区块逐项校验 + 回放复用同一流式状态机 | 非流式喂 pause_turn/坏形状→"Invalid Anthropic message shape or terminal reason"；合法消息→与流式同序事件 |
| PROTO-10 | 旧签名/compaction 双入口 HTTP 前拒绝 | 带 `<历史品牌>-anthropic-thinking-v1:` 记录→中文提示新建会话；compaction 输入→400 router.native_compaction_required |
| PROTO-11 | allowed_tools 显式拒绝不放宽 | tool_choice/type=="allowed_tools"→82 字节错误原文 |
| PROTO-12 | json_schema → output_config.format 装配 + 能力门 + 三类显式错误 | 合法 json_schema→output_config.format 写入；不支持模型/未知 format/坏 text 配置→三类错误原文 |
| PROTO-13 | oneOf/anyOf/allOf 发送前归一化 + 递归锚拒绝 | 含组合 schema 的工具→归一化写回；含无作用域 $recursiveRef→装配失败错误原文 |
| PROTO-14 | cannot disable thinking + 独立标志位 + 三项校验分离 | effort off + 不可关模型→81 字节错误；forced tool_choice + 自适应模型→80 字节错误 |
| PROTO-15 | 保序/动态 replay/namespace 先行/版本混用四项，校验只读不改写历史 | 混版本/委托过旧/坏载体→各错误原文且历史不变；additional_tools 动态声明→白名单校验 |
| PROTO-17 | [REDACTED] 精确片段替换 + 递归遍历 + 413 归属改写 + error-kind 映射表 | 传 fragment→错误 JSON 全字符串替换；413→文案改写但状态码按映射表 |
| PROTO-18 | 净化守卫四值 + tools/additional_tools/allowed_tools/tool_choice 净化面 | 守卫命中→web_search 类工具被滤；守卫不命中→原样透传 |
| PROTO-22 | inline-tools-2026-09-15 字面量+注入/校验+触发门+调用链 | defer_loading/tool_addition 触发→注入或校验；非法 token→400 invalid beta 无重试 |
| PROTO-23 | effort 措辞识别进 trace error_class；「去 beta 重试」不存在 | effort 拒绝错误→error_class=effort；invalid beta→直接 400，无重试回边 |
| PROTO-24 | effort "ultra" 以 "ultra-" 标签参与档位匹配 | effort=ultra 请求→档位按 ultra- 标签匹配成功/回退 |
| PROTO-27 | 转发头治理名单逐项丢弃 | extraHeaders 携带名单内头（cookie/authorization/x-forwarded-* 等）→不并入请求 |
| RT-01 | 官方目录运行时获取/validate/revision/双通道（直连 + app-server） | 目录接口返回→5 字段 DTO；非法 slug/自有 relay 前缀 token→拒收 |
| RT-04 | 模型发现 30s 墙钟零重试 + 超时串 + 旧终态移除 | 慢上游→30 秒后 "model discovery exceeded its 30 second total budget"，中途失败不重试 |
| RT-05 | ProbeStream 三协议流终态分类 + embedding error/data 校验 | 零输出流→no model output 文案；content_filter/refusal→分类终态文案；embedding 坏数据→对应文案 |
| RT-06 | join_upstream_url_with_query + validate_endpoint_path + 四处调用面 | endpoint 含 ?/#/./../→路径错误原文；query 键冲突→冲突错误原文 |
| RT-08 | validated_mcp_config：候选写改受管块标记序列即拒且不写盘 | MCP 编辑改变受管标记→58 字节中文文案且配置未变 |
| RT-09 | journal committing 相位 + ROUTER_COMMIT_* 恢复态合同 | committing 中断→恢复记录保留 + RECOVERY_REQUIRED + 不自动启动 ChatGPT |
| RT-10 | no-account 提交边界门六/七条拒绝逐条件 | 逐条构造（坏 URL/非 loopback/坏 config/contract mismatch/目录不匹配）→对应前缀错误 |
| RT-11 | fix 键 24→23：native_off_invalid_openai_thread_models 修复臂删除降级 CHECK-only | 诊断报该键但 fix_issue 无修复臂；fix 分派恰 23 键 |
| RT-12 | router_recovery_record CHECK-only：read→kind→ensure_recovery_records_allowed 三级只读链 | 恢复记录可读→ok_item；链上任一级失败→错误且全程无写 |
| RT-13 | 受保护进程 DB 持有检测（Restart Manager）+ 静默关窗循环 + 阻断链 | win 上进程占用 DB→11 轮静默关窗后 CODEX_DB_HELD_BY_PROTECTED_PROCESS 模板报错并中止转场 |
| RT-14 | provider 六 handler 纯 dispatch，preflight 归位 router_transition 管线内部 | 六命令调用无 preflight 副作用；preflight 仅在 transition 链上发生 |
| R4 | postcondition→诊断→修复→重试闭环（双 postcondition 夹修复，attempt 计数贯穿） | 构造 postcondition 失败→诊断/修复/重试直至 clean；仍失败→违规清单进错误 |
| R7 | set_codex_router_no_account_mode 经 run_with_environment 全链 | 切换 no-account 模式→gate/snapshot/journal/verify/restore/persist 全链生效 |
| R8 | set_codex_router_enabled 全链保留（relaunch/rollback/format_invariant_violations） | 路由开关→完整验证/回滚链；失败→违规清单格式化 |
| E7 | 第三方段隔离：五函数族（mac）/三函数面（win）等价 | config 含 cc_switch/codex-switch 标记→诊断项 config_third_party；修复→第三方段与受管块隔离 |
| E12 | quota/proxy_status/get_relay_active 三命令实现面 + usage refresh 系 | 三命令返回结构与锁语义符合 §2.6；刷新纪律（warning 不回滚/三轮/快照防旧覆新）生效 |
| ACC-01 | PlanType 值域 11（+go/pro500）、unknown 判别值 10、徽标映射表与套餐顺序表 | 11 值域解析；徽标/顺序表渲染与 §2.8 常量一致 |
| ACC-02 | Go/Pro500 名称/价格表（pro500="$500"，Go 无 price 键） | 页面渲染名称价格与 $m 表一致 |
| ACC-03 | set_account_alias：normalize→共用 OAuth 文件锁→registry 偏移写→快照重建 | 别名编辑生效；与 OAuth 刷新互斥；未命中账号→"Account is no longer available" |
| ACC-05 | 重置卡历史 cursor 分页：events/next_cursor/granted 校验 + validate_cursor | 非法事件/游标→49/35 字节错误原文；合法→分页往返 |
| ACC-06 | 刷新全部账号开关：设置存储读写 + watcher 开关行为 | 开→刷全部账号；关→只刷活跃账号；IPC 读写回显 |
| ACC-07 | quota range 三档切窗（today/week/month，儒略历修正）+ 非法 range 报错原文 | range=非法值→"Quota history range must be today, week, or month"；切窗边界正确 |
| ACC-09 | OAUTH_COMMIT_NOT_STARTED / OAUTH_CLIENT_UPDATE_DEFERRED 两分支 + 写入顺序 | 未开始 commit→错误变体；登录态未确认→deferred 非致命 + disk_committed 先发 |
| ACC-12 | 三次采样核验（100/250/500ms，仅 SSS/FSS 过）+ 两条 82 字节错误串 | 构造 FSS/SSF→FSS 过 SSF 不过；最终失败→SWITCH_LIVE_VERIFY_FAILED 或 82 字节错误原文 |
| SK1 | InstalledSkillSummary 11 键 + source 七值枚举 + enabled 三态字节级写规则 | DTO 序列化 11 键；enabled 键恒在（null/false/true） |
| SK2 | 原生库存合并：30s/10s 时限、分页校验、canonical 路径合并、降级告警两级 | 原生不可用→managed 列表成功 + skills_native_unavailable；partial→只加告警 |
| SK3 | remove_skill 首分支即绝对路径只读拒绝，先于锁/备份/删除 | 绝对路径 id→"External Skills are read-only"；managed id→备份+删除 |
| SK4 | bootstrap 缓存仅 warnings 为空时更新 | 带 warnings 的列表→缓存不变；空 warnings→缓存更新 |
| SK5 | staleTime 60000 + refetchOnMount + 手动刷新按钮 + isFetching 防重入 | 页面行为与常量一致 |
| SK6 | 来源标签/只读徽标/warnings 列表/删除门控四子项 | managed=false→readOnly 徽标+删除隐藏；warnings 顶部渲染 |
| T1 | 线程收敛/可见性重写三函数链 + 重写函数族行为 | rollout 写回规范化行；竞态→retry required 文案族；历史保留语义 |
| T2 | 七条会话命令全实现 + 前端七入口 | 体检只读；四清理有确认对话框与 toast；导出 jsonl/md；消息加载 |
| T3 | CodexSession 四字段（parentSessionId/depth/agentNickname/agentRole）序列化/反序列化双向 | 字段在 DTO 中往返；CODEX_INDEX_UNAVAILABLE 错误码 |
| W1 | fork_thread_to_cwd 后端全链（cwd 校验 + 返回一致性比对 + 120s 超时） | cwd 不一致→中文错误模板；缺新线程 ID→49 字节错误 |
| anthropic_trace | 诊断 DTO 字段扩展 + error_class 子串分类器 | trace 输出含 19 字段；错误按子串归类到 §2.11 值域 |
