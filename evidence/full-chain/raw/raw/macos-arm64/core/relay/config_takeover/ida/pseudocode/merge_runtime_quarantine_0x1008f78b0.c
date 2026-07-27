// __ZN13codexmate_lib4core5relay15config_takeover24merge_runtime_quarantine @ 0x1008f78b0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h4f0ea673af9e00f5(
        __int64 a1,
        _QWORD *a2,
        __m128i *a3,
        __m128i a4)
{
  double v6; // xmm0_8
  const __m128i *v7; // rsi
  char *v8; // r12
  size_t v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rax
  size_t v16; // rdx
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // r13
  __m128i *v22; // rcx
  __m128i *v23; // r12
  __m128i *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  const __m128i *v29; // r14
  unsigned __int64 v30; // rsi
  __m128i si128; // xmm1
  __int8 *v32; // r15
  void *v33; // r13
  size_t v34; // r12
  __m128i *i; // r8
  __int64 v36; // rax
  __m128i v37; // xmm2
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  size_t v42; // rdx
  __int64 v43; // rbx
  size_t v44; // r13
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  const __m128i *v48; // r12
  void *v49; // r14
  int v50; // eax
  void *v51; // rdi
  int v52; // r14d
  __int64 v53; // rbx
  const __m128i *v54; // rax
  __int64 v55; // rcx
  const __m128i *v56; // rdx
  size_t v57; // rdx
  __m128i *v58; // rsi
  int v59; // eax
  const __m128i **v60; // r14
  __int64 v61; // rsi
  const __m128i *v62; // rax
  __int64 v63; // rax
  __m128i *v64; // r12
  const __m128i *v65; // rax
  __int64 v66; // rcx
  const __m128i *v67; // rdx
  _QWORD *v68; // r15
  _QWORD *v69; // r13
  size_t v70; // rax
  void *v71; // rcx
  __int64 v72; // rbx
  size_t v73; // r12
  char *v74; // r14
  __int64 v75; // r12
  __int64 v76; // r15
  size_t v77; // rdx
  char v78; // r12
  const __m128i *v79; // rsi
  size_t *v80; // rax
  __m128i *v81; // r13
  __int64 v82; // rbx
  size_t v83; // rax
  void *v84; // rcx
  __int64 v85; // rbx
  size_t v86; // r13
  char *v87; // r14
  char v88; // r15
  __int64 v89; // r13
  __int64 v90; // r12
  size_t v91; // rdx
  __int64 v92; // rbx
  size_t v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // r15
  __int64 v97; // r13
  size_t v98; // rdx
  __m128i *v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // r14
  _QWORD *v104; // r15
  __int64 v105; // rsi
  __int64 v106; // rax
  _QWORD *v107; // rdx
  const __m128i *v108; // rax
  __int64 v109; // r14
  _QWORD *v110; // rbx
  __int64 v111; // rsi
  void *v113; // rbx
  const __m128i *v114; // r14
  const __m128i *v115; // r15
  const __m128i *v117; // r12
  int v118; // r13d
  __int64 v119; // rax
  __int64 v120; // rsi
  unsigned __int64 v121; // rax
  __int64 v122; // rbx
  const __m128i *v124; // [rsp+8h] [rbp-1D8h] BYREF
  __int64 v125; // [rsp+10h] [rbp-1D0h]
  size_t v126; // [rsp+18h] [rbp-1C8h]
  __int64 v127; // [rsp+20h] [rbp-1C0h]
  __int64 v128; // [rsp+28h] [rbp-1B8h]
  __int64 v129; // [rsp+30h] [rbp-1B0h]
  _QWORD *v130; // [rsp+38h] [rbp-1A8h]
  __int64 v131; // [rsp+40h] [rbp-1A0h] BYREF
  __int64 v132; // [rsp+48h] [rbp-198h]
  __int64 v133; // [rsp+50h] [rbp-190h]
  __int64 v134; // [rsp+58h] [rbp-188h]
  void *__s2[2]; // [rsp+60h] [rbp-180h] BYREF
  const __m128i *v136; // [rsp+70h] [rbp-170h] BYREF
  void *v137; // [rsp+78h] [rbp-168h]
  size_t v138; // [rsp+80h] [rbp-160h]
  const __m128i *v139; // [rsp+88h] [rbp-158h]
  _QWORD v140[2]; // [rsp+90h] [rbp-150h] BYREF
  __m128i v141; // [rsp+A0h] [rbp-140h] BYREF
  __int64 v142; // [rsp+B0h] [rbp-130h] BYREF
  __int64 v143; // [rsp+B8h] [rbp-128h]
  size_t v144; // [rsp+C0h] [rbp-120h]
  size_t v145; // [rsp+C8h] [rbp-118h]
  __m128i *v146; // [rsp+D0h] [rbp-110h]
  const __m128i *v147; // [rsp+D8h] [rbp-108h] BYREF
  void *__s1; // [rsp+E0h] [rbp-100h]
  size_t __n; // [rsp+E8h] [rbp-F8h]
  void *v150; // [rsp+F0h] [rbp-F0h]
  __int64 v151; // [rsp+F8h] [rbp-E8h]
  void *v152; // [rsp+100h] [rbp-E0h]
  __int64 v153; // [rsp+108h] [rbp-D8h]
  char v154; // [rsp+110h] [rbp-D0h]
  __int16 v155; // [rsp+118h] [rbp-C8h]
  __m128i *v156; // [rsp+120h] [rbp-C0h]
  const __m128i *v157; // [rsp+128h] [rbp-B8h] BYREF
  char *v158; // [rsp+130h] [rbp-B0h]
  size_t v159; // [rsp+138h] [rbp-A8h]
  __m128i *v160; // [rsp+140h] [rbp-A0h]
  const __m128i *v161; // [rsp+148h] [rbp-98h]
  const __m128i *v162; // [rsp+150h] [rbp-90h] BYREF
  void *v163; // [rsp+158h] [rbp-88h]
  size_t v164; // [rsp+160h] [rbp-80h]
  const __m128i *v165; // [rsp+168h] [rbp-78h]
  __int64 v166; // [rsp+170h] [rbp-70h]
  size_t v167; // [rsp+178h] [rbp-68h]
  __int64 v168; // [rsp+180h] [rbp-60h]
  __int64 v169; // [rsp+188h] [rbp-58h]
  __int64 v170; // [rsp+190h] [rbp-50h]
  __m128i *v171; // [rsp+198h] [rbp-48h]
  __m128i *v172; // [rsp+1A0h] [rbp-40h]
  __int64 v173; // [rsp+1A8h] [rbp-38h]
  _QWORD *v174; // [rsp+1B0h] [rbp-30h]

  v6 = codexmate_lib::core::relay::config_takeover::split_foreign_surface::h312bc0dc86a91007( /*0x1008f78dc*/
         (__int64 *)&v162,
         a1,
         a2[7],
         a2[8],
         a4);
  v129 = v170; /*0x1008f78e5*/
  v128 = v169; /*0x1008f78f0*/
  v127 = v168; /*0x1008f78fb*/
  v126 = v167; /*0x1008f7906*/
  v125 = v166; /*0x1008f7911*/
  v7 = v162; /*0x1008f7918*/
  v124 = v165; /*0x1008f7923*/
  if ( v162 ) /*0x1008f792d*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v162, 1); /*0x1008f793b*/
  v8 = (char *)v125; /*0x1008f7940*/
  v9 = v126; /*0x1008f7947*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008f7955*/
  v13 = v10; /*0x1008f7957*/
  v14 = *(_BYTE *)(v10 + 16) == 1; /*0x1008f795a*/
  v174 = a2; /*0x1008f795e*/
  v156 = a3; /*0x1008f7962*/
  if ( v14 ) /*0x1008f7969*/
  {
    v15 = *(_QWORD *)v10; /*0x1008f796f*/
    v16 = *(_QWORD *)(v13 + 8); /*0x1008f7972*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008f8823*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v7,
            v11,
            v12);
    *(_QWORD *)v13 = v15; /*0x1008f8828*/
    *(_QWORD *)(v13 + 8) = v16; /*0x1008f882b*/
    *(_BYTE *)(v13 + 16) = 1; /*0x1008f882f*/
  }
  *(_QWORD *)v13 = v15 + 1; /*0x1008f797a*/
  v165 = nullptr; /*0x1008f7984*/
  v164 = 0; /*0x1008f798f*/
  v163 = nullptr; /*0x1008f799a*/
  v162 = (const __m128i *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008f79a8*/
  v166 = v15; /*0x1008f79af*/
  v167 = v16; /*0x1008f79b3*/
  if ( v9 ) /*0x1008f79ba*/
  {
    v17 = v8 + 16; /*0x1008f79c0*/
    do /*0x1008f79e7*/
    {
      v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v17 - 1), *v17); /*0x1008f79f2*/
      codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v136, v18, v19); /*0x1008f79fd*/
      if ( v136 != (const __m128i *)0x8000000000000000LL ) /*0x1008f7a13*/
      {
        __n = v138; /*0x1008f7a1c*/
        __s1 = v137; /*0x1008f7a31*/
        v147 = v136; /*0x1008f7a38*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v162, &v147); /*0x1008f7a45*/
      }
      v17 += 3; /*0x1008f79e0*/
      --v9; /*0x1008f79e4*/
    }
    while ( v9 ); /*0x1008f79e7*/
  }
  v140[1] = v167; /*0x1008f7a50*/
  v140[0] = v166; /*0x1008f7a5b*/
  v139 = v165; /*0x1008f7a66*/
  v138 = v164; /*0x1008f7a71*/
  v137 = v163; /*0x1008f7a86*/
  v136 = v162; /*0x1008f7a8d*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc4c33f253406965f( /*0x1008f7ab4*/
    &v131,
    v128,
    v128 + 48 * v129,
    v6);
  v20 = v156[1].i64[0]; /*0x1008f7ac0*/
  v21 = v174; /*0x1008f7ac7*/
  if ( !v20 ) /*0x1008f7acb*/
  {
    v161 = nullptr; /*0x1008f7f35*/
    goto LABEL_50; /*0x1008f7f35*/
  }
  v22 = (__m128i *)v156->i64[1]; /*0x1008f7ad1*/
  v23 = (__m128i *)((char *)v22 + 24 * v20); /*0x1008f7ad9*/
  v161 = nullptr; /*0x1008f7add*/
  v171 = v23; /*0x1008f7af2*/
  while ( 2 ) /*0x1008f7b10*/
  {
    v24 = v22; /*0x1008f7b10*/
    while ( 1 ) /*0x1008f7b65*/
    {
      while ( 1 ) /*0x1008f7b4b*/
      {
        v25 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v24->i64[1], v24[1].i64[0]); /*0x1008f7b4b*/
        codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v162, v25, v26); /*0x1008f7b4e*/
        v160 = (__m128i *)((char *)v24 + 24); /*0x1008f7b57*/
        if ( v162 != (const __m128i *)0x8000000000000000LL ) /*0x1008f7b65*/
          break; /*0x1008f7b65*/
        v21 = v174; /*0x1008f7b20*/
        v24 = v160; /*0x1008f7b2b*/
        if ( v160 == v23 ) /*0x1008f7b31*/
          goto LABEL_50; /*0x1008f7b31*/
      }
      v172 = v24; /*0x1008f7b67*/
      __n = v164; /*0x1008f7b6f*/
      __s1 = v163; /*0x1008f7b84*/
      v147 = v162; /*0x1008f7b8b*/
      if ( !v139 ) /*0x1008f7b9a*/
        break; /*0x1008f7b9a*/
      v27 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v140, &v147); /*0x1008f7bae*/
      _RCX = v27 >> 57; /*0x1008f7bb6*/
      v29 = v136; /*0x1008f7bba*/
      v30 = (unsigned __int64)v137; /*0x1008f7bc1*/
      si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v27 >> 57), (__m128i)0LL); /*0x1008f7bd0*/
      v32 = &v136[-2].i8[8]; /*0x1008f7bd5*/
      v33 = __s1; /*0x1008f7bd9*/
      v34 = __n; /*0x1008f7be0*/
      for ( i = nullptr; ; ++i ) /*0x1008f7be7*/
      {
        v36 = v30 & v27; /*0x1008f7bea*/
        v37 = _mm_loadu_si128((const __m128i *)((char *)v29 + v36)); /*0x1008f7bed*/
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v37, si128)); /*0x1008f7bfb*/
        if ( _EBX ) /*0x1008f7c01*/
          break; /*0x1008f7c01*/
