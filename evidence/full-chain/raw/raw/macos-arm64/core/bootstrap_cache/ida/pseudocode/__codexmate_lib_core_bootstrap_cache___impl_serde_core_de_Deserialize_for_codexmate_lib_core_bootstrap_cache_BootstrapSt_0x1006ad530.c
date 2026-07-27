// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::bootstrap_cache::_::<impl serde_core::de::Deserialize for codexmate_lib::core::bootstrap_cache::BootstrapStatePayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h93c9c80998b8b7f0 @ 0x1006ad530 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..bootstrap_cache.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h93c9c80998b8b7f0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  char result; // al
  __m128i v4; // xmm0

  switch ( a3 )
  {
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x416E657474697277LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_11;
      a1[1] = 0;
      *a1 = 0;
      result = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x657672655370636DLL | *(unsigned __int16 *)(a2 + 8) ^ 0x7372LL )
        goto LABEL_11;
      a1[1] = 3;
      *a1 = 0;
      result = 3;
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x616E416567617375LL | *(_QWORD *)(a2 + 6) ^ 0x73636974796C616ELL )
        goto LABEL_11;
      a1[1] = 2;
      *a1 = 0;
      result = 2;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x656C6C6174736E69LL | *(_QWORD *)(a2 + 7) ^ 0x736C6C696B536465LL )
        goto LABEL_11;
      a1[1] = 4;
      *a1 = 0;
      result = 4;
      break;
    case 19LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602130),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_101602120));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_11;
      a1[1] = 1;
      *a1 = 0;
      result = 1;
      break;
    default:
LABEL_11:
      a1[1] = 5;
      *a1 = 0;
      result = 5;
      break;
  }
  return result;
}
