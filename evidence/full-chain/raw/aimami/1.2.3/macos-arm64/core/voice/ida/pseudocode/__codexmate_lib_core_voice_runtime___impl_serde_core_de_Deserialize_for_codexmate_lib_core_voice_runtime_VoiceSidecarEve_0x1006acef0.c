// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceSidecarEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::he5d4984f6c3afe8b @ 0x1006acef0 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceSidecarEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::he5d4984f6c3afe8b(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  char result; // al
  int v4; // eax

  switch ( a3 )
  {
    case 4LL:
      if ( *a2 != 116 || a2[1] != 101 || a2[2] != 120 || a2[3] != 116 )
        goto LABEL_41;
      a1[1] = 0;
      *a1 = 0;
      return 0;
    case 7LL:
      v4 = *a2;
      if ( v4 != 101 )
      {
        if ( v4 != 105 )
          goto LABEL_41;
        if ( a2[1] != 115 )
          goto LABEL_41;
        if ( a2[2] != 70 )
          goto LABEL_41;
        if ( a2[3] != 105 )
          goto LABEL_41;
        if ( a2[4] != 110 )
          goto LABEL_41;
        if ( a2[5] != 97 )
          goto LABEL_41;
        result = 1;
        if ( a2[6] != 108 )
          goto LABEL_41;
        goto LABEL_42;
      }
      if ( a2[1] == 109 && a2[2] == 111 && a2[3] == 116 && a2[4] == 105 && a2[5] == 111 )
      {
        result = 4;
        if ( a2[6] == 110 )
          goto LABEL_42;
      }
      goto LABEL_41;
    case 8LL:
      if ( *a2 == 108 && a2[1] == 97 && a2[2] == 110 && a2[3] == 103 && a2[4] == 117 && a2[5] == 97 && a2[6] == 103 )
      {
        result = 3;
        if ( a2[7] == 101 )
          goto LABEL_42;
      }
      goto LABEL_41;
    case 9LL:
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
          goto LABEL_42;
      }
      goto LABEL_41;
    default:
LABEL_41:
      result = 5;
LABEL_42:
      a1[1] = result;
      *a1 = 0;
      return result;
  }
}
