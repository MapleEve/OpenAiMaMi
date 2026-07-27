// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AutoSwitchStatusPayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::ha5060abd4abf4ba5 @ 0x100379490 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AutoSwitchStatusPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::ha5060abd4abf4ba5(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x62616E65 | *(_DWORD *)(a2 + 3) ^ 0x64656C62 )
        goto LABEL_10;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x5365636976726573LL | *(unsigned int *)(a2 + 8) ^ 0x65746174LL )
      {
        if ( *(_QWORD *)a2 ^ 0x4C65636976726573LL | *(unsigned int *)(a2 + 8) ^ 0x6C656261LL )
          goto LABEL_10;
        a1[1] = 4;
        *a1 = 0;
      }
      else
      {
        a1[1] = 3;
        *a1 = 0;
      }
      break;
    case 18LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E3870),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3860));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_10;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 22LL:
      v5 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3850),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 6)), (__m128i)xmmword_1015E3840));
      if ( !_mm_testz_si128(v5, v5) )
        goto LABEL_10;
      a1[1] = 2;
      *a1 = 0;
      break;
    default:
LABEL_10:
      a1[1] = 5;
      *a1 = 0;
      break;
  }
  return result;
}
