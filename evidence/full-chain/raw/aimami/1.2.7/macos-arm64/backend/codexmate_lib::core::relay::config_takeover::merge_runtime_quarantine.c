// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h4eafb5ff9a6e243c; addr: 0x1002239e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
char __fastcall codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h4eafb5ff9a6e243c(
        __int64 a1,
        _QWORD *a2,
        size_t *a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  double v8; // xmm0_8
  char *v9; // r12
  size_t v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  bool v13; // zf
  __int64 v14; // rax
  size_t v15; // rdx
  _QWORD *v16; // r12
  __int64 v17; // rax
  size_t v18; // rax
  _QWORD *v19; // r13
  __int64 *v20; // rcx
  __m128i *v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  const __m128i *v26; // r14
  unsigned __int64 v27; // rsi
  __m128i si128; // xmm1
  __int8 *v29; // r15
  void *v30; // r13
  size_t v31; // r12
  __m128i *i; // r8
  __int64 v33; // rax
  __m128i v34; // xmm2
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  size_t v39; // rdx
  __int64 v40; // rbx
  size_t v41; // r13
  __int64 v42; // r15
  __int64 v43; // rax
  const __m128i *v44; // r12
  void *v45; // r14
  int v46; // eax
  void *v47; // rdi
  int v48; // r14d
  __int64 v49; // rbx
  const __m128i *v50; // rax
  __int64 v51; // rcx
  const __m128i *v52; // rdx
  size_t v53; // rdx
  __int64 *v54; // rsi
  int v55; // eax
  const __m128i **v56; // r14
  __int64 v57; // rsi
  const __m128i *v58; // rax
  size_t v59; // rax
  size_t *v60; // r12
  const __m128i *v61; // rax
  __int64 v62; // rcx
  const __m128i *v63; // rdx
  _QWORD *v64; // r15
  _QWORD *v65; // r13
  size_t v66; // rax
  void *v67; // rcx
  __int64 v68; // rbx
  size_t v69; // r12
  char *v70; // r14
  __int64 v71; // r12
  __int64 v72; // r15
  size_t v73; // rdx
  char v74; // r12
  const __m128i *v75; // rsi
  size_t *v76; // rax
  size_t *v77; // r13
  __int64 v78; // rbx
  size_t v79; // rax
  void *v80; // rcx
  __int64 v81; // rbx
  size_t v82; // r13
  char *v83; // r14
  char v84; // r15
  __int64 v85; // r13
  __int64 v86; // r12
  size_t v87; // rdx
  __int64 v88; // rbx
  size_t v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // r14
  size_t v92; // r15
  __int64 v93; // r13
  size_t v94; // rdx
  size_t *v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // r14
  _QWORD *v100; // r15
  __int64 v101; // rsi
  __int64 v102; // rax
  _QWORD *v103; // rdx
  const __m128i *v104; // rax
  __int64 v105; // r14
  _QWORD *v106; // rbx
  __int64 v107; // rsi
  void *v109; // rbx
  const __m128i *v110; // r14
  const __m128i *v111; // r15
  const __m128i *v113; // r12
  int v114; // r13d
  __int64 v115; // rax
  __int64 v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // rbx
  const __m128i *v120; // [rsp+8h] [rbp-1D8h] BYREF
  __int64 v121; // [rsp+10h] [rbp-1D0h]
  size_t v122; // [rsp+18h] [rbp-1C8h]
  __int64 v123; // [rsp+20h] [rbp-1C0h]
  __int64 v124; // [rsp+28h] [rbp-1B8h]
  __int64 v125; // [rsp+30h] [rbp-1B0h]
  _QWORD *v126; // [rsp+38h] [rbp-1A8h]
  __int64 v127; // [rsp+40h] [rbp-1A0h] BYREF
  __int64 v128; // [rsp+48h] [rbp-198h]
  __int64 v129; // [rsp+50h] [rbp-190h]
  __int64 v130; // [rsp+58h] [rbp-188h]
  void *__s2[2]; // [rsp+60h] [rbp-180h] BYREF
  const __m128i *v132; // [rsp+70h] [rbp-170h] BYREF
  void *v133; // [rsp+78h] [rbp-168h]
  size_t v134; // [rsp+80h] [rbp-160h]
  const __m128i *v135; // [rsp+88h] [rbp-158h]
  _QWORD v136[2]; // [rsp+90h] [rbp-150h] BYREF
  __m128i v137; // [rsp+A0h] [rbp-140h] BYREF
  __int64 v138; // [rsp+B0h] [rbp-130h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-128h]
  size_t v140; // [rsp+C0h] [rbp-120h]
  size_t v141; // [rsp+C8h] [rbp-118h]
  __m128i *v142; // [rsp+D0h] [rbp-110h]
  const __m128i *v143; // [rsp+D8h] [rbp-108h] BYREF
  void *__s1; // [rsp+E0h] [rbp-100h]
  size_t __n; // [rsp+E8h] [rbp-F8h]
  void *v146; // [rsp+F0h] [rbp-F0h]
  __int64 v147; // [rsp+F8h] [rbp-E8h]
  void *v148; // [rsp+100h] [rbp-E0h]
  __int64 v149; // [rsp+108h] [rbp-D8h]
  char v150; // [rsp+110h] [rbp-D0h]
  __int16 v151; // [rsp+118h] [rbp-C8h]
  size_t *v152; // [rsp+120h] [rbp-C0h]
  const __m128i *v153; // [rsp+128h] [rbp-B8h] BYREF
  char *v154; // [rsp+130h] [rbp-B0h]
  size_t v155; // [rsp+138h] [rbp-A8h]
  __m128i *v156; // [rsp+140h] [rbp-A0h]
  const __m128i *v157; // [rsp+148h] [rbp-98h]
  const __m128i *v158; // [rsp+150h] [rbp-90h] BYREF
  void *v159; // [rsp+158h] [rbp-88h]
  size_t v160; // [rsp+160h] [rbp-80h]
  const __m128i *v161; // [rsp+168h] [rbp-78h]
  __int64 v162; // [rsp+170h] [rbp-70h]
  size_t v163; // [rsp+178h] [rbp-68h]
  __int64 v164; // [rsp+180h] [rbp-60h]
  __int64 v165; // [rsp+188h] [rbp-58h]
  __int64 v166; // [rsp+190h] [rbp-50h]
  size_t *v167; // [rsp+198h] [rbp-48h]
  __int64 *v168; // [rsp+1A0h] [rbp-40h]
  __int64 v169; // [rsp+1A8h] [rbp-38h]
  _QWORD *v170; // [rsp+1B0h] [rbp-30h]

  v8 = codexmate_lib::core::relay::config_takeover::split_foreign_surface::h6723df967ae8fa8d( /*0x100223a0c*/
         (__int64 *)&v158,
         a1,
         a2[7],
         a2[8],
         a4,
         a6,
         a7);
  v125 = v166; /*0x100223a15*/
  v124 = v165; /*0x100223a20*/
  v123 = v164; /*0x100223a2b*/
  v122 = v163; /*0x100223a36*/
  v121 = v162; /*0x100223a41*/
  v120 = v161; /*0x100223a53*/
  if ( v158 ) /*0x100223a5d*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v158, 1); /*0x100223a6b*/
  v9 = (char *)v121; /*0x100223a70*/
  v10 = v122; /*0x100223a77*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100223a85*/
  v12 = v11; /*0x100223a87*/
  v13 = *(_BYTE *)(v11 + 16) == 1; /*0x100223a8a*/
  v170 = a2; /*0x100223a8e*/
  v152 = a3; /*0x100223a92*/
  if ( v13 ) /*0x100223a99*/
  {
    v14 = *(_QWORD *)v11; /*0x100223a9f*/
    v15 = *(_QWORD *)(v12 + 8); /*0x100223aa2*/
  }
  else
  {
    v14 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v8); /*0x100224953*/
    *(_QWORD *)v12 = v14; /*0x100224958*/
    *(_QWORD *)(v12 + 8) = v15; /*0x10022495b*/
    *(_BYTE *)(v12 + 16) = 1; /*0x10022495f*/
  }
  *(_QWORD *)v12 = v14 + 1; /*0x100223aaa*/
  v161 = nullptr; /*0x100223ab4*/
  v160 = 0; /*0x100223abf*/
  v159 = nullptr; /*0x100223aca*/
  v158 = (const __m128i *)anon_8cf26f36e03587b9a54b9e7945b707cc_14; /*0x100223ad8*/
  v162 = v14; /*0x100223adf*/
  v163 = v15; /*0x100223ae3*/
  if ( v10 ) /*0x100223aea*/
  {
    v16 = v9 + 16; /*0x100223af0*/
    do /*0x100223b17*/
    {
      v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(*(v16 - 1), *v16); /*0x100223b22*/
      codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v132, v17); /*0x100223b2d*/
      if ( v132 != (const __m128i *)0x8000000000000000LL ) /*0x100223b43*/
      {
        __n = v134; /*0x100223b4c*/
        __s1 = v133; /*0x100223b61*/
        v143 = v132; /*0x100223b68*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(&v158, &v143); /*0x100223b75*/
      }
      v16 += 3; /*0x100223b10*/
      --v10; /*0x100223b14*/
    }
    while ( v10 ); /*0x100223b17*/
  }
  v136[1] = v163; /*0x100223b80*/
  v136[0] = v162; /*0x100223b8b*/
  v135 = v161; /*0x100223b96*/
  v134 = v160; /*0x100223ba1*/
  v133 = v159; /*0x100223bb6*/
  v132 = v158; /*0x100223bbd*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heb02cc75c30433a5( /*0x100223be4*/
    &v127,
    v124,
    v124 + 48 * v125,
    v8);
  v18 = v152[2]; /*0x100223bf0*/
  v19 = v170; /*0x100223bf7*/
  if ( !v18 ) /*0x100223bfb*/
  {
    v157 = nullptr; /*0x100224065*/
    goto LABEL_50; /*0x100224065*/
  }
  v20 = (__int64 *)v152[1]; /*0x100223c01*/
  v21 = (__m128i *)&v20[3 * v18]; /*0x100223c09*/
  v157 = nullptr; /*0x100223c0d*/
  v167 = (size_t *)v21; /*0x100223c22*/
  while ( 2 ) /*0x100223c40*/
  {
    v22 = v20; /*0x100223c40*/
    while ( 1 ) /*0x100223c95*/
    {
      while ( 1 ) /*0x100223c7b*/
      {
        v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v22[1], v22[2]); /*0x100223c7b*/
        codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v158, v23); /*0x100223c7e*/
        v156 = (__m128i *)(v22 + 3); /*0x100223c87*/
        if ( v158 != (const __m128i *)0x8000000000000000LL ) /*0x100223c95*/
          break; /*0x100223c95*/
        v19 = v170; /*0x100223c50*/
        v22 = (__int64 *)v156; /*0x100223c5b*/
        if ( v156 == v21 ) /*0x100223c61*/
          goto LABEL_50; /*0x100223c61*/
      }
      v168 = v22; /*0x100223c97*/
      __n = v160; /*0x100223c9f*/
      __s1 = v159; /*0x100223cb4*/
      v143 = v158; /*0x100223cbb*/
      if ( !v135 ) /*0x100223cca*/
        break; /*0x100223cca*/
      v24 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(v136, &v143); /*0x100223cde*/
      _RCX = v24 >> 57; /*0x100223ce6*/
      v26 = v132; /*0x100223cea*/
      v27 = (unsigned __int64)v133; /*0x100223cf1*/
      si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v24 >> 57), (__m128i)0LL); /*0x100223d00*/
      v29 = &v132[-2].i8[8]; /*0x100223d05*/
      v30 = __s1; /*0x100223d09*/
      v31 = __n; /*0x100223d10*/
      for ( i = nullptr; ; ++i ) /*0x100223d17*/
      {
        v33 = v27 & v24; /*0x100223d1a*/
        v34 = _mm_loadu_si128((const __m128i *)((char *)v26 + v33)); /*0x100223d1d*/
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v34, si128)); /*0x100223d2b*/
        if ( _EBX ) /*0x100223d31*/
          break; /*0x100223d31*/
