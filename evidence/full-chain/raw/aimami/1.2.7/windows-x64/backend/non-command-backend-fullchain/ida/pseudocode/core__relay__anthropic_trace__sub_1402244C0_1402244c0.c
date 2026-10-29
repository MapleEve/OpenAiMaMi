// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1402244c0 | name sub_1402244C0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1402244C0(
        __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        const __m128i *a4,
        unsigned __int64 a5)
{
  __int64 v7; // r13
  unsigned __int64 v8; // r13
  char *v9; // r12
  const __m128i *v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  const __m128i *v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r12
  const __m128i *v19; // r15
  unsigned __int64 v20; // r8
  __int64 v21; // r14
  const __m128i *v22; // r14
  __m128i si128; // xmm0
  unsigned __int64 v24; // rbx
  __m128i *v25; // rdx
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i *result; // rax
  __m128i *v29; // rcx
  const __m128i *v30; // rbx
  __m128i v31; // [rsp+28h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h]
  __m128i v33; // [rsp+40h] [rbp-40h] BYREF
  __m128i v34; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v35[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+A0h] [rbp+20h]
  char v37; // [rsp+A8h] [rbp+28h]
  int v38; // [rsp+A9h] [rbp+29h]
  __int16 v39; // [rsp+ADh] [rbp+2Dh]
  char v40; // [rsp+AFh] [rbp+2Fh]
  __m128i *v41; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v42; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp+50h]
  __int128 v44; // [rsp+E0h] [rbp+60h]
  __int64 v45; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v46; // [rsp+F8h] [rbp+78h]
  __int128 v47; // [rsp+100h] [rbp+80h] BYREF
  __m128i v48; // [rsp+110h] [rbp+90h]
  _BYTE v49[72]; // [rsp+120h] [rbp+A0h] BYREF
  unsigned __int8 v50; // [rsp+168h] [rbp+E8h]
  int v51; // [rsp+169h] [rbp+E9h]
  __int16 v52; // [rsp+16Dh] [rbp+EDh]
  char v53; // [rsp+16Fh] [rbp+EFh]
  __m128i *v54; // [rsp+178h] [rbp+F8h]
  __int64 v55; // [rsp+180h] [rbp+100h]

  v55 = -2;
  v54 = a1;
  v50 = 0;
  v47 = xmmword_1419E2188;
  v48 = xmmword_1419E2198[0];
  memset(v49, 0, sizeof(v49));
  if ( dword_1421E0104 )
  {
    v30 = a2;
    sub_1419116A6(&xmmword_1421E00F4);
    a2 = v30;
  }
  v7 = v50;
  if ( v50 >= 0x30uLL )
  {
    v9 = (char *)&xmmword_1421E00F4 + 64LL - v50;
    v8 = v50 - 48LL;
    v10 = a2;
    sub_1418F44E0((__m128i *)&v49[v50 + 8], (const __m128i *)&xmmword_1421E00F4, 64LL - v50);
    ++*(_QWORD *)v49;
    sub_14140F460(&v47, &v49[8], 1);
    sub_1418F44E0((__m128i *)&v49[8], (const __m128i *)&v9[v8 & 0x7FFFFFFFFFFFFFC0LL], v8);
    a2 = v10;
  }
  else
  {
    *(_OWORD *)&v49[v50 + 8] = xmmword_1421E00F4;
    v8 = v7 + 16;
  }
  v50 = v8;
  v11 = 64 - v8;
  v12 = a3 - (64 - v8);
  if ( a3 >= 64 - v8 )
  {
    if ( v8 )
    {
      v15 = (const __m128i *)((char *)a2 + v11);
      sub_1418F44E0((__m128i *)&v49[v8 + 8], a2, v11);
      ++*(_QWORD *)v49;
      sub_14140F460(&v47, &v49[8], 1);
      a2 = v15;
    }
    else
    {
      v12 = a3;
    }
    sub_1418F44E0((__m128i *)&v49[8], a2, v12);
    v13 = v12;
    goto LABEL_14;
  }
  sub_1418F44E0((__m128i *)&v49[v8 + 8], a2, a3);
  v13 = a3 + v8;
  v50 = v13;
  LOBYTE(v12) = v13;
  if ( v13 != 63 )
  {
LABEL_14:
    v49[v13 + 8] = 0;
    v50 = v12 + 1;
    v14 = (unsigned __int8)(v12 + 1);
    v16 = 64 - v14;
    v17 = a5 - (64 - v14);
    if ( a5 < 64 - v14 )
      goto LABEL_15;
    v19 = (const __m128i *)((char *)a4 + v16);
    sub_1418F44E0((__m128i *)&v49[v14 + 8], a4, v16);
    ++*(_QWORD *)v49;
    sub_14140F460(&v47, &v49[8], 1);
    a4 = v19;
    goto LABEL_18;
  }
  v49[71] = 0;
  ++*(_QWORD *)v49;
  sub_14140F460(&v47, &v49[8], 1);
  v50 = 0;
  if ( a5 < 0x40 )
  {
    v14 = 0;
LABEL_15:
    sub_1418F44E0((__m128i *)&v49[v14 + 8], a4, a5);
    LOBYTE(v18) = a5 + v14;
    goto LABEL_21;
  }
  v17 = a5;
