// IDA Hex-Rays decompile evidence
// addr: 0x100480b40
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$tokio..task..spawn..spawn_inner$LT$tauri..ipc..InvokeResolver..respond_async_serialized_inner$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0103e6a34da930b3(
        __int64 a1)
{
  __int64 v1; // r15
  double result; // xmm0_8
  __int64 v3; // rsi

  v1 = a1 + 16; /*0x100480b4d*/
  if ( !*(_BYTE *)(a1 + 11040) ) /*0x100480b5a*/
  {
    result = core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb52061c4936998c3(a1 + 408); /*0x100480b9b*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(v1, result); /*0x100480ba3*/
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 400)) ) /*0x100480baf*/
      goto LABEL_7; /*0x100480bb3*/
    goto LABEL_6; /*0x100480bb3*/
  }
  if ( *(_BYTE *)(a1 + 11040) != 3 ) /*0x100480b5f*/
    return result; /*0x100480b5f*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb52061c4936998c3(a1 + 5720); /*0x100480b6c*/
  core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(v1, result); /*0x100480b74*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 400)) ) /*0x100480b80*/
LABEL_6:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h5d19b466b6439485(a1 + 400); /*0x100480bb5*/
LABEL_7:
  v3 = *(_QWORD *)(a1 + 376); /*0x100480bc1*/
  if ( v3 ) /*0x100480bcb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 384), v3, 1); /*0x100480be3*/
  return result; /*0x100480bdd*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1004749b0  __ZN4core3ptr126drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$17hb52061c4936998c3E_3
// 0x1004891d0  __ZN4core3ptr44drop_in_place$LT$tauri..webview..Webview$GT$17h4246a4a063072089E_5
// 0x1011e4450  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h5d19b466b6439485E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
