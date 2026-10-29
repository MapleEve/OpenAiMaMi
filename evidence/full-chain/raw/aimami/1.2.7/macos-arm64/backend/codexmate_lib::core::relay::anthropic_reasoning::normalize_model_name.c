// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba; addr: 0x100897710; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
double __fastcall codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __m128i si128)
{
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  size_t v9; // rbx
  __int64 v10; // r15
  unsigned __int8 *v11; // r14
  void *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  unsigned __int8 *v27; // r13
  __int64 v28; // r8
  size_t v29; // r9
  unsigned __int8 *v30; // rbx
  __int64 v31; // r14
  unsigned __int8 *v32; // rax
  __int64 v33; // r15
  int v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // esi
  size_t v38; // r15
  size_t v39; // r9
  size_t v40; // r14
  _QWORD *v41; // r15
  size_t v42; // r13
  size_t v43; // r13
  __int64 v44; // rcx
  size_t v46; // [rsp+0h] [rbp-70h]
  __int64 v47; // [rsp+8h] [rbp-68h]
  __int64 v48; // [rsp+10h] [rbp-60h]
  _QWORD *v49; // [rsp+18h] [rbp-58h]
  size_t v50; // [rsp+20h] [rbp-50h]
  __int64 v51; // [rsp+28h] [rbp-48h]
  __int64 v52; // [rsp+30h] [rbp-40h] BYREF
  __int64 v53; // [rsp+38h] [rbp-38h]
  size_t v54; // [rsp+40h] [rbp-30h]

  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a2, a3); /*0x10089772a*/
  v9 = v8; /*0x10089772f*/
  if ( v8 < 0 ) /*0x100897735*/
  {
    v10 = 0; /*0x100897737*/
    goto LABEL_3; /*0x100897737*/
  }
  v49 = a1; /*0x100897745*/
  if ( !v8 ) /*0x100897749*/
  {
    v13 = 1; /*0x100897789*/
    goto LABEL_18; /*0x10089779f*/
  }
  v11 = v7; /*0x10089774b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3, v8); /*0x10089774e*/
  v10 = 1; /*0x100897753*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100897761*/
  if ( !v12 ) /*0x100897769*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10089773a*/
  v13 = (__int64)v12; /*0x10089776b*/
  memcpy(v12, v11, v9); /*0x100897777*/
  if ( v9 >= 8 ) /*0x100897780*/
  {
    if ( v9 >= 0x20 ) /*0x1008977b2*/
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008977be*/
      v15 = 0; /*0x1008977c1*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A00); /*0x1008977c3*/
      v16 = _mm_load_si128((const __m128i *)&xmmword_1016E9A10); /*0x1008977cb*/
      v17 = _mm_load_si128((const __m128i *)&xmmword_1016E9A20); /*0x1008977d3*/
      do /*0x100897839*/
      {
        v18 = _mm_loadu_si128((const __m128i *)(v13 + v15)); /*0x1008977e0*/
        v19 = _mm_loadu_si128((const __m128i *)(v13 + v15 + 16)); /*0x1008977e6*/
        v20 = _mm_add_epi8(v18, si128); /*0x1008977f1*/
        v21 = _mm_add_epi8(v19, si128); /*0x1008977f9*/
        *(__m128i *)(v13 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18); /*0x100897825*/
        *(__m128i *)(v13 + v15 + 16) = _mm_or_si128( /*0x10089782b*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17),
                                         v19);
        v15 += 32; /*0x100897832*/
      }
      while ( v14 != v15 ); /*0x100897839*/
      if ( v9 == v14 ) /*0x10089783e*/
        goto LABEL_18; /*0x10089783e*/
      if ( (v9 & 0x18) == 0 ) /*0x100897843*/
        goto LABEL_43; /*0x100897843*/
    }
    else
    {
      v14 = 0; /*0x1008977b4*/
    }
    v22 = v14; /*0x100897849*/
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x100897853*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9A30); /*0x100897856*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1016E9A40); /*0x10089785e*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1016E9A50); /*0x100897866*/
    do /*0x10089789f*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)(v13 + v22)); /*0x100897870*/
      v26 = _mm_add_epi8(v25, si128); /*0x10089787a*/
      *(_QWORD *)(v13 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x100897892*/
      v22 += 8; /*0x100897898*/
    }
    while ( v14 != v22 ); /*0x10089789f*/
    goto LABEL_42; /*0x10089789f*/
  }
  v14 = 0; /*0x100897782*/
  do /*0x100897b1d*/
  {
LABEL_43:
    *(_BYTE *)(v13 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v14) - 65) < 0x1Au); /*0x100897b23*/
    ++v14; /*0x100897b3a*/
