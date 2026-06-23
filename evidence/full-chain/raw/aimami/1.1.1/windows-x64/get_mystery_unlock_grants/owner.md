# get_mystery_unlock_grants — Owner Record (gold-leaf)
session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
sha: d24e429a

## Owner

| Field | Value |
|---|---|
| VA | `0x140023560` |
| IDB name | `get_mystery_unlock_grants_handler_111` |
| Size | 0x37F bytes (895 B) |
| IPC command string | `"get_mystery_unlock_grants"` @ `0x1412AC39A` |
| Registered in | `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0` (xref @ `0x14001031E`) |
| Data xrefs | `0x1414FDA30`, `0x14189EA40` (vtable/dispatch table entries) |
| Frontend CCF | `getMysteryUnlockGrants` in `assets/index-DdcCOEJG.js` |
| ArgKeys | none (no payload) |

## Sweep Bucket Correction

Sweep bucket `windows-shard-2.json` recorded `va_111=0x140789210` for this command.
That VA is a **generic Result-unwrap/poison-guard shim** called at owner+0x12B.
It is NOT the IPC dispatch entry. Confirmed by:
- 逆向分析 shows function at `0x140023560` is already named `get_mystery_unlock_grants_handler_111`
- xref from `tauri_ipc_main_dispatcher_sys` goes to `0x140023560`
- `0x140789210` has xrefs from many unrelated commands

## Core Callee (Layer 2)

| Field | Value |
|---|---|
| VA | `0x1401AF310` |
| IDB name | `hotspot_read_and_check_elapsed_111` |
| Purpose | Read settings, compute elapsed, filter grants, conditional persist |

## New Callees vs 1.0.9

| VA | IDB Name | Role |
|---|---|---|
| 0x1401A15D0 | `codexmate_settings_hotspot_read_full_sys_111` | Reads mysteryUnlockGrants + routes |
| 0x14107B7E0 | `system_time_precise_u32_111` | Current epoch time |
| 0x14107B790 | `elapsed_since_ts_111` | Elapsed ms since ref point |
| 0x14010D900 | `sub_14010D900` | Grant expiry filter (stable partition) |
| 0x14025DD50 | `mystery_unlock_grants_vec_json_serialize_111` | Vec<Grant> JSON serializer |
| 0x1401BA120 | `mystery_unlock_grant_item_json_serialize_111` | Single grant JSON serializer |
| 0x1401A1D90 | `hotspot_config_serialize_json_sys_111` (delta) | Now includes mysteryUnlockGrants field |

## IDB Annotation State

- Owner already renamed `get_mystery_unlock_grants_handler_111` (prior session)
- Core already renamed `hotspot_read_and_check_elapsed_111` (prior session)
- Gold-leaf rename: `sub_140789210` → `get_mystery_unlock_grants_owner_sys` deferred
  (that VA is a shared shim — renaming it to command-specific name would be misleading;
  kept as generic shim, gold-leaf comment added at owner VA instead)
- IDB comment set at `0x140023560`: gold-leaf evidence line (this session)

*gold-leaf; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf*
