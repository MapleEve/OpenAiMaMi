// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x10045f8b0 d=1
__int64 __fastcall _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
        unsigned __int8 *__s1,
        size_t __n,
        char *__s2,
        size_t a4)
{
  unsigned int v4; // r13d
  char *v5; // r14
  size_t v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  size_t v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r12
  __m128i v19; // xmm8
  __m128i v20; // xmm6
  __m128i v21; // xmm4
  __m128i v22; // xmm9
  __m128i v23; // xmm7
  __m128i v24; // xmm5
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  size_t v29; // rax
  unsigned int v30; // eax
  char v31; // al
  char v32; // al
  char v33; // al
  size_t v34; // rax
  char *v35; // r15
  __int64 v36; // rdx
  unsigned int v37; // eax
  size_t v38; // rbx
  __int64 v39; // rdx
  char v41[24]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD v42[13]; // [rsp+18h] [rbp-138h] BYREF
  __m128i v43; // [rsp+80h] [rbp-D0h] BYREF
  __m128i v44; // [rsp+90h] [rbp-C0h] BYREF
  size_t v45; // [rsp+A0h] [rbp-B0h]
  size_t v46; // [rsp+A8h] [rbp-A8h]
  __m128i v47; // [rsp+B0h] [rbp-A0h] BYREF
  __m128i v48; // [rsp+C0h] [rbp-90h] BYREF
  size_t v49; // [rsp+D0h] [rbp-80h]
  __int64 v50; // [rsp+D8h] [rbp-78h]
  __m128i v51; // [rsp+E0h] [rbp-70h] BYREF
  __m128i v52; // [rsp+F0h] [rbp-60h] BYREF
  __m128i v53; // [rsp+100h] [rbp-50h] BYREF
  __m128i v54; // [rsp+110h] [rbp-40h] BYREF
  size_t v55; // [rsp+120h] [rbp-30h]

  v5 = __s2; /*0x10045f8c4*/
  if ( __n >= a4 ) /*0x10045f8d0*/
  {
    if ( __n == a4 ) /*0x10045f953*/
      LOBYTE(v4) = memcmp(__s1, __s2, __n) == 0; /*0x10045f965*/
    else
      return 0; /*0x10045f96e*/
  }
  else
  {
    v7 = a4; /*0x10045f8d6*/
    v8 = *__s1; /*0x10045f8d9*/
    v9 = 1; /*0x10045f8e2*/
    if ( __n == 2 ) /*0x10045f8eb*/
    {
LABEL_10:
      if ( v7 >= __n + 15 ) /*0x10045f92d*/
      {
        v46 = __n + 15; /*0x10045f976*/
        v14 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v8), (__m128i)0LL); /*0x10045f988*/
        v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(__s1[v9]), (__m128i)0LL); /*0x10045f996*/
        v42[0] = v5; /*0x10045f99e*/
        v42[1] = v7; /*0x10045f9a5*/
        v42[2] = __s1 + 1; /*0x10045f9ac*/
        v45 = __n - 1; /*0x10045f9b3*/
        v42[3] = __n - 1; /*0x10045f9ba*/
        v51 = v14; /*0x10045f9c8*/
        v52 = v15; /*0x10045f9cd*/
        v49 = __n; /*0x10045f9d2*/
        v50 = v9; /*0x10045f9d6*/
        if ( __n + 63 < v7 ) /*0x10045f9da*/
        {
          v16 = __n + 127; /*0x10045f9e0*/
          v17 = (__int64)&v5[v9 + 48]; /*0x10045f9e4*/
          v18 = 0; /*0x10045f9e9*/
          v55 = __n + 127; /*0x10045f9ec*/
          while ( 1 ) /*0x10045f9f6*/
          {
            v19 = _mm_loadu_si128((const __m128i *)&v5[v18 + 16]); /*0x10045f9f6*/
            v20 = _mm_loadu_si128((const __m128i *)&v5[v18 + 32]); /*0x10045f9fd*/
            v21 = _mm_loadu_si128((const __m128i *)&v5[v18 + 48]); /*0x10045fa04*/
            v22 = _mm_loadu_si128((const __m128i *)(v17 + v18 - 32)); /*0x10045fa16*/
            v23 = _mm_loadu_si128((const __m128i *)(v17 + v18 - 16)); /*0x10045fa1d*/
            v24 = _mm_loadu_si128((const __m128i *)(v17 + v18)); /*0x10045fa24*/
            v25 = (unsigned int)_mm_movemask_epi8( /*0x10045fa32*/
                                  _mm_and_si128(
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v17 + v18 - 48)), v15),
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v5[v18]), v14)));
            if ( (_DWORD)v25 ) /*0x10045fa38*/
            {
              v53 = v21; /*0x10045fab7*/
              v54 = v24; /*0x10045fabc*/
              v47 = v20; /*0x10045fac1*/
              v48 = v23; /*0x10045fac9*/
              v43 = v19; /*0x10045fad1*/
              v44 = v22; /*0x10045fada*/
              v30 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1(v42, v18, v25, 0); /*0x10045fae3*/
              v22 = _mm_load_si128(&v44); /*0x10045fae8*/
              v19 = _mm_load_si128(&v43); /*0x10045faf1*/
              v23 = _mm_load_si128(&v48); /*0x10045fafa*/
              v20 = _mm_load_si128(&v47); /*0x10045fb02*/
              v24 = _mm_load_si128(&v54); /*0x10045fb0a*/
              v21 = _mm_load_si128(&v53); /*0x10045fb0f*/
              v16 = v55; /*0x10045fb14*/
              v15 = _mm_load_si128(&v52); /*0x10045fb18*/
              v14 = _mm_load_si128(&v51); /*0x10045fb1d*/
              v4 = v30; /*0x10045fb22*/
            }
            else
            {
              v4 = 0; /*0x10045fa3a*/
            }
            v26 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v22, v15), _mm_cmpeq_epi8(v19, v14))); /*0x10045fa4c*/
            if ( (_WORD)v26 ) /*0x10045fa54*/
            {
              v4 = (unsigned __int8)v4; /*0x10045fb2f*/
              v53 = v21; /*0x10045fb3d*/
              v54 = v24; /*0x10045fb42*/
              v47 = v20; /*0x10045fb47*/
              v48 = v23; /*0x10045fb4f*/
              v31 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1( /*0x10045fb57*/
                      v42,
                      v18 + 16,
                      v26,
                      (unsigned __int8)v4);
              v23 = _mm_load_si128(&v48); /*0x10045fb5c*/
              v20 = _mm_load_si128(&v47); /*0x10045fb64*/
              v24 = _mm_load_si128(&v54); /*0x10045fb6c*/
              v21 = _mm_load_si128(&v53); /*0x10045fb71*/
              v16 = v55; /*0x10045fb76*/
              v15 = _mm_load_si128(&v52); /*0x10045fb7a*/
              v14 = _mm_load_si128(&v51); /*0x10045fb7f*/
              LOBYTE(v4) = v31 | v4; /*0x10045fb84*/
            }
            v27 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v23, v15), _mm_cmpeq_epi8(v20, v14))); /*0x10045fa66*/
            if ( (_WORD)v27 ) /*0x10045fa6d*/
            {
              v4 = (unsigned __int8)v4; /*0x10045fb91*/
              v53 = v21; /*0x10045fb9f*/
              v54 = v24; /*0x10045fba4*/
              v32 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1( /*0x10045fba9*/
                      v42,
                      v18 + 32,
                      v27,
                      (unsigned __int8)v4);
              v24 = _mm_load_si128(&v54); /*0x10045fbae*/
              v21 = _mm_load_si128(&v53); /*0x10045fbb3*/
              v16 = v55; /*0x10045fbb8*/
              v15 = _mm_load_si128(&v52); /*0x10045fbbc*/
              v14 = _mm_load_si128(&v51); /*0x10045fbc1*/
              LOBYTE(v4) = v32 | v4; /*0x10045fbc6*/
            }
            v28 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v24, v15), _mm_cmpeq_epi8(v21, v14))); /*0x10045fa7f*/
            if ( (_WORD)v28 ) /*0x10045fa86*/
            {
              v4 = (unsigned __int8)v4; /*0x10045fbd3*/
              v33 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1( /*0x10045fbe1*/
                      v42,
                      v18 + 48,
                      v28,
                      (unsigned __int8)v4);
              v16 = v55; /*0x10045fbe6*/
              v15 = _mm_load_si128(&v52); /*0x10045fbea*/
              v14 = _mm_load_si128(&v51); /*0x10045fbef*/
              LOBYTE(v4) = v33 | v4; /*0x10045fbf4*/
              v34 = v55 + v18; /*0x10045fbf7*/
              v18 += 64; /*0x10045fbfb*/
              if ( v34 >= v7 ) /*0x10045fc02*/
                goto LABEL_35; /*0x10045fc02*/
            }
            else
            {
              v29 = v16 + v18; /*0x10045fa8c*/
              v18 += 64; /*0x10045fa90*/
              if ( v29 >= v7 ) /*0x10045fa97*/
                goto LABEL_35; /*0x10045fa97*/
            }
            if ( (_BYTE)v4 ) /*0x10045faa0*/
              goto LABEL_35; /*0x10045faa0*/
          }
        }
        v18 = 0; /*0x10045fc49*/
        v4 = 0; /*0x10045fc4c*/
