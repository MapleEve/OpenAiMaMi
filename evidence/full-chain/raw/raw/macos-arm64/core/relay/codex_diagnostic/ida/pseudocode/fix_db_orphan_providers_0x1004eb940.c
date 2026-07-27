// __ZN13codexmate_lib4core5relay16codex_diagnostic23fix_db_orphan_providers @ 0x1004eb940 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::h4a50b8ce63a1b452(
        char *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rax
  char *v14; // rdx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  char **v18; // r13
  __int64 result; // rax
  unsigned __int64 v20; // rbx
  _BYTE *v21; // rsi
  void **v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rbx
  void *v29; // r12
  void *v30; // r14
  char *v31; // r8
  void *v32; // r13
  unsigned __int128 v33; // rax
  _BYTE *v34; // r14
  size_t v35; // r15
  __int64 v36; // r12
  void *v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rbx
  void *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // r14
  __int64 v43; // rax
  void *v44; // rcx
  void *v45; // rdx
  __int128 v46; // kr00_16
  char *v47; // r9
  char *v48; // rsi
  __int64 v49; // rcx
  char *v50; // r14
  char *v51; // r15
  __int64 v52; // rax
  void **v53; // r14
  size_t v54; // rbx
  __int64 v55; // r15
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r12
  void **v59; // r15
  __int64 v60; // rsi
  bool v61; // al
  char *v62; // r14
  char *v63; // r15
  int v64; // edx
  unsigned __int128 v65; // rax
  __int64 v66; // rax
  size_t v67; // rdx
  __int64 v68; // r13
  void *v69; // r13
  void *v70; // rsi
  __int64 v71; // r14
  void **v72; // r12
  void **v73; // rbx
  void ***v74; // r15
  __int64 v75; // rsi
  void **v76; // rbx
  __int64 v77; // r14
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rcx
  void ***v83; // r12
  __int64 v84; // rbx
  void **v85; // r13
  __int64 v86; // r15
  bool v87; // cf
  __int64 v88; // rbx
  __int64 v89; // r15
  __int64 v90; // rsi
  unsigned __int64 v91; // rbx
  __int64 v92; // rsi
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // r15
  __int64 v97; // rsi
  _QWORD *v98; // r14
  unsigned __int64 v99; // rbx
  char *v100; // r15
  int autocommit; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rbx
  _QWORD *v106; // r12
  __int64 v107; // r14
  __int128 v108; // kr20_16
  void *v109; // rbx
  void *v110; // r13
  char v111; // al
  char *v112; // r15
  __int64 v113; // rax
  _QWORD *v114; // rbx
  void *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // r14
  _QWORD *v118; // rax
  void *v119; // rax
  void *v120; // rcx
  void *v121; // rdx
  __int128 v122; // kr30_16
  char *v123; // r9
  char *v124; // rax
  char *v125; // rdx
  unsigned __int64 v126; // rsi
  __int64 v127; // rbx
  _QWORD *v128; // r14
  const void *v129; // r13
  size_t v130; // r12
  __int64 v131; // r15
  char v132; // al
  __int64 v133; // r15
  _QWORD *v134; // rsi
  __int64 v135; // rax
  _QWORD *v136; // rbx
  void *v137; // rax
  __int64 v138; // rax
  _QWORD *v139; // rbx
  __int64 v140; // rax
  unsigned __int64 v142; // rcx
  __int64 v143; // rdx
  void *v144; // rsi
  char *v145; // r9
  void *v146; // rbx
  char *v147; // r14
  char *v148; // r15
  const __m128i *v150; // r12
  int v151; // r13d
  __int64 v152; // rax
  __int64 v153; // rsi
  unsigned __int64 v154; // rax
  __int64 v155; // rbx
  char *v156; // rbx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rbx
  _QWORD *v160; // rax
  _BYTE *v161; // rsi
  __int64 v162; // rdx
  __int64 v163; // rcx
  _QWORD *v164; // r14
  __int64 v165; // rsi
  __int64 v166; // r14
  __int64 v167; // rbx
  __int64 v168; // rsi
  __int64 v169; // rax
  _QWORD *v170; // rcx
  unsigned __int64 v171; // r15
  unsigned __int64 v172; // rdi
  __int64 v173; // rax
  __int64 v174; // r12
  unsigned __int64 v175; // r8
  __int64 v176; // rdx
  __int64 v177; // rsi
  __int64 v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rax
  __int64 v184; // r13
  __int64 v185; // rax
  _QWORD *v186; // rbx
  void *v187; // rax
  __int64 v188; // rax
  _QWORD *v189; // r12
  __int64 v190; // rax
  unsigned __int64 v191; // rax
  unsigned __int64 v192; // rcx
  __int64 v193; // rdx
  void *v194; // rsi
  char *v195; // r9
  void *v197; // rbx
  char *v198; // r14
  char *v199; // r15
  const __m128i *v201; // r12
  int v202; // r13d
  __int64 v203; // rax
  __int64 v204; // rsi
  unsigned __int64 v205; // rax
  __int64 v206; // rbx
  __int64 v207; // rbx
  char *v208; // r14
  _QWORD *v209; // r15
  __int64 v210; // rsi
  __int64 v211; // rbx
  __int64 v212; // r14
  const __m128i *v213; // r15
  const __m128i *v215; // r12
  int v216; // r13d
  __int64 v217; // rax
  __int64 v218; // rsi
  __int64 v219; // rbx
  __int64 v220; // rbx
  __int64 v221; // r14
  const __m128i *v222; // r15
  const __m128i *v224; // r12
  int v225; // r13d
  __int64 v226; // rax
  __int64 v227; // rsi
  __int64 v228; // rbx
  __int64 v229; // r14
  const __m128i *v230; // r15
  const __m128i *v232; // r12
  int v233; // r13d
  __int64 v234; // rax
  __int64 v235; // rsi
  __int64 v236; // rbx
  __int64 v237; // r14
  const __m128i *v238; // r15
  const __m128i *v240; // r12
  int v241; // r13d
  __int64 v242; // rax
  __int64 v243; // rsi
  __int64 v244; // rbx
  __int64 v245; // rbx
  __int64 v246; // r14
  char v247; // r15
  char *v248; // r12
  unsigned __int64 v249; // rbx
  unsigned __int64 v250; // rax
  unsigned __int64 *v251; // rbx
  unsigned __int64 v252; // r13
  unsigned __int64 v253; // r12
  __int64 v254; // rax
  size_t v255; // rdx
  bool v256; // cc
  unsigned __int64 v257; // rax
  unsigned __int64 v258; // rax
  unsigned __int64 *v259; // r12
  size_t v260; // rdx
  __int64 v261; // [rsp+0h] [rbp-4D0h]
  __int64 v262; // [rsp+8h] [rbp-4C8h] BYREF
  __int64 v263; // [rsp+10h] [rbp-4C0h]
  __int64 v264; // [rsp+18h] [rbp-4B8h]
  _QWORD v265[3]; // [rsp+20h] [rbp-4B0h] BYREF
  _QWORD v266[3]; // [rsp+38h] [rbp-498h] BYREF
  const __m128i *v267; // [rsp+50h] [rbp-480h] BYREF
  __int64 v268; // [rsp+58h] [rbp-478h]
  __int64 v269; // [rsp+68h] [rbp-468h]
  __int64 v270; // [rsp+80h] [rbp-450h] BYREF
  __int64 *v271; // [rsp+88h] [rbp-448h] BYREF
  __int64 v272; // [rsp+90h] [rbp-440h]
  __int64 v273; // [rsp+98h] [rbp-438h]
  __int64 v274; // [rsp+A0h] [rbp-430h]
  void **v275; // [rsp+A8h] [rbp-428h]
  const __m128i *v276; // [rsp+B0h] [rbp-420h] BYREF
  __int128 v277; // [rsp+B8h] [rbp-418h]
  __int64 v278; // [rsp+C8h] [rbp-408h]
  __int64 v279; // [rsp+D0h] [rbp-400h]
  __int64 v280; // [rsp+D8h] [rbp-3F8h]
  char *v281; // [rsp+E0h] [rbp-3F0h] BYREF
  char *v282; // [rsp+E8h] [rbp-3E8h] BYREF
  __int64 v283; // [rsp+F0h] [rbp-3E0h]
  __int64 v284; // [rsp+F8h] [rbp-3D8h] BYREF
  __int64 v285; // [rsp+100h] [rbp-3D0h]
  __int64 v286; // [rsp+110h] [rbp-3C0h] BYREF
  unsigned __int64 v287; // [rsp+118h] [rbp-3B8h]
  unsigned __int64 v288; // [rsp+120h] [rbp-3B0h]
  __int64 v289; // [rsp+128h] [rbp-3A8h]
  unsigned __int64 v290; // [rsp+130h] [rbp-3A0h]
  __int64 v291; // [rsp+138h] [rbp-398h]
  void **v292; // [rsp+140h] [rbp-390h]
  __int128 v293; // [rsp+148h] [rbp-388h] BYREF
  __int64 v294; // [rsp+158h] [rbp-378h]
  unsigned __int128 v295; // [rsp+160h] [rbp-370h] BYREF
  _BYTE v296[23]; // [rsp+170h] [rbp-360h]
  unsigned int v297; // [rsp+194h] [rbp-33Ch]
  __int64 v298; // [rsp+198h] [rbp-338h] BYREF
  unsigned __int64 v299; // [rsp+1A0h] [rbp-330h]
  __int64 v300; // [rsp+1A8h] [rbp-328h]
  void **v301; // [rsp+1B0h] [rbp-320h]
  _OWORD v302[6]; // [rsp+1B8h] [rbp-318h] BYREF
  void *__s1[13]; // [rsp+218h] [rbp-2B8h] BYREF
  __int64 v304; // [rsp+280h] [rbp-250h]
  _QWORD *v305; // [rsp+288h] [rbp-248h]
  _BYTE v306[40]; // [rsp+290h] [rbp-240h] BYREF
  __int64 v307; // [rsp+2B8h] [rbp-218h]
  __int64 v308; // [rsp+2C0h] [rbp-210h]
  __int64 v309; // [rsp+2C8h] [rbp-208h]
  char *v310; // [rsp+2D0h] [rbp-200h]
  unsigned __int64 v311; // [rsp+2D8h] [rbp-1F8h]
  char *v312; // [rsp+2E0h] [rbp-1F0h]
  _BYTE v313[104]; // [rsp+2E8h] [rbp-1E8h] BYREF
  unsigned __int8 v314; // [rsp+350h] [rbp-180h]
  _BYTE v315[7]; // [rsp+351h] [rbp-17Fh]
  void *__s2[13]; // [rsp+358h] [rbp-178h] BYREF
  void *v317; // [rsp+3C0h] [rbp-110h] BYREF
  __int64 v318; // [rsp+3C8h] [rbp-108h]
  void *v319; // [rsp+3D0h] [rbp-100h]
  char **v320; // [rsp+3D8h] [rbp-F8h]
  char *v321; // [rsp+3E0h] [rbp-F0h]
  _BYTE v322[104]; // [rsp+3E8h] [rbp-E8h] BYREF
  unsigned __int8 v323; // [rsp+450h] [rbp-80h]
  _DWORD v324[11]; // [rsp+451h] [rbp-7Fh]
  char *v325; // [rsp+480h] [rbp-50h]
  char *v326; // [rsp+488h] [rbp-48h]
  unsigned __int64 v327; // [rsp+490h] [rbp-40h]
  unsigned __int64 v328; // [rsp+498h] [rbp-38h]
  void **v329; // [rsp+4A0h] [rbp-30h]

  v326 = a1;
  v4 = v322;
  v305 = (_QWORD *)a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v322);
  v5 = *(_QWORD *)&v322[16];
  if ( !*(_QWORD *)&v322[16] )
  {
    if ( *(_QWORD *)v322 )
    {
      v4 = *(_BYTE **)&v322[8];
      a2 = 24LL * *(_QWORD *)v322;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v322[8], 24LL * *(_QWORD *)v322, 8);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, a2);
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v38 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v39 = (_QWORD *)v38;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v40 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v40 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    qmemcpy(v40, "db_orphan_providers", 19);
    *v39 = 19;
    v39[1] = v40;
    v39[2] = 19;
    __s2[0] = (void *)1;
    __s2[1] = v39;
    __s2[2] = (void *)1;
    *(_QWORD *)v313 = 0;
    *(_QWORD *)&v313[8] = 8;
    *(_QWORD *)&v313[16] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
    v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v41 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v42 = (_QWORD *)v41;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
    if ( !v43 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
    *(_QWORD *)(v43 + 24) = 0xA4E5AEBFE4809CE9LL;
    *(_QWORD *)(v43 + 16) = 0xA097E68CBCEFA89CLL;
    *(_QWORD *)(v43 + 8) = 0xE598ADE58DB8E493LL;
    *(_QWORD *)v43 = 0xBAE5AE8DE6B095E6LL;
    *(_BYTE *)(v43 + 32) = -115;
    *v42 = 33;
    v42[1] = v43;
    v42[2] = 33;
    result = (__int64)__s2[2];
    v44 = __s2[0];
    v45 = __s2[1];
    *(_OWORD *)&v322[8] = *(_OWORD *)&__s2[1];
    *(void **)v322 = __s2[0];
    v46 = *(_OWORD *)v313;
    *(_OWORD *)&v322[24] = *(_OWORD *)v313;
    *(_QWORD *)&v322[40] = *(_QWORD *)&v313[16];
    v47 = v326;
    *((_QWORD *)v326 + 6) = *(_QWORD *)&v313[16];
    *((_OWORD *)v47 + 2) = v46;
    *((_QWORD *)v47 + 3) = result;
    *((_QWORD *)v47 + 2) = v45;
    *((_QWORD *)v47 + 1) = v44;
    *((_QWORD *)v47 + 7) = 1;
    *((_QWORD *)v47 + 8) = v42;
    *((_QWORD *)v47 + 9) = 1;
    *(_QWORD *)v47 = 11;
    return result;
  }
  v6 = *(_QWORD *)&v322[8];
  v7 = (_QWORD *)(*(_QWORD *)&v322[8] + 8LL);
  do
  {
    v8 = *(v7 - 1);
    if ( v8 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v7, v8, 1);
    v7 += 3;
    --v5;
  }
  while ( v5 );
  if ( *(_QWORD *)v322 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24LL * *(_QWORD *)v322, 8);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_QWORD *)(a3 + 16);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v12 = v11;
  if ( *((_BYTE *)v11 + 16) == 1 )
  {
    v13 = *v11;
    v14 = (char *)v12[1];
  }
  else
  {
    v13 = ((__int64 (*)(void))std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45)();
    *v12 = v13;
    v12[1] = (__int64)v14;
    *((_BYTE *)v12 + 16) = 1;
  }
  v320 = (char **)v12;
  *v12 = v13 + 1;
  memset(&v322[8], 0, 24);
  *(_QWORD *)v322 = &xmmword_1015FBEC0;
  *(_QWORD *)&v322[32] = v13;
  for ( *(_QWORD *)&v322[40] = v14; v10; --v10 )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v313, v9);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v322, v313);
    v9 += 232;
  }
  v280 = *(_QWORD *)&v322[40];
  v279 = *(_QWORD *)&v322[32];
  v278 = *(_QWORD *)&v322[24];
  v277 = *(_OWORD *)&v322[8];
  v276 = *(const __m128i **)v322;
  v15 = v305;
  v16 = v305[7];
  v17 = v305[8];
  v297 = *(unsigned __int8 *)(a3 + 292);
  codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::hc5129088cc949268(&v267, v16, v17, &v276);
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(v322, v15);
  v18 = v320;
  result = *(_QWORD *)v322;
  *(_OWORD *)v313 = *(_OWORD *)&v322[8];
  *(_QWORD *)&v313[16] = *(_QWORD *)&v322[24];
  if ( *(_QWORD *)v322 != 11 )
  {
    v48 = v326;
    *((_QWORD *)v326 + 11) = *(_QWORD *)&v322[88];
    *((_QWORD *)v48 + 10) = *(_QWORD *)&v322[80];
    *((_QWORD *)v48 + 9) = *(_QWORD *)&v322[72];
    *((_QWORD *)v48 + 8) = *(_QWORD *)&v322[64];
    *((_QWORD *)v48 + 7) = *(_QWORD *)&v322[56];
    *((_QWORD *)v48 + 6) = *(_QWORD *)&v322[48];
    v49 = *(_QWORD *)&v322[32];
    *((_QWORD *)v48 + 5) = *(_QWORD *)&v322[40];
    *((_QWORD *)v48 + 4) = v49;
    *((_QWORD *)v48 + 3) = *(_QWORD *)&v313[16];
    *(_OWORD *)(v48 + 8) = *(_OWORD *)v313;
    *(_QWORD *)v48 = result;
    goto LABEL_277;
  }
  v293 = *(_OWORD *)v313;
  v294 = *(_QWORD *)&v313[16];
  v266[0] = *(_QWORD *)&v313[8];
  v266[1] = *(_QWORD *)&v313[8] + 96LL * *(_QWORD *)&v313[16];
  v266[2] = &v267;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3b1af4f91b849d42(
    &v286,
    v266);
  v20 = v288;
  v21 = v305;
  if ( !v288 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v286, v305);
    v113 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v113 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v114 = (_QWORD *)v113;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v115 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v115 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    qmemcpy(v115, "db_orphan_providers", 19);
    *v114 = 19;
    v114[1] = v115;
    v114[2] = 19;
    __s2[0] = (void *)1;
    __s2[1] = v114;
    __s2[2] = (void *)1;
    *(_QWORD *)v313 = 0;
    *(_QWORD *)&v313[8] = 8;
    *(_QWORD *)&v313[16] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
    v116 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v116 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v117 = (_QWORD *)v116;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v118 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( !v118 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
    *(_QWORD *)((char *)v118 + 31) = 0x72656469766F7270LL;
    v118[3] = 0x70208BA8E7BFBAE7LL;
    v118[2] = 0xBBB8E4849AE78DA4LL;
    v118[1] = 0xE5AEBFE481A6E880LL;
    *v118 = 0x9CE9899CE6A1B2E6LL;
    *v117 = 39;
    v117[1] = v118;
    v117[2] = 39;
    v119 = __s2[2];
    v120 = __s2[0];
    v121 = __s2[1];
    *(_OWORD *)&v322[8] = *(_OWORD *)&__s2[1];
    *(void **)v322 = __s2[0];
    v122 = *(_OWORD *)v313;
    *(_OWORD *)&v322[24] = *(_OWORD *)v313;
    *(_QWORD *)&v322[40] = *(_QWORD *)&v313[16];
    v123 = v326;
    *((_QWORD *)v326 + 6) = *(_QWORD *)&v313[16];
    *((_OWORD *)v123 + 2) = v122;
    *((_QWORD *)v123 + 3) = v119;
    *((_QWORD *)v123 + 2) = v121;
    *((_QWORD *)v123 + 1) = v120;
    *((_QWORD *)v123 + 7) = 1;
    *((_QWORD *)v123 + 8) = v117;
    *((_QWORD *)v123 + 9) = 1;
    *(_QWORD *)v123 = 11;
    goto LABEL_273;
  }
  v22 = (void **)&v284;
  codexmate_lib::core::relay::codex_catalog::resolve_native_default_model::hdcb8d9b9260fe2d4(&v284, v305);
  v304 = 0x7FFFFFFFFFFFFFF1LL;
  v282 = "openaicodex_router_catalog.jsonmodels_cache.json";
  v283 = 6;
  v317 = nullptr;
  v318 = 8;
  v319 = nullptr;
  v23 = v287;
  v289 = 8 * v20;
  v327 = v20;
  v299 = v287 + 8 * v20;
  v328 = v287;
  do
  {
    v311 = v23 + 8;
    v26 = v318;
    v312 = (char *)v23;
    v27 = *(_QWORD *)v23;
    v321 = *(char **)(*(_QWORD *)v23 + 8LL);
    v325 = *(char **)(v27 + 16);
    v28 = 24LL * (_QWORD)v319;
    while ( v28 )
    {
      std::path::Path::components::he8b0f71a48373be5(__s1, *(_QWORD *)(v26 + 8), *(_QWORD *)(v26 + 16));
      std::path::Path::components::he8b0f71a48373be5(__s2, v321, v325);
      v29 = __s1[0];
      v30 = __s1[1];
      v31 = (char *)__s2[0];
      v32 = __s2[1];
      if ( __s1[1] == __s2[1] && LOBYTE(__s1[7]) == LOBYTE(__s2[7]) && BYTE1(__s1[7]) == 2 && BYTE1(__s2[7]) == 2 )
      {
        v22 = (void **)__s1[0];
        v21 = __s2[0];
        v310 = (char *)__s2[0];
        LODWORD(v33) = memcmp(__s1[0], __s2[0], (size_t)__s1[1]);
        v31 = v310;
        if ( !(_DWORD)v33 )
        {
          v18 = v320;
          goto LABEL_16;
        }
      }
      if ( LOBYTE(__s1[2]) != 6 )
      {
        *(void **)&v306[31] = __s1[6];
        *(_OWORD *)&v306[16] = *(_OWORD *)((char *)&__s1[4] + 1);
        *(void **)&v306[8] = *(void **)((char *)&__s1[3] + 1);
        *(void **)v306 = *(void **)((char *)&__s1[2] + 1);
      }
      *(_QWORD *)v313 = v29;
      *(_QWORD *)&v313[8] = v30;
      v313[16] = __s1[2];
      *(_QWORD *)&v313[48] = *(_QWORD *)&v306[31];
      *(_OWORD *)&v313[33] = *(_OWORD *)&v306[16];
      *(_OWORD *)&v313[17] = *(_OWORD *)v306;
      *(_WORD *)&v313[56] = __s1[7];
      v313[58] = BYTE2(__s1[7]);
      if ( LOBYTE(__s2[2]) != 6 )
      {
        *(void **)((char *)&v302[1] + 15) = __s2[6];
        v302[1] = *(_OWORD *)((char *)&__s2[4] + 1);
        v302[0] = *(_OWORD *)((char *)&__s2[2] + 1);
      }
      *(_QWORD *)v322 = v31;
      *(_QWORD *)&v322[8] = v32;
      v322[16] = __s2[2];
      *(_QWORD *)&v322[48] = *(_QWORD *)((char *)&v302[1] + 15);
      *(_OWORD *)&v322[33] = v302[1];
      *(_OWORD *)&v322[17] = v302[0];
      *(_WORD *)&v322[56] = __s2[7];
      v322[58] = BYTE2(__s2[7]);
      v22 = (void **)v313;
      v21 = v322;
      LOBYTE(v33) = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v313, v322);
      v26 += 24;
      v28 -= 24;
      v18 = v320;
      if ( (_BYTE)v33 )
        goto LABEL_16;
    }
    v34 = *(_BYTE **)(*(_QWORD *)v312 + 8LL);
    v35 = *(_QWORD *)(*(_QWORD *)v312 + 16LL);
    if ( v35 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v21);
      v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v35, 1);
      if ( !v36 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v35);
    }
    else
    {
      v36 = 1;
    }
    v22 = (void **)v36;
    v21 = v34;
    memcpy((void *)v36, v34, v35);
    v37 = v319;
    if ( v319 == v317 )
    {
      v22 = &v317;
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v317);
    }
    v24 = v318;
    v25 = 3LL * (_QWORD)v37;
    *(_QWORD *)(v318 + 8 * v25) = v35;
    *(_QWORD *)(v24 + 8 * v25 + 8) = v36;
    *(_QWORD *)(v24 + 8 * v25 + 16) = v35;
    v319 = (char *)v37 + 1;
