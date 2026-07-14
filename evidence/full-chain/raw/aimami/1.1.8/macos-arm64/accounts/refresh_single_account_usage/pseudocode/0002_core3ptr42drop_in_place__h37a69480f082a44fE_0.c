// mac 1.1.8 refresh_single_account_usage node va=0x1000cc510 depth=1
// core3ptr42drop_in_place::h37a69480f082a44fE_0
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  core::ptr::drop_in_place$LT$tauri_runtime_wry..Context$LT$tauri..EventLoopMessage$GT$$GT$::h4feecc8e6ef2ab2b(); /*0x1000cc51a*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x1000cc526*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7(a1 + 136); /*0x1000cc533*/
  result = *(volatile signed __int64 **)(a1 + 144); /*0x1000cc538*/
  if ( !_InterlockedDecrement64(result) ) /*0x1000cc53f*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4471ce70b2d68f08(a1 + 144); /*0x1000cc553*/
  return result; /*0x1000cc54f*/
}