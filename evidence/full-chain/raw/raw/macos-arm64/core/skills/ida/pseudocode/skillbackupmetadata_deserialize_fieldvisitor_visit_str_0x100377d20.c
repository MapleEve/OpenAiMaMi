// 1.2.3 baseline same-set | __ZN210_$LT$codexmate_lib..core..skills.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..skills..SkillBackupMetadata$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$9visit_str17h9e73a61f59bdcd05E @ 0x100377d20 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..skills.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..skills..SkillBackupMetadata$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h9e73a61f59bdcd05(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1701667182 )
        goto LABEL_13;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6C746974 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
        goto LABEL_13;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6C696B73 | *(_DWORD *)(a2 + 3) ^ 0x44496C6C )
        goto LABEL_13;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x444970756B636162LL )
        goto LABEL_13;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461657263LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_13;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x65766974616C6572LL | *(unsigned int *)(a2 + 8) ^ 0x68746150LL )
        goto LABEL_13;
      a1[1] = 4;
      *a1 = 0;
      break;
    default:
LABEL_13:
      a1[1] = 6;
      *a1 = 0;
      break;
  }
  return result;
}
