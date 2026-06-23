# get_mystery_unlock_grants — Call Tree (gold-leaf)
session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
delta_class: integrity_recovered
sha: d24e429a

## Annotated Tree (max depth 7, all leaves terminated)

```
get_mystery_unlock_grants_handler_111        0x140023560  [owner, depth=1]
│   IPC string: "get_mystery_unlock_grants" @ 0x1412AC39A
│   Registered in: tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
│   Frontend CCF: getMysteryUnlockGrants (assets/index-DdcCOEJG.js)
│
├─ _InterlockedCompareExchange8              [intrinsic, depth=2, OS-atomic, terminated]
│
├─ sub_14124A510                             0x14124A510  [depth=2, poison-guard wake]
│   └─ WakeByAddressSingle                  [OS, depth=3, terminated]
│
├─ sub_14124B1D0                             0x14124B1D0  [depth=2, tracing gate, terminated]
│
├─ hotspot_read_and_check_elapsed_111        0x1401AF310  [depth=2, DELTA core]  ← key path
│   │
│   ├─ codexmate_settings_hotspot_read_full_sys_111   0x1401A15D0  [depth=3, NEW]
│   │   │   reads: mysteryUnlockGrants (19B @ 0x1412B684A)
│   │   │   reads: mysteryUnlockedRoutes (21B @ 0x1412B685D)  [companion]
│   │   │
│   │   ├─ win32_file_read_bytes_111         0x141093260  [depth=4, FS read, terminated]
│   │   │     path from ctx+584; error → zero defaults
│   │   ├─ sub_140002FA0                     [depth=4, JSON tokenize, terminated]
│   │   │     error tag=6 → zero defaults
│   │   ├─ sub_14103A480 → "mysteryUnlockGrants"  (19B)  [depth=4, key lookup, NEW]
│   │   ├─ sub_14103A480 → "mysteryUnlockedRoutes" (21B)  [depth=4, key lookup, NEW]
│   │   ├─ sub_14030F100                     [depth=4, token-array → vec, NEW]
│   │   ├─ sub_1403059A0                     [depth=4, Grant Vec build, NEW]
│   │   ├─ sub_14103A580 → "mysteryUnlockGrants" write-back  [depth=4, key insert, NEW]
│   │   ├─ sub_1401D3F90                     [depth=4, drop json-val, terminated]
│   │   ├─ sub_1401D2850                     [depth=4, drop err tokens, terminated]
│   │   └─ codexmate_settings_field_lookup_sys_111  0x14040CC30  [depth=4, terminated]
│   │
│   ├─ system_time_precise_u32_111           0x14107B7E0  [depth=3, NEW, terminated]
│   │     returns {u32_lo, u32_hi} epoch components
│   │
│   ├─ elapsed_since_ts_111                  0x14107B790  [depth=3, NEW, terminated]
│   │     args: constants 3577643008 / 27111902
│   │     returns elapsed ms (or 0 on overflow)
│   │
│   ├─ sub_14010D900                         [depth=3, grant expiry filter, NEW]
│   │     stable partition Vec<Grant> retaining expiresAtMs >= elapsed_ms
│   │     element stride=40; calls sub_140304CD0 for partition
│   │     └─ sub_140304CD0                   [depth=4, retain predicate, terminated]
│   │
│   ├─ hotspot_config_serialize_json_sys_111  0x1401A1D90  [depth=3, DELTA serialize]
│   │     only called when grant count changes (conditional persist)
│   │   ├─ relay_config_check_parent_dirs_sys  0x1406F2870  [depth=4, terminated]
│   │   ├─ sub_14025A8C0  → "hotspot" (7B)          [depth=4, terminated]
│   │   ├─ sub_140260580  → "usageRefreshInterval"  [depth=4, terminated]
│   │   ├─ sub_1402662D0  → "deviceId"              [depth=4, terminated]
│   │   ├─ sub_1402662D0  → "remoteDeviceSecret"    [depth=4, terminated]
│   │   ├─ sub_140267450  → "notificationsSince"    [depth=4, terminated]
│   │   ├─ sub_1401F7930  → "apiProxy" (optional)   [depth=4, terminated]
│   │   └─ sub_1401F7910  → "mysteryUnlockGrants"   [depth=4, NEW entry-point]
│   │       └─ mystery_unlock_grants_vec_json_serialize_111  0x14025DD50  [depth=5, NEW]
│   │           │   emits '[' ... ']', stride=40 per Grant
│   │           └─ mystery_unlock_grant_item_json_serialize_111  0x1401BA120  [depth=6, NEW]
│   │               │   emits '{' "route" [:value] ["expiresAtMs":u64] '}'
│   │               ├─ sub_140260580  → "route" (5B @ 0x1412B6EB1)   [depth=7, terminated]
│   │               └─ sub_140267450  → "expiresAtMs" (11B @ 0x1412B6EB6, conditional) [depth=7, terminated]
│   │
│   └─ sub_140001370                         [depth=3, dealloc, terminated]
│         drops intermediate String fields (v19..v28) in success path
│
├─ sub_140789210                             0x140789210  [depth=2, Result-unwrap shim]
│   │   NOTE: sweep bucket erroneously listed this as owner va_111 — it is a callee
│   └─ WakeByAddressSingle                  [depth=3, OS, terminated]
│
├─ sub_140243FC0                             [depth=2, err payload → oword, terminated]
├─ sub_1407B1650                             [depth=2, drop local_out, terminated]
│
└─ ipc_response_result_dispatch_111          0x140839220  [depth=2, IPC finalize]
    ├─ sub_140330920                         [depth=3, err serializer, terminated]
    ├─ sub_140807390                         [depth=3, cleanup, terminated]
    └─ sub_14080C3C0                         [depth=3, InvokeResolver finalize]
        ├─ _InterlockedCompareExchange8      [depth=4, intrinsic, terminated]
        ├─ vtable[+24](consumer)             [depth=4, dynamic dispatch, terminated]
        └─ WakeByAddressSingle               [depth=4, OS, terminated]
```

