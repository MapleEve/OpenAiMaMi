# test_relay_draft_stream — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令（替代 test_relay_draft）
**gate**: consumerStartReady（dim1-dim5 全 PASS）
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC 合约

```
command: "test_relay_draft_stream"
params:
  manager: String
  input: RelayDraftTestInput
  onEvent: Handler (stream callback)
response: void (stream via onEvent callbacks)
```

## RelayDraftTestInput（8 字段）

relay_draft_test_input_visitor_sys 反序列化，8 switch cases 0-7：

| 字段名 | string VA |
|---|---|
| providerId | 0x1412f89eb |
| ide | 0x1412f97e6 |
| name | 0x1412f9162 |
| baseUrl | 0x1412f97e9 |
| apiKey | 0x1412f987a |
| model | 0x1412f8a03 |
| wireApi | 0x1412f97fc |
| extraHeaders | 0x1412f980e |

## 调用链

```
owner: test_relay_draft_stream_owner_sys @ 0x14094F2E0 (4621B)
  → relay_draft_stream_sse_executor_sys @ 0x1408BDE90
    → relay_model_type_classifier_sys (checks embedding/embed/v1)
    → relay_keychain_lookup_for_quota_sys (reads secrets.json + SHA-256)
    → relay_event_payload_builder_sys (builds 6-field event JSON)
    → HTTP POST to:
        /v1/chat/completions @ 0x1412fadbd  OR
        /v1/messages @ 0x1412fad3c
      Authorization:Bearer injected from 0x1412dd940
    → text/event-stream response @ 0x1412dd970
```

## 副作用

1. 读 secrets.json
2. 扫 RelayProvider state Vec（stride=232B）
3. HTTP POST 流式请求到上游 relay
4. emit onEvent 回调（per SSE chunk，6字段 event JSON）

## WIN 平台特有

- InterlockedCompareExchange8 + WakeByAddressSingle（atomic ops，vs mac parking_lot）
- USERNAME env var（vs USER on mac）
- PE x64 stripped binary

## 与 test_relay_draft（1.0.9 删除）的区别

| 维度 | test_relay_draft (1.0.9) | test_relay_draft_stream (1.1.1) |
|---|---|---|
| 响应模式 | 请求-响应 | SSE 流式（onEvent Handler） |
| 参数 | manager + input | manager + input + onEvent |
| input 字段 | 未完整记录 | 8 字段全确认 |
