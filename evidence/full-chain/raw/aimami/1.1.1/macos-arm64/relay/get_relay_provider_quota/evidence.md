# get_relay_provider_quota — macOS ARM64 Evidence
version=1.1.1 platform=macos-arm64 session=<审计会话>
binary_sha256=f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
produced_by=<本地机器> produced_at=2026-06-17

## Confirmed

- **owner VA**: `0x100145890` — `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::hb2a9e236313f08a5` (async poll state machine, size≈0x287)
- **command string VA**: `0x1010e7311` blob offset: "get_relay_provider_quota" string confirmed; offset+24 into packed blob containing all IPC command names including "providerId" (10B argKey)
- **drop shim VA**: `0x1000ba6e0` — `core::ptr::drop_in_place<codexmate_lib::commands::relay::get_relay_provider_quota::{{closure}}>::h10ea976ce5c4915b`
- **run closure VA**: `0x1000c08c0` — `core::ptr::drop_in_place<codexmate_lib::run::{{closure}}::{{closure}}::{{closure}}>::h7c9e5a6bc75b35b4` (registration layer destructor xref to owner)
- **argKeys confirmed**: `manager` (7B, offset in IPC blob), `providerId` (10B, offset in IPC blob); both extracted via `CommandArg::from_command` in poll body
- **core VA**: `0x1005d65c0` — `codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::he6df39bd23eaabd6` (decompile clean)
- **quota fetch VA**: `0x1000af3c0` — `codexmate_lib::core::relay::quota::fetch_async::{{closure}}::h3adb3db2e9d8b160` (async closure, callees confirmed)
- **build_root_url VA**: `0x100784fe0` — trims trailing slash, strips `/v1` suffix, constructs `{base}` root URL string
- **build_v1_url VA**: `0x100784dc0` — trims trailing slash, strips `/v1` suffix from baseUrl and pathSuffix, produces `{base}/v1/{path}` format
- **HTTP endpoint**: `/v1/usage` — string confirmed at `0x1010e7fb6` ("remaining", "quota", "usage" fields); GET request via reqwest bearer_auth
- **get_json VA**: `0x1000b5310` — reqwest::Client::request + RequestBuilder::bearer_auth + headers + send + Pending::poll + Response::json; HTTP terminal confirmed
- **ASYNC_CLIENT static**: `0x101442e80` — `codexmate_lib::core::relay::quota::ASYNC_CLIENT` (OnceLock singleton)
- **sanitize_api_key VA**: `0x100762ef0` — trims whitespace from API key string
- **parse_extra_headers VA**: `0x100763130` — parses JSON object into HeaderMap (serde_json + HeaderName/HeaderValue validation)
- **failed VA**: `0x100786570` — constructs QuotaFailedEntry with provider_id, error_message, path_parts, chrono::Utc::now() timestamp (chrono @0x100954200)
- **lazy_load_api_key VA**: `0x1005e1c90` — checks provider[11] field; calls keychain::get_api_key fallback; writes back to provider[9/10/11]
- **keychain VA**: `0x1006c86a0` — `codexmate_lib::core::relay::keychain::get_api_key::h06ffa0ee9def7259` — reads secrets.json (serde_json parse + HMAC-SHA256 key derivation: hostname + env USER fallback "claude" + env USERNAME fallback + SHA-256 compress256 + base64 decode); macOS keychain fallback via `mac_keychain::get` (service=16B constant)
- **response VA**: `0x100554f40` — `CoreEnvelope::ok` wrapping quota result JSON
- **error sentinel**: `0x8000000000000000LL` — discriminant for Err variant in all Result returns
- **CoreError display VA**: `0x10058fda0` — `<CoreError as Display>::fmt`
- **error string "relay provider not found"**: `0x1010b0a1d` — formatted string "\x0Frelay provider {providerId} not found" (with Display fmt)
- **error string "no relay provider configured for"**: `0x1010bb2ae` — length-prefixed string
- **error string "relay provider not found; Codex catalog may be stale\r"**: `0x1010e7b28`
- **error string "failed to build async relay quota client"**: `0x1010e9c0f`
- **error strings "invalid extraHeaders JSON"**: `0x1010bb103` (length-prefixed), "invalid header name \`"**: `0x1010bb0e7`, "invalid header value for \`"**: `0x1010bb0c5`, "extraHeaders value of \`"**: `0x1010bb122`
- **call-tree depth**: ≥5 (poll_body → ensure_provider_loaded → lazy_load_api_key → keychain → secrets.json fs_leaf / mac_keychain_leaf)
- **async pattern**: poll state machine with switch(case 0/3), inner switch(case 0/3), `JUMPOUT` to Pending states; standard Tauri async command pattern
- **IPC registration**: xref from `0x100123593` inside owner to `0x1010e7311` blob (same blob as fetch_relay_models_draft, confirmed single-xref for command name)
- **RelayProvider struct stride**: 232B (confirmed via `memcpy __dst 232` in ensure_provider_loaded + Win evidence stride=232B consistent)
- **apiKey field offset within RelayProvider**: offset +72 (clone path: `__src[72]` = apiKey string ptr in ensure_provider_loaded update path)
- **provider[11] flag**: `a2[11]` checked in lazy_load_api_key to short-circuit keychain lookup if apiKey already loaded
- **quota URL path**: GET `{baseUrl trimmed}/v1/usage` — remaining/quota/usage response fields confirmed at `0x1010e7fb6`

