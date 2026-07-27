// IDA Hex-Rays decompile evidence
// addr: 0x100027500
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$tokio..runtime..task..core..Cell$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$alloc..sync..Arc$LT$tokio..runtime..scheduler..current_thread..Handle$GT$$GT$$GT$$GT$::h0049413bc7d1024c(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  volatile signed __int64 *v6; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x100027512*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h02ebab068a98fde1(a1 + 32); /*0x10002751c*/
  v1 = *(_DWORD *)(a1 + 48); /*0x100027521*/
  if ( v1 == 1 ) /*0x100027527*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x100027538*/
    {
      v2 = *(_QWORD *)(a1 + 64); /*0x10002753f*/
      if ( v2 ) /*0x100027546*/
      {
        v3 = *(_QWORD *)(a1 + 72); /*0x100027548*/
        if ( *(_QWORD *)v3 ) /*0x10002754c*/
          (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 + 64)); /*0x100027558*/
        v4 = *(_QWORD *)(v3 + 8); /*0x10002755a*/
        if ( v4 ) /*0x100027562*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x10002756c*/
      }
    }
  }
  else if ( !v1 ) /*0x10002752b*/
  {
    core::ptr::drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7f0aa082c1e80242(a1 + 56); /*0x100027531*/
  }
  v5 = *(_QWORD *)(a1 + 11104); /*0x100027571*/
  if ( v5 ) /*0x10002757b*/
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(a1 + 11112)); /*0x100027584*/
  v6 = *(volatile signed __int64 **)(a1 + 11120); /*0x100027587*/
  if ( v6 && !_InterlockedDecrement64(v6) ) /*0x100027593*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(a1 + 11120); /*0x1000275a0*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, 11136, 128); /*0x1000275b2*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1012ad020  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h02ebab068a98fde1E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1000190c0  __ZN4core3ptr221drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h7f0aa082c1e80242E
// 0x1012adc70  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hfe4109b7e9efd923E
