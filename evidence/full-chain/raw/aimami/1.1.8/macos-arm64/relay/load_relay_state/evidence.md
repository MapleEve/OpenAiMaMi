# Raw Leaf Evidence: load_relay_state
## AiMaMi 1.1.8 macOS (arm64/universal .app, x86_64 IDB slice analyzed — app-level findings, arch-noise filtered per 分析工具就绪门

**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-07-13
**module**: `AiMaMi` (健康检查 confirmed `status=ok`, `反编译就绪=true`, `uptime_sec=224934.015`, `idb_path=.../AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi.i64` prior to any decompile/rename/set_comments call this sub-step)
**owner VA**: `0x1004c3c20`
**owner symbol**: `codexmate_lib::commands::relay::load_relay_state::h32179ca79633a42f`
**baseline**: `raw/aimami/1.0.9/macos/relay/load_relay_state/` (owner `0x1001dff6c`, `h8ced6f0d700b9817`)
**owner-map source**: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 55 (`method=func_query_clean_top_level_symbol`)
**owner-gate re-check before write**: `find raw/aimami/1.1.8/macos-arm64/*/load_relay_state/` returned empty prior to this write; `grep -n 'load_relay_state' INDEX.jsonl` (9 hits) all attributable to 1.0.9 windows/macos baseline entries or this round's own `mac-shard-4` version-delta shard summary (no prior full-leaf key for `aimami/1.1.8/macos-arm64/*/load_relay_state`) → gate=ALLOW/first, no collision, no takeover token needed.

---

## Confirmed

1. Owner decompiled with 0 truncation (`decompile_truncated=None`, 3259-byte pseudocode text) at
   `0x1004c3c20`. Direct callee list (9 entries) retrieved via `callees()` and cross-matched
   1:1 against every call site visible in the owner's own pseudocode.
2. The 1.0.9 owner's inline manual `apiKey`-zero loop (documented in the baseline as a
   vectorized 4-at-a-time loop over 208-byte `RelayProvider` entries, zeroing offset+88) is
   **absent** from the 1.1.8 owner body. In its place the owner now calls a single new function,
   `codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92` (`0x1004b14b0`),
   immediately after `RelayManager::snapshot`.
3. `sanitize_for_export` was independently decompiled (0 truncation, 5530 bytes) and confirmed to
   perform the field-by-field clone of `RelayState` plus the equivalent zero-out at
   entry-offset+88 — but now over 232-byte entries (up from 208 bytes), confirmed via the
   `232 * v14` / `v18 += 29` (29 qwords = 232 bytes) stride arithmetic in the scrub loop.
4. `0x1004b14b0` is the SAME VA independently found this delta round as a new callee inside
   `activate_relay_provider` and `deactivate_relay_provider` (`mac-shard-1`) and
   `diagnose_codex_router` (`mac-shard-2`) — this is the 4th confirmed call site of this
   centralized function found in this round, per `intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-4.json`.
5. `ensure_proxy_started` (`0x1005c1610`, full decompile 19355 bytes, 0 truncation) retains the
   exact 1.0.9-documented shape: `TcpStream::connect_timeout` on `127.0.0.1:<port>` with a
   300ms timeout and a 50ms-sleep single retry, then (on continued failure or on successful
   spawn) a persistence write via `storage::save` at two call sites.
6. `storage::save` (`0x1004b2680`, full decompile 8195 bytes, 0 truncation) confirmed to call
   `codexmate_lib::core::relay::atomic_write::write_atomic` (`0x10039e600`) as its persistence
   commit step; `write_atomic` itself (full decompile 6464 bytes, 0 truncation) performs a
   genuine temp-file-write + `fsync` + atomic `rename()` + parent-dir `fsync` sequence, with
   `remove_file` cleanup on rename failure — functionally identical to the 1.0.9 baseline's
   documented `atomic_write::write_atomic` leaf.
7. Frontend↔backend interface cross-check: `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl`
   records `argKeys=[]` for `load_relay_state` (wrapper `loadState`, `params: "()"`),
   byte-matching the backend owner's implicit no-argument IPC signature and the 1.0.9
   baseline's documented `argKeys: none`.
8. Call-tree closure: 24 nodes total across depths 0-4, with 6 independent branches each
   reaching a `terminated_reason` (`external_call` via `TcpStream::connect_timeout`;
   `persistence_commit` via the `atomic_write`→`{OpenOptions::_open,write_all,sync_data,rename,sync_parent_dir}`
   cluster; `response_serialize` via `RelayState::clone`(snapshot), `sanitize_for_export`'s
   Vec/String/CodexRouteDiagnostic clones, and `CoreEnvelope::ok`; `error_return` via
   `CoreError::fmt`/`unwrap_failed`) — satisfies redline-13's depth≥5-OR-terminated_reason gate
   via the terminated_reason branches (`max_depth_reached=4`, honestly reported, not inflated).

## Inferred

1. The `Option<String>` field at struct offset+96 (guarded clone in `sanitize_for_export`,
   `!__OFSUB__(0, *(_QWORD*)(a2+96))` discriminant check) is inferred to be the 1.0.9 baseline's
   documented `active: Option<String>` (currently-active provider id) by shape and relative
   position, not independently re-derived from a fresh JSON-key string this pass.
2. The manual `serde_core::ser::SerializeMap::serialize_entry` field order in `storage::save`
   is inferred to reflect ascending struct-offset order (as is typical of serde-derive'd
   struct serialization), which is how offsets were paired with byte-lengths in the interface
   table — this pairing is a structural inference, not a directly-read symbol-table mapping.
