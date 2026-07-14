# interface — reveal_relay_api_key (AiMaMi 1.1.8, windows-x64)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 113 + `frontend-control-flow.jsonl` lines 141/194)

- **command**: `reveal_relay_api_key`
- **argKeys**: `["providerId"]` (frontend-passed) — backend owner additionally reads an optional
  `manager` key (see Request DTO below); frontend never sends it, matching the 1.1.1 baseline
  exactly.
- **frontend wrapper**: `revealApiKey: e=>St("reveal_relay_api_key",{providerId:e})` at
  `assets/index-CX-I_QAq.js:86`; UI callsite `ge.revealApiKey(l.id)` at
  `assets/relay-page-CybVyflj.js:38`.
- **dispatch mechanism**: cmd-string table → owner `reveal_relay_api_key_owner_sys` (0x1403ddcb0,
  confirmed via the `"reveal_relay_api_key"` literal `aRevealRelayApi`@0x14133b6cb embedded
  directly in the owner body — this build's dedicated-wrapper pattern, not a shared-dispatcher
  switch-case; matches `owner-map-118.jsonl` line 92 method
  `find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn`).
- **owner_va**: `0x1403ddcb0` (PE stripped, no Rust symbol — windows-x64 1.1.8 build has zero
  standalone Rust symbols anywhere, confirmed by this session's own owner-map-118.jsonl sub-entry).
- **1.1.1 baseline**: same command, present at `raw/aimami/1.1.1/windows-x64/reveal_relay_api_key/`
  (owner VA in that build: `0x140012820`, gate=`strictImplementationUse`, `gate_accepted=false`)
  and `raw/aimami/1.1.1/macos-arm64/commands_relay/reveal_relay_api_key/` (owner VA
  `0x1005d21a0`). **1.0.9 baseline**: command does NOT exist — confirmed via
  `internal-reverse/REVERSE-STATUS.md` line 3037 ("新增9条...reveal_relay_api_key..."), i.e. this
  command was introduced in the 1.0.9→1.1.1 window and is unchanged in structure through 1.1.8.

## Request DTO

```
{ providerId: string, manager?: string }
```

- `providerId` (required, String): relay provider ID to reveal the stored API key for. String
  key-literal length 10B (`"providerId"`@0x14133b7f7), extracted via the shared
  `refresh_usage_arg_extract_poll_sys`@0x14086fd70 helper (43+ callers elsewhere this session).
- `manager` (optional, `Option<String>`): relay provider **manager** filter identifier. String
  key-literal length 7B (`"manager"`@0x14133b7a0). Frontend never passes this key (confirmed via
  `ipc-contracts.jsonl` line 113 — `argObject: "{providerId:e}"`, no `manager` field). Backend
  accepts absence via an optional-fallback tracing-span helper (`sub_14127A550`, shared, 60+
  callers across unrelated commands, not renamed) — same architecture as the 1.1.1 baseline's
  documented `sub_141214620` optional-fallback path. When `manager` is `None`, the state-lookup
  scans all providers unfiltered by manager, matching the 1.1.1-documented behavior exactly.

**Zero request-DTO delta vs the 1.1.1 baseline** (same 2 params, same optional/required split,
same 7B/10B key-literal lengths).

## Response DTO (success)

**Byte-identical construction vs the 1.1.1 baseline**, confirmed via
`reveal_relay_api_key_response_build_sys`@0x140020ed0 (dedicated, 1 caller):

```
// alloc 2B: *v9 = 27503 = 0x6B6F (LE) -> "ok"       (field label #1)
// alloc 7B: 0x53756363657373 (LE, split across two stores) -> "Success"  (field label #2)
```

Confirmed JSON response shape (same ambiguity note as the 1.1.1 baseline — Tauri serializes the
Result-tagged struct; exact top-level JSON key consumed by the frontend was not independently
re-traced through the relay-page CCF this round, carried over unchanged from 1.1.1's own
documented caveat):

```json
{
  "ok": "<apiKey_string>",
  "Success": "<apiKey_value>"
}
```

The `apiKey` payload itself flows from `reveal_relay_api_key_state_lookup_sys`'s return value
(`v15`/`v16` in the response-build pseudocode) — sourced either from the in-memory relay-state Vec
(if the provider is present in the currently-loaded `RelayProvider` list) or, on a miss, from the
keychain-fallback helper `sub_14027D5B0` (see Side effects below). This two-tier resolution order
(memory-first, keychain-fallback-second) matches the 1.1.1 baseline's documented behavior exactly.

## Response DTO (failure)

Routed through `reveal_relay_api_key_respond_dispatch_sys`@0x1407af810 (dedicated, 1 caller):
on any `Err` variant, the error value is passed through a dedicated Display-trait formatter
(`sub_14003A6B0`, 1 caller = respond_dispatch_sys itself) before being forwarded to
`invoke_resolver_respond_sys`. If Display-formatting itself fails, the generic shared panic
literal `"a Display implementation returned an error unexpectedly"` fires (same rustc-emitted
safety-net string used by every command's error-serialization path in this binary — confirmed
byte-identical to the one documented in this session's `get_relay_provider_quota` leaf).

## Error paths

| scenario | handling | terminated_reason |
|---|---|---|
| `providerId` missing/wrong type | `refresh_usage_arg_extract_poll_sys` returns Err → owner routes directly to `invoke_resolver_respond_sys` (bypasses respond_dispatch_sys) | response_serialize |
| `manager` present but wrong type | optional-fallback tracing helper returns non-Ok tag → owner routes directly to `invoke_resolver_respond_sys` | response_serialize |
| relay state RwLock poisoned | `reveal_relay_api_key_state_lookup_sys` → panic via generic formatter, literal `"relay state poisoned"` | error_return |
| provider not found in memory AND not found via keychain | `state_lookup_sys` returns `None` sentinel (`{0,1,0}`) → response_build_sys still returns Ok with empty/`None` apiKey field (does not raise a distinct not-found error) | response_serialize |
| keychain/credential-store read failure (Windows) | inside shared `sub_14027D5B0` (not individually re-decompiled this leaf); its own string pool implies `USER`/`USERNAME` env-var + registry/Credential-Manager access, matching the 1.1.1 baseline's documented "keychain error"/"secrets.json 无法读取" fallback path | persistence_read |
| Display-trait formatting failure on error path | generic panic, literal `"a Display implementation returned an error unexpectedly"` | error_return |
| generic alloc failure (2B/7B label allocs, or inside Display formatter) | `sub_1412AD46B` abort (Rust `handle_alloc_error` analog) | error_return |

## Side effects

1. **relay state RwLock READ acquire** (Windows: `_InterlockedCompareExchange8` fast-path CAS +
   `sub_1412ABCB0` blocking-park on contention + `WakeByAddressSingle` release-wake on the
   contended-waiters path) — confirmed **read-only**: only a Vec scan (232B stride, matching the
   1.1.1-documented `RelayProvider` struct stride exactly) + element clone are observed; no
   relay-state mutation opcode sequence found anywhere in the traced call tree.
2. **Keychain/credential-store read** (Windows-side fallback, `sub_14027D5B0`, shared across ≥9
   call sites): triggered only when the provider is absent from the in-memory Vec. String
   evidence (`codexmate_lib::core::relay::keychain`, `src\core\relay\keychain.rs`, `USER`,
   `USERNAME`) confirms this reads (not writes) an OS-level or file-backed credential store —
   architecturally identical to the 1.1.1 baseline's documented keychain/`secrets.json` fallback.
   No write/persist call observed in the traced portion.
3. **Memory allocation only** for response-field-label strings (`"ok"`/`"Success"`, 2B/7B) and
   the apiKey clone; matching deallocs observed on all traced paths.
4. **No network calls** anywhere in the traced call tree — this command is local-only
   (in-memory state + local keychain/credential store), matching the 1.1.1 baseline's documented
   "只读操作，纯本地操作" (read-only, purely local operation) conclusion exactly.

**Important**: `reveal_relay_api_key` remains, in 1.1.8 as in 1.1.1, a **read-only** operation —
it surfaces an already-configured, locally-stored relay-provider API key back to the requesting
frontend (the app's own "reveal/show stored credential" UI affordance); it does not fetch, mint,
or otherwise obtain any credential from a third party, and does not mutate any persisted or
in-memory relay configuration.

## Delta vs baselines

| dimension | 1.0.9 | 1.1.1 | 1.1.8 |
|---|---|---|---|
| command exists | No | Yes (new) | Yes |
| argKeys | n/a | `["providerId"]` (+ optional `manager` backend-side) | unchanged |
| owner VA (win) | n/a | `0x140012820` (1297B) | `0x1403ddcb0` (1297B — **identical size**) |
| response field labels | n/a | `"ok"`(2B)/`"Success"`(7B), byte-identical construction | unchanged, byte-identical construction confirmed this round |
| RelayProvider struct stride | n/a | 232B | unchanged (232B, confirmed this round) |
| lookup order | n/a | memory Vec scan → keychain fallback | unchanged (same 2-tier order, same keychain module path strings) |
| panic strings | n/a | `"relay state poisoned"` | unchanged, byte-identical |

**Conclusion**: zero behavioral delta 1.1.1→1.1.8 for this command. Owner/callee VAs churned
(expected build-layout drift) but the owner function's exact byte size (1297B) and every
structural signal traced this round (argKeys, response field labels, RwLock pattern, struct
stride, panic strings, keychain-fallback module path) are identical to the 1.1.1 baseline. This
matches the pattern already established for `get_relay_provider_quota` in this same session
("VA churn + modest size/complexity growth only" / here: VA churn with **zero** size growth on
the owner).

## Platform gate

- **WIN confirmed**: all evidence above is derived from the live 1.1.8 win64 PE IDB
  (`<证据库> 1.1.8 win64.exe.i64`).
- **MAC**: Unknown for 1.1.8 (not independently re-checked this leaf; the 1.1.1 macos-arm64 leaf
  exists at `raw/aimami/1.1.1/macos-arm64/commands_relay/reveal_relay_api_key/` but is a
  different-version, different-build artifact — `platformPolicy.doNotInferWindowsFromMacOS=true`
  applies, no mac-1.1.8-specific claim made here).
