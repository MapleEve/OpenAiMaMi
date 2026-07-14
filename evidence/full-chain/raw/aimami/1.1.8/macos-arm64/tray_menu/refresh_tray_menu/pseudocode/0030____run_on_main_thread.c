// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x100e417f0 depth=2
// _::run_on_main_thread
__int64 *__fastcall _$LT$tauri_runtime_wry..WryHandle$LT$T$GT$$u20$as$u20$tauri_runtime..RuntimeHandle$LT$T$GT$$GT$::run_on_main_thread::h0716344a9861738d(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // al
  char v10; // of
  __int64 v11; // rt0
  __int64 v12; // rt0
  __int64 v13; // rax
  __CFRunLoop *Main; // rax
  _BYTE v16[176]; // [rsp+0h] [rbp-2E0h] BYREF
  char v17; // [rsp+B0h] [rbp-230h] BYREF
  _BYTE v18[175]; // [rsp+B1h] [rbp-22Fh] BYREF
  _QWORD __src[22]; // [rsp+160h] [rbp-180h] BYREF
  __int64 __dst[26]; // [rsp+210h] [rbp-D0h] BYREF

  __dst[0] = a3; /*0x100e4180e*/
  __dst[1] = a4; /*0x100e41815*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100e4181c*/
  v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x100e4182b*/
  if ( !v6 ) /*0x100e41833*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x100e41995*/
  *v6 = a3; /*0x100e41839*/
  v6[1] = a4; /*0x100e4183c*/
  __src[1] = v6; /*0x100e41840*/
  __src[2] = &anon_ac6b37b34973d10a676d8a781928ad70_193; /*0x100e4184e*/
  LOBYTE(__src[0]) = 28; /*0x100e41855*/
  __dst[0] = std::thread::current::current::hd610940328775657(); /*0x100e41861*/
  v7 = *(_QWORD *)(__dst[0] + 16); /*0x100e41868*/
  v8 = *(_QWORD *)(a2 + 80); /*0x100e4186c*/
  v9 = _InterlockedDecrement64((volatile signed __int64 *)__dst[0]) == 0; /*0x100e41874*/
  if ( v7 == v8 ) /*0x100e4187a*/
  {
    if ( v9 ) /*0x100e4187e*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x100e41887*/
    memcpy(__dst, __src, 0xB0u); /*0x100e4189f*/
    v11 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 72)); /*0x100e418a8*/
    if ( (v11 < 0) ^ v10 | (v11 == 0) /*0x100e418ba*/
      || (v12 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 64)), (v12 < 0) ^ v10 | (v12 == 0)) )
    {
      BUG(); /*0x100e4199a*/
    }
    tauri_runtime_wry::handle_user_message::h1f60df396f563f2b(a2 + 24, __dst); /*0x100e418ce*/
    v13 = 19; /*0x100e418d3*/
  }
  else
  {
    if ( v9 ) /*0x100e418df*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x100e418e8*/
    memcpy(v16, __src, sizeof(v16)); /*0x100e41903*/
    crossbeam_channel::channel::Sender$LT$T$GT$::send::h597254f4a671b322(__dst, a2, v16); /*0x100e41915*/
    if ( LOBYTE(__dst[0]) == 40 ) /*0x100e41926*/
    {
      CFRunLoopSourceSignal(*(CFRunLoopSourceRef *)(a2 + 16)); /*0x100e4192c*/
      Main = CFRunLoopGetMain(); /*0x100e41931*/
      CFRunLoopWakeUp(Main); /*0x100e41939*/
      v13 = 19; /*0x100e4193e*/
    }
    else
    {
      memcpy(v18, (char *)__dst + 1, sizeof(v18)); /*0x100e41958*/
      v17 = __dst[0]; /*0x100e4195d*/
      core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::h9eae3404e311b8f2(&v17); /*0x100e4196b*/
      v13 = 3; /*0x100e41970*/
    }
  }
  *a1 = v13; /*0x100e41975*/
  return a1; /*0x100e4197b*/
}