LABEL_42:
    ; /*0x100897b1a*/
  }
  while ( v9 != v14 ); /*0x100897b1d*/
LABEL_18:
  v52 = 0; /*0x1008978a6*/
  v53 = 1; /*0x1008978ae*/
  v54 = 0; /*0x1008978b6*/
  v50 = v9; /*0x1008978be*/
  v27 = (unsigned __int8 *)(v13 + v9); /*0x1008978c2*/
  v28 = 1; /*0x1008978c6*/
  v29 = 0; /*0x1008978cc*/
  v30 = (unsigned __int8 *)v13; /*0x1008978cf*/
  v51 = 0; /*0x1008978d2*/
  v31 = 0; /*0x1008978da*/
LABEL_19:
  v32 = v30; /*0x1008978dd*/
  while ( v32 != v27 ) /*0x1008978e3*/
  {
    v33 = v31; /*0x1008978e9*/
    v34 = *v32; /*0x1008978ec*/
    if ( (v34 & 0x80u) != 0 ) /*0x1008978f1*/
    {
      v35 = v34 & 0x1F; /*0x100897902*/
      v36 = v32[1] & 0x3F; /*0x100897909*/
      if ( (unsigned __int8)v34 <= 0xDFu ) /*0x10089790f*/
      {
        v30 = v32 + 2; /*0x10089793c*/
        v34 = v36 | (v35 << 6); /*0x100897945*/
      }
      else
      {
        v37 = (v36 << 6) | v32[2] & 0x3F; /*0x10089791b*/
        if ( (unsigned __int8)v34 < 0xF0u ) /*0x100897920*/
        {
          v30 = v32 + 3; /*0x100897949*/
          v34 = (v35 << 12) | v37; /*0x100897952*/
        }
        else
        {
          v30 = v32 + 4; /*0x100897922*/
          v34 = ((v34 & 7) << 18) | (v37 << 6) | v32[3] & 0x3F; /*0x100897938*/
        }
      }
    }
    else
    {
      v30 = v32 + 1; /*0x1008978f3*/
    }
    v31 += v30 - v32; /*0x100897966*/
    if ( v34 != 46 ) /*0x10089796c*/
    {
      v32 = v30; /*0x10089796e*/
      if ( v34 != 95 ) /*0x100897974*/
        continue; /*0x100897974*/
    }
    v38 = v33 - v51; /*0x10089797a*/
    if ( v38 > v52 - v29 ) /*0x10089798b*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v52, v29, v38, 1, 1); /*0x1008979ee*/
      v29 = v54; /*0x1008979f3*/
      v48 = v52; /*0x1008979fb*/
      v28 = v53; /*0x1008979ff*/
    }
    else
    {
      v48 = v52; /*0x10089798d*/
    }
    v47 = v28; /*0x100897991*/
    v46 = v29; /*0x100897995*/
    memcpy((void *)(v28 + v29), (const void *)(v13 + v51), v38); /*0x1008979a7*/
    v28 = v47; /*0x1008979ac*/
    v39 = v38 + v46; /*0x1008979b4*/
    v54 = v38 + v46; /*0x1008979b7*/
    if ( v48 == v38 + v46 ) /*0x1008979c2*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v52, v48, 1, 1, 1); /*0x100897a19*/
      v28 = v53; /*0x100897a1e*/
      v39 = v54; /*0x100897a22*/
    }
    *(_BYTE *)(v28 + v39) = 45; /*0x1008979c4*/
    v29 = v39 + 1; /*0x1008979c9*/
    v54 = v29; /*0x1008979cc*/
    v51 = v31; /*0x1008979d0*/
    goto LABEL_19; /*0x1008979d4*/
  }
  v40 = v50 - v51; /*0x100897a2f*/
  if ( v50 - v51 > v52 - v29 ) /*0x100897a3d*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v52, v29, v50 - v51, 1, 1); /*0x100897abd*/
    v41 = v49; /*0x100897ac2*/
    v29 = v54; /*0x100897ac6*/
  }
  else
  {
    v41 = v49; /*0x100897a3f*/
  }
  v42 = v29; /*0x100897a54*/
  memcpy((void *)(v29 + v53), (const void *)(v13 + v51), v40); /*0x100897a57*/
  v43 = v40 + v42; /*0x100897a5c*/
  v54 = v43; /*0x100897a5f*/
  v44 = v53; /*0x100897a67*/
  *v41 = v52; /*0x100897a6b*/
  v41[1] = v44; /*0x100897a6e*/
  v41[2] = v43; /*0x100897a72*/
  if ( v50 ) /*0x100897a79*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v50, 1); /*0x100897a94*/
  return *(double *)si128.i64; /*0x100897a86*/
}