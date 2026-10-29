// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::effort_to_thinking_budget::hda81d8242c11ce17; addr: 0x100898010; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:19Z
_BOOL8 __fastcall codexmate_lib::core::relay::anthropic_reasoning::effort_to_thinking_budget::hda81d8242c11ce17(
        unsigned __int8 *a1,
        __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdx
  size_t v4; // rbx
  __int64 v5; // r12
  unsigned __int8 *v6; // r15
  unsigned __int64 v7; // r13
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rsi
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm6
  __int64 v20; // rsi
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  unsigned __int16 v26; // ax
  int v27; // eax
  bool v28; // r12
  bool v29; // zf

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a1, a2); /*0x10089801e*/
  v4 = v3; /*0x100898023*/
  if ( v3 < 0 ) /*0x100898029*/
  {
    v5 = 0; /*0x10089802b*/
    goto LABEL_3; /*0x10089802b*/
  }
  if ( !v3 ) /*0x100898039*/
    return 0; /*0x100898097*/
  v6 = v2; /*0x10089803b*/
  v7 = v3; /*0x10089803e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v3); /*0x100898041*/
  v5 = 1; /*0x100898046*/
  v8 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x100898054*/
  if ( !v8 ) /*0x10089805c*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x10089802e*/
  v9 = v8; /*0x10089805e*/
  memcpy(v8, v6, v4); /*0x10089806a*/
  if ( v7 < 8 ) /*0x100898076*/
  {
    v10 = 0; /*0x100898078*/
    do /*0x1008981c4*/
    {
LABEL_18:
      v9[v10] |= 32 * ((unsigned __int8)(v9[v10] - 65) < 0x1Au); /*0x1008981a3*/
      ++v10; /*0x1008981be*/
LABEL_19:
      ; /*0x1008981c1*/
    }
    while ( v7 != v10 ); /*0x1008981c4*/
    goto LABEL_20; /*0x1008981c4*/
  }
  if ( v7 < 0x20 ) /*0x1008980aa*/
  {
    v10 = 0; /*0x1008980ac*/
    goto LABEL_15; /*0x1008980ae*/
  }
  v10 = v7 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008980b6*/
  v12 = 0; /*0x1008980b9*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x1008980bb*/
  v14 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x1008980c3*/
  v15 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x1008980cb*/
  do /*0x100898139*/
  {
    v16 = _mm_loadu_si128((const __m128i *)&v9[v12]); /*0x1008980e0*/
    v17 = _mm_loadu_si128((const __m128i *)&v9[v12 + 16]); /*0x1008980e6*/
    v18 = _mm_add_epi8(v16, si128); /*0x1008980f1*/
    v19 = _mm_add_epi8(v17, si128); /*0x1008980f9*/
    *(__m128i *)&v9[v12] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v14), v18), v15), v16); /*0x100898125*/
    *(__m128i *)&v9[v12 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v14), v19), v15), v17); /*0x10089812b*/
    v12 += 32; /*0x100898132*/
  }
  while ( v10 != v12 ); /*0x100898139*/
  if ( v7 != v10 ) /*0x10089813e*/
  {
    if ( (v4 & 0x18) == 0 ) /*0x100898147*/
      goto LABEL_18; /*0x100898147*/
LABEL_15:
    v20 = v10; /*0x100898149*/
    v10 = v7 & 0x7FFFFFFFFFFFFFF8LL; /*0x100898153*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x100898156*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x10089815e*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x100898166*/
    do /*0x10089819f*/
    {
      v24 = _mm_loadl_epi64((const __m128i *)&v9[v20]); /*0x100898170*/
      v25 = _mm_add_epi8(v24, v21); /*0x10089817a*/
      *(_QWORD *)&v9[v20] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v25, v22), v25), v23), v24).u64[0]; /*0x100898192*/
      v20 += 8; /*0x100898198*/
    }
    while ( v10 != v20 ); /*0x10089819f*/
    goto LABEL_19; /*0x10089819f*/
  }
LABEL_20:
  switch ( v7 ) /*0x1008981e8*/
  {
    case 3uLL: /*0x1008981e8*/
      if ( *(_WORD *)v9 ^ 0x6F6C | (unsigned __int8)v9[2] ^ 0x77 ) /*0x1008981fb*/
      {
        v26 = __ROL2__(*(_WORD *)v9, 8); /*0x10089820c*/
        if ( v26 == 28001 ) /*0x100898214*/
          v27 = (unsigned __int8)v9[2] - 120; /*0x10089821f*/
        else
          v27 = 2 * (v26 >= 0x6D61u) - 1; /*0x1008982c2*/
        v29 = v27 == 0; /*0x1008982c6*/
        goto LABEL_32; /*0x1008982c6*/
      }
      v28 = 1; /*0x1008982b1*/
      break; /*0x1008982ba*/
    case 4uLL: /*0x1008981e8*/
      v28 = *(_DWORD *)v9 == 1751607656; /*0x100898297*/
      break; /*0x1008982aa*/
    case 5uLL: /*0x1008981e8*/
      v29 = (*(_DWORD *)v9 ^ 0x67696878 | (unsigned __int8)v9[4] ^ 0x68) == 0; /*0x10089825c*/
LABEL_32:
      v28 = v29; /*0x1008982c8*/
      break; /*0x1008982c8*/
    case 6uLL: /*0x1008981e8*/
      v28 = (*(_DWORD *)v9 ^ 0x6964656D | *((unsigned __int16 *)v9 + 2) ^ 0x6D75) == 0; /*0x100898278*/
      break; /*0x10089828b*/
    case 7uLL: /*0x1008981e8*/
      v28 = (*(_DWORD *)v9 ^ 0x696E696D | *(_DWORD *)(v9 + 3) ^ 0x6C616D69) == 0; /*0x10089823a*/
      break; /*0x100898247*/
    default:
      v28 = 0; /*0x1008982ac*/
      break; /*0x1008982af*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v4, 1); /*0x1008982d7*/
  return v28; /*0x1008982e7*/
}