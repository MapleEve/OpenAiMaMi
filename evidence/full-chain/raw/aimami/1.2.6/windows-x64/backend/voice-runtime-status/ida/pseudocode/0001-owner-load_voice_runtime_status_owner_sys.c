// EA: 0x140162d80 (renamed this session: load_voice_runtime_status_owner_sys)
// tracing::instrument wrapper shell for IPC command `load_voice_runtime_status`.
// Command-name string "load_voice_runtime_status" (25 bytes, aLoadVoiceRunti) confirmed inline in the
// owner's own instrumentation-span setup. CORRECTION (grounded via analyze_function): this owner's
// `callers` list is `["sub_140174120"]` — it IS called from the same shared ~90+-command tracing
// dispatcher used by get_codex_router_auth_readiness, just via a dedicated per-command out-call
// (not an inlined match-arm body like the router-auth-readiness case). Exclusive to this command
// (1 caller, the dispatcher), not shared across sibling commands.
__int64 __fastcall load_voice_runtime_status_owner_sys(__int64 a1)
{
  // tracing span setup (aLoadVoiceRunti="load_voice_runtime_status", aApp="app", 3-field span record)
  // sub_1401A9630(&v27, &v30) -> tracing dispatch/interest-check
  // if (v27 != -1) { load_voice_runtime_status(&v30, v26) } // <-- calls the ALREADY-NAMED core business fn
  //                                                          // at 0x140c37a50 (renamed in a prior session,
  //                                                          // not touched again this round beyond linking)
  // remainder: response envelope repack + tracing-span teardown, matches the same shape seen in the
  // sibling stop_voice_capture_owner_sys shell (both owners share this exact tracing-wrapper template).
  return a1;
}