LABEL_23:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v34, (__m128i)-1LL)); /*0x100223dc0*/
        if ( (_DWORD)_RCX ) /*0x100223dce*/
          goto LABEL_29; /*0x100223dce*/
        v24 = (unsigned __int64)i[1].u64 + v33; /*0x100223dd0*/
      }
      v169 = v33; /*0x100223d37*/
      *(__m128i *)__s2 = si128; /*0x100223d3b*/
      v141 = v27; /*0x100223d43*/
      v142 = i; /*0x100223d4a*/
      v137 = v34; /*0x100223d51*/
      while ( 1 ) /*0x100223d59*/
      {
        __asm { tzcnt ecx, ebx } /*0x100223d59*/
        _RCX = -(__int64)(v27 & (v33 + _RCX)); /*0x100223d63*/
        if ( v31 == *(_QWORD *)&v29[24 * _RCX + 16] && !memcmp(v30, *(const void **)&v29[24 * _RCX + 8], v31) ) /*0x100223d7f*/
          break; /*0x100223d7f*/
        v36 = _EBX - 1; /*0x100223d88*/
        LOWORD(v36) = _EBX & (_EBX - 1); /*0x100223d8b*/
        v13 = (_WORD)v36 == 0; /*0x100223d8b*/
        _EBX = v36; /*0x100223d8e*/
        v33 = v169; /*0x100223d90*/
        si128 = _mm_load_si128((const __m128i *)__s2); /*0x100223d94*/
        v27 = v141; /*0x100223d9c*/
        i = v142; /*0x100223da3*/
        v34 = _mm_load_si128(&v137); /*0x100223daa*/
        if ( v13 ) /*0x100223db2*/
          goto LABEL_23; /*0x100223db2*/
      }
      if ( v143 ) /*0x100223dea*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v143, 1); /*0x100223df4*/
      v19 = v170; /*0x100223df9*/
      v21 = (__m128i *)v167; /*0x100223e07*/
      v22 = (__int64 *)v156; /*0x100223e12*/
      if ( v156 == (__m128i *)v167 ) /*0x100223e18*/
        goto LABEL_50; /*0x100223e18*/
    }
