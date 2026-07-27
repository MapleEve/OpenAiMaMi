// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::io::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::io::RelayExportProvider>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h028ee19a19f9e50b @ 0x100545190 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..io.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportProvider$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h028ee19a19f9e50b(
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
        goto LABEL_19;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x6469 | *(unsigned __int8 *)(a2 + 2) ^ 0x65 )
        goto LABEL_19;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 4LL:
      if ( *(_DWORD *)a2 != 1701667182 )
        goto LABEL_19;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x65646F6D | *(unsigned __int8 *)(a2 + 4) ^ 0x6C )
      {
        if ( *(_DWORD *)a2 ^ 0x6E617262 | *(unsigned __int8 *)(a2 + 4) ^ 0x64 )
          goto LABEL_19;
        a1[1] = 7;
        *a1 = 0;
      }
      else
      {
        a1[1] = 5;
        *a1 = 0;
      }
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x4B697061 | *(unsigned __int16 *)(a2 + 4) ^ 0x7965 )
      {
        if ( *(_DWORD *)a2 ^ 0x65646F6D | *(unsigned __int16 *)(a2 + 4) ^ 0x736C )
          goto LABEL_19;
        a1[1] = 8;
        *a1 = 0;
      }
      else
      {
        a1[1] = 4;
        *a1 = 0;
      }
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x65736162 | *(_DWORD *)(a2 + 3) ^ 0x6C725565 )
      {
        if ( *(_DWORD *)a2 ^ 0x65726977 | *(_DWORD *)(a2 + 3) ^ 0x69704165 )
        {
          if ( *(_DWORD *)a2 ^ 0x7774656E | *(_DWORD *)(a2 + 3) ^ 0x6B726F77 )
            goto LABEL_19;
          a1[1] = 10;
          *a1 = 0;
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
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x6165486172747865LL | *(unsigned int *)(a2 + 8) ^ 0x73726564LL )
        goto LABEL_19;
      a1[1] = 9;
      *a1 = 0;
      break;
    default:
LABEL_19:
      a1[1] = 11;
      *a1 = 0;
      break;
  }
  return result;
}
