// IDA Hex-Rays decompile evidence
// addr: 0x100114560
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tokio..runtime..task..core..Cell$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$alloc..sync..Arc$LT$tokio..runtime..scheduler..current_thread..Handle$GT$$GT$$GT$::h00ad9d2a2770f86b(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x100114572*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h02ebab068a98fde1(a1 + 32); /*0x10011457c*/
  v1 = *(_DWORD *)(a1 + 48); /*0x100114581*/
  if ( v1 == 1 ) /*0x100114587*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x100114598*/
    {
      v2 = *(_QWORD *)(a1 + 64); /*0x10011459f*/
      if ( v2 ) /*0x1001145a6*/
      {
        v3 = *(_QWORD *)(a1 + 72); /*0x1001145a8*/
        if ( *(_QWORD *)v3 ) /*0x1001145ac*/
          (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 + 64)); /*0x1001145b8*/
        v4 = *(_QWORD *)(v3 + 8); /*0x1001145ba*/
        if ( v4 ) /*0x1001145c2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1001145cc*/
      }
    }
  }
  else if ( !v1 ) /*0x10011458b*/
  {
    core::ptr::drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8dca46abdbf23959(a1 + 56); /*0x100114591*/
  }
  v5 = *(_QWORD *)(a1 + 3616); /*0x1001145d1*/
  if ( v5 ) /*0x1001145db*/
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(a1 + 3624)); /*0x1001145e4*/
  result = *(volatile signed __int64 **)(a1 + 3632); /*0x1001145e7*/
  if ( result ) /*0x1001145f1*/
  {
    if ( !_InterlockedDecrement64(result) ) /*0x1001145f3*/
      return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(a1 + 3632); /*0x10011460b*/
  }
  return result; /*0x100114603*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1012ad020  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h02ebab068a98fde1E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100106ea0  __ZN4core3ptr221drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h8dca46abdbf23959E_0
// 0x1012adc70  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hfe4109b7e9efd923E
