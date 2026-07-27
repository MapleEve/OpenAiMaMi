// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AccountSummary>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h9a99bd762bf35683 @ 0x1003752a0 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h9a99bd762bf35683(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  _BYTE *result; // rax
  char v4; // cl
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *a2 != 112 )
        goto LABEL_281;
      if ( a2[1] != 108 )
        goto LABEL_281;
      if ( a2[2] != 97 )
        goto LABEL_281;
      v4 = 6;
      if ( a2[3] != 110 )
        goto LABEL_281;
      goto LABEL_282;
    case 5LL:
      v7 = *a2;
      if ( v7 == 97 )
      {
        if ( a2[1] != 108 )
          goto LABEL_281;
        if ( a2[2] != 105 )
          goto LABEL_281;
        if ( a2[3] != 97 )
          goto LABEL_281;
        v4 = 2;
        if ( a2[4] != 115 )
          goto LABEL_281;
      }
      else
      {
        if ( v7 != 101 )
          goto LABEL_281;
        if ( a2[1] != 109 )
          goto LABEL_281;
        if ( a2[2] != 97 )
          goto LABEL_281;
        if ( a2[3] != 105 )
          goto LABEL_281;
        v4 = 1;
        if ( a2[4] != 108 )
          goto LABEL_281;
      }
      goto LABEL_282;
    case 8LL:
      v6 = *a2;
      if ( v6 == 105 )
      {
        if ( a2[1] != 115 || a2[2] != 65 || a2[3] != 99 || a2[4] != 116 || a2[5] != 105 || a2[6] != 118 )
          goto LABEL_281;
        v4 = 16;
      }
      else
      {
        if ( v6 != 97 || a2[1] != 117 || a2[2] != 116 || a2[3] != 104 || a2[4] != 77 || a2[5] != 111 || a2[6] != 100 )
          goto LABEL_281;
        v4 = 9;
      }
      if ( a2[7] != 101 )
        goto LABEL_281;
      goto LABEL_282;
    case 9LL:
      if ( *a2 != 99 )
        goto LABEL_281;
      if ( a2[1] != 114 )
        goto LABEL_281;
      if ( a2[2] != 101 )
        goto LABEL_281;
      if ( a2[3] != 97 )
        goto LABEL_281;
      if ( a2[4] != 116 )
        goto LABEL_281;
      if ( a2[5] != 101 )
        goto LABEL_281;
      if ( a2[6] != 100 )
        goto LABEL_281;
      if ( a2[7] != 65 )
        goto LABEL_281;
      v4 = 17;
      if ( a2[8] != 116 )
        goto LABEL_281;
      goto LABEL_282;
    case 10LL:
      v9 = *a2;
      switch ( v9 )
      {
        case 'a':
          if ( a2[1] == 99
            && a2[2] == 99
            && a2[3] == 111
            && a2[4] == 117
            && a2[5] == 110
            && a2[6] == 116
            && a2[7] == 75
            && a2[8] == 101
            && a2[9] == 121 )
          {
            a1[1] = 0;
            *a1 = 0;
            return result;
          }
          goto LABEL_281;
        case 'l':
          if ( a2[1] != 97 )
            goto LABEL_281;
          if ( a2[2] != 115 )
            goto LABEL_281;
          if ( a2[3] != 116 )
            goto LABEL_281;
          if ( a2[4] != 85 )
            goto LABEL_281;
          if ( a2[5] != 115 )
            goto LABEL_281;
          if ( a2[6] != 101 )
            goto LABEL_281;
          if ( a2[7] != 100 )
            goto LABEL_281;
          if ( a2[8] != 65 )
            goto LABEL_281;
          v4 = 18;
          if ( a2[9] != 116 )
            goto LABEL_281;
          break;
        case 'p':
          if ( a2[1] != 108 )
            goto LABEL_281;
          if ( a2[2] != 97 )
            goto LABEL_281;
          if ( a2[3] != 110 )
            goto LABEL_281;
          if ( a2[4] != 83 )
            goto LABEL_281;
          if ( a2[5] != 111 )
            goto LABEL_281;
          if ( a2[6] != 117 )
            goto LABEL_281;
          if ( a2[7] != 114 )
            goto LABEL_281;
          if ( a2[8] != 99 )
            goto LABEL_281;
          v4 = 7;
          if ( a2[9] != 101 )
            goto LABEL_281;
          break;
        default:
          goto LABEL_281;
      }
      goto LABEL_282;
    case 11LL:
      switch ( *a2 )
      {
        case 'a':
          if ( a2[1] != 99
            || a2[2] != 99
            || a2[3] != 111
            || a2[4] != 117
            || a2[5] != 110
            || a2[6] != 116
            || a2[7] != 78
            || a2[8] != 97
            || a2[9] != 109 )
          {
            goto LABEL_281;
          }
          v4 = 3;
          goto LABEL_280;
        case 'l':
          if ( a2[1] != 97 )
            goto LABEL_281;
          if ( a2[2] != 115 )
            goto LABEL_281;
          if ( a2[3] != 116 )
            goto LABEL_281;
          if ( a2[4] != 85 )
            goto LABEL_281;
          if ( a2[5] != 115 )
            goto LABEL_281;
          if ( a2[6] != 97 )
            goto LABEL_281;
          if ( a2[7] != 103 )
            goto LABEL_281;
          if ( a2[8] != 101 )
            goto LABEL_281;
          if ( a2[9] != 65 )
            goto LABEL_281;
          v4 = 19;
          if ( a2[10] != 116 )
            goto LABEL_281;
          goto LABEL_282;
        case 'p':
          if ( a2[1] != 114
            || a2[2] != 111
            || a2[3] != 102
            || a2[4] != 105
            || a2[5] != 108
            || a2[6] != 101
            || a2[7] != 78
            || a2[8] != 97
            || a2[9] != 109 )
          {
            goto LABEL_281;
          }
          v4 = 5;
          goto LABEL_280;
        case 't':
          if ( a2[1] != 111 )
            goto LABEL_281;
          if ( a2[2] != 107 )
            goto LABEL_281;
          if ( a2[3] != 101 )
            goto LABEL_281;
          if ( a2[4] != 110 )
            goto LABEL_281;
          if ( a2[5] != 83 )
            goto LABEL_281;
          if ( a2[6] != 116 )
            goto LABEL_281;
          if ( a2[7] != 97 )
            goto LABEL_281;
          if ( a2[8] != 116 )
            goto LABEL_281;
          if ( a2[9] != 117 )
            goto LABEL_281;
          v4 = 23;
          if ( a2[10] != 115 )
            goto LABEL_281;
          goto LABEL_282;
        case 'u':
          if ( a2[1] != 115
            || a2[2] != 97
            || a2[3] != 103
            || a2[4] != 101
            || a2[5] != 83
            || a2[6] != 111
            || a2[7] != 117
            || a2[8] != 114
            || a2[9] != 99 )
          {
            goto LABEL_281;
          }
          v4 = 20;
LABEL_280:
          if ( a2[10] != 101 )
            goto LABEL_281;
          goto LABEL_282;
        default:
          goto LABEL_281;
      }
    case 13LL:
      v8 = *a2;
      if ( v8 == 112 )
      {
        if ( a2[1] != 114 )
          goto LABEL_281;
        if ( a2[2] != 105 )
          goto LABEL_281;
        if ( a2[3] != 109 )
          goto LABEL_281;
        if ( a2[4] != 97 )
          goto LABEL_281;
        if ( a2[5] != 114 )
          goto LABEL_281;
        if ( a2[6] != 121 )
          goto LABEL_281;
        if ( a2[7] != 87 )
          goto LABEL_281;
        if ( a2[8] != 105 )
          goto LABEL_281;
        if ( a2[9] != 110 )
          goto LABEL_281;
        if ( a2[10] != 100 )
          goto LABEL_281;
        if ( a2[11] != 111 )
          goto LABEL_281;
        v4 = 21;
        if ( a2[12] != 119 )
          goto LABEL_281;
      }
      else
      {
        if ( v8 != 119 )
          goto LABEL_281;
        if ( a2[1] != 111 )
          goto LABEL_281;
        if ( a2[2] != 114 )
          goto LABEL_281;
        if ( a2[3] != 107 )
          goto LABEL_281;
        if ( a2[4] != 115 )
          goto LABEL_281;
        if ( a2[5] != 112 )
          goto LABEL_281;
        if ( a2[6] != 97 )
          goto LABEL_281;
        if ( a2[7] != 99 )
          goto LABEL_281;
        if ( a2[8] != 101 )
          goto LABEL_281;
        if ( a2[9] != 78 )
          goto LABEL_281;
        if ( a2[10] != 97 )
          goto LABEL_281;
        if ( a2[11] != 109 )
          goto LABEL_281;
        v4 = 4;
        if ( a2[12] != 101 )
          goto LABEL_281;
      }
      goto LABEL_282;
    case 14LL:
      if ( *a2 != 112 )
        goto LABEL_281;
      if ( a2[1] != 108 )
        goto LABEL_281;
      if ( a2[2] != 97 )
        goto LABEL_281;
      if ( a2[3] != 110 )
        goto LABEL_281;
      if ( a2[4] != 79 )
        goto LABEL_281;
      if ( a2[5] != 98 )
        goto LABEL_281;
      if ( a2[6] != 115 )
        goto LABEL_281;
      if ( a2[7] != 101 )
        goto LABEL_281;
      if ( a2[8] != 114 )
        goto LABEL_281;
      if ( a2[9] != 118 )
        goto LABEL_281;
      if ( a2[10] != 101 )
        goto LABEL_281;
      if ( a2[11] != 100 )
        goto LABEL_281;
      if ( a2[12] != 65 )
        goto LABEL_281;
      v4 = 8;
      if ( a2[13] != 116 )
        goto LABEL_281;
      goto LABEL_282;
    case 15LL:
      if ( *a2 != 115 )
        goto LABEL_281;
      if ( a2[1] != 101 )
        goto LABEL_281;
      if ( a2[2] != 99 )
        goto LABEL_281;
      if ( a2[3] != 111 )
        goto LABEL_281;
      if ( a2[4] != 110 )
        goto LABEL_281;
      if ( a2[5] != 100 )
        goto LABEL_281;
      if ( a2[6] != 97 )
        goto LABEL_281;
      if ( a2[7] != 114 )
        goto LABEL_281;
      if ( a2[8] != 121 )
        goto LABEL_281;
      if ( a2[9] != 87 )
        goto LABEL_281;
      if ( a2[10] != 105 )
        goto LABEL_281;
      if ( a2[11] != 110 )
        goto LABEL_281;
      if ( a2[12] != 100 )
        goto LABEL_281;
      if ( a2[13] != 111 )
        goto LABEL_281;
      v4 = 22;
      if ( a2[14] != 119 )
        goto LABEL_281;
      goto LABEL_282;
    case 18LL:
      if ( *a2 != 115
        || a2[1] != 117
        || a2[2] != 98
        || a2[3] != 115
        || a2[4] != 99
        || a2[5] != 114
        || a2[6] != 105
        || a2[7] != 112
        || a2[8] != 116
        || a2[9] != 105
        || a2[10] != 111
        || a2[11] != 110
        || a2[12] != 83 )
      {
        goto LABEL_281;
      }
      v10 = a2[13];
      if ( v10 == 111 )
      {
        if ( a2[14] == 117 && a2[15] == 114 && a2[16] == 99 )
        {
          v4 = 14;
          if ( a2[17] == 101 )
            goto LABEL_282;
        }
      }
      else if ( v10 == 116 && a2[14] == 97 && a2[15] == 116 && a2[16] == 117 )
      {
        v4 = 13;
        if ( a2[17] == 115 )
          goto LABEL_282;
      }
      goto LABEL_281;
    case 21LL:
      v5 = *a2;
      if ( v5 == 115 )
      {
        if ( a2[1] != 117
          || a2[2] != 98
          || a2[3] != 115
          || a2[4] != 99
          || a2[5] != 114
          || a2[6] != 105
          || a2[7] != 112
          || a2[8] != 116
          || a2[9] != 105
          || a2[10] != 111
          || a2[11] != 110 )
        {
          goto LABEL_281;
        }
        v11 = a2[12];
        if ( v11 == 87 )
        {
          if ( a2[13] != 105 )
            goto LABEL_281;
          if ( a2[14] != 108 )
            goto LABEL_281;
          if ( a2[15] != 108 )
            goto LABEL_281;
          if ( a2[16] != 82 )
            goto LABEL_281;
          if ( a2[17] != 101 )
            goto LABEL_281;
          if ( a2[18] != 110 )
            goto LABEL_281;
          if ( a2[19] != 101 )
            goto LABEL_281;
          v4 = 12;
          if ( a2[20] != 119 )
            goto LABEL_281;
        }
        else
        {
          if ( v11 != 69 )
            goto LABEL_281;
          if ( a2[13] != 120 )
            goto LABEL_281;
          if ( a2[14] != 112 )
            goto LABEL_281;
          if ( a2[15] != 105 )
            goto LABEL_281;
          if ( a2[16] != 114 )
            goto LABEL_281;
          if ( a2[17] != 101 )
            goto LABEL_281;
          if ( a2[18] != 115 )
            goto LABEL_281;
          if ( a2[19] != 65 )
            goto LABEL_281;
          v4 = 11;
          if ( a2[20] != 116 )
            goto LABEL_281;
        }
      }
      else if ( v5 != 104
             || a2[1] != 97
             || a2[2] != 115
             || a2[3] != 65
             || a2[4] != 99
             || a2[5] != 116
             || a2[6] != 105
             || a2[7] != 118
             || a2[8] != 101
             || a2[9] != 83
             || a2[10] != 117
             || a2[11] != 98
             || a2[12] != 115
             || a2[13] != 99
             || a2[14] != 114
             || a2[15] != 105
             || a2[16] != 112
             || a2[17] != 116
             || a2[18] != 105
             || a2[19] != 111
             || (v4 = 10, a2[20] != 110) )
      {
LABEL_281:
        v4 = 24;
      }
