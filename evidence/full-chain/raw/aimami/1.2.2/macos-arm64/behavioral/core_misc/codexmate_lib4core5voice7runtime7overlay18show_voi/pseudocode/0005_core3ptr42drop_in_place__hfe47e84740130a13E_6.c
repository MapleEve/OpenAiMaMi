// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1005e5010 d=1
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..window..Window$GT$::hfe47e84740130a13(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  core::ptr::drop_in_place$LT$tauri_runtime..window..DetachedWindow$LT$tauri..EventLoopMessage$C$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h254d18683a9eda17(); /*0x1005e501a*/
  if ( !_InterlockedDecrement64(a1[64]) ) /*0x1005e5026*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7(a1 + 64); /*0x1005e5033*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h0a3531b4088b4c0a(a1 + 45); /*0x1005e503f*/
  if ( !_InterlockedDecrement64(a1[65]) ) /*0x1005e504b*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h93c2314b85f18d8a(a1 + 65); /*0x1005e5058*/
  result = a1[66]; /*0x1005e505d*/
  if ( !_InterlockedDecrement64(result) ) /*0x1005e5064*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hd8add882f5013821(a1 + 66); /*0x1005e5078*/
  return result; /*0x1005e5074*/
}