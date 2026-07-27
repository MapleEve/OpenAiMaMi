// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::PerModeShortcut>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h8376f0f79dc7cd78 @ 0x1006ac6e0 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..PerModeShortcut$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h8376f0f79dc7cd78(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6C797473 | *(unsigned __int8 *)(a2 + 4) ^ 0x65 )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x4379656B | *(_DWORD *)(a2 + 3) ^ 0x65646F43 )
      {
        if ( *(_DWORD *)a2 ^ 0x4B79656B | *(_DWORD *)(a2 + 3) ^ 0x646E694B )
          goto LABEL_10;
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x6C6562614C79656BLL )
        goto LABEL_10;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x7265696669646F6DLL | *(unsigned int *)(a2 + 8) ^ 0x6B73614DLL )
        goto LABEL_10;
      a1[1] = 4;
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
