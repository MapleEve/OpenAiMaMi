# get_relay_active — 1.1.1 Windows x64 Reverse Evidence
session: <审计会话>
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: sub_14001B280 @ 0x14001B280 (namespace=manager)
owner_1_0_9: get_relay_active_owner_sys (1.0.9 windows/relay/get_relay_active call-tree)

### Call-tree comparison (normalized)
- D1: both have relay-active owner function
- D2: 1.1.1 adds `run_codex_router_diagnostics_owner_sys` + `query_installed_skills_with_repo_111` gate layer — this is the 1.1.1 universal gate infra, NOT app logic. Core data path D2 callee: `sub_140217330` (relay active bool read) = structurally same as 1.0.9 relay active read
- D3: `sub_140217330` → `sub_1406D6410`(relay state read lock) — in 1.0.9 this was `sub_140298200`(same relay state lock); func renamed/VA-relocated, body identical (both wrap RwLock read on relay state + extract active bool)
- D4: lock ops (sub_14124A510/B1D0/A5D0), relay state snapshot read — same as 1.0.9 `sub_14044A4B0`/`sub_14043B940`
- D5: `load_mcp_servers_read_existing_snapshot_111` (file persistence read) + `sub_14026A280` (bool extract) — both terminal, same pattern as 1.0.9

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows/relay/get_relay_active: readyToImplement=true (confirmed by AI.md "strictImplementationUse | dim4 closed")
dim6_inherited=1.0.9
