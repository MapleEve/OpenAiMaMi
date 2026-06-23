# owner.md — remove_skill (win64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
sha: d24e429a
produced: 2026-06-18

## Owner function

| field | value |
|---|---|
| name (IDB) | remove_skill_owner_sys |
| VA | 0x140022920 |
| size | 0x4C1 bytes |
| IPC dispatcher xref | tauri_ipc_main_dispatcher_sys @ 0x14000D2A0 (xref @ 0x14000EB7B) |
| command string | "remove_skill" @ 0x1412AC18A |

## Role

Top-level Tauri IPC command handler for `remove_skill`. Dispatched from `tauri_ipc_main_dispatcher_sys`. On entry:

1. Acquires `pending_auto_switch_state` mutex via `pending_auto_switch_state_lock_acquire_111` — **DELTA-NEW vs 1.0.9**: this guard did not exist in 1.0.9. If auto-switch is mid-transition the call blocks or returns error before touching skill data.
2. Calls `query_installed_skills_with_repo_111` to confirm the skill exists in the repo.
3. Calls `remove_skill_parse_id_param_111` to decode the `id` param (discriminant 6 = Some(String)).
4. Calls `sub_1407DB760` — async mutex wrapper around `skill_backup_replace_111` (the actual FS+DB operation).
5. On success path calls `sub_140839F20` → `relay_response_build_remove_skill_reply_111` to build JSON reply.
6. On any error path calls `has_notch_invoke_resolver_respond` (0x14080C3C0) directly.

## Delta vs 1.0.9

| aspect | 1.0.9 | 1.1.1 |
|---|---|---|
| handler VA | sub_14027CF80 (wrapper) → owner sub_140576AE0 | sub_140022920 (direct) |
| pending_auto_switch guard | absent | present — acquires lock at entry |
| interface {id, repo} | same | same |
| FS/repo operation | sub_140576AE0 inner | skill_backup_replace_111 via sub_1407DB760 |
| backup DB write before delete | absent in 1.0.9 | import_skill_build_record_db_write_111 called BEFORE removal |

## Risk

low-medium — new pending_auto_switch lock changes observable behavior: if auto-switch is mid-transition, remove_skill blocks or errors rather than proceeding immediately as in 1.0.9. Consumer must handle new error path.
