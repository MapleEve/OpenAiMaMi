// __ZN13codexmate_lib8platform7process34list_macos_db_holder_processes_for @ 0x100368f60 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::list_macos_db_holder_processes_for::he16a4f9451dd764f(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  char *v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 *v7; // rsi
  char *v8; // r12
  __int64 *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // r13
  __int64 *v15; // rsi
  char *v16; // r12
  __int64 *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // r14
  __int64 v22; // r15
  __int64 *v23; // rsi
  __int64 *v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // r13
  char *v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rsi
  _QWORD *v35; // rax
  _QWORD *v36; // r12
  __int64 v37; // rsi
  _QWORD *v38; // rax
  __int64 result; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ebx
  __int64 v45; // rbx
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // r14
  __int64 *v55; // rax
  char *v56; // rsi
  char *v57; // r14
  _BYTE *v58; // rax
  __int64 v59; // rdx
  int v60; // esi
  __int64 v61; // rcx
  __int64 v62; // rsi
  unsigned __int64 v63; // rdi
  _BYTE *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // r15d
  unsigned int v68; // esi
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  unsigned int v73; // edx
  bool v74; // al
  const void *v75; // rax
  __int64 v76; // rdx
  size_t v77; // r14
  const void *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r15
  __int64 v82; // rsi
  char *v83; // rdi
  __int64 *v84; // rsi
  const void *v85; // rax
  __int64 v86; // rdx
  size_t v87; // r14
  const void *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rcx
  size_t v91; // rax
  size_t v92; // rdi
  unsigned __int64 v93; // rcx
  __int64 v94; // r14
  __int64 v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rbx
  _QWORD *v101; // r14
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rdi
  __int64 *v105; // [rsp+8h] [rbp-378h] BYREF
  __int64 *v106; // [rsp+10h] [rbp-370h]
  __int64 v107; // [rsp+18h] [rbp-368h]
  _BYTE v108[10]; // [rsp+D6h] [rbp-2AAh] BYREF
  _QWORD *v109; // [rsp+E0h] [rbp-2A0h] BYREF
  char *v110; // [rsp+E8h] [rbp-298h]
  __int64 *v111; // [rsp+F0h] [rbp-290h]
  __int64 (__fastcall *v112)(); // [rsp+F8h] [rbp-288h]
  __int64 v113; // [rsp+100h] [rbp-280h]
  __int64 v114; // [rsp+108h] [rbp-278h]
  __int64 v115; // [rsp+110h] [rbp-270h]
  __int64 v116; // [rsp+1A8h] [rbp-1D8h]
  __int64 v117; // [rsp+1B0h] [rbp-1D0h] BYREF
  __int64 v118; // [rsp+1B8h] [rbp-1C8h]
  __int64 *v119; // [rsp+1C0h] [rbp-1C0h]
  __int64 *v120; // [rsp+1C8h] [rbp-1B8h] BYREF
  __int64 v121; // [rsp+1D0h] [rbp-1B0h]
  __int64 v122; // [rsp+1D8h] [rbp-1A8h]
  __int64 v123; // [rsp+1E0h] [rbp-1A0h]
  __int64 v124; // [rsp+1E8h] [rbp-198h]
  __int64 v125; // [rsp+1F0h] [rbp-190h]
  __int64 v126; // [rsp+1F8h] [rbp-188h]
  __int64 v127; // [rsp+200h] [rbp-180h] BYREF
  __int64 v128; // [rsp+208h] [rbp-178h]
  __int64 v129; // [rsp+210h] [rbp-170h]
  __int64 v130; // [rsp+218h] [rbp-168h]
  __int64 v131; // [rsp+220h] [rbp-160h]
  __int64 v132; // [rsp+228h] [rbp-158h]
  _QWORD *v133; // [rsp+230h] [rbp-150h] BYREF
  char *v134; // [rsp+238h] [rbp-148h]
  __int64 *v135; // [rsp+240h] [rbp-140h]
  __int64 (__fastcall *v136)(); // [rsp+248h] [rbp-138h]
  __int64 v137; // [rsp+250h] [rbp-130h]
  __int64 v138; // [rsp+258h] [rbp-128h]
  __int64 v139; // [rsp+260h] [rbp-120h]
  __int64 *v140; // [rsp+268h] [rbp-118h] BYREF
  __int64 *v141; // [rsp+270h] [rbp-110h]
  _QWORD v142[5]; // [rsp+278h] [rbp-108h] BYREF
  char v143; // [rsp+2A0h] [rbp-E0h]
  __int16 v144; // [rsp+2A8h] [rbp-D8h]
  __int64 v145; // [rsp+2B0h] [rbp-D0h]
  __int64 v146; // [rsp+2B8h] [rbp-C8h]
  __int64 v147; // [rsp+2C0h] [rbp-C0h]
  __int64 v148; // [rsp+2C8h] [rbp-B8h] BYREF
  __int64 v149; // [rsp+2D0h] [rbp-B0h]
  __int64 v150; // [rsp+2D8h] [rbp-A8h]
  _QWORD *v151; // [rsp+2E0h] [rbp-A0h]
  size_t v152; // [rsp+2E8h] [rbp-98h]
  __int64 v153; // [rsp+2F0h] [rbp-90h] BYREF
  __int64 v154; // [rsp+2F8h] [rbp-88h]
  __int64 v155; // [rsp+300h] [rbp-80h]
  __int64 v156; // [rsp+308h] [rbp-78h]
  __int64 v157; // [rsp+310h] [rbp-70h]
  __int64 v158; // [rsp+318h] [rbp-68h]
  __int64 v159; // [rsp+320h] [rbp-60h]
  size_t v160; // [rsp+328h] [rbp-58h]
  size_t v161; // [rsp+330h] [rbp-50h]
  _QWORD *v162; // [rsp+338h] [rbp-48h]
  __int64 *v163; // [rsp+340h] [rbp-40h]
  char *v164; // [rsp+348h] [rbp-38h]
  char *v165; // [rsp+350h] [rbp-30h]

  v3 = a3; /*0x100368f74*/
  v4 = a2; /*0x100368f77*/
  v151 = a1; /*0x100368f7a*/
  v153 = 0; /*0x100368f81*/
  v154 = 8; /*0x100368f8c*/
  v155 = 0; /*0x100368f97*/
  v127 = 1; /*0x100368f9f*/
  v128 = 0; /*0x100368faa*/
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v120, a2, a3); /*0x100368fbc*/
  v5 = v121; /*0x100368fc1*/
  v6 = v122; /*0x100368fc8*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v109, v121, v122); /*0x100368fdc*/
  v162 = a2; /*0x100368fe8*/
  if ( (_BYTE)v109 ) /*0x100368fec*/
  {
    if ( ((unsigned __int8)v110 & 3) != 1 ) /*0x100368ffd*/
    {
      v7 = v120; /*0x100369003*/
      if ( !v120 ) /*0x10036900d*/
        goto LABEL_8; /*0x10036900d*/
      goto LABEL_4; /*0x10036900d*/
    }
    v165 = v110 - 1; /*0x100369652*/
    v45 = *(_QWORD *)(v110 - 1); /*0x100369656*/
    v46 = *(_QWORD *)(v110 + 7); /*0x10036965a*/
    if ( *(_QWORD *)v46 ) /*0x10036965e*/
      (*(void (__fastcall **)(__int64))v46)(v45); /*0x10036966a*/
    v47 = *(_QWORD *)(v46 + 8); /*0x10036966c*/
    if ( v47 ) /*0x100369673*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v47, *(_QWORD *)(v46 + 16)); /*0x10036967c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, 24, 8); /*0x10036968f*/
    v7 = v120; /*0x100369694*/
    if ( v120 ) /*0x10036969e*/
LABEL_4:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1); /*0x10036900f*/
  }
  else
  {
    v8 = v3; /*0x10036901e*/
    v9 = v120; /*0x100369021*/
    v10 = v155; /*0x100369028*/
    if ( v155 == v153 ) /*0x100369033*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v153); /*0x10036903c*/
    v11 = v154; /*0x100369041*/
    v12 = 3 * v10; /*0x100369048*/
    *(_QWORD *)(v154 + 8 * v12) = v9; /*0x10036904c*/
    *(_QWORD *)(v11 + 8 * v12 + 8) = v5; /*0x100369050*/
    *(_QWORD *)(v11 + 8 * v12 + 16) = v6; /*0x100369055*/
    v155 = v10 + 1; /*0x10036905d*/
    v3 = v8; /*0x100369061*/
    v4 = v162; /*0x100369064*/
  }
