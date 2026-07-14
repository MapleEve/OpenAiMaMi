# evidence — fetch_relay_models_draft (AiMaMi 1.1.8, macos-arm64 label)

session: <审计会话> · machine: <本地机器>
owner_va: 0x1000e9f00 · owner_symbol: `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h2b6447bb835e17f0`
module: `commands::relay` (per `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl`
line 23, which only recorded the `drop_in_place<fetch_relay_models_draft::{{closure}}>` shim at
0x1000a8b70 — the real async-poll owner was located independently this round via the
string-literal xref method below, since this owner's generic tauri symbol name carries no
command-specific text and is invisible to name-based `func_query`).
binary: `raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi` — 分析工具就绪门
(`健康检查`: status=ok, uptime_sec=211954.747, 反编译就绪=true, module=`AiMaMi`, idb_path
contains `AiMaMi 1.1.8 universal.app`) before any decompile/callees/xrefs_to/get_bytes call this
round; re-verified live (fresh disasm of the shared anchor `get_relay_proxy_status`@0x1004c6320,
byte-for-byte identical x86_64 mnemonics to the prior mac-shard-3/4/5/6/8 sub-entries) before
starting this leaf's own decompile work.

**arch_noise_filter_applied**: this mac 1.1.8 IDB decompiles the fat binary's x86_64 slice
(documented session-wide in `REVERSE-STATUS.md` mac-shard-3/8 sub-entries; independently
re-confirmed by this leaf via the same anchor-address check). All findings below are
demangled-symbol / literal-string / control-flow level; no register/ABI/calling-convention/
stack-layout/size noise is asserted as a behavioral delta. Per this session's established
precedent (see `raw/aimami/1.1.8/macos-arm64/relay/diagnose_codex_router/evidence.md` and this
round's task instructions), app-level facts (callee graph, literal strings, DTO shape,
control-flow branch structure) from this x86_64 decompile are treated as valid evidence for
Rust logic that is architecture-independent by construction.

## Confirmed

- `fetch_relay_models_draft` owner located via a 2-step string-literal xref chain: (1)
  `find_regex` found the literal `"fetch_relay_models_draft"` inside a large compiler-merged
  constant-string blob at 0x10125a1c0 (contains dozens of unrelated command-name and header-name
  literals concatenated together); (2) computed and `get_bytes`-verified the exact sub-offset
  0x10125a3ac (24 bytes, decoded byte-for-byte to "fetch_relay_models_draft"); (3) `xrefs_to`
  that precise address returned a single, unambiguous hit at call site 0x1000e9fc3, falling
  inside `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h2b6447bb835e17f0`
  (0x1000e9f00, size 0xbac). A coarser `xrefs_to` on the whole blob address (0x10125a1c0) first
  returned 4 candidates; all 4 were explicitly excluded via `callees()` cross-check before
  settling on the precise-offset method: 2 were the IPC dispatchers for the unrelated
  `export_relay_config`/`import_relay_config` commands (confirmed by their own distinct
  `commands::relay::export_relay_config`/`import_relay_config` callees), and 2 were
  near-empty `respond_async_serialized_inner::{{closure}}` instances (only `memcpy` +
  `AppHandle::from_command` as callees, no relay-specific logic at all) belonging to some other,
  much simpler command that happens to reference a different literal in the same merged blob.
- The confirmed owner's callees (fresh `callees()` this round) include
  `RelayManager::resolve_draft_api_key` (0x1005c2400), `quota::sanitize_api_key` (0x10059c670),
  and `quota::parse_extra_headers` (0x10059c8b0) — the exact same 3 named helper functions the
  1.1.1 leaf's owner calls, by role and by the same fresh-decompiled internal callee patterns
  (mutex+memcmp+keychain for resolve_draft_api_key; trim_matches only for sanitize_api_key;
  serde_json+HeaderMap for parse_extra_headers) — this is strong independent corroboration that
  the correct owner was found, not a coincidental symbol collision.
