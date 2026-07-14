# Interface: `deactivate_relay_provider` (AiMaMi 1.1.8, macOS arm64/x86_64-slice)

session: `<审计会话>` | machine: `<本地机器>` | produced_at: 2026-07-13

## Command identity

- **Tauri command name**: `deactivate_relay_provider`
- **Owner VA**: `0x1004c6a10`
- **Owner symbol**: `codexmate_lib::commands::relay::deactivate_relay_provider::hef1f4eefb843a5ec`
- **Owner-map source**: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` (`method=func_query_clean_top_level_symbol`)
- **Frontend wrapper**: `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 109, file `assets/index-CX-I_QAq.js` — `argKeys: ["providerId", "ide"]`, `argObject: "{providerId:e,ide:t}"`, `params: "(e,t)"`.

## Request shape

| field | type (inferred) | Confirmed/Inferred | notes |
|---|---|---|---|
| `providerId` | `String` | Confirmed (frontend argKey) / Inferred (backend binding) | Consumed inside `RelayManager::deactivate` (0x1005c0250) as the `(ptr,len)` pair passed to `Vec::retain`'s `memcmp` predicate (0x1006f3140) — matched byte-for-byte against each `RelayProvider.id` field. The exact owner-level register/stack path from the Tauri command args to this byte pair was not re-traced instruction-by-instruction this pass (see Unknown #1). |
| `ide` | `String` (likely) | Unknown | Present in the frontend wrapper's `argKeys` but no backend consumption site was identified in the owner or `RelayManager::deactivate` bodies this pass — every code path decompiled operates only on the provider id and the global `RelayState`. Left `Unknown`, not `accepted_unknown` (no fake-wall claimed; simply not traced this round). |

## Response shape (success)

`CoreEnvelope<RelayState>` (same wrapper as `load_relay_state`), containing the **sanitized** `RelayState` snapshot after removing the deactivated provider — same 5-field shape confirmed this delta round (`providers`, `active`, `grants`, `proxyStatus`, `schemaVersion`), API keys redacted via `storage::sanitize_for_export` (`0x1004b14b0`, shared callee, same VA as `load_relay_state`/`activate_relay_provider`/`diagnose_codex_router`).

## Response shape (error) — 2 app-level guard errors + 1 generic CoreError path

1. **`0x1012cbcd4`** (107 bytes, error code `9`): `"当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。"` — returned immediately (before the retain-filter even runs) when the mutex-guarded `codexRouterEnabled`-equivalent flag is true. Business rule: **relay providers cannot be deactivated (or activated) while Codex smart-routing is on**; the flag byte's exact `RelayState` field/offset attribution is Inferred, not independently re-derived this pass (see Unknown #2).
2. **`0x1012cb477`** (123 bytes, error code `9`): `"无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"` — returned after the retain-filter runs, guarding against deactivating the **last remaining active provider** while routing is (or would be left) in an inconsistent state.
3. Generic `CoreError` path via `_$LT$..CoreError..Display$GT$::fmt` (`0x100500e10`, shared VA with `load_relay_state`) — covers any propagated error from `persist`/`sync_codex_config_with_outcome` (disk I/O failures, `write codex config.toml failed: file kept changing during sync (another writer active)` from `apply_codex_state`, etc.).

## Side effects (this is the delta-defining part of this leaf)

Deactivating a provider is **not** a pure in-memory state mutation — it cascades through 3 independent persistence layers, all confirmed via 0-truncation decompiles this pass:

1. **`relay.json`** (AiMaMi's own state file) — via `RelayManager::persist` → `storage::save` (`0x1004b2680`, shared VA already fully leafed in `load_relay_state`) → `atomic_write::write_atomic` (`0x10039e600`, shared VA, temp-write+fsync+rename+parent-fsync).
2. **`codex_router_catalog.json`** (a *second*, separate catalog file under the Codex config dir) — via `RelayManager::sync_codex_config_with_outcome` → either `codex_catalog::write_catalog` (`0x100682170`, when an auto-switch replacement candidate provider exists) or `codex_catalog::remove_catalog` (`0x100682470`, when no candidate remains — deletes the file). Both use the same `atomic_write::write_atomic` commit primitive.
3. **The real Codex CLI `config.toml`** — via `codex_writer::apply_codex_state` (`0x10067a290`). This is the most significant finding of this leaf: AiMaMi directly rewrites the user's actual Codex CLI configuration file, using a **read → compose → verify → write** pattern: it reads the current file, calls `compose_from_original` to produce new content (a string-level "managed block" replace that preserves foreign/user-authored TOML sections — confirmed via its callee names `strip_all_managed_blocks`/`strip_stale_router_top_level_model`/`is_foreign_model_section`, though `compose_from_original` itself was not byte-traced this pass, see Unknown #3), re-reads the file a second time to detect concurrent external modification (`memcmp` against the first read), and only commits via `atomic_write::write_atomic` if the two reads matched. It retries this compare-then-write cycle up to 3 times before giving up with the literal error `"write codex config.toml failed: file kept changing during sync (another writer active)"`.

A 4th, gating side-channel was also found: `router_unlock_auth::live_auth_state` (`0x100689c00`) reads a small marker file `router-unlock-auth-marker.json` (JSON key `aimami_router_unlock_auth`) whose value feeds the final boolean argument of `write_catalog`'s auto-select decision — behaviorally this reads like a feature-gate/consent flag for whether AiMaMi is allowed to auto-manage the Codex catalog on the user's behalf. Its exact product semantics (what UI flow sets this marker) were not traced this pass (Unknown #4).

## Cross-reference to sibling leaf

Every "shared callee" cited above (`storage::save`, `atomic_write::write_atomic`, `storage::sanitize_for_export`, `RelayManager::snapshot`, `CoreEnvelope::ok`, `CoreError::Display::fmt`, `unwrap_failed`, `drop_in_place<CoreError>`, `drop_in_place<RelayState>`) resolves to the **exact same VA** as documented in `raw/aimami/1.1.8/macos-arm64/relay/load_relay_state/evidence.md` and its `call-trees/load_relay_state.jsonl` — cross-checked by direct VA comparison in this pass, not re-decompiled from scratch (per redline #5, no duplicate producer work).
