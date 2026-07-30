// __ZN13codexmate_lib4core5relay13codex_catalog29find_official_reasoning_model @ 0x100222ee0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model::h5e270f64266c46df(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v7; // r12
  size_t v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // r15
  const void *v17; // r14
  __int64 v18; // r12
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm5
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __int64 v29; // rcx
  __m128i si128; // xmm3
  __m128i v31; // xmm4
  __m128i v32; // xmm5
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  bool v35; // r14
  size_t v36; // rsi
  size_t v37; // r12
  _BYTE *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rbx
  char v41[16]; // [rsp+8h] [rbp-98h] BYREF
  __int64 v42; // [rsp+18h] [rbp-88h]
  _QWORD v43[3]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v44; // [rsp+38h] [rbp-68h] BYREF
  void *__s2; // [rsp+40h] [rbp-60h]
  size_t v46; // [rsp+48h] [rbp-58h]
  size_t v47; // [rsp+50h] [rbp-50h] BYREF
  size_t v48; // [rsp+58h] [rbp-48h]
  unsigned __int64 v49; // [rsp+60h] [rbp-40h]
  __int64 v50; // [rsp+68h] [rbp-38h]
  __int64 v51; // [rsp+70h] [rbp-30h]

  codexmate_lib::core::relay::codex_catalog::model_tail_lower::he109e56107835c31(&v47, a1, a2); /*0x100222f07*/
  if ( v49 != 7 ) /*0x100222f18*/
  {
    if ( v49 > 7 ) /*0x100222f81*/
    {
      v7 = *(_QWORD *)v48 == 0x2D362E352D747067LL; /*0x100222fa5*/
      v8 = v47; /*0x100222fa9*/
      if ( !v47 ) /*0x100222fb0*/
        goto LABEL_4; /*0x100222fb0*/
    }
    else
    {
      v7 = 0; /*0x100222f83*/
      v8 = v47; /*0x100222f86*/
      if ( !v47 ) /*0x100222f8d*/
        goto LABEL_4; /*0x100222f8d*/
    }
    goto LABEL_3; /*0x100222f8d*/
  }
  v7 = (*(_DWORD *)v48 ^ 0x2D747067 | *(_DWORD *)(v48 + 3) ^ 0x362E352D) == 0; /*0x100222f2b*/
  v8 = v47; /*0x100222f2f*/
  if ( v47 ) /*0x100222f36*/
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v8, 1); /*0x100222f38*/
LABEL_4:
  if ( !v7 ) /*0x100222f45*/
    return 0; /*0x100222f93*/
  codexmate_lib::core::relay::codex_catalog::model_tail_lower::he109e56107835c31(&v44, a1, a2); /*0x100222f54*/
  v51 = a3 + 32 * a4; /*0x100222f63*/
  v43[1] = v51; /*0x100222f67*/
  v43[2] = &v44; /*0x100222f6b*/
  if ( !a4 ) /*0x100222f72*/
  {
LABEL_57:
    result = 0; /*0x1002232e7*/
    v39 = v44; /*0x1002232e9*/
    if ( v44 ) /*0x1002232f0*/
      goto LABEL_58; /*0x1002232f0*/
    return result; /*0x1002232f0*/
  }
  v9 = a3; /*0x100222f78*/
  v10 = v51; /*0x100222f7b*/
  while ( 1 ) /*0x100222fc9*/
  {
    v12 = v9; /*0x100222fc9*/
    v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100222fdb*/
            "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
            4,
            v9);
    v9 += 32; /*0x100222fe0*/
    if ( v13 ) /*0x100222fe7*/
    {
      if ( *(_BYTE *)v13 == 3 ) /*0x100222fec*/
        break; /*0x100222fec*/
    }
