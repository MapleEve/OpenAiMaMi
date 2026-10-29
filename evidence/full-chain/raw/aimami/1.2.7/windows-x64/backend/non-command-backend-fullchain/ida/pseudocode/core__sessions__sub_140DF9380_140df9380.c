// win 1.2.7 | module src/core/sessions.rs | ea 0x140df9380 | name sub_140DF9380
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DF9380(__m128i *a1, __int64 a2)
{
  double v4; // xmm0_8
  double v5; // xmm6_8
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // eax
  __m128i *v10; // rbx
  __int64 v11; // r12
  __m128i *v12; // r14
  __int64 v13; // r14
  int v14; // eax
  double v15; // xmm0_8
  __m128i v16; // [rsp+20h] [rbp-248h]
  __m128i v17; // [rsp+30h] [rbp-238h]
  __m128i v18; // [rsp+40h] [rbp-228h]
  __m128i v19; // [rsp+50h] [rbp-218h]
  __m128i v20[27]; // [rsp+68h] [rbp-200h] BYREF

  v4 = *(double *)(a2 - 16);
  v5 = *(double *)(a2 + 520);
  if ( v5 >= v4 )
  {
    if ( v4 < v5 )
    {
      v6 = *(_QWORD *)(a2 + 64);
      v7 = *(_QWORD *)(a2 + 72);
      goto LABEL_10;
    }
  }
  else if ( v4 >= v5 )
  {
    return;
  }
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(_QWORD *)(a2 + 72);
  v8 = v7 - *(_QWORD *)(a2 - 464);
  v9 = sub_1418F4B70(v6, *(_QWORD *)(a2 - 472));
  if ( v9 )
    v8 = v9;
  if ( v8 >= 0 )
    return;
LABEL_10:
  v10 = (__m128i *)(a2 - 536);
  v16 = *(__m128i *)a2;
  v17 = *(__m128i *)(a2 + 16);
  v18 = *(__m128i *)(a2 + 32);
  v19 = *(__m128i *)(a2 + 48);
  sub_1418F44E0(v20, (const __m128i *)(a2 + 80), 0x1B8u);
  v11 = *(_QWORD *)(a2 + 528);
  sub_1418F44E0((__m128i *)a2, (const __m128i *)(a2 - 536), 0x218u);
  if ( (__m128i *)(a2 - 536) != a1 )
  {
    while ( 1 )
    {
      v15 = *(double *)v10[-1].m128i_i64;
      if ( v5 < v15 )
      {
        if ( v15 >= v5 )
          break;
      }
      else if ( v15 < v5 )
      {
        goto LABEL_18;
      }
      v13 = v7 - v10[-29].m128i_i64[0];
      v14 = sub_1418F4B70(v6, v10[-30].m128i_i64[1]);
      if ( v14 )
        v13 = v14;
      if ( v13 >= 0 )
        break;
LABEL_18:
      sub_1418F44E0(v10, (__m128i *)((char *)v10 - 536), 0x218u);
      v10 = (__m128i *)((char *)v10 - 536);
      v12 = v10;
      if ( v10 == a1 )
        goto LABEL_12;
    }
  }
  v12 = v10;
LABEL_12:
  v12[3] = v19;
  v12[2] = v18;
  v12[1] = v17;
  *v12 = v16;
  v12[4].m128i_i64[0] = v6;
  v12[4].m128i_i64[1] = v7;
  sub_1418F44E0(v12 + 5, v20, 0x1B8u);
  *(double *)&v12[32].m128i_i64[1] = v5;
  v12[33].m128i_i64[0] = v11;
}
