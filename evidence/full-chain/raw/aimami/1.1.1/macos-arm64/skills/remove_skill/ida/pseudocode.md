# pseudocode — remove_skill (macos-arm64, AiMaMi 1.1.1)

delta_class: integrity_recovered
session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
imagebase: 0x100000000

---

## Owner VA Table

| Symbol (demangled) | VA | Size |
|---|---|---|
| `codexmate_lib::commands::skills::remove_skill` (IPC entry) | `0x10072c810` | 0x402 |
| `codexmate_lib::core::skills::remove_skill` (core logic) | `0x1005e44a0` | ~0x690 |
| `codexmate_lib::core::skills::backup_skill_directory` (backup helper) | `0x1005e7e80` | ~0x4a0 |
| `codexmate_lib::core::skills::copy_dir_all` (recursive fs copy) | `0x1005e2ee0` | — |
| `codexmate_lib::core::skills::load_skill_summary` (per-skill meta load) | `0x1005e5870` | 0xc1f |

---

## IPC Layer — `commands::skills::remove_skill` @ 0x10072c810

```rust
// Mutex-guarded IPC dispatch wrapper (standard Tauri IPC pattern).
// a2 = *AppState (qword array), a3 = IPC input struct ptr
// a2[24..25] = skills_dir (ptr+len)
// a2[45..46] = codex_home (ptr+len)
// a3[1..2]   = RemoveSkillInput { skill_name: String (ptr+len) }

fn remove_skill(dst: *mut CoreEnvelope<RemoveSkillResult>, app_state: *AppState, input: *RemoveSkillInput) {
    // Initialize mutex OnceBox if needed
    if !*app_state == 0 {
        OnceBox::initialize(app_state)
    }
    Mutex::lock();

    // Panic-count guard (noise — filters panics during mutex hold)
    let in_panic = GLOBAL_PANIC_COUNT & 0x7fff... != 0
                   && is_zero_slow_path(...);

    if app_state[8] != 0 {
        // Mutex poisoned — return early error (CoreError::MutexPoisoned)
        // Encodes error string via fmt::Display, writes 0x8000000000000000 tag
        let err_str = format!("{}", anon_string_at_0x10114c2e6);  // 41 chars
        // fills dst as Err(...)
        goto unlock;
    }

    // --- Main path ---
    let result = core::skills::remove_skill(
        skills_dir_ptr, skills_dir_len,
        codex_home_ptr, codex_home_len,
        skill_name_ptr, skill_name_len,
    );

    if result.tag == 0x8000000000000000 {
        // Err path: propagate CoreError as string via Display::fmt
        let msg = format!("{}", CoreError::fmt(result.err));
        dst.write_err(msg);
    } else {
        // Ok path: wrap in CoreEnvelope::ok and memcpy 0x108 bytes to dst
        CoreEnvelope::ok(result);
        memcpy(dst, result_buf, 0x108);
    }

unlock:
    Mutex::unlock(*app_state);
    // dealloc input skill_name string if heap-allocated
    rust_dealloc(input[1], *input, 1);
    return dst;
}
```

---

## Core Logic — `core::skills::remove_skill` @ 0x1005e44a0

