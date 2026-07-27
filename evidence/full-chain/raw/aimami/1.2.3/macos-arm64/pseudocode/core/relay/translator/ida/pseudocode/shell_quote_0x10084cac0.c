// __ZN13codexmate_lib4core5relay10translator11shell_quote @ 0x10084cac0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::shell_quote::hbf5fac58a1f490e1(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  double result; // xmm0_8
  _QWORD v4[2]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[5]; // [rsp+18h] [rbp-28h] BYREF

  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(v5, a2, a3, 39, "'\"'\"'", 5); /*0x10084cae7*/
  v4[0] = v5; /*0x10084caec*/
  v4[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10084caf7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_106, v4); /*0x10084cb09*/
  if ( v5[0] ) /*0x10084cb15*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5[1], v5[0], 1); /*0x10084cb20*/
  return result; /*0x10084cb25*/
}