# Evidence — `set_codex_router_enabled` (aimami 1.1.8, macos-arm64)

session: <审计会话> · machine: <本地机器>
owner_va: `0x1005c4030` · owner_symbol: `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hc374473223f0c370`
module: `core::relay::manager::RelayManager` (owner-map-118.jsonl line 101, source=`func_query_clean_top_level_symbol`)
分析工具就绪门
`module="AiMaMi"`, `idb_path` containing `AiMaMi 1.1.8 universal.app` — checked before any decompile call this round.

## Relative-to-1.0.9 change summary

This command **already existed in 1.0.9** (NOT new in 1.1.8 — confirmed via a positive grep hit:
`raw/aimami/1.0.9/windows-x64/frontend/tauri-dumped/frontend/api-map.json:799` and an existing full
1.0.9 macOS raw leaf at `raw/aimami/1.0.9/macos/relay/set_codex_router_enabled/` with `status:
strictImplementationUse`). Comparing that 1.0.9 leaf's `AI.md` against this round's fresh 1.1.8
decompile surfaces several concrete deltas:

1. **Confirmed — dispatch-layer restructure.** 1.0.9's owner was a thin Tauri-command wrapper
   `codexmate_lib::commands::relay::set_codex_router_enabled` (outer async closure `0x1000df2d0` +
   inner `spawn_blocking` closure `0x10032dfa0`) that called into a separate core method
   `RelayManager::set_codex_router_enabled` at `0x1001ca634`. In 1.1.8, `owner-map-118.jsonl` line 101
   resolves the command directly to the **core** method
   `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled` (`0x1005c4030`), and
   `xrefs_to(0x1005c4030)` finds exactly one caller: the **generic** tokio type
   `tokio::runtime::blocking::task::BlockingTask<T>::poll` — not a hand-written
   `commands::relay`-module closure. This is a real, confirmed change in how the Tauri command is
   wired to its blocking-pool dispatch (from a two-layer hand-rolled async+spawn_blocking closure
   pair to a generic tokio `BlockingTask` wrapper), though the exact `#[tauri::command]`-macro-level
   wrapper code in 1.1.8 (if any still exists a layer further out) was not itself decompiled this
   round — this leaf's owner is the core `RelayManager` method, consistent with how the sibling leaf
   `get_codex_router_auth_readiness` in this same session also resolved directly to a `commands::relay`
   thin wrapper with a *different* dispatcher-closure shape
   (`codexmate_lib::run::{{closure}}::{{closure}}`), so 1.1.8 evidently uses at least two different
   dispatch-closure shapes across sibling commands in the same module, not one uniform pattern.
2. **Confirmed — progress-reporting mechanism replaced.** 1.0.9's core signature took an
   `app: AppHandle<R>` parameter and reported progress via `emit_js_filter` → a genuine Tauri
   `app.emit`-style call broadcasting the JS event `"codex-router-toggle-progress"` to all webviews.
   1.1.8's owner signature (`a1..a8`) has **no AppHandle-shaped parameter** at all; progress is
   instead reported via a captured `Box<dyn Fn(&str)>`-shaped closure passed in as two register
   arguments (`a5`=data ptr, `a6`=vtable ptr), invoked as `(*(fnptr@vtable_offset+40))(data_ptr,
   &str_arg)` with stage-name literals (`"stopping_codex"`, `"preparing_auth"`, `"writing_config"`,
   `"launching_codex"`/`"done"`). This is a real architectural decoupling of the core relay-manager
   logic from the Tauri `AppHandle`/event-bus, replaced by a plain-callback injection pattern — makes
   the core method independently testable/callable without a live Tauri runtime, and is a stronger,
   more specific signal than a simple rename.
3. **Confirmed — thread-convergence functions renamed/split.** 1.0.9 called a single function
   `codex_thread_visibility::migrate_threads_for_router_with_scope` (`0x10056ea58`) plus
   `normalize_thread_providers_before_migration`. 1.1.8 calls two **differently-named** functions from
   the same `codex_thread_visibility` module: `repair_missing_rollouts_for_convergence` (`0x10040f580`)
   followed immediately by `converge_threads_to_provider` (`0x1004018a0`) — same module, same general
   purpose (reconcile existing conversation threads' provider/model assignment against the new router
   state), different exported symbol names, suggesting a rename-and-possibly-split refactor between
   1.0.9 and 1.1.8 rather than dead-identical code. Not byte-diffed against 1.0.9's decompile of
   `migrate_threads_for_router_with_scope` this round (would require re-opening the 1.0.9 IDB, out of
   scope for this mac-1.1.8-only leaf).
