// __ZN13codexmate_lib4core10repository10Repository34recover_account_removal_quarantine @ 0x100a70d20 | 基线 same-set
// [FULL decompile]

double __fastcall codexmate_lib::core::repository::Repository::recover_account_removal_quarantine::h6d417a44c4777f97(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 *v9; // rax
  _BYTE *v10; // rdi
  volatile signed __int64 **v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r14
  void *v14; // rax
  void *v15; // r15
  void *v16; // rax
  void *v17; // rbx
  __int64 *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rsi
  _BYTE *v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // r14
  void *v24; // rax
  void *v25; // r15
  void *v26; // rax
  void *v27; // rbx
  __int64 *v28; // rax
  char *v29; // r14
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdx
  char *v35; // rdi
  signed __int64 v36; // rdi
  __m128i *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __m128i *v40; // r15
  __m128i v41; // rax
  signed __int64 v42; // r15
  _QWORD *v43; // r13
  const void *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdx
  void *v51; // rax
  __int64 v52; // rdx
  void *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rcx
  volatile signed __int64 *v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rsi
  const __m128i *v59; // rax
  const __m128i *v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // r8
  char v65; // r8
  __int64 v66; // r10
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // r10
  __int64 v71; // rdi
  volatile signed __int64 **v72; // rdi
  volatile signed __int64 **v73; // rsi
  __int64 v74; // rax
  _QWORD *v75; // r14
  void *v76; // rax
  void *v77; // r15
  void *v78; // rax
  void *v79; // rbx
  __int64 *v80; // rax
  __int64 v81; // r14
  __int64 v82; // r15
  __int64 v83; // r12
  __int64 v84; // rsi
  volatile signed __int64 **v85; // rsi
  char *v86; // rbx
  __int64 v87; // r14
  __int64 v88; // r15
  __int64 v89; // r12
  void (__fastcall *v90)(__int64); // rax
  __int64 v91; // rsi
  char *v92; // rax
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rsi
  char **v96; // rsi
  __int64 v97; // rbx
  char *v98; // rax
  char *v99; // r14
  __int64 v100; // r15
  __int64 v101; // r12
  __int64 v102; // rsi
  __int64 v103; // rsi
  __int64 v104; // rdx
  void *v105; // rdi
  void *v106; // r15
  void *v107; // r14
  __int64 v108; // rax
  __int64 v109; // rdx
  const void *v110; // rbx
  size_t v111; // r12
  unsigned __int64 v112; // r13
  unsigned __int64 v113; // rdx
  __int128 *v114; // rax
  __m128i v115; // xmm1
  __int128 *v116; // rcx
  __int64 v117; // rsi
  unsigned __int64 v118; // r13
  __m128i v119; // xmm2
  __int64 v121; // r14
  __int128 *v122; // r15
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // r15
  __int64 v127; // r12
  __int64 v128; // r14
  __int64 v129; // rsi
  __int64 v130; // r15
  __int64 v131; // r12
  __int64 v132; // rsi
  void *v133; // r15
  __int64 v134; // rsi
  char *v135; // r14
  void *v136; // rbx
  __int64 v137; // r13
  __int64 v138; // r12
  __int64 v139; // rsi
  __int64 v140; // rsi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r8
  char *v145; // r12
  void *v146; // rdi
  void *v147; // r14
  void *v148; // r13
  void *v149; // r14
  __int64 v150; // rax
  __int64 v151; // rbx
  __int64 v152; // r12
  __int64 v153; // r13
  __int64 v154; // rsi
  void *v155; // rdi
  size_t v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // r15
  __int64 v160; // r12
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // r14
  void *v164; // rax
  void *v165; // r15
  __int64 v166; // rbx
  void *v167; // rax
  __int64 *v168; // rax
  __int64 v169; // rdi
  _BYTE v171[1064]; // [rsp+0h] [rbp-12E0h] BYREF
  volatile signed __int64 *v172; // [rsp+428h] [rbp-EB8h] BYREF
  __int64 (__fastcall *v173)(_QWORD, _QWORD); // [rsp+430h] [rbp-EB0h]
  _BYTE __dst[1040]; // [rsp+438h] [rbp-EA8h] BYREF
  _BYTE v175[1056]; // [rsp+848h] [rbp-A98h] BYREF
  volatile signed __int64 *v176; // [rsp+C68h] [rbp-678h] BYREF
  __int64 v177; // [rsp+C70h] [rbp-670h]
  __int64 v178; // [rsp+C78h] [rbp-668h]
  _QWORD v179[130]; // [rsp+C80h] [rbp-660h] BYREF
  __m128i v180; // [rsp+1090h] [rbp-250h] BYREF
  __m128i v181; // [rsp+10A0h] [rbp-240h] BYREF
  _QWORD v182[3]; // [rsp+10B8h] [rbp-228h] BYREF
  __int64 v183; // [rsp+10D0h] [rbp-210h]
  __int128 *v184; // [rsp+10D8h] [rbp-208h] BYREF
  unsigned __int64 v185; // [rsp+10E0h] [rbp-200h]
  __int64 v186; // [rsp+10E8h] [rbp-1F8h]
  __int64 v187; // [rsp+10F0h] [rbp-1F0h]
  __m128i v188; // [rsp+10F8h] [rbp-1E8h] BYREF
  __int64 v189; // [rsp+1108h] [rbp-1D8h] BYREF
  __int64 v190; // [rsp+1110h] [rbp-1D0h]
  __int64 v191; // [rsp+1118h] [rbp-1C8h]
  __int64 v192; // [rsp+1120h] [rbp-1C0h] BYREF
  void *v193; // [rsp+1128h] [rbp-1B8h]
  size_t v194; // [rsp+1130h] [rbp-1B0h]
  size_t v195; // [rsp+1138h] [rbp-1A8h]
  volatile signed __int64 *v196; // [rsp+1140h] [rbp-1A0h] BYREF
  char v197; // [rsp+1148h] [rbp-198h]
  volatile signed __int64 *v198; // [rsp+1150h] [rbp-190h] BYREF
  char v199; // [rsp+1158h] [rbp-188h]
  __int64 v200; // [rsp+1160h] [rbp-180h] BYREF
  void *v201; // [rsp+1168h] [rbp-178h]
  size_t v202; // [rsp+1170h] [rbp-170h]
  char *v203; // [rsp+1178h] [rbp-168h] BYREF
  __int64 v204; // [rsp+1180h] [rbp-160h]
  __int64 v205; // [rsp+1188h] [rbp-158h]
  char *v206; // [rsp+1190h] [rbp-150h] BYREF
  __int64 v207; // [rsp+1198h] [rbp-148h] BYREF
  char *v208; // [rsp+11A0h] [rbp-140h]
  __int64 v209; // [rsp+11A8h] [rbp-138h]
  char **v210; // [rsp+11B0h] [rbp-130h]
  char *v211; // [rsp+11B8h] [rbp-128h]
  void *v212; // [rsp+11C0h] [rbp-120h]
  unsigned __int64 v213; // [rsp+11C8h] [rbp-118h]
  char *v214; // [rsp+11D0h] [rbp-110h] BYREF
  char *v215; // [rsp+11D8h] [rbp-108h]
  size_t v216; // [rsp+11E0h] [rbp-100h]
  char *v217; // [rsp+11E8h] [rbp-F8h] BYREF
  void *__s1; // [rsp+11F0h] [rbp-F0h]
  size_t __n; // [rsp+11F8h] [rbp-E8h]
  __int64 v220; // [rsp+1200h] [rbp-E0h] BYREF
  void *__s2; // [rsp+1208h] [rbp-D8h] BYREF
  __int64 v222; // [rsp+1210h] [rbp-D0h]
  __int64 v223; // [rsp+1218h] [rbp-C8h]
  char *v224; // [rsp+1220h] [rbp-C0h]
  __int64 v225; // [rsp+1228h] [rbp-B8h]
  __int64 v226; // [rsp+1230h] [rbp-B0h]
  char *v227; // [rsp+1238h] [rbp-A8h]
  __int64 v228; // [rsp+1240h] [rbp-A0h]
  __int64 *v229; // [rsp+1280h] [rbp-60h]
  void *v230; // [rsp+1288h] [rbp-58h]
  __int64 v231; // [rsp+1290h] [rbp-50h]
  void *__src; // [rsp+1298h] [rbp-48h]
  void *v233; // [rsp+12A0h] [rbp-40h]
  char *i; // [rsp+12A8h] [rbp-38h]
  _BYTE v235[41]; // [rsp+12B7h] [rbp-29h] BYREF

  *(_QWORD *)&v171[696] = 0;
  v229 = a1;
  v7 = a2[25];
  v8 = a2[26];
  std::path::Path::_join::hb1a495d4f06b13b8(&v189, v7, v8, "account-removal-quarantine", 26);
  codexmate_lib::core::repository::canonical_managed_child_directory::h69ff115c8b001ccc(v175, v7, v8, v190, v191, 0);
  if ( *(_DWORD *)v175 == 11 )
  {
    v204 = *(_QWORD *)&v175[8];
    if ( __OFSUB__(-*(_QWORD *)&v175[8], 1) )
    {
      v9 = v229;
      *v229 = 0;
      v9[1] = 8;
      v9[2] = 0;
      goto LABEL_10;
    }
    v230 = *(void **)&v175[16];
    v195 = *(_QWORD *)&v175[24];
    v20 = a2[31];
    v21 = v171;
    std::sys::fs::canonicalize::h06efd38dcb2724a4(v171, v20, a2[32]);
    v205 = *(_QWORD *)v171;
    if ( *(_QWORD *)v171 == 0x8000000000000000LL )
    {
      v172 = *(volatile signed __int64 **)&v171[8];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)v175 = &v172;
        *(_QWORD *)&v175[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        v179[3] = 2;
        v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v179[5] = 31;
        v179[7] = &unk_1017C9974;
        v179[8] = v175;
        v176 = nullptr;
        v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v178 = 31;
        v179[0] = 0;
        v179[1] = "src/core/repository.rs";
        v179[2] = 22;
        v179[6] = 0x62900000001LL;
        v21 = v235;
        v20 = (__int64)&v176;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v20);
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8);
      if ( !v22 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48);
      v23 = (_QWORD *)v22;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8);
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
      if ( !v24 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
      v25 = v24;
      qmemcpy(v24, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(33, 1);
      v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1);
      if ( !v26 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66);
      v27 = v26;
      memcpy(v26, "Private account cleanup could not be checked and will retry later.", 0x42u);
      *v23 = 33;
      v23[1] = v25;
      v23[2] = 33;
      v23[3] = 66;
      v23[4] = v27;
      v23[5] = 66;
      v28 = v229;
      *v229 = 1;
      v28[1] = (__int64)v23;
      v28[2] = 1;
      if ( ((unsigned __int8)v172 & 3) != 1 )
        goto LABEL_247;
      v29 = (char *)v172 - 1;
      v30 = *(volatile signed __int64 *)((char *)v172 - 1);
      v31 = *(volatile signed __int64 *)((char *)v172 + 7);
      if ( *(_QWORD *)v31 )
        (*(void (__fastcall **)(__int64))v31)(v30);
      v32 = *(_QWORD *)(v31 + 8);
      if ( v32 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16));
      v33 = 24;
      v34 = 8;
      v35 = v29;
