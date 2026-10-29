// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140619120 | name sub_140619120
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_140619120(__m128i *a1, __int64 a2)
{
  __m128i v4[33]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v5[22]; // [rsp+238h] [rbp+1B8h] BYREF
  __m128i v6[22]; // [rsp+3A0h] [rbp+320h] BYREF
  __m128i v7[33]; // [rsp+508h] [rbp+488h] BYREF
  __m128i v8[22]; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v9; // [rsp+888h] [rbp+808h]

  v9 = -2;
  sub_140166180(v6, *(_QWORD *)(a2 + 136) + 16LL);
  if ( v6[0].m128i_i32[0] == -1 )
  {
    a1->m128i_i64[0] = -1;
  }
  else
  {
    sub_1418F44E0(v8, v6, 0x168u);
    sub_140DA2B30(v7, v6);
    if ( (unsigned __int8)sub_14072CC80(v7) )
    {
      sub_1418F44E0(v4, v7, 0x218u);
      sub_1418F44E0(v5, v8, 0x168u);
      sub_1418F44E0(a1, v4, 0x380u);
    }
    else
    {
      a1->m128i_i64[0] = -1;
      sub_14029B360(v7);
      sub_14029B5D0(v8);
    }
  }
  return a1;
}
