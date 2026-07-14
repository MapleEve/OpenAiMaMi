// callee: codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e
// VA: 0x1005c6ba0 | direct callee of diagnose_codex_router owner (depth 1)

__int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e(
        __int64 *a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  const __m128i **v10; // r13
  __int64 v11; // r14
  const __m128i **v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v18; // rcx
  void *v19; // r14
  __int64 v20; // r15
  const __m128i *v21; // rax
  signed __int64 v22; // rsi
  __int8 *v23; // r15
  _BYTE *v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  size_t v35; // rdx
  __int64 v36; // r9
  const void *v37; // r14
  size_t v38; // r15
  const __m128i **v39; // rdi
  void *v40; // rbx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  const __m128i *v43; // rcx
  int v44; // edx
  char v45; // r9
  char v46; // r10
  char *v47; // r8
  int v48; // r10d
  int v49; // r9d
  int v50; // esi
  char v51; // r14
  size_t v52; // r12
  __int64 v53; // r15
  void *v54; // r14
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdi
  __m128i v59; // xmm0
  const __m128i *v60; // r15
  size_t v61; // r14
  const __m128i *v62; // rsi
  const __m128i **v63; // rbx
  int v64; // eax
  bool v65; // r15
  int v66; // r12d
  __int128 *v67; // rdi
  char v68; // al
  int v69; // r12d
  char v70; // cl
  __int64 v71; // rax
  void *v72; // r14
  const void *v73; // rsi
  __int64 v74; // rbx
  size_t v75; // rdx
  unsigned __int8 v76; // al
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // r14
  const __m128i *v80; // rsi
  const __m128i **v81; // r14
  __int64 v82; // rbx
  const __m128i *v83; // r15
  const __m128i *v85; // r12
  int v86; // r13d
  __int64 v87; // rax
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // r14
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  const __m128i **v97; // rdi
  __int64 v98; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v100; // r8
  __int64 v101; // r8
  __int64 *v102; // rdx
  void *v103; // rax
  __int64 v104; // rax
  __int64 v105; // [rsp+8h] [rbp-3C8h] BYREF
  __int64 v106; // [rsp+10h] [rbp-3C0h]
  const __m128i **v107; // [rsp+18h] [rbp-3B8h]
  char v108; // [rsp+15Ch] [rbp-274h]
  void *__s1; // [rsp+160h] [rbp-270h] BYREF
  size_t v110; // [rsp+168h] [rbp-268h]
  char v111; // [rsp+170h] [rbp-260h]
  __int64 v112; // [rsp+171h] [rbp-25Fh]
  __int64 v113; // [rsp+179h] [rbp-257h]
  __int64 v114; // [rsp+181h] [rbp-24Fh]
  _BYTE v115[15]; // [rsp+189h] [rbp-247h]
  __int16 v116; // [rsp+198h] [rbp-238h]
  char v117; // [rsp+19Ah] [rbp-236h]
  __int128 v118; // [rsp+1A0h] [rbp-230h]
  __int64 v119; // [rsp+1B0h] [rbp-220h]
  _BYTE v120[15]; // [rsp+1B8h] [rbp-218h]
  __int64 v121; // [rsp+1C8h] [rbp-208h]
  __int64 v122; // [rsp+1D0h] [rbp-200h]
  __int64 v123; // [rsp+1D8h] [rbp-1F8h]
  _BYTE v124[15]; // [rsp+1E0h] [rbp-1F0h]
  const __m128i *v125; // [rsp+1F0h] [rbp-1E0h] BYREF
  const __m128i **v126; // [rsp+1F8h] [rbp-1D8h]
  __int64 v127; // [rsp+200h] [rbp-1D0h]
  __int64 v128; // [rsp+208h] [rbp-1C8h]
  __int64 v129; // [rsp+210h] [rbp-1C0h]
  __int64 v130; // [rsp+218h] [rbp-1B8h]
  const __m128i *v131; // [rsp+220h] [rbp-1B0h] BYREF
  __int64 v132; // [rsp+228h] [rbp-1A8h]
  __int64 v133; // [rsp+230h] [rbp-1A0h]
  __int64 v134; // [rsp+238h] [rbp-198h] BYREF
  void *__src; // [rsp+240h] [rbp-190h]
  size_t __n; // [rsp+248h] [rbp-188h]
  __int64 v137; // [rsp+250h] [rbp-180h] BYREF
  __int64 v138; // [rsp+258h] [rbp-178h]
  __int64 v139; // [rsp+260h] [rbp-170h]
  __int64 v140; // [rsp+268h] [rbp-168h]
  void *__s2; // [rsp+270h] [rbp-160h] BYREF
  _QWORD *v142; // [rsp+278h] [rbp-158h]
  _BYTE v143[25]; // [rsp+280h] [rbp-150h]
  _BYTE v144[15]; // [rsp+299h] [rbp-137h]
  __int16 v145; // [rsp+2A8h] [rbp-128h]
  char v146; // [rsp+2AAh] [rbp-126h]
  const __m128i *v147; // [rsp+2B0h] [rbp-120h] BYREF
  size_t v148; // [rsp+2B8h] [rbp-118h]
  _BYTE __dst[17]; // [rsp+2C0h] [rbp-110h]
  __int64 v150; // [rsp+2D1h] [rbp-FFh]
  _BYTE v151[15]; // [rsp+2D9h] [rbp-F7h]
  __int16 v152; // [rsp+2E8h] [rbp-E8h]
  char v153; // [rsp+2EAh] [rbp-E6h]
  __int64 v154; // [rsp+2F0h] [rbp-E0h] BYREF
  __int64 v155; // [rsp+2F8h] [rbp-D8h]
  const __m128i *v156; // [rsp+300h] [rbp-D0h]
  unsigned __int64 v157; // [rsp+308h] [rbp-C8h]
  __int64 v158; // [rsp+310h] [rbp-C0h]
  __int64 v159; // [rsp+318h] [rbp-B8h]
  const __m128i *v160; // [rsp+320h] [rbp-B0h] BYREF
  const __m128i **v161; // [rsp+328h] [rbp-A8h]
  _BYTE v162[40]; // [rsp+330h] [rbp-A0h] BYREF
  __int64 v163; // [rsp+358h] [rbp-78h]
  __int16 v164; // [rsp+360h] [rbp-70h]
  __int64 *v165; // [rsp+368h] [rbp-68h]
  __int64 v166; // [rsp+370h] [rbp-60h]
  int v167; // [rsp+37Ch] [rbp-54h]
  const __m128i *v168; // [rsp+380h] [rbp-50h]
  _QWORD *v169; // [rsp+388h] [rbp-48h]
  int v170; // [rsp+394h] [rbp-3Ch]
  unsigned __int64 v171; // [rsp+398h] [rbp-38h]
  void *v172; // [rsp+3A0h] [rbp-30h]

  v165 = a1; /*0x1005c6bb7*/
  v3 = *(_QWORD **)a2; /*0x1005c6bc5*/
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 72LL); /*0x1005c6bc8*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v105, v4, v3[10]); /*0x1005c6bd7*/
  v158 = v105; /*0x1005c6bea*/
  if ( __OFSUB__(-v105, 1) ) /*0x1005c6bf1*/
  {
    if ( (v106 & 3) == 1 ) /*0x1005c6bfe*/
    {
      v6 = v106 - 1; /*0x1005c6c00*/
      v7 = *(_QWORD *)(v106 - 1); /*0x1005c6c04*/
      v8 = *(_QWORD *)(v106 + 7); /*0x1005c6c08*/
      if ( *(_QWORD *)v8 ) /*0x1005c6c0c*/
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))v8)(*(_QWORD *)(v106 - 1), v4, v5, v106); /*0x1005c6c17*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1005c6c19*/
      if ( v9 ) /*0x1005c6c20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1005c6c29*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1005c6c3b*/
    }
    *v165 = 0x8000000000000000LL; /*0x1005c6c44*/
    return v165; /*0x1005c6c47*/
  }
  v172 = (void *)v106; /*0x1005c6c4c*/
  v10 = v107; /*0x1005c6c50*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(&v105, a2); /*0x1005c6c61*/
  v11 = v106; /*0x1005c6c66*/
  v12 = v107; /*0x1005c6c6d*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005c6c7b*/
  v14 = v13; /*0x1005c6c7d*/
  if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x1005c6c84*/
  {
    v15 = *(_QWORD *)v13; /*0x1005c6c8a*/
    v16 = *(_QWORD *)(v14 + 8); /*0x1005c6c8e*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1005c7cb7*/
    *(_QWORD *)v14 = v15; /*0x1005c7cbc*/
    *(_QWORD *)(v14 + 8) = v16; /*0x1005c7cc0*/
    *(_BYTE *)(v14 + 16) = 1; /*0x1005c7cc5*/
  }
  *(_QWORD *)v14 = v15 + 1; /*0x1005c6c97*/
  *(_QWORD *)&v162[8] = 0; /*0x1005c6ca2*/
  *(_QWORD *)v162 = 0; /*0x1005c6cb0*/
  v161 = nullptr; /*0x1005c6cbe*/
  v160 = (const __m128i *)anon_1f22c03b288e649fafb3d21192ed4cff_8; /*0x1005c6ccc*/
  *(_QWORD *)&v162[16] = v15; /*0x1005c6cd3*/
  *(_QWORD *)&v162[24] = v16; /*0x1005c6cda*/
  if ( v12 ) /*0x1005c6ce4*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v160, v12, &v162[16], 1); /*0x1005c7ce6*/
    do /*0x1005c7d16*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v147, v11); /*0x1005c7cf8*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(&v160, &v147); /*0x1005c7d07*/
      v11 += 232; /*0x1005c7d0c*/
      v12 = (const __m128i **)((char *)v12 - 1); /*0x1005c7d13*/
    }
    while ( v12 ); /*0x1005c7d16*/
  }
  v130 = *(_QWORD *)&v162[24]; /*0x1005c6cf1*/
  v129 = *(_QWORD *)&v162[16]; /*0x1005c6cff*/
  v128 = *(_QWORD *)&v162[8]; /*0x1005c6d0d*/
  v127 = *(_QWORD *)v162; /*0x1005c6d1b*/
  v126 = v161; /*0x1005c6d30*/
  v125 = v160; /*0x1005c6d37*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005c6d51*/
                          &unk_1012CB63B,
                          0x13u,
                          v172) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1012CB63B); /*0x1005c6d5e*/
    _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x1005c6d6d*/
    if ( !_RAX ) /*0x1005c6d75*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x1005c7d74*/
    qmemcpy((void *)(_RAX + 32), "mi_codex_router", 15); /*0x1005c6d93*/
    *(_QWORD *)(_RAX + 24) = 0x616D6961208889E7LL; /*0x1005c6da1*/
    *(_QWORD *)(_RAX + 16) = 0xA797E6AB90E5858CLL; /*0x1005c6daf*/
    *(_QWORD *)(_RAX + 8) = 0xE58DBBE4206C6D6FLL; /*0x1005c6dbd*/
    *(_QWORD *)_RAX = 0x742E6769666E6F63LL; /*0x1005c6dcb*/
    v18 = v165; /*0x1005c6dce*/
    *v165 = 47; /*0x1005c6dd2*/
    v18[1] = _RAX; /*0x1005c6dd9*/
    v18[2] = 47; /*0x1005c6ddd*/
