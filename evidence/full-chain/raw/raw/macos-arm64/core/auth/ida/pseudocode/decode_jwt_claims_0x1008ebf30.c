// __ZN13codexmate_lib4core4auth17decode_jwt_claims @ 0x1008ebf30 | 基线 same-set
unsigned __int64 **__fastcall codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(
        unsigned __int64 **a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  __int64 v27; // rcx
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __int64 v32; // rcx
  __m128i si128; // xmm1
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  char v38; // dl
  char v39; // dl
  char v40; // dl
  char v41; // dl
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm4
  __m128i v48; // xmm5
  __int64 v49; // rdx
  __m128i v50; // xmm1
  __m128i v51; // xmm2
  __m128i v52; // xmm3
  char v53; // si
  __int64 v54; // r12
  int v55; // eax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // edx
  char v60; // si
  char v61; // di
  char v62; // r8
  unsigned __int64 v63; // rax
  int v64; // edi
  int v65; // esi
  unsigned __int64 *v66; // r13
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rax
  unsigned __int64 *v72; // rdx
  __int64 (__fastcall *v73)(); // r15
  unsigned __int64 **v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // rsi
  unsigned __int64 v77; // rdi
  __int64 v78; // rdi
  unsigned __int64 *v79; // rax
  unsigned __int64 *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r14
  __int64 v86; // rax
  unsigned __int64 *v87; // rdx
  __int64 v88; // r14
  __int64 v89; // r14
  __int64 v90[3]; // [rsp+0h] [rbp-170h] BYREF
  __int64 v91[7]; // [rsp+18h] [rbp-158h] BYREF
  char v92; // [rsp+50h] [rbp-120h]
  __int16 v93; // [rsp+58h] [rbp-118h]
  __int64 v94; // [rsp+60h] [rbp-110h]
  __int64 v95; // [rsp+68h] [rbp-108h] BYREF
  __int64 v96; // [rsp+70h] [rbp-100h]
  unsigned __int64 v97; // [rsp+78h] [rbp-F8h]
  unsigned __int64 *v98; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v99; // [rsp+88h] [rbp-E8h]
  unsigned __int64 **v100; // [rsp+90h] [rbp-E0h]
  unsigned __int64 *v101; // [rsp+98h] [rbp-D8h]
  unsigned __int64 *v102; // [rsp+A0h] [rbp-D0h]
  unsigned __int64 *v103; // [rsp+A8h] [rbp-C8h]
  unsigned __int64 *v104; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-B8h]
  unsigned __int64 **v106; // [rsp+C0h] [rbp-B0h]
  unsigned __int64 *v107; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 *v108; // [rsp+D0h] [rbp-A0h]
  unsigned __int64 *v109; // [rsp+D8h] [rbp-98h]
  unsigned __int64 *v110; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v111; // [rsp+E8h] [rbp-88h]
  unsigned __int64 **v112; // [rsp+F0h] [rbp-80h]
  __int64 (__fastcall *v113)(); // [rsp+F8h] [rbp-78h]
  unsigned __int64 **v114; // [rsp+100h] [rbp-70h]
  unsigned __int64 v115; // [rsp+108h] [rbp-68h]
  __int64 v116; // [rsp+110h] [rbp-60h]
  char v117; // [rsp+118h] [rbp-58h]
  unsigned __int64 v118; // [rsp+120h] [rbp-50h] BYREF
  __int64 v119; // [rsp+128h] [rbp-48h]
  unsigned __int64 v120; // [rsp+130h] [rbp-40h]
  unsigned __int64 v121; // [rsp+138h] [rbp-38h]
  int v122; // [rsp+144h] [rbp-2Ch]

  if ( a2 == 0 || a3 == 0 ) /*0x1008ebf50*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ebf61*/
    v7 = (_QWORD *)v5; /*0x1008ebf63*/
    if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x1008ebf6a*/
    {
      v8 = *(_QWORD *)v5; /*0x1008ebf70*/
      v9 = (unsigned __int64 *)v7[1]; /*0x1008ebf73*/
    }
    else
    {
      v89 = v5; /*0x1008ec8f6*/
      v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008ec8f9*/
             &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
             a2,
             v6,
             v5);
      v7 = (_QWORD *)v89; /*0x1008ec8fe*/
      *(_QWORD *)v89 = v8; /*0x1008ec901*/
      *(_QWORD *)(v89 + 8) = v9; /*0x1008ec904*/
      *(_BYTE *)(v89 + 16) = 1; /*0x1008ec908*/
    }
    *v7 = v8 + 1; /*0x1008ebf7b*/
    a1[3] = nullptr; /*0x1008ebf85*/
    a1[2] = nullptr; /*0x1008ebf90*/
    a1[1] = nullptr; /*0x1008ebf9b*/
    *a1 = (unsigned __int64 *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008ebfa6*/
    a1[4] = (unsigned __int64 *)v8; /*0x1008ebfa9*/
    a1[5] = v9; /*0x1008ebfad*/
    return a1; /*0x1008ebfb1*/
  }
  v91[0] = 0; /*0x1008ebfb6*/
  v91[1] = a3; /*0x1008ebfc1*/
  v91[2] = a2; /*0x1008ebfc8*/
  v91[3] = a3; /*0x1008ebfcf*/
  v91[4] = 0; /*0x1008ebfd6*/
  v91[5] = a3; /*0x1008ebfe1*/
  v91[6] = 0x2E0000002ELL; /*0x1008ebff2*/
  v92 = 1; /*0x1008ebff9*/
  v93 = 1; /*0x1008ec000*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008ec017*/
    &v95,
    v91);
  if ( v97 <= 1 ) /*0x1008ec024*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ec02d*/
    v13 = v10; /*0x1008ec02f*/
    if ( *(_BYTE *)(v10 + 16) == 1 ) /*0x1008ec036*/
    {
      v14 = *(_QWORD *)v10; /*0x1008ec03c*/
      v15 = *(unsigned __int64 **)(v13 + 8); /*0x1008ec03f*/
    }
    else
    {
      v14 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008ec912*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v91,
              v11,
              v12);
      *(_QWORD *)v13 = v14; /*0x1008ec917*/
      *(_QWORD *)(v13 + 8) = v15; /*0x1008ec91a*/
      *(_BYTE *)(v13 + 16) = 1; /*0x1008ec91e*/
    }
    *(_QWORD *)v13 = v14 + 1; /*0x1008ec047*/
    a1[3] = nullptr; /*0x1008ec051*/
    a1[2] = nullptr; /*0x1008ec05c*/
    a1[1] = nullptr; /*0x1008ec067*/
    *a1 = (unsigned __int64 *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008ec072*/
    a1[4] = (unsigned __int64 *)v14; /*0x1008ec075*/
    a1[5] = v15; /*0x1008ec079*/
LABEL_9:
    if ( !v95 ) /*0x1008ec087*/
      return a1; /*0x1008ec087*/
    v16 = v96; /*0x1008ec08d*/
    v17 = 16 * v95; /*0x1008ec094*/
LABEL_102:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v17, 8); /*0x1008ec7fd*/
    return a1; /*0x1008ec7fd*/
  }
  v18 = *(_QWORD *)(v96 + 24); /*0x1008ec0a9*/
  if ( (v18 & 0x8000000000000000LL) != 0LL ) /*0x1008ec0b0*/
  {
    v19 = 0; /*0x1008ec0b2*/
    goto LABEL_13; /*0x1008ec0b2*/
  }
  v94 = v96; /*0x1008ec0cf*/
  if ( !v18 ) /*0x1008ec0d6*/
  {
    v118 = 0; /*0x1008ec125*/
    v119 = 1; /*0x1008ec129*/
    v120 = 0; /*0x1008ec131*/
    v26 = 0; /*0x1008ec135*/
    goto LABEL_62; /*0x1008ec138*/
  }
  v20 = *(_QWORD *)(v96 + 16); /*0x1008ec0d8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v95, v91); /*0x1008ec0dc*/
  v19 = 1; /*0x1008ec0e1*/
  v21 = 1; /*0x1008ec0e7*/
  v22 = v18; /*0x1008ec0ec*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x1008ec0ef*/
  if ( !v23 ) /*0x1008ec0f7*/
