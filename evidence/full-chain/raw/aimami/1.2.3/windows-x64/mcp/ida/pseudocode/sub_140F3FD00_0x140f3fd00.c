// module: codexmate_lib/core/mcp
// addr: 0x140f3fd00
// name: sub_140F3FD00
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F3FD00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // eax
  char v14; // cl
  __int64 i; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]

  if ( *(_BYTE *)a3 == 6 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    if ( v3 )
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i )
      {
        v6 = v3 + 360;
        v7 = v3 - 32;
        v17 = *(unsigned __int16 *)(v3 + 626);
        v8 = 3LL * (unsigned int)(8 * v17);
        v9 = -1;
        do
        {
          if ( !v8 )
          {
            v9 = v17;
            goto LABEL_14;
          }
          v10 = v6 + 24;
          v11 = *(_QWORD *)(v6 + 16);
          v12 = a2 - v11;
          if ( a2 < v11 )
            v11 = a2;
          v13 = sub_1416847B0(a1, *(_QWORD *)(v6 + 8), v11);
          if ( v13 )
            v12 = v13;
          v14 = (v12 > 0) - (v12 < 0);
          v7 += 32;
          ++v9;
          v8 -= 24;
          v6 = v10;
        }
        while ( v14 == 1 );
        if ( !v14 )
          return v7;
LABEL_14:
        if ( !i )
          break;
        v3 = *(_QWORD *)(v3 + 8 * v9 + 632);
      }
    }
  }
  return 0;
}