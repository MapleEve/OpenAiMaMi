// module: codexmate_lib/core/mcp
// addr: 0x140983900
// name: sub_140983900
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140983900(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 *v14; // [rsp+20h] [rbp-20h]
  unsigned __int64 v15; // [rsp+28h] [rbp-18h]
  unsigned __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  unsigned __int64 v19; // [rsp+38h] [rbp-8h]

  v2 = *a1;
  v3 = v2 < 8;
  v4 = v2 - 8;
  result = 1;
  if ( !v3 )
    result = v4;
  if ( result )
  {
    if ( result == 1 )
      return sub_140983F80(a1);
    v14 = a1;
    if ( result == 2 )
    {
      v6 = a1[15];
      if ( v6 > 0 )
        sub_140001660(a1[16], v6, 1);
      v7 = a1[18];
      if ( v7 > 0 )
        sub_140001660(a1[19], v7, 1);
      v8 = a1[10];
      if ( v8 )
        sub_140001660(
          a1[9] - ((8 * v8 + 23) & 0xFFFFFFFFFFFFFFF0uLL),
          v8 + ((8 * v8 + 23) & 0xFFFFFFFFFFFFFFF0uLL) + 17,
          16);
      v15 = a1[8];
      v17 = 0;
      v19 = a1[7];
      v9 = v19;
      while ( v15 != v17 )
      {
        v10 = *(_QWORD *)(v9 + 272);
        if ( v10 )
          sub_140001660(*(_QWORD *)(v9 + 280), v10, 1);
        ++v17;
        sub_1402C4EE0(v9);
        v9 += 304LL;
      }
      result = v14[6];
      if ( result )
      {
        v13 = 304 * result;
        return sub_140001660(v19, v13, 8);
      }
    }
    else
    {
      v11 = a1[5];
      v16 = a1[6];
      v18 = 0;
      v19 = v11;
      while ( v16 != v18 )
      {
        ++v18;
        v12 = v11 + 176;
        sub_1402C4D20();
        v11 = v12;
      }
      result = v14[4];
      if ( result )
      {
        v13 = 176 * result;
        return sub_140001660(v19, v13, 8);
      }
    }
  }
  return result;
}