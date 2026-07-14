# Interface — `reveal_relay_api_key` (aimami 1.1.8, macos-arm64)

owner_va: `0x1004c48d0`
owner_symbol: `codexmate_lib::commands::relay::reveal_relay_api_key::hbc8d3f25d5bb8ef1`
module: `commands::relay`

## Request DTO

- `argKeys`: `["providerId"]`
- confirmed via: `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 113
  (`{"argKeys": ["providerId"], "command": "reveal_relay_api_key", ... "wrapper": "revealApiKey"}`)
  and `frontend-control-flow.jsonl` line 194
  (`terminal_call.command="reveal_relay_api_key"`, `wrapper="revealApiKey"`,
  `callsite={"callee":"ge.revealApiKey","file":"assets/relay-page-CybVyflj.js","line":38,"snippet":"ge.revealApiKey(l.id)"}`).
- `l.id` is the relay-provider row id on the Relay/Provider settings page — this command is the backend
  half of a per-row "reveal API key" affordance (e.g. an eye-icon / click-to-reveal control) on that page.

## Response fields

The owner builds a fixed IPC envelope shape shared with sibling relay commands (same pattern independently
confirmed in this session's `get_codex_router_auth_readiness` leaf): top-level discriminant `2`
(offset `a1+0`), followed by two heap string literals `"ok"` (2B, offsets `a1+8`/`a1+16`) and `"Success"`
(7B, offsets `a1+32`/`a1+40`) — exact serde field names producing this pair are **Unknown** (byte
values/offsets known, `type_query` not run this round — consistent absence-of-extraction, not a
fake-wall claim).

The actual payload is the `String` (ptr/len/cap) returned by `RelayManager::reveal_api_key`, written into
the envelope at offsets `a1+72`(ptr)/`a1+80`(len)/`a1+88`(cap):

| field (inferred name) | production | confidence |
|---|---|---|
| API key value (`apiKey`-shaped, exact serde name Unknown) | `Option<String>`, niche-encoded (`0x8000000000000000` = `isize::MIN` bit pattern = the standard rustc `Option<Vec<T>>`/`Option<String>` capacity niche) — `None` when no key is resolvable from any of the 3 tiers below (returns success envelope with an empty/absent key, **not an error**); `Some(String)` = the plaintext key value on any tier hit | Confirmed (byte-exact sentinel tracing across all 3 tiers; niche-optimization mechanism is standard, documented rustc behavior, not fabricated) |

No other response fields were observed being produced by this call tree.

## Resolution order (3-tier local lookup, zero network calls)

1. **In-memory cache** (`RelayManager::reveal_api_key`, mutex-guarded, `OnceBox`-lazily-initialized
   `Vec`-like table, 232B-stride entries, `memcmp` match on `providerId`). Hit → clone cached `String`,
   return immediately (hottest path, no filesystem/keychain touch at all).
2. **Local file cache** (`keychain::get_api_key`, shared helper — 6 total callers across the relay
   subsystem, not exclusive to this command):
   a. per-provider file at `<base_dir>/keys/<providerId>` (literal dir segment `"keys"`, 4B,
      confirmed via `get_bytes`) — plain-text read, `trim_matches`-cleaned.
   b. else, a JSON index file `<base_dir>/secrets.json` (literal filename, 12B, confirmed via
      `get_bytes`) — `serde_json`-parsed into a `HashMap`-shaped table, `providerId`-keyed SIMD hash
      probe, value is base64-encoded and is decoded + UTF8-validated on a hit.
3. **macOS Keychain** (`keychain::mac_keychain::get`, via the `security_framework` crate): generic
   password lookup, service label `"dev.aimami.relay"` (16B literal, confirmed via `get_bytes`),
   account = `providerId`. `errSecItemNotFound` (-25300) is treated as a benign "not found", any other
   Keychain error is surfaced as an `Err(message)` string. On a Keychain **hit**, the value is
   write-through cached back into the local file cache (tier 2) via `write_key_file`, salted/bound by a
   SHA-256 hash of `hostname + $USER-or-$USERNAME` (local machine-binding only — this hash is never
   observed leaving the process in this call tree; no `reqwest`/`hyper`/socket call appears anywhere in
   the 15-edge call tree below this command).

## Side effects

- Read-only in the common case (tiers 1–2 hit): no filesystem writes.
- On a Keychain hit (tier 3): writes/refreshes `<base_dir>/keys/<providerId>` (`DirBuilder::create` +
  `set_permissions` + `fs::write::inner`) — restrictive permission-setting confirmed present (exact mode
  bits not extracted this round; `DirBuilder` pre-umask mode literal observed = `0o777`, actual on-disk
  mode governed by process umask + the subsequent explicit `set_permissions` call).
- No network I/O anywhere in this call tree (Confirmed — contrast with the sibling
  `get_relay_provider_quota` command in this same round, which does perform `reqwest`/`hyper` HTTP calls;
  `reveal_relay_api_key` performs none).

## Delta vs 1.0.9

Command confirmed **NEW in 1.1.8** — absent from 1.0.9 (`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt`
line 9 lists `reveal_relay_api_key`; no `raw/aimami/1.0.9/**/reveal_relay_api_key/` directory exists;
0 hits for the command name across `raw/aimami/1.0.9` and `intermediate/aimami/1.0.9`).
