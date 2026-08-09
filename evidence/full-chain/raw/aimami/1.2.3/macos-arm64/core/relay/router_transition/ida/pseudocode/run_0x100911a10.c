// __ZN13codexmate_lib4core5relay17router_transition3run @ 0x100911a10 | 基线 same-set
// [FULL hexrays]

_OWORD *__fastcall codexmate_lib::core::relay::router_transition::run::ha674ad013dc5681f(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        const __m128i *a9,
        __int64 a10,
        char *a11)
{
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rcx
  _OWORD *v20; // r14
  _OWORD *v21; // rdi
  unsigned int v22; // eax
  int v23; // r15d
  void *v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // edx
  _QWORD *v34; // rdx
  __int64 v35; // r14
  _QWORD *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned int v46; // edx
  bool v47; // zf
  bool v48; // al
  char v49; // r14
  int v50; // r12d
  unsigned __int8 v51; // r14
  __int64 v52; // rax
  unsigned int v53; // edx
  bool v54; // al
  __int64 v55; // r14
  __int64 v56; // rsi
  _QWORD *v57; // r14
  __int64 v58; // rsi
  _OWORD *v59; // r14
  __int64 v60; // r12
  _QWORD *v61; // r13
  void *v62; // rax
  void *v63; // rbx
  __int128 v64; // kr10_16
  __int128 v65; // kr20_16
  _OWORD *v66; // rsi
  _OWORD *v67; // r15
  __int128 v68; // kr30_16
  __int64 v69; // rax
  unsigned int v70; // edx
  __int64 v71; // r14
  __int128 v72; // kr50_16
  __int64 v73; // r14
  __int64 v74; // r14
  __int64 v75; // r15
  __int64 v76; // r14
  __int128 v77; // kr60_16
  __int64 v78; // r14
  void *v79; // rbx
  __int64 v80; // rbx
  __int64 v81; // r14
  _QWORD *v82; // r15
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rbx
  __int128 v86; // kr80_16
  __int64 v87; // rax
  unsigned int v88; // edx
  __int64 v89; // r14
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // r15
  __int64 v96; // rbx
  void *v97; // r15
  __int64 v98; // rbx
  _QWORD *v99; // r15
  __int64 v100; // rsi
  __int128 v101; // krA0_16
  __int64 v102; // rbx
  __int64 v103; // r14
  __int64 v104; // r15
  __int64 v105; // r14
  char v106; // r14
  char v107; // bl
  __int128 v108; // krB0_16
  __int64 v109; // rax
  unsigned int v110; // edx
  __int64 v111; // rbx
  _QWORD *v112; // rbx
  __int64 v113; // rsi
  __int64 v114; // r14
  _QWORD *v115; // r15
  __int64 v116; // rsi
  __int64 v118; // rax
  unsigned int v119; // edx
  __int64 v120; // [rsp+18h] [rbp-528h]
  _QWORD v121[12]; // [rsp+20h] [rbp-520h] BYREF
  __int64 v122[12]; // [rsp+80h] [rbp-4C0h] BYREF
  __int128 v123; // [rsp+E0h] [rbp-460h]
  __int128 v124; // [rsp+F0h] [rbp-450h]
  __int128 v125; // [rsp+100h] [rbp-440h]
  __int64 v126; // [rsp+110h] [rbp-430h]
  _QWORD v127[2]; // [rsp+118h] [rbp-428h] BYREF
  _QWORD v128[12]; // [rsp+128h] [rbp-418h] BYREF
  __int64 v129; // [rsp+188h] [rbp-3B8h] BYREF
  __int64 v130; // [rsp+190h] [rbp-3B0h]
  __int64 v131; // [rsp+198h] [rbp-3A8h]
  __int64 v132; // [rsp+1A0h] [rbp-3A0h] BYREF
  __int128 v133; // [rsp+1A8h] [rbp-398h]
  __int64 v134; // [rsp+1B8h] [rbp-388h] BYREF
  __int128 v135; // [rsp+1C0h] [rbp-380h]
  __int64 v136; // [rsp+1D0h] [rbp-370h] BYREF
  int v137; // [rsp+1D8h] [rbp-368h]
  __int64 v138; // [rsp+1E0h] [rbp-360h]
  __int64 v139; // [rsp+1E8h] [rbp-358h]
  __int64 v140; // [rsp+1F0h] [rbp-350h]
  __m128i *v141; // [rsp+1F8h] [rbp-348h]
  __int64 v142; // [rsp+200h] [rbp-340h] BYREF
  int v143; // [rsp+208h] [rbp-338h]
  void *v144; // [rsp+210h] [rbp-330h] BYREF
  __int64 v145; // [rsp+218h] [rbp-328h]
  __int64 v146; // [rsp+220h] [rbp-320h] BYREF
  __int64 v147; // [rsp+228h] [rbp-318h]
  __int64 v148; // [rsp+230h] [rbp-310h]
  __int64 v149; // [rsp+238h] [rbp-308h]
  int v150; // [rsp+244h] [rbp-2FCh]
  __int64 v151; // [rsp+248h] [rbp-2F8h] BYREF
  __int64 v152; // [rsp+250h] [rbp-2F0h]
  __int64 v153; // [rsp+258h] [rbp-2E8h]
  __int64 v154; // [rsp+260h] [rbp-2E0h] BYREF
  void *v155; // [rsp+268h] [rbp-2D8h]
  __int64 v156; // [rsp+270h] [rbp-2D0h]
  __int64 v157; // [rsp+278h] [rbp-2C8h] BYREF
  __int128 v158; // [rsp+280h] [rbp-2C0h]
  __int64 v159; // [rsp+290h] [rbp-2B0h]
  unsigned int v160; // [rsp+29Ch] [rbp-2A4h]
  _OWORD v161[6]; // [rsp+2A0h] [rbp-2A0h] BYREF
  _OWORD v162[6]; // [rsp+300h] [rbp-240h] BYREF
  _OWORD v163[6]; // [rsp+360h] [rbp-1E0h] BYREF
  _QWORD v164[12]; // [rsp+3C0h] [rbp-180h] BYREF
  __int128 v165; // [rsp+420h] [rbp-120h] BYREF
  __int64 v166; // [rsp+430h] [rbp-110h]
  int v167; // [rsp+438h] [rbp-108h] BYREF
  unsigned __int8 v168; // [rsp+43Ch] [rbp-104h] BYREF
  _OWORD v169[6]; // [rsp+440h] [rbp-100h] BYREF
  __int64 v170; // [rsp+4A8h] [rbp-98h] BYREF
  __int64 v171; // [rsp+4B0h] [rbp-90h]
  __int64 v172; // [rsp+4B8h] [rbp-88h]
  _OWORD *v173; // [rsp+4C0h] [rbp-80h]
  char v174; // [rsp+4CFh] [rbp-71h] BYREF
  __int64 v175; // [rsp+4D0h] [rbp-70h]
  __int64 v176; // [rsp+4D8h] [rbp-68h] BYREF
  __int128 v177; // [rsp+4E0h] [rbp-60h]
  __int128 v178; // [rsp+4F0h] [rbp-50h] BYREF
  __int64 v179; // [rsp+500h] [rbp-40h]
  __int64 (__fastcall *v180)(); // [rsp+508h] [rbp-38h]
  char v181; // [rsp+514h] [rbp-2Ch] BYREF
  char v182; // [rsp+515h] [rbp-2Bh] BYREF
  unsigned __int8 v183; // [rsp+516h] [rbp-2Ah] BYREF
  char v184[41]; // [rsp+517h] [rbp-29h] BYREF

  v11 = a3;
  v175 = a2;
  v184[0] = a3;
  v182 = a4;
  v144 = a5;
  v145 = a6;
  v142 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v143 = v12;
  v15 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v12, v13, v14);
  v149 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v15,
           v16,
           12,
           0);
  v160 = v17;
  *(_QWORD *)&v163[0] = &v182;
  *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  *(_QWORD *)&v163[1] = &v144;
  *((_QWORD *)&v163[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v134, &unk_1017C7698, v163);
  LOBYTE(v161[0]) = v11;
  v18 = v135;
  v162[0] = v135;
  *(_QWORD *)&v163[0] = v161;
  *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&v163[1] = v162;
  *((_QWORD *)&v163[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v163);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v169);
  v173 = a1;
  if ( v134 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v134, 1);
  v138 = *a7;
  v139 = a7[1];
  v140 = a7[2];
  v141 = *(__m128i **)(a8 + 24);
  LOBYTE(v19) = 1;
  v20 = v163;
  while ( 1 )
  {
    v23 = (unsigned __int8)(v19 + 1);
    if ( (_BYTE)v19 == 3 )
      v23 = 3;
    v159 = v19;
    v183 = v19;
    v24 = v144;
    v25 = v145;
    v26 = (unsigned __int8)v184[0];
    v27 = v175;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v144,
      v145);
    v136 = std::time::Instant::now::hda76af2c3a449055(v27, v26, v28, v29, v30);
    v137 = v31;
    if ( v182 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v122, 3, 0, 1, 0);
      if ( LODWORD(v122[0]) != 11 )
        goto LABEL_68;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v122, 5, 0, 0, 0);
      if ( LODWORD(v122[0]) != 11 )
      {
LABEL_68:
        qmemcpy(v163, v122, sizeof(v163));
        *(_QWORD *)&v162[0] = 0;
        *((_QWORD *)&v162[0] + 1) = 1;
        *(_QWORD *)&v162[1] = 0;
        *(_QWORD *)&v169[1] = 1610612768;
        *(_QWORD *)&v169[0] = v162;
        *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v163,
                                v169) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v170,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v68 = v162[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v184[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v162[0] + 1),
          *(__int64 *)&v162[1]);
        if ( (_QWORD)v68 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1);
        v69 = std::time::Instant::elapsed::h457f209775ed485c(&v136);
        v162[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v69 + v70 / 0xF4240uLL;
        *(_QWORD *)&v169[0] = &v183;
        *((_QWORD *)&v169[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v169[1] = v162;
        *((_QWORD *)&v169[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v169[2] = v163;
        *((_QWORD *)&v169[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C7949, v169);
        LOBYTE(v178) = v184[0];
        v71 = *((_QWORD *)&v161[0] + 1);
        v128[0] = *((_QWORD *)&v161[0] + 1);
        v128[1] = *(_QWORD *)&v161[1];
        *(_QWORD *)&v169[0] = &v178;
        *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v169[1] = v128;
        *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C7632, v169);
        v67 = v173;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v162);
        if ( *(_QWORD *)&v161[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, *(_QWORD *)&v161[0], 1);
        v66 = v163;
LABEL_80:
        qmemcpy(v67, v66, 0x60u);
        return v67;
      }
    }
    v150 = v23;
    v125 = *(_OWORD *)&v122[5];
    v124 = *(_OWORD *)&v122[3];
    v123 = *(_OWORD *)&v122[1];
    v126 = v122[7];
    v181 = v122[7];
    v32 = std::time::Instant::elapsed::h457f209775ed485c(&v136);
    v169[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v32 + v33 / 0xF4240uLL;
    *(_QWORD *)&v163[0] = &v183;
    *((_QWORD *)&v163[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v163[1] = v169;
    *((_QWORD *)&v163[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v163[2] = &v181;
    *((_QWORD *)&v163[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v132, &unk_1017C76AC, v20);
    LOBYTE(v161[0]) = v184[0];
    v34 = v20;
    v35 = v133;
    v162[0] = v133;
    *(_QWORD *)&v163[0] = v161;
    *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v163[1] = v162;
    *((_QWORD *)&v163[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v36 = v34;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v34);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v169);
    if ( v132 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v132, 1);
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v24,
      v25);
    codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop::h8a1470d90b34391b(
      v36,
      v138,
      v139,
      v140,
      (__int64)"RouterOn rollbackauth-mode toggle re-entry/reasoning/effort",
      17,
      1,
      v181,
      0,
      v120);
    if ( LODWORD(v163[0]) == 11 )
    {
      v128[11] = *(_QWORD *)&v163[5];
      *(_OWORD *)&v128[9] = v163[4];
      *(_OWORD *)&v128[7] = v163[3];
      *(_OWORD *)&v128[5] = v163[2];
      *(_OWORD *)&v128[3] = v163[1];
      v128[2] = *((_QWORD *)&v163[0] + 1);
      v128[1] = 1;
      v128[0] = 11;
    }
    else
    {
      qmemcpy(v128, v36, sizeof(v128));
    }
    *(_QWORD *)&v163[3] = v122[7];
    v163[2] = *(_OWORD *)&v122[5];
    v163[1] = *(_OWORD *)&v122[3];
    v163[0] = *(_OWORD *)&v122[1];
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v121, (__int64)v36);
    qmemcpy(v36, v128, 0x60u);
    qmemcpy(v164, v121, sizeof(v164));
    if ( LODWORD(v163[0]) == 11 )
      break;
    if ( LODWORD(v164[0]) != 11 )
    {
      qmemcpy(v161, v128, sizeof(v161));
      qmemcpy(v162, v121, sizeof(v162));
      *(_QWORD *)&v169[0] = v161;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      *(_QWORD *)&v169[1] = v162;
      *((_QWORD *)&v169[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v157, &unk_1017C791E, v169);
      *((_QWORD *)&v169[0] + 1) = v157;
      v169[1] = v158;
      *(_QWORD *)&v169[0] = 10;
      v176 = 0;
      v177 = 1u;
      v179 = 1610612768;
      *(_QWORD *)&v178 = &v176;
      *((_QWORD *)&v178 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v169,
                              &v178) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v74 = v176;
      v75 = v177;
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        (void *)v177,
        *((__int64 *)&v177 + 1));
      if ( v74 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v74, 1);
      *(_QWORD *)&v178 = &v183;
      *((_QWORD *)&v178 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      v179 = (__int64)v169;
      v180 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v170, &unk_1017C7774, &v178);
      LOBYTE(v165) = v184[0];
      v76 = v171;
      v151 = v171;
      v152 = v172;
      *(_QWORD *)&v178 = &v165;
      *((_QWORD *)&v178 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v179 = (__int64)&v151;
      v180 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, &v178);
      v67 = v173;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, &v176);
      if ( v170 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v170, 1);
      qmemcpy(v67, v169, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v162);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v161);
      return v67;
    }
    qmemcpy(v162, v128, sizeof(v162));
    v50 = v164[1];
    v51 = BYTE4(v164[1]);
    v52 = std::time::Instant::now::hda76af2c3a449055(v163, &v129, v37, 0, v38);
    v47 = v52 == v149;
    v54 = v52 < v149;
    if ( v47 )
      v54 = v53 < v160;
    if ( v182 )
    {
LABEL_74:
      *(_QWORD *)&v161[0] = 0;
      *((_QWORD *)&v161[0] + 1) = 1;
      *(_QWORD *)&v161[1] = 0;
      *(_QWORD *)&v169[1] = 1610612768;
      *(_QWORD *)&v169[0] = v161;
      *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v162,
                              v169) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v72 = v161[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v161[0] + 1),
        *(__int64 *)&v161[1]);
      if ( (_QWORD)v72 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v72 + 1), v72, 1);
      *(_QWORD *)&v169[0] = &v183;
      *((_QWORD *)&v169[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v169[1] = v162;
      *((_QWORD *)&v169[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7774, v169);
      LOBYTE(v170) = v184[0];
      v73 = *((_QWORD *)&v178 + 1);
      v176 = *((_QWORD *)&v178 + 1);
      *(_QWORD *)&v177 = v179;
      *(_QWORD *)&v169[0] = &v170;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v169[1] = &v176;
      *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C7632, v169);
      v67 = v173;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v161);
      if ( (_QWORD)v178 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v178, 1);
      v66 = v162;
      goto LABEL_80;
    }
    if ( v50 )
    {
      if ( !v54 || v183 >= 3u )
        goto LABEL_74;
    }
    else if ( (v54 & v51 & (v183 < 3u)) == 0 )
    {
      goto LABEL_74;
    }
    *(_QWORD *)&v161[0] = 0;
    *((_QWORD *)&v161[0] + 1) = 1;
    *(_QWORD *)&v161[1] = 0;
    *(_QWORD *)&v169[1] = 1610612768;
    *(_QWORD *)&v169[0] = v161;
    *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v162,
                            v169) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v170,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v178 = v161[0];
    v179 = *(_QWORD *)&v161[1];
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v161[0] = v184;
      *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v161[1] = &v183;
      *((_QWORD *)&v161[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v161[2] = &v178;
      *((_QWORD *)&v161[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v169[3] = 2;
      *((_QWORD *)&v169[3] + 1) = &unk_101677721;
      *(_QWORD *)&v169[4] = 45;
      *(_QWORD *)&v169[5] = &unk_1017C78C2;
      *((_QWORD *)&v169[5] + 1) = v161;
      *(_QWORD *)&v169[0] = 0;
      *((_QWORD *)&v169[0] + 1) = &unk_101677721;
      v169[1] = 0x2Du;
      *(_QWORD *)&v169[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v169[2] + 1) = 35;
      *((_QWORD *)&v169[4] + 1) = 0xA800000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v170, v169);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *((void **)&v178 + 1),
      v179);
    *(_QWORD *)&v169[0] = &v183;
    *((_QWORD *)&v169[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v169[1] = &v178;
    *((_QWORD *)&v169[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v129, &unk_1017C7774, v169);
    LOBYTE(v170) = v184[0];
    v55 = v130;
    v176 = v130;
    *(_QWORD *)&v177 = v131;
    *(_QWORD *)&v169[0] = &v170;
    *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v169[1] = &v176;
    *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C7632, v169);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "reconcile_retrystop_failed",
      15,
      v161);
    if ( v129 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v129, 1);
    v56 = v178;
    if ( (_QWORD)v178 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v178 + 1), v178, 1);
    v21 = v162;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v162);
    v20 = v36;
    v22 = v150;
    if ( (_BYTE)v159 == 3 )
    {
LABEL_60:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v56);
      v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
      if ( !v62 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
      v63 = v62;
      memcpy(v62, &unk_101677756, 0x6Du);
      *((_QWORD *)&v163[0] + 1) = 109;
      *(_QWORD *)&v163[1] = v63;
      *((_QWORD *)&v163[1] + 1) = 109;
      *(_QWORD *)&v163[0] = 10;
      *(_QWORD *)&v162[0] = 0;
      *((_QWORD *)&v162[0] + 1) = 1;
      *(_QWORD *)&v162[1] = 0;
      *(_QWORD *)&v169[1] = 1610612768;
      *(_QWORD *)&v169[0] = v162;
      *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v163,
                              v169) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v64 = v162[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v162[0] + 1),
        *(__int64 *)&v162[1]);
      if ( (_QWORD)v64 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v64 + 1), v64, 1);
      *(_QWORD *)&v162[0] = 0;
      *((_QWORD *)&v162[0] + 1) = 1;
      *(_QWORD *)&v162[1] = 0;
      *(_QWORD *)&v169[1] = 1610612768;
      *(_QWORD *)&v169[0] = v162;
      *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v163,
                              v169) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v65 = v162[0];
      LOBYTE(v128[0]) = v184[0];
      v161[0] = *(_OWORD *)((char *)v162 + 8);
      *(_QWORD *)&v169[0] = v128;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v169[1] = v161;
      *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C7632, v169);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        15,
        v162);
      if ( (_QWORD)v65 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v65 + 1), v65, 1);
      v66 = v163;
      v67 = v173;
      goto LABEL_80;
    }
