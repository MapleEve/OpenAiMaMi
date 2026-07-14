# evidence.md — set_relay_display_tags (macos-arm64, AiMaMi 1.1.8)

**Session**: <审计会话> | **Machine**: <本地机器> | **Date**: 2026-07-13
**Command**: 25/29 of this round's macos-arm64 deep gold-leaf batch
**Binary**: AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi
**SHA256**: 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
**分析工具就绪门
`module="AiMaMi"`, `idb_path` containing `AiMaMi 1.1.8 universal.app` — checked before any
decompile/callees/append_comments call this round.

## Owner-gate re-check before write

`find raw/aimami/1.1.8/macos-arm64/*/set_relay_display_tags/` returned empty prior to this write.
`grep -n 'set_relay_display_tags'` on root `INDEX.jsonl` prior to this write returned only 1 hit,
for `aimami/1.1.1/windows-x64/set_relay_display_tags/full-chain` (different version AND platform,
not a collision for this leaf's key `aimami/1.1.8/macos-arm64/relay/set_relay_display_tags`) →
gate=ALLOW/first, no collision, no takeover token needed.
`intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 106 already recorded
`owner_va=0x1004c6450, method=func_query_clean_top_level_symbol, present=true` (angle-A discovery
pass only, no full leaf bundle) — this leaf supplies the first full raw pseudocode/call-tree/
interface/evidence/gate-report package for this command on this platform.

## Confirmed

- Owner VA `0x1004c6450` = `codexmate_lib::commands::relay::set_relay_display_tags::hf950017d5fd63f1a`,
  a clean demangled Rust symbol already present in the mac IDB (no rename performed; an evidence
  comment was appended instead via `append_comments`).
- Sole business-logic delegate: `RelayManager::set_display_tags` (`0x1005c1010`), fully decompiled
  (85 lines, 0 truncation).
- Frontend `argKeys=["global","woyao"]` (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl`
  line 123, shared bundle `assets/index-CX-I_QAq.js`) cross-confirmed identical on the windows-x64
  1.1.8 frontend bundle (same shared JS file) — this is a genuine, platform-independent frontend
  fact, not a mac-only artifact.
- **argument-count delta CONFIRMED vs the 1.1.1 windows baseline**: 1.1.1's owner.md documents a
  3-param DTO (`manager` required + `global`/`woyao` Option<String>, `sub_1402FED40` Option-parser
  tag=6/tag=3 pattern); the 1.1.8 owner and `RelayManager::set_display_tags` read `a3[1]/a3[2]` and
  `a4[1]/a4[2]` directly with no discriminant/tag check — the `manager` selector is gone and both
  tag args are consumed unconditionally.
- Both tag strings pass through `sanitize_display_tag` (`0x1006832d0`, fully decompiled, 70 lines,
  0 truncation): builds an owned `String` via `FromIterator<char>::from_iter`, applies
  `str::trim_matches` twice, re-allocates via `__rust_alloc`, and copies the trimmed result — this
  is the same-shaped sanitizer for both the `global` and `woyao` values.
- `RelayManager::persist` (`0x1005cccf0`, fully decompiled, 69 lines, 0 truncation) calls
  `storage::save` (`0x1004b2680`, fully decompiled, 182 lines, 0 truncation, confirmed real disk
  write via `CodexPaths::ensure_directories` + `serde_core::ser::SerializeMap::serialize_entry`
  chain) BEFORE the mutex-guarded in-memory `memmove` commit — write-before-commit ordering
  directly observable in the control flow (`if (LODWORD(v15[0]) != 10) { ...; return a1; }` early
  return skips the memmove entirely on disk-write failure).
