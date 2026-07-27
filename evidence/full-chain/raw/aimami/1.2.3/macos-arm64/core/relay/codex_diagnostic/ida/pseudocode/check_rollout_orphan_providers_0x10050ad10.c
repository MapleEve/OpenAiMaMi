// __ZN13codexmate_lib4core5relay16codex_diagnostic30check_rollout_orphan_providers @ 0x10050ad10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers::h0fad5f388bab55aa(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        char a4)
{
  __int64 v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  const __m128i *v17; // rdx
  _QWORD *v18; // rsi
  const __m128i **v19; // rdi
  __m128i *v20; // r13
  __m128i *v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  const void *v24; // r15
  size_t v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  size_t v28; // rbx
  unsigned __int64 v29; // r15
  __m128i v30; // xmm1
  __int64 i; // rcx
  unsigned __int64 v32; // r15
  __m128i v34; // xmm2
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __m128i v38; // xmm1
  __int64 j; // rbx
  unsigned __int64 v40; // rax
  __m128i v42; // xmm2
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  int v46; // eax
  bool v47; // zf
  __int64 result; // rax
  void *v49; // rax
  void *v50; // rbx
  _DWORD *v51; // rax
  _DWORD *v52; // r15
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rdx
  __m128i si128; // xmm0
  __int64 v57; // rbx
  unsigned __int64 v58; // r12
  const __m128i **v59; // r14
  unsigned __int64 v60; // r15
  __int64 v61; // r13
  __int64 v62; // rbx
  __int64 v63; // r15
  __int64 v65; // rdi
  __int64 v66; // rsi
  unsigned __int64 v67; // r12
  _QWORD *v68; // r15
  __int64 v69; // rsi
  unsigned __int64 v70; // r15
  _QWORD *v71; // rdi
  __int64 v72; // rsi
  _QWORD *v73; // r12
  __int64 v74; // r14
  bool v75; // r15
  char *v76; // r13
  void *v77; // rax
  void *v78; // rbx
  __int64 v79; // r15
  void *v80; // rax
  void *v81; // r12
  __int64 v82; // r13
  __int64 v83; // r14
  __int64 v84; // rdx
  const __m128i *v85; // rbx
  const __m128i *v86; // r14
  const __m128i *v87; // r15
  const __m128i *v89; // r12
  int v90; // r13d
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rbx
  __int64 (__fastcall **v94)(); // rbx
  __int64 v95; // r14
  const __m128i *v96; // r15
  const __m128i *v98; // r12
  int v99; // r13d
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rbx
  __int64 v103; // rbx
  __int64 v104; // r14
  __int64 v105; // r15
  const __m128i *v107; // r12
  int v108; // r13d
  __int64 v109; // rax
  __int64 v110; // rsi
  unsigned __int64 v111; // rax
  __int64 v112; // rbx
  __m128i v113; // [rsp+0h] [rbp-2D0h] BYREF
  _QWORD v114[3]; // [rsp+18h] [rbp-2B8h] BYREF
  __int16 v115; // [rsp+30h] [rbp-2A0h]
  const __m128i *v116; // [rsp+38h] [rbp-298h]
  _QWORD v117[3]; // [rsp+40h] [rbp-290h] BYREF
  const __m128i *v118[12]; // [rsp+58h] [rbp-278h] BYREF
  const __m128i *v119; // [rsp+B8h] [rbp-218h] BYREF
  __m128i v120; // [rsp+C0h] [rbp-210h] BYREF
  __m128i v121; // [rsp+D0h] [rbp-200h] BYREF
  _QWORD v122[12]; // [rsp+E0h] [rbp-1F0h] BYREF
  __int64 v123; // [rsp+140h] [rbp-190h] BYREF
  const __m128i **v124; // [rsp+178h] [rbp-158h] BYREF
  __int64 v125; // [rsp+180h] [rbp-150h]
  unsigned __int64 v126; // [rsp+188h] [rbp-148h]
  __int64 v127; // [rsp+190h] [rbp-140h] BYREF
  __int64 v128; // [rsp+198h] [rbp-138h]
  __int64 v129; // [rsp+1A0h] [rbp-130h]
  const __m128i *v130; // [rsp+1A8h] [rbp-128h] BYREF
  __int64 (__fastcall **v131)(); // [rsp+1B0h] [rbp-120h]
  __int64 v132; // [rsp+1B8h] [rbp-118h]
  __int64 v133; // [rsp+1C0h] [rbp-110h]
  __int64 v134; // [rsp+1C8h] [rbp-108h]
  const __m128i *v135; // [rsp+1D0h] [rbp-100h]
  __int64 i64; // [rsp+1D8h] [rbp-F8h] BYREF
  const __m128i *v137; // [rsp+1E0h] [rbp-F0h]
  const __m128i *v138; // [rsp+1E8h] [rbp-E8h]
  __int64 v139; // [rsp+1F0h] [rbp-E0h] BYREF
  __int64 v140; // [rsp+1F8h] [rbp-D8h]
  const __m128i *v141; // [rsp+200h] [rbp-D0h]
  __int64 v142; // [rsp+208h] [rbp-C8h]
  __int64 v143; // [rsp+210h] [rbp-C0h]
  __m128i v144; // [rsp+218h] [rbp-B8h] BYREF
  __int64 v145; // [rsp+228h] [rbp-A8h]
  __int64 v146; // [rsp+230h] [rbp-A0h]
  _BYTE v147[16]; // [rsp+238h] [rbp-98h] BYREF
  __int64 v148; // [rsp+248h] [rbp-88h]
  _QWORD *v149; // [rsp+250h] [rbp-80h]
  __int64 v150; // [rsp+258h] [rbp-78h]
  const __m128i **v151; // [rsp+260h] [rbp-70h] BYREF
  __int64 (__fastcall *v152)(); // [rsp+268h] [rbp-68h]
  unsigned __int64 v153; // [rsp+270h] [rbp-60h]
  __int64 v154; // [rsp+278h] [rbp-58h]
  __int64 v155; // [rsp+280h] [rbp-50h]
  size_t v156; // [rsp+288h] [rbp-48h]
  __m128i *v157; // [rsp+290h] [rbp-40h]
  void *__s1; // [rsp+298h] [rbp-38h]
  void *v159; // [rsp+2A0h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v122); /*0x10050ad37*/
  v7 = v122[2]; /*0x10050ad3c*/
  if ( !v122[2] ) /*0x10050ad46*/
  {
    if ( v122[0] ) /*0x10050b446*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122[1], 24LL * v122[0], 8); /*0x10050b45c*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050b48e*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_617,
             24,
             &unk_1015FE2B4,
             47);
  }
  v157 = a3; /*0x10050ad4c*/
  v148 = a1; /*0x10050ad50*/
  v8 = v122[1]; /*0x10050ad57*/
  v9 = (_QWORD *)(v122[1] + 8LL); /*0x10050ad5e*/
  do /*0x10050ad77*/
  {
    v10 = *(v9 - 1); /*0x10050ad79*/
    if ( v10 ) /*0x10050ad80*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x10050ad8a*/
    v9 += 3; /*0x10050ad70*/
    --v7; /*0x10050ad74*/
  }
  while ( v7 ); /*0x10050ad77*/
  if ( v122[0] ) /*0x10050ad9b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24LL * v122[0], 8); /*0x10050adad*/
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(v118, a2); /*0x10050adbc*/
  if ( LODWORD(v118[0]) != 11 ) /*0x10050adc8*/
  {
    qmemcpy(v122, v118, sizeof(v122)); /*0x10050b4a6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v123, &v119); /*0x10050b4a9*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10050b4b8*/
    if ( !v49 ) /*0x10050b4c0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x10050bd98*/
    v50 = v49; /*0x10050b4c6*/
    qmemcpy(v49, "rollout_orphan_providers", 24); /*0x10050b4ef*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x10050b4f2*/
    v51 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10050b501*/
    if ( !v51 ) /*0x10050b509*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10050bda9*/
    v52 = v51; /*0x10050b50f*/
    *(_DWORD *)((char *)v51 + 3) = 1735289198; /*0x10050b512*/
    *v51 = 1852989815; /*0x10050b519*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10050b51f*/
    v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x10050b52e*/
    if ( !v53 ) /*0x10050b536*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x10050bdba*/
    v54 = v53; /*0x10050b53c*/
    *(_QWORD *)(v53 + 24) = 0xBCE5A2B4E7207475LL; /*0x10050b549*/
    *(_QWORD *)(v53 + 16) = 0x6F6C6C6F5220968FLL; /*0x10050b558*/
    *(_QWORD *)(v53 + 8) = 0xE5BBAFE8B495E68CLL; /*0x10050b567*/
    *(_QWORD *)v53 = 0xAEE595B3E6A097E6LL; /*0x10050b576*/
    *(_BYTE *)(v53 + 32) = -107; /*0x10050b57a*/
    v144.i64[0] = 0; /*0x10050b580*/
    v144.i64[1] = 1; /*0x10050b58b*/
    v145 = 0; /*0x10050b596*/
    v132 = 1610612768; /*0x10050b5a1*/
    v130 = &v144; /*0x10050b5b3*/
    v131 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10050b5c1*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10050b5d6*/
                            v122,
                            &v130) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10050b7b0*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v151,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v55 = v148; /*0x10050b5ea*/
    *(_QWORD *)(v148 + 88) = v145; /*0x10050b5f1*/
    *(__m128i *)(v55 + 72) = v144; /*0x10050b607*/
    *(_QWORD *)v55 = 24; /*0x10050b60b*/
    *(_QWORD *)(v55 + 8) = v50; /*0x10050b612*/
    *(_QWORD *)(v55 + 16) = 24; /*0x10050b616*/
    *(_QWORD *)(v55 + 24) = 7; /*0x10050b61e*/
    *(_QWORD *)(v55 + 32) = v52; /*0x10050b626*/
    *(_QWORD *)(v55 + 40) = 7; /*0x10050b62a*/
    *(_QWORD *)(v55 + 48) = 33; /*0x10050b632*/
    *(_QWORD *)(v55 + 56) = v54; /*0x10050b63a*/
    *(_QWORD *)(v55 + 64) = 33; /*0x10050b63e*/
    *(_BYTE *)(v55 + 96) = 0; /*0x10050b646*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v118); /*0x10050b656*/
  }
  v138 = v118[3]; /*0x10050add5*/
  v137 = v118[2]; /*0x10050adea*/
  i64 = (__int64)v118[1]->i64; /*0x10050adf1*/
  v11 = *(_QWORD *)(a2 + 56); /*0x10050adf8*/
  codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::hc5129088cc949268( /*0x10050ae11*/
    &v144,
    v11,
    *(_QWORD *)(a2 + 64),
    v157,
    a4);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10050ae1d*/
  v15 = v12; /*0x10050ae1f*/
  if ( *(_BYTE *)(v12 + 16) == 1 ) /*0x10050ae26*/
  {
    v16 = *(_QWORD *)v12; /*0x10050ae2c*/
    v17 = *(const __m128i **)(v15 + 8); /*0x10050ae2f*/
  }
  else
  {
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10050b77d*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v11,
            v13,
            v14);
    *(_QWORD *)v15 = v16; /*0x10050b782*/
    *(_QWORD *)(v15 + 8) = v17; /*0x10050b785*/
    *(_BYTE *)(v15 + 16) = 1; /*0x10050b789*/
  }
  v18 = nullptr; /*0x10050ae37*/
  v133 = 0; /*0x10050ae3e*/
  v19 = nullptr; /*0x10050ae45*/
  v132 = 0; /*0x10050ae4c*/
  v131 = nullptr; /*0x10050ae5a*/
  v130 = (const __m128i *)&xmmword_1015FBEC0; /*0x10050ae68*/
  v134 = v16; /*0x10050ae6f*/
  v135 = v17; /*0x10050ae76*/
  *(_QWORD *)v15 = v16 + 2; /*0x10050ae81*/
  memset(&v118[1], 0, 24); /*0x10050ae92*/
  v118[0] = (const __m128i *)&xmmword_1015FBEC0; /*0x10050ae99*/
  v118[4] = (const __m128i *)(v16 + 1); /*0x10050aea0*/
  v118[5] = v17; /*0x10050aea7*/
  v139 = 0; /*0x10050aeae*/
  v141 = v137; /*0x10050aec0*/
  if ( !v138 ) /*0x10050aed1*/
    goto LABEL_74; /*0x10050aed1*/
  v20 = (__m128i *)v141; /*0x10050aee9*/
  v21 = (__m128i *)&v141[6 * (_QWORD)v138]; /*0x10050aef0*/
  v142 = v146; /*0x10050aefa*/
  v154 = v144.i64[1]; /*0x10050af0f*/
  v143 = v144.i64[0]; /*0x10050af13*/
  v155 = v144.i64[0] - 24; /*0x10050af1e*/
  v140 = 0; /*0x10050af22*/
  v22 = 0x8000000000000000LL; /*0x10050af2d*/
  v157 = v21; /*0x10050af31*/
  do /*0x10050af5b*/
  {
    if ( v20[4].i64[1] != v22 ) /*0x10050af65*/
    {
      v23 = v22; /*0x10050af67*/
      v24 = (const void *)v20[5].i64[0]; /*0x10050af6a*/
      v25 = v20[5].u64[1]; /*0x10050af6e*/
      if ( v25 ) /*0x10050af75*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v18); /*0x10050af77*/
        v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x10050af89*/
        if ( !v26 ) /*0x10050af8f*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v25); /*0x10050bd87*/
      }
      else
      {
        v26 = 1; /*0x10050af96*/
      }
      memcpy((void *)v26, v24, v25); /*0x10050afa5*/
      v122[0] = v25; /*0x10050afaa*/
      v122[1] = v26; /*0x10050afb1*/
      v122[2] = v25; /*0x10050afb8*/
      v19 = &v130; /*0x10050afbf*/
      v18 = v122; /*0x10050afc6*/
      v22 = v23; /*0x10050afd2*/
      if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(&v130, v122) ) /*0x10050afcd*/
        goto LABEL_14; /*0x10050afcd*/
      std::sys::fs::metadata::h32fa16d3052ea535(v122, v20[5].i64[0], v20[5].i64[1]); /*0x10050afec*/
      v27 = v122[0]; /*0x10050aff1*/
      v18 = (_QWORD *)v122[1]; /*0x10050aff8*/
      v19 = (const __m128i **)v122[0]; /*0x10050afff*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10050b002*/
        v122[0],
        v122[1]);
      if ( v27 ) /*0x10050b00a*/
        goto LABEL_14; /*0x10050b00a*/
      v139 = ++v140; /*0x10050b021*/
      v18 = (_QWORD *)v20[5].i64[0]; /*0x10050b028*/
      v19 = (const __m128i **)v122; /*0x10050b030*/
      codexmate_lib::core::relay::codex_thread_visibility::read_session_meta_provider_anchors::ha5c4d99d82c2263f( /*0x10050b037*/
        v122,
        (int)v18,
        v20[5].i64[1]);
      if ( LODWORD(v122[0]) == 11 ) /*0x10050b043*/
      {
        if ( v122[1] != v23 ) /*0x10050b053*/
        {
          v149 = (_QWORD *)v122[1]; /*0x10050b059*/
          __s1 = (void *)v122[2]; /*0x10050b064*/
          v28 = v122[3]; /*0x10050b068*/
          v150 = v122[4]; /*0x10050b076*/
          v159 = (void *)v122[5]; /*0x10050b081*/
          v156 = v122[6]; /*0x10050b08c*/
          if ( v142 ) /*0x10050b098*/
          {
            v19 = (const __m128i **)v147; /*0x10050b09e*/
            v29 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v147, __s1, v122[3]); /*0x10050b0b1*/
            v30 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v29 >> 57), (__m128i)0LL); /*0x10050b0c0*/
            for ( i = 0; ; i += 16 ) /*0x10050b0c5*/
            {
              v32 = v154 & v29; /*0x10050b0c7*/
              HIDWORD(_RAX) = HIDWORD(v143); /*0x10050b0cb*/
              v34 = _mm_loadu_si128((const __m128i *)(v143 + v32)); /*0x10050b0d2*/
              _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v34, v30)); /*0x10050b0e0*/
              if ( _R12D ) /*0x10050b0e8*/
                break; /*0x10050b0e8*/
