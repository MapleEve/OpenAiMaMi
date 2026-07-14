# Evidence — `get_codex_router_auth_readiness` (aimami 1.1.8, macos-arm64)

session: <审计会话> · machine: <本地机器>
owner_va: `0x1004c7050` · owner_symbol: `codexmate_lib::commands::relay::get_codex_router_auth_readiness::hbc73a173c4a6e170`
module: `commands::relay` (owner-map-118.jsonl line 28, source=func_query_clean_top_level_symbol)
分析工具就绪门
`module="AiMaMi"`, `idb_path` containing `AiMaMi 1.1.8 universal.app` — checked before any decompile call this round.

## Relative-to-1.0.9 change summary

This is a **brand-new command in 1.1.8**. It does not exist in the 1.0.9 baseline in any form:
`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt` line 3 lists
`get_codex_router_auth_readiness` as frontend-added; a targeted grep across the entire 1.0.9
raw + intermediate trees for `get_codex_router_auth_readiness`, `router_unlock_auth`,
`niuniu@woyao.pro`, and `router-unlock-auth-marker` returned **0 hits**. It also correlates with
this session's earlier mac thread-model survey finding of a new `single_instance` deep-link
activation flow and other new 1.1.8 relay/account surface (`intermediate/aimami/1.1.8/macos-arm64/_threadmodel/THREAD-MODEL.md`
line 139 explicitly lists `get_codex_router_auth_readiness` among the new 1.1.8 commands). Net
assessment: this is a wholly new "virtual auth readiness" probe backing a new relay
router-unlock-auth feature, not a rename/refactor of any 1.0.9 command.

## Confirmed

1. Owner is a live, dispatcher-wired IPC endpoint: `xrefs_to(0x1004c7050)` returns exactly one
   code xref, from `codexmate_lib::run::{{closure}}::{{closure}}@0x100308680` (call site
   `0x100308793`) — the standard Tauri command-dispatch closure pattern also seen for sibling
   commands in this same module (e.g. `diagnose_codex_router`). Not dead code.
2. Frontend wrapper `getCodexRouterAuthReadiness()` calls `St("get_codex_router_auth_readiness")`
   with `argKeys=[]` (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 117); the
   sole consumer is `assets/relay-page-CybVyflj.js` line 38 (`Pn`), which reads
   `g.data.willUseVirtualAuth` and `g.data.virtualEmail` from the resolved response
   (`frontend-control-flow.jsonl` line 192).
3. A hardcoded literal ASCII string `"niuniu@woyao.pro"` (exactly 16 bytes) is `qmemcpy`'d
   verbatim into a fresh 16-byte heap allocation inside `router_unlock_auth::readiness`
   (`0x100690ad7`) and flows directly, unmodified, into the owner's response struct at offsets
   `a1+72` (ptr) / `a1+80` (len=16) — this is the `virtualEmail` value returned to every caller
   of this command, unconditionally, regardless of any auth/marker state.
4. The owner's response always carries a fixed 3-tuple of literal strings/discriminant —
   `2` (top-level discriminant, `a1+0`), `"ok"` (2 bytes, `a1+8/+16`), `"Success"` (7 bytes,
   `a1+32/+40`) — built via two separate `__rust_alloc` + immediate-mov-constant writes
   (`0x1004c70d8`..`0x1004c70e9` for `"ok"`, `0x1004c70fd`..`0x1004c7112` for `"Success"`); no
   branch in the owner or any callee down to depth 4 ever produces an alternate/error value for
   these two strings — this command has no observable error-return path.
5. This command reads (never writes) two on-disk stores: the shared local auth-file
   (`core::auth::load_auth_file`, consumed only by `has_usable_real_oauth_login`) and a JSON
   marker file joined from a base directory as `"router-unlock-auth-marker.json"`, read
   independently by both `live_auth_state` and `can_restore_previous_auth`/`read_marker`, each
   time looking at/for the literal top-level key `"aimami_router_unlock_auth"`.
6. Call-tree depth reaches 5 distinct nodes via at least 3 independent branches, e.g.
   `owner -> readiness -> can_restore_previous_auth -> read_marker -> std::fs::read_to_string::inner`
   (terminated_reason=persistence_read) and `owner -> readiness -> has_usable_real_oauth_login ->
   token_remaining_seconds -> base64::engine::Engine::decode::inner` (terminated_reason=external_call);
   satisfies the depth>=5-OR-terminated-reason redline via both routes simultaneously.
