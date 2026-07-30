// __ZN13codexmate_lib4core5relay19anthropic_reasoning25codex_effort_to_anthropic @ 0x100573340 | 1.2.4 NEW-delta
const char *__fastcall codexmate_lib::core::relay::anthropic_reasoning::codex_effort_to_anthropic::h2b9b9eefe1530912(
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
  const char *v12; // r12
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
  bool v29; // zf
  const char *v30; // rax

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a1, a2); /*0x10057334e*/
  v5 = v3; /*0x100573353*/
  if ( v3 < 0 ) /*0x100573359*/
  {
    v6 = 0; /*0x10057335b*/
    goto LABEL_3; /*0x10057335b*/
  }
  if ( !v3 ) /*0x100573369*/
    return nullptr; /*0x1005733c8*/
  v7 = (const void *)v2; /*0x10057336b*/
  v8 = v3; /*0x10057336e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v3, v4); /*0x100573371*/
  v6 = 1; /*0x100573376*/
  v9 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100573384*/
  if ( !v9 ) /*0x10057338c*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x10057335e*/
  v10 = v9; /*0x10057338e*/
  memcpy(v9, v7, v5); /*0x10057339a*/
  if ( v8 < 8 ) /*0x1005733a6*/
  {
    v11 = 0; /*0x1005733a8*/
    do /*0x1005734f4*/
    {
LABEL_18:
      v10[v11] |= 32 * ((unsigned __int8)(v10[v11] - 65) < 0x1Au); /*0x1005734d3*/
      ++v11; /*0x1005734ee*/
LABEL_19:
      ; /*0x1005734f1*/
    }
    while ( v8 != v11 ); /*0x1005734f4*/
    goto LABEL_20; /*0x1005734f4*/
  }
  if ( v8 < 0x20 ) /*0x1005733db*/
  {
    v11 = 0; /*0x1005733dd*/
    goto LABEL_15; /*0x1005733df*/
  }
  v11 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x1005733e7*/
  v13 = 0; /*0x1005733ea*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x1005733ec*/
  v15 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x1005733f4*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x1005733fc*/
  do /*0x100573469*/
  {
    v17 = _mm_loadu_si128((const __m128i *)&v10[v13]); /*0x100573410*/
    v18 = _mm_loadu_si128((const __m128i *)&v10[v13 + 16]); /*0x100573416*/
    v19 = _mm_add_epi8(v17, si128); /*0x100573421*/
    v20 = _mm_add_epi8(v18, si128); /*0x100573429*/
    *(__m128i *)&v10[v13] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17); /*0x100573455*/
    *(__m128i *)&v10[v13 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16), v18); /*0x10057345b*/
    v13 += 32; /*0x100573462*/
  }
  while ( v11 != v13 ); /*0x100573469*/
  if ( v8 != v11 ) /*0x10057346e*/
  {
    if ( (v5 & 0x18) == 0 ) /*0x100573477*/
      goto LABEL_18; /*0x100573477*/
LABEL_15:
    v21 = v11; /*0x100573479*/
    v11 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x100573483*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100573486*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x10057348e*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100573496*/
    do /*0x1005734cf*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)&v10[v21]); /*0x1005734a0*/
      v26 = _mm_add_epi8(v25, v22); /*0x1005734aa*/
      *(_QWORD *)&v10[v21] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x1005734c2*/
      v21 += 8; /*0x1005734c8*/
    }
    while ( v11 != v21 ); /*0x1005734cf*/
    goto LABEL_19; /*0x1005734cf*/
  }
LABEL_20:
  switch ( v8 ) /*0x100573518*/
  {
    case 3uLL: /*0x100573518*/
      if ( *(_WORD *)v10 ^ 0x6F6C | (unsigned __int8)v10[2] ^ 0x77 ) /*0x10057352b*/
      {
        v27 = __ROL2__(*(_WORD *)v10, 8); /*0x10057353c*/
        if ( v27 == 28001 ) /*0x100573544*/
          v28 = (unsigned __int8)v10[2] - 120; /*0x10057354f*/
        else
          v28 = 2 * (v27 >= 0x6D61u) - 1; /*0x1005735f1*/
        v12 = nullptr; /*0x1005735f5*/
        v29 = v28 == 0; /*0x1005735f8*/
        goto LABEL_34; /*0x1005735f8*/
      }
      v12 = (const char *)&anon_d163fe72d6e6e73a137b22815ab75905_289; /*0x1005735e2*/
      break; /*0x1005735e9*/
    case 4uLL: /*0x100573518*/
      v12 = nullptr; /*0x1005735bb*/
      if ( *(_DWORD *)v10 == 1751607656 ) /*0x1005735d3*/
        v12 = "high"; /*0x1005735d3*/
      break; /*0x1005735d3*/
    case 5uLL: /*0x100573518*/
      v12 = nullptr; /*0x100573589*/
      v29 = (*(_DWORD *)v10 ^ 0x67696878 | (unsigned __int8)v10[4] ^ 0x68) == 0; /*0x10057358c*/
LABEL_34:
      v30 = (const char *)&anon_d163fe72d6e6e73a137b22815ab75905_293; /*0x1005735fa*/
      goto LABEL_35; /*0x1005735fa*/
    case 6uLL: /*0x100573518*/
      v12 = nullptr; /*0x1005735a3*/
      v29 = (*(_DWORD *)v10 ^ 0x6964656D | *((unsigned __int16 *)v10 + 2) ^ 0x6D75) == 0; /*0x1005735a8*/
      v30 = (const char *)&anon_d163fe72d6e6e73a137b22815ab75905_290; /*0x1005735b2*/
      goto LABEL_35; /*0x1005735b9*/
    case 7uLL: /*0x100573518*/
      v12 = nullptr; /*0x100573568*/
      v29 = (*(_DWORD *)v10 ^ 0x696E696D | *(_DWORD *)(v10 + 3) ^ 0x6C616D69) == 0; /*0x10057356b*/
      v30 = (const char *)&anon_d163fe72d6e6e73a137b22815ab75905_289; /*0x10057356d*/
LABEL_35:
      if ( v29 ) /*0x100573601*/
        v12 = v30; /*0x100573601*/
      break; /*0x100573601*/
    default:
      v12 = nullptr; /*0x1005735dd*/
      break; /*0x1005735e0*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x100573605*/
  return v12; /*0x10057361f*/
}