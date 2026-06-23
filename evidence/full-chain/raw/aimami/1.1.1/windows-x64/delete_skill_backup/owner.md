# owner — delete_skill_backup (AiMaMi 1.1.1 win64) — GOLD LEAF

session: <审计会话>
machine: <本地机器>
platform: windows-x64
idb: <本地路径>
sha: d24e429a

---

## Owner Function

| Field | Value |
|---|---|
| VA | 0x140024D90 |
| IDB name | delete_skill_backup_owner_sys |
| Size | 0x511 bytes |
| Role | IPC handler + serde entry |
| Tauri command | `delete_skill_backup` |
| Command string VA | 0x1412AC1AA (len=19) |
| Registered by | tauri_ipc_main_dispatcher_sys (0x14000D2A0) at call site 0x14000F754 |

---

## dim1: IPC Registration Evidence

```
xrefs_to(0x140024D90):
  code:  0x14000F754  fn=tauri_ipc_main_dispatcher_sys (0x14000D2A0, size=0x45CE)
  data:  0x1414FDF5C  (dispatch table / jump table)
  data:  0x14189EB90  (vtable entry)
```

---

## dim2: Argument Extraction

| Field | Key string VA | Key len | Extracted by |
|---|---|---|---|
| repo | 0x1412AC6D1 ("repo") | 4 | query_installed_skills_with_repo_111 (0x141214620) |
| id | 0x1412AC77D ("id") | 2 | remove_skill_parse_id_param_111 (0x1402FED40) |

Extraction pattern: v22=command_str, v23=key struct → serde helper → discriminant check (6=Ok, else error emit via sub_14080C3C0).

---

## Function Map

| VA | IDB Name | Size | Role | Delta |
|---|---|---|---|---|
| 0x140024D90 | delete_skill_backup_owner_sys | 0x511 | IPC handler | renamed gold-leaf |
| 0x1406EF5E0 | delete_skill_backup_core_111 | 0x2C2 | FS core logic | unchanged structure |
| 0x1407DC490 | delete_skill_backup_async_wrapper_111 | 0x475 | async spawn wrapper | same pattern |
| 0x140211890 | delete_skill_backup_response_ser_111 | 0x118 | response serializer | **NEW IN 1.1.1** |
| 0x140262BA0 | sub_140262BA0 | 0xF9 | JSON comma+colon helper | shared utility |
| 0x1406ED6C0 | skill_backup_store_load_and_sort_all_111 | large | dir-enumerate/delete/sort | renamed gold-leaf |

---

## 逆向分析 Annotations Written

| Address | Action |
|---|---|
| 0x140024D90 | renamed → delete_skill_backup_owner_sys; set_comments gold-leaf evidence |
| 0x1406EF5E0 | set_comments gold-leaf evidence |
| 0x1407DC490 | set_comments gold-leaf evidence |
| 0x140211890 | set_comments gold-leaf evidence |
| 0x1406ED6C0 | renamed → skill_backup_store_load_and_sort_all_111; set_comments |
| 0x140262BA0 | set_comments gold-leaf evidence |
| IDB save | <本地路径>|