LABEL_16:
    v23 = v311;
  }
  while ( v311 != v299 );
  v310 = (char *)v319;
  if ( !v319 )
  {
    v281 = nullptr;
    v298 = 0;
    goto LABEL_152;
  }
  v311 = v318;
  v312 = (char *)v305[73];
  v299 = v305[74];
  v272 = v305[1];
  v273 = v305[2];
  v50 = nullptr;
  v51 = nullptr;
  do
  {
    v325 = v51;
    v321 = v50;
    v52 = 3LL * (_QWORD)v50;
    v53 = *(void ***)(v311 + 24LL * (_QWORD)v50 + 8);
    v54 = *(_QWORD *)(v311 + 8 * v52 + 16);
    std::sys::fs::metadata::h32fa16d3052ea535(v322, v53, v54);
    v55 = *(_QWORD *)v322;
    v21 = *(_BYTE **)&v322[8];
    v22 = *(void ***)v322;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
      *(_QWORD *)v322,
      *(_QWORD *)&v322[8]);
    if ( v55 )
      goto LABEL_52;
    std::path::Path::_join::hb1a495d4f06b13b8(
      v306,
      v312,
      v299,
      "state-db-backupscodex-session.mdproxy_last_errorlast_codex_routeregistry-backupsquota-store.json",
      16);
    *(_WORD *)v322 = 511;
    v322[2] = 1;
    v58 = *(_QWORD *)&v306[16];
    v59 = *(void ***)&v306[8];
    v22 = (void **)v322;
    v60 = *(_QWORD *)&v306[8];
    *(_QWORD *)&v33 = std::fs::DirBuilder::_create::h099c6e2853c95452(v322, *(_QWORD *)&v306[8], *(_QWORD *)&v306[16]);
    if ( (_QWORD)v33 )
    {
      v25 = v33 & 3;
      if ( (_DWORD)v25 == 1 )
      {
        v329 = v59;
        v76 = (void **)(v33 - 1);
        v77 = *(_QWORD *)(v33 - 1);
        v78 = *(_QWORD *)(v33 + 7);
        if ( *(_QWORD *)v78 )
          (*(void (__fastcall **)(__int64))v78)(v77);
        v79 = *(_QWORD *)(v78 + 8);
        if ( v79 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v79, *(_QWORD *)(v78 + 16));
        v22 = v76;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 24, 8);
        v59 = v329;
      }
