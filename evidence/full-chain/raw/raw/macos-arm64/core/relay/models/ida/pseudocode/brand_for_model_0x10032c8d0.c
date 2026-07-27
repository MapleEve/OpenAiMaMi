// __ZN13codexmate_lib4core5relay6models15brand_for_model @ 0x10032c8d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::brand_for_model::hbcc42f602abd2e36(__int64 a1, __int64 a2)
{
  const void *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // rbx
  __int64 v6; // r12
  void *v7; // rax
  __int64 v8; // r14
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
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // eax
  _QWORD v29[7]; // [rsp+8h] [rbp-68h] BYREF
  char v30; // [rsp+40h] [rbp-30h]
  __int16 v31; // [rsp+48h] [rbp-28h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x10032c8df*/
  v5 = v4; /*0x10032c8e4*/
  if ( v4 < 0 ) /*0x10032c8ea*/
  {
    v6 = 0; /*0x10032c8ec*/
    goto LABEL_3; /*0x10032c8ec*/
  }
  if ( !v4 ) /*0x10032c8fa*/
  {
    v8 = 1; /*0x10032c93a*/
    goto LABEL_18; /*0x10032c950*/
  }
  v2 = (const void *)v3; /*0x10032c8fc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10032c8ff*/
  v6 = 1; /*0x10032c904*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x10032c912*/
  if ( !v7 ) /*0x10032c91a*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x10032c8ef*/
  v8 = (__int64)v7; /*0x10032c91c*/
  memcpy(v7, v2, v5); /*0x10032c928*/
  if ( v5 < 8 ) /*0x10032c931*/
  {
    v9 = 0; /*0x10032c933*/
    goto LABEL_52; /*0x10032c935*/
  }
  if ( v5 < 0x20 ) /*0x10032c963*/
  {
    v9 = 0; /*0x10032c965*/
    goto LABEL_15; /*0x10032c967*/
  }
  v9 = v5 & 0x7FFFFFFFFFFFFFE0LL; /*0x10032c96f*/
  v10 = 0; /*0x10032c972*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10032c974*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10032c97c*/
  v13 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10032c984*/
  do /*0x10032c9e9*/
  {
    v14 = _mm_loadu_si128((const __m128i *)(v8 + v10)); /*0x10032c990*/
    v15 = _mm_loadu_si128((const __m128i *)(v8 + v10 + 16)); /*0x10032c996*/
    v16 = _mm_add_epi8(v14, si128); /*0x10032c9a1*/
    v17 = _mm_add_epi8(v15, si128); /*0x10032c9a9*/
    *(__m128i *)(v8 + v10) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v12), v16), v13), v14); /*0x10032c9d5*/
    *(__m128i *)(v8 + v10 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v12), v17), v13), v15); /*0x10032c9db*/
    v10 += 32; /*0x10032c9e2*/
  }
  while ( v9 != v10 ); /*0x10032c9e9*/
  if ( v5 == v9 ) /*0x10032c9ee*/
    goto LABEL_18; /*0x10032c9ee*/
  if ( (v5 & 0x18) != 0 ) /*0x10032c9f3*/
  {
LABEL_15:
    v18 = v9; /*0x10032c9f9*/
    v9 = v5 & 0x7FFFFFFFFFFFFFF8LL; /*0x10032ca03*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10032ca06*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10032ca0e*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10032ca16*/
    do /*0x10032ca4f*/
    {
      v22 = _mm_loadl_epi64((const __m128i *)(v8 + v18)); /*0x10032ca20*/
      v23 = _mm_add_epi8(v22, v19); /*0x10032ca2a*/
      *(_QWORD *)(v8 + v18) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v23, v20), v23), v21), v22).u64[0]; /*0x10032ca42*/
      v18 += 8; /*0x10032ca48*/
    }
    while ( v9 != v18 ); /*0x10032ca4f*/
    goto LABEL_51; /*0x10032ca4f*/
  }
  do /*0x10032cbde*/
  {
LABEL_52:
    *(_BYTE *)(v8 + v9) |= 32 * ((unsigned __int8)(*(_BYTE *)(v8 + v9) - 65) < 0x1Au); /*0x10032cbe4*/
    ++v9; /*0x10032cbfb*/
LABEL_51:
    ; /*0x10032cbdb*/
  }
  while ( v5 != v9 ); /*0x10032cbde*/
