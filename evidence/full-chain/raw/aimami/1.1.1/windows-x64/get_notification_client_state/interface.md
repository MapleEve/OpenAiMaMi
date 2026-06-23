# get_notification_client_state — Interface Contract (Windows x64) [gold-leaf]
## session: wf-aimami111-delta-20260618-goldleaf | sha: d24e429a

---

## IPC Interface

```
command: "get_notification_client_state"
argKeys: []   (zero-arg, pure state query)
source:  lib/api.ts:704
invoke:  invoke<NotificationClientStatePayload>("get_notification_client_state")
```

---

## Response DTO

```typescript
// NotificationClientStatePayload
// Confirmed from serializer string literals @ 0x1401A1D90
interface NotificationClientStatePayload {
  hotspot: boolean;                      // bool, settings+144
  usageRefreshInterval: number;          // u64, settings+16    [NEW vs 1.0.9]
  deviceId: string | null;              // Option<String>, settings+64
  remoteDeviceSecret: string | null;    // Option<String>, settings+88  [NEW vs 1.0.9]
  notificationsSince: string | null;    // Option<String>/cursor, settings+0  [NEW vs 1.0.9]
}
// JSON output order: hotspot, usageRefreshInterval, deviceId, remoteDeviceSecret, notificationsSince
```

---

## Side Effects

| Effect | Description | Confirmed |
|---|---|---|
| File read | CodexMateSettings JSON via win32_file_read_bytes_111 @ 0x141093260 | yes |
| Optional key read | mysteryUnlockGrants (19B), mysteryUnlockedRoutes (21B) | yes |
| Window focus dispatch | focus_main_window_dispatch @ 0x14038E240 on window-ID match | yes |
| WakeByAddressSingle | Signals poll completion thread on Ready (@ 0x1403473E0) | yes |
| Tauri menu resolve | __tauri_window_menu__ (21B) + __tauri_help_menu__ (19B) via sub_14012E940 | yes |
| JSON serialize+write | hotspot_config_serialize_5field_json_and_write_sys @ 0x1401A1D90 | yes |

---

## Return Discriminants (internal Poll sentinels)

| Value | Meaning |
|---|---|
| 0x8000000000000025 | Poll::Ready — success, data available |
| 0x8000000000000010 | Poll::Pending / NotReady — hotspot discriminant returned 3 |
| 0x8000000000000000 | Poll::Pending — awaiting (normal suspension) |

---

## Hotspot Discriminant Values (hotspot_ready_state_discriminant_check_sys_111)

| Return | Meaning |
|---|---|
| 18 | Ready — TLS window_id matches requested_id |
| 3 | NotReady — alternate focus dispatch, discriminant != 38 |
| 38 | In-flight — treated same as Ready in 1.1.1 |

---

## Baseline Comparison (1.0.9 vs 1.1.1)

This command is wholly absent in 1.0.9 — no equivalent IPC entry in dispatcher string table.
All delta items are app-level additions.

| Changed Item | 1.0.9 | 1.1.1 |
|---|---|---|
| IPC command | absent | present |
| DTO fields | — | 5 fields |
| Async state machine | — | 9 poll steps + 2 discriminant checks |
| Settings read scope | — | hotspot + 2 optional mystery keys |
| Thread sync | — | WakeByAddressSingle on completion |
| Menu resolve | — | window_menu + help_menu |
