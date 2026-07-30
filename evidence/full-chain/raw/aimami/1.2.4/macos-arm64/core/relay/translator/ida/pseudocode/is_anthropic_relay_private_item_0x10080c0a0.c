// __ZN13codexmate_lib4core5relay10translator31is_anthropic_relay_private_item @ 0x10080c0a0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::is_anthropic_relay_private_item::h6f72d43a1f266f0c(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v8; // xmm0

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10080c0b8*/
         &anon_22327b6004f579c0722d6ebc68f79196_45,
         4,
         a1);
  if ( !v1 || *(_BYTE *)v1 != 3 ) /*0x10080c0c9*/
    return codexmate_lib::core::relay::translator::is_openai_private_response_item::hcd45344cd7f2d05c(a1); /*0x10080c0c9*/
  v2 = *(_QWORD *)(v1 + 16); /*0x10080c0cf*/
  v3 = *(_QWORD *)(v1 + 24); /*0x10080c0d3*/
  switch ( v3 ) /*0x10080c0db*/
  {
    case 23LL: /*0x10080c0db*/
      v8 = _mm_or_si128( /*0x10080c15a*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v2), (__m128i)xmmword_101677560),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v2 + 7)), (__m128i)xmmword_10167AD30));
      if ( !_mm_testz_si128(v8, v8) ) /*0x10080c163*/
        return codexmate_lib::core::relay::translator::is_openai_private_response_item::hcd45344cd7f2d05c(a1); /*0x10080c163*/
      return 0; /*0x10080c163*/
    case 18LL: /*0x10080c0db*/
      v6 = _mm_or_si128( /*0x10080c12d*/
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v2 + 16)), (__m128i)xmmword_10167AD70),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v2), (__m128i)xmmword_10167AD60));
      if ( !_mm_testz_si128(v6, v6) ) /*0x10080c136*/
        return codexmate_lib::core::relay::translator::is_openai_private_response_item::hcd45344cd7f2d05c(a1); /*0x10080c136*/
      return 0; /*0x10080c140*/
    case 16LL: /*0x10080c0db*/
      v4 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v2), (__m128i)xmmword_101677560); /*0x10080c0ed*/
      if ( _mm_testz_si128(v4, v4) ) /*0x10080c0fa*/
        return 0; /*0x10080c0fa*/
      v5 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v2), (__m128i)xmmword_10167AD80); /*0x10080c100*/
      if ( _mm_testz_si128(v5, v5) ) /*0x10080c108*/
        return 0; /*0x10080c10d*/
      break;
  }
  return codexmate_lib::core::relay::translator::is_openai_private_response_item::hcd45344cd7f2d05c(a1); /*0x10080c13e*/
}