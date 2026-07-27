// __ZN13codexmate_lib8commands8accounts29restore_switch_rollback_state28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069ba80
__int64 __fastcall codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h385386956799dd3f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  _QWORD v9[4]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF

  v11 = a4; /*0x10069ba8f*/
  v10[0] = a2; /*0x10069ba93*/
  v10[1] = a3; /*0x10069ba97*/
  v9[0] = v10; /*0x10069ba9f*/
  v9[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10069baaa*/
  v9[2] = &v11; /*0x10069bab2*/
  v9[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10069babd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017C32C0, v9); /*0x10069bacc*/
  result = v11; /*0x10069bad1*/
  if ( (v11 & 3) == 1 ) /*0x10069badd*/
  {
    v5 = v11 - 1; /*0x10069badf*/
    v6 = *(_QWORD *)(v11 - 1); /*0x10069bae3*/
    v7 = *(_QWORD *)(v11 + 7); /*0x10069bae7*/
    if ( *(_QWORD *)v7 ) /*0x10069baeb*/
      (*(void (__fastcall **)(__int64))v7)(v6); /*0x10069baf7*/
    v8 = *(_QWORD *)(v7 + 8); /*0x10069baf9*/
    if ( v8 ) /*0x10069bb01*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10069bb0b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10069bb1d*/
  }
  return result; /*0x10069bb22*/
}