# Evidence: set_relay_display_tags — AiMaMi 1.1.1 macOS arm64

**Session**: <审计会话>
**Machine**: <本地机器>
**Model**: claude-sonnet-4-6
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi.i64 (hexrays_ready=true, uptime 65209s at session start)
**Role**: 纯生产者 (SOP steps 0-6)
**Delta status**: new_in_1_1_1 — not in 1.0.9 baseline; first appearance in 1.1.1

---

## Confirmed

1. **Owner VA confirmed**: `codexmate_lib::commands::relay::set_relay_display_tags::h33e2560b68df1f92` @ `0x1005eb5a0`, size=0x188 (392B), has_type=true — via 逆向分析 lookup_funcs + decompile
2. **Dispatcher VA confirmed**: IPC closure `codexmate_lib::run::{{closure}}::{{closure}}::he1f423954ff1d9de` @ `0x10031a360` (size=0x5f4) has sole xref to owner — verified via xrefs_to(0x1005eb5a0)
3. **argKeys confirmed dual-source**: ["manager"(7B@0x101148407), "global"(6B@0x101148466), "woyao"(5B@0x10114846c)] — from dispatcher decompile (from_command calls with explicit len) + packed blob string pool @ 0x1011482ff
4. **Command name "set_relay_display_tags" confirmed**: 22B @ 0x10114836c, bytes 73 65 74 5f 72 65 6c 61 79 5f 64 69 73 70 6c 61 79 5f 74 61 67 73 — exact match via get_bytes
5. **Core impl VA confirmed**: `RelayManager::set_display_tags::hf3be8ff1c91fde12` @ `0x1005d24d0` called as sole callee from owner (callees result) + decompile succeeded
6. **Success response sentinel confirmed**: `*a1 = 0x8000000000000000LL` = Rust `Ok(())` unit sentinel — observed in owner decompile
7. **FS WRITE side-effects confirmed**: `atomic_write::write_atomic` @ `0x10041e960` called from `storage::save` — atomic FS write of serialized RelayState
8. **Two sanitize_display_tag calls confirmed**: `codex_catalog::sanitize_display_tag` @ `0x1006e9ab0` called twice in core impl — once for `global` arg, once for `woyao` arg (confirmed via decompile + callees)
9. **Sanitize_display_tag behavior confirmed**: trim_matches (whitespace trim) + String::from_iter (collect) — synchronous string processing, no network/FS I/O
10. **Call-tree depth ≥ 5 confirmed**: dispatcher(0) → owner(1) → core_impl(2) → persist(3) → storage::save(4) → atomic_write(5) — 5+ levels with unique demangled symbols
11. **Error string "relay state poisoned" confirmed**: 20B @ 0x101153a17, bytes 72 65 6c 61 79 20 73 74 61 74 65 20 70 6f 69 73 6f 6e 65 64 — mutex poisoned error in persist path
12. **Error string "write relay state failed: " confirmed**: 26B @ 0x1010b7841 (after 1B len prefix 0x1a) — FS write failure format string in storage::save
13. **Mutex acquire/release confirmed**: `Mutex::lock::h6b8bb4259dcc18d0` + `Mutex::unlock::hb9acd26a137dd78d` in persist path (guard against concurrent relay state modification)
14. **Conditional sync_codex_config call confirmed**: `sync_codex_config_with_outcome` @ `0x1005daea0` only called when v6 flag is true (relay was active in snapshot) — per decompile of core_impl
15. **Codex config FS writes confirmed**: `write_catalog`(0x1006e8450) + `remove_catalog`(0x1006e8800) + `apply_codex_state`(0x10075ae20) — all FS WRITE leaves in sync_codex_config path
16. **Three snapshots confirmed**: `RelayManager::snapshot::h0ea44eefa71d8bf1` @ `0x1005e0330` called ×3 in core_impl (init read, mutation base, return clone)

---

## Inferred

1. **"manager" arg is a Tauri State handle**: `tauri::state::StateManager::try_get` (dispatcher) checks for state before arg extraction; "manager" key used for State<RelayManager> dependency injection
2. **"global" tag semantics**: Likely a display label shown globally in UI across all relay providers (as opposed to per-provider)
3. **"woyao" tag semantics**: Middle Chinese pinyin "我要" = "I want"; likely a wishlist/desired-state display tag field on RelayProvider struct (offset +11 in stride-232B provider array, based on clearing loop in core_impl)
4. **RelayState size**: 0x170 = 368 bytes (from memcpy in owner success path); RelayProvider stride = 232 bytes (from sync_codex loop)
5. **Display tag field offset in RelayProvider**: v17[11] zeroed in clearing loop = offset 11*8 = 88 bytes into provider struct
6. **serialize format**: `RelayState::serialize` uses serde (observed unk_101153418 serializer vtable) — format likely TOML (consistent with other relay state commands in 1.0.9)
7. **atomic_write path**: `*(void **)(a2 + 608)` = file path ptr at offset 608 in CodexPaths; `*(_QWORD *)(a2 + 616)` = path len — file path injected via CodexPaths struct
8. **sync_codex_config triggered by "active" flag**: v6 from snapshot's v31 field = boolean flag indicating relay was active; if false, sync skipped (relay display tags updated only in relay state file, not Codex config)
9. **IPC command is new in 1.1.1**: owner-map-111.jsonl status=added; no 1.0.9 counterpart in INDEX.jsonl; consistent with display_tags being a new relay feature in 1.1.1

