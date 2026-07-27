// 1.2.3 baseline same-set | __ZN209_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..TodaySummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$11visit_bytes17h5ac1dd8c287cc899E @ 0x1006ac080 | full-body via IDA decompiler
char __fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..TodaySummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h5ac1dd8c287cc899(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  char result; // al

  if ( a3 == 21 )
  {
    if ( *a2 == 97
      && a2[1] == 99
      && a2[2] == 116
      && a2[3] == 105
      && a2[4] == 118
      && a2[5] == 101
      && a2[6] == 77
      && a2[7] == 105
      && a2[8] == 110
      && a2[9] == 117
      && a2[10] == 116
      && a2[11] == 101
      && a2[12] == 115
      && a2[13] == 69
      && a2[14] == 115
      && a2[15] == 116
      && a2[16] == 105
      && a2[17] == 109
      && a2[18] == 97
      && a2[19] == 116 )
    {
      result = 2;
      if ( a2[20] == 101 )
        goto LABEL_53;
    }
  }
  else if ( a3 == 13 )
  {
    if ( *a2 == 116
      && a2[1] == 111
      && a2[2] == 116
      && a2[3] == 97
      && a2[4] == 108
      && a2[5] == 70
      && a2[6] == 105
      && a2[7] == 108
      && a2[8] == 101
      && a2[9] == 83
      && a2[10] == 105
      && a2[11] == 122 )
    {
      result = 1;
      if ( a2[12] == 101 )
        goto LABEL_53;
    }
  }
  else if ( a3 == 12
         && *a2 == 115
         && a2[1] == 101
         && a2[2] == 115
         && a2[3] == 115
         && a2[4] == 105
         && a2[5] == 111
         && a2[6] == 110
         && a2[7] == 67
         && a2[8] == 111
         && a2[9] == 117
         && a2[10] == 110
         && a2[11] == 116 )
  {
    a1[1] = 0;
    *a1 = 0;
    return 0;
  }
  result = 3;
LABEL_53:
  a1[1] = result;
  *a1 = 0;
  return result;
}
