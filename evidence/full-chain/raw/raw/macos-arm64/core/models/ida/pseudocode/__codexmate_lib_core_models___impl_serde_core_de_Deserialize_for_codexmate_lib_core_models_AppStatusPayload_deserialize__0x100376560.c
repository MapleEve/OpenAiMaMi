// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AppStatusPayload>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::hcfc397ceeacd99ac @ 0x100376560 | full-body via IDA Python(IDA decompiler.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AppStatusPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::hcfc397ceeacd99ac(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  _BYTE *result; // rax
  char v4; // cl
  int v5; // ecx

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *a2 != 97 )
        goto LABEL_105;
      if ( a2[1] != 112 )
        goto LABEL_105;
      v4 = 7;
      if ( a2[2] != 105 )
        goto LABEL_105;
      goto LABEL_106;
    case 5LL:
      if ( *a2 != 112 || a2[1] != 97 || a2[2] != 116 || a2[3] != 104 || a2[4] != 115 )
        goto LABEL_105;
      a1[1] = 0;
      *a1 = 0;
      return result;
    case 10LL:
      v5 = *a2;
      if ( v5 == 97 )
      {
        if ( a2[1] == 117
          && a2[2] == 116
          && a2[3] == 111
          && a2[4] == 83
          && a2[5] == 119
          && a2[6] == 105
          && a2[7] == 116
          && a2[8] == 99 )
        {
          v4 = 6;
          if ( a2[9] == 104 )
            goto LABEL_106;
        }
LABEL_105:
        v4 = 9;
        goto LABEL_106;
      }
      if ( v5 != 108 )
        goto LABEL_105;
      if ( a2[1] != 97 )
        goto LABEL_105;
      if ( a2[2] != 115 )
        goto LABEL_105;
      if ( a2[3] != 116 )
        goto LABEL_105;
      if ( a2[4] != 83 )
        goto LABEL_105;
      if ( a2[5] != 99 )
        goto LABEL_105;
      if ( a2[6] != 97 )
        goto LABEL_105;
      if ( a2[7] != 110 )
        goto LABEL_105;
      if ( a2[8] != 65 )
        goto LABEL_105;
      v4 = 3;
      if ( a2[9] != 116 )
        goto LABEL_105;
LABEL_106:
      a1[1] = v4;
      *a1 = 0;
      return result;
    case 11LL:
      if ( *a2 == 117
        && a2[1] == 115
        && a2[2] == 97
        && a2[3] == 103
        && a2[4] == 101
        && a2[5] == 83
        && a2[6] == 111
        && a2[7] == 117
        && a2[8] == 114
        && a2[9] == 99 )
      {
        v4 = 5;
        if ( a2[10] == 101 )
          goto LABEL_106;
      }
      goto LABEL_105;
    case 12LL:
      if ( *a2 == 97
        && a2[1] == 99
        && a2[2] == 99
        && a2[3] == 111
        && a2[4] == 117
        && a2[5] == 110
        && a2[6] == 116
        && a2[7] == 67
        && a2[8] == 111
        && a2[9] == 117
        && a2[10] == 110 )
      {
        v4 = 1;
        if ( a2[11] == 116 )
          goto LABEL_106;
      }
      goto LABEL_105;
    case 13LL:
      if ( *a2 == 97
        && a2[1] == 99
        && a2[2] == 116
        && a2[3] == 105
        && a2[4] == 118
        && a2[5] == 101
        && a2[6] == 65
        && a2[7] == 99
        && a2[8] == 99
        && a2[9] == 111
        && a2[10] == 117
        && a2[11] == 110 )
      {
        v4 = 4;
        if ( a2[12] == 116 )
          goto LABEL_106;
      }
      goto LABEL_105;
    case 15LL:
      if ( *a2 == 97
        && a2[1] == 112
        && a2[2] == 105
        && a2[3] == 67
        && a2[4] == 111
        && a2[5] == 110
        && a2[6] == 110
        && a2[7] == 101
        && a2[8] == 99
        && a2[9] == 116
        && a2[10] == 105
        && a2[11] == 118
        && a2[12] == 105
        && a2[13] == 116 )
      {
        v4 = 8;
        if ( a2[14] == 121 )
          goto LABEL_106;
      }
      goto LABEL_105;
    case 16LL:
      if ( *a2 == 97
        && a2[1] == 99
        && a2[2] == 116
        && a2[3] == 105
        && a2[4] == 118
        && a2[5] == 101
        && a2[6] == 65
        && a2[7] == 99
        && a2[8] == 99
        && a2[9] == 111
        && a2[10] == 117
        && a2[11] == 110
        && a2[12] == 116
        && a2[13] == 75
        && a2[14] == 101 )
      {
        v4 = 2;
        if ( a2[15] == 121 )
          goto LABEL_106;
      }
      goto LABEL_105;
    default:
      goto LABEL_105;
  }
}
