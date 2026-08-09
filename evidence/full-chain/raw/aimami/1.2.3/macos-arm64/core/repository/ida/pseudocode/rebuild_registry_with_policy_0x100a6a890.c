// __ZN13codexmate_lib4core10repository10Repository28rebuild_registry_with_policy @ 0x100a6a890
// [FULL — hexrays 全解 75180B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
size_t __fastcall codexmate_lib::core::repository::Repository::rebuild_registry_with_policy::hbfa144768b254519(
        char *a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  _QWORD *v6; // r13
  size_t result; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rsi
  void *v14; // rax
  unsigned __int128 v15; // kr10_16
  __int64 v16; // rbx
  __int128 v17; // kr00_16
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  signed __int64 v24; // rt0
  __int64 v25; // rax
  __int128 v26; // kr20_16
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r15
  unsigned int v35; // r14d
  _QWORD *v36; // r13
  __int64 v37; // rcx
  _DWORD *v38; // rdi
  _DWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r15
  char v45; // al
  __int64 v46; // rdi
  __int128 v47; // kr40_16
  __int64 v48; // r13
  unsigned int *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rbx
  _QWORD *v52; // r14
  __int64 v53; // rbx
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // rbx
  __int64 v60; // r15
  unsigned int v61; // r14d
  _DWORD *v62; // rsi
  _DWORD *v63; // rdi
  __int64 j; // rcx
  __int64 v65; // rbx
  __int64 v66; // r14
  __int64 v67; // rbx
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // rsi
  __int64 v71; // r14
  _QWORD *v72; // r15
  __int64 v73; // rsi
  char *v74; // rax
  _DWORD *v75; // rdi
  _DWORD *v76; // rsi
  __int64 k; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  _QWORD *v80; // rdi
  __int64 v81; // r13
  __int64 v82; // rbx
  __int64 v83; // r12
  _QWORD *v84; // rdx
  unsigned int *v85; // rbx
  __int64 v86; // r15
  unsigned int *v87; // r14
  __int64 v88; // rbx
  _QWORD *v89; // r14
  __int64 v90; // rsi
  _BYTE *v91; // rsi
  int v92; // edx
  void *v93; // rax
  void *v94; // rcx
  size_t v95; // rbx
  __m128 v96; // xmm0
  char v97; // si
  char v98; // dl
  _QWORD *v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rcx
  char *v102; // rdx
  _DWORD *v103; // rdi
  _DWORD *v104; // rsi
  __int64 i; // rcx
  _QWORD *v106; // rdi
  __int64 v107; // rcx
  _QWORD *v108; // rdx
  char *v109; // rdx
  __int64 v110; // r15
  __int64 v111; // r14
  __int64 v112; // r12
  __int64 v113; // rbx
  __int64 v114; // r14
  __int64 v115; // r15
  __int64 v116; // rsi
  char v117; // al
  __int64 v118; // r9
  __int64 v119; // rcx
  char *v120; // rsi
  void *v121; // rax
  void *v122; // rbx
  _QWORD *v123; // rcx
  __int64 v124; // r13
  char *v125; // rsi
  size_t v126; // rdx
  char v127; // r14
  __int64 v128; // rsi
  char *v129; // r12
  __int64 v130; // r13
  void *v131; // r15
  void *v132; // r14
  __int64 v133; // rbx
  const void *v134; // r15
  size_t v135; // r14
  __int64 v136; // rbx
  void *v137; // r15
  char v138; // al
  char v139; // r14
  __int64 v140; // r12
  __int64 v141; // r15
  __int64 v142; // r13
  unsigned int v143; // r15d
  unsigned int v144; // eax
  __int64 v145; // r12
  __int64 v146; // r13
  __int64 v147; // r14
  __int64 v148; // rbx
  __int64 v149; // r15
  size_t v150; // r12
  void *v151; // rbx
  size_t v152; // r15
  __int64 v153; // r14
  __int64 v154; // r12
  __int64 v155; // rcx
  void *v156; // r14
  char *v157; // r14
  __int64 v158; // r9
  void *v159; // r15
  size_t v160; // r14
  __int64 v161; // rbx
  __int64 v162; // r13
  __int64 v163; // r12
  __int64 v164; // rsi
  void *v165; // r14
  char v166; // r15
  void *v167; // rbx
  __int64 v168; // r14
  __int64 v169; // r15
  void *v170; // r13
  __int64 v171; // r12
  __int64 v172; // r14
  void *v173; // r13
  __int64 v174; // r14
  __int64 v175; // r15
  void *v176; // rbx
  __int64 v177; // r12
  char v178; // al
  size_t v179; // rdx
  void *v180; // r14
  __int64 v181; // r13
  __int64 v182; // r14
  void *v183; // rbx
  char v184; // al
  size_t v185; // rbx
  bool v186; // zf
  __int64 v187; // rbx
  __int64 v188; // r12
  char *v189; // rsi
  size_t v190; // r12
  __int64 v191; // rdx
  __int64 v192; // rcx
  char v193; // bl
  _BYTE *v194; // rsi
  _OWORD *v195; // rdi
  __int64 v196; // r14
  __int64 v197; // r12
  __int64 v198; // rbx
  __int64 v199; // r15
  __int64 v200; // rax
  __int64 v201; // rbx
  _QWORD *v202; // rdi
  __int64 v203; // rax
  void *v204; // r14
  char *v205; // r13
  char *v206; // r15
  __int64 v207; // r12
  __int64 v208; // r14
  __int64 v209; // r15
  _QWORD v210[10]; // [rsp+8h] [rbp-1038h] BYREF
  _BYTE v211[88]; // [rsp+58h] [rbp-FE8h] BYREF
  _BYTE v212[1056]; // [rsp+B0h] [rbp-F90h] BYREF
  _QWORD v213[3]; // [rsp+4D0h] [rbp-B70h] BYREF
  _QWORD v214[3]; // [rsp+4E8h] [rbp-B58h] BYREF
  _QWORD v215[10]; // [rsp+500h] [rbp-B40h] BYREF
  _QWORD v216[11]; // [rsp+550h] [rbp-AF0h] BYREF
  _BYTE v217[1064]; // [rsp+5A8h] [rbp-A98h] BYREF
  __int128 v218; // [rsp+9D0h] [rbp-670h]
  _OWORD v219[11]; // [rsp+9E8h] [rbp-658h] BYREF
  __int64 v220; // [rsp+A98h] [rbp-5A8h]
  __int128 v221; // [rsp+AA0h] [rbp-5A0h]
  __int128 v222; // [rsp+AB0h] [rbp-590h]
  _BYTE v223[104]; // [rsp+AC8h] [rbp-578h] BYREF
  __int128 v224; // [rsp+B30h] [rbp-510h]
  __int64 v225; // [rsp+B40h] [rbp-500h]
  __int64 v226; // [rsp+B48h] [rbp-4F8h]
  __int64 v227; // [rsp+B50h] [rbp-4F0h]
  __int64 v228; // [rsp+B58h] [rbp-4E8h]
  __int64 v229; // [rsp+B60h] [rbp-4E0h] BYREF
  char *v230; // [rsp+B68h] [rbp-4D8h]
  size_t v231; // [rsp+B70h] [rbp-4D0h]
  __int128 v232; // [rsp+B78h] [rbp-4C8h]
  __int64 v233; // [rsp+B88h] [rbp-4B8h]
  int v234; // [rsp+B94h] [rbp-4ACh]
  _OWORD v235[11]; // [rsp+B98h] [rbp-4A8h] BYREF
  __int64 v236; // [rsp+C48h] [rbp-3F8h] BYREF
  void *v237[10]; // [rsp+C50h] [rbp-3F0h] BYREF
  _OWORD v238[11]; // [rsp+CA0h] [rbp-3A0h] BYREF
  __int128 v239; // [rsp+D50h] [rbp-2F0h]
  _DWORD v240[2]; // [rsp+D60h] [rbp-2E0h]
  void *v241; // [rsp+D68h] [rbp-2D8h] BYREF
  _BYTE v242[96]; // [rsp+D70h] [rbp-2D0h] BYREF
  __int64 v243; // [rsp+DD0h] [rbp-270h]
  __int64 v244; // [rsp+DD8h] [rbp-268h]
  __int64 v245; // [rsp+DE0h] [rbp-260h]
  __int64 v246; // [rsp+DE8h] [rbp-258h]
  __int64 v247; // [rsp+DF0h] [rbp-250h]
  __int64 v248; // [rsp+DF8h] [rbp-248h]
  __int64 v249; // [rsp+E00h] [rbp-240h]
  __int64 v250; // [rsp+E08h] [rbp-238h]
  _QWORD v251[19]; // [rsp+E10h] [rbp-230h] BYREF
  int v252; // [rsp+EA8h] [rbp-198h]
  int v253; // [rsp+EACh] [rbp-194h]
  char *v254; // [rsp+EB0h] [rbp-190h] BYREF
  void *__s2; // [rsp+EB8h] [rbp-188h]
  size_t __n; // [rsp+EC0h] [rbp-180h]
  __int64 v257; // [rsp+EC8h] [rbp-178h]
  _OWORD v258[5]; // [rsp+ED0h] [rbp-170h] BYREF
  __int64 v259; // [rsp+F20h] [rbp-120h]
  __int64 v260; // [rsp+F28h] [rbp-118h]
  __int64 v261; // [rsp+F30h] [rbp-110h]
  __int64 v262; // [rsp+F38h] [rbp-108h]
  size_t v263; // [rsp+F40h] [rbp-100h] BYREF
  __int64 v264; // [rsp+F48h] [rbp-F8h]
  __int64 v265; // [rsp+F50h] [rbp-F0h]
  __int64 v266; // [rsp+F58h] [rbp-E8h]
  __int64 v267; // [rsp+F60h] [rbp-E0h]
  unsigned int v268; // [rsp+F6Ch] [rbp-D4h] BYREF
  __int64 v269; // [rsp+F70h] [rbp-D0h]
  unsigned __int64 v270; // [rsp+F78h] [rbp-C8h]
  __int64 v271; // [rsp+F80h] [rbp-C0h] BYREF
  __int128 v272; // [rsp+F88h] [rbp-B8h]
  _BYTE v273[15]; // [rsp+F98h] [rbp-A8h]
  char *v274; // [rsp+FA8h] [rbp-98h]
  unsigned int v275; // [rsp+FB4h] [rbp-8Ch] BYREF
  size_t v276; // [rsp+FB8h] [rbp-88h]
  int v277; // [rsp+FC4h] [rbp-7Ch]
  __int64 v278; // [rsp+FC8h] [rbp-78h]
  size_t v279; // [rsp+FD0h] [rbp-70h]
  __int64 v280; // [rsp+FD8h] [rbp-68h]
  size_t v281; // [rsp+FE0h] [rbp-60h]
  void *v282; // [rsp+FE8h] [rbp-58h]
  void *v283; // [rsp+FF0h] [rbp-50h]
  size_t v284; // [rsp+FF8h] [rbp-48h]
  void *v285; // [rsp+1000h] [rbp-40h]
  char *v286; // [rsp+1008h] [rbp-38h]
  _QWORD *v287; // [rsp+1010h] [rbp-30h]

  v210[2] = 0;
  v6 = a2;
  result = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2);
  if ( result )
  {
    *((_QWORD *)a1 + 1) = 2;
    *((_QWORD *)a1 + 2) = result;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v277 = a3;
  v249 = a4;
  v274 = a1;
  v8 = a2[31];
  v9 = a2[32];
  v259 = a2[25];
  v284 = a2[26];
  v286 = nullptr;
  v287 = a2;
  v278 = v9;
  v269 = v8;
  while ( 2 )
  {
    std::sys::fs::metadata::h32fa16d3052ea535(v217, v8, v9);
    if ( *(_DWORD *)v217 == 1 )
    {
      if ( (v217[8] & 3) == 1 )
      {
        v10 = *(_QWORD *)&v217[8] - 1LL;
        v11 = *(_QWORD *)(*(_QWORD *)&v217[8] - 1LL);
        v12 = *(_QWORD *)(*(_QWORD *)&v217[8] + 7LL);
        if ( *(_QWORD *)v12 )
          (*(void (__fastcall **)(__int64))v12)(v11);
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8);
      }
      v14 = nullptr;
      v15 = 8u;
      goto LABEL_41;
    }
    v241 = nullptr;
    *(_OWORD *)v242 = 8u;
    std::sys::fs::read_dir::h768dda1fe4336014(v217, v8, v9);
    v16 = *(_QWORD *)v217;
    if ( v217[8] == 2 )
    {
      v124 = 2;
      v71 = *(_QWORD *)&v242[8];
      if ( *(_QWORD *)&v242[8] )
        goto LABEL_106;
      goto LABEL_155;
    }
    v236 = *(_QWORD *)v217;
    LOBYTE(v237[0]) = v217[8];
    while ( 1 )
    {
      _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v217);
      if ( *(_DWORD *)v217 != 1 )
        break;
      v16 = *(_QWORD *)&v217[16];
      if ( !*(_QWORD *)&v217[8] )
      {
        v124 = 2;
        goto LABEL_103;
      }
      memcpy(&v212[16], &v217[24], 0x410u);
      *(_OWORD *)v212 = *(_OWORD *)&v217[8];
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(v251, v212);
      v17 = *(_OWORD *)&v251[1];
      v18 = (_DWORD *)std::path::Path::extension::hbb56a39ecf8d3771(v251[1], v251[2]);
      if ( v18 == nullptr || v19 != 4 || *v18 != 1852797802 )
        goto LABEL_20;
      std::fs::DirEntry::file_type::hdd298e01714fd423(v235, v212);
      if ( LOBYTE(v235[0]) == 1 )
      {
        v16 = *((_QWORD *)&v235[0] + 1);
        v124 = 2;
        goto LABEL_182;
      }
      if ( SWORD1(v235[0]) > -28673 )
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
        {
          *(_OWORD *)v223 = v17;
          *(_QWORD *)&v219[0] = v223;
          *((_QWORD *)&v219[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v235[3] = 2;
          *((_QWORD *)&v235[3] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          *(_QWORD *)&v235[4] = 31;
          *(_QWORD *)&v235[5] = &unk_1017C9715;
          *((_QWORD *)&v235[5] + 1) = v219;
          *(_QWORD *)&v235[0] = 0;
          *((_QWORD *)&v235[0] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v235[1] = 0x1Fu;
          *(_QWORD *)&v235[2] = "src/core/repository.rs";
          *((_QWORD *)&v235[2] + 1) = 22;
          *((_QWORD *)&v235[4] + 1) = 0x42000000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v258, v235);
        }
LABEL_20:
        if ( v251[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v251[0], 1);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v212) )
          goto LABEL_15;
      }
      else
      {
        codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
          v235,
          (void *)v17,
          *((size_t *)&v17 + 1),
          v269,
          v278);
        if ( LODWORD(v235[0]) == 11 )
        {
          std::sys::fs::symlink_metadata::hd69903fe66faddbd(v235, v17, *((_QWORD *)&v17 + 1));
          if ( LODWORD(v235[0]) == 1 )
          {
            *(_QWORD *)&v219[0] = 2;
            *((_QWORD *)&v219[0] + 1) = *((_QWORD *)&v235[0] + 1);
            v124 = 2;
LABEL_181:
            v16 = *((_QWORD *)&v219[0] + 1);
            v281 = *((_QWORD *)&v219[1] + 1);
            v282 = *(void **)&v219[1];
            *(_QWORD *)&v238[0] = *(_QWORD *)&v219[2];
            *(_OWORD *)((char *)v238 + 8) = *(_OWORD *)((char *)&v219[2] + 8);
            *((_QWORD *)&v238[1] + 1) = *((_QWORD *)&v219[3] + 1);
            v238[2] = v219[4];
            v238[3] = v219[5];
LABEL_182:
            if ( v251[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v251[0], 1);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v212) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v212);
LABEL_103:
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v236) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v236);
            v71 = *(_QWORD *)&v242[8];
            if ( *(_QWORD *)&v242[8] )
            {
LABEL_106:
              v72 = (_QWORD *)(*(_QWORD *)v242 + 8LL);
              do
              {
                v73 = *(v72 - 1);
                if ( v73 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v72, v73, 1);
                v72 += 3;
                --v71;
              }
              while ( v71 );
            }
LABEL_155:
            if ( v241 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v242, 24LL * (_QWORD)v241, 8);
            v109 = v274;
            *(_OWORD *)(v274 + 88) = v238[3];
            *(_OWORD *)(v109 + 72) = v238[2];
            *(_OWORD *)(v109 + 56) = v238[1];
            *(_OWORD *)(v109 + 40) = v238[0];
            *((_QWORD *)v109 + 1) = v124;
            *((_QWORD *)v109 + 2) = v16;
            *((_QWORD *)v109 + 3) = v282;
            result = v281;
            *((_QWORD *)v109 + 4) = v281;
            *(_QWORD *)v109 = 0x8000000000000000LL;
            return result;
          }
          if ( (*((_QWORD *)&v235[0] + 1) & 0xF00000000000LL) != 0x800000000000LL )
          {
            *(_OWORD *)v223 = v17;
            *(_QWORD *)&v235[0] = v223;
            *((_QWORD *)&v235[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              (char *)v219 + 8,
              &anon_155c4da9b5393270cfa7378e2b52c417_254,
              v235);
            v124 = 9;
            goto LABEL_181;
          }
        }
        else
        {
          qmemcpy(v219, v235, 0x60u);
          v124 = *(_QWORD *)&v219[0];
          if ( *(_QWORD *)&v219[0] != 11 )
            goto LABEL_181;
        }
        v20 = v251[0];
        v21 = *(_QWORD *)&v242[8];
        if ( *(void **)&v242[8] == v241 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v241);
        v22 = *(_QWORD *)v242;
        v23 = 3 * v21;
        *(_QWORD *)(*(_QWORD *)v242 + 8 * v23) = v20;
        *(_OWORD *)(v22 + 8 * v23 + 8) = v17;
        *(_QWORD *)&v242[8] = v21 + 1;
        v24 = _InterlockedDecrement64(*(volatile signed __int64 **)v212);
        v6 = v287;
        if ( !v24 )