LABEL_50:
      v21 = *(_BYTE **)v306;
      if ( *(_QWORD *)v306 )
      {
        v22 = v59;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, *(_QWORD *)v306, 1);
      }
LABEL_52:
      v61 = 0;
      v62 = v321;
      v63 = v325;
      goto LABEL_53;
    }
    *(_QWORD *)v313 = std::time::SystemTime::now::h1fe79e41f9d5677f(v322, v60);
    *(_DWORD *)&v313[8] = v64;
    std::time::SystemTime::duration_since::had059553cab94f96(v322, v313, 0, 0);
    v65 = 0u;
    if ( !v322[0] )
      v65 = *(unsigned int *)&v322[16] + *(unsigned __int64 *)&v322[8] * (unsigned __int128)0x3B9ACA00uLL;
    v295 = v65;
    v66 = std::path::Path::_strip_prefix::h737731a9318ab115(v53, v54, v272, v273);
    if ( !v66 )
    {
      v67 = v54;
      v66 = (__int64)v53;
    }
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v322, v66, v67);
    v68 = *(_QWORD *)&v322[8];
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::he70c13e769e089d9(
      v302,
      *(_QWORD *)&v322[8],
      *(_QWORD *)&v322[8] + *(_QWORD *)&v322[16]);
    if ( 2LL * *(_QWORD *)v322 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, *(_QWORD *)v322, 1);
    *(_QWORD *)v322 = &v295;
    *(_QWORD *)&v322[8] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v322[16] = v302;
    *(_QWORD *)&v322[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__s2, &unk_1017C0167, v322);
    v69 = __s2[1];
    std::path::Path::_join::hb1a495d4f06b13b8(__s1, v59, v58, __s2[1], __s2[2]);
    if ( __s2[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, __s2[0], 1);
    v22 = v53;
    v301 = (void **)__s1[1];
    LOBYTE(v33) = std::sys::fs::copy::hcda968f022f0a0e3(v53, v54, __s1[1], (size_t)__s1[2]);
    v18 = v320;
    if ( (v33 & 1) != 0 )
    {
      if ( (BYTE8(v33) & 3) == 1 )
      {
        v329 = v59;
        v94 = *((_QWORD *)&v33 + 1) - 1LL;
        v95 = *(_QWORD *)(*((_QWORD *)&v33 + 1) - 1LL);
        v96 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 7LL);
        if ( *(_QWORD *)v96 )
          (*(void (__fastcall **)(_QWORD))v96)(*(_QWORD *)(*((_QWORD *)&v33 + 1) - 1LL));
        v97 = *(_QWORD *)(v96 + 8);
        if ( v97 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v97, *(_QWORD *)(v96 + 16));
        v22 = (void **)v94;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, 24, 8);
        v59 = v329;
        v70 = __s1[0];
        if ( !__s1[0] )
          goto LABEL_67;
      }
      else
      {
        v70 = __s1[0];
        if ( !__s1[0] )
          goto LABEL_67;
      }
      v22 = v301;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v301, v70, 1);
