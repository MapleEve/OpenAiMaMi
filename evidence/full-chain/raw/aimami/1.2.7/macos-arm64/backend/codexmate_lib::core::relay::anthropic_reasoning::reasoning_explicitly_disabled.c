// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::reasoning_explicitly_disabled::h9e02031e451d4700; addr: 0x1008983f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::reasoning_explicitly_disabled::h9e02031e451d4700(
        unsigned __int8 *a1,
        __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdx
  size_t v4; // rbx
  __int64 v5; // r12
  unsigned __int8 *v6; // r15
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

  if ( !a1 ) /*0x1008983fe*/
  {
    LODWORD(v6) = 0; /*0x10089841b*/
    return (unsigned int)v6; /*0x10089841e*/
  }
  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a1, a2); /*0x100898400*/
  v4 = v3; /*0x100898405*/
  if ( v3 < 0 ) /*0x10089840b*/
  {
    v5 = 0; /*0x10089840d*/
    goto LABEL_4; /*0x10089840d*/
  }
  if ( !v3 ) /*0x100898423*/
  {
    LODWORD(v6) = 0; /*0x100898473*/
    return (unsigned int)v6; /*0x100898476*/
  }
  v6 = v2; /*0x100898425*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v3); /*0x100898428*/
  v5 = 1; /*0x10089842d*/
  v7 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10089843b*/
  if ( !v7 ) /*0x100898443*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x100898410*/
  v8 = v7; /*0x100898445*/
  memcpy(v7, v6, v4); /*0x100898451*/
  if ( v4 < 8 ) /*0x10089845a*/
  {
    v9 = 0; /*0x10089845c*/
    do /*0x1008985a0*/
    {
LABEL_20:
      v8[v9] |= 32 * ((unsigned __int8)(v8[v9] - 65) < 0x1Au); /*0x100898583*/
      ++v9; /*0x10089859a*/
LABEL_21:
      ; /*0x10089859d*/
    }
    while ( v4 != v9 ); /*0x1008985a0*/
    goto LABEL_22; /*0x1008985a0*/
  }
  if ( v4 < 0x20 ) /*0x100898489*/
  {
    v9 = 0; /*0x10089848b*/
    goto LABEL_17; /*0x10089848d*/
  }
  v9 = v4 & 0x7FFFFFFFFFFFFFE0LL; /*0x100898495*/
  v10 = 0; /*0x100898498*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x10089849a*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x1008984a2*/
  v13 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x1008984aa*/
  do /*0x100898519*/
  {
    v14 = _mm_loadu_si128((const __m128i *)&v8[v10]); /*0x1008984c0*/
    v15 = _mm_loadu_si128((const __m128i *)&v8[v10 + 16]); /*0x1008984c6*/
    v16 = _mm_add_epi8(v14, si128); /*0x1008984d1*/
    v17 = _mm_add_epi8(v15, si128); /*0x1008984d9*/
    *(__m128i *)&v8[v10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v12), v16), v13), v14); /*0x100898505*/
    *(__m128i *)&v8[v10 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v12), v17), v13), v15); /*0x10089850b*/
    v10 += 32; /*0x100898512*/
  }
  while ( v9 != v10 ); /*0x100898519*/
  if ( v4 != v9 ) /*0x10089851e*/
  {
    if ( (v4 & 0x18) == 0 ) /*0x100898527*/
      goto LABEL_20; /*0x100898527*/
LABEL_17:
    v18 = v9; /*0x100898529*/
    v9 = v4 & 0x7FFFFFFFFFFFFFF8LL; /*0x100898533*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x100898536*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x10089853e*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x100898546*/
    do /*0x10089857f*/
    {
      v22 = _mm_loadl_epi64((const __m128i *)&v8[v18]); /*0x100898550*/
      v23 = _mm_add_epi8(v22, v19); /*0x10089855a*/
      *(_QWORD *)&v8[v18] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v23, v20), v23), v21), v22).u64[0]; /*0x100898572*/
      v18 += 8; /*0x100898578*/
    }
    while ( v9 != v18 ); /*0x10089857f*/
    goto LABEL_21; /*0x10089857f*/
  }
LABEL_22:
  switch ( v4 ) /*0x1008985a6*/
  {
    case 3uLL: /*0x1008985a6*/
      LOBYTE(v6) = (*(_WORD *)v8 ^ 0x666F | (unsigned __int8)v8[2] ^ 0x66) == 0; /*0x1008985e8*/
      break;
    case 4uLL: /*0x1008985a6*/
      LOBYTE(v6) = *(_DWORD *)v8 == 1701736302; /*0x1008985ce*/
      break;
    case 8uLL: /*0x1008985a6*/
      LOBYTE(v6) = *(_QWORD *)v8 == 0x64656C6261736964LL; /*0x1008985c1*/
      break;
    default:
      LODWORD(v6) = 0; /*0x1008985ee*/
      break;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v4, 1); /*0x1008985fc*/
  return (unsigned int)v6; /*0x100898604*/
}