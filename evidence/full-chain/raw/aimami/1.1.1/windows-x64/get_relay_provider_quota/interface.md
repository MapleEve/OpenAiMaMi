# get_relay_provider_quota — WIN 1.1.1 Interface / DTO / Error Envelope

## IPC Command Name

`get_relay_provider_quota`

## Parameters (IPC input)

| param | type | len hint | source | notes |
|---|---|---|---|---|
| `manager` | String | 7B literal in binary | serde_extract @ sub_141214620 | extracted from IPC args at coroutine phase 0 |
| `providerId` | String | 10B literal in binary | serde_extract @ sub_1402FED40 | extracted from IPC args at coroutine phase 0 |

String literal lengths are from serde parser constants; actual values are runtime.

## Response (IPC output)

On success: serialized `RelayProviderQuota` struct. Serialized via `sub_140229D80`.

### RelayProviderQuota struct (WIN 1.1.1 — 232B stride in quota Vec)

| offset | size | rust type (inferred) | field semantic |
|---|---|---|---|
| +0 | 24 | String (ptr16 + len8) | string_0 (name?) |
| +24 | 24 | String | string_1 |
| +48 | 24 | String | string_2 |
| +72 | 24 | String | string_3 |
| +96 | 24 | String | string_4 (manager key?) |
| +120 | 24 | nested struct (sub_140364880) | date_or_range (Julian date, 24B) |
| +144 | 24 | String | string_5 (providerId key?) |
| +168 | 8 | Option<u64> | quota_count (sentinel=0x8000000000000000 → None) |
| +176 | 16 | u128 or i128 | quota_lo |
| +192 | 16 | u128 or i128 | quota_hi (or flags) |
| +208 | 16 | u128 or i128 | field_extra |
| +224 | 4 | i32 | status_or_type |
| +228 | 1 | bool | flag_a |
| +229 | 1 | bool | flag_b |
| +230 | 1 | bool | flag_c |
| +231 | 1 | padding | - |

Total stride: 232B. Confirmed by Vec loop `ptr + i * 232`.

Note: exact Rust field names not recoverable from stripped WIN PE (no DWARF). Semantics inferred from usage.

### Date nested struct (+120, 24B)

- `entry+120 = 1000 * unix_epoch_sec` (ms-resolution timestamp)
- `entry+128 = 2` (discriminant = Date type)
- built by `relay_quota_date_header_build_sys@0x1406D5B10`
- Julian date calc via `sub_140C38E50`

## Error Envelope

| code / sentinel | type | description | source path |
|---|---|---|---|
| `0x8000000000000000` | Option::None | quota not found in relay state Vec | relay_quota_state_lookup_sys LABEL_15 miss path |
| `0x8000000000000001` | CoreError | generic core error propagation | outer coroutine frame |
| `0x8000000000000007` | KeychainError | secrets.json / keychain lookup failure | relay_keychain_lookup_for_quota_sys |
| panic | string literal | `"relay state poisoned"` if lock poison bit set | v8+17 check after ICEX8 lock acquire |
| string | http build error | `"unsupported"` | relay_quota_http_request_builder_sys fallback |
| string | http build error | `"extraHeaders must be a JSON object"` | relay_quota_extra_headers_validate_sys |
| string | http build error (zh) | `"额外 Headers 无效"` | relay_quota_http_request_builder_sys (WIN-specific Chinese string) |

## Side Effects

- Reads relay state (in-memory, immutable from quota-fetch perspective): no write to state Vec
- Reads `secrets.json` from disk via `relay_keychain_lookup_for_quota_sys`
- Reads environment variables: `USER`, `USERNAME` (keychain fallback path)
- Computes SHA-256 of API key (SIMD byte-swap path, 32B alloc)
- Debug log gate: `*off_141899A88 > 2` → logging active (no external write observed)
- HTTP request builder: constructs outbound HTTP request (headers + body); no observed local write side effect beyond building the struct

## Platform-Specific (WIN vs MAC delta)

| aspect | win 1.1.1 | mac 1.1.1 (inferred from session) |
|---|---|---|
| lock primitive | `_InterlockedCompareExchange8` + `WakeByAddressSingle` | `parking_lot` |
| error string (zh) | `"额外 Headers 无效"` present | not observed on mac |
| quota Vec stride | 232B | needs mac-side verification |
| env var | `USERNAME` (Windows env) | `USER` only |
| secrets path | `secrets.json` via relay state field | same path expected |
| keychain module | `codexmate_lib::core::relay::keychain` | same |

---

## HTTP Quota Endpoints by Provider (Extended — session <审计会话>)

`relay_quota_provider_url_classifier_sys@0x1406D5620` routes quota fetch to per-provider endpoints.

| discriminant | provider URL pattern | quota endpoint (inferred from strings) |
|---|---|---|
| 0 | api.deepseek.com | standard /usage or /balance endpoint |
| 1 | api.stepfun.ai / api.stepfun.com | standard /usage endpoint |
| 2 | api.siliconflow.cn | standard /usage endpoint |
| 3 | api.siliconflow.com | standard /usage endpoint |
| 4 | openrouter.ai | Sub2API upstream or balance/v1/usage |
| 5 | api.novita.ai | Sub2API upstream or token endpoint |
| 6 | api.moonshot.cn / platform.kimi.com | standard usage |
| 7 | api.moonshot.ai / platform.kimi.ai | standard usage |
| 8 | api.kimi.com/coding | `https://api.kimi.com/coding/v1/usages` (confirmed) |
| 9 | api.minimaxi.com | minimax-coding-plan path |
| 10 | api.minimax.io | minimax-coding-plan path |
| 11 | default | fallback |

Known quota URL strings in binary:
- `"Sub2API /v1/usage"` @0x1412fc127
- `"/api/usage/token"` @0x1412fc138
- `" balance/v1/usage"` @0x1412fc316
- `"https://api.kimi.com/coding/v1/usages"` @0x1412fc828 (full URL, only confirmed explicit URL)
- `"minimax-coding-plan"` tag @0x1412fca31

## MiniMax Quota Response DTO Fields (Extended)

`relay_minimax_quota_response_parser_sys@0x1408E2820` parses:

```
// MiniMax API response shape (inferred from parser)
{
  "base_resp": {
    "status_code": i64,      // 0 = ok; non-zero = error
    "status_msg": String     // error description
  },
  "model_remains": [         // array, each entry 32B
    {
      "model_name": String,  // checked == "general" (XOR verify)
      "current_interval_remaining_percent": f64?,  // Option; percent remaining this interval
      "current_weekly_status": bool?,              // weekly active flag (discriminant check)
      "current_weekly_remaining_percent": f64?     // weekly quota remaining
    }
  ]
}
// Output: "MiniMax Token Plan 用量" label (19B UTF-8)
```

## OpenAI-Style Rate Limit Fields

`@0x1412e87d0` string blob: `"limithard_limitremainingremaining_requestsusedused_requestslimit_window_secondswindow_secondsperiod_secondsreset_atresets_at"` — concatenated field names for OpenAI-compatible rate-limit response parser (used by Sub2API and compatible providers).
