// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceVocabularyEntry>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::hb0a83d0be4e9d88b @ 0x100378610 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyEntry$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::hb0a83d0be4e9d88b(
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
      if ( *(_DWORD *)a2 != 1684957547 )
        goto LABEL_16;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x65746F6E | *(unsigned __int8 *)(a2 + 4) ^ 0x73 )
        goto LABEL_16;
      a1[1] = 6;
      *a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x72756F73 | *(unsigned __int16 *)(a2 + 4) ^ 0x6563 )
        goto LABEL_16;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x4E707061 | *(_DWORD *)(a2 + 3) ^ 0x656D614E )
        goto LABEL_16;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461647075LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_16;
      a1[1] = 7;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x6D6563616C706572LL | *(_QWORD *)(a2 + 3) ^ 0x746E656D6563616CLL )
      {
        if ( *(_QWORD *)a2 ^ 0x6C646E7542707061LL | *(_QWORD *)(a2 + 3) ^ 0x6449656C646E7542LL )
          goto LABEL_16;
        a1[1] = 4;
        *a1 = 0;
      }
      else
      {
        a1[1] = 2;
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