3. `codexRouterEnabled` (18 chars) and `blockOfficialPassthrough` (24 chars) are inferred from
   exact string-length match against the sibling command names `set_codex_router_enabled` and
   `set_block_official_passthrough` already documented in the 1.0.9 relay
   consumer-bundle-closure command list — a strong but not byte-verified match (the actual
   rodata bytes were not read this pass; see Unknown #1 below for why).
4. The two-Vec-field layout at offsets+0/+24 is inferred to be `providers`/`grants` (per the
   1.0.9 baseline's 5-field list: `providers`, `active`, `grants`, `proxyStatus`,
   `schemaVersion`) purely from baseline continuity — the offset+24 field's actual JSON key
   text was not independently confirmed this pass (see Unknown #2).
5. `tokio::runtime::Runtime::block_on`'s target future was not decompiled this pass (it is an
   opaque vtable-style async trampoline in the Rust ABI); its role as "spawn the proxy process
   if not already running" is inferred from the 1.0.9 baseline's own prose description of this
   call site plus the fact that it sits between the TCP-probe-failure branch and the
   `storage::save` persistence-write branch, matching the baseline's causal ordering.

## Unknown

1. Exact JSON key text for 6 of the 8 `storage::save` `serialize_entry` calls (offsets +24,
   +48, +128, +152, plus the un-recaptured 8th call at +152/len15 noted in pseudocode/0004) —
   byte length and struct offset are known from the decompile, but the actual rodata string
   bytes were not recovered. `func_query` on the substituted `anon_3e4c14ac1826b92abbb84b981a88c995_NNN`
   symbol names (recovery_attempts: queried 4 of the ~8 anon names directly) returned an
   unrelated generic function listing, not a resolved VA — `get_bytes` was not attempted because
   no VA was available to pass it. This is a genuine gap, not `accepted_unknown`/`genuine_ceiling`
   (no fake-wall claimed; the gap is left open for a future pass with a different string-recovery
   route, e.g. `find_regex` scoped to the `.rodata` range near `0x1004b2xxx`).
2. Whether `sanitize_for_export`'s scrub covers exactly one field (the +88 apiKey-equivalent) or
   additional fields within the now-232-byte `RelayProvider` entry — the +24 bytes of struct
   growth vs 1.0.9's 208-byte entry were not attributed to specific new field(s) this pass.
3. The exact discriminant/field name for the `Option<CodexRouteDiagnostic>` at offset+176 in
   the response JSON (confirmed present and cloned, per Confirmed #3 above and the
   `sanitize_for_export` pseudocode, but its serialized key text was not independently
   recovered — it is not among the 8 keys traced through `storage::save`, suggesting it may be
   IPC-response-only and not persisted to `relay.json`, which is itself an open question).
4. Whether the 1.1.8 `ensure_proxy_started`'s two `storage::save` call sites differ in any
   field-population semantics from each other beyond the surrounding bookkeeping-field
   initialization shown in pseudocode/0002 — both were confirmed structurally identical in
   shape (same callee, same 4-arg signature) but a byte-level diff of the immediately
   preceding field-init blocks was not performed.
5. Windows-x64 equivalent of this 1.1.8 delta (whether the same `sanitize_for_export`
   centralization pattern exists on Windows) — out of scope for this mac-only sub-step; tracked
   separately under this round's windows-x64 deep-gold-leaf batch (per REVERSE-STATUS.md
   in-progress claim `targets` list).

---

## Delta summary vs 1.0.9 baseline

The core behavioral contract of `load_relay_state` (no-argument read command, auto-starts the
relay proxy as a side effect, returns a scrubbed/sanitized `RelayState` snapshot, persists state
via an atomic temp-write+fsync+rename pattern) is **unchanged** between 1.0.9 and 1.1.8. The
concrete code-level delta is a **refactor, not a behavior change**: the sensitive-field
(`apiKey`) scrubbing logic that lived as an inline vectorized loop directly in the 1.0.9 owner
has been extracted into a new shared function, `sanitize_for_export`, that is now reused across
at least 4 relay commands (`load_relay_state`, `activate_relay_provider`,
`deactivate_relay_provider`, `diagnose_codex_router`) confirmed this delta round. Alongside this
refactor, the `RelayProvider` struct grew by 24 bytes per entry (208B→232B) and `RelayState`
gained at least one new field, `Option<CodexRouteDiagnostic>`, that is carried through the
sanitize/clone path but whose exact serialized field name and persistence-vs-IPC-only scope
remain open questions (see Unknown #3). The apiKey scrub itself remains anchored at the same
relative byte offset (+88) within each provider entry, so the security property (no raw API key
ever reaches the IPC boundary) is preserved across the refactor.

## Fake-wall check

`genuine_ceiling=false`; `accepted_unknown` NOT claimed anywhere in this leaf. All 5 functions
inspected (owner, `ensure_proxy_started`, `sanitize_for_export`, `storage::save`,
`atomic_write::write_atomic`) returned full 0-truncation decompiles — no `drop_in_place`-only
stub was used to inflate call-tree depth, no oversized-body bail-out was taken (the one large
body, `ensure_proxy_started` at 19355 bytes, was fully decompiled and read; only the *archived*
pseudocode file for it is an annotated excerpt, for file-size hygiene, not because the body was
too large to inspect). The 5 Unknown items above are honest gaps with documented
`recovery_attempts` (func_query on anon symbol names), not fake-wall claims.
