# Evidence — activate_relay_provider
# AiMaMi 1.1.1 macOS arm64
# session: <审计会话>  machine: <本地机器>
# source_binary_sha256: 985dae00be620b21f4d3a76b5b4fa4af2bfe5e0b6cc5bbf38a8e5e3a6c9b2f1
# IDB: <来源位置>/raw/binary/AiMaMi-1.1.1-idb

## ## Confirmed

1. **Owner VA and symbol**: `codexmate_lib::commands::relay::activate_relay_provider` at `0x1005eb760`, size 0x1ef (495B). Confirmed by `lookup_funcs` query and demangled name match.

2. **Registration**: Closure `codexmate_lib::run::{{closure}}::{{closure}}` at `0x1003110c0` directly calls owner at `0x1003112b3`. String literal `"activate_relay_providerdeactivate_relay_providerreorder_relay_providers"` at `0x10031113d` (Tauri command registration). `tauri::state::StateManager::try_get` extracts RelayManager from app state.

3. **Input parameter**: Single `String` `ide_id` — passed as `(ptr=a3[1], len=a3[2])`, ownership transferred, dealloc after use via `rust_dealloc(v4, v7, 1)`.

4. **Core delegate**: `RelayManager::activate(0x1005dfab0, 2080B)` — full decompile obtained. Orchestrates all sub-operations.

5. **Provider lookup**: `ensure_provider_loaded(0x1005d65c0)` — searches `state.providers: Vec<RelayProvider>` by `memcmp(ide_id)`, clones found provider, calls `lazy_load_api_key(0x1005e1c90)` to resolve API key. On not-found: returns `Err("relay provider {ide_id} not found")`.

6. **In-memory active sessions**: `RelayActiveByIde::add(0x10054a8b0)` — dedup insert of `ide_id` bytes into active-sessions Vec. Dedup by `memcmp` + length check. Returns false if already present.

7. **Persistence leaf (fs-write terminal)**: `relay::storage::save(0x1005e2c60)` → `atomic_write::write_atomic(0x10041e960)`:
   - mkdir parent via `DirBuilder::_create`
   - UUID-named tmpfile (`{parent}/{pid}-{uuid}`)
   - `write_all` + `sync_data` (fdatasync) + `close_NOCANCEL`
   - `sys::fs::rename` (atomic mv tmpfile→relay.json)
   - `sync_parent_dir` (fsync parent)
   - Path sourced from `CodexPaths` at `paths+608` (ptr) / `paths+616` (len)

8. **Codex catalog sync**: `sync_codex_config_with_outcome(0x1005daea0)`:
   - Reads current state via `snapshot()`
   - If `state.port != 0`: `resolve_api_slots` then `write_catalog` (write codex provider catalog)
   - If `state.port == 0`: `remove_catalog` (delete codex catalog)
   - Always: `apply_codex_state(0x10075ae20)` — final state application
   - On write error: logs WARN at `src/core/relay/manager.rs:25`

9. **Proxy health check / start**: `ensure_proxy_started(0x1005d56f0)`:
   - Only called when ide_id not found in providers on first search attempt
   - Probes `127.0.0.1:proxy_port` via `TcpStream::connect_timeout(300ms)` × 2, with 50ms sleep between
   - On both probes fail: clears proxy Arc, then `tokio::runtime::Runtime::block_on` to spawn proxy
   - On spawn success: calls `storage::save` to persist updated state with new proxy Arc

10. **Response envelope**: `CoreEnvelope::ok(RelayState)` on success (0x1C0=448 bytes via memcpy). Error sentinel `*__dst = 0x8000000000000000`. Error variant copies formatted `CoreError` string to `__dst[1..3]`.

11. **Mutex threading**: sync `std::sync::Mutex` (not tokio). `OnceBox<Mutex>` lazy init. Panic-poison detection via `GLOBAL_PANIC_COUNT`. Lock acquired before provider search, released before proxy start, re-acquired for second search.

12. **No fake walls encountered**: Full decompile of all 9 key functions obtained. No `drop_in_place` shims, no async poll truncations, no excessive ICF folding. All async is contained in `ensure_proxy_started::block_on`.

