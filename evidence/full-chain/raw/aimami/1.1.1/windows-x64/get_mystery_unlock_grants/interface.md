# get_mystery_unlock_grants — Interface Contract (gold-leaf)
session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
sha: d24e429a

## IPC Invocation

```typescript
// Frontend call (CCF: getMysteryUnlockGrants)
const result = await invoke<HotspotConfigResponse>("get_mystery_unlock_grants");
// No arguments / payload
```

## Request

```
No payload. Empty object {}.
```

## Response — Ok path

```json
{
  "hotspot": "<string>",
  "usageRefreshInterval": 86400000,
  "deviceId": "<string>",
  "remoteDeviceSecret": "<string>",
  "notificationsSince": "<string>",
  "apiProxy": "<string | null>",
  "mysteryUnlockGrants": [
    {
      "route": "<string>",
      "expiresAtMs": 1750000000000
    },
    {
      "route": "<string>"
    }
  ]
}
```

`expiresAtMs` is **optional** — omitted from JSON when `Option::None`
(internal representation: `u64 == 0`).

## Response — Err path

```json
"<error string>"
```

Tauri wraps as `Err(String)` via IPC. All error conditions return empty defaults
(not hard Err) except persistent file-write failures.

## DTO Types

```rust
// Response (Ok)
struct HotspotConfigResponse {
    hotspot:                String,
    usage_refresh_interval: u64,           // ms
    device_id:              String,
    remote_device_secret:   String,
    notifications_since:    String,
    api_proxy:              Option<String>,
    mystery_unlock_grants:  Vec<MysteryUnlockGrant>,  // NEW in 1.1.1
}

// NEW in 1.1.1
struct MysteryUnlockGrant {
    route:           String,
    expires_at_ms:   Option<u64>,  // serde: "expiresAtMs"; omitted when None
}
```

## Memory Layout — MysteryUnlockGrant (stride=40 / 0x28)

```
+0x00  u64   expires_at_ms_or_zero  (0 = None)
+0x08  u64   (padding / alignment)
+0x10  u64   route.ptr
+0x18  u64   route.len
+0x20  u64   route.cap
```

## Storage Keys (CodexMateSettings JSON)

| Key | Length | VA | Direction |
|---|---|---|---|
| `"mysteryUnlockGrants"` | 19B | 0x1412B684A | read + write-back |
| `"mysteryUnlockedRoutes"` | 21B | 0x1412B685D | read (companion, internal) |

## Side Effect Contract

| Effect | Condition |
|---|---|
| File read | Always (CodexMate settings at ctx+584) |
| File write | Only when grant expiry filter changes grant count |
| HTTP | Never |
| Sidecar | Never |
| DB | Never |

## Expiry Semantics

Grants with `expiresAtMs < current_elapsed_ms` are filtered before response.
`current_elapsed_ms` computed as:
```
elapsed_since_ts_111(system_time_precise_u32_111(), 3577643008, 27111902)
```
Grants with `expiresAtMs == 0` (None) are treated as **permanent** (never expire).

## Delta vs 1.0.9

Command entirely absent in 1.0.9. No equivalent IPC existed.
Closest 1.0.9 callee: none — `mysteryUnlockGrants` field, hotspot timer, and grant
expiry filter logic are all net-new surface in 1.1.1.

*gold-leaf; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf*
