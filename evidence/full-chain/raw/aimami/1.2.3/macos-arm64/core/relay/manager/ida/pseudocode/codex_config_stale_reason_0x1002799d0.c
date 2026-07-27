// __ZN13codexmate_lib4core5relay7manager12RelayManager25codex_config_stale_reason @ 0x1002799d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  const __m128i **v11; // rdi
  size_t v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  unsigned __int8 v16; // dl
  char v17; // r12
  __int64 v18; // r15
  __int64 v19; // r14
  void *v20; // rax
  void *v21; // r14
  _QWORD *v22; // rax
  char v23; // cl
  void *v24; // rax
  void *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rax
  void *v28; // r14
  const void *v29; // rsi
  char v30; // al
  void *v31; // rax
  void *v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v37; // r14
  const __m128i *v38; // r15
  const __m128i *v40; // r12
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  _QWORD *v45; // rbx
  __int64 v46; // rsi
  __int64 v48; // rbx
  __int64 v49; // r14
  const __m128i *v50; // r15
  const __m128i *v52; // r12
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  void *v59; // rax
  void *v60; // r14
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  __int64 **v63; // rbx
  _QWORD *v64; // rax
  _QWORD *v65; // rcx
  const __m128i *v66; // rdx
  __int64 *v67; // rcx
  __m128i si128; // xmm0
  __int64 v69; // rax
  __int64 **v70; // rdx
  __int64 *v71; // rax
  void *v72; // rax
  void *v73; // r14
  _QWORD *v74; // rax
  void *v75; // rax
  void *v76; // r14
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // rbx
  __int64 v80; // r12
  __int64 (__fastcall *v81)(); // r15
  const void *v82; // rax
  size_t v83; // rdx
  _QWORD *v84; // rdx
  __int64 v85; // rax
  __int64 **v86; // r14
  __int64 v87; // rsi
  const __m128i **v88; // rdi
  size_t v89; // rsi
  void *v90; // rax
  void *v91; // r14
  _QWORD *v92; // rax
  __int64 v93; // [rsp+8h] [rbp-358h] BYREF
  void *v94; // [rsp+10h] [rbp-350h]
  unsigned __int64 v95; // [rsp+18h] [rbp-348h]
  char v96; // [rsp+12Ch] [rbp-234h]
  _QWORD v97[3]; // [rsp+130h] [rbp-230h] BYREF
  const __m128i *v98; // [rsp+148h] [rbp-218h] BYREF
  unsigned __int64 v99; // [rsp+150h] [rbp-210h]
  __int64 v100; // [rsp+160h] [rbp-200h]
  const __m128i *v101; // [rsp+178h] [rbp-1E8h] BYREF
  __int64 v102; // [rsp+180h] [rbp-1E0h]
  __int64 v103; // [rsp+188h] [rbp-1D8h]
  __int64 v104; // [rsp+190h] [rbp-1D0h]
  __int64 v105; // [rsp+198h] [rbp-1C8h] BYREF
  __int64 v106; // [rsp+1A0h] [rbp-1C0h]
  __int64 v107; // [rsp+1A8h] [rbp-1B8h]
  __int64 v108; // [rsp+1B0h] [rbp-1B0h]
  __int64 v109; // [rsp+1B8h] [rbp-1A8h]
  __int64 v110; // [rsp+1D8h] [rbp-188h]
  const __m128i **v111; // [rsp+1E0h] [rbp-180h]
  size_t v112; // [rsp+1E8h] [rbp-178h]
  const __m128i *v113[6]; // [rsp+208h] [rbp-158h] BYREF
  unsigned __int8 v114; // [rsp+238h] [rbp-128h]
  char v115; // [rsp+23Ah] [rbp-126h]
  char v116; // [rsp+23Bh] [rbp-125h]
  char v117; // [rsp+23Ch] [rbp-124h]
  char v118; // [rsp+23Dh] [rbp-123h]
  char v119; // [rsp+23Eh] [rbp-122h]
  unsigned __int8 v120; // [rsp+23Fh] [rbp-121h]
  char v121; // [rsp+240h] [rbp-120h]
  unsigned __int8 v122; // [rsp+241h] [rbp-11Fh]
  __int64 v123; // [rsp+248h] [rbp-118h] BYREF
  __int64 v124; // [rsp+250h] [rbp-110h]
  __int64 v125; // [rsp+258h] [rbp-108h]
  const __m128i *v126; // [rsp+260h] [rbp-100h] BYREF
  __int64 v127; // [rsp+268h] [rbp-F8h]
  __int64 v128; // [rsp+270h] [rbp-F0h]
  __int64 v129; // [rsp+278h] [rbp-E8h]
  __int64 v130; // [rsp+280h] [rbp-E0h]
  __int64 v131; // [rsp+288h] [rbp-D8h]
  __int64 **v132; // [rsp+290h] [rbp-D0h] BYREF
  __m128i *v133; // [rsp+298h] [rbp-C8h]
  __int64 *v134; // [rsp+2A0h] [rbp-C0h]
  __int64 (__fastcall *v135)(); // [rsp+2A8h] [rbp-B8h]
  const __m128i *v136; // [rsp+2B0h] [rbp-B0h]
  __int64 v137; // [rsp+2B8h] [rbp-A8h] BYREF
  __int64 v138; // [rsp+2C0h] [rbp-A0h]
  __m128i *v139; // [rsp+2C8h] [rbp-98h]
  __int64 *v140; // [rsp+2D0h] [rbp-90h] BYREF
  __int64 (__fastcall *v141)(); // [rsp+2D8h] [rbp-88h]
  __int64 v142; // [rsp+2E0h] [rbp-80h]
  __int64 *v143; // [rsp+2E8h] [rbp-78h] BYREF
  void *__s2; // [rsp+2F0h] [rbp-70h]
  __int64 *v145; // [rsp+2F8h] [rbp-68h]
  __int64 v146; // [rsp+300h] [rbp-60h]
  unsigned __int64 v147; // [rsp+308h] [rbp-58h]
  __int64 v148; // [rsp+310h] [rbp-50h]
  void *v149; // [rsp+318h] [rbp-48h]
  const __m128i **v150; // [rsp+320h] [rbp-40h]
  __int64 **v151; // [rsp+328h] [rbp-38h]
  _QWORD *v152; // [rsp+330h] [rbp-30h]

  v3 = *a2; /*0x1002799f4*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v93, *(_QWORD *)(*a2 + 72LL), *(_QWORD *)(*a2 + 80LL)); /*0x100279a06*/
  v152 = a1; /*0x100279a1f*/
  if ( __OFSUB__(-v93, 1) ) /*0x100279a1c*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hc9829f74aca73a19( /*0x100279a28*/
      0x8000000000000000LL,
      v94);
    *a1 = 0x8000000000000000LL; /*0x100279a2d*/
    return v152; /*0x100279a30*/
  }
  v149 = v94; /*0x100279a35*/
  v148 = v93; /*0x100279a39*/
  v147 = v95; /*0x100279a44*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(&v93, a2); /*0x100279a52*/
  v4 = (__int64)v94; /*0x100279a57*/
  v5 = v95; /*0x100279a5e*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100279a6c*/
  v7 = v6; /*0x100279a6e*/
  if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x100279a75*/
  {
    v8 = *(_QWORD *)v6; /*0x100279a7b*/
    v9 = *(_QWORD *)(v7 + 8); /*0x100279a7f*/
  }
  else
  {
    v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10027a6b1*/
    *(_QWORD *)v7 = v8; /*0x10027a6b6*/
    *(_QWORD *)(v7 + 8) = v9; /*0x10027a6ba*/
    *(_BYTE *)(v7 + 16) = 1; /*0x10027a6be*/
  }
  *(_QWORD *)v7 = v8 + 1; /*0x100279a87*/
  v104 = 0; /*0x100279a92*/
  v103 = 0; /*0x100279aa0*/
  v102 = 0; /*0x100279aae*/
  v101 = (const __m128i *)anon_39a6e93098609d65551b0fc4eadbbbd9_24; /*0x100279abc*/
  v105 = v8; /*0x100279ac3*/
  v106 = v9; /*0x100279aca*/
  if ( v5 ) /*0x100279ad4*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v101, v5, &v105, 1); /*0x10027a6de*/
    v87 = v4; /*0x10027a6ea*/
    v150 = (const __m128i **)v5; /*0x10027a6ed*/
    do /*0x10027a71b*/
    {
      v146 = v87; /*0x10027a6f4*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v98, v87); /*0x10027a6f8*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v101, &v98); /*0x10027a707*/
      v87 = v146 + 232; /*0x10027a710*/
      v150 = (const __m128i **)((char *)v150 - 1); /*0x10027a717*/
    }
    while ( v150 ); /*0x10027a71b*/
  }
  v131 = v106; /*0x100279ae1*/
  v130 = v105; /*0x100279aef*/
  v129 = v104; /*0x100279afd*/
  v128 = v103; /*0x100279b0b*/
  v127 = v102; /*0x100279b20*/
  v126 = v101; /*0x100279b27*/
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(&v123, &v93); /*0x100279b3c*/
  v10 = v125; /*0x100279b48*/
  v146 = v124; /*0x100279b5c*/
  codexmate_lib::core::relay::models::active_codex_relay_model_slugs::hb3cbe297656c04c0(&v98, v4, v5, v124, v125); /*0x100279b63*/
  v11 = &v101; /*0x100279b6c*/
  v12 = v3 + 16; /*0x100279b73*/
  codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191( /*0x100279b7e*/
    (__int64)&v101,
    v3 + 16,
    v149,
    v147);
  if ( v115 ) /*0x100279b8a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v101, v12); /*0x100279b90*/
    v13 = 47; /*0x100279b95*/
    v14 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x100279ba4*/
    if ( v14 ) /*0x100279bac*/
    {
      qmemcpy(v14 + 4, "mi_codex_router", 15); /*0x100279bca*/
      v14[3] = 0x616D6961208889E7LL; /*0x100279bd8*/
      v14[2] = 0xA797E6AB90E5858CLL; /*0x100279be6*/
      v14[1] = 0xE58DBBE4206C6D6FLL; /*0x100279bf4*/
      *v14 = 0x742E6769666E6F63LL; /*0x100279c02*/
      v15 = v152; /*0x100279c05*/
      *v152 = 47; /*0x100279c09*/
      v15[1] = v14; /*0x100279c10*/
      v15[2] = 47; /*0x100279c14*/
LABEL_43:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(&v101); /*0x100279f7c*/
      HIDWORD(_RAX) = HIDWORD(v99); /*0x100279f88*/
      if ( v99 ) /*0x100279f92*/
      {
        v147 = v99; /*0x100279f98*/
        v37 = v100; /*0x100279f9c*/
        if ( v100 ) /*0x100279fa6*/
        {
          v38 = v98; /*0x100279fac*/
          _EBX = ~_mm_movemask_epi8(_mm_load_si128(v98)); /*0x100279fbc*/
          v40 = v98 + 1; /*0x100279fbe*/
          do /*0x100279fdd*/
          {
            if ( !(_WORD)_EBX ) /*0x100279fe2*/
            {
              do /*0x10027a00b*/
              {
                v41 = _mm_movemask_epi8(_mm_load_si128(v40)); /*0x100279ff6*/
                v38 -= 24; /*0x100279ffa*/
                ++v40; /*0x10027a001*/
              }
              while ( v41 == 0xFFFF ); /*0x10027a00b*/
              _EBX = ~v41; /*0x10027a00d*/
            }
            __asm { tzcnt eax, ebx } /*0x10027a00f*/
            v42 = -3 * _RAX; /*0x10027a016*/
            v43 = *((_QWORD *)&v38[-1] + v42 - 1); /*0x10027a01a*/
            if ( v43 ) /*0x10027a022*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[-1].i64[v42], v43, 1); /*0x10027a031*/
            --v37; /*0x100279fd0*/
            _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100279fd6*/
            _EBX &= _EBX - 1; /*0x100279fd8*/
          }
          while ( v37 ); /*0x100279fdd*/
        }
        v44 = (24 * v147 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10027a048*/
        if ( v44 + v147 != -17 ) /*0x10027a053*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v98 - v44, v44 + v147 + 17, 16); /*0x10027a064*/
      }
      if ( v10 ) /*0x10027a06c*/
      {
        v45 = (_QWORD *)(v146 + 8); /*0x10027a072*/
        do /*0x10027a087*/
        {
          v46 = *(v45 - 1); /*0x10027a089*/
          if ( v46 ) /*0x10027a090*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v45, v46, 1); /*0x10027a09a*/
          v45 += 3; /*0x10027a080*/
          --v10; /*0x10027a084*/
        }
        while ( v10 ); /*0x10027a087*/
      }
      HIDWORD(_RAX) = HIDWORD(v123); /*0x10027a0a1*/
      if ( v123 ) /*0x10027a0ab*/
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, 24 * v123, 8) >> 32; /*0x10027a0be*/
      v48 = v127; /*0x10027a0c3*/
      if ( v127 ) /*0x10027a0cd*/
      {
        v49 = v129; /*0x10027a0d3*/
        if ( v129 ) /*0x10027a0dd*/
        {
          v50 = v126; /*0x10027a0e3*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v126)); /*0x10027a0f4*/
          v52 = v126 + 1; /*0x10027a0f7*/
          do /*0x10027a110*/
          {
            if ( !(_WORD)_R13D ) /*0x10027a116*/
            {
              do /*0x10027a13d*/
              {
                v53 = _mm_movemask_epi8(_mm_load_si128(v52)); /*0x10027a126*/
                v50 -= 24; /*0x10027a12b*/
                ++v52; /*0x10027a132*/
              }
              while ( v53 == 0xFFFF ); /*0x10027a13d*/
              _R13D = ~v53; /*0x10027a13f*/
            }
            __asm { tzcnt eax, r13d } /*0x10027a142*/
            v54 = -3 * _RAX; /*0x10027a14a*/
            v55 = *((_QWORD *)&v50[-1] + v54 - 1); /*0x10027a14e*/
            if ( v55 ) /*0x10027a156*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[-1].i64[v54], v55, 1); /*0x10027a165*/
            --v49; /*0x10027a100*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10027a107*/
            _R13D &= _R13D - 1; /*0x10027a10a*/
          }
          while ( v49 ); /*0x10027a110*/
        }
        v56 = (24 * v48 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10027a178*/
        v57 = v56 + v48 + 17; /*0x10027a17f*/
        if ( v57 ) /*0x10027a183*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v126 - v56, v57, 16); /*0x10027a197*/
      }
      goto LABEL_72; /*0x10027a197*/
    }
    goto LABEL_119; /*0x100279bac*/
  }
  v16 = v114; /*0x100279c21*/
  v17 = v116; /*0x100279c28*/
  if ( ((v114 | (unsigned __int8)(v116 | v117)) & 1) != 0 /*0x100279da5*/
    || v104 != 0x8000000000000000LL
    && v106 == 6
    && !(*(_DWORD *)v105 ^ 0x616D6961 | *(unsigned __int16 *)(v105 + 4) ^ 0x3169)
    || (v18 = v107, v19 = v109, v107 != 0x8000000000000000LL && v109 == 6)
    && !(*(_DWORD *)v108 ^ 0x616D6961 | *(unsigned __int16 *)(v108 + 4) ^ 0x3169)
    || v120
    || v121
    || v118 )
  {
    if ( v96 != 1 ) /*0x100279c4b*/
      goto LABEL_28; /*0x100279c4b*/
    v150 = v113; /*0x100279c58*/
    v18 = v107; /*0x100279c5c*/
    v19 = v109; /*0x100279c63*/
    goto LABEL_12; /*0x100279c63*/
  }
  v23 = v96; /*0x100279dab*/
  if ( !v96 && v119 ) /*0x100279dc1*/
  {
LABEL_28:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v101, v12); /*0x100279dc7*/
    v13 = 69; /*0x100279dcc*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(69, 1); /*0x100279ddb*/
    if ( v24 ) /*0x100279de3*/
    {
      v25 = v24; /*0x100279de9*/
      memcpy(v24, &unk_1015DE655, 0x45u); /*0x100279dfb*/
      v26 = v152; /*0x100279e00*/
      *v152 = 69; /*0x100279e04*/
      v26[1] = v25; /*0x100279e0b*/
      v26[2] = 69; /*0x100279e0f*/
      goto LABEL_43; /*0x100279e17*/
    }
    goto LABEL_119; /*0x100279de3*/
  }
  if ( !v96 && v110 != 0x8000000000000000LL ) /*0x100279ea2*/
  {
    LOBYTE(v151) = 0; /*0x100279ea8*/
    LOBYTE(v150) = v114; /*0x100279eab*/
    v11 = v111; /*0x100279eae*/
    v12 = v112; /*0x100279eb5*/
    v30 = codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hf8fb25c63ce8a656( /*0x100279ec5*/
            v111,
            v112,
            0,
            (__int64 *)&v98);
    v16 = (unsigned __int8)v150; /*0x100279ecc*/
    v23 = (char)v151; /*0x100279ed0*/
    if ( v30 ) /*0x100279ed4*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x100279eda*/
      v13 = 80; /*0x100279edf*/
      v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 1); /*0x100279eee*/
      if ( v31 ) /*0x100279ef6*/
      {
        v32 = v31; /*0x100279efc*/
        memcpy(v31, &unk_1015DE69A, 0x50u); /*0x100279f0e*/
        v33 = v152; /*0x100279f13*/
        *v152 = 80; /*0x100279f17*/
        v33[1] = v32; /*0x100279f1e*/
        v33[2] = 80; /*0x100279f22*/
        goto LABEL_43; /*0x100279f2a*/
      }
      goto LABEL_119; /*0x100279ef6*/
    }
  }
  if ( !v23 && v113[3] ) /*0x10027a1e5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x10027a1eb*/
    v13 = 91; /*0x10027a1f0*/
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1); /*0x10027a1ff*/
    if ( v59 ) /*0x10027a207*/
    {
      v60 = v59; /*0x10027a20d*/
      memcpy(v59, &unk_1015DE6EA, 0x5Bu); /*0x10027a21f*/
      v61 = v152; /*0x10027a224*/
      *v152 = 91; /*0x10027a228*/
      v61[1] = v60; /*0x10027a22f*/
      v61[2] = 91; /*0x10027a233*/
      goto LABEL_43; /*0x10027a23b*/
    }
    goto LABEL_119; /*0x10027a207*/
  }
  v150 = v113; /*0x10027a32b*/
  if ( v23 ) /*0x10027a331*/
  {
LABEL_12:
    if ( v18 == 0x8000000000000000LL /*0x100279c96*/
      || v19 != 6
      || *(_DWORD *)v108 ^ 0x616D6961 | *(unsigned __int16 *)(v108 + 4) ^ 0x3169 )
    {
      if ( (v17 & 1) != 0 ) /*0x100279ca2*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x100279ca8*/
        v13 = 90; /*0x100279cad*/
        v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(90, 1); /*0x100279cbc*/
        if ( v20 ) /*0x100279cc4*/
        {
          v21 = v20; /*0x100279cca*/
          memcpy(v20, &unk_1015DE899, 0x5Au); /*0x100279cdc*/
          v22 = v152; /*0x100279ce1*/
          *v152 = 90; /*0x100279ce5*/
          v22[1] = v21; /*0x100279cec*/
          v22[2] = 90; /*0x100279cf0*/
          goto LABEL_43; /*0x100279cf8*/
        }
LABEL_119:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x10027a804*/
      }
      if ( v104 != 0x8000000000000000LL /*0x100279e52*/
        && v106 == 6
        && !(*(_DWORD *)v105 ^ 0x616D6961 | *(unsigned __int16 *)(v105 + 4) ^ 0x3169) )
      {
        if ( (v16 & 1) == 0 ) /*0x10027a243*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x10027a3f6*/
          v13 = 86; /*0x10027a3fb*/
          v72 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(86, 1); /*0x10027a40a*/
          if ( v72 ) /*0x10027a412*/
          {
            v73 = v72; /*0x10027a418*/
            memcpy(v72, &unk_1015DE797, 0x56u); /*0x10027a42a*/
            v74 = v152; /*0x10027a42f*/
            *v152 = 86; /*0x10027a433*/
            v74[1] = v73; /*0x10027a43a*/
            v74[2] = 86; /*0x10027a43e*/
            goto LABEL_43; /*0x10027a446*/
          }
          goto LABEL_119; /*0x10027a412*/
        }
        if ( (v122 & v120) == 0 ) /*0x10027a256*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x10027a44b*/
          v13 = 72; /*0x10027a450*/
          v75 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x10027a45f*/
          if ( v75 ) /*0x10027a467*/
          {
            v76 = v75; /*0x10027a46d*/
            memcpy(v75, &unk_1015DE7ED, 0x48u); /*0x10027a47f*/
            v77 = v152; /*0x10027a484*/
            *v152 = 72; /*0x10027a488*/
            v77[1] = v76; /*0x10027a48f*/
            v77[2] = 72; /*0x10027a493*/
            goto LABEL_43; /*0x10027a49b*/
          }
          goto LABEL_119; /*0x10027a467*/
        }
        v62 = a2; /*0x10027a263*/
        codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h0e74109fd00d63ed(&v132, a2); /*0x10027a266*/
        v63 = v132; /*0x10027a26b*/
        if ( v132 == (__int64 **)0x8000000000000000LL ) /*0x10027a27f*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v132, v62); /*0x10027a285*/
          v13 = 54; /*0x10027a28a*/
          v64 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x10027a299*/
          if ( v64 ) /*0x10027a2a1*/
          {
            *(_QWORD *)((char *)v64 + 46) = 0x8CA1E890BFE8AA9CLL; /*0x10027a2b1*/
            v64[5] = 0xAA9CE68690E7A3BBLL; /*0x10027a2bf*/
            v64[4] = 0xE4B09CE5AC9CE686LL; /*0x10027a2cd*/
            v64[3] = 0xBDE48CBCEFAF90E5LL; /*0x10027a2db*/
            v64[2] = 0x80BCE5BAB8E48180LL; /*0x10027a2e9*/
            v64[1] = 0xE6B68AE7B194E7AFLL; /*0x10027a2f7*/
            *v64 = 0xB7E8BD83E8BA99E6LL; /*0x10027a305*/
            v65 = v152; /*0x10027a308*/
            *v152 = 54; /*0x10027a30c*/
            v65[1] = v64; /*0x10027a313*/
            v65[2] = 54; /*0x10027a317*/
            goto LABEL_43; /*0x10027a31f*/
          }
          goto LABEL_119; /*0x10027a2a1*/
        }
        v139 = v133; /*0x10027a4f4*/
        v137 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hd16cbd0279b6b068(v133, v134, 47); /*0x10027a505*/
        v138 = v78; /*0x10027a50c*/
        v140 = &v137; /*0x10027a51a*/
        v141 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027a528*/
        v151 = v63; /*0x10027a544*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v132, &unk_1017BA4FB, &v140); /*0x10027a548*/
        v143 = (__int64 *)v132; /*0x10027a55b*/
        __s2 = v133; /*0x10027a55f*/
        v145 = v134; /*0x10027a56a*/
        codexmate_lib::core::relay::codex_writer::router_provider_base_url::hca7b84a05e0d0b9b(&v140, v149, v147); /*0x10027a57d*/
        v79 = v140; /*0x10027a582*/
        if ( v140 == (__int64 *)0x8000000000000000LL ) /*0x10027a58c*/
        {
          v80 = 6; /*0x10027a58e*/
          v81 = (__int64 (__fastcall *)())&unk_1015DE88D; /*0x10027a594*/
        }
        else
        {
          v81 = v141; /*0x10027a59d*/
          v80 = v142; /*0x10027a5a4*/
          v82 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hd16cbd0279b6b068(v141, v142, 47); /*0x10027a5b3*/
          if ( (__int64 *)v83 == v145 && !memcmp(v82, __s2, v83) ) /*0x10027a5cc*/
          {
            if ( v79 ) /*0x10027a725*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v79, 1); /*0x10027a732*/
            if ( v143 ) /*0x10027a73e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v143, 1); /*0x10027a749*/
            if ( v151 ) /*0x10027a755*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v151, 1); /*0x10027a763*/
            if ( v96 == 1 && v110 != 0x8000000000000000LL ) /*0x10027a786*/
            {
              v88 = v111; /*0x10027a78c*/
              v89 = v112; /*0x10027a793*/
              if ( (unsigned __int8)codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hf8fb25c63ce8a656( /*0x10027a7a6*/
                                      v111,
                                      v112,
                                      1,
                                      (__int64 *)&v98) )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v88, v89); /*0x10027a7b3*/
                v13 = 88; /*0x10027a7b8*/
                v90 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(88, 1); /*0x10027a7c7*/
                if ( v90 ) /*0x10027a7cf*/
                {
                  v91 = v90; /*0x10027a7d1*/
                  memcpy(v90, &unk_1015DE835, 0x58u); /*0x10027a7e3*/
                  v92 = v152; /*0x10027a7e8*/
                  *v152 = 88; /*0x10027a7ec*/
                  v92[1] = v91; /*0x10027a7f3*/
                  v92[2] = 88; /*0x10027a7f7*/
                  goto LABEL_43; /*0x10027a7ff*/
                }
                goto LABEL_119; /*0x10027a7cf*/
              }
            }
            goto LABEL_85; /*0x10027a7ad*/
          }
        }
        v137 = (__int64)v81; /*0x10027a5d2*/
        v138 = v80; /*0x10027a5d9*/
        v132 = &v143; /*0x10027a5e4*/
        v133 = (__m128i *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027a5f2*/
        v134 = &v137; /*0x10027a600*/
        v135 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027a607*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1017BA50E, &v132); /*0x10027a623*/
        v84 = v152; /*0x10027a62f*/
        v152[2] = v97[2]; /*0x10027a633*/
        v85 = v97[0]; /*0x10027a637*/
        v84[1] = v97[1]; /*0x10027a645*/
        *v84 = v85; /*0x10027a649*/
        v86 = v151; /*0x10027a659*/
        if ( v79 != (__int64 *)0x8000000000000000LL && v79 ) /*0x10027a662*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v79, 1); /*0x10027a673*/
        if ( v143 ) /*0x10027a67f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v143, 1); /*0x10027a68a*/
        if ( v86 ) /*0x10027a692*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v86, 1); /*0x10027a6a7*/
        goto LABEL_43; /*0x10027a6ac*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x100279e58*/
      v13 = 82; /*0x100279e5d*/
      v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x100279e6c*/
      if ( !v27 ) /*0x100279e74*/
        goto LABEL_119; /*0x100279e74*/
      v28 = (void *)v27; /*0x100279e7a*/
      v29 = &unk_1015DE745; /*0x100279e7d*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x100279f2c*/
      v13 = 82; /*0x100279f31*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x100279f40*/
      if ( !v34 ) /*0x100279f48*/
        goto LABEL_119; /*0x100279f48*/
      v28 = (void *)v34; /*0x100279f4e*/
      v29 = &unk_1015DE8F3; /*0x100279f51*/
    }
    memcpy(v28, v29, 0x52u); /*0x100279f60*/
    v35 = v152; /*0x100279f65*/
    *v152 = 82; /*0x100279f69*/
    v35[1] = v28; /*0x100279f70*/
    v35[2] = 82; /*0x100279f74*/
    goto LABEL_43; /*0x100279f74*/
  }
