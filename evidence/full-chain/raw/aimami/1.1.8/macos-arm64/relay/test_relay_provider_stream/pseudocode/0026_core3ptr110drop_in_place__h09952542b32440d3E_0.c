// mac 1.1.8 test_relay_provider_stream node va=0x1000a9af0 depth=5
// core3ptr110drop_in_place::h09952542b32440d3E_0
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$core..option..Option$LT$http..request..Request$LT$reqwest..async_impl..body..Body$GT$$GT$$GT$::h09952542b32440d3(
        __int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v2; // rax
  __int64 v3; // r15

  if ( *(_DWORD *)a1 != 3 ) /*0x1000a9afd*/
  {
    core::ptr::drop_in_place$LT$http..request..Parts$GT$::hf1cf566aaa618130(a1); /*0x1000a9b0d*/
    v2 = *(_QWORD *)(a1 + 224); /*0x1000a9b12*/
    if ( v2 ) /*0x1000a9b1c*/
    {
      return (__int64 (__fastcall *)(_QWORD))(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 32))( /*0x1000a9b41*/
                                               a1 + 248,
                                               *(_QWORD *)(a1 + 232),
                                               *(_QWORD *)(a1 + 240));
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 240); /*0x1000a9b4a*/
      result = *(__int64 (__fastcall **)(_QWORD))v3; /*0x1000a9b51*/
      if ( *(_QWORD *)v3 ) /*0x1000a9b51*/
        result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 232)); /*0x1000a9b5c*/
      if ( *(_QWORD *)(v3 + 8) ) /*0x1000a9b5e*/
        return (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000a9b78*/
    }
  }
  return result; /*0x1000a9b03*/
}