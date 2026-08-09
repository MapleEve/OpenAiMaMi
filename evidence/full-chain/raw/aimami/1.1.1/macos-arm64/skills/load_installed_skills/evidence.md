# evidence — load_installed_skills
# AiMaMi 1.1.1 macOS arm64 | session <审计会话>
# machine: <本地机器> | role: producer
# delta_class: integrity_recovered | leaf_status: full_gold_leaf
# baseline: 1.0.9 (previously reversed)
# source_binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## Confirmed

1. **Owner VAs**: `commands::skills::load_installed_skills` @ `0x10072db50` (size 0x58a), `core::skills::load_installed_skills` @ `0x1005e78d0` (size 0x14f). Both located via `func_query name_regex="load_installed_skills"` with 逆向分析 live (IDA decompiler_ready=true, module=AiMaMi 1.1.1). 逆向分析 decompile confirmed; raw pseudocode in `ida/pseudocode/`.

2. **NEW delta callee confirmed absent from 1.0.9**: `Repository::store_bootstrap_installed_skills` @ `0x1004cf950` (size 0x1d4). Call site evidence: `call codexmate_lib::core::repository::Repository::store_bootstrap_installed_skills::h770665096ee67f36` from decompile of `0x10072db50`. Verified via 逆向分析 callees tool — callee list for `0x10072db50` explicitly contains `0x1004cf950`. 1.0.9 symbol table has no equivalent function at any VA range.

3. **Persistence side-effect confirmed**: `store_bootstrap_installed_skills` calls `std::fs::write::inner` @ `0x100f25f70` unconditionally on success. Path sourced from `Repository.paths[58..59]` = `bootstrap-cache.json` (path literal confirmed at string blob `0x1011514d1`: `"...settings.jsonbootstrap-cache.json..."`). Decompile shows `v15 = std::fs::write::inner(v21, v7, v13, v14)` on non-error path.

4. **NEW serde DTO field `installedSkills` in `BootstrapStatePayload`**: Confirmed via serde visitor blob at `0x10114ce82`: `"BootstrapStatePayloadwrittenAtsnapshotProgressiveusageAnalyticsmcpServersinstalledSkills..."`. Field index 4, alongside `writtenAt(0)`, `snapshotProgressive(1)`, `usageAnalytics(2)`, `mcpServers(3)`. String `"installedSkills"` is 15 bytes.

5. **`InstalledSkillSummary` struct layout confirmed at 184 bytes / 8 fields**: Evidence: `memcpy((void *)(v17[1] + 184 * v18), v26, 0xB8u)` in `scan_skills_recursive` @ `0x1005e7d11`. Stride = 0xB8 = 184 bytes per entry. String `"struct InstalledSkillSummary with 8 elements"` @ `0x10114d603` confirms field count.

6. **`SkillListPayload` struct confirmed at 4 fields**: String `"struct SkillListPayload with 4 elements"` @ `0x10115221a`. `SkillListPayload::drop` @ `0x1004eb520` is called in `store_bootstrap_installed_skills` when replacing old payload at offset 107 of `BootstrapStatePayload`.

7. **read-modify-write pattern confirmed**: `store_bootstrap_installed_skills` first calls `bootstrap_cache::load` to read existing `BootstrapStatePayload`, then patches fields `[0]=writtenAt`, `[107..114]=installedSkills/codex_version/schema_version`, then serializes and writes. This is non-destructive: existing fields (usageAnalytics, mcpServers, snapshotProgressive) are preserved.

8. **`BootstrapCacheFile` top-level envelope confirmed**: String `"a mapstruct BootstrapCacheFile"` @ `0x10114d9d2`. `bootstrap_cache::load` returns `file.state: BootstrapStatePayload` (memcpy of 0x390 bytes). Default fallback sets `*a1=0`, `a1[2]=3` (schema_version=3), three `0x8000000000000000LL` None sentinels at offsets 87, 99, 107.

9. **Error discriminants confirmed from 逆向分析 pseudocode**: Success path = discriminant `10` (`*a1 = 10`). IoError = `2`. SerdeError = `3`. Mutex-poison path = `0x8000000000000000` (written as `*(_QWORD*)__dst = 0x8000000000000000LL`). Static error string at `anon_91b23c3e0afeec67b869976d9683aaed_627` @ `0x10114c2e6`, length 41.

10. **Sort algorithm confirmed**: `core::skills::load_installed_skills` uses `driftsort_main` @ `0x1007449d0` when `len >= 21` (0x15), else `insertion_sort_shift_left` @ `0x1004f32e0` when `2 <= len < 21`. Same stdlib pattern as other collection-returning commands.

11. **IDB annotations written**: `append_comments` applied to 6 owner VAs with `[delta:integrity_recovered 2026-06-18 session:<审计会话>]`. `<工具调用>` confirmed.

