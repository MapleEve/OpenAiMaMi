// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::router_unlock_auth::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::router_unlock_auth::RouterUnlockAuthMarker>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h54cbbccdcc790f1b @ 0x100545800 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..router_unlock_auth.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h54cbbccdcc790f1b(
        _BYTE *a1,
        const __m128i *a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( a2->i32[0] ^ 0x69616D65 | a2->u8[4] ^ 0x6C )
        goto LABEL_9;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 9LL:
      if ( a2->i64[0] ^ 0x4164657461657263LL | a2->u8[8] ^ 0x74LL )
        goto LABEL_9;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 10LL:
      if ( a2->i64[0] ^ 0x4B746E756F636361LL | a2->u16[4] ^ 0x7965LL )
        goto LABEL_9;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 20LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128(a2), (__m128i)xmmword_1015FBEB0),
             _mm_xor_si128(_mm_cvtsi32_si128(a2[1].u32[0]), (__m128i)xmmword_1015FBEA0));
      if ( !_mm_testz_si128(v4, v4) )
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
