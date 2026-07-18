// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x100458e40 d=1
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12

  if ( a1 && (a2 & 3) == 1 ) /*0x100458e58*/
  {
    v2 = *(_QWORD *)(a2 + 7); /*0x100458e6b*/
    if ( *(_QWORD *)v2 ) /*0x100458e6f*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a2 - 1)); /*0x100458e7b*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x100458e7d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100458e8f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100458ea9*/
  }
}