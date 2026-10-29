// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f32e80 | name sub_140F32E80
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F32E80(const __m128i *a1, unsigned __int64 a2)
{
  const __m128i *v2; // rsi
  __int64 v4; // rdi
  __m128i *v5; // rax
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

  if ( (a2 & 0x8000000000000000uLL) != 0LL )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    v6 = 1;
    goto LABEL_18;
  }
  v2 = a1;
  nullsub_1(a1);
  v4 = 1;
  v5 = (__m128i *)sub_140001650(a2, 1);
  if ( !v5 )
LABEL_3:
    sub_141938D2B(v4, a2);
  v6 = (__int64)v5;
  sub_1418F44E0(v5, v2, a2);
  if ( a2 < 8 )
  {
    v7 = 0;
    goto LABEL_28;
  }
  if ( a2 < 0x20 )
  {
    v7 = 0;
    goto LABEL_15;
  }
  v7 = a2 & 0x7FFFFFFFFFFFFFE0LL;
  v8 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v10 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v11 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
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
    goto LABEL_30;
  if ( (a2 & 0x18) != 0 )
  {
LABEL_15:
    v16 = v7;
    v7 = a2 & 0x7FFFFFFFFFFFFFF8LL;
    v17 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v18 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v19 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v20 = _mm_loadl_epi64((const __m128i *)(v6 + v16));
      v21 = _mm_add_epi8(v20, v17);
      *(_QWORD *)(v6 + v16) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v21, v18), v21), v19), v20).m128i_u64[0];
      v16 += 8;
    }
    while ( v7 != v16 );
    goto LABEL_29;
  }
  do
  {
LABEL_28:
    *(_BYTE *)(v6 + v7) |= 32 * ((unsigned __int8)(*(_BYTE *)(v6 + v7) - 65) < 0x1Au);
    ++v7;
LABEL_29:
    ;
  }
  while ( a2 != v7 );
LABEL_30:
  if ( *(_BYTE *)v6 == 35 )
  {
    LODWORD(v2) = 0;
LABEL_26:
    sub_140001660(v6, a2, 1);
    return (unsigned int)v2;
  }
LABEL_18:
  LOBYTE(v2) = 1;
  if ( !(unsigned __int8)sub_140F9CFB0(aCcSwitch, 9, v6, a2)
    && !(unsigned __int8)sub_140F9CFB0(aCcSwitch_0, 9, v6, a2)
    && !(unsigned __int8)sub_140F9CFB0(aCcswitch, 8, v6, a2)
    && !(unsigned __int8)sub_140F9CFB0(aCodexSwitch, 12, v6, a2)
    && !(unsigned __int8)sub_140F9CFB0(aCodexSwitch_0, 12, v6, a2)
    && !(unsigned __int8)sub_140F9CFB0(aCircuitBreaker, 15, v6, a2) )
  {
    LODWORD(v2) = sub_140F9CFB0(aProviderRouter, 15, v6, a2);
  }
  if ( a2 )
    goto LABEL_26;
  return (unsigned int)v2;
}