- **DELTA, dual reqwest client + dual auth-header style** (byte-verified this round, absent from
  the 1.0.9 baseline doc which documents a single unconditional dual-header path): a single-byte
  flag read directly from the deserialized input struct (`v29 = __src[8704]`) selects between two
  separately lazily-initialized (`OnceLock`) `reqwest::Client` singletons —
  `fetch_models::ASYNC_CLIENT` (0x1015b1ea8, paired with `RequestBuilder::bearer_auth`, i.e.
  OpenAI-style `Authorization: Bearer` only) and `fetch_models::ASYNC_DIRECT_CLIENT` (0x1015b1eb8,
  paired with two explicit `RequestBuilder::header()` calls for literals `"x-api-key"`
  (0x10125a4e7, 9 bytes, get_bytes-confirmed) and `"anthropic-version"` (0x10125a4f0, 18 bytes,
  get_bytes-confirmed) — Anthropic Claude-API-style headers instead of bearer auth). Both call
  sites confirmed to fall inside this owner via `xrefs_to` on the literal addresses. This directly
  explains the `wireApi` field already recorded in the 1.1.1 leaf's later dim4 regrade
  (`intermediate/dim6/mac-close-1.json`: `providerId`/`baseUrl`/`apiKey`/`wireApi`/`extraHeaders`).
- **DELTA, bounded retry loop with a new terminal error string**: a `while(1)` loop wraps the
  fetch attempt; an attempt counter read from instance memory (`*(__src+2232)` as u32) is compared
  against a stored max (`*(__src+2233)`); on exceed, a NEW (not present in the 1.0.9 baseline doc
  or the 1.1.1 leaf's documented error list) literal error `"all retries exhausted"` (21 bytes,
  confirmed via a decompiled `qmemcpy(dst, "all retries exhausted", 21)` call) is built and
  returned. A second, separate counter (`*(__src+2235) >= 2`) additionally gates whether a
  `parse_model_ids` failure specifically is retried (combined with a fresh call to
  `is_transient_error`, confirmed unchanged as a function — see below).
- **DELTA, explicit HTTP status-code range check**: after a successful `send()`+`poll()`, the code
  computes `(status_code - 200) >= 100` (i.e. status code outside the inclusive range [200,299])
  and, if true, formats an error via anonymous format template
  `_anon.1f22c03b288e649fafb3d21192ed4cff.164` before proceeding to JSON decode. This explicit
  status-range gate is not documented in the 1.1.1 leaf's error-path list.
