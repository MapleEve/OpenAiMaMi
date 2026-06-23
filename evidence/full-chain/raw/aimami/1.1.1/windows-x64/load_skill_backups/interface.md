# load_skill_backups — Interface Contract
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> sha=d24e429a -->
<!-- strictImplementationUse=true readyToImplement=true -->

## IPC Command

```
command: "load_skill_backups"
```

String VA: `0x1412ac16c`
Handler VA: `0x140028120` (`load_skill_backups_owner_sys`)

---

## Request

No explicit request payload fields from the frontend.
The `repo` context is extracted internally by the handler from `ctx+520` (a2 arg in handler, len ~400 bytes).

Frontend invocation (no args):
```ts
invoke<CoreEnvelope<SkillBackupListPayload>>("load_skill_backups")
```

---

## Response Envelope (unchanged from 1.0.9)

```json
{
  "schemaVersion": <u32>,
  "success": <bool>,
  "code": <u32>,
  "message": <string>,
  "warnings": <string[]>,
  "data": <LoadSkillBackupsData | null>
}
```

Serialized by `load_skill_backups_wrap_and_dispatch_111` @ `0x1408333E0`
→ outer envelope via `sub_14022D130` @ `0x14022D130`
→ data field via `load_skill_backups_response_ser_111` @ `0x140210D20`
→ dispatched via IPC resolver vtable call +24 → `sub_14080C3C0` @ `0x14080C3C0`

---

## Response Data Schema

### `LoadSkillBackupsData` (serialized by `load_skill_backups_response_ser_111` @ `0x140210D20`)

```json
{
  "items":      <SkillBackupEntry[]>,   // skill_backup_items_array_ser_111 @ 0x1402687D0
  "total":      <u64>,                  // sub_140261480
  "rootPath":   <string>,               // sub_14025C400  ★ NEW IN 1.1.1
  "lastScanAt": <DateTime>              // sub_1402612D0  ★ NEW IN 1.1.1
}
```

### `SkillBackupEntry` (serialized by `skill_backup_entry_ser_111` @ `0x14020EC10`)
Stride: **152 bytes** per entry (confirmed from `sub_141212FB0(ptr + 152*i, &entry, 152)`)

| Field | JSON key | Struct offset | Ser fn VA | Delta |
|---|---|---|---|---|
| id | `"id"` | +0 | `0x14025C400` | unchanged |
| skillID | `"skillID"` | +24 | `0x14025C400` | unchanged |
| name | `"name"` | +48 | `0x14025C400` | unchanged |
| relativePath | `"relativePath"` | +72 | `0x14025C400` | unchanged |
| backupPath | `"backupPath"` | +96 | `0x14025C400` | **NEW IN 1.1.1** |
| title | `"title"` | +120 | `0x1402576B0` | unchanged |
| createdAt | `"createdAt"` | +144 | `0x1402612D0` | **NEW IN 1.1.1** |

String field VA evidence:
- `"id"` → `0x1412BF091`
- `"skillID"` → `0x1412C0545`
- `"name"` → `0x1412BE5C6`
- `"title"` → `0x1412BDB7D`
- `"relativePath"` → `0x1412C054C`
- `"backupPath"` → `0x1412C0558`
- `"createdAt"` → `0x1412BFEC1`

### `SkillBackupMetadata` (serde deserialization in `sub_140004AA0`, 6 fields from `metadata.json`)

Reconstructed from string block @ `0x1412acd80` + error strings @ `0x1412ec051`:
```rust
struct SkillBackupMetadata {
    backupID:     String,
    skillID:      String,
    title:        String,
    relativePath: String,
    createdAt:    DateTime,   // NEW IN 1.1.1
    items:        Vec<_>,     // 6th field (inferred from RegistryFile context)
}
```

---

## Side Effects

| Category | Detail |
|---|---|
| FS reads | Backup root dir scan (`snooze_file_open_111` @ `0x14108C6F0`) |
| FS reads | `metadata.json` per skill backup subdir (`win32_file_read_bytes_111` @ `0x141093260`) |
| FS writes | None |
| HTTP | None |
| Sidecar | None |
| Mutex | `pending_auto_switch_state_lock_acquire_111` @ `0x14006EDC0` (read-only pre-flight) |
| Sort | `sub_1407B37B0` (timsort-like, n≥21) or `sub_1401DB8D0` (insertion sort, 2≤n<21) |
| Wake | `WakeByAddressSingle` @ `0x14124A5D0` on async completion byte |

---

## Error Paths

| Condition | Behavior |
|---|---|
| `pending_auto_switch` lock returns non-zero | Handler short-circuits; cleanup + return resolver finalize |
| `query_installed_skills_with_repo_111` returns discriminant 6 (None) | Skip async waiter; wrap_and_dispatch with empty discriminant |
| `snooze_file_open_111` returns code 2 (NOT_FOUND or similar) | Return empty `a1[1..3]=0,8,0`; set discriminant=10 Ok with empty vec |
| `win32_file_read_bytes_111` fails (OFSUB(-v52,1)==true) | Skip entry; continue loop |
| JSON parse of metadata.json fails (`sub_140004AA0` → `sub_1407037D0`) | Skip entry; continue loop |
| `sub_141095530` validate_entry fails | Panic branch: `sub_14124BFE0` ("a Display implementation returned an error unexpectedly") |

---

## dim5 Platform Gate (windows-x64)

- `win32_file_read_bytes_111` @ `0x141093260` — Windows-only file read shim
- `WakeByAddressSingle` @ `0x14124A5D0` — Windows synchronization primitive
- `_InterlockedCompareExchange8` — x86-64 Windows interlocked intrinsic
- `_InterlockedDecrement64` — Windows interlocked ref-count decrement
- All file-system ops go through `snooze_file_open_111` (win32 handle wrapper)
- No POSIX equivalents; mac leaf uses platform-equivalent path join and dir iterator
