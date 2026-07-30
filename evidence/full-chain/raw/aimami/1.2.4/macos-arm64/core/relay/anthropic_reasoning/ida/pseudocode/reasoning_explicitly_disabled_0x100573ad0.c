// __ZN13codexmate_lib4core5relay19anthropic_reasoning29reasoning_explicitly_disabled @ 0x100573ad0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::reasoning_explicitly_disabled::h33a1a5ea7972cf8d(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  size_t v5; // rbx
  __int64 v6; // r12
  const void *v7; // r15
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4

  if ( !a1 ) /*0x100573ade*/
  {
    LODWORD(v7) = 0; /*0x100573afb*/
    return (unsigned int)v7; /*0x100573afe*/
  }
  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a1, a2); /*0x100573ae0*/
  v5 = v3; /*0x100573ae5*/
  if ( v3 < 0 ) /*0x100573aeb*/
  {
    v6 = 0; /*0x100573aed*/
    goto LABEL_4; /*0x100573aed*/
  }
  if ( !v3 ) /*0x100573b03*/
  {
    LODWORD(v7) = 0; /*0x100573b53*/
    return (unsigned int)v7; /*0x100573b56*/
  }
  v7 = (const void *)v2; /*0x100573b05*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, v3, v4); /*0x100573b08*/
  v6 = 1; /*0x100573b0d*/
  v8 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100573b1b*/
  if ( !v8 ) /*0x100573b23*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100573af0*/
  v9 = v8; /*0x100573b25*/
  memcpy(v8, v7, v5); /*0x100573b31*/
  if ( v5 < 8 ) /*0x100573b3a*/
  {
    v10 = 0; /*0x100573b3c*/
    do /*0x100573c80*/
    {
LABEL_20:
      v9[v10] |= 32 * ((unsigned __int8)(v9[v10] - 65) < 0x1Au); /*0x100573c63*/
      ++v10; /*0x100573c7a*/
LABEL_21:
      ; /*0x100573c7d*/
    }
    while ( v5 != v10 ); /*0x100573c80*/
    goto LABEL_22; /*0x100573c80*/
  }
  if ( v5 < 0x20 ) /*0x100573b69*/
  {
    v10 = 0; /*0x100573b6b*/
    goto LABEL_17; /*0x100573b6d*/
  }
  v10 = v5 & 0x7FFFFFFFFFFFFFE0LL; /*0x100573b75*/
  v11 = 0; /*0x100573b78*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x100573b7a*/
  v13 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x100573b82*/
  v14 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x100573b8a*/
  do /*0x100573bf9*/
  {
    v15 = _mm_loadu_si128((const __m128i *)&v9[v11]); /*0x100573ba0*/
    v16 = _mm_loadu_si128((const __m128i *)&v9[v11 + 16]); /*0x100573ba6*/
    v17 = _mm_add_epi8(v15, si128); /*0x100573bb1*/
    v18 = _mm_add_epi8(v16, si128); /*0x100573bb9*/
    *(__m128i *)&v9[v11] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v13), v17), v14), v15); /*0x100573be5*/
    *(__m128i *)&v9[v11 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v13), v18), v14), v16); /*0x100573beb*/
    v11 += 32; /*0x100573bf2*/
  }
  while ( v10 != v11 ); /*0x100573bf9*/
  if ( v5 != v10 ) /*0x100573bfe*/
  {
    if ( (v5 & 0x18) == 0 ) /*0x100573c07*/
      goto LABEL_20; /*0x100573c07*/
LABEL_17:
    v19 = v10; /*0x100573c09*/
    v10 = v5 & 0x7FFFFFFFFFFFFFF8LL; /*0x100573c13*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100573c16*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x100573c1e*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100573c26*/
    do /*0x100573c5f*/
    {
      v23 = _mm_loadl_epi64((const __m128i *)&v9[v19]); /*0x100573c30*/
      v24 = _mm_add_epi8(v23, v20); /*0x100573c3a*/
      *(_QWORD *)&v9[v19] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v24, v21), v24), v22), v23).u64[0]; /*0x100573c52*/
      v19 += 8; /*0x100573c58*/
    }
    while ( v10 != v19 ); /*0x100573c5f*/
    goto LABEL_21; /*0x100573c5f*/
  }
LABEL_22:
  switch ( v5 ) /*0x100573c86*/
  {
    case 3uLL: /*0x100573c86*/
      LOBYTE(v7) = (*(_WORD *)v9 ^ 0x666F | (unsigned __int8)v9[2] ^ 0x66) == 0; /*0x100573cc8*/
      break;
    case 4uLL: /*0x100573c86*/
      LOBYTE(v7) = *(_DWORD *)v9 == 1701736302; /*0x100573cae*/
      break;
    case 8uLL: /*0x100573c86*/
      LOBYTE(v7) = *(_QWORD *)v9 == 0x64656C6261736964LL; /*0x100573ca1*/
      break;
    default:
      LODWORD(v7) = 0; /*0x100573cce*/
      break;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v5, 1); /*0x100573cdc*/
  return (unsigned int)v7; /*0x100573ce4*/
}