LABEL_110:
    v81 = v126; /*0x1005c776a*/
    if ( v126 ) /*0x1005c7774*/
    {
      v82 = v128; /*0x1005c777a*/
      if ( v128 ) /*0x1005c7784*/
      {
        v83 = v125; /*0x1005c778a*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v125)); /*0x1005c779b*/
        v85 = v125 + 1; /*0x1005c779e*/
        do /*0x1005c77c0*/
        {
          if ( !(_WORD)_R13D ) /*0x1005c77c6*/
          {
            do /*0x1005c77ed*/
            {
              v86 = _mm_movemask_epi8(_mm_load_si128(v85)); /*0x1005c77d6*/
              v83 -= 24; /*0x1005c77db*/
              ++v85; /*0x1005c77e2*/
            }
            while ( v86 == 0xFFFF ); /*0x1005c77ed*/
            _R13D = ~v86; /*0x1005c77ef*/
          }
          __asm { tzcnt eax, r13d } /*0x1005c77f2*/
          v87 = -3 * _RAX; /*0x1005c77fa*/
          v88 = *((_QWORD *)&v83[-1] + v87 - 1); /*0x1005c77fe*/
          if ( v88 ) /*0x1005c7806*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83[-1].i64[v87], v88, 1); /*0x1005c7815*/
          --v82; /*0x1005c77b0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1005c77b7*/
          _R13D &= _R13D - 1; /*0x1005c77ba*/
        }
        while ( v82 ); /*0x1005c77c0*/
      }
      v89 = (24LL * (_QWORD)v81 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005c7828*/
      v90 = (__int64)v81 + v89 + 17; /*0x1005c782f*/
      if ( v90 ) /*0x1005c7833*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v125 - v89, v90, 16); /*0x1005c7847*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v105); /*0x1005c7853*/
    if ( v158 ) /*0x1005c7862*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v158, 1); /*0x1005c786d*/
    return v165; /*0x1005c786d*/
  }
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1005c6e05*/
    &v137,
    v172,
    v10,
    &unk_1012CB64E,
    14);
  v19 = v172; /*0x1005c6e1e*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1005c6e28*/
    &v134,
    v172,
    v10,
    &unk_1012CB65C,
    18);
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1005c6e47*/
    &v131,
    v19,
    v10,
    &unk_1012CB66E,
    7);
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1005c6e66*/
    &__s2,
    v19,
    v10,
    "modelcontentstream",
    5);
  if ( __s2 != (void *)0x8000000000000000LL ) /*0x1005c6e7f*/
  {
    v171 = (unsigned __int64)__s2; /*0x1005c709c*/
    v169 = v142; /*0x1005c70a7*/
    v157 = *(_QWORD *)v143; /*0x1005c70b2*/
    goto LABEL_41; /*0x1005c70b9*/
  }
  v160 = nullptr; /*0x1005c6e85*/
  v161 = v10; /*0x1005c6e90*/
  *(_QWORD *)v162 = v172; /*0x1005c6ea2*/
  *(_QWORD *)&v162[8] = v10; /*0x1005c6ea9*/
  *(_QWORD *)&v162[16] = 0; /*0x1005c6eb0*/
  *(_QWORD *)&v162[24] = v10; /*0x1005c6ebb*/
  *(_QWORD *)&v162[32] = 0xA0000000ALL; /*0x1005c6ecc*/
  LOBYTE(v163) = 1; /*0x1005c6ed0*/
  v164 = 0; /*0x1005c6ed4*/
  while ( 1 ) /*0x1005c6efa*/
  {
    v20 = *(_QWORD *)v162; /*0x1005c6efa*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005c6f07*/
      &v147,
      v162);
    if ( (_DWORD)v147 == 1 ) /*0x1005c6f13*/
    {
      v21 = v160; /*0x1005c6f1c*/
      v160 = *(const __m128i **)__dst; /*0x1005c6f23*/
      v22 = *(_QWORD *)__dst - (_QWORD)v21; /*0x1005c6f2a*/
      v23 = &v21->i8[v20]; /*0x1005c6f2d*/
      if ( *(const __m128i **)__dst != v21 ) /*0x1005c6f33*/
        goto LABEL_24; /*0x1005c6f33*/
    }
    else
    {
      if ( HIBYTE(v164) /*0x1005c6f67*/
        || (HIBYTE(v164) = 1,
            v22 = (char *)v161 - (char *)v160,
            ((unsigned __int8)v164 | (v161 != (const __m128i **)v160)) != 1) )
      {
LABEL_40:
        v171 = 0x8000000000000000LL; /*0x1005c70bb*/
        goto LABEL_41; /*0x1005c70c5*/
      }
      v23 = &v160->i8[*(_QWORD *)v162]; /*0x1005c6f6d*/
      if ( v22 ) /*0x1005c6f77*/
      {
LABEL_24:
        if ( v23[v22 - 1] == 10 ) /*0x1005c6f7f*/
        {
          if ( v22 == 1 ) /*0x1005c6f87*/
          {
            v22 = 0; /*0x1005c6f97*/
          }
          else if ( v23[v22 - 2] == 13 ) /*0x1005c6f8f*/
          {
            v22 -= 2LL; /*0x1005c6f91*/
          }
          else
          {
            --v22; /*0x1005c6f9b*/
          }
        }
      }
    }
    v24 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v23, v22); /*0x1005c6fa3*/
    if ( v25 ) /*0x1005c6fab*/
    {
      if ( *v24 == 91 ) /*0x1005c6fb4*/
        goto LABEL_40; /*0x1005c6fb4*/
      if ( v25 >= 5 && !(*(_DWORD *)v24 ^ 0x65646F6D | (unsigned __int8)v24[4] ^ 0x6C) ) /*0x1005c6fd4*/
      {
        v26 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hac6eb9f9ef4460d8(v24 + 5, v25 - 5); /*0x1005c6fe7*/
        if ( v27 ) /*0x1005c6fef*/
        {
          if ( *v26 == 61 ) /*0x1005c6ff8*/
          {
            v28 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v26 + 1, v27 - 1); /*0x1005c700a*/
            v30 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h581f0c6e132a4fcb(v28, v29, 34); /*0x1005c701a*/
            v32 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h581f0c6e132a4fcb(v30, v31, 39); /*0x1005c702a*/
            v34 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v32, v33); /*0x1005c7035*/
            if ( v35 ) /*0x1005c703d*/
              break; /*0x1005c703d*/
          }
        }
      }
    }
    if ( HIBYTE(v164) ) /*0x1005c6ef4*/
      goto LABEL_40; /*0x1005c6ef4*/
  }
  v37 = (const void *)v34; /*0x1005c7043*/
  v38 = v35; /*0x1005c704d*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5(&v147, v35, 0, 1, 1, v36); /*0x1005c7060*/
  if ( (_DWORD)v147 == 1 ) /*0x1005c706c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v148, *(_QWORD *)__dst); /*0x1005c7d63*/
  v171 = v148; /*0x1005c7079*/
  v169 = *(_QWORD **)__dst; /*0x1005c7084*/
  v157 = v38; /*0x1005c708b*/
  memcpy(*(void **)__dst, v37, v38); /*0x1005c7095*/
