# pseudocode — load_installed_skills
# AiMaMi 1.1.1 macOS arm64 | session <审计会话>
# delta_class: integrity_recovered

---

## 1. commands::skills::load_installed_skills (IPC handler)
**VA:** `0x10072db50`  **size:** 0x58a bytes

```
fn load_installed_skills(state: &AppState) -> CoreEnvelope<SkillListPayload>:
    mutex = OnceBox::initialize_if_needed(&state.skills_mutex)   // lazy init
    Mutex::lock(mutex)

    if GLOBAL_PANIC_COUNT*2 != 0 and is_zero_slow_path():
        // panic-guard: skip to error path with static string "..."
        msg = anon_string[41]  // static error message
        return CoreEnvelope::err(msg)

    // Core path:
    result = core::skills::load_installed_skills(state.skills_dir_ptr, state.skills_dir_len)
    if result == Ok(skill_vec):
        // Format path for logging (Path::Display::fmt)
        path_str = format!("{}", state.skills_path)
        now = SystemTime::now()
        elapsed = now.duration_since(UNIX_EPOCH).unwrap_or(0)

        // NEW SIDE-EFFECT (delta vs 1.0.9):
        Repository::store_bootstrap_installed_skills(&state.repo, &skill_vec)
        // persists skill list + writtenAt timestamp to bootstrap-cache.json

        envelope = CoreEnvelope::ok(SkillListPayload {
            skills: skill_vec,
            base_path: path_str,
            written_at: elapsed,
            // ...
        })
        memcpy(out, envelope, 0x90)
    else:
        // Format error for logging (CoreError::Display::fmt)
        CoreError::drop(result)
        out = CoreEnvelope::err(error_str)

    Mutex::unlock(mutex)
    return out
```

---

## 2. core::skills::load_installed_skills (pure core)
**VA:** `0x1005e78d0`  **size:** 0x14f bytes

```
fn load_installed_skills(dir_ptr: *str, dir_len: usize) -> Result<Vec<InstalledSkillSummary>>:
    meta = fs::metadata(dir_ptr, dir_len)
    if meta.is_err():
        // skills dir missing — return empty list (not error)
        return Ok(Vec::new())

    collector: Vec<InstalledSkillSummary> = Vec::new()
    scan_skills_recursive(dir_ptr, dir_len, dir_ptr, dir_len, &mut collector)

    // Sort collected skills
    if collector.len() >= 21:
        driftsort_main(collector)
    elif collector.len() >= 2:
        insertion_sort_shift_left(collector)

    return Ok(collector)
```

---

## 3. core::skills::scan_skills_recursive (recursive fs walker)
**VA:** `0x1005e7a70`  **size:** large (stack frame 0x1278)

```
fn scan_skills_recursive(dir: Path, base: Path, collector: &mut Vec<InstalledSkillSummary>):
    entries = fs::read_dir(dir) else { return }

    for entry in entries.flatten():
        path = entry.path()
        name = path.file_name() else { continue }
        name_str = from_utf8(name) else { continue }

        // Skip dotfiles
        if name_str.starts_with('.'):
            continue

        if path.is_dir():
            skill_md = path.join("SKILL.md")   // literal "SKILL.md" from unk_1011533D8
            meta = fs::metadata(skill_md)
            if meta.is_err():
                // No SKILL.md: recurse deeper
                scan_skills_recursive(path, base, collector)
            else:
                // SKILL.md found: load this skill
                summary = load_skill_summary(skill_md, base)
                if summary != Err:
                    collector.push(summary)   // 0xB8=184 bytes per entry
```

---

## 4. core::skills::load_skill_summary (frontmatter parser)
**VA:** `0x1005e5870`  **size:** large (stack frame 0x250)

