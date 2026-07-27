# HTTP Route Entrypoints — AiMaMi 1.2.3 macos-arm64

Behavior record for the 12 axum route-handler closures + 3 stream-driver
functions recovered in the 2026-07-24 `framework-monomorph` gap-fill pass
(see `CENSUS-COMPLETENESS-SWEEP.audited.jsonl` rows 23-34 and
`CENSUS-COMPLETENESS-SWEEP.md` §6a). These are `_<F as
axum::handler::Handler<(...),S>>::call::{{closure}}` monomorphizations —
symbol names carry `axum::` not `codexmate_lib::`, so they were previously
outside the name-pattern census net despite carrying real relay-routing
business logic. Purpose: give the operator's own reimplementation a ground
truth to check request→provider forwarding, error wrapping, and streaming
translation behavior against.

Pseudocode: `raw/aimami/1.2.3/macos-arm64/framework-monomorph/{axum-handlers,stream-drivers}/ida/pseudocode/`.

All 12 handlers are `poll`-style Rust async-fn state machines (a `switch`
on a resume-state byte at offset `+536` of the future's environment struct);
the pseudocode below is described in terms of each `case` branch's *semantic*
effect, not the raw state numbering, which is an artifact of `-O` codegen
and not meaningful across functions.

## 1. Route handlers grouped by the relay-core function they call

All six `codexmate_lib::core::relay::proxy_server::*` callees named below are
themselves already-covered/on-disk `codexmate_lib`-named functions (outside
this gap-fill's scope); this doc only records **which handler calls which**,
i.e. the route → relay-core wiring, not the relay-core internals.

| Handler addr | Direct relay-core callee(s) | Behavior |
|---|---|---|
| `0x100306350` | `upstream_error_with_reason` | Only callee is the error-wrap path — this closure's traced branch is an early-reject/validation-failure leg that goes straight to building an error response, no forward attempt on this branch. |
| `0x100308070` | *(none — no `codexmate_lib` callee)* | Trivial 103-byte handler: allocates a 0-length response body, drops the `ProxyContext` extractor and the incoming `Request` without inspecting them. Consistent with an OPTIONS/CORS-preflight or no-op stub bound to the relay route group (route path/method binding lives in the router-construction function, outside this leaf's scope, so the exact method/path string was not re-derived here). |
| `0x1003081d0` | `pick_candidates_for`, `upstream_error_with_reason` | Selects a candidate set (accounts/providers eligible for this request) via `pick_candidates_for`, and on an empty/invalid candidate set falls through to `upstream_error_with_reason`. No `forward_*` callee is reached on the traced branch — i.e. this looks like a pre-flight/probe endpoint that only validates candidate availability, not a body-forwarding endpoint. |
| `0x10030c940`, `0x10030d360` | `forward_codex_router_images_internal::_` | Two monomorphized instances of an image-generation forwarding path (router-embedded, multi-account). The two addresses differ only in extractor-generic arity (`Handler<(M,T1,T2,T3),S>` for both — likely differ in which axum extractors are bound, e.g. presence/absence of a path parameter), not in relay logic. |
| `0x1003110f0`, `0x100312da0` | `forward_with_failover::_`, `upstream_error_with_reason` | Generic (non-Codex-specific) forward path: attempts delivery via `forward_with_failover` (which internally retries across the candidate list on upstream failure — failover logic itself lives in that already-covered function) and wraps any exhausted-failover result via `upstream_error_with_reason`. |
| `0x100312070`, `0x100313d20` | `forward_codex_router_responses_internal::_` | Two monomorphized instances of the Codex "responses"-shaped forwarding path (router-embedded, single-attempt — no `forward_with_failover` callee on the traced branch). |
| `0x100315950`, `0x100316be0` | `pick_candidates_for`, `forward_with_failover::_`, `forward_codex_responses_internal::_`, `upstream_error_with_reason` | The most complete handler pair: pick candidates → attempt forward via `forward_codex_responses_internal` → on failure, `forward_with_failover` retries across remaining candidates → on total exhaustion, `upstream_error_with_reason` builds the error response. This is the primary Codex "responses"-shaped proxy endpoint with full candidate-pick + failover + error-wrap flow. Two addresses = two generic-extractor-arity instantiations of the same route (e.g. streaming vs non-streaming variant, or an extra header/query extractor). |
| `0x100933b10` | `oauth_login::resolve_callback` | See §2. |

### General request→response shape (all `forward_*`/`upstream_error_with_reason`-calling handlers)

1. axum extracts `ProxyContext` (shared relay state: account/candidate
   registry, http client(s)) plus the request body via the handler's bound
   extractors.
2. Candidate selection (`pick_candidates_for`) narrows down which
   account/provider entries are eligible for this request (only observed on
   the handlers that also call it — others presumably receive an
   already-resolved candidate list from an outer caller not in this leaf).
3. Forwarding is delegated to one of the already-covered
   `forward_codex_responses_internal` / `forward_codex_router_responses_internal`
   / `forward_codex_router_images_internal` functions (protocol/endpoint-shape
   specific), which perform the actual outbound HTTP request per the target
   provider's official wire protocol.
4. On failure, `forward_with_failover` (where present) retries across the
   remaining candidates before giving up.
5. Any terminal failure (validation reject, empty candidate set, or
   exhausted failover) is normalized into an HTTP response by
   `upstream_error_with_reason`, which is the single shared error→response
   formatter across every handler in this table.

None of the 12 handler bodies themselves contain request-forging logic,
header spoofing, or any attempt to disguise the outbound call as coming from
a different client — that responsibility (if any exists) would live inside
the not-in-scope `forward_*`/`ProxyContext` construction functions; nothing
observed in this leaf's 12 files does it.

## 2. OAuth loopback callback handler — `0x100933b10`

`_<F as axum::handler::Handler<(M,T1,T2),S>>::call::{{closure}}`, direct
callee `codexmate_lib::core::oauth_login::resolve_callback`. The
`127.0.0.1:1455/auth/callback` string literal appears repeatedly in the
census string-blob samples for the surrounding tauri command set, consistent
with this handler being the localhost redirect target of a standard OAuth
Authorization-Code loopback flow (the same pattern used by e.g. `gh auth
login`, `aws sso login`, VS Code's "Sign in" flows, and OpenAI's own Codex
CLI "Sign in with ChatGPT" device/loopback flow) — a browser is opened to
the provider's real login page, the provider redirects back to this local
port with a `code`/`state` query string, and this handler is what receives
that redirect.

Traced behavior:

1. Reconstructs the request URI (`http::uri::Uri`) from the extractor state
   and calls `codexmate_lib::core::oauth_login::resolve_callback(uri, ...)`.
   `resolve_callback`'s own internals (how it validates `state`, exchanges
   the code, or persists resulting tokens) are **not** in this leaf's scope —
   it is an already-covered `codexmate_lib`-named function.
2. `resolve_callback`'s result is delivered through a `tokio::sync::oneshot`
   channel (`Sender::send`) to whatever task is blocking on the interactive
   login flow (i.e. this HTTP handler's job is only to *unblock* the pending
   login-flow future; it does not itself drive the login UI).
3. HTTP status is selected purely from the oneshot-send outcome, not from
   `resolve_callback`'s return value directly:
   - **200** if the oneshot send succeeded and this was the value actually
     picked up by the waiter.
   - **410 Gone** if the oneshot send "succeeded" but the value was not the
     one consumed (already-consumed / stale callback — e.g. a duplicate
     browser redirect hitting the endpoint twice, or the interactive login
     flow having already timed out).
   - **400** on a `resolve_callback` error (malformed callback query, `Uri`
     parse failure, etc.) or if no receiver was waiting at all.
4. On every path the handler releases its extractor-held state (drops the
   parsed `Uri`, decrements an `Arc` refcount on the shared oneshot-holder)
   before returning.

Nothing in this handler's traced logic converts the OAuth session into a
generic bearer/API credential, mints or persists any secret, or changes how
the underlying provider's official login protocol is being followed — the
handler is exactly the loopback-redirect receiver of a standard three-legged
OAuth flow, wired to unblock a pending Rust future. What (if anything)
`resolve_callback` itself does with the resulting code/token is outside
this leaf and was not reversed as part of this pass.

## 3. Streaming translator drivers

Three functions, all generic Rust `Stream`-combinator poll bodies
(`futures_util::stream::unfold::Unfold::poll_next` /
`futures_core::stream::TryStream::try_poll_next`), monomorphized per
translator-stream type. These are the **driver/plumbing** layer only — the
actual per-line parsing/translation rules live inside the named
`codexmate_lib::core::relay::translator::stream::*Stream::{feed_line,flush}`
methods, which are already-covered `codexmate_lib`-named functions and were
**not** re-decompiled as part of this leaf.

| Driver addr | Combinator | Drives |
|---|---|---|
| `0x1008c8210` | `Unfold::poll_next` | `ChatToResponsesStream::{feed_line,flush}` |
| `0x1008c9e00` | `Unfold::poll_next` | `AnthropicDirectToResponsesStream::{feed_line,flush}` |
| `0x10092b8c0` | `TryStream::try_poll_next` | `OpenAiToAnthropicStream::{feed_line,flush}` **and** `AnthropicToOpenAiStream::{feed_line,flush}` (both instantiated in the same function body — two separate monomorphizations compiled at the same address range) |

Driver semantics (generic to all three, per standard `Unfold`/`TryStream`
poll-loop shape confirmed in the pseudocode):

1. On each poll, the driver reads the next chunk/line from the upstream SSE
   byte stream being proxied.
2. Each line is handed to the stream-specific `feed_line(line)`, which
   returns zero or more translated output chunks (buffering partial lines
   internally when a full SSE event hasn't arrived yet — buffering logic is
   inside `feed_line`, not observed at this driver layer).
3. When the upstream stream ends, the driver calls `flush()` once to drain
   any remaining buffered/partial translated output before signaling
   stream-completion to the downstream axum SSE response writer.

Net effect: these four stream-translator types (`ChatToResponses`,
`AnthropicDirectToResponses`, `OpenAiToAnthropic`, `AnthropicToOpenAi`)
confirm the relay does real-time SSE **wire-format translation** between at
least three providers' streaming formats (OpenAI Chat Completions-shaped,
OpenAI Responses-shaped, and Anthropic Messages-shaped) — i.e. it is
behaving as a protocol-translating multi-provider gateway (same category of
functionality as e.g. LiteLLM's format adapters), not merely a raw
byte-for-byte passthrough. Nothing observed in this driver layer alters,
duplicates, or hides usage/billing-relevant fields; that would be a property
of `feed_line`'s own transformation rules, which are outside this leaf.

## 4. What is not covered by this leaf

- `codexmate_lib::core::relay::proxy_server::{pick_candidates_for,
  forward_with_failover, forward_codex_responses_internal,
  forward_codex_router_responses_internal,
  forward_codex_router_images_internal, upstream_error_with_reason}` —
  already-covered `codexmate_lib`-named functions, not re-decompiled here.
- `codexmate_lib::core::oauth_login::resolve_callback` — already-covered,
  not re-decompiled here; this is where the actual code/state validation
  and token handling (if any) would live.
- `codexmate_lib::core::relay::translator::stream::*Stream::{feed_line,
  flush}` — already-covered, not re-decompiled here; this is where the
  actual per-provider wire-format translation rules live.
- Router construction / route→path/method binding (which registers these
  12 handlers against specific HTTP methods and paths) — not part of the
  35-function gap-fill target list, so exact path strings (e.g.
  `/v1/responses`, `/v1/images/generations`) were not independently
  re-derived here; the mappings above are inferred from callee identity and
  extractor-generic arity, not from a literal route-table read.
