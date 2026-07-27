// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::quota_history::_::<impl serde_core::de::Deserialize for codexmate_lib::core::quota_history::QuotaHistoryPoint>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h85cddebd8dc09bd8 @ 0x10037a600 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..quota_history.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h85cddebd8dc09bd8(
        _BYTE *a1,
        const __m128i *a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 9LL:
      if ( a2->i64[0] ^ 0x6D617473656D6974LL | a2->u8[8] ^ 0x70LL )
        goto LABEL_9;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 10LL:
      if ( a2->i64[0] ^ 0x4B746E756F636361LL | a2->u16[4] ^ 0x7965LL )
        goto LABEL_9;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 18LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(a2[1].u16[0]), (__m128i)xmmword_1015E3870),
             _mm_xor_si128(_mm_loadu_si128(a2), (__m128i)xmmword_1015E3910));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_9;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 20LL:
      v5 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128(a2), (__m128i)xmmword_1015E3900),
             _mm_xor_si128(_mm_cvtsi32_si128(a2[1].u32[0]), (__m128i)xmmword_1015E38F0));
      if ( !_mm_testz_si128(v5, v5) )
        goto LABEL_9;
      a1[1] = 3;
      *a1 = 0;
      break;
    default:
LABEL_9:
      a1[1] = 4;
      *a1 = 0;
      break;
  }
  return result;
}
