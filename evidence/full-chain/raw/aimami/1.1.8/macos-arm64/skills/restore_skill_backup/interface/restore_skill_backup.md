# restore_skill_backup — macOS AiMaMi 1.1.8 (core::skills)

## Command
`invoke("restore_skill_backup", { id })` — frontend-confirmed via
`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 80: `argKeys=["id"]`,
`argObject="{id:e}"`, file `assets/index-CX-I_QAq.js` line 86, callee alias `te`
(the shared `tauriInvokeWrapper` helper). Unchanged from the 1.0.9 baseline interface (`{ id: string }`).

## Backend owner
- IPC dispatch owner: `commands::skills::restore_skill_backup::hdd4cc5f5064d93ff` @ `0x10030ed50`
  (caller: `run::{{closure}}::{{closure}}::h386a8c7d835c3b02` @ call site `0x1002fc493`, live dispatcher-wired).
- Business logic: `core::skills::restore_skill_backup::h2146afcdb0c1e1fe` @ `0x1004bfbb0`
  (sole caller = the owner above, confirmed via `xrefs_to`).

## Request
`{ id: string }` — the backup ID (a subdirectory name under `<backups_root>/skill-backups/<id>/`).

## Response (success)
A single large struct assembled from three parts, matching the shape already documented for the
1.1.1 Windows baseline delta entry (`restoredSkill`, `backup`, `rollbackBackup`, plus count/status
fields) — this round did not re-derive the exact outer JSON key names for the macOS 1.1.8 binary from
scratch (Confirmed vs Inferred split below), but the field-count/struct-composition match is exact:
1. **The requested backup's own `SkillBackupMetadata`** (re-parsed from `<backup_dir>/metadata.json`):
   `backupID`, `skillID`, `name`, `title`, `relativePath`, `createdAt` — Confirmed field names (see
   evidence.md; these are read AND written using the identical 6-field serde shape).
2. **`rollbackBackup`: a freshly-created `SkillBackupSummary`** of the live directory that was about to
   be overwritten (tag `"restore-rollback"`, 16B literal, Confirmed via `get_string`) — same 6-field
   shape as above plus the reloaded `InstalledSkillSummary` fields from step 1's `load_skill_summary`
   call inside `backup_skill_directory`. Only present when the live target directory existed prior to
   restore (skipped entirely, not null-populated, when the target was absent — Confirmed via the
   `metadata()`-then-`goto LABEL_27` skip branch).
3. **`restoredSkill`: the reloaded `InstalledSkillSummary`** from re-running `load_skill_summary` against
   the just-restored `SKILL.md` (`name`, `title`, `relativePath`, an mtime-derived field) — Confirmed
   call, Inferred outer key name (`restoredSkill`) by analogy with the 1.1.1 Windows baseline entry
   (`aimami/1.1.1/windows-x64/restore_skill_backup`, `new_response_fields`), not independently
   `type_query`-verified against this mac 1.1.8 IDB this round.

## Response (error) — CoreError, all Confirmed
| trigger | CoreError code |
|---|---|
| `<backups_root>/skill-backups/<id>` does not exist | 7 |
| `<backup_dir>/metadata.json` unreadable (I/O) | 2 (raw io::Error) |
| `<backup_dir>/metadata.json` fails to parse as JSON | 3 |
| `<backup_dir>/skill` subtree missing (backup has no payload) | 8 |
| `mkdir -p` of the target's parent directory fails (**DELTA**, see below) | 2 (raw io::Error) |
| safety-backup of the live target fails (any of its internal steps) | 2 (propagated raw error) |
| `remove_dir_all` of the live target fails | 2 (raw io::Error) |
| `copy_dir_all` restore-copy fails | 2 (propagated raw error) |

Note: if `load_skill_summary` fails on the final reload step *after* the restore copy has already
succeeded on disk, the command still returns `Ok` with a degraded status field (via the
`restore_skill_backup::{{closure}}` closure) — the restore itself is **not** rolled back on that path.
This is a pre-existing behavior, not part of the 1.1.8 delta (call-tree edges only, no baseline
counter-evidence checked for this specific sub-branch).

## DELTA vs 1.0.9 baseline (Confirmed)
1.0.9 macOS baseline (`raw/aimami/1.0.9/macos/skills/restore_skill_backup/README.md`) documents the
terminal callee set as: `std::fs::read_to_string metadata.json`, `serde_json::from_trait`,
`backup_skill_directory`, `copy_dir_all`, `load_skill_summary` — **no** `Path::parent` /
`DirBuilder::_create` mentioned. The 1.1.8 binary adds, between parsing the backup's metadata and
checking whether the live target exists:
```
target_dir = skills_root.join(metadata.skillID)
parent_dir = Path::parent(target_dir)
DirBuilder{ mode: 0o777, recursive: true }._create(parent_dir)   // mkdir -p
```
i.e. a **mkdir -p on the parent directory of the live install target**, run unconditionally before the
rollback-backup/remove/copy sequence, regardless of whether the target or its parent already exist.
This hardens the restore path against a missing parent directory (e.g. the skills root category folder
having been removed/renamed since the backup was taken) that would otherwise make `remove_dir_all`/
`copy_dir_all` fail with `ENOENT`. This matches (and is now fully confirmed, not just angle-A flagged)
the delta already surfaced by this session's own `mac-shard-6` shared-commands scan
(`INDEX.jsonl` key `aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-6`).

No other delta found in the traced call tree: `backup_skill_directory`, `copy_dir_all`, and
`load_skill_summary` bodies match the 1.0.9-documented terminal-callee set functionally (same callee
names/shapes), the mkdir-p insertion above is the only structural addition observed in the traced
depth-5 tree.
