# upsert_relay_provider call-tree — AiMaMi 1.1.1 win64

session: wf-aimami111-delta-20260618-goldleaf
delta_class: integrity_recovered
produced_at: 2026-06-18
note: upgraded from sweep-level to gold-leaf (real HexRays, all VAs verified)

```
upsert_relay_provider_cmd_handler_111 [0x1400149d0, 0x5de bytes]           depth=0
├── sub_141212FB0                             [memcpy — noise]               depth=1
├── confirm_pending_auto_switch_deserialize_request_sys [0x140089a50]        depth=1
│   └── sub_140729280, sub_141212FB0, sub_140E21E40, sub_1405A4490
│       sub_1400492A0, sub_140E20CA0, sub_140E20AC0
├── run_codex_router_diagnostics_owner_sys    [0x14006f4b0]                  depth=1
│   └── _InterlockedCompareExchange8 (CAS), WakeByAddressSingle
│       sub_14124A510, sub_14124B1D0
│       (SIMD hashmap probe hash=0x945CA2F02A2B6F44, vtable dispatch vtable[3]=sub_140031D80)
├── query_installed_skills_with_repo_111      [0x141214620]                  depth=1
│   ├── sub_1410A1DF0, sub_141222DD0
│   └── skill_store_get_all_111              [0x14106d960]                   depth=2
│       └── skill_store_iter_111             [0x14106de20]   LEAF            depth=3
│           terminated_reason: single-call passthrough (internal iter)
├── sub_140241460                             [RelayUpsertInput serde deserializer]  depth=1
│   ├── sub_1402F9EB0                         [validate raw bytes]           depth=2
│   ├── sub_14041DEA0                         [serde field dispatch, "RelayUpsertInput", 10 fields]  depth=2
│   ├── sub_140E30410                         [Display fmt helper]           depth=2
│   └── sub_140232000                         [drop helper]                  depth=2
├── relay_provider_upsert_wrapper_sys [0x14021A880]  (renamed from sub_14021A880)  depth=1
│   ├── relay_provider_upsert_core_sys [0x1406e4500]                         depth=2
│   │   ├── sub_140C38E50                    [get current datetime]          depth=3
│   │   ├── sub_1410A2210                    [Arc clone / RwLock acquire]    depth=3
│   │   ├── sub_140364880                    [Vec snapshot helper]           depth=3
│   │   ├── uuid_v4_generate_raw_sys [0x140f5a860]  LEAF                    depth=3
│   │   │   terminated_reason: platform CSPRNG (Windows RtlGenRandom or equivalent)
│   │   ├── sub_140F5A900                    [UUID format to string, 36 chars hyphenated]  depth=3
│   │   ├── sub_1407180F0                    [String from UUID bytes]        depth=3
│   │   ├── sub_140300A90                    [String clone helper]           depth=3
│   │   ├── sub_141220D00                    [Vec grow/realloc]              depth=3
│   │   ├── sub_141213640                    [str compare (name lookup)]     depth=3
│   │   ├── relay_quota_item_clone_sys [0x14065f950]  LEAF                  depth=3
│   │   │   terminated_reason: struct memcpy leaf (232-byte RelayProvider clone)
│   │   ├── relay_draft_test_input_drop_sys [0x1401d6220]  LEAF             depth=3
│   │   │   terminated_reason: drop impl leaf
│   │   ├── sub_14072A3A0                    [state Vec snapshot helper]     depth=3
│   │   ├── import_accounts_keychain_write_sys [0x1402f08b0]  [conditional: v130]  depth=3
│   │   │   terminated_reason: platform keychain write (Windows Credential Store)  LEAF
│   │   ├── relay_providers_config_write_and_persist_sys [0x1406e6960]       depth=3
│   │   │   ├── relay_state_serialize_under_lock_sys [0x1406da6b0]  LEAF    depth=4
│   │   │   │   terminated_reason: serialize relay state under CAS spinlock leaf
│   │   │   ├── relay_config_serialize_and_atomic_write_sys [0x1406eaed0]    depth=4
│   │   │   │   ├── relay_config_check_parent_dirs_sys [0x1406f2870]  LEAF  depth=5
│   │   │   │   │   terminated_reason: fs dir check leaf (CreateDirectoryW path)
│   │   │   │   ├── sub_14020A3E0            [serde pretty-print 2-space indent]  depth=5
│   │   │   │   │   terminated_reason: JSON serialization leaf (no further 逆向分析 expansion)
│   │   │   │   └── relay_atomic_write_leaf_sys [0x140504310]  LEAF         depth=5
│   │   │   │       terminated_reason: atomic fs write (GetCurrentProcessId + tmp rename + CloseHandle)
│   │   │   └── relay_state_snapshot_drop_sys [0x140234AC0]  LEAF           depth=4
│   │   │       terminated_reason: drop helper for relay state snapshot
│   │   └── relay_post_login_state_sync_sys [0x1406e1750]  ← DELTA ENTRY   depth=3
│   │       ├── relay_state_read_lock_snapshot_sys [0x1406e8480]  LEAF      depth=4
│   │       │   terminated_reason: RwLock read snapshot leaf
│   │       ├── sub_14030B390               [snapshot derive helper]         depth=4
│   │       ├── sub_1403654F0               [result accumulate helper]       depth=4
│   │       ├── sub_1410AFA10               [RwLock read arc vtable helper]  depth=4
│   │       ├── sub_14073BC50               [state-machine drive]  LEAF      depth=4
│   │       │   terminated_reason: complex internal state machine (depth budget reached)
│   │       ├── sub_140732660               [result write leaf]  LEAF        depth=4
│   │       │   terminated_reason: result write leaf
│   │       ├── relay_draft_test_input_drop_sys [0x1401d6220]  LEAF         depth=4
│   │       ├── sub_140708350               [error state cleanup]            depth=4
│   │       ├── sub_14073BF10               [state guard helper]             depth=4
│   │       └── relay_state_snapshot_drop_sys [0x140234AC0]  LEAF           depth=4
│   └── relay_post_upsert_tray_refresh_bridge_sys [0x1407989f0]  DELTA      depth=2
│       ├── tray_rebuild_on_relay_state_change_sys [0x1407981a0]             depth=3
│       │   ├── sub_140791920               [tray state read helper]         depth=4
│       │   ├── pending_auto_switch_state_lock_acquire_111 [0x14006edc0]  LEAF depth=4
│       │   │   terminated_reason: Mutex acquire leaf
│       │   ├── load_mcp_servers_read_existing_snapshot_111 [0x1401bf000]  LEAF depth=4
│       │   │   terminated_reason: read-only MCP snapshot leaf
│       │   ├── tray_menu_rebuild_active_sys [0x14079bde0]  LEAF            depth=4
│       │   │   terminated_reason: tray rebuild leaf (Tauri tray API)  [main branch: state!=3 OR state==3+mcp!=3]
│       │   └── sub_140799E00               LEAF                            depth=4
│       │       terminated_reason: alternate tray leaf [branch: state==3 AND mcp==3]
│       ├── sub_14051C460                   [IpcMessage response type check] depth=3
│       ├── sub_1407C0400                   [pending watcher dispatch]       depth=3
│       ├── sub_1407B05F0                   [pending watcher cleanup]        depth=3
│       └── sub_14033E8A0                   [Arc inner drop]                 depth=3
├── relay_provider_upsert_ok_response_send_sys [0x140835330]  [success path] depth=1
│   ├── sub_14022C450                       [result unwrap helper]           depth=2
│   ├── sub_140E30410                       [Display fmt]                    depth=2
│   ├── sub_140807390                       [warnings serialize]             depth=2
│   └── has_notch_invoke_resolver_respond / sub_14080C3C0  LEAF             depth=2
│       terminated_reason: IPC response send (Tauri IPC leaf)
└── has_notch_invoke_resolver_respond / sub_14080C3C0  LEAF  [error paths]  depth=1
    terminated_reason: IPC response send (Tauri IPC leaf)
```

