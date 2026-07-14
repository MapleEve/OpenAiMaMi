// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b89c80 depth=2
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h58b8cb458dd42b2a(__int64 *a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = *a1; /*0x100b89c86*/
  v2 = *(_BYTE **)(*a1 + 120); /*0x100b89c89*/
  if ( v2 ) /*0x100b89c90*/
  {
    v3 = *(_QWORD *)(v1 + 128); /*0x100b89c92*/
    *v2 = 0; /*0x100b89c99*/
    if ( v3 ) /*0x100b89c9f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b89ca6*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b89cb1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b89ccb*/
  return result; /*0x100b89cc9*/
}