LABEL_41:
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1005c70c9*/
    &v154,
    v3[75],
    v3[76],
    "codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog",
    25);
  v39 = &v160; /*0x1005c70f7*/
  v40 = v172; /*0x1005c7104*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1005c710e*/
    &v160,
    v172,
    v10,
    &unk_1012CB675,
    15);
  if ( v160 != (const __m128i *)0x8000000000000000LL ) /*0x1005c7127*/
  {
    v39 = v161; /*0x1005c7135*/
    v41 = *(_QWORD *)v162; /*0x1005c713c*/
    do /*0x1005c71cd*/
    {
      while ( 1 ) /*0x1005c715c*/
      {
        if ( !v41 ) /*0x1005c715f*/
          goto LABEL_55; /*0x1005c715f*/
        v42 = v41; /*0x1005c7161*/
        v43 = (const __m128i *)((char *)v161 + v41); /*0x1005c7164*/
        v44 = *((char *)v161 + v41 - 1); /*0x1005c7168*/
        if ( v44 < 0 ) /*0x1005c716e*/
          break; /*0x1005c716e*/
        --v41; /*0x1005c7154*/
        if ( v44 != 47 ) /*0x1005c715a*/
          goto LABEL_54; /*0x1005c715a*/
      }
      v45 = v43[-1].i8[14]; /*0x1005c7170*/
      if ( v45 >= -64 ) /*0x1005c7179*/
      {
        v47 = &v43[-1].i8[14]; /*0x1005c71a0*/
        v49 = v45 & 0x1F; /*0x1005c71a4*/
      }
      else
      {
        v46 = v43[-1].i8[13]; /*0x1005c717b*/
        if ( v46 >= -64 ) /*0x1005c7184*/
        {
          v47 = &v43[-1].i8[13]; /*0x1005c71aa*/
          v48 = v46 & 0xF; /*0x1005c71ae*/
        }
        else
        {
          v47 = &v43[-1].i8[12]; /*0x1005c7186*/
          v48 = ((v43[-1].i8[12] & 7) << 6) | v46 & 0x3F; /*0x1005c719b*/
        }
        v49 = (v48 << 6) | v45 & 0x3F; /*0x1005c71ba*/
      }
      v41 = v47 - (char *)v161; /*0x1005c71c7*/
    }
    while ( ((v49 << 6) | v44 & 0x3F) == 0x2F ); /*0x1005c71cd*/
LABEL_54:
    if ( v42 >= 0x10 ) /*0x1005c71d3*/
    {
      v59 = _mm_xor_si128(_mm_loadu_si128(v43 - 1), (__m128i)xmmword_1012C1940); /*0x1005c72cc*/
      LOBYTE(v42) = _mm_testz_si128(v59, v59); /*0x1005c72d9*/
      v170 = v42; /*0x1005c72dc*/
      if ( !v160 ) /*0x1005c72e2*/
        goto LABEL_57; /*0x1005c72e2*/
    }
    else
    {
LABEL_55:
      v170 = 0; /*0x1005c71d9*/
      if ( !v160 ) /*0x1005c71e3*/
        goto LABEL_57; /*0x1005c71e3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, v160, 1); /*0x1005c71ea*/
    goto LABEL_57; /*0x1005c71ea*/
  }
  v170 = 0; /*0x1005c7129*/
LABEL_57:
  v50 = 0; /*0x1005c71ef*/
  if ( v137 != 0x8000000000000000LL && v139 == 6 ) /*0x1005c720f*/
    LOBYTE(v50) = (*(_DWORD *)v138 ^ 0x616D6961 | *(unsigned __int16 *)(v138 + 4) ^ 0x3169) == 0; /*0x1005c722a*/
  v159 = v134; /*0x1005c723f*/
  if ( v134 == 0x8000000000000000LL ) /*0x1005c7249*/
  {
    v167 = v50; /*0x1005c724b*/
    v166 = v137; /*0x1005c724e*/
    v51 = 0; /*0x1005c7252*/
    goto LABEL_82; /*0x1005c7255*/
  }
  v52 = __n; /*0x1005c725a*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005c7264*/
  {
    v53 = 0; /*0x1005c7266*/
    goto LABEL_64; /*0x1005c7266*/
  }
  v167 = v50; /*0x1005c7279*/
  v166 = v137; /*0x1005c727c*/
  v54 = __src; /*0x1005c7280*/
  v55 = v155; /*0x1005c7287*/
  v168 = v156; /*0x1005c7295*/
  if ( !__n ) /*0x1005c7299*/
  {
    v58 = 1; /*0x1005c72ed*/
    goto LABEL_71; /*0x1005c72ed*/
  }
  v56 = v155; /*0x1005c729b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39); /*0x1005c729e*/
  v53 = 1; /*0x1005c72a3*/
  v57 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v52, 1); /*0x1005c72b1*/
  if ( !v57 ) /*0x1005c72b9*/
    goto LABEL_64; /*0x1005c72b9*/
  v58 = v57; /*0x1005c72bf*/
  v55 = v56; /*0x1005c72c2*/
