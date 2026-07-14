// mac 1.1.8 force_kill_codex node va=0x1001cc470 depth=3
// _::is_contained_in
__int64 __fastcall _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
        char *__s2,
        size_t __n,
        char *__s1,
        size_t a4)
{
  unsigned int v4; // r12d
  size_t v5; // rbx
  char *v6; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  size_t v13; // rcx
  size_t v14; // rdi
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  size_t v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r13
  __m128i v21; // xmm8
  __m128i v22; // xmm6
  __m128i v23; // xmm4
  __m128i v24; // xmm9
  __m128i v25; // xmm7
  __m128i v26; // xmm5
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  size_t v31; // rax
  unsigned int v32; // eax
  char v33; // al
  char v34; // al
  char v35; // al
  size_t v36; // rax
  size_t v37; // r15
  char *v38; // rcx
  __int64 v39; // rdx
  char *v40; // r12
  unsigned int v41; // eax
  size_t v42; // rbx
  __int64 v43; // rdx
  char v45[24]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v46[13]; // [rsp+18h] [rbp-148h] BYREF
  __m128i v47; // [rsp+80h] [rbp-E0h] BYREF
  __m128i v48; // [rsp+90h] [rbp-D0h] BYREF
  size_t v49; // [rsp+A0h] [rbp-C0h]
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

  LOBYTE(v4) = 1; /*0x1001cc484*/
  if ( !__n ) /*0x1001cc48a*/
  {
LABEL_24:
    LOBYTE(v4) = 1; /*0x1001cc585*/
    return v4; /*0x1001cc588*/
  }
  v5 = a4; /*0x1001cc490*/
  v6 = __s1; /*0x1001cc493*/
  if ( __n >= a4 ) /*0x1001cc49f*/
  {
    if ( __n == a4 ) /*0x1001cc4d4*/
      LOBYTE(v4) = memcmp(__s2, __s1, __n) == 0; /*0x1001cc4e6*/
    else
      return 0; /*0x1001cc4ef*/
  }
  else
  {
    if ( __n == 1 ) /*0x1001cc4a5*/
    {
      v9 = *__s2; /*0x1001cc4a7*/
      if ( a4 > 0xF ) /*0x1001cc4b0*/
      {
        LOBYTE(v4) = core::slice::memchr::memchr_aligned::hda948616f04379f9(v9, __s1, a4) == 1; /*0x1001cc5d6*/
      }
      else
      {
        v10 = 0; /*0x1001cc4b6*/
        while ( __s1[v10] != v9 ) /*0x1001cc4c4*/
        {
          if ( v5 == ++v10 ) /*0x1001cc4d0*/
            return 0; /*0x1001cc4d0*/
        }
      }
      return v4; /*0x1001cc4c4*/
    }
    if ( __n >= 0x21 ) /*0x1001cc4fb*/
    {
LABEL_25:
      core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v46, v6, v5, __s2, __n); /*0x1001cc58d*/
      _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1001cc5b2*/
        v45,
        v46);
      return (unsigned __int8)v45[0]; /*0x1001cc5bf*/
    }
    v11 = *__s2; /*0x1001cc501*/
    v12 = 1; /*0x1001cc506*/
    if ( __n != 2 ) /*0x1001cc50f*/
    {
      v13 = 0; /*0x1001cc511*/
      if ( __n >= 4 ) /*0x1001cc51a*/
        v13 = __n - 4; /*0x1001cc51a*/
      v14 = __n; /*0x1001cc51e*/
      while ( v13 < v14 ) /*0x1001cc533*/
      {
        v12 = v14 - 1; /*0x1001cc535*/
        if ( v14 - 1 >= __n ) /*0x1001cc53c*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v14 - 1, __n, &off_101526338); /*0x1001cc998*/
        if ( __s2[--v14] != (char)v11 ) /*0x1001cc542*/
          goto LABEL_20; /*0x1001cc54a*/
      }
      goto LABEL_25; /*0x1001cc533*/
    }
