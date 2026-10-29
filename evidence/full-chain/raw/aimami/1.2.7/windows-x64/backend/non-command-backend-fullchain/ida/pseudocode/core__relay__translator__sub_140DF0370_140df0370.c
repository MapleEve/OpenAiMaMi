// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140df0370 | name sub_140DF0370
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DF0370(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  char v6; // bl

  result = 0;
  if ( a1 )
  {
LABEL_2:
    v4 = -1;
    v5 = 0;
    do
    {
      if ( !(v5 + (*(unsigned __int16 *)(a1 + 1506) << 7)) )
      {
        v4 = *(unsigned __int16 *)(a1 + 1506);
LABEL_8:
        if ( a2-- == 0 )
          return result;
        a1 = *(_QWORD *)(a1 + 8 * v4 + 1512);
        goto LABEL_2;
      }
      v6 = (a3 > *(_QWORD *)(a1 + 8 * v4 + 1424)) - (a3 < *(_QWORD *)(a1 + 8 * v4 + 1424));
      v5 -= 128;
      ++v4;
    }
    while ( v6 == 1 );
    if ( v6 )
      goto LABEL_8;
    return a1 - v5 - 128;
  }
  return result;
}