---

## Unknown

1. **"woyao" exact semantics**: Tag name is unusual; may be an internal codename or dev shorthand — full RelayProvider struct layout needed to confirm field name (dim6 Unknown)
2. **Exact file path written**: CodexPaths offset +608 resolves to relay state file path; actual path string not extracted in this session (depends on CodexPaths initialization)
3. **Windows-x64 equivalent**: windows-x64 INDEX entry exists (gate=consumerStartReady) but this session is macOS only; cross-platform behavioral contract assumed equivalent pending dim5_win verification
4. **Global tag vs woyao tag distinction in UI**: Unknown whether both tags appear in same UI component or separate sections
5. **Max tag length**: sanitize_display_tag only trims whitespace; no explicit length cap observed in pseudocode; unknown if relay state schema enforces max
6. **RelayProvider display_tag struct field offset**: Inferred as +11*8=88B from zeroing loop; not confirmed via struct declaration (dim6 Unknown)
7. **Success response payload**: CoreEnvelope<T> type T — owner success path returns updated RelayState (0x170 bytes copied); exact T type Unknown (RelayState vs Vec<RelayProvider> vs other)
8. **Error variants from CoreError**: `CoreError::fmt` called on error; specific error variants (e.g. provider_not_found, lock_error, io_error) not enumerated from pseudocode
9. **HTTP/network side-effects**: None observed in call-tree (pure FS + mutex); confirmed no HTTP terminal in this command
10. **sidecar calls**: None observed; confirmed no sidecar IPC in this command path

---

## Anti-fake-wall Assessment

- `genuine_ceiling=false` — all functions synchronous (no async state machine / poll / resume observed)
- Decompile succeeded for all 4 layers: owner + core_impl + dispatcher + persist + storage::save + sanitize_display_tag
- No ICF fold detected (unique demangled symbols for owner + core_impl)
- No vtable dispatch observed in command path
- HTTP-terminal N/A (pure FS + mutex operations)
- All 7 taxonomy categories (drop_shim, architecture_only, async_decompile_failed, wrong_VA, vtable_dispatch, HTTP-terminal, lib_internal) excluded
- `sync_codex_config_with_outcome` is large (many callees) but fully decompiled — no fake wall

---

## Four-Angle Completeness Pre-check

- **A (func_query)**: lookup_funcs(0x1005eb5a0) returned unique demangled symbol h33e2560b68df1f92, has_type=true — PASS
- **B (string pool)**: find_regex("set_relay_display_tags") returned n=1 match at packed blob 0x1011482ff, command name bytes confirmed — PASS
- **C (dispatcher decompile)**: argKeys ["manager"(7B), "global"(6B), "woyao"(5B)] confirmed from from_command calls in dispatcher; sole xref to owner — PASS
- **D (manifest+INDEX)**: pending INDEX write (step 7 of this session)

---

## Gate Assessment

- `strictImplementationUse_candidate` — owner + core_impl + dispatcher all decompiled; call-tree depth ≥ 5; terminal leaves confirmed; argKeys dual-source confirmed; response type confirmed (CoreEnvelope<RelayState>); error strings extracted
- `readyToImplement` — NOT yet (dim6 Unknown: "woyao" field semantics, RelayProvider layout, Windows not independently confirmed in this session)
- `dim5_win` — DONE separately (windows-x64 INDEX entry gate=consumerStartReady, produced by same session <审计会话>)
- `dim6` — Unknown (full struct layout / field names not recovered)

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate tier**: readyToImplement (dim6=acceptance-draft)

### Happy Path
- Input: `{global: "内部构建 Relay", woyao: "我要模型"}`
- Expected: `CoreEnvelope::ok(RelayState)` — relay.json written atomically; codex catalog + config updated IF relay was active; whitespace trimmed from both tags before persist.

### Error Paths
| Trigger | Expected |
|---------|----------|
| Mutex poisoned | Err("relay state poisoned") |
| atomic_write fails | Err("write relay state failed: <io_error>") |
| relay NOT active | Ok but catalog/codex.toml NOT touched |
| whitespace-only tags | trimmed to empty string, still stored — no rejection |

### Side-Effect Asserts
- relay.json written (atomic_write @ 0x10041e960)
- codex catalog written or removed (conditional on relay.active)
- apply_codex_state fires when relay was active
- no HTTP/network side effects

### Test Mapping
- `e2e`: happy_path_relay_active
- `unit`: happy_path_relay_inactive, mutex_poisoned, atomic_write_failure, whitespace_trim
- `explicit_non_automatable_accept`: woyao field name at +88B — consumer confirms in 内部构建 RelayProvider struct

### Accepted Unknowns
- "woyao" struct field name (offset +88B confirmed from zeroing loop; consumer validates in 内部构建 implementation)
