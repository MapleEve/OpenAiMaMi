// codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads_excluding
// owner_ea: 0x100760be0, size: 0x26f5
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Renamed successor of fallback_relay_model_threads (1.2.4->1.2.6). Load journal, filter providers

// 1.2.4→1.2.6 delta 重命名后继(removed: fallback_relay_model_threads): 线程回退模型。调用 load_model_restore_journal、CodexPaths::all_codex_state_dbs、str::trim_matches。含 router_no_account_model_restore.json/gpt-5.5 字符串引用。源码: src/core/relay/codex_thread_visibility.rs。A-level owner for fallback_relay_model_threads_excluding
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads_excluding::h671b2b8f3cd5d5ad(
        __int64 *a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5)
{
  char *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 i; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // r15
  char v24; // bl
  bool v25; // r15
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r12
  char *v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  char *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r15
  __int8 v41; // bl
  __int64 v42; // r12
  int v43; // ebx
  __int64 v44; // r10
  bool v45; // zf
  char *v46; // rcx
  _QWORD *v47; // rbx
  _QWORD *v48; // rsi
  unsigned __int64 v49; // rbx
  unsigned int v50; // r15d
  double result; // xmm0_8
  __int8 v52; // r15
  char *v53; // r12
  __int64 v54; // r14
  unsigned __int64 v55; // r13
  int autocommit; // eax
  __int64 v57; // rbx
  char v58; // r12
  bool v59; // r14
  bool v60; // r15
  int v61; // eax
  __int64 v62; // rbx
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // r15
  __int64 v66; // r12
  char v67; // r14
  _QWORD *v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // r13
  __int64 v73; // r15
  __int64 v74; // r12
  __int64 v75; // r14
  __int64 v76; // rbx
  __int64 *v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rax
  unsigned __int64 v80; // rbx
  __int64 v81; // rsi
  _QWORD *v82; // r14
  __int64 v83; // r13
  __int64 v84; // rbx
  _QWORD *v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rsi
  unsigned __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rsi
  _QWORD *v91; // r14
  __int64 v92; // r15
  __int64 v93; // rdx
  size_t v94; // rbx
  __int64 v95; // r14
  __int64 *v96; // rax
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // rbx
  size_t v100; // r14
  __int64 v101; // rbx
  void *v102; // r14
  size_t v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // r13
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // r12
  __int64 v110; // r13
  __int64 v111; // rsi
  __int64 v112; // rbx
  _QWORD *v113; // r14
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rsi
  __int64 *v117; // rax
  _QWORD *v118; // rbx
  __int64 v119; // rsi
  __int64 v120; // rsi
  __int64 v121; // r13
  __int64 v122; // r12
  __int64 v123; // rsi
  _BYTE v124[24]; // [rsp+10h] [rbp-530h] BYREF
  _QWORD v125[5]; // [rsp+28h] [rbp-518h] BYREF
  _QWORD v126[4]; // [rsp+50h] [rbp-4F0h] BYREF
  __int64 v127; // [rsp+70h] [rbp-4D0h] BYREF
  __int128 v128; // [rsp+78h] [rbp-4C8h]
  __int64 v129; // [rsp+88h] [rbp-4B8h] BYREF
  __int128 v130; // [rsp+90h] [rbp-4B0h]
  _QWORD v131[3]; // [rsp+A0h] [rbp-4A0h] BYREF
  _QWORD v132[3]; // [rsp+B8h] [rbp-488h] BYREF
  _QWORD *v133; // [rsp+D0h] [rbp-470h]
  __int64 v134; // [rsp+D8h] [rbp-468h]
  __int64 v135; // [rsp+E0h] [rbp-460h]
  __int64 v136; // [rsp+E8h] [rbp-458h] BYREF
  __m512i v137; // [rsp+F0h] [rbp-450h]
  __int64 v138; // [rsp+130h] [rbp-410h]
  __int64 v139; // [rsp+138h] [rbp-408h]
  __int64 v140; // [rsp+140h] [rbp-400h]
  _QWORD v141[2]; // [rsp+148h] [rbp-3F8h] BYREF
  __int128 v142; // [rsp+158h] [rbp-3E8h] BYREF
  size_t v143; // [rsp+168h] [rbp-3D8h]
  __int128 v144; // [rsp+170h] [rbp-3D0h]
  __int64 v145; // [rsp+180h] [rbp-3C0h]
  __int64 v146; // [rsp+188h] [rbp-3B8h]
  __int64 v147; // [rsp+190h] [rbp-3B0h]
  sqlite3_stmt *v148; // [rsp+198h] [rbp-3A8h]
  __int64 v149; // [rsp+1A0h] [rbp-3A0h] BYREF
  __int64 v150; // [rsp+1A8h] [rbp-398h] BYREF
  void *__src; // [rsp+1B0h] [rbp-390h]
  _QWORD *v152; // [rsp+1B8h] [rbp-388h]
  unsigned __int64 v153; // [rsp+1C0h] [rbp-380h]
  __int128 v154; // [rsp+1C8h] [rbp-378h]
  __int64 v155; // [rsp+1D8h] [rbp-368h]
  __int64 v156; // [rsp+1E0h] [rbp-360h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp-358h]
  __int64 v158; // [rsp+1F0h] [rbp-350h]
  __int64 v159; // [rsp+1F8h] [rbp-348h]
  __int64 v160; // [rsp+200h] [rbp-340h]
  _QWORD *v161; // [rsp+208h] [rbp-338h]
  __int64 v162; // [rsp+210h] [rbp-330h]
  __int64 *v163; // [rsp+218h] [rbp-328h]
  __int64 v164; // [rsp+220h] [rbp-320h]
  __int64 v165; // [rsp+228h] [rbp-318h] BYREF
  __int64 v166; // [rsp+230h] [rbp-310h]
  __int64 v167; // [rsp+238h] [rbp-308h]
  size_t __n; // [rsp+240h] [rbp-300h]
  __int64 v169; // [rsp+248h] [rbp-2F8h]
  __int128 v170; // [rsp+250h] [rbp-2F0h] BYREF
  __int128 v171; // [rsp+260h] [rbp-2E0h]
  __m512i v172; // [rsp+270h] [rbp-2D0h]
  char v173; // [rsp+2B0h] [rbp-290h]
  _BYTE v174[7]; // [rsp+2B1h] [rbp-28Fh]
  unsigned __int8 v175; // [rsp+2B8h] [rbp-288h]
  _BYTE v176[7]; // [rsp+2B9h] [rbp-287h]
  __int64 v177; // [rsp+2C0h] [rbp-280h]
  char *v178; // [rsp+2C8h] [rbp-278h]
  char *v179; // [rsp+2D0h] [rbp-270h] BYREF
  __int64 v180; // [rsp+2D8h] [rbp-268h]
  __int64 v181; // [rsp+2E0h] [rbp-260h]
  __m512i v182; // [rsp+2E8h] [rbp-258h]
  char *v183; // [rsp+328h] [rbp-218h] BYREF
  __int128 v184; // [rsp+330h] [rbp-210h]
  __int64 (__fastcall *v185)(); // [rsp+340h] [rbp-200h]
  __int128 v186; // [rsp+348h] [rbp-1F8h] BYREF
  _BYTE v187[40]; // [rsp+358h] [rbp-1E8h]
  sqlite3_stmt *v188; // [rsp+380h] [rbp-1C0h]
  __int64 v189; // [rsp+388h] [rbp-1B8h] BYREF
  __int64 v190; // [rsp+390h] [rbp-1B0h]
  __int64 v191; // [rsp+398h] [rbp-1A8h]
  _BYTE v192[24]; // [rsp+3A0h] [rbp-1A0h] BYREF
  __int128 v193; // [rsp+3B8h] [rbp-188h]
  __int128 v194; // [rsp+3C8h] [rbp-178h]
  sqlite3_stmt *v195; // [rsp+3D8h] [rbp-168h]
  sqlite3_stmt *v196; // [rsp+3E0h] [rbp-160h]
  __int64 v197; // [rsp+3F0h] [rbp-150h]
  _DWORD v198[2]; // [rsp+3F8h] [rbp-148h]
  _BYTE v199[96]; // [rsp+400h] [rbp-140h] BYREF
  char v200; // [rsp+460h] [rbp-E0h]
  _BYTE v201[7]; // [rsp+461h] [rbp-DFh]
  unsigned __int8 v202; // [rsp+468h] [rbp-D8h]
  _DWORD v203[11]; // [rsp+469h] [rbp-D7h]
  __m512i v204; // [rsp+498h] [rbp-A8h] BYREF
  _BYTE *v205; // [rsp+4D8h] [rbp-68h]
  __int64 (__fastcall *v206)(); // [rsp+4E0h] [rbp-60h]
  unsigned __int64 v207; // [rsp+4F8h] [rbp-48h]
  __int64 v208; // [rsp+500h] [rbp-40h]
  __int64 v209; // [rsp+508h] [rbp-38h]
  _BYTE v210[41]; // [rsp+517h] [rbp-29h] BYREF

  v139 = a5;
  v6 = a3;
  v163 = a1;
  core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(a3, a4);
  v8 = 7;
  if ( v7 )
    v8 = a4;
  v9 = v8;
  v178 = "gpt-5.5";
  if ( !v7 )
    v6 = "gpt-5.5";
  __src = v6;
  v165 = 0;
  v166 = 8;
  v167 = 0;
  v140 = a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h5e7bd6dd24ba9af8(v199, a2);
  v10 = *(_QWORD *)&v199[8] + 24LL * *(_QWORD *)&v199[16];
  v132[2] = *(_QWORD *)&v199[8];
  v133 = *(_QWORD **)&v199[8];
  v154 = *(_OWORD *)v199;
  v134 = *(_QWORD *)v199;
  v135 = v10;
  v11 = *(_QWORD **)&v199[8];
  __n = v9;
  if ( !*(_QWORD *)&v199[16] )
    goto LABEL_117;
  v162 = *(_QWORD *)&v199[8] + 24LL * *(_QWORD *)&v199[16];
  v12 = v178;
  if ( v9 )
    v12 = (char *)__src;
  v178 = v12;
  v13 = 7;
  if ( v9 )
    v13 = v9;
  v160 = v13;
  v153 = 24LL * *(_QWORD *)&v199[16] - 24;
  v14 = *(_QWORD *)&v199[8] + 32LL;
  v15 = *(__int64 **)&v199[8];
  while ( 1 )
  {
    v152 = (_QWORD *)v14;
    v161 = v15 + 3;
    v133 = v15 + 3;
    v169 = *v15;
    if ( v169 == 0x8000000000000000LL )
    {
      v10 = v162;
      v11 = v161;
LABEL_117:
      v14 = 0xAAAAAAAAAAAAAAABLL;
      if ( (_QWORD *)v10 != v11 )
      {
        v88 = (v10 - (__int64)v11) / 0x18uLL;
        v89 = v11 + 1;
        do
        {
          v90 = *(v89 - 1);
          if ( v90 )
          {
            v91 = v89;
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v89, v90, 1);
            v89 = v91;
          }
          v89 += 3;
          --v88;
        }
        while ( v88 );
      }
LABEL_122:
      if ( (_QWORD)v154 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v154 + 1), 24 * v154, 8);
      v83 = v166;
      v92 = v167;
      if ( v167 )
      {
        v93 = *(_QWORD *)(v140 + 592);
        v177 = *(_QWORD *)(v140 + 584);
        v159 = v93;
        codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal::h870bb59bbab01a73(
          &v170,
          v177,
          v93,
          v14);
        v94 = __n;
        DWORD2(v171) = 1;
        if ( (__n & 0x8000000000000000LL) != 0LL )
        {
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h470a4c0a89383c43(&v170, v83);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v142, v83);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v204, v83 + 24);
          v95 = 0;
LABEL_127:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v95, __n);
        }
        v208 = v83 + 48 * v92;
        v197 = v83;
        do
        {
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h470a4c0a89383c43(&v170, v83);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v142, v83);
          v97 = v83 + 24;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v204, v97);
          if ( v94 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v204, v97);
            v95 = 1;
            v98 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v94, 1);
            if ( !v98 )
              goto LABEL_127;
            v99 = v98;
          }
          else
          {
            v99 = 1;
          }
          v100 = __n;
          memcpy((void *)v99, __src, __n);
          *(_OWORD *)v199 = v142;
          *(_QWORD *)&v199[16] = v143;
          *(_OWORD *)&v199[32] = *(__int128 *)((char *)v204.i128 + 8);
          *(_QWORD *)&v199[24] = v204.i64[0];
          *(_QWORD *)&v199[48] = v100;
          *(_QWORD *)&v199[56] = v99;
          *(_QWORD *)&v199[64] = v100;
          *(_DWORD *)&v199[72] = 0;
          v101 = v171;
          if ( (_QWORD)v171 == (_QWORD)v170 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h3baddf5b1e42304b(&v170);
          qmemcpy((void *)(*((_QWORD *)&v170 + 1) + 80 * v101), v199, 0x50u);
          *(_QWORD *)&v171 = v101 + 1;
          v83 = v97 + 24;
          v94 = __n;
        }
        while ( v83 != v208 );
        std::path::Path::_join::hb1a495d4f06b13b8(&v142, v177, v159, &unk_1016F07E0, 25);
        v102 = *((void **)&v142 + 1);
        v103 = v143;
        v104 = std::path::Path::parent::h4c3ac26770731fbb(*((_QWORD *)&v142 + 1), v143);
        if ( v104 )
        {
          *(_WORD *)v199 = 511;
          v199[2] = 1;
          v105 = std::fs::DirBuilder::_create::h099c6e2853c95452(v199, v104);
          if ( (v105 & 3) == 1 )
          {
            v208 = v105 - 1;
            v121 = *(_QWORD *)(v105 - 1);
            v122 = *(_QWORD *)(v105 + 7);
            if ( *(_QWORD *)v122 )
              (*(void (__fastcall **)(__int64))v122)(v121);
            v123 = *(_QWORD *)(v122 + 8);
            if ( v123 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v123, *(_QWORD *)(v122 + 16));
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, 24, 8);
          }
        }
        serde_json::ser::to_vec_pretty::h7e2ae7c9b29b7eae(&v204, &v170);
        v106 = v204.i64[0];
        if ( __OFSUB__(-v204.i64[0], 1) )
        {
          *(_QWORD *)&v186 = v204.i64[1];
          v83 = v197;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            *(_QWORD *)v192 = &v186;
            *(_QWORD *)&v192[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
            *(_QWORD *)&v199[48] = 2;
            *(_QWORD *)&v199[56] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            *(_QWORD *)&v199[64] = 51;
            *(_QWORD *)&v199[80] = &unk_101860069;
            *(_QWORD *)&v199[88] = v192;
            *(_QWORD *)v199 = 0;
            *(_QWORD *)&v199[8] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            *(_OWORD *)&v199[16] = 0x33u;
            *(_QWORD *)&v199[32] = "src/core/relay/codex_thread_visibility.rs";
            *(_QWORD *)&v199[40] = 41;
            *(_QWORD *)&v199[72] = 0xD1700000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v210, v199);
          }
          core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h8ef5f75d55edeb1e(&v186);
        }
        else
        {
          v107 = v204.i64[1];
          v108 = std::fs::write::inner::had0c1bee0a2c1e21(v102, v103, (void *)v204.i64[1], v204.u64[2]);
          if ( v106 )
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v106, 1);
          v83 = v197;
          if ( v108 )
          {
            *(_QWORD *)&v186 = v108;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              *(_QWORD *)v192 = &v186;
              *(_QWORD *)&v192[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
              *(_QWORD *)&v199[48] = 2;
              *(_QWORD *)&v199[56] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
              *(_QWORD *)&v199[64] = 51;
              *(_QWORD *)&v199[80] = &unk_101860038;
              *(_QWORD *)&v199[88] = v192;
              *(_QWORD *)v199 = 0;
              *(_QWORD *)&v199[8] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
              *(_OWORD *)&v199[16] = 0x33u;
              *(_QWORD *)&v199[32] = "src/core/relay/codex_thread_visibility.rs";
              *(_QWORD *)&v199[40] = 41;
              *(_QWORD *)&v199[72] = 0xD1400000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v210, v199);
              v108 = v186;
            }
            if ( (v108 & 3) == 1 )
            {
              v208 = v108 - 1;
              v109 = *(_QWORD *)(v108 - 1);
              v110 = *(_QWORD *)(v108 + 7);
              if ( *(_QWORD *)v110 )
                (*(void (__fastcall **)(_QWORD))v110)(*(_QWORD *)(v108 - 1));
              v111 = *(_QWORD *)(v110 + 8);
              if ( v111 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v111, *(_QWORD *)(v110 + 16));
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, 24, 8);
              v83 = v197;
            }
          }
        }
        if ( (_QWORD)v142 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v142, 1);
        v112 = v171;
        if ( (_QWORD)v171 )
        {
          v113 = (_QWORD *)(*((_QWORD *)&v170 + 1) + 56LL);
          do
          {
            v114 = *(v113 - 7);
            if ( v114 )
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 6), v114, 1);
            v115 = *(v113 - 4);
            if ( v115 )
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 3), v115, 1);
            v116 = *(v113 - 1);
            if ( v116 )
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v116, 1);
            v113 += 10;
            --v112;
          }
          while ( v112 );
        }
        if ( (_QWORD)v170 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v170 + 1), 80 * v170, 8);
        v117 = v163;
        v163[1] = v92;
        *v117 = 11;
        v118 = (_QWORD *)(v83 + 32);
        do
        {
          v119 = *(v118 - 4);
          if ( v119 )
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v118 - 3), v119, 1);
          v120 = *(v118 - 1);
          if ( v120 )
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v118, v120, 1);
          v118 += 6;
          --v92;
        }
        while ( v92 );
      }
      else
      {
        v96 = v163;
        v163[1] = 0;
        *v96 = 11;
      }
      goto LABEL_129;
    }
    v16 = v15[2];
    v208 = v15[1];
    v197 = v16;
    std::sys::fs::metadata::h32fa16d3052ea535(v199, v208, v16);
    v17 = *(_QWORD *)v199;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
      *(_QWORD *)v199,
      *(_QWORD *)&v199[8]);
    if ( !v17 )
      break;
    v18 = 8;
    v19 = 0;
    v20 = 0;
