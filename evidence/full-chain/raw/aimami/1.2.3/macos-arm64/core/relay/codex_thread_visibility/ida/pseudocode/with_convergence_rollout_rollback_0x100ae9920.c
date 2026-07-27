// __ZN13codexmate_lib4core5relay23codex_thread_visibility33with_convergence_rollout_rollback @ 0x100ae9920 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  _BYTE v7[96]; // [rsp+8h] [rbp-108h] BYREF
  _DWORD v8[24]; // [rsp+68h] [rbp-A8h] BYREF
  _QWORD v9[4]; // [rsp+C8h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+E8h] [rbp-28h] BYREF

  result = codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patches::h7e8a955e3d08ada5( /*0x100ae994d*/
             v8,
             "thread-convergethread provider convergence",
             15,
             a2,
             a3);
  if ( v8[0] == 11 ) /*0x100ae9959*/
  {
    qmemcpy(a1, a4, 0x60u); /*0x100ae9966*/
  }
  else
  {
    qmemcpy(v7, v8, sizeof(v7)); /*0x100ae9981*/
    v9[0] = a4; /*0x100ae9984*/
    v9[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae998f*/
    v9[2] = v7; /*0x100ae9993*/
    v9[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae9997*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &unk_1017CB3E9, v9); /*0x100ae99aa*/
    a1[3] = v10[2]; /*0x100ae99b3*/
    v6 = v10[0]; /*0x100ae99b7*/
    a1[2] = v10[1]; /*0x100ae99bf*/
    a1[1] = v6; /*0x100ae99c3*/
    *a1 = 10; /*0x100ae99c7*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v7); /*0x100ae99d5*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a4); /*0x100ae99dd*/
  }
  return result; /*0x100ae99e2*/
}