# get_notification_client_state — Interface / DTO / Error / Side-Effect

**Version**: AiMaMi 1.1.1 macOS arm64
**Session**: wf-aimami111-delta-20260616
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

## Request

- **argKeys**: [] (zero arguments)
- **Command takes only `State<Repository>` — Tauri state injection, no user parameters**
- Frontend wrapper: `getNotificationClientState: () => ne("get_notification_client_state")`
- Source: `assets/index-DdcCOEJG.js` line 86, col 32009 (ipc-contracts.jsonl confirmed)

## Response DTO

```
CoreEnvelope {
  tag:                  u64,    // 10 = Ok; 0x8000000000000000 = Err
  device_id:            String, // UUID v4 lowercase hex "xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx"
  notifications_since:  u64,    // Unix epoch seconds (NOT milliseconds)
}
```

Frontend camelCase field names (serde): `deviceId`, `notificationsSince`

**IMPORTANT**: `notificationsSince` is epoch **seconds**. Frontend must multiply by 1000 for JS `Date` constructor (confirmed from 1.0.9 dim1 evidence; 1.1.1 pattern identical).

## TypeScript interface (migrated from 1.0.9 dim1 evidence)

```ts
export interface NotificationClientStatePayload {
  deviceId: string;          // UUID v4 lowercase hex, stable across restarts
  notificationsSince: number; // epoch seconds; frontend: * 1000 for Date()
}
```

## Error paths

1. **Mutex poison** (`GLOBAL_PANIC_COUNT` non-zero): panic string at `0x10114c2e6` = `"poisoned lock: another task failed inside"` (41 bytes confirmed) → CoreEnvelope Err sentinel `0x8000000000000000`.
2. **UUID fmt failure**: `core::result::unwrap_failed` panic — unexpected path; `uuid::fmt::LowerHex::fmt` virtually never fails.
3. **save_settings failure** (create path only): CoreEnvelope Err propagated; `device_id` and `notifications_since` not persisted. Caller receives `CoreEnvelope` with Err tag.
4. **load_settings failure**: silently falls through to create path; no error returned to caller unless `save_settings` also fails.
5. **SystemTime before UNIX_EPOCH**: `duration_since` returns Err → `v6 = 0` (sentinel); `notifications_since = 0` in settings, triggering create-path again on next call (infinite create until clock is correct).

## Side effects

- **READ PATH** (device_id non-empty AND notifications_since > 0):
  - **No disk write**. Pure synchronous read. Idempotent.
- **CREATE PATH** (device_id empty OR notifications_since == 0 OR load_settings failed):
  - Generates `uuid::Uuid::new_v4()` as `device_id` (UUID v4 random).
  - Sets `notifications_since` = `SystemTime::now().duration_since(UNIX_EPOCH).secs` (u64).
  - Calls `Repository::save_settings` → serializes full `CodexMateSettings` struct → `std::fs::write` to platform settings file path (via `CodexPaths::ensure_directories` + settings file path from `Repository`).
  - **Effect**: subsequent calls hit read path (idempotent after first successful create).
- **No HTTP**, **no network**, **no IPC emit**, **no tokio spawn**. Fully synchronous IPC command.
- **Mutex held during entire operation**: `Mutex::lock` acquired before core logic, `Mutex::unlock` after. Other threads blocked.

## CodexMateSettings JSON fields serialized by save_settings (1.1.1)

Confirmed from `save_settings` decompile (serialize_entry call order + rodata lengths):

| JSON key              | len | offset (a3+) | notes |
|-----------------------|-----|--------------|-------|
| `hotspot`             |  7  | +144         |       |
| `usageRefreshInterval`| 20  | +16          |       |
| `deviceId`            |  8  | +64          | this command's field |
| `remoteDeviceSecret`  | 18  | +88          |       |
| `notificationsSince`  | 18  | 0 (a3)       | this command's field |
| (plus serialize_field calls for additional struct fields at +112, +40) |

## Synchronous confirmation

- Uses `InvokeResolver::respond` (NOT `respond_async_serialized`).
- Confirmed in IPC dispatch closure `0x1003154f0` (xref at `0x1003155fa`).
- No Future::poll, no async state machine discriminant.
- 1.0.9 anti-cheat taxonomy (8 types, all exhausted, genuine_ceiling=false) directly applicable; 1.1.1 decompile confirms same synchronous pattern.
