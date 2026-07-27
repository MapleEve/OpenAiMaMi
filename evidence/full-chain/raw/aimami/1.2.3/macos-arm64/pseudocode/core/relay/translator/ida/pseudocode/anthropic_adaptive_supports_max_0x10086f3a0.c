// __ZN13codexmate_lib4core5relay10translator31anthropic_adaptive_supports_max @ 0x10086f3a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_adaptive_supports_max::h6aa9d469c96f5816(
        void *__src,
        size_t __n)
{
  __int64 v2; // r12
  void *v3; // rax
  __int64 v4; // r14
  size_t v5; // rax
  __int64 v6; // rdx
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i v13; // xmm6
  size_t v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __int64 result; // rax
  unsigned int v21; // ebx

  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10086f3b1*/
  {
    v2 = 0; /*0x10086f3b3*/
    goto LABEL_3; /*0x10086f3b3*/
  }
  if ( !__n ) /*0x10086f3c4*/
  {
    v4 = 1; /*0x10086f401*/
    goto LABEL_20; /*0x10086f417*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __n); /*0x10086f3c6*/
  v2 = 1; /*0x10086f3cb*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10086f3d9*/
  if ( !v3 ) /*0x10086f3e1*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v2, __n); /*0x10086f3b6*/
  v4 = (__int64)v3; /*0x10086f3e3*/
  memcpy(v3, __src, __n); /*0x10086f3ef*/
  if ( __n >= 8 ) /*0x10086f3f8*/
  {
    if ( __n >= 0x20 ) /*0x10086f42a*/
    {
      v5 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x10086f436*/
      v6 = 0; /*0x10086f439*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10086f43b*/
      v8 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10086f443*/
      v9 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10086f44b*/
      do /*0x10086f4b9*/
      {
        v10 = _mm_loadu_si128((const __m128i *)(v4 + v6)); /*0x10086f460*/
        v11 = _mm_loadu_si128((const __m128i *)(v4 + v6 + 16)); /*0x10086f466*/
        v12 = _mm_add_epi8(v10, si128); /*0x10086f471*/
        v13 = _mm_add_epi8(v11, si128); /*0x10086f479*/
        *(__m128i *)(v4 + v6) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v12, v8), v12), v9), v10); /*0x10086f4a5*/
        *(__m128i *)(v4 + v6 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v8), v13), v9), v11); /*0x10086f4ab*/
        v6 += 32; /*0x10086f4b2*/
      }
      while ( v5 != v6 ); /*0x10086f4b9*/
      if ( __n == v5 ) /*0x10086f4be*/
        goto LABEL_20; /*0x10086f4be*/
      if ( (__n & 0x18) == 0 ) /*0x10086f4c7*/
        goto LABEL_18; /*0x10086f4c7*/
    }
    else
    {
      v5 = 0; /*0x10086f42c*/
    }
    v14 = v5; /*0x10086f4c9*/
    v5 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x10086f4d3*/
    v15 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10086f4d6*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10086f4de*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10086f4e6*/
    do /*0x10086f51f*/
    {
      v18 = _mm_loadl_epi64((const __m128i *)(v4 + v14)); /*0x10086f4f0*/
      v19 = _mm_add_epi8(v18, v15); /*0x10086f4fa*/
      *(_QWORD *)(v4 + v14) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v19, v16), v19), v17), v18).u64[0]; /*0x10086f512*/
      v14 += 8LL; /*0x10086f518*/
    }
    while ( v5 != v14 ); /*0x10086f51f*/
    goto LABEL_19; /*0x10086f51f*/
  }
  v5 = 0; /*0x10086f3fa*/
  do /*0x10086f540*/
  {
LABEL_18:
    *(_BYTE *)(v4 + v5) |= 32 * ((unsigned __int8)(*(_BYTE *)(v4 + v5) - 65) < 0x1Au); /*0x10086f523*/
    ++v5; /*0x10086f53a*/
LABEL_19:
    ; /*0x10086f53d*/
  }
  while ( __n != v5 ); /*0x10086f540*/
LABEL_20:
  result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10086f542*/
             "opus\n",
             4u,
             (void *)v4);
  if ( __n ) /*0x10086f55c*/
  {
    v21 = result; /*0x10086f569*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, __n, 1); /*0x10086f56b*/
    return v21; /*0x10086f570*/
  }
  return result; /*0x10086f572*/
}