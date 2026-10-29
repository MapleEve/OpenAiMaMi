// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1403dcc10 | name sub_1403DCC10
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1403DCC10(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __m128i *v7; // rax
  __m128i *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i v13[11]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v14[11]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v15; // [rsp+188h] [rbp+108h] BYREF
  __int64 v16; // [rsp+198h] [rbp+118h]
  __int64 v17; // [rsp+1A0h] [rbp+120h]

  v17 = -2;
  if ( a2 == a3 )
  {
LABEL_18:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return a1;
  }
  v5 = a2;
  while ( *(_QWORD *)(v5 + 24) == -1 )
  {
    v14[0].m128i_i64[0] = -1;
LABEL_4:
    v5 += 424;
    if ( v5 == a3 )
      goto LABEL_18;
  }
  sub_140284530((__int64)v14, v5 + 24);
  if ( v14[0].m128i_i64[0] == -1 )
    goto LABEL_4;
  nullsub_1(v6);
  v7 = (__m128i *)sub_140001650(704, 8);
  if ( !v7 )
    sub_141938D2B(8, 704);
  v8 = v7;
  v9 = v5 + 424;
  sub_1418F44E0(v7, v14, 0xB0u);
  *(_QWORD *)&v15 = 4;
  *((_QWORD *)&v15 + 1) = v8;
  v10 = 1;
LABEL_9:
  v16 = v10;
LABEL_11:
  v11 = v9;
  while ( v11 != a3 )
  {
    v9 = v11 + 424;
    if ( *(_QWORD *)(v11 + 24) == -1 )
    {
      v13[0].m128i_i64[0] = -1;
      goto LABEL_11;
    }
    sub_140284530((__int64)v13, v11 + 24);
    v11 = v9;
    if ( v13[0].m128i_i64[0] != -1 )
    {
      if ( v10 == (_QWORD)v15 )
      {
        sub_14190D590((unsigned int)&v15, v10, 1, 8, 176);
        v8 = *((__m128i **)&v15 + 1);
      }
      sub_1418F44E0(&v8[11 * v10++], v13, 0xB0u);
      goto LABEL_9;
    }
  }
  a1[2] = v16;
  *(_OWORD *)a1 = v15;
  return a1;
}
