# Interface — set_usage_refresh_interval (AiMaMi 1.1.1 Windows x64)
<!-- session=<审计会话> | machine=<本地机器> -->
<!-- produced=2026-06-18 | sha=d24e429a -->

## IPC Contract

### Frontend invoke (dim1 — CCF)

```typescript
// Frontend caller (CCF) — inferred from string anchor + dispatcher xref
// String: "set_usage_refresh_interval" @ 0x1412ac243
// Only 1 string xref → dispatched via tauri_ipc_main_dispatcher_sys
invoke("set_usage_refresh_interval", {
  app: string,        // app identifier
  interval: "30s" | "1m" | "3m" | "5m"  // usage refresh interval enum
})
```

### Request DTO (dim2 — argKeys + extractor)

| Field | Type | Extractor | Notes |
|---|---|---|---|
| `command` | `string` | dispatcher routing | value = `"set_usage_refresh_interval"` |
| `app` | `string` | `confirm_pending_auto_switch_deserialize_request_sys` | used to scope skill query |
| `interval` | `"30s"\|"1m"\|"3m"\|"5m"` | `remove_skill_parse_id_param_111` @ `0x1402FED40` | parsed by `interval_str_to_seconds_111` |

### Response DTO

```typescript
// Success
{ ok: true, interval_seconds: number }  // u64 seconds: 30|60|180|300

// Error cases
{ ok: false, error: string }  // skill query Err | interval parse Err | hotspot write IoError
```

## Error Paths (dim2)

| Condition | Discriminant | Outcome |
|---|---|---|
| Early cached result | `v19 == 3` | IPC response immediately, no disk write |
| Skill query Err | `v36[0] != 6` | IPC error response, no disk write |
| Interval parse Err | `v37[0] != 6` | IPC error response, no disk write |
| Hotspot write IoError | `v28[0] == 10` | `Err(10)` propagated through apply_and_persist |
| Repository lock poisoned | `aPoisonedLockAn` | panic via `sub_14124BFE0` |

## Persistence Contract (dim4)

Hotspot config JSON written by `hotspot_config_serialize_5field_json_and_write_sys` contains 5 fields:

```json
{
  "hotspot": "<value from hotspot config a3+144>",
  "usageRefreshInterval": "<new interval string: 30s|1m|3m|5m>",
  "deviceId": "<value from a3+64>",
  "remoteDeviceSecret": "<value from a3+88>",
  "notificationsSince": "<value from a3>"
}
```

**Delta vs 1.0.9**: 1.0.9 wrote only `deviceId` (single-field). 1.1.1 writes full 5-field config including the new `usageRefreshInterval` field.

## Global State (dim4)

| Global | Address | Access | Effect |
|---|---|---|---|
| `qword_1418930D0` | `0x1418930D0` | write | stores u64 interval seconds after successful persist |
| `byte_1418930C8` | `0x1418930C8` | mutex byte (InterlockedCAS) | guards global state write |
| `byte_1418930C9` | `0x1418930C9` | flag | secondary state tracking |
| `dword_1418930E8` | `0x1418930E8` | read | branch condition in notify function |
| `unk_1418930E0` | `0x1418930E0` | Condvar | `sub_141078290` notify target |
