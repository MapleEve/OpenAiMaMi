# Interface: get_hotspot_enabled

**command**: `get_hotspot_enabled`
**module**: `hotspot` (1.1.1) — renamed from `system` (1.0.9)
**version**: 1.1.1 macOS ARM64

## Request DTO

- **argKeys**: [] (no input parameters)
- **frontend invoke**: `invoke("get_hotspot_enabled")` (no args object)

## Response DTO

- **type**: `bool`
- **Ok value**: `true` if hotspot overlay is enabled, `false` if disabled
- **response tag**: `0x8000000000000000` = Ok tag in Rust Result layout
- **IPC serialization**: bool serialized as JSON `true`/`false` via Tauri IPC

## Error DTO

- **Err type**: `CoreError` (propagated from mutex poisoning path)
- **mutex poisoned**: returns Err when `OnceBox<Mutex<Repository>>` is poisoned (panic in another thread while holding lock)
- **format**: CoreError display string passed through IPC `return_result`

## Side Effects

- Acquires and releases `OnceBox<Mutex<Repository>>` (global singleton)
- Reads settings JSON file from disk via `std::fs::read_to_string` (file path from Repository struct offset +440/+448)
- No writes, no network, no process spawn, no keychain access

## Persistence Chain

1. `OnceBox<Mutex<Repository>>::lock` — acquire global repo mutex
2. `Repository::load_settings` — reads `<settings_path>` from disk, parses JSON via `serde_json`
3. Applies `mysteryUnlockGrants`/`mysteryUnlockedRoutes` migration if present
4. Deserializes into `CodexMateSettings` struct
5. Extracts `settings.hotspot.enabled` (bool at struct byte offset 0x48)
6. Drops `CodexMateSettings` (dealloc heap strings/vecs)
7. Releases mutex
8. Returns `Ok(bool)`

## HotspotConfig struct fields (confirmed)

- `enabled: bool` — primary field; key `"enabled"` (7 bytes); position 0 in serde serializer
- `usageStatus` — additional monitoring field (type unknown)
- `usageLastError` — additional monitoring field (type unknown)

## CodexMateSettings field 0 = hotspot

From `FieldVisitor::visit_str`: length=7, xor-match `0x73746F68 / 0x746F7073` = `"hotspot"` → field index 0
Field byte offset in struct: 0x48 (72 bytes from base)

## Behavioral invariant

- Always reads fresh from file (no in-memory cache shortcut in get path)
- Returns the `enabled` bool regardless of `has_notch_screen()` — the notch check only gates window creation at startup/enable time
- Startup code in `run::{{closure}}` reads same field and logs `"[AiMaMi] startup: hotspot_enabled={value}"`

## Platform scope

- macOS ARM64: **confirmed** (full-chain decompiled)
- Windows x64: **Unknown** (not analyzed; do not infer)
