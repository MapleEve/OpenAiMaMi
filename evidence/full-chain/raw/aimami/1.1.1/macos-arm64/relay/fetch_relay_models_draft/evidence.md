# Evidence: fetch_relay_models_draft (AiMaMi 1.1.1 macOS ARM64)

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-16
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
source_binary: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
module: codexmate_lib::commands::relay
command_number: 22/76

---

## Confirmed

- **Owner VA**: `0x1001234d0` — `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h793c6f17c7ea92b3` (size=0xb51). This is the async poll body / state machine for fetch_relay_models_draft. Verified by: (1) IPC registration blob at 0x1010e7311 contains "fetch_relay_models_draft"; (2) single data xref from 0x100123593 inside 0x1001234d0; (3) drop shim for `fetch_relay_models_draft::{{closure}}` at 0x1000ba620 xrefs to 0x1001234d0; (4) `ResultFutureTag::future<..fetch_relay_models_draft::{{closure}}>` drop at 0x1000d4030 also xrefs inside 0x1001234d0.
- **Command pattern**: async (not spawn_blocking); the future poll state machine at 0x1001234d0 IS the actual body. No separate synchronous handler function exists with a demangled name.
- **IPC registration**: `"fetch_relay_models_draft"` confirmed at 0x1010e7311 in the IPC command name blob. This blob is the Tauri command registration table.
- **argKeys**: `input` (one positional arg, type inferred as `FetchModelsDraftInput` struct). Confirmed from: (a) 1.0.9 frontend CCF `Le argKeys=[input]`; (b) owner drop shim state structure at offset 0/8/24/72 has 4 heap-allocated String fields (baseUrl, apiKey, extraHeaders, model) — matching the input struct; (c) `from_command` at 0x10058d440 called from within 0x1001234d0 to deserialize the invoke argument.
- **Core impl chain**: `RelayManager::resolve_draft_api_key` (0x1005d6220) → mutex lock + memcmp provider lookup → keychain fallback.
- **quota::sanitize_api_key** (0x100762ef0): trim whitespace, strip trailing `\r\n` from API key string. Returns trimmed String.
- **quota::parse_extra_headers** (0x100763130): serde_json parse `extraHeaders` string as JSON object → `http::HeaderMap`. Error: `"extraHeaders must be a JSON object"` (34B) on non-Object JSON; `"invalid header name: {name}"` on bad header name; `"invalid header value: {name}"` on bad header value; empty string → empty HeaderMap (not error).
- **fetch_models::build_url** (0x100763a80): trim trailing slash from baseUrl, detect trailing `/v1` suffix via byte comparison (`0x762F` = `/v`, `0x31` = `1`), strip it, then format `"{baseUrl}/v1/{endpoint}"`.
- **fetch_models::parse_model_ids** (0x100762d20): parse upstream JSON response; extract `response["data"]` array; map each element to String (model id). Error: `"upstream model list is empty"` (28B) when data array is empty; `"upstream did not return a standard model list"` (45B) when data key absent or not array.
- **fetch_models::is_transient_error** (0x100763050): toLower(error_str), check contains any of: `"request failed"` (14B @ 0x10115a539), `"timed out"` (9B @ 0x10115a547), `"timeout"` (7B @ 0x10115a550), `"connection"` (10B @ 0x10115a557 — from `"connectionsize overflows MAX_SIZE"` blob). Returns bool.
- **HTTP async chain**: `fetch_openai_async::{{closure}}` (drop at 0x1000bb060) wraps `reqwest::async_impl::client::Pending` (state=3, HTTP send) and `Response::bytes::{{closure}}` (state=4, body read). This is the HTTP terminal.
- **Error strings blob** at 0x10114ffd0: `"aimami-relay."`, `"aimami-relay.json"`, `".json"`, `".aimami-relay"`, `"error sending request"`, `"no access to model"`, `"does not have access"`, `"invalid_api_key"`, `"invalid api key"`, `"incorrect api key"`, `"model_not_found"`, `"model not found"`, `"does not exist"`, `"insufficient_quota"`, `"billing"`, `"balance"`, `"quota"`, `"context_length"`, `"too many tokens"`, `"maximum context"`, `"connection refused"`, `"dns"`, `"timeout"`, `"certificate"`, `"tls"`, `"ssl"`, `"image_url"`, `"unsupported"`, `"stream"`, `"error"`, `"disconnect"`, `"closed"`, `"403"`, `"401"`, `"404"`, `"429"`, `"rate_limit"`, `"rate limit"`, `"500"`, `"502"`, `"503"`, `"network"`.
- **Client build error**: `"failed to build async fetch_models client"` at 0x1010e9c0f. Error returned when reqwest async client cannot be built.
- **Source file**: `src/core/relay/fetch_models.rs` confirmed at 0x1010b016d and 0x1010bb151.
- **State machine structure**: `run::{{closure}}::{{closure}}::{{closure}}` drop at 0x1000c12a0 (size=0x1f6) contains references to RelayManager + RelayManager::fetch_models_draft::{{closure}} — this is the Tauri command dispatch closure holding the AppState and resolving the command args.

## Inferred

