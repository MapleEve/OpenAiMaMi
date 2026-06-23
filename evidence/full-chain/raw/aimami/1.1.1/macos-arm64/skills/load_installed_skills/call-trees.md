# call-trees — load_installed_skills
# AiMaMi 1.1.1 macOS arm64 | delta_class: integrity_recovered

## Command dispatch entry
```
load_installed_skills (IPC command) [0x10072db50]
├── std::sys::sync::once_box::OnceBox::initialize [0x100f7c920]           [noise: lazy-init]
├── std::sys::pal::unix::sync::mutex::Mutex::lock [0x100f2e7a0]           [noise: sync]
├── std::panicking::panic_count::is_zero_slow_path [0x100fb7400]          [noise: poison-guard]
│
├── core::skills::load_installed_skills [0x1005e78d0]                     ← CORE
│   ├── std::sys::fs::metadata [0x100f2b980]                              [leaf: dir exist check]
│   ├── core::skills::scan_skills_recursive [0x1005e7a70]                 ← RECURSIVE WALKER
│   │   ├── std::sys::fs::read_dir [0x100f2ba80]                          [leaf: opendir]
│   │   ├── std::fs::DirEntry::path [0x100f26120]                         [leaf]
│   │   ├── std::path::Path::file_name [0x100f34070]                      [leaf]
│   │   ├── core::str::converts::from_utf8 [0x100f736c0]                  [leaf]
│   │   ├── std::path::Path::is_dir [0x100f33b80]                         [leaf]
│   │   ├── std::path::Path::_join [0x100f33a00]      ("SKILL.md")        [leaf]
│   │   ├── std::sys::fs::metadata [0x100f2b980]      (SKILL.md check)    [leaf]
│   │   ├── [if SKILL.md present] core::skills::load_skill_summary [0x1005e5870]  ← LEAF
│   │   │   ├── std::fs::read_to_string::inner [0x100f25740]              [leaf: file read]
│   │   │   ├── std::path::Path::parent [0x100f33d60]                     [leaf]
│   │   │   ├── CharSearcher::next_match [0x100604c90]   ('\n' scan)      [leaf: frontmatter parse]
│   │   │   ├── core::str::trim_matches [0x10057e620]                     [leaf]
│   │   │   ├── String::from_iter [0x1006dd530]          (title collect)  [leaf]
│   │   │   ├── std::sys::fs::metadata [0x100f2b980]     (parent dir)     [leaf]
│   │   │   ├── std::fs::Metadata::modified [0x100f26290]                 [leaf]
│   │   │   ├── SystemTime::duration_since [0x100f34cb0]                  [leaf]
│   │   │   ├── Path::strip_prefix [0x100f33380]                          [leaf]
│   │   │   ├── Path::to_path_buf [0x100f33090]                           [leaf]
│   │   │   ├── Path::file_name [0x100f34070]                             [leaf]
│   │   │   ├── Path::Display::fmt ×3 [0x100f45e50]     (string builds)  [leaf]
│   │   │   └── String::clone [0x100f656f0]                               [leaf]
│   │   ├── [if no SKILL.md] scan_skills_recursive (self, recurse)        ← RECURSE
│   │   └── alloc::raw_vec::RawVec::grow_one [0x100f7a470]  (Vec push)   [leaf]
│   ├── core::slice::sort::stable::driftsort_main [0x1007449d0]   (n≥21)  [leaf: sort]
│   └── core::slice::sort::shared::smallsort::insertion_sort_shift_left [0x1004f32e0] (2≤n<21) [leaf: sort]
│
├── [SUCCESS PATH - NEW DELTA vs 1.0.9]
│   ├── Path::Display::fmt [0x100f45e50]                (log path format)  [leaf]
│   ├── SystemTime::now [0x100f34cf0]                                      [leaf]
│   ├── SystemTime::duration_since [0x100f34cb0]                           [leaf]
│   │
│   └── core::repository::Repository::store_bootstrap_installed_skills [0x1004cf950]  ← DELTA
│       ├── platform::paths::CodexPaths::ensure_directories [0x1005582b0]  [leaf: mkdir]
│       │   └── std::fs::DirBuilder::_create ×9 [0x100f24d00]             [leaf]
│       ├── core::bootstrap_cache::load [0x1004d88c0]                      ← READ EXISTING
│       │   ├── std::fs::read_to_string::inner [0x100f25740]               [leaf: file read]
│       │   └── serde_json::de::from_trait [0x1002e8ee0]                   [leaf: JSON parse]
│       ├── SystemTime::now [0x100f34cf0]                                   [leaf]
│       ├── SystemTime::duration_since [0x100f34cb0]                        [leaf]
│       ├── Vec<InstalledSkillSummary>::clone [0x10065db20]                 [leaf]
│       ├── String::clone [0x100f656f0]                  (codex_version)    [leaf]
│       ├── SkillListPayload::drop [0x1004eb520]          (old payload)     [leaf]
│       ├── serde_json::ser::to_vec [0x1004b5d40]                           [leaf: JSON serialize]
│       ├── BootstrapStatePayload::drop [0x1004ecf80]                       [leaf]
│       └── std::fs::write::inner [0x100f25f70]           (write file)      [leaf: SIDE-EFFECT]
│
├── CoreEnvelope::ok [0x1005557b0]                                          [leaf]
├── memcpy (0x90 bytes to caller)
│
├── [ERROR PATH]
│   └── CoreError::Display::fmt [0x10058fda0]                               [leaf]
│
└── std::sys::pal::unix::sync::mutex::Mutex::unlock [0x100f2e7c0]           [noise: sync]
```

## Depth analysis
- Deepest app-logic path: `load_installed_skills` → `scan_skills_recursive` → `load_skill_summary` → `fs::read_to_string` = depth 4 (terminated at fs leaf)
- Delta side-effect path: `load_installed_skills (cmd)` → `store_bootstrap_installed_skills` → `bootstrap_cache::load` → `serde_json::from_trait` = depth 4
- Terminated reason: all leaves are stdlib (fs/time/alloc) or serde — no further app-level callees

## Terminated leaves (app-level)
All callees at depth ≥3 are stdlib/serde/alloc with no further codexmate_lib calls.
