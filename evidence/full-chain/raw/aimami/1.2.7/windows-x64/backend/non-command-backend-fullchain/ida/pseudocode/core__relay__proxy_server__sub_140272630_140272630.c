// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140272630 | name sub_140272630
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140272630(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int128 v10; // xmm0
  _OWORD *v11; // rax
  __int128 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  __m256i v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-10h]
  char v17; // [rsp+6Fh] [rbp-1h]
  __int64 v18; // [rsp+70h] [rbp+0h]

  v18 = -2;
  v1 = sub_1416419F0(aInput, 5, a1);
  if ( !v1 || *(_BYTE *)v1 != 4 )
    return 0;
  v2 = *(_QWORD *)(v1 + 16);
  v3 = v2 + 32LL * *(_QWORD *)(v1 + 24);
  v4 = 0;
  while ( v2 != v3 )
  {
    v5 = v2;
    v2 += 32;
    v6 = sub_1416419F0(aType_3, 4, v5);
    if ( v6 )
    {
      if ( *(_BYTE *)v6 == 3 )
      {
        v7 = *(_QWORD *)(v6 + 16);
        v8 = *(_QWORD *)(v6 + 24);
        v9 = sub_1416419F0(aId_0, 2, v5);
        if ( v9 )
        {
          if ( *(_BYTE *)v9 == 3 )
          {
            sub_14026D900((unsigned int)&v13, v7, v8, *(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24));
            if ( (_QWORD)v13 != -1 )
            {
              v15.m256i_i64[3] = v14;
              *(_OWORD *)&v15.m256i_u64[1] = v13;
              v15.m256i_i8[0] = 3;
              v17 = 1;
              v16 = sub_141641AF0(aId_0, 2, v5);
              sub_14002F9D0(v16);
              v10 = *(_OWORD *)v15.m256i_i8;
              v11 = (_OWORD *)v16;
              *(_OWORD *)(v16 + 16) = *(_OWORD *)&v15.m256i_u64[2];
              *v11 = v10;
              ++v4;
              v2 = v5 + 32;
            }
          }
        }
      }
    }
  }
  return v4;
}
