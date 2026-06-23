# reveal_relay_api_key — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: strictImplementationUse
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC 合约

```
command: "reveal_relay_api_key"
params:
  manager: Option<String> = None  (frontend 传 None)
response:
  字段 label: 'Success' (7B，不是 'apiKey')
  值: String API key
```

**重要**：response 字段 label 是 `'Success'`（7 bytes），不是 `'apiKey'`。消费者不能错误地从 response 提取 'apiKey' key。

## 关键 callees

- `relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0`（与 get_relay_provider_quota 共享叶子）
  - 读 secrets.json + SHA-256 计算
  - manager 参数为 None 时：从 default 位置查找

## 共享叶子

`relay_keychain_lookup_for_quota_sys` 被以下命令共享：
- get_relay_provider_quota
- reveal_relay_api_key

## gate 说明

该命令已达 strictImplementationUse 级别（最高 gate），但 gate_accepted=false（C5 实现侧尚未使用）。

## WIN 平台特有

与其他 relay 命令共享 WIN 原语（InterlockedCompareExchange8, WakeByAddressSingle）。
