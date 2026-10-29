// win 1.2.7 | module src/core/analytics/parser/paths.rs | ea 0x140c1e7a0 | name sub_140C1E7A0
// win 1.2.7 | module src/core/analytics/parser/paths.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140C1E7A0(unsigned __int64 *a1, const __m128i *a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  unsigned __int64 *v6; // r15
  __m128i *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4

  if ( (a3 & 0x8000000000000000uLL) != 0LL )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = 1;
    goto LABEL_20;
  }
  v6 = a1;
  nullsub_1(a1);
  v4 = 1;
  v7 = (__m128i *)sub_140001650(a3, 1);
  if ( !v7 )
LABEL_3:
    sub_141938D2B(v4, a3);
  v8 = (__int64)v7;
  sub_1418F44E0(v7, a2, a3);
  if ( a3 < 8 )
  {
    v9 = 0;
    a1 = v6;
    goto LABEL_18;
  }
  a1 = v6;
  if ( a3 < 0x20 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v9 = a3 & 0x7FFFFFFFFFFFFFE0LL;
  v10 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v12 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  do
  {
    v14 = _mm_loadu_si128((const __m128i *)(v8 + v10));
    v15 = _mm_loadu_si128((const __m128i *)(v8 + v10 + 16));
    v16 = _mm_add_epi8(v14, si128);
    v17 = _mm_add_epi8(v15, si128);
    *(__m128i *)(v8 + v10) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v12), v16), v13), v14);
    *(__m128i *)(v8 + v10 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v12), v17), v13), v15);
    v10 += 32;
  }
  while ( v9 != v10 );
  if ( a3 == v9 )
    goto LABEL_20;
  if ( (a3 & 0x18) != 0 )
  {
LABEL_15:
    v18 = v9;
    v9 = a3 & 0x7FFFFFFFFFFFFFF8LL;
    v19 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v20 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v21 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v22 = _mm_loadl_epi64((const __m128i *)(v8 + v18));
      v23 = _mm_add_epi8(v22, v19);
      *(_QWORD *)(v8 + v18) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v23, v20), v23), v21), v22).m128i_u64[0];
      v18 += 8;
    }
    while ( v9 != v18 );
    goto LABEL_19;
  }
  do
  {
LABEL_18:
    *(_BYTE *)(v8 + v9) |= 32 * ((unsigned __int8)(*(_BYTE *)(v8 + v9) - 65) < 0x1Au);
    ++v9;
LABEL_19:
    ;
  }
  while ( a3 != v9 );
LABEL_20:
  *a1 = a3;
  a1[1] = v8;
  a1[2] = a3;
}