LABEL_32:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v34, (__m128i)-1LL)) ) /*0x10050b16c*/
                goto LABEL_34; /*0x10050b172*/
              v29 = v32 + i + 16; /*0x10050b174*/
            }
            v120 = v30; /*0x10050b0ea*/
            v121.i64[0] = i; /*0x10050b0f2*/
            v113 = v34; /*0x10050b0f9*/
            while ( 1 ) /*0x10050b101*/
            {
              __asm { tzcnt eax, r12d } /*0x10050b101*/
              v36 = -3LL * (v154 & (v32 + _RAX)); /*0x10050b110*/
              if ( v28 == *(_QWORD *)(v155 + 8 * v36 + 16) ) /*0x10050b11d*/
              {
                v19 = (const __m128i **)__s1; /*0x10050b12b*/
                if ( !memcmp(__s1, *(const void **)(v155 + 8 * v36 + 8), v28) ) /*0x10050b132*/
                  break; /*0x10050b132*/
              }
              _RAX = (unsigned int)(_R12D - 1); /*0x10050b13f*/
              LOWORD(_RAX) = _R12D & (_R12D - 1); /*0x10050b144*/
              _R12D = _RAX; /*0x10050b148*/
              v30 = _mm_load_si128(&v120); /*0x10050b14b*/
              i = v121.i64[0]; /*0x10050b153*/
              v34 = _mm_load_si128(&v113); /*0x10050b15a*/
              if ( !(_WORD)_RAX ) /*0x10050b162*/
                goto LABEL_32; /*0x10050b162*/
            }
          }
          else
          {
LABEL_34:
            if ( v28 != 6 /*0x10050b23f*/
              || (*(_BYTE *)__s1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)__s1 - 65) < 0x1Au))) != 111
              || (*((_BYTE *)__s1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 1) - 65) < 0x1Au))) != 112
              || (*((_BYTE *)__s1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 2) - 65) < 0x1Au))) != 101
              || (*((_BYTE *)__s1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 3) - 65) < 0x1Au))) != 110
              || (*((_BYTE *)__s1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 4) - 65) < 0x1Au))) != 97
              || (*((_BYTE *)__s1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 5) - 65) < 0x1Au))) != 105 )
            {
              goto LABEL_57; /*0x10050b23f*/
            }
          }
          if ( v142 ) /*0x10050b24d*/
          {
            v19 = (const __m128i **)v147; /*0x10050b253*/
            v37 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v147, v159, v156); /*0x10050b262*/
            v38 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v37 >> 57), (__m128i)0LL); /*0x10050b276*/
            for ( j = 0; ; j += 16 ) /*0x10050b27b*/
            {
              v40 = v154 & v37; /*0x10050b27d*/
              HIDWORD(_RCX) = HIDWORD(v143); /*0x10050b281*/
              v42 = _mm_loadu_si128((const __m128i *)(v143 + v40)); /*0x10050b288*/
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v42, v38)); /*0x10050b295*/
              if ( _R15D ) /*0x10050b29d*/
                break; /*0x10050b29d*/