LABEL_15:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v212);
      }
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v236) )
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v236);
    if ( *(_QWORD *)&v242[8] >= 2u )
    {
      v56 = *(_QWORD *)v242;
      if ( *(_QWORD *)&v242[8] >= 0x15u )
      {
        core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(*(_QWORD *)v242, *(_QWORD *)&v242[8], v258);
        v6 = v287;
      }
      else
      {
        v57 = 24LL * *(_QWORD *)&v242[8];
        v58 = 24;
        v6 = v287;
        do
        {
          core::slice::sort::shared::smallsort::insert_tail::h02e919025eafbda0(v56, v56 + v58);
          v58 += 24;
        }
        while ( v57 != v58 );
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4f38dd315a2592af(&v241);
    v14 = v241;
    v15 = *(_OWORD *)v242;
LABEL_41:
    v263 = (size_t)v14;
    v282 = (void *)v15;
    v281 = v15 >> 64;
    v264 = v15;
    v265 = *((_QWORD *)&v15 + 1);
    codexmate_lib::core::repository::Repository::live_snapshot_path_for_rebuild::hac91e29d047a59db(v217, v6, 0);
    v25 = *(_QWORD *)v217;
    v26 = *(_OWORD *)&v217[8];
    v27 = *(_QWORD *)&v217[24];
    if ( *(_QWORD *)v217 != 11 )
    {
      v99 = v274;
      *((_QWORD *)v274 + 12) = *(_QWORD *)&v217[88];
      v99[11] = *(_QWORD *)&v217[80];
      v99[10] = *(_QWORD *)&v217[72];
      v99[9] = *(_QWORD *)&v217[64];
      v99[8] = *(_QWORD *)&v217[56];
      v99[7] = *(_QWORD *)&v217[48];
      v100 = *(_QWORD *)&v217[32];
      v99[6] = *(_QWORD *)&v217[40];
      v99[5] = v100;
      v99[3] = *((_QWORD *)&v26 + 1);
      v99[4] = v27;
      v99[1] = v25;
      v99[2] = v26;
      goto LABEL_144;
    }
    if ( *(_QWORD *)&v217[8] != 0x8000000000000000LL )
    {
      v28 = v265;
      if ( v265 == v263 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v263);
      v29 = v264;
      v30 = 3 * v28;
      *(_OWORD *)(v264 + 8 * v30) = v26;
      *(_QWORD *)(v29 + 8 * v30 + 16) = v27;
      v31 = v28 + 1;
      v265 = v28 + 1;
      if ( (unsigned __int64)(v28 + 1) >= 2 )
      {
        v53 = v264;
        if ( v31 >= 0x15 )
        {
          core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(v264, v31, v258);
        }
        else
        {
          v54 = 24;
          do
          {
            core::slice::sort::shared::smallsort::insert_tail::h02e919025eafbda0(v53, v53 + v54);
            v55 = -24 * v28 + v54 + 24;
            v54 += 24;
          }
          while ( v55 != 24 );
        }
      }
      alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4f38dd315a2592af(&v263);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0d2882abf0ccfa73(v212, &v263);
    codexmate_lib::core::account_coordination::acquire_snapshot_locks::hbe1ca0ff4bf12d73((__int64)v217, (__int64 *)v212);
    v32 = *(_QWORD *)v217;
    v235[0] = *(_OWORD *)&v217[8];
    *(_QWORD *)&v235[1] = *(_QWORD *)&v217[24];
    if ( *(_QWORD *)v217 != 11 )
    {
      v99 = v274;
      *((_QWORD *)v274 + 12) = *(_QWORD *)&v217[88];
      v99[11] = *(_QWORD *)&v217[80];
      v99[10] = *(_QWORD *)&v217[72];
      v99[9] = *(_QWORD *)&v217[64];
      v99[8] = *(_QWORD *)&v217[56];
      v99[7] = *(_QWORD *)&v217[48];
      v101 = *(_QWORD *)&v217[32];
      v99[6] = *(_QWORD *)&v217[40];
      v99[5] = v101;
      v99[4] = *(_QWORD *)&v235[1];
      *((_OWORD *)v99 + 1) = v235[0];
      v99[1] = v32;
LABEL_144:
      *v99 = 0x8000000000000000LL;
      v88 = v265;
      if ( v265 )
        goto LABEL_128;
      goto LABEL_145;
    }
    v232 = v235[0];
    v233 = *(_QWORD *)&v235[1];
    std::path::Path::_join::hb1a495d4f06b13b8(v235, v259, v284, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
    v33 = *((_QWORD *)&v235[0] + 1);
    codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
      (__int64)v217,
      *((__int64 *)&v235[0] + 1),
      *(__int64 *)&v235[1],
      (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
      9);
    v34 = *(_QWORD *)v217;
    v35 = *(_DWORD *)&v217[8];
    v36 = v287;
    if ( *(_QWORD *)v217 != 11 )
    {
      v37 = 21;
      v38 = v212;
      v39 = &v217[12];
      while ( v37 )
      {
        *v38++ = *v39++;
        --v37;
      }
    }
    if ( *(_QWORD *)&v235[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, *(_QWORD *)&v235[0], 1);
    if ( (_DWORD)v34 != 11 )
    {
      v102 = v274;
      v103 = v274 + 20;
      v104 = v212;
      for ( i = 21; i; --i )
        *v103++ = *v104++;
      *((_QWORD *)v102 + 1) = v34;
      *((_DWORD *)v102 + 4) = v35;
      *(_QWORD *)v102 = 0x8000000000000000LL;
      v85 = *((unsigned int **)&v232 + 1);
      v86 = v233;
      if ( v233 )
        goto LABEL_123;
      goto LABEL_125;
    }
    v275 = v35;
    codexmate_lib::core::repository::Repository::live_snapshot_path_for_rebuild::hac91e29d047a59db(
      v217,
      v36,
      (unsigned __int8)v277);
    v40 = *(_QWORD *)v217;
    v257 = *(_QWORD *)&v217[16];
    v41 = *(_QWORD *)&v217[8];
    v42 = *(_QWORD *)&v217[24];
    if ( *(_QWORD *)v217 != 11 )
    {
      v106 = v274;
      *((_QWORD *)v274 + 12) = *(_QWORD *)&v217[88];
      v106[11] = *(_QWORD *)&v217[80];
      v106[10] = *(_QWORD *)&v217[72];
      v106[9] = *(_QWORD *)&v217[64];
      v106[8] = *(_QWORD *)&v217[56];
      v106[7] = *(_QWORD *)&v217[48];
      v107 = *(_QWORD *)&v217[32];
      v106[6] = *(_QWORD *)&v217[40];
      v106[5] = v107;
      v106[2] = v41;
      v106[3] = v257;
      v106[4] = v42;
      v106[1] = v40;
      *v106 = 0x8000000000000000LL;
      goto LABEL_122;
    }
    v260 = *(_QWORD *)&v217[8];
    if ( *(_QWORD *)&v217[8] != 0x8000000000000000LL )
    {
      ++v286;
      v43 = v264;
      v44 = 24 * v265;
      while ( v44 )
      {
        v45 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
                *(_QWORD *)(v43 + 8),
                *(_QWORD *)(v43 + 16),
                v257,
                v42);
        v43 += 24;
        v44 -= 24;
        if ( v45 )
          goto LABEL_87;
      }
      *(_DWORD *)v217 = v275;
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v217);
      v46 = *(unsigned int *)v217;
      close_NOCANCEL(*(unsigned int *)v217);
      v47 = v232;
      v48 = v233;
      if ( v233 )
      {
        v49 = *((unsigned int **)&v232 + 1);
        do
        {
          _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v49);
          v46 = *v49;
          close_NOCANCEL(v46);
          ++v49;
          --v48;
        }
        while ( v48 );
      }
      v6 = v287;
      if ( (_QWORD)v47 )
      {
        v46 = *((_QWORD *)&v47 + 1);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v47 + 1), 4 * v47, 4);
      }
      v50 = v260;
      if ( v260 )
      {
        v46 = v257;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v257, v260, 1);
      }
      v51 = v265;
      if ( v265 )
      {
        v52 = (_QWORD *)(v264 + 8);
        do
        {
          v50 = *(v52 - 1);
          if ( v50 )
          {
            v46 = *v52;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v50, 1);
          }
          v52 += 3;
          --v51;
        }
        while ( v51 );
      }
      if ( v263 )
      {
        v46 = v264;
        v50 = 24 * v263;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264, 24 * v263, 8);
      }
      v8 = v269;
      v9 = v278;
      if ( v286 == (char *)3 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v50);
        v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1);
        if ( !v121 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 71);
        v122 = v121;
        memcpy(
          v121,
          "auth.json ownership kept changing while rebuilding the account registryauth.json ownership kept changing while"
          " synchronizing account stateunknownaccount-removal-quarantine",
          0x47u);
        v123 = v274;
        *((_QWORD *)v274 + 1) = 10;
        v123[2] = 71;
        v123[3] = v122;
        v123[4] = 71;
        *v123 = 0x8000000000000000LL;
        return 0x8000000000000000LL;
      }
      continue;
    }
    break;
  }
