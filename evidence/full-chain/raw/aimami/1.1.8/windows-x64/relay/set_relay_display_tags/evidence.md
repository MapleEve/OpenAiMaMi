# evidence — set_relay_display_tags (AiMaMi 1.1.8, windows-x64)

session: <审计会话> · machine: <本地机器>
分析工具就绪门
`module="AiMaMi 1.1.8 win64.exe"`, `idb_path=<证据库> 1.1.8 win64.exe.i64`,
`imagebase=0x140000000` — checked before any decompile/rename/set_comments call this round.

## Confirmed

- Owner `set_relay_display_tags_owner_sys`@`0x1403ea210` (1518B, 43 basic_blocks, cc=12) is a
  dedicated per-command Tauri wrapper — the `"set_relay_display_tags"` string literal
  (`aSetRelayDispla`@`0x14133b74c`) is embedded directly in its body. `decompile()` returned the
  entire 1518B body with 0 real truncation (a prior `analyze_function()` call reported a
  194-line render-limit note; a direct `decompile()` call resolved this and returned the complete
  body — documented, not papered over).
- Owner has exactly **1 code caller**: `sub_1403CF5B0` (main IPC dispatcher, size=`0x4ad3`=19155B),
  confirmed via `xrefs_to`; this matches `intermediate/aimami/1.1.8/windows-x64/version-delta/
  win-divergence-118.json`'s independently-documented `main_ipc_dispatcher` VA and size exactly.
- Owner byte size (1518B) is **byte-identical** to the 1.1.1 baseline's owner
  (`raw/aimami/1.1.1/windows-x64/set_relay_display_tags/owner.md`: `0x14001F080`, 1518B/`0x5EE`) —
  VA churned, size unchanged, zero owner-level growth or shrinkage.
- Request DTO confirmed via direct decompile of the owner: 3 params, same key-literal byte
  lengths as the 1.1.1 baseline exactly — `manager` (7B, required), `global` (6B, optional),
  `woyao` (5B, optional) — extracted via `sub_140419560` (manager, dedicated required-string
  extractor) and the shared `refresh_usage_arg_extract_poll_sys`@`0x14086fd70` (global/woyao,
  tag=6 Some / else None, called twice with the same helper for both optional params).
- Core dispatch `set_relay_display_tags_core_dispatch_sys`@`0x140023c50` (475B, 9 basic_blocks,
  cc=1, dedicated 1 caller = owner, confirmed via `xrefs_to`) wraps the write-and-sync call with a
  `Display`-trait error-formatting safety net; the panic-guard literal
  `"a Display implementation returned an error unexpectedly"` is the same universal
  rustc-emitted safety-net string documented elsewhere this session (`get_relay_provider_quota`,
  `reveal_relay_api_key` leaves).
- Write+sync `set_relay_display_tags_write_and_sync_sys`@`0x14026b0a0` (716B, 21 basic_blocks,
  cc=9, dedicated 1 caller = core_dispatch, confirmed via `xrefs_to`) clones the `global`/`woyao`
  Option<String> values (`sub_1405BFC40`, shared) then delegates lock+persist to the SHARED
  `sub_14027A5F0` (15 callers across the relay command family), with a conditional
  fallback/retry through the SHARED `sub_140273F40` (14 callers) gated on a pre-check flag
  sourced from the SHARED `sub_14027BE60` (28 callers) lock-state/poison probe — the same
  `"relay state poisoned"` panic literal (`aRelayStatePois`@`0x141329e6e`) is present, confirming
  continuity of the mutex-poison-recovery pattern from the 1.1.1 baseline.
