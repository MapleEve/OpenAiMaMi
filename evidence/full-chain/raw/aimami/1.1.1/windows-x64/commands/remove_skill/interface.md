# interface.md — remove_skill (win64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260618-goldleaf
sha: d24e429a

## IPC Command Name

`"remove_skill"` (string ref @ 0x1412AC18A)

## Frontend Invoke

Frontend calls `invoke("remove_skill", { repo: string, id: string })`.
Confirmed via:
- `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0 dispatches to owner at xref 0x14000EB7B
- param keys `"repo"` (0x1412AC6D1), `"id"` (0x1412AC77D) extracted in owner body

## Input Args

| param | type | extractor |
|---|---|---|
| `repo` | String | `query_installed_skills_with_repo_111` reads via param key "repo" |
| `id` | String | `remove_skill_parse_id_param_111` reads via param key "id"; discriminant 6 = Some(String) |

## Output DTO (success)

Serialized by `relay_response_build_remove_skill_reply_111` @ 0x140227320
Inner payload by `remove_skill_backup_response_ser_111` @ 0x14020EF10

```json
{
  "schemaVersion": <u32>,
  "success": true,
  "code": <i32>,
  "message": <String>,
  "warnings": [...],
  "removedSkillID": <String>,
  "backup": {
    "backupID": <uuid-string>,
    "timestamp": <u32>,
    "fileCount": <u32>
  },
  "remainingInstalledCount": <u32>
}
```

String refs confirming DTO fields:
- `"removedSkillID"` @ 0x1412C057D
- `"backup"` @ 0x1412C0577
- `"remainingInstalledCount"` @ 0x1412C058B
- `"schemaVersion"` @ 0x1412BE8FD
- `"success"` @ 0x1412C06D3
- `"code"` @ 0x1412C0526
- `"message"` @ 0x1412C052A

## Output DTO (error paths)

| condition | response |
|---|---|
| auto-switch lock blocked | error via `has_notch_invoke_resolver_respond` (no skill touched) |
| repo query: skill not found | error via `has_notch_invoke_resolver_respond` |
| id param missing/invalid | error via `has_notch_invoke_resolver_respond` |
| skill_backup_replace_111 error code 7 | `{success:false, code:7, message:"Skill not found"}` |
| backup DB write failure | propagated Err, skill NOT deleted (backup-before-delete guarantee) |
| dir open failure | `{success:false, code:2, message:<err>}` |

## Delta vs 1.0.9

- Interface keys `{id, repo}` unchanged from 1.0.9
- Response shape unchanged (`removedSkillID`, `backup`, `remainingInstalledCount`)
- NEW: `backup` object now always written (DB record created before FS delete) — previously backup record creation was conditional/absent in some paths
- NEW: If auto-switch transition is in progress, command returns error instead of proceeding