LABEL_87:
  std::path::Path::_join::hb1a495d4f06b13b8(v235, v259, v284, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20);
  v59 = *((_QWORD *)&v235[0] + 1);
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)v217,
    *((__int64 *)&v235[0] + 1),
    *(__int64 *)&v235[1],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v60 = *(_QWORD *)v217;
  v61 = *(_DWORD *)&v217[8];
  if ( *(_QWORD *)v217 != 11 )
  {
    v62 = &v217[12];
    v63 = v212;
    for ( j = 21; j; --j )
      *v63++ = *v62++;
  }
  if ( *(_QWORD *)&v235[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, *(_QWORD *)&v235[0], 1);
  if ( (_DWORD)v60 != 11 )
  {
    v74 = v274;
    v75 = v274 + 20;
    v76 = v212;
    for ( k = 21; k; --k )
      *v75++ = *v76++;
    *((_QWORD *)v74 + 1) = v60;
    *((_DWORD *)v74 + 4) = v61;
    *(_QWORD *)v74 = 0x8000000000000000LL;
    v78 = v260;
    if ( 2 * v260 )
      goto LABEL_121;
    goto LABEL_122;
  }
  v268 = v61;
  if ( (_BYTE)v277 )
  {
    v65 = v36[28];
    v66 = v36[29];
    std::sys::fs::metadata::h32fa16d3052ea535(v217, v65, v66);
    if ( v217[0] )
    {
      v36 = v287;
      if ( (v217[8] & 3) == 1 )
      {
        v67 = *(_QWORD *)&v217[8] - 1LL;
        v68 = *(_QWORD *)(*(_QWORD *)&v217[8] - 1LL);
        v69 = *(_QWORD *)(*(_QWORD *)&v217[8] + 7LL);
        if ( *(_QWORD *)v69 )
          (*(void (__fastcall **)(__int64))v69)(v68);
        v70 = *(_QWORD *)(v69 + 8);
        if ( v70 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v70, *(_QWORD *)(v69 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24, 8);
      }
    }
    else
    {
      codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(v217, v65, v66);
      v79 = *(_QWORD *)v217;
      qmemcpy(v211, &v217[8], sizeof(v211));
      if ( *(_QWORD *)v217 != 11 )
      {
        v108 = v274;
        qmemcpy(v274 + 16, v211, 0x58u);
        v108[1] = v79;
        *v108 = 0x8000000000000000LL;
        goto LABEL_120;
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v211);
      v36 = v287;
    }
  }
  v259 = v264;
  v80 = v36;
  v81 = v265;
  v82 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v80);
  if ( v82 )
  {
    v83 = 2;
LABEL_119:
    qmemcpy(v210, v215, sizeof(v210));
    v84 = v274;
    qmemcpy(v274 + 24, v210, 0x50u);
    v84[1] = v83;
    v84[2] = v82;
    *v84 = 0x8000000000000000LL;
    goto LABEL_120;
  }
  v91 = (_BYTE *)v287[28];
  codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(v217, v91, v287[29]);
  if ( *(_DWORD *)v217 == 11 )
  {
    qmemcpy(v216, &v217[8], sizeof(v216));
    v91 = &v217[96];
  }
  else
  {
    v216[0] = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v217);
  }
  *(_QWORD *)v212 = std::time::SystemTime::now::h1fe79e41f9d5677f(v217, v91);
  *(_DWORD *)&v212[8] = v92;
  std::time::SystemTime::duration_since::had059553cab94f96(v217, v212, 0, 0);
  v93 = nullptr;
  v94 = nullptr;
  if ( !v217[0] )
    v94 = *(void **)&v217[8];
  v95 = v216[0];
  if ( v216[0] == 0x8000000000000000LL )
  {
    v96 = (__m128)0xA0000000FuLL;
    v97 = 1;
    v98 = 0;
  }
  else
  {
    v98 = v216[8];
    if ( LOBYTE(v216[8]) == 2 )
    {
      v96 = (__m128)0xA0000000FuLL;
      v93 = nullptr;
      v98 = 0;
    }
    else
    {
      v93 = (void *)v216[6];
      v96 = (__m128)v216[7];
      v240[0] = *(_DWORD *)((char *)&v216[8] + 1);
      *(_DWORD *)((char *)v240 + 3) = HIDWORD(v216[8]);
    }
    v97 = 1;
    if ( BYTE4(v216[10]) != 2 )
      v97 = BYTE4(v216[10]);
  }
  LODWORD(v237[9]) = 4;
  v237[8] = v94;
  v237[2] = (void *)0x8000000000000000LL;
  v236 = 0;
  v237[0] = (void *)8;
  v237[1] = nullptr;
  v237[5] = v93;
  _mm_storel_ps((double *)&v237[6], v96);
  LOBYTE(v237[7]) = v98;
  *(_DWORD *)((char *)&v237[7] + 1) = v240[0];
  HIDWORD(v237[7]) = *(_DWORD *)((char *)v240 + 3);
  BYTE4(v237[9]) = v97;
  v110 = v287[4];
  v111 = v287[5];
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v238, v110, v111);
  v270 = 0x8000000000000001LL;
  if ( *(_QWORD *)&v238[0] != 0x8000000000000001LL )
  {
    v284 = v95;
    v117 = codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v238);
    v112 = v278;
    if ( !v117 )
      goto LABEL_174;
    memcpy(v219, v238, sizeof(v219));
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v217, v219, v110, v111);
    v82 = *(_QWORD *)&v217[16];
    v83 = *(_QWORD *)&v217[8];
    qmemcpy(v212, &v217[24], 0x50u);
    if ( *(_QWORD *)v217 == 2 )
    {
      qmemcpy(v215, v212, sizeof(v215));
LABEL_397:
      v195 = v219;
      goto LABEL_398;
    }
    v228 = *(_QWORD *)&v217[144];
    v227 = *(_QWORD *)&v217[136];
    v226 = *(_QWORD *)&v217[128];
    v225 = *(_QWORD *)&v217[120];
    v224 = *(_OWORD *)&v217[104];
    *(_OWORD *)&v223[8] = *(_OWORD *)&v217[8];
    qmemcpy(&v223[24], v212, 0x50u);
    *(_QWORD *)v223 = *(_QWORD *)v217;
    v187 = v269;
    v188 = v278;
    v281 = *(_QWORD *)&v223[32];
    v283 = *(void **)&v223[24];
    codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
      &v229,
      v269,
      v278,
      *(unsigned __int8 **)&v223[24],
      *(size_t *)&v223[32],
      v118);
    v286 = v230;
    v282 = (void *)v231;
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(v217, v230, v231, v187, v188);
    v83 = *(_QWORD *)v217;
    if ( *(_QWORD *)v217 != 11 )
    {
      v82 = *(_QWORD *)&v217[8];
      qmemcpy(v215, &v217[16], sizeof(v215));
LABEL_394:
      if ( v229 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v286, v229, 1);
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v223);
      goto LABEL_397;
    }
    _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25(v235, v219);
    v189 = v286;
    v190 = (size_t)v282;
    std::sys::fs::metadata::h32fa16d3052ea535(v217, v286, v282);
    if ( v217[0] )
    {
      *(_QWORD *)&v212[8] = *(_QWORD *)&v217[8];
      *(_QWORD *)v212 = 1;
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v212[8], v189, v191, v192, v278);
      goto LABEL_358;
    }
    codexmate_lib::core::auth::ensure_managed_account_snapshot::hb4101d838fb2a02e(v217, (__int64)v286, v190, v269, v278);
    v83 = *(_QWORD *)v217;
    if ( *(_QWORD *)v217 != 11 )
    {
      v82 = *(_QWORD *)&v217[8];
      v194 = &v217[16];
      goto LABEL_392;
    }
    v190 = (size_t)v282;
    codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v212, v286, v282);
    v193 = v277;
    if ( *(_QWORD *)v212 == v270 )
    {
      if ( (_BYTE)v277 )
      {
        v82 = *(_QWORD *)&v212[16];
        v83 = *(_QWORD *)&v212[8];
        v194 = &v212[24];
LABEL_392:
        qmemcpy(v215, v194, sizeof(v215));
        goto LABEL_393;
      }
      qmemcpy(v217, &v212[8], 0x60u);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v241 = v217;
        *(_QWORD *)v242 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        v251[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v251[1] = 31;
        v251[2] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v251[3] = 31;
        v251[4] = &off_101973E18;
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C914D, &v241, 2, v251);
        v190 = (size_t)v282;
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v217);
LABEL_358:
      v82 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::hbdb45d0e44575629(v110, v111, v286, v190);
      if ( v82 )
      {
        v83 = 2;
LABEL_393:
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v235);
        goto LABEL_394;
      }
      goto LABEL_390;
    }
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v212) )
    {
      if ( v193 )
      {
        v251[0] = v286;
        v251[1] = v190;
        *(_QWORD *)v217 = v251;
        *(_QWORD *)&v217[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v213, &unk_1017C90DE, v217);
        v82 = v213[0];
        v215[0] = v213[1];
        v215[1] = v213[2];
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v212);
        v83 = 9;
        goto LABEL_393;
      }
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 < 2u
        || (*(_QWORD *)v217 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
            *(_QWORD *)&v217[8] = 31,
            *(_QWORD *)&v217[16] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
            *(_QWORD *)&v217[24] = 31,
            *(_QWORD *)&v217[32] = &off_101973E00,
            log::__private_api::log::h719f4907c7336ae9(
              "[AiMaMi][accounts] repairing non-switchable active snapshot during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
              169,
              2,
              v217),
            *(_QWORD *)v212 != v270) )
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v212);
      }
      goto LABEL_358;
    }
    memcpy(v217, v212, 0xB0u);
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v251, v217, v286, v190);
    v82 = v251[2];
    v83 = v251[1];
    qmemcpy(v258, &v251[3], sizeof(v258));
    if ( v251[0] == 2 )
    {
      qmemcpy(v215, v258, sizeof(v215));
    }
    else
    {
      v248 = v251[18];
      v247 = v251[17];
      v246 = v251[16];
      v245 = v251[15];
      v244 = v251[14];
      v243 = v251[13];
      *(_OWORD *)v242 = *(_OWORD *)&v251[1];
      qmemcpy(&v242[16], v258, 0x50u);
      v241 = (void *)v251[0];
      if ( *(_QWORD *)&v242[24] == v281 && !memcmp(*(const void **)&v242[16], v283, v281) )
      {
        if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v217, v219) )
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v235);
          memcpy(v235, v212, sizeof(v235));
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v241);
          v190 = (size_t)v282;
