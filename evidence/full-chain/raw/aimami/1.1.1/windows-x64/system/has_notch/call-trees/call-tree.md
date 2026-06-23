# call-tree.md — has_notch · windows-x64 · AiMaMi 1.1.1
<!-- session=wf-aimami111-delta-20260618-goldleaf | machine=<本地机器> -->
<!-- produced_at: 2026-06-18T00:00:00+08:00 | producer: claude-sonnet-4-6 -->
<!-- extends has_notch.jsonl (d0-d2) with full depth=6 cleanup chain -->

## Overview

| Metric | Value |
|---|---|
| Max depth reached | 6 (cleanup chain via has_notch_arc_listener_drop_loop) |
| Happy path terminal | d2: WakeByAddressSingle (Windows kernel API) |
| All leaf terminated_reason | Yes |
| Tree complete | Yes |

---

## Full Call Tree

```
d0  has_notch_owner_sys @ 0x140023000
    [Tauri IPC cmd owner; sync; 863b; 32BB; CC=9; argKeys=[]; fixed-true return]
    │
    ├─d1  sub_141212FB0 @ 0x141212FB0
    │     [memcpy_terminal — 3 invocations in owner: 520b, 400b, 360b stack copies]
    │     [terminated_reason: memcpy_terminal]
    │
    ├─d1  sub_140089A50 @ 0x140089A50
    │     [逆向分析 alias: confirm_pending_auto_switch_deserialize_request_sys — collision, incorrect]
    │     [Role: Tauri IPC param resolver; argKeys=[]; sets v19=3 on Ok]
    │     [terminated_reason: param_resolver_terminal]
    │
    ├─d1  v28=1 @ 0x14002314F
    │     [impl_body_confirmed — fixed bool true, sole business logic]
    │     [No callee. This IS the complete Windows has_notch implementation]
    │     [terminated_reason: impl_body_confirmed]
    │
    ├─d1  has_notch_invoke_resolver_respond @ 0x14080C3C0  ← HAPPY PATH
    │     [InvokeResolver::respond; sends Ok(true) to frontend webview via vtable]
    │     [Confirm via: _InterlockedCompareExchange8 lock + WakeByAddressSingle]
    │     │
    │     ├─d2  sub_141212FB0 @ 0x141212FB0
    │     │     [memcpy_terminal — stack frame copy inside resolver]
    │     │
    │     ├─d2  sub_14124A510 @ 0x14124A510
    │     │     [spin_wait / resolve-once acquire; callees=[]]
    │     │     [terminated_reason: infrastructure_terminal]
    │     │
    │     ├─d2  sub_14124B1D0 @ 0x14124B1D0
    │     │     [resolve-once guard check — validates not double-consumed]
    │     │     [terminated_reason: infrastructure_terminal]
    │     │
    │     ├─d2  sub_14124BFE0 @ 0x14124BFE0
    │     │     [Panic: "called `Result::unwrap()` on an `Err` value"]
    │     │     [terminated_reason: panic_terminal]
    │     │
    │     ├─d2  sub_14124BF80 @ 0x14124BF80
    │     │     [Panic: "resolver consumed" — vtable consumer ptr is null]
    │     │     [terminated_reason: panic_terminal]
    │     │
    │     ├─d2  sub_140001370 @ 0x140001370 (free/dealloc)
    │     │     [callees=[] — terminal]
    │     │     [terminated_reason: alloc_terminal]
    │     │
    │     ├─d2  WakeByAddressSingle @ 0x14124A5D0  ← PRIMARY TERMINAL
    │     │     [Windows kernel API (synch.h): wakes thread waiting on address]
    │     │     [terminated_reason: windows_api_terminal]
    │     │
    │     └─d2  sub_140E208A0 @ 0x140E208A0
    │           [Arc<InvokeResolver> inner drop — refcount reaches 0]
    │           │
    │           └─d3  sub_140001370 @ 0x140001370
    │                 [free — terminated_reason: alloc_terminal]
    │
    ├─d1  has_notch_error_response_serializer @ 0x14082F2D0  ← ERROR PATH
    │     [Only reached when v19 != 3 (param parse failure)]
    │     [Not reachable on normal has_notch invocation (argKeys=[])]
    │     │
    │     ├─d2  sub_141212FB0 @ 0x141212FB0 [memcpy_terminal]
    │     ├─d2  nullsub_1 @ 0x1400013A0 [no-op; terminated_reason: noop_terminal]
    │     ├─d2  sub_140001360 @ 0x140001360
    │     │     [rust_alloc — alloc 128-byte error string buffer]
    │     │     [terminated_reason: alloc_terminal]
    │     ├─d2  sub_14124BCCB @ 0x14124BCCB
    │     │     [handle_alloc_error — Rust OOM handler, terminates process]
    │     │     [terminated_reason: panic_terminal]
    │     └─d2  has_notch_invoke_resolver_respond @ 0x14080C3C0
    │           [convergent with happy path — see above for depth-3+ callees]
    │
    ├─d1  sub_14060E160 @ 0x14060E160  ← ERROR ENCODER (error path only)
    │     [Error encoder for param parse failure; 12 callees, all infrastructure]
    │     [Note: includes hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560]
    │     [— shared error enum infrastructure, not has_notch specific]
    │     │
    │     ├─d2  nullsub_1 @ 0x1400013A0 [noop_terminal]
    │     ├─d2  sub_140001360 @ 0x140001360 [alloc_terminal]
    │     ├─d2  sub_141212FB0 @ 0x141212FB0 [memcpy_terminal]
    │     ├─d2  hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560
    │     │     [shared error enum discriminant utility — infrastructure]
    │     │     [terminated_reason: infrastructure_terminal]
    │     ├─d2  sub_14054EAF0 @ 0x14054EAF0 [infrastructure_terminal]
    │     ├─d2  sub_141098890 @ 0x141098890 [infrastructure_terminal]
    │     ├─d2  sub_140E30410 @ 0x140E30410 [infrastructure_terminal]
    │     ├─d2  sub_14061DD90 @ 0x14061DD90 [infrastructure_terminal]
    │     ├─d2  sub_1405B4010 @ 0x1405B4010 [infrastructure_terminal]
    │     ├─d2  sub_140041870 @ 0x140041870 [infrastructure_terminal]
    │     ├─d2  sub_14124BCB1 @ 0x14124BCB1 [panic_terminal]
    │     └─d2  sub_14124BFE0 @ 0x14124BFE0 [panic_terminal]
    │
    ├─d1  has_notch_arc_listener_drop_loop @ 0x14033AB50  ← CLEANUP PATH
    │     [Arc IPC listener drop — LABEL_14 loop in owner]
    │     [Iterates pending listener array, drops each Arc<IpcListener>]
    │     │
    │     ├─d2  sub_140F36C00 @ 0x140F36C00
    │     │     [Arc listener drop inner]
    │     │     │
    │     │     └─d3  sub_140F35A20 @ 0x140F35A20
    │     │           [drop glue for listener type]
    │     │           │
    │     │           └─d4  sub_140F35430 @ 0x140F35430
    │     │                 [Arc<Listener> inner drop]
    │     │                 │
    │     │                 ├─d5  sub_140F6ED80 @ 0x140F6ED80
    │     │                 │     [listener vtable drop]
    │     │                 │     │
    │     │                 │     ├─d6  sub_1405A4A90 @ 0x1405A4A90
    │     │                 │     │     [allocator free — terminated_reason: allocation_terminal]
    │     │                 │     └─d6  sub_140F6EE70 @ 0x140F6EE70
    │     │                 │           [infrastructure_terminal]
    │     │                 │
    │     │                 └─d5  sub_140F35770 @ 0x140F35770
    │     │                       [dealloc / free wrapper]
    │     │                       │
    │     │                       ├─d6  sub_140001370 @ 0x140001370 [alloc_terminal]
    │     │                       ├─d6  sub_140335140 @ 0x140335140 [infrastructure_terminal]
    │     │                       └─d6  sub_140F35540 @ 0x140F35540 [infrastructure_terminal]
    │     │
    │     └─d2  sub_140001370 @ 0x140001370 [alloc_terminal]
    │
    └─d1  sub_140042650 @ 0x140042650
          [InvokeMessage Arc drop — executes unconditionally on function exit]
          │
          ├─d2  sub_140041D40 @ 0x140041D40
          │     [Arc inner drop]
          │     ├─d3  sub_140E21E40 [dealloc chain — alloc_terminal d4+]
          │     ├─d3  sub_140001370 [alloc_terminal]
          │     ├─d3  sub_1405A4490 [callees=[] — alloc_terminal]
          │     ├─d3  sub_1400492A0 [ref-count drop — alloc_terminal d4]
          │     ├─d3  sub_140E20CA0 [Arc vtable drop — alloc_terminal d4+]
          │     └─d3  sub_140041870 [infrastructure_terminal]
          │
          ├─d2  sub_140E219F0 @ 0x140E219F0
          │     └─d3  sub_140083520
          │           └─d4  sub_140001370 [alloc_terminal]
          │
          ├─d2  sub_140001370 @ 0x140001370 [alloc_terminal]
          └─d2  sub_140042350 @ 0x140042350
                └─d3  sub_140337D20 [recursive drop glue; terminates on dealloc]
```

---

## Terminated-Reason Legend

| Reason | Meaning |
|---|---|
| `windows_api_terminal` | Windows kernel/user32/synch API — no Rust code below |
| `panic_terminal` | Rust panic handler — terminates process |
| `alloc_terminal` | Rust global allocator (alloc/dealloc) — no business logic below |
| `allocation_terminal` | Same as alloc_terminal (variant naming) |
| `impl_body_confirmed` | The statement IS the implementation — no callee needed |
| `param_resolver_terminal` | Tauri IPC param resolver — infrastructure, shared across commands |
| `memcpy_terminal` | Rust ptr::copy / mem::forget — stack frame copy only |
| `infrastructure_terminal` | Shared Tauri/Rust runtime infrastructure — not has_notch specific |
| `noop_terminal` | nullsub — empty function body |
