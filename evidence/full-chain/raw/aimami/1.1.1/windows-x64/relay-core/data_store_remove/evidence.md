# data_store_remove — win 1.1.1 backend-only orphan (orchestrator-verified)

**session**: wf-aimami111-backend-orphan-materialize-20260622-orchestrator-verified
**verdict**: present_same
**owner_va**: 0x140933610
**size_bytes**: 1899 (1.0.9: 1899)
**gate_tier**: strictImplementationUse

## Confirmed (orchestrator direct 逆向分析)
win 1.1.1 PRESENT, orchestrator-verified. owner remove_data_store_owner_111@0x140933610 size 0x76b=1899B/58BB/364insn = EXACT 1.0.9 match. IPC string 'remove_data_store'@0x1412fdd88, namespace 'app', param uuid:String@0x1412fdd99. callees: confirm_pending_auto_switch_deserialize_request_sys + sub_1408F6E50(store removal core) + has_notch_invoke_resolver_respond. coroutine state machine. backend-only.

## strings
- remove_data_store
- uuid
- app
