// mac 1.1.8 switch_account_and_restart_codex node va=0x100e6f940 depth=3
// core3ptr115drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..manager..menu..MenuManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h3f4770c32d7c05d5(
        __int64 a1)
{
  pthread_mutex_t *v1; // r15
  volatile signed __int64 *v2; // rax
  pthread_mutex_t *v3; // r15

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)a1) ) /*0x100e6f951*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hd6fe129b622942f3(a1); /*0x100e6f95a*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 8)); /*0x100e6f966*/
  v1 = *(pthread_mutex_t **)(a1 + 8); /*0x100e6f96b*/
  *(_QWORD *)(a1 + 8) = 0; /*0x100e6f96f*/
  if ( v1 ) /*0x100e6f97a*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100e6f97f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6f991*/
  }
  v2 = *(volatile signed __int64 **)(a1 + 24); /*0x100e6f996*/
  if ( v2 && !_InterlockedDecrement64(v2) ) /*0x100e6f99f*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e(a1 + 24); /*0x100e6f9a9*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$$RF$tauri..app..AppHandle$C$tauri..menu..MenuEvent$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::hdc13c357480d2664(a1 + 32); /*0x100e6f9b2*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 72)); /*0x100e6f9be*/
  v3 = *(pthread_mutex_t **)(a1 + 72); /*0x100e6f9c3*/
  *(_QWORD *)(a1 + 72) = 0; /*0x100e6f9c7*/
  if ( v3 ) /*0x100e6f9d2*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x100e6f9d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6f9e9*/
  }
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd5d02b8e4de154c6(a1 + 88); /*0x100e6f9f5*/
}