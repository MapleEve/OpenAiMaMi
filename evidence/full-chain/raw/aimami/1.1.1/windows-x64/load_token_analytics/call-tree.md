# load_token_analytics — Call Tree (Windows x64)
# session: <审计会话>
# owner VA: 0x140027A40 | size: 0x4c1

## Depth-annotated tree

```
L0: sub_140027A40 (load_token_analytics handler) @ 0x140027A40
  L1: sub_141212FB0 (payload_ctx memcpy)        @ 0x141212FB0  [shared primitive]
  L1: pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0  [DELTA-NEW: mutex guard]
    L2: sub_14124A510 (spinlock wait)            @ 0x14124A510
    L2: sub_14124B1D0 (TLS context validator)    @ 0x14124B1D0
    L2: WakeByAddressSingle                      @ 0x14124A5D0  [WinAPI]
  L1: query_installed_skills_with_repo_111       @ 0x141214620  [DELTA-NEW: repo validation]
    L2: sub_1410A1DF0 (async combinator)         @ 0x1410A1DF0
    L2: sub_141222DD0 (key extractor)            @ 0x141222DD0
    L2: skill_store_get_all_111                  @ 0x14106D960
    L2: sub_14106D970 (drop)                     @ 0x14106D970
    L2: sub_140082100 (no-op combinator)         @ 0x140082100
  L1: remove_skill_parse_id_param_111 (parse range) @ 0x1402FED40
  L1: sub_1401C98B0 (token range filter)         @ 0x1401C98B0
    L2: sub_14124A510 (spinlock wait)            @ 0x14124A510
    L2: quota_history_point_deep_copy_111        @ 0x1401EB870
      L3: sub_141212FB0 (memcpy)                 @ 0x141212FB0
      L3: sub_140001360 (alloc)                  @ 0x140001360
      L3: sub_140001370 (dealloc)                @ 0x140001370
    L2: WakeByAddressSingle                      @ 0x14124A5D0  [WinAPI]
    L2: sub_140203BB0 (token range matcher)      @ 0x140203BB0  [DISTINCT from session/change/tool]
    L2: sub_140215050 (token response ctor)      @ 0x140215050  [DISTINCT from session/change]
    L2: sub_140243FC0 (error serializer)         @ 0x140243FC0
    L2: usage_fetch_error_drop_111               @ 0x1401D4C70
    L2: diagnostic_paths_drop_sys                @ 0x140046870
    L2: sub_140001370 (dealloc)                  @ 0x140001370
  L1: sub_140837DC0 (token analytics response builder) @ 0x140837DC0
  L1: has_notch_invoke_resolver_respond (error)  @ 0x14080C3C0
  L1: has_notch_arc_listener_drop_loop           @ 0x14033AB50
  L1: sub_140042650 (drop payload ctx)           @ 0x140042650
  L1: nullsub_1 (vtable stub)                    @ 0x1400013A0
  L1: sub_14124BCCB (OOM/panic)                  @ 0x14124BCCB
  L1: sub_140001360 (alloc)                      @ 0x140001360
  L1: sub_140001370 (dealloc)                    @ 0x140001370
```

## Stats
- max_depth: 3
- edges: 23
- NOTE: token_range_filter (sub_1401C98B0) uses distinct range matcher (sub_140203BB0) and
  response constructor (sub_140215050) vs session (sub_140204F00/sub_1402168D0) and
  change (sub_140204660/sub_1402171C0) and tool (sub_140203160/sub_1402168D0)
- terminated_reasons: platform_primitive, implementation_leaf, named_shared_primitive