LABEL_282:
      a1[1] = v4;
      *a1 = 0;
      return result;
    case 22LL:
      if ( *a2 != 115 )
        goto LABEL_281;
      if ( a2[1] != 117 )
        goto LABEL_281;
      if ( a2[2] != 98 )
        goto LABEL_281;
      if ( a2[3] != 115 )
        goto LABEL_281;
      if ( a2[4] != 99 )
        goto LABEL_281;
      if ( a2[5] != 114 )
        goto LABEL_281;
      if ( a2[6] != 105 )
        goto LABEL_281;
      if ( a2[7] != 112 )
        goto LABEL_281;
      if ( a2[8] != 116 )
        goto LABEL_281;
      if ( a2[9] != 105 )
        goto LABEL_281;
      if ( a2[10] != 111 )
        goto LABEL_281;
      if ( a2[11] != 110 )
        goto LABEL_281;
      if ( a2[12] != 79 )
        goto LABEL_281;
      if ( a2[13] != 98 )
        goto LABEL_281;
      if ( a2[14] != 115 )
        goto LABEL_281;
      if ( a2[15] != 101 )
        goto LABEL_281;
      if ( a2[16] != 114 )
        goto LABEL_281;
      if ( a2[17] != 118 )
        goto LABEL_281;
      if ( a2[18] != 101 )
        goto LABEL_281;
      if ( a2[19] != 100 )
        goto LABEL_281;
      if ( a2[20] != 65 )
        goto LABEL_281;
      v4 = 15;
      if ( a2[21] != 116 )
        goto LABEL_281;
      goto LABEL_282;
    default:
      goto LABEL_281;
  }
}
