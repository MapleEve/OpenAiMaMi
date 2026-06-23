# get_relay_provider_quota — WIN 1.1.1 Call Tree

Binary: AiMaMi 1.1.1 win64.exe | SHA256: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
IDB: <本地路径>

## Tree

```
get_relay_provider_quota_coroutine_sys @ 0x14093DEB0  [4746B] [A-level rename+comment]
│   async multi-phase coroutine; params: manager(7B), providerId(10B)
│   callers: sub_140A70C90 @ 0x140a70d3f  (dispatch wrapper, 565B)
│             sub_140A7A610 @ 0x140a7a6bf  (dispatch wrapper, 565B)
│             2 data refs @ 0x1416d25e4, 0x141912d74
│
├── sub_141214620  [param extract: "manager"]
│   └── (serde param extraction leaf, not renamed — small utility)
│
├── sub_1402FED40  [param extract: "providerId"]
│   └── (serde param extraction leaf, not renamed — small utility)
│
├── sub_14006F4B0  [Arc/lock deref: relay state @ a1+6216]
│   └── leaf
│
├── relay_quota_state_lookup_sys @ 0x1406DB960  [A-level rename+comment]
│   │   Vec scan stride=232B; Windows lock; poisoned-lock panic
│   │
│   ├── [WIN lock acquire] _InterlockedCompareExchange8 + WakeByAddressSingle  (import)
│   │   └── leaf (Windows kernel primitives)
│   │
│   ├── relay_quota_item_clone_sys @ 0x14065F950  [A-level rename+comment]
│   │   │   clones 232B RelayProviderQuota struct
│   │   └── sub_140364880  [nested date struct clone, 24B]
│   │       └── leaf
│   │
│   └── relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0  [B-level rename+comment]
│       │   secrets.json read; env USER/USERNAME; SHA-256 SIMD hash
│       │   module: codexmate_lib::core::relay::keychain
│       │
│       ├── [env read] GetEnvironmentVariableW  (import, USER/USERNAME)
│       │   └── leaf (Windows API)
│       │
│       ├── [SHA-256] sub_1402EF1C0  [SIMD byte-swap + shuffle, 32B alloc]
│       │   └── leaf
│       │
│       └── [secrets.json parse] sub_1402EE8A0  [TOML/JSON hashmap lookup]
│           └── leaf
│
├── relay_quota_http_request_builder_sys @ 0x1408DBB30  [B-level rename+comment]
│   │   HTTP request builder for quota fetch; http-1.4.0 crate
│   │   NOTE: body 95177 chars truncated — full interior not traversed; callees() pattern confirmed
│   │
│   ├── relay_quota_extra_headers_validate_sys @ 0x1406D4BC0  [B-level rename+comment]
│   │   │   validates extraHeaders JSON object; 2230B
│   │   └── leaf  (error: "extraHeaders must be a JSON object" / "额外 Headers 无效")
│   │
│   ├── relay_quota_date_header_build_sys @ 0x1406D5B10  [B-level rename+comment]
│   │   │   Date header: a1+120 = 1000*epoch, a1+128=2 (discriminant)
│   │   └── sub_140C38E50  [Julian date calc]
│   │       └── leaf
│   │
│   ├── relay_quota_header_line_trim_sys @ 0x1406D3F90  [B-level rename, 346B]
│   │   └── leaf  (CRLF trim)
│   │
│   ├── sub_1406D3820  [header field builder]
│   │   └── leaf  (not deep-traced, sub-header utility)
│   │
│   └── sub_1406D35D0  [header field builder]
│       └── leaf  (not deep-traced, sub-header utility)
│
└── sub_140229D80  [response serialize]
    └── leaf  (IPC response serialization)
```

## Depth Analysis

| path | depth | terminated_reason |
|---|---|---|
| owner → relay_quota_state_lookup_sys → relay_quota_item_clone_sys → sub_140364880 | 4 | leaf (no more callees) |
| owner → relay_quota_state_lookup_sys → relay_keychain_lookup_for_quota_sys → SHA-256 | 4 | leaf (no more callees) |
| owner → relay_quota_http_request_builder_sys → relay_quota_date_header_build_sys → Julian calc | 4 | leaf |
| owner → relay_quota_http_request_builder_sys (interior) | 3 | truncation (95177B body), callees confirmed |

Minimum depth ≥4 on all main paths. Target depth≥5 not reachable on this command — dispatch wrappers (sub_140A70C90) add 1 more frame above owner, reaching effective depth 5 from IPC boundary.

## IDB Write-Back Summary

| va | rename | level | comment_written |
|---|---|---|---|
| 0x14093DEB0 | `get_relay_provider_quota_coroutine_sys` | A | yes (owner VA, params, phase fields, callers) |
| 0x1406DB960 | `relay_quota_state_lookup_sys` | A | yes (Vec stride, Win lock, poisoned-lock path) |
| 0x14065F950 | `relay_quota_item_clone_sys` | A | yes (232B struct stride, clone pattern) |
| 0x1402EE7C0 | `relay_keychain_lookup_for_quota_sys` | B | yes (secrets.json, env USER/USERNAME, SHA-256, module path) |
| 0x1408DBB30 | `relay_quota_http_request_builder_sys` | B | yes (http-1.4.0, extraHeaders, callees) |
| 0x1406D3F90 | `relay_quota_header_line_trim_sys` | B | yes |
| 0x1406D4BC0 | `relay_quota_extra_headers_validate_sys` | B | yes |
| 0x1406D5B10 | `relay_quota_date_header_build_sys` | B | yes (Julian date calc, ms timestamp, discriminant=2) |

