// mac 1.1.8 test_relay_provider_stream node va=0x1000b9760 depth=3
// core3ptr226drop_in_place::b::b::ha3ad3e2bb142417cE_0
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::ha3ad3e2bb142417c(
        _QWORD *a1))(_QWORD)
{
  __int64 v1; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(a1); /*0x1000b976d*/
  if ( a1[12] ) /*0x1000b9772*/
  {
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f3df4ae14586d84(a1[12]); /*0x1000b977e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000b9790*/
  }
  v1 = a1[15]; /*0x1000b9799*/
  result = *(__int64 (__fastcall **)(_QWORD))v1; /*0x1000b979d*/
  if ( *(_QWORD *)v1 ) /*0x1000b979d*/
    result = (__int64 (__fastcall *)(_QWORD))result(a1[14]); /*0x1000b97a8*/
  if ( *(_QWORD *)(v1 + 8) ) /*0x1000b97aa*/
    return (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000b97c4*/
  return result; /*0x1000b97be*/
}