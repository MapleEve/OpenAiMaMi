# test_relay_provider_stream — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令（替代 test_relay_provider）
**gate**: consumerStartReady（dim1-dim3 PASS）
**canonical drift**: leaf 在 commands_relay/test_relay_provider_stream/，非根目录
**owner VA**: test_relay_provider_stream_owner_sys @ 0x1409C98D0

## IPC 合约

```
command: "test_relay_provider_stream"
params:
  manager: String
  providerId: String
  model: String          [新增参数，1.0.9 无]
  onEvent: Handler       [stream callback]
response:
  envelope: {schemaVersion, success, code, message, warnings, data}
error codes:
  quota_miss: 0x8000000000000000
  keychain_miss: 0x8000000000000007
  IoError: 9
  serialize_err: 2
```

## 与 test_relay_provider（1.0.9）的区别

| 维度 | test_relay_provider (1.0.9) | test_relay_provider_stream (1.1.1) |
|---|---|---|
| argKeys | [manager, providerId] | [manager, providerId, **model**, onEvent] |
| 响应 | 请求-响应 | SSE 流式（onEvent Handler） |
| model 参数 | 无 | 有（直接指定测试使用的模型） |

## 副作用

`relay_providers_config_write_and_persist_sys` 持久化 relay.json（side effect — 测试命令写磁盘）

## string pool

```
manager @ 0x1412fa999
providerId @ 0x1412fa9a0
model @ 0x1412fab69
```

Frontend CCF cross-check: 1.0.9 test_relay_provider argKeys=[manager,providerId]; stream 版本 adds model（ipc-contracts.jsonl 确认）
