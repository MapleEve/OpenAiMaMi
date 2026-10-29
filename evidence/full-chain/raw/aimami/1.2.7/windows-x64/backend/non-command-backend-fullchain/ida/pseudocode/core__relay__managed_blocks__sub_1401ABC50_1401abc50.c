// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x1401abc50 | name sub_1401ABC50
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1401ABC50(__m128i *a1, __int64 a2)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v9; // rdx
  __m128i v11; // [rsp+20h] [rbp-60h] BYREF
  __m128i v12; // [rsp+30h] [rbp-50h]
  __m128i v13; // [rsp+40h] [rbp-40h]
  __m128i v14; // [rsp+50h] [rbp-30h]
  __m128i v15; // [rsp+60h] [rbp-20h]
  __m128i v16; // [rsp+70h] [rbp-10h]
  char v17; // [rsp+D0h] [rbp+50h]
  __int64 v18; // [rsp+D8h] [rbp+58h]
  __int64 v19; // [rsp+E0h] [rbp+60h]
  __int64 v20; // [rsp+E8h] [rbp+68h]
  char v21; // [rsp+F7h] [rbp+77h]
  __int64 v22; // [rsp+F8h] [rbp+78h]

  v22 = -2;
  v19 = *(_QWORD *)(a2 + 200);
  v18 = *(_QWORD *)(a2 + 208);
  v20 = a2;
  sub_1418F44E0(&v11, (const __m128i *)(a2 + 24), 0xB0u);
  v17 = 0;
  v21 = 1;
  sub_1401AC7F0(a1, &v11);
  if ( a1->m128i_i32[0] == 2 )
  {
    if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v18, v19, 1);
  }
  else
  {
    v16 = a1[5];
    v15 = a1[4];
    v3 = *a1;
    v4 = a1[1];
    v5 = a1[2];
    v14 = a1[3];
    v13 = v5;
    v12 = v4;
    v11 = v3;
    sub_1411CE670(&v11, v20 + 200);
    a1[5] = v16;
    a1[4] = v15;
    v6 = v11;
    v7 = v12;
    v8 = v13;
    a1[3] = v14;
    a1[2] = v8;
    a1[1] = v7;
    *a1 = v6;
  }
  v9 = *(_QWORD *)(v20 + 224);
  if ( v9 > 0 )
    sub_140001660(*(_QWORD *)(v20 + 232), v9, 1);
  return a1;
}
