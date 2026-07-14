// mac 1.1.8 get_relay_provider_quota node va=0x100b118e0 depth=3
// alloc4sync16Arc::drop_slow
void __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::had6be344b730d94d(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12

  v1 = *a1; /*0x100b118eb*/
  if ( !*(_QWORD *)(*a1 + 16) ) /*0x100b118ee*/
  {
    v2 = *(_QWORD *)(v1 + 32); /*0x100b118f9*/
    if ( *(_QWORD *)v2 ) /*0x100b118fd*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(v1 + 24)); /*0x100b11909*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x100b1190b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b1191d*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b11928*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11944*/
}