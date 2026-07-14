# has_notch -- windows-x64 1.1.8 deep gold-leaf evidence (round <审计会话>, command 11/20)

## Provenance
- binary: `raw/binary/AiMaMi 1.1.8 win64.exe` (PE32+ x86-64, fully symbol-stripped); IDB
  `<证据库> 1.1.8 win64.exe.i64`, imagebase `0x140000000`.
- 分析工具就绪门
  `module="AiMaMi 1.1.8 win64.exe"`, `idb_path` matches expected -- confirmed live before any decompile/rename call.
- owner-gate re-check before write: `find raw/aimami/1.1.8/windows-x64/*/has_notch/` prior to this write returned
  empty (no matches); `grep -c "aimami/1.1.8/windows-x64.*has_notch" INDEX.jsonl` prior to this write = 0 ->
  gate=ALLOW/first, no collision, no takeover token needed.
  `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 41 already recorded
  `owner_va=0x1403eca10, present=true` (angle-A discovery pass only, no full leaf bundle) -- this sub-entry
  supplies the first full raw pseudocode/call-tree/interface/evidence/gate-report package.

## Confirmed
- owner VA `0x1403eca10` resolved via `find_regex {"pattern":"has_notch"}` -> the `aHasNotch` string literal
  (`"has_notch"`, 9 bytes) at `0x14133b5c4` has exactly 1 `xrefs_to` hit, landing in this owner function --
  dispatcher-wired, live, non-dead code (caller = shared main dispatcher `sub_1403CF5B0`).
- owner function fully decompiled with no truncation: 863B, 32 basic blocks, cyclomatic_complexity=9, 11
  distinct callees, exactly 1 caller. Renamed in IDB to `has_notch_owner_sys`.
- the command-specific async body (`has_notch_async_body_sys`@`0x140848a50`, 916B/24BB/cc=2, exactly 1 caller
  = the owner) was fully decompiled with no truncation via the plain `decompile()` call (cross-checked against
  `analyze_function`'s char-capped preview field, which showed `decompile_truncated:124`/`136` artifacts that
  were confirmed to be a JSON-field-size cap on `analyze_function`'s own response, NOT a real HexRays failure --
  the plain `decompile()` call returned the complete, un-truncated function body for both owner and async body).
- 2 of the async body's own callees were independently confirmed as SHARED library-internal runtime helpers
  (not has_notch-specific), via direct caller-count enumeration from `analyze_function`'s own `callers` field
  (not string-pool heuristics): `tokio_coop_budget_check_sys`@`0x14007d500` has 49 distinct callers; the deeper
  `blocking_channel_park_wait_sys`@`0x14049f2a0` has 19 distinct callers; the alternate (span-disabled)
  branch's `invoke_resolver_respond_sys`@`0x1407a7610` (string evidence: `"resolver consumed"`) has 48 distinct
  callers including several already-frozen sibling owners (`sub_1403CF5B0`=graceful_restart_for_update,
  `sub_1403E2900`=get_usage_refresh_interval, `sub_1403E7050`=import_relay_config).
- call-tree depth>=5 satisfied via the primary (tracing-span-enabled) path: owner(1) -> async_body(2) ->
  tokio_coop_budget_check_sys(3) -> blocking_channel_park_wait_sys(4) -> `WakeByAddressSingle` Win32 API
  import(5), `terminated_reason=external_call`.
- owner wrapper size (863B) is byte-identical to the independently-recorded 1.1.1 windows baseline
  (`sub_140023000`, 863B, `namespace=app`, per this session's own earlier "win 分歧面确认" sub-entry in
  `REVERSE-STATUS.md`) -- strong evidence of zero behavioral delta for the dispatch wrapper across the
  1.1.1->1.1.8 window on windows-x64 for this command (VA churn only: binary reflow between builds).
- frontend `argKeys: []` confirmed via `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` --
  zero-argument command, response type `bool`.
- 5 renames + 1 `set_comments` written to the live win IDB this session (`rename` batch: `total=5, ok=5,
  failed=0`; `set_comments` on the owner returned `{"addr":"0x1403eca10"}` with no error).

## Inferred
- the 512B+16B heap allocations constructed inside `has_notch_async_body_sys`, together with the Waker/
  `RawWakerVTable`-shaped pointer at `off_14131D030` and the `tag=[1,boxed_ptr]` array passed into the
  channel-wait call, are inferred to represent a `tauri::async_runtime`-generated channel/task bridge
  (conceptually similar to a `tokio::sync::oneshot` receiver poll wrapped in a coop-budget check), based on
  structural resemblance to the same pattern documented for other commands in this codebase (e.g.
  `get_relay_provider_quota`'s `relay_quota_poll_phase0/1_sys` chain) -- this is a structural inference from
  shape/callee-sharing evidence, not a symbol-confirmed fact (binary is fully stripped, no generic/monomorphized
  Rust type names survive).
- the `Result<bool,Error>` niche encoding (`0x8000000000000000` sentinel for `Err`, low64=0/high64=1 for one
  observed `Ok(true)` branch) is inferred from the bit patterns written to the `a1` out-parameter, matching the
  standard Rust niche-optimization shape used elsewhere in this binary for `Result<bool,_>`/`Option<bool>`
  returns from IPC command wrappers.
- it is inferred (not confirmed) that the windows implementation of has_notch does not perform a live Win32
  monitor/display-geometry query, based on the total absence of any `GetSystemMetrics`/`EnumDisplayMonitors`/
  DXGI/registry call across the fully-decompiled 5-node call-tree -- this is an absence-of-evidence finding,
  which is meaningfully strong here because ALL 5 nodes were fully decompiled (no chunking bail, no truncation
  left unresolved), but it remains an inference rather than a positive confirmation of a hardcoded constant,
  since the exact producer-side closure that populates the channel's boolean payload was not itself located
  (it is dispatched through the async runtime's generic task scheduler in a way not visible as a direct static
  call from this wrapper).
- the "namespace=app" tracing-macro literal is inferred to correspond to a Rust module path such as
  `commands::app::has_notch` (mirroring the `commands::system::*` naming seen for sibling commands), though the
  binary's Rust module-path debug symbols are fully stripped so this cannot be confirmed via `func_query`.

## Unknown
- the exact producer/sender-side closure that computes and delivers the boolean payload into the channel
  consumed by `blocking_channel_park_wait_sys` was not located this round; it is dispatched via the async
  runtime's generic task-scheduling mechanism rather than a direct, staticaly-visible call from
  `has_notch_owner_sys`/`has_notch_async_body_sys`. Whether this closure performs a real Win32 hardware/display
  query or returns a compile-time constant remains open.
- no 1.0.9 windows-x64 baseline for `has_notch` could be located on disk this round (only the 1.1.1 baseline
  and this 1.1.8 leaf exist) -- the exact point at which the windows backend for this command was introduced
  (it clearly predates 1.1.1) is out of this round's scope.
- the exact semantics of the `tag==0` (non-fast-path) branch inside `blocking_channel_park_wait_sys` -- the full
  condvar-wait-with-timeout retry loop with waker-list traversal -- was decompiled in full but not exercised by
  has_notch's own call this round (has_notch's call always takes the `tag==1` immediate-park branch); its
  detailed semantics are recorded in `pseudocode/0004_blocking_channel_park_wait_sys_shared.c` for completeness
  but are Unknown-relevance to has_notch specifically.
- whether the macOS and windows implementations of has_notch produce behaviorally identical results for actual
  notched-vs-non-notched hardware is Unknown from this leaf alone (mac performs real `NSScreen` geometry
  detection per the separately-frozen `create_hotspot_window` entry; windows' true business-logic producer
  closure was not located as noted above).
- `dim6` (test/acceptance mapping) is explicitly out of scope for this reverse-engineering deliverable per this
  round's task scope note (C5-implementation-side activity).

## Fake-wall anti-cheat (red line 13)
- `accepted_unknown` / `genuine_ceiling` are **NOT** claimed for any of the 5 traced nodes -- every node was
  fully decompiled without truncation, without `basic_blocks` chunking bail, and without stopping at a
  `drop_in_place`/shim boundary. The call-tree terminates at depth 5 via a genuine `external_call`
  (`WakeByAddressSingle`, a Win32 synchronization primitive), which is an accepted termination class per this
  skill's SOP (matching the precedent set by `get_relay_provider_quota`'s own external_call termination at a
  hyper/tokio transport poll).
- `recovery_attempts` for the one open item (producer-closure location): (1) traced all callees of
  `has_notch_async_body_sys` via `analyze_function`, finding none that construct/dispatch a closure with an
  address distinct from the shared runtime helpers; (2) checked for an explicit `spawn`/`spawn_blocking`-style
  call taking a function-pointer argument -- none found, only box-allocations of zeroed state; (3) confirmed via
  caller-count enumeration that all 3 downstream helpers are genuinely shared (ruling out
  library_internal-vs-config-callsite confusion, taxonomy item 8); (4) confirmed the owner VA is correct via
  exact string-xref match (taxonomy item 4, wrong_VA excluded) and exact byte-size match against the 1.1.1
  baseline (independent cross-version confirmation). This is recorded as a documented Unknown (see above), not
  papered over as accepted_unknown, since a partial-but-real decompile chain exists throughout.

## Gate candidate
`strictImplementationUse_candidate` -- upstream behavior (dispatch wrapper shape, request/response DTO shape,
error-niche encoding, zero side-effects beyond generic runtime bookkeeping) is sufficient to strictly implement
an equivalent IPC command surface, but the exact boolean-computation semantics (live check vs constant) remain
Unknown, blocking full `readyToImplement`. See `gate-report.json` for the full dims/blockers breakdown.