LABEL_8:
  v127 = (__int64)&unk_1015E3B60; /*0x100369068*/
  v128 = 4; /*0x100369076*/
  v133 = v4; /*0x100369081*/
  v134 = v3; /*0x100369088*/
  v109 = &v133; /*0x100369096*/
  v110 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003690a4*/
  v111 = &v127; /*0x1003690b2*/
  v112 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003690c0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v140, "\xC0\xC0", &v109); /*0x1003690dc*/
  v13 = v141; /*0x1003690e8*/
  v105 = v140; /*0x1003690ef*/
  v106 = v141; /*0x1003690f6*/
  v14 = v142[0]; /*0x1003690fd*/
  v107 = v142[0]; /*0x100369104*/
  v120 = v140; /*0x10036910b*/
  v121 = (__int64)v141; /*0x100369112*/
  v122 = v142[0]; /*0x100369119*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v109, v141, v142[0]); /*0x10036912d*/
  if ( (_DWORD)v109 == 1 ) /*0x100369139*/
  {
    if ( ((unsigned __int8)v110 & 3) != 1 ) /*0x10036914a*/
    {
      v15 = v120; /*0x100369150*/
      if ( !v120 ) /*0x10036915a*/
        goto LABEL_15; /*0x10036915a*/
      goto LABEL_11; /*0x10036915a*/
    }
    v165 = v110 - 1; /*0x1003696ad*/
    v48 = *(_QWORD *)(v110 - 1); /*0x1003696b1*/
    v49 = *(_QWORD *)(v110 + 7); /*0x1003696b5*/
    if ( *(_QWORD *)v49 ) /*0x1003696b9*/
      (*(void (__fastcall **)(__int64))v49)(v48); /*0x1003696c5*/
    v50 = *(_QWORD *)(v49 + 8); /*0x1003696c7*/
    if ( v50 ) /*0x1003696ce*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v50, *(_QWORD *)(v49 + 16)); /*0x1003696d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, 24, 8); /*0x1003696ea*/
    v15 = v120; /*0x1003696f6*/
    if ( v120 ) /*0x100369700*/
LABEL_11:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, 1); /*0x10036915c*/
  }
  else
  {
    v16 = v3; /*0x10036916b*/
    v17 = v120; /*0x10036916e*/
    v18 = v155; /*0x100369175*/
    if ( v155 == v153 ) /*0x100369180*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v153); /*0x100369189*/
    v19 = v154; /*0x10036918e*/
    v20 = 3 * v18; /*0x100369195*/
    *(_QWORD *)(v154 + 8 * v20) = v17; /*0x100369199*/
    *(_QWORD *)(v19 + 8 * v20 + 8) = v13; /*0x10036919d*/
    *(_QWORD *)(v19 + 8 * v20 + 16) = v14; /*0x1003691a2*/
    v155 = v18 + 1; /*0x1003691aa*/
    v3 = v16; /*0x1003691ae*/
    v4 = v162; /*0x1003691b1*/
  }
