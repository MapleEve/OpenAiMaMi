# get_hotspot_enabled — Windows x64 1.1.1 Interface / DTO / Error / Side-Effect

**session**: <审计会话>
**platform**: windows-x64 | **version**: 1.1.1

---

## Request DTO

- `invoke("get_hotspot_enabled")` — zero arguments
- argKeys: `[]`
- Frontend wrapper (migrated from 1.0.9 win CCF): `getHotspotEnabled: () => G("get_hotspot_enabled")`

## Response DTO

- Type: `bool` (unwrapped from `Option<bool>` at IPC layer)
- `true` = hotspot enabled (hotspot key present + truthy in CodexMateSettings)
- `false` = hotspot disabled
- `None` / missing → treated as `false` at frontend

### Internal wire format

| path | semantics |
|---|---|
| `*out_qword(out) = 0x8000000000000000` | None/Err sentinel |
| `*out_byte(out + 8) = bool_value` | the actual bool when Some |

## Error Paths

| condition | behavior |
|---|---|
| Poisoned mutex | Rust panic path: `"poisoned lock: another task failed inside"` → panic handler called; function returns `0x8000000000000000` sentinel (same as None) |
| Settings missing / no hotspot key | `codexmate_settings_field_lookup_sys_111` returns Err(2) → None sentinel returned |
| Arg deserialize failure | `sub_141214620` → `sub_14080C3C0` IPC error envelope |

## Side Effects

- **None** — read-only
- No file write, no keychain, no HTTP, no mutex held after return
- Mutex: `_InterlockedCompareExchange8` acquire → read → `WakeByAddressSingle` release (Windows mutex pattern)

## Platform Differences vs macOS

| aspect | Windows 1.1.1 | macOS 1.1.1 |
|---|---|---|
| mutex acquire | `_InterlockedCompareExchange8` | `parking_lot` / OS mutex |
| mutex release | `WakeByAddressSingle` | OS condvar |
| settings key | "hotspot" (7B) | same key |
| core_read VA | 0x14060CBC0 | 0x100617f40 (different module) |
| poisoned lock msg | same string | same string (cross-platform) |
| behavioral semantics | identical | identical |

## Struct Layout (inferred)

- `HotspotConfig` contains `enabled: bool` as a field in `CodexMateSettings` hashmap value
- Settings key = "hotspot" (7 bytes)
- Storage: `CodexMateSettings` map under `~/.codex/` settings persistence (via `codexmate_settings_field_lookup_sys_111`)
- Additional optional fields: `mysteryUnlockGrants`, `mysteryUnlockedRoutes` (read alongside hotspot config)

## Namespace

- `repo` — repository-backed command (reads from `.codex/` settings store, same as 1.0.9)
