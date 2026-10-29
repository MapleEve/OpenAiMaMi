// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1408f03c0 | name sub_1408F03C0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1408F03C0(__int128 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __m128i *v6; // rax
  volatile signed __int64 *v7; // rsi
  __int64 v8; // rt0
  char v9; // of
  __m128i v11[8]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v12; // [rsp+100h] [rbp+80h]
  __int64 v13; // [rsp+108h] [rbp+88h]
  __int64 v14; // [rsp+180h] [rbp+100h]
  __int64 v15; // [rsp+190h] [rbp+110h]
  __int128 v16; // [rsp+200h] [rbp+180h]
  __int128 v17; // [rsp+210h] [rbp+190h]
  __int64 v18; // [rsp+220h] [rbp+1A0h]
  __int64 v19; // [rsp+228h] [rbp+1A8h]
  __int64 v20; // [rsp+230h] [rbp+1B0h]
  char v21; // [rsp+238h] [rbp+1B8h]
  __int128 v22; // [rsp+240h] [rbp+1C0h]
  __int128 v23; // [rsp+250h] [rbp+1D0h]
  __int128 v24; // [rsp+260h] [rbp+1E0h]
  __int64 v25; // [rsp+270h] [rbp+1F0h]
  __int64 v26; // [rsp+278h] [rbp+1F8h]
  __m128i *v27; // [rsp+2D0h] [rbp+250h]
  __int64 v28; // [rsp+2D8h] [rbp+258h]

  v27 = v11;
  v28 = -2;
  nullsub_1(a1);
  v2 = sub_140001650(1056, 8);
  if ( !v2 )
    sub_141938D11(8, 1056);
  *(_OWORD *)(v2 + 1040) = 0;
  *(_OWORD *)(v2 + 1024) = 0;
  v12 = v2;
  v13 = 0;
  v18 = v2;
  v19 = v2;
  v20 = 0;
  v4 = a1[1];
  v5 = a1[2];
  v22 = *a1;
  v23 = v4;
  v24 = v5;
  v11[0].m128i_i64[0] = 1;
  v11[0].m128i_i64[1] = 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v21 = 0;
  v25 = 1;
  v26 = 0;
  nullsub_1(v3);
  v6 = (__m128i *)sub_140001650(512, 128);
  if ( !v6 )
    sub_141938D11(128, 512);
  v7 = (volatile signed __int64 *)v6;
  sub_1418F44E0(v6, v11, 0x200u);
  v8 = _InterlockedIncrement64(v7);
  if ( (v8 < 0) ^ v9 | (v8 == 0) )
    BUG();
  return v7;
}
