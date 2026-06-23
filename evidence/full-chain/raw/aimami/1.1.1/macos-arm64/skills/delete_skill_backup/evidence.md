# delete_skill_backup — Reverse Evidence
## Version: AiMaMi 1.1.1 / macOS ARM64
## Session: <审计会话>
## Machine: <本地机器>
## Binary SHA256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
## IDB: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
## Gate tier: strictImplementationUse_candidate (dim1+dim2+dim3+dim4; dim5_mac confirmed; dim5_win+dim6 Unknown)
## Migration status: migrated_no_behavior_diff from 1.0.9 baseline (interface identical, implementation details confirmed)
## 逆向分析 health at session start: status=ok, uptime=27402s, hexrays_ready=true, module=AiMaMi

---

## ## Confirmed

1. **Owner VA confirmed**: `codexmate_lib::commands::skills::delete_skill_backup` @ `0x10072d290` (size=0x38e, has_type=true) — 逆向分析 func_query hit, decompile successful
2. **Core impl VA confirmed**: `codexmate_lib::core::skills::delete_skill_backup` @ `0x1005e6750` (size=0x31f, has_type=true) — 逆向分析 decompile successful, full body visible
3. **IPC dispatch xref confirmed**: Single xref at `0x100307d4a` in `codexmate_lib::run::{{closure}}::{{closure}}` — IPC routing proven
4. **argKey confirmed**: `["id"]` — ipc-contracts.jsonl: `argKeys:["id"]`, `argObject:{id:t}` @ index-DdcCOEJG.js:86; frontend wrapper `deleteSkillBackup:t=>ne("delete_skill_backup",{id:t})`
5. **IPC registration string confirmed**: `"delete_skill_backup"` in registration blob @ `0x101147e82` (multi-command rodata cluster containing load_skill_backups, delete_skill_backup, restore_skill_backup etc.)
6. **Path pattern confirmed**: `{repo}/skill-backups/{id}` — two `std::path::Path::_join` calls: first joins `"skill-backups"` (13B), second joins `id` (a4/a5)
7. **Delete method confirmed**: `std::sys::fs::remove_dir_all` @ `0x100f2a6a0` — backup is treated as a directory, deleted recursively
8. **Post-delete reload confirmed**: `codexmate_lib::core::skills::load_skill_backups` @ `0x1005e4c90` called after successful delete — re-reads remaining backups and returns sorted list
9. **Response type confirmed**: `Vec<SkillBackupSummary>` — `load_skill_backups` populates Vec with 152-byte per-entry structs; sort applied (driftsort >=21, insertion_sort <=20)
10. **SkillBackupMetadata serde fields confirmed**: serde key cluster at `0x1011542c7`: `backupID`(8B) | `skillID`(7B) | `title`(5B) | `relativePath`(12B)
11. **Error strings confirmed** (@ `0x1010B7872`): `"Backup not found: "` (18B), `"Path not found: "` (16B), `"Backup corrupted: "` (18B) — format strings prefixed with length byte
12. **Mutex pattern confirmed**: AppState unix mutex lock/unlock wraps entire operation (same as all other skills module commands)
13. **CoreEnvelope wrapping confirmed**: `CoreEnvelope<T>::ok` @ `0x100555dd0` wraps success; error path returns discriminant `0x8000000000000000`
14. **Four-angle completeness — A (func_query)**: name_regex `.*delete_skill_backup.*` → 2 hits (command + core, no ambiguity) — PASS
15. **Four-angle completeness — B (string pool)**: find_regex `delete_skill_backup` → 1 match at `0x101147e82` (IPC registration blob) — PASS

---

## ## Inferred

