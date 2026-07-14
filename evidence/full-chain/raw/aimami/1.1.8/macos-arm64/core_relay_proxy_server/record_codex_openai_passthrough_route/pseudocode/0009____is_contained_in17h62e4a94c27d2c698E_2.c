// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_openai_passthrough_route node 0x1005f4830 depth=1
__int64 __fastcall _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
        unsigned __int8 *__s2,
        size_t __n,
        char *__s1,
        unsigned __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  char *v6; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  unsigned __int8 v14; // cl
  __int64 v15; // rsi
  size_t v16; // rdx
  size_t v17; // rdi
  __m128i v18; // xmm3
  size_t v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r13
  __m128i v22; // xmm8
  __m128i v23; // xmm6
  __m128i v24; // xmm4
  __m128i v25; // xmm9
  __m128i v26; // xmm7
  __m128i v27; // xmm5
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  char v34; // al
  char v35; // al
  char v36; // al
  unsigned __int64 v37; // rax
  size_t v38; // r15
  char *v39; // rcx
  __int64 v40; // rdx
  char *v41; // r12
  unsigned int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v46[3]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v47[13]; // [rsp+18h] [rbp-148h] BYREF
  __m128i v48; // [rsp+80h] [rbp-E0h] BYREF
  __m128i v49; // [rsp+90h] [rbp-D0h] BYREF
  size_t v50; // [rsp+A8h] [rbp-B8h]
  __m128i v51; // [rsp+B0h] [rbp-B0h] BYREF
  __m128i v52; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-88h]
  __m128i v54; // [rsp+E0h] [rbp-80h] BYREF
  __m128i v55; // [rsp+F0h] [rbp-70h] BYREF
  __m128i v56; // [rsp+100h] [rbp-60h] BYREF
  __m128i v57; // [rsp+110h] [rbp-50h] BYREF
  size_t v58; // [rsp+128h] [rbp-38h]
  __int64 v59; // [rsp+130h] [rbp-30h]

  LOBYTE(v4) = 1; /*0x1005f4844*/
  if ( !__n ) /*0x1005f484a*/
  {
LABEL_27:
    LOBYTE(v4) = 1; /*0x1005f4975*/
    return v4; /*0x1005f4978*/
  }
  v5 = a4; /*0x1005f4850*/
  v6 = __s1; /*0x1005f4853*/
  if ( __n >= a4 ) /*0x1005f485f*/
  {
    if ( __n == a4 ) /*0x1005f4894*/
      LOBYTE(v4) = memcmp(__s2, __s1, __n) == 0; /*0x1005f48a6*/
    else
      return 0; /*0x1005f48af*/
    return v4; /*0x1005f48aa*/
  }
  if ( __n == 1 ) /*0x1005f4865*/
  {
    v9 = *__s2; /*0x1005f4867*/
    if ( a4 > 0xF ) /*0x1005f4870*/
    {
      LOBYTE(v4) = core::slice::memchr::memchr_aligned::hda948616f04379f9(v9, (__int64)__s1, a4) == 1; /*0x1005f4903*/
    }
    else
    {
      v10 = 0; /*0x1005f4872*/
      while ( __s1[v10] != v9 ) /*0x1005f4884*/
      {
        if ( v5 == ++v10 ) /*0x1005f4890*/
          return 0; /*0x1005f4890*/
      }
    }
    return v4; /*0x1005f4884*/
  }
  if ( __n >= 0x21 ) /*0x1005f48bb*/
  {
LABEL_28:
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2((__int64)v47, (__int64)v6, v5, __s2, __n); /*0x1005f497d*/
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1005f49a2*/
      v46,
      (__int64)v47);
    return LOBYTE(v46[0]); /*0x1005f49af*/
  }
  v11 = *__s2; /*0x1005f48c1*/
  if ( __n != 2 ) /*0x1005f48ca*/
  {
    v16 = 0; /*0x1005f490c*/
    if ( __n >= 4 ) /*0x1005f4915*/
      v16 = __n - 4; /*0x1005f4915*/
    v17 = __n; /*0x1005f4919*/
    while ( v16 < v17 ) /*0x1005f4923*/
    {
      v15 = v17 - 1; /*0x1005f4925*/
      if ( v17 - 1 >= __n ) /*0x1005f492c*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v17 - 1, __n, (__int64)&off_101534730); /*0x1005f4d58*/
      v14 = __s2[--v17]; /*0x1005f4932*/
      if ( v14 != v11 ) /*0x1005f493d*/
      {
        if ( v5 >= __n + 15 ) /*0x1005f4946*/
        {
          v12 = 0; /*0x1005f49bb*/
          v13 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v11), (__m128i)0LL); /*0x1005f49bf*/
          goto LABEL_30; /*0x1005f49bf*/
        }
LABEL_24:
        while ( memcmp(v6, __s2, __n) ) /*0x1005f4960*/
        {
          ++v6; /*0x1005f4962*/
          --v5; /*0x1005f4965*/
          v4 = 0; /*0x1005f4968*/
          if ( __n > v5 ) /*0x1005f496e*/
            return v4; /*0x1005f496e*/
        }
        goto LABEL_27; /*0x1005f4960*/
      }
    }
    goto LABEL_28; /*0x1005f4923*/
  }
  if ( a4 < 0x11 ) /*0x1005f48d0*/
    goto LABEL_24; /*0x1005f48d0*/
  v12 = 0; /*0x1005f48d9*/
  v13 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v11), (__m128i)0LL); /*0x1005f48dd*/
  v14 = __s2[1]; /*0x1005f48e2*/
  v15 = 1; /*0x1005f48e7*/
