# Interface / DTO / Error Envelope: fetch_relay_models_draft

version: 1.1.1 | platform: macos-arm64 | module: relay
session: <审计会话>
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## Request DTO

**Command**: `fetch_relay_models_draft`
**Frontend invoke**: `Le(input)` — wrapper function called with single `input` struct arg
**argKeys**: `[input]` (from 1.0.9 CCF; ipc-contracts.jsonl confirmed wrapperCall=Le)

### Input struct (inferred: FetchModelsDraftInput)

| field | type | required | notes |
|---|---|---|---|
| `baseUrl` | `String` | yes | Provider base URL; trailing slash + `/v1` stripped by `build_url`; `/v1/models` appended |
| `apiKey` | `Option<String>` | no | Inline API key; if absent/empty, falls back to provider store + keychain |
| `extraHeaders` | `Option<String>` | no | JSON object string; parsed to HeaderMap; empty string → empty map (not error) |
| `model` | `Option<String>` | no | Inferred; likely passed through; exact usage in endpoint path not confirmed |

**Note**: Field names are inferred from 1.0.9 CCF frontend and drop shim layout. The precise Rust struct field names are unconfirmed at source-code level.

---

## Response DTO

**Type**: `CoreEnvelope<Vec<String>>`

### Success path
```json
{
  "ok": true,
  "data": ["model-id-1", "model-id-2", ...]
}
```
- `data`: array of model ID strings extracted from upstream `response["data"][*]` array items
- Empty array: not possible (parse_model_ids errors on empty data array)

### Error paths

| condition | error_code | error_message | source |
|---|---|---|---|
| Upstream data array empty | Err | `"upstream model list is empty"` (28B @ 0x100762d20) | parse_model_ids |
| Upstream non-standard response format | Err | `"upstream did not return a standard model list"` (45B) | parse_model_ids |
| extraHeaders not JSON object | Err | `"extraHeaders must be a JSON object"` (34B) | parse_extra_headers |
| extraHeaders invalid header name | Err | `"invalid header name: {name}"` (formatted) | parse_extra_headers |
| extraHeaders invalid header value | Err | `"invalid header value: {name}"` (formatted) | parse_extra_headers |
| HTTP client build failed | Err | `"failed to build async fetch_models client"` (0x1010e9c0f) | fetch_openai_async |
| Transient error (request failed/timed out/timeout/connection) | Err (retryable) | reqwest error string | is_transient_error=true → retry |
| API key error classes | Err | strings from 0x10114ffd0: `"invalid_api_key"`, `"invalid api key"`, `"incorrect api key"`, `"no access to model"`, `"does not have access"` | response classification |
| Rate limit | Err | `"rate_limit"`, `"rate limit"`, `"429"` | response classification |
| Context / quota | Err | `"insufficient_quota"`, `"billing"`, `"balance"`, `"quota"`, `"context_length"`, `"too many tokens"`, `"maximum context"` | response classification |
| HTTP error codes | Err | `"403"`, `"401"`, `"404"`, `"500"`, `"502"`, `"503"` | response classification |
| Network | Err | `"connection refused"`, `"dns"`, `"timeout"`, `"certificate"`, `"tls"`, `"ssl"` | response classification |

---

## API key resolution order

1. `input.apiKey` if `Some` and non-empty (after `sanitize_api_key` trim)
2. RelayManager provider store lookup by `provider_id` (mutex + memcmp, returns cloned key)
3. System keychain via `get_api_key(provider_id)` (macOS Keychain Services)
4. If all miss: proceed with no API key (or error — exact behavior not confirmed)

---

## URL construction

```
build_url(baseUrl, "models"):
  1. trim trailing whitespace from baseUrl
  2. if baseUrl ends with "/v1": strip the "/v1" suffix
  3. return "{baseUrl}/v1/models"
```

Examples:
- `"https://api.openai.com/v1"` → `"https://api.openai.com/v1/models"`
- `"https://api.openai.com"` → `"https://api.openai.com/v1/models"`
- `"https://api.openai.com/"` → `"https://api.openai.com/v1/models"` (trailing slash stripped first)

---

## Side effects (ordered)

1. `StateManager::try_get` — read Tauri AppState (read-only)
2. `CommandArg::from_command` — deserialize input struct from IPC message
3. `RelayManager::resolve_draft_api_key` — OnceBox init if first; Mutex lock; memcmp provider loop; String clone; Mutex unlock; optionally `keychain::get_api_key` (system keychain read)
4. `sanitize_api_key` — pure string trim (no I/O)
5. `parse_extra_headers` — pure JSON parse + HeaderMap allocation (no I/O)
6. `build_url` — pure string format (no I/O)
7. `fetch_openai_async` — async HTTP GET to `{baseUrl}/v1/models` with resolved apiKey + extra headers + auth bearer header
8. Await response bytes
9. `parse_model_ids` — JSON parse response, extract data[] array
10. `is_transient_error` + retry loop (if error is transient: retry from step 7)
11. `InvokeResolver::return_result` — dispatch CoreEnvelope<Vec<String>> or Err to frontend

**Net I/O**: system keychain read (conditional) + outbound HTTPS GET to provider baseUrl

---

## Platform scope

- macOS ARM64: confirmed (dim5_mac = confirmed)
- Windows x64: Unknown (dim5_win not closed; Windows 逆向分析 evidence not available this session)
- Note: relay behavior is expected to be cross-platform at the command level; HTTP stack is reqwest (cross-platform); only keychain access path is macOS-specific (Windows uses Windows Credential Store, path not confirmed)

---

## Transient error patterns (is_transient_error)

Lowercase-contains check on error string:
- `"request failed"` (14B)
- `"timed out"` (9B)
- `"timeout"` (7B)
- `"connection"` (10B)

If any match: error classified as transient → retry eligible.
