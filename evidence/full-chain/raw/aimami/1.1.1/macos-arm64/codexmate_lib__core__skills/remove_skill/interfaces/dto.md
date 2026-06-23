# Interfaces — remove_skill (macOS 1.1.1)

## IPC Input (Tauri command args)
- `skill_id: String` — name/ID of skill to remove (passed as `v32[1]` ptr + `v32[2]` len)

## IPC Output: SkillRemovePayload (CoreEnvelope<SkillRemovePayload>)
Serialized JSON fields (confirmed from serde Serialize impl @ 0x10054ffc0):
```json
{
  "removedSkillID": "<String>",      // offset a1+0, len at a1+8/16
  "backup": <SkillBackupSummary>,    // offset a1+24 (struct embedded)
  "remainingInstalledCount": <u32>   // offset a1+176 (DWORD)
}
```
Field keys confirmed from rodata anon strings:
- `0x101150ed4` → `"removedSkillID"` (14 bytes)
- `0x101150ece` → `"backup"` (6 bytes)
- `0x101150ee2` → `"remainingInstalledCount"` (23 bytes)

## Error variants (CoreError discriminant 0x8000000000000000)
- `error_code=7`: skill not found by ID (format! at unk_1010B785E)
- `error_code=2`: remove_dir_all failed (IO error, v29 non-zero)
- `error_code=?`: backup_skill_directory failed (propagated from backup_skill_directory)
- Poisoned store: static string "Skills store is poisoned" (41 bytes, anon.627)

## Mutex
- Per-store POSIX mutex (pthread_mutex_t) wraps entire command handler
- Poison flag at `*((_BYTE *)store + 8)` — set on panic during critical section

## Side effects
1. Creates backup directory under `<app_data>/skill-backups/<uuid>/` (unconditional)
   - Contains: metadata.json, copy of skill directory contents
2. **[DELTA 1.1.1]** stat() check on skill_path (std::sys::fs::metadata)
3. **[DELTA 1.1.1 conditional]** remove_dir_all on skill_path ONLY if stat() Ok
   - If stat() Err: no directory removal, returns Ok(payload) with removedSkillID set
   - Backup already created at this point regardless of directory existence
4. Reload of installed skills list for remainingInstalledCount

## 1.0.9 vs 1.1.1 behavioral delta
| Step | 1.0.9 | 1.1.1 |
|------|-------|-------|
| After backup | unconditional remove_dir_all | stat() then conditional remove_dir_all |
| Missing dir | Err (IoError from remove_dir_all) | Ok(payload) — silent success |
| Backup creation | always | always (unchanged) |
| Return type | same CoreEnvelope<SkillRemovePayload> | same |
