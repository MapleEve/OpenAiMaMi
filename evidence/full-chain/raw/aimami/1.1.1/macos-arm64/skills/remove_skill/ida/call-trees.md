# call-trees — remove_skill (macos-arm64, AiMaMi 1.1.1)

delta_class: integrity_recovered
session: <审计会话>
machine: <本地机器>

---

## Depth-first call tree from IPC entry

```
commands::skills::remove_skill                         @ 0x10072c810   [IPC entry, mutex-guarded]
  OnceBox::initialize                                  @ 0x100f7c920   [NOISE: lazy static init]
  Mutex::lock                                          @ 0x100f2e7a0   [NOISE: sync primitive]
  panic_count::is_zero_slow_path                       @ 0x100fb7400   [NOISE: panic guard]
  core::skills::remove_skill                           @ 0x1005e44a0   [APP: core logic — depth 2]
    load_installed_skills                              @ 0x1005e78d0   [APP: reads skills registry — depth 3]
    memcmp                                             @ 0x100fbd04c   [LEAF: stdlib byte compare]
    Path::_join                                        @ 0x100f33a00   [LEAF: stdlib path join]
    alloc::raw_vec::handle_error                       @ 0x100fbc3a1   [NOISE: OOM handler]
    alloc::fmt::format::format_inner                   @ 0x100f63980   [LEAF: stdlib format]
    drop_in_place<InstalledSkillSummary>               @ 0x100637cb0   [LEAF: stdlib drop]
    rust_alloc / rust_dealloc                          @ 0x1000014b0/c0 [LEAF: allocator]
    memcpy                                             @ 0x100fbd052   [LEAF: stdlib memcpy]
    backup_skill_directory                             @ 0x1005e7e80   [APP: backup helper — depth 3]
      load_skill_summary                               @ 0x1005e5870   [APP: reads skill meta — depth 4]
      rust_dealloc / rust_alloc                        @ ...           [LEAF: allocator]
      DirBuilder::_create                              @ 0x100f24d00   [LEAF: stdlib mkdir — SIDE-EFFECT]
      SystemTime::now                                  @ 0x100f34cf0   [LEAF: syscall clock — SIDE-EFFECT]
      SystemTime::duration_since                       @ 0x100f34cb0   [LEAF: stdlib time delta]
      str::replace (/ → __)                           @ 0x1005f9e60   [LEAF: stdlib str replace]
      uuid::Uuid::new_v4                               @ 0x100e13930   [LEAF: entropy — SIDE-EFFECT]
      uuid::fmt::LowerHex::fmt                         @ 0x100e13a20   [LEAF: uuid format]
      core::str::slice_error_fail                      @ 0x100fbc560   [LEAF: bounds check]
      format_inner (backup folder name)               @ 0x100f63980   [LEAF: stdlib format]
      Path::_join (backup_dir, skill subdir)          @ 0x100f33a00   [LEAF: stdlib path join]
      DirBuilder::_create (skill subdir)              @ 0x100f24d00   [LEAF: stdlib mkdir — SIDE-EFFECT]
      copy_dir_all                                     @ 0x1005e2ee0   [APP: recursive copy — depth 4]
        DirBuilder::_create                            @ 0x100f24d00   [LEAF: mkdir — SIDE-EFFECT]
        sys::fs::read_dir                              @ 0x100f2ba80   [LEAF: syscall readdir]
        FlattenCompat::next                            @ 0x10059d980   [LEAF: stdlib iter]
        DirEntry::file_name                            @ 0x100f26210   [LEAF: stdlib fs]
        Path::_join                                    @ 0x100f33a00   [LEAF: stdlib path join]
        Path::is_dir                                   @ 0x100f33b80   [LEAF: stdlib path]
        copy_dir_all (recursion)                       @ 0x1005e2ee0   [SELF: terminates at leaf files]
        sys::fs::copy                                  @ 0x100f2aa10   [LEAF: stdlib file copy — SIDE-EFFECT]
        Arc::drop_slow                                 @ 0x100f4b610   [LEAF: stdlib arc drop]
      String::clone x4                                 @ 0x100f656f0   [LEAF: stdlib clone]
      serde_core::SerializeMap::serialize_entry x6    @ 0x1006779e0/...  [LEAF: serde — SIDE-EFFECT*]
        * entries: backupID, skillID, name, relativePath, title, createdAt
      serde_json::Compound::end                        @ 0x100606750   [LEAF: serde finalize]
      std::fs::write (metadata.jsonskill)             @ 0x100202050   [LEAF: disk write — SIDE-EFFECT]
      drop_in_place<SkillBackupMetadata>               @ 0x1005f65b0   [LEAF: stdlib drop]
      SpecToString::spec_to_string                     @ 0x1005f07a0   [LEAF: path to string]
    sys::fs::metadata                                  @ 0x100f2b980   [LEAF: stdlib stat]
    sys::fs::remove_dir_all                            @ 0x100f2a6a0   [LEAF: stdlib rmdir — SIDE-EFFECT]
    load_installed_skills (reload after delete)        @ 0x1005e78d0   [APP: fresh reload — depth 3]
    drop_in_place<InstalledSkillSummary> (loop)        @ 0x1005e4964   [LEAF: stdlib drop]
    drop_in_place<SkillBackupSummary>                  @ 0x1005f6410   [LEAF: stdlib drop]
  CoreEnvelope::ok                                     @ 0x100554950   [APP: wrap result — depth 2]
  CoreError::fmt (Display)                             @ 0x10058fda0   [APP: error formatting — depth 2]
  drop_in_place<CoreError>                             @ 0x1007407c0   [LEAF: stdlib drop]
  result::unwrap_failed                                @ 0x100fbc780   [LEAF: stdlib panic helper]
  Mutex::unlock                                        @ 0x100f2e7c0   [NOISE: sync primitive]
  rust_dealloc (input string)                          @ 0x1000014c0   [LEAF: allocator]
```

