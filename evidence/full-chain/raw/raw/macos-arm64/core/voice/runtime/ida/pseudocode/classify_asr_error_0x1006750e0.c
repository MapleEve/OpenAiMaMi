// __ZN13codexmate_lib4core5voice7runtime18classify_asr_error @ 0x1006750e0 | 基线 same-set
void __fastcall codexmate_lib::core::voice::runtime::classify_asr_error::hf198f9c48248a5db(
        __int64 *a1,
        const void *a2,
        size_t a3)
{
  __int64 v4; // r13
  void *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  char *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 *v26; // rax
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // rdi
  __int64 v32; // rsi
  char *v33; // rdi
  __int64 v34; // rsi

  if ( (a3 & 0x8000000000000000LL) != 0LL ) /*0x1006750f4*/
  {
    v4 = 0; /*0x1006750f6*/
    goto LABEL_3; /*0x1006750f6*/
  }
  if ( !a3 ) /*0x100675107*/
  {
    v7 = 1; /*0x100675147*/
    goto LABEL_20; /*0x10067515a*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10067510c*/
  v4 = 1; /*0x100675111*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10067511f*/
  if ( !v6 ) /*0x100675127*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x1006750f9*/
  v7 = (__int64)v6; /*0x100675129*/
  memcpy(v6, a2, a3); /*0x100675135*/
  if ( a3 < 8 ) /*0x10067513e*/
  {
    v8 = 0; /*0x100675140*/
    goto LABEL_18; /*0x100675142*/
  }
  if ( a3 < 0x20 ) /*0x10067516d*/
  {
    v8 = 0; /*0x10067516f*/
    goto LABEL_15; /*0x100675171*/
  }
  v8 = a3 & 0x7FFFFFFFFFFFFFE0LL; /*0x100675179*/
  v9 = 0; /*0x10067517c*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10067517e*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100675186*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10067518e*/
  do /*0x1006751f9*/
  {
    v13 = _mm_loadu_si128((const __m128i *)(v7 + v9)); /*0x1006751a0*/
    v14 = _mm_loadu_si128((const __m128i *)(v7 + v9 + 16)); /*0x1006751a6*/
    v15 = _mm_add_epi8(v13, si128); /*0x1006751b1*/
    v16 = _mm_add_epi8(v14, si128); /*0x1006751b9*/
    *(__m128i *)(v7 + v9) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v15, v11), v15), v12), v13); /*0x1006751e5*/
    *(__m128i *)(v7 + v9 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v11), v16), v12), v14); /*0x1006751eb*/
    v9 += 32; /*0x1006751f2*/
  }
  while ( v8 != v9 ); /*0x1006751f9*/
  if ( a3 == v8 ) /*0x1006751fe*/
    goto LABEL_20; /*0x1006751fe*/
  if ( (a3 & 0x18) != 0 ) /*0x100675207*/
  {
LABEL_15:
    v17 = v8; /*0x100675209*/
    v8 = a3 & 0x7FFFFFFFFFFFFFF8LL; /*0x100675213*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100675216*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10067521e*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100675226*/
    do /*0x10067525f*/
    {
      v21 = _mm_loadl_epi64((const __m128i *)(v7 + v17)); /*0x100675230*/
      v22 = _mm_add_epi8(v21, v18); /*0x10067523a*/
      *(_QWORD *)(v7 + v17) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v22, v19), v22), v20), v21).u64[0]; /*0x100675252*/
      v17 += 8; /*0x100675258*/
    }
    while ( v8 != v17 ); /*0x10067525f*/
    goto LABEL_19; /*0x10067525f*/
  }
  do /*0x100675280*/
  {
LABEL_18:
    *(_BYTE *)(v7 + v8) |= 32 * ((unsigned __int8)(*(_BYTE *)(v7 + v8) - 65) < 0x1Au); /*0x100675263*/
    ++v8; /*0x10067527a*/
LABEL_19:
    ; /*0x10067527d*/
  }
  while ( a3 != v8 ); /*0x100675280*/
LABEL_20:
  v23 = "invalid api-keyinvalidapikeyunauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech"; /*0x100675282*/
  v24 = 15; /*0x100675289*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1006752e5*/
                          "invalid api-keyinvalidapikeyunauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
                          0xFu,
                          (void *)v7)
    || (v23 = "invalidapikeyunauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
        v24 = 13,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "invalidapikeyunauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
                           0xDu,
                           (void *)v7))
    || (v23 = "unauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
        v24 = 12,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "unauthorized401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
                           0xCu,
                           (void *)v7))
    || (v23 = "401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
        v24 = 3,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "401quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
                           3u,
                           (void *)v7)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v24); /*0x1006752ee*/
    v25 = 11; /*0x1006752f3*/
    v26 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100675303*/
    if ( v26 ) /*0x10067530b*/
    {
      qmemcpy(v26, "auth_failed", 11); /*0x10067531b*/
      v27 = 11; /*0x100675325*/
      goto LABEL_26; /*0x100675325*/
    }
