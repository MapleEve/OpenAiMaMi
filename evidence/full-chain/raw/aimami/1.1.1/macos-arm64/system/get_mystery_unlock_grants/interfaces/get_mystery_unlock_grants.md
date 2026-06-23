# Interface — get_mystery_unlock_grants (AiMaMi 1.1.1 macOS ARM64)

## Request

**argKeys**: [] (zero arguments)
**Frontend invoke**: `invoke("get_mystery_unlock_grants")` — no parameters

## Response

**Type**: `CoreEnvelope<Vec<MysteryUnlockGrant>>`
**On success**:
```json
{
  "ok": true,
  "data": [
    { "route": "<allowlisted-route>", "expiresAt": <u64_ms_opt> },
    ...
  ]
}
```
**On error**: CoreError formatted as string, Err envelope.

## MysteryUnlockGrant struct (inferred, stride=40 bytes / 5 qwords)

| Offset | Field | Type | Notes |
|---|---|---|---|
| 0 | flags / discriminant | u64 | bit 0 = has_expiry; if set, expiresAt is valid |
| 8 | expires_at_ms | u64 | Unix epoch ms; grant dropped if <= current_ts_ms |
| 16 | route (len/ptr) | String | checked against allowlist |
| 24 | route data ptr | *u8 | |
| 32 | route capacity | usize | |

## Route Allowlist (XOR-decoded, mystery_route_allowed 0x1004c7650)

| Route | Len | XOR constant |
|---|---|---|
| `mcp` | 3 | 0x636D + 0x70 |
| `skills` | 6 | 0x6C696B73 + 0x736C |
| `overview` | 8 | 0x776569767265766F |
| `accounts` | 8 | 0x73746E756F636361 |
| `sessions` | 8 | 0x736E6F6973736573 |
| `settings` | 8 | 0x73676E6974746573 |
| `maintenance` | 11 | 0x616E65746E69614D + overlap 0x65636E616E65746E |
| `subscription` | 12 | 0x7069726373627573 + 0x6E6F6974 |
| `customInstructions` | 18 | xmmword 0x10114C4C0 + 0x10114C4D0 |

## Filtering logic

```
for grant in mysteryUnlockGrants:
    if not mystery_route_allowed(grant.route.trim()):
        DROP
    if grant.flags & 1 and grant.expires_at_ms <= SystemTime::now_ms():
        DROP
    else:
        KEEP
if filtered.len != original.len:
    save_settings(filtered)
return CoreEnvelope::Ok(filtered)
```

## Side effects

- **Settings file read**: `std::fs::read_to_string` at CodexPaths+440/448 offset
- **Settings file write** (conditional): `std::fs::write` (non-atomic) at CodexPaths+432 offset — only if grants were pruned
- **No HTTP, no keychain, no process spawn**
- **Mutex**: Repository state mutex acquired and released around the entire operation

## Error paths

| Condition | Error type | Surface to caller |
|---|---|---|
| IO read failure | Silent — returns default empty settings | No error |
| JSON parse failure | Silent — returns default empty settings | No error (empty Vec returned) |
| save_settings IO error | *a1=2 (propagated) | Err variant in CoreEnvelope |
| save_settings serialize error | *a1=3 (propagated) | Err variant in CoreEnvelope |
| Panic state | Err variant | Err variant in CoreEnvelope |

## Settings JSON keys

From `load_settings` JSON field access and `save_settings` serialize_entry:
- `mysteryUnlockGrants` (len=19) — primary grant array field
- `mysteryUnlockedRoutes` (len=21) — legacy field, migrated to `mysteryUnlockGrants` on load
- `hotspot` (len=7) — saved field
- `usageRefreshInterval` (len=20) — saved field
- `deviceId` (len=8) — saved field
- `remoteDeviceSecret` (len=18) — saved field
- `notificationsSince` (len=18) — saved field
