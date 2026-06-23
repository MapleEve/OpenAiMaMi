# run_codex_router_diagnostics — Owner

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
role: 纯生产者
date: 2026-06-18
source_binary: AiMaMi 1.1.1 win64.exe (<本地路径>
sha_ref: d24e429a
baseline_version: 1.0.9

---

## Owner 函数

| 字段 | 值 |
|---|---|
| 符号名 | run_codex_router_diagnostics_owner_sys |
| VA | 0x14006f4b0 |
| 大小 | 0x1e7 (487 bytes) |
| 职责 | Tokio try-lock dispatcher wrapper |
| 调用入口 | tauri_ipc_main_dispatcher_sys (0x14000d2a0) → 0x14000f0a2 |
| hashmap | off_141899DC0 (0x141899dc0) |
| hash_key | 0x945CA2F02A2B6F44 |
| vtable_slot | (entry - 8)[+24] → core_sys fn ptr |
| idb_comment | gold-leaf for run_codex_router_diagnostics; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion |

## 函数签名

```c
__int64 __fastcall run_codex_router_diagnostics_owner_sys(
    char *Address,   // RCX: lock_state byte + wakeup flag byte (2 bytes)
    __int64 a2,      // RDX: Tokio context ptr
    __int64 a3       // R8: future/result ptr
)
```

## 与 1.0.9 的差异

- owner 机制 (CAS spinlock + SIMD hashmap probe) 与 1.0.9 相同
- hash key 0x945CA2F02A2B6F44 在 1.1.1 中对应 run_codex_router_diagnostics (1.0.9 版本中此命令不存在)
- vtable dispatch 模式与其他命令 owner 一致 (同一套 Tokio 路由机制)
- 新增命令: 此 command 是 1.1.1 新增，1.0.9 中不存在对应 owner

## Lock 机制

```
CAS acquire: _InterlockedCompareExchange8(lock_state, 1, 0)
  if != 0: sub_14124A510(lock_state)  // WaitOnAddress — 等待锁
hashmap check: if 2 * *off_141899DC0 == 0 → panic "called `Result::unwrap()` on an `Err` value"
SIMD probe:
  hash & mask → slot_offset
  _mm_cmpeq_epi8(slot[0..16], xmmword_14124E0B0) → match mask
  tzcnt → first set bit
  verify: _mm_cmpeq_epi8(slot[-32..-16], xmmword_14124E0C0) == 0xFFFF
  found: vtable = *(slot - 8), call vtable[3] = core_sys
CAS release: *lock_state = 0
  if prev == 2: WakeByAddressSingle(lock_state)
```

## 错误路径

| 条件 | 处理 |
|---|---|
| 2 * *off_141899DC0 == 0 (Tokio runtime 未就绪) | sub_14124BFE0("called `Result::unwrap()` on an `Err` value", 43) → panic/diverge |
| v4[1] != 0 after lock (pending wakeup flag) | 同上 panic 路径 |

## xrefs_to (code callers)

| caller VA | caller 名称 |
|---|---|
| 0x14000f0a2 | tauri_ipc_main_dispatcher_sys |
| 0x1400128fb | reveal_relay_api_key_owner_sys |
| 0x140014bc2 | upsert_relay_provider_cmd_handler_111 |
| 0x140015949 | load_relay_state_ipc_handler_111 |
| 0x140017f9b | activate_relay_provider_ipc_handler_sys |
| 0x140021bb9 | diagnose_codex_router_cmd_owner_111 |
| 0x14002478b | fix_codex_router_issue_owner_sys |
| +13 more | (shared Tokio dispatcher wrapper) |
