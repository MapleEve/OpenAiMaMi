# evidence.md — restore_skill_backup, macOS AiMaMi 1.1.8 (core::skills)

session=<审计会话> machine=<本地机器> task=STAGE2 deep gold-leaf 21/29 (macos-arm64)
分析工具就绪门
`idb_path` containing `AiMaMi 1.1.8 universal.app`, `uptime_sec=217741.639` — checked before any
decompile/rename/set_comments call this round.

## Confirmed
- Owner-gate re-check before write: `grep -n 'restore_skill_backup' INDEX.jsonl` prior to this write
  returned 4 hits, all for `1.0.9` (macos+windows) and `1.1.1` (windows-x64) plus one `1.1.8` shared-scan
  bucket line (`mac-shard-6`, angle-A shallow discovery only, no full leaf) — zero prior full-leaf claims
  for `aimami/1.1.8/macos-arm64/*/restore_skill_backup` → gate=ALLOW/first, no collision, no takeover
  token needed. `find raw/aimami/1.1.8/macos-arm64/*/restore_skill_backup/` prior to this write returned
  empty (idempotency check passed, not a re-run).
- Owner VA resolved via `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 91:
  `owner_va=0x1004bfbb0`, `owner_symbol=codexmate_lib::core::skills::restore_skill_backup::h2146afcdb0c1e1fe`,
  `source=func_query_clean_top_level_symbol`. Mac IDB already carries a clean demangled Rust symbol at
  this address; no `sub_xxxxx` rename was needed at either the owner or core-impl level.
- Full IPC dispatch chain confirmed live: `run::{{closure}}::{{closure}}::h386a8c7d835c3b02` (call site
  `0x1002fc493`) → `commands::skills::restore_skill_backup::hdd4cc5f5064d93ff` @ `0x10030ed50` (thin
  OnceBox-mutex-guarded wrapper, 1010B/29 blocks/cc=14) → `core::skills::restore_skill_backup::h2146afcdb0c1e1fe`
  @ `0x1004bfbb0` (2401B/44 blocks/cc=22, sole meaningful callee of the wrapper, sole caller confirmed via
  `xrefs_to`). Both functions fully decompiled with 0 truncation via direct `decompile()` calls this round
  (the abbreviated `analyze_function()` preview reported `decompile_truncated:315` lines on the core impl,
  but the full `decompile()` call returned the complete 2401B body with no truncation flag).
- Frontend argKeys cross-confirmed: `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 80
  → `argKeys=["id"]`, matching the backend's final two parameters (`a6`/`a7` on the core function,
  `v41[1]`/`v41[2]` on the wrapper) which are joined onto `<backups_root>/skill-backups/` as the backup-id
  path segment.
- **DELTA-MKDIRP confirmed**: between parsing the backup's `metadata.json` and checking whether the live
  install target exists, the 1.1.8 core function computes `target_dir = skills_root.join(skillID)`, then
  calls `Path::parent(target_dir)` @ `0x1010a97e0` followed by `DirBuilder{mode:0o777,recursive:true}._create()`
  @ `0x10109a6b0` (→ libc `_mkdir` @ `0x101130a1a`, confirmed callee). The 1.0.9 macOS baseline
  (`raw/aimami/1.0.9/macos/skills/restore_skill_backup/README.md` line 9) documents the terminal callee
  set as exactly `read_to_string metadata.json, serde_json::from_trait, backup_skill_directory,
  copy_dir_all, load_skill_summary` — no `Path::parent`/`DirBuilder::_create` present. This independently
  corroborates (with full body-level proof, not just an angle-A string/callee-diff) the shallow finding
  already recorded this session in `intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-6.json`.
- `backup_skill_directory::h9cff2ad547fdeb76` @ `0x1004c0ca0` (full body decompiled, 0 truncation) is
  invoked from the core function with a literal tag `"restore-rollback"` (16 bytes, confirmed via
  `get_string` at `0x1012c5670`) exactly once, immediately before `remove_dir_all` + `copy_dir_all` — this
  is a safety backup of the live directory taken before it is overwritten by the restore.
- `SkillBackupMetadata` JSON field names confirmed via 6 independent `serde_core::ser::SerializeMap::serialize_entry`
  call sites inside `backup_skill_directory`, each cross-checked with `get_string` against the exact byte
  length passed to the call: `backupID`(8), `skillID`(7), `name`(4), `title`(5), `relativePath`(12),
  `createdAt`(9). The same struct shape is independently re-confirmed on the read side: the core function
  parses an existing backup's `metadata.json` via `serde_json::de::from_trait` into a 112-byte
  (7×16B slots) in-memory struct passed onward unchanged.
- `copy_dir_all::h9eacf1ff08825404` @ `0x1004bbfd0` is genuinely self-recursive (confirmed in its own
  decompiled body: `is_dir()` branch calls itself with `(src_entry, dst_entry)`, base case is
  `std::sys::fs::copy`) — this is what pushes the traced call tree to a real depth of 5 on two independent
  branches (once via the restore-side copy, once via the rollback-backup-side copy inside
  `backup_skill_directory`), not an artificially padded chain.