LABEL_246:
      *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v33, v34);
LABEL_247:
      if ( v204 )
        *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230, v204, 1);
      goto LABEL_10;
    }
    v211 = *(char **)&v171[8];
    v231 = *(_QWORD *)&v171[16];
    v36 = (signed __int64)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v40 = v37;
    if ( v37[1].i8[0] == 1 )
    {
      v41.i64[0] = v37->i64[0];
      v41.i64[1] = v40->i64[1];
    }
    else
    {
      v41.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                     &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                     v20,
                     v38,
                     v39);
      *v40 = v41;
      v40[1].i8[0] = 1;
    }
    v40->i64[0] = v41.i64[0] + 1;
    v187 = 0;
    v186 = 0;
    v185 = 0;
    v184 = &xmmword_1015FBEC0;
    v188 = v41;
    if ( !a4 )
    {
LABEL_74:
      v72 = &v176;
      v73 = (volatile signed __int64 **)v230;
      std::sys::fs::read_dir::h768dda1fe4336014(&v176, v230, v195);
      if ( (_BYTE)v177 == 2 )
      {
        *(_QWORD *)v175 = v176;
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
        {
          *(_QWORD *)v171 = v175;
          *(_QWORD *)&v171[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          v179[3] = 2;
          v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v179[5] = 31;
          v179[7] = &unk_1017C9936;
          v179[8] = v171;
          v176 = nullptr;
          v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v178 = 31;
          v179[0] = 0;
          v179[1] = "src/core/repository.rs";
          v179[2] = 22;
          v179[6] = 0x64C00000001LL;
          v72 = (volatile signed __int64 **)v235;
          v73 = &v176;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v72, v73);
        v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8);
        if ( !v74 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48);
        v75 = (_QWORD *)v74;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8);
        v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
        if ( !v76 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
        v77 = v76;
        qmemcpy(v76, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(33, 1);
        v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1);
        if ( !v78 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66);
        v79 = v78;
        memcpy(v78, "Private account cleanup could not be checked and will retry later.", 0x42u);
        *v75 = 33;
        v75[1] = v77;
        v75[2] = 33;
        v75[3] = 66;
        v75[4] = v79;
        v75[5] = 66;
        v80 = v229;
        *v229 = 1;
        v80[1] = (__int64)v75;
        v80[2] = 1;
        if ( (v175[0] & 3) == 1 )
        {
          v81 = *(_QWORD *)v175 - 1LL;
          v82 = *(_QWORD *)(*(_QWORD *)v175 - 1LL);
          v83 = *(_QWORD *)(*(_QWORD *)v175 + 7LL);
          if ( *(_QWORD *)v83 )
            (*(void (__fastcall **)(__int64))v83)(v82);
          v84 = *(_QWORD *)(v83 + 8);
          if ( v84 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v84, *(_QWORD *)(v83 + 16));
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 24, 8);
        }
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h89da001789bf60b8(&v184);
        goto LABEL_244;
      }
      v198 = v176;
      v199 = v177;
      v231 = 0;
