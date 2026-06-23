# call-tree — delete_skill_backup (AiMaMi 1.1.1 win64) — GOLD LEAF

session: <审计会话>
platform: windows-x64
delta_class: integrity_recovered
idb_saved: true

---

## Call Tree (depth ≥ 5 from IPC entry)

```
tauri_ipc_main_dispatcher_sys  (0x14000D2A0)   [IPC router; call at 0x14000F754]
└─ delete_skill_backup_owner_sys  (0x140024D90)   depth=1  [IPC handler / owner]
   ├─ sub_141212FB0  (memcpy 520B/400B)            depth=2  [TERMINATED: stdlib memcpy]
   ├─ pending_auto_switch_state_lock_acquire_111  (0x14006EDC0)  depth=2  [TERMINATED: spinlock dispatch table lookup]
   │    └─ WakeByAddressSingle  (Win32)             depth=3  [leaf: Win32 sync primitive]
   ├─ query_installed_skills_with_repo_111  (0x141214620)  depth=2  [TERMINATED: generic serde field validator]
   ├─ remove_skill_parse_id_param_111  (0x1402FED40)  depth=2  [TERMINATED: generic id-string serde extractor]
   │    └─ sub_1402F9EB0  (enum discriminant check)  depth=3  [leaf]
   ├─ sub_14080C3C0  (Tauri error response emitter)  depth=2  [TERMINATED: generic Tauri infra]
   └─ delete_skill_backup_async_wrapper_111  (0x1407DC490)  depth=2  [async spawn wrapper]
        ├─ sub_14124A510  (spinlock spin-wait)        depth=3  [TERMINATED: compiler sync]
        ├─ sub_1410B1930  (RwLock poison-check)       depth=3  [TERMINATED: std sync poison guard]
        │    └─ sub_14124BFE0  (panic fmt)            depth=4  [leaf]
        ├─ delete_skill_backup_core_111  (0x1406EF5E0)  depth=3  [core FS logic]
        │    ├─ sub_14107A2D0  (path join OsString)   depth=4  [TERMINATED: generic path helper]
        │    │    ├─ sub_1410A1B60  (OsString alloc)  depth=5  [leaf: allocator]
        │    │    └─ sub_141088630  (path push)        depth=5  [leaf: OsString push_os_str]
        │    ├─ snooze_file_open_111  (UTF8→UTF16 path adapter / CreateFileW)  depth=4  [TERMINATED: OS path adapter]
        │    │    ├─ sub_1410938D0  (home/cwd resolver)  depth=5  [leaf]
        │    │    └─ sub_1410908E0  (UTF-16 encode)   depth=5  [leaf]
        │    ├─ sub_14108C150  (path-exists/metadata query)  depth=4  [TERMINATED: FS leaf]
        │    │    └─ sub_14108E8E0  (metadata query)  depth=5  [leaf]
        │    └─ skill_backup_store_load_and_sort_all_111  (0x1406ED6C0)  depth=4  [DEEP FS WORKER — fully enumerated]
        │         ├─ snooze_file_open_111  (UTF8→UTF16 / CreateFileW)  depth=5  [TERMINATED: same adapter]
        │         ├─ sub_14108C7E0  (ReadDirectory open / DirEntry iterator init)  depth=5  [TERMINATED]
        │         ├─ sub_140672D70  (DirEntry next / ReadDirectoryChangesW adapter)  depth=5  [TERMINATED]
        │         ├─ sub_141082A50  (DirEntry name → OsStr/String)  depth=5  [TERMINATED]
        │         ├─ sub_14107A370  (is_dir check / metadata bit)  depth=5  [TERMINATED]
        │         ├─ sub_14107A2D0  (path join "metadata.json", len=13)  depth=5  [TERMINATED: generic path]
        │         ├─ win32_file_read_bytes_111  (141093260) (fs::read / CloseHandle)  depth=5  [TERMINATED: FS leaf]
        │         │    └─ CloseHandle  (Win32)         depth=6  [leaf]
        │         ├─ sub_140004AA0  (remove_dir_all adapter)  depth=5  [TERMINATED: FS leaf]
        │         │    └─ sub_1407037D0  (drop/cleanup on Err)  depth=6  [leaf]
        │         ├─ sub_141095530  (serialize SkillBackupEntry to JSON)  depth=5  [TERMINATED: serde ser]
        │         ├─ sub_141220A60  (Vec::reserve/grow)  depth=5  [TERMINATED: allocator]
        │         ├─ sub_141212FB0  (memcpy 152B struct into Vec slot)  depth=5  [TERMINATED: stdlib]
        │         ├─ sub_1401DB8D0  (sort_unstable n<21 / insertion sort)  depth=5  [TERMINATED: stdlib sort NEW 1.1.1]
        │         └─ sub_1407B37B0  (sort_unstable n>=21 / pdq sort)  depth=5  [TERMINATED: stdlib sort NEW 1.1.1]
        ├─ sub_140215BF0  (response struct builder, inlines "ok"/"Success")  depth=3  [TERMINATED: response builder]
        │    └─ sub_140001360  (small str alloc)  depth=4  [leaf]
        ├─ sub_140262BA0  (JSON comma+colon field separator)  depth=3  [TERMINATED: serde helper]
        │    └─ delete_skill_backup_response_ser_111  (0x140211890)  depth=4  [**NEW 1.1.1** response serializer]
        │         ├─ sub_14025C400  ("deletedBackupID" field ser, len=15)  depth=5  [TERMINATED: serde write leaf]
        │         ├─ sub_140261480  ("remainingBackupCount" field ser, len=20)  depth=5  [TERMINATED: serde write leaf]
        │         └─ sub_141221220  (writer buf grow)  depth=5  [TERMINATED: alloc]
        ├─ drop_result_inner_111  (0x140809B30) (drop/free error variant)  depth=3  [TERMINATED: drop glue]
        └─ WakeByAddressSingle  (Win32)  depth=3  [leaf: resolve Tauri async future]
```

