# set_codex_api_login — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: consumerStartReady
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC 合约

```
command: "set_codex_api_login"
params:
  manager: String (7B)
  enabled: bool
  relaunch: bool
response: null on success | CoreError on fail
```

## 调用链

```
IPC dispatch
→ set_codex_api_login_dispatch_hub_sys @ 0x14099D990
  → set_codex_api_login_task_runner_sys @ 0x1407D63E0
    → set_codex_api_login_core_sys @ 0x1406D8620 (5074B, single caller)
      → relay_get_active_providers_vec_sys @ 0x1406DBEC0
      → atomic_write_file_sys @ 0x140504310  ← relay config JSON
      → relay_post_login_state_sync_sys @ 0x1406E1750 (条件)
      → quit_codex_poll_wait_sys_111 + quit_codex_fallback_kill_sys_111 ← 若 relaunch=true
      → sub_1406E1040 (rollback: codexApiLogin=false + re-persist)  ← 若 persist 失败
```

## 关键状态字段（relay_manager_state struct）

| offset | 字段 | 类型 | 作用 |
|---|---|---|---|
| +365 | codexApiLogin | bool | **KEY FIELD** — 本命令主写目标 |
| +364 | codexRouterEnabled | bool | |
| +128 | codexApiSlots | ? | |
| +373 | provider_flag | u8 | set=1 on enable |
| +136 | auth_field_a | ? | cleared on enable |
| +152 | auth_field_b | ? | cleared on enable |
| +480 | relaunch_marker | ? | ==6 → 触发 relaunch |
| +16 | state_lock | byte | WIN atomic byte (InterlockedCompareExchange8) |

## 副作用

1. 写 relay config JSON 文件（atomic write，路径来自 RelayManagerState dir fields）
2. 若 relaunch=true：quit Codex（poll wait + fallback kill）
3. 若 persist 失败：rollback（codexApiLogin=false，re-persist，log 'rolling back codex_api_login to false'）

## 错误路径

| 位置 | 处理方式 |
|---|---|
| persist fail | sub_1406E1040 rollback |
| providers_empty (enable) | early return ok |
| relay_state_poisoned | panic via sub_14124BFE0 |
| blocking_task_reentry | panic '[internal exception] blocking task ran twice.' |
| atomic_write_parent_missing | return err 'atomic write: missing parent' |

## 伪代码（async-safe 版本）

```
async fn set_codex_api_login(manager, enabled, relaunch):
  lock relay state (atomic byte +16)
  providers = relay_get_active_providers_vec()
  if enabled and providers.is_empty():
    return Ok(null)
  state.codexApiLogin = enabled
  state.provider_flag = if enabled { 1 } else { 0 }
  if enabled:
    state.auth_field_a = null
    state.auth_field_b = null
  result = atomic_write_relay_config()
  if result.is_err():
    state.codexApiLogin = false
    atomic_write_relay_config()  // rollback
    log("rolling back codex_api_login to false")
    return Err(...)
  if relaunch and state.relaunch_marker == 6:
    quit_codex_poll_wait() || quit_codex_fallback_kill()
  relay_post_login_state_sync()  // conditional
  return Ok(null)
```