LABEL_390:
          codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v217, v235, v286, v190);
          v82 = *(_QWORD *)&v217[16];
          v83 = *(_QWORD *)&v217[8];
          qmemcpy(v251, &v217[24], 0x50u);
          if ( *(_QWORD *)v217 != 2 )
          {
            *(_QWORD *)&v212[144] = *(_QWORD *)&v217[144];
            *(_QWORD *)&v212[136] = *(_QWORD *)&v217[136];
            *(_QWORD *)&v212[128] = *(_QWORD *)&v217[128];
            *(_QWORD *)&v212[120] = *(_QWORD *)&v217[120];
            *(_OWORD *)&v212[104] = *(_OWORD *)&v217[104];
            *(_OWORD *)&v212[8] = *(_OWORD *)&v217[8];
            qmemcpy(&v212[24], v251, 0x50u);
            *(_QWORD *)v212 = *(_QWORD *)v217;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v271, &v212[16]);
            v254 = v286;
            __s2 = v282;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(v258, &v254);
            v282 = *(void **)&v212[40];
            v280 = *(_QWORD *)&v212[48];
            v196 = *(_QWORD *)&v212[56];
            v281 = *(_QWORD *)&v212[64];
            v279 = *(_QWORD *)&v212[72];
            v266 = *(_QWORD *)&v212[88];
            v239 = *(_OWORD *)&v212[80];
            v285 = *(void **)&v212[96];
            v267 = *(_QWORD *)&v212[112];
            v221 = *(_OWORD *)&v212[104];
            v276 = *(_QWORD *)&v212[120];
            v197 = *(_QWORD *)&v212[128];
            v251[0] = &v212[146];
            v251[1] = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h71fbfa2e86e65c01;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v217, &unk_1017B9036, v251);
            *(_QWORD *)&v218 = *(_QWORD *)&v217[8];
            v283 = *(void **)v217;
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
              &v241,
              *(_QWORD *)&v217[8],
              *(_QWORD *)&v217[16]);
            v198 = codexmate_lib::core::repository::subscription_clock_millis::h8afb5e6841c83cc0();
            v251[0] = &v212[144];
            v251[1] = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h4432a944c532829d;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v217, &unk_1017B9036, v251);
            *(_QWORD *)&v222 = *(_QWORD *)v217;
            v250 = *(_QWORD *)&v217[8];
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
              v251,
              *(_QWORD *)&v217[8],
              *(_QWORD *)&v217[16]);
            v199 = *(_QWORD *)&v212[136];
            v200 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6();
            *(_OWORD *)&v217[200] = v272;
            *(_QWORD *)&v217[192] = v271;
            *(_QWORD *)&v217[216] = *(_QWORD *)&v258[0];
            *(_OWORD *)&v217[224] = *(_OWORD *)((char *)v258 + 8);
            *(_QWORD *)&v217[240] = v282;
            *(_QWORD *)&v217[248] = v280;
            *(_QWORD *)&v217[256] = v196;
            *(_QWORD *)&v217[264] = 0;
            *(_QWORD *)&v217[272] = 1;
            *(_QWORD *)&v217[280] = 0;
            *(_QWORD *)&v217[336] = v281;
            *(_QWORD *)&v217[344] = v279;
            *(_OWORD *)&v217[352] = v239;
            *(_QWORD *)&v217[368] = v285;
            *(_OWORD *)&v217[376] = v221;
            *(_QWORD *)&v217[392] = v276;
            *(_QWORD *)&v217[400] = v197;
            *(_OWORD *)&v217[296] = *(_OWORD *)v242;
            *(_QWORD *)&v217[288] = v241;
            *(_QWORD *)v217 = 1;
            *(_OWORD *)&v217[8] = (unsigned __int64)v198;
            *(_QWORD *)&v217[312] = v251[0];
            *(_OWORD *)&v217[320] = *(_OWORD *)&v251[1];
            *(_DWORD *)&v217[416] = 50332162;
            *(_QWORD *)&v217[32] = 0;
            *(_QWORD *)&v217[48] = 0;
            *(_QWORD *)&v217[64] = 0;
            *(_QWORD *)&v217[408] = v199;
            *(_QWORD *)&v217[80] = 1;
            *(_QWORD *)&v217[88] = v200;
            *(_QWORD *)&v217[96] = 0;
            *(_QWORD *)&v217[112] = 2;
            *(_QWORD *)&v217[152] = 2;
            if ( (_QWORD)v222 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v250, v222, 1);
            v201 = v249;
            v112 = v278;
            if ( v283 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v283, 1);
            v202 = v216;
            if ( v284 == 0x8000000000000000LL )
              v202 = nullptr;
            v203 = codexmate_lib::core::repository::prev_item::h5592e2df22272c5e(
                     v202,
                     *(_QWORD *)&v212[24],
                     *(_QWORD *)&v212[32]);
            codexmate_lib::core::repository::carry_over_registry_state::hd49b91d1ccc97529(v217, v203);
            codexmate_lib::core::repository::apply_imported_alias::hc61e9d63d54394e9(v217, v201);
            alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h3b1ace45d31de83a(&v236, v217);
            *(_OWORD *)&v251[1] = *(_OWORD *)&v212[24];
            v251[0] = *(_QWORD *)&v212[16];
            if ( v237[2] != (void *)0x8000000000000000LL && v237[2] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237[3], v237[2], 1);
            *(_OWORD *)&v237[3] = *(_OWORD *)&v251[1];
            v237[2] = (void *)v251[0];
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v235);
            if ( v229 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v286, v229, 1);
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v223);
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v219);
            v119 = v259;
            if ( v81 )
              goto LABEL_190;