LABEL_86:
    *(_QWORD *)v199 = v18;
    *(_QWORD *)&v199[16] = v19;
    *(_QWORD *)&v199[8] = v18;
    *(_QWORD *)&v199[24] = v18 + 48 * v20;
    v72 = v167;
    if ( v20 > v165 - v167 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95(&v165, v167, v20, 8, 48);
      v72 = v167;
    }
    memcpy((void *)(v166 + 48 * v72), (const void *)v18, 48 * v20);
    v167 = v72 + v20;
    if ( v19 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 48 * v19, 8);
    if ( v169 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, v169, 1);
    v153 -= 24LL;
    v14 = (__int64)(v152 + 3);
    v15 = v161;
    if ( v161 == (_QWORD *)v162 )
      goto LABEL_122;
  }
  v150 = 4;
  for ( i = 0; ; i = v159 )
  {
    v177 = i;
    v159 = i + 1;
    v136 = i + 1;
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::he35004b2297c6d44(
      v199,
      v208,
      v197);
    LOBYTE(v22) = v199[8];
    v20 = *(_QWORD *)&v199[24];
    v18 = *(_QWORD *)&v199[16];
    v204 = *(__m512i *)&v199[32];
    if ( v202 == 3 )
    {
      *(_OWORD *)v192 = v204.i128[0];
      *(_QWORD *)&v192[16] = v204.i64[2];
      v193 = *(__int128 *)((char *)&v204.i128[1] + 8);
      v194 = *(__int128 *)((char *)&v204.i128[2] + 8);
      v195 = (sqlite3_stmt *)v204.i64[7];
      v43 = *(_DWORD *)&v199[8] >> 8;
      v44 = *(_QWORD *)v199;
      v42 = *(_QWORD *)&v199[8] >> 16;
      v182 = v204;
      if ( *(_QWORD *)v199 == 11 )
      {
LABEL_85:
        v19 = (v42 << 16) | ((unsigned __int8)v43 << 8) | (unsigned __int8)v22;
        goto LABEL_86;
      }
LABEL_96:
      v76 = (v42 << 16) | ((unsigned __int8)v43 << 8) | (unsigned __int8)v22;
      v137 = v182;
      goto LABEL_100;
    }
    *(_DWORD *)&v174[3] = *(_DWORD *)&v201[3];
    *(_DWORD *)v174 = *(_DWORD *)v201;
    *(_DWORD *)&v176[3] = *(_DWORD *)((char *)v203 + 3);
    *(_DWORD *)v176 = v203[0];
    *(_OWORD *)v192 = v204.i128[0];
    *(_QWORD *)&v192[16] = v204.i64[2];
    v193 = *(__int128 *)((char *)&v204.i128[1] + 8);
    v194 = *(__int128 *)((char *)&v204.i128[2] + 8);
    v195 = (sqlite3_stmt *)v204.i64[7];
    v170 = *(_OWORD *)v199;
    v171 = *(_OWORD *)&v199[16];
    v172 = v204;
    v173 = v200;
    v175 = v202;
    codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::hb4c1fb1541f42bca(v199, &v170);
    if ( *(_QWORD *)v199 != 11 )
    {
      v209 = *(_QWORD *)v199;
      v177 = v199[8];
      LOBYTE(v43) = v199[9];
      v73 = *(unsigned int *)&v199[10];
      v74 = *(unsigned __int16 *)&v199[14];
      v22 = *(_QWORD *)&v199[24];
      v75 = *(_QWORD *)&v199[16];
      v182 = *(__m512i *)&v199[32];
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h8df56ae24f7c4734(&v170);
      v42 = v73 | (v74 << 32);
      v18 = v75;
      v20 = v22;
      LOBYTE(v22) = v177;
      v44 = v209;
      goto LABEL_96;
    }
    if ( (v199[8] & 1) == 0 )
    {
      v18 = 8;
      v20 = 0;
      LOBYTE(v22) = 0;
      LOBYTE(v43) = 0;
      v42 = 0;
LABEL_84:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h8df56ae24f7c4734(&v170);
      goto LABEL_85;
    }
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
      v199,
      &v170,
      "SELECT id, rollout_path, model, model_provider, source FROM threads WHERE COALESCE(archived, 0) = 0relay_model_fal"
      "lbackbegin model fallback transactionprepare model fallback threadsquery model fallback threadsread model fallback"
      " thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provi"
      "der LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair",
      99);
    if ( *(_DWORD *)v199 == 1 )
    {
      v204 = *(__m512i *)&v199[8];
      v179 = "prepare model fallback threadsquery model fallback threadsread model fallback thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      v180 = 30;
      v23 = *(_QWORD *)&v199[8];
      v24 = v199[44];
      *(_QWORD *)&v186 = &v179;
      *((_QWORD *)&v186 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      *(_QWORD *)v187 = &v204;
      *(_QWORD *)&v187[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v183, &unk_10185F4AB, &v186);
      v22 = (unsigned __int64)v183;
      v20 = *((_QWORD *)&v184 + 1);
      v209 = v184;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(&v204);
      v25 = v23 == 0x8000000000000000LL && (unsigned __int8)(v24 - 3) < 2u;
      goto LABEL_37;
    }
    v195 = *(sqlite3_stmt **)&v199[64];
    v194 = *(_OWORD *)&v199[48];
    v193 = *(_OWORD *)&v199[32];
    *(_OWORD *)v192 = *(_OWORD *)&v199[8];
    *(_QWORD *)&v192[16] = *(_QWORD *)&v199[24];
    v26 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v199[64]);
    if ( v26 )
    {
      *(_OWORD *)v199 = 0x8000000000000013LL;
      *(_QWORD *)&v199[16] = v26;
      v183 = "query model fallback threadsread model fallback thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      *(_QWORD *)&v184 = 28;
      v204.i64[0] = (__int64)&v183;
      v204.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      v204.i64[2] = (__int64)v199;
      v204.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v186, &unk_10185F4AB, &v204);
      v209 = *((_QWORD *)&v186 + 1);
      v22 = v186;
      v20 = *(_QWORD *)v187;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h788f11a9ee97776f(v192);
      v25 = 0;
      goto LABEL_37;
    }
    core::iter::adapters::try_process::h5ac43add97d8b416(&v204, v192, 0);
    v207 = 0x8000000000000016LL;
    if ( v204.i64[0] != 0x8000000000000016LL )
    {
      *(__m512i *)v199 = v204;
      v179 = "read model fallback thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
      v180 = 30;
      v40 = v204.i64[0];
      v41 = v204.i8[36];
      *(_QWORD *)&v186 = &v179;
      *((_QWORD *)&v186 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      *(_QWORD *)v187 = v199;
      *(_QWORD *)&v187[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v183, &unk_10185F4AB, &v186);
      v22 = (unsigned __int64)v183;
      v20 = *((_QWORD *)&v184 + 1);
      v209 = v184;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h788f11a9ee97776f(v192);
      v25 = (unsigned __int8)(v41 - 3) < 2u && v40 == 0x8000000000000000LL;
LABEL_37:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h8df56ae24f7c4734(&v170);
      v42 = v22 >> 16;
      v43 = (unsigned int)v22 >> 8;
      v44 = 10;
      v45 = !v25;
      v18 = v209;
      if ( v45 )
        goto LABEL_96;
      goto LABEL_38;
    }
    v125[0] = v204.i64[2];
    v125[1] = v204.i64[2];
    v125[2] = v204.i64[1];
    v125[3] = v204.i64[2] + 120 * v204.i64[3];
    v125[4] = v139;
    alloc::vec::in_place_collect::from_iter_in_place::h7bdcc6b7569eab41(&v156, v125);
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h788f11a9ee97776f(v192);
    v27 = v158;
    if ( v158 )
    {
      v132[0] = v178;
      v132[1] = v160;
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
        &v204,
        &v170,
        *(&off_101A15A88 + (unsigned int)v175),
        qword_1016F2998[v175]);
      v28 = v204.i64[0];
      if ( v204.i64[0] == v207 )
      {
        v149 = 0;
        v189 = 0;
        v190 = 8;
        v191 = 0;
        v209 = v157;
        v155 = v27;
        v138 = 96 * v27;
        v29 = 1;
        v30 = 0;
        v31 = v178;
        do
        {
          codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::h2b627f7e2e97ca6f(
            (unsigned int)v192,
            *(_QWORD *)(v209 + v30 + 32),
            *(_QWORD *)(v209 + v30 + 40),
            *(_QWORD *)(v209 + v30 + 56),
            *(_QWORD *)(v209 + v30 + 64),
            (_DWORD)v31,
            v160);
          v32 = *(_QWORD *)v192;
          if ( *(_QWORD *)v192 == 0x8000000000000001LL )
          {
            *(_QWORD *)&v142 = v164;
            v181 = v193;
            v180 = *(_QWORD *)&v192[16];
            v179 = *(char **)&v192[8];
            if ( (unsigned __int64)v170 >= 0x7FFFFFFFFFFFFFFFLL )
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101A159E0);
            *(_QWORD *)&v170 = v170 + 1;
            autocommit = sqlite3_get_autocommit((sqlite3 *)v171);
            *(_QWORD *)&v170 = v170 - 1;
            if ( !autocommit )
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v199, &v170, &unk_1016EF0C8, 8);
              if ( *(_QWORD *)v199 != v207 )
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
            }
            v183 = (char *)(v30 + v209);
            *(_QWORD *)&v184 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *((_QWORD *)&v184 + 1) = &v179;
            v185 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v129, &unk_101861196, &v183);
            v204.i128[1] = v130;
            v204.i64[1] = v129;
            v204.i64[0] = 10;
            codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h3dbf242228c9ca81(
              v199,
              &v204,
              0,
              v190,
              v191);
            v22 = *(_QWORD *)&v199[8];
            v57 = *(_QWORD *)v199;
            v20 = *(_QWORD *)&v199[24];
            v18 = *(_QWORD *)&v199[16];
            v182 = *(__m512i *)&v199[32];
            v58 = v200;
            *(_DWORD *)((char *)v198 + 3) = *(_DWORD *)&v201[3];
            v198[0] = *(_DWORD *)v201;
            if ( v179 )
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v179, 1);
            goto LABEL_57;
          }
          v188 = v196;
          *(_QWORD *)&v187[32] = v195;
          *(_OWORD *)&v187[16] = v194;
          *(_OWORD *)v187 = v193;
          v186 = *(_OWORD *)&v192[8];
          if ( *(_QWORD *)v192 != 0x8000000000000000LL )
          {
            v148 = v188;
            v147 = *(_QWORD *)&v187[32];
            v146 = *(_QWORD *)&v187[24];
            v145 = *(_QWORD *)&v187[16];
            v144 = *(_OWORD *)v187;
            v143 = *((_QWORD *)&v186 + 1);
            *((_QWORD *)&v142 + 1) = v186;
            v33 = v191;
            if ( v191 == v189 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha1f100229bfa64ff(&v189);
            v34 = v190;
            v35 = 9 * v33;
            *(_QWORD *)(v190 + 8 * v35) = v32;
            v36 = *((_QWORD *)&v186 + 1);
            *(_QWORD *)(v34 + 8 * v35 + 8) = v186;
            *(_QWORD *)(v34 + 8 * v35 + 16) = v36;
            *(_OWORD *)(v34 + 8 * v35 + 24) = *(_OWORD *)v187;
            *(_QWORD *)(v34 + 8 * v35 + 40) = *(_QWORD *)&v187[16];
            *(_QWORD *)(v34 + 8 * v35 + 48) = *(_QWORD *)&v187[24];
            *(_QWORD *)(v34 + 8 * v35 + 56) = *(_QWORD *)&v187[32];
            *(_QWORD *)(v34 + 8 * v35 + 64) = v188;
            v191 = v33 + 1;
            v164 = v32;
            v31 = v178;
          }
          v37 = *(_QWORD *)(v209 + v30 + 16);
          v38 = *(char **)(v209 + v30 + 56);
          v39 = *(_QWORD *)(v209 + v30 + 64);
          v141[0] = *(_QWORD *)(v209 + v30 + 8);
          v141[1] = v37;
          v179 = v38;
          v180 = v39;
          v183 = v31;
          *(_QWORD *)&v184 = v160;
          v204.i64[0] = (__int64)v141;
          v204.i64[1] = (__int64)&unk_101A14738;
          v204.i64[2] = (__int64)&v179;
          v204.i64[3] = (__int64)&unk_101A14738;
          v204.i64[4] = (__int64)&v183;
          v204.i64[5] = (__int64)&unk_101A14758;
          rusqlite::Connection::execute::h70a69cc19341705e(v199, &v170, &unk_1016F05AE, 64, &v204, 3);
          if ( *(_QWORD *)v199 != v207 )
          {
            *(_QWORD *)&v142 = v164;
            v195 = *(sqlite3_stmt **)&v199[56];
            v194 = *(_OWORD *)&v199[40];
            v193 = *(_OWORD *)&v199[24];
            *(_QWORD *)&v192[16] = *(_QWORD *)&v199[16];
            *(_OWORD *)v192 = *(_OWORD *)v199;
            v59 = *(_QWORD *)v199 == 0x8000000000000000LL;
            v60 = (unsigned __int8)(v199[36] - 3) < 2u;
            if ( (unsigned __int64)v170 >= 0x7FFFFFFFFFFFFFFFLL )
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101A159E0);
            *(_QWORD *)&v170 = v170 + 1;
            v61 = sqlite3_get_autocommit((sqlite3 *)v171);
            *(_QWORD *)&v170 = v170 - 1;
            if ( !v61 )
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v199, &v170, &unk_1016EF0C8, 8);
              if ( *(_QWORD *)v199 != v207 )
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
            }
            v183 = (char *)(v30 + v209);
            *(_QWORD *)&v184 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *((_QWORD *)&v184 + 1) = v192;
            v185 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v127, &unk_10186116B, &v183);
            v204.i128[1] = v128;
            v204.i64[1] = v127;
            v204.i64[0] = 10;
            codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h3dbf242228c9ca81(
              v199,
              &v204,
              v60 & (unsigned __int8)v59,
              v190,
              v191);
            v22 = *(_QWORD *)&v199[8];
            v57 = *(_QWORD *)v199;
            v20 = *(_QWORD *)&v199[24];
            v18 = *(_QWORD *)&v199[16];
            v182 = *(__m512i *)&v199[32];
            v58 = v200;
            v198[0] = *(_DWORD *)v201;
            *(_DWORD *)((char *)v198 + 3) = *(_DWORD *)&v201[3];
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v192);
LABEL_57:
            LOBYTE(v207) = v58;
            v209 = v57;
            v62 = v191;
            if ( !v191 )
              goto LABEL_73;