LABEL_18:
  v20 = v17 >> 6;
  v21 = v17 & 0x7FFFFFFFFFFFFFC0LL;
  v18 = v17 & 0x3F;
  v22 = (const __m128i *)((char *)a4 + v21);
  if ( v20 )
  {
    *(_QWORD *)v49 += v20;
    sub_14140F460(&v47, a4, v20);
  }
  sub_1418F44E0((__m128i *)&v49[8], v22, v18);
LABEL_21:
  v50 = v18;
  v36 = *(_QWORD *)&v49[64];
  v37 = v18;
  v38 = v51;
  v39 = v52;
  v40 = v53;
  si128 = _mm_load_si128((const __m128i *)&v47);
  v35[0] = *(_OWORD *)v49;
  v35[3] = *(_OWORD *)&v49[48];
  v35[2] = *(_OWORD *)&v49[32];
  v35[1] = *(_OWORD *)&v49[16];
  v34 = v48;
  v33 = si128;
  v24 = _byteswap_uint64((*(_QWORD *)v49 << 9) | (8 * (unsigned int)(unsigned __int8)v18));
  *((_BYTE *)v35 + (unsigned __int8)v18 + 8) = 0x80;
  if ( (unsigned __int8)v18 == 63
    || (sub_1418F4C70((char *)v35 + (unsigned __int8)v18 + 9, 0, (unsigned __int8)v18 ^ 0x3FLL),
        ((unsigned __int8)v18 ^ 0x38u) <= 7) )
  {
    sub_14140F460(&v33, (char *)v35 + 8, 1);
    v44 = 0;
    v43 = 0;
    v42 = 0;
    v45 = 0;
    v46 = v24;
    v25 = &v42;
  }
  else
  {
    v36 = v24;
    v25 = (__m128i *)((char *)v35 + 8);
  }
  sub_14140F460(&v33, v25, 1);
  v26 = _mm_load_si128(&v33);
  v27 = _mm_load_si128(&v34);
  v33 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v26, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v26, (__m128i)0LL), 27), 27));
  v34 = _mm_packus_epi16(
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v27, (__m128i)0LL), 27), 27),
          _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v27, (__m128i)0LL), 27), 27));
  v41 = &v33;
  v42.m128i_i64[0] = (__int64)&v41;
  v42.m128i_i64[1] = (__int64)sub_1402863B0;
  sub_1416ABFD0(&v31, &unk_141A1C1CB, &v42);
  if ( v31.m128i_i64[0] == -1 )
  {
    result = v54;
    v54->m128i_i64[0] = 0;
    result->m128i_i64[1] = 1;
    result[1].m128i_i64[0] = 0;
  }
  else
  {
    *(_QWORD *)&v43 = v32;
    v42 = v31;
    sub_1402AEA10(&v33.m128i_i8[1], &v33.m128i_u64[1], &v42);
    result = (__m128i *)v43;
    v29 = v54;
    v54[1].m128i_i64[0] = v43;
    *v29 = _mm_load_si128(&v42);
  }
  return result;
}