LABEL_15:
  v127 = (__int64)&unk_1015E3B64; /*0x1003691bc*/
  v128 = 4; /*0x1003691ca*/
  v133 = v4; /*0x1003691d5*/
  v134 = v3; /*0x1003691dc*/
  v109 = &v133; /*0x1003691e3*/
  v110 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003691f1*/
  v111 = &v127; /*0x1003691ff*/
  v112 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10036920d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v140, "\xC0\xC0", &v109); /*0x100369229*/
  v21 = v141; /*0x100369235*/
  v105 = v140; /*0x10036923c*/
  v106 = v141; /*0x100369243*/
  v22 = v142[0]; /*0x10036924a*/
  v107 = v142[0]; /*0x100369251*/
  v120 = v140; /*0x100369258*/
  v121 = (__int64)v141; /*0x10036925f*/
  v122 = v142[0]; /*0x100369266*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v109, v141, v142[0]); /*0x10036927a*/
  if ( (_DWORD)v109 != 1 ) /*0x100369286*/
  {
    v24 = v120; /*0x1003692b8*/
    v25 = v155; /*0x1003692bf*/
    if ( v155 == v153 ) /*0x1003692ca*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v153); /*0x1003692d3*/
    v26 = v154; /*0x1003692d8*/
    v27 = 3 * v25; /*0x1003692df*/
    *(_QWORD *)(v154 + 8 * v27) = v24; /*0x1003692e3*/
    *(_QWORD *)(v26 + 8 * v27 + 8) = v21; /*0x1003692e7*/
    *(_QWORD *)(v26 + 8 * v27 + 16) = v22; /*0x1003692ec*/
    v155 = v25 + 1; /*0x1003692f4*/
    goto LABEL_22; /*0x1003692f4*/
  }
  if ( ((unsigned __int8)v110 & 3) == 1 ) /*0x100369297*/
  {
    v165 = v110 - 1; /*0x10036970f*/
    v51 = *(_QWORD *)(v110 - 1); /*0x100369713*/
    v52 = *(_QWORD *)(v110 + 7); /*0x100369717*/
    if ( *(_QWORD *)v52 ) /*0x10036971b*/
      (*(void (__fastcall **)(__int64))v52)(v51); /*0x100369727*/
    v53 = *(_QWORD *)(v52 + 8); /*0x100369729*/
    if ( v53 ) /*0x100369730*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, *(_QWORD *)(v52 + 16)); /*0x100369739*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, 24, 8); /*0x10036974c*/
    v23 = v120; /*0x100369751*/
    if ( !v120 ) /*0x10036975b*/
      goto LABEL_22; /*0x10036975b*/
    goto LABEL_18; /*0x10036975b*/
  }
  v23 = v120; /*0x10036929d*/
  if ( v120 ) /*0x1003692a7*/
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, 1); /*0x1003692a9*/
LABEL_22:
  v145 = v153; /*0x1003692f8*/
  v146 = v154; /*0x10036930d*/
  v28 = v155; /*0x100369314*/
  v147 = v155; /*0x100369318*/
  if ( !v155 ) /*0x100369322*/
  {
    v38 = v151; /*0x100369473*/
    *v151 = 0; /*0x10036947a*/
    v38[1] = 8; /*0x100369481*/
    v38[2] = 0; /*0x100369489*/
    goto LABEL_37; /*0x100369489*/
  }
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v105, &unk_1015E3B68, 4); /*0x10036933b*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v105, "-t", 2); /*0x100369353*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v105, &unk_1015E6516, 2); /*0x10036936b*/
  v29 = v146; /*0x100369370*/
  v30 = 0; /*0x100369383*/
  do /*0x1003693a9*/
  {
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10036939d*/
      &v105,
      *(_QWORD *)(v29 + v30 + 8),
      *(_QWORD *)(v29 + v30 + 16));
    v30 += 24; /*0x1003693a2*/
  }
  while ( 24 * v28 != v30 ); /*0x1003693a9*/
  std::process::Command::output::h737eedd4de2ee22e(&v109, &v105); /*0x1003693b9*/
  if ( __OFSUB__(0, v109) ) /*0x1003693c0*/
  {
    if ( ((unsigned __int8)v110 & 3) == 1 ) /*0x1003693dc*/
    {
      v31 = v110 - 1; /*0x1003693de*/
      v32 = *(_QWORD *)(v110 - 1); /*0x1003693e2*/
      v33 = *(_QWORD *)(v110 + 7); /*0x1003693e6*/
      if ( *(_QWORD *)v33 ) /*0x1003693ea*/
        (*(void (__fastcall **)(__int64))v33)(v32); /*0x1003693f6*/
      v34 = *(_QWORD *)(v33 + 8); /*0x1003693f8*/
      if ( v34 ) /*0x1003693ff*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x100369408*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8); /*0x10036941a*/
    }
    v35 = v151; /*0x10036941f*/
    *v151 = 0; /*0x100369426*/
    v35[1] = 8; /*0x10036942d*/
    v35[2] = 0; /*0x100369435*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v105); /*0x100369444*/
    v36 = (_QWORD *)(v29 + 8); /*0x100369449*/
    do /*0x100369457*/
    {
      v37 = *(v36 - 1); /*0x100369459*/
      if ( v37 ) /*0x100369461*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v37, 1); /*0x10036946c*/
      v36 += 3; /*0x100369450*/
      --v28; /*0x100369454*/
    }
    while ( v28 ); /*0x100369457*/
    goto LABEL_37; /*0x100369457*/
  }
  v139 = v115; /*0x1003694cf*/
  v138 = v114; /*0x1003694dd*/
  v137 = v113; /*0x1003694eb*/
  v136 = v112; /*0x1003694f9*/
  v135 = v111; /*0x100369507*/
  v134 = v110; /*0x10036951c*/
  v133 = v109; /*0x100369523*/
  LODWORD(v162) = std::process::id::ha72f58ec62264e78(); /*0x10036952f*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v117, v134, v135); /*0x100369547*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100369553*/
  v41 = v40; /*0x100369555*/
  if ( *(_BYTE *)(v40 + 16) == 1 ) /*0x10036955c*/
  {
    v42 = *(_QWORD *)v40; /*0x100369562*/
    v43 = *(_QWORD *)(v41 + 8); /*0x100369565*/
  }
  else
  {
    v42 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100369e12*/
    *(_QWORD *)v41 = v42; /*0x100369e17*/
    *(_QWORD *)(v41 + 8) = v43; /*0x100369e1a*/
    *(_BYTE *)(v41 + 16) = 1; /*0x100369e1e*/
  }
  *(_QWORD *)v41 = v42 + 1; /*0x10036956d*/
  v130 = 0; /*0x100369577*/
  v129 = 0; /*0x100369585*/
  v128 = 0; /*0x100369593*/
  v127 = (__int64)anon_b0ee9adff4519c22b647af231a5a39fa_24; /*0x1003695a1*/
  v131 = v42; /*0x1003695a8*/
  v132 = v43; /*0x1003695af*/
  v148 = 0; /*0x1003695b6*/
  v149 = 8; /*0x1003695c1*/
  v150 = 0; /*0x1003695cc*/
  v140 = nullptr; /*0x1003695e5*/
  v141 = v119; /*0x1003695f0*/
  v142[0] = v118; /*0x1003695fe*/
  v142[1] = v119; /*0x100369605*/
  v142[2] = 0; /*0x10036960c*/
  v142[3] = v119; /*0x100369617*/
  v142[4] = 0xA0000000ALL; /*0x100369628*/
  v143 = 1; /*0x10036962f*/
  v144 = 0; /*0x100369636*/
  v44 = (int)v162; /*0x100369646*/
  do /*0x10036977d*/
  {
    v54 = v142[0]; /*0x10036977d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10036978a*/
      &v109,
      v142);
    if ( (_DWORD)v109 == 1 ) /*0x100369796*/
    {
      v55 = v140; /*0x10036979f*/
      v140 = v111; /*0x1003697a6*/
      v56 = (char *)((char *)v111 - (char *)v55); /*0x1003697ad*/
      v57 = (char *)v55 + v54; /*0x1003697b0*/
      if ( v111 != v55 ) /*0x1003697b6*/
        goto LABEL_69; /*0x1003697b6*/
      goto LABEL_75; /*0x1003697b6*/
    }
    if ( HIBYTE(v144) ) /*0x1003697c7*/
      break; /*0x1003697c7*/
    HIBYTE(v144) = 1; /*0x1003697cd*/
    v56 = (char *)((char *)v141 - (char *)v140); /*0x1003697e2*/
    if ( ((unsigned __int8)v144 | (v141 != v140)) != 1 ) /*0x1003697f0*/
      break; /*0x1003697f0*/
    v57 = (char *)v140 + v142[0]; /*0x1003697f6*/
    if ( v56 ) /*0x100369800*/
    {
LABEL_69:
      if ( v56[(_QWORD)v57 - 1] == 10 ) /*0x100369808*/
      {
        if ( v56 == (char *)1 ) /*0x100369810*/
        {
          v56 = nullptr; /*0x100369820*/
        }
        else if ( v56[(_QWORD)v57 - 2] == 13 ) /*0x100369818*/
        {
          v56 -= 2; /*0x10036981a*/
        }
        else
        {
          --v56; /*0x100369824*/
        }
      }
    }
