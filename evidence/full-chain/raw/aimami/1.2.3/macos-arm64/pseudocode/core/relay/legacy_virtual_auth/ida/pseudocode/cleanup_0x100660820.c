// __ZN13codexmate_lib4core5relay19legacy_virtual_auth7cleanup28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100660820 | 基线 same-set
double __fastcall codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::hf1635b51b504a671(
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

  v10 = a2; /*0x100660832*/
  v9[0] = &v10; /*0x10066083a*/
  v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100660845*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017C2C81, v9); /*0x100660858*/
  a1[3] = v8[2]; /*0x100660861*/
  v2 = v8[0]; /*0x100660865*/
  a1[2] = v8[1]; /*0x10066086d*/
  a1[1] = v2; /*0x100660871*/
  *a1 = 10; /*0x100660875*/
  if ( (v10 & 3) == 1 ) /*0x100660888*/
  {
    v3 = v10 - 1; /*0x10066088a*/
    v4 = *(_QWORD *)(v10 - 1); /*0x10066088e*/
    v5 = *(_QWORD *)(v10 + 7); /*0x100660892*/
    if ( *(_QWORD *)v5 ) /*0x100660896*/
      (*(void (__fastcall **)(__int64))v5)(v4); /*0x1006608a2*/
    v6 = *(_QWORD *)(v5 + 8); /*0x1006608a4*/
    if ( v6 ) /*0x1006608ac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x1006608b6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x1006608c8*/
  }
  return result; /*0x1006608cd*/
}