LABEL_23:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v37, (__m128i)-1LL)); /*0x1008f7c90*/
        if ( (_DWORD)_RCX ) /*0x1008f7c9e*/
          goto LABEL_29; /*0x1008f7c9e*/
        v27 = (unsigned __int64)i[1].u64 + v36; /*0x1008f7ca0*/
      }
      v173 = v36; /*0x1008f7c07*/
      *(__m128i *)__s2 = si128; /*0x1008f7c0b*/
      v145 = v30; /*0x1008f7c13*/
      v146 = i; /*0x1008f7c1a*/
      v141 = v37; /*0x1008f7c21*/
      while ( 1 ) /*0x1008f7c29*/
      {
        __asm { tzcnt ecx, ebx } /*0x1008f7c29*/
        _RCX = -(__int64)(v30 & (v36 + _RCX)); /*0x1008f7c33*/
        if ( v34 == *(_QWORD *)&v32[24 * _RCX + 16] && !memcmp(v33, *(const void **)&v32[24 * _RCX + 8], v34) ) /*0x1008f7c4f*/
          break; /*0x1008f7c4f*/
        v39 = _EBX - 1; /*0x1008f7c58*/
        LOWORD(v39) = _EBX & (_EBX - 1); /*0x1008f7c5b*/
        v14 = (_WORD)v39 == 0; /*0x1008f7c5b*/
        _EBX = v39; /*0x1008f7c5e*/
        v36 = v173; /*0x1008f7c60*/
        si128 = _mm_load_si128((const __m128i *)__s2); /*0x1008f7c64*/
        v30 = v145; /*0x1008f7c6c*/
        i = v146; /*0x1008f7c73*/
        v37 = _mm_load_si128(&v141); /*0x1008f7c7a*/
        if ( v14 ) /*0x1008f7c82*/
          goto LABEL_23; /*0x1008f7c82*/
      }
      if ( v147 ) /*0x1008f7cba*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v147, 1); /*0x1008f7cc4*/
      v21 = v174; /*0x1008f7cc9*/
      v23 = v171; /*0x1008f7cd7*/
      v24 = v160; /*0x1008f7ce2*/
      if ( v160 == v171 ) /*0x1008f7ce8*/
        goto LABEL_50; /*0x1008f7ce8*/
    }
