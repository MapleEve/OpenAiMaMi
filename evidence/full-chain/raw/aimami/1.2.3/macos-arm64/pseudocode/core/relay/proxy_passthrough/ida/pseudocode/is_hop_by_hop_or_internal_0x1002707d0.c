// __ZN13codexmate_lib4core5relay17proxy_passthrough25is_hop_by_hop_or_internal @ 0x1002707d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_passthrough::is_hop_by_hop_or_internal::h3ed1789462754bdd(
        void *__src,
        size_t __n)
{
  __int64 v2; // r12
  char *v3; // rax
  char *v4; // r14
  size_t v5; // rax
  unsigned int v6; // r15d
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
  bool v21; // zf
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm1

  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1002707e1*/
  {
    v2 = 0; /*0x1002707e3*/
    goto LABEL_3; /*0x1002707e3*/
  }
  if ( !__n ) /*0x1002707f4*/
    return 0; /*0x100270844*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __n); /*0x1002707f6*/
  v2 = 1; /*0x1002707fb*/
  v3 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100270809*/
  if ( !v3 ) /*0x100270811*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v2, __n); /*0x1002707e6*/
  v4 = v3; /*0x100270813*/
  memcpy(v3, __src, __n); /*0x10027081f*/
  if ( __n < 8 ) /*0x100270828*/
  {
    v5 = 0; /*0x10027082a*/
    do /*0x100270960*/
    {
LABEL_18:
      v4[v5] |= 32 * ((unsigned __int8)(v4[v5] - 65) < 0x1Au); /*0x100270943*/
      ++v5; /*0x10027095a*/
LABEL_19:
      ; /*0x10027095d*/
    }
    while ( __n != v5 ); /*0x100270960*/
    goto LABEL_20; /*0x100270960*/
  }
  if ( __n < 0x20 ) /*0x100270857*/
  {
    v5 = 0; /*0x100270859*/
    goto LABEL_15; /*0x10027085b*/
  }
  v5 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x100270863*/
  v7 = 0; /*0x100270866*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100270868*/
  v9 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100270870*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100270878*/
  do /*0x1002708d9*/
  {
    v11 = _mm_loadu_si128((const __m128i *)&v4[v7]); /*0x100270880*/
    v12 = _mm_loadu_si128((const __m128i *)&v4[v7 + 16]); /*0x100270886*/
    v13 = _mm_add_epi8(v11, si128); /*0x100270891*/
    v14 = _mm_add_epi8(v12, si128); /*0x100270899*/
    *(__m128i *)&v4[v7] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v9), v13), v10), v11); /*0x1002708c5*/
    *(__m128i *)&v4[v7 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v9), v14), v10), v12); /*0x1002708cb*/
    v7 += 32; /*0x1002708d2*/
  }
  while ( v5 != v7 ); /*0x1002708d9*/
  if ( __n != v5 ) /*0x1002708de*/
  {
    if ( (__n & 0x18) == 0 ) /*0x1002708e7*/
      goto LABEL_18; /*0x1002708e7*/
LABEL_15:
    v15 = v5; /*0x1002708e9*/
    v5 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x1002708f3*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1002708f6*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1002708fe*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100270906*/
    do /*0x10027093f*/
    {
      v19 = _mm_loadl_epi64((const __m128i *)&v4[v15]); /*0x100270910*/
      v20 = _mm_add_epi8(v19, v16); /*0x10027091a*/
      *(_QWORD *)&v4[v15] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v20, v17), v20), v18), v19).u64[0]; /*0x100270932*/
      v15 += 8LL; /*0x100270938*/
    }
    while ( v5 != v15 ); /*0x10027093f*/
    goto LABEL_19; /*0x10027093f*/
  }