LABEL_20:
    if ( v5 < __n + 15 ) /*0x1001cc553*/
    {
      while ( memcmp(v6, __s2, __n) ) /*0x1001cc570*/
      {
        ++v6; /*0x1001cc572*/
        --v5; /*0x1001cc575*/
        v4 = 0; /*0x1001cc578*/
        if ( __n > v5 ) /*0x1001cc57e*/
          return v4; /*0x1001cc57e*/
      }
      goto LABEL_24; /*0x1001cc570*/
    }
    v50 = __n + 15; /*0x1001cc5df*/
    v16 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v11), (__m128i)0LL); /*0x1001cc5f5*/
    v17 = _mm_shuffle_epi8(_mm_cvtsi32_si128((unsigned __int8)__s2[v12]), (__m128i)0LL); /*0x1001cc604*/
    v46[0] = v6; /*0x1001cc60c*/
    v46[1] = v5; /*0x1001cc613*/
    v46[2] = __s2 + 1; /*0x1001cc61a*/
    v49 = __n - 1; /*0x1001cc621*/
    v46[3] = __n - 1; /*0x1001cc628*/
    v54 = v16; /*0x1001cc636*/
    v55 = v17; /*0x1001cc63b*/
    v53 = v12; /*0x1001cc640*/
    if ( __n + 63 < v5 ) /*0x1001cc647*/
    {
      v18 = __n + 127; /*0x1001cc64d*/
      v19 = (__int64)&v6[v12 + 48]; /*0x1001cc651*/
      v20 = 0; /*0x1001cc656*/
      v58 = __n + 127; /*0x1001cc659*/
      v59 = v19; /*0x1001cc65d*/
      while ( 1 ) /*0x1001cc676*/
      {
        v21 = _mm_loadu_si128((const __m128i *)&v6[v20 + 16]); /*0x1001cc676*/
        v22 = _mm_loadu_si128((const __m128i *)&v6[v20 + 32]); /*0x1001cc67d*/
        v23 = _mm_loadu_si128((const __m128i *)&v6[v20 + 48]); /*0x1001cc684*/
        v24 = _mm_loadu_si128((const __m128i *)(v19 + v20 - 32)); /*0x1001cc696*/
        v25 = _mm_loadu_si128((const __m128i *)(v19 + v20 - 16)); /*0x1001cc69d*/
        v26 = _mm_loadu_si128((const __m128i *)(v19 + v20)); /*0x1001cc6a4*/
        v27 = (unsigned int)_mm_movemask_epi8( /*0x1001cc6b2*/
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v19 + v20 - 48)), v17),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v20]), v16)));
        if ( (_DWORD)v27 ) /*0x1001cc6b8*/
        {
          v56 = v23; /*0x1001cc737*/
          v57 = v26; /*0x1001cc73c*/
          v51 = v22; /*0x1001cc741*/
          v52 = v25; /*0x1001cc749*/
          v47 = v21; /*0x1001cc751*/
          v48 = v24; /*0x1001cc75a*/
          v32 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f(v46, v20, v27, 0); /*0x1001cc763*/
          v24 = _mm_load_si128(&v48); /*0x1001cc768*/
          v21 = _mm_load_si128(&v47); /*0x1001cc771*/
          v25 = _mm_load_si128(&v52); /*0x1001cc77a*/
          v22 = _mm_load_si128(&v51); /*0x1001cc782*/
          v26 = _mm_load_si128(&v57); /*0x1001cc78a*/
          v23 = _mm_load_si128(&v56); /*0x1001cc78f*/
          v19 = v59; /*0x1001cc794*/
          v18 = v58; /*0x1001cc798*/
          v17 = _mm_load_si128(&v55); /*0x1001cc79c*/
          v16 = _mm_load_si128(&v54); /*0x1001cc7a1*/
          v4 = v32; /*0x1001cc7a6*/
        }
        else
        {
          v4 = 0; /*0x1001cc6ba*/
        }
        v28 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v24, v17), _mm_cmpeq_epi8(v21, v16))); /*0x1001cc6cc*/
        if ( (_WORD)v28 ) /*0x1001cc6d4*/
        {
          v4 = (unsigned __int8)v4; /*0x1001cc7b2*/
          v56 = v23; /*0x1001cc7c0*/
          v57 = v26; /*0x1001cc7c5*/
          v51 = v22; /*0x1001cc7ca*/
          v52 = v25; /*0x1001cc7d2*/
          v33 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1001cc7da*/
                  v46,
                  v20 + 16,
                  v28,
                  (unsigned __int8)v4);
          v25 = _mm_load_si128(&v52); /*0x1001cc7df*/
          v22 = _mm_load_si128(&v51); /*0x1001cc7e7*/
          v26 = _mm_load_si128(&v57); /*0x1001cc7ef*/
          v23 = _mm_load_si128(&v56); /*0x1001cc7f4*/
          v19 = v59; /*0x1001cc7f9*/
          v18 = v58; /*0x1001cc7fd*/
          v17 = _mm_load_si128(&v55); /*0x1001cc801*/
          v16 = _mm_load_si128(&v54); /*0x1001cc806*/
          LOBYTE(v4) = v33 | v4; /*0x1001cc80b*/
        }
        v29 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v25, v17), _mm_cmpeq_epi8(v22, v16))); /*0x1001cc6e6*/
        if ( (_WORD)v29 ) /*0x1001cc6ed*/
        {
          v4 = (unsigned __int8)v4; /*0x1001cc817*/
          v56 = v23; /*0x1001cc825*/
          v57 = v26; /*0x1001cc82a*/
          v34 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1001cc82f*/
                  v46,
                  v20 + 32,
                  v29,
                  (unsigned __int8)v4);
          v26 = _mm_load_si128(&v57); /*0x1001cc834*/
          v23 = _mm_load_si128(&v56); /*0x1001cc839*/
          v19 = v59; /*0x1001cc83e*/
          v18 = v58; /*0x1001cc842*/
          v17 = _mm_load_si128(&v55); /*0x1001cc846*/
          v16 = _mm_load_si128(&v54); /*0x1001cc84b*/
          LOBYTE(v4) = v34 | v4; /*0x1001cc850*/
        }
        v30 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v26, v17), _mm_cmpeq_epi8(v23, v16))); /*0x1001cc6ff*/
        if ( (_WORD)v30 ) /*0x1001cc706*/
        {
          v4 = (unsigned __int8)v4; /*0x1001cc85c*/
          v35 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1001cc86a*/
                  v46,
                  v20 + 48,
                  v30,
                  (unsigned __int8)v4);
          v19 = v59; /*0x1001cc86f*/
          v18 = v58; /*0x1001cc873*/
          v17 = _mm_load_si128(&v55); /*0x1001cc877*/
          v16 = _mm_load_si128(&v54); /*0x1001cc87c*/
          LOBYTE(v4) = v35 | v4; /*0x1001cc881*/
          v36 = v58 + v20; /*0x1001cc884*/
          v20 += 64; /*0x1001cc888*/
          if ( v36 >= v5 ) /*0x1001cc88f*/
            goto LABEL_43; /*0x1001cc88f*/
        }
        else
        {
          v31 = v18 + v20; /*0x1001cc70c*/
          v20 += 64; /*0x1001cc710*/
          if ( v31 >= v5 ) /*0x1001cc717*/
            goto LABEL_43; /*0x1001cc717*/
        }
        if ( (_BYTE)v4 ) /*0x1001cc720*/
          goto LABEL_43; /*0x1001cc720*/
      }
    }
    v20 = 0; /*0x1001cc897*/
    v4 = 0; /*0x1001cc89a*/
