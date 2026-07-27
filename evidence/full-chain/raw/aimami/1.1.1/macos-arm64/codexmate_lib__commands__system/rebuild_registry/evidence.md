# rebuild_registry — Reverse Evidence

**session**: <审计会话>
**machine**: <本地机器>
**version**: AiMaMi 1.1.1 macOS ARM64
**completed**: 2026-06-18
**leaf_status**: full_gold_leaf

---

## Confirmed

1. **Command VA confirmed**: `codexmate_lib::commands::system::rebuild_registry` @ `0x1006182c0`, size=0x2F7 bytes. 逆向分析 IDA decompiler_ready=true, decompiled cleanly.
2. **Core impl VA confirmed**: `codexmate_lib::core::repository::Repository::rebuild_registry` @ `0x1004c40a0`, size=0x1507 bytes. Full pseudocode captured.
3. **New command in 1.1.1**: Absent from `1.0.9/macos/system/` directory; confirmed in `mac-delta.txt` and `mac-need-goldleaf.txt`. This command did not exist in 1.0.9.
4. **Mutex-guarded Tauri handler**: Handler acquires `std::sys::pal::unix::sync::mutex::Mutex::lock` on `State<AppState>` before delegating to core. Unlock on all paths confirmed.
5. **14-step pipeline confirmed via pseudocode**: ensure_directories → load_registry → timestamp → load_auth_file (primary) → make_auth_snapshot → make_snapshot_path → fs::copy (backup) → build RegistryItem → carry_over_registry_state → push to Vec → scan accounts dir → iterate .json files → sort → persist_registry.
6. **Auth file extension filter confirmed**: integer comparison `*v44 != 1852797802` = `0x6E6F736A` = "nosj" in LE = "json". Only `.json` files processed.
7. **Dedup logic confirmed**: inner loop at v47/v49 compares `email ptr+len` via `memcmp` to skip duplicate accounts already added from primary auth scan.
8. **Backup side-effect confirmed**: `make_snapshot_path` + `std::sys::fs::copy` executed before each auth snapshot build. Path components from `a2[31]/a2[32]`.
9. **persist_registry writes 6 JSON fields**: schema_version, timestamp, accounts, items, plan_type (lowercased), auth_mode (lowercased). Confirmed by 4x `SerializeMap::serialize_entry` + 2x `SerializeStruct::serialize_field`.
10. **Call-tree depth=5 confirmed**: handler(1) → rebuild_registry(1) → decode_jwt_claims(3) → base64::Engine::decode(4) → GeneralPurpose::internal_decode(5); terminated_reason=external_call.
11. **Sort confirmed**: `insertion_sort_shift_left` for n<21 items, `driftsort_main` for n>=21 items. Sort key inferred as `carry_over_registry_state` output structure (likely plan_tier/email).
12. **No async**: synchronous blocking call, no `::poll` dispatch needed. Mutex ensures serial execution.
13. **RebuildRegistryPayload struct confirmed**: `drop_in_place<CoreEnvelope<RebuildRegistryPayload>>` @ `0x1004e7530` identified; Serialize impl @ `0x100551c10`. Payload is unit/empty (no input fields).
14. **CoreEnvelope::ok confirmed**: `codexmate_lib::core::models::CoreEnvelope<T>::ok::h2f2f79ad1dfe53da` @ `0x100555a00` called on success path.
15. **Error propagation confirmed**: `CoreError::fmt` via `Display` impl @ `0x10058fda0` used for error string formatting in handler.

---

## Inferred

