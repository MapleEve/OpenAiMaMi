// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::repository::Repository::switch_account
// SYMBOL: __ZN13codexmate_lib4core10repository10Repository14switch_account17h68a1834c14920488E
// VA: 0x1005239c0   CALLER: confirm_pending_auto_switch (depth1 callee of root — the actual "switch")
// STATUS: accepted pseudocode — condensed call chain (460-line HexRays body; full JSON captured in
//   session tool output, condensed here per red line 3). This is the SAME core action 1.0.9's
//   confirm_pending_auto_switch called directly; in 1.1.8 it is reached only after the new freshness
//   gate (0001) passes.
//
// Call chain (depth2 relative to root):
//   1. load_registry [VA 0x100522e00] — reads the account registry file (RegistryFile DTO).
//   2. CodexPaths::ensure_directories [VA 0x1004d5860] — mkdir -p for the target account's data dir.
//   3. std::sys::fs::copy [VA 0x1010a0490] — copies a per-account state file (e.g. prior active
//      account's local snapshot) as part of the switch.
//   4. load_auth_file / make_auth_snapshot [VA 0x1006c5140 / 0x1006c5d70] — loads and snapshots the
//      target account's auth material.
//   5. quota_store::load_or_default + find_item [VA 0x100540190 / 0x100541750] — loads quota/usage
//      bookkeeping for the target account.
//   6. Repository::make_account_summary_from_item [VA 0x100533de0] — builds the AccountSummary DTO
//      returned to the caller.
//   7. Repository::persist_registry [VA 0x1005270f0] (terminated_reason=persistence_commit — writes the
//      updated registry file marking the new active account) and
//      Repository::clear_auto_switch_transient_state [VA 0x100534d40] (clears transient
//      candidate/suggestion state after a successful switch — NOT independently diffed against 1.0.9
//      this round since switch_account's own body was not previously in scope; recorded as an
//      unconfirmed-new candidate, not asserted as confirmed delta).
//   8. CoreEnvelope<T>::ok_with_warnings [VA 0x1004b9570] — wraps the AccountSummary/SwitchPayload into
//      the success envelope returned to the Tauri command layer. (terminated_reason=response_serialize)
//
// No user-facing error strings specific to this function were catalogued this round beyond the
// generic CoreError/std::io::Error Display plumbing already covered elsewhere in this leaf.

__int64 __fastcall codexmate_lib::core::repository::Repository::switch_account::h68a1834c14920488(
        _QWORD *a1 /* out CoreEnvelope<SwitchPayload> */, _QWORD *candidate, void *key, size_t key_len)
{
  // see prose call chain above; condensed per red line 3.
  return (__int64)a1;
}
