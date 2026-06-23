# Interface — load_mcp_servers (AiMaMi 1.1.1 win64)

session: <审计会话>
machine: <本地机器>
sha: d24e429a

## IPC Interface (dim1 + dim2)

### Frontend invoke (dim1 — confirmed)

Source: `assets/index-DdcCOEJG.js` line 86
Kind: `tauriInvokeWrapper` (callee alias `ne`)
argKeys: `[]`
params: `()`
→ **Zero arguments from frontend. No payload object.**

### Rust command signature (dim2)

```rust
// Reconstructed from decompile — argKeys=[] confirmed by ipc-contracts.jsonl
#[tauri::command]
async fn load_mcp_servers(/* no user args */) -> Result<SkillSnapshot, LoadMcpError>
```

Internal context passed via Tauri command state/resolver, not as explicit args.

## Return DTO — SkillSnapshot (dim4)

Serialized by `serialize_skill_snapshot_json_111 @ 0x140197420`.
Top-level struct size: ~0x390 bytes (0x398 copy block).

### SkillSnapshot JSON shape

```json
{
  "writtenAt": "<ISO8601 timestamp>",
  "snapshotProgressive": <u32>,
  "usageAnalytics": { ... },
  "mcpServers": [ ... ],
  "installedSkills": [ ... ]
}
```

### McpServer item (stride = 224 bytes)

| JSON key | Struct offset | Type |
|----------|--------------|------|
| `name` | +0 | String |
| `transport` | +217 | u8 enum |
| `enabled` | +216 | u8 bool |
| `sourcePath` | +24 | String |
| `command` | +72 | Option\<String\> |
| `args` | +48 | Option\<Vec\<String\>\> |
| `url` | +96 | Option\<String\> |
| `headers` | +120 | HashMap\<String,String\> |
| `environment` | +168 | HashMap\<String,String\> |

**NEW in 1.1.1**: `transport` (+217), `enabled` (+216) — not in 1.0.9 snapshot.

### InstalledSkill item (stride = 184 bytes)

| JSON key | Struct offset | Type |
|----------|--------------|------|
| `id` | +16 | String |
| `name` | +40 | String |
| `title` | +136 | Option\<String\> |
| `summary` | +160 | Option\<String\> |
| `relativePath` | +64 | String |
| `directoryPath` | +88 | String |
| `skillFilePath` | +112 | String |
| `updatedAt` | +0 | timestamp |

**NEW in 1.1.1**: `title` (+136), `summary` (+160) — not in 1.0.9 snapshot.

### UsageAnalytics (NEW in 1.1.1 — not in 1.0.9)

| JSON key | Struct offset | Sub-type |
|----------|--------------|----------|
| `today` | +80 | TodayStats |
| `sessionStats` | +24 | SessionStats |
| `dailyActivity` | +0 | DailyActivity |

## Error paths

| Code | Condition | Source |
|------|-----------|--------|
| Lock poisoned | `pending_auto_switch_state_lock_acquire_111` → poisoned mutex branch | `aPoisonedLockAn` string |
| SkillQuery fail | `query_installed_skills_with_repo_111` tag≠6 | early-exit to IPC resolver |
| TOML parse fail | `mcp_config_toml_parse_and_remove_111` → `*dword != 10` | drop+Err |
| Path gate fail | `relay_config_check_parent_dirs_sys` → non-zero | Err(2=IoError) |
| Serialize fail | `serialize_skill_snapshot_json_111` → Err flag | Err(3=SerializationFailed) |
| Write fail | `win32_file_write_bytes_111` → non-null | Err(2=IoError) |

## Side effects

1. **Disk read** — `win32_file_read_bytes_111 @ 0x141093260` reads existing snapshot JSON
2. **TOML parse+remove** — `mcp_config_toml_parse_and_remove_111 @ 0x1406790d0` reads & rewrites MCP config TOML (removes target section via atomic write `relay_atomic_write_leaf_sys`)
3. **Disk write** — `win32_file_write_bytes_111 @ 0x141093710` writes new snapshot JSON

All three side effects are NEW relative to 1.0.9.
