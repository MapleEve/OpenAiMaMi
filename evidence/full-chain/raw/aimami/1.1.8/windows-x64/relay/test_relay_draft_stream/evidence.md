# evidence — test_relay_draft_stream (AiMaMi 1.1.8, windows-x64)

Session: `<审计会话>` · Machine: `<本地机器>` · Model: `claude-sonnet-5`
反编译器: `mcp__反编译工具` (<内网>), IDB `<证据库> 1.1.8 win64.exe.i64`, module `AiMaMi 1.1.8 win64.exe`

## 分析工具就绪门

`健康检查` confirmed before any decompile/rename/set_comments call this round: `status=ok`, `uptime_sec≈220445`, `反编译就绪=true`, `module="AiMaMi 1.1.8 win64.exe"`, `idb_path="<证据库> 1.1.8 win64.exe.i64"`.

## owner-gate re-check before write

`find raw/aimami/1.1.8/windows-x64/*/test_relay_draft_stream/` prior to this write returned empty. `grep -n "test_relay_draft_stream" INDEX.jsonl` prior to this write returned only the pre-existing 1.1.1 windows-x64 and 1.1.1 macos-arm64 entries (different version, no 1.1.8 collision). `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 121 already recorded `owner_va=0x1409d9370, present=true` (angle-A discovery pass only, no full leaf bundle existed) → gate=ALLOW/first, no collision, no takeover token needed.

## Confirmed

- Owner `sub_1409D9370`@0x1409d9370 (4637B, 115 basic_blocks, cc=32) is the dedicated per-command async-fn poll state machine for `test_relay_draft_stream` — the exact 23-byte literal `"test_relay_draft_stream"` is embedded directly in the owner body (`aTestRelayDraft`@0x1413615df) as a `tracing::instrument`-style span-name argument, matching the identical pattern already established for sibling commands this session.
- Owner has exactly 2 callers (`sub_1408D1CD0`, `sub_14090FCF0`), both confirmed live IPC-dispatch landing pads via `analyze_function`'s `callers` field — not dead code.
- 3 IPC argument-name literals confirmed byte-exact in the owner's string pool: `manager` (7B, 0x1413613b0), `input` (5B, 0x1413613b7), `onEvent` (7B, 0x141361583) — identical key set and byte lengths to the already-fully-documented 1.1.1 windows-x64 baseline (`raw/aimami/1.1.1/windows-x64/test_relay_draft_stream/interface.md`).
- Frontend confirms `argKeys=["input","onEvent"]` via `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 126 (`tauriInvokeRaw` kind) — cross-consistent with the owner's embedded `manager`/`input`/`onEvent` literal set (`manager` is the Tauri `State<T>` injection key, not a frontend-supplied field).
- Windows-specific atomic fast-path + wake mechanism confirmed live this round: `sub_140419560` (487B) calls `WakeByAddressSingle` (kernel32 import) directly — matches the 1.1.1 baseline's documented `_InterlockedCompareExchange8` + `WakeByAddressSingle` platform note.
- `sub_140E156C0` (1709B, cc=11) is byte-size-identical to the 1.1.1 baseline's independently documented `sub_140E30410` (1709B, "Display impl / format error") — strong structural corroboration of identical role.
- `sub_1409717F0` (12059B, 399 basic_blocks, cc=124) directly calls the already-established shared `relay_http_request_cleanup_sys` (19-caller terminus, confirmed this session via the `get_relay_provider_quota` sub-entry to end in a 1424B dealloc, used by all relay HTTP paths) and `option_clone_if_present_helper_sys`@0x14108f780 (48+ callers, confirmed this session via `refresh_single_account_usage`) — both call-site confirmations are live, not inferred from naming alone.
- The literal `"127.0.0.1:1455"` visible in the raw string-pool dump near this owner's address range is **NOT** an xref target of this owner (confirmed via the full `refs` array returned by `decompile` — no entry references that string) — explicitly ruled out as a false positive from adjacent-string-blob extraction, not claimed as a local-sidecar side effect.
- Command confirmed absent from the 1.0.9 windows baseline (`find raw/aimami/1.0.9/windows -iname "*test_relay_draft_stream*"` → 0 hits) — genuinely new relative to the 1.0.9 comparison baseline that is this round's scope, though it already existed (and was fully leafed) in the intervening 1.1.1 release.
- Rename applied in IDB this round: `sub_1409D9370` → `test_relay_draft_stream_owner_sys` (batch result `total=1, ok=1, failed=0`).