7. `RelayManager::snapshot` (owner's second direct callee) clones the shared `RelayState` under
   a `std::sys::pal::unix::sync::mutex::Mutex` lock (with the standard std panic-poison-count
   double-check pattern), but the clone is `drop_in_place`'d immediately after a single boolean
   field is read out of it — no `RelayState` field is serialized into this command's own
   response; it only contributes 1 bit (byte1 of `v13`, folded into offset `a1+96`).

## Inferred

1. Packed 4-byte flag word at response offset `a1+104` maps, byte-for-byte, to: byte0 =
   `has_usable_real_oauth_login`, byte1 = `has_usable_real_oauth_login ^ 1` (candidate
   `willUseVirtualAuth`), byte2 = `(live_auth_state() == 1)`, byte3 =
   `can_restore_previous_auth` — inferred from the `_mm_insert_epi8` SIMD-pack call graph in
   `readiness()`, not independently confirmed via `type_query`/`declare_type` struct-layout
   introspection against the live 1.1.8 binary this round.
2. `willUseVirtualAuth` (frontend field name) is inferred to be byte1 of the packed flag word
   above (`!has_usable_real_oauth_login`) purely from bit-position + boolean-negation semantics
   matching the field's name; the exact serde struct/derive that produces the JSON key name
   `willUseVirtualAuth` was not located (no `type_query` pass run against the response struct).
3. The `"ok"`/`"Success"` literal pair (see Confirmed #4) is inferred to be either (a) an
   envelope/status pair emitted by a `serde_json::json!()`-style inline macro call in the
   owner's own body (most likely, given both are heap-allocated via `__rust_alloc` +
   byte-constant stores rather than referenced directly from rodata like `virtualEmail`'s
   source literal is in `readiness()`), or (b) an inline telemetry/log record — not
   distinguished between these two explanations this round.
4. The two independent `router-unlock-auth-marker.json` reads (in `live_auth_state` and in
   `can_restore_previous_auth`/`read_marker`) are inferred to read the **same** file (same
   base-dir fields at struct offsets `+32/+40` vs `+584/+592` on what are believed to be the
   same underlying app-state struct, passed by different reference chains) rather than two
   distinct marker files — inferred from identical literal path fragment
   `"router-unlock-auth-marker.json"` at both call sites, not from a byte-identical base-pointer
   comparison.
5. `token_remaining_seconds`'s ">=301 seconds remaining" freshness threshold is inferred to be a
   deliberate ~5-minute pre-expiry safety margin (a common OAuth-refresh convention), not
   independently confirmed against any project documentation/comment (binary is stripped of
   comments; inference from the literal constant `301` alone).

## Unknown

1. The exact serde field/struct name(s) that produce the `"ok"`/`"Success"` string pair in the
   final JSON response are unresolved — `accepted_unknown` is **not** claimed here (this is a
   plain absence-of-further-extraction record, not a decompile ceiling: the byte-exact values,
   their allocation sites, and their destination offsets in the response struct are all known;
   only the symbolic field/variant name is unresolved). `recovery_attempts`: (a) searched for a
   `#[derive(Serialize)]`-tagged struct definition near the owner via `func_query`/`find_regex`
   on nearby symbol names — no distinct named struct type recovered, function is monomorphized
   with inlined field writes; (b) considered but did not run `type_query`/`declare_type` against
   the live response pointer this round (would require constructing/attaching a synthetic type
   to `a1`, out of scope for a read-only decompile pass).
2. Absolute path of the "shared local auth-file" consumed by `load_auth_file` (via
   `has_usable_real_oauth_login`) was not resolved to a literal string this round — the path
   pointer/length are passed in via the caller's state struct (offsets `+32/+40`), not a literal
   visible in this leaf's call tree; would require tracing the state-struct's construction site
   (likely in `run()`/app-state bootstrap, out of scope for this per-command leaf).
3. Exact byte layout / field count of `codexmate_lib::core::relay::models::RelayState` (the type
   cloned by `RelayManager::snapshot`) was not mapped this round — `RelayState::clone`'s own
   callees (e.g. `Vec<T>::clone@0x10070f140`) were enumerated via `callees()` but not
   individually decompiled, since the cloned snapshot is dropped immediately in this command's
   own body and contributes only 1 boolean bit to the response (see Confirmed #7); full
   `RelayState` layout is out of scope for this leaf.
4. The literal fragment at `0x1012d11a6` (backup-marker path segment consumed by
   `can_restore_previous_auth`) was not individually extracted via `get_string`/`get_bytes` this
   round — only its xref/consumption site was observed via `decompile`; exact filename of the
   "backup marker" is Unknown.
5. Whether `has_usable_real_oauth_login`'s "apikey"-mode branch (the case-insensitive
   byte-compare chain against `a`,`p`,`i`,`k`,`e`) can ALSO short-circuit straight to `true`
   without reaching the JWT/`token_remaining_seconds` check was not fully resolved — the
   decompiled control flow suggests an "apikey"-mode-with-populated-refresh-token branch
   (`goto LABEL_30` at `0x10068ec1d`) that returns whatever `v6` currently holds, but the exact
   preceding value of `v6` on that specific path was not traced byte-for-byte this round.
6. Cross-platform status (windows-x64 equivalent) for this exact command was not (re-)checked by
   this leaf — a windows-side full decompile/diff for `get_codex_router_auth_readiness` remains
   open per REVERSE-STATUS.md's round-level scope note (windows-x64 backend deep decompile
   beyond the owner-map is tracked separately, not part of this mac-side leaf).

## Fake-wall / anti-cheat check

`genuine_ceiling=false`; `accepted_unknown` is not claimed anywhere in this leaf. Every function in
the call tree down to depth 4/5 was fully decompiled with a real Hex-Rays body (no
`drop_in_place`-only stub returned in place of business logic, no async `::poll` shim left
unexpanded, no oversized-body truncation encountered requiring `basic_blocks` chunking). All 6
Unknown items above are plain absence-of-further-extraction records with concrete
`recovery_attempts` noted, not decompile-ceiling excuses.

## Renames / IDB annotations (this session, not gate promotion)

No renames performed this leaf (mac IDB already carries clean demangled Rust symbol names for
every function touched — `has_usable_real_oauth_login`, `live_auth_state`,
`can_restore_previous_auth`, `read_marker`, `load_auth_file`, `token_remaining_seconds`, etc. — no
`sub_xxxxx` placeholder names encountered). Per task instructions, evidence comments were appended
at the owner instead of renaming; see `append_comments` call this session:
`"A/B-level owner for get_codex_router_auth_readiness; sha<n/a, no source access>; session
<审计会话>; not gate promotion"` at `0x1004c7050`.
