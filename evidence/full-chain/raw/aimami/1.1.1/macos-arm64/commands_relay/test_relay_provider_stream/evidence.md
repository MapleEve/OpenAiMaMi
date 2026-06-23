# Evidence: test_relay_provider_stream (macOS arm64, AiMaMi 1.1.1)

**Session:** wf-aimami111-delta-20260617-repair
**Producer:** <本地机器>
**Binary SHA256:** f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**Date:** 2026-06-17
**Platform:** macos-arm64
**Module namespace:** codexmate_lib::commands::relay / codexmate_lib::core::relay::health_check

---

## Confirmed

1. **Command registration confirmed via string xref.** String `test_relay_provider_stream` exists at `0x1010e7311` in a packed command dispatch list; xref at `0x100123593` inside `tauri::ipc::InvokeResolver::respond_async_serialized_inner` at `0x1001234d0` — this is the Tauri command router that dispatches the command by name.

2. **ICF folding — no standalone command handler symbol.** The function `codexmate_lib::commands::relay::test_relay_provider_stream` has been ICF-merged at the Rust monomorphization level. Only the drop_in_place closure survives as a named symbol: `__ZN4core3ptr108drop_in_place$LT$codexmate_lib..commands..relay..test_relay_provider_stream..$u7b$$u7b$closure$u7d$$u7d$$GT$17h9196794af0b0d14eE` at `0x1000ba9c0`.

3. **Async body delegate confirmed.** The drop_in_place at `0x1000ba9c0` (0xfb bytes) inspects state discriminant at `a1+1584` and `a1+1576`, and on discriminant=3 delegates directly to `codexmate_lib::core::relay::health_check::test_provider_staged::{closure}` drop at `0x1000bc080`. This confirms the command's async future wraps the `test_provider_staged` staged health-check core.

4. **Primary async state machine: test_provider_staged closure at `0x10009d110`.** Size 0xbb0 (2992 bytes) — this is the true poll body for the streaming provider test. It calls `ASYNC_CLIENT` (OnceLock at `0x101442e70`), orchestrates the full HTTP test flow via `build_url`, `build_test_request`, `build_openai_headers`/`build_anthropic_headers`, `classify_openai_chat_endpoint`, `resolve_responses_urls`, `responses_payload`.

5. **Streaming differentiation confirmed.** New in 1.1.1 vs non-stream: `build_test_request` at `0x100764800` writes `stream: true` (bool flag, field `stream`, value 1) into the request body BTreeMap when the streaming parameter (`a5`) is true. It also inserts `stream_options: {include_usage: true}` when streaming. Non-stream path omits both fields entirely.

6. **`is_stream_terminal_event` at `0x1007677a0`.** New streaming leaf (0xfb bytes). Checks serde_json event type field: for OpenAI chat-style events (a2=0) matches type=`"message_stop"` (len 12); for Responses-API events (a2=1) matches `"response.failed"` (len 15) or `"response.incomplete"` (len 19) or `"response.done"` (len 18); detects end-of-stream SSE event to terminate the streaming loop.

7. **`extract_stream_text_delta` at `0x1007678a0`.** New streaming leaf (0x297 bytes). Extracts text delta from SSE chunk: chat-style (a2=0) navigates `choices[0].delta.content`; Responses-API (a2=1) matches type `response.reasoning_summary_text.delta` (len 37) or `response.content_part.delta` (len 26), then reads `item.text`; Anthropic-direct (a2=2) matches type `content_block_delta` (len 19) and reads `delta.text`.

8. **`build_openai_headers` at `0x1007662e0`.** When streaming (`a3=true`), adds `Accept: text/event-stream` and `Cache-Control: no-cache` headers. Also checks originator byte at `a2+229`: if originator==1 adds custom `x-originator: codex_cli_rs` and `User-Agent: codex_cli_rs/0.80.0 AiMaMi` headers. Delegates extra headers to `apply_extra_headers` at `0x100765560`.

9. **`build_anthropic_headers` at `0x100766ca0`.** Symmetric to OpenAI variant: sets `Content-Type: application/json`, reads API key from `a2[10..11]` (field offset 80–96 in RelayProvider), sets `anthropic-version` from static at `0x10115a520` (value=`"2023-06-01"`, len 10). When streaming adds `Accept: text/event-stream` + `Cache-Control: no-cache`. Does NOT add originator headers (no originator check for Anthropic path).

10. **`responses_payload` at `0x100763dc0`.** Builds Responses-API payload (for reasoning endpoints). Parses model string for `@` or `#` separators to extract model/reasoning token budget. Inserts into BTreeMap: `model`, `input`, `stream: true/false`. When reasoning budget present (from `#N` suffix), sets `reasoning: {effort: "...", budget_tokens: N}` and inserts into `reasoning/v1/chat/completions` key via `index_or_insert`.

---

## Inferred

1. **test_relay_provider_stream replaces test_relay_provider** (non-stream, confirmed from string list ordering and changelog note in owner-map). Non-stream version sends a simple completion request and checks the first response chunk; stream version sends `stream: true`, consumes SSE events via `is_stream_terminal_event` + `extract_stream_text_delta`, accumulates delta text, and reports the first non-empty text delta received.