LABEL_18:
  v29[0] = 0; /*0x10032ca56*/
  v29[1] = v5; /*0x10032ca5e*/
  v29[2] = v8; /*0x10032ca62*/
  v29[3] = v5; /*0x10032ca66*/
  v29[4] = 0; /*0x10032ca6a*/
  v29[5] = v5; /*0x10032ca72*/
  v29[6] = 0x2F0000002FLL; /*0x10032ca80*/
  v30 = 1; /*0x10032ca84*/
  v31 = 1; /*0x10032ca88*/
  v24 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v29); /*0x10032ca92*/
  if ( !v24 ) /*0x10032ca9a*/
  {
    v24 = v8; /*0x10032ca9a*/
    v25 = v5; /*0x10032ca9e*/
  }
  if ( v25 >= 8 ) /*0x10032caa6*/
  {
    if ( *(_QWORD *)v24 == 0x6B65657370656564LL ) /*0x10032cad2*/
    {
      LOBYTE(v2) = 1; /*0x10032cb4b*/
      if ( !v5 ) /*0x10032cb51*/
        return (unsigned int)v2; /*0x10032cb51*/
      goto LABEL_47; /*0x10032cb51*/
    }
    LOBYTE(v2) = 2; /*0x10032cad4*/
    if ( *(_DWORD *)v24 == 1768778091 || *(_QWORD *)v24 == 0x746F68736E6F6F6DLL ) /*0x10032caf0*/
      goto LABEL_46; /*0x10032caf0*/
    goto LABEL_31; /*0x10032caf0*/
  }
  if ( v25 < 4 ) /*0x10032caac*/
  {
    if ( v25 != 3 ) /*0x10032cab2*/
    {
      LODWORD(v2) = 0; /*0x10032cab4*/
      if ( !v5 ) /*0x10032caba*/
        return (unsigned int)v2; /*0x10032caba*/
      goto LABEL_47; /*0x10032caba*/
    }
    goto LABEL_34; /*0x10032cab2*/
  }
  if ( *(_DWORD *)v24 == 1768778091 ) /*0x10032cafd*/
  {
    LOBYTE(v2) = 2; /*0x10032cb75*/
    if ( !v5 ) /*0x10032cb7b*/
      return (unsigned int)v2; /*0x10032cb7b*/
    goto LABEL_47; /*0x10032cb7b*/
  }
  if ( v25 == 7 ) /*0x10032cb03*/
  {
LABEL_31:
    if ( *(_DWORD *)v24 ^ 0x696E696D | *(_DWORD *)(v24 + 3) ^ 0x78616D69 ) /*0x10032cb14*/
      goto LABEL_32; /*0x10032cb16*/
    LOBYTE(v2) = 3; /*0x10032cb89*/
LABEL_46:
    if ( !v5 ) /*0x10032cb8f*/
      return (unsigned int)v2; /*0x10032cb8f*/
LABEL_47:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v5, 1); /*0x10032cb91*/
    return (unsigned int)v2; /*0x10032cb9c*/
  }
LABEL_32:
  if ( *(_DWORD *)v24 == 1650549345 ) /*0x10032cb1e*/
  {
    LOBYTE(v2) = 3; /*0x10032cb7f*/
    if ( !v5 ) /*0x10032cb85*/
      return (unsigned int)v2; /*0x10032cb85*/
    goto LABEL_47; /*0x10032cb85*/
  }
  if ( *(_DWORD *)v24 == 1869441389 ) /*0x10032cb26*/
  {
    LOBYTE(v2) = 4; /*0x10032cbb1*/
    if ( !v5 ) /*0x10032cbb7*/
      return (unsigned int)v2; /*0x10032cbb7*/
    goto LABEL_47; /*0x10032cbb7*/
  }
LABEL_34:
  v26 = (unsigned __int16)__ROL2__(*(_WORD *)v24, 8); /*0x10032cb2c*/
  if ( (unsigned __int16)v26 == 26476 )
    v27 = 109 - *(unsigned __int8 *)(v24 + 2); /*0x10032cb47*/
  else
    v27 = v26 < 0x676D ? 1 : -1;
  LODWORD(v2) = 5 * (v27 == 0); /*0x10032cb6a*/
  if ( v5 ) /*0x10032cb71*/
    goto LABEL_47; /*0x10032cb71*/
  return (unsigned int)v2; /*0x10032cba4*/
}