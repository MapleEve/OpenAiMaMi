// mac 1.1.8 switch_account_and_restart_codex node va=0x100e75970 depth=3
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb9eb87ec66c63ed8(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  pthread_mutex_t *v3; // r15
  __int64 result; // rax

  v1 = *a1; /*0x100e7597b*/
  v2 = (pthread_mutex_t **)(*a1 + 16LL); /*0x100e7597e*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100e75985*/
  v3 = *v2; /*0x100e7598a*/
  *v2 = nullptr; /*0x100e7598e*/
  if ( v3 ) /*0x100e75999*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x100e7599e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e759b0*/
  }
  result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8df4a778672d5a0(v1 + 32); /*0x100e759bc*/
  if ( *(_QWORD *)(v1 + 32) ) /*0x100e759c1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e759d6*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e759e1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e759fd*/
  return result; /*0x100e759f5*/
}