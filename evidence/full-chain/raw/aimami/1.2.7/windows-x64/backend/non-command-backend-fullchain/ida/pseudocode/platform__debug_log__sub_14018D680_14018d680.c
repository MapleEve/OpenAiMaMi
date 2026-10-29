// win 1.2.7 | module src/platform/debug_log.rs | ea 0x14018d680 | name sub_14018D680
// win 1.2.7 | module src/platform/debug_log.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14018D680(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        const __m128i *a6,
        unsigned __int64 a7)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // r15
  unsigned __int8 v13; // di
  unsigned __int8 v14; // r14
  __int64 result; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 i; // rdi
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 v26; // r12
  unsigned __int64 v27; // rsi
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  __int64 v32; // r9
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __m128i v36; // xmm5
  __int64 v37; // r9
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  unsigned __int8 v44; // r8
  _OWORD v45[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+90h] [rbp+10h]
  __m128i v47; // [rsp+98h] [rbp+18h] BYREF
  __m128i v48; // [rsp+A8h] [rbp+28h] BYREF
  __m128i v49; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v50[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v51; // [rsp+F8h] [rbp+78h]
  __int64 *v52; // [rsp+100h] [rbp+80h]
  __int64 v53; // [rsp+108h] [rbp+88h]
  __int128 v54; // [rsp+110h] [rbp+90h] BYREF
  __int64 v55; // [rsp+120h] [rbp+A0h]
  __int64 v56; // [rsp+128h] [rbp+A8h]

  v56 = -2;
  if ( !(a5 ^ 1 | a7 ^ 1) )
  {
    if ( a3 < 0 )
    {
      v8 = 0;
      v9 = a3;
      goto LABEL_4;
    }
    if ( a3 )
    {
      v9 = a3;
      v12 = a1;
      v13 = *a4;
      v14 = a6->m128i_i8[0];
      nullsub_1(a1);
      v8 = 1;
      result = sub_140001650(v9, 1);
      if ( !result )
LABEL_4:
        sub_141938D2B(v8, v9);
      if ( v9 < 8 )
      {
        v16 = v9;
        v17 = 0;
        goto LABEL_44;
      }
      if ( v9 < 0x20 )
      {
        v16 = v9;
        v17 = 0;
        goto LABEL_39;
      }
      v16 = v9;
      v17 = v9 & 0x7FFFFFFFFFFFFFE0LL;
      v28 = _mm_cvtsi32_si128(v13);
      v29 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v28, v28), 0), 68);
      v30 = _mm_cvtsi32_si128(v14);
      v31 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v30, v30), 0), 68);
      v32 = 0;
      do
      {
        v33 = _mm_loadu_si128((const __m128i *)(a2 + v32));
        v34 = _mm_loadu_si128((const __m128i *)(a2 + v32 + 16));
        v35 = _mm_cmpeq_epi8(v33, v29);
        v36 = _mm_cmpeq_epi8(v34, v29);
        *(__m128i *)(result + v32) = _mm_or_si128(_mm_andnot_si128(v35, v33), _mm_and_si128(v31, v35));
        *(__m128i *)(result + v32 + 16) = _mm_or_si128(_mm_andnot_si128(v36, v34), _mm_and_si128(v31, v36));
        v32 += 32;
      }
      while ( v17 != v32 );
      if ( v9 != v17 )
      {
        if ( (v9 & 0x18) == 0 )
        {
          do
          {
LABEL_44:
            v44 = *(_BYTE *)(a2 + v17);
            if ( v44 == v13 )
              v44 = v14;
            *(_BYTE *)(result + v17++) = v44;
LABEL_47:
            ;
          }
          while ( v16 != v17 );
          a1 = v12;
          a3 = v16;
          goto LABEL_49;
        }
LABEL_39:
        v37 = v17;
        v17 = v16 & 0x7FFFFFFFFFFFFFF8LL;
        v38 = _mm_cvtsi32_si128(v13);
        v39 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v38, v38), 0);
        v40 = _mm_cvtsi32_si128(v14);
        v41 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v40, v40), 0);
        do
        {
          v42 = _mm_loadl_epi64((const __m128i *)(a2 + v37));
          v43 = _mm_cmpeq_epi8(v42, v39);
          *(_QWORD *)(result + v37) = _mm_or_si128(_mm_andnot_si128(v43, v42), _mm_and_si128(v41, v43)).m128i_u64[0];
          v37 += 8;
        }
        while ( v17 != v37 );
        goto LABEL_47;
      }
      a1 = v12;
      a3 = v9;
    }
    else
    {
      result = 1;
    }