- `remove_dir_all::h50b3bc76069a86c9` @ `0x1010a0120` (std lib) is called on the live target directory
  immediately before the restore-side `copy_dir_all` call, confirmed via its own callee list containing
  `remove_dir_all_recursive` @ `0x1010a0a60` → libc `_unlink` @ `0x101130cc6`.

## Inferred
- The outer response JSON key names `restoredSkill` / `backup` / `rollbackBackup` were not independently
  re-derived from this mac 1.1.8 IDB's own literal pool this round — they are inferred by analogy with the
  already-`type_query`-verified 1.1.1 Windows baseline entry (`INDEX.jsonl` key
  `aimami/1.1.1/windows-x64/restore_skill_backup`, `new_response_fields:
  ["restoredSkill","backup","rollbackBackup","deletedBackupID","remainingBackupCount"]`), combined with the
  struct-composition match observed here (3 sub-structs assembled into one ~42-qword response, matching a
  restored-skill + used-backup + rollback-backup shape).
- The exact meaning of the two args passed to the core function as `a4`/`a5` (labeled `backups_root` in
  this evidence) vs `a2`/`a3` (labeled `skills_root`) is inferred from which one gets joined with the
  literal `"skill-backups"` vs which one gets joined with the backup metadata's `skillID` field — not
  independently confirmed via `type_query` against the Rust function signature's actual parameter types.
- The degraded-but-`Ok` fallback path when the post-restore `load_skill_summary` reload fails (handled by
  `restore_skill_backup::{{closure}}::hc178916a43572a07`) is inferred to NOT roll back the already-committed
  file-system changes, based on the control flow (the closure only builds a response value, no
  `remove_dir_all`/`copy_dir_all` calls are re-invoked on that path) — not independently exercised/tested.
- `SkillBackupSummary` (the `rollbackBackup` value's own type) is inferred to be a distinct-but-structurally-
  similar type to `SkillBackupMetadata`, based on `drop_in_place$LT$...SkillBackupSummary$GT$` being a
  separate symbol from `drop_in_place$LT$...SkillBackupMetadata$GT$` in the core function's callee list —
  the exact field-level differences between the two types were not enumerated this round.
- The precise Rust source-level split between `core::skills::restore_skill_backup`'s 7 raw arguments and a
  higher-level `(skills_root: &Path, backups_root: &Path, backup_id: &str)` 3-argument signature is a
  reconstruction from ABI + join-call ordering, not a `type_query`-confirmed function prototype.

## Unknown
- Exact byte offsets / field ordering within the final ~42-qword (336+ byte) response struct returned to
  the IPC wrapper were not mapped field-by-field to named struct fields; only the 3 constituent sub-parts
  (backup metadata, rollback summary, reloaded skill summary) were identified by call-site provenance.
- Whether `mkdir -p` on the target's parent directory can itself trigger a *new* failure mode not present
  in 1.0.9 (e.g. permission-denied on a symlinked category folder) was not exercised; only the presence of
  the new call and its error-propagation path (`code=2`, raw `io::Error`) were confirmed statically.
- The exact semantics of the `"restore-rollback"` tag string inside `backup_skill_directory` (i.e. whether
  it is persisted anywhere, used only as an internal parameter name, or surfaced to the frontend) were not
  traced past the function boundary — `recovery_attempts`: grepped this literal against
  `raw/aimami/1.1.8/macos-arm64/frontend/*` (no match found in the frontend contracts/control-flow files
  extracted this session), grepped the core function's own response-building code for a second embedding
  of the same literal (not found) — treated as an internal-only backup-reason tag, not a response field.
- Whether the Windows 1.1.8 build carries the same `DELTA-MKDIRP` hardening was not checked this round
  (out of scope for this macOS-arm64 sub-entry); `recovery_attempts`: none run this round, flagged as an
  open cross-platform comparison for a future windows-x64 `restore_skill_backup` deep-gold-leaf pass.
- Whether `deletedBackupID`/`remainingBackupCount` (present in the 1.1.1 Windows `new_response_fields`
  list) are also part of this mac 1.1.8 response was not independently confirmed; the traced call tree
  this round did not surface a distinct "delete old backups by retention policy" call site, so these
  fields are left as `Unknown` rather than assumed present. `recovery_attempts`: reviewed the full
  decompiled core-function body for any `remove_dir_all`/`remove_file` call beyond the single
  live-target-removal already documented — none found.

## Fake-wall check
`genuine_ceiling=false`; `accepted_unknown` not claimed anywhere in this leaf. All 5 nodes carrying real
business logic (owner wrapper, core impl, `backup_skill_directory`, `copy_dir_all`, `load_skill_summary`)
were fully decompiled with 0 truncation via direct `decompile()` calls (not the abbreviated
`analyze_function()` preview). Call-tree depth ≥5 satisfied organically via `copy_dir_all`'s genuine
self-recursion (confirmed in its own body, not inferred), independently reached on two separate branches
(restore-side copy and rollback-backup-side copy). No `drop_in_place`-only stub was used to inflate depth,
no oversized-body truncation was encountered on any of the 5 decompiled functions.