LABEL_75:
    v58 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v57, v56); /*0x100369830*/
    if ( v59 ) /*0x10036983b*/
    {
      if ( v59 == 1 ) /*0x100369845*/
      {
        v60 = (unsigned __int8)*v58; /*0x100369847*/
        if ( v60 == 43 || v60 == 45 ) /*0x100369856*/
          continue; /*0x100369856*/
      }
      else
      {
        LOBYTE(v60) = *v58; /*0x100369860*/
      }
      v61 = (_BYTE)v60 == 43; /*0x100369869*/
      v62 = -v61; /*0x10036986f*/
      v63 = v59 - v61; /*0x100369875*/
      v64 = &v58[v61]; /*0x100369878*/
      if ( v63 >= 9 ) /*0x10036987f*/
      {
        v69 = -(v62 + v59); /*0x1003698d3*/
        v70 = 0; /*0x1003698d6*/
        v67 = 0; /*0x1003698d8*/
        while ( v70 + v69 ) /*0x1003698e1*/
        {
          v71 = v69; /*0x1003698e3*/
          v72 = 10 * v67; /*0x1003698ee*/
          if ( is_mul_ok(0xAu, v67) ) /*0x1003698ee*/
          {
            v73 = (unsigned __int8)v64[v70] - 48; /*0x1003698fd*/
            v67 = v73 + v72; /*0x100369900*/
            v74 = __CFADD__(v73, v72); /*0x100369903*/
            if ( v73 <= 9 ) /*0x100369909*/
            {
              ++v70; /*0x10036990f*/
              v69 = v71; /*0x100369914*/
              if ( !v74 ) /*0x100369917*/
                continue; /*0x100369917*/
            }
          }
          goto LABEL_62; /*0x100369917*/
        }
      }
      else
      {
        if ( v63 ) /*0x100369884*/
        {
          v65 = -(v62 + v59); /*0x10036988d*/
          v66 = 0; /*0x100369890*/
          v67 = 0; /*0x100369892*/
          while ( 1 ) /*0x1003698a4*/
          {
            v68 = (unsigned __int8)v64[v66] - 48; /*0x1003698a4*/
            if ( v68 > 9 ) /*0x1003698aa*/
              goto LABEL_62; /*0x1003698aa*/
            v67 = v68 + 10 * v67; /*0x1003698b4*/
            if ( !(++v66 + v65) ) /*0x1003698be*/
              goto LABEL_94; /*0x1003698c1*/
          }
        }
        v67 = 0; /*0x10036991e*/
      }
LABEL_94:
      if ( v44 != v67 /*0x100369934*/
        && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he8d93d7117e279f5(&v127, v67) )
      {
        std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x100369950*/
          &v109,
          "ps-ocodexmate_lib::platform::process",
          2);
        v75 = (const void *)core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::h94ede26950885649(v67, v108, 10); /*0x100369964*/
        v77 = v76; /*0x100369969*/
        if ( v76 < 0 ) /*0x10036996f*/
        {
          v103 = 0; /*0x100369df5*/
        }
        else
        {
          if ( !v76 ) /*0x100369978*/
          {
            v80 = 1; /*0x1003699a3*/
LABEL_101:
            v165 = (char *)v80; /*0x1003699a8*/
            memcpy((void *)v80, v75, v77); /*0x1003699b5*/
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v109, "-pcom.apple.quarantine", 2); /*0x1003699c9*/
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v109, v165, v77); /*0x1003699d8*/
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1003699ec*/
              &v109,
              "-ocodexmate_lib::platform::process",
              2);
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v109, &unk_1015E3AE8, 8); /*0x100369a00*/
            std::process::Command::output::h737eedd4de2ee22e(&v120, &v109); /*0x100369a0f*/
            if ( v120 == (__int64 *)0x8000000000000000LL ) /*0x100369a28*/
            {
              if ( (v121 & 3) == 1 ) /*0x100369a39*/
              {
                v164 = (char *)(v121 - 1); /*0x100369a3f*/
                v163 = *(__int64 **)(v121 - 1); /*0x100369a47*/
                v81 = *(_QWORD *)(v121 + 7); /*0x100369a4b*/
                if ( *(_QWORD *)v81 ) /*0x100369a4f*/
                  (*(void (__fastcall **)(__int64 *))v81)(v163); /*0x100369a5b*/
                v82 = *(_QWORD *)(v81 + 8); /*0x100369a61*/
                if ( v82 ) /*0x100369a68*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v82, *(_QWORD *)(v81 + 16)); /*0x100369a6e*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, 24, 8); /*0x100369a81*/
              }
              if ( v77 ) /*0x100369a89*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, v77, 1); /*0x100369a9b*/
              core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v109); /*0x100369769*/
            }
            else
            {
              v159 = v126; /*0x100369ab7*/
              v158 = v125; /*0x100369abf*/
              v157 = v124; /*0x100369ac7*/
              v156 = v123; /*0x100369acf*/
              v155 = v122; /*0x100369ada*/
              v154 = v121; /*0x100369ade*/
              v163 = v120; /*0x100369ae1*/
              v153 = (__int64)v120; /*0x100369ae5*/
              if ( v77 ) /*0x100369aef*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, v77, 1); /*0x100369afd*/
              core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v109); /*0x100369b05*/
              if ( !(_DWORD)v159 ) /*0x100369b0e*/
              {
                v116 = v154; /*0x100369b58*/
                alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v109, v154, v155); /*0x100369b5f*/
                v83 = v110; /*0x100369b64*/
                v84 = v111; /*0x100369b6b*/
                v164 = v110; /*0x100369b72*/
                v85 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v110, v111); /*0x100369b76*/
                v87 = v86; /*0x100369b7b*/
                if ( v86 < 0 ) /*0x100369b81*/
                {
                  v104 = 0; /*0x100369e02*/
                }
                else
                {
                  if ( !v86 ) /*0x100369b8a*/
                  {
                    v90 = 1; /*0x100369bb5*/
                    goto LABEL_122; /*0x100369bb5*/
                  }
                  v88 = v85; /*0x100369b8c*/
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v84); /*0x100369b8f*/
                  v89 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v87, 1); /*0x100369b9c*/
                  if ( v89 ) /*0x100369ba4*/
                  {
                    v90 = v89; /*0x100369baa*/
                    v85 = v88; /*0x100369bad*/
                    v44 = (int)v162; /*0x100369bb0*/
LABEL_122:
                    v152 = v90; /*0x100369bba*/
                    memcpy((void *)v90, v85, v87); /*0x100369bca*/
                    if ( 2LL * (_QWORD)v109 ) /*0x100369bd6*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v109, 1); /*0x100369bec*/
                    v91 = v160; /*0x100369bf4*/
                    if ( v87 ) /*0x100369bf8*/
                      v91 = v87; /*0x100369bf8*/
                    v160 = v91; /*0x100369bfc*/
                    v92 = v161; /*0x100369c00*/
                    if ( v87 ) /*0x100369c04*/
                      v92 = v152; /*0x100369c04*/
                    v93 = v87; /*0x100369c0c*/
                    if ( !v87 ) /*0x100369c19*/
                      v93 = 0x8000000000000000LL; /*0x100369c19*/
                    v164 = (char *)v93; /*0x100369c1d*/
                    v161 = v92; /*0x100369c28*/
                    if ( v163 ) /*0x100369c2c*/
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v163, 1); /*0x100369c3a*/
                      v92 = v161; /*0x100369c3f*/
                    }
                    if ( v156 ) /*0x100369c4a*/
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v156, 1); /*0x100369c55*/
                      v92 = v161; /*0x100369c5a*/
                    }
                    if ( v87 ) /*0x100369c61*/
                    {
                      if ( v160 ) /*0x100369c6c*/
                      {
                        v94 = v150; /*0x100369c6e*/
                        if ( v150 == v148 ) /*0x100369c7c*/
                          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v148); /*0x100369c85*/
                        v95 = v149; /*0x100369c8a*/
                        v96 = 32 * v94; /*0x100369c94*/
                        *(_DWORD *)(v149 + v96) = v67; /*0x100369c98*/
                        *(_QWORD *)(v95 + v96 + 8) = v164; /*0x100369ca0*/
                        *(_QWORD *)(v95 + v96 + 16) = v161; /*0x100369ca9*/
                        *(_QWORD *)(v95 + v96 + 24) = v160; /*0x100369cb2*/
                        v150 = v94 + 1; /*0x100369cba*/
                      }
                      else
                      {
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v164, 1); /*0x100369ccf*/
                        v160 = 0; /*0x100369cd4*/
                      }
                    }
                    continue; /*0x100369cc1*/
                  }
                  v152 = v87; /*0x100369e32*/
                  v104 = 1; /*0x100369e39*/
                }
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v104, v152); /*0x100369e0b*/
              }
              if ( v163 ) /*0x100369b17*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v163, 1); /*0x100369b25*/
              if ( v156 ) /*0x100369b31*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v156, 1); /*0x100369b40*/
            }
            continue; /*0x100369769*/
          }
          v78 = v75; /*0x10036997a*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v108); /*0x10036997d*/
          v79 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v77, 1); /*0x10036998a*/
          if ( v79 ) /*0x100369992*/
          {
            v80 = v79; /*0x100369998*/
            v75 = v78; /*0x10036999b*/
            v44 = (int)v162; /*0x10036999e*/
            goto LABEL_101; /*0x1003699a1*/
          }
          v165 = (char *)v77; /*0x100369e27*/
          v103 = 1; /*0x100369e2b*/
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v103, v165); /*0x100369dfb*/
      }
    }
