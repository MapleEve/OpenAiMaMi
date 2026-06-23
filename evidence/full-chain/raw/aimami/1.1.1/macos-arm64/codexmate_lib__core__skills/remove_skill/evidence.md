# Evidence — remove_skill (macOS arm64, 1.1.1)

**Session:** wf-aimami111-delta-20260618-mac100
**Machine:** <本地机器>
**Role:** pure producer
**IDB:** <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**Analysis date:** 2026-06-18
**Baseline version:** 1.0.9
**Owner VA (core):** 0x1005e44a0 — `codexmate_lib::core::skills::remove_skill::h56f6aaa545b87216`
**Owner VA (command):** 0x10072c810 — `codexmate_lib::commands::skills::remove_skill::h79aa21510e4630e1`
**IPC caller VA:** 0x100305aa0 — `codexmate_lib::run::{{closure}}` (call site 0x100306236)
**CFG blocks (core):** 60 basic blocks
**Call-tree edges:** 18
**Max depth reached:** 7 (load_skill_summary → read_to_string → fstat$INODE64)

---

## Confirmed

1. **Owner symbols located in 逆向分析:** both core (`0x1005e44a0`, size 0x69f) and command handler (`0x10072c810`, size 0x402) resolved by func_query with name_regex "remove_skill".
2. **metadata existence-guard is the delta:** `std::sys::fs::metadata::h32fa16d3052ea535` called between `backup_skill_directory` and `remove_dir_all` in 1.1.1. Absent in 1.0.9 sweep data (sweep-buckets/macos-shard-5.json false_negative entry confirmed).
3. **Conditional remove_dir_all:** pseudocode branch `if (_BYTE)v48` controls whether `std::sys::fs::remove_dir_all` executes. Err(IoError) path drops the error and falls through to success return.
4. **DTO field names confirmed from rodata:** `removedSkillID` (0x101150ed4), `backup` (0x101150ece), `remainingInstalledCount` (0x101150ee2) — decoded from raw bytes via get_bytes.
5. **IPC caller confirmed:** xrefs_to(0x10072c810) → single caller `codexmate_lib::run::{{closure}}` @ 0x100306236. This is the Tauri IPC dispatch loop.
6. **stat() syscall confirmed terminal:** callees(std::sys::fs::metadata) → `_stat$INODE64` (0x100fbd2b0) — POSIX syscall, kernel boundary, terminated_reason=external_call.
7. **remove_dir_all recursive path confirmed:** `remove_dir_all` → `remove_dir_all_recursive` → `_unlinkat` syscall. Full 3-edge chain verified by callees depth.
8. **Backup always runs:** `backup_skill_directory` is called unconditionally before the metadata check. A backup is created even when the skill directory does not exist.
9. **Mutex poisoning guard confirmed:** command handler checks `*((_BYTE *)store + 8)` before invoking core; sets poison flag on panic during critical section.
10. **CoreEnvelope<SkillRemovePayload>::ok wrapper confirmed:** command handler calls `0x100554950` on success to wrap payload before memcpy to __dst (IPC response buffer).
11. **load_installed_skills called twice:** once at start (for ID scan), once at end (for remainingInstalledCount). Second call confirmed in pseudocode at `v59, v61` re-use after remove.
12. **SkillBackupSummary drop path confirmed:** `core::ptr::drop_in_place<SkillBackupSummary>` at `0x1005f6410` called on error paths, preventing leak.

---

## Inferred

1. **Silent success semantics change:** missing-directory path now returns `Ok(SkillRemovePayload)` with `removedSkillID` set to the requested name. Callers expecting `Err` on absent skill directories will receive a success envelope in 1.1.1. This is a consumer-visible behavioral change.
2. **Backup directory created even for non-existent skill:** since `backup_skill_directory` runs before `metadata`, an empty or partial backup dir is created in `skill-backups/<uuid>/` even when the skill directory doesn't exist. The backup UUID is uuid::v4-generated (confirmed in backup_skill_directory callees).
3. **remainingInstalledCount accuracy:** the second `load_installed_skills` runs after the conditional remove_dir_all. If remove was skipped (missing dir), count reflects pre-remove state (unchanged). Count is accurate only for actual removes.
4. **Error code 7 = SkillNotFound:** format string at `unk_1010B785E`, format args via `_$LT$$RF$T as core::fmt::Display$GT$::fmt` applied to skill_id. Discriminant 0x8000000000000000 with error_code=7 in CoreError.
5. **POSIX mutex is non-recursive:** standard `pthread_mutex_lock` pattern; re-entry from same thread would deadlock. No skill operation should call remove_skill recursively.
6. **backup_skill_directory uses UUID-stamped directory:** callees include `uuid::v4::new_v4` and `SystemTime::now` + `duration_since` — backup dir name is timestamp+uuid hybrid to avoid collision.

---

## Unknown

1. **Exact 1.0.9 metadata check absence:** confirmed via sweep false_negative summary text but not by direct 1.0.9 decompile comparison in this session. Requires cross-version decompile to produce byte-level diff.
2. **backup field serialization depth:** `SkillBackupSummary` struct serialization in JSON response not fully traced — backup_skill_directory callees include serde serialize_entry calls but the exact JSON shape of the `backup` field is not traced in this session.
3. **Whether callers handle the silent success correctly:** frontend IPC consumers (React/TypeScript) not analyzed in this session. Unknown whether the frontend treats `removedSkillID` in response as definitive success or checks a separate existence flag.
4. **Exact error_code value for backup failure:** `backup_skill_directory` propagates errors via `if (__OFSUB__(-v48, 1))` check in core; the CoreError variant code for backup failure is not decoded in this session.
5. **Thread safety of load_installed_skills:** `load_installed_skills` accesses filesystem, not a locked store. Whether concurrent remove_skill calls from multiple IPC threads can produce races on the skills directory is not determined.