LABEL_30:
  v18 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v14), v12); /*0x1005f49c4*/
  v47[0] = v6; /*0x1005f49d7*/
  v47[1] = v5; /*0x1005f49de*/
  v47[2] = __s2 + 1; /*0x1005f49e5*/
  v50 = __n - 1; /*0x1005f49ec*/
  v47[3] = __n - 1; /*0x1005f49f3*/
  v54 = v13; /*0x1005f4a01*/
  v55 = v18; /*0x1005f4a06*/
  v53 = v15; /*0x1005f4a0b*/
  if ( __n + 63 < v5 ) /*0x1005f4a12*/
  {
    v19 = __n + 127; /*0x1005f4a18*/
    v20 = (__int64)&v6[v15 + 48]; /*0x1005f4a1c*/
    v21 = 0; /*0x1005f4a21*/
    v58 = __n + 127; /*0x1005f4a24*/
    v59 = v20; /*0x1005f4a28*/
    while ( 1 ) /*0x1005f4a36*/
    {
      v22 = _mm_loadu_si128((const __m128i *)&v6[v21 + 16]); /*0x1005f4a36*/
      v23 = _mm_loadu_si128((const __m128i *)&v6[v21 + 32]); /*0x1005f4a3d*/
      v24 = _mm_loadu_si128((const __m128i *)&v6[v21 + 48]); /*0x1005f4a44*/
      v25 = _mm_loadu_si128((const __m128i *)(v20 + v21 - 32)); /*0x1005f4a56*/
      v26 = _mm_loadu_si128((const __m128i *)(v20 + v21 - 16)); /*0x1005f4a5d*/
      v27 = _mm_loadu_si128((const __m128i *)(v20 + v21)); /*0x1005f4a64*/
      v28 = (unsigned int)_mm_movemask_epi8( /*0x1005f4a72*/
                            _mm_and_si128(
                              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v20 + v21 - 48)), v18),
                              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v21]), v13)));
      if ( (_DWORD)v28 ) /*0x1005f4a78*/
      {
        v56 = v24; /*0x1005f4af7*/
        v57 = v27; /*0x1005f4afc*/
        v51 = v23; /*0x1005f4b01*/
        v52 = v26; /*0x1005f4b09*/
        v48 = v22; /*0x1005f4b11*/
        v49 = v25; /*0x1005f4b1a*/
        v33 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f(v47, v21, v28, 0); /*0x1005f4b23*/
        v25 = _mm_load_si128(&v49); /*0x1005f4b28*/
        v22 = _mm_load_si128(&v48); /*0x1005f4b31*/
        v26 = _mm_load_si128(&v52); /*0x1005f4b3a*/
        v23 = _mm_load_si128(&v51); /*0x1005f4b42*/
        v27 = _mm_load_si128(&v57); /*0x1005f4b4a*/
        v24 = _mm_load_si128(&v56); /*0x1005f4b4f*/
        v20 = v59; /*0x1005f4b54*/
        v19 = v58; /*0x1005f4b58*/
        v18 = _mm_load_si128(&v55); /*0x1005f4b5c*/
        v13 = _mm_load_si128(&v54); /*0x1005f4b61*/
        v4 = v33; /*0x1005f4b66*/
      }
      else
      {
        v4 = 0; /*0x1005f4a7a*/
      }
      v29 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v25, v18), _mm_cmpeq_epi8(v22, v13))); /*0x1005f4a8c*/
      if ( (_WORD)v29 ) /*0x1005f4a94*/
      {
        v4 = (unsigned __int8)v4; /*0x1005f4b72*/
        v56 = v24; /*0x1005f4b80*/
        v57 = v27; /*0x1005f4b85*/
        v51 = v23; /*0x1005f4b8a*/
        v52 = v26; /*0x1005f4b92*/
        v34 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1005f4b9a*/
                v47,
                v21 + 16,
                v29,
                (unsigned __int8)v4);
        v26 = _mm_load_si128(&v52); /*0x1005f4b9f*/
        v23 = _mm_load_si128(&v51); /*0x1005f4ba7*/
        v27 = _mm_load_si128(&v57); /*0x1005f4baf*/
        v24 = _mm_load_si128(&v56); /*0x1005f4bb4*/
        v20 = v59; /*0x1005f4bb9*/
        v19 = v58; /*0x1005f4bbd*/
        v18 = _mm_load_si128(&v55); /*0x1005f4bc1*/
        v13 = _mm_load_si128(&v54); /*0x1005f4bc6*/
        LOBYTE(v4) = v34 | v4; /*0x1005f4bcb*/
      }
      v30 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v26, v18), _mm_cmpeq_epi8(v23, v13))); /*0x1005f4aa6*/
      if ( (_WORD)v30 ) /*0x1005f4aad*/
      {
        v4 = (unsigned __int8)v4; /*0x1005f4bd7*/
        v56 = v24; /*0x1005f4be5*/
        v57 = v27; /*0x1005f4bea*/
        v35 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1005f4bef*/
                v47,
                v21 + 32,
                v30,
                (unsigned __int8)v4);
        v27 = _mm_load_si128(&v57); /*0x1005f4bf4*/
        v24 = _mm_load_si128(&v56); /*0x1005f4bf9*/
        v20 = v59; /*0x1005f4bfe*/
        v19 = v58; /*0x1005f4c02*/
        v18 = _mm_load_si128(&v55); /*0x1005f4c06*/
        v13 = _mm_load_si128(&v54); /*0x1005f4c0b*/
        LOBYTE(v4) = v35 | v4; /*0x1005f4c10*/
      }
      v31 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v27, v18), _mm_cmpeq_epi8(v24, v13))); /*0x1005f4abf*/
      if ( (_WORD)v31 ) /*0x1005f4ac6*/
      {
        v4 = (unsigned __int8)v4; /*0x1005f4c1c*/
        v36 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1005f4c2a*/
                v47,
                v21 + 48,
                v31,
                (unsigned __int8)v4);
        v20 = v59; /*0x1005f4c2f*/
        v19 = v58; /*0x1005f4c33*/
        v18 = _mm_load_si128(&v55); /*0x1005f4c37*/
        v13 = _mm_load_si128(&v54); /*0x1005f4c3c*/
        LOBYTE(v4) = v36 | v4; /*0x1005f4c41*/
        v37 = v58 + v21; /*0x1005f4c44*/
        v21 += 64; /*0x1005f4c48*/
        if ( v37 >= v5 ) /*0x1005f4c4f*/
          goto LABEL_46; /*0x1005f4c4f*/
      }
      else
      {
        v32 = v19 + v21; /*0x1005f4acc*/
        v21 += 64; /*0x1005f4ad0*/
        if ( v32 >= v5 ) /*0x1005f4ad7*/
          goto LABEL_46; /*0x1005f4ad7*/
      }
      if ( (_BYTE)v4 ) /*0x1005f4ae0*/
        goto LABEL_46; /*0x1005f4ae0*/
    }
  }
  v21 = 0; /*0x1005f4c57*/
  v4 = 0; /*0x1005f4c5a*/
