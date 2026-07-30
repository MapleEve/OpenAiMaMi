// __ZN13codexmate_lib4core5relay7manager12RelayManager38codex_config_stale_reason_for_snapshot @ 0x1007a54d0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::hcee0e77c629be2ca(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 *v23; // r14
  unsigned __int64 v24; // rdi
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  void *v33; // rax
  void *v34; // r14
  _QWORD *v35; // rax
  int v36; // r8d
  void *v37; // rax
  void *v38; // r14
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  void *v42; // r14
  const void *v43; // rsi
  void *v44; // rax
  void *v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v50; // r14
  const __m128i *v51; // r15
  const __m128i *v53; // r12
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  _QWORD *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rbx
  __int64 v61; // r14
  const __m128i *v62; // r15
  const __m128i *v64; // r12
  int v65; // r13d
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rbx
  __int64 v69; // rcx
  char v70; // al
  void *v71; // rax
  void *v72; // r14
  _QWORD *v73; // rax
  void *v74; // rax
  void *v75; // r14
  _QWORD *v76; // rax
  void *v77; // rax
  void *v78; // r14
  _QWORD *v79; // rax
  __m128i si128; // xmm0
  __int64 v81; // rax
  __int64 **v82; // rdx
  __int64 *v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdx
  unsigned __int64 *v86; // rax
  unsigned __int64 v87; // rcx
  _QWORD *v88; // rcx
  _QWORD *v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rbx
  __int64 (__fastcall *v93)(); // rax
  __int64 v94; // rsi
  const void *v95; // rax
  size_t v96; // rdx
  _QWORD *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rsi
  unsigned __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rcx
  void *v103; // rax
  void *v104; // r14
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 *v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  _QWORD *v121; // rax
  _QWORD *v122; // rcx
  _QWORD v123[3]; // [rsp+10h] [rbp-250h] BYREF
  _QWORD v124[3]; // [rsp+28h] [rbp-238h] BYREF
  const __m128i *v125; // [rsp+40h] [rbp-220h] BYREF
  __int64 v126; // [rsp+48h] [rbp-218h]
  __int64 v127; // [rsp+58h] [rbp-208h]
  __int64 v128; // [rsp+70h] [rbp-1F0h] BYREF
  __int64 v129; // [rsp+78h] [rbp-1E8h]
  __int64 v130; // [rsp+80h] [rbp-1E0h]
  const __m128i *v131; // [rsp+88h] [rbp-1D8h] BYREF
  __int64 v132; // [rsp+90h] [rbp-1D0h]
  __int64 v133; // [rsp+98h] [rbp-1C8h]
  __int64 v134; // [rsp+A0h] [rbp-1C0h]
  __int64 v135; // [rsp+A8h] [rbp-1B8h]
  __int64 v136; // [rsp+B0h] [rbp-1B0h]
  const __m128i *v137; // [rsp+B8h] [rbp-1A8h] BYREF
  __int64 v138; // [rsp+C0h] [rbp-1A0h]
  __int64 v139; // [rsp+C8h] [rbp-198h]
  __int64 v140; // [rsp+D0h] [rbp-190h]
  __int64 v141; // [rsp+D8h] [rbp-188h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-180h]
  __int64 *v143; // [rsp+E8h] [rbp-178h]
  __int64 v144; // [rsp+F0h] [rbp-170h]
  __int64 v145; // [rsp+F8h] [rbp-168h]
  __int64 v146; // [rsp+118h] [rbp-148h]
  unsigned __int64 v147; // [rsp+120h] [rbp-140h]
  __int64 v148; // [rsp+128h] [rbp-138h]
  const __m128i *v149; // [rsp+148h] [rbp-118h]
  __int64 v150; // [rsp+150h] [rbp-110h]
  __int64 v151; // [rsp+160h] [rbp-100h]
  char v152; // [rsp+178h] [rbp-E8h]
  char v153; // [rsp+17Ah] [rbp-E6h]
  unsigned __int8 v154; // [rsp+17Bh] [rbp-E5h]
  unsigned __int8 v155; // [rsp+17Ch] [rbp-E4h]
  unsigned __int8 v156; // [rsp+17Dh] [rbp-E3h]
  char v157; // [rsp+17Eh] [rbp-E2h]
  unsigned __int16 v158; // [rsp+17Fh] [rbp-E1h]
  unsigned __int8 v159; // [rsp+181h] [rbp-DFh]
  __int64 v160; // [rsp+188h] [rbp-D8h] BYREF
  __int64 v161; // [rsp+190h] [rbp-D0h]
  __int64 v162; // [rsp+198h] [rbp-C8h]
  __int64 (__fastcall *v163)(); // [rsp+1A0h] [rbp-C0h]
  __int64 *v164; // [rsp+1A8h] [rbp-B8h] BYREF
  void *__s2; // [rsp+1B0h] [rbp-B0h]
  __int64 **v166; // [rsp+1B8h] [rbp-A8h]
  const __m128i *v167; // [rsp+1C0h] [rbp-A0h]
  const __m128i *v168; // [rsp+1C8h] [rbp-98h] BYREF
  __m128i *v169; // [rsp+1D0h] [rbp-90h]
  __int64 **v170; // [rsp+1D8h] [rbp-88h]
  __int64 (__fastcall *v171)(); // [rsp+1E0h] [rbp-80h]
  __int64 v172; // [rsp+1E8h] [rbp-78h]
  __int64 v173; // [rsp+1F0h] [rbp-70h]
  __int64 *v174; // [rsp+1F8h] [rbp-68h] BYREF
  __int64 (__fastcall *v175)(); // [rsp+200h] [rbp-60h]
  __int64 **v176; // [rsp+208h] [rbp-58h]
  __int64 v177; // [rsp+210h] [rbp-50h]
  __int64 v178; // [rsp+218h] [rbp-48h]
  __int64 v179; // [rsp+220h] [rbp-40h]
  char v180; // [rsp+22Fh] [rbp-31h] BYREF
  _QWORD *v181; // [rsp+230h] [rbp-30h]

  v7 = a1; /*0x1007a54ed*/
  v8 = a2[9]; /*0x1007a54fa*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v137, v8, a2[10]); /*0x1007a5509*/
  v167 = v137; /*0x1007a5515*/
  if ( __OFSUB__(-(__int64)v137, 1) ) /*0x1007a551c*/
  {
    result = v138; /*0x1007a5521*/
    if ( (v138 & 3) == 1 ) /*0x1007a5530*/
    {
      v10 = v138 - 1; /*0x1007a5535*/
      v11 = *(_QWORD *)(v138 - 1); /*0x1007a5539*/
      v12 = *(_QWORD *)(v138 + 7); /*0x1007a553d*/
      if ( *(_QWORD *)v12 ) /*0x1007a5541*/
        (*(void (__fastcall **)(__int64))v12)(v11); /*0x1007a554d*/
      v13 = *(_QWORD *)(v12 + 8); /*0x1007a554f*/
      if ( v13 ) /*0x1007a5557*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1007a5561*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x1007a5573*/
      v7 = a1; /*0x1007a5578*/
    }
    *v7 = 0x8000000000000000LL; /*0x1007a557b*/
    return result; /*0x1007a557e*/
  }
  v181 = a1; /*0x1007a5583*/
  v173 = v138; /*0x1007a558e*/
  v179 = v139; /*0x1007a5599*/
  v178 = *(_QWORD *)(a4 + 8); /*0x1007a55a2*/
  v14 = *(_QWORD *)(a4 + 16); /*0x1007a55a6*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1007a55b2*/
  v18 = v15; /*0x1007a55b4*/
  if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x1007a55bb*/
  {
    v19 = *(_QWORD *)v15; /*0x1007a55c1*/
    v20 = *(_QWORD *)(v18 + 8); /*0x1007a55c5*/
  }
  else
  {
    v19 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1007a622f*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v16,
            v17);
    *(_QWORD *)v18 = v19; /*0x1007a6234*/
    *(_QWORD *)(v18 + 8) = v20; /*0x1007a6238*/
    *(_BYTE *)(v18 + 16) = 1; /*0x1007a623c*/
  }
  *(_QWORD *)v18 = v19 + 1; /*0x1007a55cd*/
  v140 = 0; /*0x1007a55d8*/
  v139 = 0; /*0x1007a55e6*/
  v138 = 0; /*0x1007a55f4*/
  v137 = (const __m128i *)&xmmword_101666400; /*0x1007a5602*/
  v141 = v19; /*0x1007a5609*/
  v142 = v20; /*0x1007a5610*/
  if ( v14 ) /*0x1007a561a*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v137, v14, &v141, 1); /*0x1007a625c*/
    v94 = v178; /*0x1007a6268*/
    v162 = v14; /*0x1007a626c*/
    do /*0x1007a62a0*/
    {
      v177 = v94; /*0x1007a6276*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v125, v94); /*0x1007a627a*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(&v137, &v125); /*0x1007a6289*/
      v94 = v177 + 232; /*0x1007a6292*/
      --v162; /*0x1007a6299*/
    }
    while ( v162 ); /*0x1007a62a0*/
  }
  v177 = a3; /*0x1007a5620*/
  v136 = v142; /*0x1007a562b*/
  v135 = v141; /*0x1007a5639*/
  v134 = v140; /*0x1007a5647*/
  v133 = v139; /*0x1007a5655*/
  v132 = v138; /*0x1007a566a*/
  v131 = v137; /*0x1007a5671*/
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h101a7c327f6af5d5(&v128, a4); /*0x1007a5682*/
  v21 = v129; /*0x1007a5690*/
  v22 = v130; /*0x1007a5697*/
  LOBYTE(v162) = *(_BYTE *)(a4 + 317); /*0x1007a569e*/
  if ( (_BYTE)v162 ) /*0x1007a56a6*/
    codexmate_lib::core::relay::codex_catalog::no_account_slot_slugs::he9e07b17926d2ef6( /*0x1007a56d0*/
      &v125,
      v178,
      v14,
      v129,
      v130,
      *(_QWORD *)(a4 + 136),
      *(_QWORD *)(a4 + 144));
  else
    codexmate_lib::core::relay::models::active_codex_relay_model_slugs::hd137c4271829c23c(&v125, v178, v14, v129, v130); /*0x1007a56eb*/
  v23 = a2 + 2; /*0x1007a56f0*/
  v24 = (unsigned __int64)&v137; /*0x1007a56f4*/
  v25 = v23; /*0x1007a56fb*/
  codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::h5effedb9fe09eba1(&v137, v23, v173, v179); /*0x1007a5706*/
  if ( v153 ) /*0x1007a5712*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v137, v23, v26, v27); /*0x1007a5718*/
    v28 = 47; /*0x1007a571d*/
    v29 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x1007a572c*/
    if ( v29 ) /*0x1007a5734*/
    {
      qmemcpy(v29 + 4, "mi_codex_router", 15); /*0x1007a5752*/
      v29[3] = 0x616D6961208889E7LL; /*0x1007a5760*/
      v29[2] = 0xA797E6AB90E5858CLL; /*0x1007a576e*/
      v29[1] = 0xE58DBBE4206C6D6FLL; /*0x1007a577c*/
      *v29 = 0x742E6769666E6F63LL; /*0x1007a578a*/
      v30 = v181; /*0x1007a578d*/
      *v181 = 47; /*0x1007a5791*/
      v30[1] = v29; /*0x1007a5798*/
      v30[2] = 47; /*0x1007a579c*/
LABEL_51:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::he063b69f394f9119(&v137); /*0x1007a5b15*/
      HIDWORD(_RAX) = HIDWORD(v126); /*0x1007a5b21*/
      if ( v126 ) /*0x1007a5b2b*/
      {
        v178 = v126; /*0x1007a5b31*/
        v179 = v21; /*0x1007a5b35*/
        v50 = v127; /*0x1007a5b39*/
        if ( v127 ) /*0x1007a5b43*/
        {
          v51 = v125; /*0x1007a5b49*/
          _EBX = ~_mm_movemask_epi8(_mm_load_si128(v125)); /*0x1007a5b59*/
          v53 = v125 + 1; /*0x1007a5b5b*/
          do /*0x1007a5b7d*/
          {
            if ( !(_WORD)_EBX ) /*0x1007a5b82*/
            {
              do /*0x1007a5bab*/
              {
                v54 = _mm_movemask_epi8(_mm_load_si128(v53)); /*0x1007a5b96*/
                v51 -= 24; /*0x1007a5b9a*/
                ++v53; /*0x1007a5ba1*/
              }
              while ( v54 == 0xFFFF ); /*0x1007a5bab*/
              _EBX = ~v54; /*0x1007a5bad*/
            }
            __asm { tzcnt eax, ebx } /*0x1007a5baf*/
            v55 = -3 * _RAX; /*0x1007a5bb6*/
            v56 = *((_QWORD *)&v51[-1] + v55 - 1); /*0x1007a5bba*/
            if ( v56 ) /*0x1007a5bc2*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-1].i64[v55], v56, 1); /*0x1007a5bd1*/
            --v50; /*0x1007a5b70*/
            _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1007a5b76*/
            _EBX &= _EBX - 1; /*0x1007a5b78*/
          }
          while ( v50 ); /*0x1007a5b7d*/
        }
        v57 = (24 * v178 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1007a5be8*/
        v21 = v179; /*0x1007a5bf3*/
        if ( v57 + v178 != -17 ) /*0x1007a5bf7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v125 - v57, v57 + v178 + 17, 16); /*0x1007a5c08*/
      }
      if ( v22 ) /*0x1007a5c10*/
      {
        v58 = (_QWORD *)(v21 + 8); /*0x1007a5c12*/
        do /*0x1007a5c27*/
        {
          v59 = *(v58 - 1); /*0x1007a5c29*/
          if ( v59 ) /*0x1007a5c30*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v59, 1); /*0x1007a5c3a*/
          v58 += 3; /*0x1007a5c20*/
          --v22; /*0x1007a5c24*/
        }
        while ( v22 ); /*0x1007a5c27*/
      }
      result = v128; /*0x1007a5c41*/
      if ( v128 ) /*0x1007a5c4b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24 * v128, 8); /*0x1007a5c5d*/
      v60 = v132; /*0x1007a5c62*/
      if ( v132 ) /*0x1007a5c6c*/
      {
        v61 = v134; /*0x1007a5c72*/
        if ( v134 ) /*0x1007a5c7c*/
        {
          v62 = v131; /*0x1007a5c82*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v131)); /*0x1007a5c93*/
          v64 = v131 + 1; /*0x1007a5c96*/
          do /*0x1007a5cb0*/
          {
            if ( !(_WORD)_R13D ) /*0x1007a5cb6*/
            {
              do /*0x1007a5cdd*/
              {
                v65 = _mm_movemask_epi8(_mm_load_si128(v64)); /*0x1007a5cc6*/
                v62 -= 24; /*0x1007a5ccb*/
                ++v64; /*0x1007a5cd2*/
              }
              while ( v65 == 0xFFFF ); /*0x1007a5cdd*/
              _R13D = ~v65; /*0x1007a5cdf*/
            }
            __asm { tzcnt eax, r13d } /*0x1007a5ce2*/
            v66 = -3 * result; /*0x1007a5cea*/
            v67 = *((_QWORD *)&v62[-1] + v66 - 1); /*0x1007a5cee*/
            if ( v67 ) /*0x1007a5cf6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[-1].i64[v66], v67, 1); /*0x1007a5d05*/
            --v61; /*0x1007a5ca0*/
            result = _R13D & (unsigned int)(_R13D - 1); /*0x1007a5ca7*/
            _R13D &= _R13D - 1; /*0x1007a5caa*/
          }
          while ( v61 ); /*0x1007a5cb0*/
        }
        result = (24 * v60 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1007a5d18*/
        v68 = result + v60 + 17; /*0x1007a5d1f*/
        if ( v68 ) /*0x1007a5d23*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v131 - result, v68, 16); /*0x1007a5d37*/
      }
      goto LABEL_80; /*0x1007a5d37*/
    }
    goto LABEL_154; /*0x1007a5734*/
  }
  v31 = v154; /*0x1007a57b0*/
  v32 = v155; /*0x1007a57b7*/
  LOBYTE(v32) = v152 | v154 | v155; /*0x1007a57c0*/
  if ( (v32 & 1) != 0 ) /*0x1007a57c5*/
    goto LABEL_19; /*0x1007a57c5*/
  if ( v140 != 0x8000000000000000LL && v142 == 6 ) /*0x1007a58a2*/
  {
    v25 = (__int64 *)((unsigned int)anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v141); /*0x1007a58ad*/
    v32 = (unsigned int)v25 | *(_WORD *)(v141 + 4) ^ 0x3169; /*0x1007a58c1*/
    if ( !((unsigned int)v25 | *(_WORD *)(v141 + 4) ^ 0x3169) ) /*0x1007a58c1*/
      goto LABEL_19; /*0x1007a58c1*/
  }
  if ( (v25 = v143, /*0x1007a5935*/
        v32 = v145,
        v24 = 0x8000000000000000LL,
        LOBYTE(v24) = v143 != (__int64 *)0x8000000000000000LL,
        v143 != (__int64 *)0x8000000000000000LL && v145 == 6)
    && (v36 = anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v144,
        (v24 = v36 | *(_WORD *)(v144 + 4) ^ 0x3169u) == 0)
    || (_BYTE)v158
    || __PAIR16__(HIBYTE(v158), 0) != v156 )
  {
LABEL_19:
    if ( *(_BYTE *)(a4 + 316) != 1 ) /*0x1007a57d4*/
      goto LABEL_36; /*0x1007a57d4*/
    v25 = v143; /*0x1007a57e1*/
    v32 = v145; /*0x1007a57e8*/
    goto LABEL_21; /*0x1007a57e8*/
  }
  v24 = *(unsigned __int8 *)(a4 + 316); /*0x1007a5948*/
  if ( !(_BYTE)v24 && v157 ) /*0x1007a5961*/
  {
LABEL_36:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v25, v32, v154); /*0x1007a5967*/
    v28 = 69; /*0x1007a596c*/
    v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(69, 1); /*0x1007a597b*/
    if ( v37 ) /*0x1007a5983*/
    {
      v38 = v37; /*0x1007a5989*/
      memcpy(v37, &unk_10167952B, 0x45u); /*0x1007a599b*/
      v39 = v181; /*0x1007a59a0*/
      *v181 = 69; /*0x1007a59a4*/
      v39[1] = v38; /*0x1007a59ab*/
      v39[2] = 69; /*0x1007a59af*/
      goto LABEL_51; /*0x1007a59b7*/
    }
    goto LABEL_154; /*0x1007a5983*/
  }
  if ( !(_BYTE)v24 && v146 != 0x8000000000000000LL ) /*0x1007a5a49*/
  {
    v24 = v147; /*0x1007a5a4f*/
    v25 = (__int64 *)v148; /*0x1007a5a56*/
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hd844a4e53054adef( /*0x1007a5a66*/
                            v147,
                            v148,
                            0,
                            &v125) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v25, v32, v31); /*0x1007a5a73*/
      v28 = 80; /*0x1007a5a78*/
      v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 1); /*0x1007a5a87*/
      if ( v44 ) /*0x1007a5a8f*/
      {
        v45 = v44; /*0x1007a5a95*/
        memcpy(v44, &unk_101679570, 0x50u); /*0x1007a5aa7*/
        v46 = v181; /*0x1007a5aac*/
        *v181 = 80; /*0x1007a5ab0*/
        v46[1] = v45; /*0x1007a5ab7*/
        v46[2] = 80; /*0x1007a5abb*/
        goto LABEL_51; /*0x1007a5ac3*/
      }
      goto LABEL_154; /*0x1007a5a8f*/
    }
    if ( v151 ) /*0x1007a5de4*/
    {
LABEL_92:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v25, v32, v31); /*0x1007a5dea*/
      v28 = 91; /*0x1007a5def*/
      v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1); /*0x1007a5dfe*/
      if ( v71 ) /*0x1007a5e06*/
      {
        v72 = v71; /*0x1007a5e0c*/
        memcpy(v71, &unk_1016795C0, 0x5Bu); /*0x1007a5e1e*/
        v73 = v181; /*0x1007a5e23*/
        *v181 = 91; /*0x1007a5e27*/
        v73[1] = v72; /*0x1007a5e2e*/
        v73[2] = 91; /*0x1007a5e32*/
        goto LABEL_51; /*0x1007a5e3a*/
      }
      goto LABEL_154; /*0x1007a5e06*/
    }
    goto LABEL_98; /*0x1007a5de4*/
  }
  if ( !(_BYTE)v24 && v151 ) /*0x1007a5d75*/
    goto LABEL_92; /*0x1007a5d75*/
  if ( (_BYTE)v24 ) /*0x1007a5d81*/
  {
LABEL_21:
    if ( v25 != (__int64 *)0x8000000000000000LL && v32 == 6 ) /*0x1007a5802*/
    {
      v25 = (__int64 *)((unsigned int)anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v144); /*0x1007a580d*/
      v32 = (unsigned int)v25 | *(_WORD *)(v144 + 4) ^ 0x3169; /*0x1007a5821*/
      if ( !((unsigned int)v25 | *(_WORD *)(v144 + 4) ^ 0x3169) ) /*0x1007a5823*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, v25, v32, v154); /*0x1007a5ac5*/
        v28 = 82; /*0x1007a5aca*/
        v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x1007a5ad9*/
        if ( !v47 ) /*0x1007a5ae1*/
          goto LABEL_154; /*0x1007a5ae1*/
        v42 = (void *)v47; /*0x1007a5ae7*/
        v43 = &unk_1016797C9; /*0x1007a5aea*/
LABEL_50:
        memcpy(v42, v43, 0x52u); /*0x1007a5af1*/
        v48 = v181; /*0x1007a5afe*/
        *v181 = 82; /*0x1007a5b02*/
        v48[1] = v42; /*0x1007a5b09*/
        v48[2] = 82; /*0x1007a5b0d*/
        goto LABEL_51; /*0x1007a5b0d*/
      }
    }
    if ( (v154 & 1) != 0 ) /*0x1007a582c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, v25, v32, v154); /*0x1007a5832*/
      v28 = 90; /*0x1007a5837*/
      v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(90, 1); /*0x1007a5846*/
      if ( v33 ) /*0x1007a584e*/
      {
        v34 = v33; /*0x1007a5854*/
        memcpy(v33, &unk_10167976F, 0x5Au); /*0x1007a5866*/
        v35 = v181; /*0x1007a586b*/
        *v181 = 90; /*0x1007a586f*/
        v35[1] = v34; /*0x1007a5876*/
        v35[2] = 90; /*0x1007a587a*/
        goto LABEL_51; /*0x1007a5882*/
      }
