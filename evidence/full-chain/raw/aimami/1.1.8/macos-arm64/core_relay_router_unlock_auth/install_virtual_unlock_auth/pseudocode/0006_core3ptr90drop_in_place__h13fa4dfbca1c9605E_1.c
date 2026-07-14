// mac 1.1.8 behavioral install_virtual_unlock_auth 0x10069fd50 d=1
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12

  if ( a1 && (a2 & 3) == 1 ) /*0x10069fd68*/
  {
    v2 = *(_QWORD *)(a2 + 7); /*0x10069fd7b*/
    if ( *(_QWORD *)v2 ) /*0x10069fd7f*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a2 - 1)); /*0x10069fd8b*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x10069fd8d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069fd9f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069fdb9*/
  }
}