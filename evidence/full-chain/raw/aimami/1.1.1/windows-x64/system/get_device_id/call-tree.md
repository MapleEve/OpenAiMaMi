# get_device_id — Windows x64 1.1.1 Call Tree

**session**: <审计会话>
**platform**: windows-x64 | **version**: 1.1.1
**delta_class**: integrity_recovered
**max_depth**: 6 | **terminated_reason**: hashmap_lookup_leaf / mutex_primitive_leaf / ipc_response_leaf / serde_leaf

---

## Full Call Tree

| depth | VA | symbol (IDB name) | role | terminated_reason |
|---|---|---|---|---|
| 0 | `0x1400208C0` | `get_device_id_handler_111` | tauri_cmd_owner | — |
| 1 | `0x1400D7BB0` | `pending_auto_switch_state_lock_acquire_111` | state_lock_acquire | platform_primitive_leaf |
| 1 | `0x141214620` | `sub_141214620` | invoke_resolver / async_vtable_dispatch | library_internal |
| 2 | `0x140082100` | `sub_140082100` | future_executor_trampoline | library_leaf |
| 3 | `0x1410B1930` | `sub_1410B1930` | async_string_format_utility | library_leaf |
| 1 | `0x140783480` | `sub_140783480` | async_poll_waker / result_decoder | — |
| 2 | `_InterlockedCompareExchange8` | Windows CAS | mutex_lock_acquire | platform_primitive_leaf |
| 2 | `0x14124A510` | `sub_14124A510` | WaitOnAddress_spinwait | platform_primitive_leaf |
| 2 | `0x1401AB9A0` | `get_device_id_exec_hotspot_sys_111` | core_executor | — |
| 3 | `0x1401A15D0` | `codexmate_settings_hotspot_read_full_sys_111` | settings_full_read | — |
| 4 | `0x141093260` | `win32_file_read_bytes_111` | file_read | platform_io_leaf |
| 4 | `0x140002FA0` | `sub_140002FA0` | json_parse | serde_leaf |
| 4 | `0x14103A480` | `sub_14103A480("mysteryUnlockGrants",19)` | optional_field_lookup | hashmap_lookup_leaf |
| 4 | `0x14103A480` | `sub_14103A480("mysteryUnlockedRoutes",21)` | optional_field_lookup | hashmap_lookup_leaf |
| 4 | `0x14040CC30` | `codexmate_settings_field_lookup_sys_111` | main_key_lookup(key="CodexMateSettings") | — |
| 5 | `0x14040D9E0` | `sub_14040D9E0` | hashmap_entry_probe | hashmap_impl_leaf |
| 5 | `0x14040F9C0` | `sub_14040F9C0` | hashmap_value_extract | hashmap_impl_leaf |
| 3 | `0x1401A1D90` | `hotspot_config_serialize_json_sys_111` | json_serialize_5_fields | — |
| 4 | `0x14025A8C0` | `sub_14025A8C0` | serialize_field("hotspot",7) | serde_leaf |
| 4 | `0x140260580` | `sub_140260580` | serialize_field("usageRefreshInterval",20) | serde_leaf |
| 4 | `0x1402662D0` | `sub_1402662D0` | serialize_field("deviceId",8) | serde_leaf |
| 4 | `0x1402662D0` | `sub_1402662D0` | serialize_field("remoteDeviceSecret",18) | serde_leaf |
| 4 | `0x140267450` | `sub_140267450` | serialize_field("notificationsSince",18) | serde_leaf |
| 4 | `0x1403A64F0` | `sub_1403A64F0` | write_json_to_repo | repo_write_leaf |
| 2 | `0x14124A5D0` | `WakeByAddressSingle` | mutex_unlock | platform_primitive_leaf |
| 1 | `0x1408330B0` | `sub_1408330B0` | error_path_response_serializer | ipc_response_leaf |
| 2 | `0x14080C3C0` | `sub_14080C3C0` | tauri_ipc_response_resolve | ipc_response_leaf |

---

## IDB Write-back Summary

| VA | old name | new name | level | comment |
|---|---|---|---|---|
| `0x1400208C0` | `sub_1400208C0` | `get_device_id_handler_111` | A | delta comment written |
| `0x1401AB9A0` | `sub_1401AB9A0` | `get_device_id_exec_hotspot_sys_111` | A | delta comment written |
| `0x1401A1D90` | `sub_1401A1D90` | `hotspot_config_serialize_json_sys_111` | A | delta comment written |
| `0x1401A15D0` | already named | `codexmate_settings_hotspot_read_full_sys_111` | B | shared with get_hotspot_enabled |
| `0x14040CC30` | already named | `codexmate_settings_field_lookup_sys_111` | B | shared settings lookup |

idb_save: ok (path=<本地路径>

---

## Fake-Wall Check (ACCEPTED_UNKNOWN Taxonomy)

| category | verdict |
|---|---|
| `drop_in_place` ≠ async body | confirmed: async poll body in sub_140783480 decompiled cleanly |
| `architecture_only`/`budget rule` self-limit | N/A — all functions decompiled successfully |
| `async decompile failed` HexRays limit | N/A — HexRays decompiled all 5 key functions |
| wrong VA | N/A — string xref "get_device_id" n=1 @ 0x1412ac347, unique binding to 0x1400208C0 |
| vtable dynamic dispatch | sub_141214620 uses vtable (off_141899DC0) for lock check only; core path is direct |
| `HTTP-terminal` external-only | N/A — read-only settings file access, no HTTP |
| Poisoned lock guard (compilation noise) | filtered: aPoisonedLockAn + GLOBAL_PANIC_COUNT paths excluded from delta |

**genuine_ceiling**: false — all depth levels reachable to leaf, no ICF fold.

---

## Accepted Unknowns

| unknown | category | rationale |
|---|---|---|
| dim1 Frontend CCF | accepted_unknown | Frontend CCF not re-run for 1.1.1 win; 1.0.9 CCF confirmed `get_device_id()` invoke pattern. Response shape change (Option<String> → HotspotConfig JSON) is dim2/dim4 evidence, not dim1 |
| Exact struct byte offsets of HotspotConfig fields | accepted_unknown | Offsets (a3+16, a3+40, a3+64, a3+88, a3+112, a3+144) visible in serialize path but full struct layout not reconstructed |
| mysteryUnlockGrants / mysteryUnlockedRoutes semantics | accepted_unknown | Read in settings parse layer; not part of get_device_id response DTO; behavioral impact on response unclear |
| Inner async closure body (Future::poll) | accepted_unknown | State machine inlined into sub_140783480; core logic path confirmed via direct decompile |
| dim6 test/acceptance mapping | product_decision | C5 implementation side |
| Windows platform frontier vs mac 1.1.1 | accepted — separate producer | Mac 1.1.1 not yet reversed for this command |
