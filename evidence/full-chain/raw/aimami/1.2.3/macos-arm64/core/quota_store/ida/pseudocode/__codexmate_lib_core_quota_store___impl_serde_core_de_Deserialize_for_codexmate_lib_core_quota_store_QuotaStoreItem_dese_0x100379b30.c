// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::quota_store::_::<impl serde_core::de::Deserialize for codexmate_lib::core::quota_store::QuotaStoreItem>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::hae0fa0e9a109c229 @ 0x100379b30 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..quota_store.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..quota_store..QuotaStoreItem$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::hae0fa0e9a109c229(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x4B746E756F636361LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7965LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6465727574706163LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7441LL )
          goto LABEL_13;
        a1[1] = 1;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x756F536567617375LL | *(_QWORD *)(a2 + 3) ^ 0x656372756F536567LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6174536E656B6F74LL | *(_QWORD *)(a2 + 3) ^ 0x7375746174536E65LL )
          goto LABEL_13;
        a1[1] = 5;
        *a1 = 0;
      }
      else
      {
        a1[1] = 2;
        *a1 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x577972616D697270LL | *(_QWORD *)(a2 + 5) ^ 0x776F646E69577972LL )
        goto LABEL_13;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x7261646E6F636573LL | *(_QWORD *)(a2 + 7) ^ 0x776F646E69577972LL )
        goto LABEL_13;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 20LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E38A0),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1015E3890));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_13;
      a1[1] = 6;
      *a1 = 0;
      break;
    default:
LABEL_13:
      a1[1] = 7;
      *a1 = 0;
      break;
  }
  return result;
}
