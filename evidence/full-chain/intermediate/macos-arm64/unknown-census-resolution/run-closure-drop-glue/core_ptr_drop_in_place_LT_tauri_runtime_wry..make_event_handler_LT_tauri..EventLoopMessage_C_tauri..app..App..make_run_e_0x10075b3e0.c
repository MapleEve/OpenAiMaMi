// IDA Hex-Rays decompile evidence
// addr: 0x10075b3e0
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri_runtime_wry..make_event_handler$LT$tauri..EventLoopMessage$C$tauri..app..App..make_run_event_loop_callback$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::ha2d2d304d8e1c497(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 560)) ) /*0x10075b3f1*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb9eb87ec66c63ed8(a1 + 560); /*0x10075b3fe*/
  CFRelease(*(CFTypeRef *)(a1 + 16)); /*0x10075b407*/
  _$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd5b552ca0bc4b0ee(a1); /*0x10075b40f*/
  core::ptr::drop_in_place$LT$tauri..app..App..make_run_event_loop_callback$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h331fbd43de0de19f(a1 + 24); /*0x10075b418*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 568)) ) /*0x10075b424*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he732eb83c0251b10(a1 + 568); /*0x10075b431*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 576)) ) /*0x10075b43d*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6baf49577a425bc6(a1 + 576); /*0x10075b44a*/
  result = *(volatile signed __int64 **)(a1 + 584); /*0x10075b44f*/
  if ( !_InterlockedDecrement64(result) ) /*0x10075b456*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hc9f0e44b52ef1dd8(a1 + 584); /*0x10075b46a*/
  return result; /*0x10075b466*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1011e4db0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hb9eb87ec66c63ed8E
// 0x1014af69a  _CFRelease
// 0x100797fd0  __ZN85_$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hd5b552ca0bc4b0eeE
// 0x100756de0  __ZN4core3ptr150drop_in_place$LT$tauri..app..App..make_run_event_loop_callback$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h331fbd43de0de19fE
// 0x1011e5570  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he732eb83c0251b10E
// 0x10120bdf0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h6baf49577a425bc6E
// 0x10120c190  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hc9f0e44b52ef1dd8E