LABEL_20:
  v6 = 0; /*0x100270962*/
  switch ( __n ) /*0x100270981*/
  {
    case 2uLL: /*0x100270981*/
      if ( *(_WORD *)v4 != 25972 ) /*0x100270989*/
        goto LABEL_28; /*0x100270989*/
      goto LABEL_30; /*0x100270989*/
    case 4uLL: /*0x100270981*/
      if ( *(_DWORD *)v4 != 1953722216 ) /*0x1002709f9*/
        goto LABEL_28; /*0x1002709f9*/
      goto LABEL_30; /*0x1002709f9*/
    case 6uLL: /*0x100270981*/
      v21 = (*(_DWORD *)v4 ^ 0x65707865 | *((unsigned __int16 *)v4 + 2) ^ 0x7463) == 0; /*0x1002709a3*/
      goto LABEL_39; /*0x1002709a5*/
    case 7uLL: /*0x100270981*/
      if ( !(*(_DWORD *)v4 ^ 0x72677075 | *(_DWORD *)(v4 + 3) ^ 0x65646172) ) /*0x100270a67*/
        goto LABEL_30; /*0x100270a69*/
      goto LABEL_28; /*0x100270a69*/
    case 8uLL: /*0x100270981*/
      if ( *(_QWORD *)v4 == 0x7372656C69617274LL ) /*0x100270a7a*/
        goto LABEL_30; /*0x100270a7a*/
      goto LABEL_28; /*0x100270a7a*/
    case 0xAuLL: /*0x100270981*/
      LOBYTE(v6) = 1; /*0x1002709c3*/
      if ( !(*(_QWORD *)v4 ^ 0x697463656E6E6F63LL | *((unsigned __int16 *)v4 + 4) ^ 0x6E6FLL) /*0x1002709e8*/
        || !(*(_QWORD *)v4 ^ 0x696C612D7065656BLL | *((unsigned __int16 *)v4 + 4) ^ 0x6576LL) )
      {
        break; /*0x1002709eb*/
      }
      goto LABEL_28; /*0x1002709eb*/
    case 0xEuLL: /*0x100270981*/
      if ( !(*(_QWORD *)v4 ^ 0x2D746E65746E6F63LL | *(_QWORD *)(v4 + 6) ^ 0x6874676E656C2D74LL) ) /*0x100270a1e*/
        goto LABEL_30; /*0x100270a21*/
      goto LABEL_28; /*0x100270a21*/
    case 0x11uLL: /*0x100270981*/
      v22 = _mm_or_si128( /*0x100270a49*/
              _mm_xor_si128(_mm_cvtsi32_si128((unsigned __int8)v4[16]), (__m128i)xmmword_1015DCA40),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1015DCA30));
      if ( _mm_testz_si128(v22, v22) ) /*0x100270a4d*/
LABEL_30:
        LOBYTE(v6) = 1; /*0x100270a23*/
      else
LABEL_28:
        v6 = 0; /*0x1002709fb*/
      break; /*0x100270a26*/
    case 0x12uLL: /*0x100270981*/
      v24 = _mm_or_si128( /*0x100270ac6*/
              _mm_xor_si128(_mm_cvtsi32_si128(*((unsigned __int16 *)v4 + 8)), *(__m128i *)"te"),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"proxy-authenticate"));
      v21 = _mm_testz_si128(v24, v24); /*0x100270aca*/
      goto LABEL_39; /*0x100270aca*/
    case 0x13uLL: /*0x100270981*/
      v23 = _mm_or_si128( /*0x100270a9d*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"proxy-authorizatproxy-authenticate"),
              _mm_xor_si128(
                _mm_loadu_si128((const __m128i *)(v4 + 3)),
                *(__m128i *)"xy-authorizationproxy-authorizatproxy-authenticate"));
      v21 = _mm_testz_si128(v23, v23); /*0x100270aa1*/
LABEL_39:
      LOBYTE(v6) = v21; /*0x100270acf*/
      break; /*0x100270acf*/
    default:
      break;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, __n, 1); /*0x100270ad3*/
  return v6; /*0x100270ae6*/
}