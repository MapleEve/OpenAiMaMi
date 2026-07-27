// __ZN13codexmate_lib4core5relay7storage4load28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008b3570 | 基线 same-set
double __fastcall codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::h29e164ffc44fb0cc(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  _QWORD v6[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+18h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-18h] BYREF

  v8 = a2; /*0x1008b357e*/
  v7[0] = &v8; /*0x1008b3586*/
  v7[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008b3591*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v6, &unk_1017C64F1, v7); /*0x1008b35a4*/
  a1[3] = v6[2]; /*0x1008b35ad*/
  v2 = v6[0]; /*0x1008b35b1*/
  a1[2] = v6[1]; /*0x1008b35b9*/
  a1[1] = v2; /*0x1008b35bd*/
  *a1 = 9; /*0x1008b35c1*/
  v3 = v8; /*0x1008b35c8*/
  if ( *v8 == 1 ) /*0x1008b35d3*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v8 + 1); /*0x1008b35f7*/
  }
  else if ( !*v8 ) /*0x1008b35cc*/
  {
    v4 = v8[2]; /*0x1008b35da*/
    if ( v4 ) /*0x1008b35e1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8[1], v4, 1); /*0x1008b35ec*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x1008b360e*/
}