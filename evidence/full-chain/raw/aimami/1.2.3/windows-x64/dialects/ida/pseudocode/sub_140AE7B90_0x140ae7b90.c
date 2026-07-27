// module: codexmate_lib/core/relay/dialects
// addr: 0x140ae7b90
// name: sub_140AE7B90
// win 1.2.1 | module src/core/relay/dialects/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140AE7B90(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  _BYTE *v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
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
  bool v28; // al
  bool v29; // zf
  bool v30; // bl

  v2 = sub_14142E200(a1, aReasoningEffor, 17);
  if ( v2 && *(_BYTE *)v2 == 3 )
  {
    v3 = sub_14033BC10(*(_QWORD *)(v2 + 16), *(_QWORD *)(v2 + 24));
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    if ( !v4 )
      return 1;
    v10 = v3;
    nullsub_1(v5);
    v7 = 1;
    v11 = sub_140001650(v6, 1);
    if ( !v11 )
LABEL_5:
      sub_1416C2D4B(v7, v6);
    v12 = v11;
    sub_141684120(v11, v10, v6);
    if ( v6 < 8 )
    {
      v13 = 0;
      goto LABEL_23;
    }
    if ( v6 >= 0x20 )
    {
      v13 = v6 & 0x7FFFFFFFFFFFFFE0LL;
      v14 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v16 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v17 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)(v12 + v14));
        v19 = _mm_loadu_si128((const __m128i *)(v12 + v14 + 16));
        v20 = _mm_add_epi8(v18, si128);
        v21 = _mm_add_epi8(v19, si128);
        *(__m128i *)(v12 + v14) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18);
        *(__m128i *)(v12 + v14 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17),
                                         v19);
        v14 += 32;
      }
      while ( v13 != v14 );
      if ( v6 == v13 )
        goto LABEL_25;
      if ( (v6 & 0x18) == 0 )
      {
        do
        {
LABEL_23:
          *(_BYTE *)(v12 + v13) |= 32 * ((unsigned __int8)(*(_BYTE *)(v12 + v13) - 65) < 0x1Au);
          ++v13;
LABEL_24:
          ;
        }
        while ( v6 != v13 );
LABEL_25:
        if ( v6 == 3 )
        {
          v29 = (*(_WORD *)v12 ^ 0x666F | *(unsigned __int8 *)(v12 + 2) ^ 0x66) == 0;
        }
        else if ( v6 == 8 )
        {
          v29 = *(_QWORD *)v12 == 0x64656C6261736964LL;
        }
        else
        {
          v28 = 1;
          if ( v6 != 4 )
          {
LABEL_32:
            v30 = v28;
            sub_140001660(v12, v6, 1);
            return v30;
          }
          v29 = *(_DWORD *)v12 == 1701736302;
        }
        v28 = !v29;
        goto LABEL_32;
      }
    }
    else
    {
      v13 = 0;
    }
    v22 = v13;
    v13 = v6 & 0x7FFFFFFFFFFFFFF8LL;
    v23 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v24 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v25 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v12 + v22));
      v27 = _mm_add_epi8(v26, v23);
      *(_QWORD *)(v12 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).m128i_u64[0];
      v22 += 8;
    }
    while ( v13 != v22 );
    goto LABEL_24;
  }
  v8 = (_BYTE *)sub_141433D50(aReasoning_1, 9, a1);
  if ( v8 )
    return *v8 != 0;
  else
    return 2;
}