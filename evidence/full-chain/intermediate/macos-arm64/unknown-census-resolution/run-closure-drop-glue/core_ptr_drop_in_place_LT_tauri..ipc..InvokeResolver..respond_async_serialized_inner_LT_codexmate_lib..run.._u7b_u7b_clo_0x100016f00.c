// IDA Hex-Rays decompile evidence
// addr: 0x100016f00
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8bdf23e225e95955(
        __int64 a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi

  if ( !*(_BYTE *)(a1 + 1856) ) /*0x100016f13*/
  {
    result = core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h487e83295c667169(a1 + 392); /*0x100016f50*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(a1, result); /*0x100016f58*/
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 384)) ) /*0x100016f64*/
      goto LABEL_7; /*0x100016f68*/
    goto LABEL_6; /*0x100016f68*/
  }
  if ( *(_BYTE *)(a1 + 1856) != 3 ) /*0x100016f18*/
    return result; /*0x100016f18*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h487e83295c667169(a1 + 1120); /*0x100016f21*/
  core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(a1, result); /*0x100016f29*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 384)) ) /*0x100016f35*/
LABEL_6:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h5d19b466b6439485(a1 + 384); /*0x100016f6a*/
LABEL_7:
  v2 = *(_QWORD *)(a1 + 360); /*0x100016f76*/
  if ( v2 ) /*0x100016f80*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 368), v2, 1); /*0x100016f92*/
  return result; /*0x100016f8e*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100007120  __ZN4core3ptr126drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h487e83295c667169E
// 0x100034410  __ZN4core3ptr44drop_in_place$LT$tauri..webview..Webview$GT$17h4246a4a063072089E
// 0x1011e4450  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h5d19b466b6439485E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
