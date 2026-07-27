// 1.2.3 baseline same-set | __ZN209_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$9visit_str17h723827ce323d2386E @ 0x1006abf10 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h723827ce323d2386(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  char result; // al
  __m128i v4; // xmm0

  switch ( a3 )
  {
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x6144657669746361LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7379LL )
        goto LABEL_12;
      a1[1] = 2;
      *a1 = 0;
      result = 2;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x7365536C61746F74LL | *(_QWORD *)(a2 + 5) ^ 0x736E6F6973736553LL )
        goto LABEL_12;
      a1[1] = 0;
      *a1 = 0;
      result = 0;
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x7A69536C61746F74LL | *(_QWORD *)(a2 + 6) ^ 0x7365747942657A69LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6974634174736F6DLL | *(_QWORD *)(a2 + 6) ^ 0x6574614465766974LL )
          goto LABEL_12;
        a1[1] = 4;
        *a1 = 0;
        result = 4;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
        result = 1;
      }
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x6974634174736F6DLL | *(_QWORD *)(a2 + 7) ^ 0x746E756F43657669LL )
        goto LABEL_12;
      a1[1] = 5;
      *a1 = 0;
      result = 5;
      break;
    case 23LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101601FF0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_101601FE0));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_12;
      a1[1] = 3;
      *a1 = 0;
      result = 3;
      break;
    default:
LABEL_12:
      a1[1] = 6;
      *a1 = 0;
      result = 6;
      break;
  }
  return result;
}
