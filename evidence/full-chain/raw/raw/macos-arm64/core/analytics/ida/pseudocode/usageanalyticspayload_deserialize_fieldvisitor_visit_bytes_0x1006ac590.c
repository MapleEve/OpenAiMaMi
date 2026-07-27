// 1.2.3 baseline same-set | __ZN218_$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..UsageAnalyticsPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$11visit_bytes17hdf6e4d87a806bad0E @ 0x1006ac590 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..analytics.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..analytics..UsageAnalyticsPayload$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::hdf6e4d87a806bad0(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  char result; // al

  if ( a3 == 13 )
  {
    if ( *a2 == 100
      && a2[1] == 97
      && a2[2] == 105
      && a2[3] == 108
      && a2[4] == 121
      && a2[5] == 65
      && a2[6] == 99
      && a2[7] == 116
      && a2[8] == 105
      && a2[9] == 118
      && a2[10] == 105
      && a2[11] == 116 )
    {
      result = 2;
      if ( a2[12] == 121 )
        goto LABEL_37;
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
      && a2[7] == 83
      && a2[8] == 116
      && a2[9] == 97
      && a2[10] == 116 )
    {
      result = 1;
      if ( a2[11] == 115 )
        goto LABEL_37;
    }
  }
  else if ( a3 == 5 && *a2 == 116 && a2[1] == 111 && a2[2] == 100 && a2[3] == 97 && a2[4] == 121 )
  {
    a1[1] = 0;
    *a1 = 0;
    return 0;
  }
  result = 3;
LABEL_37:
  a1[1] = result;
  *a1 = 0;
  return result;
}