LABEL_67:
      if ( *(_QWORD *)&v302[0] )
      {
        v22 = *((void ***)&v302[0] + 1);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v302[0] + 1), *(_QWORD *)&v302[0], 1);
      }
      goto LABEL_50;
    }
    std::sys::fs::read_dir::h768dda1fe4336014(v322, v59, v58);
    *(_QWORD *)v313 = *(_QWORD *)v322;
    v313[8] = v322[8];
    if ( v322[8] == 2 )
    {
      v22 = (void **)v313;
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(v313);
    }
    else
    {
      v22 = (void **)v313;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heaab5cab356a697d(
        v313,
        *(_QWORD *)v322,
        v322[8]);
      v71 = *(_QWORD *)&v313[16];
      if ( *(_QWORD *)&v313[16] >= 0x15u )
      {
        v80 = *(_QWORD *)&v313[8];
        v22 = *(void ***)&v313[8];
        v329 = v59;
        core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(*(_QWORD *)&v313[8], *(_QWORD *)&v313[16], v322);
        *(_QWORD *)&v33 = 8 * v71;
        *(_QWORD *)v322 = v80;
        v274 = *(_QWORD *)v313;
        *(_QWORD *)&v322[16] = *(_QWORD *)v313;
        v291 = v80 + 24 * v71;
        *(_QWORD *)&v322[24] = v291;
        v81 = v71 - 21;
        v82 = 3 * v33 - 24;
        v83 = (void ***)(v80 + 32);
        v275 = (void **)v80;
        *(_QWORD *)&v33 = v80;
        while ( 1 )
        {
          v290 = v82;
          *((_QWORD *)&v33 + 1) = v33 + 24;
          v84 = *(_QWORD *)v33;
          if ( *(_QWORD *)v33 == 0x8000000000000000LL )
            break;
          v300 = v33 + 24;
          v85 = *(void ***)(v33 + 8);
          v22 = v85;
          v86 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v85, *(_QWORD *)(v33 + 16));
          if ( v84 )
          {
            v22 = v85;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v84, 1);
          }
          v18 = v320;
          if ( (v86 & 3) == 1 )
          {
            v292 = (void **)(v86 - 1);
            v88 = *(_QWORD *)(v86 - 1);
            v89 = *(_QWORD *)(v86 + 7);
            if ( *(_QWORD *)v89 )
              (*(void (__fastcall **)(__int64))v89)(v88);
            v90 = *(_QWORD *)(v89 + 8);
            if ( v90 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v90, *(_QWORD *)(v89 + 16));
            v22 = v292;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v292, 24, 8);
            v87 = v81-- == 0;
            v59 = v329;
            *((_QWORD *)&v33 + 1) = v300;
            if ( v87 )
              break;
          }
          else
          {
            v87 = v81-- == 0;
            v59 = v329;
            *((_QWORD *)&v33 + 1) = v300;
            if ( v87 )
              break;
          }
          v82 = v290 - 24;
          v83 += 3;
          *(_QWORD *)&v33 = *((_QWORD *)&v33 + 1);
          if ( *((_QWORD *)&v33 + 1) == v291 )
            goto LABEL_103;
        }
        if ( *((_QWORD *)&v33 + 1) != v291 )
        {
          v33 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)v290;
          v91 = v290 / 0x18;
          do
          {
            v92 = (__int64)*(v83 - 1);
            if ( v92 )
            {
              v22 = *v83;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v83, v92, 1);
            }
            v83 += 3;
            --v91;
          }
          while ( v91 );
        }
