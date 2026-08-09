// EA: 0x14015b140 (renamed this session: stop_voice_capture_owner_sys)
// tracing::instrument wrapper shell for IPC command `stop_voice_capture`.
// analyze_function confirms callers=["sub_140174120"] - same shared ~90+-command dispatcher pattern as
// get_codex_router_auth_readiness/load_voice_runtime_status, via dedicated per-command out-call.
// 1068B, 39 basic blocks, cc=10 - structurally near-identical shell to load_voice_runtime_status_owner_sys
// (same tracing-span-setup / sub_1401A9630 dispatch-check / span-teardown template), differing only in
// the span-name literal ("stop_voice_capture", 18 bytes, aStopVoiceCaptu) and the inner business call.
__int64 __fastcall stop_voice_capture_owner_sys(__int64 a1)
{
  // tracing span setup (aStopVoiceCaptu="stop_voice_capture", aApp="app")
  // sub_1401A9630(&v27, &v30) -> tracing dispatch/interest-check
  // if (v27 != -1) { stop_voice_capture_core_sys(&v30, v26) } // <-- real business logic, see 0002
  // remainder: response envelope repack + tracing-span teardown
  return a1;
}