- Persist chain fully traced to a genuine terminal: `sub_14027A5F0` (fast path) →
  `sub_14058B830` (config validate via `sub_14028AC10`'s ~9-field UTF8 check + JSON-serialize via
  `sub_1400100C0` using a 2-space-indent formatter `"  "`@`asc_141342EE8`,
  `serde_json::to_string_pretty`-style) → `sub_1405BDEC0` (27 callers, confirmed WIN atomic
  file-write leaf via `callees()`: `GetCurrentProcessId` + `MoveFileExW` + `__imp_CloseHandle` +
  `GetLastError` — a temp-file + rename-based atomic-write pattern, architecturally matching the
  1.1.1 baseline's documented `codexmate_lib::core::relay::atomic_write`).
- Call-tree depth reached: owner[0]→core_dispatch[1]→write_and_sync[2]→persist_dispatch[3]→
  config_persist[4]→atomic_write[5]→`GetCurrentProcessId`/`MoveFileExW`/`CloseHandle`[6,
  TERMINAL `persistence_commit`]. Depth=6, exceeds the depth>=5 redline requirement independent
  of the terminated_reason criterion.
- Response tail confirmed: owner's `sub_1407B0DA0` (response envelope builder) →
  `invoke_resolver_respond_sys`@`0x1407a7610` (same SHARED IPC resolver leaf used by all 3
  param-extraction-error early-return paths inside the owner) — `terminated_reason=
  response_serialize` on every branch, confirmed via `callees()`.
- Xrefs-based dedication check performed BEFORE renaming (redline requirement): owner (1 code
  caller = dispatcher), core_dispatch (1 code caller = owner), write_and_sync (1 code caller =
  core_dispatch) — all 3 genuinely command-dedicated, confirmed via `xrefs_to` batch call.
  `sub_14027a5f0`/`sub_14058b830`/`sub_1405bdec0`/`sub_14027be60`/`sub_140273f40` each showed
  MULTIPLE code callers (6-28) spanning other relay commands (`sub_140269e20`, `sub_14026a4a0`,
  `sub_14026c3f0`, `sub_14026ec40`, `sub_140277030`, `sub_140277fa0`, etc.) — confirmed SHARED
  infrastructure, correctly left un-renamed and documented by VA only.
- Owner-gate re-check before write: `find raw/aimami/1.1.8/windows-x64/*/set_relay_display_tags/`
  prior to this write returned empty; `grep -n "set_relay_display_tags" INDEX.jsonl` prior to
  this write hit only the pre-existing 1.1.1 entries (line 1489 full-chain,
  plus dim6 rollup lines 1578/1579 noting 1.1.1 win `set_relay_display_tags` reached
  `readyToImplement`) — 0 hits for any `aimami/1.1.8/*/set_relay_display_tags` key → gate=
  ALLOW/first, no collision, no takeover token needed.
  `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 106 already
  recorded `owner_va=0x1403ea210, present=true` (angle-A discovery pass only) — this sub-entry
  supplies the first full raw pseudocode/call-tree/interface/evidence/gate-report package for the
  1.1.8 windows-x64 build.

## Inferred

- The mid-chain architectural delta (1.1.1's `write_and_sync_sys` carrying lock+snapshot+persist
  INLINE at ~1318B, vs 1.1.8's equivalent at 716B delegating to a shared multi-caller helper
  chain) is inferred from this round's direct decompile of both layers plus the 1.1.1 baseline
  doc's own description — NOT from a fresh side-by-side re-decompile of the 1.1.1 binary this
  round. The causal link to the batch of NEW 1.1.8 relay commands needing shared persist
  infrastructure is a plausibility inference, not independently confirmed via a dedicated
  cross-command-family diff.
- `MoveFileExW` appearing in the atomic-write leaf's callee list this round is inferred to be
  either (a) a genuine addition since 1.1.1, or (b) simply not individually enumerated in the
  1.1.1 baseline doc's own (less exhaustive) callee description — both are plausible; not
  resolved definitively this round without re-querying the 1.1.1 IDB's `sub_140504310` callees.
- The ~9-field UTF8 validation in `sub_14028AC10` is inferred to cover the FULL relay-provider
  config (all providers, all fields) based on field count and structural continuity with the
  1.1.1 baseline's documented full-config-rewrite behavior — not independently re-verified at the
  struct-byte-offset level via `type_query`/`declare_type` against this specific 1.1.8 build.
- The gating flag `v6` in `write_and_sync_sys` (sourced from the first `sub_14027BE60` probe call,
  determining whether the `sub_140273F40` fallback/retry is attempted on persist failure) is
  inferred to represent some form of "was the lock state healthy/uncontended at entry" predicate,
  based on the probe function's own lock-CAS + poison-check shape — not independently traced to
  its precise Rust-level semantic meaning this round.
- The exact top-level JSON response key/shape actually consumed by the frontend was not
  independently re-traced through the `relay-page` control-flow this round — carried over as the
  same class of open caveat the 1.1.1 baseline itself documents for other relay commands in this
  session.

## Unknown

- Exact byte layout/field semantics of the 344B (`0x158`) option-pair struct passed between
  `write_and_sync_sys` → `sub_14027a5f0` → `sub_14058b830` (holding the cloned `global`/`woyao`
  values plus bookkeeping) — not mapped via `type_query`/`declare_type` this round.
  `recovery_attempts`: reviewed the raw copy-size constant (`0x158u`) at 2 call sites and the
  individual clone calls (`sub_1405BFC40` x2) feeding it, but did not attempt a full field-by-field
  struct recovery given the depth/terminal-leaf redline was already satisfied without it — a
  scope decision, not a fake-wall; `accepted_unknown` is NOT claimed on this node.
- Precise Rust-level type/meaning of the `sub_14027BE60` gating flag (see Inferred above) beyond
  its lock-CAS + poison-check shape. `recovery_attempts`: decompiled the function body directly
  (confirmed `_InterlockedCompareExchange8` + poison literal + `WakeByAddressSingle`), but did not
  cross-reference it against a `declare_type` pass on the RelayState struct this round.
- Whether `MoveFileExW` in the atomic-write leaf represents a genuine 1.1.1→1.1.8 addition or an
  under-documented pre-existing callee (see Inferred above). `recovery_attempts`: cross-checked
  the 1.1.1 baseline doc's own text (only names `GetCurrentProcessId`+`CloseHandle`) but did not
  re-query the live 1.1.1 IDB's `sub_140504310` `callees()` this round to settle it definitively
  — a scope decision (would require touching the 1.1.1 IDB, out of this round's 1.1.8-only scope).
- Exact numeric tag-value scheme distinguishing the various Result/Option discriminants observed
  across this chain (tag=6/3 for Option<String>, tag=10/!=10 for persist Ok/Err at 2 different
  layers with potentially non-uniform meaning per layer, tag=9 inside `sub_14058b830`'s own
  internal io-error wrapping) — not unified into a single canonical enum-tag table this round;
  each layer's tag was interpreted locally from its own branch structure.
- macOS-arm64 1.1.8 build status for this command — Unknown this leaf (windows-only round;
  `platformPolicy.doNotInferWindowsFromMacOS=true` applies).

## Delta vs 1.0.9 (relative-change framing per task scope)

`set_relay_display_tags` **does not exist in the 1.0.9 baseline** — confirmed via
`internal-reverse/REVERSE-STATUS.md` line 298 ("升级命令(13): ...set_relay_display_tags...") and
line 3037 ("新增9条(已在dispatcher string pool确认存在): ...set_relay_display_tags..."), plus this
session's own `win-divergence-118.json` `dispatcher_delta_cmds.added_win_1_1_8` list (relative to
the 1.0.9 baseline, since the 1.1.1 build was the version-delta analysis's `skipped_intermediate_
version`). The command was introduced sometime in the 1.0.9→1.1.1 window (a full raw leaf already
exists at `raw/aimami/1.1.1/windows-x64/set_relay_display_tags/`, `gate=consumerStartReady` per
`INDEX.jsonl` line 1489, and reached `readyToImplement` in the 1.1.1 win dim6 final rollup per
`INDEX.jsonl` lines 1578/1579). This round's full re-decompile against the live 1.1.8 binary finds:
(1) **zero request/response-contract delta 1.1.1→1.1.8** — same 3 params, same 7B/6B/5B key
lengths, same required/optional split, byte-identical owner size (1518B in both builds); (2) a
**genuine mid-chain architectural delta**: 1.1.1's `write_and_sync_sys` carried the lock-acquire +
RelayProvider-snapshot + persist logic INLINE (~1318B), while 1.1.8's equivalent function is much
smaller (716B) and instead delegates to a shared, multi-caller relay-persist helper chain
(`sub_14027a5f0` [15 callers] → `sub_14058b830` [6 callers] → `sub_1405bdec0` [27 callers], none
individually command-dedicated) — most plausibly introduced to support the batch of NEW 1.1.8
relay commands that share the same relay-config read/write surface; (3) the core-dispatch layer
grew modestly (~408B→475B) with an added/more-prominent `Display`-trait error-formatting safety
net; (4) the terminal WIN fs leaf's callee enumeration this round additionally surfaced
`MoveFileExW` (rename-based atomic commit) alongside the previously-documented
`GetCurrentProcessId`+`CloseHandle` — flagged Inferred, not Confirmed-new (see Inferred/Unknown
above). I.e. the majority of the observed delta for this command is the 1.0.9→1.1.1 introduction
itself; the 1.1.1→1.1.8 window contributed VA churn PLUS a genuine mid-chain refactor toward
shared relay-persist infrastructure, while the external request/response contract remained
unchanged.

## Fake-wall check (redline 13)

`genuine_ceiling=false`; `accepted_unknown` NOT claimed anywhere in this leaf. All 3 command-level
dedicated functions in the primary call chain (owner, core_dispatch, write_and_sync) were FULLY
decompiled with 0 real truncation — the two apparent `analyze_function()` truncation notes (owner:
194 lines; write_and_sync: 106 lines) were both resolved by direct `decompile()` calls that
returned the complete bodies (documented explicitly above and in the corresponding pseudocode
files, not papered over). The deeper shared-infrastructure nodes
(`sub_14027a5f0`/`sub_14058b830`/`sub_1405bdec0`/`sub_14027be60`/`sub_140273f40`) were
deliberately left at direct-decompile-plus-`callees()` depth (not individually renamed, since
`xrefs_to` confirmed 6-28 callers each, i.e. genuinely shared infrastructure outside this leaf's
dedicated-owner scope) — every open item above is recorded as a plain Unknown with
`recovery_attempts`, not an `accepted_unknown` claim. The terminal WIN fs leaf
(`GetCurrentProcessId`/`MoveFileExW`/`CloseHandle`/`GetLastError`) was independently confirmed via
live `callees()` enumeration, satisfying the `persistence_commit` terminated_reason at depth 6 —
well past the depth>=5 redline floor.
