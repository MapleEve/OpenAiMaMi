# refresh_usage_snapshot — raw evidence (macOS arm64 1.1.1)

**owner_va**: 0x1006266d0
**symbol**: `codexmate_lib::commands::accounts::refresh_usage_snapshot_with_retry::haad2b996156be92a`
**size**: 0x43d (1085 bytes)
**binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi (macos-arm64)
**binary_sha_module**: AiMaMi 1.1.1
**session**: wf-aimami111-delta-20260618-mac100 (full-gold-leaf pass; base: wf-aimami111-delta-20260616)
**machine**: <本地机器>
**produced_at**: 2026-06-18
**module**: codexmate_lib::commands::accounts → leaf dir: accounts/
**baseline**: 1.0.9 at 0x1001e7eec (symbol: `refresh_usage_snapshot_with_retry::hac9abab03237b906`)
**is_upstream**: true
**gate_tier**: strictImplementationUse_candidate → **full_gold_leaf** (dim1-5 closed in this session; dim6 C5 impl side)
**call_tree_edges**: 31 (format: edge-per-line jsonl; max_depth=5; complete=true)

---

## Confirmed

- Owner VA: 0x1006266d0 confirmed via `func_query` name_regex=`refresh_usage_snapshot` — returns demangled `codexmate_lib::commands::accounts::refresh_usage_snapshot_with_retry::haad2b996156be92a`, size=0x43d
- Module: `codexmate_lib::commands::accounts` — same module as 1.0.9; leaf dir = `accounts/`
- 逆向分析 decompile: successful, full pseudocode obtained for owner + `load_usage_only_runtime_snapshot` + `broadcast_runtime_snapshot` + `fetch_usage_snapshot` + `note_usage_refresh_activity`
- argKeys: `upstream: bool` (a3 in pseudocode) — confirmed identical to 1.0.9; no new params
- Response type: `CoreEnvelope<CoreSnapshotPayload>` (0x2A8 bytes) — same as 1.0.9
- sync function: uses `reqwest::blocking::*` — no async poll body needed; standard sync Tauri IPC handler
- drop_in_place closure at 0x1000ba8f0 is the async IPC dispatch closure, not async impl body
- Call-tree depth: ≥7 (owner → load_usage_only_runtime_snapshot → enrich_active_account_usage_via_api → fetch_usage_snapshot → reqwest::blocking::request::RequestBuilder::send → HTTP terminal)
- HTTP terminal confirmed: `reqwest::blocking::request::RequestBuilder::send::hc5a81ae46149ad8f` → HTTP
- Tauri event emitted: **`"runtime-state-updated"`** (21 chars) — DELTA from 1.0.9 which emitted `"load_snapshot"` (11 chars)
- Tauri event internal routing arg: `"usageruntime-state-updated"` (5 word-length) — used for cache invalidation branch dispatch inside `broadcast_runtime_snapshot`, NOT the emitted event name
- New 1.1.1 side effect: `note_usage_refresh_activity` (0x10061c240) — writes elapsed-seconds timestamp to `usage_refresh_watcher_state::STATE` global, calls `Condvar::notify_all` to wake background watcher
- New 1.1.1 side effect: `refresh_tray_menu_with_snapshot` (0x10062bc40) — tray menu refresh on every broadcast
- User-Agent string: `AiMaMi/1.1.1` — confirmed in string table at 0x1011578d6 (delta from 1.0.9 `AiMaMi/1.0.9`)
- `fetch_usage_snapshot` new VA: 0x1006e40d0 (was 0x1005441b0 in 1.0.9) — same functional contract, updated symbol hash
- `parse_plan_from_usage_json` (0x100536610) called inside `fetch_usage_snapshot` — parses plan from JSON response
- Rate-limit parsing: JSON keys confirmed: `limit`, `hard_limit`, `remaining`, `remaining_requests`, `used_requests`, `limit_window_seconds`, `window_seconds`, `period_seconds`, `resets_at`, `used_percent`
- HTTP status gate: non-2xx (status - 200 >= 0x64) → error path; 2xx → JSON parse
- Error types: HTTP connect error (`reqwest::error::Error::is_connect`), timeout (`is_timeout`), HTTP non-2xx status, JSON parse error
- `persist_progressive_state` error: if persist fails, warning `PROGRESSIVE_STATE_SAVE_FAILED` pushed to warnings Vec (non-fatal), execution continues
- `test_api_connectivity` (0x1006e5290) called in `enrich_active_account_usage_via_api` — connectivity check before API call
- `ensure_fresh_token` (0x10068c490) called — OAuth token refresh before HTTP call
- `make_api_request_context` (0x10053e690) called — builds auth context for HTTP call
- `apply_usage_result` (0x1004d2be0) called — updates in-memory Repository state
- `upsert_item` (0x100534bf0) → `quota_store` updated
- `sync_token_status_to_quota_store` (0x1004d6780) called — syncs token state to quota store
- `store_bootstrap_snapshot_progressive` (0x1004d0060) called — bootstrap snapshot persistence
- `make_status_payload_with_service_state` (0x1004d0a50) called
- `CoreEnvelope::ok_with_warnings` (0x100554690) — wraps result with warnings list

## Inferred