LABEL_13:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x1008ec0b5*/
  v24 = v23; /*0x1008ec0f9*/
  if ( (unsigned __int64)(v23 - v20) < 0x20 || v18 < 8 ) /*0x1008ec100*/
  {
    v25 = 0; /*0x1008ec114*/
    goto LABEL_28; /*0x1008ec120*/
  }
  if ( v18 < 0x20 ) /*0x1008ec14b*/
  {
    v25 = 0; /*0x1008ec14d*/
LABEL_25:
    v32 = v25; /*0x1008ec1c1*/
    v25 = v18 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008ec1c8*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016763E0); /*0x1008ec1cb*/
    v34 = _mm_load_si128((const __m128i *)&xmmword_1016763F0); /*0x1008ec1d3*/
    do /*0x1008ec201*/
    {
      v35 = _mm_loadl_epi64((const __m128i *)(v20 + v32)); /*0x1008ec1e0*/
      *(_QWORD *)(v24 + v32) = _mm_blendv_epi8(v35, v34, _mm_cmpeq_epi8(v35, si128)).u64[0]; /*0x1008ec1f4*/
      v32 += 8; /*0x1008ec1fa*/
    }
    while ( v25 != v32 ); /*0x1008ec201*/
    if ( v18 == v25 ) /*0x1008ec206*/
      goto LABEL_43; /*0x1008ec206*/
    goto LABEL_28; /*0x1008ec206*/
  }
  v25 = v18 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008ec154*/
  v27 = 0; /*0x1008ec157*/
  v28 = _mm_load_si128((const __m128i *)&xmmword_1016763C0); /*0x1008ec159*/
  v29 = _mm_load_si128((const __m128i *)&xmmword_1016763D0); /*0x1008ec161*/
  do /*0x1008ec1b0*/
  {
    v30 = _mm_loadu_si128((const __m128i *)(v20 + v27)); /*0x1008ec170*/
    v31 = _mm_loadu_si128((const __m128i *)(v20 + v27 + 16)); /*0x1008ec177*/
    *(__m128i *)(v24 + v27) = _mm_blendv_epi8(v30, v29, _mm_cmpeq_epi8(v30, v28)); /*0x1008ec19c*/
    *(__m128i *)(v24 + v27 + 16) = _mm_blendv_epi8(v31, v29, _mm_cmpeq_epi8(v31, v28)); /*0x1008ec1a2*/
    v27 += 32; /*0x1008ec1a9*/
  }
  while ( v25 != v27 ); /*0x1008ec1b0*/
  if ( v18 == v25 ) /*0x1008ec1b5*/
    goto LABEL_43; /*0x1008ec1b5*/
  if ( (v18 & 0x18) != 0 ) /*0x1008ec1bf*/
    goto LABEL_25; /*0x1008ec1bf*/
