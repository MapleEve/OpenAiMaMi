# interface.md — begin_add_account_attach_monitor (win x64, 1.1.1)

**session**: wf-aimami111-delta-20260618-goldleaf
**produced_at**: 2026-06-18

---

## IPC 接口契约

```
command:    "begin_add_account_attach_monitor"
argKeys:    []
argObject:  null
platform:   windows-x64 (+ macOS, 前端无差异)
```

## 前端调用点 (dim1 CCF)

```js
// assets/index-DdcCOEJG.js line 86 col 25608
beginAddAccountAttachMonitor: () => ne("begin_add_account_attach_monitor")
```

- 零参数调用
- 双平台（win/mac）均使用相同前端 CCF，签名一致

## 返回值语义

| 状态 | 说明 |
|------|------|
| Ok (tag=3) | snapshot 已缓存或 business 成功完成 |
| Pending (0x8000000000000000) | 后台线程已 spawn，监控进行中 |
| Err (tag=6) | core 返回错误 |
| RwLock waiter | lock guard 结构写入 output (LABEL_5 路径) |

## 关键 DTO 字段（输出结构体，业务层写入）

| 偏移 | 字段 | 类型 | 值/来源 |
|------|------|------|---------|
| +512 | bundle_id_len | u64 | 22 (固定) |
| +520 | bundle_id_ptr | *u8 | "dev.aimami.auto-switch" |
| +536 | codex_update_major | u32 | a3+720 |
| +540 | codex_update_minor | u32 | a3+724 |
| +544 | codex_path_present | u8 | a3+728 & 1 |
| +545 | autoswitch_status | u8 | schtask query: 0=running,1=other,2=err |
| +680 | status_str_len | u64 | 2 |
| +688 | status_str_ptr | *u8 | "ok" |
| +704 | tag_str_len | u64 | 7 |
| +712 | tag_str_ptr | *u8 | "SCHEdul" |
| +752 | refresh_count | u32 | 1 |
| +756 | refresh_required | bool | true |

## Windows-only 行为（相对 macOS 的差异）

| 原语 | 地址 | 说明 |
|------|------|------|
| _InterlockedCompareExchange8 | intrinsic | monitor CAS lock |
| WakeByAddressSingle | 0x14124a5d0 | 唤醒 WaitOnAddress 等待者 |
| CloseHandle | 0x14124d788 | 关闭线程句柄副本 |
| schtasks.exe /Query | external_call via 0x14079f5c0 | CodexMateAutoSwitch 状态查询 |

## 副作用

1. **auto_switch_state_persist_json_111** (0x1401a6c10) — JSON state 文件持久化
2. **quota_history_append_dedup_111** (0x1401ff820) — quota history 追加去重
3. **std::thread::spawn** (0x140589300) — 后台监控线程创建（Pending 路径）
4. **schtasks.exe process** — OS task scheduler 外部进程查询（WINDOWS-ONLY）
