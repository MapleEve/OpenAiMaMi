// mac 1.1.8 upsert_relay_provider node va=0x1004ef680 depth=1
// core3ptr42drop_in_place::h37a69480f082a44fE_8
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 72)) ) /*0x1004ef68e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he732eb83c0251b10((_QWORD *)(a1 + 72)); /*0x1004ef698*/
  CFRelease(*(CFTypeRef *)(a1 + 16)); /*0x1004ef6a1*/
  _$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e615eb6a13c2dae((__int64 *)a1); /*0x1004ef6a9*/
  core::ptr::drop_in_place$LT$tauri_runtime_wry..DispatcherMainThreadContext$LT$tauri..EventLoopMessage$GT$$GT$::h9ca9dabe0465d58e(a1 + 24); /*0x1004ef6b2*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x1004ef6bb*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb9eb87ec66c63ed8((_QWORD *)(a1 + 88)); /*0x1004ef6c5*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x1004ef6ce*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21((__int64 *)(a1 + 96)); /*0x1004ef6d8*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 104)) ) /*0x1004ef6e1*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21((__int64 *)(a1 + 104)); /*0x1004ef6eb*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) ) /*0x1004ef6f4*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21((__int64 *)(a1 + 112)); /*0x1004ef6fe*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 120)) ) /*0x1004ef707*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21((__int64 *)(a1 + 120)); /*0x1004ef711*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x1004ef71d*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7((_QWORD *)(a1 + 136)); /*0x1004ef72a*/
  result = *(volatile signed __int64 **)(a1 + 144); /*0x1004ef72f*/
  if ( !_InterlockedDecrement64(result) ) /*0x1004ef736*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4471ce70b2d68f08(a1 + 144); /*0x1004ef74a*/
  return result; /*0x1004ef746*/
}