LABEL_29:
    v37 = v170[2]; /*0x100223e30*/
    if ( !v37 ) /*0x100223e45*/
    {
LABEL_39:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v158, v168); /*0x100223f50*/
      v21 = (__m128i *)v167; /*0x100223f60*/
      v19 = v170; /*0x100223f64*/
      v49 = v170[2]; /*0x100223f68*/
      if ( v49 == *v170 ) /*0x100223f70*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v170); /*0x100223f75*/
      v50 = (const __m128i *)v19[1]; /*0x100223f7a*/
      v51 = 3 * v49; /*0x100223f7e*/
      v50[1].i64[v51] = v160; /*0x100223f86*/
      v52 = v158; /*0x100223f8b*/
      v50->i64[v51 + 1] = (__int64)v159; /*0x100223f99*/
      v50->i64[v51] = (__int64)v52; /*0x100223f9e*/
      v19[2] = v49 + 1; /*0x100223fa5*/
      LOBYTE(v50) = 1; /*0x100223fa9*/
      v157 = v50; /*0x100223fab*/
      goto LABEL_42; /*0x100223fab*/
    }
    v38 = v170[1]; /*0x100223e4f*/
    v169 = 24 * v37; /*0x100223e5b*/
    __s2[0] = __s1; /*0x100223e66*/
    v39 = __n; /*0x100223e6d*/
    v40 = 0; /*0x100223e74*/
    while ( 1 ) /*0x100223ea6*/
    {
      v41 = v39; /*0x100223ea6*/
      v42 = v38; /*0x100223eae*/
      v43 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6( /*0x100223eb6*/
              *(_QWORD *)(v38 + v40 + 8),
              *(_QWORD *)(v38 + v40 + 16));
      codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v158, v43); /*0x100223ec5*/
      v44 = v158; /*0x100223eca*/
      v39 = v41; /*0x100223ed4*/
      if ( v158 != (const __m128i *)0x8000000000000000LL ) /*0x100223ed7*/
      {
        if ( v160 != v41 ) /*0x100223edd*/
        {
          if ( v158 ) /*0x100223f23*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v158, 1); /*0x100223f38*/
            v39 = v41; /*0x100223f3d*/
          }
          goto LABEL_32; /*0x100223f40*/
        }
        v45 = v159; /*0x100223edf*/
        v46 = memcmp(v159, __s2[0], v41); /*0x100223ef0*/
        if ( v44 ) /*0x100223ef8*/
        {
          v47 = v45; /*0x100223eff*/
          v48 = v46; /*0x100223f05*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v44, 1); /*0x100223f08*/
          v46 = v48; /*0x100223f0d*/
        }
        v39 = v41; /*0x100223e8c*/
        if ( !v46 ) /*0x100223e8f*/
          break; /*0x100223e8f*/
      }
