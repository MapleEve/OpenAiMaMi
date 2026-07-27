// __ZN13codexmate_lib4core5relay17router_transition22run_with_writer_policy @ 0x100901ac0
// [FULL — IDA decompiler 全解 54111B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::router_transition::run_with_writer_policy | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::router_transition::run_with_writer_policy::h1219123683360807(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        unsigned __int8 *a11)
{
  unsigned __int8 v11; // bl
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // r12
  _QWORD *v20; // r14
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edx
  _QWORD *v32; // rdx
  __int64 v33; // r14
  void *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned __int8 v37; // r13
  signed __int64 v38; // rbx
  const void *v39; // r15
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned int v51; // edx
  bool v52; // zf
  bool v53; // al
  char v54; // r14
  int v55; // r14d
  unsigned __int8 v56; // bl
  __int64 v57; // rax
  unsigned int v58; // edx
  bool v59; // al
  __int64 v60; // r14
  __int64 v61; // rsi
  _QWORD *v62; // rdi
  _QWORD *v63; // r14
  __int64 v64; // rsi
  _QWORD *v65; // rbx
  __int64 v66; // r14
  _QWORD *v67; // r13
  void *v68; // rax
  void *v69; // rbx
  __int128 v70; // kr10_16
  __int128 v71; // kr20_16
  _QWORD *v72; // rsi
  _QWORD *v73; // r15
  __int64 v74; // rdi
  __int128 v75; // kr30_16
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // r14
  __int64 v79; // r14
  __int64 v80; // r15
  _BYTE *v81; // r14
  __int64 v83; // r14
  __int64 v84; // r15
  _BYTE *v85; // r14
  void *v86; // rbx
  __int64 v87; // rbx
  __int64 v88; // r14
  _QWORD *v89; // r15
  __int64 v90; // rsi
  __int64 v91; // r14
  __int64 v92; // r15
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // r14
  __int64 v97; // r13
  __int64 v98; // rax
  unsigned int v99; // edx
  __int64 v100; // r14
  __int64 v101; // r15
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r15
  __int64 v106; // r12
  __int64 v107; // r15
  __int64 v108; // r15
  _QWORD *v109; // r12
  __int64 v110; // rsi
  __int128 v111; // kr60_16
  _BYTE *v112; // r15
  char v113; // r12
  __int64 v114; // r14
  __int64 v115; // r15
  __int64 v116; // r14
  char v117; // r14
  __int64 v118; // r15
  __int64 v119; // r12
  __int64 v120; // rax
  unsigned int v121; // edx
  __int64 v122; // r15
  _QWORD *v123; // rax
  _QWORD *v124; // r15
  __int64 v125; // rsi
  __int64 v126; // r14
  _QWORD *v127; // r15
  __int64 v128; // rsi
  __int64 v129; // rax
  unsigned int v130; // edx
  __int64 v131; // rax
  _BYTE v132[96]; // [rsp+8h] [rbp-658h] BYREF
  _QWORD v133[12]; // [rsp+68h] [rbp-5F8h] BYREF
  _BYTE v134[24]; // [rsp+C8h] [rbp-598h] BYREF
  __int64 v135; // [rsp+E0h] [rbp-580h]
  __int64 v136; // [rsp+E8h] [rbp-578h]
  __int64 v137; // [rsp+F0h] [rbp-570h]
  __int64 v138; // [rsp+F8h] [rbp-568h]
  __int64 v139; // [rsp+100h] [rbp-560h]
  __int64 v140; // [rsp+108h] [rbp-558h]
  __int64 v141; // [rsp+110h] [rbp-550h]
  _QWORD v142[12]; // [rsp+118h] [rbp-548h] BYREF
  _QWORD v143[3]; // [rsp+178h] [rbp-4E8h] BYREF
  _QWORD v144[3]; // [rsp+190h] [rbp-4D0h] BYREF
  _QWORD v145[3]; // [rsp+1A8h] [rbp-4B8h] BYREF
  __int64 v146; // [rsp+1C0h] [rbp-4A0h] BYREF
  __int128 v147; // [rsp+1C8h] [rbp-498h]
  __int64 v148; // [rsp+1D8h] [rbp-488h] BYREF
  _BYTE *v149; // [rsp+1E0h] [rbp-480h]
  __int64 (__fastcall **v150)(); // [rsp+1E8h] [rbp-478h]
  __int64 v151; // [rsp+1F0h] [rbp-470h] BYREF
  __int128 v152; // [rsp+1F8h] [rbp-468h]
  __int64 v153; // [rsp+208h] [rbp-458h] BYREF
  __int64 v154; // [rsp+210h] [rbp-450h]
  __int64 v155; // [rsp+218h] [rbp-448h]
  __int64 v156; // [rsp+220h] [rbp-440h] BYREF
  __int128 v157; // [rsp+228h] [rbp-438h]
  __int64 v158; // [rsp+238h] [rbp-428h] BYREF
  __int64 v159; // [rsp+240h] [rbp-420h]
  __int64 v160; // [rsp+248h] [rbp-418h]
  __int64 v161; // [rsp+250h] [rbp-410h] BYREF
  __int64 v162; // [rsp+258h] [rbp-408h]
  __int64 v163; // [rsp+260h] [rbp-400h]
  __int64 v164; // [rsp+268h] [rbp-3F8h] BYREF
  _BYTE *v165; // [rsp+270h] [rbp-3F0h]
  __int64 (__fastcall **v166)(); // [rsp+278h] [rbp-3E8h]
  __int64 v167; // [rsp+280h] [rbp-3E0h] BYREF
  _BYTE *v168; // [rsp+288h] [rbp-3D8h]
  __int64 (__fastcall **v169)(); // [rsp+290h] [rbp-3D0h]
  __int64 v170; // [rsp+298h] [rbp-3C8h] BYREF
  __int64 v171; // [rsp+2A0h] [rbp-3C0h]
  __int64 v172; // [rsp+2A8h] [rbp-3B8h]
  __int64 v173; // [rsp+2B0h] [rbp-3B0h] BYREF
  __int128 v174; // [rsp+2B8h] [rbp-3A8h]
  __int64 v175; // [rsp+2C8h] [rbp-398h] BYREF
  __int64 v176; // [rsp+2D0h] [rbp-390h]
  __int64 v177; // [rsp+2D8h] [rbp-388h]
  __int64 v178; // [rsp+2E0h] [rbp-380h] BYREF
  __int128 v179; // [rsp+2E8h] [rbp-378h]
  _QWORD v180[3]; // [rsp+2F8h] [rbp-368h] BYREF
  __int64 v181; // [rsp+310h] [rbp-350h] BYREF
  int v182; // [rsp+318h] [rbp-348h]
  __int64 v183; // [rsp+320h] [rbp-340h]
  __int64 v184; // [rsp+328h] [rbp-338h]
  __int64 v185; // [rsp+330h] [rbp-330h]
  __int64 v186; // [rsp+338h] [rbp-328h]
  const __m128i *v187; // [rsp+340h] [rbp-320h]
  unsigned __int8 *v188; // [rsp+348h] [rbp-318h]
  __int64 v189; // [rsp+350h] [rbp-310h] BYREF
  int v190; // [rsp+358h] [rbp-308h]
  __int64 v191; // [rsp+360h] [rbp-300h] BYREF
  __int64 v192; // [rsp+368h] [rbp-2F8h]
  __int64 v193; // [rsp+370h] [rbp-2F0h] BYREF
  __int64 v194; // [rsp+378h] [rbp-2E8h]
  __int64 v195; // [rsp+380h] [rbp-2E0h]
  __int64 v196; // [rsp+388h] [rbp-2D8h]
  __int64 v197; // [rsp+390h] [rbp-2D0h]
  signed __int64 v198; // [rsp+398h] [rbp-2C8h]
  __int64 v199; // [rsp+3A0h] [rbp-2C0h] BYREF
  __int64 v200; // [rsp+3A8h] [rbp-2B8h]
  __int64 v201; // [rsp+3B0h] [rbp-2B0h]
  unsigned int v202; // [rsp+3B8h] [rbp-2A8h]
  unsigned int v203; // [rsp+3BCh] [rbp-2A4h]
  _QWORD v204[12]; // [rsp+3C0h] [rbp-2A0h] BYREF
  _OWORD v205[6]; // [rsp+420h] [rbp-240h] BYREF
  __int64 v206; // [rsp+480h] [rbp-1E0h] BYREF
  _QWORD v207[12]; // [rsp+488h] [rbp-1D8h] BYREF
  _QWORD v208[12]; // [rsp+4E8h] [rbp-178h] BYREF
  int v209; // [rsp+548h] [rbp-118h] BYREF
  unsigned __int8 v210; // [rsp+54Ch] [rbp-114h] BYREF
  _QWORD v211[2]; // [rsp+550h] [rbp-110h] BYREF
  __int64 v212; // [rsp+560h] [rbp-100h] BYREF
  __int64 v213; // [rsp+568h] [rbp-F8h]
  __int64 v214; // [rsp+570h] [rbp-F0h]
  unsigned int v215; // [rsp+57Ch] [rbp-E4h]
  _OWORD v216[6]; // [rsp+580h] [rbp-E0h] BYREF
  __int64 v217; // [rsp+5E0h] [rbp-80h] BYREF
  __int64 v218; // [rsp+5E8h] [rbp-78h]
  __int64 v219; // [rsp+5F0h] [rbp-70h]
  char *v220; // [rsp+5F8h] [rbp-68h]
  char v221; // [rsp+607h] [rbp-59h] BYREF
  __int64 v222; // [rsp+608h] [rbp-58h]
  __int64 *v223; // [rsp+610h] [rbp-50h] BYREF
  __int64 (__fastcall **v224)(); // [rsp+618h] [rbp-48h]
  __int64 v225; // [rsp+620h] [rbp-40h]
  __int64 (__fastcall *v226)(); // [rsp+628h] [rbp-38h]
  unsigned __int8 v227; // [rsp+634h] [rbp-2Ch] BYREF
  char v228; // [rsp+635h] [rbp-2Bh] BYREF
  unsigned __int8 v229; // [rsp+636h] [rbp-2Ah] BYREF
  _BYTE v230[41]; // [rsp+637h] [rbp-29h] BYREF

  v11 = a5;
  v12 = a3;
  v222 = a2;
  v230[0] = a3;
  v228 = a4;
  v191 = a6;
  v192 = a7;
  v189 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v190 = v13;
  v16 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v13, v14, v15);
  v197 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v16,
           v17,
           12,
           0);
  v203 = v18;
  v207[0] = &v228;
  v207[1] = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  v207[2] = &v191;
  v207[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7698, v207);
  LOBYTE(v204[0]) = v12;
  v19 = v179;
  v205[0] = v179;
  v207[0] = v204;
  v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  v207[2] = v205;
  v207[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v207);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v216);
  v220 = a1;
  if ( v178 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v178, 1);
  v196 = *a8;
  v184 = a8[1];
  v185 = a8[2];
  v186 = *a9;
  v187 = (const __m128i *)a9[1];
  v188 = (unsigned __int8 *)a9[2];
  v202 = v11;
  LOBYTE(v19) = 1;
  v20 = v207;
  while ( 1 )
  {
    v21 = (unsigned __int8)(v19 + 1);
    if ( (_BYTE)v19 == 3 )
      v21 = 3;
    v215 = v21;
    v229 = v19;
    v22 = v191;
    v23 = v192;
    v24 = v230[0];
    v25 = v222;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v191,
      v192);
    v181 = std::time::Instant::now::hda76af2c3a449055(v25, v24, v26, v27, v28);
    v182 = v29;
    if ( v228 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(
        v133,
        3,
        0,
        1,
        v202);
      if ( LODWORD(v133[0]) != 11 )
        goto LABEL_77;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(
        v133,
        5,
        0,
        0,
        v202);
      if ( LODWORD(v133[0]) != 11 )
      {
LABEL_77:
        qmemcpy(v207, v133, sizeof(v207));
        *(_QWORD *)&v205[0] = 0;
        *((_QWORD *)&v205[0] + 1) = 1;
        *(_QWORD *)&v205[1] = 0;
        *(_QWORD *)&v216[1] = 1610612768;
        *(_QWORD *)&v216[0] = v205;
        *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v207,
                                v216) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v211,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v75 = v205[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v222,
          v230[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((_QWORD *)&v205[0] + 1),
          *(_QWORD *)&v205[1]);
        if ( (_QWORD)v75 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v75 + 1), v75, 1);
        v76 = std::time::Instant::elapsed::h457f209775ed485c(&v181);
        v205[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v76 + v77 / 0xF4240uLL;
        *(_QWORD *)&v216[0] = &v229;
        *((_QWORD *)&v216[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v216[1] = v205;
        *((_QWORD *)&v216[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v216[2] = v207;
        *((_QWORD *)&v216[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v175, &unk_1017C7949, v216);
        LOBYTE(v142[0]) = v230[0];
        v78 = v176;
        v204[0] = v176;
        v204[1] = v177;
        *(_QWORD *)&v216[0] = v142;
        *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v216[1] = v204;
        *((_QWORD *)&v216[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v205, &unk_1017C7632, v216);
        v73 = v220;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v205);
        if ( v175 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v175, 1);
        v72 = v207;
        goto LABEL_89;
      }
    }
    v183 = v19;
    v140 = v133[6];
    v139 = v133[5];
    v138 = v133[4];
    v137 = v133[3];
    v136 = v133[2];
    v135 = v133[1];
    v141 = v133[7];
    v227 = v133[7];
    v30 = std::time::Instant::elapsed::h457f209775ed485c(&v181);
    v216[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
    v207[0] = &v229;
    v207[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    v207[2] = v216;
    v207[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v207[4] = &v227;
    v207[5] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v173, &unk_1017C76AC, v20);
    LOBYTE(v204[0]) = v230[0];
    v32 = v20;
    v33 = v174;
    v205[0] = v174;
    v207[0] = v204;
    v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    v207[2] = v205;
    v207[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v34 = v32;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v32);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v216);
    if ( v173 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v173, 1);
    v35 = v230[0];
    v36 = v222;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v22,
      v23);
    v37 = v227;
    if ( v229 != 1 )
    {
      *(_QWORD *)&v216[0] = v196;
      *((_QWORD *)&v216[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &unk_1017C7A02, v216);
      v41 = v207[1];
      v38 = v207[2];
      goto LABEL_20;
    }
    v38 = *(_QWORD *)(v196 + 8);
    if ( v38 < 0 )
    {
      v74 = 0;
      goto LABEL_76;
    }
    v39 = *(const void **)v196;
    if ( !v38 )
    {
      v41 = 1;
      goto LABEL_19;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v35);
    v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1);
    if ( !v40 )
    {
      v198 = v38;
      v74 = 1;
LABEL_76:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v74, v198);
    }
    v41 = v40;
LABEL_19:
    memcpy((void *)v41, v39, v38);
    v207[0] = v38;
    v198 = v41;
LABEL_20:
    codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_after_stop::h8008c833b4b9f7f0(
      v142,
      v184,
      v185,
      v41,
      v38,
      v37);
    if ( v207[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v207[0], 1);
    v207[6] = v133[7];
    v207[5] = v133[6];
    v207[4] = v133[5];
    v207[3] = v133[4];
    v207[2] = v133[3];
    v207[1] = v133[2];
    v207[0] = v133[1];
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v132, v34);
    qmemcpy(v34, v142, 0x60u);
    qmemcpy(v208, v132, sizeof(v208));
    if ( LODWORD(v207[0]) != 11 )
      break;
    if ( LODWORD(v208[0]) != 11 )
    {
      qmemcpy(v216, v132, sizeof(v216));
      v204[0] = 0;
      v204[1] = 1;
      v204[2] = 0;
      *(_QWORD *)&v205[1] = 1610612768;
      *(_QWORD *)&v205[0] = v204;
      *((_QWORD *)&v205[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v216,
                              v205) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v211,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v83 = v204[0];
      v84 = v204[1];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v222,
        v230[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        v204[1],
        v204[2]);
      if ( v83 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v83, 1);
      *(_QWORD *)&v205[0] = &v229;
      *((_QWORD *)&v205[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v205[1] = v216;
      *((_QWORD *)&v205[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v164, &unk_1017C7774, v205);
      LOBYTE(v217) = v230[0];
      v85 = v165;
      v223 = (__int64 *)v165;
      v224 = v166;
      *(_QWORD *)&v205[0] = &v217;
      *((_QWORD *)&v205[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v205[1] = &v223;
      *((_QWORD *)&v205[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v204, &unk_1017C7632, v205);
      v86 = v220;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "settle_failedreconcile_retrystop_failed",
        13,
        v204);
      if ( v164 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v164, 1);
      qmemcpy(v86, v216, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(&v207[1]);
      v87 = v207[10];
      v88 = v207[11];
      if ( v207[11] )
      {
        v89 = (_QWORD *)(v207[10] + 8LL);
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
      v94 = v207[9];
      goto LABEL_169;
    }
    qmemcpy(v204, &v142[1], 0x58u);
    v209 = v208[1];
    v210 = BYTE4(v208[1]);
    codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
      &v193,
      *(__m128i **)(v186 + 24),
      v187,
      *v188,
      (LODWORD(v208[1]) == 0) & (BYTE4(v208[1]) ^ 1));
    v44 = v195;
    if ( !v195 )
    {
      v73 = v220;
      if ( (v209 || (v210 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)&v216[0] = v230;
        *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v216[1] = &v229;
        *((_QWORD *)&v216[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v216[2] = &v209;
        *((_QWORD *)&v216[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
        *(_QWORD *)&v216[3] = &v210;
        *((_QWORD *)&v216[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
        v207[6] = 2;
        v207[7] = &unk_101677721;
        v207[8] = 45;
        v207[10] = &unk_1017C76CE;
        v207[11] = v216;
        v207[0] = 0;
        v207[1] = &unk_101677721;
        v207[2] = 45;
        v207[3] = 0;
        v207[4] = "src/core/relay/router_transition.rs";
        v207[5] = 35;
        v207[9] = 0xDA00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v211, v207);
      }
      codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
        v205,
        a10,
        v204,
        *a11);
      if ( LODWORD(v205[0]) == 11 )
      {
        v95 = v204[10];
        if ( v204[10] )
        {
          alloc::str::join_generic_copy::heca7a5e86402c6b6(v207, v204[9], v204[10], &unk_10167774E, 3);
          v96 = v207[0];
          v97 = v207[1];
          codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
            v222,
            v230[0],
            "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
            8,
            v207[1],
            v207[2]);
          if ( v96 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1);
          v98 = std::time::Instant::elapsed::h457f209775ed485c(&v189);
          v216[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v98 + v99 / 0xF4240uLL;
          *(_QWORD *)&v205[0] = v95;
          v207[0] = &v229;
          v207[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
          v207[2] = v216;
          v207[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
          v207[4] = v205;
          v207[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017C77A1, v207);
          LOBYTE(v223) = v230[0];
          v100 = v157;
          v205[0] = v157;
          v207[0] = &v223;
          v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
          v207[2] = v205;
          v207[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v207);
          codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
            &unk_101677710,
            17,
            "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
            8,
            v216);
          if ( v156 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v156, 1);
          v207[7] = v204[7];
          v207[6] = v204[6];
          v207[5] = v204[5];
          v207[4] = v204[4];
          v207[3] = v204[3];
          v207[2] = v204[2];
          v207[1] = v204[1];
          v207[0] = v204[0];
          v207[8] = v204[8];
          v207[9] = v204[9];
          v207[10] = v204[10];
          qmemcpy(v73 + 1, v207, 0x58u);
        }
        else
        {
          codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v222);
          v129 = std::time::Instant::elapsed::h457f209775ed485c(&v189);
          v216[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v129 + v130 / 0xF4240uLL;
          v207[0] = &v229;
          v207[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
          v207[2] = v216;
          v207[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v134, &unk_1017C7788, v207);
          codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
            v230[0],
            "stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
            6,
            v134);
          v73[9] = v204[7];
          v73[8] = v204[6];
          v73[7] = v204[5];
          v73[6] = v204[4];
          v73[5] = v204[3];
          v73[4] = v204[2];
          v131 = v204[0];
          v73[3] = v204[1];
          v73[2] = v131;
          v73[1] = 2;
        }
        *v73 = 11;
        if ( v193 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v194, 32 * v193, 8);
        if ( v95 )
          return v73;
        goto LABEL_163;
      }
      qmemcpy(v216, v205, sizeof(v216));
      v207[0] = v230;
      v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v207[2] = v216;
      v207[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017C7740, v207);
      v207[1] = v145[0];
      v207[2] = v145[1];
      v207[3] = v145[2];
      v207[0] = 10;
      v217 = 0;
      v218 = 1;
      v219 = 0;
      v225 = 1610612768;
      v223 = &v217;
      v224 = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v207,
                              &v223) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v211,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v114 = v217;
      v115 = v218;
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v222,
        v230[0],
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        v218,
        v219);
      if ( v114 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v114, 1);
      v223 = (__int64 *)&v229;
      v224 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      v225 = (__int64)v207;
      v226 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v158, &unk_1017C7774, &v223);
      LOBYTE(v199) = v230[0];
      v116 = v159;
      v212 = v159;
      v213 = v160;
      v223 = &v199;
      v224 = (__int64 (__fastcall **)())_$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v225 = (__int64)&v212;
      v226 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v217, &unk_1017C7632, &v223);
      v73 = v220;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        &v217);
      if ( v158 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v158, 1);
      qmemcpy(v73, v207, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
      v117 = 1;
      v45 = v194;
      v113 = 1;
LABEL_158:
      if ( v193 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 32 * v193, 8);
      if ( v113 )
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v204);
      if ( !v117 )
        return v73;
LABEL_163:
      v87 = v204[9];
      v126 = v204[10];
      if ( v204[10] )
      {
        v127 = (_QWORD *)(v204[9] + 8LL);
        do
        {
          v128 = *(v127 - 1);
          if ( v128 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v127, v128, 1);
          v127 += 3;
          --v126;
        }
        while ( v126 );
      }
      v94 = v204[8];
LABEL_169:
      v73 = v220;
      if ( v94 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, 24 * v94, 8);
      return v73;
    }
    v45 = v194;
    v46 = v194;
    codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v199, v194, v195);
    v50 = std::time::Instant::now::hda76af2c3a449055(&v199, v46, v47, v48, v49);
    v52 = v50 == v197;
    v53 = v50 < v197;
    if ( v52 )
      v53 = v51 < v203;
    v54 = v228;
    if ( v228 )
    {
      v214 = v142[11];
      v213 = v142[10];
      v212 = v142[9];
      v207[0] = &v199;
      v207[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, &unk_1017C7805, v207);
      v101 = v214;
      if ( v214 == v212 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
      v102 = v213;
      v103 = 3 * v101;
      *(_QWORD *)(v213 + 8 * v103 + 16) = v180[2];
      v104 = v180[0];
      *(_QWORD *)(v102 + 8 * v103 + 8) = v180[1];
      *(_QWORD *)(v102 + 8 * v103) = v104;
      v214 = v101 + 1;
      codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
        v205,
        a10,
        &v142[1],
        *a11);
      LOBYTE(v215) = *(_QWORD *)&v205[0] != 11;
      if ( *(_QWORD *)&v205[0] == 11 )
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(v207, v213, v214, &unk_10167774E, 3);
        v118 = v207[0];
        v119 = v207[1];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v222,
          v230[0],
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          v207[1],
          v207[2]);
        if ( v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v118, 1);
        v120 = std::time::Instant::elapsed::h457f209775ed485c(&v189);
        v216[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v120 + v121 / 0xF4240uLL;
        *(_QWORD *)&v205[0] = v214;
        v207[0] = &v229;
        v207[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        v207[2] = v216;
        v207[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        v207[4] = v205;
        v207[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v151, &unk_1017C77A1, v207);
        LOBYTE(v223) = v230[0];
        v122 = v152;
        v205[0] = v152;
        v207[0] = &v223;
        v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        v207[2] = v205;
        v207[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v207);
        v113 = v215;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          v216);
        if ( v151 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v151, 1);
        v207[7] = v204[7];
        v207[6] = v204[6];
        v207[5] = v204[5];
        v207[4] = v204[4];
        v207[3] = v204[3];
        v207[2] = v204[2];
        v207[1] = v204[1];
        v207[0] = v204[0];
        v207[8] = v212;
        v207[9] = v213;
        v207[10] = v214;
        v123 = v220;
        qmemcpy(v220 + 8, v207, 0x58u);
        *v123 = 11;
      }
      else
      {
        qmemcpy(v216, v205, sizeof(v216));
        v207[0] = v230;
        v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        v207[2] = v216;
        v207[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v144, &unk_1017C7842, v207);
        v207[1] = v144[0];
        v207[2] = v144[1];
        v207[3] = v144[2];
        v207[0] = 10;
        v217 = 0;
        v218 = 1;
        v219 = 0;
        v225 = 1610612768;
        v223 = &v217;
        v224 = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v207,
                                &v223) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v211,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v105 = v217;
        v106 = v218;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v222,
          v230[0],
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          v218,
          v219);
        if ( v105 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1);
        v223 = (__int64 *)&v229;
        v224 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        v225 = (__int64)v207;
        v226 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v153, &unk_1017C7774, &v223);
        v221 = v230[0];
        v107 = v154;
        v211[0] = v154;
        v211[1] = v155;
        v223 = (__int64 *)&v221;
        v224 = (__int64 (__fastcall **)())_$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        v225 = (__int64)v211;
        v226 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v217, &unk_1017C7632, &v223);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          &v217);
        if ( v153 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v153, 1);
        qmemcpy(v220, v207, 0x60u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
        v108 = v214;
        if ( v214 )
        {
          v109 = (_QWORD *)(v213 + 8);
          do
          {
            v110 = *(v109 - 1);
            if ( v110 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v109, v110, 1);
            v109 += 3;
            --v108;
          }
          while ( v108 );
        }
        v113 = v215;
        if ( v212 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, 24 * v212, 8);
      }
LABEL_151:
      if ( v199 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v199, 1);
      v117 = v54 ^ 1;
      v124 = (_QWORD *)(v45 + 8);
      do
      {
        v125 = *(v124 - 1);
        if ( v125 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v124, v125, 1);
        v124 += 4;
        --v44;
      }
      while ( v44 );
      v73 = v220;
      goto LABEL_158;
    }
    if ( v209 )
    {
      if ( !v53 || v229 >= 3u )
        goto LABEL_132;
      goto LABEL_48;
    }
    if ( (v53 & v210 & (v229 < 3u)) == 0 )
    {
LABEL_132:
      v207[0] = v230;
      v207[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v207[2] = &v199;
      v207[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v143, &unk_1017C77CB, v207);
      v207[1] = v143[0];
      v207[2] = v143[1];
      v207[3] = v143[2];
      v207[0] = 10;
      *(_QWORD *)&v205[0] = 0;
      *((_QWORD *)&v205[0] + 1) = 1;
      *(_QWORD *)&v205[1] = 0;
      *(_QWORD *)&v216[1] = 1610612768;
      *(_QWORD *)&v216[0] = v205;
      *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v207,
                              v216) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v211,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v111 = v205[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v222,
        v230[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((_QWORD *)&v205[0] + 1),
        *(_QWORD *)&v205[1]);
      if ( (_QWORD)v111 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v111 + 1), v111, 1);
      *(_QWORD *)&v205[0] = v44;
      *(_QWORD *)&v216[0] = &v229;
      *((_QWORD *)&v216[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v216[1] = v205;
      *((_QWORD *)&v216[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v148, &unk_1017C77EC, v216);
      LOBYTE(v217) = v230[0];
      v112 = v149;
      v223 = (__int64 *)v149;
      v224 = v150;
      *(_QWORD *)&v216[0] = &v217;
      *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v216[1] = &v223;
      *((_QWORD *)&v216[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v205, &unk_1017C7632, v216);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v205);
      if ( v148 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v148, 1);
      qmemcpy(v220, v207, 0x60u);
      v113 = 1;
      goto LABEL_151;
    }
LABEL_48:
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v216[0] = v230;
      *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v216[1] = &v229;
      *((_QWORD *)&v216[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v216[2] = &v199;
      *((_QWORD *)&v216[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v207[6] = 2;
      v207[7] = &unk_101677721;
      v207[8] = 45;
      v207[10] = &unk_1017C7865;
      v207[11] = v216;
      v207[0] = 0;
      v207[1] = &unk_101677721;
      v207[2] = 45;
      v207[3] = 0;
      v207[4] = "src/core/relay/router_transition.rs";
      v207[5] = 35;
      v207[9] = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v211, v34);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v200,
      v201);
    if ( v199 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v199, 1);
    v63 = (_QWORD *)(v45 + 8);
    do
    {
      v64 = *(v63 - 1);
      if ( v64 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v63, v64, 1);
      v63 += 4;
      --v44;
    }
    while ( v44 );
    v61 = v193;
    if ( v193 )
    {
      v61 = 32 * v193;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 32 * v193, 8);
    }
    v62 = v204;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v204);
    v65 = (_QWORD *)v204[9];
    v66 = v204[10];
    if ( v204[10] )
    {
      v67 = (_QWORD *)(v204[9] + 8LL);
      do
      {
        v61 = *(v67 - 1);
        if ( v61 )
        {
          v62 = (_QWORD *)*v67;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v67, v61, 1);
        }
        v67 += 3;
        --v66;
      }
      while ( v66 );
    }
    if ( v204[8] )
    {
      v61 = 24LL * v204[8];
      v62 = v65;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, 24LL * v204[8], 8);
    }
LABEL_65:
    v20 = v34;
    if ( (_BYTE)v183 != 3 )
    {
      v19 = v215;
      if ( (unsigned __int8)v215 <= 3u )
        continue;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v61);
    v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
    if ( !v68 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
    v69 = v68;
    memcpy(v68, &unk_101677756, 0x6Du);
    v207[1] = 109;
    v207[2] = v69;
    v207[3] = 109;
    v207[0] = 10;
    *(_QWORD *)&v205[0] = 0;
    *((_QWORD *)&v205[0] + 1) = 1;
    *(_QWORD *)&v205[1] = 0;
    *(_QWORD *)&v216[1] = 1610612768;
    *(_QWORD *)&v216[0] = v205;
    *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v207,
                            v216) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        v211,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v70 = v205[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      *((_QWORD *)&v205[0] + 1),
      *(_QWORD *)&v205[1]);
    if ( (_QWORD)v70 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v70 + 1), v70, 1);
    *(_QWORD *)&v205[0] = 0;
    *((_QWORD *)&v205[0] + 1) = 1;
    *(_QWORD *)&v205[1] = 0;
    *(_QWORD *)&v216[1] = 1610612768;
    *(_QWORD *)&v216[0] = v205;
    *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v207,
                            v216) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        v211,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v71 = v205[0];
    LOBYTE(v142[0]) = v230[0];
    v204[0] = *((_QWORD *)&v205[0] + 1);
    v204[1] = *(_QWORD *)&v205[1];
    *(_QWORD *)&v216[0] = v142;
    *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v216[1] = v204;
    *((_QWORD *)&v216[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v205, &unk_1017C7632, v216);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      15,
      v205);
    if ( (_QWORD)v71 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v71 + 1), v71, 1);
    v72 = v207;
    v73 = v220;
    goto LABEL_89;
  }
  if ( LODWORD(v208[0]) != 11 )
  {
    qmemcpy(v204, v142, sizeof(v204));
    qmemcpy(v205, v132, sizeof(v205));
    *(_QWORD *)&v216[0] = v204;
    *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    *(_QWORD *)&v216[1] = v205;
    *((_QWORD *)&v216[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, &unk_1017C791E, v216);
    *((_QWORD *)&v216[0] + 1) = v146;
    v216[1] = v147;
    *(_QWORD *)&v216[0] = 10;
    v217 = 0;
    v218 = 1;
    v219 = 0;
    v225 = 1610612768;
    v223 = &v217;
    v224 = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v216,
                            &v223) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        v211,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v91 = v217;
    v92 = v218;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      v218,
      v219);
    if ( v91 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1);
    v223 = (__int64 *)&v229;
    v224 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    v225 = (__int64)v216;
    v226 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v161, &unk_1017C7774, &v223);
    LOBYTE(v199) = v230[0];
    v93 = v162;
    v212 = v162;
    v213 = v163;
    v223 = &v199;
    v224 = (__int64 (__fastcall **)())_$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    v225 = (__int64)&v212;
    v226 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v217, &unk_1017C7632, &v223);
    v73 = v220;
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, &v217);
    if ( v161 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v161, 1);
    qmemcpy(v73, v216, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v205);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v204);
    return v73;
  }
  qmemcpy(v205, v142, sizeof(v205));
  v55 = v208[1];
  v56 = BYTE4(v208[1]);
  v57 = std::time::Instant::now::hda76af2c3a449055(&v206, v143, v42, 0, v43);
  v52 = v57 == v197;
  v59 = v57 < v197;
  if ( v52 )
    v59 = v58 < v203;
  if ( !v228 )
  {
    if ( v55 )
    {
      if ( !v59 || v229 >= 3u )
        goto LABEL_83;
    }
    else if ( (v59 & v56 & (v229 < 3u)) == 0 )
    {
      goto LABEL_83;
    }
    v204[0] = 0;
    v204[1] = 1;
    v204[2] = 0;
    *(_QWORD *)&v216[1] = 1610612768;
    *(_QWORD *)&v216[0] = v204;
    *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v205,
                            v216) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        v211,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v223 = (__int64 *)v204[0];
    v224 = (__int64 (__fastcall **)())v204[1];
    v225 = v204[2];
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v204[0] = v230;
      v204[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v204[2] = &v229;
      v204[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      v204[4] = &v223;
      v204[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v216[3] = 2;
      *((_QWORD *)&v216[3] + 1) = &unk_101677721;
      *(_QWORD *)&v216[4] = 45;
      *(_QWORD *)&v216[5] = &unk_1017C78C2;
      *((_QWORD *)&v216[5] + 1) = v204;
      *(_QWORD *)&v216[0] = 0;
      *((_QWORD *)&v216[0] + 1) = &unk_101677721;
      v216[1] = 0x2Du;
      *(_QWORD *)&v216[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v216[2] + 1) = 35;
      *((_QWORD *)&v216[4] + 1) = 0xA800000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v211, v216);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v222,
      v230[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v224,
      v225);
    *(_QWORD *)&v216[0] = &v229;
    *((_QWORD *)&v216[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v216[1] = &v223;
    *((_QWORD *)&v216[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v170, &unk_1017C7774, v216);
    LOBYTE(v212) = v230[0];
    v60 = v171;
    v217 = v171;
    v218 = v172;
    *(_QWORD *)&v216[0] = &v212;
    *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v216[1] = &v217;
    *((_QWORD *)&v216[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v204, &unk_1017C7632, v216);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "reconcile_retrystop_failed",
      15,
      v204);
    if ( v170 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v170, 1);
    v61 = (__int64)v223;
    if ( v223 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v224, v223, 1);
    v62 = v205;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v205);
    goto LABEL_65;
  }
LABEL_83:
  v204[0] = 0;
  v204[1] = 1;
  v204[2] = 0;
  *(_QWORD *)&v216[1] = 1610612768;
  *(_QWORD *)&v216[0] = v204;
  *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                          v205,
                          v216) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      v211,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  v79 = v204[0];
  v80 = v204[1];
  codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
    v222,
    v230[0],
    "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrecon"
    "cile_retrystop_failed",
    6,
    v204[1],
    v204[2]);
  if ( v79 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1);
  *(_QWORD *)&v216[0] = &v229;
  *((_QWORD *)&v216[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
  *(_QWORD *)&v216[1] = v205;
  *((_QWORD *)&v216[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v167, &unk_1017C7774, v216);
  LOBYTE(v217) = v230[0];
  v81 = v168;
  v223 = (__int64 *)v168;
  v224 = v169;
  *(_QWORD *)&v216[0] = &v217;
  *((_QWORD *)&v216[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&v216[1] = &v223;
  *((_QWORD *)&v216[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v204, &unk_1017C7632, v216);
  v73 = v220;
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v204);
  if ( v167 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v167, 1);
  v72 = v205;
LABEL_89:
  qmemcpy(v73, v72, 0x60u);
  return v73;
}
