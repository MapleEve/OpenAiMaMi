# owner — get_or_create_remote_device_secret (win64 1.1.1)

## 身份

| 字段 | 值 |
|---|---|
| tauri command | `get_or_create_remote_device_secret` |
| owner VA | `0x14078CD70` |
| owner symbol | `get_or_create_remote_device_secret_owner_sys` |
| core VA | `0x1401B4FB0` |
| core symbol | `get_or_create_remote_device_secret_core_sys` |
| owner size | 0x34B bytes |
| core size | 0x21E bytes |
| session | <审计会话> |
| sha | d24e429a |
| machine | <本地机器> |

## 角色

owner 是 Tauri IPC async wrapper，负责：
1. WIN32 `_InterlockedCompareExchange8` mutex 互斥（防并发重入）
2. 等待争用：`sub_14124A510`（spin/wait）+ `WakeByAddressSingle` 唤醒等待方
3. 调用 `get_or_create_remote_device_secret_core_sys(a2+8)`（hotspot config ptr 传入）
4. 错误路径：`sub_140243FC0`（error enum builder）→ `sub_1407B1650`（drop/dealloc）
5. 成功路径：Result 写入 a1 偏移，`*a1=0` 表示 Ok(data)，`*a1=1` 表示 Err

## Tauri dispatch 入口

唯一调用者：`tauri_ipc_main_dispatcher_sys@0x14000D2A0`（IPC handler table）。
data ref 在 `0x141666880`、`0x1418F34E4`（dispatch table slots）。

## 1.0.9 对比

1.0.9 executor pattern 用独立 coroutine `sub_1400AC510`；
1.1.1 改为 relay-state async executor `0x14078CD70`，mutex 模式对齐全局 relay 框架。