LABEL_48:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v42, (__m128i)-1LL)) ) /*0x10050b31d*/
                goto LABEL_50; /*0x10050b323*/
              v37 = v40 + j + 16; /*0x10050b325*/
            }
            v120 = v38; /*0x10050b29f*/
            v121 = v42; /*0x10050b2a7*/
            while ( 1 ) /*0x10050b2af*/
            {
              __asm { tzcnt ecx, r15d } /*0x10050b2af*/
              v44 = v40; /*0x10050b2b4*/
              v45 = -3LL * (v154 & (v40 + _RCX)); /*0x10050b2c1*/
              HIDWORD(_RCX) = HIDWORD(v155); /*0x10050b2c5*/
              if ( v156 == *(_QWORD *)(v155 + 8 * v45 + 16) ) /*0x10050b2d2*/
              {
                v19 = (const __m128i **)v159; /*0x10050b2e0*/
                if ( !memcmp(v159, *(const void **)(v155 + 8 * v45 + 8), v156) ) /*0x10050b2e8*/
                  goto LABEL_58; /*0x10050b2ef*/
              }
              v46 = _R15D - 1; /*0x10050b2f5*/
              LOWORD(v46) = _R15D & (_R15D - 1); /*0x10050b2f9*/
              v47 = (_WORD)v46 == 0; /*0x10050b2f9*/
              _R15D = v46; /*0x10050b2fd*/
              v40 = v44; /*0x10050b300*/
              v38 = _mm_load_si128(&v120); /*0x10050b303*/
              v42 = _mm_load_si128(&v121); /*0x10050b30b*/
              if ( v47 ) /*0x10050b313*/
                goto LABEL_48; /*0x10050b313*/
            }
          }
