// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x1004d4e90 depth=0
// refresh_tray_menu_with_snapshot_owner
__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu_with_snapshot::h6e34c3f16c01270d(
        __int64 a1,
        __int64 *a2,
        double a3,
        double a4)
{
  __int64 result; // rax
  volatile signed __int64 *v5; // rbx
  _QWORD __src[26]; // [rsp+8h] [rbp-1E8h] BYREF
  volatile signed __int64 *__dst[26]; // [rsp+D8h] [rbp-118h] BYREF
  unsigned __int64 v8[6]; // [rsp+1A8h] [rbp-48h] BYREF
  volatile signed __int64 *v9; // [rsp+1D8h] [rbp-18h] BYREF

  codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h27dd499b1484bd80(__dst, a1, a2, a3, a4); /*0x1004d4eae*/
  result = -(__int64)__dst[0]; /*0x1004d4ebd*/
  if ( __OFSUB__(-(__int64)__dst[0], 1) ) /*0x1004d4ebd*/
  {
    v5 = __dst[1]; /*0x1004d4ec2*/
    v9 = __dst[1]; /*0x1004d4ec9*/
    result = (__int64)tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::hb161076cac6d89fe( /*0x1004d4ef0*/
                        __src,
                        *(_QWORD *)(a1 + 136) + 4552LL,
                        a1,
                        (__int64)"main",
                        4);
    if ( LODWORD(__src[0]) == 3 ) /*0x1004d4efc*/
    {
      if ( !_InterlockedDecrement64(v5) ) /*0x1004d4efe*/
        return (__int64)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e((__int64 *)&v9); /*0x1004d4f08*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x1004d4f3a*/
      tauri::tray::TrayIcon$LT$R$GT$::set_menu::h06c17625418bfc56(v8, (__int64)__dst, (__int64)v5); /*0x1004d4f49*/
      if ( v8[0] != 0x8000000000000025LL ) /*0x1004d4f60*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(v8); /*0x1004d4f66*/
      return (__int64)core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h3d34f9d193fcee3e(__dst); /*0x1004d4f72*/
    }
  }
  else if ( __dst[0] ) /*0x1004d4f0f*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d4f1d*/
  }
  return result; /*0x1004d4f77*/
}