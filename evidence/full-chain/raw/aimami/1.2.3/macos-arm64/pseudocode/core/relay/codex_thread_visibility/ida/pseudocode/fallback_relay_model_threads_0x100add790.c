// __ZN13codexmate_lib4core5relay23codex_thread_visibility28fallback_relay_model_threads @ 0x100add790 | 基线 same-set
// [FULL decompile]

__int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads::h3dd6da94b27a11ac(
        __int64 *a1,
        _QWORD *a2,
        void *a3,
        __int64 a4)
{
  void *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  void *v11; // rax
  size_t v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 i; // rax
  __int64 v19; // r12
  unsigned int v20; // r11d
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  char v23; // bl
  char *v24; // r13
  bool v25; // r15
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r12
  void *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  char *v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r15
  __int8 v40; // bl
  __int64 v41; // r13
  int v42; // ebx
  bool v43; // zf
  char *v44; // rcx
  _QWORD *v45; // rbx
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rbx
  unsigned int v48; // r15d
  __int64 v49; // r14
  __int8 v50; // r15
  __int64 v51; // r14
  __int64 v52; // r13
  int autocommit; // eax
  char v54; // bl
  bool v55; // r14
  bool v56; // r15
  int v57; // eax
  __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rbx
  __int64 v61; // r15
  __int64 v62; // r12
  char v63; // r14
  _QWORD *v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // r12
  __int64 v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rbx
  char v75; // r12
  __int64 v76; // r13
  __int64 v77; // r9
  double v78; // xmm0_8
  unsigned __int64 v79; // rbx
  __int64 v80; // r15
  __int64 v81; // r13
  __int64 v82; // rbx
  __int64 *v83; // rdx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  unsigned __int64 v86; // rbx
  __int64 v87; // rsi
  _QWORD *v88; // r14
  __int64 v89; // r13
  __int64 v90; // rbx
  _QWORD *v91; // r14
  __int64 v92; // rsi
  __int64 v93; // rsi
  unsigned __int64 v94; // rbx
  _QWORD *v95; // rax
  __int64 v96; // rsi
  _QWORD *v97; // r14
  __int64 v98; // r15
  __int64 v99; // r14
  __int64 v100; // r12
  size_t v101; // rbx
  __int64 v102; // r14
  __int64 *v103; // rax
  __int64 v105; // r13
  __int64 v106; // rax
  __int64 v107; // rbx
  size_t v108; // r14
  __int64 v109; // rbx
  void *v110; // r14
  size_t v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int128 *v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r13
  _QWORD *v120; // r12
  __int64 v121; // rsi
  __int64 v122; // r12
  __int64 v123; // rbx
  __int64 v124; // r12
  __int64 v125; // r13
  __int64 v126; // rsi
  __int64 v127; // rbx
  _QWORD *v128; // r14
  __int64 v129; // rsi
  __int64 v130; // rsi
  __int64 v131; // rsi
  __int64 *v132; // rax
  _QWORD *v133; // rbx
  __int64 v134; // rsi
  __int64 v135; // rsi
  __int64 v136; // r13
  __int64 v137; // r12
  __int64 v138; // rsi
  _QWORD v139[3]; // [rsp+8h] [rbp-518h] BYREF
  _QWORD v140[4]; // [rsp+20h] [rbp-500h] BYREF
  _QWORD v141[4]; // [rsp+40h] [rbp-4E0h] BYREF
  __int64 v142; // [rsp+60h] [rbp-4C0h] BYREF
  __int128 v143; // [rsp+68h] [rbp-4B8h]
  __int64 v144; // [rsp+78h] [rbp-4A8h] BYREF
  __int128 v145; // [rsp+80h] [rbp-4A0h]
  _QWORD v146[3]; // [rsp+90h] [rbp-490h] BYREF
  _QWORD v147[3]; // [rsp+A8h] [rbp-478h] BYREF
  _QWORD *v148; // [rsp+C0h] [rbp-460h]
  __int64 v149; // [rsp+C8h] [rbp-458h]
  __int64 v150; // [rsp+D0h] [rbp-450h]
  __int64 v151; // [rsp+D8h] [rbp-448h] BYREF
  __m512i v152; // [rsp+E0h] [rbp-440h]
  _QWORD *v153; // [rsp+120h] [rbp-400h]
  __int64 v154; // [rsp+128h] [rbp-3F8h] BYREF
  __int64 v155; // [rsp+130h] [rbp-3F0h]
  __int64 v156; // [rsp+138h] [rbp-3E8h]
  _QWORD v157[2]; // [rsp+140h] [rbp-3E0h] BYREF
  __int128 v158; // [rsp+150h] [rbp-3D0h] BYREF
  size_t v159; // [rsp+160h] [rbp-3C0h]
  __int128 v160; // [rsp+168h] [rbp-3B8h]
  __int64 v161; // [rsp+178h] [rbp-3A8h]
  __int64 v162; // [rsp+180h] [rbp-3A0h]
  __int64 v163; // [rsp+188h] [rbp-398h]
  sqlite3_stmt *v164; // [rsp+190h] [rbp-390h]
  __int64 v165; // [rsp+198h] [rbp-388h] BYREF
  __int64 v166; // [rsp+1A0h] [rbp-380h] BYREF
  void *__src; // [rsp+1A8h] [rbp-378h]
  _QWORD *v168; // [rsp+1B0h] [rbp-370h]
  unsigned __int64 v169; // [rsp+1B8h] [rbp-368h]
  __int128 v170; // [rsp+1C0h] [rbp-360h]
  __int64 v171; // [rsp+1D0h] [rbp-350h]
  size_t v172; // [rsp+1D8h] [rbp-348h]
  _QWORD *v173; // [rsp+1E0h] [rbp-340h]
  __int64 v174; // [rsp+1E8h] [rbp-338h]
  __int64 v175; // [rsp+1F0h] [rbp-330h]
  __int64 v176; // [rsp+1F8h] [rbp-328h] BYREF
  __int64 v177; // [rsp+200h] [rbp-320h]
  __int64 v178; // [rsp+208h] [rbp-318h]
  size_t __n; // [rsp+210h] [rbp-310h]
  __int64 v180; // [rsp+218h] [rbp-308h]
  __int64 *v181; // [rsp+220h] [rbp-300h]
  __int64 v182; // [rsp+228h] [rbp-2F8h]
  __int128 v183; // [rsp+230h] [rbp-2F0h] BYREF
  __int128 v184; // [rsp+240h] [rbp-2E0h]
  __m512i v185; // [rsp+250h] [rbp-2D0h]
  char v186; // [rsp+290h] [rbp-290h]
  _BYTE v187[7]; // [rsp+291h] [rbp-28Fh]
  unsigned __int8 v188; // [rsp+298h] [rbp-288h]
  _BYTE v189[7]; // [rsp+299h] [rbp-287h]
  __int64 v190; // [rsp+2A0h] [rbp-280h]
  void *v191; // [rsp+2A8h] [rbp-278h]
  char *v192; // [rsp+2B0h] [rbp-270h] BYREF
  __int64 v193; // [rsp+2B8h] [rbp-268h]
  __int64 v194; // [rsp+2C0h] [rbp-260h]
  __m512i v195; // [rsp+2C8h] [rbp-258h]
  __int64 v196; // [rsp+308h] [rbp-218h]
  char *v197; // [rsp+310h] [rbp-210h] BYREF
  __int128 v198; // [rsp+318h] [rbp-208h]
  __int64 (__fastcall *v199)(); // [rsp+328h] [rbp-1F8h]
  __int128 v200; // [rsp+330h] [rbp-1F0h] BYREF
  _BYTE v201[40]; // [rsp+340h] [rbp-1E0h]
  sqlite3_stmt *v202; // [rsp+368h] [rbp-1B8h]
  __int64 v203; // [rsp+370h] [rbp-1B0h] BYREF
  __int64 v204; // [rsp+378h] [rbp-1A8h]
  __int64 v205; // [rsp+380h] [rbp-1A0h]
  __int64 v206; // [rsp+388h] [rbp-198h]
  _BYTE v207[24]; // [rsp+390h] [rbp-190h] BYREF
  __int128 v208; // [rsp+3A8h] [rbp-178h]
  __int128 v209; // [rsp+3B8h] [rbp-168h]
  sqlite3_stmt *v210; // [rsp+3C8h] [rbp-158h]
  sqlite3_stmt *v211; // [rsp+3D0h] [rbp-150h]
  _DWORD v212[2]; // [rsp+3D8h] [rbp-148h]
  _BYTE v213[96]; // [rsp+3E0h] [rbp-140h] BYREF
  char v214; // [rsp+440h] [rbp-E0h]
  _BYTE v215[7]; // [rsp+441h] [rbp-DFh]
  unsigned __int8 v216; // [rsp+448h] [rbp-D8h]
  _DWORD v217[11]; // [rsp+449h] [rbp-D7h]
  __m512i v218; // [rsp+478h] [rbp-A8h] BYREF
  _BYTE *v219; // [rsp+4B8h] [rbp-68h]
  __int64 (__fastcall *v220)(); // [rsp+4C0h] [rbp-60h]
  __int64 v221; // [rsp+4D8h] [rbp-48h]
  __int64 v222; // [rsp+4E0h] [rbp-40h]
  unsigned __int64 v223; // [rsp+4E8h] [rbp-38h]
  _BYTE v224[41]; // [rsp+4F7h] [rbp-29h] BYREF

  v5 = a3;
  v181 = a1;
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4);
  v7 = 7;
  if ( v6 )
    v7 = a4;
  v8 = v7;
  v191 = &unk_10167D951;
  if ( !v6 )
    v5 = &unk_10167D951;
  __src = v5;
  v176 = 0;
  v177 = 8;
  v178 = 0;
  v153 = a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v213, a2);
  v9 = *(_QWORD *)&v213[8] + 24LL * *(_QWORD *)&v213[16];
  v147[2] = *(_QWORD *)&v213[8];
  v148 = *(_QWORD **)&v213[8];
  v170 = *(_OWORD *)v213;
  v149 = *(_QWORD *)v213;
  v150 = v9;
  v10 = *(_QWORD **)&v213[8];
  __n = v8;
  if ( !*(_QWORD *)&v213[16] )
    goto LABEL_125;
  v174 = *(_QWORD *)&v213[8] + 24LL * *(_QWORD *)&v213[16];
  v11 = v191;
  if ( v8 )
    v11 = __src;
  v191 = v11;
  v12 = 7;
  if ( v8 )
    v12 = v8;
  v172 = v12;
  v169 = 24LL * *(_QWORD *)&v213[16] - 24;
  v13 = *(_QWORD *)&v213[8] + 32LL;
  v14 = *(__int64 **)&v213[8];
  while ( 1 )
  {
    v168 = (_QWORD *)v13;
    v173 = v14 + 3;
    v148 = v14 + 3;
    v180 = *v14;
    if ( v180 == 0x8000000000000000LL )
    {
      v9 = v174;
      v10 = v173;
LABEL_125:
      if ( (_QWORD *)v9 != v10 )
      {
        v94 = (v9 - (__int64)v10) / 0x18uLL;
        v95 = v10 + 1;
        do
        {
          v96 = *(v95 - 1);
          if ( v96 )
          {
            v97 = v95;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v95, v96, 1);
            v95 = v97;
          }
          v95 += 3;
          --v94;
        }
        while ( v94 );
      }
LABEL_130:
      if ( (_QWORD)v170 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v170 + 1), 24 * v170, 8);
      v89 = v177;
      v98 = v178;
      if ( v178 )
      {
        v99 = v153[73];
        v100 = v153[74];
        codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal::h0d144f302266e7ee(
          (__int64)&v183,
          v99,
          v100);
        v101 = __n;
        DWORD2(v184) = 1;
        if ( (__n & 0x8000000000000000LL) != 0LL )
        {
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h48b914ff9f580bfd(&v183, v89);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v158, v89);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v218, v89 + 24);
          v102 = 0;
