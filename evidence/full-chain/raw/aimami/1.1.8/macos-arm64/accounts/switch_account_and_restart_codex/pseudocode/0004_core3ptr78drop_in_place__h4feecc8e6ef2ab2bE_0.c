// mac 1.1.8 switch_account_and_restart_codex node va=0x1000d2e00 depth=2
// core3ptr78drop_in_place::h4feecc8e6ef2ab2bE_0
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri_runtime_wry..Context$LT$tauri..EventLoopMessage$GT$$GT$::h4feecc8e6ef2ab2b(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 72)) ) /*0x1000d2e0e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he732eb83c0251b10(a1 + 72); /*0x1000d2e18*/
  CFRelease(*(CFTypeRef *)(a1 + 16)); /*0x1000d2e21*/
  _$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e615eb6a13c2dae(a1); /*0x1000d2e29*/
  core::ptr::drop_in_place$LT$tauri_runtime_wry..DispatcherMainThreadContext$LT$tauri..EventLoopMessage$GT$$GT$::h9ca9dabe0465d58e(a1 + 24); /*0x1000d2e32*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x1000d2e3b*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb9eb87ec66c63ed8(a1 + 88); /*0x1000d2e45*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x1000d2e4e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(a1 + 96); /*0x1000d2e58*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 104)) ) /*0x1000d2e61*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(a1 + 104); /*0x1000d2e6b*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) ) /*0x1000d2e74*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(a1 + 112); /*0x1000d2e7e*/
  result = *(volatile signed __int64 **)(a1 + 120); /*0x1000d2e83*/
  if ( !_InterlockedDecrement64(result) ) /*0x1000d2e87*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(a1 + 120); /*0x1000d2e98*/
  return result; /*0x1000d2e94*/
}