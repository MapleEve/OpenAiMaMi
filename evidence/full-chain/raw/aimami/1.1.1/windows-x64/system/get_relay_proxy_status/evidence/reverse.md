# get_relay_proxy_status — 1.1.1 Windows x64 Reverse Evidence
session: wf-aimami111-same-depth-20260618
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: sub_140017930 @ 0x140017930 (namespace=manager)
owner_1_0_9: get_relay_proxy_status owner (1.0.9 windows/relay/get_relay_proxy_status)

### Call-tree comparison (normalized)
- D1: both have relay proxy status owner function
- D2: 1.1.1 adds gate layer (`run_codex_router_diagnostics_owner_sys` + `query_installed_skills_with_repo_111`) — universal 1.1.1 gate infra; core path D2: `sub_14021B5F0`(relay full state serializer)
- D3: `sub_14021B5F0` → `relay_state_serialize_under_lock_sys`(0x1406DA6B0) — 1.0.9 had identical named function for relay full state serialization
- D4: `relay_state_serialize_under_lock_sys` → lock ops + `sub_1410A1DF0`(relay state inner read) — same pattern
- D5: `WakeByAddressSingle` terminal, same as 1.0.9

Response path: `sub_140834740` → dto builder → `has_notch_invoke_resolver_respond`; structurally matches 1.0.9's `tauri_ipc_resolve_sys` terminal.

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows/relay/get_relay_proxy_status: readyToImplement=true (confirmed by README "strictImplementationUse | dim4 closed")
dim6_inherited=1.0.9
