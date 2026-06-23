# focus_main_window — 1.1.1 Windows x64 Reverse Evidence
session: <审计会话>
machine: <本地机器>
producer: win-shard-2

## SAME-DEPTH-CONFIRM

depth_reached: 5
owner_1_1_1: focus_main_window_handler_111 @ 0x14001e560
owner_1_0_9: focus_main_window_owner_sys @ 0x140270D30 (windows-x64, via auto_switch_multiplex_dispatcher_sys)

### Call-tree comparison (normalized, compilation-noise excluded)
- D1: owner present in both versions; 1.1.1 named `focus_main_window_handler_111`, 1.0.9 named `focus_main_window_owner_sys`
- D2: 1.1.1 calls `confirm_pending_auto_switch_deserialize_request_sys`(gate) + `sub_14060C8D0`(window focus core) + `has_notch_invoke_resolver_respond`(IPC); 1.0.9 same structural pattern (window focus core + IPC resolve) — gate addition is compile-time infrastructure noise, not app logic change
- D3-5: core window focus path (`sub_14060C8D0` → `hotspot_ready_state_discriminant_check_sys_111` → lock/wake ops) structurally equivalent; `sub_14061DD90` is window bring-to-front syscall wrapper, identical end-node in both versions
- No new IPC DTO fields, no new sidecar dispatch, no new persistence operations

### Verdict
confirmed_same_depth5

### 1.0.9 reference status
1.0.9 windows-x64/system/focus_main_window: readyToImplement=false (evidence.md: "strictImplementationUse")
dim6_inherited: N/A (readyToImplement was false in 1.0.9)
