// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010c1570 depth=1
// alloc4sync16Arc::drop_slow
void __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__int64 *a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rdi
  __int64 v3; // rsi

  v1 = *a1; /*0x1010c1576*/
  v2 = *(_BYTE **)(*a1 + 24); /*0x1010c1579*/
  if ( v2 ) /*0x1010c1580*/
  {
    v3 = *(_QWORD *)(v1 + 32); /*0x1010c1582*/
    *v2 = 0; /*0x1010c1586*/
    if ( v3 ) /*0x1010c158c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010c1593*/
  }
  dispatch_release(*(dispatch_object_t *)(v1 + 40)); /*0x1010c159c*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x1010c15a7*/
    free((void *)v1); /*0x1010c15b7*/
}