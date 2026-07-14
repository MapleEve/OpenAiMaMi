# Evidence — `set_codex_router_no_account_mode` (aimami 1.1.8, macos-arm64)

session: <审计会话> · machine: <本地机器>
owner_va: `0x1005c9090` · owner_symbol: `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::h9a7e2a1f189a607c`
module: `core::relay::manager::RelayManager` (owner-map-118.jsonl, `func_query_clean_top_level_symbol`)
分析工具就绪门
`module="AiMaMi"`, `idb_path` containing `AiMaMi 1.1.8 universal.app` — checked before any decompile call this round.

## Relative-to-1.0.9 change summary

This command is **confirmed new in 1.1.8, absent from 1.0.9**. Evidence: a recursive-grep sweep of
`raw/aimami/1.0.9/` for `set_codex_router_no_account_mode` / `NoAccountMode` / `no_account_mode` (both the
mac and windows-x64 1.0.9 subtrees, including `frontend/` dumps) returned zero hits; a second sweep of
`intermediate/aimami/1.0.9/` also returned zero hits; and a full-string search of the top-level
`INDEX.jsonl` for the exact command string returned zero prior entries (no other producer has already
claimed or completed this leaf, no collision). This lines up with the previous round's rejection note for
this exact item ("上一轮此条因缺上下文被拒") — the missing context was precisely this non-existence-in-1.0.9
confirmation plus the owner VA, which this round supplies.

1. **Confirmed — new sibling command alongside the pre-existing `set_codex_router_enabled`.** The two
   commands share almost the entire side-effect surface (same `stop_codex_for_file_edit`, same
   `router_unlock_auth::install_virtual_unlock_auth`/`cleanup`/`marker_exists` triad, same
   `RelayManager::persist`/`storage::save`, same `sync_codex_config_with_outcome` →
   `codex_catalog::write_catalog`/`remove_catalog` + `codex_writer::apply_codex_state`, same
   4-stage progress-closure protocol with 3 identical stage-name literals `"stopping_codex"`,
   `"preparing_auth"`, `"writing_config"`) but a **distinct top-level RelayState flag**: this owner reads/writes
   offset `+340`/`+341` of the snapshot buffer (a dedicated `no_account_mode` bit distinct from the plain
   `enabled` bit `set_codex_router_enabled` manipulates), and has its own dedicated
   `rollback_no_account_mode_change` compensating-transaction function (VA `0x1005c8b30`) — i.e. this is a
   **new, independently-toggleable mode**, not a renamed/aliased version of `set_codex_router_enabled`.
2. **Confirmed — reuses, not duplicates, the router_unlock_auth virtual-auth subsystem.** `install_virtual_unlock_auth`
   (`0x10068eeb0`), `cleanup` (`0x10068fab0`) and `marker_exists` (`0x100689b50`) are the **exact same VAs**
   already characterized by this session's sibling leaves (`set_codex_router_enabled`,
   `get_codex_router_auth_readiness`) — this command is a second, independent call path into the same
   virtual-auth-marker subsystem rather than a parallel reimplementation, meaning the marker file
   (`router-unlock-auth-marker.json`, owner-identity literal `"niuniu@woyao.pro"`) is now a **shared resource**
   toggled from at least two distinct Tauri commands.
3. **Confirmed — response payload shape parallels the sibling `set_codex_router_enabled` leaf.** Success
   response is built from `RelayManager::snapshot_sanitized` (0x158-byte sanitized RelayState memcpy) plus
   1 trailing echoed mode byte at offset+368 — same construction pattern as the sibling command's
   0x158-byte-blob-plus-1-byte response, confirming a shared response-shape convention across this
   module's mutation-style commands in 1.1.8 (both materially richer than any 1.0.9 small-struct
   equivalent would have been, though no 1.0.9 baseline exists for this specific command to diff against).
4. **Confirmed — progress-closure protocol identical mechanism to `set_codex_router_enabled`.** Same
   `Box<dyn Fn(&str)>`-shaped closure convention (data ptr `a5` + vtable ptr `a6`, call slot at
   vtable-offset `+40`), same 3 shared stage-name literals plus a 4th, command-specific stage
   `"launching_codex"` (15 bytes) fired from a dedicated closure
   (`set_codex_router_no_account_mode::{{closure}}`, VA `0x1005c9a60`) distinct from the sibling command's
   own closure — i.e. the two sibling commands do not share one closure instance, each has its own,
   despite sharing the underlying protocol/stage-name vocabulary.