LABEL_32:
      v40 += 24; /*0x100223e95*/
      v38 = v42; /*0x100223e9d*/
      if ( v169 == v40 ) /*0x100223ea0*/
        goto LABEL_39; /*0x100223ea0*/
    }
    v53 = *(_QWORD *)(v42 + v40 + 16); /*0x100223fd8*/
    v54 = v168; /*0x100223fdd*/
    v21 = (__m128i *)v167; /*0x100223fe5*/
    v19 = v170; /*0x100223fe9*/
    if ( v53 != v168[2] || (v55 = memcmp(*(const void **)(v42 + v40 + 8), (const void *)v168[1], v53), v54 = v168, v55) ) /*0x100224007*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v158, v54); /*0x100224010*/
      v56 = (const __m128i **)(v42 + v40); /*0x100224015*/
      v57 = *(_QWORD *)(v42 + v40); /*0x100224019*/
      if ( v57 ) /*0x10022401f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v42 + v40 + 8), v57, 1); /*0x10022402b*/
      v56[2] = (const __m128i *)v160; /*0x100224034*/
      v58 = v158; /*0x100224038*/
      v56[1] = (const __m128i *)v159; /*0x100224046*/
      *v56 = v58; /*0x10022404a*/
      LOBYTE(v58) = 1; /*0x10022404d*/
      v157 = v58; /*0x10022404f*/
    }
