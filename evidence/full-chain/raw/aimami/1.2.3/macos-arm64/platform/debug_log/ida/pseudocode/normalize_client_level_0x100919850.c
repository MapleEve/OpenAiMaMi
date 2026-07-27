// __ZN13codexmate_lib8platform9debug_log22normalize_client_level @ 0x100919850 | 基线 same-set
char *__fastcall codexmate_lib::platform::debug_log::normalize_client_level::h5dd68a1393a471b9(void *__src, size_t __n)
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

  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100919861*/
  {
    v2 = 0; /*0x100919863*/
    goto LABEL_3; /*0x100919863*/
  }
  if ( __n ) /*0x100919874*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __n); /*0x100919876*/
    v2 = 1; /*0x10091987b*/
    v3 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100919889*/
    if ( !v3 ) /*0x100919891*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v2, __n); /*0x100919866*/
    v4 = v3; /*0x100919893*/
    memcpy(v3, __src, __n); /*0x10091989f*/
    if ( __n < 8 ) /*0x1009198a8*/
    {
      v5 = 0; /*0x1009198aa*/
      goto LABEL_18; /*0x1009198ac*/
    }
    if ( __n >= 0x20 ) /*0x1009198e1*/
    {
      v5 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x1009198ed*/
      v7 = 0; /*0x1009198f0*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1009198f2*/
      v9 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1009198fa*/
      v10 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100919902*/
      do /*0x100919969*/
      {
        v11 = _mm_loadu_si128((const __m128i *)&v4[v7]); /*0x100919910*/
        v12 = _mm_loadu_si128((const __m128i *)&v4[v7 + 16]); /*0x100919916*/
        v13 = _mm_add_epi8(v11, si128); /*0x100919921*/
        v14 = _mm_add_epi8(v12, si128); /*0x100919929*/
        *(__m128i *)&v4[v7] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v9), v13), v10), v11); /*0x100919955*/
        *(__m128i *)&v4[v7 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v9), v14), v10), v12); /*0x10091995b*/
        v7 += 32; /*0x100919962*/
      }
      while ( v5 != v7 ); /*0x100919969*/
      if ( __n == v5 ) /*0x10091996e*/
        goto LABEL_20; /*0x10091996e*/
      if ( (__n & 0x18) == 0 ) /*0x100919977*/
      {
        do /*0x1009199f0*/
        {
LABEL_18:
          v4[v5] |= 32 * ((unsigned __int8)(v4[v5] - 65) < 0x1Au); /*0x1009199d3*/
          ++v5; /*0x1009199ea*/
LABEL_19:
          ; /*0x1009199ed*/
        }
        while ( __n != v5 ); /*0x1009199f0*/
LABEL_20:
        if ( __n == 4 ) /*0x1009199fc*/
        {
          v24 = *(_DWORD *)v4 == 1852989815; /*0x100919a73*/
        }
        else
        {
          if ( __n != 7 ) /*0x100919a02*/
          {
            if ( __n == 5 ) /*0x100919a08*/
            {
              v6 = "infoEnum"; /*0x100919a2e*/
              if ( !(*(_DWORD *)v4 ^ 0x6F727265 | (unsigned __int8)v4[4] ^ 0x72) ) /*0x100919a21*/
                v6 = (char *)&unk_101676EC8; /*0x100919a35*/
            }
            else
            {
              v6 = "infoEnum"; /*0x100919a8e*/
            }
LABEL_35:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, __n, 1); /*0x100919a95*/
            return v6; /*0x100919aa0*/
          }
          v21 = _byteswap_ulong(*(_DWORD *)v4); /*0x100919a42*/
          v22 = 2002874990; /*0x100919a44*/
          if ( v21 != 2002874990 /*0x100919a62*/
            || (v21 = _byteswap_ulong(*(_DWORD *)(v4 + 3)), v22 = 1852403303, v23 = 0, v21 != 1852403303) )
          {
            v23 = 2 * (v21 >= v22) - 1; /*0x100919a6b*/
          }
          v24 = v23 == 0; /*0x100919a6f*/
        }
        v6 = "infoEnum"; /*0x100919a81*/
        if ( v24 ) /*0x100919a88*/
          v6 = "warninfoEnum"; /*0x100919a88*/
        goto LABEL_35; /*0x100919a88*/
      }
    }
    else
    {
      v5 = 0; /*0x1009198e3*/
    }
    v15 = v5; /*0x100919979*/
    v5 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x100919983*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100919986*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10091998e*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100919996*/
    do /*0x1009199cf*/
    {
      v19 = _mm_loadl_epi64((const __m128i *)&v4[v15]); /*0x1009199a0*/
      v20 = _mm_add_epi8(v19, v16); /*0x1009199aa*/
      *(_QWORD *)&v4[v15] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v20, v17), v20), v18), v19).u64[0]; /*0x1009199c2*/
      v15 += 8LL; /*0x1009199c8*/
    }
    while ( v5 != v15 ); /*0x1009199cf*/
    goto LABEL_19; /*0x1009199cf*/
  }
  return "infoEnum"; /*0x100919aab*/
}