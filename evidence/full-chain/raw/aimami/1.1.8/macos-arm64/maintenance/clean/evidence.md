# evidence — clean (AiMaMi 1.1.8, macos-arm64 label)

session: <审计会话> · machine: <本地机器>
owner_va: 0x100536300 · owner_symbol: `codexmate_lib::core::repository::Repository::clean::h2c36c5eabc800af5`
command_wrapper_va: 0x1006d0730 · wrapper_symbol: `codexmate_lib::commands::system::clean::h2637f6beaf6fe510`
source: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 8 (angle A, func_query),
cross-confirmed this round against `intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-1.json`
(command `clean` already classified `same=` vs 1.0.9 in that earlier shard pass — this leaf supplies the
first full raw pseudocode/call-tree/interface/evidence package for it, since mac-shard-1 only recorded a
one-line same/delta classification, not a leaf bundle).
binary: `raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi` — 分析工具就绪门
(`健康检查`: status=ok, uptime_sec=208641.7, 反编译就绪=true, module=`AiMaMi`, idb_path contains
`AiMaMi 1.1.8 universal.app`) before any decompile/callees/xrefs_to call this round.

**arch_noise_filter_applied**: this mac 1.1.8 IDB decompiles the fat binary's x86_64 slice (documented
session-wide in `REVERSE-STATUS.md` mac-shard-3/8 sub-entry, orchestrator directive: compare at
app/Rust-semantic level only). All findings below are demangled-symbol / literal / control-flow level;
no register/ABI/calling-convention/stack-layout/size noise is asserted as a behavioral delta.

## Confirmed

- `clean` is a real `#[tauri::command]` handler, confirmed reachable from
  `codexmate_lib::run::{{closure}}::{{closure}}` (0x1002ffd40) via `xrefs_to` (call site 0x1002ffe53) into
  `codexmate_lib::commands::system::clean` (0x1006d0730) — a live, dispatcher-wired IPC endpoint, not dead
  code. Frontend confirms `argKeys=[]` (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 8).
