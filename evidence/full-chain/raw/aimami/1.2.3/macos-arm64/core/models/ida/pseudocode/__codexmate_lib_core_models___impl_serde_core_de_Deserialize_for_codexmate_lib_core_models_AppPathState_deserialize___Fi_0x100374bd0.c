// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AppPathState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::hced17c63e86fe619 @ 0x100374bd0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AppPathState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::hced17c63e86fe619(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm1

  result = a1;
  switch ( a3 )
  {
    case 8LL:
      if ( *(_QWORD *)a2 != 0x6874615068747561LL )
        goto LABEL_18;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x6D6F487865646F63LL | *(unsigned __int8 *)(a2 + 8) ^ 0x65LL )
        goto LABEL_18;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x7369784568747561LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7374LL )
        goto LABEL_18;
      a1[1] = 7;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x73746E756F636361LL | *(unsigned int *)(a2 + 8) ^ 0x68746150LL )
      {
        if ( *(_QWORD *)a2 ^ 0x7972747369676572LL | *(unsigned int *)(a2 + 8) ^ 0x68746150LL )
        {
          if ( *(_QWORD *)a2 ^ 0x736E6F6973736573LL | *(unsigned int *)(a2 + 8) ^ 0x68746150LL )
            goto LABEL_18;
          a1[1] = 4;
          *a1 = 0;
        }
        else
        {
          a1[1] = 3;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x7972747369676572LL | *(_QWORD *)(a2 + 6) ^ 0x7374736978457972LL )
      {
        if ( *(_QWORD *)a2 ^ 0x736E6F6973736573LL | *(_QWORD *)(a2 + 6) ^ 0x737473697845736ELL )
          goto LABEL_18;
        a1[1] = 9;
        *a1 = 0;
      }
      else
      {
        a1[1] = 8;
        *a1 = 0;
      }
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x674168636E75616CLL | *(_QWORD *)(a2 + 7) ^ 0x68746150746E6567LL )
        goto LABEL_18;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 17LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a2 + 16)), (__m128i)xmmword_1015E3720),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3710));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_18;
      a1[1] = 6;
      *a1 = 0;
      break;
    default:
LABEL_18:
      a1[1] = 10;
      *a1 = 0;
      break;
  }
  return result;
}