LABEL_135:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v102, __n);
        }
        v196 = v100;
        v171 = v99;
        v222 = v89 + 48 * v98;
        v190 = v89;
        do
        {
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h48b914ff9f580bfd(&v183, v89);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v158, v89);
          v105 = v89 + 24;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v218, v105);
          if ( v101 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v218, v105);
            v102 = 1;
            v106 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v101, 1);
            if ( !v106 )
              goto LABEL_135;
            v107 = v106;
          }
          else
          {
            v107 = 1;
          }
          v108 = __n;
          memcpy((void *)v107, __src, __n);
          *(_OWORD *)v213 = v158;
          *(_QWORD *)&v213[16] = v159;
          *(_OWORD *)&v213[32] = *(__int128 *)((char *)v218.i128 + 8);
          *(_QWORD *)&v213[24] = v218.i64[0];
          *(_QWORD *)&v213[48] = v108;
          *(_QWORD *)&v213[56] = v107;
          *(_QWORD *)&v213[64] = v108;
          *(_DWORD *)&v213[72] = 0;
          v109 = v184;
          if ( (_QWORD)v184 == (_QWORD)v183 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb77fe25a7c168e6f(&v183);
          qmemcpy((void *)(*((_QWORD *)&v183 + 1) + 80 * v109), v213, 0x50u);
          *(_QWORD *)&v184 = v109 + 1;
          v89 = v105 + 24;
          v101 = __n;
        }
        while ( v89 != v222 );
        std::path::Path::_join::hb1a495d4f06b13b8(&v158, v171, v196, "router_model_restore.json", 25);
        v110 = *((void **)&v158 + 1);
        v111 = v159;
        v112 = std::path::Path::parent::h4c3ac26770731fbb(*((_QWORD *)&v158 + 1), v159);
        if ( v112 )
        {
          *(_WORD *)v213 = 511;
          v213[2] = 1;
          v114 = std::fs::DirBuilder::_create::h099c6e2853c95452(v213, v112, v113);
          if ( (v114 & 3) == 1 )
          {
            v222 = v114 - 1;
            v136 = *(_QWORD *)(v114 - 1);
            v137 = *(_QWORD *)(v114 + 7);
            if ( *(_QWORD *)v137 )
              (*(void (__fastcall **)(__int64))v137)(v136);
            v138 = *(_QWORD *)(v137 + 8);
            if ( v138 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v138, *(_QWORD *)(v137 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, 24, 8);
          }
        }
        v115 = &v183;
        serde_json::ser::to_vec_pretty::hf3526a5f296f81f5(&v218, &v183);
        v119 = v218.i64[0];
        if ( __OFSUB__(-v218.i64[0], 1) )
        {
          v120 = (_QWORD *)v218.i64[1];
          *(_QWORD *)&v200 = v218.i64[1];
          v89 = v190;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            *(_QWORD *)v207 = &v200;
            *(_QWORD *)&v207[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
            *(_QWORD *)&v213[48] = 2;
            *(_QWORD *)&v213[56] = &unk_10167D5D6;
            *(_QWORD *)&v213[64] = 51;
            *(_QWORD *)&v213[80] = &unk_1017CAFDC;
            *(_QWORD *)&v213[88] = v207;
            *(_QWORD *)v213 = 0;
            *(_QWORD *)&v213[8] = &unk_10167D5D6;
            *(_OWORD *)&v213[16] = 0x33u;
            *(_QWORD *)&v213[32] = "src/core/relay/codex_thread_visibility.rs";
            *(_QWORD *)&v213[40] = 41;
            *(_QWORD *)&v213[72] = 0x93800000001LL;
            v115 = (__int128 *)v213;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v224, v213);
            v120 = (_QWORD *)v200;
          }
          if ( *v120 == 1 )
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v120 + 1, v115, v116, v117, v118);
          }
          else if ( !*v120 )
          {
            v121 = v120[2];
            if ( v121 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120[1], v121, 1);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 40, 8);
        }
        else
        {
          v122 = v218.i64[1];
          v123 = std::fs::write::inner::had0c1bee0a2c1e21(v110, v111, (void *)v218.i64[1], v218.u64[2]);
          if ( v119 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v119, 1);
          v89 = v190;
          if ( v123 )
          {
            *(_QWORD *)&v200 = v123;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              *(_QWORD *)v207 = &v200;
              *(_QWORD *)&v207[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
              *(_QWORD *)&v213[48] = 2;
              *(_QWORD *)&v213[56] = &unk_10167D5D6;
              *(_QWORD *)&v213[64] = 51;
              *(_QWORD *)&v213[80] = &unk_1017CAFAB;
              *(_QWORD *)&v213[88] = v207;
              *(_QWORD *)v213 = 0;
              *(_QWORD *)&v213[8] = &unk_10167D5D6;
              *(_OWORD *)&v213[16] = 0x33u;
              *(_QWORD *)&v213[32] = "src/core/relay/codex_thread_visibility.rs";
              *(_QWORD *)&v213[40] = 41;
              *(_QWORD *)&v213[72] = 0x93500000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v224, v213);
              v123 = v200;
            }
            if ( (v123 & 3) == 1 )
            {
              v222 = v123 - 1;
              v124 = *(_QWORD *)(v123 - 1);
              v125 = *(_QWORD *)(v123 + 7);
              if ( *(_QWORD *)v125 )
                (*(void (__fastcall **)(_QWORD))v125)(*(_QWORD *)(v123 - 1));
              v126 = *(_QWORD *)(v125 + 8);
              if ( v126 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v126, *(_QWORD *)(v125 + 16));
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, 24, 8);
              v89 = v190;
            }
          }
        }
        if ( (_QWORD)v158 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v158, 1);
        v127 = v184;
        if ( (_QWORD)v184 )
        {
          v128 = (_QWORD *)(*((_QWORD *)&v183 + 1) + 56LL);
          do
          {
            v129 = *(v128 - 7);
            if ( v129 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v128 - 6), v129, 1);
            v130 = *(v128 - 4);
            if ( v130 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v128 - 3), v130, 1);
            v131 = *(v128 - 1);
            if ( v131 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v128, v131, 1);
            v128 += 10;
            --v127;
          }
          while ( v127 );
        }
        if ( (_QWORD)v183 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v183 + 1), 80 * v183, 8);
        v132 = v181;
        v181[1] = v98;
        *v132 = 11;
        v133 = (_QWORD *)(v89 + 32);
        do
        {
          v134 = *(v133 - 4);
          if ( v134 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v133 - 3), v134, 1);
          v135 = *(v133 - 1);
          if ( v135 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v133, v135, 1);
          v133 += 6;
          --v98;
        }
        while ( v98 );
      }
      else
      {
        v103 = v181;
        v181[1] = 0;
        *v103 = 11;
      }
      goto LABEL_137;
    }
    v15 = v14[2];
    v222 = v14[1];
    v196 = v15;
    std::sys::fs::metadata::h32fa16d3052ea535(v213, v222, v15);
    if ( *(_DWORD *)v213 != 1 )
      break;
    if ( (v213[8] & 3) == 1 )
    {
      v69 = *(_QWORD *)&v213[8] - 1LL;
      v70 = *(_QWORD *)(*(_QWORD *)&v213[8] - 1LL);
      v71 = *(_QWORD *)(*(_QWORD *)&v213[8] + 7LL);
      if ( *(_QWORD *)v71 )
        (*(void (__fastcall **)(__int64))v71)(v70);
      v72 = *(_QWORD *)(v71 + 8);
      if ( v72 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v72, *(_QWORD *)(v71 + 16));
      v73 = v69;
      v17 = 8;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24, 8);
    }
    else
    {
      v17 = 8;
    }
    v74 = 0;
    v21 = 0;