5. **Inferred, not confirmed — `no_account_mode` semantics.** The literal Rust command name and the
   dedicated RelayState bit strongly suggest this toggles whether the relay operates without requiring a
   real upstream account/OAuth login (consistent with the `router_unlock_auth` "virtual unlock auth"
   marker subsystem existing specifically to let the local relay proxy operate against Codex CLI without a
   genuine account credential) — but the exact behavioral meaning of "no account mode" at the proxy/request
   layer itself (e.g. what routing/auth-injection behavior actually changes downstream) was not traced this
   round; only the command's own state-toggle/persistence/config-sync side effects were characterized.

## Confirmed

1. Owner is a live, dispatcher-wired IPC endpoint run on tokio's blocking-thread pool:
   `xrefs_to(0x1005c9090)` returns exactly one code xref, from
   `tokio::runtime::blocking::task::BlockingTask<T>::poll@0x1002b59e0` (call site `0x1002b5a83`) — same
   dispatch shape confirmed for the sibling `set_codex_router_enabled` command in this same session.
2. Frontend wrapper `setCodexRouterNoAccountMode(enabled, relaunch)` calls
   `St("set_codex_router_no_account_mode",{enabled:e,relaunch:t??!0})`, `argKeys=["enabled","relaunch"]`
   (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 119); the call site is
   `ln.setCodexRouterNoAccountMode(S,A)` inside a TanStack Query `mutationFn` at
   `assets/index-CX-I_QAq.js:254` (`frontend-control-flow.jsonl` lines 147 and 166) — genuinely invoked as
   a state-mutating operation, not a read-only query.
3. `a3` (Rust ABI int, mapped to `v64`) directly gates the top-level install-vs-cleanup branch:
   `if ((_BYTE)v64) { install_virtual_unlock_auth(...) } else { cleanup(...) }` — confirms `a3` is exactly
   the `enabled` boolean and confirms it is read exactly once at this single decision point.
4. `a4` (Rust ABI int, mapped to `v62`) is read exactly once, gating whether the
   `set_codex_router_no_account_mode::{{closure}}` progress-event + `launch_codex_app_warning` relaunch
   sequence runs (`if ((_BYTE)v62) {...} else { v59 = sentinel /* "done" */ }`) — confirms `a4` is exactly
   `relaunch` and confirms its only effect is on the post-config-write relaunch behavior.
5. `stop_codex_for_file_edit` (`0x1001c0ce0`) runs conditionally (only when the pre-transition snapshot
   shows the relay currently enabled, `v50[340]` truthy) with a hardcoded 5-second timeout
   (`stop_codex_for_file_edit(__dsta, 5, 0)`); internally: checks `is_process_running`, if running sends
   `request_codex_app_quit` (result dropped), polls up to 5s (50ms sleep intervals) re-checking
   `is_process_running`, then unconditionally calls `kill_codex_processes_until_clear` — graceful-first,
   force-kill-always, identical behavior to the sibling command's use of the same function.
