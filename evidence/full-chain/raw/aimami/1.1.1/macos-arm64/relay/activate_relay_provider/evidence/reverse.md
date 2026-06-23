# activate_relay_provider — SAME-DEPTH-CONFIRM

## session: <审计会话> / machine: <本地机器>

### SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

#### 1.1.1 owner
- addr: 0x1005eb760
- symbol: codexmate_lib::commands::relay::activate_relay_provider
- size: 0x1ef

#### 1.0.9 baseline (call-trees/codexmate_lib::commands::relay::activate_relay_provider.jsonl)
depth1 callee: RelayManager::activate
depth2 callees: RelayManager::snapshot, RelayManager::ensure_provider_loaded, RelayManager::ensure_proxy_started, RelayActiveByIde::add, RelayManager::persist, RelayManager::sync_codex_config_with_outcome
depth3 from persist: relay::storage::save
depth3 from sync: RelayManager::snapshot, resolve_api_slots, write_catalog, apply_codex_state

#### 1.1.1 call-tree (this session, depth 5 verified)
depth1: RelayManager::activate (0x1005dfab0) — identical app-level callee
depth2: snapshot, ensure_provider_loaded, ensure_proxy_started, RelayActiveByIde::add, persist, sync_codex_config_with_outcome — set IDENTICAL
depth3: relay::storage::save from persist; lazy_load_api_key from ensure_provider_loaded; snapshot+resolve_api_slots+write_catalog+apply_codex_state from sync — IDENTICAL
depth4: CodexPaths::ensure_directories, relay::atomic_write::write_atomic, RelayState::serialize, compose_from_original — IDENTICAL pattern
depth5: fs::DirBuilder::_create, Path::parent, fs::OpenOptions::_open, fs::File::sync_data, fs::rename, strip_all_managed_blocks, strip_stale_router_top_level_model — all stdlib/fs leaf terminated

#### delta_analysis
- No new app-level callees introduced at any depth
- No branch logic changes observed in decompile (same discriminant 0x8000000000000000, same CoreEnvelope::ok path)
- No DTO key changes — same CoreEnvelope<RelayProvider> structure
- No new HTTP, sidecar, or persistence paths
- Compilation noise filtered: hash suffixes differ (e.g. h51ae7563 vs 1.0.9 addr), memory layout offset shifts — not app-level changes

**dim6_inherited**: 1.0.9 (activate_relay_provider is readyToImplement in 1.0.9 baseline)
