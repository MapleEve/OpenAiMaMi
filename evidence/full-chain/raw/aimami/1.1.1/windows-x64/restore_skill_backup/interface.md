# restore_skill_backup — Interface Contract (Windows x64)
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> platform=windows-x64 -->
<!-- sha=d24e429a binary="AiMaMi 1.1.1 win64.exe" imagebase=0x140000000 -->

## dim1 — Frontend CCF (Command Call Frame)

**File:** `src/services/api/skills/skillsApi.tsx`
**Line 12:** `restoreSkillBackup: "restore_skill_backup",` (command string constant)
**Line 26–28:** invoke site:
```typescript
restoreSkillBackup: (id: string) =>
  invoke<CoreEnvelope<SkillRestorePayload>>(
    skillCommands.restoreSkillBackup, { id }
  )
```

**CCF verdict:** CONFIRMED. Single `id` arg (string). Return type `CoreEnvelope<SkillRestorePayload>`.

## dim2 — Argument Keys + Extractor

| Arg key | Type | Extractor |
|---|---|---|
| `id` | string | `remove_skill_parse_id_param_111 @ 0x1402FED40` |

Extractor `remove_skill_parse_id_param_111` reads `"id"` key from request JSON.
String anchor for command name: `aId_0 @ 0x1412AC77D` → `"id"`.
`aRestoreSkillBa @ 0x1412AC196` → `"restore_skill_backup"`.

## dim4 — DTO + Struct Fields

### Request DTO
```typescript
{ id: string }  // backup UUID, parsed by remove_skill_parse_id_param_111
```

### Response DTO (NEW in 1.1.1)
```typescript
// SkillRestorePayload @ src/contracts/ipc/skills/skillsContract.tsx
interface SkillRestorePayload {
  restoredSkill: InstalledSkillSummary;  // skill metadata after restore
  backup: SkillBackupSummary;            // backup record used for restore
  rollbackBackup: SkillBackupSummary | null;  // NEW: rollback tracking entry
}
```

**Binary evidence:**
- Response serializer @ `0x14020F2A0` (`restore_skill_backup_response_ser_111`)
- String `"restoredSkill"` @ `0x1412C05F3`
- String `"backup"` @ `0x1412C0577`
- String `"rollbackBackup"` @ `0x1412C0600`
- Sub-calls: `sub_140266A70` (restoredSkill), `sub_1402654D0` (backup), `sub_140260410` (rollbackBackup)

### Backup Record DTO (written to snooze dir)
```typescript
interface SkillBackupRecord {
  backupID: string;      // UUID v4, BCryptGenRandom via ProcessPrng @ 0x140F5A860
  skillID: string;       // from SKILL.md parse
  name: string;          // from SKILL.md parse
  title: string;         // from SKILL.md parse
  relativePath: string;  // from SKILL.md parse
  createdAt: number;     // u64 timestamp, system_time_precise_u32_111 @ 0x14107B7E0
}
```
String anchors: `"backupID" @ 0x1412EC078`, `"skillID" @ 0x1412EC080`,
`"relativePath" @ 0x1412EC08C`, `"createdAt" @ 0x1412EC098`.

### delete_skill_backup Response DTO (companion, DELTA-6)
```typescript
interface SkillDeleteBackupPayload {
  deletedBackupID: string;        // string @ 0x1412C0992
  remainingBackupCount: number;   // string @ 0x1412C09A1
}
```
**1.0.9 had:** `{ status: "ok", message: "Success" }` — both fields removed.

## dim5 — Same-Platform Gate

xrefs to `restore_skill_backup_owner_sys @ 0x1400201E0`:
- `tauri_ipc_main_dispatcher_sys @ 0x14000D2A0` code-ref @ `0x14000F4C4`
- data refs: `0x1414FCF54`, `0x14189E77C` (command dispatch table)

Platform: windows-x64 only (this leaf). Mac binary has separate leaf (mac producer session).

## Error Strings

| Addr | Text | Context |
|---|---|---|
| `0x1412EC11C` | `"restore-rollbackBackup corrupted"` | `restore_skill_do_111`: `import_skill_build_record_db_write_111` failure path |
| inline heap | `"Invalid skill source"` | `import_skill_build_record_db_write_111`: SKILL.md parse failed |
| code=7 | snooze dir not found | `restore_skill_do_111`: `snooze_file_open_111` returns 2=Err |
| code=8 | `.skill` file missing | `restore_skill_do_111`: inner snooze_file_open_111 check |

## Side Effects (New in 1.1.1)

| Effect | Function | Win32 API |
|---|---|---|
| File copy (backup-before-restore) | `snooze_file_backup_copy_111 @ 0x14108C340` | `CopyFileExW` |
| JSON record write | `sub_1403A6410` → `win32_file_write_bytes_111 @ 0x141093710` | file write |
| UUID generation | `uuid_v4_generate_raw_sys @ 0x140F5A860` | `ProcessPrng` (BCryptGenRandom pattern) |
| Timestamp | `system_time_precise_u32_111 @ 0x14107B7E0` | system time |
