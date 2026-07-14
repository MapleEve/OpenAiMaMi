// mac 1.1.8 test_relay_provider_stream node va=0x1000d3a60 depth=3
// core3ptr96drop_in_place::b::b::d::d::hf228961939be7d6dE_0
__int64 __fastcall core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf228961939be7d6d(
        __int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 416); /*0x1000d3a6a*/
  if ( !*(_BYTE *)(a1 + 416) ) /*0x1000d3a73*/
  {
    core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::ha3ad3e2bb142417c((_QWORD *)a1); /*0x1000d3abc*/
    if ( !**(_QWORD **)(a1 + 128) ) /*0x1000d3ac8*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3ace*/
    goto LABEL_4; /*0x1000d3ace*/
  }
  if ( (_DWORD)result != 3 ) /*0x1000d3a78*/
    return result; /*0x1000d3a78*/
  core::ptr::drop_in_place$LT$http_body_util..combinators..collect..Collect$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h6bd0e33052caf50b(a1 + 272); /*0x1000d3a81*/
  if ( **(_QWORD **)(a1 + 264) ) /*0x1000d3a8d*/
LABEL_4:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3a95*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3ab0*/
}