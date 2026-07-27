// __ZN13codexmate_lib4core3mcp10quote_toml @ 0x100843470 | 基线 same-set
double __fastcall codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(); // r14
  double result; // xmm0_8
  _QWORD v5[3]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-20h]

  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f( /*0x100843496*/
    &v6,
    a2,
    a3,
    92,
    &anon_10420c9971c21f44d230d15b39fb3fec_47,
    2);
  v3 = v7; /*0x10084349b*/
  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f( /*0x1008434bf*/
    v5,
    v7,
    v8,
    34,
    &anon_10420c9971c21f44d230d15b39fb3fec_48,
    2);
  if ( v6 ) /*0x1008434cb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v6, 1); /*0x1008434d5*/
  v6 = v5; /*0x1008434da*/
  v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008434e5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_49, &v6); /*0x1008434f7*/
  if ( v5[0] ) /*0x100843503*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5[1], v5[0], 1); /*0x10084350e*/
  return result; /*0x100843513*/
}