LABEL_29:
    v40 = v174[2]; /*0x1008f7d00*/
    if ( !v40 ) /*0x1008f7d15*/
    {
LABEL_39:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v162, v172); /*0x1008f7e20*/
      v23 = v171; /*0x1008f7e30*/
      v21 = v174; /*0x1008f7e34*/
      v53 = v174[2]; /*0x1008f7e38*/
      if ( v53 == *v174 ) /*0x1008f7e40*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v174); /*0x1008f7e45*/
      v54 = (const __m128i *)v21[1]; /*0x1008f7e4a*/
      v55 = 3 * v53; /*0x1008f7e4e*/
      v54[1].i64[v55] = v164; /*0x1008f7e56*/
      v56 = v162; /*0x1008f7e5b*/
      v54->i64[v55 + 1] = (__int64)v163; /*0x1008f7e69*/
      v54->i64[v55] = (__int64)v56; /*0x1008f7e6e*/
      v21[2] = v53 + 1; /*0x1008f7e75*/
      LOBYTE(v54) = 1; /*0x1008f7e79*/
      v161 = v54; /*0x1008f7e7b*/
      goto LABEL_42; /*0x1008f7e7b*/
    }
    v41 = v174[1]; /*0x1008f7d1f*/
    v173 = 24 * v40; /*0x1008f7d2b*/
    __s2[0] = __s1; /*0x1008f7d36*/
    v42 = __n; /*0x1008f7d3d*/
    v43 = 0; /*0x1008f7d44*/
    while ( 1 ) /*0x1008f7d76*/
    {
      v44 = v42; /*0x1008f7d76*/
      v45 = v41; /*0x1008f7d7e*/
      v46 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1008f7d86*/
              *(_QWORD *)(v41 + v43 + 8),
              *(_QWORD *)(v41 + v43 + 16));
      codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v162, v46, v47); /*0x1008f7d95*/
      v48 = v162; /*0x1008f7d9a*/
      v42 = v44; /*0x1008f7da4*/
      if ( v162 != (const __m128i *)0x8000000000000000LL ) /*0x1008f7da7*/
      {
        if ( v164 != v44 ) /*0x1008f7dad*/
        {
          if ( v162 ) /*0x1008f7df3*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v162, 1); /*0x1008f7e08*/
            v42 = v44; /*0x1008f7e0d*/
          }
          goto LABEL_32; /*0x1008f7e10*/
        }
        v49 = v163; /*0x1008f7daf*/
        v50 = memcmp(v163, __s2[0], v44); /*0x1008f7dc0*/
        if ( v48 ) /*0x1008f7dc8*/
        {
          v51 = v49; /*0x1008f7dcf*/
          v52 = v50; /*0x1008f7dd5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v48, 1); /*0x1008f7dd8*/
          v50 = v52; /*0x1008f7ddd*/
        }
        v42 = v44; /*0x1008f7d5c*/
        if ( !v50 ) /*0x1008f7d5f*/
          break; /*0x1008f7d5f*/
      }
