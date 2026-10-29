// win 1.2.7 | module src/core/relay/models.rs | ea 0x14102d570 | name sub_14102D570
// win 1.2.7 | module src/core/relay/models.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14102D570(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char result; // al
  unsigned __int64 v4; // r9
  bool v5; // r11

  if ( a2 < 3 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)a3 ^ *(_WORD *)a1) | (unsigned __int8)(*(_BYTE *)(a3 + 2) ^ *(_BYTE *)(a1 + 2)) )
  {
    if ( a2 == 3 )
      return 0;
  }
  else
  {
    result = 1;
    if ( a2 == 3 || (unsigned __int8)(*(_BYTE *)(a1 + 3) - 58) < 0xF6u )
      return result;
  }
  v4 = 0;
  while ( 1 )
  {
    if ( !((unsigned __int16)(*(_WORD *)a3 ^ *(_WORD *)(a1 + v4 + 1))
         | (unsigned __int8)(*(_BYTE *)(a3 + 2) ^ *(_BYTE *)(a1 + v4 + 3))) )
    {
      if ( v4 >= a2 )
        sub_1419390C3(v4, a2, &off_141A6D268);
      result = 1;
      v5 = 1;
      if ( v4 + 4 < a2 )
        v5 = (unsigned __int8)(*(_BYTE *)(a1 + v4 + 4) - 58) < 0xF6u;
      if ( (unsigned __int8)(*(_BYTE *)(a1 + v4) - 58) <= 0xF5u && v5 )
        break;
    }
    if ( a2 - 3 == ++v4 )
      return 0;
  }
  return result;
}
