# reorder_relay_providers — Call Tree (Win x64 1.1.1)

session: <审计会话>
produced_at: 2026-06-16
depth: 6 (terminated at atomic_write WIN fs leaf)

## Full Call Tree

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
└── reorder_relay_providers_owner_sys @ 0x14001D5E0 (1217B) [A-rename ✓]
    ├── sub_14006F4B0 @ 0x14006F4B0  [relay state HashMap lookup / manager param]
    │   └── _InterlockedCompareExchange8, WakeByAddressSingle [WIN lock leaf ✓]
    ├── sub_141214620 @ 0x141214620  [JSON param extractor fallback]
    ├── sub_140360DA0 @ 0x140360DA0  [orderedIds Vec extractor]
    │   └── sub_1402F9EB0 [Vec deserialization validator]
    ├── relay_providers_reorder_vec_validate_sys @ 0x14021BC90 [A-rename ✓]
    │   ├── sub_1406E6D20 → relay_providers_reorder_and_persist_sys [acquire len]
    │   ├── sub_140243FC0 @ 0x140243FC0  [validate orderedIds.len == state.len]
    │   ├── sub_1402342B0 @ 0x1402342B0  [drop/cleanup orderedIds after validate]
    │   └── sub_140216BA0 @ 0x140216BA0  [null result builder on empty]
    │       └── sub_140001360 [alloc 2B "ko", 7B "success"]
    ├── relay_providers_reorder_and_persist_sys @ 0x1406E6D20 (LARGE) [A-rename ✓]
    │   ├── sub_1406E8480 @ 0x1406E8480  [get relay state root]
    │   │   └── _InterlockedCompareExchange8 + WakeByAddressSingle [WIN lock leaf ✓]
    │   ├── sub_14072A3A0 @ 0x14072A3A0  [get relay inner state (providers Vec)]
    │   ├── sub_140730AA0 @ 0x140730AA0  [TLS id-index HashMap rebuild] [B-comment ✓]
    │   │   ├── sub_141077010 @ 0x141077010  [TLS slot accessor]
    │   │   ├── sub_14108CEE0 @ 0x14108CEE0  [TLS init if needed]
    │   │   ├── sub_141217CF0 @ 0x141217CF0  [pre-alloc HashMap capacity]
    │   │   └── sub_140371CF0 @ 0x140371CF0  [insert id/idx entries]
    │   ├── sub_140312480 @ 0x140312480  [SIMD Vec reorder by orderedIds] [B-comment ✓]
    │   │   ├── sub_140624F90 @ 0x140624F90  [Robin-Hood hash fn, mask=0x945CA2F02A2B6F44]
    │   │   ├── sub_1410A2210 @ 0x1410A2210  [clone RelayProvider 232B struct]
    │   │   └── sub_141221220 @ 0x141221220  [Vec grow if needed]
    │   ├── relay_providers_config_write_and_persist_sys @ 0x1406E6960 [A-rename ✓]
    │   │   ├── sub_1406DA6B0 @ 0x1406DA6B0  [serialize relay state under WIN lock]
    │   │   │   └── _InterlockedCompareExchange8, WakeByAddressSingle [WIN lock leaf ✓]
    │   │   └── sub_1406EAED0 @ 0x1406EAED0  [build JSON + atomic_write]
    │   │       ├── sub_1406F2870 @ 0x1406F2870  [get/validate config file path]
    │   │       ├── sub_14020A3E0 @ 0x14020A3E0  [JSON serializer] [B-comment ✓]
    │   │       │   └── sub_140263D50 / sub_140263040 / sub_140263670 / sub_140267A60
    │   │       │       sub_140260D60 / sub_140249360 / sub_140260580  [per-field writers]
    │   │       └── sub_140504310 @ 0x140504310  [codexmate_lib::core::relay::atomic_write] [B-comment ✓]
    │   │           ├── GetCurrentProcessId  [WIN fs leaf ✓]
    │   │           └── CloseHandle  [WIN fs leaf ✓]
    │   └── sub_1406E1750 @ 0x1406E1750  [persist config alternative path / verify]
    └── sub_140831F00 @ 0x140831F00  [IPC response finalizer]
        └── sub_14080C3C0 @ 0x14080C3C0  [InvokeResolver dispatch + WIN lock release]
            └── WakeByAddressSingle [WIN lock leaf ✓]
```

## IDB Write-back Summary

### A-level renames (4 total)
| old | new | addr | status |
|---|---|---|---|
| sub_14001D5E0 | reorder_relay_providers_owner_sys | 0x14001D5E0 | ✓ |
| sub_14021BC90 | relay_providers_reorder_vec_validate_sys | 0x14021BC90 | ✓ |
| sub_1406E6D20 | relay_providers_reorder_and_persist_sys | 0x1406E6D20 | ✓ |
| sub_1406E6960 | relay_providers_config_write_and_persist_sys | 0x1406E6960 | ✓ |

### B-level evidence comments (8 total)
| addr | topic | status |
|---|---|---|
| 0x14001D5E0 | owner wrapper full description | ✓ |
| 0x14021BC90 | Vec validate + validate callees | ✓ |
| 0x1406E6D20 | reorder+persist core logic | ✓ |
| 0x1406E6960 | config write+persist chain | ✓ |
| 0x140504310 | atomic_write leaf | ✓ |
| 0x14020A3E0 | JSON serializer fields | ✓ |
| 0x140730AA0 | TLS id-index rebuild | ✓ |
| 0x140312480 | SIMD Vec reorder | ✓ |

idb_save: ok=true path=<本地路径>

## Accepted Unknown

None. All paths terminated at WIN fs leaves (atomic_write/GetCurrentProcessId/WakeByAddressSingle).

## Terminated Reason

depth=6, terminated at WIN fs leaf: `codexmate_lib::core::relay::atomic_write` (GetCurrentProcessId, CloseHandle). No deeper exploration needed — standard fs write pattern.

## Fake-Wall Taxonomy (ACCEPTED_UNKNOWN anti-cheat gate)

All 7 fake-wall categories excluded:
1. drop_in_place ≠ async body: not applicable (no async body; synchronous WIN lock pattern)
2. architecture_only/budget_rule: not applicable (all callees explored)
3. async decompile failed HexRays: not applicable (no async coroutine; straight sync chain)
4. wrong VA: not applicable (string xref → single xref → owner confirmed by caller=tauri_ipc_main_dispatcher_sys)
5. vtable dynamic dispatch: not applicable (all calls are direct CALL, no vtable indirection)
6. HTTP-terminal external-only: not applicable (local fs atomic_write, not HTTP)
7. library internal vs config-callsite: not applicable (sub_14020A3E0 is app-owned JSON serializer, not stdlib)

genuine_ceiling = false. recovery_attempts = N/A (no fake walls hit).
