// __ZN13codexmate_lib8commands8accounts18AccountSwitchTrace5event @ 0x100695f30 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  _BYTE v11[24]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v12[6]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int128 v14; // [rsp+60h] [rbp-40h] BYREF

  v8 = std::time::Instant::elapsed::h457f209775ed485c(a1 + 16); /*0x100695f54*/
  v14 = 0x3E8 * (unsigned __int128)(unsigned __int64)v8 + v9 / 0xF4240uLL; /*0x100695f77*/
  v13[0] = a4; /*0x100695f7f*/
  v13[1] = a5; /*0x100695f83*/
  v12[0] = a1; /*0x100695f87*/
  v12[1] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x100695f92*/
  v12[2] = &v14; /*0x100695f9a*/
  v12[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100695fa5*/
  v12[4] = v13; /*0x100695fad*/
  v12[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100695fb8*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, (char *)&loc_1017C33A0 + 4, v12); /*0x100695fd1*/
  return codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, a2, a3, v11); /*0x100695ff0*/
}