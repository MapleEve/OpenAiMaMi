# Evidence: detect_api_proxy_config (1.1.1 macOS ARM64)

**session**: <审计会话> | **machine**: <本地机器> | **date**: 2026-06-16
**binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## ## Confirmed

### 1. Owner VA and module placement

The command is owned by `codexmate_lib::commands::system` (confirmed from drop shim demangled symbol):
`__ZN4core3ptr106drop_in_place$LT$codexmate_lib..commands..system..detect_api_proxy_config..$u7b$$u7b$closure$u7d$$u7d$$GT$17h05e85677ecfaf92aE` at `0x1000ba800`.

Execution body: `BlockingTask<codexmate_lib::commands::system::detect_api_proxy_config::{{closure}}>::poll` at `0x1005977a0` (size=0x25f).

### 2. Core implementation VA

`codexmate_lib::core::api_client::detect_api_proxy_config::h1779b2ca0670c598` at `0x1006e5a60` (size=0xdc2, has_type=true). Single xref from `BlockingTask::poll` at `0x1005978cd`. Full 逆向分析 decompile succeeded.

### 3. Platform implementation VA

`codexmate_lib::platform::proxy::detect_system_proxy_candidates::h84f6a094d0fff9f9` at `0x100786860` (size=0x1dda, has_type=true). Single xref from core impl at `0x1006e5be7`. Full 逆向分析 decompile succeeded.

### 4. Return type confirmed from drop shim

Drop shim symbol at `0x1000d4480`:
`drop_in_place<tauri::ipc::command::private::ResultFutureTag::future<codexmate_lib::core::models::CoreEnvelope<codexmate_lib::core::models::ApiProxyDetectPayload>, alloc::string::String, codexmate_lib::commands::system::detect_api_proxy_config::{{closure}}>::{{closure}}>`

Return type: `CoreEnvelope<ApiProxyDetectPayload>` — confirmed.

### 5. IPC registration confirmed

String `detect_api_proxy_config` found at `0x1010e7311` within IPC command name blob. Referenced by `tauri::ipc::InvokeResolver::respond_async_serialized_inner::{{closure}}` at `0x1001234d0`.

### 6. Frontend argKeys=[] confirmed

`ipc-contracts.jsonl` (1.1.1 macos-arm64): `argKeys=[]`, `callee="ne"`, `params="()"`, `command="detect_api_proxy_config"`, line 86 col 25489 of `assets/index-DdcCOEJG.js`.

### 7. Env-var priority order confirmed

Static Vec initialized with 6 entries in decompile order:
`https_proxy` (11B) → `HTTPS_PROXY` (11B) → `http_proxy` (10B) → `HTTP_PROXY` (10B) → `all_proxy` (9B) → `ALL_PROXY` (9B)

### 8. TCP 200ms pre-probe for local addresses

`try_connect_local_proxy` at `0x1006e6a10`: `TcpStream::connect_timeout(addr, 200_000_000 ns = 200ms)`. Host check: literal byte comparison `0x2E302E302E373231` = "127.0.0.1" and byteswap check for "localhost". Skips HTTP probe if TCP connect fails.

### 9. Connectivity test target URL

`https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27` — confirmed from sanitize_proxy_config switch table string at `0x10115799c`. Reqwest sends request through candidate proxy to this URL.

### 10. reqwest client caching

`http_client` at `0x1006e3670` maintains a static `OnceLock<Arc<reqwest::blocking::Client>>` at `0x101442DB8`. Cache invalidated when proxy config changes (compared by proxy string equality under `CLIENT` mutex at `0x101442DC0`).

### 11. Not-found error message (118B confirmed)

Alloc of 0x76 (118) bytes containing: `"No reachable proxy configuration was detected from environment variables, system proxy, PAC, or common local addresses"`. At `0x1011579f1`.

### 12. 20 common local addresses in data blob

Immediately following not-found message in data: 20 URL strings (10 pairs of 127.0.0.1/localhost) across ports 7890, 7891, 7892, 10808, 10809, 8080, 1080, 7893, 20171, 9090. These are the static fallback candidates tested when no env/system proxy is found.

### 13. Error code strings (all confirmed from decompile)

- `"not_found"` (9B) — not-found payload
- `"network_error"` (13B) — reqwest send failure
- `"client_build_failed"` (19B) — reqwest build failure
- `"invalid_config"` (14B) — scheme validation failure
- `"failed to lock API client cache"` (31B) — mutex poisoned
- `"Manual proxy mode requires a proxy URL"` (38B) — empty proxy

### 14. Validated schemes from sanitize_proxy_config

Switch on URL scheme byte-length (4/5/6/7):
- `http`, `https`, `socks5`, `socks5h`

