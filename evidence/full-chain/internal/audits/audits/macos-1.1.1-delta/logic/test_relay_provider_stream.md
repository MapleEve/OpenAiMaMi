# test_relay_provider_stream / test_relay_draft_stream — logic 文档

**async_body_va**: 0x10009d110 (shared)
**size**: 0xbb0 (2992B)
**module**: codexmate_lib::core::relay::health_check
**session**: wf-aimami111-delta-20260617-repair
**gate**: strictImplementationUse_candidate

---

## ICF 说明

两命令共享 `test_provider_staged` async 状态机（VA 0x10009d110）。各自有独立 IPC 注册和 drop_in_place shim，但 async body 被 ICF 合并。消费侧实现时需区分 DTO。

## 请求构建（build_test_request @0x100764800）

```
POST body (BTreeMap):
  model: <model_string>
  messages: [{role:"user", content:<model>}]
  stream: true
  stream_options: {include_usage: true}   (streaming only)
  max_completion_tokens: 16   (o1/o3/o4 models)
  max_tokens: 50              (claude/claude-input)
  max_tokens: 3000            (gemini)
  max_tokens: 16              (default)
```

## endpoint 路由

```
/v1/chat/completions   默认
/v1/embeddings         当 classify_openai_chat_endpoint 检测到 "embed"/"m3e"/"bge-"
/v1/responses          当 wireApi="responses"（resolve_responses_urls）
```

## 流式终止判断（is_stream_terminal_event @0x1007677a0）

```
OpenAI chat (a2=0):   type=="message_stop" (12B)
Responses API (a2=1): type in ["response.failed","response.incomplete","response.done"]
Anthropic (a2=2):     通过 extract_stream_text_delta 判断
```

## 文本 delta 提取（extract_stream_text_delta @0x1007678a0）

```
OpenAI chat:    choices[0].delta.content
Responses API:  type "response.reasoning_summary_text.delta" → item.text
                type "response.content_part.delta" → item.text
Anthropic:      type "content_block_delta" → delta.text
```

## headers

```
OpenAI (build_openai_headers @0x1007662e0):
  streaming: Accept:text/event-stream + Cache-Control:no-cache
  originator==1: x-originator:codex_cli_rs + User-Agent:codex_cli_rs/0.80.0 AiMaMi

Anthropic (build_anthropic_headers @0x100766ca0):
  Content-Type: application/json
  anthropic-version: 2023-06-01
  streaming: Accept:text/event-stream + Cache-Control:no-cache
```
