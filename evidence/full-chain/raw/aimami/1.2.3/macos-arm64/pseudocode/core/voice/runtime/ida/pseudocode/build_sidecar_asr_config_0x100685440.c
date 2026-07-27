// __ZN13codexmate_lib4core5voice7runtime24build_sidecar_asr_config28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100685440 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::build_sidecar_asr_config::_$u7b$$u7b$closure$u7d$$u7d$::h9ef8bf50b0e07383(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  double result; // xmm0_8
  _QWORD v7[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-28h] BYREF

  v8 = a2; /*0x10068544f*/
  v7[0] = &v8; /*0x100685457*/
  v7[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100685462*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, (char *)&loc_1017C3044 + 1, v7); /*0x100685471*/
  if ( (v8 & 3) == 1 ) /*0x100685482*/
  {
    v2 = v8 - 1; /*0x100685484*/
    v3 = *(_QWORD *)(v8 - 1); /*0x100685488*/
    v4 = *(_QWORD *)(v8 + 7); /*0x10068548c*/
    if ( *(_QWORD *)v4 ) /*0x100685490*/
      (*(void (__fastcall **)(__int64))v4)(v3); /*0x10068549c*/
    v5 = *(_QWORD *)(v4 + 8); /*0x10068549e*/
    if ( v5 ) /*0x1006854a6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x1006854b0*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x1006854c2*/
  }
  return result; /*0x1006854c7*/
}