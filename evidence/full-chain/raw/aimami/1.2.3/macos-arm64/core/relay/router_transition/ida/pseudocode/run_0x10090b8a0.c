// __ZN13codexmate_lib4core5relay17router_transition3run @ 0x10090b8a0 | 基线 same-set
// [FULL hexrays]

_OWORD *__fastcall codexmate_lib::core::relay::router_transition::run::h47180377c95c0f60(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const __m128i *a9,
        __int64 a10,
        __int64 a11)
{
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rcx
  _OWORD *v20; // rdi
  int v21; // edx
  void *v22; // r14
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r15
  char *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int v43; // edx
  bool v44; // zf
  bool v45; // al
  char v46; // r13
  int v47; // r12d
  unsigned __int8 v48; // r14
  __int64 v49; // rax
  unsigned int v50; // edx
  bool v51; // al
  __int64 v52; // r14
  __int64 v53; // rsi
  _QWORD *v54; // r13
  __int64 v55; // rsi
  _OWORD *v56; // r14
  __int64 v57; // r12
  _QWORD *v58; // r13
  void *v59; // rax
  void *v60; // rbx
  char v61; // al
  _OWORD *v62; // r12
  __int128 v63; // kr10_16
  __int128 v64; // kr20_16
  __int64 v65; // rdi
  __int64 v66; // rsi
  char v67; // al
  __int128 v68; // kr30_16
  __int64 v69; // rax
  unsigned int v70; // edx
  __int64 v71; // r14
  _OWORD *v72; // rsi
  char v73; // al
  __int128 v74; // kr50_16
  __int64 v75; // r14
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // r14
  __int128 v79; // kr60_16
  __int64 v80; // r14
  __int64 v81; // rbx
  __int64 v82; // r14
  _QWORD *v83; // r15
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rbx
  __int128 v87; // kr80_16
  __int64 v88; // rax
  unsigned int v89; // edx
  __int64 v90; // r14
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // r15
  __int64 v96; // rbx
  __int64 v97; // r15
  __int64 v98; // rbx
  _QWORD *v99; // r15
  __int64 v100; // rsi
  __int128 v101; // krA0_16
  __int64 v102; // r15
  char v103; // r15
  __int64 v104; // rsi
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // r14
  char v108; // r13
  __int128 v109; // krB0_16
  __int64 v110; // rax
  unsigned int v111; // edx
  __int64 v112; // r15
  _QWORD *v113; // rax
  _QWORD *v114; // rbx
  __int64 v115; // rsi
  __int64 v116; // r14
  _QWORD *v117; // r15
  __int64 v118; // rsi
  __int64 v120; // rax
  unsigned int v121; // edx
  __int64 v122; // [rsp+8h] [rbp-528h]
  _QWORD v123[12]; // [rsp+10h] [rbp-520h] BYREF
  __int64 v124[12]; // [rsp+70h] [rbp-4C0h] BYREF
  __int128 v125; // [rsp+D0h] [rbp-460h]
  __int128 v126; // [rsp+E0h] [rbp-450h]
  __int128 v127; // [rsp+F0h] [rbp-440h]
  __int64 v128; // [rsp+100h] [rbp-430h]
  _QWORD v129[2]; // [rsp+108h] [rbp-428h] BYREF
  __int64 v130; // [rsp+118h] [rbp-418h] BYREF
  __int64 v131; // [rsp+120h] [rbp-410h]
  __int64 v132; // [rsp+128h] [rbp-408h]
  _OWORD v133[6]; // [rsp+130h] [rbp-400h] BYREF
  __int64 v134; // [rsp+190h] [rbp-3A0h] BYREF
  __int128 v135; // [rsp+198h] [rbp-398h]
  __int64 v136; // [rsp+1A8h] [rbp-388h] BYREF
  __int128 v137; // [rsp+1B0h] [rbp-380h]
  __int64 v138; // [rsp+1C0h] [rbp-370h] BYREF
  int v139; // [rsp+1C8h] [rbp-368h]
  _QWORD *v140; // [rsp+1D0h] [rbp-360h]
  __int64 v141; // [rsp+1D8h] [rbp-358h]
  __int64 v142; // [rsp+1E0h] [rbp-350h]
  __m128i *v143; // [rsp+1E8h] [rbp-348h]
  __int64 v144; // [rsp+1F0h] [rbp-340h] BYREF
  int v145; // [rsp+1F8h] [rbp-338h]
  void *v146; // [rsp+200h] [rbp-330h] BYREF
  __int64 v147; // [rsp+208h] [rbp-328h]
  __int64 v148; // [rsp+210h] [rbp-320h] BYREF
  __int64 v149; // [rsp+218h] [rbp-318h]
  __int64 v150; // [rsp+220h] [rbp-310h]
  __int64 v151; // [rsp+228h] [rbp-308h]
  unsigned int v152; // [rsp+234h] [rbp-2FCh]
  __int64 v153; // [rsp+238h] [rbp-2F8h] BYREF
  __int64 v154; // [rsp+240h] [rbp-2F0h]
  __int64 v155; // [rsp+248h] [rbp-2E8h]
  __int64 v156; // [rsp+250h] [rbp-2E0h] BYREF
  void *v157; // [rsp+258h] [rbp-2D8h]
  __int64 v158; // [rsp+260h] [rbp-2D0h]
  __int64 v159; // [rsp+268h] [rbp-2C8h]
  __int64 v160; // [rsp+270h] [rbp-2C0h] BYREF
  __int128 v161; // [rsp+278h] [rbp-2B8h]
  unsigned int v162; // [rsp+28Ch] [rbp-2A4h]
  _BYTE v163[24]; // [rsp+290h] [rbp-2A0h] BYREF
  int v164; // [rsp+2A8h] [rbp-288h] BYREF
  unsigned __int8 v165; // [rsp+2ACh] [rbp-284h] BYREF
  _OWORD v166[6]; // [rsp+2B0h] [rbp-280h] BYREF
  _QWORD v167[12]; // [rsp+310h] [rbp-220h] BYREF
  _OWORD v168[6]; // [rsp+370h] [rbp-1C0h] BYREF
  _OWORD v169[6]; // [rsp+3D0h] [rbp-160h] BYREF
  char *v170; // [rsp+430h] [rbp-100h] BYREF
  __int64 v171; // [rsp+438h] [rbp-F8h] BYREF
  __int64 v172; // [rsp+440h] [rbp-F0h]
  __int64 v173; // [rsp+448h] [rbp-E8h]
  _OWORD v174[6]; // [rsp+450h] [rbp-E0h] BYREF
  char v175; // [rsp+4BEh] [rbp-72h] BYREF
  char v176; // [rsp+4BFh] [rbp-71h] BYREF
  __int64 v177; // [rsp+4C0h] [rbp-70h]
  __int64 v178; // [rsp+4C8h] [rbp-68h] BYREF
  __int128 v179; // [rsp+4D0h] [rbp-60h]
  _BYTE v180[24]; // [rsp+4E0h] [rbp-50h] BYREF
  __int64 (__fastcall *v181)(); // [rsp+4F8h] [rbp-38h]
  char v182; // [rsp+505h] [rbp-2Bh] BYREF
  unsigned __int8 v183; // [rsp+506h] [rbp-2Ah] BYREF
  char v184[41]; // [rsp+507h] [rbp-29h] BYREF

  v11 = a3;
  v177 = a2;
  v170 = a1;
  v184[0] = a3;
  v182 = a4;
  v146 = a5;
  v147 = a6;
  v144 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v145 = v12;
  v15 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v12, v13, v14);
  v151 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v15,
           v16,
           12,
           0);
  v162 = v17;
  *(_QWORD *)&v166[0] = &v182;
  *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  *(_QWORD *)&v166[1] = &v146;
  *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v136, &unk_1017C7698, v166);
  LOBYTE(v168[0]) = v11;
  v18 = v137;
  v169[0] = v137;
  *(_QWORD *)&v166[0] = v168;
  *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&v166[1] = v169;
  *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C7632, v166);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v174);
  if ( v136 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v136, 1);
  v140 = *(_QWORD **)a7;
  v141 = *(_QWORD *)(a7 + 8);
  v142 = *(_QWORD *)(a7 + 16);
  v143 = *(__m128i **)(a8 + 24);
  LOBYTE(v19) = 1;
  while ( 1 )
  {
    v21 = (unsigned __int8)(v19 + 1);
    if ( (_BYTE)v19 == 3 )
      v21 = 3;
    v152 = v21;
    v159 = v19;
    v183 = v19;
    v22 = v146;
    v23 = v147;
    v24 = (unsigned __int8)v184[0];
    v25 = v177;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v146,
      v147);
    v138 = std::time::Instant::now::hda76af2c3a449055(v25, v24, v26, v27, v28);
    v139 = v29;
    if ( v182 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v124, 3, 0, 1, 0);
      if ( LODWORD(v124[0]) != 11 )
        goto LABEL_69;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v124, 5, 0, 0, 0);
      if ( LODWORD(v124[0]) != 11 )
      {
LABEL_69:
        qmemcpy(v166, v124, sizeof(v166));
        *(_QWORD *)&v169[0] = 0;
        *((_QWORD *)&v169[0] + 1) = 1;
        *(_QWORD *)&v169[1] = 0;
        *(_QWORD *)&v174[1] = 1610612768;
        *(_QWORD *)&v174[0] = v169;
        *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        v67 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                v166,
                v174);
        v62 = v170;
        if ( v67 )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v171,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v68 = v169[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v177,
          (unsigned __int8)v184[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v169[0] + 1),
          *(__int64 *)&v169[1]);
        if ( (_QWORD)v68 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1);
        v69 = std::time::Instant::elapsed::h457f209775ed485c(&v138);
        v169[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v69 + v70 / 0xF4240uLL;
        *(_QWORD *)&v174[0] = &v183;
        *((_QWORD *)&v174[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v174[1] = v169;
        *((_QWORD *)&v174[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v174[2] = v166;
        *((_QWORD *)&v174[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_1017C7949, v174);
        v180[0] = v184[0];
        v71 = *((_QWORD *)&v168[0] + 1);
        v133[0] = *(_OWORD *)((char *)v168 + 8);
        *(_QWORD *)&v174[0] = v180;
        *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v174[1] = v133;
        *((_QWORD *)&v174[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v174);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v169);
        v66 = *(_QWORD *)&v168[0];
        if ( *(_QWORD *)&v168[0] )
        {
          v65 = v71;
LABEL_74:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v66, 1);
        }
LABEL_75:
        v72 = v166;
LABEL_82:
        qmemcpy(v62, v72, 0x60u);
        return v62;
      }
    }
    v127 = *(_OWORD *)&v124[5];
    v126 = *(_OWORD *)&v124[3];
    v125 = *(_OWORD *)&v124[1];
    v128 = v124[7];
    v176 = v124[7];
    v30 = std::time::Instant::elapsed::h457f209775ed485c(&v138);
    v174[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
    *(_QWORD *)&v166[0] = &v183;
    *((_QWORD *)&v166[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v166[1] = v174;
    *((_QWORD *)&v166[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v166[2] = &v176;
    *((_QWORD *)&v166[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v134, &unk_1017C76AC, v166);
    LOBYTE(v168[0]) = v184[0];
    v32 = v135;
    v169[0] = v135;
    *(_QWORD *)&v166[0] = v168;
    *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v166[1] = v169;
    *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C7632, v166);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v174);
    if ( v134 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v134, 1);
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v22,
      v23);
    v33 = "NativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort";
    if ( v183 == 1 )
      v33 = "NativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort";
    codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1(
      v166,
      v141,
      v140,
      v142,
      (__int64)v33,
      9LL * (v183 != 1) + 22,
      nullptr,
      v122);
    v169[0] = *(_OWORD *)((char *)v166 + 8);
    v169[1] = *(_OWORD *)((char *)&v166[1] + 8);
    v169[2] = *(_OWORD *)((char *)&v166[2] + 8);
    *(_QWORD *)&v169[3] = *((_QWORD *)&v166[3] + 1);
    if ( *(_QWORD *)&v166[0] == 11 )
    {
      v168[0] = v169[0];
      v168[1] = v169[1];
      v168[2] = v169[2];
      *(_QWORD *)&v168[3] = *(_QWORD *)&v169[3];
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(
        v180,
        (char *)&v168[1] + 8);
      *(_QWORD *)&v166[3] = *(_QWORD *)&v168[3];
      v166[2] = v168[2];
      v166[1] = v168[1];
      v166[0] = v168[0];
      v166[4] = *(_OWORD *)&v180[8];
      *((_QWORD *)&v166[3] + 1) = *(_QWORD *)v180;
      qmemcpy(v174, v166, 0x50u);
      v133[5] = v174[4];
      v133[4] = v174[3];
      v133[3] = v174[2];
      v133[2] = v174[1];
      v133[1] = v174[0];
      v133[0] = 0xBu;
    }
    else
    {
      *(_QWORD *)&v174[5] = *((_QWORD *)&v166[5] + 1);
      v174[4] = *(_OWORD *)((char *)&v166[4] + 8);
      *((_QWORD *)&v174[3] + 1) = *(_QWORD *)&v166[4];
      v174[0] = v169[0];
      v174[1] = v169[1];
      v174[2] = v169[2];
      *(_QWORD *)&v174[3] = *(_QWORD *)&v169[3];
      *(_QWORD *)&v133[0] = *(_QWORD *)&v166[0];
      qmemcpy((char *)v133 + 8, v174, 0x58u);
    }
    *(_QWORD *)&v166[3] = v124[7];
    v166[2] = *(_OWORD *)&v124[5];
    v166[1] = *(_OWORD *)&v124[3];
    v166[0] = *(_OWORD *)&v124[1];
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v123, (__int64)v166);
    qmemcpy(v166, v133, sizeof(v166));
    qmemcpy(v167, v123, sizeof(v167));
    if ( LODWORD(v166[0]) == 11 )
      break;
    if ( LODWORD(v167[0]) != 11 )
    {
      qmemcpy(v168, v133, sizeof(v168));
      qmemcpy(v169, v123, sizeof(v169));
      *(_QWORD *)&v174[0] = v168;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      *(_QWORD *)&v174[1] = v169;
      *((_QWORD *)&v174[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_1017C791E, v174);
      *((_QWORD *)&v174[0] + 1) = v160;
      v174[1] = v161;
      *(_QWORD *)&v174[0] = 10;
      v178 = 0;
      v179 = 1u;
      *(_QWORD *)&v180[16] = 1610612768;
      *(_QWORD *)v180 = &v178;
      *(_QWORD *)&v180[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v174,
                              v180) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v76 = v178;
      v77 = v179;
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        (void *)v179,
        *((__int64 *)&v179 + 1));
      if ( v76 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1);
      *(_QWORD *)v180 = &v183;
      *(_QWORD *)&v180[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v180[16] = v174;
      v181 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v171, &unk_1017C7774, v180);
      v163[0] = v184[0];
      v78 = v172;
      v153 = v172;
      v154 = v173;
      *(_QWORD *)v180 = v163;
      *(_QWORD *)&v180[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v180[16] = &v153;
      v181 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7632, v180);
      v62 = v170;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, &v178);
      if ( v171 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v171, 1);
      qmemcpy(v62, v174, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v169);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v168);
      return v62;
    }
    qmemcpy(v169, v133, sizeof(v169));
    v47 = v167[1];
    v48 = BYTE4(v167[1]);
    v49 = std::time::Instant::now::hda76af2c3a449055(&v170, &v134, v34, 0, v35);
    v44 = v49 == v151;
    v51 = v49 < v151;
    if ( v44 )
      v51 = v50 < v162;
    if ( v182 )
    {
LABEL_76:
      *(_QWORD *)&v168[0] = 0;
      *((_QWORD *)&v168[0] + 1) = 1;
      *(_QWORD *)&v168[1] = 0;
      *(_QWORD *)&v174[1] = 1610612768;
      *(_QWORD *)&v174[0] = v168;
      *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      v73 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
              v169,
              v174);
      v62 = v170;
      if ( v73 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v74 = v168[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v168[0] + 1),
        *(__int64 *)&v168[1]);
      if ( (_QWORD)v74 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v74 + 1), v74, 1);
      *(_QWORD *)&v174[0] = &v183;
      *((_QWORD *)&v174[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v174[1] = v169;
      *((_QWORD *)&v174[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, &unk_1017C7774, v174);
      LOBYTE(v171) = v184[0];
      v75 = *(_QWORD *)&v180[8];
      v178 = *(_QWORD *)&v180[8];
      *(_QWORD *)&v179 = *(_QWORD *)&v180[16];
      *(_QWORD *)&v174[0] = &v171;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v174[1] = &v178;
      *((_QWORD *)&v174[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_1017C7632, v174);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v168);
      if ( *(_QWORD *)v180 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, *(_QWORD *)v180, 1);
      v72 = v169;
      goto LABEL_82;
    }
    if ( v47 )
    {
      if ( !v51 || v183 >= 3u )
        goto LABEL_76;
    }
    else if ( (v51 & v48 & (v183 < 3u)) == 0 )
    {
      goto LABEL_76;
    }
    *(_QWORD *)&v168[0] = 0;
    *((_QWORD *)&v168[0] + 1) = 1;
    *(_QWORD *)&v168[1] = 0;
    *(_QWORD *)&v174[1] = 1610612768;
    *(_QWORD *)&v174[0] = v168;
    *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v169,
                            v174) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v171,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    *(_OWORD *)v180 = v168[0];
    *(_QWORD *)&v180[16] = *(_QWORD *)&v168[1];
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v168[0] = v184;
      *((_QWORD *)&v168[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v168[1] = &v183;
      *((_QWORD *)&v168[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v168[2] = v180;
      *((_QWORD *)&v168[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v174[3] = 2;
      *((_QWORD *)&v174[3] + 1) = &unk_101677721;
      *(_QWORD *)&v174[4] = 45;
      *(_QWORD *)&v174[5] = &unk_1017C78C2;
      *((_QWORD *)&v174[5] + 1) = v168;
      *(_QWORD *)&v174[0] = 0;
      *((_QWORD *)&v174[0] + 1) = &unk_101677721;
      v174[1] = 0x2Du;
      *(_QWORD *)&v174[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v174[2] + 1) = 35;
      *((_QWORD *)&v174[4] + 1) = 0xA800000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v171, v174);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *(void **)&v180[8],
      *(__int64 *)&v180[16]);
    *(_QWORD *)&v174[0] = &v183;
    *((_QWORD *)&v174[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v174[1] = v180;
    *((_QWORD *)&v174[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v130, &unk_1017C7774, v174);
    LOBYTE(v171) = v184[0];
    v52 = v131;
    v178 = v131;
    *(_QWORD *)&v179 = v132;
    *(_QWORD *)&v174[0] = &v171;
    *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v174[1] = &v178;
    *((_QWORD *)&v174[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_1017C7632, v174);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "reconcile_retrystop_failed",
      15,
      v168);
    if ( v130 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v130, 1);
    v53 = *(_QWORD *)v180;
    if ( *(_QWORD *)v180 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v180[8], *(_QWORD *)v180, 1);
    v20 = v169;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v169);
    if ( (_BYTE)v159 == 3 )
    {
LABEL_62:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v53);
      v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
      if ( !v59 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
      v60 = v59;
      memcpy(v59, &unk_101677756, 0x6Du);
      *((_QWORD *)&v166[0] + 1) = 109;
      *(_QWORD *)&v166[1] = v60;
      *((_QWORD *)&v166[1] + 1) = 109;
      *(_QWORD *)&v166[0] = 10;
      *(_QWORD *)&v169[0] = 0;
      *((_QWORD *)&v169[0] + 1) = 1;
      *(_QWORD *)&v169[1] = 0;
      *(_QWORD *)&v174[1] = 1610612768;
      *(_QWORD *)&v174[0] = v169;
      *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      v61 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
              v166,
              v174);
      v62 = v170;
      if ( v61 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v63 = v169[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v169[0] + 1),
        *(__int64 *)&v169[1]);
      if ( (_QWORD)v63 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v63 + 1), v63, 1);
      *(_QWORD *)&v169[0] = 0;
      *((_QWORD *)&v169[0] + 1) = 1;
      *(_QWORD *)&v169[1] = 0;
      *(_QWORD *)&v174[1] = 1610612768;
      *(_QWORD *)&v174[0] = v169;
      *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v166,
                              v174) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v64 = v169[0];
      LOBYTE(v133[0]) = v184[0];
      v168[0] = *(_OWORD *)((char *)v169 + 8);
      *(_QWORD *)&v174[0] = v133;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v174[1] = v168;
      *((_QWORD *)&v174[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v174);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        15,
        v169);
      if ( (_QWORD)v64 )
      {
        v65 = *((_QWORD *)&v64 + 1);
        v66 = v64;
        goto LABEL_74;
      }
      goto LABEL_75;
    }
LABEL_5:
    v19 = v152;
    if ( (unsigned __int8)v152 > 3u )
      goto LABEL_62;
  }
  if ( LODWORD(v167[0]) != 11 )
  {
    qmemcpy(v174, v123, sizeof(v174));
    *(_QWORD *)&v168[0] = 0;
    *((_QWORD *)&v168[0] + 1) = 1;
    *(_QWORD *)&v168[1] = 0;
    *(_QWORD *)&v169[1] = 1610612768;
    *(_QWORD *)&v169[0] = v168;
    *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v174,
                            v169) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v171,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v79 = v168[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      *((void **)&v168[0] + 1),
      *(__int64 *)&v168[1]);
    if ( (_QWORD)v79 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v79 + 1), v79, 1);
    *(_QWORD *)&v169[0] = &v183;
    *((_QWORD *)&v169[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v169[1] = v174;
    *((_QWORD *)&v169[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, &unk_1017C7774, v169);
    LOBYTE(v171) = v184[0];
    v80 = *(_QWORD *)&v180[8];
    v178 = *(_QWORD *)&v180[8];
    *(_QWORD *)&v179 = *(_QWORD *)&v180[16];
    *(_QWORD *)&v169[0] = &v171;
    *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v169[1] = &v178;
    *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_1017C7632, v169);
    v62 = v170;
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "settle_failedreconcile_retrystop_failed",
      13,
      v168);
    if ( *(_QWORD *)v180 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, *(_QWORD *)v180, 1);
    qmemcpy(v62, v174, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c((char *)v166 + 8);
    v82 = *((_QWORD *)&v166[5] + 1);
    v81 = *(_QWORD *)&v166[5];
    if ( *((_QWORD *)&v166[5] + 1) )
    {
      v83 = (_QWORD *)(*(_QWORD *)&v166[5] + 8LL);
      do
      {
        v84 = *(v83 - 1);
        if ( v84 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v83, v84, 1);
        v83 += 3;
        --v82;
      }
      while ( v82 );
    }
    v85 = *((_QWORD *)&v166[4] + 1);
    if ( !*((_QWORD *)&v166[4] + 1) )
      return v62;
    goto LABEL_163;
  }
  qmemcpy(v168, (char *)v133 + 8, 0x58u);
  v164 = v167[1];
  v165 = BYTE4(v167[1]);
  codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
    &v148,
    v143,
    a9,
    0,
    (LODWORD(v167[1]) == 0) & (BYTE4(v167[1]) ^ 1));
  v36 = v150;
  if ( !v150 )
  {
    v62 = v170;
    if ( (v164 || (v165 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
    {
      *(_QWORD *)&v174[0] = v184;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v174[1] = &v183;
      *((_QWORD *)&v174[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v174[2] = &v164;
      *((_QWORD *)&v174[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&v174[3] = &v165;
      *((_QWORD *)&v174[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      *(_QWORD *)&v166[3] = 2;
      *((_QWORD *)&v166[3] + 1) = &unk_101677721;
      *(_QWORD *)&v166[4] = 45;
      *(_QWORD *)&v166[5] = &unk_1017C76CE;
      *((_QWORD *)&v166[5] + 1) = v174;
      *(_QWORD *)&v166[0] = 0;
      *((_QWORD *)&v166[0] + 1) = &unk_101677721;
      v166[1] = 0x2Du;
      *(_QWORD *)&v166[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v166[2] + 1) = 35;
      *((_QWORD *)&v166[4] + 1) = 0xDA00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v171, v166);
    }
    codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
      v169,
      a10,
      (__int64)v168,
      *(_BYTE *)(a11 + 293));
    if ( LODWORD(v169[0]) != 11 )
    {
      qmemcpy(v174, v169, sizeof(v174));
      *(_QWORD *)&v166[0] = v184;
      *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v166[1] = v174;
      *((_QWORD *)&v166[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_1017C7740, v166);
      *((_QWORD *)&v166[0] + 1) = v160;
      v166[1] = v161;
      *(_QWORD *)&v166[0] = 10;
      v178 = 0;
      v179 = 1u;
      *(_QWORD *)&v180[16] = 1610612768;
      *(_QWORD *)v180 = &v178;
      *(_QWORD *)&v180[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v166,
                              v180) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v105 = v178;
      v106 = v179;
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        (void *)v179,
        *((__int64 *)&v179 + 1));
      if ( v105 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1);
      *(_QWORD *)v180 = &v183;
      *(_QWORD *)&v180[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v180[16] = v166;
      v181 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v171, &unk_1017C7774, v180);
      v163[0] = v184[0];
      v107 = v172;
      v153 = v172;
      v154 = v173;
      *(_QWORD *)v180 = v163;
      *(_QWORD *)&v180[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v180[16] = &v153;
      v181 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7632, v180);
      v62 = v170;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        &v178);
      if ( v171 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v171, 1);
      qmemcpy(v62, v166, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v174);
      v108 = 1;
      v37 = v149;
      v103 = 1;
      goto LABEL_152;
    }
    v86 = *(_QWORD *)&v168[5];
    if ( *(_QWORD *)&v168[5] )
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(
        v166,
        *((_QWORD *)&v168[4] + 1),
        *(_QWORD *)&v168[5],
        &unk_10167774E,
        3);
      v87 = v166[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        *((void **)&v166[0] + 1),
        *(__int64 *)&v166[1]);
      if ( (_QWORD)v87 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v87 + 1), v87, 1);
      v88 = std::time::Instant::elapsed::h457f209775ed485c(&v144);
      v174[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v88 + v89 / 0xF4240uLL;
      *(_QWORD *)v180 = v86;
      *(_QWORD *)&v166[0] = &v183;
      *((_QWORD *)&v166[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v166[1] = v174;
      *((_QWORD *)&v166[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      *(_QWORD *)&v166[2] = v180;
      *((_QWORD *)&v166[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C77A1, v166);
      LOBYTE(v178) = v184[0];
      v90 = *((_QWORD *)&v169[0] + 1);
      *(_QWORD *)v180 = *((_QWORD *)&v169[0] + 1);
      *(_QWORD *)&v180[8] = *(_QWORD *)&v169[1];
      *(_QWORD *)&v166[0] = &v178;
      *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v166[1] = v180;
      *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C7632, v166);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        v174);
      if ( *(_QWORD *)&v169[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, *(_QWORD *)&v169[0], 1);
      v166[3] = v168[3];
      v166[2] = v168[2];
      v166[1] = v168[1];
      v166[0] = v168[0];
      v166[4] = v168[4];
      *(_QWORD *)&v166[5] = *(_QWORD *)&v168[5];
      qmemcpy((char *)v62 + 8, v166, 0x58u);
    }
    else
    {
      codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v177);
      v120 = std::time::Instant::elapsed::h457f209775ed485c(&v144);
      v169[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v120 + v121 / 0xF4240uLL;
      *(_QWORD *)&v166[0] = &v183;
      *((_QWORD *)&v166[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v166[1] = v169;
      *((_QWORD *)&v166[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C7788, v166);
      codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
        v184[0],
        (__int64)"stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        6,
        v174);
      v62[4] = v168[3];
      v62[3] = v168[2];
      v62[2] = v168[1];
      v62[1] = v168[0];
      *((_QWORD *)v62 + 1) = 2;
    }
    *(_QWORD *)v62 = 11;
    if ( v148 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, 32 * v148, 8);
    if ( v86 )
      return v62;
LABEL_157:
    v81 = *((_QWORD *)&v168[4] + 1);
    v116 = *(_QWORD *)&v168[5];
    if ( *(_QWORD *)&v168[5] )
    {
      v117 = (_QWORD *)(*((_QWORD *)&v168[4] + 1) + 8LL);
      do
      {
        v118 = *(v117 - 1);
        if ( v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v117, v118, 1);
        v117 += 3;
        --v116;
      }
      while ( v116 );
    }
    v85 = *(_QWORD *)&v168[4];
    if ( !*(_QWORD *)&v168[4] )
      return v62;
LABEL_163:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 24 * v85, 8);
    return v62;
  }
  v37 = v149;
  v38 = v149;
  codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v156, v149, v150);
  v42 = std::time::Instant::now::hda76af2c3a449055(&v156, v38, v39, v40, v41);
  v44 = v42 == v151;
  v45 = v42 < v151;
  if ( v44 )
    v45 = v43 < v162;
  v46 = v182;
  if ( !v182 )
  {
    if ( v164 )
    {
      if ( !v45 || v183 >= 3u )
        goto LABEL_125;
    }
    else if ( (v45 & v165 & (v183 < 3u)) == 0 )
    {
LABEL_125:
      *(_QWORD *)&v166[0] = v184;
      *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v166[1] = &v156;
      *((_QWORD *)&v166[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C77CB, v166);
      *((_QWORD *)&v166[0] + 1) = v178;
      v166[1] = v179;
      *(_QWORD *)&v166[0] = 10;
      *(_QWORD *)&v169[0] = 0;
      *((_QWORD *)&v169[0] + 1) = 1;
      *(_QWORD *)&v169[1] = 0;
      *(_QWORD *)&v174[1] = 1610612768;
      *(_QWORD *)&v174[0] = v169;
      *((_QWORD *)&v174[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v166,
                              v174) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v171,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v101 = v169[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v177,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v169[0] + 1),
        *(__int64 *)&v169[1]);
      if ( (_QWORD)v101 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v101 + 1), v101, 1);
      *(_QWORD *)&v169[0] = v36;
      *(_QWORD *)&v174[0] = &v183;
      *((_QWORD *)&v174[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v174[1] = v169;
      *((_QWORD *)&v174[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, &unk_1017C77EC, v174);
      LOBYTE(v160) = v184[0];
      v102 = *(_QWORD *)&v180[8];
      v171 = *(_QWORD *)&v180[8];
      v172 = *(_QWORD *)&v180[16];
      *(_QWORD *)&v174[0] = &v160;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v174[1] = &v171;
      *((_QWORD *)&v174[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v174);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v169);
      if ( *(_QWORD *)v180 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, *(_QWORD *)v180, 1);
      qmemcpy(v170, v166, 0x60u);
      v103 = 1;
      v104 = v156;
      if ( v156 )
        goto LABEL_146;
      goto LABEL_147;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v174[0] = v184;
      *((_QWORD *)&v174[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v174[1] = &v183;
      *((_QWORD *)&v174[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v174[2] = &v156;
      *((_QWORD *)&v174[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v166[3] = 2;
      *((_QWORD *)&v166[3] + 1) = &unk_101677721;
      *(_QWORD *)&v166[4] = 45;
      *(_QWORD *)&v166[5] = &unk_1017C7865;
      *((_QWORD *)&v166[5] + 1) = v174;
      *(_QWORD *)&v166[0] = 0;
      *((_QWORD *)&v166[0] + 1) = &unk_101677721;
      v166[1] = 0x2Du;
      *(_QWORD *)&v166[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v166[2] + 1) = 35;
      *((_QWORD *)&v166[4] + 1) = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v171, v166);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v157,
      v158);
    if ( v156 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v156, 1);
    v54 = (_QWORD *)(v37 + 8);
    do
    {
      v55 = *(v54 - 1);
      if ( v55 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v54, v55, 1);
      v54 += 4;
      --v36;
    }
    while ( v36 );
    v53 = v148;
    if ( v148 )
    {
      v53 = 32 * v148;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 32 * v148, 8);
    }
    v20 = v168;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v168);
    v56 = *((_OWORD **)&v168[4] + 1);
    v57 = *(_QWORD *)&v168[5];
    if ( *(_QWORD *)&v168[5] )
    {
      v58 = (_QWORD *)(*((_QWORD *)&v168[4] + 1) + 8LL);
      do
      {
        v53 = *(v58 - 1);
        if ( v53 )
        {
          v20 = (_OWORD *)*v58;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v53, 1);
        }
        v58 += 3;
        --v57;
      }
      while ( v57 );
    }
    if ( *(_QWORD *)&v168[4] )
    {
      v53 = 24LL * *(_QWORD *)&v168[4];
      v20 = v56;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24LL * *(_QWORD *)&v168[4], 8);
    }
    if ( (_BYTE)v159 == 3 )
      goto LABEL_62;
    goto LABEL_5;
  }
  *(_OWORD *)&v163[8] = v133[5];
  *(_QWORD *)v163 = *((_QWORD *)&v133[4] + 1);
  *(_QWORD *)&v166[0] = &v156;
  *((_QWORD *)&v166[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v153, &unk_1017C7805, v166);
  v91 = *(_QWORD *)&v163[16];
  if ( *(_QWORD *)&v163[16] == *(_QWORD *)v163 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v163);
  v92 = *(_QWORD *)&v163[8];
  v93 = 3 * v91;
  *(_QWORD *)(*(_QWORD *)&v163[8] + 8 * v93 + 16) = v155;
  v94 = v153;
  *(_QWORD *)(v92 + 8 * v93 + 8) = v154;
  *(_QWORD *)(v92 + 8 * v93) = v94;
  *(_QWORD *)&v163[16] = v91 + 1;
  codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
    v169,
    a10,
    (__int64)v133 + 8,
    *(_BYTE *)(a11 + 293));
  LOBYTE(v159) = *(_QWORD *)&v169[0] != 11;
  if ( *(_QWORD *)&v169[0] == 11 )
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v166, *(_QWORD *)&v163[8], *(_QWORD *)&v163[16], &unk_10167774E, 3);
    v109 = v166[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *((void **)&v166[0] + 1),
      *(__int64 *)&v166[1]);
    if ( (_QWORD)v109 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v109 + 1), v109, 1);
    v110 = std::time::Instant::elapsed::h457f209775ed485c(&v144);
    v174[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v110 + v111 / 0xF4240uLL;
    *(_QWORD *)v180 = *(_QWORD *)&v163[16];
    *(_QWORD *)&v166[0] = &v183;
    *((_QWORD *)&v166[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v166[1] = v174;
    *((_QWORD *)&v166[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v166[2] = v180;
    *((_QWORD *)&v166[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C77A1, v166);
    LOBYTE(v178) = v184[0];
    v112 = *((_QWORD *)&v169[0] + 1);
    *(_QWORD *)v180 = *((_QWORD *)&v169[0] + 1);
    *(_QWORD *)&v180[8] = *(_QWORD *)&v169[1];
    *(_QWORD *)&v166[0] = &v178;
    *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v166[1] = v180;
    *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C7632, v166);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v174);
    if ( *(_QWORD *)&v169[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, *(_QWORD *)&v169[0], 1);
    v166[3] = v168[3];
    v166[2] = v168[2];
    v166[1] = v168[1];
    v166[0] = v168[0];
    v166[4] = *(_OWORD *)v163;
    *(_QWORD *)&v166[5] = *(_QWORD *)&v163[16];
    v113 = v170;
    qmemcpy(v170 + 8, v166, 0x58u);
    *v113 = 11;
  }
  else
  {
    qmemcpy(v174, v169, sizeof(v174));
    *(_QWORD *)&v166[0] = v184;
    *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v166[1] = v174;
    *((_QWORD *)&v166[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_1017C7842, v166);
    *((_QWORD *)&v166[0] + 1) = v160;
    v166[1] = v161;
    *(_QWORD *)&v166[0] = 10;
    v178 = 0;
    v179 = 1u;
    *(_QWORD *)&v180[16] = 1610612768;
    *(_QWORD *)v180 = &v178;
    *(_QWORD *)&v180[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v166,
                            v180) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v171,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v95 = v178;
    v96 = v179;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v177,
      (unsigned __int8)v184[0],
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      (void *)v179,
      *((__int64 *)&v179 + 1));
    if ( v95 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v95, 1);
    *(_QWORD *)v180 = &v183;
    *(_QWORD *)&v180[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v180[16] = v166;
    v181 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v171, &unk_1017C7774, v180);
    v175 = v184[0];
    v97 = v172;
    v129[0] = v172;
    v129[1] = v173;
    *(_QWORD *)v180 = &v175;
    *(_QWORD *)&v180[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v180[16] = v129;
    v181 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7632, v180);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      &v178);
    if ( v171 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v171, 1);
    qmemcpy(v170, v166, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v174);
    v98 = *(_QWORD *)&v163[16];
    if ( *(_QWORD *)&v163[16] )
    {
      v99 = (_QWORD *)(*(_QWORD *)&v163[8] + 8LL);
      do
      {
        v100 = *(v99 - 1);
        if ( v100 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v99, v100, 1);
        v99 += 3;
        --v98;
      }
      while ( v98 );
    }
    if ( *(_QWORD *)v163 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v163[8], 24LL * *(_QWORD *)v163, 8);
  }
  v103 = v159;
  v104 = v156;
  if ( v156 )
LABEL_146:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v104, 1);
LABEL_147:
  v108 = v46 ^ 1;
  v114 = (_QWORD *)(v37 + 8);
  do
  {
    v115 = *(v114 - 1);
    if ( v115 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v114, v115, 1);
    v114 += 4;
    --v36;
  }
  while ( v36 );
  v62 = v170;
LABEL_152:
  if ( v148 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 32 * v148, 8);
  if ( v103 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v168);
  if ( v108 )
    goto LABEL_157;
  return v62;
}
