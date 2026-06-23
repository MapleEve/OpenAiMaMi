# restore_skill_backup — Owner Record (Windows x64)
<!-- session=<审计会话> machine=<本地机器> platform=windows-x64 -->
<!-- sha=d24e429a binary="AiMaMi 1.1.1 win64.exe" imagebase=0x140000000 -->

## Identity

| Field | Value |
|---|---|
| command | `restore_skill_backup` |
| owner function | `restore_skill_backup_owner_sys` |
| addr | `0x1400201E0` |
| size | `0x4C1` bytes (1217 bytes) |
| platform | windows-x64 |
| binary | AiMaMi 1.1.1 win64.exe |
| imagebase | `0x140000000` |
| analysis_date | 2026-06-18 |
| session | <审计会话> |
| delta_class | integrity_recovered |
| baseline_version | 1.0.9 |

## Dispatch Evidence

- String anchor `"restore_skill_backup"` @ `0x1412AC196`
- xref from `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0` code-ref `0x14000F4C4`
- Static data refs: `0x1414FCF54`, `0x14189E77C` (command table entries)
- rename in IDB: `restore_skill_backup_handler_111` → `restore_skill_backup_owner_sys`
- IDB comment set @ `0x1400201E0`: `gold-leaf for restore_skill_backup; sha d24e429a; session <审计会话>; not gate promotion`

## Stack Layout Summary

```
rsp+38h  v14[360]   request context copy A
rsp+1A0h v15[360]   request context copy B (error path)
rsp+308h v16[512]   main input DTO block (memmove'd from a1, 520 bytes)
rsp+508h v17        skill list ptr / lock result
rsp+510h v18        restore_skill_mutex_read result tag (2=found)
rsp+518h v19        backup record ptr
rsp+520h v20        backup record len
rsp+528h v21        backup record cap
rsp+748h v22[384]   state context copy (memmove'd from a1+520, 400 bytes)
rsp+8C8h v23        response context
rsp+8D8h v26[384]   param parse result
rsp+A68h v27        command name ptr
rsp+A70h v28        command name len / response tag
rsp+CA0h v32..v37   backup record oword copies
rsp+CF8h v38[2]     installed skills query result (oword pair)
rsp+D40h v42,v43    cleanup loop counters (skill list vec)
```

## Control Flow Summary

```
entry
  ├─ memmove input DTO (520B) + state context (400B)
  ├─ pending_auto_switch_state_lock_acquire_111 → if acquired: skip query
  ├─ query_installed_skills_with_repo_111 → tag!=6 → error response
  ├─ remove_skill_parse_id_param_111 → parse 'id' param
  ├─ tag==6 (ok) → restore_skill_mutex_read_111(&v18, skill_list_ptr, &backup_id_slice)
  │   └─ v18==2 (found) → copy skill dir bytes, tag response=3 (Ok)
  │   └─ v18!=2 → forward non-found result
  ├─ cleanup: drop skill list vec (96B per element, sub_14033AB50)
  └─ sub_140042650(v16) → serialize + send response
```

## Delta vs 1.0.9

1.0.9 `restore_skill_backup` returned `{status, message}` only.
1.1.1 returns `{restoredSkill, backup, rollbackBackup}` and adds:
- UUID generation per backup record (BCryptGenRandom via ProcessPrng)
- CopyFileExW backup-before-restore file copy
- JSON backup record persistence to snooze dir
- rollbackBackup field tracking restore reversibility
