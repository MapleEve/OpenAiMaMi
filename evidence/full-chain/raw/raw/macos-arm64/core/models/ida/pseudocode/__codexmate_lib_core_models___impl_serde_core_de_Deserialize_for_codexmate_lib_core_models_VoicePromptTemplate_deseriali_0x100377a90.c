// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoicePromptTemplate>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h06d4a879d3869c05 @ 0x100377a90 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoicePromptTemplate$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h06d4a879d3869c05(
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
        goto LABEL_14;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 4LL:
      if ( *(_DWORD *)a2 != 1684957547 )
        goto LABEL_14;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6C746974 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
        goto LABEL_14;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x746E6F63 | *(_DWORD *)(a2 + 3) ^ 0x746E6574 )
      {
        if ( *(_DWORD *)a2 ^ 0x6C697562 | *(_DWORD *)(a2 + 3) ^ 0x6E49746C )
          goto LABEL_14;
        a1[1] = 5;
        *a1 = 0;
      }
      else
      {
        a1[1] = 4;
        *a1 = 0;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461647075LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_14;
      a1[1] = 6;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x7470697263736564LL | *(_QWORD *)(a2 + 3) ^ 0x6E6F697470697263LL )
        goto LABEL_14;
      a1[1] = 2;
      *a1 = 0;
      break;
    default:
LABEL_14:
      a1[1] = 7;
      *a1 = 0;
      break;
  }
  return result;
}
