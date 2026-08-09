# set_codex_api_slots — Call Tree (Windows x64, AiMaMi 1.1.1)

**session**: <审计会话>
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**depth**: 6 (terminated at WIN fs leaf)
**terminated_reason**: WIN OS leaf (GetCurrentProcessId + CloseHandle atomic write)

## Full Call Tree

```
set_codex_api_slots_owner_sys @ 0x14001BDE0 (1217B)
├─ sub_14006F4B0 @ 0x14006F4B0            — manager param extract (async channel read)
├─ sub_141214620 @ 0x141214620            — error param extractor (error path only)
├─ sub_140360F30 @ 0x140360F30            — slots Vec<CodexApiSlot> deserializer
│   ├─ sub_1402F9EB0 @ 0x1402F9EB0        — type check (is_some)
│   ├─ sub_140417480 @ 0x140417480        — array parser (serde JSON array)
│   └─ sub_140E30410 @ 0x140E30410        — element type validator (8-way switch)
├─ set_codex_api_slots_core_dispatch_sys @ 0x140218120
│   ├─ sub_1406D9FC0 @ 0x1406D9FC0        — relay state write-lock + mutation gate [WIN]
│   │   ├─ _InterlockedCompareExchange8   — WIN lock acquire leaf ★
│   │   ├─ WakeByAddressSingle            — WIN lock release leaf ★
│   │   ├─ sub_1406D7860 @ 0x1406D7860   — relay provider slots Vec updater
│   │   │   ├─ sub_141077010 @ 0x141077010 — TLS slot getter
│   │   │   ├─ sub_14108CEE0 @ 0x14108CEE0 — TLS init
│   │   │   ├─ sub_1410A2210 @ 0x1410A2210 — 232B RelayProvider struct clone
│   │   │   ├─ sub_141213640 @ 0x141213640 — str compare (providerId match)
│   │   │   ├─ sub_1402099E0 @ 0x1402099E0 — slot data update
│   │   │   ├─ sub_1410A1DF0 @ 0x1410A1DF0 — updated struct insert
│   │   │   ├─ sub_140370980 @ 0x140370980 — provider search helper
│   │   │   └─ sub_140082DE0 @ 0x140082DE0 — TLS ctx cleanup
│   │   ├─ relay_providers_config_write_and_persist_sys @ 0x1406E6960  [SHARED LEAF]
│   │   │   ├─ sub_1406DA6B0 @ 0x1406DA6B0 — serialize under WIN lock
│   │   │   ├─ sub_1406EAED0 @ 0x1406EAED0 — JSON config builder
│   │   │   │   └─ sub_14020A3E0 @ 0x14020A3E0 — JSON fields: schemaVersion/providers/
│   │   │   │                                     activeByIde/proxy/codexRouterEnabled/
│   │   │   │                                     codexApiLogin/codexApiSlots/
│   │   │   │                                     displayTagGlobal/displayTagWoyao
│   │   │   └─ sub_140504310 @ 0x140504310  — atomic_write [WIN FS LEAF] ★
│   │   │       ├─ GetCurrentProcessId      — WIN PID read leaf ★
│   │   │       └─ CloseHandle              — WIN handle close leaf ★
│   │   └─ relay_post_login_state_sync_sys @ 0x1406E1750 — optional post-write sync [SHARED]
│   ├─ sub_140243FC0 @ 0x140243FC0         — 8-way type validator (slots count/type check)
│   ├─ sub_1402342B0 @ 0x1402342B0         — cleanup/drop
│   └─ set_codex_api_slots_ok_response_build_sys @ 0x140216BA0
│       └─ sub_14080C3C0 @ 0x14080C3C0     — IPC resolver leaf ★
└─ sub_140831F00 @ 0x140831F00             — IPC respond dispatcher
    └─ sub_14080C3C0 @ 0x14080C3C0         — IPC resolver leaf ★ (terminal)
```

## Terminal Leaves

| Leaf | Type | VA | Note |
|---|---|---|---|
| `_InterlockedCompareExchange8` | WIN sync | internal | lock acquire |
| `WakeByAddressSingle` | WIN sync | `0x14124A5D0` | lock release |
| `GetCurrentProcessId` | WIN OS | `0x14108B3B0` | atomic write id |
| `CloseHandle` | WIN OS | `0x14124D788` | atomic write cleanup |
| `sub_14080C3C0` | IPC | `0x14080C3C0` | Tauri IPC resolver (response leaf) |

## IDB Write-back Summary

### A-level renames (3)
| Old | New | VA |
|---|---|---|
| `sub_14001BDE0` | `set_codex_api_slots_owner_sys` | `0x14001BDE0` |
| `sub_140218120` | `set_codex_api_slots_core_dispatch_sys` | `0x140218120` |
| `sub_140216BA0` | `set_codex_api_slots_ok_response_build_sys` | `0x140216BA0` |

### B-level comments (4)
- `0x14001BDE0` — owner params+dispatch evidence
- `0x140218120` — core dispatch write-lock+validate evidence
- `0x1406D9FC0` — relay state write-lock+mutation gate evidence
- `0x1406D7860` — relay slots Vec updater evidence

### <工具调用>
ok=true, path=<本地路径>

## Fake-wall Taxonomy Check

| Category | Result |
|---|---|
| `drop_in_place` shim mistaken for async body | N/A — command is synchronous; no async body |
| `architecture_only` / `budget_rule` self-limit | Not applied — all paths reached |
| `async decompile failed` HexRays limit | N/A — no async coroutine |
| Wrong VA / ICF-folded | Verified single xref from string → owner |
| vtable dynamic dispatch | None identified in call chain |
| `HTTP-terminal` external-only | N/A — no HTTP in this command |
| Library internal vs config callsite | relay_providers_config_write_and_persist_sys is shared leaf, correctly identified |

**genuine_ceiling=false** — all key functions decompiled without HexRays failure; all branches reach OS/IPC leaf.

## Accepted Unknown

None — all paths resolved to terminal leaves.
