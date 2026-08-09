// __ZN13codexmate_lib4core5relay17router_transition3run @ 0x100908300 | 基线 same-set
// [FULL hexrays]

_OWORD *__fastcall codexmate_lib::core::relay::router_transition::run::h0a616f87cf74673c(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        char *a10)
{
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // r14
  char v18; // r12
  int v19; // ecx
  void *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  char v33; // bl
  char v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r15
  int v39; // edx
  int v40; // r14d
  __int64 v41; // rax
  unsigned __int8 v42; // r13
  unsigned __int8 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned int v53; // edx
  bool v54; // zf
  bool v55; // al
  char v56; // r13
  int v57; // r15d
  unsigned __int8 v58; // r14
  __int64 v59; // rax
  unsigned int v60; // edx
  bool v61; // al
  __int64 v62; // r14
  __int64 v63; // rsi
  _OWORD *v64; // rdi
  _QWORD *v65; // r13
  __int64 v66; // rsi
  _OWORD *v67; // r14
  __int64 v68; // r15
  _QWORD *v69; // r13
  void *v70; // rax
  void *v71; // rbx
  char v72; // al
  _OWORD *v73; // r12
  __int128 v74; // kr10_16
  __int128 v75; // kr20_16
  __int64 v76; // rdi
  __int64 v77; // rsi
  char v78; // al
  __int128 v79; // kr30_16
  __int64 v80; // rax
  unsigned int v81; // edx
  __int64 v82; // r14
  _OWORD *v83; // rsi
  char v84; // al
  __int128 v85; // kr50_16
  __int64 v86; // r14
  __int64 v87; // r14
  __int64 v88; // r15
  __int64 v89; // r14
  char v90; // al
  __int128 v91; // kr60_16
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // r14
  _QWORD *v95; // r15
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rbx
  __int128 v99; // kr80_16
  __int64 v100; // rax
  unsigned int v101; // edx
  __int64 v102; // r14
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // r12
  __int64 v110; // rbx
  _QWORD *v111; // r12
  __int64 v112; // rsi
  __int128 v113; // krA0_16
  __int64 v114; // r12
  __int64 v115; // r14
  __int64 v116; // r15
  __int64 v117; // r14
  char v118; // r13
  char v119; // bl
  __int128 v120; // krB0_16
  __int64 v121; // rax
  unsigned int v122; // edx
  __int64 v123; // r12
  _QWORD *v124; // rbx
  __int64 v125; // rsi
  __int64 v126; // r14
  _QWORD *v127; // r15
  __int64 v128; // rsi
  __int64 v130; // rax
  unsigned int v131; // edx
  __int64 v132; // [rsp+8h] [rbp-578h]
  __int64 v133; // [rsp+18h] [rbp-568h]
  _QWORD v134[12]; // [rsp+28h] [rbp-558h] BYREF
  __int64 v135[12]; // [rsp+88h] [rbp-4F8h] BYREF
  _QWORD v136[12]; // [rsp+E8h] [rbp-498h] BYREF
  _QWORD v137[2]; // [rsp+148h] [rbp-438h] BYREF
  __int64 v138; // [rsp+158h] [rbp-428h] BYREF
  __int64 v139; // [rsp+160h] [rbp-420h]
  __int64 v140; // [rsp+168h] [rbp-418h]
  __int64 v141; // [rsp+170h] [rbp-410h] BYREF
  __int128 v142; // [rsp+178h] [rbp-408h]
  __int64 v143; // [rsp+188h] [rbp-3F8h] BYREF
  __int128 v144; // [rsp+190h] [rbp-3F0h]
  __int64 v145; // [rsp+1A0h] [rbp-3E0h] BYREF
  int v146; // [rsp+1A8h] [rbp-3D8h]
  __int64 v147; // [rsp+1B0h] [rbp-3D0h]
  __int64 v148; // [rsp+1B8h] [rbp-3C8h]
  const __m128i *v149; // [rsp+1C0h] [rbp-3C0h]
  unsigned __int8 *v150; // [rsp+1C8h] [rbp-3B8h]
  __int128 v151; // [rsp+1D0h] [rbp-3B0h]
  __int128 v152; // [rsp+1E0h] [rbp-3A0h]
  __int128 v153; // [rsp+1F0h] [rbp-390h]
  __int64 v154; // [rsp+200h] [rbp-380h]
  __int64 v155; // [rsp+208h] [rbp-378h] BYREF
  int v156; // [rsp+210h] [rbp-370h]
  void *v157; // [rsp+218h] [rbp-368h] BYREF
  __int64 v158; // [rsp+220h] [rbp-360h]
  __int64 v159; // [rsp+228h] [rbp-358h] BYREF
  __int64 v160; // [rsp+230h] [rbp-350h]
  __int64 v161; // [rsp+238h] [rbp-348h]
  _BYTE *v162; // [rsp+240h] [rbp-340h]
  unsigned __int8 *v163; // [rsp+248h] [rbp-338h]
  __int64 v164; // [rsp+250h] [rbp-330h]
  __int64 v165; // [rsp+258h] [rbp-328h]
  __int64 v166; // [rsp+260h] [rbp-320h]
  __int64 v167; // [rsp+268h] [rbp-318h] BYREF
  __int64 v168; // [rsp+270h] [rbp-310h]
  __int64 v169; // [rsp+278h] [rbp-308h]
  __int64 v170; // [rsp+280h] [rbp-300h] BYREF
  void *v171; // [rsp+288h] [rbp-2F8h]
  __int64 v172; // [rsp+290h] [rbp-2F0h]
  _QWORD *v173; // [rsp+298h] [rbp-2E8h]
  __int64 v174; // [rsp+2A0h] [rbp-2E0h]
  unsigned int v175; // [rsp+2ACh] [rbp-2D4h]
  __int64 v176; // [rsp+2B0h] [rbp-2D0h] BYREF
  __int128 v177; // [rsp+2B8h] [rbp-2C8h]
  __int128 v178; // [rsp+2C8h] [rbp-2B8h] BYREF
  __int64 v179; // [rsp+2D8h] [rbp-2A8h]
  int v180; // [rsp+2E0h] [rbp-2A0h] BYREF
  unsigned __int8 v181; // [rsp+2E4h] [rbp-29Ch] BYREF
  _OWORD v182[6]; // [rsp+2E8h] [rbp-298h] BYREF
  _QWORD v183[12]; // [rsp+348h] [rbp-238h] BYREF
  int v184; // [rsp+3ACh] [rbp-1D4h]
  _OWORD v185[6]; // [rsp+3B0h] [rbp-1D0h] BYREF
  _OWORD v186[6]; // [rsp+410h] [rbp-170h] BYREF
  char *v187; // [rsp+470h] [rbp-110h]
  __int64 v188; // [rsp+478h] [rbp-108h] BYREF
  __int64 v189; // [rsp+480h] [rbp-100h]
  __int64 v190; // [rsp+488h] [rbp-F8h]
  _OWORD v191[6]; // [rsp+490h] [rbp-F0h] BYREF
  char v192; // [rsp+4F7h] [rbp-89h] BYREF
  __int64 v193; // [rsp+4F8h] [rbp-88h]
  __int128 v194; // [rsp+500h] [rbp-80h] BYREF
  __int128 v195; // [rsp+510h] [rbp-70h] BYREF
  __int128 v196; // [rsp+520h] [rbp-60h]
  __int128 v197; // [rsp+530h] [rbp-50h] BYREF
  __int128 v198; // [rsp+540h] [rbp-40h]
  char v199; // [rsp+554h] [rbp-2Ch] BYREF
  char v200; // [rsp+555h] [rbp-2Bh] BYREF
  char v201; // [rsp+556h] [rbp-2Ah] BYREF
  char v202[41]; // [rsp+557h] [rbp-29h] BYREF

  v10 = a3;
  v193 = a2;
  v202[0] = a3;
  v200 = a4;
  v157 = a5;
  v158 = a6;
  v155 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v156 = v11;
  v14 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v11, v12, v13);
  v164 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v14,
           v15,
           12,
           0);
  v175 = v16;
  *(_QWORD *)&v182[0] = &v200;
  *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  *(_QWORD *)&v182[1] = &v157;
  *((_QWORD *)&v182[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v143, &unk_1017C7698, v182);
  LOBYTE(v186[0]) = v10;
  v17 = v144;
  v185[0] = v144;
  *(_QWORD *)&v182[0] = v186;
  *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&v182[1] = v185;
  *((_QWORD *)&v182[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v191, &unk_1017C7632, v182);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v191);
  v187 = a1;
  if ( v143 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v143, 1);
  v147 = *a7;
  v162 = (_BYTE *)a7[1];
  v173 = (_QWORD *)a7[2];
  v174 = a7[3];
  v165 = a7[5];
  v166 = a7[4];
  v163 = (unsigned __int8 *)a7[6];
  v148 = *a8;
  v149 = (const __m128i *)a8[1];
  v150 = (unsigned __int8 *)a8[2];
  v18 = 1;
  while ( 1 )
  {
    v19 = (unsigned __int8)(v18 + 1);
    if ( v18 == 3 )
      v19 = 3;
    v184 = v19;
    v201 = v18;
    v20 = v157;
    v21 = v158;
    v22 = (unsigned __int8)v202[0];
    v23 = v193;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v157,
      v158);
    v145 = std::time::Instant::now::hda76af2c3a449055(v23, v22, v24, v25, v26);
    v146 = v27;
    if ( v200 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v135, 3, 0, 1, 0);
      if ( LODWORD(v135[0]) != 11 )
        goto LABEL_80;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v135, 5, 0, 0, 0);
      if ( LODWORD(v135[0]) != 11 )
      {
LABEL_80:
        qmemcpy(v182, v135, sizeof(v182));
        *(_QWORD *)&v185[0] = 0;
        *((_QWORD *)&v185[0] + 1) = 1;
        *(_QWORD *)&v185[1] = 0;
        *(_QWORD *)&v191[1] = 1610612768;
        *(_QWORD *)&v191[0] = v185;
        *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        v78 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                v182,
                v191);
        v73 = v187;
        if ( v78 )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v188,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v79 = v185[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v193,
          (unsigned __int8)v202[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v185[0] + 1),
          *(__int64 *)&v185[1]);
        if ( (_QWORD)v79 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v79 + 1), v79, 1);
        v80 = std::time::Instant::elapsed::h457f209775ed485c(&v145);
        v185[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v80 + v81 / 0xF4240uLL;
        *(_QWORD *)&v191[0] = &v201;
        *((_QWORD *)&v191[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v191[1] = v185;
        *((_QWORD *)&v191[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v191[2] = v182;
        *((_QWORD *)&v191[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017C7949, v191);
        LOBYTE(v194) = v202[0];
        v82 = *((_QWORD *)&v186[0] + 1);
        v136[0] = *((_QWORD *)&v186[0] + 1);
        v136[1] = *(_QWORD *)&v186[1];
        *(_QWORD *)&v191[0] = &v194;
        *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v191[1] = v136;
        *((_QWORD *)&v191[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C7632, v191);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v185);
        v77 = *(_QWORD *)&v186[0];
        if ( !*(_QWORD *)&v186[0] )
          goto LABEL_86;
        v76 = v82;
LABEL_85:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v77, 1);
LABEL_86:
        v83 = v182;
LABEL_93:
        qmemcpy(v73, v83, 0x60u);
        return v73;
      }
    }
    v153 = *(_OWORD *)&v135[5];
    v152 = *(_OWORD *)&v135[3];
    v151 = *(_OWORD *)&v135[1];
    v154 = v135[7];
    v199 = v135[7];
    v28 = std::time::Instant::elapsed::h457f209775ed485c(&v145);
    v191[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v28 + v29 / 0xF4240uLL;
    *(_QWORD *)&v182[0] = &v201;
    *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v182[1] = v191;
    *((_QWORD *)&v182[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v182[2] = &v199;
    *((_QWORD *)&v182[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v141, &unk_1017C76AC, v182);
    LOBYTE(v186[0]) = v202[0];
    v30 = v142;
    v185[0] = v142;
    *(_QWORD *)&v182[0] = v186;
    *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v182[1] = v185;
    *((_QWORD *)&v182[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v191, &unk_1017C7632, v182);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v191);
    if ( v141 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v141, 1);
    v31 = (unsigned __int8)v202[0];
    v32 = v193;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v20,
      v21);
    v33 = v201;
    v34 = v199;
    LOBYTE(v176) = v199;
    BYTE1(v176) = v201;
    v38 = std::time::Instant::now::hda76af2c3a449055(v32, v31, v35, v36, v37);
    v40 = v39;
    if ( v33 == 1 )
    {
      v188 = v147;
      if ( *v162 )
      {
        codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1(
          v182,
          v174,
          v173,
          v166,
          (__int64)"togglecodex-reentryreconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackaut"
                   "h-mode toggle re-entry/reasoning/effort",
          6,
          &v188,
          (__int64)&unk_10196DBA8);
        v41 = *(_QWORD *)&v182[0];
        v186[0] = *(_OWORD *)((char *)v182 + 8);
        v186[1] = *(_OWORD *)((char *)&v182[1] + 8);
        v186[2] = *(_OWORD *)((char *)&v182[2] + 8);
        *(_QWORD *)&v186[3] = *((_QWORD *)&v182[3] + 1);
        if ( *(_QWORD *)&v182[0] == 11 )
          goto LABEL_18;
LABEL_24:
        *(_QWORD *)&v185[5] = *((_QWORD *)&v182[5] + 1);
        v185[4] = *(_OWORD *)((char *)&v182[4] + 8);
        *((_QWORD *)&v185[3] + 1) = *(_QWORD *)&v182[4];
        v185[0] = v186[0];
        v185[1] = v186[1];
        v185[2] = v186[2];
        *(_QWORD *)&v185[3] = *(_QWORD *)&v186[3];
        *(_QWORD *)&v191[0] = v41;
        qmemcpy((char *)v191 + 8, v185, 0x58u);
        if ( (_DWORD)v41 != 11 )
          goto LABEL_23;
        goto LABEL_27;
      }
      codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop::h8a1470d90b34391b(
        v182,
        (__int64)v173,
        v174,
        v165,
        (__int64)"togglecodex-reentryreconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-"
                 "mode toggle re-entry/reasoning/effort",
        6,
        0,
        v34,
        (__int64)&v188,
        (__int64)&unk_10196DBA8);
    }
    else
    {
      if ( *v162 )
      {
        codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1(
          v182,
          v174,
          v173,
          v166,
          (__int64)"codex-reentryreconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort",
          13,
          nullptr,
          v132);
        v41 = *(_QWORD *)&v182[0];
        v186[0] = *(_OWORD *)((char *)v182 + 8);
        v186[1] = *(_OWORD *)((char *)&v182[1] + 8);
        v186[2] = *(_OWORD *)((char *)&v182[2] + 8);
        *(_QWORD *)&v186[3] = *((_QWORD *)&v182[3] + 1);
        if ( *(_QWORD *)&v182[0] == 11 )
        {
LABEL_18:
          v194 = v186[0];
          v195 = v186[1];
          v196 = v186[2];
          *(_QWORD *)&v197 = *(_QWORD *)&v186[3];
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(
            (char *)&v197 + 8,
            (char *)&v195 + 8);
          v182[3] = v197;
          v182[2] = v196;
          v182[1] = v195;
          v182[0] = v194;
          v182[4] = v198;
          qmemcpy(v185, v182, 0x50u);
          v191[5] = v185[4];
          v191[4] = v185[3];
          v191[3] = v185[2];
          v191[2] = v185[1];
          v191[1] = v185[0];
          v191[0] = 0xBu;
          goto LABEL_27;
        }
        goto LABEL_24;
      }
      codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop::h8a1470d90b34391b(
        v182,
        (__int64)v173,
        v174,
        v165,
        (__int64)"codex-reentryreconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort",
        13,
        0,
        v34,
        0,
        v133);
    }
    if ( LODWORD(v182[0]) == 11 )
    {
      v191[5] = *(_OWORD *)((char *)&v182[4] + 8);
      v191[4] = *(_OWORD *)((char *)&v182[3] + 8);
      v191[3] = *(_OWORD *)((char *)&v182[2] + 8);
      v191[2] = *(_OWORD *)((char *)&v182[1] + 8);
      v191[1] = *(_OWORD *)((char *)v182 + 8);
      *((_QWORD *)&v191[0] + 1) = 1;
      *(_QWORD *)&v191[0] = 11;
    }
    else
    {
      qmemcpy(v191, v182, sizeof(v191));
      if ( LODWORD(v191[0]) != 11 )
      {
LABEL_23:
        *(_QWORD *)&v186[0] = v191;
        v42 = *v163;
        *(_QWORD *)&v182[0] = (char *)&v176 + 1;
        *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v182[1] = &v176;
        *((_QWORD *)&v182[1] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
        *(_QWORD *)&v182[2] = v186;
        *((_QWORD *)&v182[2] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h601754f58e6a9fd5;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C79D8, v182);
        codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731(
          v42,
          (__int64)"reconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort",
          9,
          v38,
          v40,
          v185);
        goto LABEL_28;
      }
    }
LABEL_27:
    v43 = *v163;
    *(_QWORD *)&v194 = *(_QWORD *)&v191[2];
    *(_QWORD *)&v186[0] = *((_QWORD *)&v191[5] + 1);
    *(_QWORD *)&v182[0] = (char *)&v176 + 1;
    *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v182[1] = &v176;
    *((_QWORD *)&v182[1] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    *(_QWORD *)&v182[2] = &v194;
    *((_QWORD *)&v182[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    *(_QWORD *)&v182[3] = v186;
    *((_QWORD *)&v182[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C7999, v182);
    codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731(
      v43,
      (__int64)"reconcileNativeOff compensationNativeOff compensation re-entryRouterOn rollbackauth-mode toggle re-entry/reasoning/effort",
      9,
      v38,
      v40,
      v185);
LABEL_28:
    qmemcpy(v136, v191, sizeof(v136));
    *(_QWORD *)&v182[3] = v154;
    v182[2] = v153;
    v182[1] = v152;
    v182[0] = v151;
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v134, (__int64)v182);
    qmemcpy(v182, v136, sizeof(v182));
    qmemcpy(v183, v134, sizeof(v183));
    if ( LODWORD(v182[0]) != 11 )
    {
      if ( LODWORD(v183[0]) != 11 )
      {
        qmemcpy(v186, v136, sizeof(v186));
        qmemcpy(v185, v134, sizeof(v185));
        *(_QWORD *)&v191[0] = v186;
        *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v191[1] = v185;
        *((_QWORD *)&v191[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C791E, v191);
        *((_QWORD *)&v191[0] + 1) = v176;
        v191[1] = v177;
        *(_QWORD *)&v191[0] = 10;
        *((_QWORD *)&v197 + 1) = 0;
        v198 = 1u;
        *(_QWORD *)&v195 = 1610612768;
        *(_QWORD *)&v194 = (char *)&v197 + 8;
        *((_QWORD *)&v194 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v191,
                                &v194) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v188,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v87 = *((_QWORD *)&v197 + 1);
        v88 = v198;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v193,
          (unsigned __int8)v202[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          (void *)v198,
          *((__int64 *)&v198 + 1));
        if ( v87 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1);
        *(_QWORD *)&v194 = &v201;
        *((_QWORD *)&v194 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v195 = v191;
        *((_QWORD *)&v195 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v188, &unk_1017C7774, &v194);
        LOBYTE(v178) = v202[0];
        v89 = v189;
        v167 = v189;
        v168 = v190;
        *(_QWORD *)&v194 = &v178;
        *((_QWORD *)&v194 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v195 = &v167;
        *((_QWORD *)&v195 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)&v197 + 8, &unk_1017C7632, &v194);
        v73 = v187;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          &unk_1016764A0,
          16,
          (char *)&v197 + 8);
        if ( v188 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v188, 1);
        qmemcpy(v73, v191, 0x60u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v185);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v186);
        return v73;
      }
      qmemcpy(v185, v136, sizeof(v185));
      v57 = v183[1];
      v58 = BYTE4(v183[1]);
      v59 = std::time::Instant::now::hda76af2c3a449055(v186, v137, v44, 0, v45);
      v54 = v59 == v164;
      v61 = v59 < v164;
      if ( v54 )
        v61 = v60 < v175;
      if ( v200 )
      {
LABEL_87:
        *(_QWORD *)&v186[0] = 0;
        *((_QWORD *)&v186[0] + 1) = 1;
        *(_QWORD *)&v186[1] = 0;
        *(_QWORD *)&v191[1] = 1610612768;
        *(_QWORD *)&v191[0] = v186;
        *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        v84 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                v185,
                v191);
        v73 = v187;
        if ( v84 )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v188,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v85 = v186[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v193,
          (unsigned __int8)v202[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v186[0] + 1),
          *(__int64 *)&v186[1]);
        if ( (_QWORD)v85 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v85 + 1), v85, 1);
        *(_QWORD *)&v191[0] = &v201;
        *((_QWORD *)&v191[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v191[1] = v185;
        *((_QWORD *)&v191[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v194, &unk_1017C7774, v191);
        LOBYTE(v188) = v202[0];
        v86 = *((_QWORD *)&v194 + 1);
        *((_QWORD *)&v197 + 1) = *((_QWORD *)&v194 + 1);
        *(_QWORD *)&v198 = v195;
        *(_QWORD *)&v191[0] = &v188;
        *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v191[1] = (char *)&v197 + 8;
        *((_QWORD *)&v191[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017C7632, v191);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v186);
        if ( (_QWORD)v194 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v194, 1);
        v83 = v185;
        goto LABEL_93;
      }
      if ( v57 )
      {
        if ( !v61 || (unsigned __int8)v201 >= 3u )
          goto LABEL_87;
      }
      else if ( (v61 & v58 & ((unsigned __int8)v201 < 3u)) == 0 )
      {
        goto LABEL_87;
      }
      *(_QWORD *)&v186[0] = 0;
      *((_QWORD *)&v186[0] + 1) = 1;
      *(_QWORD *)&v186[1] = 0;
      *(_QWORD *)&v191[1] = 1610612768;
      *(_QWORD *)&v191[0] = v186;
      *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v185,
                              v191) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v188,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v194 = v186[0];
      *(_QWORD *)&v195 = *(_QWORD *)&v186[1];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v186[0] = v202;
        *((_QWORD *)&v186[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v186[1] = &v201;
        *((_QWORD *)&v186[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v186[2] = &v194;
        *((_QWORD *)&v186[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v191[3] = 2;
        *((_QWORD *)&v191[3] + 1) = &unk_101677721;
        *(_QWORD *)&v191[4] = 45;
        *(_QWORD *)&v191[5] = &unk_1017C78C2;
        *((_QWORD *)&v191[5] + 1) = v186;
        *(_QWORD *)&v191[0] = 0;
        *((_QWORD *)&v191[0] + 1) = &unk_101677721;
        v191[1] = 0x2Du;
        *(_QWORD *)&v191[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&v191[2] + 1) = 35;
        *((_QWORD *)&v191[4] + 1) = 0xA800000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v188, v191);
      }
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v193,
        (unsigned __int8)v202[0],
        "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        *((void **)&v194 + 1),
        v195);
      *(_QWORD *)&v191[0] = &v201;
      *((_QWORD *)&v191[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v191[1] = &v194;
      *((_QWORD *)&v191[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v138, &unk_1017C7774, v191);
      LOBYTE(v188) = v202[0];
      v62 = v139;
      *((_QWORD *)&v197 + 1) = v139;
      *(_QWORD *)&v198 = v140;
      *(_QWORD *)&v191[0] = &v188;
      *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v191[1] = (char *)&v197 + 8;
      *((_QWORD *)&v191[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017C7632, v191);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "reconcile_retrystop_failed",
        15,
        v186);
      if ( v138 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v138, 1);
      v63 = v194;
      if ( (_QWORD)v194 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194 + 1), v194, 1);
      v64 = v185;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v185);
      goto LABEL_71;
    }
    if ( LODWORD(v183[0]) != 11 )
    {
      qmemcpy(v191, v134, sizeof(v191));
      *(_QWORD *)&v186[0] = 0;
      *((_QWORD *)&v186[0] + 1) = 1;
      *(_QWORD *)&v186[1] = 0;
      *(_QWORD *)&v185[1] = 1610612768;
      *(_QWORD *)&v185[0] = v186;
      *((_QWORD *)&v185[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      v90 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
              v191,
              v185);
      v73 = v187;
      if ( v90 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v188,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v91 = v186[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v193,
        (unsigned __int8)v202[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v186[0] + 1),
        *(__int64 *)&v186[1]);
      if ( (_QWORD)v91 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v91 + 1), v91, 1);
      *(_QWORD *)&v185[0] = &v201;
      *((_QWORD *)&v185[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v185[1] = v191;
      *((_QWORD *)&v185[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v194, &unk_1017C7774, v185);
      LOBYTE(v188) = v202[0];
      v92 = *((_QWORD *)&v194 + 1);
      *((_QWORD *)&v197 + 1) = *((_QWORD *)&v194 + 1);
      *(_QWORD *)&v198 = v195;
      *(_QWORD *)&v185[0] = &v188;
      *((_QWORD *)&v185[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v185[1] = (char *)&v197 + 8;
      *((_QWORD *)&v185[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017C7632, v185);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "settle_failedreconcile_retrystop_failed",
        13,
        v186);
      if ( (_QWORD)v194 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v194, 1);
      qmemcpy(v73, v191, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c((char *)v182 + 8);
      v94 = *((_QWORD *)&v182[5] + 1);
      v93 = *(_QWORD *)&v182[5];
      if ( *((_QWORD *)&v182[5] + 1) )
      {
        v95 = (_QWORD *)(*(_QWORD *)&v182[5] + 8LL);
        do
        {
          v96 = *(v95 - 1);
          if ( v96 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v95, v96, 1);
          v95 += 3;
          --v94;
        }
        while ( v94 );
      }
      v97 = *((_QWORD *)&v182[4] + 1);
      if ( !*((_QWORD *)&v182[4] + 1) )
        return v73;
      goto LABEL_173;
    }
    qmemcpy(v186, &v136[1], 0x58u);
    v180 = v183[1];
    v181 = BYTE4(v183[1]);
    codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
      &v159,
      *(__m128i **)(v148 + 24),
      v149,
      *v150,
      (LODWORD(v183[1]) == 0) & (BYTE4(v183[1]) ^ 1));
    v46 = v161;
    if ( !v161 )
    {
      v73 = v187;
      if ( (v180 || (v181 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)&v191[0] = v202;
        *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v191[1] = &v201;
        *((_QWORD *)&v191[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v191[2] = &v180;
        *((_QWORD *)&v191[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
        *(_QWORD *)&v191[3] = &v181;
        *((_QWORD *)&v191[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
        *(_QWORD *)&v182[3] = 2;
        *((_QWORD *)&v182[3] + 1) = &unk_101677721;
        *(_QWORD *)&v182[4] = 45;
        *(_QWORD *)&v182[5] = &unk_1017C76CE;
        *((_QWORD *)&v182[5] + 1) = v191;
        *(_QWORD *)&v182[0] = 0;
        *((_QWORD *)&v182[0] + 1) = &unk_101677721;
        v182[1] = 0x2Du;
        *(_QWORD *)&v182[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&v182[2] + 1) = 35;
        *((_QWORD *)&v182[4] + 1) = 0xDA00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v188, v182);
      }
      codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
        v185,
        a9,
        (__int64)v186,
        *a10);
      if ( LODWORD(v185[0]) != 11 )
      {
        qmemcpy(v191, v185, sizeof(v191));
        *(_QWORD *)&v182[0] = v202;
        *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v182[1] = v191;
        *((_QWORD *)&v182[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7740, v182);
        *((_QWORD *)&v182[0] + 1) = v176;
        v182[1] = v177;
        *(_QWORD *)&v182[0] = 10;
        *((_QWORD *)&v197 + 1) = 0;
        v198 = 1u;
        *(_QWORD *)&v195 = 1610612768;
        *(_QWORD *)&v194 = (char *)&v197 + 8;
        *((_QWORD *)&v194 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v182,
                                &v194) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v188,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v115 = *((_QWORD *)&v197 + 1);
        v116 = v198;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v193,
          (unsigned __int8)v202[0],
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          (void *)v198,
          *((__int64 *)&v198 + 1));
        if ( v115 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1);
        *(_QWORD *)&v194 = &v201;
        *((_QWORD *)&v194 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v195 = v182;
        *((_QWORD *)&v195 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v188, &unk_1017C7774, &v194);
        LOBYTE(v178) = v202[0];
        v117 = v189;
        v167 = v189;
        v168 = v190;
        *(_QWORD *)&v194 = &v178;
        *((_QWORD *)&v194 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v195 = &v167;
        *((_QWORD *)&v195 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)&v197 + 8, &unk_1017C7632, &v194);
        v73 = v187;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          (char *)&v197 + 8);
        if ( v188 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, v188, 1);
        qmemcpy(v73, v182, 0x60u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v191);
        v118 = 1;
        v47 = v160;
        v119 = 1;
        goto LABEL_162;
      }
      v98 = *(_QWORD *)&v186[5];
      if ( *(_QWORD *)&v186[5] )
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(
          v182,
          *((_QWORD *)&v186[4] + 1),
          *(_QWORD *)&v186[5],
          &unk_10167774E,
          3);
        v99 = v182[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v193,
          (unsigned __int8)v202[0],
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          *((void **)&v182[0] + 1),
          *(__int64 *)&v182[1]);
        if ( (_QWORD)v99 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v99 + 1), v99, 1);
        v100 = std::time::Instant::elapsed::h457f209775ed485c(&v155);
        v191[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v100 + v101 / 0xF4240uLL;
        *(_QWORD *)&v194 = v98;
        *(_QWORD *)&v182[0] = &v201;
        *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v182[1] = v191;
        *((_QWORD *)&v182[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v182[2] = &v194;
        *((_QWORD *)&v182[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C77A1, v182);
        BYTE8(v197) = v202[0];
        v102 = *((_QWORD *)&v185[0] + 1);
        v194 = *(_OWORD *)((char *)v185 + 8);
        *(_QWORD *)&v182[0] = (char *)&v197 + 8;
        *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v182[1] = &v194;
        *((_QWORD *)&v182[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v191, &unk_1017C7632, v182);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          v191);
        if ( *(_QWORD *)&v185[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, *(_QWORD *)&v185[0], 1);
        v182[3] = v186[3];
        v182[2] = v186[2];
        v182[1] = v186[1];
        v182[0] = v186[0];
        v182[4] = v186[4];
        *(_QWORD *)&v182[5] = *(_QWORD *)&v186[5];
        qmemcpy((char *)v73 + 8, v182, 0x58u);
      }
      else
      {
        codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v193);
        v130 = std::time::Instant::elapsed::h457f209775ed485c(&v155);
        v185[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v130 + v131 / 0xF4240uLL;
        *(_QWORD *)&v182[0] = &v201;
        *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v182[1] = v185;
        *((_QWORD *)&v182[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v191, &unk_1017C7788, v182);
        codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
          v202[0],
          (__int64)"stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          6,
          v191);
        v73[4] = v186[3];
        v73[3] = v186[2];
        v73[2] = v186[1];
        v73[1] = v186[0];
        *((_QWORD *)v73 + 1) = 2;
      }
      *(_QWORD *)v73 = 11;
      if ( v159 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, 32 * v159, 8);
      if ( v98 )
        return v73;
LABEL_167:
      v93 = *((_QWORD *)&v186[4] + 1);
      v126 = *(_QWORD *)&v186[5];
      if ( *(_QWORD *)&v186[5] )
      {
        v127 = (_QWORD *)(*((_QWORD *)&v186[4] + 1) + 8LL);
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
      v97 = *(_QWORD *)&v186[4];
      if ( !*(_QWORD *)&v186[4] )
        return v73;
LABEL_173:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, 24 * v97, 8);
      return v73;
    }
    v47 = v160;
    v48 = v160;
    codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v170, v160, v161);
    v52 = std::time::Instant::now::hda76af2c3a449055(&v170, v48, v49, v50, v51);
    v54 = v52 == v164;
    v55 = v52 < v164;
    if ( v54 )
      v55 = v53 < v175;
    v56 = v200;
    if ( v200 )
      break;
    if ( v180 )
    {
      if ( !v55 || (unsigned __int8)v201 >= 3u )
        goto LABEL_136;
    }
    else if ( (v55 & v181 & ((unsigned __int8)v201 < 3u)) == 0 )
    {
LABEL_136:
      *(_QWORD *)&v182[0] = v202;
      *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v182[1] = &v170;
      *((_QWORD *)&v182[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)&v197 + 8, &unk_1017C77CB, v182);
      *((_QWORD *)&v182[0] + 1) = *((_QWORD *)&v197 + 1);
      v182[1] = v198;
      *(_QWORD *)&v182[0] = 10;
      *(_QWORD *)&v185[0] = 0;
      *((_QWORD *)&v185[0] + 1) = 1;
      *(_QWORD *)&v185[1] = 0;
      *(_QWORD *)&v191[1] = 1610612768;
      *(_QWORD *)&v191[0] = v185;
      *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v182,
                              v191) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v188,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v113 = v185[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v193,
        (unsigned __int8)v202[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v185[0] + 1),
        *(__int64 *)&v185[1]);
      if ( (_QWORD)v113 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v113 + 1), v113, 1);
      *(_QWORD *)&v185[0] = v46;
      *(_QWORD *)&v191[0] = &v201;
      *((_QWORD *)&v191[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v191[1] = v185;
      *((_QWORD *)&v191[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v194, &unk_1017C77EC, v191);
      LOBYTE(v176) = v202[0];
      v114 = *((_QWORD *)&v194 + 1);
      v188 = *((_QWORD *)&v194 + 1);
      v189 = v195;
      *(_QWORD *)&v191[0] = &v176;
      *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v191[1] = &v188;
      *((_QWORD *)&v191[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C7632, v191);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v185);
      if ( (_QWORD)v194 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v194, 1);
      v73 = v187;
      qmemcpy(v187, v182, 0x60u);
      LOBYTE(v184) = 1;
      goto LABEL_155;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v191[0] = v202;
      *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v191[1] = &v201;
      *((_QWORD *)&v191[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v191[2] = &v170;
      *((_QWORD *)&v191[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v182[3] = 2;
      *((_QWORD *)&v182[3] + 1) = &unk_101677721;
      *(_QWORD *)&v182[4] = 45;
      *(_QWORD *)&v182[5] = &unk_1017C7865;
      *((_QWORD *)&v182[5] + 1) = v191;
      *(_QWORD *)&v182[0] = 0;
      *((_QWORD *)&v182[0] + 1) = &unk_101677721;
      v182[1] = 0x2Du;
      *(_QWORD *)&v182[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v182[2] + 1) = 35;
      *((_QWORD *)&v182[4] + 1) = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v188, v182);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v171,
      v172);
    if ( v170 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v170, 1);
    v65 = (_QWORD *)(v47 + 8);
    do
    {
      v66 = *(v65 - 1);
      if ( v66 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v65, v66, 1);
      v65 += 4;
      --v46;
    }
    while ( v46 );
    v63 = v159;
    if ( v159 )
    {
      v63 = 32 * v159;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 32 * v159, 8);
    }
    v64 = v186;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v186);
    v67 = *((_OWORD **)&v186[4] + 1);
    v68 = *(_QWORD *)&v186[5];
    if ( *(_QWORD *)&v186[5] )
    {
      v69 = (_QWORD *)(*((_QWORD *)&v186[4] + 1) + 8LL);
      do
      {
        v63 = *(v69 - 1);
        if ( v63 )
        {
          v64 = (_OWORD *)*v69;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v69, v63, 1);
        }
        v69 += 3;
        --v68;
      }
      while ( v68 );
    }
    if ( *(_QWORD *)&v186[4] )
    {
      v63 = 24LL * *(_QWORD *)&v186[4];
      v64 = v67;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24LL * *(_QWORD *)&v186[4], 8);
    }
LABEL_71:
    if ( v18 != 3 )
    {
      v18 = v184;
      if ( (unsigned __int8)v184 <= 3u )
        continue;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, v63);
    v70 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
    if ( !v70 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
    v71 = v70;
    memcpy(v70, &unk_101677756, 0x6Du);
    *((_QWORD *)&v182[0] + 1) = 109;
    *(_QWORD *)&v182[1] = v71;
    *((_QWORD *)&v182[1] + 1) = 109;
    *(_QWORD *)&v182[0] = 10;
    *(_QWORD *)&v185[0] = 0;
    *((_QWORD *)&v185[0] + 1) = 1;
    *(_QWORD *)&v185[1] = 0;
    *(_QWORD *)&v191[1] = 1610612768;
    *(_QWORD *)&v191[0] = v185;
    *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    v72 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
            v182,
            v191);
    v73 = v187;
    if ( v72 )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v188,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v74 = v185[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      *((void **)&v185[0] + 1),
      *(__int64 *)&v185[1]);
    if ( (_QWORD)v74 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v74 + 1), v74, 1);
    *(_QWORD *)&v185[0] = 0;
    *((_QWORD *)&v185[0] + 1) = 1;
    *(_QWORD *)&v185[1] = 0;
    *(_QWORD *)&v191[1] = 1610612768;
    *(_QWORD *)&v191[0] = v185;
    *((_QWORD *)&v191[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v182,
                            v191) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v188,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v75 = v185[0];
    LOBYTE(v136[0]) = v202[0];
    v186[0] = *(_OWORD *)((char *)v185 + 8);
    *(_QWORD *)&v191[0] = v136;
    *((_QWORD *)&v191[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v191[1] = v186;
    *((_QWORD *)&v191[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C7632, v191);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      15,
      v185);
    if ( !(_QWORD)v75 )
      goto LABEL_86;
    v76 = *((_QWORD *)&v75 + 1);
    v77 = v75;
    goto LABEL_85;
  }
  v179 = v136[11];
  v178 = *(_OWORD *)&v136[9];
  *(_QWORD *)&v182[0] = &v170;
  *((_QWORD *)&v182[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v167, &unk_1017C7805, v182);
  v103 = v179;
  if ( v179 == (_QWORD)v178 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v178);
  v104 = *((_QWORD *)&v178 + 1);
  v105 = 3 * v103;
  *(_QWORD *)(*((_QWORD *)&v178 + 1) + 8 * v105 + 16) = v169;
  v106 = v167;
  *(_QWORD *)(v104 + 8 * v105 + 8) = v168;
  *(_QWORD *)(v104 + 8 * v105) = v106;
  v179 = v103 + 1;
  codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
    v185,
    a9,
    (__int64)&v136[1],
    *a10);
  LOBYTE(v184) = *(_QWORD *)&v185[0] != 11;
  if ( *(_QWORD *)&v185[0] == 11 )
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v182, *((_QWORD *)&v178 + 1), v179, &unk_10167774E, 3);
    v120 = v182[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *((void **)&v182[0] + 1),
      *(__int64 *)&v182[1]);
    if ( (_QWORD)v120 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v120 + 1), v120, 1);
    v121 = std::time::Instant::elapsed::h457f209775ed485c(&v155);
    v191[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v121 + v122 / 0xF4240uLL;
    *(_QWORD *)&v194 = v179;
    *(_QWORD *)&v182[0] = &v201;
    *((_QWORD *)&v182[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v182[1] = v191;
    *((_QWORD *)&v182[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v182[2] = &v194;
    *((_QWORD *)&v182[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C77A1, v182);
    BYTE8(v197) = v202[0];
    v123 = *((_QWORD *)&v185[0] + 1);
    v194 = *(_OWORD *)((char *)v185 + 8);
    *(_QWORD *)&v182[0] = (char *)&v197 + 8;
    *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v182[1] = &v194;
    *((_QWORD *)&v182[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v191, &unk_1017C7632, v182);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v191);
    if ( *(_QWORD *)&v185[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, *(_QWORD *)&v185[0], 1);
    v182[3] = v186[3];
    v182[2] = v186[2];
    v182[1] = v186[1];
    v182[0] = v186[0];
    v182[4] = v178;
    *(_QWORD *)&v182[5] = v179;
    v73 = v187;
    qmemcpy(v187 + 8, v182, 0x58u);
    *(_QWORD *)v73 = 11;
  }
  else
  {
    qmemcpy(v191, v185, sizeof(v191));
    *(_QWORD *)&v182[0] = v202;
    *((_QWORD *)&v182[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v182[1] = v191;
    *((_QWORD *)&v182[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7842, v182);
    *((_QWORD *)&v182[0] + 1) = v176;
    v182[1] = v177;
    *(_QWORD *)&v182[0] = 10;
    *((_QWORD *)&v197 + 1) = 0;
    v198 = 1u;
    *(_QWORD *)&v195 = 1610612768;
    *(_QWORD *)&v194 = (char *)&v197 + 8;
    *((_QWORD *)&v194 + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v182,
                            &v194) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v188,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v107 = *((_QWORD *)&v197 + 1);
    v108 = v198;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v193,
      (unsigned __int8)v202[0],
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      (void *)v198,
      *((__int64 *)&v198 + 1));
    if ( v107 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1);
    *(_QWORD *)&v194 = &v201;
    *((_QWORD *)&v194 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v195 = v182;
    *((_QWORD *)&v195 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v188, &unk_1017C7774, &v194);
    v192 = v202[0];
    v109 = v189;
    v137[0] = v189;
    v137[1] = v190;
    *(_QWORD *)&v194 = &v192;
    *((_QWORD *)&v194 + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v195 = v137;
    *((_QWORD *)&v195 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)&v197 + 8, &unk_1017C7632, &v194);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      (char *)&v197 + 8);
    if ( v188 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v188, 1);
    qmemcpy(v187, v182, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v191);
    v110 = v179;
    if ( v179 )
    {
      v111 = (_QWORD *)(*((_QWORD *)&v178 + 1) + 8LL);
      do
      {
        v112 = *(v111 - 1);
        if ( v112 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v111, v112, 1);
        v111 += 3;
        --v110;
      }
      while ( v110 );
    }
    v73 = v187;
    if ( (_QWORD)v178 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v178 + 1), 24 * v178, 8);
  }
LABEL_155:
  if ( v170 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v170, 1);
  v118 = v56 ^ 1;
  v124 = (_QWORD *)(v47 + 8);
  do
  {
    v125 = *(v124 - 1);
    if ( v125 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v124, v125, 1);
    v124 += 4;
    --v46;
  }
  while ( v46 );
  v119 = v184;
LABEL_162:
  if ( v159 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 32 * v159, 8);
  if ( v119 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v186);
  if ( v118 )
    goto LABEL_167;
  return v73;
}
