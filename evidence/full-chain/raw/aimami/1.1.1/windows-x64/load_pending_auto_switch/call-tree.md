# load_pending_auto_switch — Call Tree (Windows x64)
# session: <审计会话>
# owner VA: 0x14000D2A0 (tauri_ipc_main_dispatcher_sys, inline case)
# case string ref: 0x14000fc8d | "load_pending_auto_switch" @ 0x1412ac2c3

## IMPORTANT: Inline handler
This command is handled inline within `tauri_ipc_main_dispatcher_sys` (17870 bytes).
No dedicated handler function was extracted. Call tree covers the inline case callees.

## Depth-annotated tree (inline case in dispatcher)

```
L0 [INLINE]: tauri_ipc_main_dispatcher_sys case @ 0x14000fc8d
  (within: tauri_ipc_main_dispatcher_sys @ 0x14000D2A0, case string "load_pending_auto_switch")

  L1: pending_auto_switch_state_lock_acquire_111  @ 0x14006EDC0  [DELTA-NEW: mutex guard; STORAGE SQLite→FS]
    L2: sub_14124A510 (spinlock wait)             @ 0x14124A510
    L2: sub_14124B1D0 (TLS context validator)     @ 0x14124B1D0
    L2: WakeByAddressSingle                       @ 0x14124A5D0  [WinAPI]
    L2: (vtable dispatch @ vtable+24)             [file-based state read — dynamic dispatch]
  L1: query_installed_skills_with_repo_111        @ 0x141214620  [DELTA-NEW: repo validation]
    L2: sub_1410A1DF0 (async combinator)          @ 0x1410A1DF0
    L2: sub_141222DD0 (key extractor)             @ 0x141222DD0
    L2: skill_store_get_all_111                   @ 0x14106D960
    L2: sub_14106D970 (drop)                      @ 0x14106D970
    L2: sub_140082100 (no-op combinator)          @ 0x140082100
  L1: confirm_pending_auto_switch_deserialize_request_sys @ 0x140089A50
    [state deserialization — filesystem-backed in 1.1.1; SQLite in 1.0.9]
  L1: has_notch_invoke_resolver_respond           @ 0x14080C3C0  [IPC response path]
  L1: sub_141212FB0 (memcpy utility)              @ 0x141212FB0
  L1: sub_140001370 (dealloc)                     @ 0x140001370
```

## Sibling handlers (same switch, adjacent cases)
| Command | VA | Note |
|---|---|---|
| dismiss_pending_auto_switch_handler_111 | 0x140029270 | sibling: dismiss pending state |
| confirm_pending_auto_switch_deserialize_request_sys | 0x140089A50 | sibling: confirm with deserialize |
| confirm_pending_auto_switch_and_restart_codex | string @ 0x1412ac311 | sibling: confirm+restart |

## Stats
- max_depth: 2 (inline L0 → named callees L1 → sub-callees L2)
- edges: 12
- NOTE: handler is inlined in dispatcher, no dedicated function; differs from all other analytics commands
- terminated_reasons: platform_primitive, implementation_leaf, WinAPI, named_shared_primitive
- storage_backend_delta: 1.0.9=SQLite, 1.1.1=filesystem (_InterlockedCompareExchange8 spinlock pattern)