## Terminated reasons per leaf

| leaf function | VA | depth | terminated_reason |
|---|---|---|---|
| skill_store_iter_111 | 0x14106de20 | 3 | single-call passthrough |
| uuid_v4_generate_raw_sys | 0x140f5a860 | 3 | platform CSPRNG leaf |
| relay_quota_item_clone_sys | 0x14065f950 | 3 | struct memcpy leaf (232 bytes) |
| relay_draft_test_input_drop_sys | 0x1401d6220 | 3/4 | drop impl leaf |
| import_accounts_keychain_write_sys | 0x1402f08b0 | 3 | platform keychain write leaf (conditional) |
| relay_state_serialize_under_lock_sys | 0x1406da6b0 | 4 | serialize under CAS spinlock leaf |
| relay_state_snapshot_drop_sys | 0x140234AC0 | 4 | drop helper leaf |
| relay_config_check_parent_dirs_sys | 0x1406f2870 | 5 | fs dir check leaf |
| sub_14020A3E0 (JSON pretty-print) | — | 5 | JSON serialization leaf |
| relay_atomic_write_leaf_sys | 0x140504310 | 5 | atomic fs write + WIN API leaf |
| relay_state_read_lock_snapshot_sys | 0x1406e8480 | 4 | RwLock read snapshot leaf |
| sub_14073BC50 | — | 4 | state-machine drive (complex, not expanded) |
| sub_140732660 | — | 4 | result write leaf |
| pending_auto_switch_state_lock_acquire_111 | 0x14006edc0 | 4 | Mutex acquire leaf |
| load_mcp_servers_read_existing_snapshot_111 | 0x1401bf000 | 4 | read-only MCP snapshot leaf |
| tray_menu_rebuild_active_sys | 0x14079bde0 | 4 | tray rebuild leaf (Tauri tray API) |
| sub_140799E00 | 0x140799e00 | 4 | alternate tray leaf (state==3+mcp==3 branch) |
| has_notch_invoke_resolver_respond (sub_14080C3C0) | — | 1/2 | IPC response send leaf |

