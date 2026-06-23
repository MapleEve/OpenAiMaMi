# reorder_relay_providers — Interface / DTO / Error / Side-Effect (Win x64 1.1.1)

session: <审计会话>
produced_at: 2026-06-16

## Command Registration

- command name: "reorder_relay_providers" (23B)
- dispatcher: tauri_ipc_main_dispatcher_sys @ 0x14000D2A0
- namespace: inferred = `repo` or `app` (same pattern as other relay commands)

## Input Params (DTO)

| param | type | required | key_len | notes |
|---|---|---|---|---|
| manager | String | yes | 7B | relay manager identifier (same pattern as get_relay_provider_quota) |
| orderedIds | Vec<String> | yes | 10B | new ordering of provider IDs; len MUST match current relay state provider count |

### orderedIds constraint
- orderedIds.len() MUST equal current relay state provider count
- mismatch → immediate Err("orderedIds length mismatch"), no persist
- empty orderedIds → null result (no-op or valid empty reorder)

## Output (Response Envelope)

On success: null/unit JSON (`null`)
- Windows inner sentinel: tag=2, "ko"(2B=27503=0x6B6F), "success"(7B=[1667462483,1936942435])
- outer IPC envelope: standard Tauri InvokeResolver result

On error: CoreError oword sentinel `0x8000000000000000`

## Error Paths

| error | trigger | sentinel |
|---|---|---|
| missing/invalid manager param | sub_14006F4B0 returns 0 → sub_141214620 fails | error oword → frontend error |
| invalid/missing orderedIds param | sub_140360DA0 tag != 6 | error response via sub_14080C3C0 |
| orderedIds len mismatch | sub_140243FC0 returns false | 0x8000000000000000 CoreError oword |
| relay state poisoned | WIN lock poisoned check | panic: "relay state poisoned" |
| atomic write: missing parent | parent dir missing for relay config | sub_140504310 returns error; propagated as CoreError |

## Side Effects

1. **In-memory relay state update**: reorders relay_mgr.providers Vec in-place (stride=232B per entry)
2. **Persistent config write**: `codexmate_lib::core::relay::atomic_write` writes full relay config JSON to disk
   - Fields written: schemaVersion, providers (reordered), activeByIde, proxy, codexRouterEnabled, codexApiLogin, codexApiSlots, displayTagGlobal, displayTagWoyao
   - atomic: uses temp file + rename (GetCurrentProcessId in temp name)
3. **TLS provider id-index rebuild**: sub_140730AA0 rebuilds lookup HashMap (8B-stride entries) after reorder

## RelayProvider Struct Layout (from SIMD evidence)

- stride = 232B per RelayProvider entry
- fields hashed via sub_140624F90 (Robin-Hood SIMD, 0x945CA2F02A2B6F44uLL mask)
- cloned via sub_1410A2210 (232B copy)

## WIN vs MAC Platform Diff

| aspect | Windows 1.1.1 | macOS (inferred from 1.0.9 baseline) |
|---|---|---|
| Relay state lock | _InterlockedCompareExchange8 + WakeByAddressSingle | parking_lot Mutex |
| Panic string | "relay state poisoned" | "relay state poisoned" (same Rust idiom) |
| File write | GetCurrentProcessId + CreateFile/WriteFile/CloseHandle | posix write + rename |
| JSON fields | schemaVersion/providers/activeByIde/proxy/codexRouterEnabled/codexApiLogin/codexApiSlots/displayTagGlobal/displayTagWoyao | assumed same (not independently verified 1.1.1 mac) |
| RelayProvider stride | 232B | TBD (mac producer must confirm) |

## Frontend Consumption (expected, from CCF)

- frontend invokes: `invoke("reorder_relay_providers", { manager, orderedIds })`
- response: null/unit on success (frontend discards payload, invalidates relay list query)
- error: CoreError propagated to frontend toast/error handler
