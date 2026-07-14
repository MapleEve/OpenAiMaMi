// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1001f50b0 depth=2
// tauri_runtime_wry17send_user_message
__int64 *__fastcall tauri_runtime_wry::send_user_message::h77ed2756619c4a08(__int64 *a1, __int64 a2, const void *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // al
  char v7; // of
  __int64 v8; // rt0
  __int64 v9; // rt0
  __CFRunLoop *Main; // rax
  __int64 v11; // rax
  _BYTE v13[176]; // [rsp+0h] [rbp-230h] BYREF
  char v14; // [rsp+B0h] [rbp-180h] BYREF
  _BYTE v15[175]; // [rsp+B1h] [rbp-17Fh] BYREF
  __int64 __dst[26]; // [rsp+160h] [rbp-D0h] BYREF

  __dst[0] = std::thread::current::current::hd610940328775657(); /*0x1001f50d0*/
  v4 = *(_QWORD *)(__dst[0] + 16); /*0x1001f50d7*/
  v5 = *(_QWORD *)(a2 + 80); /*0x1001f50db*/
  v6 = _InterlockedDecrement64((volatile signed __int64 *)__dst[0]) == 0; /*0x1001f50e3*/
  if ( v4 == v5 ) /*0x1001f50e9*/
  {
    if ( v6 ) /*0x1001f50ed*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x1001f50f6*/
    memcpy(__dst, a3, 0xB0u); /*0x1001f510a*/
    v8 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 72)); /*0x1001f5113*/
    if ( (v8 < 0) ^ v7 | (v8 == 0) /*0x1001f5125*/
      || (v9 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 64)), (v9 < 0) ^ v7 | (v9 == 0)) )
    {
      BUG(); /*0x1001f51ea*/
    }
    tauri_runtime_wry::handle_user_message::h5bea101aa347bd74(a2 + 24, __dst); /*0x1001f5139*/
  }
  else
  {
    if ( v6 ) /*0x1001f5142*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x1001f514b*/
    memcpy(v13, a3, sizeof(v13)); /*0x1001f5162*/
    crossbeam_channel::channel::Sender$LT$T$GT$::send::h31a9da9d294c8666(__dst, a2, v13); /*0x1001f5174*/
    if ( LOBYTE(__dst[0]) != 40 ) /*0x1001f5185*/
    {
      memcpy(v15, (char *)__dst + 1, sizeof(v15)); /*0x1001f51b7*/
      v14 = __dst[0]; /*0x1001f51bc*/
      core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::h902bc30b45adeba4(&v14); /*0x1001f51ca*/
      v11 = 3; /*0x1001f51cf*/
      goto LABEL_13; /*0x1001f51cf*/
    }
    CFRunLoopSourceSignal(*(CFRunLoopSourceRef *)(a2 + 16)); /*0x1001f518b*/
    Main = CFRunLoopGetMain(); /*0x1001f5190*/
    CFRunLoopWakeUp(Main); /*0x1001f5198*/
  }
  v11 = 19; /*0x1001f519d*/
LABEL_13:
  *a1 = v11; /*0x1001f51d4*/
  return a1; /*0x1001f51da*/
}