# load_usage_analytics — Call Tree (Windows x64)
# session: <审计会话>
# owner VA: 0x14001B850 | size: 0x38f

## Depth-annotated tree

```
L0: sub_14001B850 (load_usage_analytics handler) @ 0x14001B850
  L1: sub_141212FB0 (payload_ctx memcpy)         @ 0x141212FB0  [shared primitive]
  L1: pending_auto_switch_state_lock_acquire_111  @ 0x14006EDC0  [DELTA-NEW: mutex guard]
    L2: sub_14124A510 (spinlock wait)             @ 0x14124A510
    L2: sub_14124B1D0 (TLS context validator)     @ 0x14124B1D0
    L2: WakeByAddressSingle                       @ 0x14124A5D0  [WinAPI]
  L1: query_installed_skills_with_repo_111        @ 0x141214620  [DELTA-NEW: repo validation]
    L2: sub_1410A1DF0 (async combinator)          @ 0x1410A1DF0
    L2: sub_141222DD0 (key extractor)             @ 0x141222DD0
    L2: skill_store_get_all_111                   @ 0x14106D960
    L2: sub_14106D970 (drop)                      @ 0x14106D970
    L2: sub_140082100 (no-op combinator)          @ 0x140082100
  L1: sub_1401C9EF0 (usage data collector)        @ 0x1401C9EF0  [NO range param — direct call]
    L2: sub_14124A510 (spinlock wait)             @ 0x14124A510
    L2: quota_history_point_deep_copy_111         @ 0x1401EB870
      L3: sub_141212FB0 (memcpy)                  @ 0x141212FB0
      L3: sub_140001360 (alloc)                   @ 0x140001360
      L3: sub_140001370 (dealloc)                 @ 0x140001370
    L2: WakeByAddressSingle                       @ 0x14124A5D0  [WinAPI]
    L2: sub_1401C21E0 (check error cache)         @ 0x1401C21E0
    L2: relay_config_check_parent_dirs_sys        @ 0x1406F2870  [SIDE EFFECT: dir creation]
    L2: load_mcp_servers_read_existing_snapshot_111 @ 0x1401BF000  [SIDE EFFECT: MCP snapshot read]
    L2: system_time_precise_u32_111               @ 0x14107B7E0
      L3: GetSystemTimeAsFileTime                  (WinAPI)
    L2: elapsed_since_ts_111                      @ 0x14107B790
    L2: sub_1410A2210 (skill snapshot step 1)     @ 0x1410A2210
    L2: sub_1403644C0 (skill snapshot step 2)     @ 0x1403644C0
    L2: serialize_skill_snapshot_json_111         @ 0x140197420  [SIDE EFFECT: JSON serialization]
    L2: win32_file_write_bytes_111                @ 0x141093710  [SIDE EFFECT: CreateFileW WRITE]
      L3: CreateFileW                              (WinAPI — write)
      L3: WriteFile                                (WinAPI)
      L3: CloseHandle                              (WinAPI)
    L2: sub_1401D6610 (drop serialization ctx)    @ 0x1401D6610
    L2: sub_140213F70 (build usage response)      @ 0x140213F70
    L2: sub_140243FC0 (error serializer)          @ 0x140243FC0
    L2: usage_fetch_error_drop_111                @ 0x1401D4C70
    L2: diagnostic_paths_drop_sys                 @ 0x140046870
    L2: sub_140001370 (dealloc)                   @ 0x140001370
  L1: sub_140836690 (usage analytics response builder) @ 0x140836690
  L1: has_notch_invoke_resolver_respond (error)   @ 0x14080C3C0
  L1: has_notch_arc_listener_drop_loop            @ 0x14033AB50
  L1: sub_140042650 (drop payload ctx)            @ 0x140042650
  L1: nullsub_1 (vtable stub)                     @ 0x1400013A0
  L1: sub_14124BCCB (OOM/panic)                   @ 0x14124BCCB
  L1: sub_140001360 (alloc)                       @ 0x140001360
  L1: sub_140001370 (dealloc)                     @ 0x140001370
```

## Stats
- max_depth: 3 (with WinAPI at effective L4)
- edges: 29
- **UNIQUE**: Only analytics command with write side effects (relay dir + MCP snapshot + skill JSON + CreateFileW)
- **UNIQUE**: Does NOT accept range param — direct call to sub_1401C9EF0 (unlike all other analytics)
- terminated_reasons: platform_primitive, implementation_leaf, external_call (WinAPI), named_shared_primitive
