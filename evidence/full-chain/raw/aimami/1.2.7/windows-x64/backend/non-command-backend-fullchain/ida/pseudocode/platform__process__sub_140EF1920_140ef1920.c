// win 1.2.7 | module src/platform/process.rs | ea 0x140ef1920 | name sub_140EF1920
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_140EF1920(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  const __m128i *v9; // rbx
  __m128i *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rcx
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  bool v28; // bl
  _QWORD v29[5]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v30; // [rsp+50h] [rbp-68h]
  unsigned __int64 v31; // [rsp+60h] [rbp-58h]
  __int16 v32; // [rsp+68h] [rbp-50h]

  v29[0] = 0x2F0000005CLL;
  v29[1] = a1;
  v29[2] = a2;
  v29[3] = a1;
  v29[4] = a1 + a2;
  v30 = 0;
  v31 = a2;
  v32 = 1;
  v4 = sub_140EC6CA0(v29);
  v7 = v6;
  if ( !v4 )
  {
    v7 = a2;
    v4 = a1;
  }
  if ( (v7 & 0x8000000000000000uLL) != 0LL )
  {
    v8 = 0;
    goto LABEL_5;
  }
  if ( !v7 )
    return sub_140EE5730(1, 0);
  v9 = (const __m128i *)v4;
  nullsub_1(v5);
  v8 = 1;
  v10 = (__m128i *)sub_140001650(v7, 1);
  if ( !v10 )
LABEL_5:
    sub_141938D2B(v8, v7);
  v11 = (__int64)v10;
  sub_1418F44E0(v10, v9, v7);
  if ( v7 < 8 )
  {
    v12 = 0;
    do
    {
LABEL_20:
      *(_BYTE *)(v11 + v12) |= 32 * ((unsigned __int8)(*(_BYTE *)(v11 + v12) - 65) < 0x1Au);
      ++v12;
LABEL_21:
      ;
    }
    while ( v7 != v12 );
    goto LABEL_22;
  }
  if ( v7 < 0x20 )
  {
    v12 = 0;
    goto LABEL_17;
  }
  v12 = v7 & 0x7FFFFFFFFFFFFFE0LL;
  v14 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v17 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  do
  {
    v18 = _mm_loadu_si128((const __m128i *)(v11 + v14));
    v19 = _mm_loadu_si128((const __m128i *)(v11 + v14 + 16));
    v20 = _mm_add_epi8(v18, si128);
    v21 = _mm_add_epi8(v19, si128);
    *(__m128i *)(v11 + v14) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18);
    *(__m128i *)(v11 + v14 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17), v19);
    v14 += 32;
  }
  while ( v12 != v14 );
  if ( v7 != v12 )
  {
    if ( (v7 & 0x18) == 0 )
      goto LABEL_20;
LABEL_17:
    v22 = v12;
    v12 = v7 & 0x7FFFFFFFFFFFFFF8LL;
    v23 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v24 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v25 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v11 + v22));
      v27 = _mm_add_epi8(v26, v23);
      *(_QWORD *)(v11 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).m128i_u64[0];
      v22 += 8;
    }
    while ( v12 != v22 );
    goto LABEL_21;
  }
LABEL_22:
  v28 = sub_140EE5730(v11, v7);
  sub_140001660(v11, v7, 1);
  return v28;
}
