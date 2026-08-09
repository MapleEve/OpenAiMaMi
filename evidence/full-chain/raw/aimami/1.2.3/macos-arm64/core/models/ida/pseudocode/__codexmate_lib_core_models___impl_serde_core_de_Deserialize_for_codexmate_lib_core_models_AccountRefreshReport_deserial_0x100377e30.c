// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AccountRefreshReport>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h74ca7c3161bcc4a4 @ 0x100377e30 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountRefreshReport$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h74ca7c3161bcc4a4(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x706F6373 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
      {
        if ( *(_DWORD *)a2 ^ 0x656B6F74 | *(unsigned __int8 *)(a2 + 4) ^ 0x6E )
        {
          if ( *(_DWORD *)a2 ^ 0x67617375 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
            goto LABEL_13;
          a1[1] = 7;
          *a1 = 0;
        }
        else
        {
          a1[1] = 5;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)a2 == 0x6E6F697369766572LL )
      {
        a1[1] = 0;
        *a1 = 0;
      }
      else
      {
        if ( *(_QWORD *)a2 != 0x617461646174656DLL )
          goto LABEL_13;
        a1[1] = 6;
        *a1 = 0;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657472617473LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_13;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x4B746E756F636361LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7965LL )
      {
        if ( *(_QWORD *)a2 ^ 0x64656873696E6966LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7441LL )
          goto LABEL_13;
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
LABEL_13:
      a1[1] = 8;
      *a1 = 0;
      break;
  }
  return result;
}
