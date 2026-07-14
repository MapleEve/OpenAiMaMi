// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x100e2cb40 depth=1
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4316fdb44971ee38(_QWORD *a1)
{
  __int64 v1; // rbx
  volatile signed __int64 **v2; // r15
  volatile signed __int64 *result; // rax
  __int64 v4; // r12

  v1 = *a1; /*0x100e2cb4b*/
  v2 = (volatile signed __int64 **)(*a1 + 16LL); /*0x100e2cb4e*/
  _$LT$std..thread..lifecycle..Packet$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3aea69ad9d2d5d65(v2); /*0x100e2cb55*/
  result = *v2; /*0x100e2cb5a*/
  if ( *v2 && !_InterlockedDecrement64(result) ) /*0x100e2cb62*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h8bbb3cf2bf1292d7(v2); /*0x100e2cb6b*/
  if ( *(_QWORD *)(v1 + 24) && *(_QWORD *)(v1 + 32) ) /*0x100e2cb77*/
  {
    v4 = *(_QWORD *)(v1 + 40); /*0x100e2cb80*/
    result = *(volatile signed __int64 **)v4; /*0x100e2cb84*/
    if ( *(_QWORD *)v4 ) /*0x100e2cb84*/
      result = (volatile signed __int64 *)((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v1 + 32)); /*0x100e2cb90*/
    if ( *(_QWORD *)(v4 + 8) ) /*0x100e2cb92*/
      result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e2cba4*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e2cbaf*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e2cbcb*/
  return result; /*0x100e2cbc3*/
}