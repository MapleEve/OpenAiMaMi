# interface — delete_skill_backup (AiMaMi 1.1.1 win64) — GOLD LEAF

session: wf-aimami111-delta-20260618-goldleaf
platform: windows-x64
sha: d24e429a

---

## Tauri IPC Contract

```typescript
// Frontend invoke call (dim1 CCF verified):
await invoke("delete_skill_backup", { repo: string, id: string })
// → Promise<DeleteSkillBackupResponse>
```

---

## Request DTO (dim2 — UNCHANGED from 1.0.9)

```typescript
interface DeleteSkillBackupRequest {
  repo: string;   // skill registry repo path
                  // key bytes: "repo" (len=4) @ 0x1412AC6D1
  id: string;     // backup identifier (UUID or slug) to delete
                  // key bytes: "id" (len=2) @ 0x1412AC77D
}
```

---

## Response DTO (dim4 — CHANGED in 1.1.1)

```typescript
// 1.0.9 response (bare literals, no dedicated serializer):
// { "status": "ok", "message": "Success" }

// 1.1.1 response (new structured DTO via delete_skill_backup_response_ser_111):
interface DeleteSkillBackupResponse {
  deletedBackupID: string;        // the id that was deleted
                                  // field key @ 0x1412C0992 (len=15)
  remainingBackupCount: number;   // u32: count of backups remaining after deletion
                                  // field key @ 0x1412C09A1 (len=20)
}
```

---

## Error Responses

```typescript
// Not-found error (string @ 0x1412EC064 len=18):
// "Backup not found: <id>"
// Emitted via sub_14080C3C0 (Tauri JSON error serializer)

// New error strings observed in 1.1.1 (not in 1.0.9):
// "replaceSKILL.md"    — alternate backup content path error
// "Invalid skill source"
// "Invalid skill af..."  — truncated, suggest "Invalid skill after..."
```

---

## Internal SkillBackup Struct (dim4 — 152 bytes/entry)

Reconstructed from decompiler evidence (memcpy stride, field cluster at 0x1412EC078):

```typescript
interface SkillBackup {
  backupID: string;       // offset 0
  skillID: string;        // offset ~24
  title: string;          // offset ~48
  relativePath: string;   // offset ~72
  createdAt: string;      // offset ~96  (ISO timestamp)
  // remaining bytes: padding/flags to reach 152B total
}
```

---

## Side Effects

| # | Effect | New in 1.1.1 |
|---|---|---|
| 1 | FS: remove `<codex_skills_root>/skill-backups/<repo>/<id>/` (remove_dir_all) | no |
| 2 | FS: read `metadata.json` per entry to validate backup before delete | no |
| 3 | Memory: rebuild Vec<SkillBackup> of remaining entries (152B/entry) | **yes** |
| 4 | Memory: sort_unstable on remaining Vec (n<21: insertion; n≥21: pdq) | **yes** |
| 5 | Win32: WakeByAddressSingle to resolve Tauri async future | no |

No HTTP / network. No sidecar subprocess. No DB write. Pure local FS operation.

---

## Platform Notes (win vs macos)

- Path encoding: UTF-8 → UTF-16 OsString via snooze_file_open_111 (CreateFileW)
- Directory read: ReadDirectoryChangesW adapter (sub_140672D70 / sub_14108C7E0)
- Win32 primitives: CloseHandle, WakeByAddressSingle, _InterlockedDecrement64
- Sort: same two-path sort (n<21 / n≥21) as macOS build — binary-level identical logic
