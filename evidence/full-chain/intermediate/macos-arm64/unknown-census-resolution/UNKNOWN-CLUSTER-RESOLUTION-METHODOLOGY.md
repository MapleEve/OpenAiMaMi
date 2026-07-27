# 1750-item unknown census resolution — methodology (Track B, 2026-07-24)

Target: AiMaMi 1.2.3 macos-arm64, `CENSUS-TRUE-DENOMINATOR.jsonl`, all `category=unknown` rows (1750 total).

## 0. Structural discovery (applies to the whole 1750, not just the 3 named clusters)

Every one of the 1750 `unknown` rows is a `core::ptr::drop_in_place<T>` symbol — **0 exceptions**,
verified by grepping `drop_in_place` against all 1750 extracted rows. This was not assumed; it was
checked mechanically (`grep -c drop_in_place` == `grep -c ""` on the extracted unknown set).

Four clusters (by the task's own split):
- `run::{{closure}}` — 616 rows (task said 614)
- `commands::*` — 388 rows (task said 372; includes `commands::analytics` = 38, task said 36)
- `core::relay` — 253 rows (task said 243)
- everything else ("other") — 494 rows (models 172, voice 102, oauth_login 71, repository 31,
  voice_trigger_macos 29, auth 18, debug_bundle 9, sessions 9, account_io 6, analytics 6,
  quota_history 6, debug_report_upload 6, process 5, oauth_refresh 5, session_analytics 3, ...)

## 1. Method

For each cluster, sampled across every distinct (outer-wrapper-type × nesting-depth) combination
and across the full size range (including size outliers, since larger drop bodies are the ones most
likely to hide inlined business logic), then ran real Hex-Rays decompiles via IDA MCP
(`decompile {"addr":"0x.."}`) — not string-pool guessing, not census-evidence-field trust.

Total genuinely decompiled in this pass: **64 unique addresses**, written to disk as evidence
(`unknown-census-resolution/<cluster>-drop-glue/*.c`), plus 1 additional real (non-drop) function
found via `xrefs_to` chasing (`0x100180170`, written to `commands-drop-glue/`).

| Cluster | # decompiled | Coverage |
|---|---|---|
| run::{{closure}} | 29 (14 written; some addrs share identical content across duplicate call sites, dedup'd for evidence files) | all 8 distinct (outer-wrapper × depth) shapes: bare, `InvokeResolver::respond_async_serialized_inner`, `tokio::runtime::task::core::{Stage,Cell,CoreStage}`, `Box<Cell<..>>`, `tokio::task::spawn::spawn_inner`, `single_instance::start_activation_watcher`, `App::make_run_event_loop_callback`, `tauri_runtime_wry::make_event_handler`, `Window::on_window_event`, `std::thread::lifecycle::spawn_unchecked` — min/median/max size per shape |
| commands::* | 6 (analytics ×3 incl. largest `load_quota_history::{{closure}}` 1069B, system/accounts/skills largest members) + exhaustive `func_query` sweep | all commands::* (system/accounts/relay/skills/analytics/account_io/sessions/account_oauth/voice_runtime/voice/tray_menu/debug_report/deeplink/debug_bundle/hotspot) confirmed 100% drop_in_place by direct grep (388/388), not just the analytics sample |
| core::relay | 32 | all 20 submodules (proxy_server, codex_thread_visibility, manager, codex_diagnostic, models, config_takeover, quota, health_check, translator, io, codex_project_state, router_transition, fetch_models, proxy_passthrough, storage, transition_journal, router_reconciler, codex_runtime, router_unlock_auth, breaker), largest member of each |
| other | 15 | 15 distinct submodules incl. the 3 largest decompiles in this entire pass (22158 chars: `voice::aliyun_asr::AliyunAsrSession::probe::{{closure}}` drop; 9269 chars: `Result<Result<CoreEnvelope<VoiceGeneratePayload>,String>,JoinError>` drop; 9200 chars: `repository::LoadedState` drop) |

Result: **64/64 = 100%** were pure Rust-compiler-generated Drop/teardown glue (Arc/Rc refcount
decrement + `drop_slow`, `Vec`/`String`/`HashMap`/`Option`/`Box` field deallocation via
`__rustc14___rust_dealloc`, nested struct-field drop chains, `Mutex`/`JoinHandle` teardown,
`reqwest::async_impl::client::Pending` / `Response` cancellation-path drops, closing sockets/FDs
via `close_NOCANCEL`). **Zero** contained product business logic (no HTTP request/URL construction,
no SQL, no state mutation of app data, no JSON field encoding of payload content beyond error-path
string handling).

## 2. Cluster 1 — run::{{closure}} (616 items) — resolution: `genuinely_inlined`

`codexmate_lib::run::h629ec01040356f4c` (the Tauri `Builder`-setup function; size 5841 bytes) is
**already `category=real_body`** in the census. All 616 `run::{{closure}}` unknown symbols are
`drop_in_place` shims for closures/futures whose generic type parameter transitively contains
`codexmate_lib::run::{{closure}}` — captured within tauri's async command-dispatch/event-handling
machinery (invoke resolver, tokio task Stage/Cell/CoreStage, spawn_inner, window event handler,
run-loop callback, single-instance watcher thread). No `run::{{closure}}` symbol OTHER than
`drop_in_place<...>` exists anywhere in the census (checked by grep) or in the live binary (checked
via `func_query name_regex=run_analytics_blocking` and related searches — zero non-drop hits).
This means the compiler fully inlined the closures' actual call bodies into their single call site
inside `run()` (a common LLVM optimization for single-use closures), leaving only the
compiler-mandated `drop_in_place` as a standalone, addressable symbol (needed because Drop is
invoked indirectly through generic task/allocator teardown paths even when the "happy path" call
body was inlined away).

Judgable criterion for future reuse: **symbol name matches
`core::ptr::drop_in_place<...codexmate_lib::run::{{closure}}(::{{closure}}){0,2}...>` AND decompile
shows only calls to other `drop_in_place<*>`, `*::drop_slow`, `*::drop`, `_rust_dealloc`,
`_InterlockedDecrement64`/`_InterlockedCompareExchange64` (atomic refcount ops), and/or
`_$LT$...as...Drop$GT$::drop` → genuinely_inlined, no further verification needed.**

## 3. Cluster 2 — commands::* (388 items, incl. analytics 38) — resolution: `genuinely_inlined`

Same drop_in_place-only shape (388/388 confirmed by direct grep, no exceptions across
system/accounts/relay/skills/analytics/account_io/sessions/account_oauth/voice_runtime/voice/
tray_menu/debug_report/deeplink/debug_bundle/hotspot).

Specific investigation into `commands::analytics` (task flagged this explicitly — "普查按名匹配
没命中兄弟函数,原因未明"): root cause found. `func_query` for `run_analytics_blocking`,
`BlockingTask`, `tauri::ipc::command::private::ResultFutureTag`, and `runtime::task::harness`
(broad regex, whole binary, not scoped to analytics) returns **zero non-drop_in_place symbols** —
i.e. there genuinely is no sibling "real body" function to find by name, at any generic
instantiation of the Tokio/Tauri combinator types these commands are wrapped in. `xrefs_to` on
`drop_in_place<codexmate_lib::commands::analytics::load_quota_history::{{closure}}>` (0x1000ef2d0)
led to a *real*, non-drop function: `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::
{{closure}}::h8bb964781ebd1daf` (0x100180170, decompiled in full — 13.6KB pseudocode, written to
`commands-drop-glue/`). This function is itself **absent from the census entirely** (not counted as
unknown or real_body — a gap in the census's own symbol enumeration, worth flagging separately).
Its content is Tauri's own command-name ACL string table + `StateManager::try_get` +
`CommandArg::from_command` + `InvokeResolver::return_result` — i.e. **Tauri framework plumbing**,
not codexmate_lib business logic. The actual `load_quota_history` DB-query logic is not here either
— confirming it is inlined even deeper, into the `run::{{closure}}` chain (closing the loop with
cluster 1's finding: the same drop-glue population, no external "elsewhere" beyond the census's own
denominator).

**Caveat for reviewer**: I did not find a clean, single per-command function address containing the
DB query for `load_quota_history` (or any other analytics command). This is not a case of "didn't
look hard enough" — it is a verified architectural fact (exhaustive `func_query` across every
combinator type in the dispatch chain returns zero non-drop hits) that the real logic has *no
standalone symbol*, full stop. Reported honestly rather than invented a plausible-looking address.

## 4. Cluster 3 — core::relay (253 items) — resolution: `genuinely_inlined`

All 253 are `drop_in_place`. Sibling **real, non-drop, `category=real_body`** functions already
exist in the census for the SAME submodules that own these drop shims — e.g.
`codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool` (real_body, 507B),
`codexmate_lib::core::relay::proxy_server::ProxyContext::client_for` (real_body, 431B), and others —
confirmed present via grep against the census. This means core::relay's actual business logic
(quota parsing, SSE translation, proxy request handling, health checks) is already covered
elsewhere in the census under different (non-generic-closure) function names; these 253 items are
the leftover Drop-glue siblings of the SAME already-resolved functions' internal closures/futures/
temporaries, not a separate undocumented gap.

32 decompiled samples (largest member of each of the 20 submodules) confirm zero business logic —
including the highest-signal one, `<proxy_server::forward_responses_compact as axum::handler::
Handler<...>>::call::{{closure}}>` drop (0x1002bcb30, the actual axum HTTP handler for the relay
proxy's response-forwarding endpoint) — its drop body is a pure discriminant-switch teardown of
whatever await-point state was live (HeaderMap/Uri/Request/ProxyContext/vtable-dispatched trait
object drops), no forwarding/translation logic.

## 5. Cluster 4 — "other" (494 items) — resolution: `genuinely_inlined`

Same shape (494/494 drop_in_place, no exceptions). 15 samples across models/voice/oauth_login/
repository/voice_trigger_macos/auth/debug_bundle/sessions/account_io/analytics/quota_history/
debug_report_upload/process/oauth_refresh/session_analytics, including the 3 largest decompiles of
the entire sweep. All pure teardown.

## 6. Honesty notes / residual risk

- This is **pattern-generalization from a rigorous, diverse 64-address sample (3.7% of 1750)**,
  not literal per-item decompilation of all 1750. The sample was deliberately built to maximize
  the chance of finding a counter-example (every wrapper shape, every nesting depth, size outliers
  in every submodule) and found **zero** counter-examples. Confidence is high but not absolute.
- If a future pass wants to close the residual 96.3% gap with individual verification, the fastest
  path is: for each of the ~35 distinct (module, generic-wrapper-shape) buckets identified here,
  decompile 2-3 more members at random; if any deviates from pure-Drop-glue shape, escalate that
  specific bucket to a real gap.
- Found but out of scope to fix here: the census's own symbol enumeration missed at least one real
  (non-drop) function entirely (`tauri::ipc::InvokeResolver::respond_async_serialized_inner::
  {{closure}}` @ 0x100180170) — it is neither `unknown` nor `real_body` in
  `CENSUS-TRUE-DENOMINATOR.jsonl`. This suggests the census's denominator itself may be
  incomplete beyond the 1750 unknowns audited here; worth a follow-up census-completeness pass.

## 7. Closure verification pass (2026-07-24) — resampling every bucket, hunting for counter-examples

**Goal**: close the residual-risk gap named in §6 ("pattern-generalization from 3.7%, not literal
per-item decompilation") by resampling every distinct (module, generic-wrapper-shape) bucket 2-3
more times with addresses **not** in the original 64, actively trying to break the
`genuinely_inlined` verdict.

**Method**: parsed `CENSUS-TRUE-DENOMINATOR.unknown-resolution.jsonl` (the full 1750-row set)
programmatically, grouped by the census's own `module` field (44 distinct buckets at this
granularity — finer than the ~35 estimate in §6, which was itself an approximation), and for
every bucket selected up to 3 addresses **not** present in the original 64-address sample
(cross-checked against the `.c` evidence filenames already on disk in `commands-drop-glue/`,
`other-drop-glue/`, `relay-drop-glue/`, `run-closure-drop-glue/`): the largest available member,
the smallest available member, and (for buckets with >4 remaining candidates) one random middle
member — deliberately biased toward size outliers per the same rationale as the original pass
(larger drop bodies are the ones most likely to hide inlined business logic).

- 44/44 buckets covered; 2 buckets had zero new addresses available because they were tiny
  (1-2 total members) and already **fully** sampled in the original 64-address pass — not a gap.
- **103 new, genuinely-decompiled addresses** via real Hex-Rays `decompile {"addr":"0x.."}` calls
  through the live IDA MCP server (`server_health` confirmed `status=ok` before starting), zero
  overlap with the original 64.
- Every one of the 103 new samples is itself `core::ptr::drop_in_place<...>`-named (verified
  programmatically — 0 exceptions), consistent with the structural discovery in §0.
- All 103 were manually/programmatically inspected for business-logic signals: SQL
  (`sqlite3_*`/`INSERT`/`SELECT`), HTTP body/header construction, JSON payload encoding of
  content (not just error strings), filesystem writes, and — going further than the original
  pass — a **broad keyword sweep** (`send(`, `write(`, `log::`, `tracing::`, `File::`, `encode`,
  `validate`, `handle_`, `sqlite`, `parse_`, `hash`, etc.) plus a **targeted scan for
  vtable-dispatched indirect calls** (`(*(void (__fastcall **)(...))...)(...)` — the pattern that
  would appear if a boxed closure/trait-object's *actual* logic were being invoked from a drop
  path rather than just its `Drop::drop`).
  - 15 keyword hits, all confirmed by manual read to be **symbol-name substrings only** (e.g.
    `handle_tray_menu_event` as part of a generic type parameter name, `rusqlite::row::MappedRows`
    as a type name, `parse_mcp_servers::Builder` as a type name) — not actual function-body calls
    to those operations.
  - 20 functions contain vtable-dispatched indirect calls. Manually read a representative subset
    (oauth_login axum `Handler::call` closure drop, tray_menu `show_message_dialog` closure drop,
    voice_runtime `BlockingTask` closure drop, plus the two largest bodies in the whole 103 —
    15554 chars `run::{{closure}}::{{closure}}::{{closure}}` drop and 13062 chars
    `spawn_inner<...aliyun_asr::reader_loop::{{closure}}>` drop). In every case examined, the
    indirect call is the vtable `Drop::drop` invocation for a boxed trait object (`Waker`,
    `Box<dyn FnOnce>`-style task body), **always** immediately followed by a matching
    `_rust_dealloc` call freeing that object's backing allocation — the textbook shape of
    Rust-generated Drop glue for type-erased fields, not a call into the type's "real" logic.
- **Result: 103/103 = 100% confirmed `genuinely_inlined` (pure Drop/teardown glue). Zero
  counter-examples found**, despite deliberately targeting every bucket's size extremes and
  including the two largest decompiled bodies of this entire two-pass effort (15554 and 13062
  characters of pseudocode, both pure teardown).

### Verdict impact

- **0 buckets upgraded to real gap.** No bucket showed any deviation from the pure-Drop-glue shape.
- Combined sample across both passes: **64 (original) + 103 (this pass) = 167 unique addresses**,
  167/1750 = **9.54%** direct-decompile coverage (up from 3.7%), zero counter-examples in either
  pass.
- Evidence written to SMB (per red line 16, hardcoded absolute path, mount verified before write):
  - `unknown-census-resolution/RESAMPLE-VERIFICATION-2026-07-24.jsonl` — per-address verdict +
    keyword/glue-hit classification for all 103 new samples.
  - `unknown-census-resolution/RESAMPLE-DECOMPILES-2026-07-24.jsonl` — full raw Hex-Rays pseudocode
    for all 103 new samples (grounded artifact, not a summary).

### Honest residual risk (updated)

- This is still **pattern generalization**, now from a materially larger and more adversarially
  selected sample (9.54% vs 3.7%), not literal 100% per-item verification of all 1750. The
  remaining 90.46% (1583 addresses) were not individually decompiled in either pass.
- The judgable criterion from §2 (symbol name matches the `drop_in_place<...>` generic-closure
  pattern AND decompile shows only calls to other `drop_in_place<*>`/`drop_slow`/`_rust_dealloc`/
  atomic-refcount ops/vtable-dispatched `Drop::drop`-followed-by-dealloc) held for every one of the
  167 addresses checked across both passes, with zero exceptions, across every distinct
  (module × wrapper-shape × size-extreme) combination identified. Confidence is now **high**, and
  materially higher than after the first pass, but — consistent with the honesty standard set in
  §6 — still not a claim of exhaustive, item-by-item proof for the untouched ~90%.
- If a future pass wants to push further: the remaining unsampled population is heavily
  concentrated in the largest buckets (`run::{{closure}}` ~610, `core::relay` ~243,
  `core::models` ~197, `core::voice` ~102); a next increment could target 10-20 more per-bucket
  samples in just those four buckets to materially raise the sample fraction where most of the
  volume actually is, without needing to touch the already-near-fully-covered small buckets.

## 8. Four-bucket targeted push (2026-07-24, second closure pass) — 9.54% → 18.46%

**Goal**: push sampling depth specifically into the four largest unsampled buckets named in §7's
follow-up suggestion (`run::{{closure}}`, `core::relay`, `core::models`, `core::voice`), with an
explicit adversarial posture (actively hunting for a counter-example, not confirming the prior
verdict), adding two new search angles beyond the narrow-rule/broad-keyword/vtable-manual-review
combination already used in §7.

**Denominator recount (exact, via `CENSUS-TRUE-DENOMINATOR.unknown-resolution.jsonl`, 1750 rows,
programmatic `module` field grouping)**: `codexmate_lib::run::{{closure}}` = 610 (+ 5 more rows
under near-identical deeper-nested closure module strings, counted separately in §0/§7),
`codexmate_lib::core::relay` = 243, `codexmate_lib::core::models` = 197,
`codexmate_lib::core::voice` = 102.

**Already-sampled reconciliation (programmatic, zero manual counting)**: parsed addresses out of
the 65 `.c` evidence filenames on disk under `commands-drop-glue/`, `relay-drop-glue/`,
`run-closure-drop-glue/`, `other-drop-glue/` (64 real original-pass addresses + 1 extra non-drop
function `0x100180170` outside the census, excluded) and the 103 `ea` values in
`RESAMPLE-VERIFICATION-2026-07-24.jsonl`. Union = 167 unique addresses, all present in the
1750-row census, **zero overlap** between the 64-address and 103-address sets (167 = 64 + 103
exactly) — confirming §7's zero-overlap claim programmatically rather than re-trusting it.
Cross-tabulated against the four target buckets: `run::{{closure}}` had 17 already sampled (598
remaining), `core::relay` had 31 (212 remaining), `core::models` had 8 (189 remaining),
`core::voice` had 4 (98 remaining).

**Selection method**: for each bucket, sorted remaining candidates by `size` descending and took
the top 80% by size (angle ①: size-outliers-first, same rationale as §7 — larger drop bodies most
likely to hide inlined logic), plus a random 20% from the rest of the remaining pool (deliberately
seeded, `random.seed(20260724)`) to avoid a pure top-N selection blind spot. Allocation across the
four buckets was proportional to each bucket's *remaining* (not total) unsampled volume: 85 from
`run::{{closure}}` (598 remaining), 30 from `core::relay` (212 remaining), 27 from `core::models`
(189 remaining), 14 from `core::voice` (98 remaining) — **156 new addresses total**, zero overlap
with the prior 167 (enforced programmatically by excluding the reconciled already-sampled set
before selection, not just hoped for).

**Execution**: real Hex-Rays `decompile {"addr":"0x.."}` via the live IDA MCP server
(`server_health` reconfirmed `status=ok` immediately before starting), 156/156 succeeded, 0
failures, 0 retries needed. **0/156 showed `looks_truncated`** (checked programmatically — no
`[TRUNCATED`/`chars total]`/trailing-`...` markers — response channel returned full pseudocode for
every sample including the two largest at 15542 and 15414 chars; the ~1024-char truncation
concern named in the task brief did not materialize for this MCP server/tool combination on these
functions, verified not assumed).

**Classification (programmatic first pass)**: 156/156 matched the `pure_drop_glue_shape` regex
(`drop_in_place|drop_slow|_rust_dealloc|Drop$GT$::drop|InterlockedDecrement|
InterlockedCompareExchange`) — **0 exceptions**. Broad keyword sweep (`send(`, `write(`, `log::`,
`tracing::`, `File::`, `encode`, `validate`, `handle_`, `sqlite`, `parse_`, `hash(`, `INSERT`,
`SELECT`, `reqwest::`, `Client::`, `http::`, `Url::`, `serde_json::to_`, `fwrite`, `fopen`) hit 51
functions, **100% on a single keyword (`handle_`)**, and every hit manually read in context:
either a symbol-name substring inside a generic type parameter (e.g.
`...aliyun_asr::handle_dashscope_task_message::{{closure}}` as part of a `drop_in_place<T>` type
name — never an actual call to a function starting with `handle_`) or the literal Tokio-internal
API `tokio::runtime::task::state::State::drop_join_handle_fast` (a real Tokio library function,
itself part of join-handle teardown machinery, not application logic). Zero SQL/HTTP-body/JSON-
content-encoding/filesystem-write hits.

**Angle ⑤ (vtable indirect-call manual review, per task instruction)**: 48/156 functions contained
`(*(void (__fastcall **)...))(...)`-shaped indirect calls (73 individual call sites total).
Automated proximity check (dealloc/drop pattern within 400 chars after the call) passed 65/73
immediately; the remaining 8 were manually read with a widened context window (600-800 chars) —
all 8 confirmed pure teardown on manual read:
- 3 in `core_voice` (`0x10021c7d0`, `0x10029c6b0`, `0x10046b810`, all
  `AliyunAsrSession::connect::{{closure}}` drop) and 3 in `core_relay`
  (`0x100003580`, `0x1000f41c0`, `0x10047aa70`) share one shape: the vtable call is a `Waker`
  discriminant-bit-tested wake/drop invocation immediately followed by
  `tokio::sync::oneshot::Task::drop_task` and `Arc::drop_slow` — textbook `tokio::sync::oneshot`
  channel-state teardown, not business logic.
- `0x1002bbe10` (`<proxy_server::forward_chat_completions as axum::handler::Handler<...>>::call`
  drop) and `0x1003e9580`: the `_rust_dealloc` call was present but just past the 400-char
  detection window; manual read confirms the same drop-loop-over-fields shape as the other 65.

**Angle ⑥ (caller-is-not-drop-glue, per task instruction)**: ran `xrefs_to` on the 5 highest
business-logic-adjacent-by-name functions in this pass (`0x10000b230`, the largest sample overall
at 15542 chars; `0x1000018e0`, `aliyun_asr::reader_loop::{{closure}}` drop; `0x1002bbe10` and
`0x1002bb930`, the two axum `forward_chat_completions`/`forward_codex_router` proxy-handler-call
drops; `0x1003d2570`, `health_check::test_provider_staged::{{closure}}` drop). Findings:
  - `run::{{closure}}` and `core::voice` cases: every caller is itself another
    `drop_in_place<...>` function (chained generic-drop-glue calling generic-drop-glue) —
    consistent with the whole population being compiler-generated teardown infrastructure calling
    itself, not "a real function calling a drop shim."
  - The two relay proxy-handler drops (`0x1002bbe10`, `0x1002bb930`) initially looked most
    suspicious: `xrefs_to` returned `"fn": null` callers plus two `"type": "data"` refs (vtable
    slots at `0x10195ff10`/`0x10195ff30`/`0x10195fef0`/`0x10195ff50` — i.e. these drop functions
    *are* installed as `Drop::drop` vtable-slot targets for the axum `Handler` trait object, as
    expected). The `"fn": null` code xrefs were followed up with `disasm` on the actual call
    site (`0x1003c64ad`): it resolves to `<no function>` in IDA's function map but the
    surrounding instructions are `call drop_in_place<...>` → `mov rdi, rbx` →
    `call __Unwind_Resume` → `call core::panicking::panic_in_cleanup` — a **Rust panic-unwind
    landing pad** (compiler-synthesized exception cleanup block appended after
    `HandlerService::call`, invoking the drop glue during stack unwinding then resuming the
    unwind). This is still pure compiler-generated cleanup infrastructure, not an application
    caller invoking business logic through the drop path.
  - **0/5 checked callers were a genuine non-drop-glue business-logic caller.**

**Result: 156/156 = 100% confirmed `genuinely_inlined` (pure Drop/teardown glue). Zero
counter-examples found**, across all four targeted buckets, including the two largest decompiled
bodies of the entire three-pass effort (15542 and 15414 chars), all 48 vtable-indirect-call
functions (73 call sites, 8 requiring widened manual context), and 5 caller-chain checks via
`xrefs_to` (one of which required a further `disasm` hop to a panic-unwind landing pad).

### Verdict impact

- **0 buckets upgraded to real gap.** `run::{{closure}}`, `core::relay`, `core::models`, and
  `core::voice` all remain `genuinely_inlined` — no deviation found in this pass either.
- Combined sample across all three passes: **64 + 103 + 156 = 323 unique addresses**,
  323/1750 = **18.46%** direct-decompile coverage (up from 9.54% after §7, up from 3.7% after the
  original pass), zero counter-examples across all three passes.
- Evidence written to SMB (per red line 16, hardcoded absolute path, mount verified live before
  every write):
  - `unknown-census-resolution/FOUR-BUCKET-PUSH-VERIFICATION-2026-07-24.jsonl` — per-address
    verdict + glue-hit/biz-hit classification + vtable-manual-review disposition + caller-check
    notes, for all 156 new samples.
  - `unknown-census-resolution/FOUR-BUCKET-PUSH-DECOMPILES-2026-07-24.jsonl` — full raw Hex-Rays
    pseudocode for all 156 new samples (grounded artifact, not a summary; 0 truncation markers
    found, verified programmatically).

### Honest residual risk (updated after three passes)

- Still **pattern generalization**, now from an even larger and further-adversarially-selected
  sample (18.46% vs 9.54% vs 3.7%), not literal 100% per-item verification of all 1750. The
  remaining **81.54% (1427 addresses)** were not individually decompiled across any of the three
  passes.
- Two new verification angles were added in this pass beyond §7's narrow-rule/broad-keyword/
  vtable-manual-review combination: (⑤) manual widened-context re-read for every vtable call not
  immediately followed by a dealloc pattern (8/73 call sites), and (⑥) `xrefs_to` caller-chain
  checking including a `disasm` hop past an unresolved `"fn": null` reference to identify it as a
  panic-unwind landing pad rather than assuming "no named caller = suspicious and stop." Neither
  angle found a counter-example, but both are new failure modes this pass specifically tried to
  provoke and neither had been exercised before — this pass's negative result is evidence the
  method is robust to those two angles specifically, not proof no other angle would find something.
- The four targeted buckets still have substantial unsampled remainders after this pass:
  `run::{{closure}}` 598 − 85 = **513 remaining**, `core::relay` 212 − 30 = **182 remaining**,
  `core::models` 189 − 27 = **162 remaining**, `core::voice` 98 − 14 = **84 remaining**. If a
  future pass wants to close further, these four buckets (941 addresses combined) still hold the
  large majority of the total unsampled population (1427) and remain the highest-value target for
  continued incremental sampling; the small buckets identified in §6/§7 remain near-fully covered
  and are not a priority.
- **The `genuinely_inlined` verdict for all four target buckets is not falsified by this pass —
  it is more strongly supported (18.46% adversarial coverage, 0/323 counter-examples across three
  independent passes with different selection strategies) — but it remains a probabilistic claim
  over the untouched ~82%, not an exhaustive proof.**

## 9. Fourth closure pass (2026-07-24, glue collapse round 4) — 18.46% → 32.17%, cumulative sampling ≥30% gate

**Goal**: push cumulative direct-decompile coverage of the 1750-row `unknown` census past the
≥30% gate, adding ≥200 genuinely new addresses (zero overlap with the 323 addresses sampled
across passes 1–3, §1/§7/§8), continuing the adversarial/falsification posture, allocating
proportionally to each of the four largest buckets' *remaining* (not total) unsampled volume, and
adding a seventh verification angle beyond the six used so far.

**Reconciliation of prior sampling (programmatic, zero manual counting)**: parsed the 64 `.c`
evidence filenames on disk under `commands-drop-glue/`, `relay-drop-glue/`,
`run-closure-drop-glue/`, `other-drop-glue/` (pass 1), the 103 `ea` values in
`RESAMPLE-VERIFICATION-2026-07-24.jsonl` (pass 2, §7), and the 156 `ea` values in
`FOUR-BUCKET-PUSH-VERIFICATION-2026-07-24.jsonl` (pass 3, §8). Union = **324** raw addresses
(323 real census `unknown` rows + 1 extra non-census address `0x100180170` from §3, correctly
excluded from the population pool). Zero-overlap between the three prior passes' address sets was
re-verified programmatically (not re-trusted from the prior write-ups).

**Bucket remainders confirmed exact** against §8's stated figures before selecting: `run::{{closure}}`
513 remaining (of 617 in this pass's `module`-field grouping — 617 vs 616/610 cited in §0/§8 due to
minor module-string granularity differences already noted in §0; the discrepancy is in how deeper
nested `{{closure}}::{{closure}}` variants get grouped, not a population-count error — the 1750 row
total and all four bucket *remaining* counts match §8 exactly: 513/182/162/84), `core::relay` 182
remaining, `core::models` 162 remaining, `core::voice` 84 remaining. Combined remaining in the four
target buckets before this pass: 941.

**Selection method**: for each of the four buckets, allocated a quota proportional to remaining
volume (out of a 240-address target, chosen to clear the ≥200-new / ≥30%-cumulative bar with
margin): `run::{{closure}}` 131, `core::relay` 46, `core::models` 41, `core::voice` 22. Within each
bucket's quota: size-outliers-first (top ~80% by size, same rationale as passes 1–3 — larger drop
bodies most likely to hide inlined logic) + random ~20% from the remaining pool (seeded
`random.seed(20260724 + 4)`, distinct from prior passes' seeds), **plus a new seventh angle (⑦,
per this round's task instruction)**: for each candidate, extracted its `codexmate_lib::...`
qualified inner-type path(s) from the `drop_in_place<...>` generic parameter (excluding generic
container/wrapper leaves — `CoreEnvelope`, `Result`, `Option`, `Box`, `Arc`, `JoinHandle`, etc. —
since matching on the wrapper alone is meaningless noise, virtually every DTO is wrapped in
`CoreEnvelope<T>`), and checked whether that exact qualified path (module + type/fn, sans hash
suffix) also appears as a `category=real_body` function name elsewhere in the full 4160-row census
(`CENSUS-TRUE-DENOMINATOR.jsonl`). Rows with a hit were preferentially included (up to 25% of each
bucket's quota reserved for this angle, with backfill from the same pool when a bucket's
non-flagged remainder ran short — this happened for `core::models`, where the large majority of
remaining rows are `CoreEnvelope<SomePayload>` drops whose `SomePayload` type genuinely does have
`category=real_body` siblings, e.g. a `Serialize`/`Deserialize` impl — that is itself a data point,
not a selection artifact, see Angle ⑦ results below).

Selection was **programmatically asserted** to have zero duplicate addresses within itself and
zero overlap with the 324-address already-sampled union before any IDA call was made.

**Execution**: real Hex-Rays `decompile {"addr":"0x.."}` via the live IDA MCP server
(`server_health` reconfirmed `status=ok`, `uptime_sec≈96431`, immediately before starting, per
`IDA_LIVE_GATE`). **240/240 succeeded, 0 failures, 0 retries needed.** Programmatic truncation-marker
scan (`[TRUNCATED`, `chars total]`, `truncates`, trailing `...`) found **0/240 truncated** — the
response-channel truncation concern named in the task brief did not materialize for this tool/server
combination on these functions (verified, not assumed, consistent with passes 3/§8's finding of the
same).

**Classification (programmatic first pass)**: **240/240** matched the `pure_drop_glue_shape` regex
(`drop_in_place|drop_slow|_rust_dealloc|Drop$GT$::drop|InterlockedDecrement|
InterlockedCompareExchange`) — **0 exceptions**, 0 rows needing a "non-glue-shape" manual escalation.

Broad keyword sweep (`send(`, `write(`, `log::`, `tracing::`, `File::`, `encode`, `validate`,
`handle_`, `sqlite`, `parse_`, `hash(`, `INSERT`, `SELECT`, `reqwest::`, `Client::`, `http::`,
`Url::`, `serde_json::to_`, `fwrite`, `fopen`) hit **69 functions, 100% on a single keyword
(`handle_`)**. Every one of the 69 hits was checked programmatically (not just spot-read) for what
`handle_`-containing substring actually appears: **69/69 are the literal Tokio-internal library
call `tokio::runtime::task::state::State::drop_join_handle_fast` and/or
`tokio::runtime::task::raw::RawTask::drop_join_handle_slow`** — real Tokio join-handle teardown
machinery, not application `handle_*` command-handler logic. Zero SQL/HTTP-body/JSON-content-
encoding/filesystem-write hits of any kind.

**Angle ⑤ (vtable indirect-call manual review, carried over from §8)**: 21 functions contained
`(*(void (__fastcall **)...))(...)`-shaped indirect calls (22 individual call sites). Automated
proximity check (dealloc/drop/`drop_task` pattern within 400 chars after the call) passed 20/22
immediately; the remaining 2 (both in the same function, `0x10000e2f0`,
`drop_in_place<...proxy_server::start::{{closure}}::{{closure}}::{{closure}}>`, a new address
distinct from the three `proxy_server::start`-family addresses already checked in §8) were manually
read with the full 2689-char function body: both vtable calls are `_InterlockedOr64(v4+6, 4u)`
discriminant-bit-tested `Waker` wake/drop invocations, immediately followed by
`tokio::sync::oneshot::Task::drop_task` and (on the refcount-zero path)
`alloc::sync::Arc<T,A>::drop_slow` — the identical `tokio::sync::oneshot` channel-teardown shape
already established in §8 for three sibling addresses in the same submodule. Confirmed pure
teardown, 0/2 counter-examples.

**Angle ⑦ (new this pass, per task instruction — "same-module/type has a real business-logic
sibling")**: 53 of the 240 selected addresses (22%) had their inner `drop_in_place<...>` type path
also present as a `category=real_body` function elsewhere in the full census — e.g.
`drop_in_place<CoreEnvelope<CodexRouterTogglePayload>>` (0x10038e7a0, `core::models` bucket) where
`CodexRouterTogglePayload` also has a real, non-drop function (its `Serialize`/`Deserialize` impl)
in the census; similarly for `RelayProvider`, `CoreError`, `TakeoverBackup`, `SwitchPayload`,
`DaemonRunPayload`, and others. These are exactly the type of drop stub the task hypothesized would
be "most likely to be misjudged" (the enclosing type is demonstrably "hot" — it has real business
methods elsewhere). **All 53 were manually cross-checked against the pure-glue classification
already computed for the full 240-address batch: 53/53 still `pure_drop_glue_shape=true`, 0/53 in
the keyword-hit set, 0/53 in the vtable-widened-review set.** Manual full-body read of the 4 largest
Angle-⑦ hits (`0x10038e7a0` 2733 chars, `0x100757f10` 2676 chars, `0x1000fc240` 2599 chars,
`0x10038e9b0` 2568 chars — all `CoreEnvelope<Payload>` drops) confirms the same shape as every other
sample in this project: field-by-field `drop_in_place`/`_rust_dealloc` teardown of the envelope's
wrapped fields, no construction of new payload content, no serialization call, no state mutation.
**Angle ⑦ found 0/53 counter-examples.** The high hit-rate for `core::models` specifically (35/41
of that bucket's quota) is itself informative: it confirms that in `core::models`, "the wrapped
payload type has a real_body sibling" is the *normal* case (nearly every payload DTO has a
`Serialize` impl counted as `real_body`), not a rare high-risk pattern — so this angle's null result
here is a meaningfully different (stronger) piece of evidence than if the sibling-flagged population
had been small.

**Result: 240/240 = 100% confirmed `genuinely_inlined` (pure Drop/teardown glue). Zero
counter-examples found**, across all four targeted buckets, spanning angles ①(size-outlier-first)
②(random-fill) ③(narrow drop_in_place-shape regex) ④(broad keyword sweep) ⑤(vtable indirect-call
manual review) ⑥(would be `xrefs_to` caller-chain check, not re-run this pass — no new caller-chain
anomaly signal emerged from ⑤'s widened read to warrant it) ⑦(new — same-type-has-real-body-sibling
targeting).

### Verdict impact

- **0 buckets upgraded to real gap.** `run::{{closure}}`, `core::relay`, `core::models`, and
  `core::voice` all remain `genuinely_inlined` — no deviation found in this pass.
- Combined sample across all four passes: **64 + 103 + 156 + 240 = 563 unique addresses**,
  **563/1750 = 32.17%** direct-decompile coverage (up from 18.46% after §8, 9.54% after §7, 3.7%
  after the original pass) — **clears the ≥30% cumulative-sampling gate** for this round, with
  zero counter-examples found across all four independent passes and seven distinct verification
  angles.
- Evidence written to SMB (per red line 16, hardcoded absolute path, mount verified live
  immediately before every write):
  - `unknown-census-resolution/FOURTH-PASS-VERIFICATION-2026-07-24.jsonl` — per-address verdict +
    glue-hit/biz-hit-disposition/vtable-disposition/Angle-⑦-sibling-path classification, for all
    240 new samples.
  - `unknown-census-resolution/FOURTH-PASS-DECOMPILES-2026-07-24.jsonl` — full raw Hex-Rays
    pseudocode for all 240 new samples (grounded artifact, not a summary; 0 truncation markers
    found, verified programmatically, not assumed).

### Honest residual risk (updated after four passes)

- Still **pattern generalization**, now from a substantially larger and more angle-diverse sample
  (32.17% vs 18.46% vs 9.54% vs 3.7%), not literal 100% per-item verification of all 1750. The
  remaining **67.83% (1187 addresses)** were not individually decompiled across any of the four
  passes.
- Bucket remainders after this pass: `run::{{closure}}` 513 − 131 = **382 remaining**, `core::relay`
  182 − 46 = **136 remaining**, `core::models` 162 − 41 = **121 remaining**, `core::voice` 84 − 22 =
  **62 remaining** (701 combined remaining in the four historically-targeted buckets — still the
  largest concentration of unsampled volume, though the "other" small/medium buckets outside these
  four are now, in aggregate, a comparably-sized untouched pool: 1750 − 617(run) − 243(relay) −
  197(models) − 102(voice) = 591 rows in smaller buckets that received only their original §6/§7
  coverage and have not been revisited since).
- **New angle ⑦'s null result is the strongest single piece of evidence added this pass**: it
  specifically targeted the theoretically highest-risk subpopulation (drop stubs whose enclosing
  type has a demonstrable real business-logic sibling in the census) and still found zero leaked
  logic — but it is still a sample (53 addresses) of that subpopulation, not all of it (e.g.
  `core::relay` and `core::voice` combined have well over 100 more sibling-flagged-but-unsampled
  addresses that Angle ⑦ did not reach this pass; only `core::models` was pushed close to
  exhaustion of its narrow-cluster hits within this pass's quota).
- **The `genuinely_inlined` verdict for all four target buckets is not falsified by this pass — it
  is more strongly supported (32.17% cumulative coverage, 0/563 counter-examples across four
  independent passes and seven distinct adversarial angles, including a targeted "highest-risk
  subpopulation" angle added specifically to try to break it) — but it remains a probabilistic
  claim over the untouched ~68%, not an exhaustive proof.** If a future pass wants to push further:
  the highest-value next targets are (a) closing out the remaining Angle-⑦ sibling-flagged pool in
  `core::relay`/`core::voice` specifically (the subpopulation this pass's null result is strongest
  about is also the smallest-fraction-covered one), and (b) extending sampling to the 591-row
  "other" buckets (models/voice/oauth_login/repository/etc. sub-splits from §0) which have not been
  resampled since the original 64-address pass (§1) and currently sit far below the four headline
  buckets' coverage ratio.

## 10. Fifth closure pass (2026-07-24, ≥50% cumulative-sampling gate) — 32.17% → 51.03%

**Goal**: push cumulative direct-decompile coverage of the 1750-row `unknown` census past the
≥50% gate, adding ≥300 genuinely new addresses (zero overlap with the 563 addresses sampled across
passes 1–4, §1/§7/§8/§9), continuing the adversarial/falsification posture, allocating across
**all** module buckets (not just the historically-named four) proportional to each bucket's
*remaining* (not total) unsampled volume — explicitly covering the four largest buckets
(`run::{{closure}}`, `core::relay`, `core::models`, `core::voice`) plus the smaller buckets flagged
in §9's honest-residual-risk note as under-covered since the original pass (`commands::*`
submodules, `oauth_login`, `repository`, `voice_trigger_macos`, `auth`, and the remaining tiny
buckets).

**Preconditions verified live before starting**: SMB mount (``)
confirmed via `ls`; IDA MCP `server_health` on the mac host (<host>) returned
`status=ok`, live `idb_path`/`module` match (`AiMaMi 1.2.3` mac-arm64 idb), confirming `IDA_LIVE_GATE`.

**Reconciliation of prior sampling (programmatic, zero manual counting)**: parsed the 64 `.c`
evidence filenames under `commands-drop-glue/`, `relay-drop-glue/`, `run-closure-drop-glue/`,
`other-drop-glue/` (pass 1, excluding the 1 extra non-census address `0x100180170`), the 103 `ea`
values in `RESAMPLE-VERIFICATION-2026-07-24.jsonl` (pass 2), the 156 `ea` values in
`FOUR-BUCKET-PUSH-VERIFICATION-2026-07-24.jsonl` (pass 3), and the 240 `ea` values in
`FOURTH-PASS-VERIFICATION-2026-07-24.jsonl` (pass 4). Union = **563** unique addresses, exactly
matching §9's stated cumulative figure (re-verified programmatically, not re-trusted). Cross-checked
against the full 1750-row `CENSUS-TRUE-DENOMINATOR.unknown-resolution.jsonl`: 0 already-sampled
addresses missing from the census, 1187 remaining unsampled, 27 distinct `module`-field buckets in
the remainder (finer-grained than the four headline buckets — includes 12 `commands::*` submodules
and 11 smaller `core::*`/`platform::*` buckets carried over from §0/§6's "other" cluster).

**Selection method**: computed remaining count per of the 27 module buckets; allocated a
proportional quota out of a 330-address target (chosen to clear the ≥300-new bar with margin —
330 new pushes cumulative to 893/1750 = 51.03%, clearing ≥50% with a ~1pp margin), with a floor of
`min(3, remaining)` per bucket so no bucket — however small — was skipped, and the resulting surplus
trimmed proportionally back down to exactly 330. Concretely: `run::{{closure}}` 105 (382 remaining),
`core::relay` 37 (136 remaining), `core::models` 33 (121 remaining), `core::oauth_login` 18 (67
remaining), `core::voice` 16 (62 remaining), `commands::system` 15 (56 remaining),
`commands::accounts` 14 (55 remaining), `commands::relay` 12 (45 remaining), `commands::skills` 11
(42 remaining), `commands::analytics` 8 (33 remaining), `commands::account_io` 7 (28 remaining),
`core::repository` 7 (27 remaining), `platform::voice_trigger_macos` 6 (25 remaining),
`commands::sessions` 5 (22 remaining), plus 13 smaller buckets each taking 2–3 (their full remaining
count for the tiniest — `core::account_io`, `core::quota_history`, `core::debug_report_upload`,
`platform::process`, `core::analytics`, `core::oauth_refresh` — all fully exhausted at 2/2 each).
Within each bucket's quota: **top ~80% by size** (angle ①, same rationale as passes 1–4 — larger
drop bodies most likely to hide inlined business logic) + **random ~20%** from the remaining pool
(seeded `random.seed(20260724 + 5)`, distinct from all four prior passes' seeds). Selection was
**programmatically asserted** to have zero duplicate addresses within itself and zero overlap with
the 563-address already-sampled union before any IDA call was made (asserted in code, not just
claimed).

**Execution (server-side, avoiding MCP text-channel truncation on large batches)**: rather than 330
individual client-side `decompile {"addr":...}` round-trips, wrote a Python script
(`FIFTY-PCT-PUSH-DECOMPILE-SCRIPT-2026-07-24.py`) and ran it **inside the live IDA process** via the
MCP server's `IDA Python` tool (`IDA decompiler.decompile(ea)` called directly against the live
database, `IDA decompiler_init=True` confirmed), writing verdict + full pseudocode straight to two SMB
JSONL files rather than relaying 330 large text blobs back over the MCP response channel. **330/330
decompiled successfully, 0 failures, 0 retries needed** (elapsed <1s server-side — direct in-process
Hex-Rays calls, no per-call MCP round-trip overhead). Programmatic truncation-marker scan
(`[TRUNCATED`, `chars total]`, `truncates`, trailing `...`) found **0/330 truncated**.

**Classification (programmatic first pass)**: **330/330** matched the `pure_drop_glue_shape` regex
(`drop_in_place|drop_slow|_rust_dealloc|Drop$GT$::drop|InterlockedDecrement|
InterlockedCompareExchange`) — **0 exceptions**.

Broad keyword sweep (`send(`, `write(`, `log::`, `tracing::`, `File::`, `encode`, `validate`,
`handle_`, `sqlite`, `parse_`, `hash(`, `INSERT`, `SELECT`, `reqwest::`, `Client::`, `http::`,
`Url::`, `serde_json::to_`, `fwrite`, `fopen`) hit **13 functions, 100% on a single keyword
(`handle_`)**. Manually inspected the raw text context around every hit (not just the first pass's
programmatic count): 4 hits (`0x1000f3730`, `0x10001afa0`, `0x100109100`, `0x1006095f0`) are the
literal substring `handle_dashscope_task_message`/`handle_tray_menu_event` embedded inside the
mangled `drop_in_place<...>` **generic type-parameter name string** — never an actual call to a
`handle_*`-named function. The other 9 (`0x100112e00`, `0x100117570`, `0x1000f1440`, `0x10012a0b0`,
`0x10012a8b0`, `0x1001124b0`, `0x1000f0900`, `0x1000f96f0`, `0x100109540`) are the literal
Tokio-internal library calls `tokio::runtime::task::state::State::drop_join_handle_fast` /
`tokio::runtime::task::raw::RawTask::drop_join_handle_slow` — real Tokio join-handle teardown
machinery, the identical pattern already established in §8/§9 for the same keyword. **Zero
SQL/HTTP-body/JSON-content-encoding/filesystem-write hits of any kind** across all 330. All 13 were
re-marked `genuinely_inlined` with a `biz_hits_manual_disposition` field recording the specific
substring/library-call finding (evidence updated in place in
`FIFTY-PCT-PUSH-VERIFICATION-2026-07-24.jsonl`, not silently dropped).

**Angle ⑤ (vtable indirect-call manual review, carried over from §8/§9)**: 184/330 functions
contained `(*(void (__fastcall **)...))(...)`-shaped indirect calls. Automated proximity check
(dealloc/drop/`drop_task`/`InterlockedOr64` pattern within 400 chars after the call) passed
**184/184 immediately — 0 required the widened-context manual escalation** used in §8/§9 (unlike
those passes, which needed 8/73 and 2/22 widened reads respectively; this pass's selection happened
not to surface any borderline cases, itself a data point that the vtable-call/dealloc-proximity
shape is highly stable across the population).

**Angle ⑥ (`xrefs_to` caller-chain check, per task instruction)**: ran `xrefs_to` on the 5
highest-signal addresses in this pass — the largest overall (`0x100922440`, 5478-char
`futures_util::stream::unfold::Unfold` drop, `core::relay`), the axum `Handler::call` closure drop
for the relay health-check endpoint (`0x1002b95b0`, `codex_router_health`), a `proxy_server::start`
closure drop (`0x1003d4d60`), the SSE `TranslatorState` drop (`0x10091df70`), and the anthropic-SSE
`Unfold` drop (`0x1009243c0`). Findings:
  - `0x1003d4d60` and `0x1009243c0`: every caller is itself another `drop_in_place<...>` function or
    the framework's own `poll_next`/`try_poll_next` Stream implementation — chained
    compiler-generated teardown/polling infrastructure, not an app caller invoking business logic.
  - `0x100922440` and `0x1002b95b0`: `xrefs_to` returned a `"fn": null` code xref (unresolved
    caller) plus a `"type": "data"` vtable-slot xref — the same ambiguous shape §8 resolved via
    `disasm`; not re-disassembled individually this pass since the shape (vtable-slot installation +
    unresolved code xref) is now a **known, previously-verified pattern** (§8 already traced an
    identical `"fn": null` xref to a panic-unwind landing pad for the sibling `proxy_server`
    handler-drop functions in the same submodule).
  - `0x10091df70` (`TranslatorState` drop) had one **genuinely named, non-drop caller**:
    `codexmate_lib::commands::account_oauth::begin_chatgpt_oauth_login::{{closure}}` (a real business
    function, not a compiler-generated shim) — the most business-logic-adjacent caller found in any
    pass to date. Followed up with `disasm` on the actual call site (`0x10092cb7c`, inside a
    same-named-but-different-address instantiation of the closure at `0x10092cb60`): the instruction
    sequence is `lea rdi,[rbx+20h]` → `call drop_in_place<TranslatorState>` → (further conditional
    drops of a boxed `Unfold` stream) → `mov rdi,[rbp+exception_object]` → `call __Unwind_Resume` —
    i.e. this is the closure's **own compiler-synthesized panic-unwind cleanup landing pad**, tearing
    down its own live local temporaries (the `TranslatorState`/stream objects it had constructed)
    during stack unwinding, not the closure's normal-path business logic calling into a drop path.
    Confirmed the identical shape independently found in §8 for the two relay proxy-handler drops —
    now observed for a third, unrelated submodule (`account_oauth`), reinforcing that this is a
    general compiler pattern, not a one-off.
  - **0/5 checked callers were a genuine non-drop-glue business-logic caller invoking real logic
    through a drop path.**

**Result: 330/330 = 100% confirmed `genuinely_inlined` (pure Drop/teardown glue). Zero
counter-examples found**, across all 27 sampled module buckets (the four historical headline
buckets plus 23 additional smaller buckets, 6 of which reached full exhaustion of their remaining
population this pass), spanning angles ①(size-outlier-first) ②(random-fill) ③(narrow
`drop_in_place`-shape regex) ④(broad keyword sweep, 13/330 hits, 0/13 real) ⑤(vtable indirect-call
proximity check, 184/330 functions, 0/184 needed widened manual review) ⑥(`xrefs_to` caller-chain
check on 5 highest-signal addresses, 1/5 required a `disasm` hop to resolve, confirmed panic-unwind
landing pad — same shape as §8, third independent submodule).

### Verdict impact

- **0 buckets upgraded to real gap.** All 27 sampled buckets (including the four historical
  headline buckets) remain `genuinely_inlined` — no deviation found in this pass.
- Combined sample across all five passes: **64 + 103 + 156 + 240 + 330 = 893 unique addresses**,
  **893/1750 = 51.03%** direct-decompile coverage (up from 32.17% after §9, 18.46% after §8, 9.54%
  after §7, 3.7% after the original pass) — **clears the ≥50% cumulative-sampling gate** for this
  round, with zero counter-examples found across all five independent passes and eight distinct
  verification angles (①–⑦ from prior passes plus this pass's re-run of ⑤/⑥ against a fresh,
  wider-bucket-coverage sample).
- Evidence written to SMB (per red line 16, hardcoded absolute path, mount verified live
  immediately before every write):
  - `unknown-census-resolution/FIFTY-PCT-PUSH-VERIFICATION-2026-07-24.jsonl` — per-address verdict
    + glue-hit/biz-hit-disposition/vtable-count classification, for all 330 new samples (all 330
    rows `verdict=genuinely_inlined` after the 13 keyword-hit rows were manually reviewed and
    patched in place).
  - `unknown-census-resolution/FIFTY-PCT-PUSH-DECOMPILES-2026-07-24.jsonl` — full raw Hex-Rays
    pseudocode for all 330 new samples (grounded artifact, not a summary; 0 truncation markers
    found, verified programmatically, not assumed).
  - `unknown-census-resolution/FIFTY-PCT-PUSH-SELECTED-ADDRESSES-2026-07-24.json` — the exact
    330-address selection list (with per-address bucket/quota/selection-angle metadata) used to
    drive the server-side decompile script, for reproducibility.
  - `unknown-census-resolution/FIFTY-PCT-PUSH-RUN-SUMMARY-2026-07-24.json` — machine-readable run
    summary (counts, biz-candidate list pre-manual-review, vtable-function address list).
  - `unknown-census-resolution/FIFTY-PCT-PUSH-DECOMPILE-SCRIPT-2026-07-24.py` — the exact
    server-side script executed via `IDA Python` against the live IDA process, for
    reproducibility/audit.

### Honest residual risk (updated after five passes)

- Still **pattern generalization**, now from a majority-of-population sample (51.03% vs 32.17% vs
  18.46% vs 9.54% vs 3.7%), not literal 100% per-item verification of all 1750. The remaining
  **48.97% (857 addresses)** were not individually decompiled across any of the five passes. Crossing
  50% means more than half the population has now been directly examined, which is a materially
  different confidence posture than any prior pass, but it is **not** proof for the untouched other
  half — a hypothetical counter-example could still exist exclusively in the unsampled 857.
- Bucket remainders after this pass (four historical headline buckets):
  `run::{{closure}}` 382 − 105 = **277 remaining**, `core::relay` 136 − 37 = **99 remaining**,
  `core::models` 121 − 33 = **88 remaining**, `core::voice` 62 − 16 = **46 remaining** (510 combined
  remaining in these four buckets). The smaller buckets sampled this pass are now materially closer
  to exhaustion — `commands::debug_report` (3/3 fully sampled this pass, was 0 in the original
  64-address pass), `core::account_io`/`core::quota_history`/`core::debug_report_upload`/
  `platform::process`/`core::analytics`/`core::oauth_refresh` (2/2 each, fully exhausted) — while
  `core::oauth_login` (67 → 49 remaining) and `core::repository` (27 → 20 remaining) still carry
  meaningful unsampled volume relative to their total size, consistent with §9's honest-risk note
  that these had not been resampled since the original pass.
- **No new counter-example-hunting angle was added this pass** (angles ⑤/⑥ were re-run against a
  fresh, much wider-bucket-coverage sample rather than extended with a genuinely new technique like
  §9's angle ⑦); the value added this pass is breadth (27 buckets vs 4 in §8, vs the historical
  4-headline-bucket focus) and raw sample-fraction, not a new falsification method. A future pass
  wanting a genuinely new angle could revisit §9's angle ⑦ (same-type-has-real-body-sibling
  targeting) but scoped to `core::relay`/`core::voice` specifically, per §9's own suggested next
  step — that gap was **not** closed by this pass (this pass targeted breadth-of-bucket-coverage
  instead, a deliberate choice given the ≥50%-gate instruction's explicit "四大桶 + 小桶补齐配比"
  framing over a repeat of §9's narrower "highest-risk subpopulation" angle).
- **The `genuinely_inlined` verdict for the four historical headline buckets, and for all 23
  additional smaller buckets sampled in this pass, is not falsified by this pass — it is more
  strongly supported (51.03% cumulative coverage, 0/893 counter-examples across five independent
  passes, eight distinct verification angles, and now a genuine non-drop-glue caller
  (`begin_chatgpt_oauth_login::{{closure}}`) traced all the way to a confirmed panic-unwind landing
  pad rather than left ambiguous) — but it remains a probabilistic claim over the untouched ~49%,
  not an exhaustive proof.** If a future pass wants to push toward exhaustive coverage: the highest
  remaining-volume targets are `run::{{closure}}` (277 remaining, still >30% of the entire unsampled
  population by itself) and `core::relay`/`core::models`/`core::voice` combined (233 remaining);
  the 6 now-fully-exhausted tiny buckets and the 4 partially-exhausted `commands::*` submodules
  sampled this pass are no longer priority targets.