LABEL_50:
          if ( v156 == 6 /*0x10050b3e1*/
            && (*(_BYTE *)v159 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v159 - 65) < 0x1Au))) == 111
            && (*((_BYTE *)v159 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v159 + 1) - 65) < 0x1Au))) == 112
            && (*((_BYTE *)v159 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v159 + 2) - 65) < 0x1Au))) == 101
            && (*((_BYTE *)v159 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v159 + 3) - 65) < 0x1Au))) == 110
            && (*((_BYTE *)v159 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v159 + 4) - 65) < 0x1Au))) == 97
            && (*((_BYTE *)v159 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v159 + 5) - 65) < 0x1Au))) == 105 )
          {
LABEL_58:
            if ( v150 ) /*0x10050b409*/
            {
              v19 = (const __m128i **)v159; /*0x10050b410*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v150, 1); /*0x10050b414*/
            }
            v18 = v149; /*0x10050b419*/
            v22 = v23; /*0x10050b420*/
            if ( v149 ) /*0x10050b423*/
            {
              v19 = (const __m128i **)__s1; /*0x10050b42e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v149, 1); /*0x10050b432*/
            }
            goto LABEL_14; /*0x10050b437*/
          }
LABEL_57:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v151, &v20[1].u64[1]); /*0x10050b3e3*/
          v19 = v118; /*0x10050b3f3*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v118, &v151); /*0x10050b3fd*/
          goto LABEL_58; /*0x10050b3fd*/
        }
      }
      else
      {
        v19 = (const __m128i **)v122; /*0x10050af37*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v122); /*0x10050af3e*/
      }
