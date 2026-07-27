// module: codexmate_lib/platform/debug_log
// addr: 0x140342ca0
// name: sub_140342CA0
// win 1.2.1 | module src/platform/debug_log.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140342CA0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        unsigned __int8 *a6,
        unsigned __int64 a7)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 i; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 result; // rax
  unsigned __int8 v21; // di
  unsigned __int8 v22; // r14
  __int64 v23; // rdx
  __int64 *v24; // r10
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm1
  __int64 v29; // r9
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  __int64 v34; // r9
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  int v41; // edi
  unsigned __int8 v42; // r8
  _OWORD v43[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+90h] [rbp+10h]
  __m128i v45; // [rsp+98h] [rbp+18h] BYREF
  __m128i v46; // [rsp+A8h] [rbp+28h] BYREF
  __m128i v47; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v48[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v49; // [rsp+F8h] [rbp+78h]
  __int64 *v50; // [rsp+100h] [rbp+80h]
  __int128 v51; // [rsp+108h] [rbp+88h] BYREF
  __int64 v52; // [rsp+118h] [rbp+98h]
  __int64 v53; // [rsp+120h] [rbp+A0h]
  __int64 v54; // [rsp+128h] [rbp+A8h]

  v54 = -2;
  v50 = a1;
  if ( !(a5 ^ 1 | a7 ^ 1) )
  {
    if ( a3 < 0 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( a3 )
    {
      v21 = *a4;
      v22 = *a6;
      nullsub_1(0);
      v9 = 1;
      result = sub_140001650(a3, 1);
      if ( !result )
LABEL_4:
        sub_1416C2D4B(v9, a3);
      if ( (unsigned __int64)a3 < 8 )
      {
        v23 = 0;
        v24 = v50;
        do
        {
LABEL_45:
          v42 = *(_BYTE *)(a2 + v23);
          if ( v42 == v21 )
            v42 = v22;
          *(_BYTE *)(result + v23++) = v42;
LABEL_48:
          ;
        }
        while ( a3 != v23 );
        goto LABEL_49;
      }
      v24 = v50;
      if ( (unsigned __int64)a3 < 0x20 )
      {
        v23 = 0;
        goto LABEL_35;
      }
      v23 = a3 & 0x7FFFFFFFFFFFFFE0LL;
      v25 = _mm_cvtsi32_si128(v21);
      v26 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 0), 68);
      v27 = _mm_cvtsi32_si128(v22);
      v28 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v27, v27), 0), 68);
      v29 = 0;
      do
      {
        v30 = _mm_loadu_si128((const __m128i *)(a2 + v29));
        v31 = _mm_loadu_si128((const __m128i *)(a2 + v29 + 16));
        v32 = _mm_cmpeq_epi8(v30, v26);
        v33 = _mm_cmpeq_epi8(v31, v26);
        *(__m128i *)(result + v29) = _mm_or_si128(_mm_andnot_si128(v32, v30), _mm_and_si128(v28, v32));
        *(__m128i *)(result + v29 + 16) = _mm_or_si128(_mm_andnot_si128(v33, v31), _mm_and_si128(v28, v33));
        v29 += 32;
      }
      while ( v23 != v29 );
      if ( a3 != v23 )
      {
        if ( (a3 & 0x18) == 0 )
          goto LABEL_45;
LABEL_35:
        v34 = v23;
        v23 = a3 & 0x7FFFFFFFFFFFFFF8LL;
        v35 = _mm_cvtsi32_si128(v21);
        v36 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v35, v35), 0);
        v37 = _mm_cvtsi32_si128(v22);
        v38 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v37, v37), 0);
        do
        {
          v39 = _mm_loadl_epi64((const __m128i *)(a2 + v34));
          v40 = _mm_cmpeq_epi8(v39, v36);
          *(_QWORD *)(result + v34) = _mm_or_si128(_mm_andnot_si128(v40, v39), _mm_and_si128(v38, v40)).m128i_u64[0];
          v34 += 8;
        }
        while ( v23 != v34 );
        goto LABEL_48;
      }
    }
    else
    {
      result = 1;
      v24 = v50;
    }
LABEL_49:
    *v24 = a3;
    v24[1] = result;
    v24[2] = a3;
    return result;
  }
  v53 = a3;
  v10 = 1;
  if ( a5 <= a7 )
  {
    if ( v53 < 0 )
    {
      v18 = 0;
      goto LABEL_19;
    }
    v41 = (int)a4;
    if ( v53 )
    {
      nullsub_1(a5 ^ 1 | a7 ^ 1);
      v10 = sub_140001650(v53, 1);
      v18 = 1;
      if ( !v10 )
LABEL_19:
        sub_1416C2D4B(v18, v53);
      v11 = v53;
    }
    else
    {
      v11 = 0;
    }
    LODWORD(a4) = v41;
    goto LABEL_7;
  }
  v11 = 0;
LABEL_7:
  *(_QWORD *)&v51 = v11;
  *((_QWORD *)&v51 + 1) = v10;
  v52 = 0;
  sub_1414A2990((unsigned int)&v45, a2, v53, (_DWORD)a4, a5);
  v44 = v49;
  v43[5] = v48[2];
  v43[4] = v48[1];
  v43[3] = _mm_loadu_si128(v48);
  v43[2] = _mm_loadu_si128(&v47);
  v43[1] = _mm_loadu_si128(&v46);
  v43[0] = _mm_loadu_si128(&v45);
  v12 = 0;
  for ( i = 0; ; i = v15 )
  {
    sub_140424780(&v45, v43);
    if ( !v45.m128i_i8[0] )
      break;
    v14 = v45.m128i_i64[1];
    v15 = v46.m128i_i64[0];
    v16 = v45.m128i_i64[1] - i;
    if ( v45.m128i_i64[1] - i <= (unsigned __int64)(v51 - v12) )
    {
      if ( v45.m128i_i64[1] == i )
        goto LABEL_12;
LABEL_11:
      sub_141684120(v12 + *((_QWORD *)&v51 + 1), a2 + i, v16);
      goto LABEL_12;
    }
    sub_141688D30((unsigned int)&v51, v12, v45.m128i_i32[2] - i, 1, 1);
    v12 = v52;
    if ( v14 != i )
      goto LABEL_11;
LABEL_12:
    v17 = v16 + v12;
    v52 = v17;
    if ( a7 > (__int64)v51 - v17 )
    {
      sub_141688D30((unsigned int)&v51, v17, a7, 1, 1);
      v17 = v52;
    }
    sub_141684120(v17 + *((_QWORD *)&v51 + 1), a6, a7);
    v12 = a7 + v17;
    v52 = v12;
  }
  v19 = v53 - i;
  if ( v53 - i > (unsigned __int64)(v51 - v12) )
  {
    sub_141688D30((unsigned int)&v51, v12, v53 - i, 1, 1);
    v12 = v52;
    if ( v53 != i )
LABEL_22:
      sub_141684120(v12 + *((_QWORD *)&v51 + 1), i + a2, v19);
  }
  else if ( v53 != i )
  {
    goto LABEL_22;
  }
  v52 = v19 + v12;
  result = (__int64)v50;
  v50[2] = v19 + v12;
  *(_OWORD *)result = v51;
  return result;
}