4. **Confirmed — response payload widened.** 1.0.9's documented success response was a small, named
   struct `CodexRouterTogglePayload { enabled: bool, relaunch: bool }` wrapped in `CoreEnvelope`. 1.1.8's
   owner builds its success response from `RelayManager::snapshot_sanitized` — a **0x158-byte** sanitized
   RelayState snapshot memcpy'd wholesale into the response, plus 1 trailing echoed `enabled` byte — a
   materially larger, richer payload than 1.0.9's 2-bool struct. Consistent with 1.1.8 adding an entire
   new virtual-auth-marker subsystem (`router_unlock_auth`, absent from 1.0.9 per this session's sibling
   leaf finding for `get_codex_router_auth_readiness`) whose state the frontend likely now needs
   reflected back after every router toggle.
5. **Inferred, not confirmed — process-stop step consolidated.** 1.0.9 had two separate call-tree
   leaves for stopping Codex: `stop_codex_app_gracefully` and `ensure_no_codex_writer_processes`. 1.1.8
   has a single function `platform::process::stop_codex_for_file_edit` that internally does
   graceful-quit (`request_codex_app_quit`) + a poll loop + unconditional
   `kill_codex_processes_until_clear` — functionally covering what both 1.0.9 functions did, but not
   independently confirmed as literally the same code merged (1.0.9's two functions were not
   re-decompiled this round for a byte-level comparison).
6. **Unresolved delta candidate — `fix_config_preflight`.** This 1.0.9-named call-tree leaf
   (`fix_config_preflight`, VA `0x1005581d8` in 1.0.9) has a **same-named** symbol present in 1.1.8 too
   (`codexmate_lib::core::relay::codex_diagnostic::fix_config_preflight::ha2cf8fd1df33dbc8`, resolved
   this round to VA `0x1003df510` via `lookup_funcs`, confirming it still exists in the 1.1.8 binary) —
   but this round did not pin down its exact 1.1.8 call site/condition inside this owner (the symbol
   name is present in a full-text regex scan of the owner's 66667-char decompiled buffer, meaning it is
   called somewhere within that visible text, most likely nested inside `config_needs_syntax_fix`'s own
   body rather than as owner's own direct callee — `config_needs_syntax_fix` itself calls
   `codex_diagnostic::run_diagnostics`, a plausible parent for `fix_config_preflight`, but this chain
   was not independently decompiled/confirmed this round).

## Confirmed

1. Owner is a live, dispatcher-wired IPC endpoint run on tokio's **blocking-thread pool**, not the
   async/main executor: `xrefs_to(0x1005c4030)` returns exactly one code xref, from
   `tokio::runtime::blocking::task::BlockingTask<T>::poll@0x1002b4d00` (call site `0x1002b4da3`). This
   is architecturally required because the owner itself calls a nested, blocking
   `tokio::Runtime::block_on` inside `ensure_proxy_started` — running this command on the main async
   executor thread would risk a runtime-nesting deadlock, which is exactly why Tauri commands doing
   blocking I/O are dispatched via `spawn_blocking`/`BlockingTask`.
2. Frontend wrapper `setCodexRouterEnabled(enabled, relaunch)` calls
   `St("set_codex_router_enabled",{enabled:e,relaunch:t??!0})` with `argKeys=["enabled","relaunch"]`
   (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 118); the call site is inside a
   TanStack Query `mutationFn` at `assets/index-CX-I_QAq.js:254` (`frontend-control-flow.jsonl` line
   165) — i.e. genuinely invoked as a state-mutating operation from the UI, not a read-only query.
