// __ZN13codexmate_lib8commands8accounts41perform_switch_payload_with_restart_inner28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006a6e30 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::he80cf9d569dc4245(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x1006a6e41*/
  v6 = 1; /*0x1006a6e49*/
  v7 = 0; /*0x1006a6e51*/
  v4[2] = 1610612768; /*0x1006a6e59*/
  v4[0] = &v5; /*0x1006a6e65*/
  v4[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a6e70*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006a6e7b*/
                          a2,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a6eca*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v8,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  a1[2] = v7; /*0x1006a6e88*/
  v2 = v5; /*0x1006a6e8c*/
  a1[1] = v6; /*0x1006a6e94*/
  *a1 = v2; /*0x1006a6e98*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x1006a6ea3*/
}