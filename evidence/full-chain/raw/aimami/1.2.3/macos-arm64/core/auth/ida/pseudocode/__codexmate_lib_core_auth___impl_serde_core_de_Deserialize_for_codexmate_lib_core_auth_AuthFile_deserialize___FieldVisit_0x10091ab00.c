// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::auth::_::<impl serde_core::de::Deserialize for codexmate_lib::core::auth::AuthFile>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h55229805c7e63a80 @ 0x10091ab00 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..auth.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h55229805c7e63a80(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x656B6F74 | *(unsigned __int16 *)(a2 + 4) ^ 0x736E )
        goto LABEL_11;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x646F6D5F68747561LL | *(unsigned __int8 *)(a2 + 8) ^ 0x65LL )
        goto LABEL_11;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x6665725F7473616CLL | *(unsigned int *)(a2 + 8) ^ 0x68736572LL )
        goto LABEL_11;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x415F49414E45504FLL | *(_QWORD *)(a2 + 6) ^ 0x59454B5F4950415FLL )
        goto LABEL_11;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 25LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101676440),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 9)), (__m128i)xmmword_101676430));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_11;
      a1[1] = 2;
      *a1 = 0;
      break;
    default:
LABEL_11:
      a1[1] = 5;
      *a1 = 0;
      break;
  }
  return result;
}
