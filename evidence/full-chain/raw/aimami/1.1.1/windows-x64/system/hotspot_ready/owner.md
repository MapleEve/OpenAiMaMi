# owner.md — hotspot_ready (Windows x64 1.1.1)
# Gold-leaf session: <审计会话>
# Machine: <本地机器>

## Owner Summary

| Field | Value |
|---|---|
| Command | `hotspot_ready` |
| Platform | Windows x64 |
| Version | 1.1.1 |
| Owner VA | `0x140016720` |
| Owner symbol | `hotspot_ready_owner_sys_111` |
| Owner size | 847B (0x34F) |
| Basic blocks | 32 |
| Cyclomatic complexity | 9 |
| Synchronous | yes (no async twin) |
| IDB rename | applied level-A; <审计会话> |
| Caller | `tauri_ipc_main_dispatcher_sys @ 0x14000d2a0` |
| IPC string VA | `0x1412ac4a3` ("hotspot_ready", 13B) |
| Tag string VA | `0x1412ac6d5` ("app", 3B) |

## Baseline Comparison (1.0.9 win → 1.1.1 win)

| Aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| VA | `0x14026DEF0` | `0x140016720` |
| VA drift | — | yes (VA drifted, behavior preserved) |
| Behavior | discriminant 18=Ready, 3=not-ready | identical |
| hotspot state read | separate config read | co-located with full AppState blob (combined read) |
| focus dispatch size | smaller (not measured) | `sub_14038E240` = 56882B Tauri event-pump |
| usage_refresh read | same call pattern | same (IDB rename conflict at 0x140089A50) |
| delta_status | — | `diff_reversed` (body-compare confirmed change; semantics unchanged) |

## Call Structure

```
hotspot_ready_owner_sys_111 @ 0x140016720 (L0)
├── get_usage_refresh_interval_read_sys_111 @ 0x140089A50 (L1) — usage-refresh JSON-parse; Arc drop
│   └── terminated: arc_drop_leaf
├── hotspot_combined_state_check_sys_111 @ 0x14060C720 (L1)
│   ├── sub_140076AD0 (L2) — AppState read key='hotspot' 896B — appstate_read_leaf
│   └── hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560 (L2)
│       ├── sub_14038E240 (L3) — focus_main_window_dispatch 56882B — platform_primitive
│       ├── hotspot_alternate_focus_dispatch_sys_111 @ 0x1403C0BD0 (L3)
│       │   ├── PostMessageW (L4) — Win32 API — external_call [TERMINAL]
│       │   ├── sub_14037E980 (L4) — ring_buffer_notify_and_wake
│       │   │   ├── WakeByAddressSingle (L5) — platform_primitive [TERMINAL]
│       │   │   └── sub_1403673F0 (L5) — observer_waker_drain — drop_leaf [TERMINAL]
│       │   └── sub_14037FC10 (L4) — channel_send_enqueue
│       │       ├── sub_14037ED80 (L5) — ring_buffer_slot_alloc — persistence_commit [TERMINAL]
│       │       └── sub_14037E710 (L5) — ring_buffer_commit_notify — platform_primitive [TERMINAL]
│       └── hotspot_cleanup_non38_drop_sys_111 @ 0x1403EFD40 (L3) — tagged-union drop — drop_leaf
├── sub_140832560 (L1) — tauri_ipc_resolve_error_path — ipc_response_leaf
├── has_notch_invoke_resolver_respond @ 0x14080C3C0 (L1) — InvokeResolver::respond — ipc_response_leaf
├── has_notch_arc_listener_drop_loop @ 0x14033AB50 (L1) — observer drop 96B stride — drop_leaf
└── sub_140042650 (L1) — combined_state_blob_drop — drop_leaf
```

## AppState Snapshot Struct Layout (a1)

| Offset | Size | Field | Evidence |
|---|---|---|---|
| +0 | 520B | Combined hotspot state blob | `sub_141212FB0(v13, a1, 520)` @ 0x140016758 |
| +520 | 400B | Usage refresh interval data | `sub_141212FB0(v15, a1+520, 400)` @ 0x140016774 |
| +880 | 16B | Response envelope (v22) | `v22 = *(_OWORD *)(a1+880)` @ 0x14001684e |
| +896 | 8B | Response envelope (v23) | `v23 = *(_QWORD *)(a1+896)` @ 0x14001685c |
| +920 | 16B | Observer list {count, head_ptr} | `v32 = *(_OWORD *)(a1+920)` @ 0x14001678e |
| +936 | 8B | Observer buffer ptr (v33) | `v33 = *(_QWORD *)(a1+936)` @ 0x140016780 |

Total struct size inferred: ≥944B.

## Discriminant Map

| Value | Meaning | Set where |
|---|---|---|
| 18 | Ready | `hotspot_ready_state_discriminant_check_sys_111` @ 0x14038D60F |
| 3 | Not-ready | `hotspot_ready_state_discriminant_check_sys_111` @ 0x14038D68E; also v19 error path |
| 38 | In-flight/waiting | `hotspot_alternate_focus_dispatch_sys_111` return; discriminant for enqueued dispatch |
| 6 | Error (combined state) | owner `LOBYTE(v27) = 6` @ 0x1400168FC |

## Side Effects

- **conditional**: posts Win32 message to hotspot HWND via `PostMessageW`
- **conditional**: sends 176B state payload to lock-free ring-buffer channel (async dispatch to window event loop)
- **conditional**: wakes Tokio/async waiters via `WakeByAddressSingle`
- **read-only** on fast-path (v19==3): reads AppState, drops observer Arc list, sends IPC response
- No disk writes, no HTTP, no registry, no SQL on any path

## IDB Rename Conflict Note

VA `0x140089A50` was renamed `get_usage_refresh_interval_read_sys_111` by session `<审计会话>` but then overwritten to `confirm_pending_auto_switch_deserialize_request_sys` by `<审计会话>`. The role in the `hotspot_ready` call context (usage-refresh JSON-parse + Arc refcount cleanup) is unaffected by this rename conflict.

## IDB Annotations Applied (gold-leaf)

- `0x140016720` → renamed `hotspot_ready_owner_sys_111` (level-A, allow_overwrite)
- `0x1403C0BD0` → renamed `hotspot_alternate_focus_dispatch_sys_111` (level-B, gold-leaf)
- `0x1403EFD40` → renamed `hotspot_cleanup_non38_drop_sys_111` (level-B, gold-leaf)
- inline comment @ `0x140016720` — gold-leaf evidence (see idb_save section)