LABEL_85:
  v66 = v150[3]; /*0x10027a337*/
  v67 = (__int64 *)((char *)v113[0]->i64 + (unsigned __int64)v150[1] + 1); /*0x10027a34a*/
  si128 = _mm_load_si128(v113[0]); /*0x10027a34f*/
  v132 = (__int64 **)v113[0]; /*0x10027a359*/
  v133 = (__m128i *)&v113[0][1]; /*0x10027a364*/
  v134 = v67; /*0x10027a36b*/
  LOWORD(v135) = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10027a372*/
  v136 = v66; /*0x10027a379*/
  v69 = core::iter::traits::iterator::Iterator::try_fold::ha997d6e491d8441e(&v132, &v126); /*0x10027a38e*/
  if ( v69 ) /*0x10027a396*/
  {
    v137 = v69; /*0x10027a39c*/
    v143 = &v137; /*0x10027a3aa*/
    __s2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x10027a3b5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v140, &unk_1017BA551, &v143); /*0x10027a3cb*/
    v70 = (__int64 **)v152; /*0x10027a3d4*/
    v152[2] = v142; /*0x10027a3d8*/
    v71 = v140; /*0x10027a3dc*/
    v70[1] = (__int64 *)v141; /*0x10027a3ea*/
    *v70 = v71; /*0x10027a3ee*/
  }
  else
  {
    *v152 = 0x8000000000000000LL; /*0x10027a4ae*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(&v101); /*0x10027a4b8*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v98); /*0x10027a4c4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v123); /*0x10027a4d0*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v126); /*0x10027a4dc*/
LABEL_72:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v93); /*0x10027a19c*/
  if ( v148 ) /*0x10027a1af*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v148, 1); /*0x10027a1ba*/
  return v152; /*0x10027a1c3*/
}