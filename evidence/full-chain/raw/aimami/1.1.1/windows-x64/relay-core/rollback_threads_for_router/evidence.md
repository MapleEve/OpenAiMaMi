# rollback_threads_for_router — win 1.1.1 backend-only orphan (orchestrator-verified)

**session**: wf-aimami111-backend-orphan-materialize-20260622-orchestrator-verified
**verdict**: present_changed
**owner_va**: 0x140615A80
**size_bytes**: 2744 (1.0.9: 3590)
**gate_tier**: strictImplementationUse

## Confirmed (orchestrator direct 逆向分析)
win 1.1.1 PRESENT, orchestrator-verified by direct decompile. src=codexmate_lib::core::relay::codex_thread_visibility (src\core\relay\codex_thread_visibility.rs). size 0xab8=2744B vs 1.0.9 0xE06=3590B (-23%, CHANGED). Rayon parallel dispatch; _InterlockedCompareExchange8 + WakeByAddressSingle lock guard. error strings: 'rollout file gone','session_meta not found','read rollout failed','first_error poisoned','ext_changed poisoned'. backend-only (no frontend invoke). delta vs 1.0.9: body shrank, rollback path refactored.

## strings
- rollout file gone
- session_meta not found
- read rollout failed
