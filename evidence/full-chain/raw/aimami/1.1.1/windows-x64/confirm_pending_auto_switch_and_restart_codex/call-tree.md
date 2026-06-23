# Call Tree — confirm_pending_auto_switch_and_restart_codex (win 1.1.1)

**Depth**: 5+ levels | **Terminated reason**: reached runtime/OS leaves
**Source**: 逆向分析 callees + analyze_function (wf-aimami111-delta-20260616)

## Full Call Tree

```
confirm_pending_auto_switch_and_restart_codex_owner_sys (0x140952070, 2970B)
├── [INIT] sub_141212FB0 — memcpy primitive (provider context copy, multiple sites)
├── [LABEL_4] sub_140089A50 (0x140089A50, 206B) — namespace/app resolver
│   ├── sub_140729280 — decode lookup key
│   ├── sub_141212FB0 — result copy
│   ├── sub_140E21E40 — Arc<T>::drop (relay ref)
│   ├── sub_140001370 — heap free
│   ├── sub_1405A4490 — waker drop
│   ├── sub_1400492A0 — option drop
│   └── sub_140E20CA0/sub_140E20AC0 — Arc drop variants
│
├── [LABEL_4/on-not-found] sub_140921810 (0x140921810, 177B) — cleanup waker context
│   ├── sub_140920880 — mutex unlock
│   ├── sub_140E219F0 — Arc drop (context@+512)
│   ├── sub_140001370 — heap free (string@+456/+464)
│   └── sub_140042350 / sub_140808030 — enum drop + waker cleanup
│
├── [LABEL_13/bootstrap] sub_1400803E0 (0x1400803E0, 387B) — relay state bootstrap reader
│   └── [no callees — pure atomic ops on relay state fields via _InterlockedIncrement64]
│       leaf: multiple _InterlockedIncrement64 (runtime atomic leaf)
│       → BUG() / __fastfail(7) on overflow (RtlFailFast)
│
├── [LABEL_13/spinlock] sub_1412271EF — provider registry spinlock acquire
│
├── [LABEL_13/dispatch-A or B] sub_14023DC00 (0x14023DC00, 494B) — relay executor task spawner
│   ├── sub_141212FB0 — copy request buf (152B + 156B)
│   ├── sub_140001360 (640, 128) — alloc 640B task future
│   ├── sub_14124BCB1 — OOM abort on alloc fail
│   ├── sub_140F050E0 (0x140F050E0, 1229B) — tokio task enqueue / channel dispatch
│   │   ├── sub_140F067B0 — ring-buffer grow (capacity expansion)
│   │   ├── sub_141088010 / sub_141088150 — thread-local task context ops
│   │   ├── sub_1402F87A0 — park-thread waker
│   │   ├── sub_140F14690 — scheduler dispatch
│   │   ├── WakeByAddressSingle — Win32 futex wake (leaf: OS API)
│   │   ├── sub_140EFA620 — cleanup on channel close
│   │   ├── sub_1410782A0 / sub_141078100 — handle/thread management
│   │   ├── sub_14124B1D0 — result unwrap check
│   │   └── __imp_CloseHandle — Win32 handle close (leaf: OS API)
│   ├── sub_14124C240 — panic handler (unreachable)
│   └── nullsub_1 — no-op
│
├── [LABEL_25/poll] sub_140871EA0 (0x140871EA0, 480B) — async future poll
│   ├── sub_140F00F00 — get thread-local runtime context
│   ├── sub_140F03280 — cleanup on Ready
│   ├── sub_140F05C20 — waker cleanup
│   └── sub_141091C50(v6, sub_14052DA50) — runtime init (if not initialized)
│       vtable call: *(v5+16+24)(v5, &v17, *a3) — poll fn ptr dispatch (LEAF: vtable-dispatched)
│
├── [LABEL_25/result=3,error] sub_1410A1DF0 — error Result<T> builder
│   └── sub_14091A6D0 — drop helper
│
├── [LABEL_25/result=ok-error-check] sub_140E30410 — serialize ok response via sub_140E30410
│   └── sub_14091A6D0 — drop
│
├── [LABEL_49] sub_140911080 (0x140911080, 210B) — cleanup relay provider slot
│   ├── sub_140EFCAF0 — is_some check (Option<T>)
│   ├── sub_140EFD8E0 — drop Option inner
│   └── sub_140041870 — Vec<T>::drop (slot data)
│
├── [LABEL_49] sub_140921810 — (see above, cleanup waker)
│
├── [LABEL_55] sub_1408F2FB0 (0x1408F2FB0, 347B) — cleanup future state
│   ├── sub_140911080 — (see above)
│   ├── sub_140921810 — (see above)
│   ├── sub_14033AB50 — provider item drop
│   └── sub_140001370 — heap free
│
├── [COMPLETION] sub_14080C3C0 (0x14080C3C0, 629B) — IPC response dispatch
│   ├── _InterlockedCompareExchange8 — resolver lock (leaf: Win32 atomic)
│   ├── sub_14124A510 — spin wait (if locked)
│   ├── sub_14124B1D0 — Result::unwrap check
│   ├── sub_140E208A0 — copy response data
│   ├── sub_140001370 — heap free (consumer data)
│   ├── WakeByAddressSingle — futex wake after response (leaf: OS API)
│   ├── sub_14124BFE0 — panic: "called `Result::unwrap()` on an `Err` value"
│   └── sub_14124BF80 — panic: "resolver consumed"
│
├── [ERROR RESPONSE] sub_140225110 (0x140225110, 547B) — response JSON serializer
│   ├── sub_140001360(128, 1) — alloc 128B JSON buf
│   ├── sub_140261480 — serialize "schemaVersion" field
│   ├── sub_1402580F0 — serialize "success" field
│   ├── sub_14025C400 — serialize "code"/"message" fields
│   ├── sub_1402494C0 — serialize extra fields (accessTokenExpiresAt etc)
│   ├── sub_140249A00 — finalize JSON object
│   ├── sub_141248EC0 — error on serialize fail
│   ├── sub_14022ED70 — cleanup input ctx
│   ├── sub_14033FA00 — panic: "}string or map"
│   └── sub_140001370 — heap free on error
│
├── [ASYNC CLEANUP] sub_14033AB50 — provider list item drop (called multiple times)
├── sub_140EFCAF0 / sub_140EFD8E0 — Option<T> check/drop
└── sub_14124BCCB / sub_14124BFE0 / sub_14124BF80 — various abort/panic paths
```

## Leaf Terminal Classification

| Leaf | Type | 说明 |
|---|---|---|
| `_InterlockedIncrement64` | OS atomic | a1+3384, a1+3392; failure → BUG() |
| `_InterlockedCompareExchange8` | OS atomic | IPC resolver lock |
| `WakeByAddressSingle` | Win32 API | futex-style wake for async completion |
| `__imp_CloseHandle` | Win32 API | task handle cleanup |
| `__fastfail(7)` | Win32 abort | ref count overflow (RtlFailFast) |
| vtable call `*(v5+16+24)` | vtable dispatch | relay future poll fn ptr |
| `sub_140F050E0→channel enqueue` | tokio scheduler | relay task enqueue leaf |
| `sub_140001360/370` | allocator | heap alloc/free |
| error sentinel `0x8000000000000025` | sentinel value | switch_provider_unavailable |

## Depth Assessment

Depth 达到 5+ 层，所有主要路径均终止于 OS/runtime leaf 或已知共享 leaf。无 accepted_unknown 假墙风险。
