# hotspot_ready — Windows x64 1.1.1 Interface Contract

## IPC Identity

| Field | Value |
|---|---|
| command | `hotspot_ready` |
| tag | `app` |
| namespace | app |
| argKeys | `[]` (no arguments) |
| cmd_string_va | `0x1412ac4a3` (13B) |
| tag_va | `0x1412ac6d5` (3B) |

## Request DTO

No arguments. `argKeys = []`.

## Response DTO

Resolved via `tauri_ipc_main_dispatcher_sys` → `hotspot_ready_owner_sys_111` → one of two resolve paths:

**Normal path (usage_refresh interval available, discriminant != 3)**:
- `hotspot_combined_state_check_sys_111` reads combined state blob (896B)
- Checks `discriminant == 18` (Ready)
- Serializes state data into buffer and resolves via `sub_140832560`
- Response envelope: combined hotspot state (discriminant 18 = Ready, others = not ready)

**Interval-not-ready path (discriminant == 3)**:
- Copies interval snapshot fields directly
- Resolves via `sub_14080C3C0` (InvokeResolver::respond) with v27=1 (Ok discriminant)
- Returns hotspot state snapshot from `a1+880` (v22, 128-bit) + `a1+896` (v23, 64-bit)

## Discriminant Map

| Value | Meaning |
|---|---|
| 18 | Ready (hotspot window active and ready) |
| 3 | Not ready / error / interval not set |
| 38 | Intermediate state (skip focus dispatch, stay at 18) |
| 6 | Log tag: error path |

## Side Effects

1. **Conditional focus dispatch**: `hotspot_ready_state_discriminant_check_sys_111` compares window IDs. If match: dispatches `focus_main_window` via `sub_14038E240`. Sets `*a1=18`. **Win-specific side effect** — mac version is query-only.
2. **Observer list cleanup**: iterates observer list (96-byte stride, `sub_14033AB50` per entry), then frees backing buffer.
3. No persistent file writes. No network calls.

## Error Paths

| Condition | Result |
|---|---|
| Usage refresh interval discriminant == 3 | Falls through to interval-error path, resolves with snapshot |
| `hotspot_combined_state_check_sys_111` returns overflow flag | log tag = 6, resolves via error path |
| Alloc failure in response buffer | OOM handler `sub_14124BCCB` |
| Observer count MSB set | Skips observer cleanup loop |

## Platform Differences vs macOS 1.0.9

| | Windows x64 1.1.1 | macOS arm64 1.0.9 |
|---|---|---|
| Owner VA | `0x140016720` | `0x10032e664` |
| focus_dispatch side-effect | YES (conditional, `sub_14038D560`) | NO (query-only) |
| Discriminant==18=Ready | confirmed | confirmed |
| Caller | `tauri_ipc_main_dispatcher_sys` | `run closure` |

## Platform Differences vs Windows 1.0.9

| | Windows x64 1.1.1 | Windows x64 1.0.9 |
|---|---|---|
| Owner VA | `0x140016720` | `0x14026def0` |
| Owner size | 847B | 847B (identical) |
| Caller | `tauri_ipc_main_dispatcher_sys` @ `0x14000d2a0` | `auto_switch_multiplex_dispatcher_sys` @ `0x1402663e0` |
| `hotspot_combined_state_check` VA | `0x14060C720` | `0x1402CA160` |
| `usage_refresh_read` VA | `0x140089A50` | `0x1402dcbc0` |
| Focus dispatch logic | inlined into `sub_14038D560` | separate `focus_main_window_dispatch_sys` @ `0x140638240` |
| Behavior semantics | unchanged | — |

## Callees Summary

| VA | Name | Role | Terminated |
|---|---|---|---|
| `0x140089A50` | get_usage_refresh_interval_read_sys_111 | AppState interval read | arc_drop_leaf |
| `0x14060C720` | hotspot_combined_state_check_sys_111 | hotspot state check | — |
| `0x140076AD0` | sub_140076AD0 | hotspot_config_state_read_fn | appstate_read_leaf |
| `0x14038D560` | hotspot_ready_state_discriminant_check_sys_111 | disc==18 Ready check | — |
| `0x14038E240` | sub_14038E240 | focus_main_window_dispatch | window_dispatch_leaf |
| `0x1403C0BD0` | sub_1403C0BD0 | alternate_focus_dispatch | window_dispatch_leaf |
| `0x1403EFD40` | sub_1403EFD40 | cleanup_non38_path | cleanup_leaf |
| `0x140832560` | sub_140832560 | tauri_ipc_resolve (error path) | ipc_response_leaf |
| `0x14080C3C0` | sub_14080C3C0 | InvokeResolver::respond | ipc_response_leaf |
| `0x14033AB50` | sub_14033AB50 | observer_drop_96B_stride | drop_leaf |
| `0x140042650` | sub_140042650 | combined_state_blob_drop | drop_leaf |

## Gate Assessment

| Dim | Status |
|---|---|
| dim1 | migrated_from_1.0.9_win (frontend CCF, no re-query this session) |
| dim2 | CLOSED — real synchronous body 847B, single-pass decompile |
| dim3 | CLOSED — full call-tree, all callees enumerated, depth ≥ 3 |
| dim4 | CLOSED — argKeys=[], response discriminant map, error paths, side-effects documented |
| dim5 | CLOSED — caller tauri_ipc_main_dispatcher_sys confirmed; win/mac divergence noted |
| dim6 | unknown (内部构建 consumer side) |

**gate_tier: strictImplementationUse** (upgraded from candidate — session <审计会话>, 2026-06-17)
genuine_ceiling: false | accepted_unknown: false | real_body_found: true

## Live Confirmations (session <审计会话>, 2026-06-17)

- **逆向分析 server_health**: status=ok, uptime_sec=114862, IDA decompiler_ready=true, module=AiMaMi 1.1.1 win64.exe — PASS
- **dim1 CCF live re-confirm**: find_regex "hotspot_ready" → n=1, addr=0x1412ac4a3 — CLOSED
- **dim2 body live re-confirm**: decompile 0x140016720 → 847B, 32BB, body identical to pseudocode.c — CLOSED
- **hotspot_ready_state_discriminant_check basic_blocks live**: basic_blocks(0x14038D560) → 19 blocks (pseudocode.c annotation corrected from ~18 to 19)
- **rename note**: 0x140089A50 IDB name overwritten to `confirm_pending_auto_switch_deserialize_request_sys` by later session; hotspot_ready calls same VA as usage_refresh_interval_read (shared utility); rename conflict recorded, does not affect gate assessment
- **IDB comment appended** @ 0x140016720, **idb_save**: ok
