// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::InstalledSkillSummary>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h0c63cdf1ab7de7f9 @ 0x100378900 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..InstalledSkillSummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h0c63cdf1ab7de7f9(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 2LL:
      if ( *(_WORD *)a2 != 25705 )
        goto LABEL_16;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 4LL:
      if ( *(_DWORD *)a2 != 1701667182 )
        goto LABEL_16;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6C746974 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
        goto LABEL_16;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6D6D7573 | *(_DWORD *)(a2 + 3) ^ 0x7972616D )
        goto LABEL_16;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461647075LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_16;
      a1[1] = 7;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x65766974616C6572LL | *(unsigned int *)(a2 + 8) ^ 0x68746150LL )
        goto LABEL_16;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x726F746365726964LL | *(_QWORD *)(a2 + 5) ^ 0x6874615079726F74LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6C69466C6C696B73LL | *(_QWORD *)(a2 + 5) ^ 0x68746150656C6946LL )
          goto LABEL_16;
        a1[1] = 6;
        *a1 = 0;
      }
      else
      {
        a1[1] = 5;
        *a1 = 0;
      }
      break;
    default:
LABEL_16:
      a1[1] = 8;
      *a1 = 0;
      break;
  }
  return result;
}
