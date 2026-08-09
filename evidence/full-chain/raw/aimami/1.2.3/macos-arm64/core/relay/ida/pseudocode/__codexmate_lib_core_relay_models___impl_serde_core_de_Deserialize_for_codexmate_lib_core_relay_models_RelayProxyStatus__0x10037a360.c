// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::models::RelayProxyStatus>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h70a1a7cda09ea61f @ 0x10037a360 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProxyStatus$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h70a1a7cda09ea61f(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1953656688 )
        goto LABEL_10;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6E6E7572 | *(_DWORD *)(a2 + 3) ^ 0x676E696E )
      {
        if ( *(_DWORD *)a2 ^ 0x65736162 | *(_DWORD *)(a2 + 3) ^ 0x6C725565 )
          goto LABEL_10;
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x6F7272457473616CLL | *(unsigned __int8 *)(a2 + 8) ^ 0x72LL )
        goto LABEL_10;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x7361427865646F63LL | *(unsigned int *)(a2 + 8) ^ 0x6C725565LL )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      break;
    default:
LABEL_10:
      a1[1] = 5;
      *a1 = 0;
      break;
  }
  return result;
}
