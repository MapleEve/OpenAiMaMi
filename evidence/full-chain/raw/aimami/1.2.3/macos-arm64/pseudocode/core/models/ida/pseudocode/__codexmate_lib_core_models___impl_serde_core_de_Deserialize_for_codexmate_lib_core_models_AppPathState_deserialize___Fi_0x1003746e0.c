// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AppPathState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h124432cd4402342b @ 0x1003746e0 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AppPathState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h124432cd4402342b(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  _BYTE *result; // rax
  char v4; // cl
  int v5; // ecx
  int v6; // ecx

  result = a1;
  switch ( a3 )
  {
    case 8LL:
      if ( *a2 != 97 )
        goto LABEL_133;
      if ( a2[1] != 117 )
        goto LABEL_133;
      if ( a2[2] != 116 )
        goto LABEL_133;
      if ( a2[3] != 104 )
        goto LABEL_133;
      if ( a2[4] != 80 )
        goto LABEL_133;
      if ( a2[5] != 97 )
        goto LABEL_133;
      if ( a2[6] != 116 )
        goto LABEL_133;
      v4 = 2;
      if ( a2[7] != 104 )
        goto LABEL_133;
      goto LABEL_134;
    case 9LL:
      if ( *a2 != 99
        || a2[1] != 111
        || a2[2] != 100
        || a2[3] != 101
        || a2[4] != 120
        || a2[5] != 72
        || a2[6] != 111
        || a2[7] != 109
        || a2[8] != 101 )
      {
        goto LABEL_133;
      }
      a1[1] = 0;
      *a1 = 0;
      return result;
    case 10LL:
      if ( *a2 == 97
        && a2[1] == 117
        && a2[2] == 116
        && a2[3] == 104
        && a2[4] == 69
        && a2[5] == 120
        && a2[6] == 105
        && a2[7] == 115
        && a2[8] == 116 )
      {
        v4 = 7;
        if ( a2[9] == 115 )
          goto LABEL_134;
      }
      goto LABEL_133;
    case 12LL:
      v5 = *a2;
      if ( v5 == 115 )
      {
        if ( a2[1] != 101
          || a2[2] != 115
          || a2[3] != 115
          || a2[4] != 105
          || a2[5] != 111
          || a2[6] != 110
          || a2[7] != 115
          || a2[8] != 80
          || a2[9] != 97
          || a2[10] != 116 )
        {
          goto LABEL_133;
        }
        v4 = 4;
      }
      else if ( v5 == 114 )
      {
        if ( a2[1] != 101
          || a2[2] != 103
          || a2[3] != 105
          || a2[4] != 115
          || a2[5] != 116
          || a2[6] != 114
          || a2[7] != 121
          || a2[8] != 80
          || a2[9] != 97
          || a2[10] != 116 )
        {
          goto LABEL_133;
        }
        v4 = 3;
      }
      else
      {
        if ( v5 != 97
          || a2[1] != 99
          || a2[2] != 99
          || a2[3] != 111
          || a2[4] != 117
          || a2[5] != 110
          || a2[6] != 116
          || a2[7] != 115
          || a2[8] != 80
          || a2[9] != 97
          || a2[10] != 116 )
        {
          goto LABEL_133;
        }
        v4 = 1;
      }
      if ( a2[11] == 104 )
        goto LABEL_134;
      goto LABEL_133;
    case 14LL:
      v6 = *a2;
      if ( v6 == 115 )
      {
        if ( a2[1] != 101
          || a2[2] != 115
          || a2[3] != 115
          || a2[4] != 105
          || a2[5] != 111
          || a2[6] != 110
          || a2[7] != 115
          || a2[8] != 69
          || a2[9] != 120
          || a2[10] != 105
          || a2[11] != 115
          || a2[12] != 116 )
        {
          goto LABEL_133;
        }
        v4 = 9;
      }
      else
      {
        if ( v6 != 114
          || a2[1] != 101
          || a2[2] != 103
          || a2[3] != 105
          || a2[4] != 115
          || a2[5] != 116
          || a2[6] != 114
          || a2[7] != 121
          || a2[8] != 69
          || a2[9] != 120
          || a2[10] != 105
          || a2[11] != 115
          || a2[12] != 116 )
        {
          goto LABEL_133;
        }
        v4 = 8;
      }
      if ( a2[13] == 115 )
        goto LABEL_134;
LABEL_133:
      v4 = 10;
LABEL_134:
      a1[1] = v4;
      *a1 = 0;
      return result;
    case 15LL:
      if ( *a2 == 108
        && a2[1] == 97
        && a2[2] == 117
        && a2[3] == 110
        && a2[4] == 99
        && a2[5] == 104
        && a2[6] == 65
        && a2[7] == 103
        && a2[8] == 101
        && a2[9] == 110
        && a2[10] == 116
        && a2[11] == 80
        && a2[12] == 97
        && a2[13] == 116 )
      {
        v4 = 5;
        if ( a2[14] == 104 )
          goto LABEL_134;
      }
      goto LABEL_133;
    case 17LL:
      if ( *a2 == 97
        && a2[1] == 117
        && a2[2] == 116
        && a2[3] == 111
        && a2[4] == 83
        && a2[5] == 119
        && a2[6] == 105
        && a2[7] == 116
        && a2[8] == 99
        && a2[9] == 104
        && a2[10] == 76
        && a2[11] == 111
        && a2[12] == 103
        && a2[13] == 80
        && a2[14] == 97
        && a2[15] == 116 )
      {
        v4 = 6;
        if ( a2[16] == 104 )
          goto LABEL_134;
      }
      goto LABEL_133;
    default:
      goto LABEL_133;
  }
}
