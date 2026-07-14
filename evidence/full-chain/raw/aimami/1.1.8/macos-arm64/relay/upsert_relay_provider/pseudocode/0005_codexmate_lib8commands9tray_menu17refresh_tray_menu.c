// mac 1.1.8 upsert_relay_provider node va=0x1004d0e30 depth=1
// codexmate_lib8commands9tray_menu17refresh_tray_menu
__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu::h44710b774bcd0619(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int64 *v2; // rbx
  _DWORD __src[52]; // [rsp+8h] [rbp-1E8h] BYREF
  _QWORD __dst[26]; // [rsp+D8h] [rbp-118h] BYREF
  _QWORD v5[6]; // [rsp+1A8h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+1D8h] [rbp-18h] BYREF

  codexmate_lib::commands::tray_menu::create_tray_menu::h9bf3ccf1bea591c8(__dst, a1); /*0x1004d0e4b*/
  result = -__dst[0]; /*0x1004d0e5a*/
  if ( __OFSUB__(-__dst[0], 1) ) /*0x1004d0e5a*/
  {
    v2 = (volatile signed __int64 *)__dst[1]; /*0x1004d0e5f*/
    v6[0] = __dst[1]; /*0x1004d0e66*/
    result = tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::hb161076cac6d89fe( /*0x1004d0e8d*/
               __src,
               *(_QWORD *)(a1 + 136) + 4552LL,
               a1,
               "main",
               4);
    if ( __src[0] == 3 ) /*0x1004d0e99*/
    {
      if ( !_InterlockedDecrement64(v2) ) /*0x1004d0e9b*/
        return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e(v6); /*0x1004d0ea5*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x1004d0ed7*/
      tauri::tray::TrayIcon$LT$R$GT$::set_menu::h06c17625418bfc56(v5, __dst, v2); /*0x1004d0ee6*/
      if ( v5[0] != 0x8000000000000025LL ) /*0x1004d0efd*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(v5); /*0x1004d0f03*/
      return core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h3d34f9d193fcee3e(__dst); /*0x1004d0f0f*/
    }
  }
  else if ( __dst[0] ) /*0x1004d0eac*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0eba*/
  }
  return result; /*0x1004d0f14*/
}