LABEL_35:
        if ( v18 + v46 < v7 && !(_BYTE)v4 ) /*0x10045fc65*/
        {
          v49 += 31LL; /*0x10045fc67*/
          v35 = &v5[v50]; /*0x10045fc70*/
          do /*0x10045fc98*/
          {
            v36 = (unsigned int)_mm_movemask_epi8( /*0x10045fc98*/
                                  _mm_and_si128(
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v35[v18]), v15),
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v5[v18]), v14)));
            if ( (_DWORD)v36 ) /*0x10045fc9e*/
            {
              v37 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1(v42, v18, v36, 0); /*0x10045fcc6*/
              v15 = _mm_load_si128(&v52); /*0x10045fccb*/
              v14 = _mm_load_si128(&v51); /*0x10045fcd0*/
              v4 = v37; /*0x10045fcd5*/
              if ( v18 + v49 >= v7 ) /*0x10045fce2*/
                break; /*0x10045fce2*/
            }
            else
            {
              v4 = 0; /*0x10045fca0*/
              if ( v18 + v49 >= v7 ) /*0x10045fcad*/
                break; /*0x10045fcad*/
            }
            v18 += 16; /*0x10045fcaf*/
          }
          while ( !(_BYTE)v4 ); /*0x10045fc98*/
        }
        v38 = v7 - v45; /*0x10045fce4*/
        v39 = (unsigned int)_mm_movemask_epi8( /*0x10045fd0c*/
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v5[v38 - 16 + v50]), v15),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&v5[v38 - 16]), v14)));
        if ( (_DWORD)v39 ) /*0x10045fd12*/
        {
          v4 = (unsigned __int8)v4; /*0x10045fd2d*/
          LOBYTE(v4) = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h4ab4e6b4ec2f4eb1( /*0x10045fd43*/
                         v42,
                         v38 - 16,
                         v39,
                         (unsigned __int8)v4)
                     | v4;
        }
      }
      else
      {
        while ( memcmp(v5, __s1, __n) ) /*0x10045f940*/
        {
          ++v5; /*0x10045f946*/
          if ( __n > --v7 ) /*0x10045f94f*/
            return 0; /*0x10045f94f*/
        }
        LOBYTE(v4) = 1; /*0x10045fc41*/
      }
    }
    else
    {
      v10 = 0; /*0x10045f8ed*/
      if ( __n >= 4 ) /*0x10045f8f6*/
        v10 = __n - 4; /*0x10045f8f6*/
      v11 = __n - 1; /*0x10045f8fa*/
      while ( v10 < v11 + 1 ) /*0x10045f907*/
      {
        if ( v11 >= __n ) /*0x10045f910*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v11, __n, (__int64)&off_10188D8E8); /*0x10045fd52*/
        v12 = v11 - 1; /*0x10045f916*/
        if ( __s1[v11--] != v8 ) /*0x10045f91a*/
        {
          v9 = v12 + 1; /*0x10045f923*/
          goto LABEL_10; /*0x10045f923*/
        }
      }
      core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v42, v5, v7, __s1, __n); /*0x10045fc20*/
      _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10045fc2f*/
        v41,
        v42);
      return (unsigned __int8)v41[0]; /*0x10045fc34*/
    }
  }
  return v4; /*0x10045fd17*/
}