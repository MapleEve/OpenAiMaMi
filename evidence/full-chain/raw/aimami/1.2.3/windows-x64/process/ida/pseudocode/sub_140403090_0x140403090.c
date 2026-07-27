// module: codexmate_lib/platform/process
// addr: 0x140403090
// name: sub_140403090
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140403090(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v12; // rcx
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm6
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  unsigned int v26; // ebx
  _QWORD v27[5]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v28; // [rsp+50h] [rbp-68h]
  unsigned __int64 v29; // [rsp+60h] [rbp-58h]
  __int16 v30; // [rsp+68h] [rbp-50h]

  v27[0] = 0x2F0000005CLL;
  v27[1] = a1;
  v27[2] = a2;
  v27[3] = a1;
  v27[4] = a1 + a2;
  v28 = 0;
  v29 = a2;
  v30 = 1;
  v5 = sub_1403B90C0(v27);
  v7 = v6;
  if ( !v5 )
  {
    v7 = a2;
    v5 = a1;
  }
  if ( !v7 )
    return sub_1403F83A0(1, 0);
  nullsub_1(v4);
  v8 = sub_140001650(v7, 1);
  if ( !v8 )
    sub_1416C2D4B(1, v7);
  v9 = v8;
  sub_141684120(v8, v5, v7);
  if ( v7 < 8 )
  {
    v10 = 0;
    do
    {
LABEL_18:
      *(_BYTE *)(v9 + v10) |= 32 * ((unsigned __int8)(*(_BYTE *)(v9 + v10) - 65) < 0x1Au);
      ++v10;
LABEL_19:
      ;
    }
    while ( v7 != v10 );
    goto LABEL_20;
  }
  if ( v7 < 0x20 )
  {
    v10 = 0;
    goto LABEL_14;
  }
  v10 = v7 & 0xFFFFFFFFFFFFFFE0uLL;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v14 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v15 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  do
  {
    v16 = _mm_loadu_si128((const __m128i *)(v9 + v12));
    v17 = _mm_loadu_si128((const __m128i *)(v9 + v12 + 16));
    v18 = _mm_add_epi8(v16, si128);
    v19 = _mm_add_epi8(v17, si128);
    *(__m128i *)(v9 + v12) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v14), v18), v15), v16);
    *(__m128i *)(v9 + v12 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v14), v19), v15), v17);
    v12 += 32;
  }
  while ( v10 != v12 );
  if ( v7 != v10 )
  {
    if ( (v7 & 0x18) == 0 )
      goto LABEL_18;
LABEL_14:
    v20 = v10;
    v10 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
    v21 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v22 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v23 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v24 = _mm_loadl_epi64((const __m128i *)(v9 + v20));
      v25 = _mm_add_epi8(v24, v21);
      *(_QWORD *)(v9 + v20) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v25, v22), v25), v23), v24).m128i_u64[0];
      v20 += 8LL;
    }
    while ( v10 != v20 );
    goto LABEL_19;
  }
LABEL_20:
  v26 = sub_1403F83A0(v9, v7);
  sub_140001660(v9, v7, 1);
  return v26;
}