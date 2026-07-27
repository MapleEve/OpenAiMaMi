// IDA Hex-Rays decompile evidence
// addr: 0x100756de0
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
_QWORD *__fastcall core::ptr::drop_in_place$LT$tauri..app..App..make_run_event_loop_callback$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h331fbd43de0de19f(
        __int64 a1)
{
  _QWORD *v1; // rax
  bool v2; // zf
  _QWORD *result; // rax

  core::ptr::drop_in_place$LT$tauri..app..App$GT$::h5c85a4d339beb920(); /*0x100756dea*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 360); /*0x100756df6*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x100756e02*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7(a1 + 512); /*0x100756e0f*/
  v1 = *(_QWORD **)(a1 + 520); /*0x100756e14*/
  v2 = (*v1)-- == 1; /*0x100756e1b*/
  if ( v2 ) /*0x100756e1e*/
    alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::h7a772f7213d8954e(a1 + 520); /*0x100756e27*/
  result = *(_QWORD **)(a1 + 528); /*0x100756e2c*/
  v2 = (*result)-- == 1; /*0x100756e33*/
  if ( v2 ) /*0x100756e36*/
    return (_QWORD *)alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::h3653d8a40b8e45c8(a1 + 528); /*0x100756e4b*/
  return result; /*0x100756e38*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x10075b740  __ZN4core3ptr36drop_in_place$LT$tauri..app..App$GT$17h5c85a4d339beb920E
// 0x10075c4a0  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_9
// 0x1011e4900  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hb59fb20f0e1eded7E
// 0x1002ceee0  __ZN5alloc2rc15Rc$LT$T$C$A$GT$9drop_slow17h7a772f7213d8954eE
// 0x1002cec80  __ZN5alloc2rc15Rc$LT$T$C$A$GT$9drop_slow17h3653d8a40b8e45c8E