LABEL_28:
  v36 = v25; /*0x1008ec20c*/
  v37 = v18 & 3; /*0x1008ec212*/
  if ( (v18 & 3) != 0 ) /*0x1008ec216*/
  {
    v21 = 43; /*0x1008ec218*/
    v36 = v25; /*0x1008ec21d*/
    do /*0x1008ec237*/
    {
      v22 = *(unsigned __int8 *)(v20 + v36); /*0x1008ec220*/
      if ( (_BYTE)v22 == 45 ) /*0x1008ec22a*/
        v22 = 43; /*0x1008ec22a*/
      *(_BYTE *)(v24 + v36++) = v22; /*0x1008ec22d*/
      --v37; /*0x1008ec234*/
    }
    while ( v37 ); /*0x1008ec237*/
  }
  if ( v25 - v18 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x1008ec240*/
  {
    do /*0x1008ec29a*/
    {
      v38 = *(_BYTE *)(v20 + v36); /*0x1008ec250*/
      if ( v38 == 45 ) /*0x1008ec259*/
        v38 = 43; /*0x1008ec259*/
      *(_BYTE *)(v24 + v36) = v38; /*0x1008ec25c*/
      v39 = *(_BYTE *)(v20 + v36 + 1); /*0x1008ec260*/
      if ( v39 == 45 ) /*0x1008ec269*/
        v39 = 43; /*0x1008ec269*/
      *(_BYTE *)(v24 + v36 + 1) = v39; /*0x1008ec26c*/
      v40 = *(_BYTE *)(v20 + v36 + 2); /*0x1008ec271*/
      if ( v40 == 45 ) /*0x1008ec27a*/
        v40 = 43; /*0x1008ec27a*/
      *(_BYTE *)(v24 + v36 + 2) = v40; /*0x1008ec27d*/
      v41 = *(_BYTE *)(v20 + v36 + 3); /*0x1008ec282*/
      if ( v41 == 45 ) /*0x1008ec28b*/
        v41 = 43; /*0x1008ec28b*/
      *(_BYTE *)(v24 + v36 + 3) = v41; /*0x1008ec28e*/
      v36 += 4; /*0x1008ec293*/
    }
    while ( v18 != v36 ); /*0x1008ec29a*/
  }
LABEL_43:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v21); /*0x1008ec29c*/
  v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x1008ec2a9*/
  if ( !v42 ) /*0x1008ec2b1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x1008ec95c*/
  if ( v18 <= 7 ) /*0x1008ec2bb*/
  {
    v43 = 0; /*0x1008ec2bd*/
    goto LABEL_55; /*0x1008ec2bf*/
  }
  if ( v18 < 0x20 ) /*0x1008ec2c8*/
  {
    v43 = 0; /*0x1008ec2ca*/
LABEL_52:
    v49 = v43; /*0x1008ec33a*/
    v43 = v18 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008ec341*/
    v50 = _mm_load_si128((const __m128i *)&xmmword_101676410); /*0x1008ec344*/
    v51 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x1008ec34c*/
    do /*0x1008ec37f*/
    {
      v52 = _mm_loadl_epi64((const __m128i *)(v24 + v49)); /*0x1008ec360*/
      *(_QWORD *)(v42 + v49) = _mm_blendv_epi8(v52, v51, _mm_cmpeq_epi8(v52, v50)).u64[0]; /*0x1008ec373*/
      v49 += 8; /*0x1008ec378*/
    }
    while ( v43 != v49 ); /*0x1008ec37f*/
    if ( v18 == v43 ) /*0x1008ec384*/
      goto LABEL_58; /*0x1008ec384*/
    goto LABEL_55; /*0x1008ec384*/
  }
  v43 = v18 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008ec2d1*/
  v44 = 0; /*0x1008ec2d4*/
  v45 = _mm_load_si128((const __m128i *)&xmmword_101676400); /*0x1008ec2d6*/
  v46 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x1008ec2de*/
  do /*0x1008ec32d*/
  {
    v47 = _mm_loadu_si128((const __m128i *)(v24 + v44)); /*0x1008ec2f0*/
    v48 = _mm_loadu_si128((const __m128i *)(v24 + v44 + 16)); /*0x1008ec2f6*/
    *(__m128i *)(v42 + v44) = _mm_blendv_epi8(v47, v46, _mm_cmpeq_epi8(v47, v45)); /*0x1008ec31b*/
    *(__m128i *)(v42 + v44 + 16) = _mm_blendv_epi8(v48, v46, _mm_cmpeq_epi8(v48, v45)); /*0x1008ec320*/
    v44 += 32; /*0x1008ec326*/
  }
  while ( v43 != v44 ); /*0x1008ec32d*/
  if ( v18 == v43 ) /*0x1008ec332*/
    goto LABEL_58; /*0x1008ec332*/
  if ( (v18 & 0x18) != 0 ) /*0x1008ec338*/
    goto LABEL_52; /*0x1008ec338*/
  do /*0x1008ec3a6*/
  {
LABEL_55:
    v53 = *(_BYTE *)(v24 + v43); /*0x1008ec390*/
    if ( v53 == 95 ) /*0x1008ec399*/
      v53 = 47; /*0x1008ec399*/
    *(_BYTE *)(v42 + v43++) = v53; /*0x1008ec39c*/
  }
  while ( v18 != v43 ); /*0x1008ec3a6*/