LABEL_65:
            v68 = (_QWORD *)(v190 + 56);
            do
            {
              v69 = *(v68 - 7);
              if ( v69 )
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v68 - 6), v69, 1);
              v70 = *(v68 - 4);
              if ( v70 )
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v68 - 3), v70, 1);
              v71 = *(v68 - 1);
              if ( v71 )
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v68, v71, 1);
              v68 += 9;
              --v62;
            }
            while ( v62 );
            goto LABEL_73;
          }
          if ( !*(_QWORD *)&v199[8] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
          {
            v204.i64[0] = (__int64)v141;
            v204.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
            *(_QWORD *)&v199[48] = 3;
            *(_QWORD *)&v199[56] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            *(_QWORD *)&v199[64] = 51;
            *(_QWORD *)&v199[80] = &unk_10185F62E;
            *(_QWORD *)&v199[88] = &v204;
            *(_QWORD *)v199 = 0;
            *(_QWORD *)&v199[8] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            *(_OWORD *)&v199[16] = 0x33u;
            *(_QWORD *)&v199[32] = "src/core/relay/codex_thread_visibility.rs";
            *(_QWORD *)&v199[40] = 41;
            *(_QWORD *)&v199[72] = 0x102700000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v210, v199);
          }
          v149 = v29++;
          v30 += 96;
        }
        while ( v138 != v30 );
        *(_QWORD *)&v142 = v164;
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(&v186, &v170, "COMMIT", 6);
        if ( (unsigned __int64)v170 >= 0x7FFFFFFFFFFFFFFFLL )
          core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101A159E0);
        *(_QWORD *)&v170 = v170 + 1;
        v63 = sqlite3_get_autocommit((sqlite3 *)v171);
        *(_QWORD *)&v170 = v170 - 1;
        if ( !v63 )
        {
          rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v199, &v170, &unk_1016EF0C8, 8);
          if ( *(_QWORD *)v199 != v207 )
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
        }
        if ( (_QWORD)v186 == v207 )
        {
          v204.i64[0] = v208;
          v204.i64[1] = v197;
          *(_QWORD *)v192 = v155;
          *(_QWORD *)v199 = &v204;
          *(_QWORD *)&v199[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v199[16] = v132;
          *(_QWORD *)&v199[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
          *(_QWORD *)&v199[32] = v192;
          *(_QWORD *)&v199[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          *(_QWORD *)&v199[48] = &v149;
          *(_QWORD *)&v199[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v124, &unk_1018611C5, v199);
          codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(
            "relay_model_fallbackbegin model fallback transactionprepare model fallback threadsquery model fallback threadsread model fallback thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair",
            20,
            "convergedSELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY id",
            9,
            v124);
          v126[0] = v209;
          v126[1] = v209;
          v126[2] = v156;
          v126[3] = v209 + 96 * v155;
          alloc::vec::in_place_collect::from_iter_in_place::h3f07cc94f6877f76(v199, v126);
          v18 = *(_QWORD *)&v199[8];
          v22 = *(_QWORD *)v199;
          v20 = *(_QWORD *)&v199[16];
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedRolloutPatch$GT$$GT$::hd0d414f74e63fd95(&v189);
          v42 = v22 >> 16;
          v43 = (unsigned int)v22 >> 8;
          goto LABEL_84;
        }
        v195 = v188;
        v194 = *(_OWORD *)&v187[24];
        v193 = *(_OWORD *)&v187[8];
        *(_QWORD *)&v192[16] = *(_QWORD *)v187;
        *(_OWORD *)v192 = v186;
        v64 = v190;
        v65 = v191;
        v66 = v186;
        v67 = v187[20];
        v179 = v192;
        v180 = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v183, &unk_1018611F7, &v179);
        v204.i128[1] = v184;
        v204.i64[1] = (__int64)v183;
        v204.i64[0] = 10;
        codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h3dbf242228c9ca81(
          v199,
          &v204,
          (v66 == 0x8000000000000000LL) & (unsigned __int8)((unsigned __int8)(v67 - 3) < 2u),
          v64,
          v65);
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v192);
        v22 = *(_QWORD *)&v199[8];
        v209 = *(_QWORD *)v199;
        v20 = *(_QWORD *)&v199[24];
        v18 = *(_QWORD *)&v199[16];
        v182 = *(__m512i *)&v199[32];
        LOBYTE(v207) = v200;
        v198[0] = *(_DWORD *)v201;
        *(_DWORD *)((char *)v198 + 3) = *(_DWORD *)&v201[3];
        v62 = v191;
        if ( v191 )
          goto LABEL_65;
LABEL_73:
        if ( v189 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, 72 * v189, 8);
      }
      else
      {
        *(__m512i *)v199 = v204;
        *(_QWORD *)&v186 = "begin model fallback transactionprepare model fallback threadsquery model fallback threadsread model fallback thread rowUPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair";
        *((_QWORD *)&v186 + 1) = 32;
        v52 = v204.i8[36];
        v204.i64[0] = (__int64)&v186;
        v204.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
        v204.i64[2] = (__int64)v199;
        v204.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v192, &unk_10185F4AB, &v204);
        v54 = *(_QWORD *)&v192[8];
        v53 = *(char **)v192;
        v55 = *(_QWORD *)&v192[16];
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hf89226982bd8dbe1(v199);
        LOBYTE(v207) = v28 == 0x8000000000000000LL && (unsigned __int8)(v52 - 3) < 2u;
        v209 = 10;
        v18 = v54;
        v20 = v55;
        v22 = (unsigned __int64)v53;
      }
      v43 = (unsigned int)v22 >> 8;
      v42 = v22 >> 16;
    }
    else
    {
      v209 = 11;
      LOBYTE(v207) = 1;
      v18 = 8;
      v42 = 0;
      LOBYTE(v43) = 0;
      LOBYTE(v22) = 0;
      v20 = 0;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h532568f6c67c86af(&v156);
    if ( v156 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, 96 * v156, 8);
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h8df56ae24f7c4734(&v170);
    if ( v209 == 11 )
      goto LABEL_85;
    v44 = v209;
    if ( (v207 & 1) == 0 )
      goto LABEL_96;
LABEL_38:
    *(_QWORD *)v199 = v44;
    *(_QWORD *)&v199[8] = (v42 << 16) | ((unsigned __int8)v43 << 8) | (unsigned __int8)v22;
    *(_QWORD *)&v199[16] = v18;
    *(_QWORD *)&v199[24] = v20;
    *(__m512i *)&v199[32] = v182;
    v200 = 1;
    *(_DWORD *)&v201[3] = *(_DWORD *)((char *)v198 + 3);
    *(_DWORD *)v201 = v198[0];
    if ( v177 == 3 )
      break;
    v46 = (char *)&unk_1016F0B60 + 16 * v177;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u )
    {
      v49 = *(_QWORD *)v46;
      v50 = *((_DWORD *)v46 + 2);
    }
    else
    {
      v47 = (_QWORD *)((char *)&unk_1016F0B60 + 16 * v177);
      codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h1df128ef7a46e45e(&v142, v208, v197);
      v48 = v47;
      v49 = *v47;
      v50 = *((_DWORD *)v48 + 2);
      *(_OWORD *)v192 = 0x3E8 * (unsigned __int128)v49 + v50 / 0xF4240uLL;
      v204.i64[0] = (__int64)&v142;
      v204.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v204.i64[2] = (__int64)&v136;
      v204.i64[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v204.i64[4] = (__int64)&v150;
      v204.i64[5] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v204.i64[6] = (__int64)v199;
      v204.i64[7] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
      v205 = v192;
      v206 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      v172.i64[2] = 2;
      v172.i64[3] = (__int64)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v172.i64[4] = 51;
      v172.i64[6] = (__int64)&unk_1018607A7;
      v172.i64[7] = (__int64)&v204;
      *(_QWORD *)&v170 = 0;
      *((_QWORD *)&v170 + 1) = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v171 = 0x33u;
      v172.i64[0] = (__int64)"src/core/relay/codex_thread_visibility.rs";
      v172.i64[1] = 41;
      v172.i64[5] = 0xE5000000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v210, &v170);
      if ( (_QWORD)v142 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v142 + 1), v142, 1);
    }
    std::thread::functions::sleep::h8fc88f8bc00bad5c(v49, v50);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v199);
  }
  codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h1df128ef7a46e45e(&v204, v208, v197);
  *(_QWORD *)&v170 = &v204;
  *((_QWORD *)&v170 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v171 = &v150;
  *((_QWORD *)&v171 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v172.i64[0] = (__int64)v199;
  v172.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v131, &unk_101860762, &v170);
  if ( v204.i64[0] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204.i64[1], v204.i64[0], 1);
  v76 = v131[0];
  v18 = v131[1];
  v20 = v131[2];
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v199);
  v44 = 10;