12. **Call-tree depth verified**: deepest app-logic path = depth 4 (`cmd → core → scan_recursive → load_skill_summary → fs::read_to_string`). Delta path depth = 4 (`cmd → store_bootstrap → bootstrap_cache::load → serde_json::from_trait`). All leaves terminated at stdlib/serde. 15 edges in `call-trees/load_installed_skills.jsonl`.

---

## Inferred

1. **`InstalledSkillSummary` field layout for fields 0-7**: `has_modified(bool)`, `modified_secs(u64)`, `title(String 3×u64)`, `relative_path(String)`, `directory_path(String)`, `skill_file_path(String)`, `base_dir_str(String)`, `field_7(TBD)`. Inferred from `load_skill_summary` local slot assignments and `Path::Display::fmt` call count (×3). Stride 184B is consistent with 8 String fields (each 24B = ptr+len+cap) + bool + u64 = 8+8+24×6 = 160 + padding = ~184B.

2. **`SkillListPayload` field 4**: The 4 fields are inferred as `{skills: Vec<InstalledSkillSummary>, base_path: String, written_at: u64, schema_version: i32}`. Evidence: `a3+24` = codex_version String (String::clone from a3+24), `a3+48` = u64, `a3+56` = i32 schema_version (`*(_DWORD *)(a3 + 56)`). The `skills` Vec is the first 3 words (ptr+len+cap) at a3+0..24.

3. **`scan_skills_recursive` recurse condition**: When a directory entry has no `SKILL.md` (metadata returns error), the function recurses into the subdirectory. When `SKILL.md` is found, `load_skill_summary` is called and the result is pushed to the collector. Depth is unbounded — no explicit depth limit observed in decompile.

4. **`codex_version` field in `BootstrapStatePayload`**: Inferred from `String::clone` call on `a3+24` (SkillListPayload codex_version field) being written into `__src` before serialization. Not yet confirmed via serde field name string extraction.

5. **`BootstrapStatePayload` internal layout at offset 107**: `a3[107]` stores the `SkillListPayload` value (or `None` sentinel `0x8000000000000000`). Fields `107..112` = Vec<InstalledSkillSummary> (3 words), `110..112` = String (codex_version), `113` = version_ptr, `114` = schema_version i32. Inferred from `__src[107..114]` assignment sequence in decompile.

6. **`ensure_directories` creates up to 9 dirs**: Inferred from `std::fs::DirBuilder::_create ×9` pattern seen in related commands' `ensure_directories` decompiles. This function creates the data directory tree if missing before any file write.

7. **Skills directory path comes from `AppState`**: `a2[24]` = skills_dir_ptr, `a2[25]` = skills_dir_len (confirmed from `core::skills::load_installed_skills(v40, a2[24], a2[25])`). The path is configured at app startup from system config, not hardcoded.

---

## Unknown

1. **`InstalledSkillSummary` field 7 (index 17)**: The 8th field type is not confirmed. Options: `String`, `u64`, or `Option<String>`. Layout constraint: total size 184B (0xB8) must be satisfied. With 6 Strings (6×24=144) + bool (8 w/ align) + u64 (8) + field_7 = 184, field_7 must be 24B = likely another String. Not yet confirmed via serde field name extraction.

2. **`SkillListPayload.written_at` semantics**: The `written_at` u64 is set in the command handler before calling `store_bootstrap_installed_skills`, but the store function also computes its own `SystemTime::now()`. It is unclear whether both timestamps are the same or if one is passed through. The `a3+48` field may be a different timestamp than the one computed in the store function.

3. **`BootstrapStatePayload` serde field names for `usageAnalytics` and `mcpServers` internal sub-fields**: Field 2 (`usageAnalytics`) and field 3 (`mcpServers`) nested struct field names were not extracted in this session. Their serde visitor code has not been decompiled — only the top-level keys are confirmed.

4. **`scan_skills_recursive` max recursion depth**: No explicit depth guard was observed. If `~/.claude/skills/` has deep nesting, it will recurse indefinitely. Whether there is a compiler-generated depth limit or OS stack overflow protection is not verified.

5. **`SKILL.md` search literal source**: The string literal `"SKILL.md"` is referenced via `unk_1011533D8` in the decompile pseudocode. The actual bytes at that address have not been extracted to confirm the exact encoding (UTF-8, null-terminated).

6. **`CoreEnvelope<SkillListPayload>` IPC wire format**: The `memcpy(__dst, __src, 0x90u)` copies 144 bytes into the IPC output buffer. The layout of these 144 bytes as seen by the Tauri frontend (TypeScript) is not confirmed — only the Rust-side discriminant positions are known.

7. **Error message content in poison-guard path**: The static error string at `anon_91b23c3e0afeec67b869976d9683aaed_627` @ `0x10114c2e6` has length 41 but its content has not been extracted via `get_string` or `get_bytes`.
