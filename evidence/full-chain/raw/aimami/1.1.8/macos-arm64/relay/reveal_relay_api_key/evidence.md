# Evidence — `reveal_relay_api_key` (aimami 1.1.8, macos-arm64)

session: `<审计会话>`
owner_va: `0x1004c48d0`
owner_symbol: `codexmate_lib::commands::relay::reveal_relay_api_key::hbc8d3f25d5bb8ef1`
分析工具就绪门
`idb_path` containing `AiMaMi 1.1.8 universal.app`, `uptime_sec=229568.385` — checked before any
decompile/xrefs_to/callees/get_string/get_bytes call this round.
owner-gate re-check before write: `find raw/aimami/1.1.8/macos-arm64/*/reveal_relay_api_key/` returned
empty prior to this write; `grep -c "reveal_relay_api_key" INDEX.jsonl` = 0 prior to this write → gate
= ALLOW/first, no collision, no takeover token needed. `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl`
already recorded `{"command": "reveal_relay_api_key", "module": "commands::relay", "owner_va": "0x1004c48d0",
"owner_symbol": "__ZN13codexmate_lib8commands5relay20reveal_relay_api_key17hbc8d3f25d5bb8ef1E",
"source": "func_query_clean_top_level_symbol"}` (angle-A discovery pass only, no full leaf bundle) — this
leaf supplies the first full raw pseudocode/call-tree/interface/evidence/gate-report package.

## Confirmed

1. Owner `reveal_relay_api_key` (0x1004c48d0, 291B, 69 instructions, 9 basic blocks) has exactly 1 caller
   (`codexmate_lib::run::{{closure}}::{{closure}}` @0x1002fda80, call site 0x1002fdc15 via `xrefs_to`) —
   live, dispatcher-wired IPC endpoint, not dead code.
2. Frontend cross-confirms the same command name and argument shape: `ipc-contracts.jsonl` line 113
   records `{"argKeys": ["providerId"], "command": "reveal_relay_api_key", "wrapper": "revealApiKey"}`;
   `frontend-control-flow.jsonl` line 194 traces the concrete call site `ge.revealApiKey(l.id)` in
   `assets/relay-page-CybVyflj.js` line 38 — a per-row action on the Relay/Provider settings page.
3. The owner is a thin 1-callee wrapper: its sole business-logic callee is
   `RelayManager::reveal_api_key` (0x1005c0ce0, 753B, 178 instr, 38 BB, caller_count=1 — dedicated,
   not shared with any other command).
4. `RelayManager::reveal_api_key` implements a mutex-guarded (`std::sys::pal::unix::sync::mutex::Mutex`),
   `OnceBox`-lazily-initialized in-memory table (232B-stride entries) scanned via `memcmp` on the
   `providerId` argument; on a hit it clones the cached `String` and returns without touching disk or
   Keychain at all. On a miss (sentinel `0x8000000000000000`) it falls through to
   `keychain::get_api_key` (0x100415d60).
5. `keychain::get_api_key` (4045B, 793 instr, 144 BB) is a **shared** helper with 6 total callers
   confirmed via `func_profile`: `codex_diagnostic::run_diagnostics`, `storage::hydrate_secrets`,
   `storage::lazy_load_api_key`, `RelayManager::reveal_api_key` (this leaf),
   `RelayManager::resolve_draft_api_key`, `relay::io::export_to_file` — i.e. this is generic
   "resolve a provider's stored API key" plumbing reused across diagnostics/startup-hydration/lazy-load/
   reveal/draft-resolution/export, not code written specifically to expose secrets to this one command.
6. `get_api_key` implements a strict 3-tier local resolution order, byte-confirmed in this order in the
   decompiled control flow: (a) per-provider cache file at `<base_dir>/keys/<providerId>` via
   `std::fs::read_to_string::inner`; (b) a JSON index file `<base_dir>/secrets.json` (literal string,
   exactly 12 bytes at 0x1012c46b0, confirmed via `get_bytes`) parsed via `serde_json::de::from_trait`
   into a `hashbrown`-backed hash table, probed with a SIMD-accelerated `hash_one`+`RawTable` scan keyed
   by `providerId`, `memcmp`-confirmed, value `base64`-decoded then UTF8-validated; (c) macOS Keychain
   via `keychain::mac_keychain::get` (0x1001e9620) — only reached if both (a) and (b) miss/fail.
