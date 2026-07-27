// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceHistoryEntry>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h647c788e11b3af0c @ 0x100376cf0 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceHistoryEntry$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h647c788e11b3af0c(
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
        goto LABEL_26;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x74617473 | *(unsigned __int16 *)(a2 + 4) ^ 0x7375 )
        goto LABEL_26;
      a1[1] = 11;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x54776172 | *(_DWORD *)(a2 + 3) ^ 0x74786554 )
        goto LABEL_26;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x6C65646F4D727361LL )
        goto LABEL_26;
      a1[1] = 14;
      *a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461657263LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_26;
      a1[1] = 19;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x6574616C706D6574LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6449LL )
      {
        if ( *(_QWORD *)a2 ^ 0x69746F6D45727361LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6E6FLL )
          goto LABEL_26;
        a1[1] = 16;
        *a1 = 0;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x69766F7250727361LL | *(_QWORD *)(a2 + 3) ^ 0x72656469766F7250LL )
      {
        if ( *(_QWORD *)a2 ^ 0x75676E614C727361LL | *(_QWORD *)(a2 + 3) ^ 0x65676175676E614CLL )
          goto LABEL_26;
        a1[1] = 15;
        *a1 = 0;
      }
      else
      {
        a1[1] = 13;
        *a1 = 0;
      }
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x6574616C706D6574LL | *(unsigned int *)(a2 + 8) ^ 0x646E694BLL )
      {
        if ( *(_QWORD *)a2 ^ 0x64657265646E6572LL | *(unsigned int *)(a2 + 8) ^ 0x74786554LL )
        {
          if ( *(_QWORD *)a2 ^ 0x64657463656C6573LL | *(unsigned int *)(a2 + 8) ^ 0x74786554LL )
          {
            if ( *(_QWORD *)a2 ^ 0x726F727245727361LL | *(unsigned int *)(a2 + 8) ^ 0x65646F43LL )
              goto LABEL_26;
            a1[1] = 18;
            *a1 = 0;
          }
          else
          {
            a1[1] = 7;
            *a1 = 0;
          }
        }
        else
        {
          a1[1] = 6;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 3;
        *a1 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6574616C706D6574LL | *(_QWORD *)(a2 + 5) ^ 0x656C746954657461LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6F4374706D6F7270LL | *(_QWORD *)(a2 + 5) ^ 0x746E65746E6F4374LL )
        {
          if ( *(_QWORD *)a2 ^ 0x72616F6270696C63LL | *(_QWORD *)(a2 + 5) ^ 0x747865546472616FLL )
          {
            if ( *(_QWORD *)a2 ^ 0x7041746567726174LL | *(_QWORD *)(a2 + 5) ^ 0x656D614E70704174LL )
            {
              if ( *(_QWORD *)a2 ^ 0x7461727544727361LL | *(_QWORD *)(a2 + 5) ^ 0x734D6E6F69746172LL )
                goto LABEL_26;
              a1[1] = 17;
              *a1 = 0;
            }
            else
            {
              a1[1] = 10;
              *a1 = 0;
            }
          }
          else
          {
            a1[1] = 8;
            *a1 = 0;
          }
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
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x7542746567726174LL | *(_QWORD *)(a2 + 6) ^ 0x6449656C646E7542LL )
        goto LABEL_26;
      a1[1] = 9;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x69737365636F7270LL | *(_QWORD *)(a2 + 7) ^ 0x726F727245676E69LL )
        goto LABEL_26;
      a1[1] = 12;
      *a1 = 0;
      break;
    default:
LABEL_26:
      a1[1] = 20;
      *a1 = 0;
      break;
  }
  return result;
}