LABEL_154:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1007a6805*/
    }
    v40 = 0x8000000000000000LL; /*0x1007a59bc*/
    if ( v140 == 0x8000000000000000LL /*0x1007a59f6*/
      || v142 != 6
      || (v32 = (unsigned int)anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v141,
          (v40 = (unsigned int)v32 | *(_WORD *)(v141 + 4) ^ 0x3169) != 0) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, v25, v32, v40); /*0x1007a59fe*/
      v28 = 82; /*0x1007a5a03*/
      v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x1007a5a12*/
      if ( !v41 ) /*0x1007a5a1a*/
        goto LABEL_154; /*0x1007a5a1a*/
      v42 = (void *)v41; /*0x1007a5a20*/
      v43 = &unk_10167961B; /*0x1007a5a23*/
      goto LABEL_50; /*0x1007a5a2a*/
    }
    if ( (v152 & 1) == 0 ) /*0x1007a5d8e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, v25, v32, v40); /*0x1007a5e3f*/
      v28 = 86; /*0x1007a5e44*/
      v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(86, 1); /*0x1007a5e53*/
      if ( v74 ) /*0x1007a5e5b*/
      {
        v75 = v74; /*0x1007a5e61*/
        memcpy(v74, &unk_10167966D, 0x56u); /*0x1007a5e73*/
        v76 = v181; /*0x1007a5e78*/
        *v181 = 86; /*0x1007a5e7c*/
        v76[1] = v75; /*0x1007a5e83*/
        v76[2] = 86; /*0x1007a5e87*/
        goto LABEL_51; /*0x1007a5e8f*/
      }
      goto LABEL_154; /*0x1007a5e5b*/
    }
    v69 = ~((v159 << 16) | (unsigned int)v158); /*0x1007a5da7*/
    if ( (v69 & 0x10001) != 0 ) /*0x1007a5daf*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, v25, v32, v69); /*0x1007a5e94*/
      v28 = 72; /*0x1007a5e99*/
      v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x1007a5ea8*/
      if ( v77 ) /*0x1007a5eb0*/
      {
        v78 = v77; /*0x1007a5eb6*/
        memcpy(v77, &unk_1016796C3, 0x48u); /*0x1007a5ec8*/
        v79 = v181; /*0x1007a5ecd*/
        *v181 = 72; /*0x1007a5ed1*/
        v79[1] = v78; /*0x1007a5ed8*/
        v79[2] = 72; /*0x1007a5edc*/
        goto LABEL_51; /*0x1007a5ee4*/
      }
      goto LABEL_154; /*0x1007a5eb0*/
    }
    v180 = 1; /*0x1007a5db5*/
    v70 = codexmate_lib::core::relay::codex_writer::router_provider_requires_openai_auth::h4e183a698d1dc6b3(v173, v179); /*0x1007a5dc1*/
    if ( v70 == 2 ) /*0x1007a5dc8*/
    {
      codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::_$u7b$$u7b$closure$u7d$$u7d$::h2e403407bdc45857(&v174); /*0x1007a5dd2*/
LABEL_108:
      v168 = (const __m128i *)&v180; /*0x1007a60e4*/
      v169 = (__m128i *)_$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1007a60f6*/
      v170 = &v174; /*0x1007a6101*/
      v171 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007a610f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v124, &unk_1017CD433, &v168); /*0x1007a6128*/
      v89 = v181; /*0x1007a6134*/
      if ( v174 ) /*0x1007a6138*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v175, v174, 1); /*0x1007a6143*/
      v89[2] = v124[2]; /*0x1007a614f*/
      v90 = v124[0]; /*0x1007a6153*/
      v89[1] = v124[1]; /*0x1007a6161*/
      *v89 = v90; /*0x1007a6165*/
      goto LABEL_51; /*0x1007a6168*/
    }
    if ( (v70 & 1) == 0 ) /*0x1007a5fe8*/
    {
      codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::_$u7b$$u7b$closure$u7d$$u7d$::h2637b08bc6acd9ab(&v168); /*0x1007a60be*/
      v176 = v170; /*0x1007a60ca*/
      v175 = (__int64 (__fastcall *)())v169; /*0x1007a60dc*/
      v174 = (__int64 *)v168; /*0x1007a60e0*/
      goto LABEL_108; /*0x1007a60e0*/
    }
    v84 = v177; /*0x1007a5ff5*/
    codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h12f4faa998b2d7f1(&v168, v177); /*0x1007a5ff9*/
    if ( v168 == (const __m128i *)0x8000000000000000LL ) /*0x1007a6012*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v168, v84, v85, 0x8000000000000000LL); /*0x1007a6018*/
      v28 = 54; /*0x1007a601d*/
      v86 = (unsigned __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1007a602c*/
      if ( !v86 ) /*0x1007a6034*/
        goto LABEL_154; /*0x1007a6034*/
      *(unsigned __int64 *)((char *)v86 + 46) = 0x8CA1E890BFE8AA9CLL; /*0x1007a6044*/
      v86[5] = 0xAA9CE68690E7A3BBLL; /*0x1007a6052*/
      v86[4] = 0xE4B09CE5AC9CE686LL; /*0x1007a6060*/
      v86[3] = 0xBDE48CBCEFAF90E5LL; /*0x1007a606e*/
      v86[2] = 0x80BCE5BAB8E48180LL; /*0x1007a607c*/
      v86[1] = 0xE6B68AE7B194E7AFLL; /*0x1007a608a*/
      v87 = 0xB7E8BD83E8BA99E6LL; /*0x1007a608e*/
      goto LABEL_106; /*0x1007a608e*/
    }
    v178 = (__int64)v168; /*0x1007a616d*/
    v177 = (__int64)v169; /*0x1007a617f*/
    v160 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb22461ad3f1bdb68(v169, v170, 47); /*0x1007a618d*/
    v161 = v91; /*0x1007a6194*/
    v174 = &v160; /*0x1007a61a2*/
    v175 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1007a61ad*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v168, &unk_1017C8333, &v174); /*0x1007a61c3*/
    v164 = (__int64 *)v168; /*0x1007a61d6*/
    __s2 = v169; /*0x1007a61dd*/
    v166 = v170; /*0x1007a61eb*/
    codexmate_lib::core::relay::codex_writer::router_provider_base_url::h8106915baea5d59c(&v174, v173, v179); /*0x1007a61fe*/
    v179 = (__int64)v174; /*0x1007a6214*/
    if ( v174 == (__int64 *)0x8000000000000000LL ) /*0x1007a6218*/
    {
      v92 = 6; /*0x1007a621e*/
      v93 = (__int64 (__fastcall *)())&unk_101679763; /*0x1007a6223*/
    }
    else
    {
      v92 = (__int64)v176; /*0x1007a62ab*/
      v163 = v175; /*0x1007a62af*/
      v95 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb22461ad3f1bdb68(v175, v176, 47); /*0x1007a62be*/
      if ( (__int64 **)v96 == v166 && !memcmp(v95, __s2, v96) ) /*0x1007a62dd*/
      {
        if ( v179 ) /*0x1007a63d3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v179, 1); /*0x1007a63e5*/
        v99 = (__int64)v164; /*0x1007a63ea*/
        if ( v164 ) /*0x1007a63f4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v164, 1); /*0x1007a6402*/
        if ( v178 ) /*0x1007a640c*/
        {
          v99 = v178; /*0x1007a6417*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v177, v178, 1); /*0x1007a641b*/
        }
        if ( v146 != 0x8000000000000000LL ) /*0x1007a6431*/
        {
          v100 = v147; /*0x1007a6433*/
          v99 = v148; /*0x1007a643a*/
          if ( (unsigned __int8)codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hd844a4e53054adef( /*0x1007a644d*/
                                  v147,
                                  v148,
                                  1,
                                  &v125) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v99, v101, v102); /*0x1007a6456*/
            v28 = 88; /*0x1007a645b*/
            v103 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(88, 1); /*0x1007a646a*/
            if ( v103 ) /*0x1007a6472*/
            {
              v104 = v103; /*0x1007a6478*/
              memcpy(v103, &unk_10167970B, 0x58u); /*0x1007a648a*/
              v105 = v181; /*0x1007a648f*/
              *v181 = 88; /*0x1007a6493*/
              v105[1] = v104; /*0x1007a649a*/
              v105[2] = 88; /*0x1007a649e*/
              goto LABEL_51; /*0x1007a64a6*/
            }
            goto LABEL_154; /*0x1007a6472*/
          }
        }
        if ( (_BYTE)v162 ) /*0x1007a64b2*/
        {
          if ( !(unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hac85bd62c96aed0b(v23) ) /*0x1007a64c2*/
          {
            if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h8249590d803b3f6b(v23) != 1 ) /*0x1007a6612*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v99, v113, v114); /*0x1007a676a*/
              v28 = 56; /*0x1007a676f*/
              v121 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 1); /*0x1007a677e*/
              if ( v121 ) /*0x1007a6786*/
              {
                v121[6] = 0x81AFE8A4AEE82079LL; /*0x1007a6792*/
                v121[5] = 0x654B2049504120A1LL; /*0x1007a67a0*/
                v121[4] = 0xAEE7978FE520694DLL; /*0x1007a67ae*/
                v121[3] = 0x614D69412091B0E5LL; /*0x1007a67bc*/
                v121[2] = 0xBABCE78FBCE5A1A8LL; /*0x1007a67ca*/
                v121[1] = 0xE695BDE5BB99E7B7LL; /*0x1007a67d8*/
                *v121 = 0x8FE5A6B4E8A097E6LL; /*0x1007a67e6*/
                v122 = v181; /*0x1007a67e9*/
                *v181 = 56; /*0x1007a67ed*/
                v122[1] = v121; /*0x1007a67f4*/
                v122[2] = 56; /*0x1007a67f8*/
                goto LABEL_51; /*0x1007a6800*/
              }
              goto LABEL_154; /*0x1007a6786*/
            }
            if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h41b8ff8f11868916(v23) ) /*0x1007a661b*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v99, v115, v116); /*0x1007a6628*/
              v28 = 63; /*0x1007a662d*/
              v117 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(63, 1); /*0x1007a663c*/
              if ( v117 ) /*0x1007a6644*/
              {
                *(_QWORD *)((char *)v117 + 55) = 0xB487E880B8E48DB8LL; /*0x1007a6654*/
                v117[6] = 0xB8E4B0AEE887A0E6LL; /*0x1007a6662*/
                v117[5] = 0x8DA4E5A281E68EB8LL; /*0x1007a6670*/
                v117[4] = 0xE42079654B204950LL; /*0x1007a667e*/
                v117[3] = 0x4120A1AEE7978FE5LL; /*0x1007a668c*/
                v117[2] = 0x849AE78FBCE5A1A8LL; /*0x1007a669a*/
                v117[1] = 0xE695BDE5BB99E7B7LL; /*0x1007a66a8*/
                *v117 = 0x8FE5A6B4E8A097E6LL; /*0x1007a66b6*/
                v118 = v181; /*0x1007a66b9*/
                *v181 = 63; /*0x1007a66bd*/
                v118[1] = v117; /*0x1007a66c4*/
                v118[2] = 63; /*0x1007a66c8*/
                goto LABEL_51; /*0x1007a66d0*/
              }
              goto LABEL_154; /*0x1007a6644*/
            }
            goto LABEL_98; /*0x1007a6622*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v99, v106, v107); /*0x1007a64c8*/
          v28 = 54; /*0x1007a64cd*/
          v86 = (unsigned __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1007a64dc*/
          if ( !v86 ) /*0x1007a64e4*/
            goto LABEL_154; /*0x1007a64e4*/
          *(unsigned __int64 *)((char *)v86 + 46) = 0x9995E78BAEE681AFLL; /*0x1007a64f4*/
          v86[5] = 0x81AFE8A4AEE89F8BLL; /*0x1007a6502*/
          v86[4] = 0xE69A99E88889E7A7LL; /*0x1007a6510*/
          v86[3] = 0x97E6AB90E5858CE5LL; /*0x1007a651e*/
          v86[2] = 0x8DBBE48FBCE5A1A8LL; /*0x1007a652c*/
          v86[1] = 0xE695BDE5BB99E7B7LL; /*0x1007a653a*/
          v87 = 0x8FE5A6B4E8A097E6LL; /*0x1007a653e*/
        }
        else
        {
          v108 = v23; /*0x1007a654d*/
          if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h81ec5363cf898363(v23) /*0x1007a655c*/
            || (v108 = v23,
                (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hac85bd62c96aed0b(v23)) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, v99, v109, v110); /*0x1007a6569*/
            v28 = 53; /*0x1007a656e*/
            v111 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x1007a657d*/
            if ( v111 ) /*0x1007a6585*/
            {
              *(_QWORD *)((char *)v111 + 45) = 0x9995E78BAEE681AFLL; /*0x1007a6595*/
              v111[5] = 0xE681AFE8A4AEE8A1LL; /*0x1007a65a3*/
              v111[4] = 0xAEE7978FE520694DLL; /*0x1007a65b1*/
              v111[3] = 0x614D694120AB90E5LL; /*0x1007a65bf*/
              v111[2] = 0x858CE58DBBE48FBCLL; /*0x1007a65cd*/
              v111[1] = 0xE5A1A8E6B78FE5A6LL; /*0x1007a65db*/
              *v111 = 0xB4E89EAEE59F9CE7LL; /*0x1007a65e9*/
              v112 = v181; /*0x1007a65ec*/
              *v181 = 53; /*0x1007a65f0*/
              v112[1] = v111; /*0x1007a65f7*/
              v112[2] = 53; /*0x1007a65fb*/
              goto LABEL_51; /*0x1007a6603*/
            }
            goto LABEL_154; /*0x1007a6585*/
          }
          if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h19f0ddaf8bcca090((__int64)v23) ) /*0x1007a66d8*/
            goto LABEL_98; /*0x1007a66df*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v99, v119, v120); /*0x1007a66e5*/
          v28 = 54; /*0x1007a66ea*/
          v86 = (unsigned __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1007a66f9*/
          if ( !v86 ) /*0x1007a6701*/
            goto LABEL_154; /*0x1007a6701*/
          *(unsigned __int64 *)((char *)v86 + 46) = 0x95BDE5BB99E72068LL; /*0x1007a6711*/
          v86[5] = 0x20687475414F2054LL; /*0x1007a671f*/
          v86[4] = 0x5047746168432084LL; /*0x1007a672d*/
          v86[3] = 0x9AE7A894E7AF8FE5LL; /*0x1007a673b*/
          v86[2] = 0x91B0E5BABCE78FBCLL; /*0x1007a6749*/
          v86[1] = 0xE5A1A8E6B78FE5A6LL; /*0x1007a6757*/
          v87 = 0xB4E89EAEE59F9CE7LL; /*0x1007a675b*/
        }
