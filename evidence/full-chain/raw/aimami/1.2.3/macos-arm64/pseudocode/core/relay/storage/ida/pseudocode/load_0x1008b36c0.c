// __ZN13codexmate_lib4core5relay7storage4load28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008b36c0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::hd722fffd39306981(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  double result; // xmm0_8
  _QWORD v6[4]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+28h] [rbp-28h] BYREF

  v6[0] = a2; /*0x1008b36d1*/
  v6[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b36dc*/
  v6[2] = a3; /*0x1008b36e0*/
  v6[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b36e4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017C6570, v6); /*0x1008b36f7*/
  a1[3] = v7[2]; /*0x1008b3700*/
  v4 = v7[0]; /*0x1008b3704*/
  a1[2] = v7[1]; /*0x1008b370c*/
  a1[1] = v4; /*0x1008b3710*/
  *a1 = 9; /*0x1008b3714*/
  if ( *a3 ) /*0x1008b371b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x1008b372c*/
  return result; /*0x1008b3731*/
}