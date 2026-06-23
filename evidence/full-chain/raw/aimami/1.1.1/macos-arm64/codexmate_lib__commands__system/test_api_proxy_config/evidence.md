# Evidence: test_api_proxy_config — Full Gold Leaf
## AiMaMi 1.1.1 macOS arm64 | session wf-aimami111-delta-20260618-mac100

---

## ## Confirmed

- **IPC entry VA**: `0x100131f30` — `tauri::ipc::InvokeResolver::respond_async_serialized_inner` closure; confirmed by decompile showing "test_api_proxy_config" string literal in command dispatch table at `0x1010E7311`.
- **Blocking poll VA**: `0x100598740` — `BlockingTask<test_api_proxy_config_closure>::poll`; confirmed by Hex-Rays decompile showing call chain: `load_api_request_context_from_repo` → `test_api_connectivity` → `CoreEnvelope::ok`.
- **Module**: `codexmate_lib::commands::system` confirmed from mangled symbol name `__ZN13codexmate_lib8commands6system34load_api_request_context_from_repo17h66329f8386009926E`.
- **Token source change (1.1.1 vs 1.0.9)**: `load_api_request_context_from_repo` (0x10061d900) now calls `codexmate_lib::core::auth::load_auth_file` (0x10053ac80) and `codexmate_lib::core::auth::make_api_request_context` (0x10053e690). These symbols do not appear in 1.0.9 sweep data. The mutex-protected proxy_cfg bytes clone remains, but opt_token is now derived from filesystem auth file.
- **Auth file read**: `load_auth_file` calls `std::fs::read_to_string::inner` (0x100F25740) — filesystem I/O confirmed by decompile.
- **JSON parse**: `load_auth_file` calls `serde_json::de::from_trait` (0x1002E89B0) — JSON deserialization confirmed by decompile.
- **JWT decode path**: `make_api_request_context` (0x10053E690) calls `codexmate_lib::core::auth::decode_jwt_claims` (0x10053AEF0) twice (access_token + session_token), then `nested_dict` (0x10053A9B0) to look up `"chatgpt_account_id"` (key len=27 at 0x10114F979).
- **Success message format change**: `test_api_connectivity` (0x1006E5290) uses format template at `0x1010B8ED5`; raw bytes `0x18 0x52 0x65 0x61 0x63 0x68 0x65 0x64 0x20 0x63 0x68 0x61 0x74 0x67 0x70 0x74 0x2e 0x63 0x6f 0x6d 0x20 0x76 0x69 0x61 0x20` = length-prefixed "Reached chatgpt.com via ". Status code formatted as u16 via `core::fmt::num::Display<u16>::fmt` (0x100F674C0).
- **"direct connection" string**: at `0x1011579F1` vicinity; used when no proxy active (v32 == 0 branch in test_api_connectivity).
- **Proxy URL from unk_101157820**: used as proxy URL string in success message when proxy is active.
- **Accepted proxy schemes**: confirmed from sanitize_proxy_config (0x1006E4D80): `http` (4), `https` (5), `socks5` (6), `socks5h` (7) — lengths map to switch cases.
- **Target URL**: `https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27` — confirmed from string at `0x10115799C`.
- **HTTP client cache**: static `CLIENT` at `0x101442DB8`; mutex-guarded reqwest::blocking::Client; cache invalidated when proxy URL bytes change (memcmp of stored vs current proxy bytes).
- **CoreEnvelope::ok code**: writes `0x6B6F` (="ok") as 2-byte allocation; `0x1B6F` = 27503 decimal = bytes 0x6F 0x6B = "ok" (little-endian).
- **No keychain access**: confirmed by absence of `SecItem`, `keychain::set_api_key` or `keychain::write_key_file` in call tree (contrast with upsert_relay_provider).
- **Call tree depth ≥ 5**: confirmed — IPC_ENTRY → BlockingPoll → load_context → load_auth_file → fs::read_to_string (depth=5); IPC_ENTRY → BlockingPoll → load_context → make_api_request_context → decode_jwt_claims (depth=5).

---

## ## Inferred

