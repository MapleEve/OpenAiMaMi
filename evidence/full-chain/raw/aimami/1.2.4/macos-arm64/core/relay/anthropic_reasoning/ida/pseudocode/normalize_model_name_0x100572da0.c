// __ZN13codexmate_lib4core5relay19anthropic_reasoning20normalize_model_name @ 0x100572da0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h2cf7ed6a4a525668(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v9; // rbx
  __int64 v10; // r15
  const void *v11; // r14
  void *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  unsigned __int8 *v29; // r13
  __int64 v30; // r8
  size_t v31; // r9
  unsigned __int8 *v32; // rbx
  __int64 v33; // r14
  unsigned __int8 *v34; // rax
  __int64 v35; // r15
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // esi
  size_t v40; // r15
  __int64 v41; // r9
  size_t v42; // r14
  __int64 *v43; // r15
  size_t v44; // r13
  __int64 v45; // r13
  __int64 result; // rax
  __int64 v47; // rcx
  size_t v48; // [rsp+0h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-68h]
  __int64 v50; // [rsp+10h] [rbp-60h]
  __int64 *v51; // [rsp+18h] [rbp-58h]
  size_t v52; // [rsp+20h] [rbp-50h]
  __int64 v53; // [rsp+28h] [rbp-48h]
  __int64 v54; // [rsp+30h] [rbp-40h] BYREF
  __int64 v55; // [rsp+38h] [rbp-38h]
  __int64 v56; // [rsp+40h] [rbp-30h]

  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a2, a3); /*0x100572dba*/
  v9 = v7; /*0x100572dbf*/
  if ( v7 < 0 ) /*0x100572dc5*/
  {
    v10 = 0; /*0x100572dc7*/
    goto LABEL_3; /*0x100572dc7*/
  }
  v51 = a1; /*0x100572dd5*/
  if ( !v7 ) /*0x100572dd9*/
  {
    v13 = 1; /*0x100572e19*/
    goto LABEL_18; /*0x100572e2f*/
  }
  v11 = (const void *)v6; /*0x100572ddb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3, v7, v8); /*0x100572dde*/
  v10 = 1; /*0x100572de3*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100572df1*/
  if ( !v12 ) /*0x100572df9*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x100572dca*/
  v13 = (__int64)v12; /*0x100572dfb*/
  memcpy(v12, v11, v9); /*0x100572e07*/
  if ( v9 >= 8 ) /*0x100572e10*/
  {
    if ( v9 >= 0x20 ) /*0x100572e42*/
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x100572e4e*/
      v15 = 0; /*0x100572e51*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x100572e53*/
      v17 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x100572e5b*/
      v18 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x100572e63*/
      do /*0x100572ec9*/
      {
        v19 = _mm_loadu_si128((const __m128i *)(v13 + v15)); /*0x100572e70*/
        v20 = _mm_loadu_si128((const __m128i *)(v13 + v15 + 16)); /*0x100572e76*/
        v21 = _mm_add_epi8(v19, si128); /*0x100572e81*/
        v22 = _mm_add_epi8(v20, si128); /*0x100572e89*/
        *(__m128i *)(v13 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19); /*0x100572eb5*/
        *(__m128i *)(v13 + v15 + 16) = _mm_or_si128( /*0x100572ebb*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18),
                                         v20);
        v15 += 32; /*0x100572ec2*/
      }
      while ( v14 != v15 ); /*0x100572ec9*/
      if ( v9 == v14 ) /*0x100572ece*/
        goto LABEL_18; /*0x100572ece*/
      if ( (v9 & 0x18) == 0 ) /*0x100572ed3*/
        goto LABEL_43; /*0x100572ed3*/
    }
    else
    {
      v14 = 0; /*0x100572e44*/
    }
    v23 = v14; /*0x100572ed9*/
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x100572ee3*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100572ee6*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x100572eee*/
    v26 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100572ef6*/
    do /*0x100572f2f*/
    {
      v27 = _mm_loadl_epi64((const __m128i *)(v13 + v23)); /*0x100572f00*/
      v28 = _mm_add_epi8(v27, v24); /*0x100572f0a*/
      *(_QWORD *)(v13 + v23) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v28, v25), v28), v26), v27).u64[0]; /*0x100572f22*/
      v23 += 8; /*0x100572f28*/
    }
    while ( v14 != v23 ); /*0x100572f2f*/
    goto LABEL_42; /*0x100572f2f*/
  }
  v14 = 0; /*0x100572e12*/
  do /*0x1005731ad*/
  {
LABEL_43:
    *(_BYTE *)(v13 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v14) - 65) < 0x1Au); /*0x1005731b3*/
    ++v14; /*0x1005731ca*/
