# set_relay_display_tags — Full Call Tree (windows-x64, AiMaMi 1.1.1)

**Session**: <审计会话> | **Date**: 2026-06-16
**Depth**: 6 layers | **Terminated**: WIN fs leaf (atomic_write) + WIN sync leaf (WakeByAddressSingle) + IPC resolver leaf

## Call Tree

```
set_relay_display_tags_owner_sys @ 0x14001F080 [1518B]
│  String xref: "set_relay_display_tags" @ 0x1412ac5c5 → single xref
│  Caller: tauri_ipc_main_dispatcher_sys (IPC routing confirmed)
│
├─ sub_141212FB0 @ 0x141212FB0  ← memcpy IPC payload to local buffers (x2)
│
├─ sub_14006F4B0 @ 0x14006F4B0  ← manager String param extractor (shared)
│   └─ [terminal: serde/JSON param decode] ★
│
├─ sub_141214620 @ 0x141214620  ← manager param strict string extractor
│   ├─ sub_1410A1DF0          ← string descriptor build
│   ├─ sub_141222DD0          ← string accessor
│   └─ sub_14106D960/70       ← string cleanup
│
├─ sub_1402FED40 @ 0x1402FED40 [Option<String> parser, called 2x: global + woyao]
│   ├─ sub_1402F9EB0          ← parse check (tag detection)
│   ├─ sub_140001360          ← alloc (WIN heap leaf) ★
│   ├─ sub_141212FB0          ← memcpy string bytes
│   ├─ sub_1412233C0          ← string helper
│   ├─ sub_140E30410          ← type validator
│   └─ sub_1402F7F90          ← cleanup
│   [returns tag=6 Some(String) or tag=3 None; tag other → error path]
│
├─ set_relay_display_tags_core_dispatch_sys @ 0x14021B780
│   │
│   ├─ set_relay_display_tags_write_and_sync_sys @ 0x1406D71D0  [depth-3]
│   │   │
│   │   ├─ sub_1406E8480 @ 0x1406E8480  ← relay_state_read_lock + snapshot
│   │   │   ├─ _InterlockedCompareExchange8(lock_byte+16, 1, 0)  [WIN sync leaf ★]
│   │   │   │   └─ sub_14124A510  ← futex wait/spin if locked
│   │   │   ├─ sub_14072A3A0 @ 0x14072A3A0  ← RelayProvider clone/snapshot
│   │   │   │   ├─ sub_140365660  ← field copy helper
│   │   │   │   ├─ sub_1403654F0  ← id/name field copy (a2+24)
│   │   │   │   ├─ sub_1410A2210  ← 232B struct clone (x8 calls)
│   │   │   │   │   [copies all RelayProvider fields: transport/slots/env/displayTags/etc.]
│   │   │   │   └─ sub_140362570  ← env field copy (a2+128)
│   │   │   └─ WakeByAddressSingle  [WIN sync leaf ★]
│   │   │
│   │   ├─ sub_14073D5C0 @ 0x14073D5C0  ← displayTagGlobal setter  [depth-4]
│   │   │   ├─ sub_1403007F0  ← string range init (str_ptr, str_ptr+len)
│   │   │   ├─ sub_14070B280  ← string pointer calc
│   │   │   ├─ sub_140001360  ← alloc (WIN heap leaf ★)
│   │   │   ├─ sub_141212FB0  ← memcpy (WIN memory leaf ★)
│   │   │   └─ sub_140001370  ← dealloc old value (WIN heap leaf ★)
│   │   │   [sets RelayProvider.displayTagGlobal ← Option<String>::global]
│   │   │
│   │   ├─ sub_14073D5C0 @ 0x14073D5C0  ← displayTagWoyao setter  [depth-4]
│   │   │   [same function, sets RelayProvider.displayTagWoyao ← Option<String>::woyao]
│   │   │
│   │   ├─ relay_providers_config_write_and_persist_sys @ 0x1406E6960  [SHARED]  [depth-4]
│   │   │   ├─ sub_1406DA6B0  ← serialize under WIN lock
│   │   │   │   ├─ _InterlockedCompareExchange8  [WIN sync leaf ★]
│   │   │   │   └─ WakeByAddressSingle  [WIN sync leaf ★]
│   │   │   ├─ sub_1406EAED0  ← relay config JSON assembler
│   │   │   │   └─ sub_14020A3E0  ← JSON builder: schemaVersion/providers/activeByIde/
│   │   │   │                        proxy/codexRouterEnabled/codexApiLogin/
│   │   │   │                        codexApiSlots/displayTagGlobal/displayTagWoyao
│   │   │   └─ sub_140504310  ← codexmate_lib::core::relay::atomic_write  [depth-5]
│   │   │       ├─ GetCurrentProcessId  [WIN syscall leaf ★]
│   │   │       └─ CloseHandle → write file  [WIN fs leaf ★]  TERMINAL
│   │   │
│   │   └─ relay_post_login_state_sync_sys @ 0x1406E1750  [SHARED, conditional]  [depth-4]
│   │       [only if global is Some (v6 flag=true)]
│   │       └─ [shared post-write sync path — terminal] ★
│   │
│   ├─ sub_140243FC0 @ 0x140243FC0  ← 8-way type validator
│   ├─ sub_1402342B0 @ 0x1402342B0  ← cleanup/drop
│   └─ set_codex_api_slots_ok_response_build_sys @ 0x140216BA0  [SHARED]
│       [alloc "ok" 2B — SHARED with set_codex_api_slots]
│       └─ [terminal: heap alloc + string copy] ★
│
└─ sub_140831F00 @ 0x140831F00  ← response builder + IPC send
    ├─ sub_1402291E0  ← response envelope builder
    ├─ sub_140E30410  ← type encode
    ├─ sub_140807390  ← response finalize
    └─ sub_14080C3C0  [IPC resolver leaf ★]  TERMINAL
```