LABEL_14:
      v21 = v157; /*0x10050af50*/
    }
    v20 += 6; /*0x10050af54*/
  }
  while ( v20 != v21 ); /*0x10050af5b*/
  if ( v118[3] ) /*0x10050b665*/
  {
    si128 = _mm_load_si128(v118[0]); /*0x10050b67e*/
    v114[0] = v118[0]; /*0x10050b688*/
    v114[1] = v118[0] + 1; /*0x10050b693*/
    v114[2] = (char *)v118[0]->i64 + (unsigned __int64)v118[1] + 1; /*0x10050b69a*/
    v115 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10050b6a1*/
    v116 = v118[3]; /*0x10050b6a8*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h44715f0573b2120a( /*0x10050b6bd*/
      &v124,
      v114);
    v57 = v125; /*0x10050b6c2*/
    v58 = v126; /*0x10050b6c9*/
    if ( v126 >= 2 ) /*0x10050b6de*/
    {
      if ( v126 >= 0x15 ) /*0x10050b7c1*/
      {
        core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v125, v126, &v151, 0xAAAAAAAAAAAAAAABLL); /*0x10050bdeb*/
        v59 = v124; /*0x10050bdf0*/
        v60 = v57 + 24 * v58; /*0x10050bdfb*/
      }
      else
      {
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h83ca487eb4badd76(v125, v126, 1, &v151); /*0x10050b7d6*/
        v59 = v124; /*0x10050b7db*/
        v60 = v57 + 24 * v58; /*0x10050b7e6*/
        if ( v58 - 2 < 3 ) /*0x10050b7f5*/
        {
LABEL_73:
          v61 = v60; /*0x10050b6ff*/
          goto LABEL_88; /*0x10050b702*/
        }
      }
      v61 = v57 + 120; /*0x10050b7fb*/
      goto LABEL_81; /*0x10050b7fb*/
    }
    v59 = v124; /*0x10050b6e4*/
    v60 = v125 + 24 * v126; /*0x10050b6ef*/
    v61 = v125; /*0x10050b6f3*/
    if ( v126 ) /*0x10050b6f9*/
      goto LABEL_73; /*0x10050b6f9*/