```rust
// Args: (out: *mut Result, skills_dir_ptr, skills_dir_len, codex_home_ptr, codex_home_len, skill_name_ptr, skill_name_len)

fn remove_skill(out, skills_dir, codex_home, skill_name) -> Result<RemoveSkillResult, CoreError> {

    // Step 1: Load all installed skills from disk
    let installed: Vec<InstalledSkillSummary> = load_installed_skills(skills_dir)?;
    // Error path: if load fails, propagate CoreError (tag=0x8000000000000000)

    if installed.is_empty() {
        // Skill-not-found: format error "Skill not found: {skill_name}"
        // string ref: unk_1010B785E (format template)
        return Err(CoreError::SkillNotFound(format!("...")));
    }

    // Step 2: Linear scan for skill by name (memcmp at item[24+32] offset)
    // InstalledSkillSummary stride = 184 bytes
    let found_idx = installed.iter().find(|s| s.skill_name == skill_name);
    if found_idx.is_none() {
        // "Skill not found: {skill_name}" error
        return Err(CoreError::SkillNotFound(...));
    }

    // Step 3: Compute backup root path
    // Path::join(codex_home, "skill-backupsreplace"[0..13]) → "skill-backups" + "replace" suffix
    // Note: string pool literal "skill-backupsreplace" split: key = "skill-backups" (13 chars)
    let backup_root = codex_home.join("skill-backups");

    // Copy skill directory path out of installed list (heap-alloc for owned copy)
    let skill_dir_path: String = found_idx.directory_path.clone();

    // Step 4: Backup skill directory (SIDE-EFFECT: disk write)
    let backup_summary: SkillBackupSummary = backup_skill_directory(
        skill_dir_path,
        skills_dir,
        backup_root,
        "removemetadata.jsonskill"[0..6],  // tag = "remove" (6 chars)
    )?;

    // Step 5: Check if skill dir still exists on disk
    let metadata_result = std::fs::metadata(skill_dir_path);

    if metadata_result.is_err() {
        // Dir already gone — skip remove_dir_all, not an error
    } else {
        // Step 6: Delete skill directory (SIDE-EFFECT: recursive fs delete)
        std::fs::remove_dir_all(skill_dir_path)?;
    }

    // Step 7: Reload installed skills to get fresh count
    let new_installed: Vec<InstalledSkillSummary> = load_installed_skills(skills_dir)?;
    let remaining_count: u32 = new_installed.len() as u32;  // stored at a1+176 as u32

    // Step 8: Build and return RemoveSkillResult
    // Result layout at a1 (tag=len, ptr, cap, then memcpy 0x98 of prior snapshot):
    //   a1[0]   = skill_name.len (used as Ok tag — non-0x8000... value)
    //   a1[8]   = skill_name.ptr (heap alloc of copy)
    //   a1[16]  = skill_name.len (capacity)
    //   a1[24..] = snapshot of pre-reload InstalledSkillSummary list data (0x98 bytes)
    //   a1[176] = remaining_count (u32)

    return Ok(RemoveSkillResult {
        skill_name:              skill_name.clone(),
        // ... InstalledSkillSummary snapshot fields ...
        remaining_installed_count: remaining_count,
        // backup_summary embedded
    });
}
```

---

## Backup Helper — `core::skills::backup_skill_directory` @ 0x1005e7e80