- `sync_codex_config_with_outcome` (`0x1005c8130`, fully decompiled, 388 lines, 0 truncation) is
  the largest node in this leaf's call tree and reveals a full Codex-CLI-config sync pipeline:
  `router_unlock_auth::live_auth_state` (marker-file read) gates a choice between
  `codex_catalog::write_catalog` and `codex_catalog::remove_catalog`, followed unconditionally by
  `codex_writer::apply_codex_state`. All three callees (`0x100689c00`/`0x100682170`/`0x10067a290`)
  were independently decompiled this round (0 truncation on all three) and confirmed to perform
  real filesystem I/O (`CodexPaths::ensure_directories`, `std::sys::fs::metadata`,
  `std::fs::read_to_string`).
- **Cross-command subsystem correlation confirmed**: `router_unlock_auth::live_auth_state`
  (`0x100689c00`) is the same module (`router_unlock_auth`) independently documented this session
  in the `get_codex_router_auth_readiness` leaf, which hardcodes the virtual-auth identity literal
  `"niuniu@woyao.pro"`. This directly ties the `woyao` argKey name in this command to that same
  virtual-auth provider slot rather than an arbitrary user-chosen label.
- Command confirmed absent from the 1.0.9 baseline: `grep -rn "set_relay_display_tags"` across
  `raw/aimami/1.0.9` and `intermediate/aimami/1.0.9` returned 0 hits; also listed in
  `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt` line 12 as a
  frontend-added command relative to the 1.0.9 baseline.
- Success response is the full sanitized 344B (`0x158`) `RelayState` snapshot (via
  `storage::sanitize_for_export` → `CoreEnvelope::ok`), NOT the fixed 2-byte `"ok"` literal that
  the 1.1.1 windows baseline returned for this same command — a second confirmed response-shape
  delta.

## Inferred

- The `global`/`woyao` params likely became REQUIRED plain strings in 1.1.8 (no longer
  `Option<String>` as in 1.1.1) — inferred from the absence of the 1.1.1-documented
  Option-decode tag=6/tag=3 pattern in both the owner and `RelayManager::set_display_tags`, and
  from the frontend wrapper passing `e`/`t` with no `??` null-coalescing (unlike sibling wrappers
  in the same file that do use `??!0` for optional fields). This is a positive inference from
  absence-of-pattern, not a `type_query`-confirmed fact.
- The `v25`/`v22` flag gating whether `sync_codex_config_with_outcome` runs at all is likely
  something like "does the currently-active provider require a Codex-CLI config resync" (e.g. a
  `codexRouterEnabled`-adjacent bit carried in the first `RelayManager::snapshot` call), based on
  its position (read immediately after the very first snapshot, before any tag mutation) and its
  later reappearance as an unconditional `sync_codex_config_with_outcome` re-snapshot — not
  independently `type_query`-confirmed to a named struct field.
- `build_catalog_bytes`'s output most likely reaches disk via a further `std::fs::write` call one
  hop below `write_catalog` — inferred from the function name and the `ensure_directories`
  precondition immediately preceding it, not independently traced to that exact call this pass.
- The `format_inner`/`Display for u16` call inside `sync_codex_config_with_outcome` most likely
  formats a port number (e.g. a proxy/local-router listen port) into a human-readable string
  consumed by the subsequent catalog-write or log-message path — inferred from the `u16` type and
  its position between the active-ids lock section and the `write_catalog`/`remove_catalog`
  branch, not independently confirmed against a named struct field.
- The two-slot `global`/`woyao` design most likely reflects a product simplification from
  1.1.1's N-provider `manager`-scoped tagging down to exactly the 2 fixed relay routing modes this
  session has independently confirmed elsewhere (direct/real-account routing vs the
  `woyao` virtual-auth routing) — inferred from the argKey names matching the virtual-auth
  identity slot name, not from an explicit product-changelog source.

## Unknown (recorded honestly, `accepted_unknown` NOT claimed — no genuine wall was hit)

