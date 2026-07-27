// __ZN13codexmate_lib4core5relay5quota12value_to_f @ 0x1008ac690
// 1.2.3 NEW-delta | codexmate_lib::core::relay::quota::value_to_f | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(unsigned __int8 *a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int8 v5; // [rsp-18h] [rbp-18h] BYREF

  if ( !a1 ) /*0x1008ac693*/
    return 0; /*0x1008ac6db*/
  v1 = *a1; /*0x1008ac695*/
  if ( v1 != 2 ) /*0x1008ac69b*/
  {
    if ( v1 == 3 ) /*0x1008ac6a0*/
    {
      v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3)); /*0x1008ac6b5*/
      core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008ac6c1*/
        &v5,
        v2,
        v3);
      return v5 ^ 1LL; /*0x1008ac6d8*/
    }
    return 0; /*0x1008ac6a0*/
  }
  return 1; /*0x1008ac6d8*/
}