- The command wrapper (0x1006d0730, full decompile, no bail) lazily initializes a process-global
  `Mutex`-guarded `Repository` singleton via `OnceBox<T>::initialize`, locks it, dispatches to
  `Repository::clean`, and on a poisoned mutex returns a `CoreError` with the exact literal message
  `"poisoned lock: another task failed inside"` — byte-identical control flow to the 1.0.9 baseline
  documented in `raw/aimami/1.0.9/macos/maintenance/clean/leaf.md` dim2 ("Acquires Repository Mutex...
  atomic_load_explicit check, OnceBox initialize if null, Mutex::lock... poisoned lock message").
- `Repository::clean` (0x100536300, full decompile, no bail, 22.7KB pseudocode) calls, in order:
  `load_registry` → `Vec::retain` (registry-item filter closure) → sessions-dir cleanup
  (`metadata`/`read_dir`/`remove_file` loop) → intermediate-dir cleanup (same pattern) →
  `persist_registry` → `quota_store::load` → `Vec::retain` (quota-entry filter) → `quota_store::save`
  (conditional) → `CoreEnvelope::ok`. All 9 direct callees resolved via a live `callees()` MCP call against
  the owner address (25 total callee edges including std-lib/alloc/hashbrown machinery), not inferred.
- `load_registry` (0x100522e00, full decompile) reads `registry.json` via `std::fs::read_to_string::inner`
  then deserializes via `serde_json::de::from_trait`; on either failure sets an error discriminant and
  returns early — `Repository::clean` treats a load failure as "start from empty registry" rather than
  aborting (falls through to the `else` branch building a zero-item state via `SystemTime::now`).
- `persist_registry` (0x1005270f0, full decompile, 9.9KB) calls `CodexPaths::ensure_directories` first
  (short-circuits on error before any write), conditionally rotates the previous registry file to a
  timestamp-suffixed backup path (`std::sys::fs::copy`) when a caller-supplied force-backup flag is set,
  manually serializes the `RegistryFile` struct via 4 `serde_core::ser::SerializeMap::serialize_entry`
  calls, and writes the result via `std::fs::write` (0x1005275dc) — success sets discriminant 10 (Ok).
- `quota_store::save` (0x100541320, full decompile) follows the identical
  `Path::parent`→`DirBuilder::_create`→serialize-3-fields→`std::fs::write` (0x10054167a) pattern as
  `persist_registry`, confirming both persistence layers share the same manual-JSON-serialize-then-write
  idiom rather than using `serde_json::to_writer` directly.
- `CoreEnvelope::ok` (0x1004b9a70, full decompile) is a **shared, non-command-specific** DTO constructor:
  it allocates and writes the literal `code="ok"` (2 bytes, `0x6B6F` little-endian) and
  `message="Success"` (7 bytes, `0x63636553`/`0x736B6363` little-endian, decoded byte-for-byte via direct
  computation, not guessed) fields, then splices in whatever caller-supplied payload struct was passed —
  confirms this same function is reused across many commands in the binary, not `clean`-specific.
- New-this-round depth-4 finding: the registry-item retain closure (0x1006f3f90), for items whose
  symlink-target string does not match a fast-path 36-byte literal pattern, falls through to
  `registry_item_has_managed_virtual_snapshot` (0x10053fcb0, full decompile), which reads that item's
  linked-account **auth file** via `codexmate_lib::core::auth::load_auth_file` (0x10053fdcc) and then calls
  `codexmate_lib::core::auth::is_aimami_managed_virtual_auth` (0x10053fe3d) — i.e. the retention predicate
  is not a pure time-based TTL; it also special-cases accounts backed by a "managed virtual" auth record.
- `CodexPaths::ensure_directories` (0x1004d5860, full decompile) is a flat short-circuit chain of 9
  `std::fs::DirBuilder::_create` calls (mode `0o777`, `recursive=true` per the `BYTE2(v3)=1` flag), each
  over a distinct `Repository`/`CodexPaths` field-pair; the first failure aborts the remaining 8 creates.

## Inferred

- Exact JSON field names in the `CleanResult` response payload (`filesRemoved`/`registryEntriesRemoved` or
  equivalent) are inferred from the 1.0.9 baseline `leaf.md`'s documented struct
  (`deleted_sessions`/`deleted_intermediate`/`registry_delta`), not independently re-confirmed via
  `type_query`/`declare_type` against the 1.1.8 binary this round — the owner's control-flow and offset
  layout (`v117`, `v116 - v107[2]`) is byte-identical to what the 1.0.9 doc describes, so the field
  identity is inferred by structural continuity, not re-derived from scratch.
- The registry-item's 36-byte fast-path literal string (compared via `StrSearcher::new` +
  `next_match`) is presumed to be a session-snapshot-path suffix pattern (matching the item's own
  `sessions_path` naming convention elsewhere in the codebase) based on its position in the control flow
  (checked before falling through to the auth-file read) — the literal byte contents themselves were not
  extracted via `get_string`/`get_bytes` this round, so the exact string value is not confirmed.
- The 7-day TTL constant documented in the 1.0.9 `leaf.md` ("filter items older than 7 days (604800
  seconds)") was not independently re-derived this round from the 1.1.8 `SystemTime::duration_since`
  comparison site; the control-flow shape (elapsed-since computation feeding a comparison inside the
  `HashMap`-building loop) matches, but the literal `604800` constant itself was not re-extracted via
  `get_int`/`disasm` against the 1.1.8 comparison instruction.
- Whether the 9 `ensure_directories` mkdir targets are all pre-existing 1.0.9 paths or include any new
  1.1.8-only directory is Inferred-not-confirmed: this round did not diff the 9 field-pair offsets against
  a 1.0.9 `CodexPaths::ensure_directories` decompile (no such raw pseudocode file exists in the 1.0.9
  baseline leaf — only the higher-level `leaf.md` summary was available for comparison).