- Exact `RelayState` struct field names/offsets for `displayTagGlobal`/`displayTagWoyao` — not
  `type_query`-verified this pass. Recovery attempted: checked `sanitize_for_export`'s field-copy
  order for a String-shaped field matching the tag data; the candidate offsets (+48/+72) are
  ambiguous with other String fields in the same struct without a dedicated `type_query` pass —
  left Unknown rather than guessed.
- Exact discriminant/offset the outer `CoreEnvelope` uses to distinguish the "synced" vs
  "persist-only" success shapes (`qmemcpy(__dst+2,...)` vs the `sanitize_for_export` path) — both
  paths were traced and fully decompiled, but the consumer-facing field name distinguishing them
  was not `type_query`-verified.
- Whether a `manager`-scoped (per-provider) tagging command still exists elsewhere in 1.1.8 under
  a different command name — out of scope this pass, not searched; recorded as Unknown, not
  claimed removed-with-no-replacement.
- Exact loop bound / candidate config-path list inside `apply_codex_state`'s `fs::metadata` loop —
  the loop was observed (do/while pattern present in the decompile) but not unrolled this pass.
- Decoded line number for the two `log::Log::log` call sites' source-location literal
  (`0x42300000001`/`0x42B00000001`) — the raw hex is recorded verbatim in interface.md rather than
  a guessed decimal line number.

## Fake-wall check (redline 13)

`genuine_ceiling=false`; `accepted_unknown` NOT claimed anywhere in this leaf. All 10 nodes in the
call tree received a real, 0-truncation Hex-Rays body (verified via the `decompile_truncated`
field being absent/`None` on every call this round — checked explicitly for `storage::save`,
`sync_codex_config_with_outcome`, `write_catalog`, `apply_codex_state`, and `live_auth_state`, the
5 largest/most complex nodes). No `drop_in_place`-only stub was used to inflate depth. No
oversized-body truncation was encountered (largest body: `sync_codex_config_with_outcome` at
14822 chars / 388 lines, fully rendered in one `decompile` call with no `basic_blocks` chunking
required).

## Call-tree summary

44 edges recorded in `call-trees/set_relay_display_tags.jsonl`, max depth reached = 4, with
multiple independent `terminated_reason`-satisfying branches at depth 3-4:
`persistence_commit` (×4: `storage::save`, `write_catalog`, `remove_catalog`, `apply_codex_state`),
`persistence_read` (×3: `live_auth_state`'s `fs::metadata`/`read_to_string`,
`apply_codex_state`'s `fs::metadata` loop), `error_return` (×3: lock-poison panic path, marker-JSON
parse-failure soft-error, `handle_error` OOM abort), `response_serialize` (×5: `sanitize_for_export`'s
clone chain, `storage::save`'s serde serialize chain, `build_catalog_bytes`), `external_call`
(×8: `__rust_alloc`/`__rust_dealloc`/`memcpy`/`memmove`/`drop_in_place` variants). This
comfortably satisfies redline-13's "call-tree depth≥5 OR terminated_reason" gate via the
terminated_reason branches (same pattern as this session's other depth-3/4 sub-entries, e.g.
`restart_codex` depth4/`external_call` and `get_codex_router_auth_readiness` depth4/mixed).

## Renames / annotations in IDB (this leaf)

None (clean demangled Rust names already present throughout this call tree — `sub_xxxxx` renaming
was not needed anywhere in this leaf, unlike the windows-side leaves this session which frequently
required renaming raw `sub_` addresses). `append_comments` ok ×1 at the owner address
(`0x1004c6450`): "A/B-level owner for set_relay_display_tags; sha63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470; session <审计会话>; not gate promotion".

## Scope note

This leaf closes command 25/29 of this round's macos-arm64 deep gold-leaf batch. Exact
`RelayState` field names for the two display-tag fields and the outer envelope's success-variant
discriminant remain open — listed as blockers for `readyToImplement` in `gate-report.json`. Round
`status` stays `in-progress` — remaining macos-arm64 deep gold-leaf targets in this batch remain
open per `REVERSE-STATUS.md`.