Depth reached: 6 (IPC → core → backup/copy_dir_all → load_skill_summary → stdlib leaves)
terminated_reason: all branches terminate at stdlib fs / serde / allocator leaves or stdlib panic handlers.

---

## App-level callee set (non-noise, non-stdlib)

| Function | VA | Role |
|---|---|---|
| `core::skills::remove_skill` | `0x1005e44a0` | Core logic orchestrator |
| `core::skills::load_installed_skills` | `0x1005e78d0` | Called twice (before + after delete) |
| `core::skills::backup_skill_directory` | `0x1005e7e80` | Backup + metadata.jsonskill write |
| `core::skills::load_skill_summary` | `0x1005e5870` | Per-skill metadata read (inside backup) |
| `core::skills::copy_dir_all` | `0x1005e2ee0` | Recursive fs copy (inside backup) |
| `core::models::CoreEnvelope::ok` | `0x100554950` | Ok result wrapper |
| `core::models::CoreError::fmt` | `0x10058fda0` | Error display formatting |

---

## Side-effects enumerated (all disk, all in backup flow)

1. `DirBuilder::create(backup_root)` — mkdir skill-backups/ (may be no-op if exists)
2. `DirBuilder::create(backup_dir)` — mkdir timestamped backup subfolder
3. `copy_dir_all(skill_dir → backup_dir/skill/)` — full recursive copy of skill tree
4. `fs::write(backup_dir/metadata.jsonskill)` — JSON metadata with UUID+timestamp
5. `fs::remove_dir_all(skill_dir)` — delete original skill directory
6. (IPC layer) `Mutex::lock/unlock` — state mutation on AppState

---

## Delta vs 1.0.9

**Compiler-noise filtered (not delta):**
- Mutex poison-guard / GLOBAL_PANIC_COUNT / is_zero_slow_path — noise at every IPC entry
- sub_/anon_ vtable renames — hash suffix changes expected
- rust_alloc/dealloc size micro-adjustments

**Confirmed delta (app-level behavioral change):**

| # | Change | Evidence |
|---|---|---|
| 1 | `RemoveSkillResult` adds `removedSkillID` string field | String pool `0x101150e9c`: `removedSkillIDremainingInstalledCount` sequential |
| 2 | `RemoveSkillResult` adds `remainingInstalledCount` (u32) field | Same string pool; reload of installed list post-delete feeds this counter |
| 3 | `backup_skill_directory` now generates `uuid::new_v4()` backup folder ID | `uuid::Uuid::new_v4 @ 0x100e13930` callee confirmed in backup; not present in 1.0.9 scope |
| 4 | `backup_skill_directory` writes `metadata.jsonskill` via `serde_json` | `fs::write @ 0x100202050` + serde_core::serialize_entry chain confirmed |
| 5 | `SkillBackupMetadata` struct (6 serde fields) newly serialized to disk | String pool `0x101148783`: `struct SkillBackupMetadata with 6 elements` + keys `backupID/skillID/title/relativePath/name/createdAt` confirmed via get_bytes |
| 6 | `SystemTime::now` called in backup path for `createdAt` timestamp | `SystemTime::now @ 0x100f34cf0` + `duration_since @ 0x100f34cb0` in backup callee set |
| 7 | `load_installed_skills` called **twice** (before + after delete) | Two call sites in core decompile: `0x1005e44e0` + `0x1005e490b` |