LABEL_100:
  v77 = v163;
  *v163 = v44;
  v77[1] = v76;
  v77[2] = v18;
  v77[3] = v20;
  v78 = v137.i64[1];
  v77[4] = v137.i64[0];
  v77[5] = v78;
  *((_OWORD *)v77 + 3) = v137.i128[1];
  *((_OWORD *)v77 + 4) = v137.i128[2];
  *((_OWORD *)v77 + 5) = v137.i128[3];
  if ( v169 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, v169, 1);
  if ( (_QWORD *)v162 != v161 )
  {
    v79 = v152;
    v80 = v153 / 0x18;
    do
    {
      v81 = *(v79 - 1);
      if ( v81 )
      {
        v82 = v79;
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v79, v81, 1);
        v79 = v82;
      }
      v79 += 3;
      --v80;
    }
    while ( v80 );
  }
  if ( (_QWORD)v154 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v154 + 1), 24 * v154, 8);
  v83 = v166;
  v84 = v167;
  if ( v167 )
  {
    v85 = (_QWORD *)(v166 + 32);
    do
    {
      v86 = *(v85 - 4);
      if ( v86 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v85 - 3), v86, 1);
      v87 = *(v85 - 1);
      if ( v87 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v85, v87, 1);
      v85 += 6;
      --v84;
    }
    while ( v84 );
  }
LABEL_129:
  if ( v165 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 48 * v165, 8);
  return result;
}

