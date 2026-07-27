// __ZN13codexmate_lib4core5relay16codex_diagnostic28fix_rollout_orphan_providers @ 0x1005073a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_rollout_orphan_providers::hd1231c3d976f3847(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  const __m128i **v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 result; // rax
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdx
  const __m128i **v24; // rsi
  const __m128i **v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // rbx
  const void *v31; // r14
  size_t v32; // r13
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // r15
  void *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  __int64 *v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // rsi
  _WORD *v47; // rcx
  __int64 *v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // r15
  void *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // r15
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdi
  _QWORD *v63; // r14
  __int64 v64; // rbx
  __int64 v65; // r15
  const __m128i *v67; // r12
  int v68; // r13d
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // r14
  __int64 v72; // r14
  __int64 v73; // r14
  __int64 v74; // rbx
  const __m128i *v75; // r15
  const __m128i *v77; // r12
  int v78; // r13d
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r14
  __int64 v84; // rbx
  __int64 v85; // r14
  const __m128i *v86; // r15
  const __m128i *v88; // r12
  int v89; // r13d
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 *v94; // r14
  const __m128i *v95; // r15
  const __m128i *v97; // r12
  int v98; // r13d
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  _QWORD *v102; // r15
  void *v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // r15
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rdi
  _QWORD *v113; // r14
  __int64 v114; // rbx
  __int64 v115; // r15
  const __m128i *v117; // r12
  int v118; // r13d
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // r14
  __int64 v122; // r14
  __int64 v123; // r14
  __int64 v124; // rbx
  const __m128i *v125; // r15
  const __m128i *v127; // r12
  int v128; // r13d
  __int64 v129; // rax
  __int64 v130; // rsi
  unsigned __int64 v131; // rax
  __int64 v132; // r14
  __int64 v133; // r14
  __int64 v134; // rbx
  __int64 v135; // r14
  const __m128i *v136; // r15
  const __m128i *v138; // r12
  int v139; // r13d
  __int64 v140; // rax
  __int64 v141; // rsi
  __int64 v142; // rbx
  __int64 *v143; // r14
  const __m128i *v144; // r15
  const __m128i *v146; // r12
  int v147; // r13d
  __int64 v148; // rax
  __int64 v149; // rsi
  __int64 v150; // rbx
  _QWORD v151[3]; // [rsp+0h] [rbp-260h] BYREF
  _QWORD v152[3]; // [rsp+18h] [rbp-248h] BYREF
  const __m128i *v153; // [rsp+30h] [rbp-230h] BYREF
  __int64 v154; // [rsp+38h] [rbp-228h]
  __int64 v155; // [rsp+48h] [rbp-218h]
  __int64 v156; // [rsp+60h] [rbp-200h] BYREF
  unsigned __int64 v157; // [rsp+68h] [rbp-1F8h]
  __int64 v158; // [rsp+70h] [rbp-1F0h]
  const __m128i *v159; // [rsp+78h] [rbp-1E8h] BYREF
  __int64 v160; // [rsp+80h] [rbp-1E0h]
  __int64 v161; // [rsp+88h] [rbp-1D8h]
  __int64 v162; // [rsp+90h] [rbp-1D0h]
  __int64 v163; // [rsp+98h] [rbp-1C8h]
  __int64 v164; // [rsp+A0h] [rbp-1C0h]
  const __m128i *v165; // [rsp+A8h] [rbp-1B8h] BYREF
  __int64 v166; // [rsp+B0h] [rbp-1B0h]
  __int64 v167; // [rsp+B8h] [rbp-1A8h]
  __int64 *v168; // [rsp+C0h] [rbp-1A0h]
  _WORD *v169; // [rsp+C8h] [rbp-198h]
  __int64 v170; // [rsp+D0h] [rbp-190h]
  __int64 v171; // [rsp+D8h] [rbp-188h]
  __int64 *v172; // [rsp+E0h] [rbp-180h]
  __int64 v173; // [rsp+E8h] [rbp-178h] BYREF
  __int64 v174; // [rsp+F0h] [rbp-170h]
  __int64 v175; // [rsp+F8h] [rbp-168h]
  __int64 v176; // [rsp+100h] [rbp-160h] BYREF
  __int64 v177; // [rsp+108h] [rbp-158h]
  __int64 v178; // [rsp+110h] [rbp-150h]
  __int64 *v179; // [rsp+118h] [rbp-148h]
  _WORD *v180; // [rsp+120h] [rbp-140h]
  __int64 i; // [rsp+128h] [rbp-138h]
  __int64 v182; // [rsp+130h] [rbp-130h] BYREF
  __int64 v183; // [rsp+138h] [rbp-128h]
  __int64 v184; // [rsp+140h] [rbp-120h]
  __int64 v185; // [rsp+148h] [rbp-118h]
  __int64 v186; // [rsp+150h] [rbp-110h]
  __int64 v187; // [rsp+158h] [rbp-108h]
  unsigned int v188; // [rsp+19Ch] [rbp-C4h]
  __int64 v189; // [rsp+1A0h] [rbp-C0h] BYREF
  _QWORD *v190; // [rsp+1A8h] [rbp-B8h]
  __int64 v191; // [rsp+1B0h] [rbp-B0h]
  __int64 v192; // [rsp+1B8h] [rbp-A8h]
  __int64 v193; // [rsp+1C0h] [rbp-A0h]
  __int64 v194; // [rsp+1C8h] [rbp-98h]
  __int64 v195; // [rsp+1D0h] [rbp-90h]
  __int64 v196; // [rsp+1D8h] [rbp-88h]
  __int64 v197; // [rsp+1E0h] [rbp-80h]
  __int64 v198; // [rsp+1E8h] [rbp-78h]
  __int64 v199; // [rsp+1F0h] [rbp-70h]
  __int64 v200; // [rsp+1F8h] [rbp-68h]
  __int64 *v201; // [rsp+200h] [rbp-60h] BYREF
  __int64 v202; // [rsp+208h] [rbp-58h]
  __int64 v203; // [rsp+210h] [rbp-50h]
  __int64 v204; // [rsp+218h] [rbp-48h]
  __int64 v205; // [rsp+220h] [rbp-40h]
  __int64 v206; // [rsp+228h] [rbp-38h]
  __int64 v207; // [rsp+230h] [rbp-30h]

  v207 = a3; /*0x1005073b4*/
  v4 = (const __m128i **)&v176; /*0x1005073bb*/
  v171 = a2; /*0x1005073c2*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(&v176); /*0x1005073c9*/
  v5 = v178; /*0x1005073ce*/
  if ( !v178 ) /*0x1005073d8*/
  {
    if ( v176 ) /*0x100507809*/
    {
      v4 = (const __m128i **)v177; /*0x10050780b*/
      a2 = 24 * v176; /*0x100507816*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v177, 24 * v176, 8); /*0x10050781f*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, a2); /*0x100507824*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100507833*/
    if ( !v36 ) /*0x10050783b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050861d*/
    v37 = (_QWORD *)v36; /*0x100507841*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100507844*/
    v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100507853*/
    if ( !v38 ) /*0x10050785b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1005086ab*/
    qmemcpy(v38, "rollout_orphan_providers", 24); /*0x100507887*/
    *v37 = 24; /*0x10050788a*/
    v37[1] = v38; /*0x100507891*/
    v37[2] = 24; /*0x100507895*/
    v189 = 1; /*0x10050789d*/
    v190 = v37; /*0x1005078a8*/
    v191 = 1; /*0x1005078af*/
    v201 = nullptr; /*0x1005078ba*/
    v202 = 8; /*0x1005078c2*/
    v203 = 0; /*0x1005078ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x1005078d2*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005078e1*/
    if ( !v39 ) /*0x1005078e9*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050862c*/
    v40 = (_QWORD *)v39; /*0x1005078ef*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005078f2*/
    v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100507901*/
    if ( !v41 ) /*0x100507909*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1005086bc*/
    *(_QWORD *)(v41 + 24) = 0xA4E5AEBFE4809CE9LL; /*0x100507919*/
    *(_QWORD *)(v41 + 16) = 0xA097E68CBCEFA89CLL; /*0x100507927*/
    *(_QWORD *)(v41 + 8) = 0xE598ADE58DB8E493LL; /*0x100507935*/
    *(_QWORD *)v41 = 0xBAE5AE8DE6B095E6LL; /*0x100507943*/
    *(_BYTE *)(v41 + 32) = -115; /*0x100507946*/
    *v40 = 33; /*0x10050794a*/
    v40[1] = v41; /*0x100507951*/
    v40[2] = 33; /*0x100507955*/
    result = v191; /*0x10050795d*/
    v178 = v191; /*0x100507964*/
    v42 = v189; /*0x10050796b*/
    v43 = v190; /*0x100507972*/
    v177 = (__int64)v190; /*0x100507979*/
    v176 = v189; /*0x100507980*/
    v44 = v201; /*0x100507987*/
    v45 = v202; /*0x10050798b*/
    v179 = v201; /*0x10050798f*/
    v180 = (_WORD *)v202; /*0x100507996*/
    i = v203; /*0x1005079a1*/
    a1[6] = v203; /*0x1005079a8*/
    a1[5] = v45; /*0x1005079ac*/
    a1[4] = (__int64)v44; /*0x1005079b0*/
    a1[3] = result; /*0x1005079b4*/
    a1[2] = (__int64)v43; /*0x1005079b8*/
    a1[1] = v42; /*0x1005079bc*/
    a1[7] = 1; /*0x1005079c0*/
    a1[8] = (__int64)v40; /*0x1005079c8*/
    a1[9] = 1; /*0x1005079cc*/
    *a1 = 11; /*0x1005079d4*/
    return result; /*0x1005079db*/
  }
  v172 = a1; /*0x1005073de*/
  v6 = v177; /*0x1005073e5*/
  v7 = (_QWORD *)(v177 + 8); /*0x1005073ec*/
  do /*0x100507407*/
  {
    v8 = *(v7 - 1); /*0x100507409*/
    if ( v8 ) /*0x100507410*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v7, v8, 1); /*0x10050741a*/
    v7 += 3; /*0x100507400*/
    --v5; /*0x100507404*/
  }
  while ( v5 ); /*0x100507407*/
  if ( v176 ) /*0x10050742b*/
  {
    v8 = 24 * v176; /*0x100507431*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v176, 8); /*0x10050743d*/
  }
  v9 = *(_QWORD *)(v207 + 8); /*0x100507446*/
  v10 = *(_QWORD *)(v207 + 16); /*0x10050744a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100507455*/
  v14 = v11; /*0x100507457*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x10050745e*/
  {
    v15 = *(_QWORD *)v11; /*0x100507464*/
    v16 = *(_QWORD *)(v14 + 8); /*0x100507467*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1005085fe*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v12,
            v13);
    *(_QWORD *)v14 = v15; /*0x100508603*/
    *(_QWORD *)(v14 + 8) = v16; /*0x100508606*/
    *(_BYTE *)(v14 + 16) = 1; /*0x10050860a*/
  }
  *(_QWORD *)v14 = v15 + 1; /*0x10050746f*/
  v179 = nullptr; /*0x100507479*/
  v178 = 0; /*0x100507487*/
  v177 = 0; /*0x100507495*/
  v176 = (__int64)&xmmword_1015FBEC0; /*0x1005074a3*/
  v180 = (_WORD *)v15; /*0x1005074aa*/
  for ( i = v16; v10; --v10 ) /*0x1005074bb*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v201, v9); /*0x1005074d6*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v176, &v201); /*0x1005074e1*/
    v9 += 232; /*0x1005074e6*/
  }
  v170 = i; /*0x1005074f9*/
  v169 = v180; /*0x100507507*/
  v168 = v179; /*0x100507515*/
  v167 = v178; /*0x100507523*/
  v166 = v177; /*0x100507538*/
  v165 = (const __m128i *)v176; /*0x10050753f*/
  v17 = v171; /*0x100507546*/
  v18 = *(unsigned __int8 *)(v207 + 292); /*0x100507559*/
  codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::hc5129088cc949268( /*0x100507572*/
    &v153,
    *(_QWORD *)(v171 + 56),
    *(_QWORD *)(v171 + 64),
    &v165);
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(&v176, v17); /*0x100507581*/
  result = v176; /*0x100507586*/
  v201 = (__int64 *)v177; /*0x100507594*/
  v202 = v178; /*0x10050759f*/
  v203 = (__int64)v179; /*0x1005075aa*/
  if ( v176 != 11 ) /*0x1005075b2*/
  {
    v46 = v172; /*0x1005079e7*/
    v172[11] = v187; /*0x1005079ee*/
    v46[10] = v186; /*0x1005079f9*/
    v46[9] = v185; /*0x100507a04*/
    v46[8] = v184; /*0x100507a0f*/
    v46[7] = v183; /*0x100507a1a*/
    v46[6] = v182; /*0x100507a25*/
    v47 = v180; /*0x100507a29*/
    v46[5] = i; /*0x100507a37*/
    v46[4] = (__int64)v47; /*0x100507a3b*/
    v46[3] = v203; /*0x100507a43*/
    v48 = v201; /*0x100507a47*/
    v46[2] = v202; /*0x100507a4f*/
    v46[1] = (__int64)v48; /*0x100507a53*/
    *v46 = result; /*0x100507a57*/
    goto LABEL_75; /*0x100507a5a*/
  }
  v173 = (__int64)v201; /*0x1005075c0*/
  v174 = v202; /*0x1005075c7*/
  v175 = v203; /*0x1005075d2*/
  v21 = *(_BYTE *)(v14 + 16) == 1; /*0x1005075d9*/
  v188 = v18; /*0x1005075dd*/
  if ( v21 ) /*0x1005075e4*/
  {
    v22 = *(_QWORD *)v14; /*0x1005075ea*/
    v23 = *(_QWORD *)(v14 + 8); /*0x1005075ed*/
  }
  else
  {
    v22 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&v176, v17, v19, v202); /*0x100508636*/
    *(_QWORD *)v14 = v22; /*0x10050863b*/
    *(_QWORD *)(v14 + 8) = v23; /*0x10050863e*/
    *(_BYTE *)(v14 + 16) = 1; /*0x100508642*/
  }
  v24 = nullptr; /*0x1005075f5*/
  v162 = 0; /*0x1005075fc*/
  v25 = nullptr; /*0x100507603*/
  v161 = 0; /*0x10050760a*/
  v160 = 0; /*0x100507618*/
  v159 = (const __m128i *)&xmmword_1015FBEC0; /*0x100507626*/
  v163 = v22; /*0x10050762d*/
  v164 = v23; /*0x100507634*/
  *(_QWORD *)v14 = v22 + 2; /*0x10050763f*/
  v192 = 0; /*0x100507642*/
  v191 = 0; /*0x100507649*/
  v190 = nullptr; /*0x100507650*/
  v189 = (__int64)&xmmword_1015FBEC0; /*0x100507657*/
  v193 = v22 + 1; /*0x10050765e*/
  v194 = v23; /*0x100507665*/
  v26 = v174; /*0x10050766c*/
  v207 = v174; /*0x10050767d*/
  if ( v175 ) /*0x100507681*/
  {
    v27 = 96 * v175; /*0x10050768b*/
    v158 = v174 + 24; /*0x100507693*/
    v28 = 0; /*0x10050769a*/
    v29 = 0x8000000000000000LL; /*0x1005076a7*/
    v157 = 0x8000000000000000LL; /*0x1005076ab*/
    do /*0x1005076c7*/
    {
      if ( *(_QWORD *)(v26 + v28 + 72) != v29 ) /*0x1005076d2*/
      {
        v30 = v27; /*0x1005076d4*/
        v31 = *(const void **)(v26 + v28 + 80); /*0x1005076d7*/
        v32 = *(_QWORD *)(v26 + v28 + 88); /*0x1005076dc*/
        if ( v32 ) /*0x1005076e4*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v24); /*0x1005076e6*/
          v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1); /*0x1005076f8*/
          if ( !v33 ) /*0x1005076fe*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v32); /*0x10050869a*/
        }
        else
        {
          v33 = 1; /*0x100507705*/
        }
        memcpy((void *)v33, v31, v32); /*0x100507714*/
        v176 = v32; /*0x100507719*/
        v177 = v33; /*0x100507720*/
        v178 = v32; /*0x100507727*/
        v25 = &v159; /*0x10050772e*/
        v24 = (const __m128i **)&v176; /*0x100507735*/
        v34 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(&v159, &v176); /*0x10050773c*/
        v26 = v207; /*0x100507741*/
        v27 = v30; /*0x100507745*/
        v29 = v157; /*0x100507748*/
        if ( !v34 ) /*0x100507751*/
        {
          std::sys::fs::metadata::h32fa16d3052ea535(&v176, *(_QWORD *)(v207 + v28 + 80), *(_QWORD *)(v207 + v28 + 88)); /*0x100507768*/
          v35 = v176; /*0x10050776d*/
          v24 = (const __m128i **)v177; /*0x100507774*/
          v25 = (const __m128i **)v176; /*0x10050777b*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10050777e*/
            v176,
            v177);
          if ( !v35 ) /*0x100507786*/
          {
            v24 = *(const __m128i ***)(v26 + v28 + 80); /*0x10050778c*/
            v25 = (const __m128i **)&v176; /*0x10050779c*/
            codexmate_lib::core::relay::codex_thread_visibility::rewrite_session_meta_provider_anchors_where::hed9cdf53a64b205b( /*0x1005077b1*/
              &v176,
              (__int64)v24,
              *(_QWORD *)(v26 + v28 + 88),
              (__int64)"openaicodex_router_catalog.jsonmodels_cache.json",
              6,
              (__int64 *)&v153);
            if ( (_DWORD)v176 == 11 ) /*0x1005077bd*/
            {
              if ( (_BYTE)v177 ) /*0x1005077ca*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1005077e2*/
                  &v176,
                  v158 + v28);
                v25 = (const __m128i **)&v189; /*0x1005077e7*/
                v24 = (const __m128i **)&v176; /*0x1005077ee*/
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v189, &v176); /*0x1005077f5*/
              }
            }
            else
            {
              v25 = (const __m128i **)&v176; /*0x1005076b4*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v176); /*0x1005076bb*/
            }
          }
        }
      }
      v28 += 96; /*0x1005076c0*/
    }
    while ( v27 != v28 ); /*0x1005076c7*/
  }
  v49 = v171; /*0x100507a6d*/
  codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers::h0fad5f388bab55aa( /*0x100507a7a*/
    &v176,
    v171,
    &v165,
    v188);
  v50 = v172; /*0x100507a87*/
  if ( i != 2 || *v180 != 27503 ) /*0x100507a9c*/
  {
    v198 = 0; /*0x100507aa2*/
    v199 = 8; /*0x100507aaa*/
    v200 = 0; /*0x100507ab2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v176, v49); /*0x100507aba*/
    v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100507ac9*/
    if ( !v51 ) /*0x100507ad1*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100508655*/
    v52 = (_QWORD *)v51; /*0x100507ad7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100507ada*/
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100507ae9*/
    if ( !v53 ) /*0x100507af1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1005086cd*/
    qmemcpy(v53, "rollout_orphan_providers", 24); /*0x100507b1d*/
    *v52 = 24; /*0x100507b20*/
    v52[1] = v53; /*0x100507b27*/
    v52[2] = 24; /*0x100507b2b*/
    v195 = 1; /*0x100507b33*/
    v196 = (__int64)v52; /*0x100507b3e*/
    v197 = 1; /*0x100507b45*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x100507b4d*/
    v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100507b5c*/
    if ( !v54 ) /*0x100507b64*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100508669*/
    v55 = (_QWORD *)v54; /*0x100507b6a*/
    v201 = &v182; /*0x100507b74*/
    v202 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100507b7f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v152, &unk_1017C053A, &v201); /*0x100507b95*/
    v55[2] = v152[2]; /*0x100507ba1*/
    v56 = v152[0]; /*0x100507ba5*/
    v55[1] = v152[1]; /*0x100507bb3*/
    *v55 = v56; /*0x100507bb7*/
    v57 = v198; /*0x100507bba*/
    v58 = v199; /*0x100507bbe*/
    v201 = (__int64 *)v198; /*0x100507bc2*/
    v202 = v199; /*0x100507bc6*/
    v59 = v200; /*0x100507bca*/
    v203 = v200; /*0x100507bce*/
    v60 = v195; /*0x100507bd2*/
    v61 = v196; /*0x100507bd9*/
    v204 = v195; /*0x100507be0*/
    v205 = v196; /*0x100507be4*/
    v206 = v197; /*0x100507bec*/
    v50[6] = v197; /*0x100507bf0*/
    v50[5] = v61; /*0x100507bf4*/
    v50[4] = v60; /*0x100507bf8*/
    v50[3] = v59; /*0x100507bfc*/
    v50[2] = v58; /*0x100507c00*/
    v50[1] = v57; /*0x100507c04*/
    v50[7] = 1; /*0x100507c08*/
    v50[8] = (__int64)v55; /*0x100507c10*/
    v50[9] = 1; /*0x100507c14*/
    *v50 = 11; /*0x100507c1c*/
    if ( v176 ) /*0x100507c2d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v177, v176, 1); /*0x100507c3b*/
    if ( v179 ) /*0x100507c4a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v179, 1); /*0x100507c58*/
    if ( v182 ) /*0x100507c67*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183, v182, 1); /*0x100507c75*/
    HIDWORD(_RAX) = 0x80000000; /*0x100507c8b*/
    if ( v185 != 0x8000000000000000LL && v185 ) /*0x100507c97*/
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, v185, 1) >> 32; /*0x100507ca5*/
    v63 = v190; /*0x100507caa*/
    if ( v190 ) /*0x100507cb4*/
    {
      v64 = v192; /*0x100507cba*/
      if ( v192 ) /*0x100507cc4*/
      {
        v65 = v189; /*0x100507cca*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v189)); /*0x100507cdb*/
        v67 = (const __m128i *)(v189 + 16); /*0x100507cde*/
        do /*0x100507d00*/
        {
          if ( !(_WORD)_R13D ) /*0x100507d06*/
          {
            do /*0x100507d2d*/
            {
              v68 = _mm_movemask_epi8(_mm_load_si128(v67)); /*0x100507d16*/
              v65 -= 384; /*0x100507d1b*/
              ++v67; /*0x100507d22*/
            }
            while ( v68 == 0xFFFF ); /*0x100507d2d*/
            _R13D = ~v68; /*0x100507d2f*/
          }
          __asm { tzcnt eax, r13d } /*0x100507d32*/
          v69 = -3LL * _RAX; /*0x100507d3a*/
          v70 = *(_QWORD *)(v65 + 8 * v69 - 24); /*0x100507d3e*/
          if ( v70 ) /*0x100507d46*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v65 + 8 * v69 - 16), v70, 1); /*0x100507d55*/
          --v64; /*0x100507cf0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100507cf7*/
          _R13D &= _R13D - 1; /*0x100507cfa*/
        }
        while ( v64 ); /*0x100507d00*/
      }
      _RAX = (24LL * (_QWORD)v63 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100507d68*/
      v71 = (__int64)v63 + _RAX; /*0x100507d6c*/
      v21 = v71 == -17; /*0x100507d6f*/
      v72 = v71 + 17; /*0x100507d6f*/
      v26 = v207; /*0x100507d73*/
      if ( !v21 ) /*0x100507d77*/
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189 - _RAX, v72, 16) >> 32; /*0x100507d8b*/
    }
    v73 = v160; /*0x100507d90*/
    if ( v160 ) /*0x100507d9a*/
    {
      v74 = v162; /*0x100507da0*/
      if ( v162 ) /*0x100507daa*/
      {
        v75 = v159; /*0x100507db0*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v159)); /*0x100507dc1*/
        v77 = v159 + 1; /*0x100507dc4*/
        do /*0x100507de0*/
        {
          if ( !(_WORD)_R13D ) /*0x100507de6*/
          {
            do /*0x100507e0d*/
            {
              v78 = _mm_movemask_epi8(_mm_load_si128(v77)); /*0x100507df6*/
              v75 -= 24; /*0x100507dfb*/
              ++v77; /*0x100507e02*/
            }
            while ( v78 == 0xFFFF ); /*0x100507e0d*/
            _R13D = ~v78; /*0x100507e0f*/
          }
          __asm { tzcnt eax, r13d } /*0x100507e12*/
          v79 = -3LL * _RAX; /*0x100507e1a*/
          v80 = *((_QWORD *)&v75[-1] + v79 - 1); /*0x100507e1e*/
          if ( v80 ) /*0x100507e26*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75[-1].i64[v79], v80, 1); /*0x100507e35*/
          --v74; /*0x100507dd0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100507dd7*/
          _R13D &= _R13D - 1; /*0x100507dda*/
        }
        while ( v74 ); /*0x100507de0*/
      }
      v81 = (24 * v73 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100507e48*/
      v82 = v81 + v73; /*0x100507e4c*/
      v21 = v82 == -17; /*0x100507e4f*/
      v83 = v82 + 17; /*0x100507e4f*/
      v26 = v207; /*0x100507e53*/
      if ( !v21 ) /*0x100507e57*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v159 - v81, v83, 16); /*0x100507e6b*/
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v173); /*0x100507e77*/
    result = v173; /*0x100507e7c*/
    if ( v173 ) /*0x100507e86*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 96 * v173, 8); /*0x100507e98*/
LABEL_75:
    v84 = v154; /*0x100507e9d*/
    if ( v154 ) /*0x100507ea7*/
    {
      v85 = v155; /*0x100507ead*/
      if ( v155 ) /*0x100507eb7*/
      {
        v86 = v153; /*0x100507ebd*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v153)); /*0x100507ece*/
        v88 = v153 + 1; /*0x100507ed1*/
        do /*0x100507ef0*/
        {
          if ( !(_WORD)_R13D ) /*0x100507ef6*/
          {
            do /*0x100507f1d*/
            {
              v89 = _mm_movemask_epi8(_mm_load_si128(v88)); /*0x100507f06*/
              v86 -= 24; /*0x100507f0b*/
              ++v88; /*0x100507f12*/
            }
            while ( v89 == 0xFFFF ); /*0x100507f1d*/
            _R13D = ~v89; /*0x100507f1f*/
          }
          __asm { tzcnt eax, r13d } /*0x100507f22*/
          v90 = -3 * result; /*0x100507f2a*/
          v91 = *((_QWORD *)&v86[-1] + v90 - 1); /*0x100507f2e*/
          if ( v91 ) /*0x100507f36*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86[-1].i64[v90], v91, 1); /*0x100507f45*/
          --v85; /*0x100507ee0*/
          result = _R13D & (unsigned int)(_R13D - 1); /*0x100507ee7*/
          _R13D &= _R13D - 1; /*0x100507eea*/
        }
        while ( v85 ); /*0x100507ef0*/
      }
      result = (24 * v84 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100507f58*/
      v92 = result + v84 + 17; /*0x100507f5f*/
      if ( v92 ) /*0x100507f63*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v153 - result, v92, 16); /*0x100507f77*/
    }
    v93 = v166; /*0x100507f7c*/
    if ( v166 ) /*0x100507f86*/
    {
      v94 = v168; /*0x100507f8c*/
      if ( v168 ) /*0x100507f96*/
      {
        v95 = v165; /*0x100507f9c*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v165)); /*0x100507fad*/
        v97 = v165 + 1; /*0x100507fb0*/
        do /*0x100507fd0*/
        {
          if ( !(_WORD)_R13D ) /*0x100507fda*/
          {
            do /*0x100507ffd*/
            {
              v98 = _mm_movemask_epi8(_mm_load_si128(v97)); /*0x100507fe6*/
              v95 -= 24; /*0x100507feb*/
              ++v97; /*0x100507ff2*/
            }
            while ( v98 == 0xFFFF ); /*0x100507ffd*/
            _R13D = ~v98; /*0x100507fff*/
          }
          __asm { tzcnt eax, r13d } /*0x100508002*/
          v99 = -3 * result; /*0x10050800a*/
          v100 = *((_QWORD *)&v95[-1] + v99 - 1); /*0x10050800e*/
          if ( v100 ) /*0x100508016*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[-1].i64[v99], v100, 1); /*0x100508025*/
          v94 = (__int64 *)((char *)v94 - 1); /*0x100507fc0*/
          result = _R13D & (unsigned int)(_R13D - 1); /*0x100507fc7*/
          _R13D &= _R13D - 1; /*0x100507fca*/
        }
        while ( v94 ); /*0x100507fd0*/
      }
LABEL_151:
      result = (24 * v93 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005085bc*/
      v150 = result + v93 + 17; /*0x1005085cf*/
      if ( v150 ) /*0x1005085d3*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v165 - result, v150, 16); /*0x1005085e7*/
      return result; /*0x1005085e7*/
    }
    return result; /*0x100507f86*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v176, v49); /*0x10050802c*/
  v101 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050803b*/
  if ( !v101 ) /*0x100508043*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050867a*/
  v102 = (_QWORD *)v101; /*0x100508049*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050804c*/
  v103 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10050805b*/
  if ( !v103 ) /*0x100508063*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1005086de*/
  qmemcpy(v103, "rollout_orphan_providers", 24); /*0x10050808f*/
  *v102 = 24; /*0x100508092*/
  v102[1] = v103; /*0x100508099*/
  v102[2] = 24; /*0x10050809d*/
  v198 = 1; /*0x1005080a5*/
  v199 = (__int64)v102; /*0x1005080ad*/
  v200 = 1; /*0x1005080b1*/
  v195 = 0; /*0x1005080b9*/
  v196 = 8; /*0x1005080c4*/
  v197 = 0; /*0x1005080cf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x1005080d7*/
  v104 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005080e6*/
  if ( !v104 ) /*0x1005080ee*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050868b*/
  v105 = (_QWORD *)v104; /*0x1005080f4*/
  v156 = v192; /*0x1005080fe*/
  v201 = &v156; /*0x10050810c*/
  v202 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100508117*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017C04FD, &v201); /*0x10050812d*/
  v105[2] = v151[2]; /*0x100508139*/
  v106 = v151[0]; /*0x10050813d*/
  v105[1] = v151[1]; /*0x10050814b*/
  *v105 = v106; /*0x10050814f*/
  v107 = v198; /*0x100508152*/
  v108 = v199; /*0x100508156*/
  v201 = (__int64 *)v198; /*0x10050815a*/
  v202 = v199; /*0x10050815e*/
  v109 = v200; /*0x100508162*/
  v203 = v200; /*0x100508166*/
  v110 = v195; /*0x10050816a*/
  v111 = v196; /*0x100508171*/
  v204 = v195; /*0x100508178*/
  v205 = v196; /*0x10050817c*/
  v206 = v197; /*0x100508184*/
  v50[6] = v197; /*0x100508188*/
  v50[5] = v111; /*0x10050818c*/
  v50[4] = v110; /*0x100508190*/
  v50[3] = v109; /*0x100508194*/
  v50[2] = v108; /*0x100508198*/
  v50[1] = v107; /*0x10050819c*/
  v50[7] = 1; /*0x1005081a0*/
  v50[8] = (__int64)v105; /*0x1005081a8*/
  v50[9] = 1; /*0x1005081ac*/
  *v50 = 11; /*0x1005081b4*/
  if ( v176 ) /*0x1005081c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v177, v176, 1); /*0x1005081d3*/
  if ( v179 ) /*0x1005081e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v179, 1); /*0x1005081f0*/
  if ( v182 ) /*0x1005081ff*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183, v182, 1); /*0x10050820d*/
  HIDWORD(_RAX) = 0x80000000; /*0x100508223*/
  if ( v185 != 0x8000000000000000LL && v185 ) /*0x10050822f*/
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, v185, 1) >> 32; /*0x10050823d*/
  v113 = v190; /*0x100508242*/
  if ( v190 ) /*0x10050824c*/
  {
    v114 = v192; /*0x100508252*/
    if ( v192 ) /*0x10050825c*/
    {
      v115 = v189; /*0x100508262*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v189)); /*0x100508273*/
      v117 = (const __m128i *)(v189 + 16); /*0x100508276*/
      do /*0x100508290*/
      {
        if ( !(_WORD)_R13D ) /*0x100508296*/
        {
          do /*0x1005082bd*/
          {
            v118 = _mm_movemask_epi8(_mm_load_si128(v117)); /*0x1005082a6*/
            v115 -= 384; /*0x1005082ab*/
            ++v117; /*0x1005082b2*/
          }
          while ( v118 == 0xFFFF ); /*0x1005082bd*/
          _R13D = ~v118; /*0x1005082bf*/
        }
        __asm { tzcnt eax, r13d } /*0x1005082c2*/
        v119 = -3LL * _RAX; /*0x1005082ca*/
        v120 = *(_QWORD *)(v115 + 8 * v119 - 24); /*0x1005082ce*/
        if ( v120 ) /*0x1005082d6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v115 + 8 * v119 - 16), v120, 1); /*0x1005082e5*/
        --v114; /*0x100508280*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100508287*/
        _R13D &= _R13D - 1; /*0x10050828a*/
      }
      while ( v114 ); /*0x100508290*/
    }
    _RAX = (24LL * (_QWORD)v113 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005082f8*/
    v121 = (__int64)v113 + _RAX; /*0x1005082fc*/
    v21 = v121 == -17; /*0x1005082ff*/
    v122 = v121 + 17; /*0x1005082ff*/
    v26 = v207; /*0x100508303*/
    if ( !v21 ) /*0x100508307*/
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189 - _RAX, v122, 16) >> 32; /*0x10050831b*/
  }
  v123 = v160; /*0x100508320*/
  if ( v160 ) /*0x10050832a*/
  {
    v124 = v162; /*0x100508330*/
    if ( v162 ) /*0x10050833a*/
    {
      v125 = v159; /*0x100508340*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v159)); /*0x100508351*/
      v127 = v159 + 1; /*0x100508354*/
      do /*0x100508370*/
      {
        if ( !(_WORD)_R13D ) /*0x100508376*/
        {
          do /*0x10050839d*/
          {
            v128 = _mm_movemask_epi8(_mm_load_si128(v127)); /*0x100508386*/
            v125 -= 24; /*0x10050838b*/
            ++v127; /*0x100508392*/
          }
          while ( v128 == 0xFFFF ); /*0x10050839d*/
          _R13D = ~v128; /*0x10050839f*/
        }
        __asm { tzcnt eax, r13d } /*0x1005083a2*/
        v129 = -3LL * _RAX; /*0x1005083aa*/
        v130 = *((_QWORD *)&v125[-1] + v129 - 1); /*0x1005083ae*/
        if ( v130 ) /*0x1005083b6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v125[-1].i64[v129], v130, 1); /*0x1005083c5*/
        --v124; /*0x100508360*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100508367*/
        _R13D &= _R13D - 1; /*0x10050836a*/
      }
      while ( v124 ); /*0x100508370*/
    }
    v131 = (24 * v123 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005083d8*/
    v132 = v131 + v123; /*0x1005083dc*/
    v21 = v132 == -17; /*0x1005083df*/
    v133 = v132 + 17; /*0x1005083df*/
    v26 = v207; /*0x1005083e3*/
    if ( !v21 ) /*0x1005083e7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v159 - v131, v133, 16); /*0x1005083fb*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v173); /*0x100508407*/
  result = v173; /*0x10050840c*/
  if ( v173 ) /*0x100508416*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 96 * v173, 8); /*0x100508428*/
  v134 = v154; /*0x10050842d*/
  if ( v154 ) /*0x100508437*/
  {
    v135 = v155; /*0x10050843d*/
    if ( v155 ) /*0x100508447*/
    {
      v136 = v153; /*0x10050844d*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v153)); /*0x10050845e*/
      v138 = v153 + 1; /*0x100508461*/
      do /*0x100508480*/
      {
        if ( !(_WORD)_R13D ) /*0x100508486*/
        {
          do /*0x1005084ad*/
          {
            v139 = _mm_movemask_epi8(_mm_load_si128(v138)); /*0x100508496*/
            v136 -= 24; /*0x10050849b*/
            ++v138; /*0x1005084a2*/
          }
          while ( v139 == 0xFFFF ); /*0x1005084ad*/
          _R13D = ~v139; /*0x1005084af*/
        }
        __asm { tzcnt eax, r13d } /*0x1005084b2*/
        v140 = -3 * result; /*0x1005084ba*/
        v141 = *((_QWORD *)&v136[-1] + v140 - 1); /*0x1005084be*/
        if ( v141 ) /*0x1005084c6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136[-1].i64[v140], v141, 1); /*0x1005084d5*/
        --v135; /*0x100508470*/
        result = _R13D & (unsigned int)(_R13D - 1); /*0x100508477*/
        _R13D &= _R13D - 1; /*0x10050847a*/
      }
      while ( v135 ); /*0x100508480*/
    }
    result = (24 * v134 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1005084e8*/
    v142 = result + v134 + 17; /*0x1005084ef*/
    if ( v142 ) /*0x1005084f3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v153 - result, v142, 16); /*0x100508507*/
  }
  v93 = v166; /*0x10050850c*/
  if ( v166 ) /*0x100508516*/
  {
    v143 = v168; /*0x10050851c*/
    if ( v168 ) /*0x100508526*/
    {
      v144 = v165; /*0x10050852c*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v165)); /*0x10050853d*/
      v146 = v165 + 1; /*0x100508540*/
      do /*0x100508560*/
      {
        if ( !(_WORD)_R13D ) /*0x100508566*/
        {
          do /*0x10050858d*/
          {
            v147 = _mm_movemask_epi8(_mm_load_si128(v146)); /*0x100508576*/
            v144 -= 24; /*0x10050857b*/
            ++v146; /*0x100508582*/
          }
          while ( v147 == 0xFFFF ); /*0x10050858d*/
          _R13D = ~v147; /*0x10050858f*/
        }
        __asm { tzcnt eax, r13d } /*0x100508592*/
        v148 = -3 * result; /*0x10050859a*/
        v149 = *((_QWORD *)&v144[-1] + v148 - 1); /*0x10050859e*/
        if ( v149 ) /*0x1005085a6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144[-1].i64[v148], v149, 1); /*0x1005085b5*/
        v143 = (__int64 *)((char *)v143 - 1); /*0x100508550*/
        result = _R13D & (unsigned int)(_R13D - 1); /*0x100508557*/
        _R13D &= _R13D - 1; /*0x10050855a*/
      }
      while ( v143 ); /*0x100508560*/
    }
    goto LABEL_151; /*0x100508560*/
  }
  return result; /*0x1005085ec*/
}