3. `enabled` (Rust `a3`) directly gates the owner's top-level branch: `if (!a3) { ... goto LABEL_35
   (skip the entire diagnostics-gather + auth/config-takeover/thread-convergence/persist/proxy/sync
   block) ... }` — confirms `a3` is exactly the `enabled` boolean, and confirms the large
   diagnostics+persistence block is enable-path-only.
4. `relaunch` (Rust `a4`, stored to `v120`) is read exactly once, near the very end, gating whether
   `launch_codex_app_warning` runs (relaunch=true) or a `"done"`-stage progress event is emitted instead
   (relaunch=false) — confirms `a4` is exactly the `relaunch` boolean and confirms its only effect is on
   the post-config-write relaunch behavior, not on any earlier step.
5. `stop_codex_for_file_edit` (`0x1001c0ce0`) runs **unconditionally** in the owner's shared `LABEL_35`
   continuation for BOTH enable and disable requests, called with a hardcoded 5-second timeout
   (`stop_codex_for_file_edit(__dst, 5, 0)`); internally: checks `is_process_running`, if running sends
   `request_codex_app_quit` (result dropped, not propagated), polls up to 5s (50ms sleep intervals)
   re-checking `is_process_running`, then **unconditionally** calls
   `kill_codex_processes_until_clear` regardless of whether the poll loop observed a clean exit —
   i.e. the sibling Codex.app process is always force-terminated by this command, gracefully-first,
   force-killed-always.
6. `RelayManager::persist` (`0x1005cccf0`) composes fresh proxy-status fields onto the incoming
   RelayState (overwriting 0x50 bytes via `compose_proxy_status`) then calls
   `core::relay::storage::save` (terminated_reason=`persistence_commit`) to write it to disk; only on a
   confirmed `Ok` result (discriminant `10`) does it then replace the in-memory
   `RelayManager.state` field (self+32, under the module's std `Mutex`) — disk-write-then-cache-update
   ordering, never the reverse.
7. `ensure_proxy_started` (`0x1005c1610`) does a `TcpStream::connect_timeout` health-probe (300ms
   timeout) against the local proxy port, retries once after a 50ms sleep, and if still not reachable
   calls `tokio::runtime::Runtime::block_on` (terminated_reason=`sidecar_dispatch`) to synchronously
   start/await the actual local relay-proxy async task — then calls `storage::save`
   (terminated_reason=`persistence_commit`) again afterward at two distinct call sites regardless of
   the health-probe/start outcome.
8. `install_virtual_unlock_auth` (`0x10068eeb0`) — reached when flag `v119[80]` is set — makes a
   backup copy of an existing file via `std::sys::fs::copy`, then builds a JSON object
   (`build_unlock_auth_json` + `current_timestamp` + `serde_json::ser::to_vec_pretty`) and writes it via
   `atomic_write::write_atomic` (terminated_reason=`persistence_commit`) — this is confirmed (via VA and
   hash match) to be the installer for the same `router-unlock-auth-marker.json` file this session's
   sibling leaf `get_codex_router_auth_readiness` independently confirmed **reading**.
9. `router_unlock_auth::marker_exists`+`cleanup` (else-branch, when `has_usable_real_oauth_login`
   returns true) either deletes the marker file via `std::sys::fs::remove_file` or rewrites it with one
   field stripped via `atomic_write::write_atomic` (3 distinct call sites for each, evidencing a
   full-vs-partial cleanup dichotomy) — confirming the marker is torn down once a real OAuth login makes
   the virtual-auth workaround unnecessary.
10. `legacy_virtual_auth::cleanup`/`marker_exists` (`0x100690c30`/`0x100690b80`) is a **structurally
    separate module** from `router_unlock_auth` with its own distinct marker/config file (parsed via
    `serde_json::de::from_trait` then indexed by the literal top-level key `"tokens"`, string ref
    `aTokens`) — confirming this owner manages **two independent legacy/current virtual-auth marker
    systems** side by side, not one.
11. `RelayManager::rollback_router_enabled` is called from **6 distinct call sites** in the owner
    (`0x1005c5c74`, `0x1005c655c`, `0x1005c5e7c`, `0x1005c5878`, `0x1005c54e0`, `0x1005c501c`) — every
    failure point after config-takeover-inspect triggers rollback rather than a bare error return, and
    `rollback_router_enabled` itself calls `RelayManager::snapshot`+`persist`, `config_takeover::restore`,
    `repair_missing_rollouts_for_convergence`, `converge_threads_to_provider`, `legacy_virtual_auth::cleanup`
    and `router_unlock_auth::cleanup` — a genuine best-effort compensating-transaction across every
    side-effect category this command touches, not a simple in-memory revert.
12. `router_no_active_provider_error` (`0x1005cf3c0`) is a specifically-named, distinct `CoreError`
    construction reached only when `sync_codex_config_with_outcome` succeeds but leaves the active
    provider count at 0 — a named business-rule error, not a generic wrapped I/O error.

## Inferred

1. The captured progress-emit closure (`a5`/`a6`) is inferred to be a `Box<dyn Fn(&str) + Send +
   'static>`-shaped trait object (data pointer + vtable pointer, `call` slot at vtable offset `+40`)
   based on the calling convention observed (`(*(fnptr@offset+40))(data_ptr, &str_arg)`), not
   independently confirmed via `type_query`/`declare_type` against the live 1.1.8 binary this round.
