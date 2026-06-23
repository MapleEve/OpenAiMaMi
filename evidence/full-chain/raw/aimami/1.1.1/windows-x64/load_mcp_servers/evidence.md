# Evidence — load_mcp_servers (AiMaMi 1.1.1 win64)

session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
delta_class: integrity_recovered

## 1. String Anchor

String `load_mcp_servers` found at `0x1412ac10f`.
Single xref from `0x14001c4c0` (data ref, within `load_mcp_servers_handler_111`).
Usage: trace span name — `v19 = (__int64)aLoadMcpServers; // 0x14001c547`.

## 2. Call Chain to IPC Dispatcher

```
tauri_ipc_main_dispatcher_sys @ 0x14000d2a0
  branch @ 0x14000fb74 -> 0x14001c4c0
```

Confirmed by xrefs_to on owner VA.

## 3. DTO Field Evidence (string literals in binary)

### SkillSnapshot JSON keys (serialize_skill_snapshot_json_111 @ 0x140197420)
- `"writtenAt"` @ 0x1412b70b4
- `"snapshotProgressive"` @ 0x1412b70bd
- `"usageAnalytics"` @ 0x1412b70d0
- `"mcpServers"` @ 0x1412b70de
- `"installedSkills"` @ 0x1412b70e8

### McpServer item keys (serialize_mcp_server_item_111 @ 0x14020e1a0)
- `"name"` @ 0x1412be5c6
- `"transport"` @ 0x1412c04d2  +217
- `"enabled"` @ 0x1412c04db   +216
- `"sourcePath"` @ 0x1412c04e2 +24
- `"command"` @ 0x1412bee80   +72
- `"args"` @ 0x1412c04ec      +48
- `"url"` @ 0x1412bdab1       +96
- `"headers"` @ 0x1412c04f0   +120
- `"environment"` @ 0x1412c04f7 +168

### InstalledSkill item keys (serialize_installed_skill_item_111 @ 0x140210310)
- `"id"` @ 0x1412bf091          +16
- `"name"` @ 0x1412be5c6        +40
- `"title"` @ 0x1412bdb7d       +136
- `"summary"` @ 0x1412c070a     +160
- `"relativePath"` @ 0x1412c054c +64
- `"directoryPath"` @ 0x1412c0711 +88
- `"skillFilePath"` @ 0x1412c071e +112
- `"updatedAt"` @ 0x1412be90a   +0

### UsageAnalytics keys (serialize_usage_analytics_111 @ 0x1401c20c0)
- `"today"` @ 0x1412b7440        +80
- `"sessionStats"` @ 0x1412b7445 +24
- `"dailyActivity"` @ 0x1412b7451 +0

## 4. Stride Evidence

`serialize_mcp_servers_array_111 @ 0x140259530`:
- Loop: `v17 = v9 + 224; for i = 224 * v10 - 224 ... i -= 224`
- McpServer item stride = **224 bytes**

`serialize_installed_skills_array_111 @ 0x140269650`:
- Loop: `v17 = v9 + 184; for i = 184 * v10 - 184 ... i -= 184`
- InstalledSkill item stride = **184 bytes**

## 5. Side-Effect Evidence

`load_mcp_servers_write_snapshot_111 @ 0x1401c42c0`:
- Calls `win32_file_read_bytes_111 @ 0x141093260` (reads existing snapshot)
- Calls `win32_file_write_bytes_111 @ 0x141093710` (writes new snapshot)
- Both confirmed named from prior reversals

## 6. Gate Evidence

`relay_config_check_parent_dirs_sys @ 0x1406f2870`:
- Called at `0x1401c46c5` before write
- Returns non-zero on path violation → early Err(2) return

`elapsed_since_ts_111 @ 0x14107b790`:
- Called twice in write_snapshot (once before read, once after)
- Threshold args: `0xD53E8000, 27111902` (~500ms)

## 7. IDB Write-back

All renamed functions and comments saved to `<本地路径>

## 8. Delta Classification

Previous status: `same` (misclassified in prior sweep).
Actual status: **integrity_recovered** — entire snapshot write/read chain absent from 1.0.9 call tree for this command. New persistent side-effects (disk read+write), new DTO fields (transport, enabled, title, summary, usageAnalytics), new gates (path canonicalization, freshness timeout).
