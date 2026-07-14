# interface — clean (AiMaMi 1.1.8, macos-arm64 label / x86_64 IDB slice)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 8)

- **command**: `clean`
- **argKeys**: `[]` (no input parameters — void command)
- **frontend wrapper**: `clean: () => te("clean")` (`assets/index-CX-I_QAq.js:86`), grouped in the same
  frontend API object literal as `rebuildRegistry`/`forceKillCodex`/`getImageCompat` (maintenance-domain
  siblings)
- **dispatch mechanism**: `codexmate_lib::run::{{closure}}::{{closure}}` (0x1002ffd40, confirmed via
  `xrefs_to`) → `codexmate_lib::commands::system::clean` command wrapper (0x1006d0730) → JSON-serialized
  back to the frontend (`terminated_reason=response_serialize` at `CoreEnvelope::ok`)
- **1.0.9 baseline**: same command, same argKeys, present at `raw/aimami/1.0.9/macos/maintenance/clean/leaf.md`
  (windows platform groups the same command under a `system` domain instead — platform trees are
  independent per pipeline convention, not a behavioral difference)

## Request DTO

None. Command takes no arguments.

## Response DTO (CoreEnvelope<CleanResult>)

```
CoreEnvelope::ok success shape (literal bytes confirmed in this leaf's pseudocode/0009):
  code:    "ok"       (2-byte literal, 0x6B6F little-endian)
  message: "Success"  (7-byte literal, shared by every CoreEnvelope::ok call site in the binary)
  payload: { filesRemoved: <u32>, registryEntriesRemoved: <i32> }
```

- `filesRemoved` = `v117` in `pseudocode/0001_clean_owner.c` — running count of files deleted from the
  sessions directory (loop 1) plus the intermediate directory (loop 2, `HIDWORD(v117)`/`v33`).
- `registryEntriesRemoved` = `v116 - v107[2]` — original registry item count minus the retained (post-filter)
  count.
- Exact field names (`filesRemoved`/`registryEntriesRemoved`) are inferred from the 1.0.9 baseline
  `leaf.md`'s documented `CleanResult` struct (`deleted_sessions`/`deleted_intermediate`/`registry_delta`);
  this round did not re-run `type_query`/`declare_type` to re-confirm the literal serde field-name strings
  at the byte level for 1.1.8 — recorded as **Inferred**, not independently re-verified, since the owner
  body itself is byte-identical in control flow to the 1.0.9 documented behavior (see evidence.md Delta
  section).

## Error paths

- **Poisoned mutex**: `commands::system::clean` wrapper returns `CoreError` with literal message
  `"poisoned lock: another task failed inside"` if the process-global Repository `Mutex` was poisoned by a
  prior panicking task (`pseudocode/cmd_wrapper` equivalent, decompiled this round at 0x1006d0730 but not
  copied into `pseudocode/` since it is the IPC wrapper, not the `Repository::clean` core body — see
  call-trees depth 0-1 entries for its full control flow).
- `load_registry` I/O error (discriminant 2) or JSON-parse error (discriminant 3): early return with
  `CoreError`, `Repository::clean` still proceeds using an empty registry (`v116=0` fallback path) rather
  than aborting — matches 1.0.9 documented behavior.
- `persist_registry` error (from `ensure_directories`, backup-copy, or `std::fs::write` failure): returns
  `CoreError` from that layer; response payload still reports `filesRemoved` for whichever directory passes
  completed before the error (`CoreEnvelope::ok` branch is skipped — the `else` branch at
  `pseudocode/0001` line ~552 wraps a synthetic error-shaped payload with discriminant 1 instead).
- `quota_store::save` error: `CoreError` propagated from that layer; does not roll back the already-persisted
  registry write.

## Side effects

1. **File deletion**: removes every entry directly under the sessions directory (`Repository` fields at
   `a2+272`/`a2+280`) and the intermediate directory (`a2+296`/`a2+304`) — non-recursive, one `read_dir`
   level, `remove_file` per entry (`terminated_reason=persistence_commit`).
2. **Registry write**: `persist_registry` writes `registry.json` at `Repository.registry_path`, pruning
   retained items to those still passing the liveness/managed-virtual-snapshot filter and updating
   `lastCleanTs`. When the caller-forced-backup flag is set, first rotates the previous file to a
   timestamp-suffixed backup path (`std::sys::fs::copy`).
3. **Quota write**: `quota_store::save` writes an updated quota-store JSON file, but only when the
   quota-entry retain pass actually dropped at least one entry (keyed against the just-retained registry
   item set).
4. **Directory creation**: `persist_registry` → `CodexPaths::ensure_directories` creates (mkdir -p, mode
   0o777) up to 9 managed application directories before any write — a broader side effect than the
   1.0.9 `leaf.md` documented (that doc did not call out `ensure_directories` explicitly; this is new
   evidence from this round's deeper decompile, not a 1.1.8 behavioral change per se — see evidence.md).
5. **Per-item auth-file read** (new evidence this round, not in the 1.0.9 `leaf.md`): the registry-item
   retain predicate, for items that don't match a fast-path symlink-string check, falls through to
   `registry_item_has_managed_virtual_snapshot`, which reads that item's linked account **auth file**
   (`core::auth::load_auth_file`) and checks `core::auth::is_aimami_managed_virtual_auth` — i.e. `clean`'s
   retention policy is not purely a time-based TTL; it also special-cases "managed virtual" accounts by
   reading their credential file. Whether this auth-file read path is itself new in 1.1.8 or was simply
   undocumented at this depth in the 1.0.9 leaf is **Unknown** — the 1.0.9 doc's dim3 call-tree only
   states "Vec::retain (alloc) — 7-day filter" without walking this deep, and this round's 1.0.9 comparison
   (mac-shard-1) also only diffed at the direct-callee level, not this depth.
