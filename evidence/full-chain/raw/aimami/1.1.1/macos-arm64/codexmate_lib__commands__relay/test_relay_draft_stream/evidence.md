# Evidence: test_relay_draft_stream (macOS arm64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260617-repair
machine: <本地机器>
binary sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
imagebase: 0x100000000
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

---

## Confirmed

1. Command name registered in Tauri command registry: `test_relay_draft_stream` at string VA 0x1011482a6; xref from codexmate_lib::run::{{closure}} at 0x100305aa0 (the Tauri .invoke_handler registration closure).

2. Outer ICF fold confirmed: no direct symbol `codexmate_lib::commands::relay::test_relay_draft_stream` exists as a standalone function; it is ICF-folded into the large run::{{closure}} state machine (frame size ~6216+ bytes). Drop glue at 0x1000c06c0 (codexmate_lib::run::{{closure}}::{{closure}}::{{closure}}) references the test_relay_draft_stream closure state at frame offsets +2432 (state=0) and +4320 (state=3).

3. A-level owner (async poll body): `codexmate_lib::core::relay::health_check::test_provider_staged::{{closure}}` at VA 0x10009d110, size 0xbb0 (2992 bytes), 310 basic blocks. This is the actual Rust async state machine that executes the streaming relay test.

4. B-level owner (outer command closure drop): `codexmate_lib::commands::relay::test_relay_draft_stream::{{closure}}` drop_in_place at 0x1000ba490 (size 0x75). State 0 = RelayDraftTestInput phase; state 3 = RelayManager::test_draft_stream::{{closure}} phase (drops at frame+184, Arc ref at frame+176).

5. B-level owner (IPC response dispatch shim): `test_relay_draft_stream::{{closure}}::{{closure}}` at 0x1000b5ad0 (size 0xc3). Calls IpcResponse::body (0x100789fa0), dispatches via vtable +40. This is the channel event sender shim, not the async body.

6. Input struct `RelayDraftTestInput` fully decoded from deserialize visitor at 0x100566900: 8 fields — providerId(0), ide(1), atMs(2), baseUrl(3), apiKey(4), model(5), wireApi(6), extraHeaders(7). Field indices match case lengths in visit_str: providerId=10-char, ide=3-char, atMs=4-char, baseUrl=7-char, apiKey=6-char, model=5-char, wireApi=7-char, extraHeaders=12-char.

7. Streaming flag confirmed: build_test_request (0x100764800) takes `a5: int` as streaming flag. When a5 != 0 (stream=true), it inserts `stream=true` into JSON body and also inserts `stream_options: {include_usage: true}`. Endpoint path: `/v1/chat/completions` for chat, `/v1/embeddings` for embedding.

8. POST body construction (build_test_request): builds serde_json BTreeMap; inserts `model` (key="model"), `messages` with single user message `[{role:"user", content:<requestedModel>}]`, `stream` bool, optionally `stream_options:{include_usage:true}`, and `max_completion_tokens:16` (o1/o3/o4 models) or `max_tokens:50` (claude/claude-input models) or `max_tokens:3000` (gemini) or `max_tokens:16` (default).

9. Wire API routing: classify_openai_chat_endpoint (0x100767d20) detects embedding endpoints via substrings "embed", "m3e", "bge-". When not embedding, default path is /v1/chat/completions. For wireApi=responses, resolve_responses_urls (0x100766a30) strips trailing slashes and /v1 suffix, then constructs {base}/v1/responses (responses API) and {base}/v1/chat/completions (fallback) URLs.

10. SSE/streaming chunk loop confirmed: basic_blocks analysis shows state machine transitions through states for initial POST fire (state 0→build request), HTTP response await (state 1), SSE stream chunk loop with retry (states 2-6 via ef6e/ef7e loop back to ee0a), stream termination (state with done check), and error passthrough. The inner SSE consumer loop at 0x10009eee6–0x10009ef7e handles chunk reading with retry on disconnect.

11. Retry logic: retry(max_retries=2) confirmed via state transitions; `core::panicking::panic_const_async_fn_resumed` guard present, consistent with no double-poll after completion.

12. ASYNC_CLIENT global at 0x101442e70 (static OnceLock<reqwest::Client>); initialized via OnceLock::initialize at 0x100f7735a on first call.

13. Anthropic header set (build_anthropic_headers 0x100766ca0): `content-type: application/json`, `x-api-key: <apiKey>` (from RelayProvider.apiKey), `anthropic-version: <value>` (from header 0x10115a50f/0x10115a520 = "2023-06-01"); when stream=true: `accept: text/event-stream`, `X-Accel-Buffering: no`.

14. OpenAI header set (build_openai_headers 0x1007662e0): `content-type: application/json`, `Authorization: Bearer <apiKey>`; when stream=true: `accept: text/event-stream`, `X-Accel-Buffering: no`; when wireApi=codex_cli_rs: `originator: codex_cli_rs`, `user-agent: codex_cli_rs/0.80.0 AiMaMimessage`.

15. apply_extra_headers (0x100765560) called from both header builders to inject RelayProvider.extraHeaders into the HTTP request.

16. responses_payload (0x100763dc0): builds Responses API payload; splits input on `@` and `#` chars to extract model/instructions; constructs `{model, input, text:{format:{type:"text"}}, stream:true}`; when reasoning endpoint detected via "reasoning/v1/chat/completions" path, inserts `reasoning:{effort:"medium"}` sub-object.