LABEL_32:
      v43 += 24; /*0x1008f7d65*/
      v41 = v45; /*0x1008f7d6d*/
      if ( v173 == v43 ) /*0x1008f7d70*/
        goto LABEL_39; /*0x1008f7d70*/
    }
    v57 = *(_QWORD *)(v45 + v43 + 16); /*0x1008f7ea8*/
    v58 = v172; /*0x1008f7ead*/
    v23 = v171; /*0x1008f7eb5*/
    v21 = v174; /*0x1008f7eb9*/
    if ( v57 != v172[1].i64[0] /*0x1008f7ed7*/
      || (v59 = memcmp(*(const void **)(v45 + v43 + 8), (const void *)v172->i64[1], v57), v58 = v172, v59) )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v162, v58); /*0x1008f7ee0*/
      v60 = (const __m128i **)(v45 + v43); /*0x1008f7ee5*/
      v61 = *(_QWORD *)(v45 + v43); /*0x1008f7ee9*/
      if ( v61 ) /*0x1008f7eef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v45 + v43 + 8), v61, 1); /*0x1008f7efb*/
      v60[2] = (const __m128i *)v164; /*0x1008f7f04*/
      v62 = v162; /*0x1008f7f08*/
      v60[1] = (const __m128i *)v163; /*0x1008f7f16*/
      *v60 = v62; /*0x1008f7f1a*/
      LOBYTE(v62) = 1; /*0x1008f7f1d*/
      v161 = v62; /*0x1008f7f1f*/
    }
