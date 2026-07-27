// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x14099bde0
// name: sub_14099BDE0
// win 1.2.1 | module src/core/relay/codex_catalog.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_14099BDE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __m128i si128; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  __m128i v24; // xmm6
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  bool v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  _DWORD *v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+30h] [rbp-40h]
  __int64 v37; // [rsp+38h] [rbp-38h]
  unsigned __int64 v38; // [rsp+40h] [rbp-30h]
  __int64 v39; // [rsp+48h] [rbp-28h]

  v39 = -2;
  v6 = sub_141433D50(aSlug, 4, a3);
  if ( !v6 || *(_BYTE *)v6 != 3 )
    return v3;
  v7 = sub_14033BC10(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 24));
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v13 = v7;
    nullsub_1(v9);
    v11 = 1;
    v14 = sub_140001650(v10, 1);
    if ( !v14 )
LABEL_5:
      sub_1416C2D4B(v11, v10);
    v15 = v14;
    sub_141684120(v14, v13, v10);
    if ( v10 < 8 )
    {
      v16 = 0;
      do
      {
LABEL_21:
        *(_BYTE *)(v15 + v16) |= 32 * ((unsigned __int8)(*(_BYTE *)(v15 + v16) - 65) < 0x1Au);
        ++v16;
LABEL_22:
        ;
      }
      while ( v10 != v16 );
      goto LABEL_23;
    }
    if ( v10 < 0x20 )
    {
      v16 = 0;
      goto LABEL_18;
    }
    v16 = v10 & 0x7FFFFFFFFFFFFFE0LL;
    v17 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
    v19 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
    v20 = _mm_load_si128((const __m128i *)&xmmword_141742470);
    do
    {
      v21 = _mm_loadu_si128((const __m128i *)(v15 + v17));
      v22 = _mm_loadu_si128((const __m128i *)(v15 + v17 + 16));
      v23 = _mm_add_epi8(v21, si128);
      v24 = _mm_add_epi8(v22, si128);
      *(__m128i *)(v15 + v17) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v23, v19), v23), v20), v21);
      *(__m128i *)(v15 + v17 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v24, v19), v24), v20), v22);
      v17 += 32;
    }
    while ( v16 != v17 );
    if ( v10 != v16 )
    {
      if ( (v10 & 0x18) == 0 )
        goto LABEL_21;
LABEL_18:
      v25 = v16;
      v16 = v10 & 0x7FFFFFFFFFFFFFF8LL;
      v26 = _mm_load_si128((const __m128i *)&xmmword_141742480);
      v27 = _mm_load_si128((const __m128i *)&xmmword_141742490);
      v28 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
      do
      {
        v29 = _mm_loadl_epi64((const __m128i *)(v15 + v25));
        v30 = _mm_add_epi8(v29, v26);
        *(_QWORD *)(v15 + v25) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v30, v27), v30), v28), v29).m128i_u64[0];
        v25 += 8;
      }
      while ( v16 != v25 );
      goto LABEL_22;
    }
  }
  else
  {
    v15 = 1;
  }
LABEL_23:
  v37 = v15;
  v38 = v10;
  sub_140A4A810(&v34, v15, v10);
  if ( v36 == 7 )
  {
    v31 = (*v35 ^ 0x2D747067 | *(_DWORD *)((char *)v35 + 3) ^ 0x362E352D) == 0;
    v3 = v38;
  }
  else
  {
    v3 = v38;
    v31 = v36 > 7 && *(_QWORD *)v35 == 0x2D362E352D747067LL;
  }
  if ( v34 )
    sub_140001660(v35, v34, 1);
  v32 = v37;
  if ( v31 )
  {
    if ( a2 >= v3 )
    {
      v33 = v37;
      sub_1416847B0(v37, a1, v3);
      v32 = v33;
      if ( !v3 )
        return 0;
    }
  }
  else if ( !v3 )
  {
    return 0;
  }
  sub_140001660(v32, v3, 1);
  return v3;
}