## Inferred

- The 1.1.8 owner is functionally unchanged from the 1.1.1 baseline (same 3 argKeys, same async-frame-offset shape, near-identical sizes on 3 independently cross-checked functions: owner +16B, Display-error-check exact match, SSE-executor +151B) — inferred as **VA churn + compiler re-inlining only**, not a genuine behavioral delta, though the full 12KB SSE-executor body was not independently re-decompiled this round (see Unknown).
- The larger top-level callee count on the 1.1.8 owner (29 direct callees vs. 1.1.1's documented 5 D1 sub-tasks) is inferred to reflect more aggressive compiler inlining of the deserialize/keychain-lookup/event-payload-builder stages directly into the owner body in this build, rather than a structural rewrite — inferred from the preserved literal strings and preserved shared-helper call sites, not independently proven via a diff tool.
- `sub_14105AC40` (9B, 0 callees) is inferred to be a trivial forwarding thunk/stub given its size, not decompiled in full (too small for HexRays to produce meaningful pseudocode beyond a jump/return).
- The conditional `sub_1412AD780` panic-string branch (`"a Display implementation returned an error unexpectedly"`) is inferred to be a defensive Rust-stdlib invariant check (fires only if a `Display::fmt` write! call itself errors), not reachable via any normal input the frontend can construct — inferred from the generic nature of the message text and its exclusively-conditional call site, not from tracing an actual failing input.
- `RelayDraftTestInput`'s exact field set for 1.1.8 is inferred to be unchanged from the 1.1.1 baseline's documented 8-field struct, based on identical argKeys and identical owner shape — not independently re-verified via a fresh Visitor decompile this round.

## Unknown

- The full 12059B body of `sub_1409717F0` (the likely SSE-executor equivalent) was not independently re-decompiled this round; its role is corroborated via size-proximity to the 1.1.1 baseline and via one confirmed shared-callee match (`relay_http_request_cleanup_sys`), but the internal HTTP-request-building/SSE-parsing logic itself was not re-traced line-by-line for 1.1.8. `recovery_attempts`: considered a partial `analyze_function` + full `decompile` pass; deferred given the strong existing 1.1.1 documentation and this round's remaining batch scope (19/20) — not claimed as `accepted_unknown`/`genuine_ceiling`, listed plainly as an open item.
- Exact `RelayDraftTestInput` field-by-field layout for 1.1.8 was not re-verified via a fresh `relay_draft_test_input_visitor_sys`-equivalent decompile; inherited from the 1.1.1 baseline's documented 8-field struct as a plausibility anchor only.
- Exact upstream HTTP path/method/auth-header details for 1.1.8 were not re-confirmed via a fresh `find_regex` sweep this round (inherited from 1.1.1 baseline: POST `/v1/chat/completions`, `Authorization: Bearer <key>`, `text/event-stream` response).
- The exact SSE event-payload field set (`schemaVersion`/`success`/`code`/`message`/`warnings`/`data` per the 1.1.1 baseline) was not independently re-derived for 1.1.8 this round.
- Whether `manager`/`input`/`onEvent` argument *order* on the wire changed between 1.1.1 and 1.1.8 was not checked (only presence + byte-length of each literal was confirmed).

## fake-wall check

`genuine_ceiling_claimed=false`; `accepted_unknown_claimed=false`. No async `::poll` body was left at a `drop_in_place`/shim boundary — the owner's own poll-state machine was fully decompiled with 0 truncation (23266-char full body via `include_addresses=false`), and 6 supporting functions were fully decompiled (owner + 5 callees, see pseudocode/0001-0006). The one genuinely undecompiled node (`sub_1409717F0`, 12059B) is not claimed as a wall — it is an explicit scope-deferred open item with a stated reason (size-proximity + shared-callee corroboration to already-fully-documented 1.1.1 behavior), consistent with this session's established policy of not re-decompiling every large shared-shape function when strong structural correspondence already exists.
