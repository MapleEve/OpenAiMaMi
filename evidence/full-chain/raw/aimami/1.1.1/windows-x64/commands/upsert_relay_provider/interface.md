# upsert_relay_provider — interface.md (gold-leaf)

session: <审计会话>
produced_at: 2026-06-18

---

## IPC Command

**Command**: `upsert_relay_provider`
**Direction**: Frontend → Backend (Tauri IPC invoke)
**dim1 CCF**: confirmed — `"command":"upsert_relay_provider"` in `assets/index-DdcCOEJG.js` line 86

---

## Input DTO: RelayUpsertInput

Serde struct with 10 fields. Deserializer: `sub_140241460` @ 0x140241460.
Struct label VA: `0x1412da198` ("RelayUpsertInput").
Field table VA: `0x1412bf0f8`.

```typescript
interface RelayUpsertInput {
  baseUrl: string;                    // relay endpoint base URL
  apiKey?: string;                    // provider API key (None = no key)
  wireApi: RelayWireApi;              // enum: wire protocol variant
  brand: RelayBrand;                  // enum: provider brand
  models: string[];                   // enabled model list
  extraHeaders: Record<string, string>; // additional HTTP headers
  providerId?: string;                // UUID of existing provider; None = create new
  providerName: string;               // display name (used as lookup key for updates)
  schemaVersion: number;              // u32
  routeExpiresAtMs?: number;          // expiry timestamp ms (i64)
}
```

**Enum VAs**:
- `RelayWireApi` enum strings @ 0x1412bfe06
- `RelayBrand` enum strings @ 0x1412bfc60

---

## Output DTO: RelayUpsertResponse

Built by `relay_provider_upsert_ok_response_send_sys` @ 0x140835330.

```typescript
interface RelayUpsertResponse {
  schemaVersion: number;
  success: boolean;
  code: number;         // 10 = Ok
  message: string;
  warnings?: string[];
}
```

---

## Arg key summary (extractor locations)

| arg key | source field | extraction notes |
|---|---|---|
| `baseUrl` | `RelayUpsertInput.baseUrl` | serde field 0, String |
| `apiKey` | `RelayUpsertInput.apiKey` | serde field 1, Option\<String\> |
| `wireApi` | `RelayUpsertInput.wireApi` | serde field 2, enum |
| `brand` | `RelayUpsertInput.brand` | serde field 3, enum |
| `models` | `RelayUpsertInput.models` | serde field 4, Vec\<String\> |
| `extraHeaders` | `RelayUpsertInput.extraHeaders` | serde field 5, Map |
| `providerId` | `RelayUpsertInput.providerId` | serde field 6, Option\<String\> — None → new provider, Some → update |
| `providerName` | `RelayUpsertInput.providerName` | serde field 7, String — lookup key for existing provider |
| `schemaVersion` | `RelayUpsertInput.schemaVersion` | serde field 8, u32 |
| `routeExpiresAtMs` | `RelayUpsertInput.routeExpiresAtMs` | serde field 9, Option\<i64\> |

---

## Platform/gate invariants

- **Same platform (windows-x64)**: gate-tier = `same_platform` (dim5 = PASS)
- **Config file path**: read from state arc at `a2[0]+16+808` / `a2[0]+16+816` (ptr+len for JSON path string)
- **Keychain flag**: `v130` in `relay_provider_upsert_core_sys` — if set, `import_accounts_keychain_write_sys` is called conditionally
- **CAS spinlock**: state+16 (byte), state+17 (poison flag), `WakeByAddressSingle` if 2 (contended wake)
- **Relay state lock poison string**: `"relay state poisoned"` @ 0x1412ea5ed
- **Mutex poison string**: `"std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::Repository>"` @ 0x1412ae238

---

## Delta notes (interface-level, 1.0.9 → 1.1.1)

- Input/output DTO fields: **unchanged**
- IPC command name: **unchanged**
- Side-effects: **tray rebuild chain added** (3 new callees in success path)
- Error contract: **unchanged**
- Keychain path: **unchanged** (same conditional gate)
