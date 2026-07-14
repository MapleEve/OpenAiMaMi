// mac 1.1.8 switch_account_and_restart_codex node va=0x100e9cb40 depth=4
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hc9f0e44b52ef1dd8(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  pthread_mutex_t *v3; // r15
  __int64 result; // rax

  v1 = *a1; /*0x100e9cb4b*/
  v2 = (pthread_mutex_t **)(*a1 + 16LL); /*0x100e9cb4e*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100e9cb55*/
  v3 = *v2; /*0x100e9cb5a*/
  *v2 = nullptr; /*0x100e9cb5e*/
  if ( v3 ) /*0x100e9cb69*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x100e9cb6e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e9cb80*/
  }
  result = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5c7e4e0060f162c2(v1 + 32); /*0x100e9cb89*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e9cb94*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e9cbb0*/
  return result; /*0x100e9cba8*/
}