LABEL_93:
    *(_QWORD *)v213 = v17;
    *(_QWORD *)&v213[16] = v74;
    *(_QWORD *)&v213[8] = v17;
    *(_QWORD *)&v213[24] = v17 + 48 * v21;
    v76 = v178;
    if ( v21 > v176 - v178 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v176,
        v178,
        v21,
        8,
        48,
        v16);
      v76 = v178;
    }
    memcpy((void *)(v177 + 48 * v76), (const void *)v17, 48 * v21);
    v178 = v76 + v21;
    if ( v74 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 48 * v74, 8);
    if ( v180 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, v180, 1);
    v169 -= 24LL;
    v13 = (__int64)(v168 + 3);
    v14 = v173;
    if ( v173 == (_QWORD *)v174 )
      goto LABEL_130;
  }
  v166 = 4;
  for ( i = 0; ; i = v171 )
  {
    v190 = i;
    v171 = i + 1;
    v151 = i + 1;
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
      v213,
      v222,
      v196);
    v19 = *(_QWORD *)v213;
    LOBYTE(v20) = v213[8];
    v21 = *(_QWORD *)&v213[24];
    v17 = *(_QWORD *)&v213[16];
    v218 = *(__m512i *)&v213[32];
    if ( v216 == 3 )
    {
      *(_OWORD *)v207 = v218.i128[0];
      *(_QWORD *)&v207[16] = v218.i64[2];
      v208 = *(__int128 *)((char *)&v218.i128[1] + 8);
      v209 = *(__int128 *)((char *)&v218.i128[2] + 8);
      v210 = (sqlite3_stmt *)v218.i64[7];
      v16 = v218.i64[6];
      v42 = *(_DWORD *)&v213[8] >> 8;
      v41 = *(_QWORD *)&v213[8] >> 16;
      v195 = v218;
      if ( *(_QWORD *)v213 == 11 )
      {
LABEL_92:
        v74 = (v41 << 16) | ((unsigned __int8)v42 << 8) | (unsigned __int8)v20;
        goto LABEL_93;
      }
      goto LABEL_104;
    }
    *(_DWORD *)&v187[3] = *(_DWORD *)&v215[3];
    *(_DWORD *)v187 = *(_DWORD *)v215;
    *(_DWORD *)&v189[3] = *(_DWORD *)((char *)v217 + 3);
    *(_DWORD *)v189 = v217[0];
    *(_OWORD *)v207 = v218.i128[0];
    *(_QWORD *)&v207[16] = v218.i64[2];
    v208 = *(__int128 *)((char *)&v218.i128[1] + 8);
    v209 = *(__int128 *)((char *)&v218.i128[2] + 8);
    v210 = (sqlite3_stmt *)v218.i64[7];
    v183 = *(_OWORD *)v213;
    v184 = *(_OWORD *)&v213[16];
    v185 = v218;
    v186 = v214;
    v188 = v216;
    codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h4c3d9b33239405b8(
      (__int64)v213,
      (__int64)&v183);
    v19 = *(_QWORD *)v213;
    if ( *(_QWORD *)v213 != 11 )
    {
      v223 = v213[8];
      LOBYTE(v42) = v213[9];
      v80 = *(unsigned int *)&v213[10];
      v81 = *(unsigned __int16 *)&v213[14];
      v21 = *(_QWORD *)&v213[24];
      v221 = *(_QWORD *)&v213[16];
      v195 = *(__m512i *)&v213[32];
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v183);
      v41 = v80 | (v81 << 32);
      v17 = v221;
      LOBYTE(v20) = v223;
