# import_skill — AiMaMi 1.1.1 windows-x64 pseudocode

session: wf-aimami111-delta-20260617-sweep
machine: <本地机器> (producer)
delta_class: integrity_recovered
baseline: 1.0.9 macos (readyToImplement)
generated: 2026-06-17

---

## import_skill_cmd_111  `0x14001ca50`  size=0x4C1

IPC entry point for `import_skill` command.

```
fn import_skill_cmd_111(ipc_ctx: *InvokeCtx) -> Result {
    // DELTA vs 1.0.9: NEW repo parameter
    let repo: String = ipc_extract_field(ipc_ctx, "repo");   // 1.0.9 had no repo field
    let path: String = ipc_extract_field(ipc_ctx, "path");

    // DELTA: NEW pending_auto_switch_state_lock_acquire_111 mutex guard
    // 1.0.9 mac used plain repo mutex; 1.1.1 win adds auto-switch state lock
    let lock = pending_auto_switch_state_lock_acquire_111();

    // DELTA: NEW pre-gate — query already-installed skill with same repo
    let existing = query_installed_skills_with_repo_111(repo, path);
    if existing.is_none() {
        return ipc_error(InvokeResolver);
    }

    // parse path string from ipc context
    let path_parsed = sub_1402FED40(ipc_ctx, "path");

    match sub_1407DB160(path_parsed) {
        Ok(resolved_str) => {
            import_skill_resolve_path_install_111(resolved_str, ...);
            sub_14082FD90(response_buf, result_buf);  // dispatch ok
        }
        Err(e) => {
            sub_14080C3C0(ipc_ctx, error);            // InvokeResolver dispatch error
        }
    }
}
```

---

## query_installed_skills_with_repo_111  `0x141214620`  size=~0x120  **DELTA: NEW IN 1.1.1**

Pre-gate query absent in 1.0.9. Filters installed skills by repo+name.

```
fn query_installed_skills_with_repo_111(repo: &str, name: &str) -> Option<InstalledSkillSummary> {
    // build filter closure (repo, name)
    let filter = make_repo_name_filter(repo, name);  // sub_1410A1DF0 + unk_1412B0057
    let all_skills = skill_store_get_all_111();       // 0x14106D960
    let result = all_skills.into_iter().filter(filter).next();
    // returns discriminant=3 (Some) or discriminant=6 (None)
    result
}
```

---

## import_skill_resolve_path_install_111  `0x1406EB800`  size=0x1062

Path validation + install orchestrator.

```
fn import_skill_resolve_path_install_111(path: &str, repo: &str, ...) -> Result<ImportedRecord> {
    // path validation: must be dir-with-SKILL.md or direct SKILL.md file
    if is_open_err(snooze_file_open_111(path)) {
        return Err(error);
    }
    if is_directory(path) {
        if !dir_contains_skill_md(path) {
            // DELTA: error string "Directory must contain SKILL.md" (31 bytes, 0x1406EBA15)
            return Err("Directory must contain SKILL.md");
        }
        sub_141079810(canonical_path);  // resolve canonical base
    } else {
        // file path: validate filename == "SKILL.md" (0x646D2E4C4C494B53)
        if filename != "SKILL.md" {
            // error string "Must be a directory with SKILL.md or a SKILL.md file" (52 bytes, 0x1406EBA8C)
            return Err("Must be a directory with SKILL.md or a SKILL.md file");
        }
        let parent = sub_14107A3E0(path);
        sub_141079810(parent);
    }

    // DELTA vs 1.0.9: new version-compare gate
    // sub_1407B2550 checks installed-vs-incoming version; if same or older, skip copy
    let version_ok = sub_1407B2550(existing_version, incoming_version);

    // build backup path: "skill-backups" + "replace" + "SKILL.md"  (0x1412EBFED)
    let backup_dir = path_join("skill-backups", "replace", "SKILL.md");

    if version_ok || hash_match {
        // fast path: parse metadata only, skip file copy
        import_skill_read_parse_skill_md_111(skill_md_path, ...);
    } else {
        // DELTA: new notify gate sub_14108C150 before DB write
        sub_14108C150();  // event notify (new in 1.1.1)
        import_skill_build_record_db_write_111(base_path, repo, ...);
        import_skill_iter_dir_match_111(src_path, dst_path, ...);  // recursive copy
        import_skill_read_parse_skill_md_111(dst_skill_md, ...);
    }

    return Ok(record);
}
```

