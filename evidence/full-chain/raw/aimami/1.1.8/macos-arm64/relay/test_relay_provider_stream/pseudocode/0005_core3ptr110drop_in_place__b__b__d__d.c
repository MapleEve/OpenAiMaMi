// mac 1.1.8 test_relay_provider_stream node va=0x1000a9800 depth=2
// core3ptr110drop_in_place::b::b::d::d
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..run_staged_attempt..$u7b$$u7b$closure$u7d$$u7d$$GT$::h656dfe55318c895c(
        __int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r12

  result = (unsigned int)*(unsigned __int8 *)(a1 + 261) - 3; /*0x1000a9812*/
  switch ( *(_BYTE *)(a1 + 261) ) /*0x1000a982f*/
  {
    case 3: /*0x1000a982f*/
      result = core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h95e43b54ca5e420c( /*0x1000a983f*/
                 *(_QWORD *)(a1 + 264),
                 *(_QWORD *)(a1 + 272));
      goto LABEL_18; /*0x1000a9844*/
    case 4: /*0x1000a982f*/
      result = *(unsigned __int8 *)(a1 + 824); /*0x1000a98c1*/
      if ( (_DWORD)result == 3 ) /*0x1000a98cb*/
        goto LABEL_17; /*0x1000a98cb*/
      if ( !*(_BYTE *)(a1 + 824) ) /*0x1000a98c1*/
        goto LABEL_14; /*0x1000a98cf*/
      goto LABEL_18; /*0x1000a98cf*/
    case 5: /*0x1000a982f*/
      result = *(unsigned __int8 *)(a1 + 824); /*0x1000a9849*/
      if ( (_DWORD)result == 3 ) /*0x1000a9853*/
      {
LABEL_17:
        result = core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf228961939be7d6d(a1 + 400); /*0x1000a991c*/
      }
      else if ( !*(_BYTE *)(a1 + 824) ) /*0x1000a9849*/
      {
LABEL_14:
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::ha3ad3e2bb142417c((_QWORD *)(a1 + 264)); /*0x1000a98d1*/
        if ( **(_QWORD **)(a1 + 392) ) /*0x1000a98e4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000a98f5*/
LABEL_11:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000a98b2*/
      }
LABEL_18:
      *(_BYTE *)(a1 + 260) = 0; /*0x1000a9928*/
      return result;
    case 6: /*0x1000a982f*/
      if ( *(_QWORD *)(a1 + 272) ) /*0x1000a986f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000a9887*/
      v2 = *(__int64 **)(a1 + 328); /*0x1000a9893*/
      result = *v2; /*0x1000a989a*/
      if ( *v2 ) /*0x1000a989a*/
        result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(a1 + 320)); /*0x1000a98a6*/
      if ( v2[1] ) /*0x1000a98a8*/
        goto LABEL_11; /*0x1000a98b0*/
      goto LABEL_18; /*0x1000a98b0*/
    default:
      return result;
  }
}