6. `RelayManager::persist` (`0x1005cccf0`) composes fresh proxy-status fields onto the RelayState
   (overwriting 0x50 bytes via `compose_proxy_status`) then calls `core::relay::storage::save`
   (terminated_reason=`persistence_commit`); only on a confirmed `Ok` result (discriminant `10`) does it
   then replace the in-memory `RelayManager.state` field (self+32, under the module's std `Mutex`) —
   disk-write-then-cache-update ordering, never the reverse.
7. `install_virtual_unlock_auth` (`0x10068eeb0`) — reached when `a3`/enabled is truthy — resolves the
   codex-config directory (`CodexPaths::ensure_directories`), reads any existing marker
   (`router_unlock_auth::read_marker`), optionally backs up the prior file via `std::sys::fs::copy`, builds
   a JSON marker containing the **hardcoded literal identity string `"niuniu@woyao.pro"`** (16 bytes, copied
   verbatim at `0x10068f184`) plus a fixed 66-byte literal blob and the current timestamp
   (`build_unlock_auth_json` + `current_timestamp` + `serde_json::ser::to_vec_pretty`), then writes it via
   `atomic_write::write_atomic` (terminated_reason=`persistence_commit`).
8. `router_unlock_auth::marker_exists` (`0x100689b50`) — reached on the disable/cleanup-succeeded branch —
   joins the codex-config dir with the literal `"router-unlock-auth-marker.json"` and calls
   `std::sys::fs::metadata` to test existence (terminated_reason=`persistence_read`); if the marker file is
   still present after `cleanup` reported success, this owner constructs a specifically-named 111-byte
   error literal (`unk_1012CBA5A`) rather than a generic wrapped I/O error — a named business-rule
   consistency check, not a bare filesystem-error passthrough.
9. `RelayManager::sync_codex_config_with_outcome` (`0x1005c8130`) is called after `persist` succeeds and
   internally builds the active-provider-id set (`valid_codex_active_ids`, pure in-memory), then writes the
   actual codex CLI config via `codex_writer::apply_codex_state` plus the provider catalog via
   `codex_catalog::write_catalog`/`remove_catalog` (all terminated_reason=`persistence_commit`) — confirmed
   via this function's own `refs` list (same VAs as the sibling `set_codex_router_enabled` leaf's
   independent decompile of the same function).
10. `RelayManager::rollback_no_account_mode_change` (`0x1005c8b30`) is called from at least 2 distinct
    explicit call sites in the owner (`0x1005c96c9` after a `persist` failure, `0x1005c9742` after a
    post-success allocation failure on the launch-warning error path) plus the shared error-propagation
    `goto LABEL_51`/`LABEL_21` paths reached from install/cleanup/marker_exists failures — every failure
    point after the install/cleanup decision triggers rollback rather than a bare error return; rollback
    itself branches on its own bool arg to either re-run `cleanup` or re-run `install_virtual_unlock_auth`
    (a genuine bidirectional compensating action, confirming it can undo either direction of the toggle),
    then re-runs `RelayManager::persist` and `RelayManager::sync_codex_config_with_outcome` — a full
    best-effort compensating transaction across every side-effect category this command touches, not a
    simple in-memory revert.
11. Progress-event protocol: 4 exact-length-matched stage-name literals confirmed via explicit length
    arguments passed alongside each string at its allocation site — `"stopping_codex"` (14 bytes, tag
    1025 for the first emission specifically), `"preparing_auth"` (14 bytes), `"writing_config"` (14
    bytes), `"launching_codex"` (15 bytes) — emitted through a captured closure (`a5`=data ptr, `a6`=vtable
    ptr) invoked as `(*(fnptr@vtable_offset+40))(data_ptr, &str_arg)`, i.e. no `AppHandle`/Tauri-event-bus
    parameter anywhere in this owner's signature — same plain-callback-injection architecture as the
    sibling `set_codex_router_enabled` command (both post-date whatever 1.0.9 equivalent, if any, would
    have used an `AppHandle`).
12. `RelayManager::snapshot_sanitized` (`0x1005c1310`) → `storage::sanitize_for_export` (`0x1004b14b0`)
    builds the success response: clones every RelayState field via the type's own `Clone` impls (vecs,
    strings, the `CodexRouteDiagnostic` field), then **zeroes a fixed field at byte-offset 88 within every
    232-byte element of a nested array** (a per-entry loop, unrolled 8-wide by the compiler) before the
    struct is memcpy'd into the response buffer — a real field-redaction pass, not a passthrough, most
    plausibly zeroing a per-provider API-key/secret slot before the RelayState becomes part of an
    externally-visible IPC response.

## Inferred

1. The offset-88-within-232-byte-element field zeroed by `sanitize_for_export` is inferred (not
   independently confirmed via `type_query`/`declare_type`) to be a per-provider API-key/secret field,
   based on: (a) the function's own name (`sanitize_for_export`), (b) the fact that a materially similar
   pattern (loading, then redacting per-provider secrets before returning a snapshot to the frontend) is a
   standard pattern for this kind of relay-provider-list app, and (c) this same function VA
   (`0x1004b14b0`) being independently confirmed shared with `load_relay_state` and other commands in this
   session's parallel leaves for the identical purpose. Not confirmed via a live type-inspection call this
   round.