LABEL_49:
    *a1 = a3;
    a1[1] = result;
    a1[2] = a3;
    return result;
  }
  v52 = a1;
  v10 = 0;
  v11 = a3;
  if ( a5 > a7 )
    v11 = 0;
  if ( v11 < 0 )
LABEL_8:
    sub_141938D2B(v10, a3);
  v53 = a3;
  if ( v11 )
  {
    v18 = (int)a4;
    nullsub_1(a1);
    v10 = 1;
    v19 = sub_140001650(v11, 1);
    a3 = v53;
    if ( !v19 )
      goto LABEL_8;
    LODWORD(a4) = v18;
    v20 = v53;
  }
  else
  {
    v19 = 1;
    v20 = 0;
    LODWORD(a3) = v53;
  }
  *(_QWORD *)&v54 = v20;
  *((_QWORD *)&v54 + 1) = v19;
  v55 = 0;
  sub_1416B2790((unsigned int)&v47, a2, a3, (_DWORD)a4, a5);
  v46 = v51;
  v45[5] = v50[2];
  v45[4] = v50[1];
  v45[3] = _mm_loadu_si128(v50);
  v45[2] = _mm_loadu_si128(&v49);
  v45[1] = _mm_loadu_si128(&v48);
  v45[0] = _mm_loadu_si128(&v47);
  v21 = 0;
  for ( i = 0; ; i = v24 )
  {
    sub_140292200(&v47, v45);
    if ( !v47.m128i_i8[0] )
      break;
    v23 = v47.m128i_i64[1];
    v24 = v48.m128i_i64[0];
    v25 = v47.m128i_i64[1] - i;
    if ( v47.m128i_i64[1] - i <= (unsigned __int64)(v54 - v21) )
    {
      if ( v47.m128i_i64[1] == i )
        goto LABEL_23;
LABEL_22:
      sub_1418F44E0((__m128i *)(v21 + *((_QWORD *)&v54 + 1)), (const __m128i *)(a2 + i), v25);
      goto LABEL_23;
    }
    sub_14190D590((unsigned int)&v54, v21, v47.m128i_i32[2] - i, 1, 1);
    v21 = v55;
    if ( v23 != i )
      goto LABEL_22;
LABEL_23:
    v26 = v25 + v21;
    v55 = v26;
    if ( a7 > (__int64)v54 - v26 )
    {
      sub_14190D590((unsigned int)&v54, v26, a7, 1, 1);
      v26 = v55;
    }
    sub_1418F44E0((__m128i *)(v26 + *((_QWORD *)&v54 + 1)), a6, a7);
    v21 = a7 + v26;
    v55 = v21;
  }
  v27 = v53 - i;
  if ( v53 - i > (unsigned __int64)(v54 - v21) )
  {
    sub_14190D590((unsigned int)&v54, v21, v53 - i, 1, 1);
    v21 = v55;
    if ( v53 != i )
LABEL_30:
      sub_1418F44E0((__m128i *)(v21 + *((_QWORD *)&v54 + 1)), (const __m128i *)(i + a2), v27);
  }
  else if ( v53 != i )
  {
    goto LABEL_30;
  }
  v55 = v27 + v21;
  result = (__int64)v52;
  v52[2] = v27 + v21;
  *(_OWORD *)result = v54;
  return result;
}
