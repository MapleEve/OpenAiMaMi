# test_relay_draft_stream — Interface / DTO (Windows x64)

## IPC 合同

```
invoke("test_relay_draft_stream", {
  manager: string,             // relay manager identifier
  input: RelayDraftTestInput,  // 8字段结构体 (see below)
  onEvent: EventHandler        // SSE chunk callback
})
→ text/event-stream (0x1412dd970)
```

## RelayDraftTestInput（8字段 serde struct）

字符串 `"struct RelayDraftTestInput with 8 elements"` 位于 `0x1412da1ef`。
反序列化器：`relay_draft_test_input_visitor_sys` @ `0x1408943A0`，case switch 直接映射字段序号。

| 序号 | 字段名 | 类型 | 字符串VA | 长度 | 备注 |
|------|--------|------|----------|------|------|
| 0 | `providerId` | `String` | `0x1412f89eb` | 10B | relay provider ID |
| 1 | `ide` | `RelayIde` (enum) | `0x1412f97e6` | 3B | IDE 标识，`sub_140418A10` 解析 |
| 2 | `name` | `Option<String>` | `0x1412f9162` | 4B | 可选名称 |
| 3 | `baseUrl` | `String` | `0x1412f97e9` | 7B | 上游 relay URL |
| 4 | `apiKey` | `String` | `0x1412f987a` | 6B | API key（明文传入，由 keychain 覆盖） |
| 5 | `model` | `String` | `0x1412f8a03` | 5B | 模型名称 |
| 6 | `wireApi` | `WireApi` (enum) | `0x1412f97fc` | 7B | wire protocol（`sub_140521350` 解析） |
| 7 | `extraHeaders` | `Map<String,String>` | `0x1412f980e` | 12B | 额外 HTTP 头 |

帧布局：反序列化器在 frame offsets +32 至 +256 处理字段，步长 32B，总结构体约 192B。

## 上游 HTTP 请求

| 属性 | 值 | 证据 VA |
|------|----|---------|
| Method | POST | `0x1413e2670` (HTTP method table) |
| Path (default) | `/v1/chat/completions` | `0x1412fadbd` |
| Path (messages) | `/v1/messages` | `0x1412fad3c` |
| Auth header | `Authorization: Bearer <key>` | `0x1412dd940` |
| Body fields | `messages`, `system`, `stream`, `temperature`, `max_tokens`, `stream_options` | `0x1412c6e00+` |
| Content-Type response | `text/event-stream` | `0x1412dd970` |

## 事件 Payload 结构（onEvent 回调）

```json
{
  "schemaVersion": <uint>,
  "success": <bool>,
  "code": <int>,
  "message": <string>,
  "warnings": <string | null>,   // relay_event_field_warnings_sys @ 0x1402494C0 → "warnings" (0x1412c06da)
  "data": <object | null>        // relay_event_field_data_sys @ 0x1402495E0 → "data" (0x1412c06e2)
}
```

## 安全说明

- `apiKey` 字段作为输入传入，但实际 key 由 `relay_keychain_lookup_for_quota_sys` 从 `secrets.json` 派生（SHA-256），不直接使用调用方传入的值
- `extraHeaders` 中的 `proxy-authorization`、`authorization`、`cookie`、`set-cookie` 等敏感头被过滤（`0x1412ddb73`）

## dim4 覆盖度

- [x] IPC 参数名确认（find_regex + get_bytes 证据）
- [x] RelayDraftTestInput 字段全集（8/8，Visitor case 0-7）
- [x] 上游请求 path + method + auth
- [x] 事件 payload 字段全集（6/6）
- [x] 共享叶 relay_keychain_lookup_for_quota_sys 确认