```rust
// NEW behavior in 1.1.1: generates UUID-stamped backup folder with metadata.jsonskill
// Args: (out, skill_dir_path, skills_dir, backup_root, tag_str[6], ???, a7: double, backup_base[ptr+len])

fn backup_skill_directory(skill_dir, skills_dir, backup_root, tag) -> Result<SkillBackupSummary, CoreError> {

    // Step 1: Load skill summary (reads skill's metadata from disk)
    let summary = load_skill_summary(skill_dir)?;
    // If summary.kind == 2 → "Invalid skill source" error (20-byte literal)

    // Step 2: Create backup root dir with mode 0o777
    std::fs::DirBuilder::create(backup_root, mode=0o777)?;

    // Step 3: Generate timestamp (SIDE-EFFECT: SystemTime::now)
    let ts: isize = SystemTime::now().duration_since(UNIX_EPOCH).secs();

    // Step 4: Build sanitized skill name (replace '/' with "__")
    let safe_name: String = summary.title.replace('/', "__");

    // Step 5: Generate UUID v4 for backup folder uniqueness
    // uuid::Uuid::new_v4() → format as LowerHex, take first 8 chars
    let uuid_prefix: &str = &uuid.to_lower_hex()[0..8];

    // Step 6: Format backup folder name
    // Template @ unk_1010B78C2: "{ts}-{safe_name}-{uuid_prefix}"
    // Format args: &ts, &safe_name, tag_str[ptr+len], &uuid_prefix[0..8]
    let folder_name: String = format!("{}-{}-{}", ts, safe_name, uuid_prefix);

    // Step 7: Build backup dir paths
    let backup_dir = backup_root.join(folder_name);       // full backup dir
    let skill_subdir = backup_dir.join("skill");          // "skill" subdirectory

    // Step 8: Create backup folder structure (SIDE-EFFECT: disk mkdir x2)
    std::fs::DirBuilder::create(backup_dir, mode=0o777)?;

    // Step 9: Recursively copy skill directory (SIDE-EFFECT: disk write)
    copy_dir_all(skill_dir, skill_subdir)?;

    // Step 10: Clone SkillBackupMetadata fields
    let meta = SkillBackupMetadata {
        backup_id:     backup_dir_path.clone(),     // serde key "backupID" (8 chars @ 0x1011542c7)
        skill_id:      summary.skill_id.clone(),    // serde key "skillID" (7 chars @ 0x1011542cf)
        title:         summary.title.clone(),       // serde key "title" (5 chars @ 0x1011542d6)
        relative_path: summary.relative_path.clone(), // serde key "relativePath" (12 chars @ 0x1011542db)
        name:          summary.name.clone(),        // serde key "name" (4 chars, packed literal)
        created_at:    ts,                          // serde key "createdAt" (9 chars @ 0x1011542e7)
    };
    // Optional field: replaced_existing (Option<String>) — serde key "skill" or empty

    // Step 11: Serialize SkillBackupMetadata to JSON
    // serde_json::to_writer via SerializeMap::serialize_entry chain:
    //   entry("backupID", meta.backup_id)
    //   entry("skillID", meta.skill_id)
    //   entry("name", meta.name)          // 4-char key from packed literal
    //   entry("relativePath", meta.relative_path)
    //   entry("title", meta.title)
    //   entry("createdAt", meta.created_at)
    //   Compound::end()
    // (SIDE-EFFECT: serde_json write into heap buffer starting with '{')

    // Step 12: Write metadata.jsonskill (SIDE-EFFECT: disk write)
    let meta_path = backup_dir.join("metadata.jsonskill");   // 13-char literal
    std::fs::write(meta_path, json_bytes)?;

    // Step 13: Build SkillBackupSummary result (returned to caller)
    // Fields populated into *a1 (out pointer):
    //   skill_dir_path, backup_dir_path, skill_id, backup_id(Option<String>),
    //   description, ts(created_at)
    // Drops SkillBackupMetadata, frees temp path strings
    return Ok(SkillBackupSummary { ... });
}
```

---

## `copy_dir_all` @ 0x1005e2ee0

Recursive directory copy. Callees: `DirBuilder::create`, `fs::read_dir`, FlattenCompat::next (iter), `DirEntry::file_name`, `Path::join`, `Path::is_dir`, `fs::copy` (file leaf), `copy_dir_all` (recursion). Terminated: stdlib fs leaves. Not a delta item — function behavior unchanged vs 1.0.9.

---

## DTO / Interface Summary

### Input: `RemoveSkillInput`
```typescript
{ skill_name: string }   // IPC field: a3[1]+a3[2] = ptr+len
```

### Internal: `SkillBackupMetadata` (6 fields, serde keys confirmed)
```json
{
  "backupID":     "<backup_dir_abs_path>",
  "skillID":      "<skill registry id>",
  "title":        "<skill title>",
  "relativePath": "<relative path from skills_dir>",
  "name":         "<skill name/slug>",
  "createdAt":    <unix_timestamp_isize>
}
```

### Output: `RemoveSkillResult` (serde keys from string pool 0x101150e9c)
```json
{
  "skillID":               "<skill_id>",
  "relativePath":          "<relative_path>",
  "backupPath":            "<backup_dir_path>",
  "skill":                 "<skill_name>",
  "replacedExisting":      <bool>,
  "backup":                { ... SkillBackupSummary ... },
  "removedSkillID":        "<skill_id>",           // NEW in 1.1.1
  "remainingInstalledCount": <u32>                 // NEW in 1.1.1
}
```

### Error: `CoreError` variants observed
- `SkillNotFound` — skill name not in installed list (error code 7, from IPC error path `*(_QWORD *)(a1 + 8) = 7`)
- `IoError` — fs::remove_dir_all or fs::write failure (error code 2)
- `InvalidSkillSource` — load_skill_summary returned kind==2 (20-byte literal "Invalid skill source")
- `BackupJsonError` — serde_json serialize failure (error code 3)
- `MutexPoisoned` — IPC layer poison guard (error code unset, early return)