**Max depth reached: 7**
**All leaf nodes terminated**: OS primitive / allocator / formatter / already-analyzed runtime glue

---

## Function VA Index

| Function | VA | Notes |
|---|---|---|
| get_mystery_unlock_grants_handler_111 | 0x140023560 | owner |
| tauri_ipc_main_dispatcher_sys | 0x14000D2A0 | caller (registration) |
| hotspot_read_and_check_elapsed_111 | 0x1401AF310 | DELTA core |
| codexmate_settings_hotspot_read_full_sys_111 | 0x1401A15D0 | NEW |
| win32_file_read_bytes_111 | 0x141093260 | FS read |
| system_time_precise_u32_111 | 0x14107B7E0 | NEW timer |
| elapsed_since_ts_111 | 0x14107B790 | NEW elapsed |
| sub_14010D900 | 0x14010D900 | NEW expiry filter |
| hotspot_config_serialize_json_sys_111 | 0x1401A1D90 | DELTA (7 fields) |
| relay_config_check_parent_dirs_sys | 0x1406F2870 | dir check |
| mystery_unlock_grants_vec_json_serialize_111 | 0x14025DD50 | NEW |
| mystery_unlock_grant_item_json_serialize_111 | 0x1401BA120 | NEW |
| codexmate_settings_field_lookup_sys_111 | 0x14040CC30 | field lookup |
| ipc_response_result_dispatch_111 | 0x140839220 | IPC send |
| sub_14080C3C0 | 0x14080C3C0 | InvokeResolver finalize |
| sub_140789210 | 0x140789210 | Result-unwrap shim (NOT owner) |

---

## String Evidence

| String | VA | Use |
|---|---|---|
| `"get_mystery_unlock_grants"` | 0x1412AC39A | IPC command name |
| `"mysteryUnlockGrants"` | 0x1412B684A | settings read key (19B) |
| `"mysteryUnlockedRoutes"` | 0x1412B685D | companion read key (21B) |
| `"route"` | 0x1412B6EB1 | Grant field key (5B) |
| `"expiresAtMs"` | 0x1412B6EB6 | Grant field key (11B) |
| `"CodexMateSettings"` | 0x1412B6E40 | outer JSON key |

*gold-leaf; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf*