- **Auth file path**: path bytes come from repo state at `v6[6]` (ptr) and `v6[7]` (len) in `load_api_request_context_from_repo`; the static path prefix is not decompiled in this sweep but follows the pattern used by other auth readers in codexmate_lib (likely `~/.codex/auth.json` or similar).
- **chatgpt_account_id lookup purpose**: JWT claims parsed to retrieve `chatgpt_account_id` string (27-char key); used as bearer identity in ApiRequestContext; failure returns `None` (0x8000000000000000) causing empty context / direct-connection test.
- **opt_token path**: when `make_api_request_context` returns `Some(ctx)`, the token ptr is passed as `a3` to `test_api_connectivity`; when `None`, `v7 = nullptr` is passed. This controls whether the `Authorization: Bearer {token}` header is added.
- **HTTP client timeout**: `__src[117] = 5; LODWORD(__src[118]) = 0;` in `http_client` — likely sets timeout to 5 seconds (reqwest ClientBuilder timeout field).
- **serde_json field names for AuthFile**: based on `chatgpt_account_id` key pattern and `a2[6..17]` field layout, likely matches ChatGPT session JSON format (access_token, session_token fields).
- **1.0.9 comparison**: sweep-bucket change_summary confirms 1.0.9 cloned `(proxy_cfg, opt_token)` directly from repo in-memory state; this is consistent with the absence of `load_auth_file`/`make_api_request_context` symbols in the 1.0.9 path.
- **Format string continuation after "via "**: bytes at 0x1010B8ED5+24 show `0xc0 0x7` which is a Rust format arg placeholder (u16 display); followed by ` HTTP ` then another placeholder for status code.

---

## ## Unknown

- **Exact auth file path**: the static path prefix at `anon_cb488c0530badd667ddecb834e53ca81_783` (referenced in upsert_relay_provider sweep) was not decompiled in this session; test_api_proxy_config reads path from repo state bytes, exact filesystem location unverified.
- **AuthFile JSON schema field names**: serde_json deserialization uses derived field names; field offsets a2[6..17] are mapped by decompile but exact JSON key strings (e.g. "access_token", "session_token") not confirmed from string table for load_auth_file.
- **decode_jwt_claims implementation**: VA 0x10053AEF0 was not decompiled in this sweep; JWT parsing library (base64 + serde_json vs custom) not confirmed.
- **nested_dict implementation**: VA 0x10053A9B0 was not decompiled; hashbrown-based or custom lookup not confirmed beyond hashbrown::raw::RawTable drop in make_api_request_context.
- **Auth file refresh policy**: whether `load_auth_file` is called on every invocation or the result is cached; no cache pattern observed in `load_api_request_context_from_repo`, suggesting per-call file read.
- **ResolvedCommand ACL drop path**: `drop_in_place<tauri_utils::acl::resolved::ResolvedCommand>` (0x100636290) called in IPC closure after ACL check; exact permission capability string for `test_api_proxy_config` not extracted.
- **"Reached chatgpt.com via " full format template**: bytes after offset 24 not fully decoded; complete format string may include more dynamic segments beyond proxy URL and HTTP status code.
- **Error handling for chatgpt_account_id not found**: when `make_api_request_context` returns None (0x8000000000000000), `load_api_request_context_from_repo` propagates None — the command then proceeds with `v7 = nullptr` (no auth token), meaning unauthenticated connectivity test. This mirrors 1.0.9 behavior when opt_token was absent, but the trigger condition changed.

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate tier**: readyToImplement (dim6=acceptance-draft)
**Delta class**: delta_vs_109 — new auth file read + message format change

### Happy Path
- Input: `{mode: "proxy", url: "http://127.0.0.1:7890"}`
- Expected: `{code:"ok", message:"Reached chatgpt.com via http://127.0.0.1:7890 HTTP 200", status:1, status_code:200}`
- Side effects: fs::read_to_string (auth file), HTTP GET to chatgpt.com, CLIENT cache rebuild if proxy URL changed

### Error Paths
| Trigger | Expected |
|---------|----------|
| url=None | message="direct connection", status=1 |
| unsupported proxy scheme (ftp://) | code="invalid_config" |
| ClientBuilder::build fails | code="client_build_failed" |
| HTTP GET fails | code="network_error" |
| auth file read/parse fails | code="auth_file_error" (NEW in 1.1.1) |
| chatgpt_account_id not in JWT | proceeds with no-auth test (opt_token=None) |
| non-200 HTTP response | status=1 (connectivity ok), status_code=<actual> |

### Side-Effect Asserts
- NO file writes
- HTTP GET to https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27 (hardcoded)
- proxy schemes accepted: http/https/socks5/socks5h only
- timeout ~5s (ClientBuilder field src[117]=5)

### Test Mapping
- `e2e`: happy_path_with_proxy, direct_connection_no_url, message_format_delta_1_1_1
- `unit`: invalid_proxy_scheme, auth_file_error_path, client_cache_invalidation