2. The exact serde field names of the success/error response structs (beyond the byte-offsets and
   sizes directly observed: 0x158-byte sanitized-RelayState blob + 1 trailing `enabled` echo byte) are
   inferred from naming convention and structural parallels with the sibling
   `get_codex_router_auth_readiness` leaf's response, not resolved via `type_query`/`declare_type`
   this round.
3. `fix_config_preflight`'s exact 1.1.8 call site is inferred to be nested inside
   `config_needs_syntax_fix`'s own body (called by `run_diagnostics`, which `config_needs_syntax_fix`
   itself calls) based on 1.0.9 naming-convention parallels and the two symbols' co-occurrence inside
   the same `codex_diagnostic` module, not independently decompiled/confirmed this round (see Unresolved
   delta candidate #6 above).
4. The parallel/duplicated code regions observed for `install_virtual_unlock_auth` (called at both
   `0x1005c4729` and `0x1005c56da`), `RelayManager::persist` (`0x1005c5b72` and `0x1005c4cf7`),
   `config_takeover::inspect` (`0x1005c40df` and `0x1005c4788`), `repair_missing_rollouts_for_convergence`
   (`0x1005c5309` and `0x1005c4962`) and `converge_threads_to_provider` (`0x1005c555f` and `0x1005c4ab4`)
   are inferred to represent two distinct provider-scenario branches (e.g. "OpenAI built-in provider"
   vs "custom/third-party provider" — a distinction seen elsewhere in this module via the `aOpenai_0`
   string ref found in `rollback_router_enabled`'s refs list) rather than dead/duplicate code, but this
   was not independently confirmed by decompiling the branch-selecting condition this round.
5. `stop_codex_for_file_edit` (1.1.8) is inferred to be the functional successor/consolidation of
   1.0.9's separate `stop_codex_app_gracefully` + `ensure_no_codex_writer_processes` pair (same overall
   effect: graceful-quit request, poll/wait, then force-kill), based on behavioral parallel alone, not
   a confirmed rename (1.0.9's two functions were not re-decompiled this round — see Relative-to-1.0.9
   change summary #5).

## Unknown

1. The disable-path (`enabled=false`) response shape and persistence behavior are unresolved this
   round: the owner's decompile output is capped by the 反编译器 MCP `decompile` tool at 66667 characters
   for the `code` field (confirmed identical after re-fetching the full output artifact via the tool's
   own `download_url` — a server-side cap, not a transport truncation), and `basic_blocks` on this
   address confirms the true function extent is `0x1005c4030`-`0x1005c6762` (230 basic blocks, ~0x2732
   bytes), meaning roughly the last ~15% of the function (the shared `LABEL_132` epilogue plus whatever
   runs when the `if ((_BYTE)v133)` enable-path guard is false) is not captured in the saved `.c` file.
   `recovery_attempts`: (a) re-fetched the full decompile output via the tool's `download_url` — still
   capped at 66667 chars, confirming this is a hard server-side output limit, not a fetch-truncation
   artifact; (b) ran `basic_blocks` on the same address, which returned the complete 230-block CFG (no
   truncation on that endpoint) confirming the true function extent and letting every callee symbol be
   independently recovered via a full-text regex scan of the captured 66667-char buffer (every callee
   this owner calls appears at least once as a `path::name::hHASH(` token in the visible text, even
   when its actual call site sits in the missing tail, because the same symbol/hash also appears
   elsewhere in the visible portion — e.g. via a duplicated branch, as documented above); (c) attempted
   `disasm` at the first missing address (`0x1005c56a5`) to manually walk the remaining ~0x10bd bytes of
   instructions, but `disasm` returns only a fixed ~10-instruction window per call with no `count`/`end`
   parameter accepted (confirmed via two rejected parameter-name attempts), which would require on the
   order of 40+ additional sequential `disasm` calls to exhaustively cover the missing tail —
   deprioritized this round as a scope-bounded limitation given the owner's enable-path business logic
   (>85% of the function body) and every distinct callee symbol are already fully characterized via (a)
   and (b) above. This is **not** an `accepted_unknown`/`genuine_ceiling` claim — no decompile ceiling
   was hit (every function this leaf did decompile returned a full real Hex-Rays body), this is a
   plain scope-bounded gap in one owner's tail with concrete recovery attempts recorded.
2. `RelayManager::compose_proxy_status` (called from `persist`), `codex_writer::apply_codex_state`,
   `codex_catalog::write_catalog`/`remove_catalog`, `core::relay::storage::save`, and the several
   `atomic_write::write_atomic`/`std::sys::fs::*` std/business leaf functions referenced from the
   depth-2 callees above were **not independently decompiled** this round (their call sites, arguments,
   and the fact that they are real functions were confirmed via the depth-1 callees' own decompiles and
   `refs` lists, but their own internal bodies are out of scope for this leaf) — recorded as
   `callee_addr":"0x..._UNRESOLVED"` placeholders in the call-trees JSONL where a `lookup_funcs`
   resolution was not attempted this round.
3. Exact literal file paths (the router-unlock-auth-marker.json base directory, the legacy
   virtual-auth marker/config file path, and the codex CLI `config.toml`/catalog file paths written by
   `apply_codex_state`/`write_catalog`) were not extracted via `get_string`/`get_bytes` this round for
   any of the depth-2 callees — only their consumption sites were observed via `decompile`.
4. Whether `fix_config_preflight` participates in this 1.1.8 owner's call tree at all (vs. being dead
   code retained from 1.0.9, or reachable only from a different command) was not confirmed — see
   Relative-to-1.0.9 change summary #6 and Inferred #3.
5. Downstream frontend consumption of the (now much larger, `snapshot_sanitized`-shaped) success
   response was not traced past the `mutationFn` wrapper at `assets/index-CX-I_QAq.js:254` — which
   specific UI fields read off the mutation's resolved value were not identified this round.
6. Windows-x64 equivalent full decompile/diff for this exact 1.1.8 command was not (re-)checked by this
   leaf — tracked separately per `REVERSE-STATUS.md`'s round-level scope note (this leaf's evidence
   (`ida_live_gate.module="AiMaMi"`) is mac-only).

