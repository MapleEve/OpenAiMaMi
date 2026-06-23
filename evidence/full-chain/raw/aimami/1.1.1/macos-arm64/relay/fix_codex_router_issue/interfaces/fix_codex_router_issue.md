# Interface — fix_codex_router_issue (AiMaMi 1.1.1 macOS)

## Request DTO

argKeys: [itemId]

```json
{ "itemId": "all" }
```

or

```json
{ "itemId": "config_stale" }
```

Known itemId values (from byte-literal comparison in fix_issue 1.1.1):

| itemId | len | Status | Handler |
|---|---|---|---|
| `"all"` | 3 | confirmed | fix_all |
| `"config_stale"` | 12 | confirmed | fix_config_stale_text |
| `"auth_integrity"` | 14 | confirmed | fix_auth_integrity |
| `"config_third_party"` | 18 | confirmed (string ref) | resync_codex_config |
| `"config_omit_syntax"` | 18 | confirmed (string ref) | resync_codex_config |
| `"db_orphan_providers"` | 19 | confirmed (string ref 0x1011588c4) | resync_codex_config |
| `"catalog_path_validity"` | 21 | confirmed (string ref 0x101158c9c) | resync_codex_config |
| `"config_profile_conflict"` | 23 | confirmed (string ref 0x101158da2) | resync_codex_config |
| `"thread-router-migrations"` | 24 | NEW in 1.1.1 (string ref 0x1011582c3) | resync + restart |
| `"relay-state-cache.json"` | 22 | NEW in 1.1.1 (string ref 0x1011582c3) | cache clear |
| `"residual_manifest"` | 17 | NEW in 1.1.1 (string ref 0x101158513); triggers stop+launch | process restart |
| `"residual_cache"` | 14 | NEW in 1.1.1 (string ref 0x1011582c3) | cache clear |
| `"current.json"` | 12 | NEW in 1.1.1 (string ref 0x101158513) | manifest handling |

NOTE: "residual_manifest" (len==17) in FixResult triggers the stop_codex_for_file_edit + launch_codex_app sequence.

## Response DTO

`CoreEnvelope<Vec<FixResult>>`

Success: discriminant=10 → Vec<FixResult>, each entry is a string message:
- fix_config_stale_text success: 35B UTF-8 Chinese (路由器配置修复成功 message)
- fix_auth_integrity success: FixResult with itemId="auth_integrity" (14B), message=87B UTF-8 Chinese "无可用备份。请在 AiMaMi 账号管理中重新登录 ChatGPT 以恢复 auth.json" (err path) OR path-formatted success message
- launch_codex_app success: 37B UTF-8 success (含 Codex 重启)
- launch_codex_app failure: formatted CoreError string
- stop failure: CoreError formatted string

Err: discriminant=0x8000000000000000 → CoreError (fix_all or fix_issue error)

## Error Paths

- fix_config_stale_text: CoreError::Io(2) — read_to_string or atomic_write failure
- fix_auth_integrity: CoreError::Io — metadata/read_dir/fs::copy failure; no-dir path returns Ok(FixResult{itemId="auth_integrity", msg="无可用备份..."})
- stop_codex_for_file_edit: CoreError (propagated, added to Vec not returned as Err)
- launch_codex_app: "Codex launch timed out" (22B) OR io error from open cmd
- resync_codex_config: CoreError from resolve_api_slots / remove_catalog / write_catalog / apply_codex_state

## Side Effects (ordered)

1. CodexPaths::resolve_codex_home + from_home (FS path resolution, pure)
2. RelayManager::snapshot (mutex lock/unlock + clone, read-only)
3. is_process_running: process check (read-only)
4. fix_issue/fix_all dispatch:
   - fix_config_stale_text: read_to_string + strip stale markers + atomic_write (FS write)
   - resync_codex_config: resolve_api_slots + remove_catalog + write_catalog + apply_codex_state (FS write)
   - fix_auth_integrity: read_dir + sort + per-file serde parse + is_known_placeholder_token + fs::copy (conditional FS write)
5. Conditional (is_process_running was true AND residual_manifest in results):
   - stop_codex_for_file_edit: request_codex_app_quit + poll(50ms) + kill_codex_processes_until_clear (process kill)
   - launch_codex_app: open -b com.openai.codex/com.openai.Codex → poll is_process_running 3s/80ms (process spawn)
6. Free itemId string (dealloc)

## Config File Markers (fix_config_stale_text)

Start marker (64B): `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)`
End marker (39B):   `# <<< aimami-relay codex-router top end`

## launch_codex_app Bundle IDs

Primary:   `com.openai.codex` (16B @ 0x10114f1a0)
Secondary: `com.openai.Codex` (16B @ 0x10114f1b0)
App paths checked: `/Applications/Codex.app` (23B) + `~/Applications/Codex.app` (via dirs::home_dir)
Timeout: 3 seconds; poll interval: 80ms
Timeout error: "Codex launch timed out" (22B)
