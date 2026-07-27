// IDA Hex-Rays decompile evidence
// addr: 0x100607710
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$std..thread..lifecycle..spawn_unchecked$LT$codexmate_lib..platform..single_instance..start_activation_watcher$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$$LP$$RP$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hae7d7fc474ed4bb2(
        __int64 a1)
{
  __int64 v1; // rsi
  volatile signed __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 192); /*0x10060771d*/
  if ( v1 ) /*0x100607727*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 200), v1, 1); /*0x100607735*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 216)) ) /*0x100607745*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(a1 + 216); /*0x100607752*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 40); /*0x10060775a*/
  core::ptr::drop_in_place$LT$std..thread..spawnhook..ChildSpawnHooks$GT$::h376d110b93d56bbc(a1); /*0x100607762*/
  result = *(volatile signed __int64 **)(a1 + 32); /*0x100607767*/
  if ( !_InterlockedDecrement64(result) ) /*0x10060776b*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1f2fb17b5a781f19(a1 + 32); /*0x100607782*/
  return result; /*0x10060777c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100b41e40  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he1e1b98483d5e042E
// 0x100608640  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_7
// 0x10060c390  __ZN4core3ptr60drop_in_place$LT$std..thread..spawnhook..ChildSpawnHooks$GT$17h376d110b93d56bbcE
// 0x100c66cd0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h1f2fb17b5a781f19E
