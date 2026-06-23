# Call Tree — load_mcp_servers (win64 1.1.1)

session: <审计会话>
machine: <本地机器>
delta_class: integrity_recovered

```
tauri_ipc_main_dispatcher_sys               0x14000d2a0
└── load_mcp_servers_handler_111            0x14001c4c0  [OWNER]
    ├── pending_auto_switch_state_lock_acquire_111  0x14006edc0  [named 1.0.9]
    ├── query_installed_skills_with_repo_111        0x141214620  [named 1.0.9]
    │   └── skill_store_get_all_111                 0x14106d960  [named]
    ├── load_mcp_servers_write_snapshot_111         0x1401c42c0  [NEW delta]
    │   ├── relay_config_check_parent_dirs_sys      0x1406f2870  [path gate]
    │   ├── load_mcp_servers_read_existing_snapshot_111  0x1401bf000
    │   │   └── win32_file_read_bytes_111           0x141093260  [side-effect: disk read]
    │   ├── system_time_precise_u32_111             0x14107b7e0  [timestamp]
    │   ├── elapsed_since_ts_111                    0x14107b790  [timeout gate 500ms]
    │   ├── serialize_skill_snapshot_json_111       0x140197420  [JSON build]
    │   │   ├── serialize_usage_analytics_field_111 0x140266160
    │   │   │   └── serialize_usage_analytics_111   0x1401c20c0
    │   │   │       fields: today(+80), sessionStats(+24), dailyActivity(+0)
    │   │   ├── serialize_mcp_servers_container_111 0x14020f8d0
    │   │   │   └── serialize_mcp_servers_array_111 0x140259530
    │   │   │       └── serialize_mcp_server_item_111  0x14020e1a0  [stride=224]
    │   │   │           fields: name, transport, enabled, sourcePath,
    │   │   │                   command, args, url, headers, environment
    │   │   └── serialize_installed_skills_container_111  0x14020e500
    │   │       └── serialize_installed_skills_array_111  0x140269650
    │   │           └── serialize_installed_skill_item_111  0x140210310  [stride=184]
    │   │               fields: id, name, title, summary, relativePath,
    │   │                       directoryPath, skillFilePath, updatedAt
    │   └── win32_file_write_bytes_111              0x141093710  [side-effect: disk write]
    └── load_mcp_servers_result_dispatch_111        0x140831bd0
        └── sub_14080C3C0                           0x14080c3c0  [IPC resolver vtable +24]
```

## Terminated Reasons

| Node | Reason |
|------|--------|
| `pending_auto_switch_state_lock_acquire_111` | leaf (previously reversed in 1.0.9) |
| `skill_store_get_all_111` | leaf (previously named in 1.0.9) |
| `relay_config_check_parent_dirs_sys` | leaf (named, path canonicalization gate) |
| `win32_file_read_bytes_111` | leaf (named, OS syscall wrapper) |
| `win32_file_write_bytes_111` | leaf (named, OS syscall wrapper) |
| `system_time_precise_u32_111` | leaf (named) |
| `elapsed_since_ts_111` | leaf (named) |
| `sub_14080C3C0` | depth=5 reached; IPC resolver send via vtable |

## Delta vs 1.0.9

| Change type | Description |
|-------------|-------------|
| NEW callee chain | `load_mcp_servers_write_snapshot_111` entire branch is new (not present 1.0.9) |
| NEW side-effect | `win32_file_write_bytes_111` — snapshot now persisted to disk |
| NEW side-effect | `win32_file_read_bytes_111` — reads existing snapshot before writing |
| NEW DTO fields | McpServer: `transport`(+217), `enabled`(+216) — explicit new fields |
| NEW DTO fields | InstalledSkill: `title`(+136), `summary`(+160) — new optional fields |
| NEW DTO field | SkillSnapshot: `usageAnalytics`(+696) — new top-level field |
| STRIDE change | McpServer item stride 224 (was not present in 1.0.9 snapshot) |
| STRIDE change | InstalledSkill item stride 184 (was not present in 1.0.9 snapshot) |
| Path gate | `relay_config_check_parent_dirs_sys` added — path canonicalization before write |
| Timeout gate | `elapsed_since_ts_111` with 500ms threshold — new freshness check |
