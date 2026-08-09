// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AppStatusPayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::ha464f43eadcc8397 @ 0x100376960 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AppStatusPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::ha464f43eadcc8397(
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
        goto LABEL_18;
      a1[1] = 7;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x68746170 | *(unsigned __int8 *)(a2 + 4) ^ 0x73 )
        goto LABEL_18;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x6E6163537473616CLL | *(unsigned __int16 *)(a2 + 8) ^ 0x7441LL )
      {
        if ( *(_QWORD *)a2 ^ 0x746977536F747561LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6863LL )
          goto LABEL_18;
        a1[1] = 6;
        *a1 = 0;
      }
      else
      {
        a1[1] = 3;
        *a1 = 0;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x756F536567617375LL | *(_QWORD *)(a2 + 3) ^ 0x656372756F536567LL )
        goto LABEL_18;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x43746E756F636361LL | *(unsigned int *)(a2 + 8) ^ 0x746E756FLL )
        goto LABEL_18;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6341657669746361LL | *(_QWORD *)(a2 + 5) ^ 0x746E756F63634165LL )
        goto LABEL_18;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x656E6E6F43697061LL | *(_QWORD *)(a2 + 7) ^ 0x7974697669746365LL )
        goto LABEL_18;
      a1[1] = 8;
      *a1 = 0;
      break;
    case 16LL:
      v4 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3800);
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_18;
      a1[1] = 2;
      *a1 = 0;
      break;
    default:
LABEL_18:
      a1[1] = 9;
      *a1 = 0;
      break;
  }
  return result;
}
