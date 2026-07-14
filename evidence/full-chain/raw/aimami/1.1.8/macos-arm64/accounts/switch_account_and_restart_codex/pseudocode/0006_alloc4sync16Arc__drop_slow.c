// mac 1.1.8 switch_account_and_restart_codex node va=0x100e76130 depth=3
// alloc4sync16Arc::drop_slow
int __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he732eb83c0251b10(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  int result; // eax
  pthread_mutex_t *v4; // r15
  __int64 v5; // rsi

  v1 = *a1; /*0x100e7613b*/
  v2 = (pthread_mutex_t **)(*a1 + 16LL); /*0x100e7613e*/
  result = _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100e76145*/
  v4 = *v2; /*0x100e7614a*/
  *v2 = nullptr; /*0x100e7614e*/
  if ( v4 ) /*0x100e76159*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v4); /*0x100e7615e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e76170*/
  }
  v5 = *(_QWORD *)(v1 + 40); /*0x100e76175*/
  if ( v5 ) /*0x100e7617c*/
  {
    result = 16 * v5; /*0x100e76181*/
    if ( 17 * v5 != -33 ) /*0x100e7618c*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7619e*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e761a9*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e761c5*/
  return result; /*0x100e761bd*/
}