LABEL_90:
      while ( 1 )
      {
        v85 = &v198;
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v171);
        if ( *(_DWORD *)v171 != 1 )
          break;
        v86 = *(char **)&v171[16];
        if ( *(_QWORD *)&v171[8] )
        {
          memcpy(__dst, &v171[24], sizeof(__dst));
          v172 = *(volatile signed __int64 **)&v171[8];
          v173 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&v171[16];
          std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v200, &v172);
          std::fs::DirEntry::file_type::hdd298e01714fd423(&v176, &v172);
          if ( (_BYTE)v176 )
          {
            if ( (v177 & 3) == 1 )
            {
              v87 = v177 - 1;
              v88 = *(_QWORD *)(v177 - 1);
              v89 = *(_QWORD *)(v177 + 7);
              v90 = *(void (__fastcall **)(__int64))v89;
              if ( *(_QWORD *)v89 )
                goto LABEL_95;
              goto LABEL_96;
            }
            goto LABEL_106;
          }
          if ( (WORD1(v176) & 0xF000) != 0x4000 )
            goto LABEL_106;
          std::sys::fs::read_dir::h768dda1fe4336014(&v176, v201, v202);
          v92 = (char *)v176;
          if ( (_BYTE)v177 == 2 )
          {
            v217 = (char *)v176;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              *(_QWORD *)v175 = &v217;
              *(_QWORD *)&v175[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
              v179[3] = 2;
              v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v179[5] = 31;
              v179[7] = &unk_1017C98B3;
              v179[8] = v175;
              v176 = nullptr;
              v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v178 = 31;
              v179[0] = 0;
              v179[1] = "src/core/repository.rs";
              v179[2] = 22;
              v179[6] = 0x66D00000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
              v92 = v217;
            }
            if ( ((unsigned __int8)v92 & 3) == 1 )
            {
              v87 = (__int64)(v92 - 1);
              v88 = *(_QWORD *)(v92 - 1);
              v89 = *(_QWORD *)(v92 + 7);
              v90 = *(void (__fastcall **)(__int64))v89;
              if ( *(_QWORD *)v89 )
LABEL_95:
                v90(v88);
LABEL_96:
              v91 = *(_QWORD *)(v89 + 8);
              if ( v91 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v91, *(_QWORD *)(v89 + 16));
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, 24, 8);
            }
