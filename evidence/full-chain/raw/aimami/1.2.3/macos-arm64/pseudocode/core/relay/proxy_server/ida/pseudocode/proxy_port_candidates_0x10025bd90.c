// __ZN13codexmate_lib4core5relay12proxy_server21proxy_port_candidates @ 0x10025bd90 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::proxy_server::proxy_port_candidates::h71b8d24aafff7533(
        __int64 *a1,
        __int64 a2,
        __int16 a3)
{
  _WORD *v5; // rax
  int v6; // r12d
  int v7; // r13d
  unsigned int v8; // r13d
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rdi
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-40h] BYREF
  _WORD *v18; // [rsp+8h] [rbp-38h]
  __int64 v19; // [rsp+10h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025bdaa*/
  v5 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(258, 2); /*0x10025bdb9*/
  if ( !v5 ) /*0x10025bdc1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(2, 258); /*0x10025bf3b*/
  v17 = 129; /*0x10025bdc7*/
  v18 = v5; /*0x10025bdcf*/
  v19 = 0; /*0x10025bdd3*/
  if ( ((a3 != 0) & (unsigned __int8)a2) != 0 ) /*0x10025bde5*/
  {
    *v5 = a3; /*0x10025bde7*/
    v19 = 1; /*0x10025bdeb*/
  }
  v6 = 0; /*0x10025bdf3*/
  do /*0x10025be29*/
  {
    v7 = v6++; /*0x10025be2f*/
    v8 = v7 + 25817; /*0x10025be36*/
    v9 = v19; /*0x10025be41*/
    v10 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v8), 0), 68); /*0x10025be5f*/
    v11 = 0; /*0x10025be64*/
    while ( (v19 & 0x3FFFFFFFFFFFFFE0LL) != v11 ) /*0x10025be73*/
    {
      v12 = _mm_movemask_epi8( /*0x10025bea8*/
              _mm_packs_epi16(
                _mm_or_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)&v18[v11 + 16]), v10),
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)&v18[v11]), v10)),
                _mm_or_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)&v18[v11 + 24]), v10),
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)&v18[v11 + 8]), v10))));
      v11 += 32; /*0x10025bead*/
      if ( v12 ) /*0x10025beb4*/
        goto LABEL_6; /*0x10025beb4*/
    }
    v13 = 0; /*0x10025bec2*/
    while ( (v19 & 0x1F) != v13 ) /*0x10025bed3*/
    {
      if ( v18[(v19 & 0x3FFFFFFFFFFFFFE0LL) + v13++] == (unsigned __int16)v8 ) /*0x10025bed5*/
        goto LABEL_6; /*0x10025bede*/
    }
    if ( v19 == v17 ) /*0x10025bef4*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc0e3149fb227f0a2(&v17, *(double *)v10.i64); /*0x10025befe*/
    v18[v9] = v8; /*0x10025be14*/
    v19 = v9 + 1; /*0x10025be1c*/
LABEL_6:
    ; /*0x10025be20*/
  }
  while ( (unsigned __int16)v6 != 128 ); /*0x10025be29*/
  a1[2] = v19; /*0x10025bf0c*/
  v15 = v17; /*0x10025bf10*/
  a1[1] = (__int64)v18; /*0x10025bf18*/
  *a1 = v15; /*0x10025bf1c*/
  return a1; /*0x10025bf22*/
}