LABEL_58:
  v118 = v18; /*0x1008ec3a8*/
  v119 = v42; /*0x1008ec3ac*/
  v120 = v18; /*0x1008ec3b0*/
  a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v18, 1); /*0x1008ec3bf*/
  v26 = v120; /*0x1008ec3c4*/
  if ( (v120 & 3) != 0 ) /*0x1008ec3cf*/
  {
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::haa147ad9e3f99068(&v110, "=", 1, 4 - (v120 & 3), a4); /*0x1008ec3f0*/
    v100 = v112; /*0x1008ec3f9*/
    v99 = v111; /*0x1008ec40e*/
    v98 = v110; /*0x1008ec415*/
    v110 = &v118; /*0x1008ec420*/
    v111 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ec42e*/
    v112 = &v98; /*0x1008ec43c*/
    v113 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ec440*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v104, &anon_155c4da9b5393270cfa7378e2b52c417_148, &v110); /*0x1008ec459*/
    if ( v98 ) /*0x1008ec468*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x1008ec476*/
    v121 = (unsigned __int64)v104; /*0x1008ec482*/
    v54 = v105; /*0x1008ec486*/
    v26 = (unsigned __int64)v106; /*0x1008ec48d*/
    v122 = 0; /*0x1008ec494*/
    goto LABEL_63; /*0x1008ec49b*/
  }