LABEL_411:
            *(_QWORD *)v217 = v258;
            if ( v237[1] >= (void *)2 )
            {
              if ( v237[1] >= (void *)0x15 )
                core::slice::sort::stable::driftsort_main::h06cbb8e9707ee8a0(v237[0], v237[1], v217, v119);
              else
                core::slice::sort::shared::smallsort::insertion_sort_shift_left::hb67b9aea802eba65(v237[0]);
            }
            codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(v217, v287, &v236, 1);
            v83 = *(_QWORD *)v217;
            if ( *(_QWORD *)v217 == 11 )
            {
              v82 = v236;
              qmemcpy(v215, v237, sizeof(v215));
              if ( v216[0] != 0x8000000000000000LL )
                core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v216);
              goto LABEL_428;
            }
            v82 = *(_QWORD *)&v217[8];
            v120 = &v217[16];
            goto LABEL_416;
          }
          v194 = v251;
          goto LABEL_392;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v241);
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v212);
        v190 = (size_t)v282;
        goto LABEL_358;
      }
      *(_QWORD *)&v258[0] = v286;
      *((_QWORD *)&v258[0] + 1) = v282;
      v251[0] = v258;
      v251[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v214, &unk_1017C911F, v251);
      v82 = v214[0];
      v215[0] = v214[1];
      v215[1] = v214[2];
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v241);
      v83 = 9;
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v212);
    goto LABEL_393;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v217, v110, v111);
  v112 = v278;
  if ( !v217[0] )
  {
    if ( !(_BYTE)v277 )
    {
      qmemcpy(v217, (char *)v238 + 8, 0x60u);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v235[0] = v217;
        *((_QWORD *)&v235[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)v212 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[8] = 31;
        *(_QWORD *)&v212[16] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[24] = 31;
        *(_QWORD *)&v212[32] = &off_101973E30;
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C91A2, v235, 2, v212);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v217);
LABEL_189:
      v119 = v259;
      if ( !v81 )
        goto LABEL_411;
      goto LABEL_190;
    }
    v82 = *(_QWORD *)&v238[1];
    v83 = *((_QWORD *)&v238[0] + 1);
    v120 = (char *)&v238[1] + 8;