LABEL_71:
  memcpy((void *)v58, v54, v52); /*0x1005c72f2*/
  v140 = v58; /*0x1005c7307*/
  std::path::Path::components::he8b0f71a48373be5(&__s1, v58, v52); /*0x1005c7314*/
  std::path::Path::components::he8b0f71a48373be5(&__s2, v55, v168); /*0x1005c7327*/
  v60 = (const __m128i *)__s1; /*0x1005c732c*/
  v61 = v110; /*0x1005c7333*/
  v62 = (const __m128i *)__s2; /*0x1005c733a*/
  v63 = (const __m128i **)v142; /*0x1005c7341*/
  if ( (_QWORD *)v110 == v142 && (_BYTE)v116 == (_BYTE)v145 && HIBYTE(v116) == 2 && HIBYTE(v145) == 2 ) /*0x1005c736c*/
  {
    v168 = (const __m128i *)__s2; /*0x1005c7374*/
    v64 = memcmp(__s1, __s2, v110); /*0x1005c7378*/
    v62 = v168; /*0x1005c737d*/
    if ( !v64 ) /*0x1005c7383*/
    {
      v51 = 1; /*0x1005c7a0e*/
      v40 = v172; /*0x1005c7a11*/
      if ( !v52 ) /*0x1005c7a18*/
        goto LABEL_82; /*0x1005c7a18*/
      goto LABEL_81; /*0x1005c7a18*/
    }
  }
  if ( v111 != 6 ) /*0x1005c7392*/
  {
    *(_QWORD *)&v124[7] = *(_QWORD *)&v115[7]; /*0x1005c739b*/
    *(_QWORD *)v124 = *(_QWORD *)v115; /*0x1005c73a9*/
    v123 = v114; /*0x1005c73b7*/
    v122 = v113; /*0x1005c73cc*/
    v121 = v112; /*0x1005c73d3*/
  }
  v147 = v60; /*0x1005c73e8*/
  v148 = v61; /*0x1005c73ef*/
  __dst[0] = v111; /*0x1005c73f6*/
  *(_QWORD *)&__dst[1] = v121; /*0x1005c740a*/
  *(_QWORD *)&__dst[9] = v122; /*0x1005c7411*/
  v150 = v123; /*0x1005c741f*/
  *(_QWORD *)v151 = *(_QWORD *)v124; /*0x1005c742d*/
  *(_QWORD *)&v151[7] = *(_QWORD *)&v124[7]; /*0x1005c743b*/
  v152 = v116; /*0x1005c7442*/
  v153 = v117; /*0x1005c7449*/
  if ( v143[0] != 6 ) /*0x1005c7458*/
  {
    *(_QWORD *)&v120[7] = *(_QWORD *)&v144[7]; /*0x1005c7461*/
    *(_QWORD *)v120 = *(_QWORD *)v144; /*0x1005c746f*/
    v119 = *(_QWORD *)&v143[17]; /*0x1005c747d*/
    v118 = *(_OWORD *)&v143[1]; /*0x1005c7499*/
  }
  v160 = v62; /*0x1005c74ae*/
  v161 = v63; /*0x1005c74b5*/
  v162[0] = v143[0]; /*0x1005c74bc*/
  *(_OWORD *)&v162[1] = v118; /*0x1005c74d0*/
  *(_QWORD *)&v162[17] = v119; /*0x1005c74e5*/
  *(_QWORD *)&v162[25] = *(_QWORD *)v120; /*0x1005c74f3*/
  *(_QWORD *)&v162[32] = *(_QWORD *)&v120[7]; /*0x1005c7501*/
  LOWORD(v163) = v145; /*0x1005c7505*/
  BYTE2(v163) = v146; /*0x1005c7509*/
  v51 = core::iter::traits::iterator::Iterator::eq_by::h77f76f8e43e3e623(&v147, &v160); /*0x1005c751f*/
  v40 = v172; /*0x1005c7522*/
  if ( v52 ) /*0x1005c7529*/
