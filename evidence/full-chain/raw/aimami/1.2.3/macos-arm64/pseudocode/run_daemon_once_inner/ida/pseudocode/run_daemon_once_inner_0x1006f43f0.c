// __ZN13codexmate_lib21run_daemon_once_inner28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006f43f0 | 基线 same-set
__int64 __fastcall codexmate_lib::run_daemon_once_inner::_$u7b$$u7b$closure$u7d$$u7d$::h03c99f5255d7ffcd(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x1006f4401*/
  v6 = 1; /*0x1006f4409*/
  v7 = 0; /*0x1006f4411*/
  v4[2] = 1610612768; /*0x1006f4419*/
  v4[0] = &v5; /*0x1006f4425*/
  v4[1] = &off_101969DD0; /*0x1006f4430*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f443b*/
                          a2,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, v8, &unk_101969E38, &off_101969E00); /*0x1006f448a*/
  a1[2] = v7; /*0x1006f4448*/
  v2 = v5; /*0x1006f444c*/
  a1[1] = v6; /*0x1006f4454*/
  *a1 = v2; /*0x1006f4458*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x1006f4463*/
}