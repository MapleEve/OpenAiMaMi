// __ZN13codexmate_lib8commands6system24run_daemon_once_blocking28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1007ca0b0
// 1.2.3 NEW-delta | codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x1007ca0c1*/
  v6 = 1; /*0x1007ca0c9*/
  v7 = 0; /*0x1007ca0d1*/
  v4[2] = 1610612768; /*0x1007ca0d9*/
  v4[0] = &v5; /*0x1007ca0e5*/
  v4[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007ca0f0*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007ca0fb*/
                          a2,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007ca14a*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      v8,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  a1[2] = v7; /*0x1007ca108*/
  v2 = v5; /*0x1007ca10c*/
  a1[1] = v6; /*0x1007ca114*/
  *a1 = v2; /*0x1007ca118*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x1007ca123*/
}