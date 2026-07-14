// mac 1.1.8 get_relay_provider_quota node va=0x100b10f40 depth=4
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h28736d088ed87f42(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  __int64 result; // rax
  pthread_mutex_t *v4; // r15

  v1 = *a1; /*0x100b10f4b*/
  v2 = (pthread_mutex_t **)(*a1 + 32LL); /*0x100b10f4e*/
  result = _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100b10f55*/
  v4 = *v2; /*0x100b10f5a*/
  *v2 = nullptr; /*0x100b10f5e*/
  if ( v4 ) /*0x100b10f69*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v4); /*0x100b10f6e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b10f80*/
  }
  if ( *(_QWORD *)(v1 + 24) ) /*0x100b10f85*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b10f9b*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b10fa6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b10fc2*/
  return result; /*0x100b10fba*/
}