LABEL_81:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v52, 1); /*0x1005c752b*/
LABEL_82:
  v65 = 0; /*0x1005c753f*/
  v168 = v131; /*0x1005c7553*/
  if ( v131 != (const __m128i *)0x8000000000000000LL && v133 == 6 ) /*0x1005c7564*/
    v65 = (*(_DWORD *)v132 ^ 0x616D6961 | *(unsigned __int16 *)(v132 + 4) ^ 0x3169) == 0; /*0x1005c757f*/
  v66 = codexmate_lib::core::relay::codex_writer::router_entry_presence::h2267da218ed514a4(v40); /*0x1005c758e*/
  v67 = (__int128 *)&unk_1012CB684; /*0x1005c7591*/
  v68 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005c75a3*/
          &unk_1012CB684,
          0x1Du,
          v40);
  v69 = v66 & 0xFFFFFF; /*0x1005c75a8*/
  if ( (unsigned __int8)(v170 | v68) | (unsigned __int8)(v65 | v51 | v167) /*0x1005c75db*/
    || (v69 & 0x101) != 0
    || (v67 = (__int128 *)&unk_1012CB6A1,
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1012CB6A1,
                           0x19u,
                           v40)) )
  {
    v70 = 1; /*0x1005c75e4*/
    if ( v108 ) /*0x1005c75ed*/
      goto LABEL_89; /*0x1005c75ed*/
LABEL_94:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c7662*/
    v52 = 69; /*0x1005c7667*/
    v53 = 1; /*0x1005c766d*/
    v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(69, 1); /*0x1005c767d*/
    if ( v77 ) /*0x1005c7685*/
    {
      v72 = (void *)v77; /*0x1005c768b*/
      v73 = &unk_1012CB6BA; /*0x1005c768e*/
      v74 = 69; /*0x1005c7695*/
      v75 = 69; /*0x1005c769a*/
      goto LABEL_96; /*0x1005c769a*/
    }
LABEL_64:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v53, v52); /*0x1005c7269*/
  }
  v67 = &xmmword_1012C1940; /*0x1005c7637*/
  v76 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005c7649*/
          &xmmword_1012C1940,
          0x10u,
          v40);
  v70 = v108; /*0x1005c764e*/
  if ( (((unsigned __int8)v108 ^ 1) & v76) != 0 ) /*0x1005c765c*/
    goto LABEL_94; /*0x1005c765c*/
  if ( (unsigned __int8)v108 | (v171 == 0x8000000000000000LL) ) /*0x1005c78e4*/
  {
LABEL_89:
    if ( ((unsigned __int8)v70 & v65) != 0 ) /*0x1005c75f2*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c75f8*/
      v52 = 82; /*0x1005c75fd*/
      v53 = 1; /*0x1005c7603*/
      v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x1005c7613*/
      if ( !v71 ) /*0x1005c761b*/
        goto LABEL_64; /*0x1005c761b*/
      v72 = (void *)v71; /*0x1005c7621*/
      v73 = &unk_1012CB8E9; /*0x1005c7624*/
      goto LABEL_92; /*0x1005c7624*/
    }
    if ( ((unsigned __int8)v70 & (unsigned __int8)v170) != 0 ) /*0x1005c788b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c7891*/
      v52 = 90; /*0x1005c7896*/
      v53 = 1; /*0x1005c789c*/
      v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(90, 1); /*0x1005c78ac*/
      if ( !v92 ) /*0x1005c78b4*/
        goto LABEL_64; /*0x1005c78b4*/
      v72 = (void *)v92; /*0x1005c78ba*/
      v73 = &unk_1012CB88F; /*0x1005c78bd*/
      v74 = 90; /*0x1005c78c4*/
      v75 = 90; /*0x1005c78c9*/
    }
    else
    {
      if ( !((unsigned __int8)v70 ^ 1 | (unsigned __int8)v167) ) /*0x1005c796d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c79d6*/
        v52 = 82; /*0x1005c79db*/
        v53 = 1; /*0x1005c79e1*/
        v95 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x1005c79f1*/
        if ( !v95 ) /*0x1005c79f9*/
          goto LABEL_64; /*0x1005c79f9*/
        v72 = (void *)v95; /*0x1005c79ff*/
        v73 = &unk_1012CB74F; /*0x1005c7a02*/
LABEL_92:
        v74 = 82; /*0x1005c762b*/
        v75 = 82; /*0x1005c7630*/
        goto LABEL_96; /*0x1005c7635*/
      }
      if ( (unsigned __int8)v70 ^ 1 | (unsigned __int8)v51 ) /*0x1005c796f*/
      {
        if ( !v70 || (v69 & 0x10101) == 0x10101 ) /*0x1005c798e*/
        {
          if ( ((unsigned __int8)v70 & (v171 != 0x8000000000000000LL)) == 0 /*0x1005c7aa3*/
            || v157 < 0xD
            || *v169 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v169 + 5) ^ 0x5F79616C65725F69LL )
          {
            goto LABEL_148; /*0x1005c7aa6*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c7d1d*/
          v52 = 80; /*0x1005c7d22*/
          v53 = 1; /*0x1005c7d28*/
          v104 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 1); /*0x1005c7d38*/
          if ( !v104 ) /*0x1005c7d40*/
            goto LABEL_64; /*0x1005c7d40*/
          v72 = (void *)v104; /*0x1005c7d46*/
          v73 = &unk_1012CB83F; /*0x1005c7d49*/
LABEL_132:
          v74 = 80; /*0x1005c7955*/
          v75 = 80; /*0x1005c795a*/
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c7994*/
          v52 = 72; /*0x1005c7999*/
          v53 = 1; /*0x1005c799f*/
          v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x1005c79af*/
          if ( !v94 ) /*0x1005c79b7*/
            goto LABEL_64; /*0x1005c79b7*/
          v72 = (void *)v94; /*0x1005c79bd*/
          v73 = &unk_1012CB7F7; /*0x1005c79c0*/
          v74 = 72; /*0x1005c79c7*/
          v75 = 72; /*0x1005c79cc*/
        }
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67); /*0x1005c7a23*/
        v52 = 86; /*0x1005c7a28*/
        v53 = 1; /*0x1005c7a2e*/
        v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(86, 1); /*0x1005c7a3e*/
        if ( !v96 ) /*0x1005c7a46*/
          goto LABEL_64; /*0x1005c7a46*/
        v72 = (void *)v96; /*0x1005c7a4c*/
        v73 = &unk_1012CB7A1; /*0x1005c7a4f*/
        v74 = 86; /*0x1005c7a56*/
        v75 = 86; /*0x1005c7a5b*/
      }
    }