LABEL_106:
        *v86 = v87; /*0x1007a6098*/
        v88 = v181; /*0x1007a609b*/
        *v181 = 54; /*0x1007a609f*/
        v88[1] = v86; /*0x1007a60a6*/
        v88[2] = 54; /*0x1007a60aa*/
        goto LABEL_51; /*0x1007a60b2*/
      }
      v93 = v163; /*0x1007a62e3*/
    }
    v160 = (__int64)v93; /*0x1007a62ea*/
    v161 = v92; /*0x1007a62f1*/
    v168 = (const __m128i *)&v164; /*0x1007a62ff*/
    v169 = (__m128i *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007a630d*/
    v170 = (__int64 **)&v160; /*0x1007a631b*/
    v171 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1007a6329*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v123, &unk_1017CD3F0, &v168); /*0x1007a6342*/
    v97 = v181; /*0x1007a634e*/
    v181[2] = v123[2]; /*0x1007a6352*/
    v98 = v123[0]; /*0x1007a6356*/
    v97[1] = v123[1]; /*0x1007a6364*/
    *v97 = v98; /*0x1007a6368*/
    if ( v179 != 0x8000000000000000LL && v179 ) /*0x1007a6381*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v175, v179, 1); /*0x1007a638c*/
    if ( v164 ) /*0x1007a639b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v164, 1); /*0x1007a63a9*/
    if ( v178 ) /*0x1007a63b5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v177, v178, 1); /*0x1007a63c4*/
    goto LABEL_51; /*0x1007a63c9*/
  }
