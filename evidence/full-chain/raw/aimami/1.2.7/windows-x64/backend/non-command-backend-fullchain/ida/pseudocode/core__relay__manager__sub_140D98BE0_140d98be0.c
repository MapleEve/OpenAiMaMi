// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d98be0 | name sub_140D98BE0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_140D98BE0(__m128i *a1, __int64 *a2, const __m128i *a3)
{
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v9; // [rsp+2Fh] [rbp-79h] BYREF
  __m128i v10[6]; // [rsp+40h] [rbp-68h] BYREF

  v9.m128i_i8[0] = 0;
  sub_140D82750(v10, a2, a3, &v9);
  if ( v10[0].m128i_i32[0] == -1 )
  {
    sub_1401BD710(v10[0].m128i_u64[1], v4);
    a1->m128i_i64[0] = -1;
  }
  else
  {
    a1[5] = v10[5];
    a1[4] = v10[4];
    v5 = v10[0];
    v6 = v10[1];
    v7 = v10[2];
    a1[3] = v10[3];
    a1[2] = v7;
    a1[1] = v6;
    *a1 = v5;
  }
  return a1;
}
