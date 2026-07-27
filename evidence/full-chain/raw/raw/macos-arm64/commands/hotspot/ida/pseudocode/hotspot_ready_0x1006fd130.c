// __ZN13codexmate_lib8commands7hotspot13hotspot_ready @ 0x1006fd130 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::hotspot::hotspot_ready::hff0177cb53051f37(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4)
{
  _DWORD __src[224]; // [rsp+8h] [rbp-718h] BYREF
  _BYTE __dst[920]; // [rsp+388h] [rbp-398h] BYREF

  tauri::Manager::get_webview_window::h1747e48e34798fb5(__src); /*0x1006fd159*/
  if ( __src[0] != 3 ) /*0x1006fd165*/
  {
    memcpy(__dst, __src, 0x380u); /*0x1006fd17d*/
    codexmate_lib::commands::hotspot::apply_native_hotspot_properties::h65990866066cffaf(__dst, 1, a3, a4); /*0x1006fd18a*/
    codexmate_lib::commands::hotspot::set_window_alpha::ha954231ad8285ecd((__int64)__dst, 1.0); /*0x1006fd19e*/
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__dst, 1); /*0x1006fd1aa*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&__dst[536]); /*0x1006fd1b6*/
  }
  *a1 = 0x8000000000000000LL; /*0x1006fd1c5*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fd1cb*/
  return a1; /*0x1006fd1d3*/
}