7. `mac_keychain::get` (485B, 108 instr, 14 BB, caller_count=1) calls exactly the `security_framework`
   crate's `PasswordOptions::new_generic_password`/`use_protected_keychain` + `passwords::generic_password`
   — a well-known, standard open-source Rust wrapper around Apple's Security.framework Keychain Services
   (the same crate used by many mainstream macOS Rust tools for credential storage). Keychain service
   label = `"dev.aimami.relay"` (16 bytes, confirmed byte-exact via `get_bytes` at 0x1012c46a0); account =
   `providerId`. macOS error code `-25300` (`errSecItemNotFound`) is explicitly checked and mapped to a
   benign "not found" result, not an error.
8. On a Keychain hit, `get_api_key` computes `SHA-256("<hostname><$USER-or-$USERNAME>")` (via the
   `sha2` crate's `compress256`, called 3x for multi-block hashing) and calls `write_key_file`
   (0x100417190, 790B, 204 instr, 34 BB, caller_count=4 — also a shared cache-writer, not exclusive to
   this command) to write the resolved key back into the tier-2 file cache
   (`std::fs::DirBuilder::_create` + `std::sys::fs::set_permissions` + `std::fs::write::inner`).
9. **Zero network calls appear anywhere in this 15-edge, depth-4 call tree** — no `reqwest`, no `hyper`,
   no raw socket primitive is reachable from the owner down through any of the 5 decompiled functions.
   This is a purely local read of a locally-stored, user-owned credential (in-memory cache → local file
   cache → OS Keychain), directly contrasted against the sibling `get_relay_provider_quota` command
   analyzed earlier this session, which does perform outbound HTTP calls to provider quota endpoints.
10. Command confirmed **NEW in 1.1.8**: `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt`
    line 9 lists `reveal_relay_api_key`; a targeted grep for the command name across the entirety of
    `raw/aimami/1.0.9` and `intermediate/aimami/1.0.9` returned 0 hits; no
    `raw/aimami/1.0.9/**/reveal_relay_api_key/` directory exists.

## Inferred

1. The response's `Option<String>` payload (niche-encoded via the `0x8000000000000000` /
   `isize::MIN`-bit-pattern sentinel) most likely serializes to a frontend field named `apiKey` or
   similar, matching the `revealApiKey` wrapper name on the frontend side — the exact serde field name
   was not independently confirmed via `type_query`/struct-layout inspection this round.
2. The shared `"ok"`/`"Success"` envelope pair (discriminant `2`, literals at owner offsets
   `a1+8..16`/`a1+32..40`) is inferred to be a generic `IpcResult<T>`-style wrapper used across many
   `commands::relay::*` endpoints, based on byte-for-byte identical shape independently observed in this
   session's separate `get_codex_router_auth_readiness` leaf — not re-verified against a shared type
   definition this round.
3. The `DirBuilder::create` mode literal `0o777` observed in `write_key_file` is inferred to be a
   pre-umask value only (standard Rust `DirBuilder` semantics apply process umask before the directory's
   final on-disk mode is set) — the actual resulting directory permission bits were not independently
   read back from a live filesystem this round.
4. `write_key_file`'s explicit `std::sys::fs::set_permissions` call (present on both the directory-create
   and file-write branches) is inferred to be the mechanism restricting the cache file to the owning user
   only, consistent with this repository's own project convention for locally-stored credential files —
   the exact mode value passed to `set_permissions` was not extracted via `get_bytes`/`type_query` this
   round (argument register value not statically resolved in the decompiled view).
