# set_auto_switch — Owner Record (GOLD LEAF)
# session: wf-aimami111-delta-20260618-goldleaf / machine: <本地机器>

## Identity

| Field           | Value                                             |
|-----------------|---------------------------------------------------|
| command         | `set_auto_switch`                                 |
| owner_fn        | `set_auto_switch_owner_sys`  (renamed in IDB)     |
| owner_va        | `0x1400286B0`                                     |
| size_bytes      | `0x501` (1281 bytes)                              |
| string_anchor   | `0x1412AC1F1` → `"set_auto_switch"`               |
| xref_from       | `0x140028732`                                     |
| idb             | `<本地路径>|
| sha_context     | `d24e429a`                                        |
| platform        | `windows-x64`                                     |

## IPC Arg Keys (dim2 confirmed)

| Key       | 逆向分析 tag | Wire type | IPC string VA |
|-----------|---------|-----------|---------------|
| `repo`    | 15      | str       | 0x1412AC6D1   |
| `enabled` | 7       | bool      | 0x1412AC720   |

Note: frontend CCF sends only `{enabled: bool}` — `repo` is resolved server-side
from relay context. Tag=15 is the resolver blob key; tag=7 is the args-blob bool field.

## Delta vs 1.0.9

`set_auto_switch` in 1.0.9 was a minimal stub without:
- Windows schtask lifecycle (create/query/delete `CodexMateAutoSwitch`)
- Snooze-file management (`DeleteFileW` + `CopyFileExW` on `auto-switch-snooze.json`)
- Pending-switch concurrency guard (spinlock + poison check)
- JSON persist schema `{updatedAt, activeAccountKey, items}` at `relay_manager_state+36`
- Bundle name `"dev.aimami.auto-switch"` (new in 1.1.1)
- `enabled=false` explicit disable path with dual snooze-file deletion

All 10 callees listed in `call-tree.md` prefixed `DELTA-NEW` are absent in 1.0.9.

## Key New Callees (dim3 anchors)

| Callee                                    | VA            | Role                           |
|-------------------------------------------|---------------|--------------------------------|
| `pending_auto_switch_state_lock_acquire_111` | 0x14006EDC0 | Pre-flight CAS spinlock guard  |
| `auto_switch_pending_state_resolve_111`   | 0x140785980   | Spinlock state reader          |
| `auto_switch_apply_core_111`              | 0x1401A4EB0   | Core apply (all side-effects)  |
| `auto_switch_state_persist_json_111`      | 0x1401A6C10   | JSON persist to relay DB       |
| `daemon_schtasks_register_sys`            | 0x14079EF00   | schtasks /Create               |
| `schtask_codexmate_autoswitch_query_111`  | 0x14079F5C0   | schtasks /Query                |
| `schtask_codexmate_autoswitch_delete_111` | 0x14079F480   | schtasks /Delete               |
| `snooze_file_delete_111`                  | 0x14108BF60   | DeleteFileW + EACCES fallback  |
| `snooze_file_backup_copy_111`             | 0x14108C340   | CopyFileExW backup             |
| `exe_path_get_for_schtask_111`            | 0x141089D70   | GetModuleFileNameW             |

## IDB Inline Evidence

```
; set_auto_switch_owner_sys (renamed from cmd_set_auto_switch_111)
; [0x1400286B0] gold-leaf for set_auto_switch; sha d24e429a;
;               session wf-aimami111-delta-20260618-goldleaf; not gate promotion
```
