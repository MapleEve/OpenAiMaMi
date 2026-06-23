# set_codex_api_slots — Interface / DTO / Error / Side-effect (Windows x64, AiMaMi 1.1.1)

**session**: <审计会话>
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC Invoke

```typescript
invoke("set_codex_api_slots", { manager: string, slots: CodexApiSlot[] })
```

## Input DTO

### manager: String
- IPC key: `"manager"` (7B, `0x1412ac6c0`)
- Type: String
- Semantics: relay manager identifier (same semantics as other relay commands)
- Required: yes

### slots: Vec\<CodexApiSlot\>
- IPC key: `"slots"` (5B, `0x1412ac75f` confirmed bytes `73 6c 6f 74 73`)
- Type: JSON array of CodexApiSlot objects
- Required: yes
- Constraint: `len <= 5` (hard-validated in `sub_1406D7860` — count > 5 → error, does not write)
- If len == 0: error path (55B error struct alloc, return error code 8)

### CodexApiSlot struct (serde 2 fields)
- Verified: `"struct CodexApiSlot with 2 elements"` @ `0x1412da0e8`
- Deserializer: `sub_1401CBFA0` via `sub_14041ACF0(..., "CodexApiSlot", 12, field_table, 2)`
- Field table at `off_1412BFE38`:

```rust
struct CodexApiSlot {
    providerId: String,  // field[0], key="providerId" (10B @ 0x1412bfdfc)
    model: String,       // field[1], key="model" (5B @ 0x1412bf0d0)
}
```

## Output DTO

### Success
```json
"ok"
```
- `set_codex_api_slots_ok_response_build_sys@0x140216BA0` allocs "ok" (2B `0x6B6F`)
- Response passes through `sub_140831F00` → `sub_14080C3C0` IPC resolver leaf

### Error cases
| Condition | Behavior |
|---|---|
| manager param missing/invalid | `sub_141214620` extract error → `sub_14080C3C0` error response |
| slots param parse failed | `sub_140360F30` returns non-6 tag → error response |
| slots.len == 0 | 55B error struct, error code 8 — no write |
| slots.len > 5 | error path in `sub_1406D7860`, no write |
| relay state poisoned | `WakeByAddressSingle` + panic string `"relay state poisoned"` @ `0x1412ea5ed` |
| provider not found | `sub_1410A1DF0` error paths in `sub_1406D7860` |

## Side Effects

1. **relay state in-memory update** — matched providers' slot data updated in TLS relay state Vec (stride=232B)
2. **relay config JSON atomic_write to disk** — full relay config rewritten via `relay_providers_config_write_and_persist_sys@0x1406E6960` → `sub_140504310` (`GetCurrentProcessId`+`CloseHandle` WIN atomic file write leaf)
3. **relay config JSON content** — fields: `schemaVersion`, `providers`, `activeByIde`, `proxy`, `codexRouterEnabled`, `codexApiLogin`, `codexApiSlots`, `displayTagGlobal`, `displayTagWoyao` (confirmed from `sub_1406EAED0` → `sub_14020A3E0` JSON serializer)
4. **optional post-login state sync** — `relay_post_login_state_sync_sys@0x1406E1750` (conditional)
5. **WIN lock** — `_InterlockedCompareExchange8(state+16)` acquired and released; `WakeByAddressSingle(state+16)` on release

## WIN vs macOS Platform Differences

| Aspect | Windows (1.1.1) | macOS (unknown/not reversed) |
|---|---|---|
| Lock primitive | `_InterlockedCompareExchange8` + `WakeByAddressSingle` | `parking_lot` (expected, per other commands) |
| Atomic write | `GetCurrentProcessId` + `CloseHandle` pattern | different atomic file write |
| Env fallback | N/A for this command | N/A |
| RelayProvider stride | 232B per entry | unknown (mac not reversed for this cmd) |
| codexApiSlots JSON key | `"codexApiSlots"` @ `0x1412bfcbf` | presumed same (serde) |
| CodexApiSlot.model field | confirmed `"model"` (5B) | presumed same |
| Max slots constraint | `<= 5` (validated in binary) | unknown |

**Platform gate**: Windows confirmed; macOS Unknown (independent reversal required)