LABEL_42:
    if ( v147 ) /*0x1008f7e8c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v147, 1); /*0x1008f7e9e*/
    v22 = v160; /*0x1008f7b00*/
    if ( v160 != v23 ) /*0x1008f7b0a*/
      continue; /*0x1008f7b0a*/
    break;
  }
LABEL_50:
  v63 = v156[2].i64[1]; /*0x1008f7f40*/
  if ( !v63 ) /*0x1008f7f4e*/
  {
    v141.i64[0] = v132; /*0x1008f86b9*/
    v109 = v133; /*0x1008f86c0*/
    if ( !v133 ) /*0x1008f86ca*/
      goto LABEL_120; /*0x1008f86ca*/
    goto LABEL_116; /*0x1008f86ca*/
  }
  v64 = (__m128i *)v156[2].i64[0]; /*0x1008f7f54*/
  v156 = &v64[3 * v63]; /*0x1008f7f63*/
  v130 = v21 + 3; /*0x1008f7f6e*/
  v134 = v133; /*0x1008f7f83*/
  v141.i64[0] = v132; /*0x1008f7f8e*/
  __s2[0] = (void *)(v132 + 24 * v133); /*0x1008f7f99*/
LABEL_54:
  v68 = v21; /*0x1008f8014*/
  while ( 2 ) /*0x1008f8017*/
  {
    v172 = v64 + 3; /*0x1008f8017*/
    v173 = v64->i64[1]; /*0x1008f8025*/
    v171 = v64; /*0x1008f8029*/
    v160 = (__m128i *)v64[1].i64[0]; /*0x1008f8032*/
    v69 = (_QWORD *)v141.i64[0]; /*0x1008f8039*/
    do /*0x1008f8061*/
    {
      if ( v69 == __s2[0] ) /*0x1008f806e*/
      {
        v80 = (size_t *)v68[4]; /*0x1008f8230*/
        v160 = (__m128i *)&v80[6 * v68[5]]; /*0x1008f8243*/
        v81 = v171; /*0x1008f824a*/
        v145 = v171->u64[1]; /*0x1008f8252*/
        v146 = (__m128i *)v171[1].i64[0]; /*0x1008f825d*/
        v64 = v172; /*0x1008f8264*/
        do /*0x1008f8289*/
        {
          if ( v80 == (size_t *)v160 ) /*0x1008f8296*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v157, v81); /*0x1008f841a*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44( /*0x1008f842d*/
              &v147,
              &v81[1].u64[1]);
            v164 = v159; /*0x1008f8439*/
            v163 = v158; /*0x1008f844b*/
            v162 = v157; /*0x1008f8452*/
            v167 = __n; /*0x1008f8464*/
            v166 = (__int64)__s1; /*0x1008f8476*/
            v165 = v147; /*0x1008f847a*/
            v21 = v68; /*0x1008f847d*/
            v92 = v68[5]; /*0x1008f8480*/
            if ( v92 == v68[3] ) /*0x1008f8488*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(v130); /*0x1008f8495*/
            v65 = (const __m128i *)v68[4]; /*0x1008f7fb0*/
            v66 = 3 * v92; /*0x1008f7fb8*/
            v65[v66 + 2].i64[1] = v167; /*0x1008f7fc0*/
            v65[v66 + 2].i64[0] = v166; /*0x1008f7fc9*/
            v65[v66 + 1].i64[1] = (__int64)v165; /*0x1008f7fd2*/
            v65[v66 + 1].i64[0] = v164; /*0x1008f7fdb*/
            v67 = v162; /*0x1008f7fe0*/
            v65[v66].i64[1] = (__int64)v163; /*0x1008f7fee*/
            v65[v66].i64[0] = (__int64)v67; /*0x1008f7ff3*/
            v68[5] = v92 + 1; /*0x1008f7ffa*/
            LOBYTE(v65) = 1; /*0x1008f7ffe*/
            v161 = v65; /*0x1008f8000*/
            goto LABEL_53; /*0x1008f8000*/
          }
          v82 = (__int64)v80; /*0x1008f829c*/
          v83 = v80[1]; /*0x1008f829f*/
          v84 = *(void **)(v82 + 16); /*0x1008f82a3*/
          v147 = nullptr; /*0x1008f82a7*/
          __s1 = v84; /*0x1008f82b2*/
          __n = v83; /*0x1008f82b9*/
          v150 = v84; /*0x1008f82c0*/
          v151 = 0; /*0x1008f82c7*/
          v152 = v84; /*0x1008f82d2*/
          v153 = 0x2E0000002ELL; /*0x1008f82d9*/
          v154 = 1; /*0x1008f82e0*/
          v155 = 1; /*0x1008f82e7*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f82fe*/
            &v142,
            (__int64 *)&v147);
          v162 = nullptr; /*0x1008f8303*/
          v163 = v146; /*0x1008f8315*/
          v164 = v145; /*0x1008f8323*/
          v165 = v146; /*0x1008f8327*/
          v166 = 0; /*0x1008f832b*/
          v167 = (size_t)v146; /*0x1008f8333*/
          v168 = 0x2E0000002ELL; /*0x1008f8337*/
          LOBYTE(v169) = 1; /*0x1008f833b*/
          LOWORD(v170) = 1; /*0x1008f833f*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f8353*/
            (__int64 *)&v157,
            (__int64 *)&v162);
          v173 = v82; /*0x1008f8358*/
          v85 = v143; /*0x1008f835c*/
          v86 = v144; /*0x1008f8363*/
          v87 = v158; /*0x1008f836a*/
          if ( v159 < v144 ) /*0x1008f837b*/
            v86 = v159; /*0x1008f837b*/
          v88 = 1; /*0x1008f837f*/
          if ( v86 ) /*0x1008f8385*/
          {
            v89 = 16 * v86; /*0x1008f8387*/
            v90 = 0; /*0x1008f838b*/
            while ( 1 ) /*0x1008f8390*/
            {
              v91 = *(_QWORD *)(v85 + v90 + 8); /*0x1008f8390*/
              if ( v91 != *(_QWORD *)&v87[v90 + 8] /*0x1008f83a4*/
                || memcmp(*(const void **)(v85 + v90), *(const void **)&v87[v90], v91) )
              {
                break; /*0x1008f83a4*/
              }
              v90 += 16; /*0x1008f83ad*/
              if ( v89 == v90 ) /*0x1008f83b4*/
                goto LABEL_87; /*0x1008f83b4*/
            }
            v88 = 0; /*0x1008f83c0*/
          }
