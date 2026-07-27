// IDA Hex-Rays decompile evidence
// addr: 0x1003ef710
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$tokio..runtime..task..core..CoreStage$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h00fb65c0e6a7e46a(
        __int64 a1)
{
  double result; // xmm0_8
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rsi

  if ( *(_DWORD *)a1 == 1 ) /*0x1003ef71f*/
  {
    if ( *(_QWORD *)(a1 + 8) ) /*0x1003ef738*/
    {
      v2 = *(_QWORD *)(a1 + 16); /*0x1003ef73f*/
      if ( v2 ) /*0x1003ef746*/
      {
        v3 = *(_QWORD *)(a1 + 24); /*0x1003ef748*/
        if ( *(_QWORD *)v3 ) /*0x1003ef74c*/
          (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 + 16)); /*0x1003ef757*/
        v4 = *(_QWORD *)(v3 + 8); /*0x1003ef759*/
        if ( v4 ) /*0x1003ef760*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1003ef773*/
      }
    }
  }
  else if ( !*(_DWORD *)a1 ) /*0x1003ef71a*/
  {
    return core::ptr::drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2e61663b3e3a5573(a1 + 8); /*0x1003ef733*/
  }
  return result; /*0x1003ef72d*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1003ea850  __ZN4core3ptr221drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h2e61663b3e3a5573E_2