## Depth Summary

| Depth | Function | Role |
|---|---|---|
| 1 | `set_relay_display_tags_owner_sys@0x14001F080` | IPC handler, param extract |
| 2 | `set_relay_display_tags_core_dispatch_sys@0x14021B780` | dispatch + response |
| 3 | `set_relay_display_tags_write_and_sync_sys@0x1406D71D0` | relay state mutation |
| 4 | `sub_1406E8480` + `sub_14073D5C0`×2 + `relay_providers_config_write_and_persist_sys` | lock/snapshot + field set + persist |
| 5 | `sub_14072A3A0` + `sub_140504310` | RelayProvider clone + atomic_write |
| 6 | WIN syscalls: `GetCurrentProcessId`/`CloseHandle`/`_InterlockedCompareExchange8`/`WakeByAddressSingle` | OS leaf TERMINAL ★ |

**terminated_reason**: All branches reach WIN OS syscall leaves (fs write, sync primitives, heap ops, IPC resolver). Depth=6 confirmed. No async coroutine, no vtable dispatch in primary chain.

## Fake-Wall Taxonomy Check

| Category | Checked | Result |
|---|---|---|
| `drop_in_place` / ICF-identical shim | ✓ | sub_1402342B0 is cleanup/drop (excluded from semantic chain), not async body |
| `async poll` / resume body | ✓ | No async coroutine; all functions synchronous (no `::poll`, no `Future::poll`) |
| `architecture_only` self-limit | ✓ | None — all branches pursued to leaves |
| `async decompile failed` HexRays limit | ✓ | All decompiles succeeded (no `isError=true`) |
| Wrong VA / misidentified caller | ✓ | Single string xref confirmed; dispatcher caller confirmed |
| vtable dynamic dispatch | ✓ | No vtable in primary chain; Tauri IPC uses static dispatch table |
| HTTP-terminal external-only | ✓ | N/A — this is a local relay state mutation, no HTTP call |

**genuine_ceiling**: false
**caller_disambiguation_tried**: N/A (single xref, no ambiguity)
**Conclusion**: No fake walls. Full leaf closure achieved.

## IDB Write-back Summary

**A-Grade Renames (3)**:
- `0x14001F080`: `sub_14001F080` → `set_relay_display_tags_owner_sys`
- `0x14021B780`: `sub_14021B780` → `set_relay_display_tags_core_dispatch_sys`
- `0x1406D71D0`: `sub_1406D71D0` → `set_relay_display_tags_write_and_sync_sys`

**B-Grade Comments (4)**:
- `0x14001F080`: owner evidence line (params, string xref, caller)
- `0x14021B780`: core dispatch evidence line (write fn ref, shared ok builder)
- `0x1406D71D0`: write+sync evidence line (lock, setters, persist, sync)
- `0x14073D5C0`: display tag setter evidence line

**<工具调用>**: ok=true (<本地路径>
