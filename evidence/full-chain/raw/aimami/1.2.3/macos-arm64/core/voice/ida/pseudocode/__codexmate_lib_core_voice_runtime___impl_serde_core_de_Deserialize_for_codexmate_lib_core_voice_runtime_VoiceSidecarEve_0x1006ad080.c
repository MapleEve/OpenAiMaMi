// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceSidecarEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h9459e439afe2a62c @ 0x1006ad080 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceSidecarEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h9459e439afe2a62c(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  char result; // al

  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1954047348 )
        goto LABEL_10;
      a1[1] = 0;
      *a1 = 0;
      result = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x69467369 | *(_DWORD *)(a2 + 3) ^ 0x6C616E69 )
      {
        if ( *(_DWORD *)a2 ^ 0x746F6D65 | *(_DWORD *)(a2 + 3) ^ 0x6E6F6974 )
          goto LABEL_10;
        a1[1] = 4;
        *a1 = 0;
        result = 4;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
        result = 1;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x65676175676E616CLL )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      result = 3;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x496E6F6973736573LL | *(unsigned __int8 *)(a2 + 8) ^ 0x64LL )
        goto LABEL_10;
      a1[1] = 2;
      *a1 = 0;
      result = 2;
      break;
    default:
LABEL_10:
      a1[1] = 5;
      *a1 = 0;
      result = 5;
      break;
  }
  return result;
}