1. **RegistryItem size = 360 bytes (0x168)**: deduced from `memcpy(ptr + 360 * index, ..., 0x168u)` and `alloc::raw_vec::grow_one` capacity management.
2. **Primary auth file path = a2[4]/a2[5]**: Repository struct field at offset 4*8=32 and 5*8=40. Inferred from how `load_auth_file(src, a2[4], a2[5])` is called.
3. **Registry JSON write path = a2[27] * a2[28]**: `std::fs::write` called with `a2+216` offset (`216/8=27`). Layout inferred from persist_registry pseudocode.
4. **plan_type/auth_mode normalized to lowercase**: Both fields lowercased before serialization via `alloc::str::to_lowercase`. This normalizes "Pro"/"pro"/"PRO" → "pro" for registry consistency.
5. **carry_over_registry_state transfers enabled/disabled flag**: Only 2 callees (String::clone + dealloc) — it is a simple field copy, likely transfers enabled/pinned/active state from old registry to new item to preserve user preferences across rebuilds.
6. **Snapshot path format**: `make_snapshot_path(a2[31], a2[32])` likely produces a timestamped backup of the auth file (e.g., `auth.json.bak.TIMESTAMP`). Path::_join confirms subfolder construction.
7. **accounts_dir at a2[27..30]**: `read_dir` uses `v35/v36` which is loaded from repository state. Likely `a2->accounts_dir` path string.
8. **JSON schema version field = "schema_version" (13 bytes)**: from `anon_f51ae5326f2311952c2d8e4ee92ea107.164` string literal (13-char key).
9. **"items" field key = 5 bytes**: from anon literal at `.266` offset (5-char key = "items").
10. **Mutex poisoning handled**: if `*(a2+8) == 1` (poisoned flag), handler returns error string immediately without calling into core.

---

## Unknown

1. **Exact RegistryItem field offsets beyond email/plan_type/auth_mode**: struct has 360 bytes but full field map not reverse-completed in this pass.
2. **Sort comparator**: `driftsort_main` / `insertion_sort_shift_left` called with a comparator function pointer (v95[0] + comparator in __dst[0]). Comparator function not decompiled — sort key unclear (could be email, plan_tier, timestamp).
3. **Exact "schema_version" value written**: constant integer at `a3+68` passed as schema_version. Value not resolved (requires string literal lookup at anon_f51ae5326f2311952c2d8e4ee92ea107.164 context).
4. **make_auth_snapshot full field map**: `make_auth_snapshot` has 25+ callees including `decode_jwt_claims`, `nested_dict`, `string_val`, `parse_iso_timestamp`. Full DTO reconstruction requires additional decompile pass on `make_auth_snapshot` output struct.
5. **Whether rebuild_registry is idempotent**: no write-lock on registry file observed beyond Mutex. Concurrent Tauri commands cannot race (Mutex), but external writes (file manager) could conflict.

---

## Delta vs 1.0.9 — Change Summary

**This command is entirely new in 1.1.1.** It does not exist in the 1.0.9 binary (confirmed by absence from `raw/aimami/1.0.9/macos/system/` directory).

### New functionality introduced in 1.1.1:

1. **`rebuild_registry` command** — Forces a full rescan of all account auth files and rebuilds the registry from scratch, replacing stale/corrupt registry state.
2. **`carry_over_registry_state`** — New helper `0x1004d6230` that transfers user-configured state (enabled flags, preferences) from old registry into newly rebuilt items, preventing preference loss on rebuild.
3. **`make_auth_snapshot` path** — New `account_io::make_snapshot_path` + `fs::copy` pattern creates automatic backup of auth files before each registry rebuild. This is a **new side-effect** not present in 1.0.9.
4. **Auth file dedup** — Inner loop prevents duplicate registry entries when the primary auth file also appears in the accounts directory scan.
5. **Stable sort** — Uses `driftsort_main` (Rust 1.81+ stable sort) for n≥21 items, `insertion_sort_shift_left` for smaller arrays. Indicates a specific ordering guarantee for registry output.

### Relation to existing 1.0.9 commands:
- 1.0.9 has `refresh_usage_snapshot`, `get_system_info`, `diagnose` in the `system` module.
- `rebuild_registry` is additive — no existing command appears modified.
- The `persist_registry` function used here (`0x1004c3a00`) may be shared with other write paths in 1.1.1.
