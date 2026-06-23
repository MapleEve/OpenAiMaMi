# Interface / DTO / Error / Side-effect — confirm_pending_auto_switch_and_restart_codex (win 1.1.1)

**Source**: 逆向分析 decompile (wf-aimami111-delta-20260616) | **Platform**: windows-x64

## 前端 Invoke 签名（从 ipc-contracts.jsonl + string evidence）

```typescript
invoke("confirm_pending_auto_switch_and_restart_codex", {
  // input: no explicit params visible from decompile
  // 命令本身似乎是 zero-input trigger，confirm 动作由 pending state 决定
})
```

**注意**: 从 LABEL_4 的 namespace lookup 路径可见，命令注册在 `app` namespace（aApp_4），input 参数由 sub_140089A50 做 namespace resolution，具体 DTO 字段依赖前端 CCF 补全（dim1 状态：Unknown from windows-only 逆向，需前端 CCF 确认）。

## 协程状态字段（a1 = Future 对象指针，offset 单位 byte）

| Offset | 用途 | 类型 |
|---|---|---|
| a1+3440 | outer coroutine state | u8 (0-3) |
| a1+3424 | inner sub-state | u8 (0-3) |
| a1+3416 | relay state tracker | u8 (0-3) |
| a1+3408 | relay sub-state | u8 (0-3) |
| a1+3443 | active flag (set=1 on enter, clear=0 on complete) | u8 |
| a1+3441-3442 | state word (257 on enter) | u16 |
| a1+3432, a1+3436 | completion params (err_a, err_b) passed to sub_14080C3C0 | i32, i32 |
| a1+3400 | relay future handle (set after sub_14023DC00) | *void |
| a1+3384 | relay refcount ptr #1 (for _InterlockedIncrement64) | *i64 |
| a1+3392 | relay refcount ptr #2 (for _InterlockedIncrement64) | *i64 |
| a1+2432 | provider ref count | i64 |
| a1+2440 | provider item list ptr | *void |
| a1+2448 | provider item list end ptr | *void |
| a1+2456-2768 | resolved provider snapshot (312B copied from a1+392 when not found) | bytes |
| a1+2776-3096 | relay provider context (320B block, copied multiple times) | bytes |
| a1+3096-3248 | relay secondary context (152B) | bytes |
| a1+3248-3400 | relay request data (152B, passed to sub_14023DC00) | bytes |
| a1+1912 | provider context snapshot base (1520B from a1+392) | bytes |

## Relay Provider Type Dispatch（off_141899420 vtable）

```c
// 两路变体，由 provider type == 2 判断
off_141899420 bytes @ VA 0x141899420:
  [0x00] ptr 0x14189 93B8  // 第一个条目 ptr
  [0x20] ptr 0x140E9F180   // stride +0x80=+32时 → second entry
  [0x40] ptr 0x140E9F160   // stride +0x80=+64时 → third entry

// type==2 路径: offset = (*_BYTE)v27 ? 472 : 704
// type!=2 路径: offset = *((_BYTE *)v27+64) ? 472 : 704  (同一 stride 逻辑)
```

## Response Envelope (sub_140225110)

```json
{
  "schemaVersion": <string>,
  "success": <bool>,
  "code": <string>,
  "message": <string>,
  "accessTokenExpiresAt": <optional>,
  "skillID": <optional>,
  "relativePathbackupPath": <optional>,
  "skill": <optional>,
  "replacedExisting": <optional>,
  "backup": <optional>,
  "removedSkillID": <optional>,
  "remainingInstalledCount": <optional>
}
```

**Error sentinel**: `0x8000000000000025ULL` = switch_provider_unavailable (写回 a1[0] 时触发错误分支，v12=0)

## Error Paths

| 错误 | 触发条件 | 处理 |
|---|---|---|
| `BUG()` | `_InterlockedIncrement64` 返回 ≤0（refcount underflow） | 立即 abort，不返回 |
| `__fastfail(7)` (RtlFailFast) | sub_1400803E0 中 bootstrap refcount overflow | Win32 fatal abort |
| error sentinel `0x8000000000000025` | relay provider 不可用或切换失败 | response code/message 错误路径 |
| `"called Result::unwrap() on an Err value"` (sub_14124BFE0) | IPC resolver already consumed | panic abort |
| `"resolver consumed"` (sub_14124BF80) | sub_14080C3C0 中 resolver 为空 | panic abort |
| `"a Display implementation returned an error unexpectedly"` | sub_14080C3C0 串行化失败 | abort |

## Side Effects

| 副作用 | 描述 |
|---|---|
| 原子计数器递增 | `_InterlockedIncrement64` at a1+3384 and a1+3392 |
| Relay provider spinlock acquire/release | sub_1412271EF 在分发前可能持有自旋锁 |
| Tokio task queue 写入 | sub_140F050E0 将 relay task push 到 tokio worker channel |
| `WakeByAddressSingle` | 唤醒等待的 tokio worker thread |
| IPC response write | sub_14080C3C0 通过 InvokeResolver 将结果写回前端 |
| Provider context snapshot | 1520B 从 a1+392 复制到 a1+1912 |
| Provider ref cleanup | sub_140921810、sub_140911080 释放持有的 relay provider Arc |

## Platform diff vs macOS

- macOS 1.0.9 使用 6-phase 线性协程，win 1.1.1 使用 4-state outer + nested sub-state（差异）
- `_InterlockedIncrement64`, `WakeByAddressSingle`, `__imp_CloseHandle`, `RtlFailFast` 均为 Win32-only 路径
- macOS 等价路径使用 futex/park-thread 的 pthread 变体（不可外推）
- relay provider vtable stride 逻辑 (472/704 byte offset) 是 win 特有，mac 需独立验证
