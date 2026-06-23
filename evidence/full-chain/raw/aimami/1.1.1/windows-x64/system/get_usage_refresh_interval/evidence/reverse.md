# get_usage_refresh_interval — 1.1.1 Windows x64 Reverse Evidence
session: <审计会话>
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: tauri_ipc_main_dispatcher_sys (inline branch @0x14000F219, case 26, len=0x1A)
owner_1_0_9: 1.0.9 windows/system/get_usage_refresh_interval (evidence.md present, readyToImplement=false)

### Call-tree comparison (normalized)
- D1: dispatcher inline branch present in both; 1.1.1 adds `pending_auto_switch_state_lock_acquire_111` + `query_installed_skills_with_repo_111` gate calls (universal 1.1.1 gate infra)
- D2: core read handler `sub_140789660`(usage_refresh_interval_read_owner) → async task spawn (`sub_1410B1930`) + hotspot interval read (`sub_1401B22F0`)
- D3: `sub_1401B22F0` → `codexmate_settings_hotspot_read_full_sys_111`(file read) + `sub_1400485A0`(value extract)
- D4: `codexmate_settings_hotspot_read_full_sys_111` → `win32_file_read_bytes_111`(file IO terminal) + `codexmate_settings_field_lookup_sys_111`(field parse)
- D5: `win32_file_read_bytes_111` → external_call terminal; `codexmate_settings_field_lookup_sys_111` → `hotspot_config_serde_json_deserialize_111` — same pattern as 1.0.9's settings read path
- No DTO key changes, no sidecar, no new persistence

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows/system/get_usage_refresh_interval: readyToImplement=false (evidence.md: "readyToImplement": false)
dim6_inherited: N/A (readyToImplement was false in 1.0.9)
