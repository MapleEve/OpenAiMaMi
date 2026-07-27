# AiMaMi 1.2.3 macOS-arm64 -- Census Completeness Sweep (AUDITED)

Produced in two passes, both via `IDA Python` run directly on the IDA host (`<host>`, module `AiMaMi`), per `rust-reverse-pipeline`'s IDA_LIVE_GATE + SMB_ABSOLUTE_PATH rules, over the population NOT covered by `CENSUS-TRUE-DENOMINATOR.jsonl` (the prior 4160-item `'codexmate_lib' in name` filter).

- **Pass 1 (automated, server-side script `_census_sweep_script.py`)**: enumerated all 38851 functions in the binary, filtered to functions matching known framework namespaces/dispatch-hints and call-graph-adjacent to the already-covered population, then decompiled and applied a crude business-logic-vs-plumbing heuristic (SQL-keyword / HTTP-path / long-string-blob / any-callee-named-codexmate_lib). Raw pass-1 output: `CENSUS-COMPLETENESS-SWEEP.jsonl` (2460 lines), `CENSUS-COMPLETENESS-SWEEP.summary.json`.
- **Pass 2 (manual audit, this document)**: the pass-1 "any-callee-named-codexmate_lib" signal alone flagged **1466** functions as `app_logic_carrying=True` -- this number is **not reliable as-is** and this document explains why, then reports the **audited, verified** count instead. **Do not use the raw 1466 number without reading §2.**

## 1. Root cause (confirmed)

The task's cited example, `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}` @ 0x100180170 (13.6KB), was decompiled directly and confirmed: its own demangled+raw-decoded name never contains `codexmate_lib` (it is generic over the Tauri `Runtime` type only, not any App type), but its **body directly references a codexmate_lib-named symbol** (`drop_in_place<codexmate_lib::run::{{closure}}::{{closure}}::{{closure}}>`) and **embeds, as literal constant data baked in by the compiler from this App's own `tauri::generate_handler![...]` macro invocation**, a giant string blob concatenating dozens of this App's actual IPC command names (`load_quota_history`, `test_api_proxy_config`, `export_session_markdown`, `fix_codex_router_issue`, `set_codex_router_enabled`, `remove_accounts`, `import_skill`, `set_auto_switch`, `inject_voice_text`, `switch_account_and_restart_codex`, ...) plus this App's own OAuth callback endpoint (`127.0.0.1:1455/auth/callback`) plus per-command DTO argument-key-name extraction via `CommandArg::from_command`. **This confirms the original denominator=4160 name-substring filter is structurally incomplete**: Tauri's `generate_handler!`-produced command-dispatch closures are shared, non-app-namespaced generic instantiations that nonetheless carry this App's IPC surface as embedded data, and the original census never enumerated them because their own symbol name never contains the string `codexmate_lib`.

## 2. Why the raw pass-1 count (1466) is NOT the answer -- manual audit findings

Pass 1's `has_codexmate_callee` signal ("this function has at least one direct callee whose name contains `codexmate_lib`") fired on **1443** of the 1466 raw hits. Manually decompiling representative samples from every sub-bucket of that signal shows it is **dominated by false positives**: generic Rust-stdlib/tokio/serde functions that are monomorphized once per distinct App task/DTO type and whose *only* connection to `codexmate_lib` is a **tail-call to `drop_in_place<...>` of a captured App-typed value, or a plain delegate call into an App type's already-counted `Serialize`/`Deserialize` impl** -- with **zero App-specific decision logic of their own**. This is the exact same pattern `CENSUS-TRUE-DENOMINATOR.md` itself already correctly excludes for `drop_in_place` shims (`shim_with_real_body_elsewhere`); applying a looser rule here would silently reintroduce that inflation via a side door. Concretely verified via full Hex-Rays decompile of representative samples:

