// __ZN13codexmate_lib4core5relay10translator32uses_anthropic_adaptive_thinking @ 0x1008760c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::uses_anthropic_adaptive_thinking::h2b5189cc4d9f10d2(
        void *__src,
        size_t __n)
{
  __int64 v2; // r12
  unsigned int v3; // r15d
  void *v4; // rax
  __int64 v5; // r14
  size_t v6; // rax
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

  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008760d1*/
  {
    v2 = 0; /*0x1008760d3*/
    goto LABEL_3; /*0x1008760d3*/
  }
  v3 = (unsigned int)__src; /*0x1008760e1*/
  if ( !__n ) /*0x1008760e4*/
  {
    v5 = 1; /*0x100876121*/
    goto LABEL_20; /*0x100876137*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __n); /*0x1008760e6*/
  v2 = 1; /*0x1008760eb*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008760f9*/
  if ( !v4 ) /*0x100876101*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v2, __n); /*0x1008760d6*/
  v5 = (__int64)v4; /*0x100876103*/
  memcpy(v4, __src, __n); /*0x10087610f*/
  if ( __n < 8 ) /*0x100876118*/
  {
    v6 = 0; /*0x10087611a*/
    goto LABEL_18; /*0x10087611c*/
  }
  if ( __n < 0x20 ) /*0x10087614a*/
  {
    v6 = 0; /*0x10087614c*/
    goto LABEL_15; /*0x10087614e*/
  }
  v6 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x100876156*/
  v7 = 0; /*0x100876159*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10087615b*/
  v9 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100876163*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10087616b*/
  do /*0x1008761d9*/
  {
    v11 = _mm_loadu_si128((const __m128i *)(v5 + v7)); /*0x100876180*/
    v12 = _mm_loadu_si128((const __m128i *)(v5 + v7 + 16)); /*0x100876186*/
    v13 = _mm_add_epi8(v11, si128); /*0x100876191*/
    v14 = _mm_add_epi8(v12, si128); /*0x100876199*/
    *(__m128i *)(v5 + v7) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v9), v13), v10), v11); /*0x1008761c5*/
    *(__m128i *)(v5 + v7 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v9), v14), v10), v12); /*0x1008761cb*/
    v7 += 32; /*0x1008761d2*/
  }
  while ( v6 != v7 ); /*0x1008761d9*/
  if ( __n == v6 ) /*0x1008761de*/
    goto LABEL_20; /*0x1008761de*/
  if ( (__n & 0x18) != 0 ) /*0x1008761e7*/
  {
LABEL_15:
    v15 = v6; /*0x1008761e9*/
    v6 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x1008761f3*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1008761f6*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1008761fe*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100876206*/
    do /*0x10087623f*/
    {
      v19 = _mm_loadl_epi64((const __m128i *)(v5 + v15)); /*0x100876210*/
      v20 = _mm_add_epi8(v19, v16); /*0x10087621a*/
      *(_QWORD *)(v5 + v15) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v20, v17), v20), v18), v19).u64[0]; /*0x100876232*/
      v15 += 8LL; /*0x100876238*/
    }
    while ( v6 != v15 ); /*0x10087623f*/
    goto LABEL_19; /*0x10087623f*/
  }
  do /*0x100876260*/
  {
LABEL_18:
    *(_BYTE *)(v5 + v6) |= 32 * ((unsigned __int8)(*(_BYTE *)(v5 + v6) - 65) < 0x1Au); /*0x100876243*/
    ++v6; /*0x10087625a*/
LABEL_19:
    ; /*0x10087625d*/
  }
  while ( __n != v6 ); /*0x100876260*/
LABEL_20:
  LOBYTE(v3) = 1; /*0x100876262*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008762e7*/
                           "claude-opus-4-6claude-opus-4-7claude-opus-4-8claude-sonnet-4-6claude-sonnet-4-7claude-sonnet-"
                           "4-8chatcmpl-aimamistop_reason",
                           0xFu,
                           (void *)v5)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "claude-opus-4-7claude-opus-4-8claude-sonnet-4-6claude-sonnet-4-7claude-sonnet-4-8chatcmpl-aimamistop_reason",
                           0xFu,
                           (void *)v5)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "claude-opus-4-8claude-sonnet-4-6claude-sonnet-4-7claude-sonnet-4-8chatcmpl-aimamistop_reason",
                           0xFu,
                           (void *)v5)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "claude-sonnet-4-6claude-sonnet-4-7claude-sonnet-4-8chatcmpl-aimamistop_reason",
                           0x11u,
                           (void *)v5)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "claude-sonnet-4-7claude-sonnet-4-8chatcmpl-aimamistop_reason",
                           0x11u,
                           (void *)v5) )
  {
    v3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100876307*/
           "claude-sonnet-4-8chatcmpl-aimamistop_reason",
           0x11u,
           (void *)v5);
  }
  if ( __n ) /*0x10087630d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, __n, 1); /*0x10087631a*/
  return v3; /*0x100876322*/
}