LABEL_416:
    qmemcpy(v215, v120, sizeof(v215));
    goto LABEL_417;
  }
  if ( (v217[8] & 3) == 1 )
  {
    v113 = *(_QWORD *)&v217[8] - 1LL;
    v114 = *(_QWORD *)(*(_QWORD *)&v217[8] - 1LL);
    v115 = *(_QWORD *)(*(_QWORD *)&v217[8] + 7LL);
    if ( *(_QWORD *)v115 )
      (*(void (__fastcall **)(__int64))v115)(v114);
    v116 = *(_QWORD *)(v115 + 8);
    if ( v116 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v116, *(_QWORD *)(v115 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, 24, 8);
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb((char *)v238 + 8);
  if ( *(_QWORD *)&v238[0] == v270 )
    goto LABEL_189;
LABEL_174:
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v238);
  v119 = v259;
  if ( !v81 )
    goto LABEL_411;
LABEL_190:
  v282 = (void *)(v119 + 24 * v81);
  while ( 2 )
  {
    v125 = *(char **)(v119 + 8);
    v259 = v119;
    v126 = *(_QWORD *)(v119 + 16);
    v286 = v125;
    v284 = v126;
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(v217, v125, v126, v269, v112);
    if ( *(_DWORD *)v217 != 11 )
    {
      qmemcpy(v235, v217, 0x60u);
      v83 = *(_QWORD *)&v235[0];
      if ( *(_QWORD *)&v235[0] == 11 )
        goto LABEL_199;
      goto LABEL_232;
    }
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(v217, v286, v284);
    if ( *(_DWORD *)v217 == 1 )
    {
      *(_QWORD *)&v235[0] = 2;
      *((_QWORD *)&v235[0] + 1) = *(_QWORD *)&v217[8];
      v83 = 2;
      goto LABEL_232;
    }
    if ( (*(_QWORD *)&v217[8] & 0xF00000000000LL) != 0x800000000000LL )
    {
      *(_QWORD *)v212 = v286;
      *(_QWORD *)&v212[8] = v284;
      *(_QWORD *)v217 = v212;
      *(_QWORD *)&v217[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        (char *)v235 + 8,
        &anon_155c4da9b5393270cfa7378e2b52c417_254,
        v217);
      *(_QWORD *)&v235[0] = 9;
      v83 = 9;
LABEL_232:
      qmemcpy(v212, v235, 0x60u);
      if ( (_BYTE)v277 )
      {
        v82 = *((_QWORD *)&v235[0] + 1);
        v120 = (char *)&v235[1];
        goto LABEL_416;
      }
      v112 = v278;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v219[0] = v212;
        *((_QWORD *)&v219[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v217[48] = 2;
        *(_QWORD *)&v217[56] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v217[64] = 31;
        *(_QWORD *)&v217[80] = &unk_1017C91EC;
        *(_QWORD *)&v217[88] = v219;
        *(_QWORD *)v217 = 0;
        *(_QWORD *)&v217[8] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v217[16] = 31;
        *(_QWORD *)&v217[24] = 0;
        *(_QWORD *)&v217[32] = "src/core/repository.rs";
        *(_QWORD *)&v217[40] = 22;
        *(_QWORD *)&v217[72] = 0xA1D00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v258, v217);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v212);
      goto LABEL_192;
    }
LABEL_199:
    codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v217, v286, v284);
    v127 = v277;
    v112 = v278;
    if ( *(_QWORD *)v217 == v270 )
    {
      if ( (_BYTE)v277 )
      {
        v82 = *(_QWORD *)&v217[16];
        v83 = *(_QWORD *)&v217[8];
        v120 = &v217[24];
        goto LABEL_416;
      }
      qmemcpy(v219, &v217[8], 0x60u);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v251[0] = v286;
        v251[1] = v284;
        *(_QWORD *)&v238[0] = v251;
        *((_QWORD *)&v238[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        *(_QWORD *)&v238[1] = v219;
        *((_QWORD *)&v238[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v212[48] = 2;
        *(_QWORD *)&v212[56] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[64] = 31;
        *(_QWORD *)&v212[80] = &unk_1017C92E7;
        *(_QWORD *)&v212[88] = v238;
        *(_QWORD *)v212 = 0;
        *(_QWORD *)&v212[8] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[16] = 31;
        *(_QWORD *)&v212[24] = 0;
        *(_QWORD *)&v212[32] = "src/core/repository.rs";
        *(_QWORD *)&v212[40] = 22;
        *(_QWORD *)&v212[72] = 0xA2700000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v258, v212);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v219);
      goto LABEL_192;
    }
    memcpy(v235, v217, sizeof(v235));
    v112 = v278;
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v235) )
    {
LABEL_210:
      v128 = *(_QWORD *)&v235[0];
      if ( *(_QWORD *)&v235[0] == 0x8000000000000000LL )
      {
LABEL_213:
        if ( *((_QWORD *)&v235[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v235[1] + 1) )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v235[2], *((_QWORD *)&v235[1] + 1), 1);
        if ( *(_QWORD *)&v235[3] != 0x8000000000000000LL && *(_QWORD *)&v235[3] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235[3] + 1), *(_QWORD *)&v235[3], 1);
        if ( *((_QWORD *)&v235[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v235[4] + 1) )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v235[5], *((_QWORD *)&v235[4] + 1), 1);
        if ( *(_QWORD *)&v235[6] != 0x8000000000000000LL && *(_QWORD *)&v235[6] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235[6] + 1), *(_QWORD *)&v235[6], 1);
        if ( *((_QWORD *)&v235[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&v235[7] + 1) )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v235[8], *((_QWORD *)&v235[7] + 1), 1);
        if ( *(_QWORD *)&v235[9] != 0x8000000000000000LL && *(_QWORD *)&v235[9] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235[9] + 1), *(_QWORD *)&v235[9], 1);
        goto LABEL_192;
      }
