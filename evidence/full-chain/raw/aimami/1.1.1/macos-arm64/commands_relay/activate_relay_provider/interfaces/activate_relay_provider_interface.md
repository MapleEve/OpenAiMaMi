# Interface / DTO / Error / Side-Effect Boundary
# activate_relay_provider — AiMaMi 1.1.1 macOS arm64
# session: <审计会话>

## Command Name
`activate_relay_provider`

## Input Parameters (from IPC + registration closure analysis)

| field   | type   | source | notes |
|---------|--------|--------|-------|
| ide_id  | String | a3[1]=ptr, a3[2]=len | IDE identifier string; used as key to locate RelayProvider in state.providers Vec; ownership transferred to handler (dealloc after use via rust_dealloc) |

- Registration confirmed at: `0x1003110c0` (`codexmate_lib::run::{{closure}}::{{closure}}`)
- Registration string literal: `"activate_relay_provider"` (prefix of concatenated string at 0x10031113d)
- State injection: `tauri::state::StateManager::try_get(app_handle+16)` — RelayManager Arc extracted from Tauri state

## Output / Response

- Success: `CoreEnvelope::ok(RelayState)` — returns updated relay state snapshot (0x1C0 bytes = 448 bytes)
  - Sentinel: `v9[0]` != 0x8000000000000000 indicates Ok
  - `CoreEnvelope<RelayState>` returned via __dst (out-param, 0x1C0 bytes copied)
- Error: `CoreEnvelope` with sentinel `*__dst = 0x8000000000000000` + formatted error string

## Error Paths

| error | condition | message |
|-------|-----------|---------|
| provider_not_found | ide_id not in state.providers Vec | `"relay provider {ide_id} not found"` (format string at 0x1010b0a1d: `"\x0Frelay provider "`) |
| already_active_abort | BYTE4(__src[45]) == true in snapshot (proxy already online) | returns error from initial snapshot branch |
| persist_failed | relay::storage::save returns Err | propagated as CoreError (error code 9 or 3 from save) |
| codex_sync_failed | sync_codex_config_with_outcome returns Err | logged + propagated |
| proxy_spawn_failed | ensure_proxy_started tokio::block_on fails | logged at WARN ("src/core/relay/manager.rs":25) |
| provider_not_loaded | lazy_load_api_key unavailable | ensure_provider_loaded returns Err sentinel 0x8000000000000000 |

## Side Effects

1. **fs-write (relay.json)**: `RelayManager::persist` → `relay::storage::save` → `atomic_write::write_atomic`
   - Serializes full RelayState as JSON to relay.json path (from CodexPaths at paths+608/616)
   - Atomic: write tmp → fdatasync → rename → fsync parent dir
   - Triggered on both success and certain error recovery paths

2. **fs-write (codex catalog)**: `sync_codex_config_with_outcome` → `codex_catalog::write_catalog` OR `remove_catalog`
   - If proxy port != 0: write_catalog(port, api_slots, api_key_opt)
   - If proxy port == 0: remove_catalog
   - Then always: `apply_codex_state` to finalize

3. **in-memory state mutation**: `RelayActiveByIde::add`
   - Adds ide_id bytes to active sessions set (Vec dedup — if already present, dealloc and return early)
   - Mutates manager.state (locked via Mutex) in-place at a1+32 after lock

4. **network probe** (conditional): `ensure_proxy_started` → `TcpStream::connect_timeout(127.0.0.1:proxy_port, 300ms)` × 2
   - Only called when ide_id NOT found in locked providers vec on first search
   - 50ms sleep between probes
   - On failure: clears proxy Arc, then tokio block_on to spawn/restart proxy

5. **async spawn** (conditional): `tokio::runtime::Runtime::block_on` in ensure_proxy_started
   - Spawns proxy process if not reachable

## Thread Model (from decompile evidence)

- `RelayManager::activate` uses `std::sync::Mutex` (not tokio::Mutex): sync mutex lock/unlock pattern
- Lock acquired: `std::sys::pal::unix::sync::mutex::Mutex::lock`
- Lock released: `std::sys::pal::unix::sync::mutex::Mutex::unlock`
- Panic poison tracked: `GLOBAL_PANIC_COUNT` + `is_zero_slow_path` pattern
- `OnceBox<Mutex>` lazy init for state mutex: `std::sys::sync::once_box::OnceBox::initialize`
- `ensure_proxy_started` has separate Arc ref-count logic: `_InterlockedIncrement64` / `_InterlockedDecrement64`
- `tokio::runtime::Runtime::block_on` used for async proxy spawn (not async command handler itself)

## RelayActiveByIde::add Semantics
- Dedup: if ide_id bytes already in Vec (by length + memcmp), dealloc input bytes, return false (no add)
- If new: grow vec if needed, append {ptr, len} entry, return true
- Vec stride: 24 bytes per entry (ptr=8, len=8, cap=8)
- State at a1 (RelayActiveByIde): [0]=cap, [1]=ptr, [2]=len

## Key VAs Summary

| symbol | VA |
|--------|----|
| activate_relay_provider (owner) | 0x1005eb760 |
| RelayManager::activate (core) | 0x1005dfab0 |
| RelayManager::snapshot | 0x1005e0330 |
| RelayManager::ensure_provider_loaded | 0x1005d65c0 |
| relay::storage::lazy_load_api_key | 0x1005e1c90 |
| RelayActiveByIde::add | 0x10054a8b0 |
| RelayManager::persist | 0x1005dee20 |
| relay::manager::compose_proxy_status | 0x1005d5450 |
| relay::storage::save | 0x1005e2c60 |
| CodexPaths::ensure_directories | 0x1005582b0 |
| relay::atomic_write::write_atomic | 0x10041e960 |
| relay::atomic_write::sync_parent_dir | 0x10041ec70 |
| sync_codex_config_with_outcome | 0x1005daea0 |
| codex_catalog::resolve_api_slots | 0x1006e8950 |
| codex_catalog::write_catalog | 0x1006e8450 |
| codex_catalog::remove_catalog | 0x1006e8800 |
| codex_writer::apply_codex_state | 0x10075ae20 |
| ensure_proxy_started | 0x1005d56f0 |
| CoreEnvelope::ok | 0x100557920 |
| Registration closure | 0x1003110c0 |
