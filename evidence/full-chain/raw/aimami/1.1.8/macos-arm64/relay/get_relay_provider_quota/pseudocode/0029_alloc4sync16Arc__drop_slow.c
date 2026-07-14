// mac 1.1.8 get_relay_provider_quota node va=0x100f3ba80 depth=5
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h02ebab068a98fde1(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  pthread_mutex_t *v3; // r15
  __int64 v4; // rsi
  pthread_mutex_t *v5; // r15
  pthread_mutex_t *v6; // r15
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *result; // rax

  v1 = *a1; /*0x100f3ba8b*/
  v2 = (pthread_mutex_t **)(*a1 + 264LL); /*0x100f3ba8e*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100f3ba98*/
  v3 = *v2; /*0x100f3ba9d*/
  *v2 = nullptr; /*0x100f3baa1*/
  if ( v3 ) /*0x100f3baac*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x100f3bab1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3bac3*/
  }
  v4 = *(_QWORD *)(v1 + 312); /*0x100f3bacf*/
  core::ptr::drop_in_place$LT$tokio..runtime..task..list..OwnedTasks$LT$alloc..sync..Arc$LT$tokio..runtime..scheduler..current_thread..Handle$GT$$GT$$GT$::he6e8ee437bb3d1f0( /*0x100f3bad6*/
    *(_QWORD *)(v1 + 304),
    v4);
  core::ptr::drop_in_place$LT$tokio..runtime..config..Config$GT$::h997e3bb3b70df636(v1 + 360); /*0x100f3bae2*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v1 + 144); /*0x100f3baf1*/
  v5 = *(pthread_mutex_t **)(v1 + 144); /*0x100f3baf6*/
  *(_QWORD *)(v1 + 144) = 0; /*0x100f3bafa*/
  if ( v5 ) /*0x100f3bb05*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v5); /*0x100f3bb0a*/
    v4 = 64; /*0x100f3bb0f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3bb1c*/
  }
  core::ptr::drop_in_place$LT$tokio..runtime..driver..Handle$GT$::ha15fe92b61e12147(v1 + 544); /*0x100f3bb28*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 720)) ) /*0x100f3bb34*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h72cab2eaca6079d9(v1 + 720); /*0x100f3bb41*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v1 + 728); /*0x100f3bb50*/
  v6 = *(pthread_mutex_t **)(v1 + 728); /*0x100f3bb55*/
  *(_QWORD *)(v1 + 728) = 0; /*0x100f3bb59*/
  if ( v6 ) /*0x100f3bb64*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v6); /*0x100f3bb69*/
    v4 = 64; /*0x100f3bb6e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3bb7b*/
  }
  v7 = *(volatile signed __int64 **)(v1 + 512); /*0x100f3bb80*/
  if ( v7 && !_InterlockedDecrement64(v7) ) /*0x100f3bb8c*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(v1 + 512, v4); /*0x100f3bb99*/
  result = *(volatile signed __int64 **)(v1 + 528); /*0x100f3bb9e*/
  if ( result && !_InterlockedDecrement64(result) ) /*0x100f3bbaa*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(v1 + 528, v4); /*0x100f3bbb7*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100f3bbc2*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3bbde*/
  return result; /*0x100f3bbd6*/
}