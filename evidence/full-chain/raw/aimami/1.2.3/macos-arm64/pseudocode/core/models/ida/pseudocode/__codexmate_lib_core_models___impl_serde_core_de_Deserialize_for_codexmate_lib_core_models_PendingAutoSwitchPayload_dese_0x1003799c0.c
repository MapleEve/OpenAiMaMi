// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::PendingAutoSwitchPayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h8f428b255a919c6d @ 0x1003799c0 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h8f428b255a919c6d(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x6574736575716572LL | *(_QWORD *)(a2 + 3) ^ 0x7441646574736575LL )
        goto LABEL_12;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x65526769666E6F63LL | *(_QWORD *)(a2 + 6) ^ 0x6E6F697369766552LL )
      {
        if ( *(_QWORD *)a2 ^ 0x41746E6572727563LL | *(_QWORD *)(a2 + 6) ^ 0x746E756F63634174LL )
          goto LABEL_12;
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 16LL:
      v4 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3880);
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_12;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 18LL:
      v5 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E3870),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3860));
      if ( !_mm_testz_si128(v5, v5) )
        goto LABEL_12;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 22LL:
      v6 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3850),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 6)), (__m128i)xmmword_1015E3840));
      if ( !_mm_testz_si128(v6, v6) )
        goto LABEL_12;
      a1[1] = 5;
      *a1 = 0;
      break;
    default:
LABEL_12:
      a1[1] = 6;
      *a1 = 0;
      break;
  }
  return result;
}