LABEL_106:
            if ( v200 )
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v201, v200, 1);
            if ( !_InterlockedDecrement64(v172) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v172);
LABEL_89:
            ++v231;
            continue;
          }
          v196 = v176;
          v197 = v177;
          while ( 1 )
          {
LABEL_118:
            v96 = (char **)&v196;
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v176);
            if ( (_DWORD)v176 != 1 )
            {
              if ( !_InterlockedDecrement64(v196) )
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v196);
              v149 = v201;
              v150 = std::sys::fs::remove_dir::hcc22a1b171fb29c1(v201, v202);
              v151 = v150;
              if ( v150 )
              {
                v217 = (char *)v150;
                if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v150) )
                {
                  ++v231;
                  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
                  {
                    *(_QWORD *)v175 = &v217;
                    *(_QWORD *)&v175[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                    v179[3] = 2;
                    v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                    v179[5] = 31;
                    v179[7] = &unk_1017C97A7;
                    v179[8] = v175;
                    v176 = nullptr;
                    v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                    v178 = 31;
                    v179[0] = 0;
                    v179[1] = "src/core/repository.rs";
                    v179[2] = 22;
                    v179[6] = 0x6C600000001LL;
                    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
                    v151 = (__int64)v217;
                  }
                }
                if ( (v151 & 3) == 1 )
                {
                  v152 = *(_QWORD *)(v151 - 1);
                  v153 = *(_QWORD *)(v151 + 7);
                  if ( *(_QWORD *)v153 )
                    (*(void (__fastcall **)(_QWORD))v153)(*(_QWORD *)(v151 - 1));
                  v154 = *(_QWORD *)(v153 + 8);
                  if ( v154 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, v154, *(_QWORD *)(v153 + 16));
                  *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151 - 1, 24, 8);
                }
              }
              if ( v200 )
                *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v200, 1);
              if ( !_InterlockedDecrement64(v172) )
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v172);
              goto LABEL_90;
            }
            v97 = v178;
            if ( v177 )
              break;
            v214 = (char *)v178;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              v206 = (char *)&v214;
              v207 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
              v223 = 2;
              v224 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v225 = 31;
              v227 = (char *)&unk_1017C9871;
              v228 = (__int64)&v206;
              v217 = nullptr;
              __s1 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              __n = 31;
              v220 = 0;
              __s2 = "src/core/repository.rs";
              v222 = 22;
              v226 = 0x67700000001LL;
              v96 = &v217;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v217);
              v97 = (__int64)v214;
            }
            if ( (v97 & 3) != 1 )
              goto LABEL_117;
            v130 = *(_QWORD *)(v97 - 1);
            v131 = *(_QWORD *)(v97 + 7);
            if ( *(_QWORD *)v131 )
              (*(void (__fastcall **)(_QWORD, char **))v131)(*(_QWORD *)(v97 - 1), v96);
            v132 = *(_QWORD *)(v131 + 8);
            if ( v132 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v132, *(_QWORD *)(v131 + 16));
            *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97 - 1, 24, 8);
            ++v231;
          }
          memcpy(&v175[16], v179, 0x410u);
          *(_QWORD *)v175 = v177;
          *(_QWORD *)&v175[8] = v178;
          std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v192, v175);
          std::fs::DirEntry::file_type::hdd298e01714fd423(&v214, v175);
          if ( (_BYTE)v214 )
          {
            v98 = v215;
            v203 = v215;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              v206 = (char *)&v203;
              v207 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
              v223 = 2;
              v224 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v225 = 31;
              v227 = (char *)&unk_1017C9831;
              v228 = (__int64)&v206;
              v217 = nullptr;
              __s1 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              __n = 31;
              v220 = 0;
              __s2 = "src/core/repository.rs";
              v222 = 22;
              v226 = 0x68900000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v217);
              v98 = v203;
            }
            if ( ((unsigned __int8)v98 & 3) == 1 )
            {
              v99 = v98 - 1;
              v100 = *(_QWORD *)(v98 - 1);
              v101 = *(_QWORD *)(v98 + 7);
              if ( *(_QWORD *)v101 )
                (*(void (__fastcall **)(__int64))v101)(v100);
              v102 = *(_QWORD *)(v101 + 8);
              if ( v102 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v102, *(_QWORD *)(v101 + 16));
              v103 = 24;
              v104 = 8;
              v105 = v99;
              goto LABEL_129;
            }
            goto LABEL_145;
          }
          if ( SWORD1(v214) > -28673 )
          {
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
            {
              v223 = 2;
              v224 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v225 = 31;
              v227 = "[AiMaMi][accounts] account removal recovery skipped a non-file entryPrivate account cleanup could not be checked and will retry later.";
              v228 = 137;
              v217 = nullptr;
              __s1 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              __n = 31;
              v220 = 0;
              __s2 = "src/core/repository.rs";
              v222 = 22;
              v226 = 0x68200000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v217);
            }
            goto LABEL_145;
          }
          v106 = v193;
          v107 = (void *)v194;
          v108 = std::path::Path::file_name::hf6c2daad91e50ebf(v193, v194);
          v110 = (const void *)v108;
          if ( !v108 || !v187 )
          {
LABEL_149:
            v124 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v106, (size_t)v107);
            goto LABEL_150;
          }
          v111 = v109;
          v112 = core::hash::BuildHasher::hash_one::h241cf5dc12d03993(&v188, v108, v109);
          v113 = v185;
          v114 = v184;
          v115 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v112 >> 57), (__m128i)0LL);
          v116 = v184 - 3;
          v117 = 0;
          for ( i = (char *)v184; ; v114 = (__int128 *)i )
          {
            v118 = v113 & v112;
            v119 = _mm_loadu_si128((const __m128i *)((char *)v114 + v118));
            v19 = _mm_cmpeq_epi8(v119, v115);
            _RAX = (unsigned int)_mm_movemask_epi8(v19);
            if ( (_DWORD)_RAX )
              break;
LABEL_141:
            v19.i64[0] = -1;
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v119, (__m128i)-1LL)) )
              goto LABEL_149;
            v112 = v118 + v117 + 16;
            v117 += 16;
          }
          __src = v107;
          v213 = v113;
          v180 = v115;
          v233 = v106;
          v183 = v117;
          v181 = v119;
          while ( 1 )
          {
            v212 = (void *)_RAX;
            __asm { tzcnt   eax, eax }
            v121 = -48LL * (v113 & (v118 + _RAX));
            if ( v111 == *(_QWORD *)&v116[-3 * (v113 & (v118 + _RAX)) + 1] )
            {
              v122 = v116;
              v123 = memcmp(v110, *((const void **)&v116[-3 * (v113 & (v118 + _RAX))] + 1), v111);
              v116 = v122;
              if ( !v123 )
                break;
            }
            _RAX = (unsigned int)((_DWORD)v212 - 1);
            LOWORD(_RAX) = (unsigned __int16)v212 & ((_WORD)v212 - 1);
            v107 = __src;
            v113 = v213;
            v115 = _mm_load_si128(&v180);
            v106 = v233;
            v117 = v183;
            v119 = _mm_load_si128(&v181);
            if ( !(_WORD)_RAX )
              goto LABEL_141;
          }
          v133 = v233;
          if ( *(_QWORD *)&i[v121 - 24] == 0x8000000000000000LL )
          {
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
            {
              v223 = 2;
              v224 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v225 = 31;
              v227 = "[AiMaMi][accounts] account removal recovery found an ambiguous snapshot file name[AiMaMi][accounts]"
                     " account removal recovery target is not a regular file[AiMaMi][accounts] account removal recovery f"
                     "ound conflicting snapshot bytes[AiMaMi][accounts] account removal recovery skipped a non-file entry"
                     "Private account cleanup could not be checked and will retry later.";
              v228 = 163;
              v217 = nullptr;
              __s1 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              __n = 31;
              v220 = 0;
              __s2 = "src/core/repository.rs";
              v222 = 22;
              v226 = 0x69700000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v217);
            }
            goto LABEL_145;
          }
          v134 = *(_QWORD *)&i[v121 - 16];
          v135 = &i[v121];
          std::sys::fs::metadata::h32fa16d3052ea535(&v217, v134, *((_QWORD *)v135 - 1));
          v136 = __src;
          if ( (_BYTE)v217 )
          {
            if ( ((unsigned __int8)__s1 & 3) == 1 )
            {
              i = (char *)__s1 - 1;
              v137 = *(_QWORD *)((char *)__s1 - 1);
              v138 = *(_QWORD *)((char *)__s1 + 7);
              if ( *(_QWORD *)v138 )
                (*(void (__fastcall **)(__int64))v138)(v137);
              v139 = *(_QWORD *)(v138 + 8);
              if ( v139 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v139, *(_QWORD *)(v138 + 16));
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i, 24, 8);
            }
            v124 = std::sys::fs::rename::h7934e6142c921014(
                     v133,
                     (size_t)v136,
                     *((void **)v135 - 2),
                     *((_QWORD *)v135 - 1));
