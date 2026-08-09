// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::models::RelayState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h433b602f6de62352 @ 0x100379e00 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h433b602f6de62352(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x786F7270 | *(unsigned __int8 *)(a2 + 4) ^ 0x79 )
        goto LABEL_13;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x72656469766F7270LL | *(unsigned __int8 *)(a2 + 8) ^ 0x73LL )
        goto LABEL_13;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x7942657669746361LL | *(_QWORD *)(a2 + 3) ^ 0x6564497942657669LL )
        goto LABEL_13;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
        goto LABEL_13;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 18LL:
      v5 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E38E0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E38D0));
      if ( !_mm_testz_si128(v5, v5) )
        goto LABEL_13;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 24LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E38C0),
             _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a2 + 16)), (__m128i)xmmword_1015E38B0));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_13;
      a1[1] = 5;
      *a1 = 0;
      break;
    default:
LABEL_13:
      a1[1] = 6;
      *a1 = 0;
      break;
  }
  return result;
}
