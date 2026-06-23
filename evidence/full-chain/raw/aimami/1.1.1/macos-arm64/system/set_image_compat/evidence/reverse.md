# set_image_compat — SAME-DEPTH-CONFIRM — 1.1.1 vs 1.0.9

**session**: wf-aimami111-same-depth-20260618
**machine**: <本地机器>
**shard**: mac-shard-6/6
**owner_1.1.1**: codexmate_lib::commands::system::set_image_compat @ 0x100618640
**owner_1.0.9**: codexmate_lib::commands::system::set_image_compat @ 0x10025ee14

---

## SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

### Call-tree callee set comparison (app-level, noise filtered)

1.0.9 call tree (from set_image_compat_owner_sys.jsonl, depth 0-5):
- d1: CodexPaths::resolve_codex_home → d2: env::var, dirs::home_dir, Path::_join (all external)
- d1: CodexPaths::from_home → d2: fs::metadata, fs::rename (external)
- d1: fs::read_to_string::inner → d2: File::open_c, fstat, read_to_end, close (external)
- d1: alloc::str::join_generic_copy (external)
- d1: fs::write::inner → d2: File::open_c, write_syscall, close (external)
- d1: CoreEnvelope::ok (response_serialize)
- d1: alloc::fmt::format::format_inner (error_return)

1.1.1 call tree (from 逆向分析 decompile):
- d1: CodexPaths::resolve_codex_home @ 0x100558430 (same role)
- d1: CodexPaths::from_home @ 0x100558e60 (same role)
- d1: fs::read_to_string::inner @ 0x100f25740 (same role)
- d1: CharSearcher::next_match, trim_matches, trim_start_matches — string line processing (same)
- d1: join_generic_copy @ 0x1005f9620 (same role)
- d1: fs::write::inner @ 0x100f25f70 — writes modified config (persistence_commit)
- d1: CoreEnvelope::ok @ 0x100554bb0 (response_serialize)
- d1: format::format_inner (error_return)
- d2-d5: same fs/alloc/serde terminal callees

Key string literal: `"image_generation = false"` present in both 1.0.9 (`0x101154e15`) and 1.1.1 (found via find_regex: `"[features]\nimage_generation = falsesh-c"`). Same TOML manipulation logic: read config → parse [features] section → replace/insert `image_generation = false` → write back.

### Structural analysis
- No new HTTP calls, sidecar dispatches, or persistence paths added
- No new error types or DTO fields
- TOML manipulation loop structure identical (CharSearcher pattern + trim_matches + join_generic_copy)
- Vec::insert_mut / Vec::remove path: section-level replacement, identical to 1.0.9
- CoreEnvelope::ok wrapping unchanged

### Verdict: confirmed_same_depth5

**1.0.9 status note**: 1.0.9 macos leaf was in `raw/aimami/1.0.9/macos/system/set_image_compat/` (non-arm64-canonical path); evidence confirmed via call-trees jsonl. No readyToImplement gate set in 1.0.9 macos leaf evidence.
