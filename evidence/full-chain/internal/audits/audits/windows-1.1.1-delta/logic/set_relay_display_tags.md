# set_relay_display_tags — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: consumerStartReady
**owner VA**: set_relay_display_tags_owner_sys @ 0x14001F080 (1518B)

## IPC 合约

```
command: "set_relay_display_tags"
params:
  manager: String
  displayTagGlobal: ?
  displayTagWoyao: ?
response: null on success
```

## 行为

- 写 relay config JSON 9字段（含 displayTagGlobal / displayTagWoyao）
- 使用共享 atomic write 基础设施
- relay_config_json_fields_confirmed: [schemaVersion, providers, activeByIde, proxy, codexRouterEnabled, codexApiLogin, codexApiSlots, displayTagGlobal, displayTagWoyao]

## string locator

set_relay_display_tags string @ 0x1412ac5c5（单 xref，dispatcher confirmed）