LABEL_150:
            v125 = v124;
LABEL_151:
            if ( v125 )
            {
              v214 = (char *)v125;
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
              {
                v206 = (char *)&v214;
                v207 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                v223 = 2;
                v224 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                v225 = 31;
                v227 = (char *)&unk_1017C97F0;
                v228 = (__int64)&v206;
                v217 = nullptr;
                __s1 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                __n = 31;
                v220 = 0;
                __s2 = "src/core/repository.rs";
                v222 = 22;
                v226 = 0x6BE00000001LL;
                _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v217);
                v125 = (__int64)v214;
              }
              if ( (v125 & 3) == 1 )
              {
                v126 = v125 - 1;
                v127 = *(_QWORD *)(v125 - 1);
                v128 = *(_QWORD *)(v125 + 7);
                if ( *(_QWORD *)v128 )
                  (*(void (__fastcall **)(__int64))v128)(v127);
                v129 = *(_QWORD *)(v128 + 8);
                if ( v129 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v129, *(_QWORD *)(v128 + 16));
                *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v126, 24, 8);
              }
              ++v231;
            }
            if ( v192 )
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v193, v192, 1);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v175) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v175);
            goto LABEL_118;
          }
          v140 = *((_QWORD *)v135 - 2);
          std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v217, v140, *((_QWORD *)v135 - 1));
          if ( (_DWORD)v217 == 1 )
          {
            v207 = (__int64)__s1;
            LOBYTE(v206) = 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v207, v140, v141, v142, v143);
