// mac 1.1.8 switch_account_and_restart_codex node va=0x100e6fd90 depth=3
// core3ptr121drop_in_place
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..manager..webview..WebviewManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h98d2fa8bee93511c(
        __int64 a1)
{
  pthread_mutex_t *v1; // r15
  __int64 v2; // r12
  __int64 v3; // rsi
  volatile signed __int64 *v4; // rax
  pthread_mutex_t *v5; // r15
  volatile signed __int64 *result; // rax

  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 72)); /*0x100e6fda5*/
  v1 = *(pthread_mutex_t **)(a1 + 72); /*0x100e6fdaa*/
  *(_QWORD *)(a1 + 72) = 0; /*0x100e6fdae*/
  if ( v1 ) /*0x100e6fdb9*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100e6fdbe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fdd0*/
  }
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h86277eabf9c5f469(a1 + 88); /*0x100e6fdd9*/
  v2 = *(_QWORD *)(a1 + 56); /*0x100e6fde2*/
  if ( *(_QWORD *)v2 ) /*0x100e6fde6*/
    (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(a1 + 48)); /*0x100e6fdf2*/
  v3 = *(_QWORD *)(v2 + 8); /*0x100e6fdf4*/
  if ( v3 ) /*0x100e6fdfc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fe06*/
  v4 = *(volatile signed __int64 **)(a1 + 136); /*0x100e6fe0b*/
  if ( v4 && !_InterlockedDecrement64(v4) ) /*0x100e6fe17*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9d7e1e6b2f5c736a(a1 + 136); /*0x100e6fe24*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 152)); /*0x100e6fe33*/
  v5 = *(pthread_mutex_t **)(a1 + 152); /*0x100e6fe38*/
  *(_QWORD *)(a1 + 152) = 0; /*0x100e6fe3c*/
  if ( v5 ) /*0x100e6fe47*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v5); /*0x100e6fe4c*/
    v3 = 64; /*0x100e6fe51*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fe5e*/
  }
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h68c4a1d83e456528(a1 + 168, v3); /*0x100e6fe6a*/
  result = *(volatile signed __int64 **)(a1 + 64); /*0x100e6fe6f*/
  if ( !_InterlockedDecrement64(result) ) /*0x100e6fe73*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h215683d809826ea4(a1 + 64); /*0x100e6fe7d*/
  if ( *(_QWORD *)a1 ) /*0x100e6fe82*/
    result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fe93*/
  if ( *(_QWORD *)(a1 + 24) ) /*0x100e6fe98*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6feb2*/
  return result; /*0x100e6feaa*/
}