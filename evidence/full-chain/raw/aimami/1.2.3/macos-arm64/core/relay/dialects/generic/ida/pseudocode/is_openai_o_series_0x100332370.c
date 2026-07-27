// __ZN13codexmate_lib4core5relay8dialects7generic18is_openai_o_series @ 0x100332370 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::dialects::generic::is_openai_o_series::h79a14a2f0cc4992a(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  size_t v4; // rbx
  __int64 v5; // r12
  const void *v6; // r15
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x10033237b*/
  v4 = v3; /*0x100332380*/
  if ( v3 < 0 ) /*0x100332386*/
  {
    v5 = 0; /*0x100332388*/
    goto LABEL_3; /*0x100332388*/
  }
  if ( !v3 ) /*0x100332396*/
  {
    LODWORD(v6) = 0; /*0x1003323e6*/
    return (unsigned int)v6; /*0x1003323e9*/
  }
  v6 = (const void *)v2; /*0x100332398*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10033239b*/
  v5 = 1; /*0x1003323a0*/
  v7 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x1003323ae*/
  if ( !v7 ) /*0x1003323b6*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x10033238b*/
  v8 = v7; /*0x1003323b8*/
  memcpy(v7, v6, v4); /*0x1003323c4*/
  if ( v4 < 8 ) /*0x1003323cd*/
  {
    v9 = 0; /*0x1003323cf*/
    do /*0x100332510*/
    {
LABEL_18:
      v8[v9] |= 32 * ((unsigned __int8)(v8[v9] - 65) < 0x1Au); /*0x1003324f3*/
      ++v9; /*0x10033250a*/
LABEL_19:
      ; /*0x10033250d*/
    }
    while ( v4 != v9 ); /*0x100332510*/
    goto LABEL_20; /*0x100332510*/
  }
  if ( v4 < 0x20 ) /*0x1003323fc*/
  {
    v9 = 0; /*0x1003323fe*/
    goto LABEL_15; /*0x100332400*/
  }
  v9 = v4 & 0x7FFFFFFFFFFFFFE0LL; /*0x100332408*/
  v10 = 0; /*0x10033240b*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10033240d*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100332415*/
  v13 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10033241d*/
  do /*0x100332489*/
  {
    v14 = _mm_loadu_si128((const __m128i *)&v8[v10]); /*0x100332430*/
    v15 = _mm_loadu_si128((const __m128i *)&v8[v10 + 16]); /*0x100332436*/
    v16 = _mm_add_epi8(v14, si128); /*0x100332441*/
    v17 = _mm_add_epi8(v15, si128); /*0x100332449*/
    *(__m128i *)&v8[v10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v12), v16), v13), v14); /*0x100332475*/
    *(__m128i *)&v8[v10 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v12), v17), v13), v15); /*0x10033247b*/
    v10 += 32; /*0x100332482*/
  }
  while ( v9 != v10 ); /*0x100332489*/
  if ( v4 != v9 ) /*0x10033248e*/
  {
    if ( (v4 & 0x18) == 0 ) /*0x100332497*/
      goto LABEL_18; /*0x100332497*/
LABEL_15:
    v18 = v9; /*0x100332499*/
    v9 = v4 & 0x7FFFFFFFFFFFFFF8LL; /*0x1003324a3*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1003324a6*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1003324ae*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1003324b6*/
    do /*0x1003324ef*/
    {
      v22 = _mm_loadl_epi64((const __m128i *)&v8[v18]); /*0x1003324c0*/
      v23 = _mm_add_epi8(v22, v19); /*0x1003324ca*/
      *(_QWORD *)&v8[v18] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v23, v20), v23), v21), v22).u64[0]; /*0x1003324e2*/
      v18 += 8; /*0x1003324e8*/
    }
    while ( v9 != v18 ); /*0x1003324ef*/
    goto LABEL_19; /*0x1003324ef*/
  }
LABEL_20:
  if ( v4 == 1 || *v8 != 111 ) /*0x10033251c*/
    LODWORD(v6) = 0; /*0x10033252d*/
  else
    LOBYTE(v6) = (unsigned __int8)(v8[1] - 48) < 0xAu; /*0x100332527*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v4, 1); /*0x10033253b*/
  return (unsigned int)v6; /*0x100332543*/
}