- **Input struct `FetchModelsDraftInput`** likely fields (inferred from drop shim offsets + call pattern):
  - `baseUrl: String` — heap-allocated string, trimmed of trailing slash + `/v1` by `build_url`
  - `apiKey: Option<String>` — optional; if empty, falls back to `resolve_draft_api_key` which searches provider store + keychain
  - `extraHeaders: Option<String>` — optional JSON object string; parsed by `parse_extra_headers`; empty/absent → empty HeaderMap
  - `model: Option<String>` — used in URL path for endpoint construction (inferred from `build_url` accepting baseUrl + endpoint args)
- **Response type**: `CoreEnvelope<Vec<String>>` — Vec of model ID strings from the `data` array. Confirmed by `ResultFutureTag::future<CoreEnvelope<Vec<String>>, String, fetch_relay_models_draft::{{closure}}>` from the drop shim at 0x1000d4030 demangled name.
- **Response on success**: `{ ok: true, data: ["model-id-1", "model-id-2", ...] }` — Vec<String> of model IDs extracted from upstream `data` array.
- **Retry logic**: `is_transient_error` used to gate retry; suggests the command has a retry loop for transient network errors. Max retry count unknown (runtime value).
- **API key resolution order**: (1) inline `apiKey` field if present and non-empty; (2) provider-store lookup by provider_id (mutex + memcmp loop); (3) system keychain via `get_api_key`.
- **Async tokio executor**: command spawns on Tauri's async runtime (not spawn_blocking); reqwest async client used.
- **baseUrl `/v1` handling**: baseUrl ending in `/v1` gets the `/v1` stripped before re-appending, so `build_url("https://api.openai.com/v1", "models")` → `"https://api.openai.com/v1/models"`. Non-`/v1` suffix: no strip, just `"{base}/v1/{endpoint}"`.
- **Endpoint path**: inferred as `"models"` (OpenAI-compatible list models endpoint) — matches function module name `fetch_models` and the `parse_model_ids` JSON parsing of `response["data"]` array.

## Unknown

- **Exact `FetchModelsDraftInput` field names**: inferred from frontend CCF (1.0.9 argKeys=[input]) and drop shim layout. The struct field names in Rust source are not directly recoverable from pseudocode; `baseUrl`, `apiKey`, `extraHeaders`, `model` are inferred from call sites.
- **Max retry count and backoff strategy**: `is_transient_error` used but retry loop body not fully traced from drop shim alone.
- **The exact model endpoint path**: inferred as `"models"` (OpenAI standard) but not rodata-confirmed.
- **reqwest client configuration**: timeout values, TLS settings, proxy settings within the async fetch_models client not traced (separate `build_url` for client build path exists at 0x1010e9c0f context).
- **CoreEnvelope error discriminants**: specific error codes for `model_not_found`, `invalid_api_key` etc. not confirmed from pseudocode; error classification likely done by matching the error blob strings at 0x10114ffd0.
- **Windows platform behavior**: Windows Unknown; dim5_win not closed.
- **dim6 test/acceptance mapping**: 内部构建 implementation side; not part of producer scope.
- **Whether `model` field is sent in request**: `build_url` takes `(baseUrl, endpoint)` but whether a specific model is passed in the URL or as a query param is inferred only.
- **extraHeaders field name in JSON**: the field name sent in frontend invoke is `extraHeaders` (inferred from `parse_extra_headers` function name and 1.0.9 CCF).
- **CoreEnvelope error envelope format**: follows standard CoreEnvelope pattern (confirmed from other relay commands); specific error code values for fetch_models errors not confirmed.
- **Whether apiKey is trimmed before provider lookup**: `sanitize_api_key` is called; whether it applies before or after resolve_draft_api_key is inferred from call order in poll body.

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim4 partial FetchModelsDraftInput field names inferred + dim5 win Unknown）

### happy_path
- 输入 `{input:{baseUrl:"https://api.openai.com/v1", apiKey:"sk-...", extraHeaders:null, model:null}}`
- URL 构建：strip trailing /v1 → append /v1/models
- 返回 CoreEnvelope<Vec<String>>（model ID 字符串数组，来自 upstream response["data"][*]）
- 副作用：HTTP GET {baseUrl}/v1/models（reqwest async）；transient error 时 retry

### boundary/error
- extraHeaders 非 JSON object → "extraHeaders must be a JSON object" (34B VA 0x100763130)
- extraHeaders 含非法 header name/value → "invalid header name/value: {name}"
- upstream data 为空 → "upstream model list is empty" (28B VA 0x100762d20)
- upstream 无 data key → "upstream did not return a standard model list" (45B)
- reqwest client build 失败 → "failed to build async fetch_models client" (0x1010e9c0f)
- transient error (request failed/timed out/timeout/connection) → retry

### side_effect_asserts
- HTTP GET 路径为 {baseUrl}/v1/models（build_url 逻辑确认）
- extraHeaders=null/空字符串时无额外 headers
- 响应 Vec<String> 不可能为空（empty data array → error）

### test_mapping
- unit: parse_extra_headers + parse_model_ids + is_transient_error + build_url（纯函数，无 mock）
- e2e: fetch_relay_models_draft IPC → mocked HTTP server（验证 happy path + empty data error）
- explicit_non_automatable_accept: retry 逻辑 + transient error backoff（max count 未知）

### dim6_basis
evidence.md parse_extra_headers/parse_model_ids/is_transient_error VA + error strings; interfaces/ Error paths 表; error strings blob VA 0x10114ffd0
