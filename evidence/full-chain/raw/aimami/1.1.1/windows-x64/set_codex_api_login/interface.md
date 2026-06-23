# interface.md — set_codex_api_login (AiMaMi 1.1.1 win64)

## IPC 接口

```json
{
  "command": "set_codex_api_login",
  "channel": "app",
  "params": {
    "manager": "String (7B, WIN hash-map 解析, WIN lock: InterlockedCompareExchange8)",
    "enabled": "bool (JSON payload, sub_1402FF1A0 提取)",
    "relaunch": "bool (sub_1402FF330 提取; 检查 coroutine_state[+480]==6 判断 relaunch 语义)"
  }
}
```

## 核心 DTO — RelayManagerState 关键字段

| 偏移 | 类型 | 字段名 | 用途 |
|---|---|---|---|
| +0 | *Vec | providers | RelayProvider Vec 头指针 |
| +16 | u8 (atomic) | state_lock | WIN lock byte (InterlockedCmpXchg8) |
| +24 | *activeByIde | activeByIde | JSON "activeByIde" |
| +48 | *proxy | proxy | JSON "proxy" |
| +128 | *codexApiSlots | codexApiSlots | JSON "codexApiSlots" |
| +136 | * | auth_field_a | enable 时 clear (sub_1400397C0) |
| +152 | * | auth_field_b | enable 时 clear (sub_1400397C0) |
| +152 | *displayTagGlobal | displayTagGlobal | JSON "displayTagGlobal" |
| +176 | *displayTagWoyao | displayTagWoyao | JSON "displayTagWoyao" |
| +360 | * | schemaVersion | JSON "schemaVersion" |
| +364 | bool | codexRouterEnabled | JSON "codexRouterEnabled" |
| **+365** | **bool** | **codexApiLogin** | **核心字段：是否启用 codex API 登录** |
| +373 | u8 | provider_flag | enable 时 set=1 (sub_1400397C0 / sub_1407169C0) |
| +480 | u8 | relaunch_marker | ==6 → relaunch 语义 |

## RelayProvider (stride=232B)

| 相对偏移 | 字段 | 说明 |
|---|---|---|
| +136 | auth_a | enable 时 clear |
| +152 | auth_b | enable 时 clear |
| +373 | flag | enable 时 set=1 |
| field[11] | apiKey/clear-flag | 无变化快路径时 clear |

## 状态机事件序列

### ENABLE (enabled=true)
```
"writing_auth" → relay_get_active_providers_vec_sys →
persist(codexApiLogin=true) → "writing_config" →
sub_140514170 + sub_1407169C0 + sub_1400397C0 →
persist → relay_post_login_state_sync_sys →
[if fail: rollback sub_1406E1040] →
[if relaunch: "stopping_codex" → quit_codex_poll_wait_sys_111(5,0) → "launching_codex"/"done" → sub_1406D9F00]
```

### DISABLE (enabled=false)
```
"restoring_auth" → sub_1401BF770(restore) →
persist(codexApiLogin=false) → relay_post_login_state_sync_sys
```

### 无变化快路径
```
if (enabled XOR current_codexApiLogin) != 1:
    clear provider[field_11] for all providers (stride=232B) → persist → return ok_no_change
```

## 副作用

1. **写盘**：relay_providers_config_write_and_persist_sys 最多调用 2 次（enable 路径）
   - 写前：relay_config_check_parent_dirs_sys 检查 9 个父目录路径字段
   - JSON 序列化：sub_14020A3E0（含 codexApiLogin bool @ RelayManagerState+365）
   - 原子写：sub_140504310（GetCurrentProcessId 构建 tmp 路径 → WriteFile → rename → CloseHandle）
   - 错误路径：sub_1406E1040 rollback（log "rolling back codex_api_login to false"）
2. **关闭/重启 Codex**（relaunch=true）：quit_codex_poll_wait_sys_111(5, 0) → 50ms 轮询最长 5000ms → fallback kill
3. **WIN 锁**：InterlockedCompareExchange8(relay_state+16) + WakeByAddressSingle(relay_state+16)；relay_post_login_state_sync_sys 内同样模式

## 错误处理

| 错误点 | 处理 |
|---|---|
| persist 失败 | sub_1406E1040: set codexApiLogin=false, re-persist, log rollback msg |
| providers empty (enable) | 提前返回 ok，不写盘 |
| relay state poisoned | sub_14124BFE0 panic "relay state poisoned" (sub_1407169C0 入口) |
| blocking task 重入 | sub_14124BF80 panic "[internal exception] blocking task ran twice." (set_codex_api_login_task_runner_sys) |
| atomic write parent missing | 返回 err "atomic write: missing parent" |

## WIN vs macOS 差异

| 项目 | WIN 1.1.1 | macOS 1.1.1 |
|---|---|---|
| relay 锁 | InterlockedCompareExchange8 + WakeByAddressSingle | parking_lot Mutex |
| Codex quit poll | 50ms busy-poll loop (sub_14108D4A0 nanosleep) | condvar WakeByAddressSingle signal |
| RelayProvider stride | 232B (confirmed WIN) | 可能不同，独立逆向 |
| relaunch 标记字段 | coroutine_state[+480]==6 | 独立逆 |
