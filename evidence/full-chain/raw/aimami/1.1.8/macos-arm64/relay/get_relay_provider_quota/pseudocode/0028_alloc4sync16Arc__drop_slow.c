// mac 1.1.8 get_relay_provider_quota node va=0x100f3c760 depth=5
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdd89cccd96410b35(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  volatile signed __int64 **v3; // r14
  __int64 v4; // r12
  pthread_mutex_t *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rsi
  pthread_mutex_t *v8; // r14
  volatile signed __int64 *v9; // rax
  volatile signed __int64 *result; // rax

  v1 = *a1; /*0x100f3c771*/
  v2 = *a1 + 16; /*0x100f3c774*/
  if ( *(_QWORD *)(*a1 + 128) ) /*0x100f3c778*/
  {
    v3 = (volatile signed __int64 **)(*(_QWORD *)(v1 + 120) + 8LL); /*0x100f3c78c*/
    v4 = *(_QWORD *)(*a1 + 128); /*0x100f3c790*/
    do /*0x100f3c7a7*/
    {
      if ( !_InterlockedDecrement64(*(v3 - 1)) ) /*0x100f3c7ad*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7be7dbed4667792a(v3 - 1); /*0x100f3c7b7*/
      if ( !_InterlockedDecrement64(*v3) ) /*0x100f3c7bf*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h094903380f6ab8fc(v3); /*0x100f3c7c8*/
      v3 += 2; /*0x100f3c7a0*/
      --v4; /*0x100f3c7a4*/
    }
    while ( v4 ); /*0x100f3c7a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3c7df*/
  }
  core::ptr::drop_in_place$LT$tokio..runtime..task..list..OwnedTasks$LT$alloc..sync..Arc$LT$tokio..runtime..scheduler..current_thread..Handle$GT$$GT$$GT$::he6e8ee437bb3d1f0( /*0x100f3c7f2*/
    *(_QWORD *)(v1 + 136),
    *(_QWORD *)(v1 + 144));
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v1 + 232); /*0x100f3c801*/
  v5 = *(pthread_mutex_t **)(v1 + 232); /*0x100f3c806*/
  *(_QWORD *)(v1 + 232) = 0; /*0x100f3c80a*/
  if ( v5 ) /*0x100f3c815*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v5); /*0x100f3c81a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3c82c*/
  }
  v6 = *(_QWORD *)(v1 + 248); /*0x100f3c831*/
  if ( v6 ) /*0x100f3c83b*/
  {
    v6 *= 8; /*0x100f3c844*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3c84d*/
  }
  core::ptr::drop_in_place$LT$tokio..loom..std..mutex..Mutex$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$tokio..runtime..scheduler..multi_thread..worker..Core$GT$$GT$$GT$$GT$::h7a6c06d17012b3d6( /*0x100f3c859*/
    v1 + 296,
    v6);
  core::ptr::drop_in_place$LT$tokio..runtime..config..Config$GT$::h997e3bb3b70df636(v2); /*0x100f3c861*/
  v7 = *(_QWORD *)(v1 + 200); /*0x100f3c86d*/
  core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$tokio..runtime..metrics..worker..WorkerMetrics$u5d$$GT$$GT$::h3d3d306374fe5061( /*0x100f3c874*/
    *(_QWORD *)(v1 + 192),
    v7);
  core::ptr::drop_in_place$LT$tokio..runtime..driver..Handle$GT$::ha15fe92b61e12147(v1 + 336); /*0x100f3c880*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 512)) ) /*0x100f3c88c*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h72cab2eaca6079d9(v1 + 512); /*0x100f3c899*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v1 + 520); /*0x100f3c8a8*/
  v8 = *(pthread_mutex_t **)(v1 + 520); /*0x100f3c8ad*/
  *(_QWORD *)(v1 + 520) = 0; /*0x100f3c8b0*/
  if ( v8 ) /*0x100f3c8ba*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v8); /*0x100f3c8bf*/
    v7 = 64; /*0x100f3c8c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3c8d1*/
  }
  v9 = *(volatile signed __int64 **)(v1 + 544); /*0x100f3c8d6*/
  if ( v9 && !_InterlockedDecrement64(v9) ) /*0x100f3c8e2*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(v1 + 544, v7); /*0x100f3c8ef*/
  result = *(volatile signed __int64 **)(v1 + 560); /*0x100f3c8f4*/
  if ( result && !_InterlockedDecrement64(result) ) /*0x100f3c900*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe4109b7e9efd923(v1 + 560, v7); /*0x100f3c90d*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100f3c918*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3c93a*/
  return result; /*0x100f3c92c*/
}