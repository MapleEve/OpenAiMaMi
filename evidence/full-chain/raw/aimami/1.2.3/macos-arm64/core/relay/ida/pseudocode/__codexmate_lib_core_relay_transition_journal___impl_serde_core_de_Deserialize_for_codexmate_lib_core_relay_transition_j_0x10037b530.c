// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::transition_journal::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::transition_journal::TransitionEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h70e9230404d0fe43 @ 0x10037b530 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..transition_journal.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..TransitionEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h70e9230404d0fe43(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x73616870 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
        goto LABEL_10;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x67726174 | *(unsigned __int16 *)(a2 + 4) ^ 0x7465 )
      {
        if ( *(_DWORD *)a2 ^ 0x73616572 | *(unsigned __int16 *)(a2 + 4) ^ 0x6E6F )
          goto LABEL_10;
        a1[1] = 4;
        *a1 = 0;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x646572727563636FLL | *(unsigned int *)(a2 + 8) ^ 0x734D7441LL )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
        goto LABEL_10;
      a1[1] = 0;
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
