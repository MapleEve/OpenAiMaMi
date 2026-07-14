// mac 1.1.8 test_relay_provider_stream node va=0x1000ced40 depth=3
// core3ptr57drop_in_place::h95e43b54ca5e420cE_0
__int64 __fastcall core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h95e43b54ca5e420c(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( a1 ) /*0x1000ced50*/
  {
    if ( a2 ) /*0x1000ced55*/
      return core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb(a2); /*0x1000ced68*/
  }
  else
  {
    if ( *(_BYTE *)(a2 + 1376) >= 0xAu && *(_QWORD *)(a2 + 1392) ) /*0x1000ced76*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000ced8e*/
    if ( *(_QWORD *)(a2 + 1272) ) /*0x1000ced93*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cedab*/
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799((_QWORD *)(a2 + 1176)); /*0x1000cedb7*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 1400)) ) /*0x1000cedc3*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdc6de128d31cb84a((__int64 *)(a2 + 1400)); /*0x1000cedd0*/
    core::ptr::drop_in_place$LT$reqwest..async_impl..client..ResponseFuture$GT$::h72160e542482e768(a2); /*0x1000cedd8*/
    if ( *(_QWORD *)(a2 + 1408) ) /*0x1000ceddd*/
    {
      core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h524afe078d23f3b8(*(_QWORD *)(a2 + 1408)); /*0x1000cedec*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cedfe*/
    }
    if ( *(_QWORD *)(a2 + 1416) ) /*0x1000cee03*/
    {
      core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h524afe078d23f3b8(*(_QWORD *)(a2 + 1416)); /*0x1000cee12*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cee24*/
    }
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cee40*/
  }
  return result; /*0x1000ced62*/
}