LABEL_87:
          v64 = v172; /*0x1008f83c3*/
          v81 = v171; /*0x1008f83d1*/
          if ( v157 ) /*0x1008f83d5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, 16LL * (_QWORD)v157, 8); /*0x1008f83e3*/
          if ( v142 ) /*0x1008f83f2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 16 * v142, 8); /*0x1008f8404*/
          v80 = (size_t *)(v173 + 48); /*0x1008f8274*/
          v14 = v88 == 0; /*0x1008f8278*/
          v68 = v174; /*0x1008f827b*/
        }
        while ( v14 ); /*0x1008f8289*/
        v93 = *(_QWORD *)(v173 + 16); /*0x1008f84a0*/
        if ( v93 == v81[1].i64[0] && !memcmp(*(const void **)(v173 + 8), (const void *)v171->i64[1], v93) ) /*0x1008f84be*/
        {
          v94 = *(_QWORD *)(v173 + 40); /*0x1008f84cb*/
          if ( v94 == v171[2].i64[1] ) /*0x1008f84d7*/
          {
            if ( !v94 ) /*0x1008f84dc*/
            {
              v21 = v174; /*0x1008f8697*/
              v64 = v172; /*0x1008f869b*/
              goto LABEL_53; /*0x1008f869f*/
            }
            v95 = *(_QWORD *)(v173 + 32); /*0x1008f84e6*/
            v96 = v171[2].i64[0]; /*0x1008f84ee*/
            v97 = 16; /*0x1008f84f2*/
            while ( 1 ) /*0x1008f8500*/
            {
              v98 = *(_QWORD *)(v95 + v97); /*0x1008f8500*/
              if ( v98 != *(_QWORD *)(v96 + v97) /*0x1008f8514*/
                || memcmp(*(const void **)(v95 + v97 - 8), *(const void **)(v96 + v97 - 8), v98) )
              {
                break; /*0x1008f8514*/
              }
              v97 += 24; /*0x1008f851d*/
              if ( !--v94 ) /*0x1008f8524*/
              {
                v21 = v174; /*0x1008f8526*/
                v64 = v172; /*0x1008f852a*/
                goto LABEL_53; /*0x1008f8538*/
              }
            }
          }
        }
        v99 = v171; /*0x1008f8547*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v157, v171); /*0x1008f854e*/
        v64 = v172; /*0x1008f8553*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44( /*0x1008f8565*/
          &v147,
          &v99[1].u64[1]);
        v164 = v159; /*0x1008f8571*/
        v163 = v158; /*0x1008f8583*/
        v162 = v157; /*0x1008f858a*/
        v167 = __n; /*0x1008f859c*/
        v166 = (__int64)__s1; /*0x1008f85ae*/
        v165 = v147; /*0x1008f85b2*/
        v100 = v173; /*0x1008f85b5*/
        if ( *(_QWORD *)v173 ) /*0x1008f85b9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v173 + 8), *(_QWORD *)v173, 1); /*0x1008f85ca*/
        v101 = v100; /*0x1008f85cf*/
        v102 = *(_QWORD *)(v100 + 32); /*0x1008f85d2*/
        v103 = *(_QWORD *)(v101 + 40); /*0x1008f85d6*/
        if ( v103 ) /*0x1008f85dd*/
        {
          v104 = (_QWORD *)(v102 + 8); /*0x1008f85df*/
          do /*0x1008f85f7*/
          {
            v105 = *(v104 - 1); /*0x1008f85f9*/
            if ( v105 ) /*0x1008f8600*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v104, v105, 1); /*0x1008f860a*/
            v104 += 3; /*0x1008f85f0*/
            --v103; /*0x1008f85f4*/
          }
          while ( v103 ); /*0x1008f85f7*/
        }
        v106 = *(_QWORD *)(v173 + 24); /*0x1008f8624*/
        if ( v106 ) /*0x1008f862b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24 * v106, 8); /*0x1008f863d*/
        v107 = (_QWORD *)v173; /*0x1008f8646*/
        *(_QWORD *)(v173 + 40) = v167; /*0x1008f864a*/
        v107[4] = v166; /*0x1008f8652*/
        v107[3] = v165; /*0x1008f865a*/
        v107[2] = v164; /*0x1008f8662*/
        v108 = v162; /*0x1008f8666*/
        v107[1] = v163; /*0x1008f8674*/
        *v107 = v108; /*0x1008f8678*/
        LOBYTE(v108) = 1; /*0x1008f867b*/
        v161 = v108; /*0x1008f867d*/
        v21 = v174; /*0x1008f8684*/