## Depth count from owner

- Depth 1: confirm_pending_auto_switch_deserialize_request_sys, run_codex_router_diagnostics_owner_sys, query_installed_skills_with_repo_111, sub_140241460, relay_provider_upsert_wrapper_sys, relay_provider_upsert_ok_response_send_sys, sub_14080C3C0 (error)
- Depth 2: skill_store_get_all_111, relay_provider_upsert_core_sys, relay_post_upsert_tray_refresh_bridge_sys, serde sub-callees
- Depth 3: uuid_v4_generate_raw_sys, relay_quota_item_clone_sys, relay_draft_test_input_drop_sys, relay_providers_config_write_and_persist_sys, relay_post_login_state_sync_sys, import_accounts_keychain_write_sys, tray_rebuild_on_relay_state_change_sys, sub_14051C460, sub_1407C0400
- Depth 4: relay_state_serialize_under_lock_sys, relay_config_serialize_and_atomic_write_sys, relay_state_snapshot_drop_sys, relay_state_read_lock_snapshot_sys, sub_14073BC50, sub_140732660, pending_auto_switch_state_lock_acquire_111, load_mcp_servers_read_existing_snapshot_111, tray_menu_rebuild_active_sys, sub_140799E00, sub_140791920
- Depth 5: relay_config_check_parent_dirs_sys, sub_14020A3E0 (JSON), relay_atomic_write_leaf_sys — **max depth, all terminated**

**Max depth reached: 5 (gold-leaf standard met)**
