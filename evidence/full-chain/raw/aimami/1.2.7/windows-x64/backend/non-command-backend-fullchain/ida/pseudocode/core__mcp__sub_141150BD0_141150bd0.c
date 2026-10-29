// win 1.2.7 | module src/core/mcp.rs | ea 0x141150bd0 | name sub_141150BD0
// win 1.2.7 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141150BD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  __int64 i; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]

  if ( *(_BYTE *)a3 == 6 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    if ( v3 )
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i )
      {
        v6 = v3 + 360;
        v7 = v3 - 32;
        v16 = *(unsigned __int16 *)(v3 + 626);
        v8 = 3LL * (unsigned int)(8 * v16);
        v9 = -1;
        do
        {
          if ( !v8 )
          {
            v9 = v16;
            goto LABEL_12;
          }
          v10 = v6 + 24;
          v11 = a2 - *(_QWORD *)(v6 + 16);
          v12 = sub_1418F4B70(a1, *(_QWORD *)(v6 + 8));
          if ( v12 )
            v11 = v12;
          v13 = (v11 > 0) - (v11 < 0);
          v7 += 32;
          ++v9;
          v8 -= 24;
          v6 = v10;
        }
        while ( v13 == 1 );
        if ( !v13 )
          return v7;
LABEL_12:
        if ( !i )
          break;
        v3 = *(_QWORD *)(v3 + 8 * v9 + 632);
      }
    }
  }
  return 0;
}