LABEL_104:
      v82 = (v41 << 16) | ((unsigned __int8)v42 << 8) | (unsigned __int8)v20;
      v152 = v195;
      goto LABEL_108;
    }
    if ( (v213[8] & 1) == 0 )
    {
      v17 = 8;
      v21 = 0;
      v75 = 0;
      LOBYTE(v42) = 0;
      v41 = 0;
LABEL_91:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v183);
      LOBYTE(v20) = v75;
      goto LABEL_92;
    }
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
      v213,
      &v183,
      "SELECT id, rollout_path, model, model_provider, source FROM threads WHERE COALESCE(archived, 0) = 0relay_model_fal"
      "lbackquery model fallback threadsread model fallback thread rowprepare model fallback threadsbegin model fallback "
      "transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provi"
      "der LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair",
      99);
    if ( *(_DWORD *)v213 == 1 )
    {
      v218 = *(__m512i *)&v213[8];
      v192 = "prepare model fallback threadsbegin model fallback transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      v193 = 30;
      v22 = *(_QWORD *)&v213[8];
      v23 = v213[44];
      *(_QWORD *)&v200 = &v192;
      *((_QWORD *)&v200 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)v201 = &v218;
      *(_QWORD *)&v201[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v197, &unk_1017B9AD3, &v200);
      v24 = v197;
      v21 = *((_QWORD *)&v198 + 1);
      v221 = v198;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v218);
      v25 = v22 == 0x8000000000000000LL && (unsigned __int8)(v23 - 3) < 2u;
      goto LABEL_38;
    }
    v210 = *(sqlite3_stmt **)&v213[64];
    v209 = *(_OWORD *)&v213[48];
    v208 = *(_OWORD *)&v213[32];
    *(_OWORD *)v207 = *(_OWORD *)&v213[8];
    *(_QWORD *)&v207[16] = *(_QWORD *)&v213[24];
    v26 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v213[64]);
    if ( v26 )
    {
      *(_OWORD *)v213 = 0x8000000000000013LL;
      *(_QWORD *)&v213[16] = v26;
      v197 = "query model fallback threadsread model fallback thread rowprepare model fallback threadsbegin model fallback transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      *(_QWORD *)&v198 = 28;
      v218.i64[0] = (__int64)&v197;
      v218.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v218.i64[2] = (__int64)v213;
      v218.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v200, &unk_1017B9AD3, &v218);
      v221 = *((_QWORD *)&v200 + 1);
      v24 = (char *)v200;
      v21 = *(_QWORD *)v201;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v207);
      v25 = 0;
      goto LABEL_38;
    }
    core::iter::adapters::try_process::h1667d91536d68dff(&v218, v207, 0);
    v223 = 0x8000000000000016LL;
    if ( v218.i64[0] != 0x8000000000000016LL )
    {
      *(__m512i *)v213 = v218;
      v192 = "read model fallback thread rowprepare model fallback threadsbegin model fallback transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      v193 = 30;
      v39 = v218.i64[0];
      v40 = v218.i8[36];
      *(_QWORD *)&v200 = &v192;
      *((_QWORD *)&v200 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)v201 = v213;
      *(_QWORD *)&v201[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v197, &unk_1017B9AD3, &v200);
      v24 = v197;
      v21 = *((_QWORD *)&v198 + 1);
      v221 = v198;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v207);
      v25 = (unsigned __int8)(v40 - 3) < 2u && v39 == 0x8000000000000000LL;