```
fn load_skill_summary(skill_md_path: Path, base_dir: Path) -> Result<InstalledSkillSummary>:
    content = fs::read_to_string(skill_md_path) else { return Err }
    parent = skill_md_path.parent() else { return Err }

    // Parse frontmatter: find '#' title line outside --- fences
    title: Option<String> = None
    in_fence = false
    for line in content.lines():    // char-search '\n'
        line = line.trim()
        if line == "---":
            in_fence ^= true
        elif !in_fence and line.starts_with('#'):
            title = Some(collect chars after '#')
            break
        elif !in_fence and line starts with "```":
            in_fence ^= true

    // Build relative path (strip base_dir prefix or use file_name fallback)
    relative_path = if parent.strip_prefix(base_dir).is_some():
        parent.strip_prefix(base_dir).to_path_buf()
    else:
        parent.file_name().to_string_lossy()

    // Get skill_file_path (parent dir display string)
    dir_path_str = format!("{}", parent)         // Path::Display
    skill_file_path_str = format!("{}", skill_md_path.parent())
    base_dir_str = format!("{}", base_dir)       // for relative calc

    // Get modified time
    meta = fs::metadata(parent)
    modified_ts: Option<u64> = if meta.ok():
        t = meta.modified()
        t.duration_since(UNIX_EPOCH).ok().map(|d| d.as_secs())
    else:
        None

    return Ok(InstalledSkillSummary {
        has_modified: modified_ts.is_some(),      // field[0]: bool
        modified_secs: modified_ts.unwrap_or(0),  // field[1]: u64
        title: title.unwrap_or(""),              // field[2..4]: String
        relative_path: relative_path_str,         // field[5..7]: String  (0xB8 total)
        directory_path: dir_path_str,
        skill_file_path: skill_file_path_str,
        // ... 8 fields total per "struct InstalledSkillSummary with 8 elements"
    })
```

---

## 5. core::repository::Repository::store_bootstrap_installed_skills (KEY DELTA)
**VA:** `0x1004cf950`  **size:** 0x1d4 bytes

```
fn store_bootstrap_installed_skills(repo: &Repository, skill_list: &Vec<InstalledSkillSummary>)
    -> Result<(), CoreError>:

    CodexPaths::ensure_directories(repo.paths)   // create dirs if needed
    else return Err(IoError)

    // Load existing bootstrap cache (non-destructive read-modify-write)
    cache_path = repo.paths.bootstrap_cache_path   // paths[58..59] = bootstrap-cache.json ptr+len
    existing: BootstrapStatePayload = bootstrap_cache::load(cache_path).unwrap_or_default()

    // Stamp writtenAt
    now = SystemTime::now()
    written_at_secs = now.duration_since(UNIX_EPOCH).unwrap_or(0)
    existing.written_at = written_at_secs         // field index 0

    // Update installedSkills field (index 4)
    existing.installed_skills = skill_list.clone()

    // Clone codex_version from skill_list context (a3+24 offset = String field)
    existing.codex_version = skill_list_payload.codex_version.clone()
    existing.schema_version = skill_list_payload.schema_version   // i32 at a3+56

    // Drop old SkillListPayload at offset 107
    SkillListPayload::drop(existing[107])

    // Update payload slots [107..114]
    // existing[107..109] = new skill_list Vec
    // existing[110..112] = codex_version String
    // existing[113] = version_ptr
    // existing[114] = schema_version (i32)

    // Serialize and write
    json_bytes = serde_json::to_vec(&existing) else return Err(SerdeError)
    BootstrapStatePayload::drop(working_copy)
    std::fs::write(cache_path, json_bytes) else return Err(IoError)
    return Ok(())
```

---

## 6. core::bootstrap_cache::load (cache reader)
**VA:** `0x1004d88c0`  **size:** 0x1d4 bytes

```
fn load(path: &str) -> BootstrapStatePayload:
    content = fs::read_to_string(path) else { return BootstrapStatePayload::default() }
    result: Result<BootstrapCacheFile, serde_json::Error> = serde_json::from_str(content)
    match result:
        Ok(file) => return file.state   // BootstrapCacheFile contains BootstrapStatePayload
        Err(_) => return BootstrapStatePayload::default()
            // default: all numeric Option<u64> fields = 0x8000000000000000 (None sentinel)
            // fields written: [2]=3, [87]=None, [99]=None, [107]=None
```
