// __ZN13codexmate_lib8commands8accounts29restore_switch_rollback_state28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069bb80
__int64 __fastcall codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h3e153c9f1ac31ef0(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD v6[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v7; // [rsp+18h] [rbp-38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-30h]
  __int64 v9; // [rsp+28h] [rbp-28h]
  _QWORD *v10; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v10 = a2; /*0x10069bb91*/
  v7 = 0; /*0x10069bb95*/
  v8 = 1; /*0x10069bb9d*/
  v9 = 0; /*0x10069bba5*/
  v6[2] = 1610612768; /*0x10069bbad*/
  v6[0] = &v7; /*0x10069bbb9*/
  v6[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069bbc4*/
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD **, _QWORD *))_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d)( /*0x10069bbd0*/
                          &v10,
                          v6) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069bc59*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v11,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  a1[2] = v9; /*0x10069bbdd*/
  v3 = v7; /*0x10069bbe1*/
  a1[1] = v8; /*0x10069bbe9*/
  *a1 = v3; /*0x10069bbed*/
  if ( *a2 == 1 ) /*0x10069bbf7*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(a2 + 1); /*0x10069bc1b*/
  }
  else if ( !*a2 ) /*0x10069bbf0*/
  {
    v4 = a2[2]; /*0x10069bbfe*/
    if ( v4 ) /*0x10069bc05*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v4, 1); /*0x10069bc10*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, 40, 8); /*0x10069bc32*/
}