LABEL_38:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v183);
      v20 = (unsigned int)v24;
      v41 = (unsigned __int64)v24 >> 16;
      v42 = v20 >> 8;
      v19 = 10;
      v43 = !v25;
      v17 = v221;
      if ( v43 )
        goto LABEL_104;
      goto LABEL_39;
    }
    v141[0] = v218.i64[2];
    v141[1] = v218.i64[2];
    v141[2] = v218.i64[1];
    v141[3] = v218.i64[2] + 120 * v218.i64[3];
    alloc::vec::in_place_collect::from_iter_in_place::h183d6634cf6911e6(&v154, v141);
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v207);
    if ( v156 )
    {
      v182 = v156;
      v147[0] = v191;
      v147[1] = v172;
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
        &v218,
        &v183,
        *(&off_1019753C8 + (unsigned int)v188),
        qword_10167F028[v188]);
      v27 = v218.i64[0];
      if ( v218.i64[0] == v223 )
      {
        v165 = 0;
        v203 = 0;
        v204 = 8;
        v205 = 0;
        v221 = v155;
        v206 = 96 * v182;
        v28 = 1;
        v29 = 0;
        v30 = v191;
        do
        {
          codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::he67490595d91b8fb(
            (__int64)v207,
            *(_QWORD *)(v221 + v29 + 32),
            *(_QWORD *)(v221 + v29 + 40),
            *(const void **)(v221 + v29 + 56),
            *(_QWORD *)(v221 + v29 + 64),
            v30,
            v172);
          v31 = *(_QWORD *)v207;
          if ( *(_QWORD *)v207 == 0x8000000000000001LL )
          {
            *(_QWORD *)&v158 = v175;
            v194 = v208;
            v193 = *(_QWORD *)&v207[16];
            v192 = *(char **)&v207[8];
            if ( (unsigned __int64)v183 >= 0x7FFFFFFFFFFFFFFFLL )
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
            *(_QWORD *)&v183 = v183 + 1;
            autocommit = sqlite3_get_autocommit((sqlite3 *)v184);
            *(_QWORD *)&v183 = v183 - 1;
            if ( !autocommit )
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v213, &v183, &unk_1015FBFE8, 8);
              if ( *(_QWORD *)v213 != v223 )
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
            }
            v197 = (char *)(v29 + v221);
            *(_QWORD *)&v198 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *((_QWORD *)&v198 + 1) = &v192;
            v199 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v144, &unk_1017CBA95, &v197);
            v218.i128[1] = v145;
            v218.i64[1] = v144;
            v218.i64[0] = 10;
            codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h9a9d14f09ebdbde6(
              v213,
              &v218,
              0,
              v204,
              v205);
            v223 = *(_QWORD *)&v213[8];
            v19 = *(_QWORD *)v213;
            v49 = *(_QWORD *)&v213[24];
            v17 = *(_QWORD *)&v213[16];
            v195 = *(__m512i *)&v213[32];
            v54 = v214;
            *(_DWORD *)((char *)v212 + 3) = *(_DWORD *)&v215[3];
            v212[0] = *(_DWORD *)v215;
            if ( v192 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v193, v192, 1);
            goto LABEL_58;
          }
          v202 = v211;
          *(_QWORD *)&v201[32] = v210;
          *(_OWORD *)&v201[16] = v209;
          *(_OWORD *)v201 = v208;
          v200 = *(_OWORD *)&v207[8];
          if ( *(_QWORD *)v207 != 0x8000000000000000LL )
          {
            v164 = v202;
            v163 = *(_QWORD *)&v201[32];
            v162 = *(_QWORD *)&v201[24];
            v161 = *(_QWORD *)&v201[16];
            v160 = *(_OWORD *)v201;
            v159 = *((_QWORD *)&v200 + 1);
            *((_QWORD *)&v158 + 1) = v200;
            v32 = v205;
            if ( v205 == v203 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v203);
            v33 = v204;
            v34 = 9 * v32;
            *(_QWORD *)(v204 + 8 * v34) = v31;
            v35 = *((_QWORD *)&v200 + 1);
            *(_QWORD *)(v33 + 8 * v34 + 8) = v200;
            *(_QWORD *)(v33 + 8 * v34 + 16) = v35;
            *(_OWORD *)(v33 + 8 * v34 + 24) = *(_OWORD *)v201;
            *(_QWORD *)(v33 + 8 * v34 + 40) = *(_QWORD *)&v201[16];
            *(_QWORD *)(v33 + 8 * v34 + 48) = *(_QWORD *)&v201[24];
            *(_QWORD *)(v33 + 8 * v34 + 56) = *(_QWORD *)&v201[32];
            *(_QWORD *)(v33 + 8 * v34 + 64) = v202;
            v205 = v32 + 1;
            v175 = v31;
            v30 = v191;
          }
          v36 = *(_QWORD *)(v221 + v29 + 16);
          v37 = *(char **)(v221 + v29 + 56);
          v38 = *(_QWORD *)(v221 + v29 + 64);
          v157[0] = *(_QWORD *)(v221 + v29 + 8);
          v157[1] = v36;
          v192 = v37;
          v193 = v38;
          v197 = (char *)v30;
          *(_QWORD *)&v198 = v172;
          v218.i64[0] = (__int64)v157;
          v218.i64[1] = (__int64)&unk_1019747F0;
          v218.i64[2] = (__int64)&v192;
          v218.i64[3] = (__int64)&unk_1019747F0;
          v218.i64[4] = (__int64)&v197;
          v218.i64[5] = (__int64)&unk_101974810;
          rusqlite::Connection::execute::h1e8b76b744a4c88a(v213, &v183, &unk_10167D596, 64, &v218, 3);
          if ( *(_QWORD *)v213 != v223 )
          {
            *(_QWORD *)&v158 = v175;
            v210 = *(sqlite3_stmt **)&v213[56];
            v209 = *(_OWORD *)&v213[40];
            v208 = *(_OWORD *)&v213[24];
            *(_QWORD *)&v207[16] = *(_QWORD *)&v213[16];
            *(_OWORD *)v207 = *(_OWORD *)v213;
            v55 = *(_QWORD *)v213 == 0x8000000000000000LL;
            v56 = (unsigned __int8)(v213[36] - 3) < 2u;
            if ( (unsigned __int64)v183 >= 0x7FFFFFFFFFFFFFFFLL )
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
            *(_QWORD *)&v183 = v183 + 1;
            v57 = sqlite3_get_autocommit((sqlite3 *)v184);
            *(_QWORD *)&v183 = v183 - 1;
            if ( !v57 )
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v213, &v183, &unk_1015FBFE8, 8);
              if ( *(_QWORD *)v213 != v223 )
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
            }
            v197 = (char *)(v29 + v221);
            *(_QWORD *)&v198 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *((_QWORD *)&v198 + 1) = v207;
            v199 = (__int64 (__fastcall *)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v142, &unk_1017CBA6A, &v197);
            v218.i128[1] = v143;
            v218.i64[1] = v142;
            v218.i64[0] = 10;
            codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h9a9d14f09ebdbde6(
              v213,
              &v218,
              v56 && v55,
              v204,
              v205);
            v223 = *(_QWORD *)&v213[8];
            v19 = *(_QWORD *)v213;
            v49 = *(_QWORD *)&v213[24];
            v17 = *(_QWORD *)&v213[16];
            v195 = *(__m512i *)&v213[32];
            v54 = v214;
            v212[0] = *(_DWORD *)v215;
            *(_DWORD *)((char *)v212 + 3) = *(_DWORD *)&v215[3];
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v207);
LABEL_58:
            LOBYTE(v206) = v54;
            v58 = v205;
            if ( !v205 )
              goto LABEL_74;
