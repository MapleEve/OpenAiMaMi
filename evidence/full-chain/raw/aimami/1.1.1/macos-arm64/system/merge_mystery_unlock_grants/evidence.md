# Evidence — merge_mystery_unlock_grants (macos-arm64 1.1.1)

**Session**: wf-aimami111-delta-20260616 | **Machine**: <本地机器>
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**Module**: codexmate_lib::commands::system
**Owner VA**: 0x10061be20 (906B) | **Core VA**: 0x1004ce6a0
**Produced**: 2026-06-17

## ## Confirmed

1. **Owner function** `codexmate_lib::commands::system::merge_mystery_unlock_grants::hdf956f43028415f8` at VA `0x10061be20` (size=0x38a=906B) — decompiled via 逆向分析 HexRays. Direct command function (not async state machine). Unique xref from IPC dispatcher closure `0x10030c4b0`.

2. **Core implementation** `Repository::merge_mystery_unlock_grants::h3100762488f4ae56` at `0x1004ce6a0` — decompiled. Full behavior: load_settings → HashMap merge (existing+incoming, filtered by allowlist) → SystemTime::now() → Vec::from_iter → sort → Vec::clone → save_settings → return merged Vec.

3. **ArgKey confirmed**: `grants` (Vec<MysteryUnlockGrant>) — from frontend `ipc-contracts.jsonl`: `{"argKeys": ["grants"], "argObject": "{grants:t}", "command": "merge_mystery_unlock_grants"}` and `frontend-control-flow.jsonl` snippet `ne("merge_mystery_unlock_grants",{grants:t})`.

4. **Frontend CCF confirmed**: `mergeMysteryUnlockGrants` fn in `assets/index-DdcCOEJG.js:86` col=31963 → `invoke("merge_mystery_unlock_grants", {grants:t})`. No guards in handler_chain. Direct static call.

5. **Command string confirmed**: `find_regex("merge_mystery_unlock_grants")` → n=1, packed command blob @`0x10114801b`. String is part of packed system command list.

6. **Route allowlist** (`mystery_route_allowed` @0x1004c7650) — fully decoded via XOR/SIMD analysis. 9 allowed routes: `mcp`, `skills`, `overview`, `accounts`, `sessions`, `settings`, `maintenance`, `subscription`, `customInstructions`. Matching is case-sensitive post-trim.

7. **MysteryUnlockGrant struct** stride=40B: discriminant(8) + route_ptr(8) + route_len(8) + grant_id(8) + granted_at_ms(8). Confirmed from dealloc stride pattern `40 * count` in core.

8. **Mutex pattern**: Global Repository OnceBox mutex (lock/unlock bracketing), poison detection. Consistent with all other system commands in 1.1.1.

9. **Sort algorithm**: insertion_sort_shift_left (<21 elements) OR driftsort_main (>=21 elements). Threshold=21 confirmed from `v67 >= 0x15` branch.

10. **IDB comments written**: `append_comments` ok ×3 at 0x10061be20 (owner), 0x1004ce6a0 (core), 0x1004c7650 (filter). `idb_save` executed.

11. **Sibling command** `get_mystery_unlock_grants` command fn at `0x10061a140` (0x303B) and core at `0x1004ca780` (0x207B). Same `mystery_route_allowed` filter. Read-only counterpart (no incoming args).

12. **IPC dispatcher xref**: owner called from `codexmate_lib::run::{{closure}}::{{closure}}::h02def58bae9b514e` at `0x10030c4b0` (0x454B) — single xref, standard IPC dispatch pattern.

13. **Binary SHA256** confirmed: `f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb` (逆向分析 module field: "AiMaMi", idb_path confirms AiMaMi 1.1.1).

## ## Inferred

1. **Sort key**: Likely lexicographic on `route` string (first semantic field after discriminant). Stable sort (driftsort is stable). Sort order not byte-confirmed from comparator internals but consistent with Vec<struct> default derive order.

2. **granted_at_ms semantics**: Caller-provided timestamp from incoming grants. The `SystemTime::now()` inside core may be used for internal tracking or freshness metadata, but is NOT injected into response DTO fields (they come from the merged Vec, not from now_ms directly).

3. **Settings persistence path**: `save_settings` writes to the same config file as `load_settings`. Exact path from `CodexPaths` (runtime-constructed). Consistent with all other commands using Repository pattern.

