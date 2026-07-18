// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1005e5860 d=1
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 328)) ) /*0x1005e5871*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha5443ef11d81dc4e(a1 + 328); /*0x1005e587e*/
  if ( *(_QWORD *)(a1 + 152) ) /*0x1005e5883*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e589b*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x1005e58a7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbc658fef42061239(a1 + 136); /*0x1005e58b4*/
  core::ptr::drop_in_place$LT$tauri_runtime_wry..Context$LT$tauri..EventLoopMessage$GT$$GT$::h563331144270a614(a1); /*0x1005e58bc*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 336)) ) /*0x1005e58c8*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7(a1 + 336); /*0x1005e58d5*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h0a3531b4088b4c0a(a1 + 176); /*0x1005e58e1*/
  result = *(volatile signed __int64 **)(a1 + 344); /*0x1005e58e6*/
  if ( !_InterlockedDecrement64(result) ) /*0x1005e58ed*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hd8add882f5013821(a1 + 344); /*0x1005e5901*/
  return result; /*0x1005e58fd*/
}