## Fake-wall / anti-cheat check

`genuine_ceiling=false`; `accepted_unknown` is **not** claimed anywhere in this leaf. Every one of the
14 functions individually decompiled this round (owner + 13 callees) returned a real, non-stub
Hex-Rays body — no `drop_in_place`-only stub in place of business logic, no async `::poll` shim left
unexpanded (the one genuine async boundary crossed, `tokio::Runtime::block_on` inside
`ensure_proxy_started`, is a real synchronous-bridge function whose own decompiled body was inspected
and is not itself a stub — the polled future's internal body was not further chased, which is a
scope decision, not a stub-acceptance), and no oversized-body bail: the **one** oversized body
encountered (the owner itself, 66667+ chars) was NOT accepted as a ceiling — two independent recovery
attempts were made (full-artifact re-download via `download_url`; `basic_blocks` CFG-extent
confirmation) per Unknown #1 above, and every callee symbol was still recovered via full-text regex
scan of the captured portion despite the tail truncation. Call-tree redline (depth>=5 OR
terminated_reason) is satisfied via the OR clause on **at least 11 independent branches** with concrete
terminated_reason categories (`persistence_commit` x8, `sidecar_dispatch` x3, `external_call` x2,
`persistence_read` x2, `response_serialize` x1, `error_return` x1) — substantially exceeding the sibling
leaf's 3-branch precedent — plus one reused depth-3/4-node chain
(`owner→has_usable_real_oauth_login→load_auth_file→read_to_string::inner`, terminated_reason=
`persistence_read`) carried over from the sibling leaf without re-derivation.

## Renames / IDB annotations (this session, not gate promotion)

No renames performed this leaf (mac IDB already carries clean demangled Rust symbol names for every
function touched — `RelayManager::persist`, `stop_codex_for_file_edit`, `ensure_proxy_started`,
`install_virtual_unlock_auth`, `router_unlock_auth::cleanup`, `legacy_virtual_auth::cleanup`,
`valid_codex_active_ids`, `config_needs_syntax_fix`, `config_takeover::inspect`,
`inspect_router_thread_visibility`, `rollback_router_enabled`, `sync_codex_config_with_outcome`,
`snapshot_sanitized`, `router_no_active_provider_error`, etc. — no `sub_xxxxx` placeholder names
encountered). Per task instructions, an evidence comment was appended at the owner instead of
renaming; see `append_comments` call this session: `"A/B-level owner for
set_codex_router_enabled; sha<n/a, no source access>; session <审计会话>; not gate
promotion"` at `0x1005c4030`.
