// __ZN13codexmate_lib4core5relay18router_unlock_auth7cleanup28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100523830 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h57910c92755c24af(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  double result; // xmm0_8
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF

  v10 = a2; /*0x100523842*/
  v9[0] = &v10; /*0x10052384a*/
  v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100523855*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017C1401, v9); /*0x100523868*/
  a1[3] = v8[2]; /*0x100523871*/
  v2 = v8[0]; /*0x100523875*/
  a1[2] = v8[1]; /*0x10052387d*/
  a1[1] = v2; /*0x100523881*/
  *a1 = 10; /*0x100523885*/
  if ( (v10 & 3) == 1 ) /*0x100523898*/
  {
    v3 = v10 - 1; /*0x10052389a*/
    v4 = *(_QWORD *)(v10 - 1); /*0x10052389e*/
    v5 = *(_QWORD *)(v10 + 7); /*0x1005238a2*/
    if ( *(_QWORD *)v5 ) /*0x1005238a6*/
      (*(void (__fastcall **)(__int64))v5)(v4); /*0x1005238b2*/
    v6 = *(_QWORD *)(v5 + 8); /*0x1005238b4*/
    if ( v6 ) /*0x1005238bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x1005238c6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x1005238d8*/
  }
  return result; /*0x1005238dd*/
}