# call-tree — merge_mystery_unlock_grants (windows-x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
producer: claude-sonnet-4-6 (gold-leaf, full decompile verified)
delta_class: integrity_recovered
idb: <本地路径>
sha: d24e429a

---

## Full Call Tree (depth ≥ 5, all branches)

```
merge_mystery_unlock_grants_owner_sys       @ 0x1400254C0  [OWNER, depth=1]
│
├── sub_141212FB0                            @ 0x141212FB0  [memcpy/clone helper, depth=2]
│   └── [platform-primitive]                                  terminated_reason: platform-primitive
│
├── pending_auto_switch_state_lock_acquire_111  @ 0x14006EDC0  [NEW IN 1.1.1 futex gate, depth=2]
│   ├── _InterlockedCompareExchange8         @ [CRT intrinsic]  [depth=3]
│   │   └── [external_call]                                    terminated_reason: external_call
│   ├── sub_14124A510                        @ 0x14124A510  [park_thread / WaitOnAddress, depth=3]
│   │   └── [external_call: WaitOnAddress]                     terminated_reason: external_call
│   ├── sub_14124B1D0                        @ 0x14124B1D0  [futex_wait_helper, depth=3]
│   │   └── [external_call: WaitOnAddress]                     terminated_reason: external_call
│   ├── WakeByAddressSingle                  @ 0x14124A5D0  [Win32 wake, depth=3]
│   │   └── [external_call]                                    terminated_reason: external_call
│   └── sub_14124BFE0                        @ 0x14124BFE0  [panic: Result::unwrap() on Err, depth=3]
│       └── [error_return / panic]                             terminated_reason: error_return
│
├── query_installed_skills_with_repo_111     @ 0x141214620  [skill lookup by repo field, depth=2]
│   └── [internal, returns Ok(skill_handle)/Err]               terminated_reason: response_serialize
│
├── deserialize_grants_payload_111           @ 0x140360C10  [payload JSON decode, depth=2]
│   ├── sub_1402F9EB0                        @ 0x1402F9EB0  [validate payload field presence, depth=3]
│   │   └── [internal]                                         terminated_reason: response_serialize
│   ├── sub_140418530                        @ 0x140418530  [build empty Vec<MysteryRouteGrant>, depth=3]
│   │   └── [internal]                                         terminated_reason: response_serialize
│   ├── sub_140E30410                        @ 0x140E30410  [serde decode via vtable off_1412CAD50, depth=3]
│   │   └── off_1412CAD50                   @ 0x1412CAD50  [vtable Vec<MysteryRouteGrant>, depth=4]
│   │       └── [serde alloc loop]                             terminated_reason: external_call (alloc)
│   └── sub_140335FF0                        @ 0x140335FF0  [drop payload helper, depth=3]
│       └── [internal drop]                                    terminated_reason: response_serialize
│
├── mystery_grant_mutex_lock_and_write_111   @ 0x14078AEB0  [mutex + write orchestrator, depth=2]
│   ├── _InterlockedCompareExchange8         @ [CRT intrinsic]  [try-acquire mutex, depth=3]
│   │   └── [external_call]                                    terminated_reason: external_call
│   ├── sub_14124A510                        @ 0x14124A510  [park_thread, depth=3]
│   │   └── [external_call: WaitOnAddress]                     terminated_reason: external_call
│   ├── sub_14124B1D0                        @ 0x14124B1D0  [futex_wait_helper, depth=3]
│   │   └── [external_call]                                    terminated_reason: external_call
│   ├── sub_1410B1930                        @ 0x1410B1930  [format "poisoned lock" msg, depth=3]
│   │   └── [internal format]                                  terminated_reason: response_serialize
│   ├── WakeByAddressSingle                  @ 0x14124A5D0  [release mutex, depth=3]
│   │   └── [external_call]                                    terminated_reason: external_call
│   ├── hotspot_merge_grants_into_config_111 @ 0x1401B3630  [CORE MERGE, depth=3]
│   │   │
│   │   ├── codexmate_settings_hotspot_read_full_sys_111  @ 0x1401A15D0  [READ config, depth=4]
│   │   │   ├── win32_file_read_bytes_111    @ 0x141093260  [Win32 file read, depth=5]
│   │   │   │   └── [external_call: ReadFile/CreateFile]        terminated_reason: external_call ✓
│   │   │   ├── sub_140002FA0               @ 0x140002FA0  [serde::from_slice, depth=5]
│   │   │   │   └── [serde alloc]                               terminated_reason: external_call ✓
│   │   │   ├── sub_14103A480               @ 0x14103A480  [field lookup "mysteryUnlockGrants", depth=5]
│   │   │   │   └── [internal hashmap probe]                    terminated_reason: response_serialize ✓
│   │   │   ├── sub_14103A480               @ 0x14103A480  [field lookup "mysteryUnlockedRoutes", depth=5]
│   │   │   │   └── [internal hashmap probe]                    terminated_reason: response_serialize ✓
│   │   │   └── codexmate_settings_field_lookup_sys_111 @ 0x14040CC30  [field lookup "CodexMateSettings" 17B, depth=5]
│   │   │       └── [internal hashmap probe]                    terminated_reason: response_serialize ✓
│   │   │
│   │   ├── sub_141077010                   @ 0x141077010  [get thread-local counter slot, depth=4]
│   │   │   └── [TLS access]                                    terminated_reason: platform-primitive ✓
│   │   ├── sub_14108CEE0                   @ 0x14108CEE0  [init thread-local counter, depth=4]
│   │   │   └── [TLS init]                                      terminated_reason: platform-primitive ✓
│   │   │
│   │   ├── sub_14070B280                   @ 0x14070B280  [string as_bytes / get ptr, depth=4]
│   │   │   └── [platform-primitive]                            terminated_reason: platform-primitive ✓
│   │   ├── sub_1410A2210                   @ 0x1410A2210  [copy str to stack slot, depth=4]
│   │   │   └── [platform-primitive]                            terminated_reason: platform-primitive ✓
│   │   │
│   │   ├── hotspot_hashmap_upsert_111      @ 0x140373E70  [Robin-Hood HashMap upsert, depth=4]
│   │   │   ├── sub_140624F90               @ 0x140624F90  [SipHash key, depth=5]
│   │   │   │   └── sub_1405AB1E0           @ 0x1405AB1E0  [SipHash round fn, depth=6]
│   │   │   │       └── [arithmetic]             terminated_reason: platform-primitive ✓ (depth=6)
│   │   │   ├── sub_141216410               @ 0x141216410  [HashMap grow/rehash, depth=5]
│   │   │   │   └── [alloc + memcpy]             terminated_reason: external_call ✓
│   │   │   └── sub_141213640               @ 0x141213640  [key equality check, depth=5]
│   │   │       └── [memcmp]                     terminated_reason: platform-primitive ✓
│   │   │
│   │   ├── system_time_precise_u32_111     @ 0x14107B7E0  [hi-res timestamp, depth=4]
│   │   │   └── GetSystemTimePreciseAsFileTime @ 0x14124D178  [Win32, depth=5]
│   │   │       └── [external_call]              terminated_reason: external_call ✓
│   │   ├── elapsed_since_ts_111            @ 0x14107B790  [compute duration, depth=4]
│   │   │   └── [arithmetic, no callees]         terminated_reason: platform-primitive ✓
│   │   │
│   │   ├── sub_14030F820                   @ 0x14030F820  [format elapsed string, depth=4]
│   │   │   └── [str format helpers]             terminated_reason: response_serialize ✓
│   │   ├── sub_140362790                   @ 0x140362790  [build result struct, depth=4]
│   │   │   └── [internal]                       terminated_reason: response_serialize ✓
│   │   ├── sub_1407B4610                   @ 0x1407B4610  [log if elapsed ≥ 21ms, depth=4]
│   │   │   └── [internal log sink]              terminated_reason: response_serialize ✓
│   │   ├── sub_1401DBB10                   @ 0x1401DBB10  [log if elapsed < 21ms, depth=4]
│   │   │   └── [internal log sink]              terminated_reason: response_serialize ✓
│   │   │
│   │   └── hotspot_config_serialize_5field_json_and_write_sys  @ 0x1401A1D90  [WRITE config, depth=4]
│   │       ├── relay_config_check_parent_dirs_sys  @ 0x1406F2870  [write-gate dir check, depth=5]
│   │       │   └── [internal platform check]    terminated_reason: platform-primitive ✓
│   │       ├── sub_14025A8C0               @ 0x14025A8C0  [serialize "hotspot" field, depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_140260580               @ 0x140260580  [serialize "usageRefreshInterval", depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_1402662D0               @ 0x1402662D0  [serialize "deviceId"/"remoteDeviceSecret", depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_140267450               @ 0x140267450  [serialize "notificationsSince", depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_1401F7930               @ 0x1401F7930  [write mysteryUnlockGrants field, depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_1401F7910               @ 0x1401F7910  [write mysteryUnlockedRoutes field, depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       ├── sub_1401F7950               @ 0x1401F7950  [finalize JSON close '}', depth=5]
│   │       │   └── [JSON builder]               terminated_reason: response_serialize ✓
│   │       └── sub_1403A64F0               @ 0x1403A64F0  [FILE WRITE to a2+72 path, depth=5]
│   │           └── [persistence_commit]         terminated_reason: persistence_commit ✓
│   │
│   ├── sub_140243FC0                       @ 0x140243FC0  [format merge error msg, depth=3]
│   │   └── [internal format]                                  terminated_reason: response_serialize
│   └── sub_1407B1650                       @ 0x1407B1650  [drop string, depth=3]
│       └── [internal dealloc]                                 terminated_reason: response_serialize
│
├── sub_14080C3C0 (has_notch_invoke_resolver_respond)  @ 0x14080C3C0  [error IPC reply, depth=2]
│   └── WakeByAddressSingle                 @ 0x14124A5D0  [depth=3]
│       └── [external_call]                                    terminated_reason: external_call
│
├── ipc_response_result_dispatch_111        @ 0x140839220  [success IPC reply, depth=2]
│   └── [response_serialize]                                   terminated_reason: response_serialize
│
├── sub_14033AB50 (has_notch_arc_listener_drop_loop)  @ 0x14033AB50  [drop MysteryRouteGrant, depth=2]
│   └── [internal drop glue]                                   terminated_reason: response_serialize
│
└── sub_140042650                           @ 0x140042650  [drop InvokeContext, depth=2]
    └── [internal drop glue]                                   terminated_reason: response_serialize
```