LABEL_103:
        if ( v274 )
        {
          v22 = v275;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v275, 24 * v274, 8);
        }
      }
      else
      {
        v72 = v59;
        v73 = *(void ***)&v313[8];
        if ( *(_QWORD *)&v313[16] )
        {
          v74 = (void ***)(*(_QWORD *)&v313[8] + 8LL);
          do
          {
            v75 = (__int64)*(v74 - 1);
            if ( v75 )
            {
              v22 = *v74;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v74, v75, 1);
            }
            v74 += 3;
            --v71;
          }
          while ( v71 );
        }
        if ( *(_QWORD *)v313 )
        {
          v22 = v73;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24LL * *(_QWORD *)v313, 8);
        }
        v59 = v72;
      }
    }
    v93 = (__int64)__s1[0];
    if ( *(_QWORD *)&v302[0] )
    {
      v22 = *((void ***)&v302[0] + 1);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v302[0] + 1), *(_QWORD *)&v302[0], 1);
    }
    v21 = *(_BYTE **)v306;
    if ( *(_QWORD *)v306 )
    {
      v22 = v59;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, *(_QWORD *)v306, 1);
    }
    v61 = v93 != 0x8000000000000000LL;
    v25 = -v93;
    v62 = v321;
    v63 = v325;
    if ( !__OFSUB__(-v93, 1) )
    {
      if ( v93 )
      {
        v22 = v301;
        v21 = (_BYTE *)v93;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v301, v93, 1);
      }
      v61 = 1;
    }
LABEL_53:
    v51 = &v63[v61];
    v50 = v62 + 1;
  }
  while ( v50 != v310 );
  v98 = (_QWORD *)v318;
  v281 = v51;
  v298 = 0;
  if ( v319 )
  {
    v312 = (char *)(v318 + 24LL * (_QWORD)v319);
    v325 = (char *)0x8000000000000016LL;
    v311 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      rusqlite::Connection::open_with_flags::h44d322d71fbb5f40(v322, v98[1], v98[2], 32838, v56, v57, v261, v262, v263);
      v99 = v328;
      if ( v323 == 3 )
      {
        v309 = *(_QWORD *)&v322[56];
        v308 = *(_QWORD *)&v322[48];
        v307 = *(_QWORD *)&v322[40];
        *(__m256i *)&v306[8] = *(__m256i *)&v322[8];
        *(_QWORD *)v306 = *(_QWORD *)v322;
        codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::_$u7b$$u7b$closure$u7d$$u7d$::h5fc22ea517f28697(
          v302,
          v98[1],
          v98[2],
          v306);
        qmemcpy(__s2, v302, 0x60u);
        qmemcpy(__s1, __s2, 0x60u);
        qmemcpy(v326, __s1, 0x60u);
        v156 = (char *)v319;
        if ( v319 )
          goto LABEL_197;
LABEL_269:
        if ( v317 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v318, 24LL * (_QWORD)v317, 8);
        if ( v284 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v285, v284, 1);
LABEL_273:
        if ( v286 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v287, 8 * v286, 8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v293);
        result = v293;
        if ( (_QWORD)v293 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v293 + 1), 96 * v293, 8);
LABEL_277:
        v228 = v268;
        if ( v268 )
        {
          v229 = v269;
          if ( v269 )
          {
            v230 = v267;
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v267));
            v232 = v267 + 1;
            do
            {
              if ( !(_WORD)_R13D )
              {
                do
                {
                  v233 = _mm_movemask_epi8(_mm_load_si128(v232));
                  v230 -= 24;
                  ++v232;
                }
                while ( v233 == 0xFFFF );
                _R13D = ~v233;
              }
              __asm { tzcnt   eax, r13d }
              v234 = -3 * result;
              v235 = *((_QWORD *)&v230[-1] + v234 - 1);
              if ( v235 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230[-1].i64[v234], v235, 1);
              --v229;
              result = _R13D & (unsigned int)(_R13D - 1);
              _R13D &= _R13D - 1;
            }
            while ( v229 );
          }
          result = (24 * v228 + 39) & 0xFFFFFFFFFFFFFFF0LL;
          v236 = result + v228 + 17;
          if ( v236 )
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v267 - result, v236, 16);
        }
        v220 = v277;
        if ( (_QWORD)v277 )
        {
          v237 = v278;
          if ( v278 )
          {
            v238 = v276;
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v276));
            v240 = v276 + 1;
            do
            {
              if ( !(_WORD)_R13D )
              {
                do
                {
                  v241 = _mm_movemask_epi8(_mm_load_si128(v240));
                  v238 -= 24;
                  ++v240;
                }
                while ( v241 == 0xFFFF );
                _R13D = ~v241;
              }
              __asm { tzcnt   eax, r13d }
              v242 = -3 * result;
              v243 = *((_QWORD *)&v238[-1] + v242 - 1);
              if ( v243 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v238[-1].i64[v242], v243, 1);
              --v237;
              result = _R13D & (unsigned int)(_R13D - 1);
              _R13D &= _R13D - 1;
            }
            while ( v237 );
          }
