// IDA Hex-Rays decompile evidence
// addr: 0x10001d300
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$tokio..runtime..task..core..Stage$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h03aee46c5bf667ec(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // rsi
  double result; // xmm0_8

  if ( !*(_DWORD *)a1 ) /*0x10001d30a*/
    return core::ptr::drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h81fdabda9df8a61f(a1 + 8); /*0x10001d36e*/
  if ( *(_DWORD *)a1 == 1 ) /*0x10001d313*/
  {
    if ( *(_QWORD *)(a1 + 8) ) /*0x10001d315*/
    {
      v1 = *(_QWORD *)(a1 + 16); /*0x10001d31c*/
      if ( v1 ) /*0x10001d323*/
      {
        v2 = *(_QWORD *)(a1 + 24); /*0x10001d325*/
        if ( *(_QWORD *)v2 ) /*0x10001d329*/
          (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a1 + 16)); /*0x10001d334*/
        v3 = *(_QWORD *)(v2 + 8); /*0x10001d336*/
        if ( v3 ) /*0x10001d33d*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v3, *(_QWORD *)(v2 + 16)); /*0x10001d350*/
      }
    }
  }
  return result; /*0x10001d34a*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100019200  __ZN4core3ptr221drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h81fdabda9df8a61fE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
