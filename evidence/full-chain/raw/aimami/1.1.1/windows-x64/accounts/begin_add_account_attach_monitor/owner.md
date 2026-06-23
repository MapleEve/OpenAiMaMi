# owner.md — begin_add_account_attach_monitor (win x64, 1.1.1)

**session**: <审计会话>
**produced_at**: 2026-06-18
**machine**: <本地机器>
**IDB**: <本地路径>
**sha**: d24e429a

---

## Owner 函数

| 字段 | 值 |
|------|-----|
| VA | `0x140013a60` |
| 名称 | `begin_add_account_attach_monitor_handler` (IDB renamed) |
| 大小 | 0x48f bytes |
| 角色 | L1 Tauri IPC entry point |
| 命令字符串 VA | `0x1412ac25d` ("begin_add_account_attach_monitor", len=32) |
| IDB 注释 | "gold-leaf for begin_add_account_attach_monitor; sha d24e429a; session <审计会话>; not gate promotion" |

## 调用来源

| caller | call_site | 类型 |
|--------|-----------|------|
| tauri_ipc_main_dispatcher_sys (0x14000d2a0) | 0x14000daac | code |
| 0x1414fa64c | — | data (IPC vtable) |
| 0x14189dcfc | — | data (IPC vtable) |

## vs 1.0.9 基线

| | 1.0.9 | 1.1.1 |
|-|-------|-------|
| owner VA | 0x140283580 | 0x140013a60 |
| 命令字符串 | 0x141268d98 | 0x1412ac25d |
| xref | 0x140283600 | 0x14000daac |
| threading | sync_tauri_ipc_state_owner_monitor_attach | 三级分发 L1→L2→L3 |

## 关联 core 和 business

| 层级 | 名称 | VA |
|------|------|----|
| L2 | begin_add_account_attach_monitor_core | 0x14078c070 |
| L3 | begin_add_account_attach_monitor_business | 0x1401aa1c0 |
| L3a | state_manager_lock_and_assemble | 0x1401abc20 |
| L3b | sync_local_runtime_state_builder | 0x1401b62f0 |
| L3c | schedule_full_runtime_refresh_builder | 0x140213770 |
| L4 | state_manager_assemble_inner | 0x1401acb20 |
| L5 | schtask_codexmate_autoswitch_query_111 | 0x14079f5c0 |