17. build_url (0x100767e10): normalizes base URL by stripping trailing `/` chars and deduplicating `/v1` suffix to prevent double-path construction.

---

## Inferred

1. The outer Tauri command `test_relay_draft_stream` is async; it takes `(app: AppHandle, input: RelayDraftTestInput, on_event: Channel<RelayStreamEvent>)` — inferred from IPC channel vtable setup at 0x1013ae7c0 and the 3-arg call pattern in the IpcResponse shim.

2. RelayStreamEvent enum variants: inferred from vtable entries at 0x1013ae7c0 area — likely `{Chunk(String), Done, Error(String)}` consistent with other relay stream commands in 1.0.9 baseline.

3. The command calls `RelayManager::test_draft_stream` (inferred from drop glue chain: outer closure state 3 calls `RelayManager::test_draft_stream::{{closure}}` drop at 0x1000bd900); RelayManager holds Arc<RelayState> (Arc decrement at frame+176).

4. test_provider_staged inner closure is shared/reused between `test_relay_draft_stream` and `test_relay_provider_stream` commands (evidence: identical drop glue structure with different provider resolution paths; health_check module contains both).

5. Error path: when all inner polls return Pending or connection fails, state machine falls through to retry logic; after max_retries=2, emits error event via IPC channel with error classification (classify_openai_chat_endpoint path).

6. No retry on 4xx responses (inferred from SSE loop structure — 401/403/429 strings present in binary at 0x10114ffd0 for error classification but not in retry condition).

7. wireApi=responses triggers the Responses API path (/v1/responses); wireApi=openai/anthropic triggers /v1/chat/completions or /v1/messages respectively.

8. Delta from 1.0.9: test_relay_draft replaced with test_relay_draft_stream adding: (a) stream=true parameter in POST body, (b) SSE chunk loop, (c) on_event Channel parameter instead of single-shot return, (d) stream_options.include_usage for token counting during test.

---

## Unknown

1. Exact RelayStreamEvent enum variant count and discriminant values — vtable analysis shows 4 entries near 0x1013ae7c0 but full variant names not recoverable from available symbols without deeper vtable decode.

2. Exact timeout value for the reqwest client — ASYNC_CLIENT initialization function 0x100f7735a not fully decompiled; default reqwest timeout unknown from available evidence.

3. Whether backpressure/cancellation is handled — no CancellationToken found in callee tree; unclear if on_event channel drop triggers abort.

4. RelayProvider struct layout beyond the fields inferred from drop glue (apiKey at relative offset, extraHeaders at +152/+160 from base pointer in build_openai_headers argument).

5. The exact format string templates in anon_b8f787c8f2c69d9b4bd113d6433b9ddb_191/192 used by resolve_responses_urls — these control the fallback/primary URL format strings; not decoded from binary data.

6. Whether the command supports wireApi=native (local Codex relay) or only external providers — test_relay_draft in 1.0.9 only tested external; unclear if 1.1.1 adds native path.

7. Exact behavior when RelayDraftTestInput.endpoint is empty string — build_url handles empty a3 (a3=0 branch goes to LABEL_19 without stripping), but downstream handling unknown.

8. The complete SSE chunk parsing state — the inner loop at 0x10009ee50/ee56 handles byte-level chunk reading but the exact SSE framing parser (data: prefix, [DONE] detection) is in deeper callees not fully traced.

---

## ACCEPTANCE (dim6 — wf-aimami111-dim6-20260619)

**Gate tier**: readyToImplement (dim6=acceptance-draft)
**Delta class**: new_in_1_1_1 — streaming SSE variant of test_relay_draft

### Happy Path
- Input: `RelayDraftTestInput {providerId, ide, atMs, baseUrl:"https://api.openai.com", apiKey:"sk-...", model:"gpt-4o-mini", wireApi:"openai", extraHeaders:null}`
- Expected events via Channel: `Chunk("Hello")` → `Done`
- HTTP POST: /v1/chat/completions, body={model, messages:[{role:"user",content:model}], stream:true, stream_options:{include_usage:true}, max_tokens:16}
- Headers: Content-Type:application/json, Authorization:Bearer {apiKey}, Accept:text/event-stream, Cache-Control:no-cache

### Error Paths
| Trigger | Expected |
|---------|----------|
| network failure | Error event, retry up to 2x |
| 4xx response | Error event, no retry |
| model=embedding endpoint | routes to /v1/embeddings |
| model=o1-/o3-/o4- | max_completion_tokens:16 instead of max_tokens:16 |
| wireApi=codex_cli_rs | x-originator:codex_cli_rs + User-Agent:codex_cli_rs/0.80.0 AiMaMi headers added |

### Side-Effect Asserts
- No relay state write
- HTTP POST with stream:true and stream_options.include_usage:true
- ASYNC_CLIENT OnceLock reused across calls
- extraHeaders injected when non-null

### Test Mapping
- `e2e`: happy_path_openai_stream, wireApi_routing, retry_on_network_error
- `unit`: model_endpoint_classification, max_tokens_per_family
- `explicit_non_automatable_accept`: RelayStreamEvent enum variant names (vtable 4 entries)