LABEL_46:
  if ( __n + v21 + 15 < v5 && !(_BYTE)v4 ) /*0x1005f4c6e*/
  {
    v38 = __n + 31; /*0x1005f4c70*/
    v39 = &v6[v53]; /*0x1005f4c7b*/
    do /*0x1005f4c98*/
    {
      v40 = (unsigned int)_mm_movemask_epi8( /*0x1005f4c98*/
                            _mm_and_si128(
                              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v39[v21]), v18),
                              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v21]), v13)));
      if ( (_DWORD)v40 ) /*0x1005f4c9e*/
      {
        v41 = v39; /*0x1005f4cc1*/
        v42 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f(v47, v21, v40, 0); /*0x1005f4cc6*/
        v39 = v41; /*0x1005f4ccb*/
        v18 = _mm_load_si128(&v55); /*0x1005f4cce*/
        v13 = _mm_load_si128(&v54); /*0x1005f4cd3*/
        v4 = v42; /*0x1005f4cd8*/
        if ( v38 + v21 >= v5 ) /*0x1005f4ce2*/
          break; /*0x1005f4ce2*/
      }
      else
      {
        v4 = 0; /*0x1005f4ca0*/
        if ( v38 + v21 >= v5 ) /*0x1005f4caa*/
          break; /*0x1005f4caa*/
      }
      v21 += 16; /*0x1005f4cac*/
    }
    while ( !(_BYTE)v4 ); /*0x1005f4c98*/
  }
  v43 = v5 - v50; /*0x1005f4ce4*/
  v44 = (unsigned int)_mm_movemask_epi8( /*0x1005f4d0f*/
                        _mm_and_si128(
                          _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v43 - 16 + v53]), v18),
                          _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v43 - 16]), v13)));
  if ( (_DWORD)v44 ) /*0x1005f4d15*/
  {
    v4 = (unsigned __int8)v4; /*0x1005f4d30*/
    LOBYTE(v4) = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1005f4d46*/
                   v47,
                   v43 - 16,
                   v44,
                   (unsigned __int8)v4)
               | v4;
  }
  return v4; /*0x1005f4d1a*/
}