LABEL_211:
      if ( v128 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235[0] + 1), v128, 1);
      goto LABEL_213;
    }
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v217, v235, v286, v284);
    if ( *(_DWORD *)v217 == 2 )
    {
      if ( v127 )
      {
        v82 = *(_QWORD *)&v217[16];
        v83 = *(_QWORD *)&v217[8];
        qmemcpy(v215, &v217[24], sizeof(v215));
        v195 = v235;
        goto LABEL_398;
      }
      qmemcpy(v238, &v217[8], 0x60u);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v241 = v286;
        *(_QWORD *)v242 = v284;
        v251[0] = &v241;
        v251[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        v251[2] = v238;
        v251[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v212[48] = 2;
        *(_QWORD *)&v212[56] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[64] = 31;
        *(_QWORD *)&v212[80] = &unk_1017C928D;
        *(_QWORD *)&v212[88] = v251;
        *(_QWORD *)v212 = 0;
        *(_QWORD *)&v212[8] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *(_QWORD *)&v212[16] = 31;
        *(_QWORD *)&v212[24] = 0;
        *(_QWORD *)&v212[32] = "src/core/repository.rs";
        *(_QWORD *)&v212[40] = 22;
        *(_QWORD *)&v212[72] = 0xA3500000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v258, v212);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v238);
      goto LABEL_210;
    }
    memcpy(v219, v217, 0x98u);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v254, &v219[1]);
    if ( !v237[1] )
    {
LABEL_251:
      LODWORD(v140) = 0;
LABEL_252:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v251, &v254);
      *(_QWORD *)v223 = v286;
      *(_QWORD *)&v223[8] = v284;
      *(_QWORD *)&v238[0] = 0;
      *(_OWORD *)((char *)v238 + 8) = 1u;
      *(_QWORD *)&v212[16] = 1610612768;
      *(_QWORD *)v212 = v238;
      *(_QWORD *)&v212[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
      if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                              v223,
                              v212) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
          55,
          v258,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
      v284 = *(_QWORD *)&v238[0];
      v266 = *(_QWORD *)&v238[1];
      v141 = *((_QWORD *)&v238[0] + 1);
      v142 = *(_QWORD *)&v219[3];
      v286 = *((char **)&v219[2] + 1);
      v267 = *((_QWORD *)&v219[3] + 1);
      v279 = *((_QWORD *)&v219[4] + 1);
      v283 = *(void **)&v219[4];
      v261 = *((_QWORD *)&v219[5] + 1);
      v222 = v219[5];
      v285 = *(void **)&v219[6];
      v262 = *(_QWORD *)&v219[7];
      v218 = *(_OWORD *)((char *)&v219[6] + 8);
      v276 = *((_QWORD *)&v219[7] + 1);
      v250 = *(_QWORD *)&v219[8];
      *(_QWORD *)&v238[0] = (char *)&v219[9] + 2;
      *((_QWORD *)&v238[0] + 1) = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h71fbfa2e86e65c01;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v212, &unk_1017B9036, v238);
      *(_QWORD *)&v221 = v142;
      v234 = v140;
      *(_QWORD *)&v239 = v141;
      v280 = *(_QWORD *)v212;
      v220 = *(_QWORD *)&v212[8];
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
        v238,
        *(_QWORD *)&v212[8],
        *(_QWORD *)&v212[16]);
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v212);
      v143 = *(_DWORD *)v212;
      if ( *(int *)v212 >> 13 <= 0 )
      {
        v144 = (1 - (*(int *)v212 >> 13)) / 0x190u + 1;
        v253 = 400 * v144 + (*(int *)v212 >> 13) - 1;
        v252 = -146097 * v144;
      }
      else
      {
        v253 = (*(int *)v212 >> 13) - 1;
        v252 = 0;
      }
      v145 = *(unsigned int *)&v212[4];
      v146 = *(unsigned int *)&v212[8];
      v241 = &v219[9];
      *(_QWORD *)v242 = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h4432a944c532829d;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v212, &unk_1017B9036, &v241);
      v147 = *(_QWORD *)v212;
      v148 = *(_QWORD *)&v212[8];
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
        v212,
        *(_QWORD *)&v212[8],
        *(_QWORD *)&v212[16]);
      *(_OWORD *)&v217[200] = *(_OWORD *)&v251[1];
      *(_QWORD *)&v217[192] = v251[0];
      *(_QWORD *)&v217[216] = v284;
      *(_QWORD *)&v217[224] = v239;
      *(_QWORD *)&v217[232] = v266;
      *(_QWORD *)&v217[240] = v286;
      *(_QWORD *)&v217[248] = v221;
      *(_QWORD *)&v217[256] = v267;
      *(_QWORD *)&v217[264] = 0;
      *(_QWORD *)&v217[272] = 1;
      *(_QWORD *)&v217[280] = 0;
      *(_QWORD *)&v217[336] = v283;
      *(_QWORD *)&v217[344] = v279;
      *(_OWORD *)&v217[352] = v222;
      *(_QWORD *)&v217[368] = v285;
      *(_OWORD *)&v217[376] = v218;
      *(_QWORD *)&v217[392] = v276;
      *(_QWORD *)&v217[400] = v250;
      *(_OWORD *)&v217[296] = *(_OWORD *)((char *)v238 + 8);
      *(_QWORD *)&v217[288] = *(_QWORD *)&v238[0];
      *(_QWORD *)v217 = 1;
      *(_OWORD *)&v217[8] = 1000
                          * (v145
                           + 86400LL
                           * (int)(((v253 / 100) >> 2)
                                 + ((1461 * v253) >> 2)
                                 + v252
                                 + ((v143 >> 4) & 0x1FF)
                                 - v253 / 100
                                 - 719163))
                          + ((unsigned __int64)(1125899907 * v146) >> 50);
      *(_OWORD *)&v217[320] = *(_OWORD *)&v212[8];
      *(_QWORD *)&v217[312] = *(_QWORD *)v212;
      *(_DWORD *)&v217[416] = 50332162;
      *(_QWORD *)&v217[32] = 0;
      *(_QWORD *)&v217[48] = 0;
      *(_QWORD *)&v217[64] = 0;
      *(_QWORD *)&v217[408] = *((_QWORD *)&v219[8] + 1);
      *(_QWORD *)&v217[80] = 0;
      *(_QWORD *)&v217[96] = 0;
      *(_QWORD *)&v217[112] = 2;
      *(_QWORD *)&v217[152] = 2;
      if ( v147 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, v147, 1);
      v149 = v249;
      v150 = v281;
      if ( v280 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v220, v280, 1);
      v151 = __s2;
      if ( v216[0] == 0x8000000000000000LL || !v216[2] )
      {
        v153 = 0;
      }
      else
      {
        v152 = __n;
        v153 = v216[1];
        v154 = 424LL * v216[2];
        while ( *(_QWORD *)(v153 + 208) != v152 || memcmp(*(const void **)(v153 + 200), v151, v152) )
        {
          v153 += 424;
          v154 -= 424;
          if ( !v154 )
          {
            v153 = 0;
            break;
          }
        }
        v149 = v249;
        v150 = v281;
      }
      codexmate_lib::core::repository::carry_over_registry_state::hd49b91d1ccc97529(v217, v153);
      codexmate_lib::core::repository::apply_imported_alias::hc61e9d63d54394e9(v217, v149);
      v156 = v237[1];
      if ( (_BYTE)v234 )
      {
        if ( (void *)v150 >= v237[1] )
          core::panicking::panic_bounds_check::h56740b1198b22635(v150, v237[1], &off_101973E78, v155);
        v157 = (char *)v237[0] + 424 * v150;
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v157);
        memmove(v157, v217, 0x1A8u);
      }
      else
      {
        if ( v237[1] == (void *)v236 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc88e865975d55355(&v236);
        memmove((char *)v237[0] + 424 * (_QWORD)v156, v217, 0x1A8u);
        v237[1] = (char *)v156 + 1;
      }
      v112 = v278;
      if ( v254 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151, v254, 1);
      if ( *(_QWORD *)&v219[1] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v219[1] + 1), *(_QWORD *)&v219[1], 1);
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v235);
LABEL_192:
      v119 = v259 + 24;
      if ( (void *)(v259 + 24) == v282 )
        goto LABEL_411;
      continue;
    }
    break;
  }
  v129 = (char *)v237[0];
  v130 = 424 * (__int64)v237[1];
  v131 = __s2;
  v132 = (void *)__n;
  v133 = 0;
  v281 = 0;
  while ( *(void **)&v129[v133 + 208] != v132 || memcmp(*(const void **)&v129[v133 + 200], v131, (size_t)v132) )
  {
    ++v281;
    v133 += 424;
    if ( v130 == v133 )
      goto LABEL_251;
  }
  if ( v237[2] != (void *)0x8000000000000000LL && v237[4] == v132 && !memcmp(v237[3], v131, (size_t)v132) )
  {
LABEL_247:
    v112 = v278;
    if ( v254 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v254, 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v219);
    v128 = *(_QWORD *)&v235[0];
    if ( *(_QWORD *)&v235[0] == 0x8000000000000000LL )
      goto LABEL_213;
    goto LABEL_211;
  }
  v134 = *(const void **)&v129[v133 + 224];
  v135 = *(_QWORD *)&v129[v133 + 232];
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v217, v135, 0, 1, 1);
  v283 = *(void **)&v217[8];
  if ( v217[0] )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v283, *(_QWORD *)&v217[16]);
  v136 = *(_QWORD *)&v217[16];
  memcpy(*(void **)&v217[16], v134, v135);
  v280 = v136;
  v279 = v135;
  v137 = v283;
  v138 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(v136, v135, v286, v284);
  v139 = v277;
  v140 = v278;
  if ( v138 )
  {
LABEL_245:
    if ( v137 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v280, v137, 1);
    goto LABEL_247;
  }
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v212, v280, v279);
  if ( *(_QWORD *)v212 != v270 )
  {
    memcpy(v217, v212, 0xB0u);
    v159 = __s2;
    v160 = __n;
    if ( v216[0] == 0x8000000000000000LL || !v216[2] )
    {
      v285 = nullptr;
      v164 = v269;
    }
    else
    {
      v161 = v216[1];
      v162 = 424LL * v216[2];
      v163 = 0;
      do
      {
        if ( *(_QWORD *)(v161 + v163 + 208) == v160 && !memcmp(*(const void **)(v161 + v163 + 200), v159, v160) )
        {
          v285 = *(void **)(v161 + v163 + 224);
          *(_QWORD *)&v239 = *(_QWORD *)(v161 + v163 + 232);
          goto LABEL_295;
        }
        v163 += 424;
      }
      while ( v162 != v163 );
      v285 = nullptr;
LABEL_295:
      v164 = v269;
      v140 = v278;
    }
    codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
      &v229,
      v164,
      v140,
      (unsigned __int8 *)v159,
      v160,
      v158);
    v165 = v230;
    v276 = v231;
    v166 = 1;
    if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v235, v217) )
      goto LABEL_341;
    if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v217, v235) )
      goto LABEL_298;
    if ( v285 )
    {
      std::path::Path::components::he8b0f71a48373be5(v223, v285, v239);
      std::path::Path::components::he8b0f71a48373be5(&v241, v286, v284);
      v167 = v165;
      v168 = *(_QWORD *)v223;
      v169 = *(_QWORD *)&v223[8];
      v170 = v241;
      v171 = *(_QWORD *)v242;
      if ( *(_QWORD *)&v223[8] == *(_QWORD *)v242
        && v223[56] == v242[48]
        && v223[57] == 2
        && v242[49] == 2
        && !memcmp(*(const void **)v223, v241, *(size_t *)&v223[8]) )
      {
        v166 = 1;
      }
      else
      {
        if ( v223[16] != 6 )
        {
          *(_QWORD *)&v273[7] = *(_QWORD *)&v223[48];
          *(_QWORD *)v273 = *(_QWORD *)&v223[41];
          v272 = *(_OWORD *)&v223[25];
          v271 = *(_QWORD *)&v223[17];
        }
        v251[0] = v168;
        v251[1] = v169;
        LOBYTE(v251[2]) = v223[16];
        v251[6] = *(_QWORD *)&v273[7];
        *(_QWORD *)((char *)&v251[5] + 1) = *(_QWORD *)v273;
        *(_OWORD *)((char *)&v251[3] + 1) = v272;
        *(_QWORD *)((char *)&v251[2] + 1) = v271;
        LOWORD(v251[7]) = *(_WORD *)&v223[56];
        BYTE2(v251[7]) = v223[58];
        if ( v242[8] != 6 )
        {
          *(_QWORD *)((char *)&v258[1] + 15) = *(_QWORD *)&v242[40];
          *((_QWORD *)&v258[1] + 1) = *(_QWORD *)&v242[33];
          *(_OWORD *)((char *)v258 + 8) = *(_OWORD *)&v242[17];
          *(_QWORD *)&v258[0] = *(_QWORD *)&v242[9];
        }
        *(_QWORD *)&v238[0] = v170;
        *((_QWORD *)&v238[0] + 1) = v171;
        LOBYTE(v238[1]) = v242[8];
        *(_QWORD *)&v238[3] = *(_QWORD *)((char *)&v258[1] + 15);
        *(_OWORD *)((char *)&v238[2] + 1) = v258[1];
        *(_OWORD *)((char *)&v238[1] + 1) = v258[0];
        WORD4(v238[3]) = *(_WORD *)&v242[48];
        BYTE10(v238[3]) = v242[50];
        v166 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v251, v238);
      }
      std::path::Path::components::he8b0f71a48373be5(v223, v285, v239);
      std::path::Path::components::he8b0f71a48373be5(&v241, v280, v279);
      v285 = *(void **)v223;
      v172 = *(_QWORD *)&v223[8];
      v173 = v241;
      v140 = *(_QWORD *)v242;
      if ( *(_QWORD *)&v223[8] == *(_QWORD *)v242
        && v223[56] == v242[48]
        && v223[57] == 2
        && v242[49] == 2
        && !memcmp(v285, v241, *(size_t *)&v223[8]) )
      {
        v165 = v167;
        if ( !v166 )
          goto LABEL_298;
      }
      else
      {
        if ( v223[16] != 6 )
        {
          *(_QWORD *)&v273[7] = *(_QWORD *)&v223[48];
          *(_QWORD *)v273 = *(_QWORD *)&v223[41];
          v272 = *(_OWORD *)&v223[25];
          v271 = *(_QWORD *)&v223[17];
        }
        v251[0] = v285;
        v251[1] = v172;
        LOBYTE(v251[2]) = v223[16];
        v251[6] = *(_QWORD *)&v273[7];
        *(_QWORD *)((char *)&v251[5] + 1) = *(_QWORD *)v273;
        *(_OWORD *)((char *)&v251[3] + 1) = v272;
        *(_QWORD *)((char *)&v251[2] + 1) = v271;
        LOWORD(v251[7]) = *(_WORD *)&v223[56];
        BYTE2(v251[7]) = v223[58];
        if ( v242[8] != 6 )
        {
          *(_QWORD *)((char *)&v258[1] + 15) = *(_QWORD *)&v242[40];
          *((_QWORD *)&v258[1] + 1) = *(_QWORD *)&v242[33];
          *(_OWORD *)((char *)v258 + 8) = *(_OWORD *)&v242[17];
          *(_QWORD *)&v258[0] = *(_QWORD *)&v242[9];
        }
        *(_QWORD *)&v238[0] = v173;
        *((_QWORD *)&v238[0] + 1) = v140;
        LOBYTE(v238[1]) = v242[8];
        *(_QWORD *)&v238[3] = *(_QWORD *)((char *)&v258[1] + 15);
        *(_QWORD *)((char *)&v238[2] + 9) = *((_QWORD *)&v258[1] + 1);
        *(_OWORD *)((char *)&v238[1] + 9) = *(_OWORD *)((char *)v258 + 8);
        *(_QWORD *)((char *)&v238[1] + 1) = *(_QWORD *)&v258[0];
        WORD4(v238[3]) = *(_WORD *)&v242[48];
        BYTE10(v238[3]) = v242[50];
        v165 = v167;
        if ( v166 != (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v251, v238) )
          goto LABEL_341;
      }
    }
    std::path::Path::components::he8b0f71a48373be5(v223, v286, v284);
    std::path::Path::components::he8b0f71a48373be5(&v241, v165, v276);
    v285 = v165;
    v174 = *(_QWORD *)v223;
    v175 = *(_QWORD *)&v223[8];
    v176 = v241;
    v177 = *(_QWORD *)v242;
    if ( *(_QWORD *)&v223[8] == *(_QWORD *)v242
      && v223[56] == v242[48]
      && v223[57] == 2
      && v242[49] == 2
      && !memcmp(*(const void **)v223, v241, *(size_t *)&v223[8]) )
    {
      v166 = 1;
      v179 = v279;
    }
    else
    {
      if ( v223[16] != 6 )
      {
        *(_QWORD *)&v273[7] = *(_QWORD *)&v223[48];
        *(_QWORD *)v273 = *(_QWORD *)&v223[41];
        v272 = *(_OWORD *)&v223[25];
        v271 = *(_QWORD *)&v223[17];
      }
      v251[0] = v174;
      v251[1] = v175;
      LOBYTE(v251[2]) = v223[16];
      v251[6] = *(_QWORD *)&v273[7];
      *(_QWORD *)((char *)&v251[5] + 1) = *(_QWORD *)v273;
      *(_OWORD *)((char *)&v251[3] + 1) = v272;
      *(_QWORD *)((char *)&v251[2] + 1) = v271;
      LOWORD(v251[7]) = *(_WORD *)&v223[56];
      BYTE2(v251[7]) = v223[58];
      if ( v242[8] != 6 )
      {
        *(_QWORD *)((char *)&v258[1] + 15) = *(_QWORD *)&v242[40];
        *((_QWORD *)&v258[1] + 1) = *(_QWORD *)&v242[33];
        *(_OWORD *)((char *)v258 + 8) = *(_OWORD *)&v242[17];
        *(_QWORD *)&v258[0] = *(_QWORD *)&v242[9];
      }
      *(_QWORD *)&v238[0] = v176;
      *((_QWORD *)&v238[0] + 1) = v177;
      LOBYTE(v238[1]) = v242[8];
      *(_QWORD *)&v238[3] = *(_QWORD *)((char *)&v258[1] + 15);
      *(_QWORD *)((char *)&v238[2] + 9) = *((_QWORD *)&v258[1] + 1);
      *(_OWORD *)((char *)&v238[1] + 9) = *(_OWORD *)((char *)v258 + 8);
      *(_QWORD *)((char *)&v238[1] + 1) = *(_QWORD *)&v258[0];
      WORD4(v238[3]) = *(_WORD *)&v242[48];
      BYTE10(v238[3]) = v242[50];
      v178 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v251, v238);
      v179 = v279;
      v166 = v178;
    }
    v180 = v285;
    std::path::Path::components::he8b0f71a48373be5(v223, v280, v179);
    std::path::Path::components::he8b0f71a48373be5(&v241, v180, v276);
    v181 = *(_QWORD *)v223;
    v182 = *(_QWORD *)&v223[8];
    v183 = v241;
    v140 = *(_QWORD *)v242;
    if ( *(_QWORD *)&v223[8] != *(_QWORD *)v242
      || v223[56] != v242[48]
      || v223[57] != 2
      || v242[49] != 2
      || memcmp(*(const void **)v223, v241, *(size_t *)&v223[8]) )
    {
      if ( v223[16] != 6 )
      {
        *(_QWORD *)&v273[7] = *(_QWORD *)&v223[48];
        *(_QWORD *)v273 = *(_QWORD *)&v223[41];
        v272 = *(_OWORD *)&v223[25];
        v271 = *(_QWORD *)&v223[17];
      }
      v251[0] = v181;
      v251[1] = v182;
      LOBYTE(v251[2]) = v223[16];
      v251[6] = *(_QWORD *)&v273[7];
      *(_QWORD *)((char *)&v251[5] + 1) = *(_QWORD *)v273;
      *(_OWORD *)((char *)&v251[3] + 1) = v272;
      *(_QWORD *)((char *)&v251[2] + 1) = v271;
      LOWORD(v251[7]) = *(_WORD *)&v223[56];
      BYTE2(v251[7]) = v223[58];
      if ( v242[8] != 6 )
      {
        *(_QWORD *)((char *)&v258[1] + 15) = *(_QWORD *)&v242[40];
        *((_QWORD *)&v258[1] + 1) = *(_QWORD *)&v242[33];
        *(_OWORD *)((char *)v258 + 8) = *(_OWORD *)&v242[17];
        *(_QWORD *)&v258[0] = *(_QWORD *)&v242[9];
      }
      *(_QWORD *)&v238[0] = v183;
      *((_QWORD *)&v238[0] + 1) = v140;
      LOBYTE(v238[1]) = v242[8];
      *(_QWORD *)&v238[3] = *(_QWORD *)((char *)&v258[1] + 15);
      *(_QWORD *)((char *)&v238[2] + 9) = *((_QWORD *)&v258[1] + 1);
      *(_OWORD *)((char *)&v238[1] + 9) = *(_OWORD *)((char *)v258 + 8);
      *(_QWORD *)((char *)&v238[1] + 1) = *(_QWORD *)&v258[0];
      WORD4(v238[3]) = *(_WORD *)&v242[48];
      BYTE10(v238[3]) = v242[50];
      v165 = v285;
      v184 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v251, v238);
      v185 = v279;
      if ( v166 != v184 )
        goto LABEL_341;
      goto LABEL_340;
    }
    v185 = v279;
    v165 = v285;
    if ( v166 )
    {
LABEL_340:
      std::path::Path::components::he8b0f71a48373be5(v251, v286, v284);
      std::path::Path::components::he8b0f71a48373be5(v238, v280, v185);
      v166 = (unsigned __int8)std::path::compare_components::h4f2e3264bd4b5f16(v251, v238) >> 7;
      goto LABEL_341;
    }
