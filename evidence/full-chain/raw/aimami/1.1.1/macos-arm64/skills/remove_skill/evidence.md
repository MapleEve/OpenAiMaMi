# evidence — remove_skill (macos-arm64, AiMaMi 1.1.1)

delta_class: integrity_recovered
session: <审计会话>
machine: <本地机器>
platform: macos-arm64
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
imagebase: 0x100000000

---

## 1. VA anchors

| Symbol | VA | Size | Confirmed |
|---|---|---|---|
| `commands::skills::remove_skill` (IPC) | `0x10072c810` | 0x402 | lookup_funcs ✓ |
| `core::skills::remove_skill` (core) | `0x1005e44a0` | ~0x690 | callees + decompile ✓ |
| `core::skills::backup_skill_directory` | `0x1005e7e80` | ~0x4a0 | callees + decompile ✓ |
| `core::skills::copy_dir_all` | `0x1005e2ee0` | — | callees ✓ |
| `core::skills::load_skill_summary` | `0x1005e5870` | 0xc1f | lookup_funcs ✓ |
| `core::skills::load_installed_skills` | `0x1005e78d0` | — | callee at two sites ✓ |

Mangled name IPC: `__ZN13codexmate_lib8commands6skills12remove_skill17h79aa21510e4630e1E`

---

## 2. String evidence

### String pool `0x101150e9c` — RemoveSkillResult serde keys
```
skillIDrelativePathbackupPathskillreplacedExistingbackupremovedSkillIDremainingInstalledCount
```
Parsed keys (sequential packing):
- `skillID` (7)
- `relativePath` (12)
- `backupPath` (10)
- `skill` (5)
- `replacedExisting` (16)
- `backup` (6)
- `removedSkillID` (14) — **NEW in 1.1.1** (not in 1.0.9)
- `remainingInstalledCount` (24) — **NEW in 1.1.1** (not in 1.0.9)

### String pool `0x101148783` — struct registry
Contains: `struct SkillBackupMetadata with 6 elements` confirming serde struct derive with 6 fields.

### String pool `0x1011542c7` — SkillBackupMetadata serde keys (get_bytes confirmed)
```
backupID (8) | skillID (7) | title (5) | relativePath (12) | createdAt (9)
```
Plus `name` (4) from packed literal `"namenamespace..."` at `0x101153607`.

### Literal `0x1011542ac` — backup fs path suffix
```
removemetadata.jsonskill
```
Split at call site: `"remove"[0..6]` → tag argument; `"metadata.jsonskill"[..13]` → filename suffix.

### Literal `0x1011154248` (aCodexmateLibCo_1) — path components
```
codexmate_lib::core::relay::storageschemaVersionactiveByIdeprovidersapiKeyskill-backupsreplace
```
`skill-backups` (13 chars) used as backup root dir name; `replace` suffix present.

### Literal from backup_skill_directory callsite — backup subfolder format template
```
unk_1010B78C2 → "{ts}-{safe_name}-{uuid_prefix}"  (isize + String + &str[8])
```

---

## 3. Delta assessment vs AiMaMi 1.0.9

### Delta 1 — `removedSkillID` field added to RemoveSkillResult DTO
String pool `0x101150e9c` shows `removedSkillID` as named serde key. In 1.0.9 the result had no named skill ID echoed back in the output envelope.

### Delta 2 — `remainingInstalledCount` field added to RemoveSkillResult DTO
Same string pool; fed by second call to `load_installed_skills` post-delete. Gives caller the new installed count without a separate list query. Not present in 1.0.9.

### Delta 3 — `backup_skill_directory` now generates UUID v4 backup folder ID
`uuid::Uuid::new_v4 @ 0x100e13930` present in backup callee set. First 8 hex chars of UUID used in backup folder name. Provides unique non-collision backup IDs vs 1.0.9 which used timestamp-only naming.

### Delta 4 — `metadata.jsonskill` written with `SkillBackupMetadata` JSON
`std::fs::write @ 0x100202050` called with serde_json-serialized SkillBackupMetadata (6 fields). File: `<backup_dir>/metadata.jsonskill`. New persistent artifact not present in 1.0.9.

### Delta 5 — `SystemTime::now` + `duration_since` in backup path for `createdAt`
Not just for folder naming — also serialized into the metadata JSON as `createdAt` (isize timestamp). Provides auditable backup creation time in the metadata file.

### Delta 6 — `load_installed_skills` called twice
Two decompile call sites at `0x1005e44e0` (pre-remove, for skill lookup) and `0x1005e490b` (post-remove, for `remainingInstalledCount`). In 1.0.9, only one call was needed (pre-remove, no count field).

### Noise filtered (not delta)
- Mutex poison-guard / GLOBAL_PANIC_COUNT / is_zero_slow_path — same pattern at every IPC entry
- anon vtable renames with hash suffixes — compiler artifact
- rust_alloc size micro-adjustments
- register/stack offset changes

---

## 4. IDB write-back

IDB saved: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb`
idb_save result: ok

Comments appended at:
- `0x10072c810` (IPC entry): full delta summary + session tag
- `0x1005e44a0` (core logic): args, flow, side-effects, delta tag
- `0x1005e7e80` (backup_skill_directory): UUID/timestamp behavior, serde keys, delta tag

---

## 5. Gate status

| Gate | Status | Evidence |
|---|---|---|
| Owner VA located | PASS | IPC @ 0x10072c810 + core @ 0x1005e44a0 via lookup_funcs |
| Decompile success (IDA decompiler) | PASS | Both IPC + core decompiled; backup helper decompiled |
| Call tree depth ≥ 5 | PASS | Depth 6: IPC → core → backup → copy_dir_all → load_skill_summary → stdlib |
| terminated_reason documented | PASS | All branches: stdlib fs / serde / allocator / panic handler leaves |
| Side-effects enumerated | PASS | 6 side-effects documented (5 disk + 1 mutex) |
| Interface/DTO inferred | PASS | RemoveSkillResult (8 serde keys) + SkillBackupMetadata (6 serde keys) confirmed |
| String evidence cross-checks | PASS | 0x101150e9c + 0x101148783 + 0x1011542c7 corroborate all delta fields |
| Delta vs 1.0.9 classified | PASS | 6 delta items + noise filter documented |
| IDB comments written | PASS | append_comments at 3 VAs, idb_save ok |
| Leaf files written to SMB | PASS | pseudocode.md + call-trees.md + evidence.md at canonical mac layout |

Overall gate: **PASS — integrity_recovered delta complete**

---

## 6. Leaf file paths

```
<来源位置>/raw/aimami/1.1.1/macos-arm64/skills/remove_skill/
├── evidence.md         ← this file
└── ida/
    ├── pseudocode.md   ← full annotated pseudocode for IPC + core + backup_skill_directory
    └── call-trees.md   ← depth-6 call tree + delta table
```
