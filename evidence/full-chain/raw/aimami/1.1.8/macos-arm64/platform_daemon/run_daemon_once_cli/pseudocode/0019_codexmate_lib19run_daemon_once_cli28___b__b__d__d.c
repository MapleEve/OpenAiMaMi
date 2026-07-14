// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1002f1790 depth=1
// codexmate_lib19run_daemon_once_cli28_::b::b::d::d
__int64 __fastcall codexmate_lib::run_daemon_once_cli::_$u7b$$u7b$closure$u7d$$u7d$::h1832b0fc47184eb2(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x1002f17a1*/
  v6 = 1; /*0x1002f17a9*/
  v7 = 0; /*0x1002f17b1*/
  v4[2] = 1610612768; /*0x1002f17b9*/
  v4[0] = (__int64)&v5; /*0x1002f17c5*/
  v4[1] = (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_627; /*0x1002f17d0*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1002f17db*/
                          a2,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002f182a*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_628,
      55,
      (__int64)v8,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_688,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_630);
  a1[2] = v7; /*0x1002f17e8*/
  v2 = v5; /*0x1002f17ec*/
  a1[1] = v6; /*0x1002f17f4*/
  *a1 = v2; /*0x1002f17f8*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(a2); /*0x1002f1803*/
}