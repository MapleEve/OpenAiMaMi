# load_quota_history — Owner Summary (Windows x64)
# session: wf-aimami111-delta-20260618-goldleaf
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_gold_leaf

## Identity

| field | value |
|---|---|
| command | `load_quota_history` |
| owner VA | `0x140020E40` |
| owner size | `0x511` bytes |
| renamed in IDB | `load_quota_history_handler_111` |
| IPC registration | `tauri_ipc_main_dispatcher_sys @ 0x14000db63` |
| vtable entries | `0x1414fd1e4`, `0x14189e824` |
| platform | windows-x64 |
| binary | AiMaMi 1.1.1 win64.exe |
| baseline | 1.0.9 (VA `0x1402738b0`) |

## Delta vs 1.0.9

delta_class: **body_changed** (command present in both versions; behavior significantly changed)

The 1.0.9 version returned all quota history entries for the given accountKey with no time filter.
1.1.1 adds:
1. **7-day retention window** — cutoff = `now_timestamp - 86400 * 7`; entries older than 7 days silently excluded.
2. **Per-accountKey filtering** — `sub_1402002F0` receives accountKey ptr+len as `a5`/`a6`; if entry's key != accountKey or entry timestamp < cutoff → excluded.
3. **Max 2000 entries with trim-rewrite** — if accumulated entries >= 0x7D0, file is sorted oldest-first, excess tail dropped, file rewritten via `win32_file_write_bytes_111`.
4. **Larger DTO** — `QuotaHistoryPoint` struct grew from 1.0.9 size to ~953 bytes (24 string fields + bool flag at +952).

Risk: **high** — consumers expecting full quota history receive only last 7 days; older entries silently dropped; invisible from IPC API surface.

## Payload

| key | type | source offset |
|---|---|---|
| `accountKey` | str (ptr+len+cap) | payload_ctx +920/+928/+936 |
| `repo` | str (ptr+len+cap) | resolved from skill store via `query_installed_skills_with_repo_111` |

Note: frontend sends only `{accountKey:t}`; `repo` is resolved server-side from installed skill store.

## Persistence

| attribute | value |
|---|---|
| file | `quota-history.jsonl` |
| format | NDJSON (newline-delimited JSON) |
| path resolution | `snooze_file_open_111 (0x14108C6F0)` → `win32_path_canonicalize_111 (0x1410908E0)` over appdata base |
| path string VA | `0x1412ec185` |
| max entries | 2000 (0x7D0) |
| trim trigger | `v80 >= 0x7D0` |
| trim action | sort oldest-first → drop tail → `win32_file_write_bytes_111` rewrite |

## Side Effects

| effect | function | VA |
|---|---|---|
| file read | `win32_file_read_bytes_111` | `0x141093260` |
| file write (trim only) | `win32_file_write_bytes_111` | `0x141093710` |
| lock acquire | `pending_auto_switch_state_lock_acquire_111` | `0x14006EDC0` |
| mutex impl | `_InterlockedCompareExchange8` / `WakeByAddressSingle` | WinAPI |
| HTTP | none | — |
| sidecar | none | — |

## Response Serialization

Function: `relay_response_serialize_json_111 @ 0x1402275B0`

JSON envelope:
```json
{
  "schemaVersion": <u32 @+96>,
  "success": <bool @+100>,
  "code": <i32 @+0>,
  "message": <str @+24>,
  "warnings": <vec @+48>,
  "data": <vec @+72>
}
```

Schema version string VA: `0x1412be8fd`

## IDB Annotations Applied (this session)

```
rename:   0x140020E40  load_quota_history_owner_sys
comment:  0x140020E40  "gold-leaf for load_quota_history; sha d24e429a; session wf-aimami111-delta-20260618-goldleaf; not gate promotion"
```
