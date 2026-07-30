// __ZN13codexmate_lib4core5relay19anthropic_reasoning25effort_to_thinking_budget @ 0x100573640 | 1.2.4 NEW-delta
_BOOL8 __fastcall codexmate_lib::core::relay::anthropic_reasoning::effort_to_thinking_budget::hba19a0c5ca8e0fd8(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  size_t v5; // rbx
  __int64 v6; // r12
  const void *v7; // r15
  unsigned __int64 v8; // r13
  char *v9; // rax
  char *v10; // r14
  __int64 v11; // rcx
  __int64 v13; // rsi
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  unsigned __int16 v27; // ax
  int v28; // eax
  bool v29; // r12
  bool v30; // zf

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a1, a2); /*0x10057364e*/
  v5 = v3; /*0x100573653*/
  if ( v3 < 0 ) /*0x100573659*/
  {
    v6 = 0; /*0x10057365b*/
    goto LABEL_3; /*0x10057365b*/
  }
  if ( !v3 ) /*0x100573669*/
    return 0; /*0x1005736c7*/
  v7 = (const void *)v2; /*0x10057366b*/
  v8 = v3; /*0x10057366e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v3, v4); /*0x100573671*/
  v6 = 1; /*0x100573676*/
  v9 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100573684*/
  if ( !v9 ) /*0x10057368c*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x10057365e*/
  v10 = v9; /*0x10057368e*/
  memcpy(v9, v7, v5); /*0x10057369a*/
  if ( v8 < 8 ) /*0x1005736a6*/
  {
    v11 = 0; /*0x1005736a8*/
    do /*0x1005737f4*/
    {
LABEL_18:
      v10[v11] |= 32 * ((unsigned __int8)(v10[v11] - 65) < 0x1Au); /*0x1005737d3*/
      ++v11; /*0x1005737ee*/
LABEL_19:
      ; /*0x1005737f1*/
    }
    while ( v8 != v11 ); /*0x1005737f4*/
    goto LABEL_20; /*0x1005737f4*/
  }
  if ( v8 < 0x20 ) /*0x1005736da*/
  {
    v11 = 0; /*0x1005736dc*/
    goto LABEL_15; /*0x1005736de*/
  }
  v11 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x1005736e6*/
  v13 = 0; /*0x1005736e9*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x1005736eb*/
  v15 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x1005736f3*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x1005736fb*/
  do /*0x100573769*/
  {
    v17 = _mm_loadu_si128((const __m128i *)&v10[v13]); /*0x100573710*/
    v18 = _mm_loadu_si128((const __m128i *)&v10[v13 + 16]); /*0x100573716*/
    v19 = _mm_add_epi8(v17, si128); /*0x100573721*/
    v20 = _mm_add_epi8(v18, si128); /*0x100573729*/
    *(__m128i *)&v10[v13] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17); /*0x100573755*/
    *(__m128i *)&v10[v13 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16), v18); /*0x10057375b*/
    v13 += 32; /*0x100573762*/
  }
  while ( v11 != v13 ); /*0x100573769*/
  if ( v8 != v11 ) /*0x10057376e*/
  {
    if ( (v5 & 0x18) == 0 ) /*0x100573777*/
      goto LABEL_18; /*0x100573777*/
LABEL_15:
    v21 = v11; /*0x100573779*/
    v11 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x100573783*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100573786*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x10057378e*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100573796*/
    do /*0x1005737cf*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)&v10[v21]); /*0x1005737a0*/
      v26 = _mm_add_epi8(v25, v22); /*0x1005737aa*/
      *(_QWORD *)&v10[v21] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x1005737c2*/
      v21 += 8; /*0x1005737c8*/
    }
    while ( v11 != v21 ); /*0x1005737cf*/
    goto LABEL_19; /*0x1005737cf*/
  }
LABEL_20:
  switch ( v8 ) /*0x100573818*/
  {
    case 3uLL: /*0x100573818*/
      if ( *(_WORD *)v10 ^ 0x6F6C | (unsigned __int8)v10[2] ^ 0x77 ) /*0x10057382b*/
      {
        v27 = __ROL2__(*(_WORD *)v10, 8); /*0x10057383c*/
        if ( v27 == 28001 ) /*0x100573844*/
          v28 = (unsigned __int8)v10[2] - 120; /*0x10057384f*/
        else
          v28 = 2 * (v27 >= 0x6D61u) - 1; /*0x1005738f2*/
        v30 = v28 == 0; /*0x1005738f6*/
        goto LABEL_32; /*0x1005738f6*/
      }
      v29 = 1; /*0x1005738e1*/
      break; /*0x1005738ea*/
    case 4uLL: /*0x100573818*/
      v29 = *(_DWORD *)v10 == 1751607656; /*0x1005738c7*/
      break; /*0x1005738da*/
    case 5uLL: /*0x100573818*/
      v30 = (*(_DWORD *)v10 ^ 0x67696878 | (unsigned __int8)v10[4] ^ 0x68) == 0; /*0x10057388c*/
LABEL_32:
      v29 = v30; /*0x1005738f8*/
      break; /*0x1005738f8*/
    case 6uLL: /*0x100573818*/
      v29 = (*(_DWORD *)v10 ^ 0x6964656D | *((unsigned __int16 *)v10 + 2) ^ 0x6D75) == 0; /*0x1005738a8*/
      break; /*0x1005738bb*/
    case 7uLL: /*0x100573818*/
      v29 = (*(_DWORD *)v10 ^ 0x696E696D | *(_DWORD *)(v10 + 3) ^ 0x6C616D69) == 0; /*0x10057386a*/
      break; /*0x100573877*/
    default:
      v29 = 0; /*0x1005738dc*/
      break; /*0x1005738df*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x100573907*/
  return v29; /*0x100573917*/
}