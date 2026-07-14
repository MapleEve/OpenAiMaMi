// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::repository::Repository::clear_auto_switch_snooze
// SYMBOL: __ZN13codexmate_lib4core10repository10Repository24clear_auto_switch_snooze17h26b55fa4377a60a8E
// VA: 0x10052b840   CALLER: confirm_pending_auto_switch (depth1 callee, called on every rejection path)
// STATUS: accepted pseudocode (full body, 43 lines — reproduced verbatim below).
// terminated_reason: persistence_commit (std::sys::fs::remove_file deletes the on-disk snooze marker
//   file so the user isn't left in a suppressed/snoozed auto-switch-suggestion state after a rejected
//   confirm). depth2 relative to root.
// NEW-callsite note: in 1.0.9 this function was not part of confirm_pending_auto_switch's call tree at
//   all (1.0.9 had no candidate-rejection branches to clear snooze state for). Whether
//   clear_auto_switch_snooze itself pre-existed as a helper used elsewhere in 1.0.9 was not checked this
//   round — recorded as Unknown, not asserted.

double __fastcall codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(
        _QWORD *a1, void *a2, size_t a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  double result; // xmm0_8

  v3 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x10052b854*/
  if ( v3 )
  {
    v4 = v3;
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v3) )
    {
      *a1 = 2;      /* propagate IO error kind */
      a1[1] = v4;
    }
    else
    {
      *a1 = 10;     /* not-found or otherwise ignorable -> treat as success (10 = ok sentinel) */
      if ( (v4 & 3) == 1 )
      {
        v5 = *(_QWORD *)(v4 - 1); v6 = *(_QWORD *)(v4 + 7);
        if ( *(_QWORD *)v6 ) (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v4 - 1));
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 ) _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16));
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4 - 1, 24, 8);
      }
    }
  }
  else
  {
    *a1 = 10;       /* file removed successfully -> ok */
  }
  return result;
}
