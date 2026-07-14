// mac 1.1.8 BACKEND-ONLY create_tray_menu node 0x1004eec00 depth=2
// core3ptr146drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(
        __int64 *a1)
{
  __int64 v1; // r13
  _QWORD *v2; // r15
  __int64 result; // rax

  if ( !__OFSUB__(-a1[3], 1) && a1[3] ) /*0x1004eec15*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eec28*/
  v1 = a1[2]; /*0x1004eec31*/
  if ( v1 ) /*0x1004eec38*/
  {
    v2 = (_QWORD *)a1[1]; /*0x1004eec48*/
    do /*0x1004eec5f*/
    {
      if ( *v2 == 0x8000000000000025LL ) /*0x1004eec64*/
        core::ptr::drop_in_place$LT$tauri..menu..MenuItemKind$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hcec6fb33b8c2f67f(v2 + 1); /*0x1004eec6a*/
      else
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(v2); /*0x1004eec53*/
      v2 += 6; /*0x1004eec58*/
      --v1; /*0x1004eec5c*/
    }
    while ( v1 ); /*0x1004eec5f*/
  }
  result = *a1; /*0x1004eec71*/
  if ( *a1 ) /*0x1004eec71*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eec97*/
  return result; /*0x1004eec8d*/
}