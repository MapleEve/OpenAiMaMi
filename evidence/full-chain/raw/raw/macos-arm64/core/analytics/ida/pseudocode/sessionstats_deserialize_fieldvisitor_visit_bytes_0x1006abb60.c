// 1.2.3 baseline same-set | __ZN209_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$11visit_bytes17h12debb2987c12be2E @ 0x1006abb60 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h12debb2987c12be2(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  char result; // al
  int v4; // eax

  switch ( a3 )
  {
    case 10LL:
      if ( *a2 != 97 )
        goto LABEL_96;
      if ( a2[1] != 99 )
        goto LABEL_96;
      if ( a2[2] != 116 )
        goto LABEL_96;
      if ( a2[3] != 105 )
        goto LABEL_96;
      if ( a2[4] != 118 )
        goto LABEL_96;
      if ( a2[5] != 101 )
        goto LABEL_96;
      if ( a2[6] != 68 )
        goto LABEL_96;
      if ( a2[7] != 97 )
        goto LABEL_96;
      if ( a2[8] != 121 )
        goto LABEL_96;
      result = 2;
      if ( a2[9] != 115 )
        goto LABEL_96;
      goto LABEL_97;
    case 13LL:
      if ( *a2 != 116
        || a2[1] != 111
        || a2[2] != 116
        || a2[3] != 97
        || a2[4] != 108
        || a2[5] != 83
        || a2[6] != 101
        || a2[7] != 115
        || a2[8] != 115
        || a2[9] != 105
        || a2[10] != 111
        || a2[11] != 110
        || a2[12] != 115 )
      {
        goto LABEL_96;
      }
      a1[1] = 0;
      *a1 = 0;
      return 0;
    case 14LL:
      v4 = *a2;
      if ( v4 == 109 )
      {
        if ( a2[1] == 111
          && a2[2] == 115
          && a2[3] == 116
          && a2[4] == 65
          && a2[5] == 99
          && a2[6] == 116
          && a2[7] == 105
          && a2[8] == 118
          && a2[9] == 101
          && a2[10] == 68
          && a2[11] == 97
          && a2[12] == 116 )
        {
          result = 4;
          if ( a2[13] == 101 )
            goto LABEL_97;
        }
LABEL_96:
        result = 6;
        goto LABEL_97;
      }
      if ( v4 != 116 )
        goto LABEL_96;
      if ( a2[1] != 111 )
        goto LABEL_96;
      if ( a2[2] != 116 )
        goto LABEL_96;
      if ( a2[3] != 97 )
        goto LABEL_96;
      if ( a2[4] != 108 )
        goto LABEL_96;
      if ( a2[5] != 83 )
        goto LABEL_96;
      if ( a2[6] != 105 )
        goto LABEL_96;
      if ( a2[7] != 122 )
        goto LABEL_96;
      if ( a2[8] != 101 )
        goto LABEL_96;
      if ( a2[9] != 66 )
        goto LABEL_96;
      if ( a2[10] != 121 )
        goto LABEL_96;
      if ( a2[11] != 116 )
        goto LABEL_96;
      if ( a2[12] != 101 )
        goto LABEL_96;
      result = 1;
      if ( a2[13] != 115 )
        goto LABEL_96;
LABEL_97:
      a1[1] = result;
      *a1 = 0;
      return result;
    case 15LL:
      if ( *a2 == 109
        && a2[1] == 111
        && a2[2] == 115
        && a2[3] == 116
        && a2[4] == 65
        && a2[5] == 99
        && a2[6] == 116
        && a2[7] == 105
        && a2[8] == 118
        && a2[9] == 101
        && a2[10] == 67
        && a2[11] == 111
        && a2[12] == 117
        && a2[13] == 110 )
      {
        result = 5;
        if ( a2[14] == 116 )
          goto LABEL_97;
      }
      goto LABEL_96;
    case 23LL:
      if ( *a2 == 97
        && a2[1] == 118
        && a2[2] == 103
        && a2[3] == 83
        && a2[4] == 101
        && a2[5] == 115
        && a2[6] == 115
        && a2[7] == 105
        && a2[8] == 111
        && a2[9] == 110
        && a2[10] == 115
        && a2[11] == 80
        && a2[12] == 101
        && a2[13] == 114
        && a2[14] == 65
        && a2[15] == 99
        && a2[16] == 116
        && a2[17] == 105
        && a2[18] == 118
        && a2[19] == 101
        && a2[20] == 68
        && a2[21] == 97 )
      {
        result = 3;
        if ( a2[22] == 121 )
          goto LABEL_97;
      }
      goto LABEL_96;
    default:
      goto LABEL_96;
  }
}
