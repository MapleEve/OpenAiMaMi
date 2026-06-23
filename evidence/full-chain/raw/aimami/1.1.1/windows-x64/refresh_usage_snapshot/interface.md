# refresh_usage_snapshot — Interface (Windows x64)
# session: <审计会话> | sha: d24e429a
# delta_class: integrity_recovered | baseline: 1.0.9

## IPC Contract

### Command Name
`refresh_usage_snapshot`

### Frontend Invoke Wrapper
`refreshUsageSnapshot` — in `assets/index-DdcCOEJG.js` (minified, JS wrapper confirmed via frontend-contract-report.md)

### Args (dim2)
- argKeys: none (empty — confirmed frontend-contract-report.md: `argKeys: -`)
- extractor: no argument extraction in owner; IPC context carries account state directly via AppState pointer

### Request DTO
None — command takes no explicit payload. Internal state (account list, tokens) read from AppState.

### Response DTO

The response is dispatched via sub_14080C3C0 (IPC_RESPONSE_DISPATCH, shared named callee) and formatted via sub_140E30410 (UsageResult display formatter, 0x25 variants). Fields confirmed from serialize_usage_attempt_stats_111:

NEW vs 1.0.9:
```json
{
  "usageAttemptCount": <u32>,
  "usageSuccessCount": <u32>,
  "lastUsageFailure": <string | null>,
  "lastUsageFailureAccount": <string | null>
}
```

Per-account usage fields (written to account store, broadcast via runtime-state-updated event):
- `hasActiveSubscription` (bool via discriminant)
- `subscriptionExpiresAt` (Option<string>)
- `subscriptionWillRenew` (bool)
- `lastUsageAt` (u64 timestamp)
- `usageSource` (enum byte)
- `quota_daily_tokens` (u32, threshold < 361)
- `quota_monthly_tokens` (u32, threshold < 8640)
- `total_token_usage` (u64)
- `insufficient_quota` (u64)

### Side Effects

1. **Network I/O** — GET `https://chatgpt.com/backend-api/wham/usage?account_id=<id>` via `fetch_wham_usage_http_111@0x140673CC0` (NEW vs 1.0.9)
   - Headers: `Authorization: Bearer <token>`, `ChatGPT-Account-Id: <id>`, `Accept: application/json`, `User-Agent`
   - Discriminants: 10=success, 9=HTTP error 3xx-5xx, 6=network error
2. **Disk write** — `quota_history_persist_file_111@0x140200EA0`: builds path from account_id, mkdir, serializes QuotaHistoryPoint to JSON, CreateFile/WriteFile/CloseHandle (NEW vs 1.0.9)
3. **In-memory ring** — `quota_history_append_dedup_111@0x1401FF820`: dedup-appends to QuotaHistoryStore at AppState+93 (NEW vs 1.0.9); max 21 entries, trims via sub_1407B44C0
4. **State update** — increments usageAttemptCount/usageSuccessCount at AppState[55], writes error class to AppState[57], updates account struct fields at fixed offsets
5. **Event broadcast** — `broadcast_runtime_state_updated_111@0x140790230` emits "runtime-state-updated" via event bus sub_140074A00; throttle check via elapsed_since_ts_111; tray refresh via sub_14078B420

### Pre-check Guard (NEW vs 1.0.9)
`confirm_pending_auto_switch_deserialize_request_sys@0x140089a50` — if pending auto-switch is active, command returns early without HTTP fetch. This early-return path did not exist in 1.0.9.

### usageRefreshEnabled Guard (NEW vs 1.0.9)
Branch at 0x140984DB1 → 0x14098551D: if `usageRefreshEnabled == false`, resolve empty and return early.

### Error Paths
- discriminant 6: network error → error_class=1, error string in AppState[55..56]
- discriminant 9: HTTP 3xx-5xx → error_class=2
- quota_history_persist_file_111 failure → QUOTA_HISTORY_APPEND_FAILED logged to AppState error ring (state[101..103])
- pending_auto_switch active → early return before HTTP

### Delta Risk
medium — decompile still fails on owner body; new pending-switch pre-check adds early-return path not in 1.0.9; active-account refresh body routing changed (sub_140889870 dropped). Consumer must not assume 1.0.9 callee chain is preserved.