LABEL_297:
          result = (24 * v220 + 39) & 0xFFFFFFFFFFFFFFF0LL;
          v244 = result + v220 + 17;
          if ( v244 )
            return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v276 - result, v244, 16);
          return result;
        }
        return result;
      }
      qmemcpy(__s2, v322, sizeof(__s2));
      *(_DWORD *)&v315[3] = *(_DWORD *)((char *)v324 + 3);
      *(_DWORD *)v315 = v324[0];
      qmemcpy(__s1, __s2, sizeof(__s1));
      qmemcpy(v313, __s1, sizeof(v313));
      v314 = v323;
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
        v322,
        v313,
        *(&off_101964A70 + v323),
        qword_1015FFAC8[v323]);
      if ( *(char **)v322 != v325 )
      {
        __s2[7] = *(void **)&v322[56];
        *(_OWORD *)((char *)&__s2[5] + 1) = *(_OWORD *)&v322[41];
        *(_OWORD *)((char *)&__s2[3] + 1) = *(_OWORD *)&v322[25];
        *(void **)((char *)&__s2[2] + 1) = *(void **)&v322[17];
        __s2[0] = *(void **)v322;
        __s2[1] = *(void **)&v322[8];
        LOBYTE(__s2[2]) = v322[16];
        codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::_$u7b$$u7b$closure$u7d$$u7d$::h570afef660064df7(
          v322,
          v98[1],
          v98[2],
          __s2);
        v245 = *(_QWORD *)v322;
        v246 = *(_QWORD *)&v322[8];
        v247 = v322[16];
        v161 = &v322[17];
        v248 = v326;
        memcpy(v326 + 17, &v322[17], 0x4Fu);
        *(_QWORD *)v248 = v245;
        *((_QWORD *)v248 + 1) = v246;
        v248[16] = v247;
LABEL_195:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v313, v161, v162, v163);
LABEL_196:
        v156 = (char *)v319;
        if ( v319 )
          goto LABEL_197;
        goto LABEL_269;
      }
      v310 = (char *)(v98 + 3);
      v100 = nullptr;
      if ( v289 )
        break;
LABEL_124:
      v21 = v313;
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__s1, v313, "COMMIT", 6);
      if ( *(_QWORD *)v313 >= v311 )
        core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019649C8);
      ++*(_QWORD *)v313;
      autocommit = sqlite3_get_autocommit(*(sqlite3 **)&v313[16]);
      --*(_QWORD *)v313;
      if ( !autocommit )
      {
        v21 = v313;
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v322, v313, &unk_1015FBFE8, 8);
        if ( *(char **)v322 != v325 )
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v322);
      }
      if ( __s1[0] != v325 )
      {
        __s2[7] = __s1[7];
        __s2[6] = __s1[6];
        *(_OWORD *)&__s2[4] = *(_OWORD *)&__s1[4];
        __s2[3] = __s1[3];
        *(_OWORD *)&__s2[1] = *(_OWORD *)&__s1[1];
        __s2[0] = __s1[0];
        codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::_$u7b$$u7b$closure$u7d$$u7d$::h311becd70031d017(
          v322,
          v98[1],
          v98[2],
          __s2);
        qmemcpy(v326, v322, 0x60u);
        v161 = &v322[96];
        v163 = 0;
        goto LABEL_195;
      }
      v22 = (void **)v313;
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v313, v313, v102, v103);
      v98 = v310;
      if ( v310 == v312 )
        goto LABEL_152;
    }
    while ( 1 )
    {
      v104 = *(_QWORD *)&v100[v99];
      v105 = v98[1];
      v106 = v98;
      v107 = v98[2];
      std::path::Path::components::he8b0f71a48373be5(v302, *(_QWORD *)(v104 + 8), *(_QWORD *)(v104 + 16));
      std::path::Path::components::he8b0f71a48373be5(__s1, v105, v107);
      v321 = v100;
      v108 = v302[0];
      v109 = __s1[0];
      v110 = __s1[1];
      if ( *((void **)&v302[0] + 1) == __s1[1]
        && BYTE8(v302[3]) == LOBYTE(__s1[7])
        && BYTE9(v302[3]) == 2
        && BYTE1(__s1[7]) == 2
        && !memcmp(*(const void **)&v302[0], __s1[0], *((size_t *)&v302[0] + 1)) )
      {
        v99 = v328;
        v18 = v320;
        v98 = v106;
        v112 = v321;
      }
      else
      {
        if ( LOBYTE(v302[1]) != 6 )
        {
          *(_QWORD *)&v296[15] = *(_QWORD *)&v302[3];
          *(_OWORD *)v296 = *(_OWORD *)((char *)&v302[2] + 1);
          v295 = *(_OWORD *)((char *)&v302[1] + 1);
        }
        *(_OWORD *)__s2 = v108;
        LOBYTE(__s2[2]) = v302[1];
        __s2[6] = *(void **)&v296[15];
        *(void **)((char *)&__s2[5] + 1) = *(void **)&v296[8];
        *(void **)((char *)&__s2[4] + 1) = *(void **)v296;
        *(_OWORD *)((char *)&__s2[2] + 1) = v295;
        LOWORD(__s2[7]) = WORD4(v302[3]);
        BYTE2(__s2[7]) = BYTE10(v302[3]);
        if ( LOBYTE(__s1[2]) != 6 )
        {
          *(void **)&v306[31] = __s1[6];
          *(void **)&v306[24] = *(void **)((char *)&__s1[5] + 1);
          *(_OWORD *)&v306[8] = *(_OWORD *)((char *)&__s1[3] + 1);
          *(void **)v306 = *(void **)((char *)&__s1[2] + 1);
        }
        *(_QWORD *)v322 = v109;
        *(_QWORD *)&v322[8] = v110;
        v322[16] = __s1[2];
        *(_QWORD *)&v322[48] = *(_QWORD *)&v306[31];
        *(_QWORD *)&v322[41] = *(_QWORD *)&v306[24];
        *(_OWORD *)&v322[25] = *(_OWORD *)&v306[8];
        *(_QWORD *)&v322[17] = *(_QWORD *)v306;
        *(_WORD *)&v322[56] = __s1[7];
        v322[58] = BYTE2(__s1[7]);
        v111 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(__s2, v322);
        v99 = v328;
        v112 = v321;
        v18 = v320;
        v98 = v106;
        if ( !v111 )
        {
          v100 = v321 + 8;
          if ( (char *)v289 == v321 + 8 )
            goto LABEL_124;
          continue;
        }
      }
      v271 = &v284;
      v270 = *(_QWORD *)&v112[v99] + 24LL;
      __s1[0] = &v282;
      __s1[1] = &unk_101964270;
      __s1[2] = &v271;
      __s1[3] = &unk_101964290;
      __s1[4] = &off_1019642B0;
      __s1[5] = &unk_101964270;
      __s1[6] = &v270;
      __s1[7] = &unk_101964290;
      rusqlite::Connection::execute::h1e8b76b744a4c88a(v302, v313, &unk_1015FD341, 117, __s1, 4);
      if ( *(char **)&v302[0] != v325 )
      {
        v157 = *(_QWORD *)&v112[v99];
        *(_OWORD *)&__s2[6] = v302[3];
        __s2[5] = *((void **)&v302[2] + 1);
        *(_OWORD *)&__s2[3] = *(_OWORD *)((char *)&v302[1] + 8);
        *(_OWORD *)&__s2[1] = *(_OWORD *)((char *)v302 + 8);
        __s2[0] = *(void **)&v302[0];
        v158 = v98[2];
        *(_QWORD *)&v295 = v98[1];
        *((_QWORD *)&v295 + 1) = v158;
        *(_QWORD *)v322 = v157 + 24;
        *(_QWORD *)&v322[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v322[16] = &v295;
        *(_QWORD *)&v322[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        *(_QWORD *)&v322[32] = __s2;
        *(_QWORD *)&v322[40] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v306, &unk_1017BFD14, v322);
        v159 = *(_QWORD *)v306;
        *(_OWORD *)v322 = *(_OWORD *)&v306[8];
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(__s2);
        v160 = v326;
        qmemcpy(v326 + 16, v322, 0x50u);
        v161 = &v322[80];
        *v160 = 10;
        v160[1] = v159;
        core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::heb3566c666645b77(v313);
        goto LABEL_195;
      }
      v298 += *((_QWORD *)&v302[0] + 1);
      v100 = v112 + 8;
      if ( (char *)v289 == v100 )
        goto LABEL_124;
    }
  }
