# delete_skill_backup — Interface / DTO / Error / Side-effect Boundary
## Version: 1.1.1 macOS ARM64
## Session: wf-aimami111-delta-20260616
## SHA256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## Request DTO

| Field | Type | Required | Source |
|---|---|---|---|
| `id` | String | required | Frontend arg `{id:t}` — confirmed ipc-contracts.jsonl argKeys=["id"] |

Frontend wrapper: `deleteSkillBackup:t=>ne("delete_skill_backup",{id:t})` @ index-DdcCOEJG.js:86

---

## Response DTO

**Success**: `CoreEnvelope<Vec<SkillBackupSummary>>`
- Discriminant = 10 (Ok)
- Returns the updated list of remaining backups after deletion

**SkillBackupSummary** (152 bytes per entry, serde struct):
- `backupID` : String (8B serde key @ 0x1011542c7)
- `skillID` : String (7B serde key @ 0x1011542cf)
- `title` : String (5B serde key @ 0x1011542d6)
- `relativePath` : String (12B serde key @ 0x1011542db)
- Additional metadata fields (from SkillBackupMetadata deserialization)
- `skillPath` : PathBuf (built from entry_path + "skill")

**Sort**: Vec is sorted before return (driftsort for >=21 items, insertion_sort for <=20)

**Error**: `CoreEnvelope<Err(String)>`
- Discriminant = 0x8000000000000000 (Err)

---

## Error Strings (confirmed from binary @ 0x1010B7872)

| Code | CoreError variant | String |
|---|---|---|
| NotFound | CoreError(7) | `"Backup not found: <id>"` (format: "Backup not found: " + id) |
| PathError | CoreError(7) | `"Path not found: <id>"` (format: "Path not found: " + id) |
| Corrupted | CoreError(7) | `"Backup corrupted: <id>"` (format: "Backup corrupted: " + id) |
| IoError | CoreError(2) | Dynamic io error from `remove_dir_all` |
| LoadError | Propagated | Error from `load_skill_backups` if reload fails |

---

## Side Effects (ordered)

1. **Mutex acquire**: AppState unix mutex lock
2. **Path construction**: `{repo}/skill-backups/{id}` (two path joins)
3. **Existence check**: `std::sys::fs::metadata` on backup path
4. **Directory deletion**: `std::sys::fs::remove_dir_all` — removes entire backup subdirectory recursively
5. **Backup list reload**: `load_skill_backups` — re-reads skill-backups dir, deserializes all remaining metadata.json files, sorts result
6. **Mutex release**: AppState unix mutex unlock
7. **Arg buffer dealloc**: Frees `id` string arg buffer if owned

---

## Path Structure

```
{repo}/
  skill-backups/        ← base dir (CodexPaths field)
    {id}/               ← backup directory (deleted by remove_dir_all)
      metadata.json     ← SkillBackupMetadata JSON
      skill/            ← actual skill content
```

String anchor: `"skill-backups"` at 0x101154248 (in relay storage blob; prefix only — backup path is separate from relay)

---

## Boundary Conditions

| Condition | Behavior |
|---|---|
| id not found (path absent) | CoreError(7/NotFound) "Backup not found: <id>" |
| remove_dir_all fails (permission/IO) | CoreError(2/IoError) with dynamic error |
| load_skill_backups fails after delete | Error propagated |
| skill-backups base dir absent | load_skill_backups returns empty Vec (Ok) |
| id is empty string | Path join produces base dir path — behavior undefined |

---

## Delta vs 1.0.9

| Dimension | 1.0.9 | 1.1.1 | Change |
|---|---|---|---|
| argKeys | `["id"]` | `["id"]` | No change |
| path pattern | `skill-backups/<id>` | `skill-backups/<id>` | No change |
| delete method | unclear (file or dir) | `remove_dir_all` (directory) | Implementation clarification |
| response | Vec<SkillBackupSummary> (implied) | Vec<SkillBackupSummary> (confirmed) | Confirmed |
| error strings | Not confirmed in 1.0.9 | 3 error strings confirmed | New evidence |
| SkillBackupMetadata fields | Not confirmed | backupID/skillID/title/relativePath | New evidence |

**Migration status**: `migrated_no_behavior_diff` — interface contract identical, response type confirmed