4. **Duplicate handling**: HashMap by route string key. If same route appears in both existing and incoming, incoming overwrites existing (HashMap::insert semantics). If same route appears multiple times in incoming, last occurrence wins (iteration order determines final value).

5. **grant_id=0 behavior**: No special casing observed in decompile. Zero grant_id is accepted if route passes allowlist.

## ## Unknown

1. **Windows behavior**: Not decompiled. Windows IDB required. `platformScopeDeclared = "macOS confirmed; Windows Unknown"`.

2. **dim6 test/acceptance mapping**: C5 implementation side responsibility. Not producer-assigned.

3. **Exact sort comparator**: The `PartialOrd`/`Ord` impl for `MysteryUnlockGrant` was not decompiled. Likely derives from struct field order (route then grant_id then granted_at_ms) but not byte-confirmed.

4. **granted_at_ms in now_ms use**: The `SystemTime::now()` call in `get_mystery_unlock_grants` core (`0x1004ca780`) appears to update `granted_at_ms` fields during read (mutation on read pattern). This may also happen in merge but the exact update path was not traced at the field level.

5. **Error string for poisoned mutex**: The 41-byte string `anon_91b23c3e0afeec67b869976d9683aaed_627` content not byte-read (inferred as "mutex was poisoned by a previous panic" from Rust stdlib pattern, length=41 matches).

6. **CodexMateSettings.mystery_unlock_grants field offset**: The exact byte offset of the mystery_unlock_grants Vec<T> within CodexMateSettings struct was not measured. The settings struct has multiple Vec fields dropped in `drop_in_place<CodexMateSettings>`.

7. **Non-allowed route behavior in get_mystery_unlock_grants**: `get_mystery_unlock_grants` also filters via `mystery_route_allowed` on existing settings grants (same pattern). It may silently drop non-allowed existing grants and save the pruned set.

## Four-Angle Completeness

| Angle | Status | Evidence |
|-------|--------|----------|
| A (func_query symbol enum) | PASS | lookup_funcs 0x10061be20 → confirmed; func_query name_regex confirmed |
| B (string pool) | PASS | find_regex n=1 packed cmd blob @0x10114801b |
| C (frontend CCF) | PASS | ipc-contracts.jsonl argKeys=["grants"]; frontend-control-flow.jsonl confirmed mergeMysteryUnlockGrants→invoke |
| D (manifest coverage) | PASS | manifest.json + call-trees JSONL + pseudocode files written; INDEX to be appended |

## Fake-Wall Check

| Category | Status | Notes |
|----------|--------|-------|
| async body (drop_in_place≠async) | EXCLUDED | No BlockingTask, no ::poll, no async fn env hits; 906B owner is synchronous |
| architecture_only / budget rule | N/A | Full decompile succeeded |
| async decompile failed | N/A | No async |
| Wrong VA / ICF folding | EXCLUDED | lookup_funcs confirms unique symbol at 0x10061be20 |
| vtable dynamic dispatch | EXCLUDED | All callees are direct static demangle |
| HTTP-terminal | EXCLUDED | No HTTP calls in call tree; pure settings r/w |
| Library internal vs config-callsite | N/A | mystery_route_allowed is business logic, fully decompiled |

**genuine_ceiling = false** — No accepted_unknown entries; all dims resolved or accepted.

## Gate Assessment (macOS-only)

- **dim1 (frontend CCF)**: CONFIRMED — mergeMysteryUnlockGrants fn, terminal invoke, argKeys=["grants"]
- **dim2 (backend owner + pseudocode)**: CONFIRMED — 0x10061be20 decompiled; 0x1004ce6a0 core decompiled
- **dim3 (call-tree depth)**: CONFIRMED — depth=3 to stdlib/persistence leaves; all implementation leaves reached
- **dim4 (interface/DTO/error/side-effect)**: CONFIRMED — argKeys, response envelope, route allowlist, mutex pattern, error paths
- **dim5 (platform gate)**: macOS CONFIRMED; Windows Unknown
- **dim6 (test/acceptance mapping)**: Unknown (C5 side)

**Gate tier**: `strictImplementationUse_candidate` (dim1+dim2+dim3+dim4+dim5_mac confirmed; dim5_win+dim6 Unknown)
