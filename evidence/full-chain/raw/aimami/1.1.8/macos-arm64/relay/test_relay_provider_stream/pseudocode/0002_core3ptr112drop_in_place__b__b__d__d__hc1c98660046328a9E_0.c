// mac 1.1.8 test_relay_provider_stream node va=0x1000aa440 depth=1
// core3ptr112drop_in_place::b::b::d::d::hc1c98660046328a9E_0
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..test_provider_staged..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc1c98660046328a9(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  volatile signed __int64 *result; // rax

  if ( *(_BYTE *)(a1 + 1122) == 3 ) /*0x1000aa451*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..run_staged_attempt..$u7b$$u7b$closure$u7d$$u7d$$GT$::h656dfe55318c895c(a1); /*0x1000aa45a*/
    if ( *(_QWORD *)(a1 + 1056) ) /*0x1000aa45f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000aa477*/
    *(_BYTE *)(a1 + 1121) = 0; /*0x1000aa47c*/
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799((_QWORD *)(a1 + 864)); /*0x1000aa48a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(a1 + 832); /*0x1000aa496*/
    v1 = *(_QWORD *)(a1 + 1040); /*0x1000aa49b*/
    if ( v1 ) /*0x1000aa4a5*/
    {
      v2 = *(_QWORD *)(a1 + 1032) + 8LL; /*0x1000aa4ae*/
      do /*0x1000aa4c7*/
      {
        if ( *(_QWORD *)(v2 - 8) ) /*0x1000aa4c9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000aa4da*/
        v2 += 24; /*0x1000aa4c0*/
        --v1; /*0x1000aa4c4*/
      }
      while ( v1 ); /*0x1000aa4c7*/
    }
    if ( *(_QWORD *)(a1 + 1024) ) /*0x1000aa4e1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000aa501*/
    result = *(volatile signed __int64 **)(a1 + 1016); /*0x1000aa506*/
    if ( !_InterlockedDecrement64(result) ) /*0x1000aa50d*/
      return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdc6de128d31cb84a((__int64 *)(a1 + 1016)); /*0x1000aa527*/
  }
  return result; /*0x1000aa521*/
}