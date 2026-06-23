# refresh_usage_snapshot — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: acceptance_draft_only
## blocked_dim: dim1 (partial — Tauri event name changed from "load_snapshot" to "runtime-state-updated"; frontend must update event listener; argKeys confirmed but event listener delta is a breaking CCF change requiring explicit 1.1.1 frontend verification), dim5_win (Unknown)

---

## happy_path (producer-acceptance-draft)

**Scenario**: `invoke("refresh_usage_snapshot", { upstream: true })`. Active account with valid OAuth token. API connectivity available.

Input:
```json
{ "upstream": true }
```

Expected output: `CoreEnvelope<CoreSnapshotPayload>` (0x2A8 = 680 bytes)
```json
{
  "data": {
    /* CoreSnapshotPayload: usage fields, rate limits, plan info, quota */
    "usage": {
      "limit": 100,
      "remaining": 42,
      "remaining_requests": 42,
      "used_requests": 58,
      "used_percent": 0.58,
      "limit_window_seconds": 3600,
      "window_seconds": 3600,
      "period_seconds": 86400,
      "hard_limit": 200,
      "resets_at": 1718800000
    }
  },
  "warnings": []
}
```

**DELTA from 1.0.9**: Tauri event emitted is `"runtime-state-updated"` (21 chars), NOT `"load_snapshot"` (11 chars). This is a **breaking change** for any frontend subscriber still listening on `"load_snapshot"`.

**Retry logic** (upstream=true only): if first response status field == 2 (Refreshing), sleep 200ms, retry `load_usage_only_runtime_snapshot` + `broadcast_runtime_snapshot` once.

**side_effect_asserts**:
1. **HTTP request** to usage API via reqwest::blocking with headers: `Authorization: Bearer <token>`, `ChatGPT-Account-Id: <id>`, `Accept: */*`, `User-Agent: AiMaMi/1.1.1`.
2. **Tauri event `"runtime-state-updated"`** emitted with `CoreSnapshotPayload` payload.
3. **`note_usage_refresh_activity`**: writes elapsed-seconds timestamp to `usage_refresh_watcher_state::STATE` global (0x101442AC0); calls `Condvar::notify_all` — wakes background watcher thread(s).
4. **`refresh_tray_menu_with_snapshot`**: tray menu updated with latest snapshot.
5. **`persist_progressive_state`**: fs write of updated snapshot (non-fatal if fails; warning `PROGRESSIVE_STATE_SAVE_FAILED` pushed to warnings[]).
6. **`quota_store::upsert_item`** and **`sync_token_status_to_quota_store`**: quota store updated.
7. **`store_bootstrap_snapshot_progressive`**: bootstrap snapshot persisted.
8. **`DISPLAY_SNAPSHOT_CACHE`** global mutex updated in `broadcast_runtime_snapshot`.

---

## boundary / error paths

| Trigger | Expected behavior |
|---------|-------------------|
| HTTP connect error | `reqwest::Error::is_connect` → error category set; apply_usage_result handles gracefully; non-fatal if other data available |
| HTTP timeout | `reqwest::Error::is_timeout` → same as connect error |
| HTTP non-2xx status (status - 200 ≥ 100) | `CoreEnvelope::err`, code=9, message includes HTTP status code |
| JSON parse error in response body | `CoreEnvelope::err`, code=6 |
| `persist_progressive_state` fails | Non-fatal warning `PROGRESSIVE_STATE_SAVE_FAILED` in `warnings[]`; execution continues |
| Repository Mutex poisoned | `StateManager::try_get` → panic (bug) |
| `load_usage_only_runtime_snapshot` Err | `CoreEnvelope::err`, code=3 |
| Mutex lock poisoned (load_usage_only) | Sets poisoned flag; unlock + return Err |

---

## side_effect_asserts

1. After call: `"runtime-state-updated"` event received by frontend (NOT `"load_snapshot"`).
2. After call: tray menu icon/label updated (verify via Computer Use screenshot).
3. After call: `usage_refresh_watcher_state::STATE` global updated (background watcher thread potentially woken).
4. HTTP User-Agent header is `AiMaMi/1.1.1` — verify via network request capture.
5. `PROGRESSIVE_STATE_SAVE_FAILED` in warnings[] only when persist fails (not on happy path).

---

## test_mapping (producer-acceptance-draft)

| Test | Type | Rationale |
|------|------|-----------|
| HTTP request made with correct User-Agent AiMaMi/1.1.1 | unit (Rust) — http_client mock | verify via reqwest mock |
| runtime-state-updated event fired (NOT load_snapshot) | e2e (Tauri) | subscribe to runtime-state-updated, verify event; verify load_snapshot event NOT received |
| Retry triggered when upstream=true and status==Refreshing | unit (Rust) — retry logic | inject status=2 first response, verify sleep+retry |
| No retry when upstream=false | unit (Rust) | inject status=2 with upstream=false, verify single call |
| HTTP non-2xx returns code=9 Err | unit (Rust) / manual | mock 401/429/500 response |
| persist_progressive_state failure is non-fatal (warning in warnings[]) | unit (Rust) | inject save error, verify warnings[] contains PROGRESSIVE_STATE_SAVE_FAILED and response is still Ok |
| note_usage_refresh_activity updates global state | unit (Rust) | verify global timestamp updated + Condvar notified |
| tray menu updated on success | manual (Computer Use) | screenshot tray before/after invoke |
| Rate limit fields parsed from JSON response | unit (Rust) | mock response with all 10 rate_limit fields, verify parsed |

---

## dim6_basis
Evidence: accounts/refresh_usage_snapshot/evidence.md §Confirmed (Tauri event "runtime-state-updated" at 0x1011578d6, note_usage_refresh_activity at 0x10061c240 decompiled — mutex + Condvar::notify_all confirmed, refresh_tray_menu_with_snapshot at 0x10062bc40 decompiled — TrayIcon::set_menu call confirmed, User-Agent AiMaMi/1.1.1 confirmed, 10 rate-limit JSON keys confirmed); interfaces/interface.md documents retry logic (200ms, status==2), error codes, and all 11 side-effects with VAs.

Note: dim1 partial — Tauri event name delta "load_snapshot" → "runtime-state-updated" confirmed by VA at 0x1011578d6 in binary; C5 frontend must have been updated to listen to new event; explicit 1.1.1 frontend CCF verification required. dim5_win Unknown. Blocked for readyToImplement.
