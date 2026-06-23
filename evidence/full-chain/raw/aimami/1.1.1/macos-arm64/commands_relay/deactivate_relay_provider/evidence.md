# Evidence: deactivate_relay_provider — AiMaMi 1.1.1 macOS arm64
session: wf-aimami111-delta-20260616 | machine: <本地机器> | produced: 2026-06-16

## ## Confirmed

1. **Owner VA confirmed**: `0x1005ebb60` — `codexmate_lib::commands::relay::deactivate_relay_provider` — size 0x1ef (495B), has_type=true, demangled OK
2. **Core delegate confirmed**: `0x1005d14b0` — `codexmate_lib::core::relay::manager::RelayManager::deactivate` — full decompile success, HexRays non-failed
3. **IPC dispatch confirmed**: single xref at `0x100314dc3` in `codexmate_lib::run::{{closure}}::{{closure}}` — matches IPC routing pattern (same as all other commands this session)
4. **Command registration confirmed**: string found at `0x101148166` in command registration blob (`deactivate_relay_provider`)
5. **argKeys BREAKING CHANGE confirmed**: frontend IPC contracts jsonl shows `argKeys=["providerId","ide"]` (was `["providerId"]` in 1.0.9) — new `ide` parameter required
6. **Error 1 string confirmed (get_bytes)**: 107B at `0x1011541DD` = `"当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。"` — router_enabled guard (NEW in 1.1.1)
7. **Error 2 string confirmed (get_bytes)**: 123B at `0x101153A2B` = `"无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"` — last-provider guard (CHANGED from English in 1.0.9)
8. **Persistence leaf confirmed**: `codexmate_lib::core::relay::storage::save` @ `0x1005e2c60` decompiled — calls `ensure_directories` + `serde::serialize(RelayState)` + `atomic_write::write_atomic` @ `0x10041e960`
9. **Sync leaf confirmed**: `codexmate_lib::core::relay::manager::sync_codex_config_with_outcome` @ `0x1005daea0` decompiled — calls `snapshot`, `resolve_api_slots`, `write_catalog`/`remove_catalog`, `apply_codex_state`
10. **Source file confirmed**: `src/core/relay/manager.rs` from log string literal in sync_codex_config_with_outcome decompile
11. **binary_sha256 confirmed**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb (same IDB as all other 1.1.1 commands this session)

## ## Inferred

1. **`ide` parameter semantics**: String identifier for the calling IDE instance — based on function signature (a3=providerId String ptr, a4=ide, passed as `__src=[v35, v34]` to Vec::retain closure) and frontend `argObject: "{providerId:t, ide:e}"`
2. **`router_enabled` flag location in RelayState**: `v31` in decompile corresponds to a boolean field checked before Vec::retain. Flag offset approximately at position that maps to the codex_router_enabled/router_active field
3. **Vec::retain closure**: removes ide from `RelayActiveByIde` active sessions list (same behavioral semantics as 1.0.9, but now passes `ide` explicitly instead of using implicit IDE tracking)
4. **`RelayManager::compose_proxy_status` @ `0x1005d5450`**: called inside `persist` — likely stops proxy if no IDEs remain active (same purpose as 1.0.9 `stop proxy` step)
5. **`apply_codex_state` @ `0x10075ae20`**: applies deactivated provider state to Codex config files (writes to `~/.codex/` or similar path via codex_writer)
6. **Error envelope format**: CoreEnvelope::Err with String — discriminant `0x8000000000000000` (Err), variant 9 (CoreError::Other) for guard errors, variant 2 (CoreError::IoError) for IO failures

## ## Unknown

1. **`compose_proxy_status` body** (`0x1005d5450`, leaf_named_not_decompiled): whether proxy actually gets stopped depends on whether all IDEs deactivated — exact condition not decompiled
2. **`ide` exact string format**: UUID, path, or custom IDE identifier — not evident from decompile alone; frontend passes it as positional string `e`
3. **`RelayActiveByIde` struct layout**: the Vec inner type storing IDE active sets — only Vec::retain call seen, inner struct not decompiled
4. **`apply_codex_state` body** (`0x10075ae20`, leaf_named_not_decompiled): exact files written by codex_writer not confirmed this session (same as 1.0.9 accepted_unknown)
5. **`snapshot` body** (`0x1005e0330`, leaf_named_not_decompiled): what RelayState fields are included in the snapshot for sync_codex_config — not decompiled
6. **`atomic_write::write_atomic` body** (`0x10041e960`, fs_write_leaf): exact temp file + rename pattern — same accepted_unknown as 1.0.9 baseline
7. **RelayState serde field names**: JSON field names from serde derive — not visible in decompile (accepted_unknown, same as baseline and all other relay commands)
8. **`router_enabled` flag read location in guard**: exactly which byte/field offset in RelayState holds the router_enabled boolean — offset `v66[188]` observed in decompile but struct layout not fully mapped

## Fake-wall check (red line 13 — accepted_unknown anti-cheat)

**genuine_ceiling**: false
**recovery_attempts**: not_needed (no accepted_unknown marking; all bounds properly classified)
**7-category exclusion**:
- `drop_in_place≠async_body`: N/A — synchronous function, no async/await, no spawn pattern; `drop_in_place` calls are destructors on RelayState/CoreError, correctly classified
- `architecture_only/budget_rule`: N/A — no self-imposed budget rule applied; all depth levels decompiled to natural termination
- `async_decompile_failed`: N/A — HexRays successfully decompiled all target functions; no poll/resume body needed
- `wrong_VA`: N/A — func_query `deactivate_relay` → unique result `0x1005ebb60`; owner-map-111.jsonl confirms; no ambiguity
- `vtable_dynamic`: N/A — all callees are static named symbols (Mutex::lock, Vec::retain, persist, sync_codex_config — all named)
- `HTTP_terminal`: N/A — no HTTP in this command; storage is file-only (atomic_write, catalog, codex_writer)
- `library_internal`: `alloc::vec::Vec::retain`, `std::sys::pal::unix::sync::mutex::*`, serde — correctly classified as std/library leaf; behavior confirmed at callsite level

**leaf_named_not_decompiled items** (legitimate): compose_proxy_status, snapshot, resolve_api_slots, write_catalog, remove_catalog, apply_codex_state, atomic_write — all are named, well-understood by callsite context; none contain the critical deactivation logic (which is fully in `RelayManager::deactivate` body)

## Four-angle completeness (red line 15)

- **A (func_query symbol enum)**: `func_query {"name_regex":"deactivate_relay","count":20}` → unique result `0x1005ebb60`, mangled name confirmed. PASS
- **B (string pool)**: `find_regex "deactivate_relay_provider"` → found at `0x101148166` in command registration blob. PASS
- **C (frontend IPC)**: `ipc-contracts.jsonl` command=deactivate_relay_provider → argKeys=["providerId","ide"], column=119638, wrapper=vt. PASS (also reveals BREAKING interface change)
- **D (owner-map + INDEX)**: owner-map-111.jsonl confirms `0x1005ebb60`; INDEX.jsonl grep 1.1.1 deactivate_relay_provider = 0 entries (no collision); current session wf-aimami111-delta-20260616 is owner. PASS — ADDITIVE write