- Retry logic: if `upstream==true` AND `snapshot.__src[632]==2` (CoreSnapshotPayload status field == 2 = Refreshing), sleep 200ms (200_000_000ns) and retry `load_usage_only_runtime_snapshot` + broadcast once more
- The `5` length parameter passed to `broadcast_runtime_snapshot` maps to `"usage"` (first 5 chars of `"usageruntime-state-updated"`) — switch-case at length==5 checks `!(*(_DWORD *)v26 ^ 0x67617375 | *((unsigned __int8 *)v26 + 4) ^ 0x65)` = `"usager"` but actually it checks first 4+1 bytes = `u`+`s`+`a`+`g`+`e` which is `0x65676173_75` → the usage refresh activity notification path is triggered when the routing label starts with "usage"
- The resolve_cached_auto_switch_service_state return value: bool (LOBYTE(v2)) used to determine auto-switch routing — same contract as 1.0.9
- DISPLAY_SNAPSHOT_CACHE mutex (0x101442B00) updated in broadcast_runtime_snapshot — cache written to global static
- The 1.1.1 `broadcast_runtime_snapshot` has a new time-based path: calls `SystemTime::now` + `duration_since` to compute elapsed time since last refresh, then passes to `note_usage_refresh_activity`
- `http_client::hed025cf597a5229e` (0x1006e3670) — internal HTTP client abstraction used first; falls through to `reqwest::blocking::client::Client::request` on non-10 result
- HTTP headers set: Authorization, ChatGPT-Account-Id, Accept, User-Agent (`AiMaMi/1.1.1`)
- `is_connect` + `is_timeout` checks in enrich_active_account_usage_via_api — these set error category for frontend display

## Confirmed (full-gold-leaf additions — session wf-aimami111-delta-20260618-mac100)

- call-trees/refresh_usage_snapshot.jsonl: 31 edges, edge-per-line format, max_depth=5, call_tree_complete=true
- `note_usage_refresh_activity` (0x10061c240) decompiled: acquires usage_refresh_watcher_state::STATE Mutex (0x101442AC0/AD8/AE0), writes a1 (elapsed_seconds as u64) to `qword_101442AD8`, calls `Condvar::notify_all` (0x100f34bd0) on `unk_101442AE0` — wakes background watcher thread
- `refresh_tray_menu_with_snapshot` (0x10062bc40) decompiled: calls `create_tray_menu_from_snapshot` (0x10062a470) then `TrayManager::tray_by_id("main", 4)` (0x100480050), on Some result calls `TrayIcon::set_menu` (0x1004781e0); on None/tag=3 silently skips — no panic
- `http_client` (0x1006e3670) decompiled: caches `reqwest::blocking::Client` Arc under Mutex (0x101442DC0); proxy config keyed on sanitize_proxy_config output; cache miss triggers `ClientBuilder::default` + optional `ClientBuilder::proxy` + `ClientBuilder::build`; returns tag=10 (Ok) on cache hit with incremented Arc refcount; error path returns tag=9 with "failed to lock API client cache" string
- `test_api_connectivity` (0x1006e5290) confirmed: calls same `http_client` factory then `reqwest::blocking::request::RequestBuilder::send` — is a real HTTP probe, not a flag-only check; non-blocking from caller's perspective (error sets CoreError category for display)
- `make_api_request_context` (0x10053e690) callee chain: calls `decode_jwt_claims` (0x10053aef0) → `nested_dict` (0x10053a9b0) → `string_val` (0x10053a7f0) — extracts auth fields from JWT token
- `broadcast_runtime_snapshot` (0x100620750) callee chain confirmed live: calls `SystemTime::now` (0x100f34cf0) + `duration_since` (0x100f34cb0) to compute elapsed since last refresh BEFORE calling `note_usage_refresh_activity` — elapsed value passed as a1
- pseudocode files: 4 total (0001 owner + 0002 note_usage + 0003 tray_menu + 0004 http_client)

## Unknown

- Exact URL format for fetch_usage_snapshot endpoint — format string at `unk_1010B8E15` not resolved; inferred `https://api.openai.com/v1/usage` or similar based on 1.0.9 behavior and ChatGPT-Account-Id header
- Exact fields written by `apply_usage_result` (0x1004d2be0) — not decompiled; same contract as 1.0.9 inferred (updates in-memory Repository AccountSummary usage fields)
- `create_tray_menu_from_snapshot` (0x10062a470) internal menu item structure — not decompiled; termination confirmed at `TrayIcon::set_menu` leaf
- Whether `test_api_connectivity` failure causes early return in `enrich_active_account_usage_via_api` or only sets error category — callees confirmed but branch logic not fully decompiled; inferred non-blocking from callees pattern (no early return visible in enrich callees list)
- Windows platform equivalent behavior — Windows binary separate; not covered by this macOS evidence
- dim6 (test/acceptance mapping) — C5 implementation side work; not assessed here

---

## Delta Summary: 1.0.9 → 1.1.1

| Aspect | 1.0.9 | 1.1.1 | Type |
|---|---|---|---|
| Owner VA | 0x1001e7eec | 0x1006266d0 | relocation/recompile |
| Owner symbol hash | hac9abab03237b906 | haad2b996156be92a | hash change |
| argKeys | upstream: bool | upstream: bool | unchanged |
| Response type | CoreEnvelope<CoreSnapshotPayload> 0x2A8 | CoreEnvelope<CoreSnapshotPayload> 0x2A8 | unchanged |
| Tauri event emitted | "load_snapshot" | "runtime-state-updated" | **DELTA** |
| broadcast routing arg | "load_snapshot" (0xB=11 len) | "usageruntime-state-updated" (5 route prefix) | **DELTA** |
| User-Agent | AiMaMi/1.0.9 | AiMaMi/1.1.1 | **DELTA** |
| note_usage_refresh_activity | absent | present (new) | **DELTA** |
| refresh_tray_menu_with_snapshot | absent | present (new) | **DELTA** |
| fetch_usage_snapshot VA | 0x1005441b0 | 0x1006e40d0 | relocation |
| PROGRESSIVE_STATE_SAVE_FAILED warning | unknown | confirmed | clarification |
| Module | accounts | accounts | unchanged |
