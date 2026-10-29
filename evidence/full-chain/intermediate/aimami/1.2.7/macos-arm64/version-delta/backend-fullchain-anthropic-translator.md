# backend-fullchain-anthropic-translator.md — AiMaMi 1.2.7 Anthropic 协议适配（V1.0）深 diff

- session: `<审计会话>`（macos-arm64）
- 后端面: `core::relay::translator::openai_chat_to_anthropic_request` 重写（bb 202→508，sz 6945→13211）；新流类型 `AnthropicDirectToResponsesStream`（14 fns）；新子模块 `anthropic_trace`(37)/`anthropic_reasoning`(12)/`anthropic_continuation`(12)/`anthropic_history`(7)/`translator::anthropic_search`(12)/`anthropic_tools`(21)/`chat_content`(2)；translator 旧 OpenAI-only 路径 −14
- win: `translator/{anthropic_search,anthropic_tools,chat_content}.rs` 新 src 路径确认（census 级）

---

## 1. 请求方向（Responses/OpenAI Chat → Anthropic）

### 1.1 `translator::openai_chat_to_anthropic_request`（重写；30 callees，伪代码 80239 字符）

- 协议映射（字面量级）: `messages` / `max_tokens` / `temperature` / `top_p` / `stop_sequences` / `stream` / `parallel_tool_calls` / `tool_choice`；`max_completion_tokens` → `max_tokens` 换算；工具 `description`/`parameters`/`strict`/`object`（JSON schema 透传）；tool_calls → `tool_use`/`tool_result`（`tool_use_id`）；`toolu_` id 前缀；错误枚举 `unknown`/`content_filter`；系统注入 `"You have a web_search tool available.\n"`；reasoning `adaptive`/`required`/`rejected`/`msg_stop`/`markdown`。
- **dim3**: 请求装配叶 = JSON 结构变换（无 IO）；被 `responses_to_anthropic_request_with_context`（86 callees，21.2 万字符）与 `responses_to_chat_request`（57 callees，25.5 万字符）家族共用。
- **红线32**: bb 202→508 = **CHANGED**（Anthropic 请求转译重写，1.2.6 的 202bb 版本为旧 OpenAI-only 路径重构起点）。

### 1.2 `responses_to_anthropic_request_with_context`（大装配，新增逻辑面）

- 工具加载: `defer_loading`（延迟工具加载）、`Additional tools must be an array`、`Unsupported namespaced tool type`（gemini/claude 命名空间拒绝）、`Dynamic Anthropic additions support client tools only`、**`This Anthropic model does not support mid-conversation tool additions`**（模型能力门）、`Conflicting discovered tool definitions; signed history was not modified`（签名历史保护——冲突时不改历史）。
- reasoning: `encrypted_content` / `/reasoning/summary`；`output_config`；`/tool_choice/type` 校验。

## 2. 流方向（Anthropic SSE → Responses 事件流）: `AnthropicDirectToResponsesStream`（新类型，14 fns）

| 方法 | 要点 |
|---|---|
| `feed_line`（bb 25→107） | SSE 行入口；`message_start`/`content_block_start`/`content_block_delta`/`content_block_stop`/`message_delta`/`message_stop` 事件分派；`Invalid JSON in Anthropic SSE data`；`Upstream Anthropic stream ended before message_stop`（截断检测 `stream_truncated`）；web_search_call / `anthropic_search_incomplete` / `Search result has no matching call` |
| `handle_event`（82 callees，26.9 万字符） | 事件状态机；`Anthropic upstream emitted an error`；`Conflicting Anthropic stop_reason`；`Chat content or conflicting finish_reason arrived after completion`；`Invalid Anthropic server message state`；usage/finish_reason 汇聚 |
| `close_anthropic_block` | 映射 `response.output_text.done` / `response.content_part.done` / `response.reasoning_summary_text.done` / `redacted_thinking` / annotation added |
| `close_anthropic_tool_block` | `response.function_call_arguments.done` / `response.custom_tool_call_input.delta/.done` / `tool_search_call` / namespace |
| `fail_with_status` | `stream_truncated` / `http_status` / `response.failed` |
| `emit_terminal_items` / `ensure_created` / `responses_event` | `response.output_item.done`（`encrypted_content`）、`response.created`/`in_progress`（`created_at`）、`sequence_number` |

- **dim4**: 输出=Responses 协议事件序列（供 Codex 引擎消费）；错误 envelope=`upstream_protocol_error` / `stream_truncated` / `anthropic_search_incomplete`；幂等/状态纪律=完成后拒收内容（conflict 字面量）。

## 3. 服务器工具（web_search）与续传

### 3.1 `translator::anthropic_search`（新文件）

