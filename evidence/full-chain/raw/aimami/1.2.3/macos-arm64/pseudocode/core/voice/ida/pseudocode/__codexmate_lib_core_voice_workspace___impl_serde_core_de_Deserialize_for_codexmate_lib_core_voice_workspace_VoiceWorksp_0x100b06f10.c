// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::workspace::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::workspace::VoiceWorkspaceFile>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h541192807e140d42 @ 0x100b06f10 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..voice..workspace.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h541192807e140d42(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x74736968 | *(_DWORD *)(a2 + 3) ^ 0x79726F74 )
        goto LABEL_14;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x6574616C706D6574LL | *(unsigned __int8 *)(a2 + 8) ^ 0x73LL )
        goto LABEL_14;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x616C756261636F76LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7972LL )
        goto LABEL_14;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
      {
        if ( *(_QWORD *)a2 ^ 0x616470557473616CLL | *(_QWORD *)(a2 + 5) ^ 0x7441646574616470LL )
          goto LABEL_14;
        a1[1] = 1;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x616C756261636F76LL | *(_QWORD *)(a2 + 6) ^ 0x737070417972616CLL )
        goto LABEL_14;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x69737365636F7270LL | *(_QWORD *)(a2 + 7) ^ 0x7365646F4D676E69LL )
        goto LABEL_14;
      a1[1] = 6;
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
