// 1.2.3 baseline same-set | __ZN210_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..DailyActivity$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$11visit_bytes17h9d5151eab6fd1c5fE @ 0x1006ac280 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..DailyActivity$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h9d5151eab6fd1c5f(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  char result; // al
  int v4; // eax

  if ( a3 == 13 )
  {
    v4 = *a2;
    if ( v4 == 97 )
    {
      if ( a2[1] == 99
        && a2[2] == 116
        && a2[3] == 105
        && a2[4] == 118
        && a2[5] == 105
        && a2[6] == 116
        && a2[7] == 121
        && a2[8] == 76
        && a2[9] == 101
        && a2[10] == 118
        && a2[11] == 101 )
      {
        result = 3;
        if ( a2[12] == 108 )
          goto LABEL_50;
      }
    }
    else if ( v4 == 116
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
      result = 2;
      if ( a2[12] == 101 )
        goto LABEL_50;
    }
  }
  else if ( a3 == 12 )
  {
    if ( *a2 == 115
      && a2[1] == 101
      && a2[2] == 115
      && a2[3] == 115
      && a2[4] == 105
      && a2[5] == 111
      && a2[6] == 110
      && a2[7] == 67
      && a2[8] == 111
      && a2[9] == 117
      && a2[10] == 110 )
    {
      result = 1;
      if ( a2[11] == 116 )
        goto LABEL_50;
    }
  }
  else if ( a3 == 4 && *a2 == 100 && a2[1] == 97 && a2[2] == 116 && a2[3] == 101 )
  {
    a1[1] = 0;
    *a1 = 0;
    return 0;
  }
  result = 4;
LABEL_50:
  a1[1] = result;
  *a1 = 0;
  return result;
}