LABEL_42:
    ; /*0x1005731aa*/
  }
  while ( v9 != v14 ); /*0x1005731ad*/
LABEL_18:
  v54 = 0; /*0x100572f36*/
  v55 = 1; /*0x100572f3e*/
  v56 = 0; /*0x100572f46*/
  v52 = v9; /*0x100572f4e*/
  v29 = (unsigned __int8 *)(v13 + v9); /*0x100572f52*/
  v30 = 1; /*0x100572f56*/
  v31 = 0; /*0x100572f5c*/
  v32 = (unsigned __int8 *)v13; /*0x100572f5f*/
  v53 = 0; /*0x100572f62*/
  v33 = 0; /*0x100572f6a*/
LABEL_19:
  v34 = v32; /*0x100572f6d*/
  while ( v34 != v29 ) /*0x100572f73*/
  {
    v35 = v33; /*0x100572f79*/
    v36 = *v34; /*0x100572f7c*/
    if ( (v36 & 0x80u) != 0 ) /*0x100572f81*/
    {
      v37 = v36 & 0x1F; /*0x100572f92*/
      v38 = v34[1] & 0x3F; /*0x100572f99*/
      if ( (unsigned __int8)v36 <= 0xDFu ) /*0x100572f9f*/
      {
        v32 = v34 + 2; /*0x100572fcc*/
        v36 = v38 | (v37 << 6); /*0x100572fd5*/
      }
      else
      {
        v39 = (v38 << 6) | v34[2] & 0x3F; /*0x100572fab*/
        if ( (unsigned __int8)v36 < 0xF0u ) /*0x100572fb0*/
        {
          v32 = v34 + 3; /*0x100572fd9*/
          v36 = (v37 << 12) | v39; /*0x100572fe2*/
        }
        else
        {
          v32 = v34 + 4; /*0x100572fb2*/
          v36 = ((v36 & 7) << 18) | (v39 << 6) | v34[3] & 0x3F; /*0x100572fc8*/
        }
      }
    }
    else
    {
      v32 = v34 + 1; /*0x100572f83*/
    }
    v33 += v32 - v34; /*0x100572ff6*/
    if ( v36 != 46 ) /*0x100572ffc*/
    {
      v34 = v32; /*0x100572ffe*/
      if ( v36 != 95 ) /*0x100573004*/
        continue; /*0x100573004*/
    }
    v40 = v35 - v53; /*0x10057300a*/
    if ( v40 > v54 - v31 ) /*0x10057301b*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v54, v31, v40, 1, 1); /*0x10057307e*/
      v31 = v56; /*0x100573083*/
      v50 = v54; /*0x10057308b*/
      v30 = v55; /*0x10057308f*/
    }
    else
    {
      v50 = v54; /*0x10057301d*/
    }
    v49 = v30; /*0x100573021*/
    v48 = v31; /*0x100573025*/
    memcpy((void *)(v30 + v31), (const void *)(v13 + v53), v40); /*0x100573037*/
    v30 = v49; /*0x10057303c*/
    v41 = v40 + v48; /*0x100573044*/
    v56 = v40 + v48; /*0x100573047*/
    if ( v50 == v40 + v48 ) /*0x100573052*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v54, v50, 1, 1, 1); /*0x1005730a9*/
      v30 = v55; /*0x1005730ae*/
      v41 = v56; /*0x1005730b2*/
    }
    *(_BYTE *)(v30 + v41) = 45; /*0x100573054*/
    v31 = v41 + 1; /*0x100573059*/
    v56 = v31; /*0x10057305c*/
    v53 = v33; /*0x100573060*/
    goto LABEL_19; /*0x100573064*/
  }
  v42 = v52 - v53; /*0x1005730bf*/
  if ( v52 - v53 > v54 - v31 ) /*0x1005730cd*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v54, v31, v52 - v53, 1, 1); /*0x10057314d*/
    v43 = v51; /*0x100573152*/
    v31 = v56; /*0x100573156*/
  }
  else
  {
    v43 = v51; /*0x1005730cf*/
  }
  v44 = v31; /*0x1005730e4*/
  memcpy((void *)(v31 + v55), (const void *)(v13 + v53), v42); /*0x1005730e7*/
  v45 = v42 + v44; /*0x1005730ec*/
  v56 = v45; /*0x1005730ef*/
  result = v54; /*0x1005730f3*/
  v47 = v55; /*0x1005730f7*/
  *v43 = v54; /*0x1005730fb*/
  v43[1] = v47; /*0x1005730fe*/
  v43[2] = v45; /*0x100573102*/
  if ( v52 ) /*0x100573109*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v52, 1); /*0x100573124*/
  return result; /*0x100573116*/
}