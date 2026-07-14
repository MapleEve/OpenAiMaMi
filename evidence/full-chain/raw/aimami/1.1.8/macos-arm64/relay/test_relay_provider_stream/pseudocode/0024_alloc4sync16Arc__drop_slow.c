// mac 1.1.8 test_relay_provider_stream node va=0x100b115d0 depth=5
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7706a98d4963d3df(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 i; // r12
  __int64 result; // rax

  v1 = *a1; /*0x100b115de*/
  v2 = *(_QWORD *)(*a1 + 24); /*0x100b115e1*/
  for ( i = *(_QWORD *)(v1 + 32) + 1LL; i != 1; --i ) /*0x100b115e9*/
  {
    core::ptr::drop_in_place$LT$reqwest..proxy..Matcher$GT$::he79c42ba748c7da0(v2); /*0x100b11600*/
    v2 += 464; /*0x100b11605*/
  }
  result = *(_QWORD *)(v1 + 16); /*0x100b1160a*/
  if ( result ) /*0x100b11611*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11623*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b1162e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11650*/
  return result; /*0x100b11646*/
}