- `tokio::runtime::task::harness::Harness<T,S>::{drop_join_handle_slow,poll,complete,shutdown,try_read_output}`, `tokio::runtime::task::raw::{drop_abort_handle,dealloc}`, `tokio::runtime::task::core::Core<T,S>::{set_stage,poll}` -- **160/160/160/160/40/160/123/82/51 instances respectively** (monomorphized once per distinct spawned-task type, ~130-160 of them because that is roughly how many distinct async command/task closures the App spawns) are **100% generic tokio task-harness internals**; e.g. `drop_join_handle_slow` @ 0x100045330 decompiles to pure `State::transition_to_join_handle_dropped` / `Core::set_stage` / `Trailer::set_waker` / `State::ref_dec` calls with a **tail-call** to `drop_in_place<Box<Cell<...codexmate_lib...>>>` as its only reference to the App at all. **Not business logic.**
- `serde_core::ser::SerializeMap::serialize_entry` (108 instances), plus various `serde_json`/`serde_core`/`serde::private::de::content::*` generic (de)serializer internals (~70 more instances across `EnumDeserializer`, `ContentDeserializer`, `MapDeserializer`, `VecVisitor`, `visit_array[_ref]`, `collect_seq`, ...) -- these **call an App DTO type's own `Serialize`/`Deserialize` impl** (e.g. `AuthTokens::serialize`, `RelayWireApi::deserialize`, `TodaySummary::__FieldVisitor::visit_bytes`), all of which are **already counted** in the original 4160-item population under `codexmate_lib::core::*`. The generic serde glue itself decides nothing App-specific. **Not new content -- would double-count.**
- `_<T as tauri::ipc::IpcResponse>::body` (70 instances), `_<tokio::runtime::blocking::task::BlockingTask<T> as core::future::future::Future>::poll` (27 instances) -- same pattern, generic Tauri/tokio glue delegating to an already-counted App closure.
- Two tiny (36-byte) `serde_json::ser::Compound<W,F>::serialize_field` hits and two `hyper::server::conn::http1::UpgradeableConnection<I,S>::poll` hits were spot-decompiled and found to be **coincidental heuristic false-positives** (a shared rodata JSON-field-name table incidentally in the function's data-ref scan; and the literal English word "update" inside an unrelated ZIP-writer error string matching the crude SQL-keyword regex) -- confirms the pass-1 heuristic itself has real false-positive modes, not just the codexmate_callee signal.

**Conclusion: of the raw 1466, at most 32 are verified genuine new App-business-logic carriers (see §3). The remaining ~1434 are generic library monomorphization boilerplate already counted (via their callee) or never App-specific to begin with, and are explicitly excluded from the corrected denominator below.**

## 3. Confirmed genuine additions: 32 functions (2 families)

### 3a. `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}` -- command-dispatch bodies (21 addresses)

Each is a distinct arm of the App's Tauri command-dispatch state machine (the `generate_handler!`-expanded giant match), each carrying its own slice of the App's embedded command-name/DTO-argument-key data and `CommandArg::from_command` extraction logic for the commands routed through that arm (same pattern verified in depth for 0x100180170 in §1). Sizes range ~2.0KB-6.1KB.


| addr | size | on_disk |
|---|---:|:---:|

| 0x10012f740 | 3114 | False |
| 0x100133cd0 | 2980 | False |
| 0x1001370a0 | 4375 | False |
| 0x10013a9b0 | 4187 | False |
| 0x10013e6c0 | 5919 | False |
| 0x10014e320 | 396 | False |
| 0x100153e30 | 3136 | False |
| 0x10015c780 | 2450 | False |
| 0x1001650f0 | 4585 | False |
| 0x10018d110 | 5935 | False |
| 0x100193810 | 4694 | True |
| 0x100196550 | 4219 | False |
| 0x1001985f0 | 4219 | False |
| 0x1001a4be0 | 4219 | False |
| 0x1001a9190 | 6144 | False |
| 0x1001b2ec0 | 2051 | False |
| 0x1001b90f0 | 4868 | False |
| 0x1001be660 | 4555 | False |
| 0x1001c72c0 | 4316 | False |
| 0x1001c8740 | 5951 | False |
| 0x1001cd2d0 | 2360 | False |

### 3b. `_<F as axum::handler::Handler<(...),S>>::call::{{closure}}` -- relay proxy_server HTTP route handlers (11 addresses)

This App runs an embedded `axum` HTTP server for its OpenAI/Codex relay proxy (`codexmate_lib::core::relay::proxy_server::*`). Each of these 11 addresses is one route handler's async-closure body, decompile-verified to **directly call** real (non-drop) `proxy_server` functions -- `upstream_error_with_reason`, `forward_codex_responses_internal`, `forward_codex_router_images_internal`, and reference `ProxyContext` -- plus (for the largest, 0x100315950/0x100316be0, 3.7KB each) embed relay/streaming-specific strings (`proxy.upstream`, `codex_route`, `relay pass-through stream failed`, HTTP header names for the streaming path). Sizes range 103B-5.5KB (the 103B one, 0x100308070, is a small forwarding arm -- kept in because it is a genuine distinct handler entry, not a generic-library shim).


| addr | size | on_disk |
|---|---:|:---:|

| 0x100306350 | 3318 | False |
| 0x100308070 | 103 | False |
| 0x1003081d0 | 5544 | False |
| 0x10030c940 | 1987 | False |
| 0x10030d360 | 1987 | False |
| 0x1003110f0 | 3144 | False |
| 0x100312070 | 2634 | False |
| 0x100312da0 | 3144 | False |
| 0x100313d20 | 2634 | False |
| 0x100315950 | 3723 | False |
| 0x100316be0 | 3723 | False |

## 4. Explicitly flagged for follow-up (not folded into the confirmed count)

- **1 more axum handler closure**, 0x100933b10 -- adjacency-confirmed (direct callee in the already-covered population) but its own decompile was skipped because pass 1's hard decompile cap (2000) was reached before reaching it. Needs a follow-up targeted decompile + same business-logic judgment as §3b.
- **4 `_<axum::serve::WithGracefulShutdown<M,S,F> as core::future::into_future::IntoFuture>::into_future::{{closure}}` instances** (0x1000ceab0, 0x1000ced20, 0x1000cef90, 0x1000cf3f0; ~444-491 bytes each) -- these are the relay server's bootstrap/graceful-shutdown wiring closures. Pass 1 flagged them via the same `has_codexmate_callee` signal already shown unreliable in §2 (all 4 hits are **drop_in_place-only** adjacency, matching the debunked pattern, not a direct real call), so they are **not** counted as confirmed here -- but unlike the debunked tokio-harness/serde buckets, these are a **small, distinct, App-relay-specific family** (only 4 instances, not hundreds) and deserve a manual decompile check in a follow-up pass rather than blanket dismissal.
- **460 of the 2460 adjacency-confirmed candidates were never decompiled at all** (pass-1 `decompile_cap=2000` reached; `unresolved_adjacency_only=461` in the raw summary). These remain a genuine open gap in *this* sweep's coverage -- not resolved either way, not silently dropped.
- This sweep's candidate net (`FRAMEWORK_RE`) only covers `tauri`/`tauri_utils`/`tokio`/`axum`/`hyper`/`tower`/`serde`/`reqwest`/`rustls`/`h2`/`futures_util`/`futures_core` namespaces plus a short list of dispatch-shaped name hints. Other framework families (e.g. `keyring`, `objc2`/Cocoa glue, `windows-rs` -- not applicable on this macOS build but analogous native-interop crates -- `sqlx`/`rusqlite` if used, `zip`, `image`) were **not swept** in this pass and are an explicit, named remaining gap in the denominator's completeness, not folded into any number below.


## 5. Corrected true denominator

Original `CENSUS-TRUE-DENOMINATOR.md`: **true denominator = 3590** (`real_body_total=1840 + unknown_total=1750`).

This sweep, after manual audit removed the automated heuristic's false positives, adds **32** verified genuine App-business-logic-carrying functions (§3: 21 InvokeResolver dispatch bodies + 11 axum relay-handler closures) that were outside the original `codexmate_lib`-name population and are not duplicates of already-counted content.

**corrected true denominator = 3590 + 32 = 3622**

Of these 32 confirmed additions: **1 already on disk** (by address), **31 missing** (true additional gap, all unreversed as of this sweep).

This correction is **partial, not exhaustive** -- §4 lists concrete further-work items (1 capped decompile, 4 uncertain WithGracefulShutdown closures, 460 wholly unresolved adjacency candidates, and namespaces outside this pass's regex net) that could each add a further (currently unknown, possibly zero, possibly a handful) amount on top of 3622. **It is not claimed that 3622 is now complete.**

---

## 6. Remaining-sweep ("余量清扫") -- follow-up pass closing §4's four open items

Produced via `IDA Python` on the IDA host (`<host>`, module `AiMaMi`), script
`_sweep2_script.py` (writes `SWEEP2-A/B/C/D-*.jsonl` + `SWEEP2-summary.json` in this directory),
followed by manual Hex-Rays-snippet audit of every raw `True` hit (same audit discipline as §2/§3).
All counts below are grep/wc-verified against the on-disk JSONL files, not self-reported.

### 6a. Item 1 -- the 461 never-judged adjacency candidates (`unresolved_adjacency_only`)

All 461 addresses from §4's "460/461 never decompiled" bucket were decompiled this round (0 still
unknown). Raw heuristic: **6 raw `True`**, 455 `False`. Manual audit of all 6 raw-`True` hits:

- **4 confirmed genuine** (new business-logic carriers, all missing from disk):
  - `0x1008c8210` `futures_util::stream::unfold::Unfold::poll_next` -- monomorphized instantiation whose body is the inlined driver loop calling `codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::{feed_line,flush}` (real, non-drop functions).
  - `0x1008c9e00` same `Unfold::poll_next` pattern, instantiated for `AnthropicDirectToResponsesStream::{feed_line,flush}`.
  - `0x10092b8c0` `futures_core::stream::TryStream::try_poll_next`, instantiated for `OpenAiToAnthropicStream`/`AnthropicToOpenAiStream::{feed_line,flush}`.
  - `0x100933b10` `_<F as axum::handler::Handler<(...),S>>::call::{{closure}}` -- this **is** the exact function §4 named as "1 more axum handler closure ... skipped because pass 1's hard decompile cap (2000) was reached" -- now decompiled: direct callee `codexmate_lib::core::oauth_login::resolve_callback`, same confirmed family as the 11 relay-proxy handlers in §3b. **This closes §4 open item #2 (the capped axum handler) -- verdict: genuine, missing.**
- **2 reclassified to `False` on manual audit** (heuristic false positives, same class as §2's debunked patterns):
  - `0x1008b4be0` `reqwest::proxy::IntoProxy::into_proxy` -- flagged on "HTTP path present," but the matched string is literally the bare constant `"http://"` (a reqwest scheme-prefix literal), no App content.
  - `0x1011f3800` `tauri::app::Builder<Wry>::default` -- flagged on SQL+HTTP string hits that are both coincidental matches inside Tauri's own bundled default JS/copyright-header blob (`"Copyright 2019-2024 Tauri Programme..."`), not App data.

**Item 1 result: 4 genuine additions (461/461 fully judged, 0 remaining unknown).**

### 6b. Item 2 -- the 4 `WithGracefulShutdown::into_future` closures

All 4 (`0x1000ceab0`, `0x1000ced20`, `0x1000cef90`, `0x1000cf3f0`) fully decompiled + full-callee-list audited this round. **Verdict: all 4 confirmed `False`.** Every one of their `codexmate_lib` touches is a bare `drop_in_place<...run_login_flow::{{closure}}...>` or `drop_in_place<...proxy_server::start::{{closure}}...>` -- i.e. exactly the debunked "drop-only adjacency" pattern from §2, not a real call. §4's caution ("deserve a manual decompile check ... rather than blanket dismissal") is now resolved: they are generic axum graceful-shutdown wiring with zero independent App content.

**Item 2 result: 0 additions, resolved (was previously flagged uncertain, now definitively False).**

### 6c. Item 3 -- the capped axum handler `0x100933b10`

Same address as one of the 4 genuine hits in §6a (it was inside the 461-item unresolved-adjacency population). Confirmed genuine, missing from disk. **No separate/duplicate count -- already included in the 4 above.**

### 6d. Item 4 -- other framework namespaces (candidate-net expansion beyond `tauri/tokio/axum/hyper/tower/serde/reqwest/rustls/h2/futures`)

**Namespace discovery** (`_ns_discover_script.py`, full-binary histogram of every function *not* already covered, *not* `codexmate_lib`-named, and *not* matched by the original `FRAMEWORK_RE`): remaining unswept pool = **18941 functions across 3174 distinct crate-prefixes**. Top prefixes: `alloc` 2887, `core` 2810, `std` 2002, `regex_automata` 495, `http` 493, `hashbrown` 412, `aho_corasick` 288, `tokio` 283 (partial-regex gap -- original net only matched `tokio::{runtime::task,runtime::,sync,net}`, missed other `tokio::*` submodules), `tao` 279, `regex_syntax` 240, `toml_edit` 221, `ring` 219, `objc2_app_kit` 211, `muda` 201, `webpki` 157, `wry` 132, `png` 121, `infer` 102, `chrono` 101, `crossbeam_channel` 97, `rfd`/`zip` 93 each, `tokio_rustls` 90, `objc2_foundation` 88, `url` 84, `rustls_pki_types` 73, `rayon_core` 66, `tungstenite`/`tray_icon` 64 each, `memchr` 61, `rusqlite`/`objc2` 57 each, `objc2_web_kit` 55, `image` 51/`tar` 51/`plist` 51, `flate2` 47, `security_framework` 29, `dispatch2` 28, `keyring` 25, `global_hotkey` 22, `auto_launch` 15, `core_foundation` 15, plus a long tail (`gimli`, `addr2line`, `rustc_demangle`, `encoding_rs`, `log`, `smallvec`, `once_cell`, `indexmap`, `semver`, `anyhow`, `mime`, `httparse`, `winnow`, `brotli_decompressor`, `miniz_oxide`, `fdeflate`, `matchit`, `urlpattern`, `iri_string`, `minisign_verify`, `untrusted`, `data_encoding`, `cfb`, etc).

**Namespaces actually swept this round** (chosen by domain-relevance judgment -- native macOS UI/interop, credential/security, SQL/DB, archive/backup, hotkey/voice, autostart, native dialogs, plist/toml config, plus closing the internal `tokio`/`rustls` family gaps left by the original partial regex): `objc2`, `objc2_foundation`, `objc2_app_kit`, `objc2_web_kit`, `dispatch2`, `core_foundation`, `security_framework`, `tao`, `wry`, `muda`, `tray_icon`, `global_hotkey`, `keyring`, `rusqlite`, `auto_launch`, `rfd`, `zip`, `tar`, `cfb`, `plist`, `toml_edit`, `toml`, `infer`, `png`, `image`, `chrono`, `url`, `tungstenite`, `tokio_tungstenite`, full `tokio::*` (not just the 4 original submodules), `rustls_pki_types`, `hyper_rustls`, `tokio_rustls` -- **33 namespaces**, matching **10459 raw candidates**, of which **1475 are call-graph-adjacent** to the already-covered population (same adjacency filter as the original methodology). All 1475 decompiled.

Raw heuristic result: **15 raw `True`**, 1459 `False`, 1 `None` (genuine Hex-Rays decompile failure, see below). Manual audit of every one of the 15 raw-`True` hits (100% coverage, not a sample):

- **All 15 reclassified to `False`.** Breakdown by false-positive mechanism:
  - **5x `tokio::runtime::{park::CachedParkThread::block_on, scheduler::current_thread::Context::enter}`** (`0x1002fe640`, `0x100300bf0`, `0x1004b6960`, `0x1004b6b30`, `0x1004b6ce0`) -- each has a "strong" (non-drop) callee into a real `codexmate_lib` closure (aliyun_asr / relay manager / relay proxy_server), but decompile shows the function body is **100% generic tokio scheduling/context-entry mechanics** (thread-local borrow-check, `Core` state transition, TLS destructor registration) whose *sole* purpose is to mechanically drive/invoke whichever future or closure it's handed -- it embeds zero independent App-specific data or decision of its own. This is the **same debunked class as §2's `tokio::runtime::task::harness` family**, just a different submodule (`park`/`scheduler::current_thread::Context`) that the original `KNOWN_FALSE_POSITIVE_FAMILY_RE` didn't literally name. Generalizing the lesson: **any `tokio::runtime::*` scheduling-primitive wrapper is false-positive-prone via this route**, not just `task::harness`.
  - **6x coincidental English-word regex matches** on the crude `SQL_RE`/`HTTP_RE` heuristic, identical in kind to the "update" / literal-word false positive already documented in §2's closing paragraph:
    - `0x1003cc420`, `0x1003cc6e0` (`zip::read::ZipArchive::{by_index_with_optional_password,new}`), `0x1006b3b20`, `0x1006b5350` (`zip::write::ZipWriter::{start_file,finish}`) -- `SQL_RE` matched the plain English word "**update**" inside zip's own error strings (`"Attempted to update a nonexistent ZIP64 extra field"`, etc.) -- pure `zip`-crate library text, zero App content.
    - `0x1003ab030`, `0x1003c1e40` (`tokio_tungstenite::handshake::{MidHandshake,StartedHandshakeFuture}::poll`) -- same "update" coincidence inside tungstenite's own handshake-state error strings.
    - `0x100e3a6b0`, `0x100e3a7b0`, `0x100e3a880` (`chrono::offset::{Utc::now,Local::now,Local::offset_from_utc_datetime}`) -- `SQL_RE` matched "**select**" inside chrono's own timezone-database error string (`"...unable to select local time type..."`) -- pure `chrono`-crate library text, zero App content.
  - **2x generic bare-scheme-literal matches**: `0x1007504e0` (`tao::platform_impl::platform::event_loop::Proxy::send_event`) matched `"http://"` inside Tauri's own bundled IPC-bootstrap JS blob (`__TAURI_INTERNALS__.invoke`, generic across all Tauri apps); `0x1008b4be0` and `0x1011f3800` are covered in §6a (same mechanism, `reqwest`/`tauri` bare scheme literal and Tauri copyright-header text respectively -- `0x1011f3800` is counted once in §6a's tally, not duplicated here even though it also matched this round's broader chrono/tokio audit pass).

  (Note: only 14 distinct new-false-positive addresses are listed above since `0x1011f3800` was already accounted for in §6a; the 15th raw-True in Part D's own count is `0x1007504e0`, bringing this section's own tally to 15 as grep-verified.)

- **1 genuinely unresolved (`accepted_unknown`, not folded into any count)**: `0x100243430` `_<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt` (12132 bytes). Recovery attempt made: direct `IDA decompiler.decompile()` re-invocation via `IDA Python` on the IDA host returns Python `None` (a genuine Hex-Rays decompiler failure on this function, not a response-size/transport truncation -- confirmed by checking the raw return value, not just a truncated-text heuristic). This is chrono's own generic date/time formatting-spec state machine, has no adjacency signal beyond the regex/call-graph match, and is not App-named. `genuine_ceiling` criteria (ICF-identical + caller-context-unrecoverable) were **not** rigorously tested (no `caller_disambiguation_tried`); this is honestly reported as **still unjudged**, not claimed as a verified ceiling.

**Item 4 result: 0 confirmed genuine additions from the 33 swept namespaces' 1475 adjacent candidates.** 8984 of the 10459 raw namespace-matches were non-adjacent (no call-graph link to already-covered code) and correctly out-of-scope by the same adjacency-filter design used throughout this whole census. The other **~8482 functions** in the full unswept pool (`alloc`, `core`, `std`, `hashbrown`, `regex_automata`/`regex_syntax`/`aho_corasick`, `ring`/`webpki`/`untrusted`, `bytes`, `http`/`http_body_util`, `crossbeam_channel`/`crossbeam_epoch`, `mio`, `brotli_decompressor`/`flate2`/`miniz_oxide`/`fdeflate`, `winnow`, `gimli`/`addr2line`/`rustc_demangle`, `encoding_rs`, `mime`/`httparse`, `smallvec`/`once_cell`/`indexmap`/`semver`, `log`/`tracing_core`, `anyhow`, `data_encoding`/`minisign_verify`/`iri_string`/`matchit`/`urlpattern`, `rayon_core`, `memchr`, and the "(unparsed)"/single-letter buckets) were **NOT swept this round at all** -- excluded by a priori reasoning (pure Rust-stdlib/algorithmic/compression/crypto-library internals, same false-positive risk profile as the just-debunked `tokio::runtime::*` pattern whenever their only App touch would be a `drop_in_place`/mechanical-invoke tail call), but this exclusion was **not empirically decompile-verified** for this batch the way §2's tokio-harness/serde families were. **This is a named, honest remaining gap**, not folded into "swept" or "excluded-and-verified."

### 6e. Corrected true denominator (final, this pass)

§5's `corrected true denominator = 3622` (32 confirmed additions from the InvokeResolver/axum-relay-handler families) **+ 4** confirmed genuine additions from this remaining-sweep (§6a: 3 relay-translator-stream `Unfold`/`TryStream::poll_next` instantiations + 1 axum oauth-callback handler, all missing from disk) =

**final corrected true denominator = 3622 + 4 = 3626**

Of the 4: **0 already on disk, 4 missing** (`0x1008c8210`, `0x1008c9e00`, `0x10092b8c0`, `0x100933b10` -- all confirmed via grep against `SWEEP2-A-unresolved461.jsonl`'s `on_disk` field = `false`).

### 6f. What is still genuinely open after this pass

1. **1 function** (`0x100243430`, chrono `DelayedFormat::fmt`) -- decompile-failed, `accepted_unknown`, not rigorously ceiling-tested, negligible business-logic probability (pure chrono formatting internals) but technically unresolved.
2. **~8482 functions** across ~3140 crate-prefixes (`alloc`/`core`/`std`/`hashbrown`/`regex_*`/`ring`/`webpki`/`bytes`/`http`/compression/crypto/etc.) in the full namespace-discovery pool were **never candidate-matched or decompiled** by either this pass or the original sweep -- reasoned-excluded as low-probability pure-infrastructure by analogy to the now twice-debunked "generic-wrapper-with-drop/mechanical-invoke-only App touch" pattern (§2's tokio-harness/serde families, §6d's tokio::park/scheduler families), but **not empirically verified function-by-function**. If a future pass wants true exhaustiveness, this is the next candidate-net expansion target.
3. **8984 namespace-matched-but-non-adjacent functions** (of this round's 10459 raw matches in the 33 newly-swept namespaces) were correctly excluded by the adjacency filter (no call-graph link to already-covered App code) -- this is by-design scope, not a gap, consistent with the same filter used for the original 15750-candidate sweep.

**Honest summary: this pass fully closed all 4 of §4's named open items (461 unresolved / 4 WithGracefulShutdown / 1 capped handler / namespace-net expansion), found 4 more genuine functions (all missing from disk), and the true denominator moves from 3622 to 3626. It is explicitly not claimed that 3626 is exhaustive -- item 1 and item 2 above remain honestly open.**

