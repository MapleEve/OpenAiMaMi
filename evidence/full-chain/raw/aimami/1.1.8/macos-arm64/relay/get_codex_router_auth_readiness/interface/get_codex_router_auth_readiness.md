# Interface — `get_codex_router_auth_readiness` (aimami 1.1.8, macos-arm64)

owner_va: `0x1004c7050`
owner_symbol: `codexmate_lib::commands::relay::get_codex_router_auth_readiness::hbc73a173c4a6e170`
module: `commands::relay`

## Request DTO

- `argKeys`: `[]` (no-argument command)
- confirmed via: `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 117
  (`{"argKeys": [], "command": "get_codex_router_auth_readiness", ... "wrapper": "getCodexRouterAuthReadiness"}`)
  and `frontend-control-flow.jsonl` lines 145 + 192.

## Response fields (frontend-consumed, cross-checked against backend field production)

Consumer call site (`assets/relay-page-CybVyflj.js` line 38, function `Pn`):

```
const g = await ge.getCodexRouterAuthReadiness();
q(g.data.willUseVirtualAuth);
ae(g.data.virtualEmail);
```

| frontend field | backend production (owner body) | confidence |
|---|---|---|
| `virtualEmail` | hardcoded literal `"niuniu@woyao.pro"` (16 bytes), qmemcpy'd into a fresh heap String inside `router_unlock_auth::readiness` (0x100690ad7), copied into the response at owner offsets `a1+72`(ptr)/`a1+80`(len) | Confirmed (byte-exact literal match, direct data-flow to a response slot) |
| `willUseVirtualAuth` | packed flag byte at response offset `a1+104+1`, computed as `has_usable_real_oauth_login ^ 1` (i.e. **true when there is NOT a usable real OAuth login**) in `readiness()` (0x100690b2e SIMD pack) | Inferred (byte position + boolean-negation semantics line up with the field name; not independently re-verified via `type_query`/struct layout against the 1.1.8 binary this leaf) |

Additional fields present in the packed 4-byte flag word built by `readiness()` (offset `a1+104`) that
this leaf did **not** map to a specific frontend-visible name this round (no other frontend read-sites
found for this command besides the two above):

- byte0 = `has_usable_real_oauth_login` (bool)
- byte1 = `willUseVirtualAuth` (see above)
- byte2 = `live_auth_state() == 1` i.e. persisted marker's `aimami_router_unlock_auth` JSON key is literally `true`
- byte3 = `can_restore_previous_auth` (bool)

Two additional heap-allocated literal strings are written into the response by the **owner** itself
(not by `readiness()`): `"ok"` (2 bytes, response offset `a1+8`/`a1+16`) and `"Success"` (7 bytes,
response offset `a1+32`/`a1+40`), alongside a top-level discriminant `2` at `a1+0`. These do not
obviously correspond to `virtualEmail`/`willUseVirtualAuth` and were not resolved to a specific
serde field/wrapper name this round — left as an **open** item (see evidence.md Unknown section);
most likely candidates are (a) a `Result`/envelope discriminant + a fixed status/message pair baked
in by a serde_json::json!()-style macro call inside the command body itself, or (b) an internal
telemetry/log record built inline. Not a fake-wall/ceiling — the full byte-exact literal values and
their destination offsets in the response struct are known; only the *symbolic field name* is Unknown.

## Error path

No error-return branch was found in the owner or any of its 8 decompiled callees down to depth 4/5 —
every internal fallible step (`load_auth_file`, `read_marker`, JSON parse, base64 decode, `exp` claim
check) degrades to a **boolean false / tri-state sentinel** consumed internally by the readiness
computation rather than surfacing a `Result::Err` to the IPC boundary. This command always returns
`Ok(..)` to the frontend (matches the always-present discriminant `2` / `"ok"`/`"Success"` literals
noted above).

## Side effects (persistence, read-only this leaf)

- Reads the shared local **auth-file** store (`core::auth::load_auth_file`, path passed in via
  `a2+32/+40`, i.e. state captured at construction time — not independently resolved to an absolute
  path string this leaf) — same loader used elsewhere in the relay/account auth subsystem.
- Reads **`router-unlock-auth-marker.json`** (base dir at `a1+584/+592` from the caller's state
  struct) twice independently (once via `live_auth_state`, once via `can_restore_previous_auth` ->
  `read_marker`) — both reads parse the same on-disk JSON marker and look up (or otherwise consume)
  the boolean key **`aimami_router_unlock_auth`**.
- Conditionally `stat()`s a second **backup-marker** path (joined from the same base dir, literal
  fragment at `0x1012d11a6`, not independently decoded to a filename string this leaf) only when the
  primary marker's flag bit is set.
- Acquires/releases the `RelayManager` state mutex to clone a `RelayState` snapshot; the snapshot is
  dropped immediately after one boolean field is read out of it — no RelayState field is directly
  serialized into this command's response.

No writes/mutations of any kind observed in this command's call tree (read-only auth-readiness probe).

## Delta vs 1.0.9

Command is **entirely new in 1.1.8** — absent from the 1.0.9 baseline frontend bundle
(`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt` line 3) and no
`router_unlock_auth`/`niuniu@woyao.pro`/`router-unlock-auth-marker.json` string hits exist anywhere
under the 1.0.9 raw/intermediate trees (grep, 0 hits). This is a wholly new "virtual auth" / relay
unlock-gate feature surface, not a refactor of an existing 1.0.9 command.
