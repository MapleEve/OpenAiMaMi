// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140dc0240 | name sub_140DC0240
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DC0240(const __m128i *a1)
{
  const __m128i *v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  const __m128i *v7; // rdi
  __m128i *v8; // rax
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
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  __m128i *v30; // rax
  __m128i *v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm3
  __m128i v46; // xmm4
  __int64 v48; // [rsp+28h] [rbp-48h]
  unsigned __int64 v49; // [rsp+40h] [rbp-30h]

  v1 = a1;
  v2 = sub_140E91160(a1->m128i_i64[1], a1[1].m128i_i64[0]);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( !v3 )
  {
    v9 = 1;
    goto LABEL_20;
  }
  v7 = (const __m128i *)v2;
  nullsub_1(v4);
  v6 = 1;
  v8 = (__m128i *)sub_140001650(v5, 1);
  if ( !v8 )
LABEL_3:
    sub_141938D2B(v6, v5);
  v9 = (__int64)v8;
  sub_1418F44E0(v8, v7, v5);
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
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
    v20 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v21 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v22 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
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
  v25 = sub_140E91160(v1[3].m128i_i64[1], v1[4].m128i_i64[0]);
  v28 = v26;
  if ( v26 < 0 )
  {
    v29 = 0;
    goto LABEL_22;
  }
  if ( !v26 )
  {
    v49 = 0;
    v48 = 1;
    goto LABEL_42;
  }
  v1 = (const __m128i *)v25;
  nullsub_1(v27);
  v29 = 1;
  v30 = (__m128i *)sub_140001650(v28, 1);
  if ( !v30 )
LABEL_22:
    sub_141938D2B(v29, v28);
  v31 = v30;
  sub_1418F44E0(v30, v1, v28);
  if ( v28 < 8 )
  {
    v32 = 0;
    do
    {
LABEL_37:
      v31->m128i_i8[v32] |= 32 * ((unsigned __int8)(v31->m128i_i8[v32] - 65) < 0x1Au);
      ++v32;
LABEL_38:
      ;
    }
    while ( v28 != v32 );
    goto LABEL_39;
  }
  if ( v28 < 0x20 )
  {
    v32 = 0;
    goto LABEL_34;
  }
  v32 = v28 & 0x7FFFFFFFFFFFFFE0LL;
  v33 = 0;
  v34 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v35 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v36 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  do
  {
    v37 = _mm_loadu_si128(&v31[v33 / 0x10]);
    v38 = _mm_loadu_si128(&v31[v33 / 0x10 + 1]);
    v39 = _mm_add_epi8(v37, v34);
    v40 = _mm_add_epi8(v38, v34);
    v31[v33 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v39, v35), v39), v36), v37);
    v31[v33 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v40, v35), v40), v36), v38);
    v33 += 32LL;
  }
  while ( v32 != v33 );
  if ( v28 != v32 )
  {
    if ( (v28 & 0x18) == 0 )
      goto LABEL_37;
LABEL_34:
    v41 = v32;
    v32 = v28 & 0x7FFFFFFFFFFFFFF8LL;
    v42 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v43 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v44 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v45 = _mm_loadl_epi64((__m128i *)((char *)v31 + v41));
      v46 = _mm_add_epi8(v45, v42);
      *(__int64 *)((char *)v31->m128i_i64 + v41) = _mm_or_si128(
                                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v46, v43), v46), v44),
                                                     v45).m128i_u64[0];
      v41 += 8;
    }
    while ( v32 != v41 );
    goto LABEL_38;
  }
LABEL_39:
  v48 = (__int64)v31;
  if ( v28 >= 4 && v31->m128i_i32[0] == 1852143473 )
  {
    LOBYTE(v1) = 1;
LABEL_47:
    sub_140001660(v48, v28, 1);
    goto LABEL_48;
  }
  v49 = v28;
LABEL_42:
  if ( (unsigned __int8)sub_140DDDAE0(aDashscopeAliyu, 22, v9)
    || (unsigned __int8)sub_140DDDAE0(aDashscopeIntlA, 27, v9) )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    LOBYTE(v1) = 2;
  }
  v28 = v49;
  if ( v49 )
    goto LABEL_47;
LABEL_48:
  if ( v5 )
    sub_140001660(v9, v5, 1);
  return (unsigned int)v1;
}