2. The captured progress-emit closure (`a5`/`a6`) is inferred to be a `Box<dyn Fn(&str) + Send +
   'static>`-shaped trait object (data pointer + vtable pointer, call slot at vtable offset `+40`) based on
   the observed calling convention, matching the sibling `set_codex_router_enabled` leaf's identical
   inference for the same closure shape — not independently confirmed via `type_query`/`declare_type`
   against the live 1.1.8 binary this round.
3. The exact serde field names of the success/error response structs (beyond the directly-observed
   byte-offsets/sizes: 0x158-byte sanitized-RelayState blob + 1 trailing mode-echo byte at offset+368) are
   inferred from structural parallels with the sibling `set_codex_router_enabled`/`get_codex_router_auth_readiness`
   leaves' responses, not resolved via `type_query`/`declare_type` this round.
4. "No account mode" is inferred to mean the relay/proxy layer operates without requiring the user to
   complete a genuine upstream OAuth/account login — based on the command name, the dedicated RelayState
   bit, and this command's exclusive reliance on the `router_unlock_auth` virtual-marker subsystem (whose
   own name and hardcoded owner-identity literal `"niuniu@woyao.pro"` strongly suggest a workaround/bypass
   for the normal account-login requirement) — but the actual request-routing/auth-header-injection
   behavior this flag controls at request time (as opposed to this command's own state-toggle/persist/config
   side effects) was not traced this round; that logic lives elsewhere in the relay dispatch path, out of
   this leaf's scope.
5. The two `atomic_write::write_atomic` call sites inside `router_unlock_auth::cleanup` (full-delete via
   `std::sys::fs::remove_file` vs partial-rewrite-with-field-stripped via `write_atomic`) are inferred, by
   analogy with the sibling `set_codex_router_enabled` leaf's own independent characterization of the same
   function, to correspond to a "no real OAuth login available yet, keep a stripped marker" vs "real OAuth
   login now usable, fully remove the marker" dichotomy — not independently re-derived from this round's
   own (partial, refs-only) read of `cleanup`'s 685-line body.

## Unknown

1. The exact `call_site` addresses for `router_unlock_auth::cleanup`'s two divergent branches
   (`std::sys::fs::remove_file` vs `atomic_write::write_atomic`) were not individually pinned down this
   round — `cleanup`'s decompiled body is 685 lines with 21+ SSA-renamed locals; its presence as a real
   callee of both target functions was confirmed via the function's own `refs` list (a live decompile of
   `0x10068fab0` was performed and returned a full non-stub Hex-Rays body), but the specific branch
   condition selecting between them was not walked line-by-line this round. Recorded as `call_site:
   "unresolved_in_captured_refs"` in the call-trees JSONL rather than fabricating an address.
   `recovery_attempts`: (a) read the first 60 lines of `cleanup`'s decompiled body directly (function
   signature + locals confirmed real, non-stub); (b) cross-referenced against the sibling
   `set_codex_router_enabled` leaf's own prior full characterization of the identical VA
   (`0x10068fab0`), which independently confirmed "3 distinct call sites for each [full-delete vs
   partial-rewrite]" — deprioritized re-deriving the exact addresses a second time this round given the
   sibling leaf already did so for the same function and the marginal value of a third independent
   derivation was judged low relative to this leaf's own scope (a single new command, not a `cleanup`
   re-audit). This is **not** an `accepted_unknown`/`genuine_ceiling` claim — `cleanup` returned a full,
   real, non-stub decompiled body when queried; only the exhaustive line-by-line branch-address walk was
   not repeated.
2. The exact meaning of the "no account mode" flag at the relay/proxy request-dispatch layer (i.e. what
   changes about how requests are routed/authenticated once the mode is on) was not traced — this leaf's
   scope is the `set_codex_router_no_account_mode` command's own state-toggle/persistence/config-sync side
   effects, not the downstream relay-dispatch code path that reads the resulting `no_account_mode` bit.
