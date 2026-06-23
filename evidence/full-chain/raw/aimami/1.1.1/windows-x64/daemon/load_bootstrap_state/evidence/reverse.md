# load_bootstrap_state — 1.1.1 Windows x64 Reverse Evidence
session: <审计会话>
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: sub_140012F50 @ 0x140012F50 (namespace=repo)
owner_1_0_9: load_bootstrap_state_owner_sys (1.0.9 windows/daemon/load_bootstrap_state call-tree)

### Call-tree comparison (normalized)
- D1: owner function present in both; namespace=repo in both
- D2: 1.1.1 adds `pending_auto_switch_state_lock_acquire_111` gate; core: `sub_140787A20`(bootstrap state load) → `sub_140833D70`(IPC respond)
- D3: `sub_140787A20` → `load_mcp_servers_read_existing_snapshot_111`(MCP snapshot file read) + `sub_140213AD0`(field assemble); respond handler → `sub_1402253B0`(dto builder) → `has_notch_invoke_resolver_respond`(IPC terminal)
- D4: `load_mcp_servers_read_existing_snapshot_111` → `win32_file_read_bytes_111`(file IO) + `sub_141212FB0`(memcpy); `sub_1402253B0` → `sub_14025C400`(field read) + `relay_response_field_warnings_write_sys`(warnings field)
- D5: `sub_14026A280`(field extract terminal) + `sub_140362910`(MCP snapshot deser terminal) — 1.0.9 load_bootstrap_state call-tree had `load_bootstrap_state_core_serialize`+`repo_state_check`+`sub_140298200` as key named nodes; all same structural roles
- No new DTO fields, no new sidecar, no new persistence write path (read-only operation)

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows/daemon/load_bootstrap_state: readyToImplement status derived from call-tree (has implementation_leaf + ipc_resolve); evidence.md: "readyToImplement": false
dim6_inherited: N/A (readyToImplement was false in 1.0.9)
