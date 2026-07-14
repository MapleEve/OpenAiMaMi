# evidence — reveal_relay_api_key (AiMaMi 1.1.8, windows-x64)

session: <审计会话> · machine: <本地机器>
分析工具就绪门
`module="AiMaMi 1.1.8 win64.exe"`, `idb_path=<证据库> 1.1.8 win64.exe.i64` — checked
before any decompile/rename/set_comments call this round.

## Confirmed

- Owner `reveal_relay_api_key_owner_sys`@0x1403ddcb0 (1297B, 36 basic_blocks, cc=11) is a
  dedicated per-command Tauri wrapper — the `"reveal_relay_api_key"` string literal
  (`aRevealRelayApi`@0x14133b6cb) is embedded directly in its body as a tracing span-name
  argument, used at both arg-extraction call sites. `decompile()` (include_addresses=false)
  returned the entire 1297B body with 0 truncation.
- Request DTO confirmed via two independent sources: frontend `ipc-contracts.jsonl` line 113
  (`argKeys=["providerId"]`, callsite `revealApiKey:e=>St("reveal_relay_api_key",{providerId:e})`)
  and the owner's own body, which additionally reads an optional `manager` key (7B literal
  `"manager"`@0x14133b7a0) via the shared `sub_14127A550` tracing/optional-fallback helper before
  the required `providerId` (10B literal `"providerId"`@0x14133b7f7) extraction via the shared
  `refresh_usage_arg_extract_poll_sys`@0x14086fd70 (43+ callers, already documented in this
  session's `refresh_single_account_usage` leaf).
- Success-response field-label construction in `reveal_relay_api_key_response_build_sys`@0x140020ed0
  (dedicated, 1 caller confirmed via `xrefs_to`) is byte-identical to the 1.1.1 windows baseline's
  documented construction: 2B `"ok"` (0x6B6F LE) and 7B `"Success"` (0x53756363657373, split across
  two 32-bit stores as `1667462483`/`1936942435`) — same literal integer constants as
  `raw/aimami/1.1.1/windows-x64/reveal_relay_api_key/interface.md`.
- Core business logic `reveal_relay_api_key_state_lookup_sys`@0x14026ad50 (720B, 41 basic_blocks,
  cc=22, dedicated 1 caller) is a relay-manager `RwLock` READ-guard acquire
  (`_InterlockedCompareExchange8` fast path + `sub_1412ABCB0` blocking park on contention +
  `WakeByAddressSingle` release-wake) followed by a linear scan of the in-memory `RelayProvider`
  Vec at **232B struct stride** — matching the 1.1.1 baseline's documented "RelayProvider stride
  232B" exactly — with the panic literal `"relay state poisoned"` (`aRelayStatePois`@0x141329e6e)
  on lock poison. `decompile()` returned the entire 720B body with 0 truncation (a prior
  `analyze_function()` call on the same address had reported a 164-line render-limit truncation;
  this was resolved by calling `decompile()` directly, which returned the complete function).
- On a Vec-scan miss, `state_lookup_sys` falls through to `sub_14027D5B0` (4526B, shared across
  9 call sites spanning other relay commands), whose string pool contains
  `codexmate_lib::core::relay::keychain`, `src\core\relay\keychain.rs`, `USER`, `USERNAME` —
  confirming a Windows keychain/credential-store read fallback, architecturally identical to the
  1.1.1 baseline's documented "keychain fallback"/"secrets.json"/"USERNAME env var" behavior.
- Final dispatch `reveal_relay_api_key_respond_dispatch_sys`@0x1407af810 (642B, dedicated, 1
  caller) routes both Ok and Err variants to the shared `invoke_resolver_respond_sys`@0x1407a7610
  (48+ callers elsewhere this session), with a dedicated Display-trait error formatter
  (`sub_14003A6B0`, 1 caller = respond_dispatch_sys) on the Err branch, and the same generic
  `"a Display implementation returned an error unexpectedly"` panic-guard string documented
  elsewhere in this session (`get_relay_provider_quota` leaf) as the universal
  error-serialization safety net.
- All 4 renamed functions confirmed via `xrefs_to` caller-count checks before renaming: owner (1
  caller = the dispatcher landing pad), `response_build_sys` (1 caller = owner),
  `state_lookup_sys` (1 caller = `response_build_sys`), `respond_dispatch_sys` (1 caller = owner)
  — all four are genuinely command-dedicated, not shared infrastructure, justifying
  command-specific renames per this session's established naming convention.
- Owner-gate re-check before write: `find raw/aimami/1.1.8/windows-x64/*/reveal_relay_api_key/`
  prior to this write returned empty; `grep -n "reveal_relay_api_key" INDEX.jsonl` prior to this
  write hit only the pre-existing 1.1.1 entries (lines 1483/1536/1542/1572) — 0 hits for any
  `aimami/1.1.8/*/reveal_relay_api_key` key → gate=ALLOW/first, no collision, no takeover token
  needed. `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 92
  already recorded `owner_va=0x1403ddcb0, present=true` (angle-A discovery pass only, no full
  leaf bundle) — this sub-entry supplies the first full raw pseudocode/call-tree/interface/
  evidence/gate-report package for the 1.1.8 windows-x64 build.

## Inferred

- The exact top-level JSON key the frontend actually reads from the Tauri-serialized response
  (`"ok"` vs `"Success"` vs some outer wrapper) was not independently re-traced through the
  `relay-page` control-flow chain this round — carried over as the same open caveat the 1.1.1
  baseline itself documented ("Tauri 序列化后的实际 JSON key 由前端读取字段决定... 前端消费字段名需从
  relay-page CCF 确认"). Both labels are confirmed to exist in the binary; which one the consumer
  actually reads is inferred-not-reverified.
- `sub_14027D5B0`'s exact Windows Credential-Manager/registry API sequence was not individually
  re-decompiled this leaf (only `analyze_function` metadata: 4526B, 162 basic_blocks, cc=68, 29
  callees enumerated via `callees()`) — the "keychain read" classification is inferred from the
  function's own string-pool content (`codexmate_lib::core::relay::keychain`,
  `src\core\relay\keychain.rs`, `USER`, `USERNAME`) plus its structural match to the 1.1.1
  baseline's independently-documented keychain-fallback role for this exact command, not from a
  byte-level trace of a `CredReadW`/registry call inside this specific function body.
- Whether the `None`/not-found sentinel path (`{0,1,0}` in `state_lookup_sys`'s return) surfaces
  to the frontend as an empty string, `null`, or a distinct UI "no key configured" state was not
  independently traced past the owner/response-build layer — inferred to be an empty/`None`
  `apiKey` field inside the still-`Ok` response, consistent with the 1.1.1 baseline's own
  documented "空/None" (empty/None) classification for the same not-found case.
- `sub_141276960` (providerId byte-compare inside the Vec-scan loop) is inferred to be a generic
  `<[u8]>::eq`/`memcmp`-style byte-comparison helper based on its call-site shape (two pointer+len
  argument pairs feeding a boolean loop-continuation condition) — not independently decompiled
  this leaf.

## Unknown

- Exact Windows API call(s) inside `sub_14027D5B0`'s keychain-read path (e.g. `CredReadW` vs a
  registry `RegGetValueW` vs a file-backed `secrets.json` read as in the 1.1.1 baseline) — not
  independently confirmed for the 1.1.8 build; `recovery_attempts`: attempted `analyze_function`
  (returned size/blocks/cc/callees but not a full decompile text due to 613-line render-limit
  truncation on that specific large function); did not attempt a full direct `decompile()` call on
  this address this round given it is SHARED (9 callers, out of this leaf's dedicated-owner
  scope) and the 1.1.1 baseline already documents the architecturally-equivalent behavior in
  detail — this is a scope decision, not a fake-wall (`accepted_unknown` is NOT claimed on this
  node; it is recorded as a plain open item).
- Exact numeric discriminant values distinguishing "found in memory" vs "found via keychain" vs
  "not found anywhere" as consumed by the frontend response parser — not independently traced
  past the `state_lookup_sys` return-value layer.
- macOS-arm64 1.1.8 build status for this command — Unknown this leaf (windows-only round;
  `platformPolicy.doNotInferWindowsFromMacOS=true` applies; the existing
  `raw/aimami/1.1.1/macos-arm64/commands_relay/reveal_relay_api_key/` leaf is a different-version
  artifact and is not used to infer 1.1.8 mac behavior).
- Exact byte offsets of the `RelayProvider` struct's `apiKey` field within its 232B stride — not
  re-mapped via `type_query`/`declare_type` against this specific 1.1.8 build this round
  (inferred-by-continuity from the 1.1.1 baseline's documented layout, not independently
  re-verified at the type-system level).
- Whether the 1.0.9 baseline had any earlier, differently-named single-key-reveal mechanism that
  `reveal_relay_api_key` superseded — Unknown; `internal-reverse/REVERSE-STATUS.md` line 3037
  only confirms this exact command name is new since 1.0.9, it does not rule out a functionally
  related but differently-named 1.0.9 predecessor.

## Delta vs 1.0.9 (relative-change framing per task scope)

`reveal_relay_api_key` **does not exist in the 1.0.9 baseline at all** — confirmed via
`internal-reverse/REVERSE-STATUS.md` line 3037 ("新增9条(已在dispatcher string pool确认存在):
get_relay_provider_quota, parse_aimami_deeplink, reorder_relay_providers, reveal_relay_api_key,
set_codex_api_login, set_codex_api_slots, set_relay_display_tags, test_relay_draft_stream,
test_relay_provider_stream"). The command was introduced sometime in the 1.0.9→1.1.1 window and
this round's full re-decompile confirms it is **structurally unchanged 1.1.1→1.1.8** (same
argKeys, same response-label bytes, same 232B provider stride, same panic strings, same 2-tier
memory-then-keychain lookup order, and even an **identical owner byte size**, 1297B in both
builds) — i.e. 100% of the observed delta for this command is the 1.0.9→1.1.1 introduction; the
1.1.1→1.1.8 window contributed VA churn only, with no behavioral change detected.

## Fake-wall check (redline 13)

`genuine_ceiling=false`; `accepted_unknown` NOT claimed anywhere in this leaf. All 4 command-level
functions in the primary call chain were FULLY decompiled with 0 real truncation (the one
apparent truncation, on `state_lookup_sys` via `analyze_function`, was resolved by a direct
`decompile()` call returning the complete body — documented above, not papered over). The one
node left at `analyze_function`-metadata-only depth (`sub_14027D5B0`, keychain fallback) is a
SHARED 9-caller helper outside this leaf's dedicated-owner scope, already architecturally
corroborated by the 1.1.1 baseline's independent documentation — recorded as a plain Unknown with
`recovery_attempts`, not an `accepted_unknown` claim.