LABEL_152:
  *(_QWORD *)&v295 = 0;
  if ( *((_BYTE *)v18 + 16) == 1 )
  {
    v124 = *v18;
    v125 = v18[1];
  }
  else
  {
    v124 = (char *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v22, v21, *((_QWORD *)&v33 + 1), v25);
    *v18 = v124;
    v18[1] = v125;
    *((_BYTE *)v18 + 16) = 1;
  }
  v126 = v328;
  *v18 = v124 + 1;
  memset(&__s2[1], 0, 24);
  __s2[0] = &xmmword_1015FBEC0;
  __s2[4] = v124;
  __s2[5] = v125;
  v127 = 0;
  v304 += 15;
  do
  {
    v128 = *(_QWORD **)(v126 + v127);
    if ( v128[9] != v304 )
    {
      v129 = (const void *)v128[10];
      v130 = v128[11];
      if ( v130 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v126);
        v131 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v130, 1);
        if ( !v131 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v130);
      }
      else
      {
        v131 = 1;
      }
      memcpy((void *)v131, v129, v130);
      *(_QWORD *)v322 = v130;
      *(_QWORD *)&v322[8] = v131;
      *(_QWORD *)&v322[16] = v130;
      v22 = __s2;
      v132 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(__s2, v322);
      v126 = v328;
      if ( !v132 )
      {
        std::sys::fs::metadata::h32fa16d3052ea535(v322, v128[10], v128[11]);
        v133 = *(_QWORD *)v322;
        v22 = *(void ***)v322;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
          *(_QWORD *)v322,
          *(_QWORD *)&v322[8]);
        v126 = v328;
        if ( !v133 )
        {
          v22 = (void **)v322;
          codexmate_lib::core::relay::codex_thread_visibility::rewrite_session_meta_provider_anchors_where::hed9cdf53a64b205b(
            v322,
            v128[10],
            v128[11],
            (__int64)v282,
            v283,
            (__int64 *)&v267);
          if ( *(_DWORD *)v322 == 11 )
          {
            if ( v322[8] )
              *(_QWORD *)&v295 = v295 + 1;
          }
          else
          {
            v22 = (void **)v322;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v322);
          }
          v126 = v328;
        }
      }
    }
    v127 += 8;
  }
  while ( v289 != v127 );
  v134 = v305;
  codexmate_lib::core::relay::codex_diagnostic::check_db_orphan_providers::h2885566813afde9a(v322, v305, &v276, v297);
  if ( *(_QWORD *)&v322[40] != 2 || **(_WORD **)&v322[32] != 27503 )
  {
    *(_QWORD *)&v302[0] = 0;
    *((_QWORD *)&v302[0] + 1) = 8;
    *(_QWORD *)&v302[1] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v322, v134);
    v135 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v135 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v136 = (_QWORD *)v135;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v137 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
    if ( !v137 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
    qmemcpy(v137, "db_orphan_providers", 19);
    *v136 = 19;
    v136[1] = v137;
    v136[2] = 19;
    __s1[0] = (void *)1;
    __s1[1] = v136;
    __s1[2] = (void *)1;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
    v138 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v138 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v139 = (_QWORD *)v138;
    *(_QWORD *)v313 = &v322[48];
    *(_QWORD *)&v313[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v265, &unk_1017BFC6A, v313);
    v139[2] = v265[2];
    v140 = v265[0];
    v139[1] = v265[1];
    *v139 = v140;
    v142 = *((_QWORD *)&v302[0] + 1);
    _RAX = *(_QWORD *)&v302[0];
    *(_OWORD *)v313 = v302[0];
    v143 = *(_QWORD *)&v302[1];
    *(_QWORD *)&v313[16] = *(_QWORD *)&v302[1];
    v144 = __s1[0];
    *(void **)&v313[24] = __s1[0];
    *(_OWORD *)&v313[32] = *(_OWORD *)&__s1[1];
    v145 = v326;
    *(_OWORD *)(v326 + 40) = *(_OWORD *)&__s1[1];
    *((_QWORD *)v145 + 4) = v144;
    *((_QWORD *)v145 + 3) = v143;
    *(_OWORD *)(v145 + 8) = __PAIR128__(v142, _RAX);
    *((_QWORD *)v145 + 7) = 1;
    *((_QWORD *)v145 + 8) = v139;
    *((_QWORD *)v145 + 9) = 1;
    *(_QWORD *)v145 = 11;
    if ( *(_QWORD *)v322 )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                          *(_QWORD *)&v322[8],
                                          *(_QWORD *)v322,
                                          1) >> 32;
    if ( *(_QWORD *)&v322[24] )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                          *(_QWORD *)&v322[32],
                                          *(_QWORD *)&v322[24],
                                          1) >> 32;
    if ( *(_QWORD *)&v322[48] )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                          *(_QWORD *)&v322[56],
                                          *(_QWORD *)&v322[48],
                                          1) >> 32;
    if ( *(_QWORD *)&v322[72] != v304 && *(_QWORD *)&v322[72] )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                          *(_QWORD *)&v322[80],
                                          *(_QWORD *)&v322[72],
                                          1) >> 32;
    v146 = __s2[1];
    if ( __s2[1] )
    {
      v147 = (char *)__s2[3];
      if ( __s2[3] )
      {
        v148 = (char *)__s2[0];
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__s2[0]));
        v150 = (const __m128i *)((char *)__s2[0] + 16);
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v151 = _mm_movemask_epi8(_mm_load_si128(v150));
              v148 -= 384;
              ++v150;
            }
            while ( v151 == 0xFFFF );
            _R13D = ~v151;
          }
          __asm { tzcnt   eax, r13d }
          v152 = -3LL * _RAX;
          v153 = *(_QWORD *)&v148[8 * v152 - 24];
          if ( v153 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[8 * v152 - 16], v153, 1);
          --v147;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v147 );
      }
      v154 = (24LL * (_QWORD)v146 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v155 = (__int64)v146 + v154 + 17;
      if ( v155 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)__s2[0] - v154, v155, 16);
        v156 = (char *)v319;
        if ( !v319 )
          goto LABEL_269;
LABEL_197:
        v164 = (_QWORD *)(v318 + 8);
        do
        {
          v165 = *(v164 - 1);
          if ( v165 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v164, v165, 1);
          v164 += 3;
          --v156;
        }
        while ( v156 );
        goto LABEL_269;
      }
    }
    goto LABEL_196;
  }
  v166 = 16 * v327;
  if ( v327 > 0x7FFFFFFFFFFFFFFLL )
  {
    v167 = 0;
    goto LABEL_203;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v322, v134);
  v167 = 8;
  v168 = 8;
  v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v166, 8);
  if ( !v169 )
