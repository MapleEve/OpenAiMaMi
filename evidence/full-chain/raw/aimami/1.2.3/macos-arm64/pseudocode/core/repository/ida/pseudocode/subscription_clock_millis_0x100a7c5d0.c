// __ZN13codexmate_lib4core10repository25subscription_clock_millis @ 0x100a7c5d0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::subscription_clock_millis | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 codexmate_lib::core::repository::subscription_clock_millis::h8afb5e6841c83cc0()
{
  int v0; // edx
  int v1; // ecx
  unsigned int v2; // ecx
  _DWORD v4[3]; // [rsp+4h] [rbp-Ch] BYREF

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v4); /*0x100a7c5dc*/
  v0 = (v4[0] >> 13) - 1; /*0x100a7c5e9*/
  v1 = 0; /*0x100a7c5ec*/
  if ( v4[0] >> 13 <= 0 ) /*0x100a7c5f0*/
  {
    v2 = (1 - (v4[0] >> 13)) / 0x190u + 1; /*0x100a7c604*/
    v0 += 400 * v2; /*0x100a7c60c*/
    v1 = -146097 * v2; /*0x100a7c60e*/
  }
  return 1000 /*0x100a7c673*/
       * (v4[1] + 86400LL * (((v0 / 100) >> 2) + ((1461 * v0) >> 2) + v1 + ((v4[0] >> 4) & 0x1FF) - v0 / 100 - 719163))
       + v4[2] / 0xF4240uLL;
}