LABEL_42:
    if ( v143 ) /*0x100223fbc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v143, 1); /*0x100223fce*/
    v20 = (__int64 *)v156; /*0x100223c30*/
    if ( v156 != v21 ) /*0x100223c3a*/
      continue; /*0x100223c3a*/
    break;
  }
LABEL_50:
  v59 = v152[5]; /*0x100224070*/
  if ( !v59 ) /*0x10022407e*/
  {
    v137.i64[0] = v128; /*0x1002247e9*/
    v105 = v129; /*0x1002247f0*/
    if ( !v129 ) /*0x1002247fa*/
      goto LABEL_120; /*0x1002247fa*/
    goto LABEL_116; /*0x1002247fa*/
  }
  v60 = (size_t *)v152[4]; /*0x100224084*/
  v152 = &v60[6 * v59]; /*0x100224093*/
  v126 = v19 + 3; /*0x10022409e*/
  v130 = v129; /*0x1002240b3*/
  v137.i64[0] = v128; /*0x1002240be*/
  __s2[0] = (void *)(v128 + 24 * v129); /*0x1002240c9*/
LABEL_54:
  v64 = v19; /*0x100224144*/
  while ( 2 ) /*0x100224147*/
  {
    v168 = (__int64 *)(v60 + 6); /*0x100224147*/
    v169 = v60[1]; /*0x100224155*/
    v167 = v60; /*0x100224159*/
    v156 = (__m128i *)v60[2]; /*0x100224162*/
    v65 = (_QWORD *)v137.i64[0]; /*0x100224169*/
    do /*0x100224191*/
    {
      if ( v65 == __s2[0] ) /*0x10022419e*/
      {
        v76 = (size_t *)v64[4]; /*0x100224360*/
        v156 = (__m128i *)&v76[6 * v64[5]]; /*0x100224373*/
        v77 = v167; /*0x10022437a*/
        v141 = v167[1]; /*0x100224382*/
        v142 = (__m128i *)v167[2]; /*0x10022438d*/
        v60 = (size_t *)v168; /*0x100224394*/
        do /*0x1002243b9*/
        {
          if ( v76 == (size_t *)v156 ) /*0x1002243c6*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v153, v77); /*0x10022454a*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088( /*0x10022455d*/
              &v143,
              v77 + 3);
            v160 = v155; /*0x100224569*/
            v159 = v154; /*0x10022457b*/
            v158 = v153; /*0x100224582*/
            v163 = __n; /*0x100224594*/
            v162 = (__int64)__s1; /*0x1002245a6*/
            v161 = v143; /*0x1002245aa*/
            v19 = v64; /*0x1002245ad*/
            v88 = v64[5]; /*0x1002245b0*/
            if ( v88 == v64[3] ) /*0x1002245b8*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(v126); /*0x1002245c5*/
            v61 = (const __m128i *)v64[4]; /*0x1002240e0*/
            v62 = 3 * v88; /*0x1002240e8*/
            v61[v62 + 2].i64[1] = v163; /*0x1002240f0*/
            v61[v62 + 2].i64[0] = v162; /*0x1002240f9*/
            v61[v62 + 1].i64[1] = (__int64)v161; /*0x100224102*/
            v61[v62 + 1].i64[0] = v160; /*0x10022410b*/
            v63 = v158; /*0x100224110*/
            v61[v62].i64[1] = (__int64)v159; /*0x10022411e*/
            v61[v62].i64[0] = (__int64)v63; /*0x100224123*/
            v64[5] = v88 + 1; /*0x10022412a*/
            LOBYTE(v61) = 1; /*0x10022412e*/
            v157 = v61; /*0x100224130*/
            goto LABEL_53; /*0x100224130*/
          }
          v78 = (__int64)v76; /*0x1002243cc*/
          v79 = v76[1]; /*0x1002243cf*/
          v80 = *(void **)(v78 + 16); /*0x1002243d3*/
          v143 = nullptr; /*0x1002243d7*/
          __s1 = v80; /*0x1002243e2*/
          __n = v79; /*0x1002243e9*/
          v146 = v80; /*0x1002243f0*/
          v147 = 0; /*0x1002243f7*/
          v148 = v80; /*0x100224402*/
          v149 = 0x2E0000002ELL; /*0x100224409*/
          v150 = 1; /*0x100224410*/
          v151 = 1; /*0x100224417*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h51bf8faedd8341ed( /*0x10022442e*/
            &v138,
            &v143);
          v158 = nullptr; /*0x100224433*/
          v159 = v142; /*0x100224445*/
          v160 = v141; /*0x100224453*/
          v161 = v142; /*0x100224457*/
          v162 = 0; /*0x10022445b*/
          v163 = (size_t)v142; /*0x100224463*/
          v164 = 0x2E0000002ELL; /*0x100224467*/
          LOBYTE(v165) = 1; /*0x10022446b*/
          LOWORD(v166) = 1; /*0x10022446f*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h51bf8faedd8341ed( /*0x100224483*/
            &v153,
            &v158);
          v169 = v78; /*0x100224488*/
          v81 = v139; /*0x10022448c*/
          v82 = v140; /*0x100224493*/
          v83 = v154; /*0x10022449a*/
          if ( v155 < v140 ) /*0x1002244ab*/
            v82 = v155; /*0x1002244ab*/
          v84 = 1; /*0x1002244af*/
          if ( v82 ) /*0x1002244b5*/
          {
            v85 = 16 * v82; /*0x1002244b7*/
            v86 = 0; /*0x1002244bb*/
            while ( 1 ) /*0x1002244c0*/
            {
              v87 = *(_QWORD *)(v81 + v86 + 8); /*0x1002244c0*/
              if ( v87 != *(_QWORD *)&v83[v86 + 8] /*0x1002244d4*/
                || memcmp(*(const void **)(v81 + v86), *(const void **)&v83[v86], v87) )
              {
                break; /*0x1002244d4*/
              }
              v86 += 16; /*0x1002244dd*/
              if ( v85 == v86 ) /*0x1002244e4*/
                goto LABEL_87; /*0x1002244e4*/
            }
            v84 = 0; /*0x1002244f0*/
          }
