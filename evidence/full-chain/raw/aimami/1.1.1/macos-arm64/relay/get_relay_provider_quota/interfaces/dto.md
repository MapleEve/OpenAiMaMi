# get_relay_provider_quota — Interface & DTO Spec
platform=macos-arm64 version=1.1.1 session=wf-aimami111-delta-20260616

## IPC Command

```
command: "get_relay_provider_quota"
```

## Input Args

| Key | Type | ByteLen | Source |
|-----|------|---------|--------|
| manager | StateManager (Tauri managed state) | 7 | IPC blob 0x1010e7311 |
| providerId | String | 10 (key len) | IPC blob 0x1010e7311 |

- Both extracted via `CommandArg::from_command` in poll body
- `manager` is Tauri managed state handle, not user-supplied string
- `providerId` is user-supplied string matching a configured relay provider ID

## HTTP Request

```
GET {baseUrl}/v1/usage
Authorization: Bearer {apiKey}
[optional extra headers from RelayProvider.extraHeaders]
```

- `baseUrl`: from RelayProvider config, trailing slash stripped, trailing `/v1` stripped before build_root_url/build_v1_url append `/v1/usage`
- `apiKey`: resolved via lazy_load_api_key chain:
  1. Already loaded check (provider[11] flag)
  2. `{codex_home}/keys/{providerId}` file → trim whitespace
  3. `{codex_home}/secrets.json` → JSON map lookup → HMAC-SHA256(hostname+USER/USERNAME) → base64 decode
  4. macOS Security framework keychain (service=16B constant)
- `extraHeaders`: optional JSON object → HeaderMap (key/value each validated as HTTP header name/value)

## Response (Success)

```
CoreEnvelope<QuotaResponse> = {
  ok: true,
  data: {
    remaining: <numeric>,
    quota: <numeric>,
    usage: <numeric>
  }
}
```

- Field names confirmed at string VA `0x1010e7fb6`: "remaining", "quota", "usage"
- Exact Rust types (u64/f64/String) not decompiled from Response::json path (marked Unknown)
- Wrapped in `CoreEnvelope::ok @ 0x100554f40`

## Response (Error Paths)

| Scenario | Error String | Notes |
|----------|-------------|-------|
| provider not found in relay state Vec | "relay provider {providerId} not found" (0x1010b0a1d) | ensure_provider_loaded returns sentinel |
| no provider configured | "no relay provider configured for" (0x1010bb2ae) | alternate not-found variant |
| stale Codex catalog | "relay provider not found; Codex catalog may be stale" (0x1010e7b28) | with trailing \r |
| HTTP client build fail | "failed to build async relay quota client" (0x1010e9c0f) | ASYNC_CLIENT OnceLock init fail |
| invalid extraHeaders JSON | "invalid extraHeaders JSON" (0x1010bb103) | serde_json parse fail |
| invalid header name | "invalid header name `{name}`" (0x1010bb0e7) | HeaderName parse fail |
| invalid header value | "invalid header value for `{name}`" (0x1010bb0c5) | HeaderValue parse fail |
| extraHeaders value type | "extraHeaders value of `{key}`" (0x1010bb122) | non-string value in extraHeaders JSON |

All errors wrapped via `CoreEnvelope::err` (or equivalent IPC error response path).

## Side Effects

- Quota failure recorded via `failed @ 0x100786570` on HTTP error:
  - chrono::Utc::now() → unix ms timestamp
  - QuotaFailedEntry struct written (type_byte=2)
  - Persisted to quota store file (logged: "Failed to persist quota history for" @ 0x1010b483e)
- API key written to `{codex_home}/keys/{providerId}` file on first secrets.json resolution
  - Log: `"codexmate_lib::core::relay::keychain"` @ `0x101156cab`
- `provider[11]` flag set after first successful api_key load (prevents repeat keychain calls)

## RelayProvider Struct (macOS ARM64)

```
stride: 232 bytes
offset +0:  provider_id ptr (String ptr)
offset +8:  provider_id ptr inner (str ptr)
offset +16: provider_id len
offset +72: apiKey field (String, lazy-loaded)
offset +228: loaded_byte (u8, = 1 when apiKey loaded)
offset +11 (word index): loaded_flag checked by lazy_load_api_key
```

Vec scan in `ensure_provider_loaded`:
1. Lock parking_lot Mutex
2. Read count = `v12 = *[v11+48]`; ptr = `v13 = *[v32+40]`
3. For each provider at stride 232: check `*[v13+16] == id_len && !memcmp(*[v13+8], id_ptr, id_len)`
4. If found: `RelayProvider::clone` (232B memcpy), then `lazy_load_api_key`
5. If not found: write `0x8000000000000000` to caller's out ptr

## Platform Notes

- macOS: parking_lot Mutex (unix SysMutex)
- Windows (separate session): InterlockedCompareExchange8 + WakeByAddressSingle
- Both platforms: RelayProvider stride = 232B confirmed
