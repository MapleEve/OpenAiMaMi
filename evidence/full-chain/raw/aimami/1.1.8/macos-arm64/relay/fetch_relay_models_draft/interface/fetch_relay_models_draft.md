# interface — fetch_relay_models_draft (AiMaMi 1.1.8, macos-arm64 label / x86_64 IDB slice)

session: <审计会话> · machine: <本地机器>
owner_va: 0x1000e9f00 · owner_symbol: `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h2b6447bb835e17f0`

## IPC contract

- **command**: `fetch_relay_models_draft`
- **argKeys**: `[input]` — single struct arg (per prior 1.1.1 leaf's CCF-migrated frontend evidence;
  this leaf did not independently re-pull the 1.1.8 mac `ipc-contracts.jsonl` argKeys row for this
  specific command — confirmed unchanged in this session's frontend-delta comparison: `fetch_relay_models_draft`
  appears in `cmd-same.mac.txt` with 0 entries in `argkey-changed.mac.txt`, i.e. argKeys structurally
  unchanged 1.0.9→1.1.8 at the frontend-contract level)
- **input struct** (`RelayFetchModelsInput`, per 1.1.1 leaf's later dim4 regrade,
  `intermediate/dim6/mac-close-1.json`): `providerId`, `baseUrl`, `apiKey`, `wireApi`, `extraHeaders`
  (5 fields; `model` field does NOT exist, per that same regrade). This leaf did not
  independently re-map these byte offsets against the 1.1.8 binary via `type_query`/`declare_type`
  (Unknown/inferred-by-continuity, see evidence.md).
- **response**: `CoreEnvelope<Vec<String>>` — cross-confirmed via
  `drop_in_place<ResultFutureTag::future<CoreEnvelope<Vec<String>>,String,fetch_relay_models_draft::{{closure}}>>`
  at 0x1000c01a0 (func_query hit), same generic instantiation shape as 1.1.1.

## DELTA vs 1.0.9 baseline (`raw/aimami/1.0.9/macos/relay/fetch_relay_models_draft/README.md`)

The 1.0.9 baseline documents a single code path that unconditionally sends **both**
`x-api-key` and `Authorization: Bearer {key}` headers together on every request (owner size
0x1b7c=7036B, much larger than 1.1.8's 0xbac=2988B — consistent with 1.0.9 inlining more of the
HTTP-client construction directly rather than factoring it into named module-level statics).

1.1.8 instead has **two mutually-exclusive header styles**, selected by a single-byte flag read
directly out of the deserialized input struct (`v29 = __src[8704]`), each backed by its own
lazily-initialized (`OnceLock`) `reqwest::Client` singleton:

| selector | client static | auth header(s) sent | reqwest call |
|---|---|---|---|
| `v29 == 0` | `fetch_models::ASYNC_CLIENT` (0x1015b1ea8) | `Authorization: Bearer {key}` only | `RequestBuilder::bearer_auth` |
| `v29 != 0` | `fetch_models::ASYNC_DIRECT_CLIENT` (0x1015b1eb8) | `x-api-key: {key}` + `anthropic-version: {?}` | 2x `RequestBuilder::header` |

Both branches still layer the `parse_extra_headers`-derived `HeaderMap` via `.headers()`
afterward. This is consistent with (and directly explains) the `wireApi` field already present
in the `RelayFetchModelsInput` struct (per the 1.1.1 leaf's dim4 regrade) — `v29` is inferred to be
that field's OpenAI-vs-Anthropic discriminant, though this round did not independently confirm the
exact numeric mapping via `type_query` (see evidence.md Inferred section).

**Header literal bytes confirmed this round** (`get_bytes` + `xrefs_to` cross-check against this
owner, 0x1000e9f00):
- `"x-api-key"` at 0x10125a4e7 (9 bytes)
- `"anthropic-version"` at 0x10125a4f0 (18 bytes)
- The paired value for `anthropic-version` (plausibly `"2023-06-01"`, seen immediately adjacent in
  the same merged string blob from the earlier `find_regex` dump) was **not** independently
  confirmed via a direct operand-level `get_bytes`/`xrefs_to` this round — recorded as Inferred.

**Also new/changed vs 1.0.9** (not independently disambiguated as 1.1.1-vs-1.1.8 introduced, since
the 1.1.1 leaf's own call-tree only reached depth 3 and did not decompile this deep into the retry
machinery — see evidence.md):
- A bounded **retry loop** around the whole fetch attempt, terminating with a new literal error
  `"all retries exhausted"` (21 bytes, confirmed via decompiled `qmemcpy` literal) when an
  attempt-counter read from instance memory (`*(__src+2232)` vs a stored max at `*(__src+2233)`)
  is exceeded. A second, separate counter (`*(__src+2235) >= 2`) additionally gates whether a
  `parse_model_ids` failure is retried at all (combined with `is_transient_error`).
- An explicit **HTTP status-code range check**: `(status - 200) >= 100`, i.e. any status outside
  `[200, 299]` is treated as an error and formatted via an anonymous format template
  (`_anon.1f22c03b288e649fafb3d21192ed4cff.164`) whose literal content was not independently
  decoded this round.
- A separate **JSON-decode-failure** error class, `"decode failed: {err}"` (symbol `aDecodeFailed`
  confirmed present at 0x101222d94; literal bytes not independently re-decoded this round),
  distinct from `parse_model_ids`'s existing "upstream did not return a standard model list" class
  (which fires only *after* successful JSON decode, when the decoded value has the wrong shape).
- Network-level failures are wrapped as `"request failed: {err}"` using the `reqwest::Error`
  `Display` impl; the compiler embeds a source-location string alongside this format literal
  (`src/core/relay/health_check.rs`) — suggesting the HTTP-send/retry plumbing may now be
  factored into a shared helper module also used by the `test_relay_provider_stream` /
  `test_relay_draft_stream` / `test_api_proxy_config` commands (all visible as adjacent literals
  in the same merged command-name string blob). Not independently confirmed as a shared function
  via cross-referencing those other commands' owners this round.

## Confirmed UNCHANGED vs 1.1.1 (and, by extension, structurally consistent with 1.0.9's
documented behavior for these specific sub-steps)

