// __ZN13codexmate_lib4core10repository27enrich_single_account_usage28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100a7e660
// 1.2.3 NEW-delta | codexmate_lib::core::repository::enrich_single_account_usage::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::enrich_single_account_usage::_$u7b$$u7b$closure$u7d$$u7d$::h4c3a423a29564fb1(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v4; // [rsp+18h] [rbp-28h] BYREF
  __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  _BYTE v7[9]; // [rsp+37h] [rbp-9h] BYREF

  v4 = 0; /*0x100a7e66f*/
  v5 = 1; /*0x100a7e677*/
  v6 = 0; /*0x100a7e67f*/
  v3[2] = 1610612768; /*0x100a7e687*/
  v3[0] = &v4; /*0x100a7e693*/
  v3[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a7e69e*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a7e6a9*/
                          a2,
                          v3) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a7e6ee*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v7,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  a1[2] = v6; /*0x100a7e6b6*/
  result = v4; /*0x100a7e6ba*/
  a1[1] = v5; /*0x100a7e6c2*/
  *a1 = result; /*0x100a7e6c6*/
  return result; /*0x100a7e6c9*/
}