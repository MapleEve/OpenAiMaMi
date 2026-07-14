# evidence — diagnose_codex_router (AiMaMi 1.1.8, macos-arm64 label)

session: <审计会话> · machine: <本地机器>
owner_va: 0x1004c4cf0 · owner_symbol: `codexmate_lib::commands::relay::diagnose_codex_router::hd99dd9f11da0e34e`
module: `commands::relay` (per `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 19)
source: owner VA resolved from owner-map-118.jsonl (angle A, func_query), cross-confirmed this round against
`intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-2.json` (command already classified
`verdict=delta` in that earlier shard pass — this leaf supplies the first full raw pseudocode/call-tree/
interface/evidence package for it, since mac-shard-2 only recorded a summary-level delta classification with
one pseudocode-free narrative, not a full leaf bundle with independently re-decompiled callee bodies).
binary: `raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi` — 分析工具就绪门
(`健康检查`: status=ok, uptime_sec=210987.778, 反编译就绪=true, module=`AiMaMi`, idb_path contains
`AiMaMi 1.1.8 universal.app`) before any decompile/callees/xrefs_to/get_bytes call this round.

**arch_noise_filter_applied**: this mac 1.1.8 IDB decompiles the fat binary's x86_64 slice (documented
session-wide in `REVERSE-STATUS.md` mac-shard-3/8 sub-entry). All findings below are demangled-symbol /
literal-string / control-flow level; no register/ABI/calling-convention/stack-layout/size noise is asserted
as a behavioral delta.

## Confirmed

- `diagnose_codex_router` is a real `#[tauri::command]` handler, confirmed reachable from
  `codexmate_lib::run::{{closure}}::{{closure}}` (0x1002fd160) via `xrefs_to` (sole call site 0x1002fd273) into
  `codexmate_lib::commands::relay::diagnose_codex_router` (0x1004c4cf0) — a live, dispatcher-wired IPC
  endpoint, not dead code. Frontend confirms `argKeys=[]` and terminal invoke call
  (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 132;
  `frontend-control-flow.jsonl` line 193, `relay-page-CybVyflj.js:38`).
- The owner (0x1004c4cf0, full decompile, 17363-byte pseudocode, no bail) calls, in order:
  `RelayManager::snapshot` → `sanitize_for_export` (**new this version**) →
  `drop_in_place<RelayState>` (drops the *unsanitized* snapshot) → conditional
  `CodexRouteDiagnostic::clone` → `RelayManager::codex_config_stale_reason` →
  `Vec<T>::clone` (provider-id list) → `CodexPaths::resolve_codex_home` + `from_home` →
  `fs::read_to_string` on config.toml → `read_top_level_string_value` (key "model_provider", 14B) →
  `Path::_join` (literal "codex_router_catalog.json", 25B) → `read_top_level_string_value` (key
  "model_catalog_json", 18B) → `PathBuf::eq` (compares resolved catalog path) →
  `user_top_level_profile` → `Path::_join` (catalog path, again) → `fs::metadata` (config.toml
  existence) → one of 6 `format_inner`-built Chinese summary strings → assembles the 0x140-byte result
  struct at `a2+72` with ok header at `+392/+396`. All 12 distinct direct callees resolved via a live
  `callees()` MCP call against the owner address (26 total callee edges including std/alloc/core drop-glue),
  not inferred.
- **NEW callee this version, `sanitize_for_export` (0x1004b14b0, full decompile, 5530-byte pseudocode)**:
  clones every field of the `RelayState` struct (providers `Vec`, 4 `String` fields, optional
  `CodexRouteDiagnostic`), then zeroes an 8-byte field at offset **+88** of every cloned provider record
  (232-byte struct stride) via a chunked/vectorized zero-loop, and returns the sanitized clone by value.
  This is the same API-key-redaction helper already found newly-added to `activate_relay_provider` /
  `deactivate_relay_provider` in this session's mac-shard-1 pass, and to `load_relay_state` in mac-shard-3
  (win-shard) — the +88 offset is byte-identical across all these call sites, confirming a single shared
  redaction function was introduced in 1.1.8 to replace scattered inline zero-writes.
- **Tracing the sanitized-clone data flow (new depth-1 finding this leaf, not in mac-shard-2's summary)**:
  the sanitized clone (`v35` in `pseudocode/0001_diagnose_codex_router_owner.c`) is written once by
  `sanitize_for_export` and never read again anywhere in the owner body — its only other appearance is a
  `drop_in_place<RelayState>` call at the very end of the function (0x1004c5598), running its `Drop` glue
  at scope exit. No field of it is copied into the response struct (`v50`/`v28`). The *original*
  (unsanitized) snapshot (`__src`) is separately dropped immediately after producing the sanitized clone
  (0x1004c4d3d). So for `diagnose_codex_router` specifically, the new sanitize call is currently
  behaviorally inert — it neither prevents nor causes any observable difference in this command's response,
  since neither the sanitized nor unsanitized copy is exposed to the frontend here (the response's provider
  count/flags are derived from separate fields read directly off `a2`, not from either `RelayState` clone).
- **Config-key migration (byte-confirmed via decompile literal operands)**: `read_top_level_string_value`
  is called with literal key `"model_provider"` (14 bytes) then `"model_catalog_json"` (18 bytes) — the
  1.0.9 baseline (`DIAGNOSE-CODEX-ROUTER-MAC-109.md` dim3) documents keys `"model_server_addr"` (14B),
  `"model"`/`"profiles."` instead. Byte-lengths of the new keys coincidentally match the old keys' lengths,
  but the literal content itself (confirmed via decompile string operands, not `get_string`/`get_bytes` for
  these two specific literals) is different.
- **New catalog-path validation (byte-confirmed, no 1.0.9 analog)**: `Path::_join` is called twice with the
  literal `"codex_router_catalog.json"` (25 bytes, confirmed via decompile operand at both call sites
  0x1004c4ea5 and 0x1004c4f93), followed by a `PathBuf::eq` comparison (0x1004c5079) against the
  `model_catalog_json`-derived path. Neither this join nor this comparison appear anywhere in the 1.0.9
  baseline's documented call tree or config-key list — this is a genuine new config-schema check, not
  compiler/arch noise.
- **6 diagnostic summary strings byte-confirmed via `get_bytes`** (not guessed, full UTF-8 decode this
  round): 124B/71B/101B/153B/148B/143B templates at `0x1012C7259`/`0x1012C72D5`/`0x1012C731C`/
  `0x1012C7381`/`0x1012C741A`/`0x1012C74AE` respectively — full text in `interface/diagnose_codex_router.md`.
  Templates #4 (153B) and #5 (148B) **explicitly name the new keys** `model_catalog_json` and
  `model_provider router` in their Chinese user-facing text ("已启用但 ~/.codex/config.toml 未写入
  model_catalog_json..." / "...未写入 model_provider router..."), directly corroborating the config-key
  migration finding above from an independent evidence source (frontend-facing string content, not just
  decompiled control flow).
- `codex_config_stale_reason` (0x1005c6ba0, full decompile, 32409-byte pseudocode) internally calls its own
  independent `RelayManager::snapshot` + `fs::read_to_string` (a second, separate config.toml read),
  `read_top_level_string_value`, `relay_ids_in_config` (0x1005cec40, builds a `HashSet<String>` of relay
  provider IDs referenced in config text via `hashbrown`/`RandomState::new`), and `router_entry_presence`
  (0x10067e230, formats two marker-pattern strings and substring-searches them in the config text via
  `is_contained_in`).

## Inferred

- Exact field names/bit-offsets of the full response struct beyond `summary`/`config_toml_has_router`/
  `config_toml_has_catalog` (the 3 fields the frontend actually reads this version) are inferred from the
  1.0.9 baseline doc's documented `DiagnoseCodexRouterResult` struct
  (`has_router_thread_migration`/`relay_providers_count`/port/model-addr fields) by structural continuity
  of the 0x140-byte struct size and the `a2+72` write offset — not independently re-derived from scratch via
  `type_query`/`declare_type` against the 1.1.8 binary this round.
- Whether the `"profiles."` TOML key prefix documented in the 1.0.9 baseline is still read somewhere inside
  `codex_config_stale_reason`'s own `read_top_level_string_value` calls (as opposed to only the owner's two
  directly-observed key reads) is inferred-likely (the function was fully decompiled and does call
  `read_top_level_string_value` at least twice more per its callee list) but the specific literal key
  arguments passed at those nested call sites were not individually re-extracted this round.
- The 4 non-key-naming summary templates (#1/#2/#3/#6) are inferred to be behaviorally unchanged from
  1.0.9 based on byte-length overlap with the 1.0.9 doc's declared byte-count list (71/101/124/143 all
  appear in both lists) — but this is inferred from length coincidence only; a full byte-for-byte text diff
  against the actual 1.0.9 binary strings was not performed this round (the 1.0.9 baseline doc records only
  byte-lengths, not decoded UTF-8 content, so there is nothing to diff against directly).
- The exact literal marker-pattern strings formatted and searched by `router_entry_presence`
  (`anon_5d4536734f60d7d1ae09e451c2f7649c_690/_691/_692`) are inferred to be `[relay]`-style config-section
  or provider-ID marker patterns based on their position in the stale-reason control flow (checked
  immediately after the `relay_ids_in_config` HashSet build) — not independently confirmed via
  `get_string`/`get_bytes` this round.

## Unknown

- The literal format-template strings referenced by `router_entry_presence`
  (`anon_5d4536734f60d7d1ae09e451c2f7649c_690/_691/_692`, used at 0x10067e24e/0x10067e259/0x10067e2be) —
  not resolved via `get_string`/`get_bytes` this round; recorded Unknown rather than guessed.
- Whether `router_entry_presence` and `relay_ids_in_config` are themselves new in 1.1.8 or existed
  undocumented at this depth in 1.0.9 — the 1.0.9 baseline `DIAGNOSE-CODEX-ROUTER-MAC-109.md` dim3 table
  lists a sibling helper `relay_ids_in_config@0x1001d0298` at "B" level already (same name, different VA as
  expected across builds), so `relay_ids_in_config` itself is **not** new; but `router_entry_presence` has
  no corresponding entry in the 1.0.9 doc's call-tree table — whether it is a genuinely new 1.1.8 addition or
  simply undocumented at the 1.0.9 doc's shallower depth is Unknown, not asserted as a 1.1.8-introduced
  behavior (per the anti-cheat rule against inferring "new" purely from "undocumented at a shallower depth").
- The exact bit/byte offsets of the remaining response-struct fields
  (`has_router_thread_migration`/`relay_providers_count`/port/model-addr) within the 0x140-byte struct for
  this specific 1.1.8 build — not independently re-mapped via `type_query`/`disasm` this round; only the
  three frontend-consumed fields (`summary`, `config_toml_has_router`, `config_toml_has_catalog`) were
  traced back to their producing statements in the owner body.
- Whether the `"profiles."` TOML key (present in the 1.0.9 doc's key list but not observed in either of the
  owner's own two directly-traced `read_top_level_string_value` calls this round) is still read by
  `codex_config_stale_reason`'s nested calls to the same function, or was dropped entirely in the 1.1.8
  schema migration — not independently confirmed; recorded Unknown (see Inferred section above for the
  partial signal).
- Whether the windows-x64 1.1.8 build of `diagnose_codex_router` shows the same `sanitize_for_export` /
  config-key-migration / catalog-path-validation delta — not decompiled this round (this leaf is
  macos-arm64-only); `REVERSE-STATUS.md` line ~183/~3416 records `diagnose_codex_router` as an internal
  helper with no standalone dispatcher-matched string on Windows in the 1.0.9→1.1.8 win-shard pass, which is
  a different finding (Windows dispatch architecture) and does not itself confirm or refute the mac-side
  config-key delta for the Windows binary.

## Delta vs 1.0.9 baseline

`diagnose_codex_router` is a **delta** command — this session's earlier mac-shard-2 pass
(`intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-2.json`) already classified it
`verdict=delta` at a summary level; this leaf's own independent full re-decompile (owner + 5 callees, 6
pseudocode files, 75.5KB total) confirms and extends that finding with byte-level evidence:

1. **New callee `sanitize_for_export`** (API-key redaction helper, offset+88 zero-out, 232-byte provider
   stride) is called on the internal `RelayManager::snapshot` clone immediately before it is dropped — the
   1.0.9 baseline's documented call tree goes directly from `snapshot` to `CodexRouteDiagnostic::clone`
   with no sanitize step. This new depth-1 trace (this leaf) additionally shows the sanitized clone's value
   is never actually read into the response for this specific command (see Confirmed section) — a
   behaviorally-inert addition for `diagnose_codex_router`, even though the same function is behaviorally
   *active* (its result IS exposed to callers) when called from `activate_relay_provider`/
   `deactivate_relay_provider`/`load_relay_state` per this session's other shards.
2. **Config-key schema migration**: 1.0.9 reads `model_server_addr`/`model`/`profiles.`; 1.1.8 reads
   `model_provider`/`model_catalog_json` instead — confirmed both via decompile literal operands (owner
   body) and independently via the byte-decoded summary-string content (templates #4/#5 name these exact
   new keys in their user-facing Chinese text), two independent evidence sources agreeing.
3. **New catalog-path validation**: `Path::_join` against literal `"codex_router_catalog.json"` +
   `PathBuf::eq` comparison — absent from the 1.0.9 baseline's documented call tree or config-key list.

Unchanged vs 1.0.9 (confirmed this round): `argKeys=[]`; no error-return path (always `Ok`); read-only side
effects (no writes, no process spawn); dispatcher-closure wiring pattern (single xref from `run`'s inner
IPC-dispatch closure); `RelayManager::snapshot` call position; `CodexPaths::resolve_codex_home`/`from_home`;
`user_top_level_profile`; `fs::metadata` existence check; `relay_ids_in_config` helper (present, same role,
by-name match to 1.0.9 doc's B-level callee table entry).