LABEL_5:
    v19 = v22;
    if ( (unsigned __int8)v22 > 3u )
      goto LABEL_60;
  }
  if ( LODWORD(v164[0]) != 11 )
  {
    qmemcpy(v169, v121, sizeof(v169));
    *(_QWORD *)&v161[0] = 0;
    *((_QWORD *)&v161[0] + 1) = 1;
    *(_QWORD *)&v161[1] = 0;
    *(_QWORD *)&v162[1] = 1610612768;
    *(_QWORD *)&v162[0] = v161;
    *((_QWORD *)&v162[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v169,
                            v162) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v170,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v77 = v161[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      *((void **)&v161[0] + 1),
      *(__int64 *)&v161[1]);
    if ( (_QWORD)v77 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v77 + 1), v77, 1);
    *(_QWORD *)&v162[0] = &v183;
    *((_QWORD *)&v162[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v162[1] = v169;
    *((_QWORD *)&v162[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C7774, v162);
    LOBYTE(v170) = v184[0];
    v78 = *((_QWORD *)&v178 + 1);
    v176 = *((_QWORD *)&v178 + 1);
    *(_QWORD *)&v177 = v179;
    *(_QWORD *)&v162[0] = &v170;
    *((_QWORD *)&v162[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v162[1] = &v176;
    *((_QWORD *)&v162[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C7632, v162);
    v79 = v173;
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "settle_failedreconcile_retrystop_failed",
      13,
      v161);
    if ( (_QWORD)v178 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v178, 1);
    qmemcpy(v79, v169, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c((char *)v163 + 8);
    v81 = *((_QWORD *)&v163[5] + 1);
    v80 = *(_QWORD *)&v163[5];
    if ( *((_QWORD *)&v163[5] + 1) )
    {
      v82 = (_QWORD *)(*(_QWORD *)&v163[5] + 8LL);
      do
      {
        v83 = *(v82 - 1);
        if ( v83 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v82, v83, 1);
        v82 += 3;
        --v81;
      }
      while ( v81 );
    }
    v84 = *((_QWORD *)&v163[4] + 1);
    v67 = v173;
    if ( !*((_QWORD *)&v163[4] + 1) )
      return v67;
    goto LABEL_160;
  }
  qmemcpy(v161, &v128[1], 0x58u);
  v167 = v164[1];
  v168 = BYTE4(v164[1]);
  codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
    &v146,
    v141,
    a9,
    1,
    (LODWORD(v164[1]) == 0) & (BYTE4(v164[1]) ^ 1));
  v39 = v148;
  if ( !v148 )
  {
    v67 = v173;
    if ( (v167 || (v168 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
    {
      *(_QWORD *)&v169[0] = v184;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v169[1] = &v183;
      *((_QWORD *)&v169[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v169[2] = &v167;
      *((_QWORD *)&v169[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&v169[3] = &v168;
      *((_QWORD *)&v169[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      *(_QWORD *)&v163[3] = 2;
      *((_QWORD *)&v163[3] + 1) = &unk_101677721;
      *(_QWORD *)&v163[4] = 45;
      *(_QWORD *)&v163[5] = &unk_1017C76CE;
      *((_QWORD *)&v163[5] + 1) = v169;
      *(_QWORD *)&v163[0] = 0;
      *((_QWORD *)&v163[0] + 1) = &unk_101677721;
      v163[1] = 0x2Du;
      *(_QWORD *)&v163[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v163[2] + 1) = 35;
      *((_QWORD *)&v163[4] + 1) = 0xDA00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v170, v163);
    }
    codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
      v162,
      a10,
      (__int64)v161,
      *a11);
    if ( LODWORD(v162[0]) != 11 )
    {
      qmemcpy(v169, v162, sizeof(v169));
      *(_QWORD *)&v163[0] = v184;
      *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v163[1] = v169;
      *((_QWORD *)&v163[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v157, &unk_1017C7740, v163);
      *((_QWORD *)&v163[0] + 1) = v157;
      v163[1] = v158;
      *(_QWORD *)&v163[0] = 10;
      v176 = 0;
      v177 = 1u;
      v179 = 1610612768;
      *(_QWORD *)&v178 = &v176;
      *((_QWORD *)&v178 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v163,
                              &v178) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v103 = v176;
      v104 = v177;
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        (void *)v177,
        *((__int64 *)&v177 + 1));
      if ( v103 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1);
      *(_QWORD *)&v178 = &v183;
      *((_QWORD *)&v178 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      v179 = (__int64)v163;
      v180 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v170, &unk_1017C7774, &v178);
      LOBYTE(v165) = v184[0];
      v105 = v171;
      v151 = v171;
      v152 = v172;
      *(_QWORD *)&v178 = &v165;
      *((_QWORD *)&v178 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      v179 = (__int64)&v151;
      v180 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, &v178);
      v67 = v173;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        13,
        &v176);
      if ( v170 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v170, 1);
      qmemcpy(v67, v163, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v169);
      v106 = 1;
      v40 = v147;
      v107 = 1;
      goto LABEL_149;
    }
    v85 = *(_QWORD *)&v161[5];
    if ( *(_QWORD *)&v161[5] )
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(
        v163,
        *((_QWORD *)&v161[4] + 1),
        *(_QWORD *)&v161[5],
        &unk_10167774E,
        3);
      v86 = v163[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        *((void **)&v163[0] + 1),
        *(__int64 *)&v163[1]);
      if ( (_QWORD)v86 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v86 + 1), v86, 1);
      v87 = std::time::Instant::elapsed::h457f209775ed485c(&v142);
      v169[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v87 + v88 / 0xF4240uLL;
      *(_QWORD *)&v178 = v85;
      *(_QWORD *)&v163[0] = &v183;
      *((_QWORD *)&v163[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v163[1] = v169;
      *((_QWORD *)&v163[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      *(_QWORD *)&v163[2] = &v178;
      *((_QWORD *)&v163[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C77A1, v163);
      LOBYTE(v176) = v184[0];
      v89 = *((_QWORD *)&v162[0] + 1);
      v178 = *(_OWORD *)((char *)v162 + 8);
      *(_QWORD *)&v163[0] = &v176;
      *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v163[1] = &v178;
      *((_QWORD *)&v163[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v163);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        v169);
      if ( *(_QWORD *)&v162[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, *(_QWORD *)&v162[0], 1);
      v163[3] = v161[3];
      v163[2] = v161[2];
      v163[1] = v161[1];
      v163[0] = v161[0];
      v163[4] = v161[4];
      *(_QWORD *)&v163[5] = *(_QWORD *)&v161[5];
      qmemcpy((char *)v67 + 8, v163, 0x58u);
    }
    else
    {
      codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v175);
      v118 = std::time::Instant::elapsed::h457f209775ed485c(&v142);
      v162[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v118 + v119 / 0xF4240uLL;
      *(_QWORD *)&v163[0] = &v183;
      *((_QWORD *)&v163[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v163[1] = v162;
      *((_QWORD *)&v163[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7788, v163);
      codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
        v184[0],
        (__int64)"stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
        6,
        v169);
      v67[4] = v161[3];
      v67[3] = v161[2];
      v67[2] = v161[1];
      v67[1] = v161[0];
      *((_QWORD *)v67 + 1) = 2;
    }
    *(_QWORD *)v67 = 11;
    if ( v146 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, 32 * v146, 8);
    if ( v85 )
      return v67;
LABEL_154:
    v80 = *((_QWORD *)&v161[4] + 1);
    v114 = *(_QWORD *)&v161[5];
    if ( *(_QWORD *)&v161[5] )
    {
      v115 = (_QWORD *)(*((_QWORD *)&v161[4] + 1) + 8LL);
      do
      {
        v116 = *(v115 - 1);
        if ( v116 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v115, v116, 1);
        v115 += 3;
        --v114;
      }
      while ( v114 );
    }
    v84 = *(_QWORD *)&v161[4];
    v67 = v173;
    if ( !*(_QWORD *)&v161[4] )
      return v67;
LABEL_160:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 24 * v84, 8);
    return v67;
  }
  v40 = v147;
  v41 = v147;
  codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v154, v147, v148);
  v45 = std::time::Instant::now::hda76af2c3a449055(&v154, v41, v42, v43, v44);
  v47 = v45 == v149;
  v48 = v45 < v149;
  if ( v47 )
    v48 = v46 < v160;
  v49 = v182;
  if ( !v182 )
  {
    if ( v167 )
    {
      if ( !v48 || v183 >= 3u )
        goto LABEL_123;
    }
    else if ( (v48 & v168 & (v183 < 3u)) == 0 )
    {
LABEL_123:
      *(_QWORD *)&v163[0] = v184;
      *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v163[1] = &v154;
      *((_QWORD *)&v163[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C77CB, v163);
      *((_QWORD *)&v163[0] + 1) = v176;
      v163[1] = v177;
      *(_QWORD *)&v163[0] = 10;
      *(_QWORD *)&v162[0] = 0;
      *((_QWORD *)&v162[0] + 1) = 1;
      *(_QWORD *)&v162[1] = 0;
      *(_QWORD *)&v169[1] = 1610612768;
      *(_QWORD *)&v169[0] = v162;
      *((_QWORD *)&v169[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v163,
                              v169) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v170,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v101 = v162[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v184[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v162[0] + 1),
        *(__int64 *)&v162[1]);
      if ( (_QWORD)v101 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v101 + 1), v101, 1);
      *(_QWORD *)&v162[0] = v39;
      *(_QWORD *)&v169[0] = &v183;
      *((_QWORD *)&v169[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v169[1] = v162;
      *((_QWORD *)&v169[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v178, &unk_1017C77EC, v169);
      LOBYTE(v157) = v184[0];
      v102 = *((_QWORD *)&v178 + 1);
      v170 = *((_QWORD *)&v178 + 1);
      v171 = v179;
      *(_QWORD *)&v169[0] = &v157;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v169[1] = &v170;
      *((_QWORD *)&v169[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C7632, v169);
      v67 = v173;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v162);
      if ( (_QWORD)v178 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v178, 1);
      qmemcpy(v67, v163, 0x60u);
      LOBYTE(v159) = 1;
      goto LABEL_142;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v169[0] = v184;
      *((_QWORD *)&v169[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v169[1] = &v183;
      *((_QWORD *)&v169[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v169[2] = &v154;
      *((_QWORD *)&v169[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v163[3] = 2;
      *((_QWORD *)&v163[3] + 1) = &unk_101677721;
      *(_QWORD *)&v163[4] = 45;
      *(_QWORD *)&v163[5] = &unk_1017C7865;
      *((_QWORD *)&v163[5] + 1) = v169;
      *(_QWORD *)&v163[0] = 0;
      *((_QWORD *)&v163[0] + 1) = &unk_101677721;
      v163[1] = 0x2Du;
      *(_QWORD *)&v163[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v163[2] + 1) = 35;
      *((_QWORD *)&v163[4] + 1) = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v170, v36);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v155,
      v156);
    if ( v154 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1);
    v57 = (_QWORD *)(v40 + 8);
    do
    {
      v58 = *(v57 - 1);
      if ( v58 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v58, 1);
      v57 += 4;
      --v39;
    }
    while ( v39 );
    v56 = v146;
    if ( v146 )
    {
      v56 = 32 * v146;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v146, 8);
    }
    v21 = v161;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v161);
    v59 = *((_OWORD **)&v161[4] + 1);
    v60 = *(_QWORD *)&v161[5];
    if ( *(_QWORD *)&v161[5] )
    {
      v61 = (_QWORD *)(*((_QWORD *)&v161[4] + 1) + 8LL);
      do
      {
        v56 = *(v61 - 1);
        if ( v56 )
        {
          v21 = (_OWORD *)*v61;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v61, v56, 1);
        }
        v61 += 3;
        --v60;
      }
      while ( v60 );
    }
    if ( *(_QWORD *)&v161[4] )
    {
      v56 = 24LL * *(_QWORD *)&v161[4];
      v21 = v59;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 24LL * *(_QWORD *)&v161[4], 8);
    }
    v20 = v36;
    v22 = v150;
    if ( (_BYTE)v159 == 3 )
      goto LABEL_60;
    goto LABEL_5;
  }
  v166 = v128[11];
  v165 = *(_OWORD *)&v128[9];
  *(_QWORD *)&v163[0] = &v154;
  *((_QWORD *)&v163[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v151, &unk_1017C7805, v163);
  v90 = v166;
  if ( v166 == (_QWORD)v165 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v165);
  v91 = *((_QWORD *)&v165 + 1);
  v92 = 3 * v90;
  *(_QWORD *)(*((_QWORD *)&v165 + 1) + 8 * v92 + 16) = v153;
  v93 = v151;
  *(_QWORD *)(v91 + 8 * v92 + 8) = v152;
  *(_QWORD *)(v91 + 8 * v92) = v93;
  v166 = v90 + 1;
  codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
    v162,
    a10,
    (__int64)&v128[1],
    *a11);
  LOBYTE(v159) = *(_QWORD *)&v162[0] != 11;
  if ( *(_QWORD *)&v162[0] == 11 )
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v163, *((_QWORD *)&v165 + 1), v166, &unk_10167774E, 3);
    v108 = v163[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *((void **)&v163[0] + 1),
      *(__int64 *)&v163[1]);
    if ( (_QWORD)v108 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v108 + 1), v108, 1);
    v109 = std::time::Instant::elapsed::h457f209775ed485c(&v142);
    v67 = v173;
    v169[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v109 + v110 / 0xF4240uLL;
    *(_QWORD *)&v178 = v166;
    *(_QWORD *)&v163[0] = &v183;
    *((_QWORD *)&v163[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v163[1] = v169;
    *((_QWORD *)&v163[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v163[2] = &v178;
    *((_QWORD *)&v163[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C77A1, v163);
    LOBYTE(v176) = v184[0];
    v111 = *((_QWORD *)&v162[0] + 1);
    v178 = *(_OWORD *)((char *)v162 + 8);
    *(_QWORD *)&v163[0] = &v176;
    *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v163[1] = &v178;
    *((_QWORD *)&v163[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v169, &unk_1017C7632, v163);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v169);
    if ( *(_QWORD *)&v162[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, *(_QWORD *)&v162[0], 1);
    v163[3] = v161[3];
    v163[2] = v161[2];
    v163[1] = v161[1];
    v163[0] = v161[0];
    v163[4] = v165;
    *(_QWORD *)&v163[5] = v166;
    qmemcpy((char *)v67 + 8, v163, 0x58u);
    *(_QWORD *)v67 = 11;
  }
  else
  {
    qmemcpy(v169, v162, sizeof(v169));
    *(_QWORD *)&v163[0] = v184;
    *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v163[1] = v169;
    *((_QWORD *)&v163[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v157, &unk_1017C7842, v163);
    *((_QWORD *)&v163[0] + 1) = v157;
    v163[1] = v158;
    *(_QWORD *)&v163[0] = 10;
    v176 = 0;
    v177 = 1u;
    v179 = 1610612768;
    *(_QWORD *)&v178 = &v176;
    *((_QWORD *)&v178 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v163,
                            &v178) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v170,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v94 = v176;
    v95 = v177;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v184[0],
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      (void *)v177,
      *((__int64 *)&v177 + 1));
    if ( v94 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94, 1);
    *(_QWORD *)&v178 = &v183;
    *((_QWORD *)&v178 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    v179 = (__int64)v163;
    v180 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v170, &unk_1017C7774, &v178);
    v174 = v184[0];
    v96 = v171;
    v127[0] = v171;
    v127[1] = v172;
    *(_QWORD *)&v178 = &v174;
    *((_QWORD *)&v178 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    v179 = (__int64)v127;
    v180 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, &v178);
    v97 = v173;
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      &v176);
    if ( v170 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v170, 1);
    qmemcpy(v97, v163, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v169);
    v98 = v166;
    if ( v166 )
    {
      v99 = (_QWORD *)(*((_QWORD *)&v165 + 1) + 8LL);
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
    v67 = v173;
    if ( (_QWORD)v165 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v165 + 1), 24 * v165, 8);
  }
LABEL_142:
  if ( v154 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1);
  v106 = v49 ^ 1;
  v112 = (_QWORD *)(v40 + 8);
  do
  {
    v113 = *(v112 - 1);
    if ( v113 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v112, v113, 1);
    v112 += 4;
    --v39;
  }
  while ( v39 );
  v107 = v159;
LABEL_149:
  if ( v146 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v146, 8);
  if ( v107 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v161);
  if ( v106 )
    goto LABEL_154;
  return v67;
}
