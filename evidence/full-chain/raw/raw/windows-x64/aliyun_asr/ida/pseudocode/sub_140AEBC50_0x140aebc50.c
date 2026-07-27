// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140aebc50
// name: sub_140AEBC50
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140AEBC50(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rax
  _DWORD *v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  __int64 v50; // [rsp+28h] [rbp-48h]
  __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-38h]
  unsigned __int64 v53; // [rsp+40h] [rbp-30h]

  v1 = a1;
  v2 = sub_14033BC10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v51 = v3;
  if ( !v3 )
  {
    v52 = 1;
    goto LABEL_20;
  }
  v7 = v2;
  nullsub_1(v4);
  v6 = 1;
  v8 = sub_140001650(v5, 1);
  if ( !v8 )
LABEL_3:
    sub_1416C2D4B(v6, v5);
  v9 = v8;
  sub_141684120(v8, v7, v5);
  v52 = v9;
  if ( v5 < 8 )
  {
    v10 = 0;
    goto LABEL_18;
  }
  if ( v5 < 0x20 )
  {
    v10 = 0;
    goto LABEL_15;
  }
  v10 = v5 & 0x7FFFFFFFFFFFFFE0LL;
  v11 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  do
  {
    v15 = _mm_loadu_si128((const __m128i *)(v9 + v11));
    v16 = _mm_loadu_si128((const __m128i *)(v9 + v11 + 16));
    v17 = _mm_add_epi8(v15, si128);
    v18 = _mm_add_epi8(v16, si128);
    *(__m128i *)(v9 + v11) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v13), v17), v14), v15);
    *(__m128i *)(v9 + v11 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v13), v18), v14), v16);
    v11 += 32;
  }
  while ( v10 != v11 );
  if ( v5 == v10 )
    goto LABEL_20;
  if ( (v5 & 0x18) != 0 )
  {
LABEL_15:
    v19 = v10;
    v10 = v5 & 0x7FFFFFFFFFFFFFF8LL;
    v20 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v21 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v22 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v23 = _mm_loadl_epi64((const __m128i *)(v9 + v19));
      v24 = _mm_add_epi8(v23, v20);
      *(_QWORD *)(v9 + v19) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v24, v21), v24), v22), v23).m128i_u64[0];
      v19 += 8;
    }
    while ( v10 != v19 );
    goto LABEL_19;
  }
  do
  {
LABEL_18:
    *(_BYTE *)(v9 + v10) |= 32 * ((unsigned __int8)(*(_BYTE *)(v9 + v10) - 65) < 0x1Au);
    ++v10;
LABEL_19:
    ;
  }
  while ( v5 != v10 );
LABEL_20:
  v25 = sub_14033BC10(*(_QWORD *)(v1 + 56), *(_QWORD *)(v1 + 64));
  v28 = v26;
  if ( v26 < 0 )
  {
    v29 = 0;
    goto LABEL_22;
  }
  v30 = v51;
  v31 = v52;
  if ( !v26 )
  {
    v53 = 0;
    v50 = 1;
    goto LABEL_42;
  }
  v1 = v25;
  nullsub_1(v27);
  v29 = 1;
  v32 = sub_140001650(v28, 1);
  if ( !v32 )
LABEL_22:
    sub_1416C2D4B(v29, v28);
  v33 = (_DWORD *)v32;
  sub_141684120(v32, v1, v28);
  if ( v28 < 8 )
  {
    v34 = 0;
    do
    {
LABEL_37:
      *((_BYTE *)v33 + v34) |= 32 * ((unsigned __int8)(*((_BYTE *)v33 + v34) - 65) < 0x1Au);
      ++v34;
LABEL_38:
      ;
    }
    while ( v28 != v34 );
    goto LABEL_39;
  }
  if ( v28 < 0x20 )
  {
    v34 = 0;
    goto LABEL_34;
  }
  v34 = v28 & 0x7FFFFFFFFFFFFFE0LL;
  v35 = 0;
  v36 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v37 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v38 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  do
  {
    v39 = _mm_loadu_si128((const __m128i *)&v33[v35 / 4]);
    v40 = _mm_loadu_si128((const __m128i *)&v33[v35 / 4 + 4]);
    v41 = _mm_add_epi8(v39, v36);
    v42 = _mm_add_epi8(v40, v36);
    *(__m128i *)&v33[v35 / 4] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v41, v37), v41), v38), v39);
    *(__m128i *)&v33[v35 / 4 + 4] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v42, v37), v42), v38), v40);
    v35 += 32LL;
  }
  while ( v34 != v35 );
  if ( v28 != v34 )
  {
    if ( (v28 & 0x18) == 0 )
      goto LABEL_37;
LABEL_34:
    v43 = v34;
    v34 = v28 & 0x7FFFFFFFFFFFFFF8LL;
    v44 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v45 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v46 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v47 = _mm_loadl_epi64((const __m128i *)((char *)v33 + v43));
      v48 = _mm_add_epi8(v47, v44);
      *(_QWORD *)((char *)v33 + v43) = _mm_or_si128(
                                         _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v48, v45), v48), v46),
                                         v47).m128i_u64[0];
      v43 += 8;
    }
    while ( v34 != v43 );
    goto LABEL_38;
  }
LABEL_39:
  v50 = (__int64)v33;
  if ( v28 >= 4 && *v33 == 1852143473 )
  {
    LOBYTE(v1) = 1;
LABEL_47:
    sub_140001660(v50, v28, 1);
    goto LABEL_48;
  }
  v53 = v28;
LABEL_42:
  if ( (unsigned __int8)sub_140B12070(aDashscopeAliyu, 22, v52, v51)
    || (unsigned __int8)sub_140B12070(aDashscopeIntlA, 27, v52, v51) )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    LOBYTE(v1) = 2;
  }
  v28 = v53;
  v30 = v51;
  v31 = v52;
  if ( v53 )
    goto LABEL_47;
LABEL_48:
  if ( v30 )
    sub_140001660(v31, v30, 1);
  return (unsigned int)v1;
}