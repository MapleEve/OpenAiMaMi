// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::bootstrap_cache::_::<impl serde_core::de::Deserialize for codexmate_lib::core::bootstrap_cache::BootstrapStatePayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h4bfe49a9a3396c5c @ 0x1006ad270 | full-body via IDA decompiler
char __fastcall _$LT$codexmate_lib..core..bootstrap_cache.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h4bfe49a9a3396c5c(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  char result; // al

  switch ( a3 )
  {
    case 9LL:
      if ( *a2 != 119
        || a2[1] != 114
        || a2[2] != 105
        || a2[3] != 116
        || a2[4] != 116
        || a2[5] != 101
        || a2[6] != 110
        || a2[7] != 65
        || a2[8] != 116 )
      {
        goto LABEL_73;
      }
      a1[1] = 0;
      *a1 = 0;
      return 0;
    case 10LL:
      if ( *a2 != 109 )
        goto LABEL_73;
      if ( a2[1] != 99 )
        goto LABEL_73;
      if ( a2[2] != 112 )
        goto LABEL_73;
      if ( a2[3] != 83 )
        goto LABEL_73;
      if ( a2[4] != 101 )
        goto LABEL_73;
      if ( a2[5] != 114 )
        goto LABEL_73;
      if ( a2[6] != 118 )
        goto LABEL_73;
      if ( a2[7] != 101 )
        goto LABEL_73;
      if ( a2[8] != 114 )
        goto LABEL_73;
      result = 3;
      if ( a2[9] != 115 )
        goto LABEL_73;
      goto LABEL_74;
    case 14LL:
      if ( *a2 == 117
        && a2[1] == 115
        && a2[2] == 97
        && a2[3] == 103
        && a2[4] == 101
        && a2[5] == 65
        && a2[6] == 110
        && a2[7] == 97
        && a2[8] == 108
        && a2[9] == 121
        && a2[10] == 116
        && a2[11] == 105
        && a2[12] == 99 )
      {
        result = 2;
        if ( a2[13] == 115 )
          goto LABEL_74;
      }
      goto LABEL_73;
    case 15LL:
      if ( *a2 == 105
        && a2[1] == 110
        && a2[2] == 115
        && a2[3] == 116
        && a2[4] == 97
        && a2[5] == 108
        && a2[6] == 108
        && a2[7] == 101
        && a2[8] == 100
        && a2[9] == 83
        && a2[10] == 107
        && a2[11] == 105
        && a2[12] == 108
        && a2[13] == 108 )
      {
        result = 4;
        if ( a2[14] == 115 )
          goto LABEL_74;
      }
      goto LABEL_73;
    case 19LL:
      if ( *a2 != 115 )
        goto LABEL_73;
      if ( a2[1] != 110 )
        goto LABEL_73;
      if ( a2[2] != 97 )
        goto LABEL_73;
      if ( a2[3] != 112 )
        goto LABEL_73;
      if ( a2[4] != 115 )
        goto LABEL_73;
      if ( a2[5] != 104 )
        goto LABEL_73;
      if ( a2[6] != 111 )
        goto LABEL_73;
      if ( a2[7] != 116 )
        goto LABEL_73;
      if ( a2[8] != 80 )
        goto LABEL_73;
      if ( a2[9] != 114 )
        goto LABEL_73;
      if ( a2[10] != 111 )
        goto LABEL_73;
      if ( a2[11] != 103 )
        goto LABEL_73;
      if ( a2[12] != 114 )
        goto LABEL_73;
      if ( a2[13] != 101 )
        goto LABEL_73;
      if ( a2[14] != 115 )
        goto LABEL_73;
      if ( a2[15] != 115 )
        goto LABEL_73;
      if ( a2[16] != 105 )
        goto LABEL_73;
      if ( a2[17] != 118 )
        goto LABEL_73;
      result = 1;
      if ( a2[18] != 101 )
        goto LABEL_73;
      goto LABEL_74;
    default:
LABEL_73:
      result = 5;
LABEL_74:
      a1[1] = result;
      *a1 = 0;
      return result;
  }
}
