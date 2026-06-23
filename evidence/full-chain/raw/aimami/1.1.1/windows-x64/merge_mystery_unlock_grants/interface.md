# interface — merge_mystery_unlock_grants (windows-x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
producer: claude-sonnet-4-6
sha: d24e429a
baseline: 1.0.9

---

## IPC Contract

| Field | Value |
|---|---|
| IPC command | `merge_mystery_unlock_grants` |
| Command string VA | `0x1412AC3B3` |
| Tauri invoke side | `invoke('merge_mystery_unlock_grants', { repo, grants })` |
| Response type | `Result<MergeResult, IpcError>` |

## Request DTO

```typescript
// Frontend invoke args
interface MergeMysteryUnlockGrantsArgs {
  repo: string;      // 4-char key in payload — identifies skill by repo
  grants: MysteryRouteGrant[];  // array of grant objects to merge
}

interface MysteryRouteGrant {
  // JSON field: matches mysteryUnlockGrants HashMap key
  key:   string;   // one of: "mcp" | "skills" | "overview" | "accounts" |
                   //         "sessions" | "settings" | "maintenance" |
                   //         "subscription" | "customInstructions"  [NEW in 1.1.1]
  value: unknown;  // grant value (u64 or bool per key category)
  // companion field: mysteryUnlockedRoutes (Option<...>)
}
```

## Response DTO

```typescript
// Success: discriminant=10 from hotspot_merge_grants_into_config_111
interface MergeResult {
  elapsed_ms: number;  // merge latency in milliseconds
}

// Error discriminants:
// discriminant=2: relay_config_check_parent_dirs_sys failed (dir not found)
// discriminant=3: write error (serialize/file write failure)
// discriminant=1: poisoned mutex (another task panicked inside lock)
// discriminant=6: deserialization error in deserialize_grants_payload_111
```

## Hotspot Config JSON Schema (1.1.1)

Written by `hotspot_config_serialize_5field_json_and_write_sys` @ `0x1401A1D90`:

```json
{
  "hotspot":               "<hotspot_value>",
  "usageRefreshInterval":  "<uint>",
  "deviceId":              "<string>",
  "remoteDeviceSecret":    "<string>",
  "notificationsSince":    "<timestamp>",
  "mysteryUnlockGrants":   { "<key>": "<value>", ... },
  "mysteryUnlockedRoutes": "<optional_routes>"
}
```

**Delta vs 1.0.9:** was single-field (`deviceId` only); now 7-field schema including `mysteryUnlockGrants` and `mysteryUnlockedRoutes`.

## Grant Key Categories (1.1.1)

| Key | Length | Match method | New in 1.1.1? |
|---|---|---|---|
| `mcp` | 3 | inline byte cmp | no |
| `skills` | 6 | inline uint32+uint16 cmp | no |
| `overview` | 8 | QWORD cmp | no |
| `accounts` | 8 | QWORD cmp | no |
| `sessions` | 8 | QWORD cmp | no |
| `settings` | 8 | QWORD cmp | no |
| `maintenance` | 11 | 2x QWORD overlap cmp | no |
| `subscription` | 12 | QWORD+DWORD cmp | no |
| `customInstructions` | 18 | SSE2 SIMD (`xmmword_1412B5240`) | **YES** |

## Side Effects

| Effect | Details |
|---|---|
| mutex acquisition | `InterlockedCompareExchange8` on `mystery_grant_mutex_byte` |
| hotspot config read | `win32_file_read_bytes_111` from path at `a2+584/a2+592` |
| hotspot config write | `sub_1403A64F0` to path at `a2+72` |
| timing telemetry | `GetSystemTimePreciseAsFileTime` per merge; slow-path log at ≥21ms |
| auto-switch gate | `pending_auto_switch_state_lock_acquire_111` blocks if flag set at `off_141899DC0` |
| poisoned-lock log | `sub_1410B1930` if mutex byte indicates poisoned state |

## Dim5 Platform Compatibility

- Windows-only: `_InterlockedCompareExchange8`, `WakeByAddressSingle`, `GetSystemTimePreciseAsFileTime`
- Corresponding macOS path: separate binary (mac leaf verified in parallel session)
- No `#[cfg(windows)]` visible at Rust level — binary is windows-x64 exclusive