- **DELTA, separate JSON-decode-failure error class**: `Response::json()` is called directly
  (rather than `Response::bytes()` + a separate manual `serde_json::from_slice`, as the 1.1.1
  leaf's phase breakdown implied); its own internal decode failure is wrapped as
  `"decode failed: {err}"` (symbol `aDecodeFailed` confirmed present at 0x101222d94), which is
  distinct from `parse_model_ids`'s pre-existing `"upstream did not return a standard model list"`
  class (that one fires only after a *successful* decode, when the resulting `Value` lacks the
  expected `data` array shape).
- Network-level (`reqwest::Error`) failures are wrapped as `"request failed: {err}"` — the same
  message the 1.1.1 leaf documented, but this round's decompile additionally shows a compiler
  source-location string embedded alongside the format literal, reading
  `"src/core/relay/health_check.rs"` — visible at both the bearer_auth-branch poll site
  (0x1000eb392 region) and the direct-client-branch poll site (0x1000eb5d5 region), i.e. both
  branches share the exact same error-formatting code path (same literal, same embedded location).
- `build_url` (0x10059d200) and `is_transient_error` (0x10059c7d0) were freshly decompiled this
  round (`pseudocode/0002_build_url.c`, `pseudocode/0003_is_transient_error.c`) and are
  functionally IDENTICAL to the logic the 1.1.1 leaf documented for the same-named helpers (same
  trim/strip/format sequence; same 4-substring lowercase-contains check with matching byte-lengths
  14/9/7/10) — both callee sets (`callees()`) also match 1.1.1's documented sets exactly by role.

## Inferred

- `v29` (the client-selection byte) is inferred to correspond to the frontend-visible `wireApi`
  field of the `RelayFetchModelsInput` struct (per the 1.1.1 leaf's dim4 regrade) based on the
  header-style match (bearer-only vs Anthropic-style headers) — not independently confirmed via
  `type_query`/`declare_type` against the 1.1.8 binary's actual struct layout this round, so the
  exact byte offset and the exact discriminant-to-string (0=openai/1=anthropic, or reversed) is
  inferred rather than literally read from an enum table.
- The paired value sent alongside the `"anthropic-version"` header is plausibly `"2023-06-01"`
  (the Anthropic API's documented version string), based on it appearing immediately adjacent to
  `"anthropic-version"` in the same merged string blob dump (`find_regex` result: "...x-api-key
  anthropic-version2023-06-01/v1/messages...") — this is a positional/contextual inference, not a
  direct operand-level `get_bytes`+`xrefs_to` confirmation tying that exact literal to the exact
  call site.
- The retry-loop, dual-client, and status-range-check machinery is inferred to be a genuine delta
  relative to the 1.0.9 baseline (which documents none of it), but whether it was introduced
  exactly at 1.1.1 or later at 1.1.8 specifically cannot be pinpointed — the 1.1.1 leaf's own
  call-tree only reached depth 3 and its phase list does not mention a retry loop, dual client, or
  status-range check, but that could reflect either "these did not exist yet in 1.1.1" or "these
  existed in 1.1.1 but were not traced to this depth by that shallower pass" — recorded as
  Inferred-delta-vs-1.0.9, not confirmed-delta-vs-1.1.1.
- The `src/core/relay/health_check.rs` embedded location string is inferred to suggest the
  HTTP-send/retry/error-formatting logic may now be factored into a shared helper module (reused
  by `test_relay_provider_stream`/`test_relay_draft_stream`/`test_api_proxy_config`, all visible
  as adjacent literals in the same command-name string blob) rather than being duplicated inline
  per-command as in 1.0.9 — this is inferred from the naming/co-location signal, not confirmed via
  directly decompiling any of those other three commands' owners this round.

## Unknown

- Exact numeric value(s) of the two retry-cap counters (`*(__src+2233)`, the `>=2` comparand at
  `*(__src+2235)`) — both are read from instance/runtime memory rather than being compile-time
  immediates visible in this decompile, so the actual configured retry limit was not determined.
- Literal byte content of the two anonymous format templates: `_anon.1f22c03b288e649fafb3d21192ed4cff.164`
  (status-code error) and the exact `aDecodeFailed`-tagged format string (decode-failure error) —
  symbol presence and role confirmed, but `get_string`/`get_bytes` was not run against either this
  round; recorded Unknown rather than guessed.
- Exact byte-offset layout of the `RelayFetchModelsInput` struct for this specific 1.1.8 build
  (field order/sizes) — not independently re-mapped via `type_query`/`declare_type`; inferred only
  from continuity with the 1.1.1 leaf's later dim4 regrade.
- Whether `RequestBuilder::header()`'s second argument (the header *value*, as opposed to the name)
  for `"anthropic-version"` is a compile-time literal (`"2023-06-01"`) or derived at runtime from
  some other source — not independently traced back through the decompile this round.
- Windows-x64 equivalent behavior for this command in the 1.1.8 build — not decompiled this leaf
  (macos-arm64-label-only scope); `REVERSE-STATUS.md`'s windows-x64 version-delta owner-map sweep
  covers only symbol-presence-level enumeration for this session, not a full decompile of this
  specific command's Windows owner.
- dim6 (test/acceptance mapping) — explicitly out of reverse-engineering scope per this round's
  task instructions (C5-implementation-side activity).

## Delta vs 1.0.9 baseline (summary)

`fetch_relay_models_draft` is a **delta** command relative to the 1.0.9 macOS baseline
(`raw/aimami/1.0.9/macos/relay/fetch_relay_models_draft/README.md`), which documents a single code
path unconditionally sending both `x-api-key` and `Authorization: Bearer {key}` headers together,
with no retry loop and no explicit non-2xx status-code gate documented. This leaf's fresh 1.1.8
decompile confirms 4 concrete behavioral additions: (1) a `wireApi`-selected dual-client /
mutually-exclusive auth-header-style split (OpenAI bearer-only vs Anthropic x-api-key+
anthropic-version), (2) a bounded retry loop with a new `"all retries exhausted"` terminal error,
(3) an explicit HTTP status-code range check `[200,299]`, and (4) a separated `"decode failed"`
JSON-decode-error class distinct from the pre-existing "bad model-list shape" error. The 5 core
helper functions (`resolve_draft_api_key`, `sanitize_api_key`, `parse_extra_headers`, `build_url`,
`parse_model_ids`, `is_transient_error` — 6 total) remain structurally unchanged in role and
internal callee pattern across 1.0.9/1.1.1/1.1.8, per this round's fresh decompile of `build_url`
and `is_transient_error` and fresh `callees()` cross-check of the other four.