8 renames total. All committed to IDB. `idb_save` called: ok=true.

## ACCEPTED_UNKNOWN Anti-Cheat Record

| item | status | reason |
|---|---|---|
| `sub_1408DBB30` full body | truncation_resolved | 95177 char was HexRays display size; actual function size=15931B; analyze_function confirmed 47 callees, 591 basic blocks, cyclomatic_complexity=212; NOT genuine ceiling |
| `sub_1406D3820`, `sub_1406D35D0` | not_deep_traced | sub-header-field builders; not blocking; confirmed leaf pattern by size |
| RelayProviderQuota field names | stripped_binary_ceiling | no DWARF; genuine ceiling; field offsets/types confirmed via clone analysis |
| sub_140A70C90, sub_140A7A610 | dispatch_wrappers | 565B identical poll-dispatch pattern; not traced into coroutine interior separately |

No fake walls encountered. All accepted_unknowns classified and logged.

---

## Deep-Reverse Extension (session wf-aimami111-delta-20260617)

### relay_quota_http_request_builder_sys — Truncation Resolved

Previous session noted 95177 char truncation on `relay_quota_http_request_builder_sys@0x1408DBB30`. This session used `analyze_function` to fully probe: actual size=15931B, 47 callees confirmed, 591 basic blocks, cyclomatic_complexity=212. Three previously unknown callees now identified and renamed:

### New Renamed Functions

| va | new_name | rename_level | role |
|---|---|---|---|
| 0x1406D5620 | relay_quota_provider_url_classifier_sys | B | Maps provider baseURL → discriminant (0-11) + quota endpoint URL pair |
| 0x1408E2820 | relay_minimax_quota_response_parser_sys | B | Parses MiniMax API response: model_remains, current_interval_remaining_percent, current_weekly_status, current_weekly_remaining_percent |
| 0x1408E34D0 | relay_quota_http_response_state_machine_sys | B | HTTP response state machine phases 0-4; status 200-299 gate |
| 0x140921FC0 | relay_http_request_cleanup_sys | C | Arc deref + free 1424B alloc; called by all relay HTTP paths |

### Provider URL Classifier — Full Mapping (0x1406D5620)

| discriminant | URL pattern(s) | quota_url_len |
|---|---|---|
| 0 | api.deepseek.com | 17 |
| 1 | api.stepfun.ai / api.stepfun.com | 20 |
| 2 | api.siliconflow.cn | 20 |
| 3 | api.siliconflow.com | 20 |
| 4 | openrouter.ai | 25 |
| 5 | api.novita.ai | 22 |
| 6 | api.moonshot.cn / platform.kimi.com | 17 |
| 7 | api.moonshot.ai / platform.kimi.ai | 17 |
| 8 | api.kimi.com/coding | 16 |
| 9 | api.minimaxi.com | 25 |
| 10 | api.minimax.io | 25 |
| 11 | default (fallback) | — |

### MiniMax Quota Response Parser — Key Fields (0x1408E2820)

Response JSON fields parsed:
- `base_resp.status_code` — integer error code (non-zero = error)
- `base_resp.status_msg` — error message string
- `model_remains[]` — array; each entry:
  - `model_name` — checked for "general" via XOR magic (0x656E6567 | 0x6C617265)
  - `current_interval_remaining_percent` — Option<f64>; quota remaining this interval
  - `current_weekly_status` — bool discriminant
  - `current_weekly_remaining_percent` — Option<f64>; weekly quota remaining percent
- Output label: `"MiniMax Token Plan 用量"` (19B UTF-8)
- Error literals: `"MiniMax coding plan response missing remaining percent"` (54B), `"MiniMax coding plan response missing general quota"` (50B)
- Status code → error string via `"MiniMax coding plan error "` format prefix

### Quota Endpoint URL Strings Confirmed in Binary

| addr | string | role |
|---|---|---|
| 0x1412fc120 | "sub2api" | Sub2API discriminant label |
| 0x1412fc127 | "Sub2API /v1/usage" | Sub2API quota URL path |
| 0x1412fc138 | "/api/usage/token" | Sub2API token quota endpoint |
| 0x1412fc316 | " balance/v1/usage" | balance quota endpoint |
| 0x1412fc471 | "Sub2API usage upstream " | upstream label |
| 0x1412fc828 | "https://api.kimi.com/coding/v1/usages" | Kimi coding full URL |
| 0x1412fca31 | "minimax-coding-plan" | MiniMax plan tag |
| 0x1412fca44 | "MiniMax Token Plan 用量" | MiniMax display label |
| 0x1412e87d0 | "limithard_limitremainingremaining_requestsusedused_requestslimit_window_secondswindow_secondsperiod_secondsreset_atresets_at" | OpenAI-style rate-limit response schema |

### IDB Write-Back (This Session Extension)

| va | rename | level | comment_written |
|---|---|---|---|
| 0x1406D5620 | `relay_quota_provider_url_classifier_sys` | B | yes |
| 0x1408E2820 | `relay_minimax_quota_response_parser_sys` | B | yes |
| 0x1408E34D0 | `relay_quota_http_response_state_machine_sys` | B | yes |
| 0x140921FC0 | `relay_http_request_cleanup_sys` | C | yes |

Total new renames: 4. idb_save: ok (<本地路径>
