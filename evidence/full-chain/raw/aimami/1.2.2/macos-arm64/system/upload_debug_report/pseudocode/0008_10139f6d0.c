// mac 1.2.2 NEW upload_debug_report 0x10139f6d0 d=2
unsigned __int64 __fastcall core::str::count::do_count_chars::h4875767a8f682eeb(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __m128i si128; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  unsigned __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r10
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __m128i v26; // xmm1
  unsigned __int64 v27; // r10
  int v28; // r11d
  const __m128i *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  const __m128i *v32; // rbx
  unsigned __int64 v33; // r14
  const __m128i *v34; // r10
  __m128i v35; // xmm4
  unsigned __int64 v36; // r12
  __m128i v37; // xmm6
  __m128i v38; // xmm2
  __m128i v39; // xmm5
  __m128i v40; // xmm3
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  __m128i v43; // xmm7
  __m128i v44; // xmm2
  __m128i v45; // xmm5
  __m128i v46; // xmm4
  __m128i v47; // xmm10
  __m128i v48; // xmm7
  __m128i v49; // xmm9
  __m128i v50; // xmm8
  __m128i v51; // xmm8
  __m128i v52; // xmm6
  __m128i v53; // xmm9
  __m128i v54; // xmm7
  __m128i v55; // xmm6
  __m128i v56; // xmm6
  __m128i v57; // xmm2
  __m128i v58; // xmm3
  __m128i v59; // xmm2
  __int64 v60; // r9
  unsigned __int64 v61; // rax

  v2 = ((a1 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a1; /*0x10139f6e6*/
  v3 = a2 - v2; /*0x10139f6ec*/
  if ( a2 >= v2 && v3 >= 8 ) /*0x10139f709*/
  {
    v6 = v3 & 7; /*0x10139f70d*/
    if ( ((a1 + 7) & 0xFFFFFFFFFFFFFFF8LL) == a1 ) /*0x10139f713*/
    {
      v7 = 0; /*0x10139f715*/
    }
    else
    {
      if ( v2 >= 4 ) /*0x10139f720*/
      {
        v8 = v2 & 4; /*0x10139f7b6*/
        v15 = 0; /*0x10139f7b9*/
        v16 = 0; /*0x10139f7bd*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_101650E00); /*0x10139f7bf*/
        v18 = _mm_load_si128((const __m128i *)&xmmword_1015E0500); /*0x10139f7c7*/
        v19 = 0; /*0x10139f7cf*/
        do /*0x10139f81e*/
        {
          v15 = _mm_add_epi64( /*0x10139f802*/
                  v15,
                  _mm_and_si128(
                    _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v16)), si128)),
                    v18));
          v19 = _mm_add_epi64( /*0x10139f813*/
                  v19,
                  _mm_and_si128(
                    _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v16 + 2)), si128)),
                    v18));
          v16 += 4; /*0x10139f817*/
        }
        while ( v8 != v16 ); /*0x10139f81e*/
        v20 = _mm_add_epi64(v19, v15); /*0x10139f820*/
        v7 = _mm_add_epi64(_mm_shuffle_epi32(v20, 238), v20).u64[0]; /*0x10139f82d*/
        goto LABEL_18; /*0x10139f832*/
      }
      v8 = 0; /*0x10139f726*/
      v7 = 0; /*0x10139f728*/
      do /*0x10139f848*/
      {
        v7 += *(_BYTE *)(a1 + v8++) >= 0xC0; /*0x10139f83f*/
LABEL_18:
        ; /*0x10139f845*/
      }
      while ( v2 != v8 ); /*0x10139f848*/
    }
    v21 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8LL; /*0x10139f84a*/
    if ( (v3 & 7) != 0 ) /*0x10139f850*/
    {
      v22 = v3 & 0x7FFFFFFFFFFFFFF8LL; /*0x10139f860*/
      v23 = *(_BYTE *)(v21 + (v3 & 0x7FFFFFFFFFFFFFF8LL)) >= 0xC0; /*0x10139f86a*/
      if ( v6 != 1 ) /*0x10139f871*/
      {
        v23 += *(_BYTE *)(v21 + v22 + 1) >= 0xC0; /*0x10139f87f*/
        if ( v6 != 2 ) /*0x10139f885*/
        {
          v23 += *(_BYTE *)(v21 + v22 + 2) >= 0xC0; /*0x10139f893*/
          if ( v6 != 3 ) /*0x10139f899*/
          {
            v23 += *(_BYTE *)(v21 + v22 + 3) >= 0xC0; /*0x10139f8a7*/
            if ( v6 != 4 ) /*0x10139f8ad*/
            {
              v23 += *(_BYTE *)(v21 + v22 + 4) >= 0xC0; /*0x10139f8bb*/
              if ( v6 != 5 ) /*0x10139f8c1*/
              {
                v23 += *(_BYTE *)(v21 + v22 + 5) >= 0xC0; /*0x10139f8cf*/
                if ( v6 != 6 ) /*0x10139f8d5*/
                  v23 += *(_BYTE *)(v21 + v22 + 6) >= 0xC0; /*0x10139f8e1*/
              }
            }
          }
        }
      }
    }
    else
    {
      v23 = 0; /*0x10139f8e6*/
    }
    v24 = v7 + v23; /*0x10139f8e9*/
    v25 = v3 >> 3; /*0x10139f8ec*/
    v26 = _mm_load_si128((const __m128i *)&xmmword_101512030); /*0x10139f908*/
    while ( 1 ) /*0x10139f954*/
    {
      result = v24; /*0x10139f954*/
      if ( !v25 ) /*0x10139f95a*/
        return result; /*0x10139f95a*/
      v29 = (const __m128i *)v21; /*0x10139f960*/
      v30 = 192; /*0x10139f96a*/
      if ( v25 < 0xC0 ) /*0x10139f970*/
        v30 = v25; /*0x10139f970*/
      v31 = (unsigned int)(8 * v30); /*0x10139f974*/
      if ( ((8 * (_WORD)v30) & 0x7E0) != 0 ) /*0x10139f986*/
      {
        if ( (unsigned __int64)(v31 - 32) >= 0x60 ) /*0x10139f990*/
        {
          v33 = ((unsigned __int64)(v31 - 32) >> 5) + 1; /*0x10139f9a4*/
          v32 = &v29[2 * (v33 & 0xFFFFFFFFFFFFFFFCLL)]; /*0x10139f9b5*/
          v34 = v29 + 4; /*0x10139f9b8*/
          v35 = 0; /*0x10139f9bc*/
          v36 = v33 & 0xFFFFFFFFFFFFFFFCLL; /*0x10139f9c0*/
          v37 = 0; /*0x10139f9c3*/
          do /*0x10139fb47*/
          {
            v38 = _mm_loadu_si128(v34 - 4); /*0x10139f9d0*/
            v39 = _mm_loadu_si128(v34 - 2); /*0x10139f9d6*/
            v40 = _mm_unpacklo_epi64(v38, v39); /*0x10139f9e0*/
            v41 = _mm_add_epi64( /*0x10139f9fe*/
                    _mm_and_si128(
                      _mm_or_si128(_mm_srli_epi64(v40, 6u), _mm_srli_epi64(_mm_xor_si128(v40, (__m128i)-1LL), 7u)),
                      v26),
                    v35);
            v42 = _mm_loadu_si128(v34 - 3); /*0x10139fa02*/
            v43 = _mm_loadu_si128(v34 - 1); /*0x10139fa08*/
            v44 = _mm_unpackhi_epi64(v38, v39); /*0x10139fa0e*/
            v45 = _mm_unpacklo_epi64(v42, v43); /*0x10139fa16*/
            v46 = _mm_unpackhi_epi64(v42, v43); /*0x10139fa1a*/
            v47 = _mm_loadu_si128(v34 + 3); /*0x10139fa1e*/
            v48 = _mm_loadu_si128(v34 + 2); /*0x10139fa24*/
            v49 = _mm_loadu_si128(v34); /*0x10139fa2a*/
            v50 = _mm_unpacklo_epi64(v49, v48); /*0x10139fa34*/
            v51 = _mm_add_epi64( /*0x10139fa59*/
                    _mm_and_si128(
                      _mm_or_si128(_mm_srli_epi64(v50, 6u), _mm_srli_epi64(_mm_xor_si128(v50, (__m128i)-1LL), 7u)),
                      v26),
                    v37);
            v52 = _mm_loadu_si128(v34 + 1); /*0x10139fa5e*/
            v53 = _mm_unpackhi_epi64(v49, v48); /*0x10139fa64*/
            v54 = _mm_unpacklo_epi64(v52, v47); /*0x10139fa6d*/
            v55 = _mm_unpackhi_epi64(v52, v47); /*0x10139fa72*/
            v35 = _mm_add_epi64( /*0x10139fb33*/
                    _mm_and_si128(
                      _mm_or_si128(_mm_srli_epi64(v46, 6u), _mm_srli_epi64(_mm_xor_si128(v46, (__m128i)-1LL), 7u)),
                      v26),
                    _mm_add_epi64(
                      _mm_add_epi64(
                        _mm_and_si128(
                          _mm_or_si128(_mm_srli_epi64(v45, 6u), _mm_srli_epi64(_mm_xor_si128(v45, (__m128i)-1LL), 7u)),
                          v26),
                        _mm_and_si128(
                          _mm_or_si128(_mm_srli_epi64(v44, 6u), _mm_srli_epi64(_mm_xor_si128(v44, (__m128i)-1LL), 7u)),
                          v26)),
                      v41));
            v37 = _mm_add_epi64( /*0x10139fb3b*/
                    _mm_and_si128(
                      _mm_or_si128(_mm_srli_epi64(v55, 6u), _mm_srli_epi64(_mm_xor_si128(v55, (__m128i)-1LL), 7u)),
                      v26),
                    _mm_add_epi64(
                      _mm_add_epi64(
                        _mm_and_si128(
                          _mm_or_si128(_mm_srli_epi64(v54, 6u), _mm_srli_epi64(_mm_xor_si128(v54, (__m128i)-1LL), 7u)),
                          v26),
                        _mm_and_si128(
                          _mm_or_si128(_mm_srli_epi64(v53, 6u), _mm_srli_epi64(_mm_xor_si128(v53, (__m128i)-1LL), 7u)),
                          v26)),
                      v51));
            v34 += 8; /*0x10139fb3f*/
            v36 -= 4LL; /*0x10139fb43*/
          }
          while ( v36 ); /*0x10139fb47*/
          v56 = _mm_add_epi64(v37, v35); /*0x10139fb4d*/
          v27 = _mm_add_epi64(_mm_shuffle_epi32(v56, 238), v56).u64[0]; /*0x10139fb5a*/
          if ( v33 == (v33 & 0xFFFFFFFFFFFFFFFCLL) ) /*0x10139fb62*/
            goto LABEL_30; /*0x10139fb62*/
        }
        else
        {
          v32 = v29; /*0x10139f992*/
          v27 = 0; /*0x10139f995*/
        }
        do /*0x10139fbc9*/
        {
          v57 = _mm_loadu_si128(v32); /*0x10139fb70*/
          v58 = _mm_loadu_si128(v32 + 1); /*0x10139fb74*/
          v59 = _mm_add_epi64( /*0x10139fbad*/
                  _mm_and_si128(
                    _mm_or_si128(_mm_srli_epi64(v57, 6u), _mm_srli_epi64(_mm_xor_si128(v57, (__m128i)-1LL), 7u)),
                    v26),
                  _mm_and_si128(
                    _mm_or_si128(_mm_srli_epi64(v58, 6u), _mm_srli_epi64(_mm_xor_si128(v58, (__m128i)-1LL), 7u)),
                    v26));
          v27 += _mm_add_epi64(_mm_shuffle_epi32(v59, 238), v59).u64[0]; /*0x10139fbbf*/
          v32 += 2; /*0x10139fbc2*/
        }
        while ( v32 != (const __m128i *)&v29->i8[(8 * (_WORD)v30) & 0x7E0] ); /*0x10139fbc9*/
      }
      else
      {
        v27 = 0; /*0x10139f920*/
      }
LABEL_30:
      v21 = (unsigned __int64)v29->u64 + v31; /*0x10139f923*/
      v25 -= v30; /*0x10139f926*/
      v28 = v30 & 3; /*0x10139f92c*/
      v24 = result + ((0x1000100010001LL * ((v27 & 0xFF00FF00FF00FFLL) + ((v27 >> 8) & 0xFF00FF00FF00FFLL))) >> 48); /*0x10139f948*/
      if ( (v30 & 3) != 0 ) /*0x10139f94e*/
      {
        v60 = (unsigned __int8)v30 & 0xFC; /*0x10139fbda*/
        v61 = (((unsigned __int64)~v29->i64[(unsigned int)v60] >> 7) /*0x10139fbf9*/
             | ((unsigned __int64)v29->i64[(unsigned int)v60] >> 6))
            & 0x101010101010101LL;
        if ( v28 != 1 ) /*0x10139fc00*/
        {
          v61 += (((unsigned __int64)~v29->i64[v60 + 1] >> 7) | ((unsigned __int64)v29->i64[v60 + 1] >> 6)) /*0x10139fc1b*/
               & 0x101010101010101LL;
          if ( v28 != 2 ) /*0x10139fc22*/
            v61 += (((unsigned __int64)~v29[1].i64[v60] >> 7) | ((unsigned __int64)v29[1].i64[v60] >> 6)) /*0x10139fc3d*/
                 & 0x101010101010101LL;
        }
        return v24 + ((0x1000100010001LL * ((v61 & 0xFF00FF00FF00FFLL) + ((v61 >> 8) & 0xFF00FF00FF00FFLL))) >> 48); /*0x10139fc5b*/
      }
    }
  }
  if ( !a2 ) /*0x10139f6f4*/
    return 0; /*0x10139f72f*/
  if ( a2 >= 4 ) /*0x10139f6fa*/
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFFCLL; /*0x10139f739*/
    v9 = 0; /*0x10139f73d*/
    v10 = 0; /*0x10139f741*/
    v11 = _mm_load_si128((const __m128i *)&xmmword_101650E00); /*0x10139f743*/
    v12 = _mm_load_si128((const __m128i *)&xmmword_1015E0500); /*0x10139f74b*/
    v13 = 0; /*0x10139f753*/
    do /*0x10139f79a*/
    {
      v9 = _mm_add_epi64( /*0x10139f77e*/
             v9,
             _mm_and_si128(
               _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v10)), v11)),
               v12));
      v13 = _mm_add_epi64( /*0x10139f78f*/
              v13,
              _mm_and_si128(
                _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v10 + 2)), v11)),
                v12));
      v10 += 4; /*0x10139f793*/
    }
    while ( v4 != v10 ); /*0x10139f79a*/
    v14 = _mm_add_epi64(v13, v9); /*0x10139f79c*/
    result = _mm_add_epi64(_mm_shuffle_epi32(v14, 238), v14).u64[0]; /*0x10139f7a9*/
    goto LABEL_46; /*0x10139f7ae*/
  }
  v4 = 0; /*0x10139f6fc*/
  result = 0; /*0x10139f6fe*/
  do /*0x10139fc60*/
  {
    result += *(_BYTE *)(a1 + v4++) >= 0xC0; /*0x10139fc6b*/
LABEL_46:
    ; /*0x10139fc5d*/
  }
  while ( a2 != v4 ); /*0x10139fc60*/
  return result; /*0x10139fc73*/
}