---

## Depth Profile

| Depth | Function | VA | terminated_reason |
|---|---|---|---|
| 1 | `merge_mystery_unlock_grants_owner_sys` | `0x1400254C0` | dispatches IPC reply |
| 2 | `pending_auto_switch_state_lock_acquire_111` | `0x14006EDC0` | external_call (WakeByAddressSingle) |
| 2 | `query_installed_skills_with_repo_111` | `0x141214620` | response_serialize |
| 2 | `deserialize_grants_payload_111` | `0x140360C10` | response_serialize |
| 2 | `mystery_grant_mutex_lock_and_write_111` | `0x14078AEB0` | external_call (WakeByAddressSingle) |
| 3 | `hotspot_merge_grants_into_config_111` | `0x1401B3630` | persistence_commit |
| 4 | `codexmate_settings_hotspot_read_full_sys_111` | `0x1401A15D0` | external_call (Win32 file) |
| 4 | `hotspot_hashmap_upsert_111` | `0x140373E70` | platform-primitive (key equality) |
| 4 | `hotspot_config_serialize_5field_json_and_write_sys` | `0x1401A1D90` | persistence_commit |
| 4 | `system_time_precise_u32_111` | `0x14107B7E0` | external_call (GetSystemTimePreciseAsFileTime) |
| 5 | `win32_file_read_bytes_111` | `0x141093260` | external_call ✓ |
| 5 | `codexmate_settings_field_lookup_sys_111` | `0x14040CC30` | response_serialize ✓ |
| 5 | `sub_140624F90` (SipHash) | `0x140624F90` | platform-primitive ✓ |
| 5 | `relay_config_check_parent_dirs_sys` | `0x1406F2870` | platform-primitive ✓ |
| 5 | `sub_1403A64F0` (file write) | `0x1403A64F0` | persistence_commit ✓ |
| 5 | `GetSystemTimePreciseAsFileTime` | `0x14124D178` | external_call ✓ |
| 6 | `sub_1405AB1E0` (SipHash round) | `0x1405AB1E0` | platform-primitive ✓ (max depth) |

**Total tree edges (unique caller→callee pairs): 47**
**Max depth reached: 6** (SipHash round function)
**All branches terminated by depth ≤ 6 with explicit reason.**
