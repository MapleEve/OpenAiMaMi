# interface — set_relay_display_tags (AiMaMi 1.1.8, windows-x64)

## IPC contract

- **command**: `set_relay_display_tags`
- **cmd-string literal**: `"set_relay_display_tags"` (22B) @ `aSetRelayDispla`/`0x14133b74c`,
  embedded directly in the owner body (dedicated-per-command-wrapper pattern, not a shared-dispatcher
  switch-case) — matches `owner-map-118.jsonl` line 106 method
  `find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn`.
- **owner_va**: `0x1403ea210` (PE stripped, no Rust symbol — windows-x64 1.1.8 build has zero
  standalone Rust symbols anywhere, confirmed by this session's own `owner-map-118.jsonl`).
- **1 caller**: `sub_1403CF5B0` (main IPC dispatcher, `0x1403cf5b0`, size=`0x4ad3`=19155B) —
  confirmed via `xrefs_to`; matches `win-divergence-118.json`'s documented `main_ipc_dispatcher`
  VA+size exactly.
- **1.1.1 baseline**: same command, present at `raw/aimami/1.1.1/windows-x64/set_relay_display_tags/`
  (owner VA in that build: `0x14001F080`, 1518B, gate=`consumerStartReady` per `INDEX.jsonl` line
  1489). **1.0.9 baseline**: command does NOT exist — confirmed via
  `internal-reverse/REVERSE-STATUS.md` line 298 ("升级命令(13): ...set_relay_display_tags...") and
  line 3037 ("新增9条...set_relay_display_tags...") plus this session's own
  `win-divergence-118.json` `dispatcher_delta_cmds.added_win_1_1_8` list — i.e. introduced in the
  1.0.9→1.1.1 window and unchanged in existence (though NOT unchanged in internal structure —
  see Delta section) through 1.1.8.

## Request DTO

```typescript
interface SetRelayDisplayTagsParams {
  manager: string;          // Required. 7-byte key literal. Provider/manager identifier.
  global?: string | null;   // Optional. 6-byte key literal. Global display tag override.
  woyao?: string | null;    // Optional. 5-byte key literal. "Woyao" display tag override.
}
```

- `manager` (required, `String`): extracted via `sub_140419560` (required-string extractor).
  Key literal length = 7B (`"manager"`@`0x14133b7a0`) — **byte-identical to the 1.1.1 baseline**.
  On failure, an optional-fallback tracing helper (`sub_14127A550`, shared) is attempted; if that
  also fails (tag != 6), the owner routes directly to `invoke_resolver_respond_sys`
  (bypasses core-dispatch entirely).
- `global` (optional, `Option<String>`): parsed by the shared
  `refresh_usage_arg_extract_poll_sys`@`0x14086fd70` helper. Tag=6 → `Some(String)`, else → `None`
  (any other tag routes to the owner's early-return error path). Key literal length = 6B
  (`"global"`@`0x14133b86b`) — **byte-identical to the 1.1.1 baseline**.
- `woyao` (optional, `Option<String>`): parsed by the **same** shared
  `refresh_usage_arg_extract_poll_sys` helper. Key literal length = 5B (`"woyao"`@`0x14133b871`)
  — **byte-identical to the 1.1.1 baseline**.

**Zero request-DTO delta vs the 1.1.1 baseline**: same 3 params, same required/optional split,
same 7B/6B/5B key-literal lengths, same extraction-helper role split (dedicated required-string
extractor for `manager`, shared Option<String> parser reused for both `global` and `woyao`).

## Response DTO (success)

Owner copies a 424B (`0x1A8`) result struct from the core-dispatch out-parameter directly into
the IPC response buffer on the `Ok` path (`sub_1412762D0((__m128i *)&v27, &v19, 0x1A8u)`), then
forwards to `sub_1407B0DA0` (response envelope builder) → `invoke_resolver_respond_sys` (shared
IPC resolver, terminal). The exact top-level JSON shape was not independently re-traced through
the `relay-page` frontend control-flow this round (same open caveat the 1.1.1 baseline itself
carries — `frontend consumption key confirmation` remains an open item, not re-verified here).

## Response DTO (failure)

On any parameter-extraction failure, the owner constructs an error response inline (copies a
`0x168`-byte error-context slice + builds a tagged error value) and calls
`invoke_resolver_respond_sys` directly — bypassing core-dispatch/write-and-sync entirely. On a
core-dispatch/write-and-sync-level failure (persist error, lock poison, Display-format failure),
the error propagates back up through the `Err` branch and is copied into a tagged error value
before reaching the same `invoke_resolver_respond_sys` terminal via the owner's tail-call to
`sub_1407B0DA0`.

## Error paths

| scenario | handling | terminated_reason |
|---|---|---|
| `manager` missing/wrong type (both extractor and fallback fail) | owner early-return → `invoke_resolver_respond_sys` | response_serialize |
| `global` param parse fail (tag != 6, not a valid None either) | owner early-return → `invoke_resolver_respond_sys` | response_serialize |
| `woyao` param parse fail | owner early-return → `invoke_resolver_respond_sys` | response_serialize |
| relay state lock poisoned (either the write_and_sync entry-gate probe `sub_14027be60` or the persist-dispatch fallback lock in `sub_14027a5f0`) | generic panic formatter, literal `"relay state poisoned"`@`0x141329e6e` | error_return |
| relay config persist fails on both the fast path (`sub_14058b830`) and the gated fallback/retry (`sub_140273f40`) | `sub_140589E90` builds a terminal `RelayError` value, returned as `Err` | error_return |
| Display-trait formatting failure on the core-dispatch error-wrap path | generic panic, literal `"a Display implementation returned an error unexpectedly"` | error_return |
| WIN atomic file-write / rename failure (`sub_1405bdec0`) | `GetLastError` captured; propagates as persist failure up the chain | error_return |
| generic alloc failure (heap alloc inside owner/param-extraction paths) | `sub_1412AD46B` abort (Rust `handle_alloc_error` analog) | error_return |

## Side effects

1. **relay state lock acquire (read/write path)**: Windows `_InterlockedCompareExchange8` fast-path
   CAS, with a fallback slow-path lock (same primitive) + `sub_1412ABCB0` blocking park on
   contention + `WakeByAddressSingle` release-wake, inside the shared `sub_14027a5f0`
   persist-dispatch helper.
2. **relay config validation**: `sub_14028AC10` UTF8-validates ~9 String fields (offsets across a
   large config/provider-list struct) via the shared `sub_14106FE30` helper before any write is
   attempted — consistent with a FULL relay-config validation pass, matching the 1.1.1 baseline's
   documented full-config-rewrite behavior (not scoped narrowly to just the 2 changed tag fields).
3. **relay config JSON serialize + atomic_write to disk**: `sub_1400100C0` serializes using a
   2-space-indent formatter (`"  "`@`asc_141342EE8`, `serde_json::to_string_pretty`-style),
   followed by `sub_1405BDEC0` (WIN atomic file write: `GetCurrentProcessId` + `MoveFileExW` +
   `CloseHandle` + `GetLastError` on failure) — a temp-file + rename-based atomic-write pattern.
4. **Two Option<String> clones** (`sub_1405BFC40`, shared) for the `global`/`woyao` values before
   the persist call, with matching deallocs (`sub_140001370`) on every exit path.

**Full-config rewrite confirmed**: the persist path validates and (re)serializes a broad set of
String fields spanning what is architecturally the entire relay-provider config, not a narrow
2-field patch — consistent with the 1.1.1 baseline's documented `schemaVersion`/`providers`/
`activeByIde`/`proxy`/`codexRouterEnabled`/`codexApiLogin`/`codexApiSlots`/`displayTagGlobal`/
`displayTagWoyao` JSON shape (field-level JSON key names not independently re-confirmed this
round at the byte-offset level — see Unknown section in evidence.md).

## Delta vs baselines

| dimension | 1.0.9 | 1.1.1 | 1.1.8 |
|---|---|---|---|
| command exists | No | Yes (new) | Yes |
| argKeys | n/a | `manager`(req)/`global`(opt)/`woyao`(opt), 7B/6B/5B keys | unchanged, byte-identical key lengths |
| owner VA (win) | n/a | `0x14001F080` (1518B) | `0x1403ea210` (1518B — **identical size**) |
| core-dispatch VA/size | n/a | `0x14021B780` (~408B) | `0x140023c50` (475B, **+~67B growth**) |
| write-and-sync VA/size | n/a | `0x1406D71D0` (~1318B) | `0x14026b0a0` (716B, **-~602B, logic extracted to shared helpers**) |
| lock/persist architecture | n/a | inline lock+snapshot+persist inside write_and_sync_sys | delegated to a shared multi-caller helper chain (`sub_14027a5f0`→`sub_14058b830`→`sub_1405bdec0`, 6-27 callers each) |
| atomic-write leaf callees | n/a | `GetCurrentProcessId` + `CloseHandle` (documented) | same two + `MoveFileExW` (rename-based commit) observed this round |
| panic strings | n/a | `"relay state poisoned"` | unchanged, byte-identical |

**Conclusion**: the request/response contract (argKeys, key lengths, required/optional split,
owner byte size) is **unchanged 1.1.1→1.1.8**. The mid-chain implementation, however, shows a
genuine architectural delta: the lock-acquire/snapshot/persist logic that was inline in 1.1.1's
`write_and_sync_sys` has been extracted into shared, multi-caller relay-persist infrastructure in
1.1.8 — most plausibly to support the batch of NEW 1.1.8 relay commands
(`get_relay_provider_quota`, `reveal_relay_api_key`, `reorder_relay_providers`,
`test_relay_draft_stream`, `test_relay_provider_stream`) that all need to read/write the same
relay-provider config. This is recorded as **Inferred** (not independently cross-diffed against a
fresh full re-decompile of the 1.1.1 build this round) — see evidence.md.

## Platform gate

- **WIN confirmed**: all evidence above is derived from the live 1.1.8 win64 PE IDB
  (`<证据库> 1.1.8 win64.exe.i64`).
- **MAC**: Unknown for 1.1.8 (not independently re-checked this leaf; the 1.1.1 macos-arm64 leaf
  status for this command was not cross-referenced this round —
  `platformPolicy.doNotInferWindowsFromMacOS=true` applies, no mac-1.1.8-specific claim made here).
