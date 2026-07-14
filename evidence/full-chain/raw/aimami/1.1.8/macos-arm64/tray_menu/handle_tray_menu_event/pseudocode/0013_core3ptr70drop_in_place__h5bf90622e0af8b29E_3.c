// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x10048d240 depth=1
// core3ptr70drop_in_place::h5bf90622e0af8b29E_3
unsigned __int64 __fastcall core::ptr::drop_in_place$LT$tauri_plugin_dialog..models..MessageDialogButtons$GT$::h5bf90622e0af8b29(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rbx

  result = 6; /*0x10048d25a*/
  if ( *a1 < 0 ) /*0x10048d25f*/
    result = *a1 ^ 0x8000000000000000LL; /*0x10048d25f*/
  if ( result >= 4 ) /*0x10048d267*/
  {
    if ( result == 4 ) /*0x10048d26d*/
    {
      v2 = 1; /*0x10048d28a*/
      goto LABEL_13; /*0x10048d28f*/
    }
    if ( result == 5 ) /*0x10048d273*/
    {
      result = 16; /*0x10048d279*/
      v2 = 4; /*0x10048d27e*/
      if ( !a1[1] ) /*0x10048d275*/
      {
LABEL_13:
        if ( a1[v2] ) /*0x10048d2d7*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048d2ee*/
        return result; /*0x10048d2ee*/
      }
    }
    else
    {
      if ( *a1 ) /*0x10048d247*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048d2a5*/
      result = 32; /*0x10048d2b1*/
      v2 = 6; /*0x10048d2b6*/
      if ( !a1[3] ) /*0x10048d2be*/
        goto LABEL_13; /*0x10048d2be*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048d2cf*/
    goto LABEL_13; /*0x10048d2cf*/
  }
  return result; /*0x10048d2ea*/
}