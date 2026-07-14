# Interface — reorder_relay_providers (AiMaMi 1.1.8, macos-arm64)

## Command
`reorder_relay_providers` — Tauri IPC command, dispatcher-wired at owner VA `0x1004c6850`
(`codexmate_lib::commands::relay::reorder_relay_providers::ha6f71902b24532dd`).

## Frontend call site (source of truth for argKeys)
`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 111:
```
{"argKeys": ["orderedIds"], "argObject": "{orderedIds:e}", "command": "reorder_relay_providers",
 "file": "assets/index-CX-I_QAq.js", "line": 86, "wrapper": "reorderProviders"}
```
- `argKeys = ["orderedIds"]` — single argument, an ordered array of provider IDs (`Vec<String>` on
  the Rust side, inferred from the frontend call shape `reorderProviders: e => St("reorder_relay_providers", {orderedIds: e})`
  and from `RelayManager::sync_codex_config_with_outcome` computing `valid_codex_active_ids` against
  the same-shaped snapshot).
- Identical argKeys to the 1.1.1 baseline (`REVERSE-STATUS.md` line 750: `argKeys=[orderedIds]`) —
  **no frontend contract change** across 1.1.1 → 1.1.8.

## Backend call chain (owner → leaf)
`reorder_relay_providers` (owner)
  → `RelayManager::reorder` (core impl, `0x1005ccfd0`)
    → `RelayManager::snapshot` — Mutex-guarded `Clone<RelayState>` read
    → `RelayManager::persist` (`0x1005cccf0`)
      → `RelayManager::compose_proxy_status` — re-reads live proxy handle, formats status strings
      → `relay::storage::save` (`0x1004b2680`) — serde-serializes `RelayState` to JSON, then:
        → `relay::atomic_write::write_atomic` (`0x10039e600`) — temp-file write + fsync + rename
    → `RelayManager::sync_codex_config_with_outcome` (only if persist Ok) — reconciles the Codex
      router's own on-disk config against the new relay provider order/active-set
    → `relay::storage::sanitize_for_export` (only if sync_codex_config_with_outcome Ok) — builds the
      exact bytes returned to the frontend as the success payload

## Response (Ok path)
- `RelayManager::reorder` returns a 0x158(344)-byte record built by `sanitize_for_export`, wrapped by
  the owner via `CoreEnvelope<T>::ok(a1, v6)` (`0x1004ba8f0`).
- Persisted/returned top-level `RelayState` JSON fields (confirmed via `get_string` on the exact
  `serialize_entry` key-length arguments in `storage::save`): `schemaVersion` (13), `providers` (9),
  `activeByIde` (11), `proxy` (5), `codexRouterEnabled` (18), `codexRouterNoAccountMode` (24).
- Per-provider fields visible in the same string blob (not independently offset-confirmed this round,
  carried from adjacent literal layout): `id`, `ide`, `baseUrl`, `apiKeyStored`, `wireApi`, `brand`,
  `models`, `extraHeaders`, `healthScore`, `latencyMs`, `lastTestedAt`, `createdAt`, `updatedAt`,
  `lastError`.

## Response (Err path)
- Discriminant `0x8000000000000000` (Rust niche-optimized `Result::Err` sentinel) is written to the
  first qword of the return struct.
- Error message body is the `Display`-formatted `CoreError` (`_$LT$..CoreError..as..Display$GT$::fmt`,
  `0x100500e10`) — dynamic string, not a fixed literal.
- Defensive fallback: if `Display::fmt` itself fails, the owner calls
  `core::result::unwrap_failed` with the fixed panic message `"a Display implementation returned an
  error unexpectedly..."` — an internal invariant-violation path, not a normal user-facing error.

## Side effects
- **Persistence (commit)**: `atomic_write::write_atomic` — `DirBuilder::_create` (ensure config dir)
  → build `<parent>/.tmp.<pid>.<uuid_v4>`-style temp path (`Path::_join`) → `OpenOptions::_open` →
  `Write::write_all` → `File::sync_data` → `std::sys::fs::rename` (atomic commit) →
  `atomic_write::sync_parent_dir` (fsync parent dir entry). On failure after temp-file write,
  `std::sys::fs::remove_file` cleans up the temp file.
- **Cross-subsystem persistence**: `sync_codex_config_with_outcome` additionally reconciles/persists
  the Codex router's own config in response to the reorder outcome (side effect beyond the relay
  provider list itself) — exact codex-side file/keys not independently traced this round (Unknown).
- **In-memory**: on success, the live Mutex-guarded `RelayState` singleton is replaced with the newly
  ordered/persisted state (`RelayManager::persist` `memmove`s the new state over the old one under
  the same lock used for `snapshot`/`compose_proxy_status`).
- No HTTP/network call and no sidecar dispatch observed in this command's call tree (contrast with
  e.g. `get_relay_provider_quota`, which does dispatch reqwest HTTP calls).

## Delta vs 1.0.9 / 1.1.1
- **Not present in 1.0.9** — `reorder_relay_providers` is confirmed new in 1.1.1
  (`REVERSE-STATUS.md` line 391: "reorder_relay_providers is new in 1.1.1 (not in 1.0.9)").
- **1.1.1 → 1.1.8**: owner+core-impl two-level shape is structurally identical to the 1.1.1 macOS
  baseline (`ida/pseudocode/0001_reorder_relay_providers_owner_*.c` /
  `0002_reorder_relay_providers_core_impl_*.c`, `REVERSE-STATUS.md` lines 409-410) — both builds have
  an owner wrapper delegating to a single `RelayManager::reorder`-shaped core function that does
  snapshot → persist → sync_codex_config_with_outcome → sanitize_for_export inline. Rust mangled
  hashes differ (`h71af0c8928d23dc7` now vs `h2dd46f2b08c57b96` in 1.1.1) as expected from VA/build
  churn. A byte-level pseudocode diff against the 1.1.1 core-impl body was **not** performed this
  round (Unknown/out of scope) — this leaf documents 1.1.8 standalone plus a structural-shape
  comparison only.
