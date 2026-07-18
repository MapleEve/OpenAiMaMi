// mac 1.2.2 NEW write_client_debug_log 0x101377db0 d=3
void __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__int64 *a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rdi
  __int64 v3; // rsi

  v1 = *a1; /*0x101377db6*/
  v2 = *(_BYTE **)(*a1 + 24); /*0x101377db9*/
  if ( v2 ) /*0x101377dc0*/
  {
    v3 = *(_QWORD *)(v1 + 32); /*0x101377dc2*/
    *v2 = 0; /*0x101377dc6*/
    if ( v3 ) /*0x101377dcc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101377dd3*/
  }
  dispatch_release(*(dispatch_object_t *)(v1 + 40)); /*0x101377ddc*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x101377de7*/
    free((void *)v1); /*0x101377df7*/
}