LABEL_66:
            v64 = (_QWORD *)(v204 + 56);
            do
            {
              v65 = *(v64 - 7);
              if ( v65 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v64 - 6), v65, 1);
              v66 = *(v64 - 4);
              if ( v66 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v64 - 3), v66, 1);
              v67 = *(v64 - 1);
              if ( v67 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v67, 1);
              v64 += 9;
              --v58;
            }
            while ( v58 );
            goto LABEL_74;
          }
          if ( !*(_QWORD *)&v213[8] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
          {
            v218.i64[0] = (__int64)v157;
            v218.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            *(_QWORD *)&v213[48] = 3;
            *(_QWORD *)&v213[56] = &unk_10167D5D6;
            *(_QWORD *)&v213[64] = 51;
            *(_QWORD *)&v213[80] = &unk_1017CA5AB;
            *(_QWORD *)&v213[88] = &v218;
            *(_QWORD *)v213 = 0;
            *(_QWORD *)&v213[8] = &unk_10167D5D6;
            *(_OWORD *)&v213[16] = 0x33u;
            *(_QWORD *)&v213[32] = "src/core/relay/codex_thread_visibility.rs";
            *(_QWORD *)&v213[40] = 41;
            *(_QWORD *)&v213[72] = 0xC2E00000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v224, v213);
          }
          v165 = v28++;
          v29 += 96;
        }
        while ( v206 != v29 );
        *(_QWORD *)&v158 = v175;
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(&v200, &v183, &unk_10167EFAD, 6);
        if ( (unsigned __int64)v183 >= 0x7FFFFFFFFFFFFFFFLL )
          core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
        *(_QWORD *)&v183 = v183 + 1;
        v59 = sqlite3_get_autocommit((sqlite3 *)v184);
        *(_QWORD *)&v183 = v183 - 1;
        if ( !v59 )
        {
          rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v213, &v183, &unk_1015FBFE8, 8);
          if ( *(_QWORD *)v213 != v223 )
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
        }
        if ( (_QWORD)v200 == v223 )
        {
          v218.i64[0] = v222;
          v218.i64[1] = v196;
          *(_QWORD *)v207 = v182;
          *(_QWORD *)v213 = &v218;
          *(_QWORD *)&v213[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v213[16] = v147;
          *(_QWORD *)&v213[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          *(_QWORD *)&v213[32] = v207;
          *(_QWORD *)&v213[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          *(_QWORD *)&v213[48] = &v165;
          *(_QWORD *)&v213[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_1017CBAC4, v213);
          v78 = codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
                  (unsigned __int64)"relay_model_fallbackquery model fallback threadsread model fallback thread rowprepare model fallback threadsbegin model fallback transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair",
                  20,
                  (unsigned __int64)"convergedSELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
                  9,
                  v139,
                  v77);
          v140[0] = v221;
          v140[1] = v221;
          v140[2] = v154;
          v140[3] = v221 + 96 * v182;
          alloc::vec::in_place_collect::from_iter_in_place::h5b35c8fb6048aeaa(v213, v140, v78);
          v17 = *(_QWORD *)&v213[8];
          v79 = *(_QWORD *)v213;
          v21 = *(_QWORD *)&v213[16];
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedRolloutPatch$GT$$GT$::hc4e997abb8f113ef(&v203);
          v41 = v79 >> 16;
          v75 = v79;
          v42 = (unsigned int)v79 >> 8;
          goto LABEL_91;
        }
        v210 = v202;
        v209 = *(_OWORD *)&v201[24];
        v208 = *(_OWORD *)&v201[8];
        *(_QWORD *)&v207[16] = *(_QWORD *)v201;
        *(_OWORD *)v207 = v200;
        v60 = v204;
        v61 = v205;
        v62 = v200;
        v63 = v201[20];
        v192 = v207;
        v193 = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v197, &unk_1017CBAF6, &v192);
        v218.i128[1] = v198;
        v218.i64[1] = (__int64)v197;
        v218.i64[0] = 10;
        codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h9a9d14f09ebdbde6(
          v213,
          &v218,
          v62 == 0x8000000000000000LL && (unsigned __int8)(v63 - 3) < 2u,
          v60,
          v61);
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v207);
        v223 = *(_QWORD *)&v213[8];
        v19 = *(_QWORD *)v213;
        v49 = *(_QWORD *)&v213[24];
        v17 = *(_QWORD *)&v213[16];
        v195 = *(__m512i *)&v213[32];
        LOBYTE(v206) = v214;
        v212[0] = *(_DWORD *)v215;
        *(_DWORD *)((char *)v212 + 3) = *(_DWORD *)&v215[3];
        v58 = v205;
        if ( v205 )
          goto LABEL_66;