LABEL_87:
          v60 = (size_t *)v168; /*0x1002244f3*/
          v77 = v167; /*0x100224501*/
          if ( v153 ) /*0x100224505*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 16LL * (_QWORD)v153, 8); /*0x100224513*/
          if ( v138 ) /*0x100224522*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 16 * v138, 8); /*0x100224534*/
          v76 = (size_t *)(v169 + 48); /*0x1002243a4*/
          v13 = v84 == 0; /*0x1002243a8*/
          v64 = v170; /*0x1002243ab*/
        }
        while ( v13 ); /*0x1002243b9*/
        v89 = *(_QWORD *)(v169 + 16); /*0x1002245d0*/
        if ( v89 == v77[2] && !memcmp(*(const void **)(v169 + 8), (const void *)v167[1], v89) ) /*0x1002245ee*/
        {
          v90 = *(_QWORD *)(v169 + 40); /*0x1002245fb*/
          if ( v90 == v167[5] ) /*0x100224607*/
          {
            if ( !v90 ) /*0x10022460c*/
            {
              v19 = v170; /*0x1002247c7*/
              v60 = (size_t *)v168; /*0x1002247cb*/
              goto LABEL_53; /*0x1002247cf*/
            }
            v91 = *(_QWORD *)(v169 + 32); /*0x100224616*/
            v92 = v167[4]; /*0x10022461e*/
            v93 = 16; /*0x100224622*/
            while ( 1 ) /*0x100224630*/
            {
              v94 = *(_QWORD *)(v91 + v93); /*0x100224630*/
              if ( v94 != *(_QWORD *)(v92 + v93) /*0x100224644*/
                || memcmp(*(const void **)(v91 + v93 - 8), *(const void **)(v92 + v93 - 8), v94) )
              {
                break; /*0x100224644*/
              }
              v93 += 24; /*0x10022464d*/
              if ( !--v90 ) /*0x100224654*/
              {
                v19 = v170; /*0x100224656*/
                v60 = (size_t *)v168; /*0x10022465a*/
                goto LABEL_53; /*0x100224668*/
              }
            }
          }
        }
        v95 = v167; /*0x100224677*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v153, v167); /*0x10022467e*/
        v60 = (size_t *)v168; /*0x100224683*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v143, v95 + 3); /*0x100224695*/
        v160 = v155; /*0x1002246a1*/
        v159 = v154; /*0x1002246b3*/
        v158 = v153; /*0x1002246ba*/
        v163 = __n; /*0x1002246cc*/
        v162 = (__int64)__s1; /*0x1002246de*/
        v161 = v143; /*0x1002246e2*/
        v96 = v169; /*0x1002246e5*/
        if ( *(_QWORD *)v169 ) /*0x1002246e9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v169 + 8), *(_QWORD *)v169, 1); /*0x1002246fa*/
        v97 = v96; /*0x1002246ff*/
        v98 = *(_QWORD *)(v96 + 32); /*0x100224702*/
        v99 = *(_QWORD *)(v97 + 40); /*0x100224706*/
        if ( v99 ) /*0x10022470d*/
        {
          v100 = (_QWORD *)(v98 + 8); /*0x10022470f*/
          do /*0x100224727*/
          {
            v101 = *(v100 - 1); /*0x100224729*/
            if ( v101 ) /*0x100224730*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v100, v101, 1); /*0x10022473a*/
            v100 += 3; /*0x100224720*/
            --v99; /*0x100224724*/
          }
          while ( v99 ); /*0x100224727*/
        }
        v102 = *(_QWORD *)(v169 + 24); /*0x100224754*/
        if ( v102 ) /*0x10022475b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, 24 * v102, 8); /*0x10022476d*/
        v103 = (_QWORD *)v169; /*0x100224776*/
        *(_QWORD *)(v169 + 40) = v163; /*0x10022477a*/
        v103[4] = v162; /*0x100224782*/
        v103[3] = v161; /*0x10022478a*/
        v103[2] = v160; /*0x100224792*/
        v104 = v158; /*0x100224796*/
        v103[1] = v159; /*0x1002247a4*/
        *v103 = v104; /*0x1002247a8*/
        LOBYTE(v104) = 1; /*0x1002247ab*/
        v157 = v104; /*0x1002247ad*/
        v19 = v170; /*0x1002247b4*/