LABEL_203:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v167, v166);
  v171 = v169;
  v172 = v327;
  if ( v327 == 1 )
  {
    v173 = 0;
  }
  else
  {
    v174 = v327 & 0x7FFFFFFFFFFFFFELL;
    v170 = (_QWORD *)(v169 + 24);
    v173 = 0;
    v175 = v328;
    do
    {
      v176 = *(_QWORD *)(v175 + 8 * v173);
      v177 = *(_QWORD *)(v176 + 32);
      v178 = *(_QWORD *)(v176 + 40);
      *(v170 - 3) = v177;
      *(v170 - 2) = v178;
      v179 = *(_QWORD *)(v175 + 8 * v173 + 8);
      v168 = *(_QWORD *)(v179 + 32);
      v180 = *(_QWORD *)(v179 + 40);
      *(v170 - 1) = v168;
      *v170 = v180;
      v173 += 2;
      v170 += 4;
    }
    while ( v174 != v173 );
  }
  if ( (v172 & 1) != 0 )
  {
    v181 = *(_QWORD *)(v328 + 8 * v173);
    v182 = *(_QWORD *)(v181 + 32);
    v170 = *(_QWORD **)(v181 + 40);
    v183 = 16 * v173;
    *(_QWORD *)(v171 + v183) = v182;
    *(_QWORD *)(v171 + v183 + 8) = v170;
  }
  v184 = 1;
  if ( v172 != 1 )
  {
    if ( v172 >= 0x15 )
    {
      v172 = v171;
      v249 = v327;
      v168 = v327;
      core::slice::sort::unstable::ipnsort::hd3cbac9fbe0e4cf3(v171, v327, v322, v170);
    }
    else
    {
      v172 = v171;
      v249 = v327;
      v168 = v327;
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h207e5da8f101478b(v171, v327, 1, v322);
    }
    v250 = v249;
    v251 = (unsigned __int64 *)(v171 + 32);
    v252 = 1 - v250;
    v253 = 2;
    while ( 1 )
    {
      v255 = *(v251 - 1);
      if ( v255 == *(v251 - 3) )
      {
        v168 = *(v251 - 4);
        v172 = *(v251 - 2);
        if ( !memcmp((const void *)v172, (const void *)v168, v255) )
          break;
      }
      v251 += 2;
      v254 = v252 + v253++ + 1;
      if ( v254 == 2 )
      {
        v184 = v327;
        goto LABEL_212;
      }
    }
    v184 = v253 - 1;
    v256 = v327 <= v253;
    v327 -= v253;
    if ( !v256 )
    {
      v257 = v327;
      do
      {
        v327 = v257;
        v259 = (unsigned __int64 *)(v171 + 16 * v184);
        v260 = v251[1];
        if ( v260 != *(v259 - 1)
          || (v168 = *(v259 - 2), v172 = *v251, memcmp((const void *)*v251, (const void *)v168, v260)) )
        {
          v258 = *v251;
          v259[1] = v251[1];
          *v259 = v258;
          ++v184;
        }
        v251 += 2;
        v257 = v327 - 1;
      }
      while ( v327 != 1 );
    }
  }
LABEL_212:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v172, v168);
  v185 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v185 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v186 = (_QWORD *)v185;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
  v187 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
  if ( !v187 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
  qmemcpy(v187, "db_orphan_providers", 19);
  *v186 = 19;
  v186[1] = v187;
  v186[2] = 19;
  *(_QWORD *)&v302[0] = 1;
  *((_QWORD *)&v302[0] + 1) = v186;
  *(_QWORD *)&v302[1] = 1;
  __s1[0] = nullptr;
  *(_OWORD *)&__s1[1] = 8u;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1);
  v188 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v188 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v189 = (_QWORD *)v188;
  *(_QWORD *)v306 = v184;
  *(_QWORD *)v313 = v306;
  *(_QWORD *)&v313[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v313[16] = &v282;
  *(_QWORD *)&v313[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  *(_QWORD *)&v313[32] = &v284;
  *(_QWORD *)&v313[40] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v313[48] = &v298;
  *(_QWORD *)&v313[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v313[64] = &v295;
  *(_QWORD *)&v313[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v313[80] = &v281;
  *(_QWORD *)&v313[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v262, &unk_1017BFBD0, v313);
  v189[2] = v264;
  v190 = v262;
  v189[1] = v263;
  *v189 = v190;
  v192 = *((_QWORD *)&v302[0] + 1);
  v191 = *(_QWORD *)&v302[0];
  *(_OWORD *)v313 = v302[0];
  v193 = *(_QWORD *)&v302[1];
  *(_QWORD *)&v313[16] = *(_QWORD *)&v302[1];
  v194 = __s1[0];
  *(void **)&v313[24] = __s1[0];
  *(_OWORD *)&v313[32] = *(_OWORD *)&__s1[1];
  v195 = v326;
  *(_OWORD *)(v326 + 40) = *(_OWORD *)&__s1[1];
  *((_QWORD *)v195 + 4) = v194;
  *((_QWORD *)v195 + 3) = v193;
  *(_OWORD *)(v195 + 8) = __PAIR128__(v192, v191);
  *((_QWORD *)v195 + 7) = 1;
  *((_QWORD *)v195 + 8) = v189;
  *((_QWORD *)v195 + 9) = 1;
  *(_QWORD *)v195 = 11;
  HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v166, 8) >> 32;
  if ( *(_QWORD *)v322 )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                        *(_QWORD *)&v322[8],
                                        *(_QWORD *)v322,
                                        1) >> 32;
  if ( *(_QWORD *)&v322[24] )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                        *(_QWORD *)&v322[32],
                                        *(_QWORD *)&v322[24],
                                        1) >> 32;
  if ( *(_QWORD *)&v322[48] )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                        *(_QWORD *)&v322[56],
                                        *(_QWORD *)&v322[48],
                                        1) >> 32;
  if ( *(_QWORD *)&v322[72] != v304 && *(_QWORD *)&v322[72] )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                        *(_QWORD *)&v322[80],
                                        *(_QWORD *)&v322[72],
                                        1) >> 32;
  v197 = __s2[1];
  if ( __s2[1] )
  {
    v198 = (char *)__s2[3];
    if ( __s2[3] )
    {
      v199 = (char *)__s2[0];
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__s2[0]));
      v201 = (const __m128i *)((char *)__s2[0] + 16);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v202 = _mm_movemask_epi8(_mm_load_si128(v201));
            v199 -= 384;
            ++v201;
          }
          while ( v202 == 0xFFFF );
          _R13D = ~v202;
        }
        __asm { tzcnt   eax, r13d }
        v203 = -3 * _RAX;
        v204 = *(_QWORD *)&v199[8 * v203 - 24];
        if ( v204 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v199[8 * v203 - 16], v204, 1);
        --v198;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v198 );
    }
    v205 = (24LL * (_QWORD)v197 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v206 = (__int64)v197 + v205 + 17;
    if ( v206 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)__s2[0] - v205, v206, 16);
  }
  v207 = v318;
  v208 = (char *)v319;
  if ( v319 )
  {
    v209 = (_QWORD *)(v318 + 8);
    do
    {
      v210 = *(v209 - 1);
      if ( v210 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v209, v210, 1);
      v209 += 3;
      --v208;
    }
    while ( v208 );
  }
  if ( v317 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v207, 24LL * (_QWORD)v317, 8);
  if ( v284 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v285, v284, 1);
  if ( v286 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v287, 8 * v286, 8);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v293);
  result = v293;
  if ( (_QWORD)v293 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v293 + 1), 96 * v293, 8);
  v211 = v268;
  if ( v268 )
  {
    v212 = v269;
    if ( v269 )
    {
      v213 = v267;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v267));
      v215 = v267 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v216 = _mm_movemask_epi8(_mm_load_si128(v215));
            v213 -= 24;
            ++v215;
          }
          while ( v216 == 0xFFFF );
          _R13D = ~v216;
        }
        __asm { tzcnt   eax, r13d }
        v217 = -3 * result;
        v218 = *((_QWORD *)&v213[-1] + v217 - 1);
        if ( v218 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213[-1].i64[v217], v218, 1);
        --v212;
        result = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v212 );
    }
    result = (24 * v211 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v219 = result + v211 + 17;
    if ( v219 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v267 - result, v219, 16);
  }
  v220 = v277;
  if ( (_QWORD)v277 )
  {
    v221 = v278;
    if ( v278 )
    {
      v222 = v276;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v276));
      v224 = v276 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v225 = _mm_movemask_epi8(_mm_load_si128(v224));
            v222 -= 24;
            ++v224;
          }
          while ( v225 == 0xFFFF );
          _R13D = ~v225;
        }
        __asm { tzcnt   eax, r13d }
        v226 = -3 * result;
        v227 = *((_QWORD *)&v222[-1] + v226 - 1);
        if ( v227 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222[-1].i64[v226], v227, 1);
        --v221;
        result = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v221 );
    }
    goto LABEL_297;
  }
  return result;
}
