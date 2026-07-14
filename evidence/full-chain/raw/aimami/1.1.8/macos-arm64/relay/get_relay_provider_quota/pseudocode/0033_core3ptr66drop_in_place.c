// mac 1.1.8 get_relay_provider_quota node va=0x100b01410 depth=5
// core3ptr66drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$hyper_util..client..proxy..matcher..Intercept$GT$::h8af8b0c3c4f83cd5(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) >= 2u ) /*0x100b01421*/
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 32LL))( /*0x100b01436*/
      *(_QWORD *)(a1 + 56) + 24LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b01446*/
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 64) + 32LL))( /*0x100b0145b*/
    a1 + 88,
    *(_QWORD *)(a1 + 72),
    *(_QWORD *)(a1 + 80));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 96) + 32LL))( /*0x100b0146e*/
    a1 + 120,
    *(_QWORD *)(a1 + 104),
    *(_QWORD *)(a1 + 112));
  result = 2; /*0x100b01484*/
  if ( *(__int64 *)a1 < 0 ) /*0x100b01489*/
    result = *(_QWORD *)a1 ^ 0x8000000000000000LL; /*0x100b01489*/
  if ( result ) /*0x100b01490*/
  {
    if ( result == 1 ) /*0x100b01496*/
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 32LL))( /*0x100b014b9*/
               a1 + 32,
               *(_QWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 24));
    }
    else
    {
      if ( *(_QWORD *)a1 ) /*0x100b01471*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b014c9*/
      if ( *(_QWORD *)(a1 + 24) ) /*0x100b014ce*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b014ea*/
    }
  }
  return result; /*0x100b014b4*/
}