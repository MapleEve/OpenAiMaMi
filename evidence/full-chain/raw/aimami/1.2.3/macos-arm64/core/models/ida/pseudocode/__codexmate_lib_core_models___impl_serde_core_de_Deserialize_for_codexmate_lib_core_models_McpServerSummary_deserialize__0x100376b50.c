// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::McpServerSummary>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h7df04da407ebb6ca @ 0x100376b50 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..McpServerSummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h7df04da407ebb6ca(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x7275 | *(unsigned __int8 *)(a2 + 2) ^ 0x6C )
        goto LABEL_16;
      a1[1] = 6;
      *a1 = 0;
      break;
    case 4LL:
      if ( *(_DWORD *)a2 == 1701667182 )
      {
        a1[1] = 0;
        *a1 = 0;
      }
      else
      {
        if ( *(_DWORD *)a2 != 1936159329 )
          goto LABEL_16;
        a1[1] = 5;
        *a1 = 0;
      }
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x62616E65 | *(_DWORD *)(a2 + 3) ^ 0x64656C62 )
      {
        if ( *(_DWORD *)a2 ^ 0x6D6D6F63 | *(_DWORD *)(a2 + 3) ^ 0x646E616D )
        {
          if ( *(_DWORD *)a2 ^ 0x64616568 | *(_DWORD *)(a2 + 3) ^ 0x73726564 )
            goto LABEL_16;
          a1[1] = 7;
          *a1 = 0;
        }
        else
        {
          a1[1] = 4;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 2;
        *a1 = 0;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x726F70736E617274LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_16;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x6150656372756F73LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6874LL )
        goto LABEL_16;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x6D6E6F7269766E65LL | *(_QWORD *)(a2 + 3) ^ 0x746E656D6E6F7269LL )
        goto LABEL_16;
      a1[1] = 8;
      *a1 = 0;
      break;
    default:
LABEL_16:
      a1[1] = 9;
      *a1 = 0;
      break;
  }
  return result;
}