LABEL_98:
  si128 = _mm_load_si128(v149); /*0x1007a5ef0*/
  v168 = v149; /*0x1007a5f10*/
  v169 = (__m128i *)&v149[1]; /*0x1007a5f1b*/
  v170 = (__int64 **)((char *)v149->i64 + v150 + 1); /*0x1007a5f22*/
  LOWORD(v171) = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x1007a5f29*/
  v172 = v151; /*0x1007a5f2d*/
  v81 = core::iter::traits::iterator::Iterator::try_fold::hff7e94f5073fb0a4(&v168, &v131); /*0x1007a5f3f*/
  if ( v81 ) /*0x1007a5f47*/
  {
    v160 = v81; /*0x1007a5f49*/
    v164 = &v160; /*0x1007a5f57*/
    __s2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2451354914923f; /*0x1007a5f65*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v174, &unk_1017CD48B, &v164); /*0x1007a5f7e*/
    v82 = (__int64 **)v181; /*0x1007a5f87*/
    v181[2] = v176; /*0x1007a5f8b*/
    v83 = v174; /*0x1007a5f8f*/
    v82[1] = (__int64 *)v175; /*0x1007a5f97*/
    *v82 = v83; /*0x1007a5f9b*/
  }
  else
  {
    *v181 = 0x8000000000000000LL; /*0x1007a5fae*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::he063b69f394f9119(&v137); /*0x1007a5fb8*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(&v125); /*0x1007a5fc4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::hd9e96c63ab56e645(&v128); /*0x1007a5fd0*/
  result = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(&v131); /*0x1007a5fdc*/
LABEL_80:
  if ( v167 ) /*0x1007a5d46*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v167, 1); /*0x1007a5d51*/
  return result; /*0x1007a5d56*/
}