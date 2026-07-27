// __ZN13codexmate_lib4core5relay23codex_thread_visibility35verify_patched_convergence_rollouts @ 0x100aec860 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::verify_patched_convergence_rollouts::h2d31580b734281bd(
        _QWORD *a1,
        __int64 (__fastcall *a2)(),
        unsigned __int64 a3,
        void *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  double result; // xmm0_8
  _QWORD v11[15]; // [rsp+10h] [rbp-110h] BYREF
  _QWORD v12[12]; // [rsp+88h] [rbp-98h] BYREF
  _QWORD v13[7]; // [rsp+E8h] [rbp-38h] BYREF

  v7 = a6[1]; /*0x100aec87b*/
  v8 = a6[2]; /*0x100aec87f*/
  codexmate_lib::core::relay::codex_thread_visibility::verify_convergence_rollout_targets::he70d6027738f6e4a( /*0x100aec894*/
    v12,
    a2,
    a3,
    a6[1],
    a6[2],
    a4,
    a5);
  if ( LODWORD(v12[0]) == 11 ) /*0x100aec8a0*/
  {
    a1[2] = a6[2]; /*0x100aec8a6*/
    v9 = *a6; /*0x100aec8aa*/
    a1[1] = a6[1]; /*0x100aec8b1*/
    *a1 = v9; /*0x100aec8b5*/
    a1[3] = 11; /*0x100aec8b8*/
  }
  else
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h733a6396f938f466( /*0x100aec8d7*/
      v13,
      v7,
      v7 + 192 * v8);
    qmemcpy(&v11[3], v12, 0x60u); /*0x100aec8ef*/
    v11[2] = v13[2]; /*0x100aec8f6*/
    v11[1] = v13[1]; /*0x100aec905*/
    v11[0] = v13[0]; /*0x100aec90c*/
    qmemcpy(a1, v11, 0x78u); /*0x100aec922*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a16eb385c5b8308(a6); /*0x100aec928*/
    if ( *a6 ) /*0x100aec92d*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 192 * *a6, 8); /*0x100aec954*/
  }
  return result; /*0x100aec945*/
}