---

## import_skill_iter_dir_match_111  `0x1406EB140`  size=0x426

Recursive directory iterator + file copier.

```
fn import_skill_iter_dir_match_111(src: &Path, dst: &Path, filter, ...) -> Result<()> {
    let dir = sub_14108C7E0(src);          // open dir handle
    loop {
        let entry = sub_140672D70(dir);    // next entry
        if entry.is_none() { return Ok(code=10); }
        let dst_entry = path_join(dst, entry.name);
        if entry.is_dir() {
            import_skill_iter_dir_match_111(src/entry, dst_entry, ...);  // recurse
        } else {
            snooze_file_backup_copy_111(entry.path, dst_entry);  // CopyFileExW
        }
    }
}
```

---

## import_skill_read_parse_skill_md_111  `0x1406EE680`  size=0xA62

Reads and parses SKILL.md.

```
fn import_skill_read_parse_skill_md_111(path: &Path, repo: &str, ...) -> SkillMetadata {
    let bytes = win32_file_read_bytes_111(path);

    // pass 1: find H1 heading (byte 0x23 = '#')
    let title = bytes.lines()
        .find(|l| l.starts_with('#'))
        .map(|l| strip_leading_hash(l));

    // DELTA vs 1.0.9: NEW sub_141079B50 skill-path resolver
    let skill_path = sub_141079B50(repo, ...);

    // DELTA vs 1.0.9: NEW sub_1410A9010 file-size/content check
    let size_ok = sub_1410A9010(path);

    // UUID validation via sub_141095530
    // timestamp: elapsed_since_ts_111

    return SkillMetadata { title, content_ptr, line_count, heading_ptr, skill_path, size_ok };
}
```

---

## import_skill_build_record_db_write_111  `0x1406F1360`  size=0xCC0

Builds InstalledSkillSummary DTO and writes to SQLite.

```
fn import_skill_build_record_db_write_111(base: &Path, repo: &str, ...) -> Result<InstalledRecord> {
    let meta = import_skill_read_parse_skill_md_111(base/"__"/"SKILL.md", ...);
    // "Invalid skill source" error string (20B, 0x1406F1422) if parse fails

    let created_at = elapsed_since_ts_111(system_time_precise_u32_111());
    let backup_id: Uuid = uuid_v4_generate_raw_sys();  // 0x140F5A860 — new UUID each import
    let backup_id_str = import_skill_uuid_to_string_111(backup_id);

    // Build JSON record:
    // { backupID, skillID, name, title(sub_1402662D0), relativePath, createdAt }
    let json = json_build({
        "backupID":     backup_id_str,      // 0x1412EC078
        "skillID":      meta.skill_id,      // 0x1412EC080
        "name":         meta.name,          // 0x1412E9680
        "title":        meta.title,         // 0x1412EC087 — sub_1402662D0 serializer
        "relativePath": meta.relative_path, // 0x1412EC08C
        "createdAt":    created_at,         // 0x1412EC098 — sub_140268180 serializer
    });

    // Write to SQLite installed_skills table (0x1412EC051)
    sub_1403A6410(db_path, json_blob);

    import_skill_iter_dir_match_111(src, dst, ...);  // second call: copy files

    return Ok(InstalledRecord { backup_id, skill_id, ... });
}
```

---

## import_skill_uuid_to_string_111  `0x1406F7540`  size=0x9E

Serializes raw UUID bytes to string via sub_141095530 (Display impl).

```
fn import_skill_uuid_to_string_111(uuid_bytes: &[u8; 16]) -> String {
    sub_141095530(uuid_bytes)  // Display impl -> hyphenated UUID string
}
```
