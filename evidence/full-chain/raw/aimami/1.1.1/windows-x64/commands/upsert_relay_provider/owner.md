# upsert_relay_provider — owner.md (gold-leaf)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
produced_at: 2026-06-18
platform: windows-x64
product: aimami
version: 1.1.1
sha_anchor: d24e429a

---

## Identity

| field | value |
|---|---|
| VA | `0x1400149d0` |
| symbol | `upsert_relay_provider_cmd_handler_111` |
| size | 0x5de bytes (1502 bytes) |
| IPC command string | `"upsert_relay_provider"` @ 0x1412ac4c0 (len=21) |
| caller | `tauri_ipc_main_dispatcher_sys` @ 0x14000d2a0 |
| xref call site | 0x140011477 |
| data xrefs (vtable/dispatch) | 0x1414fa98c, 0x14189ddbc |
| IDB annotation | gold-leaf comment set 2026-06-18 |

## Function signature (reconstructed)

```rust
fn upsert_relay_provider_cmd_handler_111(request: *const IpcRequest) -> i64;
// IpcRequest layout:
//   +0     : payload bytes (520 bytes, includes RelayUpsertInput serialized)
//   +520   : app_handle (400 bytes)
//   +920   : response slot header (__m128i, ptr+count)
//   +936   : response slot count
```

## Key callee VAs

| callee | VA | role |
|---|---|---|
| `confirm_pending_auto_switch_deserialize_request_sys` | 0x140089a50 | gate-1: usage/state check |
| `run_codex_router_diagnostics_owner_sys` | 0x14006f4b0 | gate-2: router diagnostics lock |
| `query_installed_skills_with_repo_111` | 0x141214620 | fallback when router null |
| `sub_140241460` | 0x140241460 | serde deserializer for RelayUpsertInput |
| `relay_provider_upsert_wrapper_sys` | 0x14021A880 | core wrapper (renamed from sub_14021A880) |
| `relay_provider_upsert_ok_response_send_sys` | 0x140835330 | success response builder |
| `has_notch_invoke_resolver_respond` (sub_14080C3C0) | — | IPC send (success+error) |

## Stack layout (key vars)

| var | rsp offset | size | purpose |
|---|---|---|---|
| v18 | +520h | 512 | IPC payload copy (raw bytes) |
| v22 | +860h | 384 | app_handle copy |
| v26 | +9F0h | 8 | gate-1 result tag (u32) |
| v30..v34 | +BC0h | 64 | arg context structs (command, module, layer refs) |
| v48 | +E10h | 16 | response slot header |
| v49 | +E30h | 8 | response slot count (for cleanup loop) |
| v55 | +E48h | 8 | stack canary (-2) |

## Source attribution

Caller stack: `tauri_ipc_main_dispatcher_sys` → `upsert_relay_provider_cmd_handler_111`
Source strings in callees: `codexmate_lib::core::relay::manager` @ 0x1412ea8f8
                            `src\core\relay\manager.rs` @ 0x1412ea601