Other schemes rejected as `invalid_config`.

### 15. networksetup CLI invocation in platform impl

`std::process::Command::new` + `Command::arg` + `Command::output` confirmed in `detect_system_proxy_candidates` callees. `String::from_utf8_lossy` + `trim_matches` applied to stdout. Additional reqwest HTTP probe for PAC/system proxy also confirmed.

### 16. Deduplication mechanism

Two dedup passes:
1. Platform-level (in `detect_system_proxy_candidates`): `hashbrown::HashMap::insert` at `0x10066a030`
2. Global-level (in core impl): `hashbrown::HashMap::insert` at `0x10066a5e0`

Both use `String::clone` of URL as key.

---

## ## Inferred

### 1. ApiProxyDetectPayload struct layout (inferred from write pattern)

From `*((_WORD*)result + 44)` bit-packing in decompile:
- Byte at offset 88 (word position 44, low byte): `found: bool`
- Byte at offset 89 (word position 44, high byte): `is_local: bool`

Other fields:
- `[0..8]`: discriminant / code length (9 for "not_found")
- `[8..16]`: error_code ptr or url ptr
- `[16..24]`: error_code len or url len
- `[24..32]`: error_msg ptr or label ptr
- `[32..40]`: error_msg len or label len
- `[48..52]`: port (u16 at dword offset 12 = byte 48)
- `[56]`: success flag byte (LOBYTE(result[7]))

Exact serde field names not visible (derive macro).

### 2. Authentication header injection

If `load_api_request_context_from_repo` returns `Some(context)`, the Bearer token is injected via `RequestBuilder::header_sensitive("Authorization", "Bearer <token>")`. This enables the connectivity check to authenticate with the ChatGPT endpoint.

### 3. Response format for successful proxy

From `test_api_connectivity` success path:
- `proxy_type`: "direct connection" (17B) or proxy label string
- `port`: u16 from `Url::default_port()` or explicit port in URL
- Format string template at `0x1010B8ED5` (not extracted): likely `"<type>:<port>"`

### 4. PAC proxy handling via reqwest HTTP probe

`detect_system_proxy_candidates` makes a reqwest HTTP GET (blocking client). This appears to be a PAC script fetch + parse path, based on the `String::from_utf8_lossy` + split/trim pattern on the HTTP response.

### 5. Module ownership correction

The `owner-map-111.jsonl` lists `module=null` with `note=not_yet_queried`. Live 逆向分析 confirms: module is `codexmate_lib::commands::system` (not relay or api_client). Now corrected to `system`.

---

## ## Unknown

### 1. `detect_system_proxy_candidates` exact CLI argument strings

`unk_10115B64D` and `unk_10115B653` are data-region references in `Command::arg` calls — not extractable as readable strings from decompile without separate hex dump. CLI tool is `networksetup` but exact subcommand flags unknown.

### 2. `ApiProxyDetectPayload` serde JSON field names

Serde derive macros serialize field names as snake_case of Rust field names by default. Actual field names in JSON are not visible from the compiled binary (derive-generated code is optimized away).

### 3. `push_url` body (VA 0x100788b10)

Called 3+ times in `detect_system_proxy_candidates`. Role is clear (append a URL to Vec with label and is_local flag) but internal struct layout of the pushed tuple not decompiled.

### 4. `dedupe` body (VA 0x100788700)

Called in `detect_system_proxy_candidates` after platform detection. Dedup logic already confirmed at global level; platform-level dedupe body not separately decompiled.

### 5. `make_api_request_context` body (VA 0x10053e690)

Shared with other commands (same leaf_named_not_decompiled accepted_unknown as 1.0.9). Builds `ApiRequestContext` from auth file contents. Internal struct layout not decompiled.

### 6. HTTP probe PAC parsing detail

The reqwest HTTP call in `detect_system_proxy_candidates` reads response text and processes it. Whether this implements full PAC script parsing, simple HTTP proxy detection, or just a reachability check is not fully determinable from the decompile.

### 7. Windows platform behavior

Windows artifact required. macOS arm64 evidence not extrapolatable to Windows x64. `detect_system_proxy_candidates` uses macOS-specific `networksetup` CLI — Windows equivalent (WinINet/registry) would be different.

### 8. dim6 test/acceptance mapping

C5 implementation side verification — not a reverse producer deliverable.

### 9. Exact `CoreEnvelope<ApiProxyDetectPayload>` JSON wire format

`CoreEnvelope<T>` wraps in `{ "data": T }` or `{ "error": ... }` (consistent with prior command analysis). Exact envelope field names depend on CoreEnvelope serde impl — same pattern confirmed across other commands in this session.
