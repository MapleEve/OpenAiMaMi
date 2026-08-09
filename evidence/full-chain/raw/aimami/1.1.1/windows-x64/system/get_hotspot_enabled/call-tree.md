# get_hotspot_enabled — Windows x64 1.1.1 Call Tree

**session**: <审计会话>
**platform**: windows-x64 | **version**: 1.1.1
**max_depth**: 4 | **terminated_reason**: hashmap_lookup_leaf / mutex_primitive_leaf / ipc_response_leaf

---

## Full Call Tree

| depth | VA | symbol (IDB name) | role | terminated_reason |
|---|---|---|---|---|
| 0 | `0x140021570` | `get_hotspot_enabled_owner_sys_111` | tauri_cmd_owner | — |
| 1 | `0x141214620` | `sub_141214620` | invoke_resolver / arg_deserialize | library_internal |
| 1 | `0x14060CBC0` | `get_hotspot_config_core_read_sys_111` | hotspot_config_mutex_read | — |
| 2 | `_InterlockedCompareExchange8` | Windows CAS | mutex_lock_acquire | platform_primitive_leaf |
| 2 | `0x14124A510` | `sub_14124A510` | WaitOnAddress_spinwait | platform_primitive_leaf |
| 2 | `0x1401A15D0` | `codexmate_settings_hotspot_read_full_sys_111` | settings_full_read | — |
| 3 | `0x141093260` | `sub_141093260` | config_snapshot_clone | library_leaf |
| 3 | `0x14103A480` | `sub_14103A480("mysteryUnlockGrants",19)` | optional_field_lookup | hashmap_lookup_leaf |
| 3 | `0x14103A480` | `sub_14103A480("mysteryUnlockedRoutes",21)` | optional_field_lookup | hashmap_lookup_leaf |
| 3 | `0x14040CC30` | `codexmate_settings_field_lookup_sys_111` | main_key_lookup(key="hotspot") | hashmap_lookup_leaf |
| 4 | `0x14040D9E0` | `sub_14040D9E0` | hashmap_entry_probe | hashmap_impl_leaf |
| 4 | `0x14040F9C0` | `sub_14040F9C0` | hashmap_value_extract | hashmap_impl_leaf |
| 2 | `0x14124A5D0` | `WakeByAddressSingle` | mutex_unlock | platform_primitive_leaf |
| 1 | `0x14082F2D0` | `sub_14082F2D0` | tauri_ipc_response_resolve | ipc_response_leaf |

## IDB Write-back Summary

| VA | old name | new name | level | comment |
|---|---|---|---|---|
| `0x140021570` | `sub_140021570` | `get_hotspot_enabled_owner_sys_111` | A | evidence comment written |
| `0x14060CBC0` | `sub_14060CBC0` | `get_hotspot_config_core_read_sys_111` | A | evidence comment written |
| `0x1401A15D0` | `sub_1401A15D0` | `codexmate_settings_hotspot_read_full_sys_111` | B | evidence comment written |
| `0x14040CC30` | `sub_14040CC30` | `codexmate_settings_field_lookup_sys_111` | B | shared with other settings commands |
| `0x1412B6E51` | data string | (comment only, not renamed) | C | "hotspot" key string evidence |

<工具调用>: ok × 1 (path=<本地路径>

## Fake-Wall Check (ACCEPTED_UNKNOWN Taxonomy)

| category | verdict |
|---|---|
| `drop_in_place` ≠ async body | N/A — no async body, synchronous command |
| `architecture_only`/`budget rule` self-limit | N/A — decompile succeeded, full chain available |
| `async decompile failed` HexRays limit | N/A — all functions decompiled cleanly |
| wrong VA | N/A — string xref confirmed n=1, unique binding |
| vtable dynamic dispatch | N/A — direct call chain, no vtable |
| `HTTP-terminal` external-only | N/A — read-only, no HTTP |
| library internal vs config callsite | confirmed: hashmap lookup terminated at impl leaf, not skipped |

**genuine_ceiling**: false — all depth levels reachable, no ICF fold, no async poll body needed.

## Accepted Unknowns

| unknown | category | rationale |
|---|---|---|
| dim1 Frontend CCF | accepted_unknown | Migrated from 1.0.9 win: `getHotspotEnabled:()=>G("get_hotspot_enabled")` — invoke wrapper confirmed. Re-verification of 1.1.1 win frontend not run this session (same bundle). |
| Exact byte offset of `enabled` in HotspotConfig struct | accepted_unknown | Not needed for implementation — bool returned directly from hashmap lookup, no struct offset required |
| mysteryUnlockGrants / mysteryUnlockedRoutes semantics | accepted_unknown | Optional fields read alongside hotspot; not relevant to get_hotspot_enabled return value |
| dim6 test/acceptance mapping | product_decision | 内部构建 implementation side |
| Windows platform frontier vs mac dim5 | accepted — same platform evidence | Windows evidence is this session; mac is separate producer |
