// mac 1.2.2 NEW write_client_debug_log 0x1008ca1a0 d=2
char *__fastcall codexmate_lib::platform::debug_log::normalize_client_level::h7a56d855b54f3d79(void *__src, size_t __n)
{
  __int64 v2; // r12
  char *v3; // rax
  char *v4; // r14
  size_t v5; // rax
  char *v6; // r12
  __int64 v7; // rdx
  __m128i si128; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm6
  size_t v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  unsigned __int32 v21; // eax
  unsigned int v22; // ecx
  int v23; // edx
  bool v24; // zf

  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008ca1b1*/
  {
    v2 = 0; /*0x1008ca1b3*/
    goto LABEL_3; /*0x1008ca1b3*/
  }
  if ( __n ) /*0x1008ca1c4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008ca1c6*/
    v2 = 1; /*0x1008ca1cb*/
    v3 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x1008ca1d9*/
    if ( !v3 ) /*0x1008ca1e1*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v2, __n); /*0x1008ca1b6*/
    v4 = v3; /*0x1008ca1e3*/
    memcpy(v3, __src, __n); /*0x1008ca1ef*/
    if ( __n < 8 ) /*0x1008ca1f8*/
    {
      v5 = 0; /*0x1008ca1fa*/
      goto LABEL_18; /*0x1008ca1fc*/
    }
    if ( __n >= 0x20 ) /*0x1008ca231*/
    {
      v5 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x1008ca23d*/
      v7 = 0; /*0x1008ca240*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_101513710); /*0x1008ca242*/
      v9 = _mm_load_si128((const __m128i *)&xmmword_101513720); /*0x1008ca24a*/
      v10 = _mm_load_si128((const __m128i *)&xmmword_101513730); /*0x1008ca252*/
      do /*0x1008ca2b9*/
      {
        v11 = _mm_loadu_si128((const __m128i *)&v4[v7]); /*0x1008ca260*/
        v12 = _mm_loadu_si128((const __m128i *)&v4[v7 + 16]); /*0x1008ca266*/
        v13 = _mm_add_epi8(v11, si128); /*0x1008ca271*/
        v14 = _mm_add_epi8(v12, si128); /*0x1008ca279*/
        *(__m128i *)&v4[v7] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v9), v13), v10), v11); /*0x1008ca2a5*/
        *(__m128i *)&v4[v7 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v9), v14), v10), v12); /*0x1008ca2ab*/
        v7 += 32; /*0x1008ca2b2*/
      }
      while ( v5 != v7 ); /*0x1008ca2b9*/
      if ( __n == v5 ) /*0x1008ca2be*/
        goto LABEL_20; /*0x1008ca2be*/
      if ( (__n & 0x18) == 0 ) /*0x1008ca2c7*/
      {
        do /*0x1008ca340*/
        {
LABEL_18:
          v4[v5] |= 32 * ((unsigned __int8)(v4[v5] - 65) < 0x1Au); /*0x1008ca323*/
          ++v5; /*0x1008ca33a*/
LABEL_19:
          ; /*0x1008ca33d*/
        }
        while ( __n != v5 ); /*0x1008ca340*/
LABEL_20:
        if ( __n == 4 ) /*0x1008ca34c*/
        {
          v24 = *(_DWORD *)v4 == 1852989815; /*0x1008ca3c3*/
        }
        else
        {
          if ( __n != 7 ) /*0x1008ca352*/
          {
            if ( __n == 5 ) /*0x1008ca358*/
            {
              v6 = "infoline"; /*0x1008ca37e*/
              if ( !(*(_DWORD *)v4 ^ 0x6F727265 | (unsigned __int8)v4[4] ^ 0x72) ) /*0x1008ca371*/
                v6 = "error"; /*0x1008ca385*/
            }
            else
            {
              v6 = "infoline"; /*0x1008ca3de*/
            }
LABEL_35:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008ca3e5*/
            return v6; /*0x1008ca3f0*/
          }
          v21 = _byteswap_ulong(*(_DWORD *)v4); /*0x1008ca392*/
          v22 = 2002874990; /*0x1008ca394*/
          if ( v21 != 2002874990 /*0x1008ca3b2*/
            || (v21 = _byteswap_ulong(*(_DWORD *)(v4 + 3)), v22 = 1852403303, v23 = 0, v21 != 1852403303) )
          {
            v23 = 2 * (v21 >= v22) - 1; /*0x1008ca3bb*/
          }
          v24 = v23 == 0; /*0x1008ca3bf*/
        }
        v6 = "infoline"; /*0x1008ca3d1*/
        if ( v24 ) /*0x1008ca3d8*/
          v6 = "warninfoline"; /*0x1008ca3d8*/
        goto LABEL_35; /*0x1008ca3d8*/
      }
    }
    else
    {
      v5 = 0; /*0x1008ca233*/
    }
    v15 = v5; /*0x1008ca2c9*/
    v5 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x1008ca2d3*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_101513740); /*0x1008ca2d6*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_101513750); /*0x1008ca2de*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_101513760); /*0x1008ca2e6*/
    do /*0x1008ca31f*/
    {
      v19 = _mm_loadl_epi64((const __m128i *)&v4[v15]); /*0x1008ca2f0*/
      v20 = _mm_add_epi8(v19, v16); /*0x1008ca2fa*/
      *(_QWORD *)&v4[v15] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v20, v17), v20), v18), v19).u64[0]; /*0x1008ca312*/
      v15 += 8LL; /*0x1008ca318*/
    }
    while ( v5 != v15 ); /*0x1008ca31f*/
    goto LABEL_19; /*0x1008ca31f*/
  }
  return "infoline"; /*0x1008ca3fb*/
}