LABEL_74:
        if ( v203 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, 72 * v203, 8);
      }
      else
      {
        *(__m512i *)v213 = v218;
        *(_QWORD *)&v200 = "begin model fallback transactionUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
        *((_QWORD *)&v200 + 1) = 32;
        v50 = v218.i8[36];
        v218.i64[0] = (__int64)&v200;
        v218.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v218.i64[2] = (__int64)v213;
        v218.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v207, &unk_1017B9AD3, &v218);
        v51 = *(_QWORD *)&v207[8];
        v223 = *(_QWORD *)v207;
        v52 = *(_QWORD *)&v207[16];
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v213);
        LOBYTE(v206) = v27 == 0x8000000000000000LL && (unsigned __int8)(v50 - 3) < 2u;
        v19 = 10;
        v17 = v51;
        v49 = v52;
      }
      v42 = (unsigned int)v223 >> 8;
      v41 = v223 >> 16;
    }
    else
    {
      v19 = 11;
      LOBYTE(v206) = 1;
      v17 = 8;
      v41 = 0;
      LOBYTE(v42) = 0;
      v223 = 0;
      v49 = 0;
    }
    v221 = v49;
    v68 = v155;
    core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..relay..codex_thread_visibility..fallback_relay_model_threads_in_db_once..Target$u5d$$GT$::h7e8c4376ec11e3c4();
    if ( v154 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 96 * v154, 8);
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v183);
    if ( v19 == 11 )
    {
      v21 = v221;
      LOBYTE(v20) = v223;
      goto LABEL_92;
    }
    v21 = v221;
    LOBYTE(v20) = v223;
    if ( (v206 & 1) == 0 )
      goto LABEL_104;