---

## Edge Count

Total directed call edges: 42 (depth range: 1–6, all branches terminated).

---

## Termination Reasons

| Address | Name | Termination Reason |
|---|---|---|
| 0x14006EDC0 | pending_auto_switch_state_lock_acquire_111 | Compiler concurrency: InterlockedCmpExch + hash-map probe. Not app logic. |
| 0x141214620 | query_installed_skills_with_repo_111 | Generic Tauri serde field validator. Shared across all commands. |
| 0x1402FED40 | remove_skill_parse_id_param_111 | Generic id-string extractor. App logic in caller's discriminant branch. |
| 0x14107A2D0 | sub_14107A2D0 | Generic OsString path-join. Stdlib. |
| 0x14108C6F0 | snooze_file_open_111 | UTF-8→UTF-16 + CreateFileW path adapter. Windows FS primitive. |
| 0x14108C150 | sub_14108C150 | fs::metadata / path-exists query. FS leaf. |
| 0x1406ED6C0 | skill_backup_store_load_and_sort_all_111 | **Fully enumerated**: all sub-callees are FS/sort/alloc stdlib. App logic complete. |
| 0x140215BF0 | sub_140215BF0 | Inline ok/Success response struct builder. Constants visible in async_wrapper body. |
| 0x140211890 | delete_skill_backup_response_ser_111 | **NEW 1.1.1 leaf**: all fields resolved (deletedBackupID, remainingBackupCount). Real body decompiled. |
| 0x140262BA0 | sub_140262BA0 | JSON separator emitter — body fully decompiled, terminates at response_ser_111. |

---

## Delta vs 1.0.9

| Dimension | 1.0.9 (macos) | 1.1.1 (windows) | Delta |
|---|---|---|---|
| Request DTO | `{repo, id}` | `{repo, id}` | **same** |
| Core path logic | skill-backups/id delete + metadata check | same | **same** |
| Not-found error | "Backup not found: \<id\>" | "Backup not found: \<id\>" | **same** |
| Success response | `{status:"ok", message:"Success"}` | `{deletedBackupID:str, remainingBackupCount:u32}` | **CHANGED** |
| Response serializer | bare ok/Success literals (inline) | NEW dedicated ser `0x140211890` via `sub_140262BA0` | **NEW CALLEE** |
| Post-delete state | return count (basic) | sort_unstable remaining Vec<SkillBackup> (n<21 insertion / n≥21 pdq) | **NEW LOGIC** |
| Side effects | FS remove only | FS remove + Vec<SkillBackup> rebuild + sort | **EXPANDED** |
| Error strings | not observed | "replaceSKILL.md", "Invalid skill source" | **NEW ERROR PATHS** |
| dim3 max depth | N/A | 6 (CloseHandle / drop_cleanup) | achieved |
