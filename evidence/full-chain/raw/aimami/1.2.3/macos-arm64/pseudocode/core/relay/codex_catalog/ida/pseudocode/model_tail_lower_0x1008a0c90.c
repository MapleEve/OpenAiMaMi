// __ZN13codexmate_lib4core5relay13codex_catalog16model_tail_lower @ 0x1008a0c90 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_catalog::model_tail_lower::hea6c4cd51fc9dd0a(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // rbx
  __int64 v10; // r15
  const void *v11; // r12
  void *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rdx
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  void *v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r13
  signed __int64 *v34; // rax
  _QWORD v36[7]; // [rsp+0h] [rbp-80h] BYREF
  char v37; // [rsp+38h] [rbp-48h]
  __int16 v38; // [rsp+40h] [rbp-40h]
  signed __int64 *v39; // [rsp+48h] [rbp-38h]
  void *__src; // [rsp+50h] [rbp-30h]

  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008a0caa*/
  v9 = v8; /*0x1008a0caf*/
  if ( v8 < 0 ) /*0x1008a0cb5*/
  {
    v10 = 0; /*0x1008a0cb7*/
    goto LABEL_3; /*0x1008a0cb7*/
  }
  if ( !v8 ) /*0x1008a0cc5*/
  {
    v13 = 1; /*0x1008a0d05*/
    v14 = v7; /*0x1008a0d10*/
    goto LABEL_18; /*0x1008a0d1b*/
  }
  v11 = (const void *)v7; /*0x1008a0cc7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1008a0cca*/
  v10 = 1; /*0x1008a0ccf*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1008a0cdd*/
  if ( !v12 ) /*0x1008a0ce5*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1008a0cba*/
  v13 = (__int64)v12; /*0x1008a0ce7*/
  v14 = (__int64)v11; /*0x1008a0ced*/
  memcpy(v12, v11, v9); /*0x1008a0cf3*/
  if ( v9 < 8 ) /*0x1008a0cfc*/
  {
    v15 = 0; /*0x1008a0cfe*/
    goto LABEL_31; /*0x1008a0d00*/
  }
  if ( v9 < 0x20 ) /*0x1008a0d2e*/
  {
    v15 = 0; /*0x1008a0d30*/
    goto LABEL_15; /*0x1008a0d32*/
  }
  v15 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008a0d3a*/
  v16 = 0; /*0x1008a0d3d*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1008a0d3f*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1008a0d47*/
  v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1008a0d4f*/
  do /*0x1008a0db9*/
  {
    v19 = _mm_loadu_si128((const __m128i *)(v13 + v16)); /*0x1008a0d60*/
    v20 = _mm_loadu_si128((const __m128i *)(v13 + v16 + 16)); /*0x1008a0d66*/
    v21 = _mm_add_epi8(v19, si128); /*0x1008a0d71*/
    v22 = _mm_add_epi8(v20, si128); /*0x1008a0d79*/
    *(__m128i *)(v13 + v16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19); /*0x1008a0da5*/
    *(__m128i *)(v13 + v16 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18), v20); /*0x1008a0dab*/
    v16 += 32; /*0x1008a0db2*/
  }
  while ( v15 != v16 ); /*0x1008a0db9*/
  if ( v9 == v15 ) /*0x1008a0dbe*/
    goto LABEL_18; /*0x1008a0dbe*/
  if ( (v9 & 0x18) != 0 ) /*0x1008a0dc3*/
  {
LABEL_15:
    v23 = v15; /*0x1008a0dc9*/
    v15 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008a0dd3*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1008a0dd6*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1008a0dde*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1008a0de6*/
    do /*0x1008a0e1f*/
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v13 + v23)); /*0x1008a0df0*/
      v27 = _mm_add_epi8(v26, si128); /*0x1008a0dfa*/
      *(_QWORD *)(v13 + v23) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).u64[0]; /*0x1008a0e12*/
      v23 += 8; /*0x1008a0e18*/
    }
    while ( v15 != v23 ); /*0x1008a0e1f*/
    goto LABEL_30; /*0x1008a0e1f*/
  }
  do /*0x1008a0f32*/
  {
LABEL_31:
    *(_BYTE *)(v13 + v15) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v15) - 65) < 0x1Au); /*0x1008a0f38*/
    ++v15; /*0x1008a0f4f*/
LABEL_30:
    ; /*0x1008a0f2f*/
  }
  while ( v9 != v15 ); /*0x1008a0f32*/
LABEL_18:
  v36[0] = 0; /*0x1008a0e26*/
  v36[1] = v9; /*0x1008a0e2e*/
  v36[2] = v13; /*0x1008a0e32*/
  v36[3] = v9; /*0x1008a0e36*/
  v36[4] = 0; /*0x1008a0e3a*/
  v36[5] = v9; /*0x1008a0e42*/
  v36[6] = 0x2F0000002FLL; /*0x1008a0e50*/
  v37 = 1; /*0x1008a0e54*/
  v38 = 1; /*0x1008a0e58*/
  v28 = (void *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v36); /*0x1008a0e62*/
  v30 = v29; /*0x1008a0e67*/
  if ( !v28 ) /*0x1008a0e6d*/
  {
    v28 = (void *)v13; /*0x1008a0e6d*/
    v30 = v9; /*0x1008a0e71*/
  }
  if ( v30 < 0 ) /*0x1008a0e78*/
  {
    v31 = 0; /*0x1008a0e7a*/
    goto LABEL_22; /*0x1008a0e7a*/
  }
  v39 = a1; /*0x1008a0e8a*/
  if ( v30 ) /*0x1008a0e8e*/
  {
    __src = v28; /*0x1008a0e90*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v14); /*0x1008a0e94*/
    v31 = 1; /*0x1008a0e99*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x1008a0ea7*/
    if ( !v32 ) /*0x1008a0eaf*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x1008a0e7d*/
    v33 = v32; /*0x1008a0eb1*/
    v28 = __src; /*0x1008a0eb4*/
  }
  else
  {
    v33 = 1; /*0x1008a0eba*/
  }
  memcpy((void *)v33, v28, v30); /*0x1008a0ec9*/
  v34 = v39; /*0x1008a0ece*/
  *v39 = v30; /*0x1008a0ed2*/
  v34[1] = v33; /*0x1008a0ed5*/
  v34[2] = v30; /*0x1008a0ed9*/
  if ( v9 ) /*0x1008a0ee0*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x1008a0efb*/
  return *(double *)si128.i64; /*0x1008a0eed*/
}