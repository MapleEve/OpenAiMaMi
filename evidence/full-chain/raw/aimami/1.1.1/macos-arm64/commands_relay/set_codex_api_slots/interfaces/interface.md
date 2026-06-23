# Interface: set_codex_api_slots — AiMaMi 1.1.1 macOS ARM64

## Command Name
`set_codex_api_slots`

## argKeys (dual-source confirmed)
- `manager`: String — relay provider manager ID (7B key, from dispatcher decompile `unk_101148410`)
- `slots`: Vec<CodexApiSlot> — array of slot configurations (5B key, `unk_101148407`)

## CodexApiSlot struct (serde, 2 fields)
- `providerId`: String — provider identifier to match in relay state
- `model`: String — model name to assign to this slot

## Constraints
- `slots.len()` must be in [1, 5] (inclusive)
  - Empty (len=0): Err — error message ~55B UTF-8 Chinese string (hardcoded)
  - len > 5: Err — format error with count via `format_inner`
- `providerId` in slots must be unique (hashbrown dedup check)
- `providerId` must match an existing RelayProvider in relay state (linear scan stride=232B)
- `model` must be in `RelayProvider::exposed_models` for that provider

## Response
- Success: `CoreEnvelope<RelayState>` — full relay state after update (JSON serialized to frontend)
  - Success sentinel: `*a1 = 0x8000000000000000LL` is NOT set on success (Err uses this)
  - Success path: `CoreEnvelope::ok::hdc4ef5c73c2726a3(a1, v6)` wraps RelayState clone
- Error: Err sentinel `0x8000000000000000` + CoreError payload

## Error envelope
All errors return via `CoreError` type (display via `_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d4af54243c00052`):
1. `slots empty` — ~55B hardcoded UTF-8 error string (Chinese)
2. `slots count > 5` — formatted with actual count
3. `providerId not found` — format: "providerId {x} not found in relay" (inferred from validate_api_slots LABEL_38)
4. `duplicate providerId` — format: "duplicate providerId {x}" (inferred from LABEL_40)
5. `model not in exposed_models` — format: model not exposed for provider (LABEL_47/67)
6. FS error — from `storage::save` IoError propagated as CoreError
7. Codex config write error — from `sync_codex_config_with_outcome` write_catalog failure (logged at src/core/relay/manager.rs:25)

## Side Effects
1. **In-memory relay state update**: validated slots assigned to matching RelayProvider (under POSIX Mutex)
2. **relay config JSON atomic write**: full RelayState serialized to disk via `storage::save` → `write_atomic` (uuid tmp → fdatasync → rename → fsync parent)
3. **codex config sync** (conditional): `sync_codex_config_with_outcome` runs `resolve_api_slots` + `write_catalog`/`remove_catalog` + `apply_codex_state` — only when provider has api_slots configured
4. **Mutex acquire/release**: POSIX pthread_mutex (macOS) — vs WIN InterlockedCompareExchange8

## Platform Differences (macOS vs Windows)
| Aspect | macOS | Windows |
|---|---|---|
| Mutex type | POSIX Mutex (`std::sys::pal::unix::sync::mutex::Mutex`) | `_InterlockedCompareExchange8` + `WakeByAddressSingle` |
| Atomic write tmp name | uuid::v4 + process::id + parent path | GetCurrentProcessId + CloseHandle WIN fs leaf |
| FS sync | `File::sync_data` (fdatasync) + `sync_parent_dir` | WIN fs leaf (GetCurrentProcessId+CloseHandle equiv) |
| Owner VA | `0x1005e9530` (1.1.1 macos-arm64) | `0x14001BDE0` (1.1.1 win64) |
| Core impl VA | `0x1005d4f40` | `0x140218120` (set_codex_api_slots_core_dispatch_sys) |
| Relay state stride | 232B per RelayProvider | 232B per RelayProvider (same) |
| Slot validate count | ≤5 in validate_api_slots | ≤5 in `sub_1406D7860` a4<=5 |

## DTO schema (JSON wire format)
```json
{
  "manager": "<providerId string>",
  "slots": [
    {"providerId": "<string>", "model": "<string>"},
    ...
  ]
}
```

## Notes
- `manager` param maps to the relay provider ID in RelayState
- `slots` replaces the full slots list for that provider (not merge/append)
- Relay config write path: at `a2+608` (relay config file path ptr) in CodexPaths struct
- dim5 Windows: independently done (REVERSE-STATUS line 2168, INDEX key aimami/1.1.1/windows-x64/set_codex_api_slots/full-chain)
- dim6 test/acceptance: C5 implementation side responsibility
