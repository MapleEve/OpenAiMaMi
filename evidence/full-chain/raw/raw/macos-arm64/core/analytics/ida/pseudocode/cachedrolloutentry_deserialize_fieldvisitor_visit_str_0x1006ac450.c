// 1.2.3 baseline same-set | __ZN215_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..CachedRolloutEntry$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$9visit_str17he2c0c897402cf8b3E @ 0x1006ac450 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..CachedRolloutEntry$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::he2c0c897402cf8b3(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 8LL:
      if ( *(_QWORD *)a2 == 0x657A6953656C6966LL )
      {
        a1[1] = 0;
        *a1 = 0;
      }
      else
      {
        if ( *(_QWORD *)a2 != 0x656D69547473616CLL )
          goto LABEL_10;
        a1[1] = 2;
        *a1 = 0;
      }
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x7974697669746361LL | *(unsigned int *)(a2 + 8) ^ 0x65746144LL )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x7974697669746361LL | *(_QWORD *)(a2 + 5) ^ 0x73656D6954797469LL )
        goto LABEL_10;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x6465696669646F6DLL | *(_QWORD *)(a2 + 7) ^ 0x736F6E614E744164LL )
        goto LABEL_10;
      a1[1] = 1;
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
