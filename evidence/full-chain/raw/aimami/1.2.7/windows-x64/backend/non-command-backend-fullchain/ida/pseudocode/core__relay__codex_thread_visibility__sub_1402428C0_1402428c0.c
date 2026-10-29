// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402428c0 | name sub_1402428C0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402428C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, __int64 a6, __int64 a7)
{
  __int64 v8; // r14
  char v11; // r13
  __int64 result; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17[2]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v18; // [rsp+40h] [rbp-40h] BYREF
  __m128i v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+78h] [rbp-8h]
  __int64 v23; // [rsp+80h] [rbp+0h]
  char v24; // [rsp+8Eh] [rbp+Eh]
  char v25; // [rsp+8Fh] [rbp+Fh]
  __int64 v26; // [rsp+90h] [rbp+10h]

  v26 = -2;
  v8 = a2[2];
  if ( !v8 )
  {
    *(_OWORD *)a1 = -1;
    result = *a2;
    if ( *a2 )
      return sub_140001660(a2[1], *a2, 1);
    return result;
  }
  v23 = a2[1];
  v11 = *(_BYTE *)(v23 + v8 - 1);
  if ( v11 == 13 )
    --v8;
  v22 = *a2;
  v24 = a5;
  result = sub_1416B3AE0(&v18, v23, v8);
  if ( v18.m128i_i8[0] )
  {
    if ( v22 != -1 )
    {
      if ( v22 )
        result = sub_140001660(v23, v22, 1);
      *(_OWORD *)a1 = -1;
      return result;
    }
    v22 = v23;
    v23 = v8;
    v8 = v18.m128i_i64[1];
  }
  v25 = 1;
  result = sub_140291D70(aSessionMeta, 12, v23, v8);
  if ( !(_BYTE)result )
    goto LABEL_21;
  v18.m128i_i64[0] = v23;
  v18.m128i_i64[1] = v8;
  v19 = 0;
  v20 = v23;
  v21 = v8;
  v25 = 1;
  sub_14062D280(v17, &v18);
  if ( v17[0].m128i_i8[0] == -1 )
  {
    v25 = 1;
    result = sub_14002F910(&v17[0].m128i_u64[1]);
LABEL_21:
    *(_OWORD *)a1 = -1;
    v15 = v22;
    if ( !v22 )
      return result;
    return sub_140001660(v23, v15, 1);
  }
  v13 = _mm_loadu_si128(v17);
  v19 = v17[1];
  v18 = v13;
  v14 = sub_1416419F0(aType_3, 4, &v18);
  if ( v14 )
  {
    if ( *(_BYTE *)v14 == 3
      && *(_QWORD *)(v14 + 24) == 12
      && !(**(_QWORD **)(v14 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v14 + 16) + 8LL)
                                                          ^ 0x6174656DLL) )
    {
      v16 = sub_141642800(&v18, aPayloadId, 11);
      if ( v16 )
      {
        if ( *(_BYTE *)v16 == 3
          && *(_QWORD *)(v16 + 24) == a7
          && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v16 + 16), a6) )
        {
          *(_QWORD *)(a1 + 8) = v22;
          *(_QWORD *)(a1 + 16) = v23;
          *(_QWORD *)(a1 + 24) = v8;
          *(_QWORD *)(a1 + 32) = a3;
          *(_QWORD *)(a1 + 40) = a4;
          *(_BYTE *)(a1 + 48) = v24;
          *(_BYTE *)(a1 + 49) = v11 == 13;
          *(_QWORD *)a1 = -1;
          v25 = 0;
          return sub_14002F9D0(&v18);
        }
      }
    }
  }
  *(_OWORD *)a1 = -1;
  v25 = 1;
  result = sub_14002F9D0(&v18);
  v15 = v22;
  if ( v22 )
    return sub_140001660(v23, v15, 1);
  return result;
}