## Inferred

- **Response DTO shape**: JSON object with fields: `remaining`, `quota`, `usage` (string names at `0x1010e7fb6`) — exact types inferred as numeric (quota usage values); CoreEnvelope<T> wrapper: `{ok: true, data: <quota_object>}` on success, `{ok: false, ...error}` on Err
- **bearer_auth**: API key passed as Authorization: Bearer header via `RequestBuilder::bearer_auth` before `parse_extra_headers` applies additional headers
- **extraHeaders**: optional JSON object (string → string map), applied to reqwest HeaderMap after bearer_auth; validation: JSON must be object, each key/value validated as HTTP header name/value
- **provider not found path**: if `ensure_provider_loaded` returns `0x8000000000000000` discriminant (not found in relay state Vec), owner formats error "relay provider {providerId} not found" via Display fmt and returns Err(CoreError)
- **relay state lock**: macOS uses `std::sys::pal::unix::sync::mutex::Mutex::lock/unlock` (parking_lot or std Mutex wrapper); distinct from Win `_InterlockedCompareExchange8 + WakeByAddressSingle`
- **quota failure recording**: `failed` function records timestamp (chrono::Utc::now), provider_id clone, error message, path parts — stored in QuotaStoreItem shape (confirmed by struct field layout in `failed` decompile: offset 0/8/16=provider_id, 24/32/40=error_msg, 48/56/64=path, 72=discriminant, 96/104/112=response_body, 120=timestamp_ms, 128=type_byte=2)
- **quota history persistence**: `0x1010b483e` "Failed to persist quota history for" — quota results written to disk (quota store file path inferred from QuotaStoreFile struct in string at `0x101148783`)
- **legacy migration error**: `0x1010b47e9` "Failed to migrate legacy account quota cache:" — migration path exists for old quota cache format
- **SHA-256 key derivation**: keychain uses `sha2::sha256::compress256` with hostname+USER/USERNAME as key material, base64 decodes stored value, derives actual API key — secrets.json format: JSON map from encoded-key → base64-encoded-value

## Unknown

- **exact response DTO field types**: remaining/quota/usage exact Rust types not decompiled (inferred numeric from field names)
- **quota object nested structure**: whether response is flat {remaining, quota, usage} or nested object
- **dim1 frontend CCF**: frontend invoke wrapper, UI trigger, state/store mutation on return not verified this session; 1.0.9 baseline dim1 should be identical (provider quota card UI pattern)
- **apiKey resolution priority order full chain**: inline apiKey → lazy_load_api_key (secrets.json HMAC) → mac_keychain — confirmed from lazy_load_api_key; whether provider state includes a separate "stored" apiKey field unclear
- **exact secrets.json structure**: JSON map of encoded-key→base64-value; HMAC derivation: SHA-256(hostname + ":" + USER_OR_USERNAME); exact encoding of lookup key not fully decoded
- **extraHeaders null/missing behavior**: whether nil/empty extraHeaders is handled before parse_extra_headers or inside (assumed: empty/nil → no additional headers, no error)
- **retry logic**: whether quota fetch retries on transient errors (is_transient_error function not found in fetch_async callees — may not retry for quota, only for fetch_models)
- **dim5 Windows**: Windows platform behavior confirmed via win 逆向分析 session (separate Windows evidence); stride=232B matches mac; Windows lock pattern differs (ICEX8 vs parking_lot mutex)
- **dim6 test/acceptance**: 内部构建 implementation side
- **quota response error codes**: specific error discriminant values for rate_limit/quota_exceeded/auth_failure not decoded from HTTP response path
- **ASYNC_CLIENT build params**: reqwest client build configuration (timeout, TLS settings) in OnceLock initializer not decompiled
- **mac_keychain service name**: 16B constant at `0x101156d21` (anon.cb488c0530badd667ddecb834e53ca81.780) — not decoded; service = AiMaMi keychain service identifier
