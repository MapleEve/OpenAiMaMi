// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::_::<impl serde_core::de::Deserialize for codexmate_lib::core::repository::RegistryFile>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h02c1542543d0b6d5 @ 0x100b06600 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..repository.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h02c1542543d0b6d5(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x7061 | *(unsigned __int8 *)(a2 + 2) ^ 0x69 )
        goto LABEL_13;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6D657469 | *(unsigned __int8 *)(a2 + 4) ^ 0x73 )
        goto LABEL_13;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461647075LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_13;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x746977536F747561LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6863LL )
        goto LABEL_13;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
        goto LABEL_13;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 16LL:
      v4 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3800);
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_13;
      a1[1] = 2;
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
