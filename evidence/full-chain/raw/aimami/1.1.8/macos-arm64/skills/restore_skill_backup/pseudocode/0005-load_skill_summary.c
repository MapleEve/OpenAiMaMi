// callee (depth2 from owner via restore path — reloads the skill after restore completes; also
// depth3 via backup_skill_directory — re-derives name/title before backing up) —
// codexmate_lib::core::skills::load_skill_summary::h92477d1311f13b4e
// addr=0x1004be5d0 (full body decompiled, 0 truncation; this is the largest/most string-heavy leaf,
// parses SKILL.md frontmatter by hand — no serde/yaml crate calls, a bespoke line-scanner).
//
// terminated_reason for this branch: persistence_read (std::fs::read_to_string::inner at depth+1 from
// this function is the actual file-read syscall boundary; already independently confirmed as a callee).

double __fastcall codexmate_lib::core::skills::load_skill_summary::h92477d1311f13b4e(
        unsigned __int8 *result, __int64 skill_md_path_ptr, __int64 skill_md_path_len,
        void *skills_root_ptr, __int64 skills_root_len)
{
  // 1. content = std::fs::read_to_string(skill_md_path)   -- terminated_reason=persistence_read
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v103, skill_md_path_ptr, skill_md_path_len);
  if ( read failed ) { *result = 2 /*Err*/; return; }

  // 2. parent_dir = Path::parent(skill_md_path) — used later to compute relativePath.
  std::path::Path::parent::h4c3ac26770731fbb(...);
  if ( !parent_dir ) { *result = 2; return; }

  // 3. Hand-rolled YAML-frontmatter-ish scan: split content into lines via a CharSearcher pattern
  //    matcher (core::str::pattern), trim each line, look for a leading '#' (skip comment/blank lines),
  //    then re-scan collecting non-comment lines up to the first line starting with "---" (front-matter
  //    delimiter) or a directional-mark/backtick guard. This is a bespoke micro-parser, not a full
  //    Markdown/YAML library call — confirmed by the complete absence of serde_yaml/pulldown-cmark
  //    symbols anywhere in this function's callee list.
  //    Extracted at the end: name (from directory/file name), title (first non-comment content line or
  //    heading text), relativePath (path relative to skills_root via Path::strip_prefix, falling back to
  //    just the file_name() if strip_prefix fails), and an mtime-derived field via
  //    std::fs::Metadata::modified() + SystemTime::duration_since().
  core::str::pattern::CharSearcher::next_match(...);      // line splitter
  core::str::_$LT$impl str$GT$::trim_matches(...);
  std::sys::fs::metadata::h32fa16d3052ea535(...);          // stat() for mtime
  std::fs::Metadata::modified::h0e075817eaa8c909(...);
  std::time::SystemTime::duration_since::had059553cab94f96(...);
  std::path::Path::_strip_prefix::h737731a9318ab115(skills_root_ptr, ..., skill_md_path_ptr, skill_md_path_len);
  std::path::Path::to_path_buf::h73855ce4b54f7174(...);    // relativePath when strip_prefix succeeds
  std::path::Path::file_name::hf6c2daad91e50ebf(...);      // fallback name-only path + the `name` field

  // 4. Builds and returns an InstalledSkillSummary-shaped struct (name, title, relativePath, mtime-derived
  //    timestamp field, plus a couple of owned-String clones for Display-formatted path fields) into
  //    *result via a 23-qword field-by-field store.
}