LABEL_53:
        if ( v64 == v156 ) /*0x1008f800e*/
          goto LABEL_113; /*0x1008f800e*/
        goto LABEL_54; /*0x1008f800e*/
      }
      v70 = v69[1]; /*0x1008f8074*/
      v71 = (void *)v69[2]; /*0x1008f8078*/
      v147 = nullptr; /*0x1008f807c*/
      __s1 = v71; /*0x1008f8087*/
      __n = v70; /*0x1008f808e*/
      v150 = v71; /*0x1008f8095*/
      v151 = 0; /*0x1008f809c*/
      v152 = v71; /*0x1008f80a7*/
      v153 = 0x2E0000002ELL; /*0x1008f80ae*/
      v154 = 1; /*0x1008f80b5*/
      v155 = 1; /*0x1008f80bc*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f80d3*/
        &v142,
        (__int64 *)&v147);
      v162 = nullptr; /*0x1008f80d8*/
      v163 = v160; /*0x1008f80ea*/
      v164 = v173; /*0x1008f80f5*/
      v165 = v160; /*0x1008f80f9*/
      v166 = 0; /*0x1008f80fd*/
      v167 = (size_t)v160; /*0x1008f8105*/
      v168 = 0x2E0000002ELL; /*0x1008f8109*/
      LOBYTE(v169) = 1; /*0x1008f810d*/
      LOWORD(v170) = 1; /*0x1008f8111*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f8125*/
        (__int64 *)&v157,
        (__int64 *)&v162);
      v72 = v143; /*0x1008f812a*/
      v73 = v144; /*0x1008f8131*/
      v74 = v158; /*0x1008f8138*/
      if ( v159 < v144 ) /*0x1008f8149*/
        v73 = v159; /*0x1008f8149*/
      if ( v73 ) /*0x1008f8150*/
      {
        v75 = 16 * v73; /*0x1008f8156*/
        v76 = 0; /*0x1008f815a*/
        while ( 1 ) /*0x1008f8160*/
        {
          v77 = *(_QWORD *)(v72 + v76 + 8); /*0x1008f8160*/
          if ( v77 != *(_QWORD *)&v74[v76 + 8] || memcmp(*(const void **)(v72 + v76), *(const void **)&v74[v76], v77) ) /*0x1008f8174*/
            break; /*0x1008f8174*/
          v76 += 16; /*0x1008f817d*/
          if ( v75 == v76 ) /*0x1008f8184*/
          {
            v68 = v174; /*0x1008f8186*/
            v78 = 1; /*0x1008f818a*/
            v79 = v157; /*0x1008f818d*/
            if ( v157 ) /*0x1008f8197*/
              goto LABEL_68; /*0x1008f8197*/
            goto LABEL_69; /*0x1008f8197*/
          }
        }
        v78 = 0; /*0x1008f81a0*/
        v68 = v174; /*0x1008f81a3*/
        v79 = v157; /*0x1008f81a7*/
        if ( !v157 ) /*0x1008f81b1*/
          goto LABEL_69; /*0x1008f81b1*/
LABEL_68:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, 16LL * (_QWORD)v79, 8); /*0x1008f81b3*/
        goto LABEL_69; /*0x1008f81bf*/
      }
      v78 = 1; /*0x1008f81f0*/
      v79 = v157; /*0x1008f81f3*/
      if ( v157 ) /*0x1008f81fd*/
        goto LABEL_68; /*0x1008f81fd*/