LABEL_14:
    if ( v9 == v10 ) /*0x100222fc3*/
      goto LABEL_57; /*0x100222fc3*/
  }
  v50 = v12 + 32; /*0x100222fee*/
  v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(*(_QWORD *)(v13 + 16), *(_QWORD *)(v13 + 24)); /*0x100222ffa*/
  v16 = v15; /*0x100222fff*/
  if ( v15 < 0 ) /*0x100223005*/
  {
    v18 = 0; /*0x1002232d7*/
    goto LABEL_56; /*0x1002232d7*/
  }
  v17 = (const void *)v14; /*0x10022300b*/
  if ( !v15 ) /*0x100223011*/
  {
    a3 = 1; /*0x100223052*/
    goto LABEL_34; /*0x100223068*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100223013*/
  v18 = 1; /*0x100223018*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100223026*/
  if ( !v19 ) /*0x10022302e*/
  {
    a3 = v16; /*0x100223315*/
LABEL_56:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, a3); /*0x1002232da*/
  }
  a3 = (__int64)v19; /*0x100223034*/
  memcpy(v19, v17, v16); /*0x100223040*/
  if ( v16 < 8 ) /*0x100223049*/
  {
    v20 = 0; /*0x10022304b*/
    goto LABEL_32; /*0x10022304d*/
  }
  if ( v16 < 0x20 ) /*0x100223071*/
  {
    v20 = 0; /*0x100223073*/
LABEL_29:
    v29 = v20; /*0x10022311c*/
    v20 = v16 & 0x7FFFFFFFFFFFFFF8LL; /*0x10022312d*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015DFA90); /*0x100223130*/
    v31 = _mm_load_si128((const __m128i *)&xmmword_1015DFAA0); /*0x100223138*/
    v32 = _mm_load_si128((const __m128i *)&xmmword_1015DFAB0); /*0x100223140*/
    do /*0x100223181*/
    {
      v33 = _mm_loadl_epi64((const __m128i *)(a3 + v29)); /*0x100223150*/
      v34 = _mm_add_epi8(v33, si128); /*0x10022315b*/
      *(_QWORD *)(a3 + v29) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v34, v31), v34), v32), v33).u64[0]; /*0x100223173*/
      v29 += 8; /*0x10022317a*/
    }
    while ( v20 != v29 ); /*0x100223181*/
    goto LABEL_33; /*0x100223181*/
  }
  v20 = v16 & 0x7FFFFFFFFFFFFFE0LL; /*0x100223087*/
  v21 = 0; /*0x10022308a*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1015DFA60); /*0x10022308c*/
  v23 = _mm_load_si128((const __m128i *)&xmmword_1015DFA70); /*0x100223094*/
  v24 = _mm_load_si128((const __m128i *)&xmmword_1015DFA80); /*0x10022309c*/
  do /*0x10022310b*/
  {
    v25 = _mm_loadu_si128((const __m128i *)(a3 + v21)); /*0x1002230b0*/
    v26 = _mm_loadu_si128((const __m128i *)(a3 + v21 + 16)); /*0x1002230b7*/
    v27 = _mm_add_epi8(v25, v22); /*0x1002230c2*/
    v28 = _mm_add_epi8(v26, v22); /*0x1002230ca*/
    *(__m128i *)(a3 + v21) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v23), v27), v24), v25); /*0x1002230f6*/
    *(__m128i *)(a3 + v21 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v28, v23), v28), v24), v26); /*0x1002230fd*/
    v21 += 32; /*0x100223104*/
  }
  while ( v20 != v21 ); /*0x10022310b*/
  if ( v16 != v20 ) /*0x100223110*/
  {
    if ( (v16 & 0x18) != 0 ) /*0x10022311a*/
      goto LABEL_29; /*0x10022311a*/
    do /*0x1002231af*/
    {
LABEL_32:
      *(_BYTE *)(a3 + v20) |= 32 * ((unsigned __int8)(*(_BYTE *)(a3 + v20) - 65) < 0x1Au); /*0x100223190*/
      ++v20; /*0x1002231a9*/
LABEL_33:
      ; /*0x1002231ac*/
    }
    while ( v16 != v20 ); /*0x1002231af*/
  }
LABEL_34:
  codexmate_lib::core::relay::codex_catalog::model_tail_lower::he109e56107835c31(&v47, a3, v16); /*0x1002231b1*/
  if ( v49 != 7 ) /*0x1002231cc*/
  {
    if ( v49 > 7 ) /*0x10022323c*/
    {
      v35 = *(_QWORD *)v48 == 0x2D362E352D747067LL; /*0x100223259*/
      v36 = v47; /*0x10022325d*/
      if ( !v47 ) /*0x100223264*/
        goto LABEL_37; /*0x100223264*/
    }
    else
    {
      v35 = 0; /*0x10022323e*/
      v36 = v47; /*0x100223241*/
      if ( !v47 ) /*0x100223248*/
        goto LABEL_37; /*0x100223248*/
    }
    goto LABEL_36; /*0x100223248*/
  }
  v35 = (*(_DWORD *)v48 ^ 0x2D747067 | *(_DWORD *)(v48 + 3) ^ 0x362E352D) == 0; /*0x1002231e3*/
  v36 = v47; /*0x1002231e7*/
  if ( v47 ) /*0x1002231ee*/
LABEL_36:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v36, 1); /*0x1002231f0*/
LABEL_37:
  if ( !v35 || (v37 = v46, v46 < v16) || (v38 = __s2, memcmp((const void *)a3, __s2, v16)) ) /*0x100223215*/
  {
    if ( v16 ) /*0x100223221*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3, v16, 1); /*0x100223232*/
    v9 = v50; /*0x100222fb4*/
    v10 = v51; /*0x100222fb8*/
    goto LABEL_14; /*0x100222fb8*/
  }
  if ( v37 != v16 && v38[v16] != 45 ) /*0x100223277*/
    v12 = 0; /*0x100223277*/
  v9 = v50; /*0x10022327b*/
  v10 = v51; /*0x10022327f*/
  if ( v16 ) /*0x100223286*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3, v16, 1); /*0x100223293*/
  if ( !v12 ) /*0x10022329b*/
    goto LABEL_14; /*0x10022329b*/
  v43[0] = v9; /*0x1002232a1*/
  v47 = v16; /*0x1002232a5*/
  v48 = v16; /*0x1002232a9*/
  v49 = v12; /*0x1002232ad*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h47c31b26bb124486( /*0x1002232c0*/
    v41,
    v43,
    &v47);
  result = v42; /*0x1002232c5*/
  v39 = v44; /*0x1002232cc*/
  if ( !v44 ) /*0x1002232d3*/
    return result; /*0x1002232d3*/
LABEL_58:
  v40 = result; /*0x1002232f2*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v39, 1); /*0x1002232fe*/
  return v40; /*0x100223306*/
}