# load_skill_backups — Owner
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> sha=d24e429a -->

## Identity

| Field | Value |
|---|---|
| Command | `load_skill_backups` |
| IPC string VA | `0x1412ac16c` |
| Owner function | `load_skill_backups_handler_111` |
| Owner VA | **`0x140028120`** |
| Owner size | 911 bytes (0x38f) |
| Binary | AiMaMi 1.1.1 win64.exe |
| Baseline | 1.0.9 |
| Delta class | `integrity_recovered` |
| Gate tier | **gold-leaf** |

## IDB Rename

Renamed → `load_skill_backups_owner_sys` at `0x140028120`
Comment: `gold-leaf for load_skill_backups; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion`

## Structural Role

`load_skill_backups_handler_111` is the IPC dispatch entry for the `load_skill_backups` command.
It is registered via the IPC command string at `0x1412ac16c` ("load_skill_backups").
The handler owns the full request lifecycle:

1. Copy resolver state (ctx+0..520) and repo handle (ctx+520..920) to stack locals
2. Acquire `pending_auto_switch_state_lock_acquire_111` — pre-flight mutex gate (read-only)
3. Call `query_installed_skills_with_repo_111` — NEW in 1.1.1 pre-flight repo validation
   - Returns discriminant 3 (Some/Ok) or 6 (None/Err)
4. On discriminant != 6 (Some): delegate to `sub_1407DBD50` async skill-store waiter
   - Waiter calls `skill_backup_store_load_and_sort_all_111` to scan filesystem
   - Measures scan time via `system_time_precise_u32_111` + `elapsed_since_ts_111` → `lastScanAt`
5. On discriminant == 6 (None): bypass store; go directly to wrap-and-dispatch with empty/error discriminant
6. Call `load_skill_backups_wrap_and_dispatch_111` → serialize JSON response + call IPC resolver vtable+24
7. Cleanup skill list Vec (stride 96 per entry dtor), return via `sub_140042650`

## Key delta vs 1.0.9

- **NEW**: `query_installed_skills_with_repo_111` pre-flight gate inserted before store dispatch
- **NEW**: `skill_backup_store_load_and_sort_all_111` now records `lastScanAt` via `system_time_precise_u32_111`
- **NEW**: `SkillBackupEntry` gains `backupPath` (offset +96) and `createdAt` (offset +144); stride grows to 152 bytes
- **NEW**: Response `data` object gains `rootPath` and `lastScanAt` fields
- UNCHANGED: outer JSON envelope format, mutex poison guard pattern, IPC resolver dispatch mechanism

## Frontend CCF

`src/services/api/skills/skillsApi.tsx`:
```ts
loadSkillBackups: () => invoke<CoreEnvelope<SkillBackupListPayload>>(skillCommands.loadSkillBackups)
// skillCommands.loadSkillBackups = "load_skill_backups"
```
Consumed by: `src/features/skills/cache/useSkillsCache.tsx` → `queryFn: () => api.loadSkillBackups()`

Single invoke site confirmed. No payload fields sent from frontend (no request args beyond Tauri IPC context).