LABEL_187:
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
            {
              v217 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              __s1 = (void *)31;
              __n = (size_t)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
              v220 = 31;
              __s2 = &off_101973EA8;
              log::__private_api::log::h719f4907c7336ae9(
                "[AiMaMi][accounts] account removal recovery target is not a regular file[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes[AiMaMi][accounts] account removal recovery skipped a non-file entryPrivate account cleanup could not be checked and will retry later.",
                145,
                2,
                &v217);
            }
            goto LABEL_145;
          }
          if ( ((unsigned __int64)__s1 & 0xF00000000000LL) != 0x800000000000LL )
            goto LABEL_187;
          std::fs::read::inner::h6a30c15c40add28b(&v214, *((_QWORD *)v135 - 2), *((_QWORD *)v135 - 1));
          std::fs::read::inner::h6a30c15c40add28b(&v206, v133, v136);
          __n = v216;
          __s1 = v215;
          v217 = v214;
          v222 = (__int64)v208;
          __s2 = (void *)v207;
          v220 = (__int64)v206;
          if ( v214 == (char *)0x8000000000000000LL )
          {
            v125 = (__int64)__s1;
            if ( v220 == 0x8000000000000000LL )
            {
              core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(
                &__s2,
                0x8000000000000000LL,
                &v220,
                0x8000000000000000LL,
                v144);
            }
            else if ( v220 )
            {
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v220, 1);
            }
            goto LABEL_151;
          }
          v145 = v214;
          i = (char *)v220;
          if ( v220 == 0x8000000000000000LL )
          {
            v125 = (__int64)__s2;
            if ( !v214 )
              goto LABEL_151;
            v146 = __s1;
          }
          else
          {
            if ( __n != v222 || (v147 = __s1, v148 = __s2, memcmp(__s1, __s2, __n)) )
            {
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
              {
                v206 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                v207 = 31;
                v208 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
                v209 = 31;
                v210 = &off_101973EC0;
                log::__private_api::log::h719f4907c7336ae9(
                  "[AiMaMi][accounts] account removal recovery found conflicting snapshot bytes[AiMaMi][accounts] account removal recovery skipped a non-file entryPrivate account cleanup could not be checked and will retry later.",
                  153,
                  2,
                  &v206);
              }
              if ( v145 )
                *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v145, 1);
              v103 = (__int64)i;
              if ( !i )
                goto LABEL_145;
              v105 = __s2;
              v104 = 1;
LABEL_129:
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v103, v104);
LABEL_145:
              if ( v192 )
                *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v193, v192, 1);
              if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v175) )
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v175);
LABEL_117:
              ++v231;
              goto LABEL_118;
            }
            v213 = (unsigned __int64)v148;
            v212 = v147;
            v125 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v133, (size_t)v136);
            if ( i )
              *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, i, 1);
            v146 = v212;
            if ( !v145 )
              goto LABEL_151;
          }
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v145, 1);
          goto LABEL_151;
        }
        v217 = *(char **)&v171[16];
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)v175 = &v217;
          *(_QWORD *)&v175[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          v179[3] = 2;
          v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v179[5] = 31;
          v179[7] = &unk_1017C98EF;
          v179[8] = v175;
          v176 = nullptr;
          v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v178 = 31;
          v179[0] = 0;
          v179[1] = "src/core/repository.rs";
          v179[2] = 22;
          v179[6] = 0x65A00000001LL;
          v85 = &v176;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
          v86 = v217;
        }
        if ( ((unsigned __int8)v86 & 3) != 1 )
          goto LABEL_89;
        v93 = *(_QWORD *)(v86 - 1);
        v94 = *(_QWORD *)(v86 + 7);
        if ( *(_QWORD *)v94 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int64 **))v94)(*(_QWORD *)(v86 - 1), v85);
        v95 = *(_QWORD *)(v94 + 8);
        if ( v95 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v95, *(_QWORD *)(v94 + 16));
        *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86 - 1, 24, 8);
        ++v231;
      }
      if ( !_InterlockedDecrement64(v198) )
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v198);
      v155 = v230;
      v156 = v195;
      v157 = std::sys::fs::remove_dir::hcc22a1b171fb29c1(v230, v195);
      v158 = v157;
      if ( v157 )
      {
        *(_QWORD *)v175 = v157;
        v155 = (void *)v157;
        if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v157) )
        {
          ++v231;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
          {
            *(_QWORD *)v171 = v175;
            *(_QWORD *)&v171[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
            v176 = (volatile signed __int64 *)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
            v177 = 31;
            v178 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
            v179[0] = 31;
            v179[1] = &off_101973E90;
            v155 = &unk_1017C9761;
            v156 = (size_t)v171;
            log::__private_api::log::h719f4907c7336ae9(&unk_1017C9761, v171, 2, &v176);
            v158 = *(_QWORD *)v175;
          }
        }
        if ( (v158 & 3) == 1 )
        {
          v159 = *(_QWORD *)(v158 - 1);
          v160 = *(_QWORD *)(v158 + 7);
          if ( *(_QWORD *)v160 )
            (*(void (__fastcall **)(_QWORD))v160)(*(_QWORD *)(v158 - 1));
          v161 = *(_QWORD *)(v160 + 8);
          if ( v161 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v161, *(_QWORD *)(v160 + 16));
          v156 = 24;
          v155 = (void *)(v158 - 1);
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158 - 1, 24, 8);
        }
      }
      if ( v231 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v156);
        v162 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8);
        if ( !v162 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48);
        v163 = v162;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8);
        v164 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
        if ( !v164 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
        v165 = v164;
        qmemcpy(v164, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(33, 1);
        v166 = 1;
        v167 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
        if ( !v167 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59);
        qmemcpy(v167, "Private account cleanup is incomplete and will retry later.", 59);
        *(_QWORD *)v163 = 33;
        *(_QWORD *)(v163 + 8) = v165;
        *(_QWORD *)(v163 + 16) = 33;
        *(_QWORD *)(v163 + 24) = 59;
        *(_QWORD *)(v163 + 32) = v167;
        *(_QWORD *)(v163 + 40) = 59;
      }
      else
      {
        v163 = 8;
        v166 = 0;
      }
      v168 = v229;
      *v229 = v166;
      v168[1] = v163;
      v168[2] = v166;
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h89da001789bf60b8(&v184);
LABEL_244:
      v33 = v205;
      if ( !v205 )
        goto LABEL_247;
      v34 = 1;
      v35 = v211;
      goto LABEL_246;
    }
    v42 = a3[29];
    if ( v42 < 0 )
    {
      v71 = 0;
      goto LABEL_73;
    }
    v43 = &a3[53 * a4];
    while ( 1 )
    {
      v44 = (const void *)a3[28];
      a4 = 1;
      if ( v42 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v20);
        v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1);
        if ( !v45 )
        {
          a4 = v42;
          v71 = 1;
LABEL_73:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v71, a4);
        }
        a4 = v45;
      }
      memcpy((void *)a4, v44, v42);
      v36 = a4;
      v20 = v42;
      v46 = std::path::Path::parent::h4c3ac26770731fbb(a4, v42);
      if ( !v46 )
        goto LABEL_50;
      v36 = (signed __int64)&v176;
      v20 = v46;
      std::sys::fs::canonicalize::h06efd38dcb2724a4(&v176, v46, v47);
      i = (char *)v176;
      if ( v176 == (volatile signed __int64 *)0x8000000000000000LL )
        break;
      v36 = v177;
      v233 = (void *)v177;
      if ( !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
                               v177,
                               v178,
                               v211,
                               v231)
        || (v36 = a4, (v51 = (void *)std::path::Path::file_name::hf6c2daad91e50ebf(a4, v42)) == nullptr) )
      {
        v20 = (__int64)i;
        if ( i )
        {
          v50 = 1;
          goto LABEL_49;
        }
LABEL_50:
        if ( v42 )
        {
          v36 = a4;
          v20 = v42;
LABEL_52:
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v20, 1);
          goto LABEL_53;
        }
        goto LABEL_53;
      }
      v53 = (void *)v52;
      if ( v52 < 0 )
      {
        v169 = 0;
        goto LABEL_250;
      }
      if ( v52 )
      {
        __src = v51;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, v42);
        v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v53, 1);
        if ( !v54 )
        {
          __src = v53;
          v169 = 1;
LABEL_250:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v169, __src);
        }
        v55 = v54;
        v51 = __src;
      }
      else
      {
        v55 = 1;
      }
      __src = (void *)v55;
      memcpy((void *)v55, v51, (size_t)v53);
      v182[0] = v53;
      v182[1] = __src;
      v182[2] = v53;
      v36 = (signed __int64)&v176;
      hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h13b20b28f3cadfae(
        &v176,
        &v184,
        v182);
      v56 = v176;
      v57 = v177;
      if ( v176 == (volatile signed __int64 *)0x8000000000000000LL )
      {
        v58 = *(_QWORD *)(v177 - 24);
        if ( v58 != 0x8000000000000000LL && v58 )
        {
          v36 = *(_QWORD *)(v177 - 16);
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v58, 1);
        }
        *(_QWORD *)(v57 - 24) = 0x8000000000000000LL;
        if ( v42 )
        {
          v36 = a4;
          *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4, v42, 1);
        }
      }
      else
      {
        v59 = (const __m128i *)v179[0];
        v60 = *(const __m128i **)v179[0];
        v61 = *(_QWORD *)(v179[0] + 8LL);
        v62 = v179[1] & v61;
        _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v179[0] + (v179[1] & v61))));
        if ( !(_DWORD)_R9 )
        {
          v69 = 16;
          do
          {
            v62 = v61 & (v69 + v62);
            _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v60 + v62)));
            v69 += 16;
          }
          while ( !(_DWORD)_R9 );
        }
        __asm { tzcnt   r9d, r9d }
        _R9 = v61 & (v62 + _R9);
        v65 = v60->i8[_R9];
        if ( v65 >= 0 )
        {
          _R8D = _mm_movemask_epi8(_mm_load_si128(v60));
          __asm { tzcnt   r9d, r8d }
          v65 = v60->i8[_R9];
        }
        v66 = v178;
        v67 = v179[1] >> 57;
        v60->i8[_R9] = v179[1] >> 57;
        v60[1].i8[v61 & (_R9 - 16)] = v67;
        v68 = -3 * _R9;
        v36 = v65 & 1;
        v60[v68 - 3].i64[0] = (__int64)v56;
        *((_QWORD *)&v60[v68 - 2] - 1) = v57;
        v60[v68 - 2].i64[0] = v66;
        *((_QWORD *)&v60[v68 - 1] - 1) = v42;
        v60[v68 - 1].i64[0] = a4;
        v60[v68 - 1].i64[1] = v42;
        v19 = _mm_sub_epi64(
                _mm_loadu_si128(v59 + 1),
                _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v36, 0));
        v59[1] = v19;
      }
      v20 = (__int64)i;
      if ( i )
      {
        v36 = (signed __int64)v233;
        goto LABEL_52;
      }
