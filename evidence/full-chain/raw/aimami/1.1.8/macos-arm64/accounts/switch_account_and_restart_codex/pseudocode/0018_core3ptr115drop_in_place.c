// mac 1.1.8 switch_account_and_restart_codex node va=0x100e6fac0 depth=3
// core3ptr115drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..manager..tray..TrayManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hfc33f05072fc3999(
        __int64 a1)
{
  pthread_mutex_t *v1; // r15
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  pthread_mutex_t *v5; // r15

  if ( *(_QWORD *)a1 >= (signed __int64)0x8000000000000002LL && *(_QWORD *)a1 ) /*0x100e6face*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6faee*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 32)); /*0x100e6fafa*/
  v1 = *(pthread_mutex_t **)(a1 + 32); /*0x100e6faff*/
  *(_QWORD *)(a1 + 32) = 0; /*0x100e6fb03*/
  if ( v1 ) /*0x100e6fb0e*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100e6fb13*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fb25*/
  }
  v2 = *(_QWORD *)(a1 + 64); /*0x100e6fb2a*/
  if ( v2 ) /*0x100e6fb31*/
  {
    v3 = *(_QWORD *)(a1 + 56) + 8LL; /*0x100e6fb37*/
    do /*0x100e6fb47*/
    {
      if ( *(_QWORD *)(v3 - 8) ) /*0x100e6fb49*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fb5a*/
      v3 += 32; /*0x100e6fb40*/
      --v2; /*0x100e6fb44*/
    }
    while ( v2 ); /*0x100e6fb47*/
  }
  v4 = *(_QWORD *)(a1 + 48); /*0x100e6fb61*/
  if ( v4 ) /*0x100e6fb68*/
  {
    v4 *= 32; /*0x100e6fb6e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fb77*/
  }
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$$RF$tauri..app..AppHandle$C$tauri..tray..TrayIconEvent$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::ha1de24236455e18a( /*0x100e6fb80*/
    a1 + 72,
    v4);
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 112)); /*0x100e6fb8c*/
  v5 = *(pthread_mutex_t **)(a1 + 112); /*0x100e6fb91*/
  *(_QWORD *)(a1 + 112) = 0; /*0x100e6fb95*/
  if ( v5 ) /*0x100e6fba0*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v5); /*0x100e6fba5*/
    v4 = 64; /*0x100e6fbaa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fbb7*/
  }
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd10b4c789498ed17( /*0x100e6fbc3*/
           a1 + 128,
           v4);
}