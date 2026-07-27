// __ZN13codexmate_lib8commands9tray_menu22handle_tray_menu_event28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100702600 | 基线 same-set
double __fastcall codexmate_lib::commands::tray_menu::handle_tray_menu_event::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h406a9f2b90920f9d(
        _QWORD *a1)
{
  int v1; // r14d
  __int64 v2; // rsi
  double result; // xmm0_8
  _DWORD v4[126]; // [rsp+8h] [rbp-1F8h] BYREF

  codexmate_lib::commands::accounts::switch_account_and_restart_sync::h4c1d2cf916d0074a(v4, (__int64)a1, a1[20], a1[21]); /*0x100702629*/
  v1 = v4[0]; /*0x10070262e*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$C$alloc..string..String$GT$$GT$::h2bf98c8163c71928(v4); /*0x10070263c*/
  if ( v1 == 2 ) /*0x100702645*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922((__int64)a1); /*0x10070264a*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1); /*0x100702652*/
  v2 = a1[19]; /*0x100702657*/
  if ( v2 ) /*0x100702661*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[20], v2, 1); /*0x10070266f*/
  return result; /*0x100702674*/
}