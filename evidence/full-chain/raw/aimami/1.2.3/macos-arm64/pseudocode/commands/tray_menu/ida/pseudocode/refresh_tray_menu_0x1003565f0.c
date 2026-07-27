// __ZN13codexmate_lib8commands9tray_menu17refresh_tray_menu @ 0x1003565f0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int64 *v2; // rbx
  _DWORD __src[52]; // [rsp+8h] [rbp-1E8h] BYREF
  _QWORD __dst[26]; // [rsp+D8h] [rbp-118h] BYREF
  _QWORD v5[6]; // [rsp+1A8h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+1D8h] [rbp-18h] BYREF

  codexmate_lib::commands::tray_menu::create_tray_menu::hde51ac4cf9ae029a(__dst, a1); /*0x10035660b*/
  result = -__dst[0]; /*0x10035661a*/
  if ( __OFSUB__(-__dst[0], 1) ) /*0x10035661a*/
  {
    v2 = (volatile signed __int64 *)__dst[1]; /*0x10035661f*/
    v6[0] = __dst[1]; /*0x100356626*/
    result = tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::h5bd8a69eb22dc33d( /*0x10035664d*/
               __src,
               *(_QWORD *)(a1 + 136) + 4552LL,
               a1,
               "main",
               4);
    if ( __src[0] == 3 ) /*0x100356659*/
    {
      if ( !_InterlockedDecrement64(v2) ) /*0x10035665b*/
        return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e(v6); /*0x100356665*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x100356697*/
      tauri::tray::TrayIcon$LT$R$GT$::set_menu::h5fac11ba29506010(v5, __dst, v2); /*0x1003566a6*/
      if ( v5[0] != 0x8000000000000025LL ) /*0x1003566bd*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v5); /*0x1003566c3*/
      return core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h2d970e0951ae6585(__dst); /*0x1003566cf*/
    }
  }
  else if ( __dst[0] ) /*0x10035666c*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10035667a*/
  }
  return result; /*0x1003566d4*/
}