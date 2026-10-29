// win 1.2.7 | module src/core/analytics/parser/paths.rs | ea 0x140ec6e40 | name sub_140EC6E40
// win 1.2.7 | module src/core/analytics/parser/paths.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EC6E40(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  int v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 65) )
  {
    v3 = (_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 16);
    sub_140F9C6A0(&v6, a1 + 16);
    if ( v6 == 1 )
    {
      v1 = *(_QWORD *)a1 + v4;
      *(_QWORD *)a1 = v7;
      return v1;
    }
    if ( !*(_BYTE *)(a1 + 65) )
    {
      *(_BYTE *)(a1 + 65) = 1;
      if ( (*(_BYTE *)(a1 + 64) | (*(_QWORD *)(a1 + 8) != *(_QWORD *)a1)) == 1 )
        return *v3 + *(_QWORD *)a1;
    }
  }
  return 0;
}