LABEL_62:
    ; /*0x100369777*/
  }
  while ( !HIBYTE(v144) ); /*0x10036977d*/
  v97 = v151; /*0x100369ce1*/
  v151[2] = v150; /*0x100369cef*/
  v98 = v148; /*0x100369cf3*/
  v97[1] = v149; /*0x100369d01*/
  *v97 = v98; /*0x100369d05*/
  if ( v128 ) /*0x100369d12*/
  {
    v99 = (4 * v128 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x100369d1c*/
    if ( v99 + v128 != -17 ) /*0x100369d27*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127 - v99, v99 + v128 + 17, 16); /*0x100369d38*/
  }
  if ( v117 != 0x8000000000000000LL && v117 ) /*0x100369d56*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v117, 1); /*0x100369d64*/
  if ( v133 ) /*0x100369d73*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v133, 1); /*0x100369d81*/
  if ( v136 ) /*0x100369d90*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1); /*0x100369d9e*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v105); /*0x100369daa*/
  v100 = v147; /*0x100369daf*/
  if ( v147 ) /*0x100369db9*/
  {
    v101 = (_QWORD *)(v146 + 8); /*0x100369dc6*/
    do /*0x100369dd7*/
    {
      v102 = *(v101 - 1); /*0x100369ddd*/
      if ( v102 ) /*0x100369de4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v101, v102, 1); /*0x100369dee*/
      v101 += 3; /*0x100369dd0*/
      --v100; /*0x100369dd4*/
    }
    while ( v100 ); /*0x100369dd7*/
  }
LABEL_37:
  result = v145; /*0x100369491*/
  if ( v145 ) /*0x10036949b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, 24 * v145, 8); /*0x1003694b1*/
  return result; /*0x1003694b6*/
}