LABEL_96:
    memcpy(v72, v73, v75); /*0x1005c769f*/
    v78 = v165; /*0x1005c76a7*/
    *v165 = v74; /*0x1005c76ab*/
    v78[1] = (__int64)v72; /*0x1005c76ae*/
    v78[2] = v74; /*0x1005c76b2*/
    if ( v154 ) /*0x1005c76ca*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1); /*0x1005c76d8*/
    _RAX = 2 * v171; /*0x1005c76e1*/
    v79 = v166; /*0x1005c76ec*/
    if ( 2 * v171 ) /*0x1005c76e1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, v171, 1); /*0x1005c7706*/
      v80 = v168; /*0x1005c770b*/
      if ( v168 == (const __m128i *)0x8000000000000000LL ) /*0x1005c7712*/
        goto LABEL_104; /*0x1005c7712*/
    }
    else
    {
      v80 = v168; /*0x1005c76f2*/
      if ( v168 == (const __m128i *)0x8000000000000000LL ) /*0x1005c76f9*/
      {
LABEL_104:
        if ( v159 != 0x8000000000000000LL && v159 ) /*0x1005c7739*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v159, 1); /*0x1005c7747*/
        if ( v79 != 0x8000000000000000LL && v79 ) /*0x1005c7754*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v79, 1); /*0x1005c7765*/
        goto LABEL_110; /*0x1005c7765*/
      }
    }
    if ( v80 ) /*0x1005c7717*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v80, 1); /*0x1005c7725*/
    goto LABEL_104; /*0x1005c7725*/
  }
  if ( v157 >= 0xD && !(*v169 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v169 + 5) ^ 0x5F79616C65725F69LL) ) /*0x1005c7919*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&xmmword_1012C1940); /*0x1005c7922*/
    v52 = 80; /*0x1005c7927*/
    v53 = 1; /*0x1005c792d*/
    v93 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 1); /*0x1005c793d*/
    if ( !v93 ) /*0x1005c7945*/
      goto LABEL_64; /*0x1005c7945*/
    v72 = (void *)v93; /*0x1005c794b*/
    v73 = &unk_1012CB6FF; /*0x1005c794e*/
    goto LABEL_132; /*0x1005c794e*/
  }
