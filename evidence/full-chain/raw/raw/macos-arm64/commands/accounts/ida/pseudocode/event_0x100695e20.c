// __ZN13codexmate_lib8commands8accounts18AccountSwitchTrace5event @ 0x100695e20 | 基线 same-set
double __fastcall codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  double result; // xmm0_8
  _BYTE v11[24]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v12[6]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int128 v14; // [rsp+60h] [rbp-40h] BYREF

  v6 = std::time::Instant::elapsed::h457f209775ed485c(a1 + 16); /*0x100695e41*/
  v14 = 0x3E8 * (unsigned __int128)(unsigned __int64)v6 + v7 / 0xF4240uLL; /*0x100695e64*/
  v8 = a4[1]; /*0x100695e6c*/
  v9 = a4[2]; /*0x100695e70*/
  v13[0] = v8; /*0x100695e74*/
  v13[1] = v9; /*0x100695e78*/
  v12[0] = a1; /*0x100695e7c*/
  v12[1] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x100695e87*/
  v12[2] = &v14; /*0x100695e8f*/
  v12[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100695e9a*/
  v12[4] = v13; /*0x100695ea2*/
  v12[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100695ead*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, (char *)&loc_1017C33A0 + 4, v12); /*0x100695ec3*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, a2, a3, v11); /*0x100695ee1*/
  if ( *a4 ) /*0x100695ee6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, *a4, 1); /*0x100695ef6*/
  return result; /*0x100695efb*/
}