LABEL_53:
        if ( v60 == v152 ) /*0x10022413e*/
          goto LABEL_113; /*0x10022413e*/
        goto LABEL_54; /*0x10022413e*/
      }
      v66 = v65[1]; /*0x1002241a4*/
      v67 = (void *)v65[2]; /*0x1002241a8*/
      v143 = nullptr; /*0x1002241ac*/
      __s1 = v67; /*0x1002241b7*/
      __n = v66; /*0x1002241be*/
      v146 = v67; /*0x1002241c5*/
      v147 = 0; /*0x1002241cc*/
      v148 = v67; /*0x1002241d7*/
      v149 = 0x2E0000002ELL; /*0x1002241de*/
      v150 = 1; /*0x1002241e5*/
      v151 = 1; /*0x1002241ec*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h51bf8faedd8341ed( /*0x100224203*/
        &v138,
        &v143);
      v158 = nullptr; /*0x100224208*/
      v159 = v156; /*0x10022421a*/
      v160 = v169; /*0x100224225*/
      v161 = v156; /*0x100224229*/
      v162 = 0; /*0x10022422d*/
      v163 = (size_t)v156; /*0x100224235*/
      v164 = 0x2E0000002ELL; /*0x100224239*/
      LOBYTE(v165) = 1; /*0x10022423d*/
      LOWORD(v166) = 1; /*0x100224241*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h51bf8faedd8341ed( /*0x100224255*/
        &v153,
        &v158);
      v68 = v139; /*0x10022425a*/
      v69 = v140; /*0x100224261*/
      v70 = v154; /*0x100224268*/
      if ( v155 < v140 ) /*0x100224279*/
        v69 = v155; /*0x100224279*/
      if ( v69 ) /*0x100224280*/
      {
        v71 = 16 * v69; /*0x100224286*/
        v72 = 0; /*0x10022428a*/
        while ( 1 ) /*0x100224290*/
        {
          v73 = *(_QWORD *)(v68 + v72 + 8); /*0x100224290*/
          if ( v73 != *(_QWORD *)&v70[v72 + 8] || memcmp(*(const void **)(v68 + v72), *(const void **)&v70[v72], v73) ) /*0x1002242a4*/
            break; /*0x1002242a4*/
          v72 += 16; /*0x1002242ad*/
          if ( v71 == v72 ) /*0x1002242b4*/
          {
            v64 = v170; /*0x1002242b6*/
            v74 = 1; /*0x1002242ba*/
            v75 = v153; /*0x1002242bd*/
            if ( v153 ) /*0x1002242c7*/
              goto LABEL_68; /*0x1002242c7*/
            goto LABEL_69; /*0x1002242c7*/
          }
        }
        v74 = 0; /*0x1002242d0*/
        v64 = v170; /*0x1002242d3*/
        v75 = v153; /*0x1002242d7*/
        if ( !v153 ) /*0x1002242e1*/
          goto LABEL_69; /*0x1002242e1*/
LABEL_68:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, 16LL * (_QWORD)v75, 8); /*0x1002242e3*/
        goto LABEL_69; /*0x1002242ef*/
      }
      v74 = 1; /*0x100224320*/
      v75 = v153; /*0x100224323*/
      if ( v153 ) /*0x10022432d*/
        goto LABEL_68; /*0x10022432d*/