5. The per-row "reveal" UI affordance on `relay-page-CybVyflj.js` (frontend wrapper `revealApiKey`,
   `ge.revealApiKey(l.id)`) is inferred to be a masked-to-plaintext toggle (e.g. an eye icon) on each
   configured relay-provider row, based on the command's argument shape (`providerId` only, no
   confirmation/auth-challenge argument) and the naming convention `reveal*` — the exact frontend
   rendering/masking behavior was not traced (out of scope for this backend-focused leaf; frontend DOM/
   component behavior would require a separate frontend-focused pass).

## Unknown

1. Exact serde/DTO field name for the response's key-value payload and for the `"ok"`/`"Success"` pair —
   byte values and stack offsets are known, but `type_query`/`declare_type` against the live 1.1.8
   response struct was not run this round. `recovery_attempts`: attempted to resolve via literal string
   proximity in the owner's pseudocode only; no independent struct-layout query issued.
2. Full on-disk layout/schema of `secrets.json` beyond "some `hashbrown`-shaped map keyed by providerId,
   value is base64 text" — exact key names, whether it stores metadata alongside the key (e.g. last-used
   timestamp), was not decompiled past the `serde_json::de::from_trait` boundary.
   `recovery_attempts`: reviewed `get_api_key`'s post-parse `RawTable` probe logic for field-name literals;
   none surfaced within the traced call tree (the map's value type's own field names, if any, live inside
   a `serde`-derived `Deserialize` impl not reached by this leaf's call tree).
3. Exact resulting Unix permission bits on the tier-2 cache file/directory after `set_permissions` —
   the literal mode argument passed to `std::sys::fs::set_permissions` in `write_key_file` was not
   independently extracted via `get_bytes`/register-constant inspection this round.
   `recovery_attempts`: inspected the `func_profile` constant list for `write_key_file`; no unambiguous
   mode-bits constant was distinguishable from unrelated stack-frame constants in the sampled set.
4. Whether the in-memory (tier-1) cache in `RelayManager` is ever populated by anything other than a
   prior call to this same 3-tier resolution chain (e.g. whether `hydrate_secrets` at startup seeds it
   directly) — `hydrate_secrets` itself was not decompiled this round (out of scope; it is one of
   `get_api_key`'s 6 callers, noted only via `func_profile`).
   `recovery_attempts`: none this round; flagged as a natural follow-up leaf if `storage::hydrate_secrets`
   is prioritized in a future batch.
5. Windows-x64 equivalent implementation of `reveal_relay_api_key` (same-platform cross-check) — out of
   scope for this macOS-focused leaf; tracked separately per `REVERSE-STATUS.md` round scope (this
   session's windows-x64 batch has covered other commands but not yet this one at time of writing).

## Delta vs 1.0.9 baseline

Command is a **clean addition** in 1.1.8, not a modification of any pre-existing 1.0.9 command — no
`reveal_*`-named or `*_api_key`-named relay command exists in the 1.0.9 baseline's frontend or backend
surface (0 hits on a targeted grep across `raw/aimami/1.0.9` and `intermediate/aimami/1.0.9` for
`reveal_relay_api_key`, `reveal_api_key`, and `RelayManager::reveal_api_key`). This is consistent with
the broader 1.1.8 "relay" subsystem being new-in-this-version overall (sibling commands
`get_relay_provider_quota`, `reorder_relay_providers`, `set_relay_display_tags`,
`get_codex_router_auth_readiness` are likewise all confirmed-new in this same delta round per
`AI-EXECUTION-QUEUE.md` line 814's 9-command new-surface list, of which `reveal_relay_api_key` is one).

## Fake-wall check

`genuine_ceiling=false`; `accepted_unknown` **not claimed** anywhere in this leaf. All 5 traced functions
(owner + 4 callees) received a real Hex-Rays decompiled body with 0 truncation (no `decompile_truncated`
field present in any of the 5 `decompile()` responses; largest body, `get_api_key` at 4045B/793
instructions, rendered in full in one call). No `drop_in_place`-only stub was used to artificially inflate
depth. The 5 Unknown items above are plain absence-of-extraction records with `recovery_attempts` noted,
not decompile-ceiling excuses — no async/await state machine, no vtable dynamic dispatch, and no
oversized-body truncation was encountered anywhere in this command's call tree.
