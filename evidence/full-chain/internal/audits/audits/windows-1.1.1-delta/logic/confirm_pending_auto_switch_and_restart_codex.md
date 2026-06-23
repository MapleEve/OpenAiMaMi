# confirm_pending_auto_switch_and_restart_codex — 逻辑文档

**版本**: 1.1.1 windows-x64 body-delta（协程重构）
**gate**: consumerStartReady=false（dim1 CCF 缺失，dim4 partial）
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## 关键变更摘要

**1.0.9**: 6-phase 线性协程，简单顺序执行
**1.1.1**: 4-outer-state + nested sub-state machine，通过 relay provider type vtable 做 provider 类型分叉

消费者实现**不能假设单路径执行**——1.1.1 加入了 provider type 分叉，必须处理两条路径。

## handler VA（1.1.1）

```
handler: sub_140952070 @ 0x140952070
  size: 2970B
  basic_blocks: 111
  cyclomatic_complexity: 29
  coroutine_state_field_offset: 3440
  outer_states: 4
  sub_state_field_offset: 3424
  sub_states_per_outer: 0-3 (varies per outer state)
```

## 关键 callees

| callee | VA | 作用 |
|---|---|---|
| sub_1400803E0 | 0x1400803E0 | bootstrap state reader |
| sub_140089A50 | 0x140089A50 | namespace lookup (aApp_4) |
| sub_14023DC00 | 0x14023DC00 | **routes via vtable from off_141899420（provider type dispatch）** |
| sub_140871EA0 | 0x140871EA0 | async poll/await result |
| sub_140911080 / sub_140921810 / sub_1408F2FB0 | — | on completion handlers |

## vtable 分叉（核心新增）

`off_141899420` → sub_14023DC00 → 根据 relay provider type 选择两条路径：
- path A（某 provider variant）
- path B（另一 provider variant）

具体 provider type 判别逻辑未完整追踪（dim5 mac unknown，dim1 CCF missing）。

## 原子操作（WIN 特有）

```
_InterlockedIncrement64 at a1+3384 (coroutine ref)
_InterlockedIncrement64 at a1+3392 (coroutine ref)
```

## callers

```
sub_140A6D4D0 (caller 1)
sub_140A8E1B0 (caller 2)
```

同一对 caller 也出现在 sub_14096A2D0（multi-command coroutine），暗示与 restart/relay-coordination 命令共享调度层。

## 已知限制（dim1 缺失）

frontend CCF（dim1）尚未确认：
- 前端 invoke wrapper 名称未知
- args 从前端传递方式未确认
- onEvent / handler 类型未知（如果有的话）

需要前端 ipc-contracts diff 补全 UI trigger / invoke wrapper / args assembly。

## 副作用（部分已确认）

- atomic refcount increment x2
- relay spinlock
- tokio task enqueue
- WakeByAddressSingle
- IPC response write
- Arc drop chain
- 错误码：0x8000000000000025 (switch_provider_unavailable)
