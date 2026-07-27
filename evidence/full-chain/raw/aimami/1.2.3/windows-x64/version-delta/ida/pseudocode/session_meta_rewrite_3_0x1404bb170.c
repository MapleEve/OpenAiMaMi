// win 1.2.3 delta | session_meta_rewrite_3 @ 0x1404bb170 | changelog ③模型协议
// [FULL IDA decompiler 3057B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404BB170(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  char v13; // r13
  __int64 result; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19[2]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v20; // [rsp+40h] [rbp-40h] BYREF
  __m128i v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+78h] [rbp-8h]
  __int64 v25; // [rsp+80h] [rbp+0h]
  char v26; // [rsp+8Eh] [rbp+Eh]
  char v27; // [rsp+8Fh] [rbp+Fh]
  __int64 v28; // [rsp+90h] [rbp+10h]

  v28 = -2;
  v8 = a2[2];
  if ( !v8 )
  {
    *(_OWORD *)a1 = -1;
    result = *a2;
    if ( *a2 )
      return sub_140001660(a2[1], *a2, 1);
    return result;
  }
  v26 = a5;
  v24 = *a2;
  v11 = a2[1];
  v12 = v8 - 1;
  v13 = *(_BYTE *)(v11 + v8 - 1);
  if ( v13 != 13 )
    v12 = v8;
  v25 = v11;
  result = sub_1414A3C90(&v20, v11, v12);
  if ( v20.m128i_i8[0] )
  {
    if ( v24 )
    {
      if ( v24 == -1 )
      {
        v24 = v25;
        v25 = v12;
        v12 = v20.m128i_i64[1];
        goto LABEL_8;
      }
      result = sub_140001660(v25, v24, 1);
    }
    *(_OWORD *)a1 = -1;
    return result;
  }
LABEL_8:
  v27 = 1;
  result = sub_1404E1D70(aSessionMeta, 12, v25, v12);
  if ( !(_BYTE)result )
    goto LABEL_21;
  v20.m128i_i64[0] = v25;
  v20.m128i_i64[1] = v12;
  v21 = 0;
  v22 = v25;
  v23 = v12;
  v27 = 1;
  sub_1408A6200(v19, &v20);
  if ( v19[0].m128i_i8[0] == -1 )
  {
    v27 = 1;
    result = sub_140348CF0(v19);
LABEL_21:
    *(_OWORD *)a1 = -1;
    v17 = v24;
    if ( !v24 )
      return result;
    return sub_140001660(v25, v17, 1);
  }
  v15 = _mm_loadu_si128(v19);
  v21 = v19[1];
  v20 = v15;
  v16 = sub_141433D50(aType_4, 4, &v20);
  if ( v16 )
  {
    if ( *(_BYTE *)v16 == 3
      && *(_QWORD *)(v16 + 24) == 12
      && !(**(_QWORD **)(v16 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v16 + 16) + 8LL)
                                                          ^ 0x6174656DLL) )
    {
      v18 = sub_14142E200(&v20, aPayloadId, 11);
      if ( v18 )
      {
        if ( *(_BYTE *)v18 == 3
          && *(_QWORD *)(v18 + 24) == a7
          && !(unsigned int)sub_1416847B0(*(_QWORD *)(v18 + 16), a6, a7) )
        {
          *(_QWORD *)(a1 + 8) = v24;
          *(_QWORD *)(a1 + 16) = v25;
          *(_QWORD *)(a1 + 24) = v12;
          *(_QWORD *)(a1 + 32) = a3;
          *(_QWORD *)(a1 + 40) = a4;
          *(_BYTE *)(a1 + 48) = v26;
          *(_BYTE *)(a1 + 49) = v13 == 13;
          *(_QWORD *)a1 = -1;
          v27 = 0;
          return sub_1400104F0(&v20);
        }
      }
    }
  }
  *(_OWORD *)a1 = -1;
  v27 = 1;
  result = sub_1400104F0(&v20);
  v17 = v24;
  if ( v24 )
    return sub_140001660(v25, v17, 1);
  return result;
}