LABEL_148:
  v97 = &v147; /*0x1005c7aac*/
  v98 = (__int64)v40; /*0x1005c7ab3*/
  codexmate_lib::core::relay::manager::relay_ids_in_config::h31d02734d7dd2440(&v147, v40, v10); /*0x1005c7ab9*/
  si128 = _mm_load_si128(v147); /*0x1005c7ad3*/
  if ( v148 ) /*0x1005c7ada*/
  {
    v100 = (24 * v148 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005c7ae8*/
    v98 = v148 + v100 + 17; /*0x1005c7aec*/
    v97 = (const __m128i **)((char *)v147 - v100); /*0x1005c7af4*/
    v101 = 16; /*0x1005c7af7*/
  }
  else
  {
    v101 = 0; /*0x1005c7aff*/
  }
  v160 = (const __m128i *)v101; /*0x1005c7b1d*/
  v161 = (const __m128i **)v98; /*0x1005c7b24*/
  *(_QWORD *)v162 = v97; /*0x1005c7b2b*/
  *(_QWORD *)&v162[8] = v147; /*0x1005c7b32*/
  *(_QWORD *)&v162[16] = v147 + 1; /*0x1005c7b39*/
  *(_QWORD *)&v162[24] = (char *)v147->i64 + v148 + 1; /*0x1005c7b40*/
  *(_WORD *)&v162[32] = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x1005c7b47*/
  v163 = *(_QWORD *)&__dst[8]; /*0x1005c7b4c*/
  core::iter::traits::iterator::Iterator::try_fold::h35f566a782c1b45b(&__s2, &v160, &v125); /*0x1005c7b65*/
  if ( __s2 == (void *)0x8000000000000000LL ) /*0x1005c7b74*/
  {
    *v165 = 0x8000000000000000LL; /*0x1005c7b7a*/
  }
  else
  {
    *(_QWORD *)__dst = *(_QWORD *)v143; /*0x1005c7b8d*/
    v148 = (size_t)v142; /*0x1005c7b94*/
    v147 = (const __m128i *)__s2; /*0x1005c7b9b*/
    codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::_$u7b$$u7b$closure$u7d$$u7d$::hc72a97ba3df9d6bf( /*0x1005c7bb0*/
      &__s2,
      &v147);
    v102 = v165; /*0x1005c7bbc*/
    v165[2] = *(_QWORD *)v143; /*0x1005c7bc0*/
    v103 = __s2; /*0x1005c7bc4*/
    v102[1] = (__int64)v142; /*0x1005c7bd2*/
    *v102 = (__int64)v103; /*0x1005c7bd6*/
  }
  if ( v154 ) /*0x1005c7be3*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1); /*0x1005c7bf1*/
  if ( 2 * v171 ) /*0x1005c7bfa*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, v171, 1); /*0x1005c7c10*/
  if ( v168 != (const __m128i *)0x8000000000000000LL && v168 ) /*0x1005c7c21*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v168, 1); /*0x1005c7c2f*/
  if ( v159 != 0x8000000000000000LL && v159 ) /*0x1005c7c43*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v159, 1); /*0x1005c7c51*/
  if ( v166 != 0x8000000000000000LL && v166 ) /*0x1005c7c62*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v166, 1); /*0x1005c7c70*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h96d53e17d4e72df3(&v125); /*0x1005c7c7c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v105); /*0x1005c7c88*/
  if ( v158 ) /*0x1005c7c97*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v158, 1); /*0x1005c7ca1*/
  _$LT$hashbrown..raw..RawIntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h743e2ebb1c8a1b53( /*0x1005c7cad*/
    &v160,
    *(double *)si128.i64);
  return v165; /*0x1005c7876*/
}