1. **`id` parameter type is String**: inferred from `a4`=ptr, `a5`=len pattern (Rust &str convention) and frontend `{id:t}` where `t` is a string variable
2. **Backup directory naming**: directory name = literal `id` value passed by frontend (no transformation observed in decompile)
3. **`skill-backups` base path comes from AppState/Repository**: passed as `v28[45]`/`v28[46]` to core impl — same pattern as other path-based commands
4. **`load_skill_backups` called with same repo base path**: `v52`/`v8` are the repo base path after the first path join, passed to reload function
5. **SkillBackupSummary size = 152 bytes**: confirmed from `memcpy(..., 0x98)` (0x98=152) and stride `152 * v27` in Vec allocation
6. **Sorting semantics**: sort applied to returned Vec before Ok return; likely sorts by some field (backupID or title — comparator not decompiled but sort is confirmed)
7. **`metadata.json` is required per backup dir**: `load_skill_backups` reads `metadata.json` inside each backup subdirectory; entries without it are skipped silently
8. **`skill/` subdirectory path built but not returned**: `Path::_join(..., "skill", 5)` result stored in SkillBackupSummary struct — path available to frontend but dir not deleted (only delete_skill_backup's `remove_dir_all` handles that)
9. **No HTTP/sidecar in this command**: all operations are local filesystem + mutex; no network calls, no sidecar process, no Tauri event emission
10. **Error format uses `alloc::fmt::format_inner`**: dynamic string formatting: "Backup not found: " + id value — CoreError variant 7 (NotFound)

---

## ## Unknown

1. **Exact `id` format**: whether `id` is a UUID, hash, path fragment, or custom string — not visible from decompile; frontend passes opaque string from UI state
2. **AppState struct layout**: field offsets 45/46 (u64 indices into _QWORD array) — exact field names not resolved
3. **SkillBackupSummary full struct layout**: fields beyond the 4 confirmed serde keys (backupID/skillID/title/relativePath); total struct is 152 bytes — remaining ~112 bytes unknown
4. **Sorting comparator field**: which field of SkillBackupSummary is used as sort key (comparator function not decompiled)
5. **Windows behavior**: `delete_skill_backup` on Windows — separate binary (win64.exe SHA=d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610); Windows unknown per platform gate; not inferred from macOS
6. **`metadata.json` full schema**: only 4 serde keys confirmed (backupID/skillID/title/relativePath); SkillBackupMetadata may have additional fields
7. **`"Backup corrupted: "` trigger condition**: third error string present in binary but no corresponding code path clearly observed in decompile (may be from load_skill_backups on parse failure)
8. **dim6 (test/acceptance mapping)**: not in scope for producer — C5 implementation side must define unit/E2E/manual acceptance criteria
9. **`skill/` subdirectory structure**: content of skill subdir within backup is not enumerated in delete path; `remove_dir_all` handles all nested content
10. **SkillBackupSummary sort stability**: whether sort is stable — driftsort is stable, insertion_sort_shift_left stability not verified

---

## ## Fake-wall Check

**genuine_ceiling**: false
**recovery_attempts**: not_needed — all decompile succeeded; no async/poll needed; no vtable; no ICF fold

Taxonomy check (red line 13):
- `drop_in_place ≠ async body`: N/A — synchronous mutex-wrapped command; no async/await, no spawn_blocking for this command
- `architecture_only / budget_rule`: N/A — no self-imposed decompile limit; full body decompiled
- `async_decompile_failed`: N/A — synchronous command, HexRays full decompile succeeded
- `wrong_VA`: N/A — func_query unique match, IPC xref confirmed, 4-angle cross-verified
- `vtable_dynamic`: N/A — all callees are statically-named functions; no vtable dispatch in critical path
- `HTTP_terminal`: N/A — no HTTP in this command; all operations are local filesystem
- `library_internal vs config_callsite`: std::path/std::fs/serde_json correctly classified as library leaves

All 7 taxonomy categories excluded. No accepted_unknown justified without proof attempted — all unknowns are serde-derive level (field names inside binary-internal structs) or platform scope (Windows).

---

## ## Four-Angle Completeness

| Angle | Method | Result |
|---|---|---|
| A (func_query symbol enum) | `func_query name_regex=.*delete_skill_backup.*` | 2 hits (command+core, unique) — PASS |
| B (string pool IPC reg) | `find_regex delete_skill_backup` | 1 match @ 0x101147e82 IPC blob — PASS |
| C (frontend IPC contract) | ipc-contracts.jsonl `command=delete_skill_backup` | argKeys=["id"], argObject={id:t}, wrapper=deleteSkillBackup — PASS |
| D (owner-map + INDEX) | owner-map-111.jsonl status=shared/not_yet_queried; INDEX 0 hits for 1.1.1 | ADDITIVE — no collision — PASS |

---

## ## IDB Annotations (append_comments)

| VA | Comment |
|---|---|
| 0x10072d290 | A-level owner for delete_skill_backup; range 0x10072d290-0x10072d61e; sha f34ff829; session <审计会话>; not gate promotion |
| 0x1005e6750 | B-level core impl for delete_skill_backup; path-join skill-backups/<id> + remove_dir_all + load_skill_backups reload; sha f34ff829; session <审计会话>; not gate promotion |
| 0x1005e4c90 | load_skill_backups - reads skill-backups dir, deserializes SkillBackupMetadata per subdir, returns sorted Vec<SkillBackupSummary>; called post-delete; session <审计会话> |
| 0x101147e82 | IPC registration blob: delete_skill_backup command string anchor; session <审计会话> |
| 0x1010B7872 | error strings for delete_skill_backup core: 'Backup not found: '(18B) / 'Path not found: '(16B) / 'Backup corrupted: '(18B); session <审计会话> |

idb_save: ok (path=<来源位置>/raw/binary/AiMaMi-1.1.1-idb)
