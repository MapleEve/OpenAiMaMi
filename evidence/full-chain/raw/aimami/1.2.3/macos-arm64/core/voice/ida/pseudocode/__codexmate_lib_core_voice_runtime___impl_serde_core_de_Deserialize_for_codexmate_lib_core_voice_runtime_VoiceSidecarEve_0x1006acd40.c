// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceSidecarEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h509f7c35a791cf48 @ 0x1006acd40 | full-body via py_exec_file(ida_hexrays.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceSidecarEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h509f7c35a791cf48(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  char result; // al

  if ( a3 == 4 )
  {
    if ( *a2 == 99 && a2[1] == 111 && a2[2] == 100 )
    {
      result = 1;
      if ( a2[3] == 101 )
        goto LABEL_27;
    }
  }
  else if ( a3 == 9 )
  {
    if ( *a2 == 115
      && a2[1] == 101
      && a2[2] == 115
      && a2[3] == 115
      && a2[4] == 105
      && a2[5] == 111
      && a2[6] == 110
      && a2[7] == 73 )
    {
      result = 2;
      if ( a2[8] == 100 )
        goto LABEL_27;
    }
  }
  else if ( a3 == 7
         && *a2 == 109
         && a2[1] == 101
         && a2[2] == 115
         && a2[3] == 115
         && a2[4] == 97
         && a2[5] == 103
         && a2[6] == 101 )
  {
    a1[1] = 0;
    *a1 = 0;
    return 0;
  }
  result = 3;
LABEL_27:
  a1[1] = result;
  *a1 = 0;
  return result;
}
