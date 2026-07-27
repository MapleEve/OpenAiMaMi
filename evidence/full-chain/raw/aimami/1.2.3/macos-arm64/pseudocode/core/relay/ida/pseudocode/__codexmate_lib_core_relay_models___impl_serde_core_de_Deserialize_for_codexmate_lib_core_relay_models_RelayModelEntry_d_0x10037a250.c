// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::models::RelayModelEntry>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h2d4f8b754d7ee07f @ 0x10037a250 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h2d4f8b754d7ee07f(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x65646F6D | *(unsigned __int8 *)(a2 + 4) ^ 0x6C )
        goto LABEL_11;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x66667573 | *(unsigned __int16 *)(a2 + 4) ^ 0x7869 )
        goto LABEL_11;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x65726977 | *(_DWORD *)(a2 + 3) ^ 0x69704165 )
        goto LABEL_11;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x4E79616C70736964LL | *(_QWORD *)(a2 + 3) ^ 0x656D614E79616C70LL )
        goto LABEL_11;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x57747865746E6F63LL | *(_QWORD *)(a2 + 5) ^ 0x776F646E69577478LL )
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
