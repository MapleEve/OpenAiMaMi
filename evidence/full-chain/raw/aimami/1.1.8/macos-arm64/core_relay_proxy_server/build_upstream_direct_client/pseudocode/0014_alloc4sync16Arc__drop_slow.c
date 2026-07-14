// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b10db0 depth=2
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h1bfceb72c1aa1b87E'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h1ff8bc3c7ab6dbfaE'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h2963f23a746cf9f3E'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h367fbaec29816feeE'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h571c451d0dc5f590E'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h8431ee1bff41c9f0E'
// Alternative name is '__ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h8db8f3a645faf5daE'
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r14
  __int64 result; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // rdx

  v1 = *a1; /*0x100b10dba*/
  v2 = (__int64 *)a1[1]; /*0x100b10dbd*/
  result = *v2; /*0x100b10dc1*/
  v4 = v2[2]; /*0x100b10dc4*/
  if ( *v2 ) /*0x100b10dc1*/
    result = ((__int64 (__fastcall *)(unsigned __int64))result)(v1 + ((v4 - 1) & 0xFFFFFFFFFFFFFFF0LL) + 16); /*0x100b10dda*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b10de2*/
  {
    v5 = 8; /*0x100b10df1*/
    if ( v4 >= 9 ) /*0x100b10df6*/
      v5 = v4; /*0x100b10df6*/
    result = v5 + v2[1] + 15; /*0x100b10dfa*/
    if ( (result & -v5) != 0 ) /*0x100b10e08*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b10e17*/
  }
  return result; /*0x100b10e11*/
}