LABEL_69:
      if ( v142 ) /*0x1008f81ce*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 16 * v142, 8); /*0x1008f81e0*/
      v69 += 3; /*0x1008f8050*/
    }
    while ( !v78 ); /*0x1008f8061*/
    v64 = v172; /*0x1008f8210*/
    if ( v172 != v156 ) /*0x1008f821b*/
      continue; /*0x1008f821b*/
    break;
  }
LABEL_113:
  v109 = v134; /*0x1008f86a4*/
  if ( v134 ) /*0x1008f86ae*/
  {
LABEL_116:
    v110 = (_QWORD *)(v141.i64[0] + 8); /*0x1008f86cc*/
    do /*0x1008f86e7*/
    {
      v111 = *(v110 - 1); /*0x1008f86e9*/
      if ( v111 ) /*0x1008f86f0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v110, v111, 1); /*0x1008f86fa*/
      v110 += 3; /*0x1008f86e0*/
      --v109; /*0x1008f86e4*/
    }
    while ( v109 ); /*0x1008f86e7*/
  }
LABEL_120:
  HIDWORD(_RAX) = HIDWORD(v131); /*0x1008f8701*/
  if ( v131 ) /*0x1008f870b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141.i64[0], 24 * v131, 8); /*0x1008f8721*/
  v113 = v137; /*0x1008f8726*/
  if ( v137 ) /*0x1008f8730*/
  {
    v114 = v139; /*0x1008f8736*/
    if ( v139 ) /*0x1008f8740*/
    {
      v115 = v136; /*0x1008f8746*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v136)); /*0x1008f8757*/
      v117 = v136 + 1; /*0x1008f875a*/
      do /*0x1008f8770*/
      {
        if ( !(_WORD)_R13D ) /*0x1008f8776*/
        {
          do /*0x1008f879d*/
          {
            v118 = _mm_movemask_epi8(_mm_load_si128(v117)); /*0x1008f8786*/
            v115 -= 24; /*0x1008f878b*/
            ++v117; /*0x1008f8792*/
          }
          while ( v118 == 0xFFFF ); /*0x1008f879d*/
          _R13D = ~v118; /*0x1008f879f*/
        }
        __asm { tzcnt eax, r13d } /*0x1008f87a2*/
        v119 = -3 * _RAX; /*0x1008f87aa*/
        v120 = *((_QWORD *)&v115[-1] + v119 - 1); /*0x1008f87ae*/
        if ( v120 ) /*0x1008f87b6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115[-1].i64[v119], v120, 1); /*0x1008f87c5*/
        v114 = (const __m128i *)((char *)v114 - 1); /*0x1008f8760*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1008f8767*/
        _R13D &= _R13D - 1; /*0x1008f876a*/
      }
      while ( v114 ); /*0x1008f8770*/
    }
    v121 = (24LL * (_QWORD)v113 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008f87d8*/
    v122 = (__int64)v113 + v121 + 17; /*0x1008f87df*/
    if ( v122 ) /*0x1008f87e3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v136 - v121, v122, 16); /*0x1008f87f7*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h06c77773d9c0f4c1(&v124); /*0x1008f8803*/
  return (unsigned __int8)v161 & 1; /*0x1008f8811*/
}