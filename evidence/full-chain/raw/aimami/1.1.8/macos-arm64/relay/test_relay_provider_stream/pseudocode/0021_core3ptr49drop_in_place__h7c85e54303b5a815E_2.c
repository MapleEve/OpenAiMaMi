// mac 1.1.8 test_relay_provider_stream node va=0x100b0e2f0 depth=5
// core3ptr49drop_in_place::h7c85e54303b5a815E_2
__int64 __fastcall core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h7c85e54303b5a815(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 i; // r13
  __int64 result; // rax

  v2 = a1[10]; /*0x100b0e301*/
  if ( v2 ) /*0x100b0e308*/
  {
    v2 *= 4; /*0x100b0e30e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b0e317*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7d19d717653625ea(a1 + 3, v2); /*0x100b0e323*/
  if ( a1[3] ) /*0x100b0e328*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b0e33d*/
  v3 = a1[7] + 56LL; /*0x100b0e34a*/
  for ( i = a1[8] + 1LL; i != 1; --i ) /*0x100b0e34e*/
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v3 - 24) + 32LL))( /*0x100b0e379*/
      v3,
      *(_QWORD *)(v3 - 16),
      *(_QWORD *)(v3 - 8));
    v3 += 72; /*0x100b0e37c*/
  }
  result = a1[6]; /*0x100b0e381*/
  if ( result ) /*0x100b0e388*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b0e3a8*/
  return result; /*0x100b0e39e*/
}