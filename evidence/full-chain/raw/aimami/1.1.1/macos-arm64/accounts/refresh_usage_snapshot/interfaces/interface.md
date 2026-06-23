# Interface / DTO / Error / Side-Effect Boundary
# command: refresh_usage_snapshot
# version: 1.1.1 | platform: macos-arm64
# session: wf-aimami111-delta-20260618-mac100 (base: wf-aimami111-delta-20260616)

## IPC Invoke

```typescript
invoke("refresh_usage_snapshot", { upstream: boolean })
```

## Parameters

| Name | Type | Required | Default | Notes |
|---|---|---|---|---|
| upstream | bool | yes | — | If true and first response status==Refreshing(2), triggers 200ms sleep + retry |

## Response

Type: `CoreEnvelope<CoreSnapshotPayload>`
Size: 0x2A8 bytes (680 bytes)

On success: full snapshot payload including:
- Usage data enriched from API (plan, rate limits, remaining requests)
- quota_store state
- bootstrap snapshot fields

On error: `CoreEnvelope` with `CoreError` string

## Tauri Event Emitted (DELTA from 1.0.9)

**Event name**: `"runtime-state-updated"` (21 chars)
- Emitted on EVERY successful load (before retry check)
- Also emitted after successful retry (if upstream+Refreshing path taken)
- 1.0.9 emitted `"load_snapshot"` — **breaking frontend change**

## Error Paths

| Error | Source | Behavior |
|---|---|---|
| Repository Mutex poisoned | StateManager::try_get | panic (bug) |
| StateManager::try_get returns null | App state | panic (bug) |
| load_usage_only_runtime_snapshot Err | CoreError | propagate in CoreEnvelope tag=3 |
| HTTP connect error | reqwest::Error::is_connect | stored in api_context; apply_usage_result handles gracefully |
| HTTP timeout | reqwest::Error::is_timeout | same as connect error handling |
| HTTP non-2xx status | (status - 200) >= 0x64 | CoreError tag=9 with status code |
| JSON parse error | Response::json | CoreError tag=6 |
| persist_progressive_state fail | PROGRESSIVE_STATE_SAVE_FAILED | non-fatal warning pushed to warnings Vec; execution continues |
| Mutex lock poisoned (load_usage_only) | panic_count check | sets poisoned flag; unlock + return Err |

## Side Effects (1.1.1)

1. **HTTP POST** to usage snapshot API via reqwest::blocking
   - User-Agent: `AiMaMi/1.1.1`
   - Headers: Authorization (Bearer token), ChatGPT-Account-Id, Accept
   - URL: format string from `unk_1010B8E15` (not resolved in this session)
2. **fs read**: Repository::load_local_state_synced (loads local DB/json state)
3. **fs write**: Repository::persist_progressive_state (saves updated snapshot)
4. **in-memory**: apply_usage_result (updates Repository in-memory state)
5. **quota_store**: upsert_item (updates quota store)
6. **quota_store**: sync_token_status_to_quota_store
7. **bootstrap**: store_bootstrap_snapshot_progressive (bootstrap persistence)
8. **Tauri event**: emit("runtime-state-updated", CoreSnapshotPayload) — NEW EVENT NAME
9. **note_usage_refresh_activity** (NEW in 1.1.1):
   - Writes elapsed-time timestamp to `usage_refresh_watcher_state::STATE` (0x101442AC0)
   - Calls `Condvar::notify_all` on `unk_101442AE0`
   - Purpose: notifies background usage-refresh watcher thread(s)
10. **refresh_tray_menu_with_snapshot** (NEW in 1.1.1):
    - Updates system tray menu icon/label with latest snapshot
11. **DISPLAY_SNAPSHOT_CACHE** (0x101442B00): global mutex cache updated in broadcast_runtime_snapshot

## Rate Limit Response Fields Parsed

From JSON response `rate_limit` key:
- `limit` (i64)
- `hard_limit` (i64)
- `remaining` (i64)
- `remaining_requests` (i64)
- `used_requests` (i64)
- `limit_window_seconds` (i64)
- `window_seconds` (i64)
- `period_seconds` (i64)
- `resets_at` (i64/string)
- `used_percent` (f64)

## Retry Logic

```
if upstream == true AND snapshot.status_field[632] == 2 (Refreshing):
    sleep(200ms)
    load_usage_only_runtime_snapshot (second attempt)
    broadcast_runtime_snapshot ("runtime-state-updated")
    return second result
else:
    return first result (no retry)
```

## Platform Boundary

macOS arm64 confirmed by this evidence. Windows x64 platform separate — not covered.

## Delta Note: Frontend Impact

Frontend consuming `load_snapshot` event MUST migrate to `runtime-state-updated` event for 1.1.1 compatibility. The old `load_snapshot` event is no longer emitted by this command.