LABEL_43:
    if ( v20 + v50 < v5 && !(_BYTE)v4 ) /*0x1001cc8af*/
    {
      v37 = __n + 31; /*0x1001cc8b1*/
      v38 = &v6[v53]; /*0x1001cc8bc*/
      do /*0x1001cc8d8*/
      {
        v39 = (unsigned int)_mm_movemask_epi8( /*0x1001cc8d8*/
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v38[v20]), v17),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v20]), v16)));
        if ( (_DWORD)v39 ) /*0x1001cc8de*/
        {
          v40 = v38; /*0x1001cc901*/
          v41 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f(v46, v20, v39, 0); /*0x1001cc906*/
          v38 = v40; /*0x1001cc90b*/
          v17 = _mm_load_si128(&v55); /*0x1001cc90e*/
          v16 = _mm_load_si128(&v54); /*0x1001cc913*/
          v4 = v41; /*0x1001cc918*/
          if ( v37 + v20 >= v5 ) /*0x1001cc922*/
            break; /*0x1001cc922*/
        }
        else
        {
          v4 = 0; /*0x1001cc8e0*/
          if ( v37 + v20 >= v5 ) /*0x1001cc8ea*/
            break; /*0x1001cc8ea*/
        }
        v20 += 16; /*0x1001cc8ec*/
      }
      while ( !(_BYTE)v4 ); /*0x1001cc8d8*/
    }
    v42 = v5 - v49; /*0x1001cc924*/
    v43 = (unsigned int)_mm_movemask_epi8( /*0x1001cc94f*/
                          _mm_and_si128(
                            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v42 - 16 + v53]), v17),
                            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v6[v42 - 16]), v16)));
    if ( (_DWORD)v43 ) /*0x1001cc955*/
    {
      v4 = (unsigned __int8)v4; /*0x1001cc970*/
      LOBYTE(v4) = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h8d95da2b25d0d18f( /*0x1001cc986*/
                     v46,
                     v42 - 16,
                     v43,
                     (unsigned __int8)v4)
                 | v4;
    }
  }
  return v4; /*0x1001cc95a*/
}