# interface — test_relay_provider_stream (AiMaMi 1.1.8, windows-x64)

session: <审计会话>
machine: <本地机器>
date: 2026-07-13

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 127)

- **command**: `test_relay_provider_stream`
- **frontend argKeys**: `["providerId", "model", "onEvent"]` (`tauriInvokeRaw` kind, `assets/index-CX-I_QAq.js` line 86)
- **backend-observed keys** (owner pseudocode literal string refs, live-confirmed this round via full 0-truncation decompile): `manager` (0x1413613b0, 7B, Tauri-injected `State<T>` extraction literal — not sent from the frontend JSON payload), `providerId` (0x141361574, 10B), `model` (0x14136157e, 5B), `onEvent` (0x141361583, 7B) — all four confirmed byte-exact via direct instruction-level refs in `decompile()`, not merely the merged string-pool blob.

```
invoke("test_relay_provider_stream", {
  providerId: string,          // key into the in-memory providers Vec (matched via sub_141276960 predicate)
  model: string,                // forwarded into the shared SSE executor sub_1409717F0 alongside the matched provider config
  onEvent: EventHandler          // SSE chunk callback
})
→ text/event-stream (SSE) via shared executor sub_1409717F0, final response dispatched via invoke_resolver_respond_sys
```

## Provider lookup / routing (NEW vs test_relay_draft_stream this round)

Unlike `test_relay_draft_stream` (2-arg `input`/`onEvent`, no provider selection), this owner performs an explicit **providerId → RelayProvider config lookup** before invoking the shared SSE executor:

1. Acquire a Windows atomic lock on the in-memory providers Vec (`_InterlockedCompareExchange8`-class fast path via `sub_1412AC970`/`sub_1412ABCB0`, 2nd independent lock site in this owner besides the `manager` State<T> lock).
2. Linear-scan the Vec (stride ~32B index entries referencing 232B `RelayProvider` records elsewhere in the owner, consistent with the 232B/entry stride already documented for the relay-providers Vec in this session's `reorder_relay_providers`/`get_relay_provider_quota` work), matching each entry's key against the extracted `providerId` via `sub_141276960` (199B, 0-callee leaf predicate).
3. On match, clone ~6 `Option<T>`-encoded config fields (baseUrl/apiKey-shaped) out of the matched entry via `option_clone_if_present_helper_sys`@0x14108F780 (same shared helper already established in this session's `refresh_single_account_usage` leaf).
4. Stamp a capturedAt-style millisecond timestamp into the matched entry via `sub_14027CA20` (same Gregorian-date-math shape as `refresh_single_account_usage`'s own capturedAt field).
5. Run a quota-check via `sub_14027A5F0` (660B, own independent lock-acquire + `WakeByAddressSingle` + `"relay state poisoned"` panic path, `src\core\relay\manager.rs`) — discriminant `10` = quota OK (feeds into the sibling `sub_1409717F0` SSE call); any other discriminant corresponds to the 1.1.1 baseline's documented `0x8000000000000000` "provider not in quota state (quota miss)" error code (not independently re-derived byte-for-byte this round, cross-referenced from `raw/aimami/1.1.1/windows-x64/commands_relay/test_relay_provider_stream/interface.md`).
6. Only then calls the shared SSE executor `sub_1409717F0` (SAME address, 12059B, already used identically by `test_relay_draft_stream_owner_sys` this session) with the flattened provider config + `model`.

## Response / Event Envelope

SSE streaming response via `onEvent` handler; final resolver response built by `sub_140035530` (538B, 23 basic_blocks, cc=13 — **caller-list-confirmed shared** with `test_relay_draft_stream_owner_sys`, `xrefs_to` shows exactly these 2 callers):

```json
{
  "schemaVersion": <int>,
  "success": true|false,
  "code": <int>,
  "message": "<string>"
}
```

1.1.1 baseline's `interface.md` additionally documents `warnings`/`data` fields on this exact command's envelope (built by a differently-addressed `relay_event_payload_builder_sys`@0x140229AF0 in 1.1.1) — this round only independently re-confirmed `schemaVersion`/`success`/`code`/`message` via direct instruction-level refs on `sub_140035530`; `warnings`/`data` presence on the 1.1.8 envelope is **Unknown** this round (see evidence.md).

## Error paths (3 distinct conditional panic sites confirmed this round, all funnel to the shared `sub_1412AD780` helper)

| site | trigger | string literal | shared with |
|---|---|---|---|
| providers-Vec lock poison | Mutex poisoned during providerId lookup | `"relay state poisoned"` (20B) @0x141362450 | none — first-seen this round, absent from `test_relay_draft_stream`'s call-tree |
| quota-check (`sub_14027A5F0`) lock poison | Mutex poisoned inside quota-check, `src\core\relay\manager.rs` | `"relay state poisoned"` (same literal, 2nd independent call site) | none — internal to `sub_14027A5F0` |
| Display-impl format-error | generic std::fmt internal invariant violation | `"a Display implementation returned an error unexpectedly"` (55B) @0x141363370 | `test_relay_draft_stream_owner_sys` (byte-identical shared call shape) |

## Windows platform-specific mechanism (confirmed this round)

Two **independent** atomic lock acquisitions in this single owner (vs test_relay_draft_stream's one): (1) the `manager` State<T> extraction fast-path via `sub_140419560`, and (2) the providers-Vec lookup fast-path via `sub_1412AC970`/`sub_1412ABCB0` inline in the owner body plus a 3rd nested one inside `sub_14027A5F0`'s own quota-check — all releasing via `WakeByAddressSingle` (2 distinct call sites confirmed, kernel32 import).

## dim4 coverage (this round)

- [x] IPC parameter names confirmed (owner string pool, 4 keys, byte-exact instruction-level refs, cross-validated against frontend `ipc-contracts.jsonl` line 127)
- [x] Full owner body decompiled 0-truncation (44982 chars via `include_addresses=false`, 64 refs) — exceeds the partial-body treatment given to this command in the 1.1.1 baseline and to the draft sibling this session
- [x] providerId → provider-config lookup/routing mechanism identified and call-chain traced (Vec scan + predicate + Option-field clone + quota-check)
- [x] 3 distinct conditional error/panic paths identified and traced to their shared panic helper
- [ ] Exact `RelayProvider` struct field names for the cloned Option<T> config fields (baseUrl/apiKey-shaped) not independently re-derived from a struct layout this round
- [ ] `warnings`/`data` response-envelope fields (documented in the 1.1.1 baseline) not independently re-confirmed as present on `sub_140035530`'s output this round
- [ ] The shared SSE executor `sub_1409717F0`'s full 12KB body remains a known Hex-Rays render-limit wall (same wall already hit for this exact address by the draft sibling this session) — outbound request construction (auth header, exact endpoint selection among the ~11 relay providers) not independently re-traced field-by-field
- [ ] Whether the 1.1.1-documented post-stream `relay_providers_config_write_and_persist_sys` disk-persistence side effect (relay.json write-back with provider quality score) still fires in 1.1.8 for this command — **not independently confirmed this round** (see evidence.md Unknown section; this owner's own 64-ref callee list contains no direct call to that address, and a live re-check of that address this round returned an unrenamed/uncorroborated result — treated as a plain Unknown, not silently trusted from the 1.1.1 narrative)