LABEL_39:
    *(_QWORD *)v213 = v19;
    *(_QWORD *)&v213[8] = (v41 << 16) | ((unsigned __int8)v42 << 8) | (unsigned __int8)v20;
    *(_QWORD *)&v213[16] = v17;
    *(_QWORD *)&v213[24] = v21;
    *(__m512i *)&v213[32] = v195;
    v214 = 1;
    *(_DWORD *)&v215[3] = *(_DWORD *)((char *)v212 + 3);
    *(_DWORD *)v215 = v212[0];
    if ( v190 == 3 )
      break;
    v44 = (char *)&unk_10167DAF0 + 16 * v190;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u )
    {
      v47 = *(_QWORD *)v44;
      v48 = *((_DWORD *)v44 + 2);
    }
    else
    {
      v45 = (_QWORD *)((char *)&unk_10167DAF0 + 16 * v190);
      codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859(
        (__int64 *)&v158,
        v222,
        v196);
      v46 = v45;
      v47 = *v45;
      v48 = *((_DWORD *)v46 + 2);
      *(_OWORD *)v207 = 0x3E8 * (unsigned __int128)v47 + v48 / 0xF4240uLL;
      v218.i64[0] = (__int64)&v158;
      v218.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v218.i64[2] = (__int64)&v151;
      v218.i64[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v218.i64[4] = (__int64)&v166;
      v218.i64[5] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v218.i64[6] = (__int64)v213;
      v218.i64[7] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      v219 = v207;
      v220 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      v185.i64[2] = 2;
      v185.i64[3] = (__int64)&unk_10167D5D6;
      v185.i64[4] = 51;
      v185.i64[6] = (__int64)&unk_1017CB43D;
      v185.i64[7] = (__int64)&v218;
      *(_QWORD *)&v183 = 0;
      *((_QWORD *)&v183 + 1) = &unk_10167D5D6;
      v184 = 0x33u;
      v185.i64[0] = (__int64)"src/core/relay/codex_thread_visibility.rs";
      v185.i64[1] = 41;
      v185.i64[5] = 0xA6700000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v224, &v183);
      if ( (_QWORD)v158 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v158 + 1), v158, 1);
    }
    std::thread::functions::sleep::h8fc88f8bc00bad5c(v47, v48);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v213);
  }
  codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859(v218.i64, v222, v196);
  *(_QWORD *)&v183 = &v218;
  *((_QWORD *)&v183 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v184 = &v166;
  *((_QWORD *)&v184 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v185.i64[0] = (__int64)v213;
  v185.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v146, &unk_1017CB3F8, &v183);
  if ( v218.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218.i64[1], v218.i64[0], 1);
  v82 = v146[0];
  v17 = v146[1];
  v21 = v146[2];
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v213);
  v19 = 10;
LABEL_108:
  v83 = v181;
  *v181 = v19;
  v83[1] = v82;
  v83[2] = v17;
  v83[3] = v21;
  v84 = v152.i64[1];
  v83[4] = v152.i64[0];
  v83[5] = v84;
  *((_OWORD *)v83 + 3) = v152.i128[1];
  *((_OWORD *)v83 + 4) = v152.i128[2];
  *((_OWORD *)v83 + 5) = v152.i128[3];
  if ( v180 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, v180, 1);
  if ( (_QWORD *)v174 != v173 )
  {
    v85 = v168;
    v86 = v169 / 0x18;
    do
    {
      v87 = *(v85 - 1);
      if ( v87 )
      {
        v88 = v85;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v85, v87, 1);
        v85 = v88;
      }
      v85 += 3;
      --v86;
    }
    while ( v86 );
  }
  if ( (_QWORD)v170 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v170 + 1), 24 * v170, 8);
  v89 = v177;
  v90 = v178;
  if ( v178 )
  {
    v91 = (_QWORD *)(v177 + 32);
    do
    {
      v92 = *(v91 - 4);
      if ( v92 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v91 - 3), v92, 1);
      v93 = *(v91 - 1);
      if ( v93 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v91, v93, 1);
      v91 += 6;
      --v90;
    }
    while ( v90 );
  }
LABEL_137:
  if ( v176 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, 48 * v176, 8);
  return v181;
}
