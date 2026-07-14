// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1011300d0 d=4
void __fastcall __noreturn core::option::expect_failed::ha75f8bdcbd673567(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-10h] BYREF

  v4[0] = a1; /*0x1011300d8*/
  v4[1] = a2; /*0x1011300dc*/
  v3[0] = v4; /*0x1011300e4*/
  v3[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1011300ef*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)byte_101224633, (__int64)v3, a3); /*0x1011300fe*/
}