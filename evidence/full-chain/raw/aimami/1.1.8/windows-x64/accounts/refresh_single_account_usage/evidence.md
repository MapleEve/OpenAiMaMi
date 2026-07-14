# refresh_single_account_usage — windows-x64 1.1.8 deep gold-leaf evidence (round <审计会话>, command 13/20)

## Provenance
- binary: `raw/binary/AiMaMi 1.1.8 win64.exe` (PE32+ x86-64, fully symbol-stripped); IDB
  `<证据库> 1.1.8 win64.exe.i64`, imagebase `0x140000000`.
- 分析工具就绪门
  `module="AiMaMi 1.1.8 win64.exe"`, `idb_path` matches expected — confirmed live before any decompile/rename/
  set_comments call this round.
- owner-gate re-check before write: `find raw/aimami/1.1.8/windows-x64/*/refresh_single_account_usage/` prior to
  this write returned empty (no matches); root `INDEX.jsonl` grep for `refresh_single_account_usage` prior to this
  write returned 0 hits -> gate=ALLOW/first, no collision, no takeover token needed.
  `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 75 already recorded
  `owner_va=0x140a6c900, present=true, method=find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn`
  (angle-A discovery pass only, no full leaf bundle) — this sub-entry supplies the first full raw
  pseudocode/call-tree/interface/evidence/gate-report package.

## Confirmed
- owner VA `0x140a6c900` fully decompiled with zero truncation: 4105B, 126 basic blocks, cyclomatic_complexity=32,
  29 distinct callees, exactly 2 callers (`sub_1408E4D30`, `sub_140900880`, both 0x235B poll/drop wrapper stubs).
  Renamed in IDB to `refresh_single_account_usage_owner_sys`.
- the command literal `"refresh_single_account_usage"` (28 bytes) is embedded directly in the owner as a
  `tracing::instrument`-style span-name argument (target=`"app"`), not merely a dispatcher string-match key — the
  owner function itself is the async `Future::poll` state machine body (4-case poll-state switch on
  `*(byte*)(self+4736)`), with no separate thin command wrapper.
- frontend `argKeys: ["accountKey"]` confirmed via `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl`
  (`argObject:"{accountKey:e}"`) and independently cross-confirmed inside the owner's own pseudocode: the literal
  `"accountKey"` (10 bytes, `aAccountkey_4`@`0x1413614f2`) is passed as the field descriptor into the shared
  `refresh_usage_arg_extract_poll_sys`@`0x14086fd70` helper.
- response field literal `"usage"` (5 bytes, `aUsage_2`@`0x141361c7e`) is passed into the shared
  `refresh_usage_response_build_sys`@`0x140352c90` helper as the labeled-field name, confirming response shape
  `{"usage": <UsageData>}`.
- call-tree traced across 8 nodes with 3 independent terminated branches, all fully decompiled with no truncation
  and no `basic_blocks`-chunking bail: (a) `owner(1)->refresh_usage_response_build_sys(2)->
  usage_data_fields_flatten_sys(3)->option_clone_if_present_helper_sys(4)`, `terminated_reason=response_serialize`;
  (b) `owner(1)->refresh_usage_poll_continuation_sys(2)->vtable-dispatched dyn Future::poll(3)`,
  `terminated_reason=external_call`; (c) `owner(1)->refresh_usage_arg_extract_poll_sys(2)->
  poll_result_variant_predicate_sys(3)`, `terminated_reason=error_return`; plus the owner's own unconditional
  final call to the shared `invoke_resolver_respond_sys`@`0x1407a7610` (depth2, `terminated_reason=response_serialize`,
  already renamed/documented in the prior `get_relay_provider_quota`/`has_notch` sub-entries).
- confirmed NEW in 1.1.8 vs the 1.0.9 baseline: `intermediate/aimami/1.1.8/version-delta/frontend-delta/
  cmd-added.win.txt` and `cmd-added.mac.txt` both list this command as frontend-added; no
  `raw/aimami/1.1.1/windows-x64/*/refresh_single_account_usage/` directory exists and a direct Python-JSON scan of
  `raw/aimami/1.1.1/windows-x64/frontend/ipc-contracts.jsonl` for `command=="refresh_single_account_usage"`
  returned 0 records.
- 5 renames + 0 `set_comments` (comment attached separately, see below) written to the live win IDB this session
  (`rename` batch: `total=5, ok=5, failed=0`).

## Inferred
- the `UsageData` response payload (13 `Option<T>`-niche-encoded fields flattened by
  `usage_data_fields_flatten_sys`@`0x14037dc40`) is inferred, from its field-offset layout and shared reuse with
  `begin_chatgpt_oauth_login_owner_sys`, to represent account-level quota/usage counters (byte/token counts, a
  reset-timestamp-shaped `i64`, plan/tier flag bytes, and at least one `Option<Vec<u8>>` buffer) — this is a
  structural inference from shape and byte-offset layout, not a symbol-confirmed fact, since the binary is fully
  stripped and no co-located `serde` field-name string literals were found for these specific offsets in this
  leaf's traced nodes.
- the vtable-dispatched `dyn Future::poll` call inside `refresh_usage_poll_continuation_sys` is inferred to be an
  outbound HTTP request to the same class of backend account-usage-refresh endpoint documented for
  `get_relay_provider_quota` (both share the identical `TLS-context-fetch -> vtable-poll-dispatch` call shape) —
  inferred from structural resemblance, not independently confirmed by tracing the concrete reqwest/hyper
  transport internals below the vtable boundary this round.
- it is inferred that `refresh_single_account_usage` and the pre-existing 1.0.9 `refresh_usage_snapshot` command
  are deliberately complementary (bulk-refresh-all vs targeted-refresh-one), based on both command-name literals
  co-existing in the same 1.1.8 owner's combined string pool and their contrasting argument shapes (`[]` vs
  `["accountKey"]`) — inferred product-design intent, not directly confirmed by any comment/documentation string
  in the binary.
- the `"app"` tracing-target literal is inferred to correspond to a Rust module path resembling
  `commands::accounts::refresh_single_account_usage` (mirroring the `commands::system::*`/`commands::relay::*`
  naming seen for sibling commands), though the binary's Rust module-path debug symbols are fully stripped so this
  cannot be confirmed via `func_query`.

## Unknown
- the exact symbolic field names of the ~13 `UsageData` fields (e.g. whether the byte-counter fields are named
  `tokensUsed`/`bytesUsed`/`requestCount`, and whether the `i64` field is a Unix-epoch reset timestamp or a
  duration) were not recoverable this round — binary is fully stripped, no `serde`/JSON field-name string
  literals were found co-located with these specific struct offsets in any of the 8 traced nodes. Documented as a
  plain Unknown with `recovery_attempts` below, not fabricated.
- the concrete reqwest/hyper/tokio transport internals below the vtable-dispatched `dyn Future::poll` call (i.e.
  which was not itself re-decompiled this leaf; only its immediately-visible calling shape inside
  `refresh_usage_poll_continuation_sys` was traced) — accepted as a genuine dynamic-dispatch `external_call`
  termination per this skill's SOP and the precedent already set by `get_relay_provider_quota`'s own
  `external_call` termination at a hyper/tokio transport poll.
- the exact HTTP endpoint path/hostname used for this specific command's network request was not independently
  re-derived this leaf (no distinctive URL/host string literal was observed inside any of the 8 traced nodes;
  `get_relay_provider_quota`'s 11-provider host list is a separate, already-documented surface and was not assumed
  to apply here without direct confirmation).
- whether the `Drop`-registration side-path (`sub_14107F1B0`/`sub_140473F20`, the TLS-destructor registration for
  the boxed future state) ever actually fires for this command in practice, versus being dead-code-eliminated at
  the LLVM-IR level for this particular monomorphization, is Unknown — it was reached via static callee
  enumeration, not confirmed to execute at runtime.
- `dim6` (test/acceptance mapping) is explicitly out of scope for this reverse-engineering deliverable per this
  round's task scope note (C5-implementation-side activity).

## Fake-wall anti-cheat (red line 13)
- `accepted_unknown` / `genuine_ceiling` are **NOT** claimed for any of the 8 traced nodes. Every node was fully
  decompiled without truncation, without `basic_blocks` chunking bail, and without stopping at a
  `drop_in_place`/shim boundary purely because it looked like Drop-related code (the one Drop-registration node
  encountered, `sub_14107F1B0`, was fully decompiled and explicitly documented as registration-only plumbing, not
  used to inflate the claimed call-tree depth).
- `recovery_attempts` for the two open Unknown items: (1) `UsageData` field names — searched for `serde`/JSON
  field-name string literals co-located (within +/- 64 bytes) with each of the 13 struct offsets used by
  `usage_data_fields_flatten_sys`; none found, ruling out a simple missed-string-scan explanation; cross-checked
  the struct's 3-caller list (`sub_1403483F0`, `refresh_usage_response_build_sys`, `sub_140354380`) for any
  shared, more-fully-annotated caller — none had field-name literals either. (2) HTTP endpoint — ran `find_regex`
  for common account/usage-endpoint URL fragments (`/usage`, `/account`, `/quota`, `.api.`) scoped near both the
  owner and the vtable-dispatch call site; no distinctive match was found within the immediately-reachable string
  window, and the vtable dispatch itself is confirmed to be genuinely dynamic (not a hidden direct call), so
  deeper endpoint-string discovery was deemed out of this leaf's traced-node scope rather than a wall to route
  around.
- the call-tree terminates via three independently-confirmed, non-fabricated termination classes:
  `response_serialize` (x2, at depths 4 and 2), `external_call` (at depth 3, genuine vtable dynamic dispatch,
  cross-checked against the confirmed dyn-Future::poll shape already documented for `get_relay_provider_quota`),
  and `error_return` (at depth 3, the accountKey-validation diagnostic path). Depth is honestly reported as
  `max_depth_reached=4` (not inflated to claim depth>=5 where it was not actually traced) — the redline-13
  depth>=5-OR-terminated_reason gate is satisfied via the terminated_reason branch of the OR-condition.

## Gate candidate
`strictImplementationUse_candidate` — upstream behavior (request/response DTO shape, argKeys, response field name
and its ~13-field flattened payload layout, error-niche encoding, and the network-refresh side-effect boundary) is
sufficient to strictly implement an equivalent IPC command surface, but the exact `UsageData` field semantics and
concrete backend endpoint remain Unknown, blocking full `readyToImplement`. See `gate-report.json` for the full
dims/blockers breakdown.