LABEL_81:
    if ( v60 == v61 ) /*0x10050b80b*/
    {
      v60 = v61; /*0x10050b850*/
    }
    else
    {
      v67 = (v60 - v61) / 0x18; /*0x10050b810*/
      v68 = (_QWORD *)(v61 + 8); /*0x10050b814*/
      do /*0x10050b827*/
      {
        v69 = *(v68 - 1); /*0x10050b829*/
        if ( v69 ) /*0x10050b830*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v68, v69, 1); /*0x10050b83a*/
        v68 += 3; /*0x10050b820*/
        --v67; /*0x10050b824*/
      }
      while ( v67 ); /*0x10050b827*/
      v60 = v61; /*0x10050b841*/
    }
LABEL_88:
    v70 = 0xAAAAAAAAAAAAAAABLL * ((v60 - v57) >> 3); /*0x10050b853*/
    v151 = v59; /*0x10050b85e*/
    v152 = (__int64 (__fastcall *)())v57; /*0x10050b862*/
    v153 = v70; /*0x10050b866*/
    v71 = v122; /*0x10050b871*/
    v72 = v57; /*0x10050b87e*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v122, v57, v70, &unk_1015FC148, 3); /*0x10050b884*/
    v129 = v122[2]; /*0x10050b890*/
    v128 = v122[1]; /*0x10050b8a5*/
    v127 = v122[0]; /*0x10050b8ac*/
    if ( v61 != v57 ) /*0x10050b8b6*/
    {
      v73 = (_QWORD *)(v57 + 8); /*0x10050b8b8*/
      do /*0x10050b8c7*/
      {
        v72 = *(v73 - 1); /*0x10050b8c9*/
        if ( v72 ) /*0x10050b8d1*/
        {
          v71 = (_QWORD *)*v73; /*0x10050b8d3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v73, v72, 1); /*0x10050b8dc*/
        }
        v73 += 3; /*0x10050b8c0*/
        --v70; /*0x10050b8c4*/
      }
      while ( v70 ); /*0x10050b8c7*/
    }
    if ( v59 ) /*0x10050b8e6*/
    {
      v72 = 24LL * (_QWORD)v59; /*0x10050b8ec*/
      v71 = (_QWORD *)v57; /*0x10050b8f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24LL * (_QWORD)v59, 8); /*0x10050b8f8*/
    }
    v119 = v118[3]; /*0x10050b904*/
    v74 = 0; /*0x10050b90b*/
    v75 = v118[3] < (const __m128i *)0xB; /*0x10050b912*/
    v76 = "error"; /*0x10050b91d*/
    if ( v118[3] < (const __m128i *)0xB ) /*0x10050b924*/
      v76 = "warning"; /*0x10050b924*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v72); /*0x10050b928*/
    v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10050b937*/
    if ( !v77 ) /*0x10050b93f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x10050bdcb*/
    v78 = v77; /*0x10050b945*/
    LOBYTE(v74) = v75; /*0x10050b948*/
    v79 = 2 * v74 + 5; /*0x10050b94b*/
    qmemcpy(v77, "rollout_orphan_providers", 24); /*0x10050b976*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x10050b979*/
    v80 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v79, 1); /*0x10050b986*/
    if ( !v80 ) /*0x10050b98e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2 * v74 + 5); /*0x10050bdda*/
    v81 = v80; /*0x10050b994*/
    memcpy(v80, v76, 2 * v74 + 5); /*0x10050b9a0*/
    v151 = &v119; /*0x10050b9ac*/
    v152 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050b9b7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, &unk_1017C07A1, &v151); /*0x10050b9cd*/
    v157 = (__m128i *)v122[0]; /*0x10050b9d9*/
    v82 = v122[1]; /*0x10050b9dd*/
    v83 = v122[2]; /*0x10050b9e4*/
    v122[0] = &v127; /*0x10050b9f2*/
    v122[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050ba00*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_1017C07C9, v122); /*0x10050ba1c*/
    v84 = v148; /*0x10050ba28*/
    *(_QWORD *)(v148 + 88) = v117[2]; /*0x10050ba2f*/
    _RAX = v117[0]; /*0x10050ba33*/
    *(_QWORD *)(v84 + 80) = v117[1]; /*0x10050ba41*/
    *(_QWORD *)(v84 + 72) = _RAX; /*0x10050ba45*/
    *(_QWORD *)v84 = 24; /*0x10050ba49*/
    *(_QWORD *)(v84 + 8) = v78; /*0x10050ba50*/
    *(_QWORD *)(v84 + 16) = 24; /*0x10050ba54*/
    *(_QWORD *)(v84 + 24) = v79; /*0x10050ba5c*/
    *(_QWORD *)(v84 + 32) = v81; /*0x10050ba60*/
    *(_QWORD *)(v84 + 40) = v79; /*0x10050ba64*/
    HIDWORD(_RAX) = HIDWORD(v157); /*0x10050ba68*/
    *(_QWORD *)(v84 + 48) = v157; /*0x10050ba6c*/
    *(_QWORD *)(v84 + 56) = v82; /*0x10050ba70*/
    *(_QWORD *)(v84 + 64) = v83; /*0x10050ba74*/
    *(_BYTE *)(v84 + 96) = 1; /*0x10050ba78*/
    v66 = v127; /*0x10050ba7c*/
    if ( v127 ) /*0x10050ba86*/
    {
      v65 = v128; /*0x10050ba88*/
LABEL_101:
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v66, 1) >> 32; /*0x10050ba94*/
    }
    goto LABEL_102; /*0x10050ba94*/
  }
