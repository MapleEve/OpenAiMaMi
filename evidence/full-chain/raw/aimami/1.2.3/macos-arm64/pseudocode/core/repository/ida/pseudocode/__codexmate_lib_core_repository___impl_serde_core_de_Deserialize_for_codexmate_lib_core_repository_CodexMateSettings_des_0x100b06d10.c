// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::_::<impl serde_core::de::Deserialize for codexmate_lib::core::repository::CodexMateSettings>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h60ef35fb7bb6af1b @ 0x100b06d10 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..repository.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..repository..CodexMateSettings$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h60ef35fb7bb6af1b(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x73746F68 | *(_DWORD *)(a2 + 3) ^ 0x746F7073 )
        goto LABEL_15;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 8LL:
      if ( *(_QWORD *)a2 == 0x6449656369766564LL )
      {
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        if ( *(_QWORD *)a2 != 0x79786F7250697061LL )
          goto LABEL_15;
        a1[1] = 5;
        *a1 = 0;
      }
      break;
    case 18LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_10167BB00),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10167BAF0));
      if ( _mm_testz_si128(v4, v4) )
      {
        a1[1] = 3;
        *a1 = 0;
      }
      else
      {
        v5 = _mm_or_si128(
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E3780),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10167BB10));
        if ( !_mm_testz_si128(v5, v5) )
          goto LABEL_15;
        a1[1] = 4;
        *a1 = 0;
      }
      break;
    case 19LL:
      v7 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10167BAE0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_10167BAD0));
      if ( !_mm_testz_si128(v7, v7) )
        goto LABEL_15;
      a1[1] = 6;
      *a1 = 0;
      break;
    case 20LL:
      v8 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10167BB30),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_10167BB20));
      if ( !_mm_testz_si128(v8, v8) )
        goto LABEL_15;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 21LL:
      v6 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10167BAC0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_10167BAB0));
      if ( !_mm_testz_si128(v6, v6) )
        goto LABEL_15;
      a1[1] = 7;
      *a1 = 0;
      break;
    default:
LABEL_15:
      a1[1] = 8;
      *a1 = 0;
      break;
  }
  return result;
}
