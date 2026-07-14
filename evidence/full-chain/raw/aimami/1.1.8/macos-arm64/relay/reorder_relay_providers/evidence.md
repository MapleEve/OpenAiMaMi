# Evidence — reorder_relay_providers (AiMaMi 1.1.8, macos-arm64)

session: <审计会话>
machine: <本地机器>
command rank: 19/29 (macos-arm64 deep gold-leaf batch)
gate candidate: strictImplementationUse_candidate

## Confirmed

1. Owner function is `codexmate_lib::commands::relay::reorder_relay_providers::ha6f71902b24532dd`
   at VA `0x1004c6850`, live-decompiled with `反编译就绪=true` on a healthy mac 反编译器 session
   (`健康检查`: `status=ok`, `uptime_sec=215937.108`, `module="AiMaMi"`,
   `idb_path=.../AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi.i64`).
2. Owner is dispatcher-wired: `xrefs_to(0x1004c6850)` returns exactly 1 code xref, from
   `codexmate_lib::run::{{closure}}::{{closure}}::he310d781b4e65bf6@0x100309190` (call site
   `0x100309325`) — confirmed live, not dead code.
3. Frontend argKeys confirmed via `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line
   111: `argKeys=["orderedIds"]`, `wrapper=reorderProviders`, identical to the independently-recorded
   1.1.1 baseline (`REVERSE-STATUS.md` line 750).
4. Full 6-function call chain fully decompiled with real Hex-Rays bodies, no truncation, no
   `basic_blocks` chunking required: owner (2872B pseudocode) → `RelayManager::reorder` (0x1005ccfd0,
   full body) → `RelayManager::persist` (0x1005cccf0) → `relay::storage::save` (0x1004b2680) →
   `relay::atomic_write::write_atomic` (0x10039e600), plus sibling helpers `RelayManager::snapshot`
   (0x1005cdf60), `RelayManager::sync_codex_config_with_outcome` (0x1005c8130),
   `RelayManager::compose_proxy_status` (0x1005c1380), `relay::storage::sanitize_for_export`
   (0x1004b14b0). Call-tree depth reaches 6 (owner=0 → ... → `atomic_write::sync_parent_dir`=6),
   satisfying the depth≥5 requirement independent of the terminated_reason condition.
5. Persistence commit path is a genuine atomic-write-with-rename: `Path::parent` →
   `DirBuilder::_create` → build `<pid>+uuid_v4` temp filename (`Path::_join`) →
   `OpenOptions::_open` → `Write::write_all` → `File::sync_data` → `std::sys::fs::rename` (the commit
   point, `terminated_reason=persistence_commit`) → `atomic_write::sync_parent_dir` (fsync parent dir
   entry for durability); `std::sys::fs::remove_file` is the cleanup-on-failure-only path.
6. Persisted top-level `RelayState` JSON field names confirmed byte-exact via `get_string` against
   the literal addresses used as `serialize_entry` key arguments in `storage::save`, cross-checked
   against the exact key-length integers passed at each call site: `schemaVersion` (13),
   `providers` (9), `activeByIde` (11), `proxy` (5), `codexRouterEnabled` (18),
   `codexRouterNoAccountMode` (24).
7. Command confirmed new-in-1.1.1 (absent in 1.0.9) per this session's earlier frontend-delta
   sub-step and per the independently-recorded 1.1.1 full-chain sub-entry
   (`REVERSE-STATUS.md` lines 384-416), which documents the identical owner+core-impl two-level
   shape on the 1.1.1 macOS baseline.

## Inferred

1. `orderedIds` argument type is `Vec<String>` of provider IDs — inferred from the frontend call
   shape (`e` is an array literal at the JS call site) and from `RelayManager::reorder`'s internal
   iteration-and-sort pattern over a `Vec`-shaped buffer of 232-byte elements (String-keyed entries),
   not independently `type_query`-confirmed against the Rust signature this round.
2. `sanitize_for_export`'s output (used to build the Ok response) likely strips or reshapes sensitive
   per-provider fields (e.g. `apiKeyStored`/raw key material) before crossing the IPC boundary — this
   is inferred from the function's name and from the existence of a separate, distinct
   `reveal_relay_api_key` command elsewhere in this delta batch (implying keys are not returned by
   default), not from an observed field-by-field diff of sanitize's input vs output struct layout.
3. `sync_codex_config_with_outcome`'s side effect of reconciling the Codex router's own on-disk config
   is inferred to be a real file write (same `atomic_write::write_atomic` primitive family used
   elsewhere in this module) based on the function name and its call to `snapshot`/mutex-guarded state
   access, but the exact downstream call into `atomic_write` from inside this specific function was
   not traced to its own terminal node this round (only `RelayManager::persist`'s direct write path
   was traced to completion).
4. The 344-byte (`0x158`) record shape returned by `RelayManager::reorder` on the full-success path is
   inferred to be the serialized/sanitized `RelayState` (or a large subset of it) based on the
   `memcpy(__dst, __src, 0x158)` in `RelayManager::reorder` immediately following the
   `sanitize_for_export` call — the exact Rust struct name/field layout of this 344-byte record was
   not independently `type_query`-confirmed.
5. Structural equivalence of the owner+core-impl shape between 1.1.1 and 1.1.8 (see Confirmed #7) is
   treated as strong evidence of "no behavioral change, VA/hash churn only" for this command across
   that version span, but this is an inference from shape-matching, not a byte-level pseudocode diff.

## Unknown

1. Exact Rust struct/field name for the "ok"/success discriminant constant `10` used throughout
   `RelayManager::persist`/`sync_codex_config_with_outcome` (`LODWORD(v60[0]) == 10`,
   `__src[0] == 10`) — the discriminant value is confirmed, its symbolic enum variant name is not
   (no `type_query` run against the relevant `Result`/status enum this round).
2. Exact file path/filename written to disk by `storage::save` → `atomic_write::write_atomic` — the
   directory is resolved via `CodexPaths::ensure_directories`/`Path::parent` at runtime from a caller-
   supplied path argument (`a2` into `storage::save`), but the concrete path string (e.g. a specific
   `relay.json` filename under a specific `~/Library/Application Support/...` directory) was not
   traced back through `CodexPaths` this round.
3. Downstream file/keys touched by `RelayManager::sync_codex_config_with_outcome`'s "Codex router
   config" reconciliation — function body was decompiled (14822B, full, no truncation) but its own
   deepest persistence call site was not individually isolated and traced to a terminal node this
   round (recorded as an Inferred side effect, not a fully-closed one).
4. Whether `orderedIds` failing validation (e.g. containing an unknown/stale provider ID) produces a
   distinct `CoreError` variant vs. a generic one — the owner's error path was confirmed to route
   through a generic `Display`-formatted `CoreError`, but the specific error variants that
   `RelayManager::reorder`'s internal validation can produce were not enumerated this round.
5. Byte-level pseudocode diff of `RelayManager::reorder` (1.1.8, `h71af0c8928d23dc7`) against its
   1.1.1 baseline counterpart (`h2dd46f2b08c57b96`) — only structural/shape equivalence was checked
   (see Inferred #5); a true diff was out of scope for this single-command deep-leaf pass.
6. Exact byte layout/field order of the 232-byte-per-element `Vec` iterated during
   `RelayManager::reorder`'s sort step (candidate provider-order record) was not independently
   `type_query`-confirmed against a named Rust struct this round.

## Fake-wall check (red line 13)
`genuine_ceiling=false`; `accepted_unknown` not claimed anywhere in this leaf. All 9 functions in the
call tree were retrieved via a single, un-chunked `decompile()` call each, with full Hex-Rays bodies
(2066B-14822B pseudocode per function, all verified to end on a closing brace, no
`decompile_truncated` artifacts observed). No async `::poll`/`drop_in_place`-shim boundary was
encountered — this is a fully synchronous command. No oversized-body bail was needed; the largest
function (`sync_codex_config_with_outcome`, 14822B pseudocode) was still retrieved in full via plain
`decompile()`.
