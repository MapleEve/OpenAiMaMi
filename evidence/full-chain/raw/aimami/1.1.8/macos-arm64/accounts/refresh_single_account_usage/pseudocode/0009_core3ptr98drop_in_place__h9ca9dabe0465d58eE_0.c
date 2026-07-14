// mac 1.1.8 refresh_single_account_usage node va=0x1000d42b0 depth=3
// core3ptr98drop_in_place::h9ca9dabe0465d58eE_0
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri_runtime_wry..DispatcherMainThreadContext$LT$tauri..EventLoopMessage$GT$$GT$::h9ca9dabe0465d58e(
        __int64 a1)
{
  __int64 v2; // rax
  volatile signed __int64 **v3; // rdi
  volatile signed __int64 *result; // rax

  _$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e615eb6a13c2dae((__int64 *)a1); /*0x1000d42bd*/
  _$LT$crossbeam_channel..channel..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57860ad6dfa1cd43(a1 + 16); /*0x1000d42c9*/
  v2 = *(_QWORD *)(a1 + 16); /*0x1000d42ce*/
  v3 = (volatile signed __int64 **)(a1 + 24); /*0x1000d42d2*/
  if ( v2 == 4 ) /*0x1000d42da*/
  {
    if ( !_InterlockedDecrement64(*v3) ) /*0x1000d42f4*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf7109c50132fb9c7(v3); /*0x1000d42fa*/
  }
  else if ( (_DWORD)v2 == 3 && !_InterlockedDecrement64(*v3) ) /*0x1000d42e4*/
  {
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7a8177ffa7b1633c(v3); /*0x1000d42ea*/
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x1000d4303*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hc9f0e44b52ef1dd8(a1 + 32); /*0x1000d430d*/
  result = *(volatile signed __int64 **)(a1 + 40); /*0x1000d4312*/
  if ( !_InterlockedDecrement64(result) ) /*0x1000d4316*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6baf49577a425bc6(a1 + 40); /*0x1000d432d*/
  return result; /*0x1000d4327*/
}