LABEL_74:
  v151 = (const __m128i **)&v139; /*0x10050b707*/
  v152 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050b719*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, &unk_1017C0775, &v151); /*0x10050b72f*/
  v62 = v122[0]; /*0x10050b734*/
  v63 = v122[1]; /*0x10050b73b*/
  HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050b75f*/
                                      v148,
                                      &anon_92869709a5e99ce1936aa4e326b6c562_617,
                                      24,
                                      v122[1],
                                      v122[2]) >> 32;
  if ( v62 ) /*0x10050b767*/
  {
    v65 = v63; /*0x10050b772*/
    v66 = v62; /*0x10050b775*/
    goto LABEL_101; /*0x10050b778*/
  }
LABEL_102:
  v85 = v118[1]; /*0x10050ba99*/
  if ( v118[1] ) /*0x10050baa3*/
  {
    v86 = v118[3]; /*0x10050baa9*/
    if ( v118[3] ) /*0x10050bab3*/
    {
      v87 = v118[0]; /*0x10050bab9*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v118[0])); /*0x10050baca*/
      v89 = v118[0] + 1; /*0x10050bacd*/
      do /*0x10050baf0*/
      {
        if ( !(_WORD)_R13D ) /*0x10050baf6*/
        {
          do /*0x10050bb1d*/
          {
            v90 = _mm_movemask_epi8(_mm_load_si128(v89)); /*0x10050bb06*/
            v87 -= 24; /*0x10050bb0b*/
            ++v89; /*0x10050bb12*/
          }
          while ( v90 == 0xFFFF ); /*0x10050bb1d*/
          _R13D = ~v90; /*0x10050bb1f*/
        }
        __asm { tzcnt eax, r13d } /*0x10050bb22*/
        v91 = -3LL * _RAX; /*0x10050bb2a*/
        v92 = *((_QWORD *)&v87[-1] + v91 - 1); /*0x10050bb2e*/
        if ( v92 ) /*0x10050bb36*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87[-1].i64[v91], v92, 1); /*0x10050bb45*/
        v86 = (const __m128i *)((char *)v86 - 1); /*0x10050bae0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10050bae7*/
        _R13D &= _R13D - 1; /*0x10050baea*/
      }
      while ( v86 ); /*0x10050baf0*/
    }
    _RAX = (24LL * (_QWORD)v85 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10050bb58*/
    v93 = (__int64)v85[1].i64 + _RAX + 1; /*0x10050bb5f*/
    if ( v93 ) /*0x10050bb63*/
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v118[0] - _RAX, v93, 16) >> 32; /*0x10050bb77*/
  }
  v94 = v131; /*0x10050bb7c*/
  if ( v131 ) /*0x10050bb86*/
  {
    v95 = v133; /*0x10050bb8c*/
    if ( v133 ) /*0x10050bb96*/
    {
      v96 = v130; /*0x10050bb9c*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v130)); /*0x10050bbad*/
      v98 = v130 + 1; /*0x10050bbb0*/
      do /*0x10050bbd0*/
      {
        if ( !(_WORD)_R13D ) /*0x10050bbd6*/
        {
          do /*0x10050bbfd*/
          {
            v99 = _mm_movemask_epi8(_mm_load_si128(v98)); /*0x10050bbe6*/
            v96 -= 24; /*0x10050bbeb*/
            ++v98; /*0x10050bbf2*/
          }
          while ( v99 == 0xFFFF ); /*0x10050bbfd*/
          _R13D = ~v99; /*0x10050bbff*/
        }
        __asm { tzcnt eax, r13d } /*0x10050bc02*/
        v100 = -3LL * _RAX; /*0x10050bc0a*/
        v101 = *((_QWORD *)&v96[-1] + v100 - 1); /*0x10050bc0e*/
        if ( v101 ) /*0x10050bc16*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[-1].i64[v100], v101, 1); /*0x10050bc25*/
        --v95; /*0x10050bbc0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10050bbc7*/
        _R13D &= _R13D - 1; /*0x10050bbca*/
      }
      while ( v95 ); /*0x10050bbd0*/
    }
    _RAX = (24LL * (_QWORD)v94 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10050bc38*/
    v102 = (__int64)v94 + _RAX + 17; /*0x10050bc3f*/
    if ( v102 ) /*0x10050bc43*/
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v130 - _RAX, v102, 16) >> 32; /*0x10050bc57*/
  }
  v103 = v144.i64[1]; /*0x10050bc5c*/
  if ( v144.i64[1] ) /*0x10050bc66*/
  {
    v104 = v146; /*0x10050bc6c*/
    if ( v146 ) /*0x10050bc76*/
    {
      v105 = v144.i64[0]; /*0x10050bc7c*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v144.i64[0])); /*0x10050bc8d*/
      v107 = (const __m128i *)(v144.i64[0] + 16); /*0x10050bc90*/
      do /*0x10050bcb0*/
      {
        if ( !(_WORD)_R13D ) /*0x10050bcb6*/
        {
          do /*0x10050bcdd*/
          {
            v108 = _mm_movemask_epi8(_mm_load_si128(v107)); /*0x10050bcc6*/
            v105 -= 384; /*0x10050bccb*/
            ++v107; /*0x10050bcd2*/
          }
          while ( v108 == 0xFFFF ); /*0x10050bcdd*/
          _R13D = ~v108; /*0x10050bcdf*/
        }
        __asm { tzcnt eax, r13d } /*0x10050bce2*/
        v109 = -3LL * _RAX; /*0x10050bcea*/
        v110 = *(_QWORD *)(v105 + 8 * v109 - 24); /*0x10050bcee*/
        if ( v110 ) /*0x10050bcf6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v105 + 8 * v109 - 16), v110, 1); /*0x10050bd05*/
        --v104; /*0x10050bca0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10050bca7*/
        _R13D &= _R13D - 1; /*0x10050bcaa*/
      }
      while ( v104 ); /*0x10050bcb0*/
    }
    v111 = (24 * v103 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10050bd18*/
    v112 = v111 + v103 + 17; /*0x10050bd1f*/
    if ( v112 ) /*0x10050bd23*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144.i64[0] - v111, v112, 16); /*0x10050bd37*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&i64); /*0x10050bd43*/
  result = i64; /*0x10050bd48*/
  if ( i64 ) /*0x10050bd52*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, 96 * i64, 8); /*0x10050bd68*/
  return result; /*0x10050b47d*/
}