LABEL_48:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v25); /*0x10067558a*/
  }
  v28 = "quotainsufficientbalancenotinvalidtimed outtimeoutno speech"; /*0x10067535c*/
  v29 = 5; /*0x100675363*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1006753a4*/
                          "quotainsufficientbalancenotinvalidtimed outtimeoutno speech",
                          5u,
                          (void *)v7)
    || (v28 = "insufficientbalancenotinvalidtimed outtimeoutno speech",
        v29 = 12,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "insufficientbalancenotinvalidtimed outtimeoutno speech",
                           0xCu,
                           (void *)v7))
    || (v28 = "balancenotinvalidtimed outtimeoutno speech",
        v29 = 7,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "balancenotinvalidtimed outtimeoutno speech",
                           7u,
                           (void *)v7)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29); /*0x1006753ad*/
    v25 = 15; /*0x1006753b2*/
    v26 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1006753c2*/
    if ( !v26 ) /*0x1006753ca*/
      goto LABEL_48; /*0x1006753ca*/
    *(__int64 *)((char *)v26 + 7) = 0x6465747375616878LL; /*0x1006753da*/
    v30 = 0x78655F61746F7571LL; /*0x1006753de*/
LABEL_33:
    *v26 = v30; /*0x1006753e8*/
    v27 = 15; /*0x1006753eb*/
    goto LABEL_26; /*0x1006753f0*/
  }
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100675441*/
                          "model",
                          5u,
                          (void *)v7)
    && ((v31 = "notinvalidtimed outtimeoutno speech",
         v32 = 3,
         (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "notinvalidtimed outtimeoutno speech",
                            3u,
                            (void *)v7))
     || (v31 = "invalidtimed outtimeoutno speech",
         v32 = 7,
         (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "invalidtimed outtimeoutno speech",
                            7u,
                            (void *)v7))) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v32); /*0x10067544a*/
    v25 = 17; /*0x10067544f*/
    v26 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x10067545f*/
    if ( !v26 ) /*0x100675467*/
      goto LABEL_48; /*0x100675467*/
    qmemcpy(v26, "model_unavailable", 17); /*0x100675485*/
    v27 = 17; /*0x10067548c*/
  }
  else
  {
    v33 = "timed outtimeoutno speech"; /*0x100675496*/
    v34 = 9; /*0x10067549d*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1006754c3*/
                            "timed outtimeoutno speech",
                            9u,
                            (void *)v7)
      || (v33 = "timeoutno speech",
          v34 = 7,
          (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             "timeoutno speech",
                             7u,
                             (void *)v7)) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34); /*0x1006754cc*/
      v25 = 15; /*0x1006754d1*/
      v26 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1006754e1*/
      if ( !v26 ) /*0x1006754e9*/
        goto LABEL_48; /*0x1006754e9*/
      *(__int64 *)((char *)v26 + 7) = 0x74756F656D69745FLL; /*0x1006754f9*/
      v30 = 0x5F6B726F7774656ELL; /*0x1006754fd*/
      goto LABEL_33; /*0x100675507*/
    }
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100675525*/
                             "no speech",
                             9u,
                             (void *)v7) )
    {
      *a1 = 0x8000000000000000LL; /*0x10067556f*/
      if ( a3 ) /*0x100675575*/
        goto LABEL_27; /*0x100675575*/
      return; /*0x100675575*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("no speech", 9); /*0x100675527*/
    v25 = 9; /*0x10067552c*/
    v26 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x10067553c*/
    if ( !v26 ) /*0x100675544*/
      goto LABEL_48; /*0x100675544*/
    *v26 = 0x63656570735F6F6ELL; /*0x100675550*/
    *((_BYTE *)v26 + 8) = 104; /*0x100675553*/
    v27 = 9; /*0x100675557*/
  }
LABEL_26:
  *a1 = v27; /*0x10067532a*/
  a1[1] = (__int64)v26; /*0x10067532d*/
  a1[2] = v27; /*0x100675331*/
  if ( a3 ) /*0x100675338*/
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, a3, 1); /*0x10067533e*/
}