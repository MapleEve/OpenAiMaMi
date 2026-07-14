// mac 1.1.8 test_relay_provider_stream node va=0x100491de0 depth=1
// alloc4sync16Arc::drop_slow
__int64 (__fastcall *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb0553122a3c629b0(__int64 *a1))(_QWORD)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v4; // r12

  v1 = *a1; /*0x100491deb*/
  _$LT$tauri..ipc..channel..ChannelInner$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9cf2a93530e6c6d0(*a1 + 16); /*0x100491df2*/
  v2 = *(_QWORD *)(v1 + 24); /*0x100491dfb*/
  result = *(__int64 (__fastcall **)(_QWORD))v2; /*0x100491dff*/
  if ( *(_QWORD *)v2 ) /*0x100491dff*/
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(v1 + 16)); /*0x100491e0b*/
  if ( *(_QWORD *)(v2 + 8) ) /*0x100491e0d*/
    result = (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100491e1f*/
  if ( *(_QWORD *)(v1 + 32) ) /*0x100491e24*/
  {
    v4 = *(_QWORD *)(v1 + 40); /*0x100491e2d*/
    result = *(__int64 (__fastcall **)(_QWORD))v4; /*0x100491e31*/
    if ( *(_QWORD *)v4 ) /*0x100491e31*/
      result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(v1 + 32)); /*0x100491e3d*/
    if ( *(_QWORD *)(v4 + 8) ) /*0x100491e3f*/
      result = (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100491e51*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100491e5c*/
    return (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100491e78*/
  return result; /*0x100491e70*/
}