LABEL_298:
    v166 = 0;
LABEL_341:
    if ( v229 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, v229, 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v217);
    v186 = v166 == 0;
    v137 = v283;
    if ( v186 )
      goto LABEL_245;
LABEL_344:
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)v217 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *(_QWORD *)&v217[8] = 31;
      *(_QWORD *)&v217[16] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *(_QWORD *)&v217[24] = 31;
      *(_QWORD *)&v217[32] = &off_101973E60;
      log::__private_api::log::h719f4907c7336ae9(
        "[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
        215,
        2,
        v217);
    }
    LOBYTE(v140) = 1;
    if ( v137 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v280, v137, 1);
    goto LABEL_252;
  }
  if ( !v139 )
  {
    qmemcpy(v217, &v212[8], 0x60u);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v251[0] = v217;
      v251[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      *(_QWORD *)&v238[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *((_QWORD *)&v238[0] + 1) = 31;
      *(_QWORD *)&v238[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *((_QWORD *)&v238[1] + 1) = 31;
      *(_QWORD *)&v238[2] = &off_101973E48;
      log::__private_api::log::h719f4907c7336ae9(&unk_1017C9235, v251, 2, v238);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v217);
    goto LABEL_344;
  }
  v82 = *(_QWORD *)&v212[16];
  v83 = *(_QWORD *)&v212[8];
  qmemcpy(v215, &v212[24], sizeof(v215));
  if ( v137 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v280, v283, 1);
  if ( v254 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v254, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v219);
  v195 = v235;
LABEL_398:
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v195);
LABEL_417:
  if ( v237[2] != (void *)0x8000000000000000LL && v237[2] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237[3], v237[2], 1);
  v204 = v237[0];
  v205 = (char *)v237[1];
  if ( v237[1] )
  {
    v206 = (char *)v237[0];
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v206);
      v206 += 424;
      --v205;
    }
    while ( v205 );
  }
  if ( v236 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, 424 * v236, 8);
  if ( v216[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v216);
  if ( v83 != 11 )
    goto LABEL_119;
LABEL_428:
  qmemcpy(v210, v215, sizeof(v210));
  qmemcpy(&v212[8], v210, 0x50u);
  *(_QWORD *)v212 = v82;
  v207 = *(_QWORD *)&v212[16];
  v235[0] = *(_OWORD *)&v212[24];
  *(_QWORD *)&v235[1] = *(_QWORD *)&v212[40];
  DWORD2(v235[1]) = *(_DWORD *)&v212[16];
  BYTE12(v235[1]) = 1;
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha20fbaf465e20dfa(v217, v235);
  qmemcpy(v274, v217, 0x70u);
  v208 = *(_QWORD *)&v212[8];
  if ( v207 )
  {
    v209 = *(_QWORD *)&v212[8];
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v209);
      v209 += 424;
      --v207;
    }
    while ( v207 );
  }
  if ( v82 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, 424 * v82, 8);
LABEL_120:
  v78 = v260;
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v268);
  close_NOCANCEL(v268);
  if ( 2 * v78 )
LABEL_121:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v257, v78, 1);
LABEL_122:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v275);
  close_NOCANCEL(v275);
  v85 = *((unsigned int **)&v232 + 1);
  v86 = v233;
  if ( v233 )
  {
LABEL_123:
    v87 = v85;
    do
    {
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v87);
      close_NOCANCEL(*v87++);
      --v86;
    }
    while ( v86 );
  }
LABEL_125:
  if ( (_QWORD)v232 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 4 * v232, 4);
  v88 = v265;
  if ( v265 )
  {
LABEL_128:
    v89 = (_QWORD *)(v264 + 8);
    do
    {
      v90 = *(v89 - 1);
      if ( v90 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v89, v90, 1);
      v89 += 3;
      --v88;
    }
    while ( v88 );
  }
LABEL_145:
  result = v263;
  if ( v263 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264, 24 * v263, 8);
  return result;
}
