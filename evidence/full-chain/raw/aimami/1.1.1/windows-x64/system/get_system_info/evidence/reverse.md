# get_system_info — 1.1.1 Windows x64 Reverse Evidence
session: wf-aimami111-same-depth-20260618
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: get_system_info_ipc_dispatcher_branch_sys_111 @ 0x14001D130 → get_system_info_cmd_owner_sys_111 @ 0x140835CC0
owner_1_0_9: sub_140070050 (1.0.9 windows/system/get_system_info call-tree, role=command_owner)

### Call-tree comparison (normalized)
- D1: IPC wrapper present in both; 1.1.1 separately named; 1.0.9 was sub_140070050
- D2: 1.1.1 `get_system_info_cmd_owner_sys_111` → `get_system_info_field_builder_sys_111`(dto) + `has_notch_invoke_resolver_respond`(IPC) + `sub_140E30410`(serialize) + `sub_140807390`(drop); 1.0.9 call-tree shows `command_owner` → `field_builder` → `copy_invoke_context` → `ipc_resolve` — same structural pattern
- D3: `get_system_info_field_builder_sys_111`(0x1407ADAC0) → `sub_14025C400`(field read) + `sub_14033FA00`(version field) — 1.0.9 `codexmate_lib::commands::system::get_system_info::field_builder` same role
- D4-5: `sub_14025C400` → `sub_14026A280`(field extract, terminal); `sub_14033FA00` → `sub_14124C220`(alloc, terminal) — both normalized leaf nodes match 1.0.9 pattern
- No new DTO keys, no new sidecar, no new persistence

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows/system/get_system_info: readyToImplement=false (README: "readyToImplement: false", dim6 empty)
dim6_inherited: N/A (readyToImplement was false in 1.0.9)
