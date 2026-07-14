// owner: tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h2b6447bb835e17f0
// VA: 0x1000e9f00 | size: 0xbac | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>
// role: async poll state machine / owner for fetch_relay_models_draft command
// binary: raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi
//
// FOUND VIA: 2-step string-literal xref chain (not name-based func_query — this generic
// tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}} symbol carries
// no command-specific name, matching the 1.1.1 precedent). (1) find_regex located the
// literal "fetch_relay_models_draft" inside a compiler-merged constant-string blob at
// 0x10125a1c0 (many unrelated command-name/header-name literals concatenated by the
// linker/compiler into one data blob — confirmed via get_bytes dump showing dozens of
// adjacent command names). (2) computed+verified (get_bytes) the exact sub-offset of the
// literal at 0x10125a3ac (24 bytes). (3) xrefs_to(0x10125a3ac) returned a SINGLE,
// unambiguous hit: call site 0x1000e9fc3 inside this owner (0x1000e9f00, size 0xbac) —
// matching the 1.1.1 leaf's own discovery method ("IPC registration blob, single xref
// from inside owner"). Cross-validated: owner size (0xbac=2988B) closely matches 1.1.1's
// owner size (0xb51=2897B) for the same command, and callees() immediately confirmed
// RelayManager::resolve_draft_api_key / quota::sanitize_api_key / quota::parse_extra_headers
// — the exact same 3 helper functions the 1.1.1 owner calls by name. Four candidate
// false-positive functions from a coarser (whole-blob) xrefs_to were explicitly excluded
// via callees()-based cross-check (2 were dispatcher closures for the unrelated
// export_relay_config/import_relay_config commands; 2 were near-empty
// respond_async_serialized_inner instances with only memcpy+from_command callees, i.e.
// some other much-simpler command reusing the same generic tauri wrapper name pattern).
//
// STRUCTURE: this is a single monolithic Rust async fn lowered by rustc into one big
// state-machine function (150+ locals, ~1400 decompiled lines) — the full raw HexRays
// text is 65180 chars and is not reproduced verbatim here (matches the 1.1.1 leaf's own
// convention of semantic phase reconstruction over full-body inclusion for this owner
// class). Phases below are reconstructed from callees()+decompile with cited VAs; two
// real, byte-verified code excerpts for the DELTA-bearing sections are embedded directly.
//
// PHASES (linear, single poll-to-completion structure — no `.await` suspension boundary
// crosses a Tauri scheduler yield in a way that splits this into multiple named poll
// functions; the *reqwest* Pending::poll() call is itself the one true async suspension
// point, called directly inline from this owner, same as 1.1.1):
//
//   Phase 0  (~L500-535): CommandArg::from_command (x2 impls) + StateManager::try_get —
//            argument extraction from the Tauri IPC message + RelayManager app-state handle
//   Phase 1  (~L536-541): RelayManager::resolve_draft_api_key (0x1005c2400) — unchanged vs
//            1.1.1 (mutex+memcmp provider-store lookup, keychain fallback; see evidence.md)
//   Phase 2  (~L569):     quota::sanitize_api_key (0x10059c670) — unchanged vs 1.1.1 (trim)
//   Phase 3  (~L571-581): quota::parse_extra_headers (0x10059c8b0) — unchanged vs 1.1.1
//            (serde_json parse extraHeaders string -> HeaderMap); early-return to the
//            error tail (LABEL_153) if parsing fails (__dst[0]==3 discriminant)
//   Phase 4  (~L605-635): *** DELTA vs 1.1.1/1.0.9 *** client-selection branch on a
//            single-byte input-struct flag (v29 = __src[8704]) — see excerpt A below.
//            Selects one of TWO lazily-initialized (OnceLock) reqwest::Client statics:
//            fetch_models::ASYNC_CLIENT (0x1015b1ea8) or
//            fetch_models::ASYNC_DIRECT_CLIENT (0x1015b1eb8)
//   Phase 5  (~L636-651): bounded retry-loop head — compares a per-attempt counter
//            (*(__src+2232) as u32) against a stored max (*(__src+2233)); on exceed,
//            builds a NEW (vs 1.1.1) literal error "all retries exhausted" (21B, qmemcpy
//            literal, confirmed) and jumps to the shared error tail
//   Phase 6  (~L906-1000 / ~L1146-1239): *** DELTA vs 1.1.1/1.0.9 *** build_url(base,"/v1/
//            models") -> into_url() -> RequestBuilder::new(). TWO mutually-exclusive auth-
//            header paths depending which client was selected in Phase 4 — see excerpt B.
//            Both paths still layer the parse_extra_headers-derived HeaderMap via
//            .headers() afterward, then RequestBuilder::send()
//   Phase 7  (~L1002-1030 / ~L1242-1268): reqwest::Pending::poll() — the one true async
//            suspension point. On network error: format "request failed: {err}" (compiler
//            embeds a location string "src/core/relay/health_check.rs" alongside this
//            format literal — see evidence.md for discussion)
//   Phase 8  (~L1279-1305): *** DELTA, likely new vs 1.1.1 *** explicit HTTP status-code
//            range check `(status - 200) >= 100` i.e. status NOT in [200,299] -> formats
//            an "unexpected status {code}" style error via anon format template
//            _anon.1f22c03b288e649fafb3d21192ed4cff.164 (not independently decoded this
//            round — recorded as a confirmed-present, content-Unknown format template)
//   Phase 9  (~L1308-1354): reqwest Response::json() (async, itself polls Response::bytes()
//            internally — both drop-glue symbols for .bytes() and the outer BoxBody are
//            present and exercised depending on which sub-state the nested poll reaches).
//            On JSON decode failure: "decode failed: {err}" (aDecodeFailed string symbol
//            confirmed at 0x101222d94; byte content not independently re-decoded this round)
//   Phase 10 (~L1360-1376): fetch_models::parse_model_ids (0x10059c4a0) — unchanged vs
//            1.1.1 (index "data" field of the decoded serde_json::Value, Vec::from_iter
//            model-id strings)
//   Phase 11 (~L1379-1399): on parse_model_ids failure, retry-eligibility check —
//            *(__src+2235)>=2 (a second, separate attempt counter) OR
//            !is_transient_error(err) -> treat as FINAL (goto error tail); otherwise loop
//            back to Phase 5 for another attempt (bounded retry, exact cap not
//            independently re-derived this round — see evidence.md Unknown section)
//   Phase 12 (tail, not excerpted): CoreEnvelope::ok(Vec<String>) on success /
//            CoreEnvelope::Err(String) on the accumulated error tuple ->
//            IpcResponse::body -> InvokeResolver::return_result
//
// --- Excerpt A: client-selection branch (byte-verified VAs, this round) ---------------
//   v28 = __src[8705]; v29 = __src[8704];               /*0x1000ea480 / 0x1000ea48f*/
//   ... (both bytes copied into the retained request-state struct for later reuse) ...
//   if ( !v29 ) {                                        /*0x1000ea6a7*/
//     if ( fetch_models::ASYNC_CLIENT::h99e34ac02d6c6de2 == 0 )      /*0x1000ea756*/
//       OnceLock<Client>::initialize(&ASYNC_CLIENT);                /*0x1000eaa4f*/
//     /* -> Phase 6 OpenAI-style branch (bearer_auth), see Excerpt B */
//   } else {
//     if ( fetch_models::ASYNC_DIRECT_CLIENT::h05cd651c6849f5ba == 0 ) /*0x1000ea6b7*/
//       OnceLock<Client>::initialize(&ASYNC_DIRECT_CLIENT);           /*0x1000eaa3e*/
//     /* -> Phase 6 Anthropic-style branch (x-api-key + anthropic-version), see Excerpt B */
//   }
//   /* v29 is a single byte read directly out of the deserialized command-input struct;
//      inferred to correspond to the frontend's `wireApi` field (confirmed present in the
//      RelayFetchModelsInput struct per the 1.1.1 leaf's later dim4 regrade,
//      gate-report.json: providerId/baseUrl/apiKey/wireApi/extraHeaders, 5 fields) — this
//      round did NOT independently re-map the input struct's byte offsets via
//      type_query/declare_type against the 1.1.8 binary, so the exact wireApi enum
//      discriminant-to-string mapping (which numeric value means "openai" vs
//      "anthropic") is inferred from the header-style match below, not literally read
//      from a discriminant table. */
//
// --- Excerpt B: mutually-exclusive auth-header construction (byte-verified) ------------
//   /* v29==0 branch (~L906-998): */
//   build_url(base_url, "/v1/models", 10);                          /*0x1000eaec8*/
//   IntoUrlSealed::into_url(&url);                                   /*0x1000eaedb*/
//   RequestBuilder::new(&builder);                                   /*0x1000eb1b8*/
//   RequestBuilder::bearer_auth(&builder2, &builder, api_key);       /*0x1000eb1d1*/
//   RequestBuilder::headers(&builder3, &builder2, extra_headers_map);/*0x1000eb34d*/
//   RequestBuilder::send(&builder3);                                 /*0x1000eb362*/
//
//   /* v29!=0 branch (~L1146-1239): */
//   build_url(base_url, "/v1/models", 10);                           /*0x1000eae66*/
//   IntoUrlSealed::into_url(&url);                                    /*0x1000eae79*/
//   RequestBuilder::new(&builder);                                    /*0x1000eb01b*/
//   RequestBuilder::header(&builder2, &builder, "x-api-key", api_key);       /*0x1000eb040*/
//   RequestBuilder::header(&builder3, &builder2, "anthropic-version", "2023-06-01"-region);/*0x1000eb06c*/
//   RequestBuilder::headers(&builder4, &builder3, extra_headers_map);        /*0x1000eb596*/
//   RequestBuilder::send(&builder4);                                         /*0x1000eb5ab*/
//   /* "x-api-key" literal byte-confirmed at 0x10125a4e7 (get_bytes: 78 2d 61 70 69 2d 6b
//      65 79); "anthropic-version" literal byte-confirmed at 0x10125a4f0 (get_bytes: 61 6e
//      74 68 72 6f 70 69 63 2d 76 65 72 73 69 6f 6e). Both confirmed via xrefs_to to be
//      referenced from THIS owner (0x1000e9f00), call site 0x1000eb020 falls inside this
//      function per the 反编译器 tool's own function attribution. The literal value passed
//      alongside "anthropic-version" was not independently byte-extracted this round but
//      the adjacent merged string-blob content (same find_regex dump) contains
//      "2023-06-01" immediately following "anthropic-version" — consistent with, but not
//      itself proof of, that being the paired header value (recorded as Inferred, not
//      independently confirmed via a direct get_bytes+xref on the value operand). */
//
// --- Excerpt C: bounded retry-loop terminal (byte-verified, NEW vs 1.1.1) --------------
//   v52 = *(__src+2232 as u32);                                       /*0x1000eada8*/
//   if ( v52 > *(__src+2233 as u32) ) {                                /*0x1000eadb4*/
//     buf = rust_alloc(21);
//     qmemcpy(buf, "all retries exhausted", 21);                      /*0x1000ebc59*/
//     /* -> error tail, CoreEnvelope::Err("all retries exhausted") */
//   }
//   /* the two counters (attempt-so-far @ +2232, max-attempts @ +2233) are read from
//      instance memory, not compile-time immediates -- exact configured cap not
//      independently re-derived this round (see evidence.md Unknown). A SECOND, separate
//      counter comparison later in the function (*(__src+2235) >= 2) gates whether a
//      parse_model_ids failure is retried at all; whether these two counters are the same
//      logical value or two independent limits was not fully disambiguated this round. */
