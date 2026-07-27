// IDA Hex-Rays decompile evidence
// addr: 0x100606970
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$std..thread..lifecycle..spawn_unchecked$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$C$$LP$$RP$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h35b74098e9122058(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1 + 40); /*0x10060697e*/
  core::ptr::drop_in_place$LT$std..thread..spawnhook..ChildSpawnHooks$GT$::h376d110b93d56bbc(a1); /*0x100606986*/
  result = *(volatile signed __int64 **)(a1 + 32); /*0x10060698b*/
  if ( !_InterlockedDecrement64(result) ) /*0x10060698f*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1f2fb17b5a781f19(a1 + 32); /*0x1006069a0*/
  return result; /*0x10060699c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100608640  __ZN4core3ptr42drop_in_place$LT$tauri..app..AppHandle$GT$17h1cfa7f2e7ebdb3d9E_7
// 0x10060c390  __ZN4core3ptr60drop_in_place$LT$std..thread..spawnhook..ChildSpawnHooks$GT$17h376d110b93d56bbcE
// 0x100c66cd0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h1f2fb17b5a781f19E