- `RelayManager::resolve_draft_api_key` — same mutex+memcmp provider-store lookup +
  system-keychain fallback (fresh callees() this round matches the 1.1.1 leaf's documented set
  byte-for-byte in role, VAs differ per-build as expected).
- `quota::sanitize_api_key` — trims whitespace only (fresh decompile this round confirms
  `trim_matches`, no other behavior).
- `quota::parse_extra_headers` — parses the `extraHeaders` JSON string into a `HeaderMap` (fresh
  callees() this round matches 1.1.1's set: serde_json + HeaderMap + HeaderName::from_bytes).
- `fetch_models::build_url` — trims a trailing `/`, strips a trailing `/v1` if present, appends
  the caller-supplied suffix (`"/v1/models"`, byte-confirmed 0x10125a4dd, 10 bytes) — fresh
  decompile this round (`pseudocode/0002_build_url.c`) is functionally identical to the 1.1.1
  leaf's documented logic.
- `fetch_models::parse_model_ids` — indexes the `"data"` field of the decoded JSON value and
  collects model-id strings via `Vec::from_iter`.
- `fetch_models::is_transient_error` — lowercases the error string then checks 4 substrings
  (`"request failed"`/`"timed out"`/`"timeout"`/`"connection"`, byte-lengths 14/9/7/10) — fresh
  decompile this round (`pseudocode/0003_is_transient_error.c`) is functionally identical to the
  1.1.1 leaf's documented logic. What changed is *how the owner uses* this function's result (see
  retry-loop delta above), not the function itself.

## Side effects

Read-only relative to local state (no relay.json write observed in this owner); one conditional
system-keychain read (via `resolve_draft_api_key`'s fallback path, same as 1.1.1/1.0.9); one
outbound HTTPS request per attempt to `{baseUrl}/v1/models` (bounded-retry, style depends on
`wireApi`/`v29`).

## Unknowns (accepted, not fabricated)

- Exact `RelayFetchModelsInput` byte-offset layout for the 1.1.8 build (not re-mapped via
  `type_query`/`declare_type` this round; inferred from continuity with the 1.1.1 dim4 regrade).
- Exact numeric discriminant mapping for `v29`/`wireApi` (0=openai/1=anthropic inferred from
  header-style match, not read from an enum-to-string table).
- Paired header value for `anthropic-version` (plausibly `"2023-06-01"`, adjacent in the string
  blob, not operand-level confirmed).
- Literal content of the two anonymous format templates (`_anon...164` status-error,
  `aDecodeFailed` decode-error) — symbol/role confirmed, exact byte text not re-decoded this round.
- Exact retry-cap numeric value(s) for the two counters (`*(__src+2233)` max, `*(__src+2235)>=2`
  gate) — structurally confirmed as bounded, values are read from instance memory not literals.
- Whether the retry-loop / dual-client / status-range-check machinery was introduced in 1.1.1
  (and simply not traced to this depth by the 1.1.1 leaf, which only reached call-tree depth 3)
  or genuinely new in 1.1.8 — confirmed only as a delta relative to the 1.0.9 baseline doc, not
  pinpointed to a specific intermediate version.
- Windows-x64 equivalent not decompiled this leaf (macos-arm64-label-only, per this leaf's scope).
- dim6 (test/acceptance mapping) — C5-implementation-side activity, out of reverse-engineering scope.
