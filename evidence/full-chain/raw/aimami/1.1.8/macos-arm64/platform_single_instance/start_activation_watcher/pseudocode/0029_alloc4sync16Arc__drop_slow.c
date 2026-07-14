// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x100e2cf50 depth=2
// alloc4sync16Arc::drop_slow
void __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h8bbb3cf2bf1292d7(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1; /*0x100e2cf57*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(*a1 + 16)) ) /*0x100e2cf5e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)(v1 + 16)); /*0x100e2cf68*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e2cf73*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e2cf8b*/
}