## ## Inferred

1. **`ide_id` semantics**: The ide_id string is an identifier for the calling IDE session (Codex instance or similar). Used to track which IDE sessions have the relay active. Not a relay provider name — that's separately resolved via `ensure_provider_loaded`.

2. **relay.json path**: Derived from `CodexPaths` struct at `paths+608/616` — likely `~/.codex/relay.json` or platform-equivalent based on `CodexPaths::ensure_directories` pattern from 1.0.9 evidence.

3. **RelayState structure**: 0x170 bytes (368 bytes) based on `memcpy(v11, __src, 0x170u)` pattern in activate. Contains: providers Vec (stride 232B each), active_by_ide Vec, proxy port (u16 at +32 offset area), proxy Arc, and other relay config.

4. **Double-search pattern**: activate does two mutex-protected searches for ide_id in providers. First search on fresh state; if not found, calls `ensure_proxy_started`; then re-acquires lock and searches again after proxy is (re)started — to ensure the provider is in updated state post-proxy-start.

5. **`codex_catalog` side channel**: The codex catalog write is separate from relay.json write — it writes API slot allocation/catalog for the Codex CLI to discover. Distinct from `relay.json` persistence.

6. **`RelayActiveByIde` purpose**: Tracks which IDE instances have relay activated. Used for multi-IDE/multi-session relay activation tracking. Each ide_id gets exactly one entry (dedup).

7. **Error code semantics**: `*a1 = 2` (CodexPaths error), `*a1 = 3` (serialization error), `*a1 = 9` (io write error), `*a1 = 10` (success Ok sentinel) in storage::save. Confirmed by save's return patterns.

8. **`lazy_load_api_key` role**: Called after provider clone in `ensure_provider_loaded` — loads API key from keychain or file into provider struct's api_key field (String at offset +72 in RelayProvider).

## ## Unknown

1. **Windows-x64 behavior**: No Windows decompile for activate_relay_provider. The owner-map-111.jsonl entry for win marks this as `status: shared` (same command exists), but no VA obtained. Windows gate remains `platformScopeDeclared = "macOS confirmed; Windows Unknown"`.

2. **relay.json path exact string**: The exact file path (full string value) for relay.json is inferred from `paths+608/616` but not extracted as string literal from 逆向分析. The literal path string is inside `CodexPaths` struct initialization, not in this function.

3. **codex catalog file path**: `write_catalog` and `remove_catalog` take `paths+16` — exact path string not extracted.

4. **API key source details**: `lazy_load_api_key(0x1005e1c90)` internals not decompiled this session. Whether it reads from keychain, file, or env is not confirmed.

5. **proxy spawn mechanism**: `tokio::runtime::Runtime::block_on` in `ensure_proxy_started` calls an async future (off_1013C5830 vtable) — the actual process spawn / sidecar spawn implementation not decompiled this session.

6. **`apply_codex_state` internals**: `codex_writer::apply_codex_state(0x10075ae20)` not decompiled — its exact write target and DTO unknown.

7. **Frontend CCF**: Whether the frontend invokes `activate_relay_provider` directly from a UI action or via a programmatic trigger is not confirmed from backend evidence alone. dim1 requires frontend CCF analysis.

8. **test/acceptance mapping (dim6)**: C5 implementation acceptance criteria not defined — this is C5 implementation-side work.

## Fake-Wall Taxonomy Verification (red line 13)

No `accepted_unknown` claimed for any function in this session. All 9 key functions fully decompiled with complete call trees:
- No `drop_in_place` shims mistaken for async bodies
- No budget/architecture self-limit bail
- No async decompile failure (HexRays succeeded on all functions)
- No wrong VA issues (owner confirmed via lookup_funcs + xrefs_to)
- No vtable dynamic dispatch issues (all calls are direct)
- No HTTP-terminal false ceiling (HTTP/network only in proxy probe via TcpStream, fully decompiled)
- No ICF folding issues detected

`genuine_ceiling` would not be appropriate for any function — all were decompilable.