- The `quota_store::save` conditional-save guard (`__dst[2]==v55`, i.e. "only write if the quota retain
  pass actually dropped an entry") is inferred to be an optimization to avoid a redundant file write on
  every `clean` invocation when no quota entries were pruned, based on the surrounding control-flow shape
  in `pseudocode/0001_clean_owner.c` around the `CoreEnvelope::ok` dispatch — not independently confirmed
  via a code comment, doc string, or the 1.0.9 baseline (whose `leaf.md` describes the same call unconditionally
  as "quota_store::save if changed", consistent with this inference but phrased at a summary level only).

## Unknown

- The literal 36-byte pattern string and the following 7-byte suffix compared in
  `registry_item_has_managed_virtual_snapshot`'s fast path (`anon_e90f81edc9eb47f28b006fedbc3b914a_65/_66/_67`
  symbols) — not resolved via `get_string`/`get_bytes` this round; recorded Unknown rather than guessed.
- Whether `registry_item_has_managed_virtual_snapshot`'s auth-file-read fallback path is itself new in
  1.1.8 or was already present (but undocumented at this depth) in 1.0.9 — the 1.0.9 `leaf.md`'s dim3
  call-tree only states "Vec::retain (alloc) — 7-day filter" without walking past the closure itself, and
  this session's earlier `mac-shard-1` same/delta classification for `clean` was also a direct-callee-level
  comparison, not a depth-4 one. No 1.0.9 raw pseudocode file for this specific closure exists to diff
  against directly. Recorded Unknown, not asserted as a 1.1.8-introduced behavior.
- The exact `QuotaStore`/`RegistryFile`/`RegistryItem` Rust struct field layouts beyond the offsets touched
  by this leaf's call tree (e.g. full field list of `RegistryItem`, which is a 360-byte-stride struct per
  the `v5 += 360` pointer arithmetic in the owner) — not independently confirmed via `type_query` this
  round; only the fields actually read/written along this leaf's execution paths are documented above.
- Whether `quota_store::load`'s manually-inlined 28KB deserialize body ever fails on a schema drift between
  1.0.9 and 1.1.8 quota-store JSON shape — not traced; the function was fully decompiled but not diffed
  field-by-field against a 1.0.9 equivalent (no 1.0.9 raw pseudocode file for `quota_store::load` exists
  in the baseline leaf to compare against).
- Whether the caller-supplied "force backup" flag (`a4` parameter into `persist_registry`) is ever set to
  true by any of `clean`'s actual call sites in practice (this leaf only confirms the flag exists and what
  happens when it's true; `commands::system::clean`'s call site passes `a2+2` as the Repository reference
  but the constant value of the force-backup argument at that specific call site was not independently
  re-traced this round).

## Delta vs 1.0.9 baseline

`clean` is a **same** command — no argKey change (`argKeys=[]` on both versions,
`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-same.mac.txt` includes `clean`), and this
round's mac-shard-1 owner-level pass (`intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-1.json`)
already classified it `same=` against the 1.0.9 baseline at the direct-callee level (matching the 1.0.9
`leaf.md`'s documented flow: load_registry → 7-day retain filter → sessions/intermediate dir cleanup →
persist_registry → quota_store load/retain/save → CoreEnvelope::ok, with the identical
persist-before-session-guard-check side-effect ordering the 1.0.9 doc records).

This leaf's own depth-4 decompile pass (going one level deeper than the 1.0.9 `leaf.md`'s documented call
tree, which stopped at the retain closure itself) surfaces two control-flow details **not present in the
1.0.9 `leaf.md`'s dim3 section**: (1) the registry-item retain predicate falls through to an
account-auth-file read (`registry_item_has_managed_virtual_snapshot` → `load_auth_file` +
`is_aimami_managed_virtual_auth`) for items that don't match a fast-path literal-string check, and (2)
`persist_registry` calls `CodexPaths::ensure_directories` (9-directory mkdir chain) before writing, and
conditionally rotates a timestamped backup copy of the previous registry file. Whether these two behaviors
are genuinely new in 1.1.8 or were already present-but-undocumented in the shallower 1.0.9 pass is
**Unknown** (see Unknown section above) — no 1.0.9 raw pseudocode exists for either
`registry_item_has_managed_virtual_snapshot` or `CodexPaths::ensure_directories` to diff against directly,
only the higher-level 1.0.9 `leaf.md` summary. This is reported as new-evidence-this-round, not asserted
as a version delta, per the anti-cheat rule against inferring "new" purely from "undocumented at a
shallower depth."
