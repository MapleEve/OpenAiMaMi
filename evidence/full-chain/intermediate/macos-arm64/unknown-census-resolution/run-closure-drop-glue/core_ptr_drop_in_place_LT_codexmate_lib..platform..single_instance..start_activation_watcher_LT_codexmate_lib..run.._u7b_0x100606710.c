// IDA Hex-Rays decompile evidence
// addr: 0x100606710
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..platform..single_instance..start_activation_watcher$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::he776ec05fe745459(
        __int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 152); /*0x10060671a*/
  if ( v1 ) /*0x100606724*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 160), v1, 1); /*0x100606732*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 176)) ) /*0x10060673e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(a1 + 176); /*0x10060674b*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1); /*0x100606753*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100b41e40  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he1e1b98483d5e042E
// 0x100608640  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_7
