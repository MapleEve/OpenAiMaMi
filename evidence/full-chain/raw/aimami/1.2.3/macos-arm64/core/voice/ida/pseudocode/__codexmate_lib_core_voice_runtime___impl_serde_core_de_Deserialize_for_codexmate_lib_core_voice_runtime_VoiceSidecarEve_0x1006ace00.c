// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceSidecarEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h55030a92dc91942c @ 0x1006ace00 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceSidecarEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h55030a92dc91942c(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  char result; // al

  if ( a3 == 17 )
  {
    if ( *a2 == 115
      && a2[1] == 112
      && a2[2] == 101
      && a2[3] == 101
      && a2[4] == 99
      && a2[5] == 104
      && a2[6] == 82
      && a2[7] == 101
      && a2[8] == 99
      && a2[9] == 111
      && a2[10] == 103
      && a2[11] == 110
      && a2[12] == 105
      && a2[13] == 116
      && a2[14] == 105
      && a2[15] == 111 )
    {
      result = 1;
      if ( a2[16] == 110 )
        goto LABEL_32;
    }
  }
  else if ( a3 == 10
         && *a2 == 109
         && a2[1] == 105
         && a2[2] == 99
         && a2[3] == 114
         && a2[4] == 111
         && a2[5] == 112
         && a2[6] == 104
         && a2[7] == 111
         && a2[8] == 110
         && a2[9] == 101 )
  {
    a1[1] = 0;
    *a1 = 0;
    return 0;
  }
  result = 2;
LABEL_32:
  a1[1] = result;
  *a1 = 0;
  return result;
}