LABEL_53:
      if ( a3 + 53 == v43 )
        goto LABEL_74;
      v42 = a3[82];
      a3 += 53;
      if ( v42 < 0 )
      {
        v71 = 0;
        goto LABEL_73;
      }
    }
    if ( (v177 & 3) == 1 )
    {
      v233 = (void *)(v177 - 1);
      i = *(char **)(v177 - 1);
      v48 = *(_QWORD *)(v177 + 7);
      if ( *(_QWORD *)v48 )
        (*(void (__fastcall **)(char *))v48)(i);
      v49 = *(_QWORD *)(v48 + 8);
      if ( v49 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i, v49, *(_QWORD *)(v48 + 16));
      v20 = 24;
      v50 = 8;
LABEL_49:
      v36 = (signed __int64)v233;
      *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233, v20, v50);
    }
    goto LABEL_50;
  }
  qmemcpy(v171, v175, 0x60u);
  v11 = (volatile signed __int64 **)&v175[96];
  v10 = &v171[96];
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
  {
    v172 = (volatile signed __int64 *)v171;
    v173 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    v179[3] = 2;
    v179[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
    v179[5] = 31;
    v179[7] = &unk_1017C99C2;
    v179[8] = &v172;
    v176 = nullptr;
    v177 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
    v178 = 31;
    v179[0] = 0;
    v179[1] = "src/core/repository.rs";
    v179[2] = 22;
    v179[6] = 0x61D00000001LL;
    v10 = v235;
    v11 = &v176;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v235, &v176);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11);
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8);
  if ( !v12 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48);
  v13 = (_QWORD *)v12;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8);
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
  if ( !v14 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
  v15 = v14;
  qmemcpy(v14, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(33, 1);
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1);
  if ( !v16 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66);
  v17 = v16;
  memcpy(v16, "Private account cleanup could not be checked and will retry later.", 0x42u);
  *v13 = 33;
  v13[1] = v15;
  v13[2] = 33;
  v13[3] = 66;
  v13[4] = v17;
  v13[5] = 66;
  v18 = v229;
  *v229 = 1;
  v18[1] = (__int64)v13;
  v18[2] = 1;
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v171);
LABEL_10:
  if ( v189 )
    *(double *)v19.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v189, 1);
  return *(double *)v19.i64;
}
