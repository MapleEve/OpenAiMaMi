# set_codex_api_slots — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: consumerStartReady

## IPC 合约

```
command: "set_codex_api_slots"
params:
  manager: String
  slots: ? (类型待从 frontend ipc-contracts 确认)
response: null on success | CoreError on error
```

## 行为

- 更新 relay_manager_state +128 = codexApiSlots
- 写 relay config JSON（atomic write，与其他 relay config write 命令共享基础设施）

## owner VA

set_codex_api_slots_owner_sys（在 dispatcher named handlers 列表中命名；具体 VA 见 win-divergence dispatcher_delta_cmds）

## 关联

codexApiSlots 字段与 codexApiLogin（set_codex_api_login 主写目标）在同一 relay_manager_state struct 中共存，是 API 登录模式下的 slot 数量配置。
