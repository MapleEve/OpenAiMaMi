// __ZN13codexmate_lib4core5relay15config_takeover25quarantine_damaged_backup28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008f9a80 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h9293272b7e7e1483(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  double result; // xmm0_8
  _QWORD v9[4]; // [rsp+0h] [rbp-60h] BYREF
  _QWORD v10[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF

  v11 = a3; /*0x1008f9a92*/
  v9[0] = a2; /*0x1008f9a96*/
  v9[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f9aa1*/
  v9[2] = &v11; /*0x1008f9aa9*/
  v9[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008f9ab4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &unk_1017C755E, v9); /*0x1008f9ac7*/
  a1[3] = v10[2]; /*0x1008f9ad0*/
  v3 = v10[0]; /*0x1008f9ad4*/
  a1[2] = v10[1]; /*0x1008f9adc*/
  a1[1] = v3; /*0x1008f9ae0*/
  *a1 = 10; /*0x1008f9ae4*/
  if ( (v11 & 3) == 1 ) /*0x1008f9af7*/
  {
    v4 = v11 - 1; /*0x1008f9af9*/
    v5 = *(_QWORD *)(v11 - 1); /*0x1008f9afd*/
    v6 = *(_QWORD *)(v11 + 7); /*0x1008f9b01*/
    if ( *(_QWORD *)v6 ) /*0x1008f9b05*/
      (*(void (__fastcall **)(__int64))v6)(v5); /*0x1008f9b11*/
    v7 = *(_QWORD *)(v6 + 8); /*0x1008f9b13*/
    if ( v7 ) /*0x1008f9b1b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1008f9b25*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1008f9b37*/
  }
  return result; /*0x1008f9b3c*/
}