// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::repository::Repository::load_local_state_synced
// SYMBOL: __ZN13codexmate_lib4core10repository10Repository23load_local_state_synced17hc043a16a3128e6a8E
// VA: 0x10052b230   CALLER: confirm_pending_auto_switch (depth1 callee of root)
// STATUS: accepted pseudocode — NEW call site from confirm_pending_auto_switch in 1.1.8 (absent from
//   the 1.0.9 confirm_pending_auto_switch call tree entirely; 1.0.9 called switch_account directly).
//   The sync_local_runtime_state / load_local_state / daemon-repair machinery itself may be pre-existing
//   platform infrastructure (not independently re-diffed against 1.0.9 this round) — what is confirmed
//   NEW is that confirm_pending_auto_switch now calls it before switching.
//
// Control flow (depth2 relative to root):
//   1. sync_local_runtime_state(repo) [VA 0x10052d3a0] -> if returns discriminant!=10 (error), forward
//      error to caller immediately (early return), skip everything below.
//   2. load_local_state(repo) [VA 0x100525fd0] -> if discriminant==2 (its own error variant), forward
//      that error (dealloc any accumulated Vec entries), return.
//   3. Otherwise inspect a loaded-state bitflag (offset+91 bit0). If set:
//        check_daemon_state(a2[79], a2[80]) [platform::daemon, VA 0x1001ea0b0] — if daemon looks
//        unhealthy:
//          resolve_daemon_binary(repo) [VA 0x10052aec0]
//            -> resolved (discriminant==10): install_daemon(path, repo_fields) [platform::daemon,
//               VA 0x1001e9a40] (terminated_reason=sidecar_dispatch: installs/registers the daemon
//               binary — writes LaunchAgent artifacts and/or spawns install steps)
//               -> on install failure (result!=10): build "AUTO_SWITCH_DAEMON_REPAIR_FAILED" formatted
//                  string via CoreError Display + alloc::fmt::format, append to an internal Vec<String>
//                  diagnostics list carried in the returned LoadedState (terminated_reason=error_return,
//                  but this is an *internal* diagnostic, not one of the 3 new user-facing strings on the
//                  confirm_pending_auto_switch root — it does not itself fail this command).
//   4. Merge/copy the resulting runtime-state record (~0x3A0 bytes) into __dst, return.
//
// terminated_reason for this subtree: persistence read/write (state files via sync_local_runtime_state /
//   load_local_state, not independently decompiled this round — pre-existing subsystem) and
//   sidecar_dispatch (install_daemon) on the conditional repair branch.

_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(
        _QWORD *__dst, _QWORD *a2)
{
  // see prose control-flow summary above; full raw HexRays text captured in session tool output,
  // condensed here to keep this leaf file within the app-level evidence scope (red line 3: no bulk
  // generated decompile dumps in internal-reverse; this raw/ leaf file is the correct location for it).
  codexmate_lib::core::repository::Repository::sync_local_runtime_state::h302170dd703d5dc4(/*...*/0, a2); /*0x10052b251*/
  codexmate_lib::core::repository::Repository::load_local_state::h7cf5c9b025f9346c(/*...*/0); /*0x10052b2bc*/
  // conditional daemon self-repair sub-path:
  codexmate_lib::platform::daemon::check_daemon_state::h0fbeb3d43845c30f(/*a2[79]*/0, /*a2[80]*/0); /*0x10052b43f*/
  codexmate_lib::core::repository::Repository::resolve_daemon_binary::h688ddc310536ab50(/*...*/0); /*0x10052b453*/
  codexmate_lib::platform::daemon::install_daemon::hdeeec86e4023ee95(/*...*/0); /*0x10052b49a*/
  return __dst;
}
