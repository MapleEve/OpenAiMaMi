# test_relay_draft_stream — Pseudocode (Windows x64)

## 主流程（test_relay_draft_stream_owner_sys @ 0x14094F2E0）

```rust
// async fn test_relay_draft_stream(
//   manager: String,
//   input: RelayDraftTestInput,
//   on_event: impl Fn(RelayStreamEvent)
// )
//
// 状态机: a1+12848 = 外层状态, a1+12832/12816/12808 = 内层嵌套状态

async fn test_relay_draft_stream_owner_sys(state: *mut CoroutineFrame) {
    // Phase 0: 输入反序列化
    let input: RelayDraftTestInput = relay_draft_test_deserialize_input_sys(raw_input);
    // → relay_draft_test_input_visitor_sys (0x1408943A0): 解析8字段

    // Phase 1: Relay 状态查找 + Keychain 检索
    let relay_state = scan_relay_provider_vec(manager, stride=232B);
    let api_key = relay_keychain_lookup_for_quota_sys(0x1402EE7C0)(
        relay_state,    // secrets.json 路径
        provider_id     // → SHA-256 key 派生
    );

    // Phase 2: 上游请求构建
    let request = relay_draft_stream_http_request_builder_sys(0x1405BF9E0)(
        base_url = input.baseUrl,           // strip /v1 suffix if present
        path     = if is_messages_api(input.wireApi) {
                       "/v1/messages"       // 0x1412fad3c
                   } else {
                       "/v1/chat/completions" // 0x1412fadbd
                   },
        method   = POST,
        headers  = {
            "Authorization": format!("Bearer {}", api_key),  // 0x1412dd940
            // input.extraHeaders merged (sensitive keys filtered)
        },
        body = json!({
            "messages":       ...,           // 0x1412c6e00+
            "system":         ...,
            "stream":         true,
            "temperature":    ...,
            "max_tokens":     ...,
            "stream_options": ...
        })
    );

    // Phase 3: SSE 流执行
    // relay_draft_stream_sse_executor_sys (0x1408BDE90, 11908B)
    stream_exec(request, |chunk| {
        // 模型类型检查: relay_model_type_classifier_sys (0x1405C4350)
        // 检测 "embedding"/"embed"/"/v1" → 拒绝 embedding 请求进入 draft stream
        if is_embedding_model(input.model) { return Err(...); }

        // 逐 chunk 构建事件: relay_event_payload_builder_sys (0x140229AF0)
        let event = RelayStreamEvent {
            schemaVersion: SCHEMA_VERSION,
            success:       chunk.ok,
            code:          chunk.code,
            message:       chunk.message,
            warnings:      relay_event_field_warnings_sys(0x1402494C0)(chunk),  // "warnings"
            data:          relay_event_field_data_sys(0x1402495E0)(chunk),       // "data"
        };
        on_event(event);  // → 前端 SSE 回调
    }).await;

    // Phase 4: 清理
    relay_draft_test_input_drop_sys(0x1401D6220)(input);
    // 释放: 5个 String + HashMap<String,String> + extraHeaders
}
```

## RelayDraftTestInput Visitor（relay_draft_test_input_visitor_sys @ 0x1408943A0）

```rust
// serde Visitor for "struct RelayDraftTestInput with 8 elements" (0x1412da1ef)
match field_ordinal {
    0 => self.provider_id = Some(de.deserialize_string()?),   // "providerId"
    1 => self.ide         = Some(RelayIde::deserialize(de)?), // "ide" → sub_140418A10
    2 => self.name        = Some(de.deserialize_option()?),   // "name" (Option<String>)
    3 => self.base_url    = Some(de.deserialize_string()?),   // "baseUrl"
    4 => self.api_key     = Some(de.deserialize_string()?),   // "apiKey"
    5 => self.model       = Some(de.deserialize_string()?),   // "model"
    6 => self.wire_api    = Some(WireApi::deserialize(de)?),  // "wireApi" → sub_140521350
    7 => self.extra_hdr   = Some(de.deserialize_map()?),      // "extraHeaders"
    8 => { /* struct finalization */ }
    _ => { /* unknown field, skip */ }
}
```

## URL 规范化（sub_1405C2F20 / sub_1405C4470）

```rust
// 去除 baseUrl 末尾 UTF-8 '/' 字符后检测并移除 "/v1" 后缀
fn normalize_base_url(url: &str) -> &str {
    let url = url.trim_end_matches('/');
    if url.ends_with("/v1") {
        &url[..url.len()-3]
    } else {
        url
    }
}
// 完整上游 URL = normalize_base_url(input.baseUrl) + path
```

## 异步状态机帧偏移（a1 = coroutine frame ptr）

| 偏移 | 含义 |
|------|------|
| `a1+12848` | 外层主状态 (u32, poll phases) |
| `a1+12832` | HTTP stream 状态 |
| `a1+12816` | SSE parse 状态 |
| `a1+12808` | chunk 处理状态 |
| `a1+456/464` | String (drop @ sub_140921810) |
| `a1+480` | tag byte (6=Some) |
| `a1+512` | Arc refcount (InterlockedDecrement64) |
