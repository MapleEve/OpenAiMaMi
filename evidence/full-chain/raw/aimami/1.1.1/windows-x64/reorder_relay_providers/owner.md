# reorder_relay_providers — Owner (Win x64 1.1.1)

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-16
binary_sha256: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
idb: <本地路径>

## String Locator

| string | addr | xref_from | xref_fn |
|---|---|---|---|
| "reorder_relay_providers" (23B) | 0x1412ac51a | 0x14001d662 | sub_14001D5E0 |

## Owner Wrapper (A-level rename)

| symbol | addr | size | renamed_to |
|---|---|---|---|
| owner wrapper | 0x14001D5E0 | 1217B (0x4C1) | reorder_relay_providers_owner_sys |

## Dispatcher Confirmation

- main dispatcher: 0x14000D2A0 (41-case switch, 17870B, cyclomatic=151)
- caller of reorder_relay_providers_owner_sys: `tauri_ipc_main_dispatcher_sys`
- xrefs_to 0x14001D5E0: 0x140010eec (code), 0x1414fc67c (data), 0x14189e53c (data)

## Params (extracted from owner decompile)

| param | key_string | key_len | key_addr |
|---|---|---|---|
| manager | "manager" | 7B | 0x1412ac6c0 |
| orderedIds | "orderedIds" | 10B | 0x1412ac768 |

## Param Extraction Path

1. First param extraction: `sub_14006F4B0` @ 0x14006F4B0 (relay state HashMap lookup, WIN lock)
   - fallback param extract path: `sub_141214620` @ 0x141214620 (JSON param extractor)
2. Second param: `sub_140360DA0` @ 0x140360DA0 (orderedIds Vec extractor)
   - returns Vec<String> of provider IDs in desired order

## IDB Write-back

- A rename: reorder_relay_providers_owner_sys @ 0x14001D5E0 ✓
- Evidence comment: appended @ 0x14001D5E0 ✓