3. Exact byte offsets and struct-field names for the RelayState `no_account_mode`/`enabled` bits (observed
   only as byte offsets `+340`/`+341` within the ~0x158-byte snapshot buffer) were not resolved via
   `type_query`/`declare_type` against a named Rust struct type this round — only their read/write byte
   offsets were observed directly in the decompiled pseudocode.
4. Whether any windows-x64 equivalent of this 1.1.8 command exists/was already produced was not
   cross-checked this round beyond the INDEX.jsonl zero-hit sweep for the exact command string (which
   covers both platforms) — no windows-x64 decompile was attempted this round; this leaf's evidence
   (`ida_live_gate.module="AiMaMi"`) is mac-only.
5. Downstream frontend consumption of the success response (which specific UI fields read off the
   resolved mutation value, e.g. whether the frontend surfaces the echoed mode byte or the sanitized
   RelayState fields in a visible toggle/badge) was not traced past the `mutationFn` wrapper at
   `assets/index-CX-I_QAq.js:254` this round.
6. The exact contents of the 111-byte (`unk_1012CBA5A`) and 126-byte (`unk_1012CBAC9`) hardcoded error
   message literals were not extracted via `get_string`/`get_bytes` this round — only their reference
   addresses, lengths, and the branch conditions under which they are constructed were observed via the
   owner's decompiled pseudocode.

## Fake-wall / anti-cheat check

`genuine_ceiling=false`; `accepted_unknown` is **not** claimed anywhere in this leaf. All 12 functions
individually decompiled this round (owner + 11 callees: `RelayManager::persist`,
`RelayManager::rollback_no_account_mode_change`, `RelayManager::sync_codex_config_with_outcome`,
`router_unlock_auth::install_virtual_unlock_auth`, `router_unlock_auth::cleanup`,
`router_unlock_auth::marker_exists`, `platform::process::stop_codex_for_file_edit`,
`RelayManager::launch_codex_app_warning`, `RelayManager::snapshot_sanitized`,
`storage::sanitize_for_export`, the `set_codex_router_no_account_mode::{{closure}}` progress-callback)
returned a real, non-stub Hex-Rays body — no `drop_in_place`-only stub in place of business logic, no
async `::poll` shim left unexpanded, no oversized-body bail (the owner's own decompile, at 18787 bytes /
413 lines, completed cleanly with no truncation notice, unlike the sibling `set_codex_router_enabled`
leaf's 66667-char-capped owner). Call-tree redline (depth>=5 OR terminated_reason) is satisfied via the OR
clause on well over a dozen independent branches spanning `persistence_commit` (`std::sys::fs::copy`,
`atomic_write::write_atomic` x3 distinct call sites, `storage::save`, `codex_catalog::write_catalog`,
`codex_catalog::remove_catalog`, `codex_writer::apply_codex_state`), `persistence_read`
(`router_unlock_auth::read_marker`, `router_unlock_auth::marker_exists`'s `std::sys::fs::metadata` check),
`external_call` (`request_codex_app_quit`, `kill_codex_processes_until_clear`, the progress closure's
vtable dispatch, `platform::process::launch_codex_app`), `response_serialize`
(`storage::sanitize_for_export`), and `error_return` (`sync_codex_config_with_outcome`'s re-invocation
inside `rollback_no_account_mode_change`) — see `call-trees/set_codex_router_no_account_mode.jsonl` for the
full 32-edge, depth-0-to-2 enumeration.

## Renames / IDB annotations (this session, not gate promotion)

No renames performed this leaf (mac IDB already carries clean demangled Rust symbol names for every
function touched — `RelayManager::persist`, `RelayManager::rollback_no_account_mode_change`,
`RelayManager::sync_codex_config_with_outcome`, `router_unlock_auth::install_virtual_unlock_auth`,
`router_unlock_auth::cleanup`, `router_unlock_auth::marker_exists`, `stop_codex_for_file_edit`,
`launch_codex_app_warning`, `snapshot_sanitized`, `sanitize_for_export`, etc. — no `sub_xxxxx` placeholder
names encountered). Per task instructions, an evidence comment was appended at the owner instead of
renaming; see `append_comments` call this session: `"owner for set_codex_router_no_account_mode; session
<审计会话>; not gate promotion"` at `0x1005c9090`, followed by `保存分析库`.