LABEL_69:
      if ( v138 ) /*0x1002242fe*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 16 * v138, 8); /*0x100224310*/
      v65 += 3; /*0x100224180*/
    }
    while ( !v74 ); /*0x100224191*/
    v60 = (size_t *)v168; /*0x100224340*/
    if ( v168 != (__int64 *)v152 ) /*0x10022434b*/
      continue; /*0x10022434b*/
    break;
  }
LABEL_113:
  v105 = v130; /*0x1002247d4*/
  if ( v130 ) /*0x1002247de*/
  {
LABEL_116:
    v106 = (_QWORD *)(v137.i64[0] + 8); /*0x1002247fc*/
    do /*0x100224817*/
    {
      v107 = *(v106 - 1); /*0x100224819*/
      if ( v107 ) /*0x100224820*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v106, v107, 1); /*0x10022482a*/
      v106 += 3; /*0x100224810*/
      --v105; /*0x100224814*/
    }
    while ( v105 ); /*0x100224817*/
  }
LABEL_120:
  HIDWORD(_RAX) = HIDWORD(v127); /*0x100224831*/
  if ( v127 ) /*0x10022483b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137.i64[0], 24 * v127, 8); /*0x100224851*/
  v109 = v133; /*0x100224856*/
  if ( v133 ) /*0x100224860*/
  {
    v110 = v135; /*0x100224866*/
    if ( v135 ) /*0x100224870*/
    {
      v111 = v132; /*0x100224876*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v132)); /*0x100224887*/
      v113 = v132 + 1; /*0x10022488a*/
      do /*0x1002248a0*/
      {
        if ( !(_WORD)_R13D ) /*0x1002248a6*/
        {
          do /*0x1002248cd*/
          {
            v114 = _mm_movemask_epi8(_mm_load_si128(v113)); /*0x1002248b6*/
            v111 -= 24; /*0x1002248bb*/
            ++v113; /*0x1002248c2*/
          }
          while ( v114 == 0xFFFF ); /*0x1002248cd*/
          _R13D = ~v114; /*0x1002248cf*/
        }
        __asm { tzcnt eax, r13d } /*0x1002248d2*/
        v115 = -3 * _RAX; /*0x1002248da*/
        v116 = *((_QWORD *)&v111[-1] + v115 - 1); /*0x1002248de*/
        if ( v116 ) /*0x1002248e6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111[-1].i64[v115], v116, 1); /*0x1002248f5*/
        v110 = (const __m128i *)((char *)v110 - 1); /*0x100224890*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100224897*/
        _R13D &= _R13D - 1; /*0x10022489a*/
      }
      while ( v110 ); /*0x1002248a0*/
    }
    v117 = (24LL * (_QWORD)v109 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100224908*/
    v118 = (__int64)v109 + v117 + 17; /*0x10022490f*/
    if ( v118 ) /*0x100224913*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v132 - v117, v118, 16); /*0x100224927*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h4f5bf67f1d33f975(&v120); /*0x100224933*/
  return (unsigned __int8)v157 & 1; /*0x100224941*/
}