LABEL_62:
  v55 = v118; /*0x1008ec49d*/
  v121 = v118; /*0x1008ec4a1*/
  v54 = v119; /*0x1008ec4a5*/
  LOBYTE(v55) = 1; /*0x1008ec4a9*/
  v122 = v55; /*0x1008ec4ab*/
LABEL_63:
  v56 = v26; /*0x1008ec4ae*/
  while ( 1 ) /*0x1008ec4cb*/
  {
    v57 = v56; /*0x1008ec4cb*/
    if ( !v56 ) /*0x1008ec4d1*/
      break; /*0x1008ec4d1*/
    v58 = v54 + v56; /*0x1008ec4d3*/
    v59 = *(char *)(v54 + v57 - 1); /*0x1008ec4d7*/
    if ( v59 >= 0 ) /*0x1008ec4dd*/
    {
      v56 = v57 - 1; /*0x1008ec4c3*/
      if ( v59 != 61 ) /*0x1008ec4c9*/
        break; /*0x1008ec4c9*/
    }
    else
    {
      v60 = *(_BYTE *)(v58 - 2); /*0x1008ec4df*/
      if ( v60 >= -64 ) /*0x1008ec4e7*/
      {
        v63 = v58 - 2; /*0x1008ec50c*/
        v65 = v60 & 0x1F; /*0x1008ec510*/
      }
      else
      {
        v61 = *(_BYTE *)(v58 - 3); /*0x1008ec4e9*/
        if ( v61 >= -64 ) /*0x1008ec4f1*/
        {
          v63 = v58 - 3; /*0x1008ec515*/
          v64 = v61 & 0xF; /*0x1008ec519*/
        }
        else
        {
          v62 = *(_BYTE *)(v58 - 4); /*0x1008ec4f3*/
          v63 = v58 - 4; /*0x1008ec4f8*/
          v64 = ((v62 & 7) << 6) | v61 & 0x3F; /*0x1008ec507*/
        }
        v65 = (v64 << 6) | v60 & 0x3F; /*0x1008ec522*/
      }
      v56 = v63 - v54; /*0x1008ec52c*/
      if ( ((v65 << 6) | v59 & 0x3F) != 0x3D ) /*0x1008ec532*/
        break; /*0x1008ec532*/
    }
  }
  base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v98, "", v54, v57); /*0x1008ec534*/
  v66 = v98; /*0x1008ec54a*/
  if ( v98 == (unsigned __int64 *)0x8000000000000000LL ) /*0x1008ec558*/
  {
    base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v110, &unk_10167725B, v54, v26); /*0x1008ec572*/
    v66 = v110; /*0x1008ec577*/
    if ( v110 == (unsigned __int64 *)0x8000000000000000LL ) /*0x1008ec581*/
    {
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ec58e*/
      v70 = v67; /*0x1008ec590*/
      if ( *(_BYTE *)(v67 + 16) == 1 ) /*0x1008ec597*/
      {
        v71 = *(_QWORD *)v67; /*0x1008ec59d*/
        v72 = *(unsigned __int64 **)(v70 + 8); /*0x1008ec5a0*/
      }
      else
      {
        v71 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008ec93e*/
                &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                &unk_10167725B,
                v68,
                v69);
        *(_QWORD *)v70 = v71; /*0x1008ec943*/
        *(_QWORD *)(v70 + 8) = v72; /*0x1008ec946*/
        *(_BYTE *)(v70 + 16) = 1; /*0x1008ec94a*/
      }
      *(_QWORD *)v70 = v71 + 1; /*0x1008ec5a8*/
      a1[3] = nullptr; /*0x1008ec5b2*/
      a1[2] = nullptr; /*0x1008ec5bd*/
      a1[1] = nullptr; /*0x1008ec5c8*/
      *a1 = (unsigned __int64 *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008ec5d3*/
      a1[4] = (unsigned __int64 *)v71; /*0x1008ec5d6*/
      a1[5] = v72; /*0x1008ec5da*/
      if ( v121 ) /*0x1008ec5e5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v121, 1); /*0x1008ec5ef*/
      if ( !(_BYTE)v122 && v118 ) /*0x1008ec605*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v118, 1); /*0x1008ec614*/
      goto LABEL_9; /*0x1008ec619*/
    }
    v73 = (__int64 (__fastcall *)())v111; /*0x1008ec62e*/
    v74 = v112; /*0x1008ec635*/
  }
  else
  {
    v73 = (__int64 (__fastcall *)())v99; /*0x1008ec61e*/
    v74 = v100; /*0x1008ec625*/
  }
  v113 = v73; /*0x1008ec639*/
  v114 = v74; /*0x1008ec63d*/
  v110 = nullptr; /*0x1008ec641*/
  v115 = 0; /*0x1008ec64c*/
  v116 = 0; /*0x1008ec654*/
  v111 = 1; /*0x1008ec65c*/
  v112 = nullptr; /*0x1008ec667*/
  v117 = 0x80; /*0x1008ec66f*/
  _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_map::hd7a23f6cf2b21ece( /*0x1008ec681*/
    &v104,
    &v110,
    a4);
  if ( v104 ) /*0x1008ec68e*/
  {
    v103 = v109; /*0x1008ec69b*/
    v102 = v108; /*0x1008ec6a9*/
    v101 = v107; /*0x1008ec6b7*/
    v100 = v106; /*0x1008ec6c5*/
    v99 = v105; /*0x1008ec6da*/
    v98 = v104; /*0x1008ec6e1*/
    if ( v115 >= (unsigned __int64)v114 ) /*0x1008ec6f3*/
    {
LABEL_91:
      if ( v110 ) /*0x1008ec745*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1); /*0x1008ec753*/
      a1[5] = v109; /*0x1008ec75f*/
      a1[4] = v108; /*0x1008ec76a*/
      a1[3] = v107; /*0x1008ec775*/
      a1[2] = (unsigned __int64 *)v106; /*0x1008ec780*/
      v79 = v104; /*0x1008ec784*/
      a1[1] = (unsigned __int64 *)v105; /*0x1008ec792*/
      *a1 = v79; /*0x1008ec796*/
      if ( !v66 ) /*0x1008ec79c*/
        goto LABEL_95; /*0x1008ec79c*/
LABEL_94:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v66, 1); /*0x1008ec79e*/
      goto LABEL_95; /*0x1008ec7a9*/
    }
    v75 = v115 + 1; /*0x1008ec6fc*/
    v76 = 0x100002600LL; /*0x1008ec6ff*/
    while ( 1 ) /*0x1008ec710*/
    {
      v77 = *((unsigned __int8 *)v113 + v75 - 1); /*0x1008ec710*/
      if ( v77 > 0x20 || !_bittest64(&v76, v77) ) /*0x1008ec71f*/
        break; /*0x1008ec71f*/
      v115 = v75; /*0x1008ec729*/
      v78 = v75 - (_QWORD)v114 + 1; /*0x1008ec72d*/
      ++v75; /*0x1008ec732*/
      if ( v78 == 1 ) /*0x1008ec739*/
        goto LABEL_91; /*0x1008ec739*/
    }
    v90[0] = 22; /*0x1008ec817*/
    v105 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(&v110, v90); /*0x1008ec835*/
    v104 = nullptr; /*0x1008ec83c*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v98); /*0x1008ec84e*/
  }
  v81 = v110; /*0x1008ec853*/
  if ( v110 ) /*0x1008ec85d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1); /*0x1008ec86b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ec877*/
  v85 = v82; /*0x1008ec879*/
  if ( *(_BYTE *)(v82 + 16) == 1 ) /*0x1008ec880*/
  {
    v86 = *(_QWORD *)v82; /*0x1008ec886*/
    v87 = *(unsigned __int64 **)(v85 + 8); /*0x1008ec889*/
  }
  else
  {
    v86 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008ec928*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v81,
            v83,
            v84);
    *(_QWORD *)v85 = v86; /*0x1008ec92d*/
    *(_QWORD *)(v85 + 8) = v87; /*0x1008ec930*/
    *(_BYTE *)(v85 + 16) = 1; /*0x1008ec934*/
  }
  *(_QWORD *)v85 = v86 + 1; /*0x1008ec891*/
  a1[3] = nullptr; /*0x1008ec89b*/
  a1[2] = nullptr; /*0x1008ec8a6*/
  a1[1] = nullptr; /*0x1008ec8b1*/
  *a1 = (unsigned __int64 *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008ec8bc*/
  a1[4] = (unsigned __int64 *)v86; /*0x1008ec8bf*/
  a1[5] = v87; /*0x1008ec8c3*/
  v88 = v105; /*0x1008ec8c7*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v105); /*0x1008ec8d1*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, 40, 8); /*0x1008ec8e3*/
  if ( v66 ) /*0x1008ec8eb*/
    goto LABEL_94; /*0x1008ec8eb*/
LABEL_95:
  if ( v121 ) /*0x1008ec7b5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v121, 1); /*0x1008ec7bf*/
  if ( !(_BYTE)v122 && v118 ) /*0x1008ec7d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v118, 1); /*0x1008ec7dc*/
  if ( v95 ) /*0x1008ec7eb*/
  {
    v17 = 16 * v95; /*0x1008ec7ed*/
    v16 = v94; /*0x1008ec7f6*/
    goto LABEL_102; /*0x1008ec7f6*/
  }
  return a1; /*0x1008ec805*/
}