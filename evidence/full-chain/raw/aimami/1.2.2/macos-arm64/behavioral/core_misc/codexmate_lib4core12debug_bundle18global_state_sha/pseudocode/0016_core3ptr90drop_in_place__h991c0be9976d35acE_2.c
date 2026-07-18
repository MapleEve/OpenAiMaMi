// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x100889ef0 d=2
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12

  if ( a1 && (a2 & 3) == 1 ) /*0x100889f08*/
  {
    v2 = *(_QWORD *)(a2 + 7); /*0x100889f1b*/
    if ( *(_QWORD *)v2 ) /*0x100889f1f*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a2 - 1)); /*0x100889f2b*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x100889f2d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100889f3f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100889f59*/
  }
}