- `tool`（12 callees）：server 工具定义 `web_search_20250305`；**`external_web_access=false` 时拒绝**（`Anthropic web search cannot honor external_web_access=false`）；filters `allowed_domains` / `user_location` 校验（`Invalid search allowed_domains` / `Unsupported search location`）。
- `validate_continuation_history` / `replay_history`：服务器续传历史校验——`Anthropic server history does not match its visible message` / `Pending Anthropic search requires matching client tool results only and unchanged search tools` / `Incomplete Anthropic server tool history`。
- `pending_in_messages` / `completed_item`（`web_search_call` failed/completed）/ `outcome`（`Anthropic web search returned an invalid result`）/ `safe_url`（https 强制）/ `history_item`（`server_message`）。

### 3.2 `anthropic_continuation`（新子模块）

- `Exchange::resume`（27 callees）：**`Anthropic server continuation limit reached`** / `Anthropic paused without a supported server search tool` / `Invalid Anthropic paused content`；上游错误映射 `invalid_request_error` / `authentication_error` / `not_found_error` / `request_too_large` / `upstream_http_error` / `upstream_connection_error`；`Exchange::{stream, with_trace}` / `Failure::network` / `enabled`。

### 3.3 `anthropic_tools`（新文件，21 fns）

- `AnthropicToolMap::{register, wire_name, exposed_name, merge, restore, kind, stamp_history_item}`：工具身份映射（`Tool name is empty` / `Conflicting tool identities` / `Conflicting Anthropic tool types for one native identity`）；`dedupe_anthropic_tools_by_name`；`validate_tool_choice` / `validate_translated_tool_choice`（`/tool_choice/type`）；`validate_definitions`（冲突→签名历史不动）；`append_grammar_description`；`responses_tools_to_anthropic_tools_with_options`（`defer_loading`、gemini/claude 命名空间拒绝）；`search_result`（`No matching tools found.`）。

## 4. reasoning / history / trace

- `anthropic_reasoning`（12 fns）: `codex_effort_to_anthropic`（effort→thinking 档；`ultra-` 档名）、`effort_to_thinking_budget`（`budget_tokens`）、`model_matches_family`（**红线32: bb 20→63**，模型族匹配重写）、`normalize_model_name`、`model_profile`、`is_sonnet_5_5`、`supports_mid_conversation_system`、`output_token_limit`、`requires_append_only_tool_loading`、`supports_structured_output`、`reasoning_explicitly_disabled`、`apply_anthropic_reasoning_policy`（`between_tools` / `output_config` / `budget_tokens`）。
- `anthropic_history`（7 fns）: `normalize_messages`（32 callees，6 万字符——tool_use/tool_result 配对 `tool_use_id`、`id`）、`push_tool_result_block`、`complete_tool_pair`、`has_complete_trailing_tool_results`、`trailing_turn_supports_thinking`、`rectify_invalid_thinking_signature`（无效 thinking 签名纠正）。
- `anthropic_trace`（新子模块，traceability）: `Trace::{new,event,output_item,attempt,finish,failed,headers,json_usage,response_text}` + `request_shape`（请求形态指纹）/ `summary`（`error_class` `error_kind` `delta_counts` `first_byte_ms` `last_byte_ms` `max_gap_ms` `block_starts` `block_stops` `usage_samples` `usage_omitted`）/ `record_usage`（token 字段含 `cache_read_input_tokens`/`cache_creation_input_tokens`/`cached_input_tokens` 双协议名）/ `fingerprint` / `error_class`（`unclosed` `missing_message_stop` `open_block` `missing_stop_reason` `encrypted_state` `assistant_prefill` `objectinvalid`）。
- `chat_content::{content, tool_output}`: 内容块与工具输出转换（`image_url`、`content_items`）。

## 5. dim3 实现叶汇总

请求/响应变换为纯 JSON 面（无 IO）；IO 叶在 relay HTTP 客户端（1.2.6 既有 reqwest 面 + 1.2.7 `relay/http_client` +3）与 SSE 流读取；`anthropic_trace` 侧通道为日志/埋点写（provider_tag/conversation_tag）。**无密钥明文写入日志的字面量证据**（header 治理走 official_headers 白名单）。

## 6. 平台门与 Unknown

- mac: 全部 live IDA 证据。win: 3 个新文件路径 + Anthropic 直连面在 win 侧的行为差异（如 header 治理/HTTP 客户端栈差异）未逆（下轮 win 深恢复）。
- Unknown: `handle_event` 状态机全转移表（26.9 万字符伪代码，本轮以事件字面量+分派面闭合到行为合同级，未逐转移枚举）；`model_profile` 的模型档位常量表；`openai_chat_to_anthropic_request` 与 1.2.6 旧版的逐行对照（1.2.6 IDB 不可达）。V1.0 命名对应前端/上游协议版本号声明，未在本轮定位版本协商字段（若消费侧需要 V1 协商细节，须补 `anthropic_trace`/握手面定向逆向）。
