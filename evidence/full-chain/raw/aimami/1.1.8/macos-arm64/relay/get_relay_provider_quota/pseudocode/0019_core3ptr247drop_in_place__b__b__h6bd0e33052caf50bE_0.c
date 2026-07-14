// mac 1.1.8 get_relay_provider_quota node va=0x1000ba780 depth=4
// core3ptr247drop_in_place::b::b::h6bd0e33052caf50bE_0
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$http_body_util..combinators..collect..Collect$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h6bd0e33052caf50b(
        _QWORD *a1))(_QWORD)
{
  __int64 v1; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( *(_DWORD *)a1 != 4 ) /*0x1000ba790*/
  {
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5cdbf4a7d0eeb8cf(a1 + 12); /*0x1000ba799*/
    if ( a1[12] ) /*0x1000ba79e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000ba7b3*/
    if ( *(_DWORD *)a1 != 3 ) /*0x1000ba7bb*/
      core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(a1); /*0x1000ba7c0*/
  }
  v1 = a1[17]; /*0x1000ba7cc*/
  result = *(__int64 (__fastcall **)(_QWORD))v1; /*0x1000ba7d3*/
  if ( *(_QWORD *)v1 ) /*0x1000ba7d3*/
    result = (__int64 (__fastcall *)(_QWORD))result(a1[16]); /*0x1000ba7de*/
  if ( *(_QWORD *)(v1 + 8) ) /*0x1000ba7e0*/
    return (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000ba7fa*/
  return result; /*0x1000ba7f4*/
}