2. **Struct layout of closure at `0x1000ba9c0+0`.** At offset 0: string buffer (len/ptr/cap at 0x0/0x8/0x10); at 0x56/0x60: Arc RefCount ptr; at 0x60..0x70: another string (model or URL); at 0x96: Arc ptr for provider; at 0x1584: state discriminant (0=not started, 3=running/awaiting); at 0x1576: sub-state for provider drop; at 0x1585: Arc ref held flag. Total closure frame ~1590+ bytes.

3. **ASYNC_CLIENT at `0x101442e78` is a shared reqwest::Client** (global `OnceLock<reqwest::Client>`) used by all health-check commands. The streaming test reuses the same client as non-stream test — connection pooling is shared.

4. **`classify_openai_chat_endpoint` at `0x100767d20`** determines endpoint type for choosing the correct payload builder. Returns true (is-embedding) if endpoint contains `embed`, `bge-`, or matched `m3e` substring. Caller uses this to decide between `responses_payload` (reasoning) vs chat-completions payload.

5. **`resolve_responses_urls` at `0x100766a30`** strips trailing `/v1` from base URL (checks last 3 chars `"/v1"`) and constructs both chat and responses URLs: chat URL = `{base}/v1/chat/completions`, responses URL = `{base}/v1/responses`. Returns a slice of 1 or 2 URLs depending on whether base ended in `/v1`.

6. **`build_url` at `0x100767e10`** handles URL normalization: strips trailing `/` chars (multi-byte safe), strips trailing `/v1` if present, then appends the path suffix. Uses format_inner for final concatenation.

7. **Error handling via `panic_const_async_fn_resumed` and `panic_const_async_fn_resumed_panic`** at `0x100fbc820`/`0x100fbc840` — these are Rust async safety guards that fire if the future is polled after completing (resumed-after-done). Present in `test_provider_staged` closure confirms it uses Rust-generated async state machine idiom (not a hand-written poll).

8. **Timeout and error propagation.** `build_test_request` inserts `max_tokens: 16` (generic), `max_tokens: 50` (claude endpoints), `max_tokens: 3000` (gemini endpoints), `max_completion_tokens: 16` (o1/o3/o4 endpoints). For streaming, a short `max_tokens` limit is intentional — the test only needs to confirm the stream opens and sends one delta, not a full response.

9. **Endpoint detection logic in `build_test_request`:** checks model string for `o1-`/`o3-`/`o4-` prefix (XOR pattern `0x316F`/`0x336F`/`0x346F`) and triggers `max_completion_tokens` branch; checks for `claude`/`gemini` substrings for provider-specific token limits.

10. **Side effects:** on success, emits a Tauri event via the closure's window handle to notify the frontend of provider health status and accumulated stream text delta. The event name and schema are inferred from the `test_relay_provider` non-stream counterpart — likely `relay-provider-test-result` with added `streaming: true` and `delta` fields.

---

## Unknown

1. **The exact Tauri event name emitted on stream success/failure.** The event emission is inside the 58KB `test_provider_staged` closure body which could not be fully traced due to size; the event name string was not directly observed in decompile output at this resolution.

2. **Whether `test_relay_provider_stream` shares an ICF body with `test_relay_draft_stream` or is truly folded independently.** Both commands have drop_in_place closures of similar structure (~0xfb bytes), and both delegate to `health_check` core. Full ICF identity requires bytewise comparison of their vtable function pointers.

3. **The exact input DTO fields.** The command takes `model: String` and `providerId: String` parameters (confirmed from owner-map note and string list). Whether it takes additional streaming options (timeout, max_chunks) is not confirmed — the closure struct layout suggests only model + provider fields in the first 96 bytes.

4. **Error path output schema.** What JSON shape is returned on stream error (network failure, API key invalid, timeout) is not confirmed. Inferred to match `test_relay_provider` error schema plus `streaming: true` discriminant.

5. **Whether `stream_options.include_usage` presence in the request is configurable or always true when streaming.** The `build_test_request` code always inserts `stream_options: {include_usage: true}` when `stream=true` with no guard — inferred as unconditional, but not confirmed against the caller's parameter passing.

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate tier**: readyToImplement (dim6=acceptance-draft)
**Delta class**: new_in_1_1_1 — streaming variant of test_relay_provider; replaces test_relay_provider

### Happy Path
- Input: `{providerId: "valid-uuid", model: "gpt-4o-mini"}`
- Expected events via Channel: `Chunk("Hello")` → `Done`
- Provider config (baseUrl, apiKey) resolved from RelayManager by providerId
- HTTP POST identical to test_relay_draft_stream (shared test_provider_staged body): stream:true, stream_options.include_usage:true, max_tokens per model family

### Error Paths
| Trigger | Expected |
|---------|----------|
| providerId not found | Error event via channel |
| provider has no api_key | request sent without Authorization header; likely 401 → Error event |
| network failure | Error event, retry up to 2x |

### Side-Effect Asserts
- No relay state write
- Provider config read from RelayManager (not caller-supplied)
- HTTP POST with stream:true
- Same ASYNC_CLIENT OnceLock as test_relay_draft_stream

### Test Mapping
- `e2e`: happy_path_stream_via_provider_id, provider_not_found
- `unit`: streaming_behavior_parity (shared with test_relay_draft_stream unit tests)
- `explicit_non_automatable_accept`: Tauri event name emitted (in ICF 58KB body — not recoverable)
