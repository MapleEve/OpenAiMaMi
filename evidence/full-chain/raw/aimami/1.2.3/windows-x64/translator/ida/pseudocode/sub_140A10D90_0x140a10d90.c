// module: codexmate_lib/core/relay/translator
// addr: 0x140a10d90
// name: sub_140A10D90
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140A10D90(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i v15; // xmm6
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm3
  __m128i v21; // xmm4
  char result; // al
  unsigned __int64 v23; // rdx
  char v24; // bl

  if ( (a2 & 0x8000000000000000uLL) != 0LL )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    v6 = 1;
    goto LABEL_20;
  }
  nullsub_1(a1);
  v3 = 1;
  v5 = sub_140001650(a2, 1);
  if ( !v5 )
LABEL_3:
    sub_1416C2D4B(v3, a2);
  v6 = v5;
  sub_141684120(v5, a1, a2);
  if ( a2 >= 8 )
  {
    if ( a2 >= 0x20 )
    {
      v7 = a2 & 0x7FFFFFFFFFFFFFE0LL;
      v8 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v10 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v11 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      do
      {
        v12 = _mm_loadu_si128((const __m128i *)(v6 + v8));
        v13 = _mm_loadu_si128((const __m128i *)(v6 + v8 + 16));
        v14 = _mm_add_epi8(v12, si128);
        v15 = _mm_add_epi8(v13, si128);
        *(__m128i *)(v6 + v8) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v10), v14), v11), v12);
        *(__m128i *)(v6 + v8 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v15, v10), v15), v11), v13);
        v8 += 32;
      }
      while ( v7 != v8 );
      if ( a2 == v7 )
        goto LABEL_20;
      if ( (a2 & 0x18) == 0 )
        goto LABEL_18;
    }
    else
    {
      v7 = 0;
    }
    v16 = v7;
    v7 = a2 & 0x7FFFFFFFFFFFFFF8LL;
    v17 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v18 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v19 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v20 = _mm_loadl_epi64((const __m128i *)(v6 + v16));
      v21 = _mm_add_epi8(v20, v17);
      *(_QWORD *)(v6 + v16) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v21, v18), v21), v19), v20).m128i_u64[0];
      v16 += 8;
    }
    while ( v7 != v16 );
    goto LABEL_19;
  }
  v7 = 0;
  do
  {
LABEL_18:
    *(_BYTE *)(v6 + v7) |= 32 * ((unsigned __int8)(*(_BYTE *)(v6 + v7) - 65) < 0x1Au);
    ++v7;
LABEL_19:
    ;
  }
  while ( a2 != v7 );
LABEL_20:
  result = sub_140A6C2D0("opus", 4u, v6, a2);
  v23 = a2;
  if ( a2 )
  {
    v24 = result;
    sub_140001660(v6, v23, 1);
    return v24;
  }
  return result;
}