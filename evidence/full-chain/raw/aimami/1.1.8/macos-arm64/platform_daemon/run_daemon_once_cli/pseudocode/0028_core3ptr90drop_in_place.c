// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1004f56f0 depth=2
// core3ptr90drop_in_place
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12

  if ( a1 && (a2 & 3) == 1 ) /*0x1004f5708*/
  {
    v2 = *(_QWORD *)(a2 + 7); /*0x1004f571b*/
    if ( *(_QWORD *)v2 ) /*0x1004f571f*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a2 - 1)); /*0x1004f572b*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x1004f572d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f573f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f5759*/
  }
}