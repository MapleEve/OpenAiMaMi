// __ZN13codexmate_lib8commands9tray_menu31refresh_tray_menu_with_snapshot @ 0x10035a260 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu_with_snapshot::h91c6604bb87704c1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  volatile signed __int64 *v3; // rbx
  _DWORD __src[52]; // [rsp+8h] [rbp-1E8h] BYREF
  volatile signed __int64 *__dst[26]; // [rsp+D8h] [rbp-118h] BYREF
  _QWORD v6[6]; // [rsp+1A8h] [rbp-48h] BYREF
  volatile signed __int64 *v7; // [rsp+1D8h] [rbp-18h] BYREF

  codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h8112836b79b9e4a6(__dst, a1, a2); /*0x10035a27e*/
  result = -(__int64)__dst[0]; /*0x10035a28d*/
  if ( __OFSUB__(-(__int64)__dst[0], 1) ) /*0x10035a28d*/
  {
    v3 = __dst[1]; /*0x10035a292*/
    v7 = __dst[1]; /*0x10035a299*/
    result = tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::h5bd8a69eb22dc33d( /*0x10035a2c0*/
               __src,
               *(_QWORD *)(a1 + 136) + 4552LL,
               a1,
               "main",
               4);
    if ( __src[0] == 3 ) /*0x10035a2cc*/
    {
      if ( !_InterlockedDecrement64(v3) ) /*0x10035a2ce*/
        return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e(&v7); /*0x10035a2d8*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x10035a30a*/
      tauri::tray::TrayIcon$LT$R$GT$::set_menu::h5fac11ba29506010(v6, __dst, v3); /*0x10035a319*/
      if ( v6[0] != 0x8000000000000025LL ) /*0x10035a330*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v6); /*0x10035a336*/
      return core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h2d970e0951ae6585(__dst); /*0x10035a342*/
    }
  }
  else if ( __dst[0] ) /*0x10035a2df*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10035a2ed*/
  }
  return result; /*0x10035a347*/
}