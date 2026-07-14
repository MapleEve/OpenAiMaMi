// mac 1.1.8 get_relay_provider_quota node va=0x1000cdcd0 depth=2
// core3ptr49drop_in_place::h54ea0a9b41b92799E_0
__int64 __fastcall core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  __int64 result; // rax

  if ( a1[10] ) /*0x1000cdce1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cdcf7*/
  core::ptr::drop_in_place$LT$$u5b$http..header..map..Bucket$LT$http..header..value..HeaderValue$GT$$u5d$$GT$::h2cb5ff9d3370c342( /*0x1000cdd07*/
    a1[4],
    a1[5]);
  if ( a1[3] ) /*0x1000cdd0c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cdd21*/
  v2 = a1[7] + 56LL; /*0x1000cdd2e*/
  for ( i = a1[8] + 1LL; i != 1; --i ) /*0x1000cdd32*/
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v2 - 24) + 32LL))( /*0x1000cdd59*/
      v2,
      *(_QWORD *)(v2 - 16),
      *(_QWORD *)(v2 - 8));
    v2 += 72; /*0x1000cdd5c*/
  }
  result = a1[6]; /*0x1000cdd61*/
  if ( result ) /*0x1000cdd68*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cdd88*/
  return result; /*0x1000cdd7e*/
}