// __ZN13codexmate_lib4core5relay17router_transition3run @ 0x10090e920 | 基线 same-set
// [FULL hexrays]

_OWORD *__fastcall codexmate_lib::core::relay::router_transition::run::h691af2bc0aba412d(
        char *a1,
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
  __int64 v18; // r14
  __int64 v19; // rcx
  int v20; // edx
  void *v21; // r14
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r12
  unsigned __int8 v32; // r14
  char *v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned int v44; // edx
  bool v45; // zf
  bool v46; // al
  char v47; // r12
  int v48; // r12d
  unsigned __int8 v49; // r14
  __int64 v50; // rax
  unsigned int v51; // edx
  bool v52; // al
  __int64 v53; // r14
  __int64 v54; // rsi
  _OWORD *v55; // rdi
  _QWORD *v56; // r12
  __int64 v57; // rsi
  _OWORD *v58; // r14
  __int64 v59; // r12
  _QWORD *v60; // r13
  void *v61; // rax
  void *v62; // rbx
  __int128 v63; // kr10_16
  __int128 v64; // kr20_16
  _OWORD *v65; // rsi
  _OWORD *v66; // r15
  __int128 v67; // kr30_16
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 v70; // r14
  __int128 v71; // kr50_16
  __int64 v72; // r14
  __int128 v73; // kr60_16
  __int64 v74; // r14
  void *v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // r14
  _QWORD *v78; // r15
  __int64 v79; // rsi
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rbx
  __int128 v85; // kr80_16
  __int64 v86; // rax
  unsigned int v87; // edx
  __int64 v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r15
  __int64 v94; // rbx
  __int64 v95; // r15
  __int64 v96; // rbx
  _QWORD *v97; // r15
  __int64 v98; // rsi
  __int128 v99; // krA0_16
  __int64 v100; // r15
  __int64 v101; // r14
  __int64 v102; // r15
  __int64 v103; // r14
  char v104; // r12
  char v105; // bl
  __int128 v106; // krB0_16
  __int64 v107; // rax
  unsigned int v108; // edx
  __int64 v109; // r15
  _QWORD *v110; // rbx
  __int64 v111; // rsi
  __int64 v112; // r14
  _QWORD *v113; // r15
  __int64 v114; // rsi
  __int64 v116; // rax
  unsigned int v117; // edx
  _QWORD v118[12]; // [rsp+10h] [rbp-530h] BYREF
  __int64 v119[12]; // [rsp+70h] [rbp-4D0h] BYREF
  __int128 v120; // [rsp+D0h] [rbp-470h]
  __int128 v121; // [rsp+E0h] [rbp-460h]
  __int128 v122; // [rsp+F0h] [rbp-450h]
  __int64 v123; // [rsp+100h] [rbp-440h]
  _QWORD v124[2]; // [rsp+108h] [rbp-438h] BYREF
  __int64 v125; // [rsp+118h] [rbp-428h] BYREF
  __int64 v126; // [rsp+120h] [rbp-420h]
  __int64 v127; // [rsp+128h] [rbp-418h]
  __int64 v128; // [rsp+130h] [rbp-410h] BYREF
  __int128 v129; // [rsp+138h] [rbp-408h]
  __int64 v130; // [rsp+148h] [rbp-3F8h] BYREF
  __int128 v131; // [rsp+150h] [rbp-3F0h]
  _OWORD v132[6]; // [rsp+160h] [rbp-3E0h] BYREF
  __int64 v133; // [rsp+1C0h] [rbp-380h] BYREF
  int v134; // [rsp+1C8h] [rbp-378h]
  __int64 v135; // [rsp+1D0h] [rbp-370h]
  _BYTE *v136; // [rsp+1D8h] [rbp-368h]
  _QWORD *v137; // [rsp+1E0h] [rbp-360h]
  __int64 v138; // [rsp+1E8h] [rbp-358h]
  __m128i *v139; // [rsp+1F0h] [rbp-350h]
  __int64 v140; // [rsp+1F8h] [rbp-348h] BYREF
  int v141; // [rsp+200h] [rbp-340h]
  void *v142; // [rsp+208h] [rbp-338h] BYREF
  __int64 v143; // [rsp+210h] [rbp-330h]
  __int64 v144; // [rsp+218h] [rbp-328h] BYREF
  __int64 v145; // [rsp+220h] [rbp-320h]
  __int64 v146; // [rsp+228h] [rbp-318h]
  _QWORD *v147; // [rsp+230h] [rbp-310h]
  __int64 v148; // [rsp+238h] [rbp-308h]
  unsigned int v149; // [rsp+244h] [rbp-2FCh]
  __int64 v150; // [rsp+248h] [rbp-2F8h] BYREF
  __int64 v151; // [rsp+250h] [rbp-2F0h]
  __int64 v152; // [rsp+258h] [rbp-2E8h]
  __int64 v153; // [rsp+260h] [rbp-2E0h] BYREF
  void *v154; // [rsp+268h] [rbp-2D8h]
  __int64 v155; // [rsp+270h] [rbp-2D0h]
  __int64 v156; // [rsp+278h] [rbp-2C8h] BYREF
  __int128 v157; // [rsp+280h] [rbp-2C0h]
  __int64 v158; // [rsp+290h] [rbp-2B0h]
  unsigned int v159; // [rsp+29Ch] [rbp-2A4h]
  _BYTE v160[24]; // [rsp+2A0h] [rbp-2A0h] BYREF
  _OWORD v161[6]; // [rsp+2B8h] [rbp-288h] BYREF
  _QWORD v162[12]; // [rsp+318h] [rbp-228h] BYREF
  int v163; // [rsp+378h] [rbp-1C8h] BYREF
  unsigned __int8 v164; // [rsp+37Ch] [rbp-1C4h] BYREF
  _OWORD v165[6]; // [rsp+380h] [rbp-1C0h] BYREF
  _OWORD v166[6]; // [rsp+3E0h] [rbp-160h] BYREF
  __int64 v167; // [rsp+440h] [rbp-100h] BYREF
  __int64 v168; // [rsp+448h] [rbp-F8h] BYREF
  __int64 v169; // [rsp+450h] [rbp-F0h]
  __int64 v170; // [rsp+458h] [rbp-E8h]
  _OWORD v171[6]; // [rsp+460h] [rbp-E0h] BYREF
  char *v172; // [rsp+4C0h] [rbp-80h]
  char v173; // [rsp+4CEh] [rbp-72h] BYREF
  char v174; // [rsp+4CFh] [rbp-71h] BYREF
  __int64 v175; // [rsp+4D0h] [rbp-70h]
  __int64 v176; // [rsp+4D8h] [rbp-68h] BYREF
  __int128 v177; // [rsp+4E0h] [rbp-60h]
  _BYTE v178[24]; // [rsp+4F0h] [rbp-50h] BYREF
  __int64 (__fastcall *v179)(); // [rsp+508h] [rbp-38h]
  char v180; // [rsp+515h] [rbp-2Bh] BYREF
  unsigned __int8 v181; // [rsp+516h] [rbp-2Ah] BYREF
  char v182[41]; // [rsp+517h] [rbp-29h] BYREF

  v11 = a3;
  v175 = a2;
  v172 = a1;
  v182[0] = a3;
  v180 = a4;
  v142 = a5;
  v143 = a6;
  v140 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v141 = v12;
  v15 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v12, v13, v14);
  v148 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v15,
           v16,
           12,
           0);
  v159 = v17;
  *(_QWORD *)&v161[0] = &v180;
  *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  *(_QWORD *)&v161[1] = &v142;
  *((_QWORD *)&v161[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v130, &unk_1017C7698, v161);
  LOBYTE(v165[0]) = v11;
  v18 = v131;
  v166[0] = v131;
  *(_QWORD *)&v161[0] = v165;
  *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&v161[1] = v166;
  *((_QWORD *)&v161[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v171, &unk_1017C7632, v161);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v171);
  if ( v130 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v130, 1);
  v135 = *a7;
  v136 = (_BYTE *)a7[1];
  v147 = (_QWORD *)a7[2];
  v137 = (_QWORD *)a7[3];
  v138 = a7[4];
  v139 = *(__m128i **)(a8 + 24);
  LOBYTE(v19) = 1;
  while ( 1 )
  {
    v20 = (unsigned __int8)(v19 + 1);
    if ( (_BYTE)v19 == 3 )
      v20 = 3;
    v149 = v20;
    v158 = v19;
    v181 = v19;
    v21 = v142;
    v22 = v143;
    v23 = (unsigned __int8)v182[0];
    v24 = v175;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v142,
      v143);
    v133 = std::time::Instant::now::hda76af2c3a449055(v24, v23, v25, v26, v27);
    v134 = v28;
    if ( v180 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v119, 3, 0, 1, 0);
      if ( LODWORD(v119[0]) != 11 )
        goto LABEL_75;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v119, 5, 0, 0, 0);
      if ( LODWORD(v119[0]) != 11 )
      {
LABEL_75:
        qmemcpy(v161, v119, sizeof(v161));
        *(_QWORD *)&v166[0] = 0;
        *((_QWORD *)&v166[0] + 1) = 1;
        *(_QWORD *)&v166[1] = 0;
        *(_QWORD *)&v171[1] = 1610612768;
        *(_QWORD *)&v171[0] = v166;
        *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v161,
                                v171) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v168,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v67 = v166[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v182[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v166[0] + 1),
          *(__int64 *)&v166[1]);
        if ( (_QWORD)v67 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67 + 1), v67, 1);
        v68 = std::time::Instant::elapsed::h457f209775ed485c(&v133);
        v166[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v68 + v69 / 0xF4240uLL;
        *(_QWORD *)&v171[0] = &v181;
        *((_QWORD *)&v171[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v171[1] = v166;
        *((_QWORD *)&v171[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v171[2] = v161;
        *((_QWORD *)&v171[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v165, &unk_1017C7949, v171);
        v178[0] = v182[0];
        v70 = *((_QWORD *)&v165[0] + 1);
        v132[0] = *(_OWORD *)((char *)v165 + 8);
        *(_QWORD *)&v171[0] = v178;
        *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v171[1] = v132;
        *((_QWORD *)&v171[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v166, &unk_1017C7632, v171);
        v66 = v172;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v166);
        if ( *(_QWORD *)&v165[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, *(_QWORD *)&v165[0], 1);
        v65 = v161;
LABEL_87:
        qmemcpy(v66, v65, 0x60u);
        return v66;
      }
    }
    v122 = *(_OWORD *)&v119[5];
    v121 = *(_OWORD *)&v119[3];
    v120 = *(_OWORD *)&v119[1];
    v123 = v119[7];
    v174 = v119[7];
    v29 = std::time::Instant::elapsed::h457f209775ed485c(&v133);
    v171[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    *(_QWORD *)&v161[0] = &v181;
    *((_QWORD *)&v161[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v161[1] = v171;
    *((_QWORD *)&v161[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v161[2] = &v174;
    *((_QWORD *)&v161[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v128, &unk_1017C76AC, v161);
    LOBYTE(v165[0]) = v182[0];
    v31 = v129;
    v166[0] = v129;
    *(_QWORD *)&v161[0] = v165;
    *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v161[1] = v166;
    *((_QWORD *)&v161[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v171, &unk_1017C7632, v161);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v171);
    if ( v128 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v128, 1);
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v21,
      v22);
    v32 = v181;
    v176 = v135;
    if ( *v136
      || (codexmate_lib::core::relay::router_unlock_auth::restore_real_auth_for_router::h897fc5d811d350e2(v161, v147),
          *(_QWORD *)&v161[0] == 11) )
    {
      v33 = "auth-mode toggle re-entry/reasoning/effort";
      if ( v32 == 1 )
        v33 = (char *)&unk_1016764B0;
      v34 = nullptr;
      if ( v32 == 1 )
        v34 = &v176;
      codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1(
        v161,
        (__int64)v147,
        v137,
        v138,
        (__int64)v33,
        9LL * (v32 != 1) + 16,
        v34,
        (__int64)&unk_10196DBD0);
      v166[0] = *(_OWORD *)((char *)v161 + 8);
      v166[1] = *(_OWORD *)((char *)&v161[1] + 8);
      v166[2] = *(_OWORD *)((char *)&v161[2] + 8);
      *(_QWORD *)&v166[3] = *((_QWORD *)&v161[3] + 1);
      if ( *(_QWORD *)&v161[0] == 11 )
      {
        v165[0] = v166[0];
        v165[1] = v166[1];
        v165[2] = v166[2];
        *(_QWORD *)&v165[3] = *(_QWORD *)&v166[3];
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(
          v178,
          (char *)&v165[1] + 8);
        *(_QWORD *)&v161[3] = *(_QWORD *)&v165[3];
        v161[2] = v165[2];
        v161[1] = v165[1];
        v161[0] = v165[0];
        v161[4] = *(_OWORD *)&v178[8];
        *((_QWORD *)&v161[3] + 1) = *(_QWORD *)v178;
        qmemcpy(v171, v161, 0x50u);
        v132[5] = v171[4];
        v132[4] = v171[3];
        v132[3] = v171[2];
        v132[2] = v171[1];
        v132[1] = v171[0];
        v132[0] = 0xBu;
      }
      else
      {
        *(_QWORD *)&v171[5] = *((_QWORD *)&v161[5] + 1);
        v171[4] = *(_OWORD *)((char *)&v161[4] + 8);
        *((_QWORD *)&v171[3] + 1) = *(_QWORD *)&v161[4];
        v171[0] = v166[0];
        v171[1] = v166[1];
        v171[2] = v166[2];
        *(_QWORD *)&v171[3] = *(_QWORD *)&v166[3];
        *(_QWORD *)&v132[0] = *(_QWORD *)&v161[0];
        qmemcpy((char *)v132 + 8, v171, 0x58u);
      }
    }
    else
    {
      memcpy((char *)v132 + 9, (char *)v161 + 9, 0x57u);
      *(_QWORD *)&v132[0] = *(_QWORD *)&v161[0];
      BYTE8(v132[0]) = BYTE8(v161[0]);
    }
    *(_QWORD *)&v161[3] = v119[7];
    v161[2] = *(_OWORD *)&v119[5];
    v161[1] = *(_OWORD *)&v119[3];
    v161[0] = *(_OWORD *)&v119[1];
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v118, (__int64)v161);
    qmemcpy(v161, v132, sizeof(v161));
    qmemcpy(v162, v118, sizeof(v162));
    if ( LODWORD(v161[0]) != 11 )
    {
      if ( LODWORD(v162[0]) != 11 )
      {
        qmemcpy(v165, v132, sizeof(v165));
        qmemcpy(v166, v118, sizeof(v166));
        *(_QWORD *)&v171[0] = v165;
        *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v171[1] = v166;
        *((_QWORD *)&v171[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017C791E, v171);
        *((_QWORD *)&v171[0] + 1) = v156;
        v171[1] = v157;
        *(_QWORD *)&v171[0] = 10;
        v176 = 0;
        v177 = 1u;
        *(_QWORD *)&v178[16] = 1610612768;
        *(_QWORD *)v178 = &v176;
        *(_QWORD *)&v178[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v171,
                                v178) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v168,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v80 = v176;
        v81 = v177;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v182[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          (void *)v177,
          *((__int64 *)&v177 + 1));
        if ( v80 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v80, 1);
        *(_QWORD *)v178 = &v181;
        *(_QWORD *)&v178[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v178[16] = v171;
        v179 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v168, &unk_1017C7774, v178);
        v160[0] = v182[0];
        v82 = v169;
        v150 = v169;
        v151 = v170;
        *(_QWORD *)v178 = v160;
        *(_QWORD *)&v178[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v178[16] = &v150;
        v179 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, v178);
        v66 = v172;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, &v176);
        if ( v168 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v168, 1);
        qmemcpy(v66, v171, 0x60u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v166);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v165);
        return v66;
      }
      qmemcpy(v166, v132, sizeof(v166));
      v48 = v162[1];
      v49 = BYTE4(v162[1]);
      v50 = std::time::Instant::now::hda76af2c3a449055(&v167, &v133, v35, 0, v36);
      v45 = v50 == v148;
      v52 = v50 < v148;
      if ( v45 )
        v52 = v51 < v159;
      if ( v180 )
      {
LABEL_81:
        *(_QWORD *)&v165[0] = 0;
        *((_QWORD *)&v165[0] + 1) = 1;
        *(_QWORD *)&v165[1] = 0;
        *(_QWORD *)&v171[1] = 1610612768;
        *(_QWORD *)&v171[0] = v165;
        *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v166,
                                v171) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v168,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v71 = v165[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v182[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((void **)&v165[0] + 1),
          *(__int64 *)&v165[1]);
        if ( (_QWORD)v71 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v71 + 1), v71, 1);
        *(_QWORD *)&v171[0] = &v181;
        *((_QWORD *)&v171[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v171[1] = v166;
        *((_QWORD *)&v171[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v178, &unk_1017C7774, v171);
        LOBYTE(v168) = v182[0];
        v72 = *(_QWORD *)&v178[8];
        v176 = *(_QWORD *)&v178[8];
        *(_QWORD *)&v177 = *(_QWORD *)&v178[16];
        *(_QWORD *)&v171[0] = &v168;
        *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v171[1] = &v176;
        *((_QWORD *)&v171[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v165, &unk_1017C7632, v171);
        v66 = v172;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v165);
        if ( *(_QWORD *)v178 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, *(_QWORD *)v178, 1);
        v65 = v166;
        goto LABEL_87;
      }
      if ( v48 )
      {
        if ( !v52 || v181 >= 3u )
          goto LABEL_81;
      }
      else if ( (v52 & v49 & (v181 < 3u)) == 0 )
      {
        goto LABEL_81;
      }
      *(_QWORD *)&v165[0] = 0;
      *((_QWORD *)&v165[0] + 1) = 1;
      *(_QWORD *)&v165[1] = 0;
      *(_QWORD *)&v171[1] = 1610612768;
      *(_QWORD *)&v171[0] = v165;
      *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v166,
                              v171) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v168,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      *(_OWORD *)v178 = v165[0];
      *(_QWORD *)&v178[16] = *(_QWORD *)&v165[1];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v165[0] = v182;
        *((_QWORD *)&v165[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v165[1] = &v181;
        *((_QWORD *)&v165[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v165[2] = v178;
        *((_QWORD *)&v165[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v171[3] = 2;
        *((_QWORD *)&v171[3] + 1) = &unk_101677721;
        *(_QWORD *)&v171[4] = 45;
        *(_QWORD *)&v171[5] = &unk_1017C78C2;
        *((_QWORD *)&v171[5] + 1) = v165;
        *(_QWORD *)&v171[0] = 0;
        *((_QWORD *)&v171[0] + 1) = &unk_101677721;
        v171[1] = 0x2Du;
        *(_QWORD *)&v171[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&v171[2] + 1) = 35;
        *((_QWORD *)&v171[4] + 1) = 0xA800000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v168, v171);
      }
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v182[0],
        "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        *(void **)&v178[8],
        *(__int64 *)&v178[16]);
      *(_QWORD *)&v171[0] = &v181;
      *((_QWORD *)&v171[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v171[1] = v178;
      *((_QWORD *)&v171[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v125, &unk_1017C7774, v171);
      LOBYTE(v168) = v182[0];
      v53 = v126;
      v176 = v126;
      *(_QWORD *)&v177 = v127;
      *(_QWORD *)&v171[0] = &v168;
      *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v171[1] = &v176;
      *((_QWORD *)&v171[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v165, &unk_1017C7632, v171);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "reconcile_retrystop_failed",
        15,
        v165);
      if ( v125 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v125, 1);
      v54 = *(_QWORD *)v178;
      if ( *(_QWORD *)v178 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v178[8], *(_QWORD *)v178, 1);
      v55 = v166;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v166);
      goto LABEL_65;
    }
    if ( LODWORD(v162[0]) != 11 )
    {
      qmemcpy(v171, v118, sizeof(v171));
      *(_QWORD *)&v165[0] = 0;
      *((_QWORD *)&v165[0] + 1) = 1;
      *(_QWORD *)&v165[1] = 0;
      *(_QWORD *)&v166[1] = 1610612768;
      *(_QWORD *)&v166[0] = v165;
      *((_QWORD *)&v166[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v171,
                              v166) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v168,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v73 = v165[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v182[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v165[0] + 1),
        *(__int64 *)&v165[1]);
      if ( (_QWORD)v73 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v73 + 1), v73, 1);
      *(_QWORD *)&v166[0] = &v181;
      *((_QWORD *)&v166[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v166[1] = v171;
      *((_QWORD *)&v166[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v178, &unk_1017C7774, v166);
      LOBYTE(v168) = v182[0];
      v74 = *(_QWORD *)&v178[8];
      v176 = *(_QWORD *)&v178[8];
      *(_QWORD *)&v177 = *(_QWORD *)&v178[16];
      *(_QWORD *)&v166[0] = &v168;
      *((_QWORD *)&v166[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v166[1] = &v176;
      *((_QWORD *)&v166[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v165, &unk_1017C7632, v166);
      v75 = v172;
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "settle_failedreconcile_retrystop_failed",
        13,
        v165);
      if ( *(_QWORD *)v178 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, *(_QWORD *)v178, 1);
      qmemcpy(v75, v171, 0x60u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c((char *)v161 + 8);
      v77 = *((_QWORD *)&v161[5] + 1);
      v76 = *(_QWORD *)&v161[5];
      if ( *((_QWORD *)&v161[5] + 1) )
      {
        v78 = (_QWORD *)(*(_QWORD *)&v161[5] + 8LL);
        do
        {
          v79 = *(v78 - 1);
          if ( v79 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v79, 1);
          v78 += 3;
          --v77;
        }
        while ( v77 );
      }
      v83 = *((_QWORD *)&v161[4] + 1);
      v66 = v172;
      if ( !*((_QWORD *)&v161[4] + 1) )
        return v66;
      goto LABEL_167;
    }
    qmemcpy(v165, (char *)v132 + 8, 0x58u);
    v163 = v162[1];
    v164 = BYTE4(v162[1]);
    codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
      &v144,
      v139,
      a9,
      0,
      (LODWORD(v162[1]) == 0) & (BYTE4(v162[1]) ^ 1));
    v37 = v146;
    if ( !v146 )
    {
      v66 = v172;
      if ( (v163 || (v164 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)&v171[0] = v182;
        *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v171[1] = &v181;
        *((_QWORD *)&v171[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v171[2] = &v163;
        *((_QWORD *)&v171[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
        *(_QWORD *)&v171[3] = &v164;
        *((_QWORD *)&v171[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
        *(_QWORD *)&v161[3] = 2;
        *((_QWORD *)&v161[3] + 1) = &unk_101677721;
        *(_QWORD *)&v161[4] = 45;
        *(_QWORD *)&v161[5] = &unk_1017C76CE;
        *((_QWORD *)&v161[5] + 1) = v171;
        *(_QWORD *)&v161[0] = 0;
        *((_QWORD *)&v161[0] + 1) = &unk_101677721;
        v161[1] = 0x2Du;
        *(_QWORD *)&v161[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&v161[2] + 1) = 35;
        *((_QWORD *)&v161[4] + 1) = 0xDA00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v168, v161);
      }
      codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
        v166,
        a10,
        (__int64)v165,
        *a11);
      if ( LODWORD(v166[0]) != 11 )
      {
        qmemcpy(v171, v166, sizeof(v171));
        *(_QWORD *)&v161[0] = v182;
        *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v161[1] = v171;
        *((_QWORD *)&v161[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017C7740, v161);
        *((_QWORD *)&v161[0] + 1) = v156;
        v161[1] = v157;
        *(_QWORD *)&v161[0] = 10;
        v176 = 0;
        v177 = 1u;
        *(_QWORD *)&v178[16] = 1610612768;
        *(_QWORD *)v178 = &v176;
        *(_QWORD *)&v178[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v161,
                                v178) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            &v168,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v101 = v176;
        v102 = v177;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v182[0],
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          (void *)v177,
          *((__int64 *)&v177 + 1));
        if ( v101 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v101, 1);
        *(_QWORD *)v178 = &v181;
        *(_QWORD *)&v178[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v178[16] = v161;
        v179 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v168, &unk_1017C7774, v178);
        v160[0] = v182[0];
        v103 = v169;
        v150 = v169;
        v151 = v170;
        *(_QWORD *)v178 = v160;
        *(_QWORD *)&v178[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v178[16] = &v150;
        v179 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, v178);
        v66 = v172;
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          &v176);
        if ( v168 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v168, 1);
        qmemcpy(v66, v161, 0x60u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v171);
        v104 = 1;
        v38 = v145;
        v105 = 1;
        goto LABEL_156;
      }
      v84 = *(_QWORD *)&v165[5];
      if ( *(_QWORD *)&v165[5] )
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(
          v161,
          *((_QWORD *)&v165[4] + 1),
          *(_QWORD *)&v165[5],
          &unk_10167774E,
          3);
        v85 = v161[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v175,
          (unsigned __int8)v182[0],
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          *((void **)&v161[0] + 1),
          *(__int64 *)&v161[1]);
        if ( (_QWORD)v85 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v85 + 1), v85, 1);
        v86 = std::time::Instant::elapsed::h457f209775ed485c(&v140);
        v66 = v172;
        v171[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v86 + v87 / 0xF4240uLL;
        *(_QWORD *)v178 = v84;
        *(_QWORD *)&v161[0] = &v181;
        *((_QWORD *)&v161[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v161[1] = v171;
        *((_QWORD *)&v161[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v161[2] = v178;
        *((_QWORD *)&v161[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v166, &unk_1017C77A1, v161);
        LOBYTE(v176) = v182[0];
        v88 = *((_QWORD *)&v166[0] + 1);
        *(_QWORD *)v178 = *((_QWORD *)&v166[0] + 1);
        *(_QWORD *)&v178[8] = *(_QWORD *)&v166[1];
        *(_QWORD *)&v161[0] = &v176;
        *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v161[1] = v178;
        *((_QWORD *)&v161[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v171, &unk_1017C7632, v161);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          v171);
        if ( *(_QWORD *)&v166[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, *(_QWORD *)&v166[0], 1);
        v161[3] = v165[3];
        v161[2] = v165[2];
        v161[1] = v165[1];
        v161[0] = v165[0];
        v161[4] = v165[4];
        *(_QWORD *)&v161[5] = *(_QWORD *)&v165[5];
        qmemcpy((char *)v66 + 8, v161, 0x58u);
      }
      else
      {
        codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v175);
        v116 = std::time::Instant::elapsed::h457f209775ed485c(&v140);
        v166[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v116 + v117 / 0xF4240uLL;
        *(_QWORD *)&v161[0] = &v181;
        *((_QWORD *)&v161[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v161[1] = v166;
        *((_QWORD *)&v161[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v171, &unk_1017C7788, v161);
        codexmate_lib::core::relay::router_transition::record_event::h5b6a19cae18f5f3d(
          v182[0],
          (__int64)"stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          6,
          v171);
        v66[4] = v165[3];
        v66[3] = v165[2];
        v66[2] = v165[1];
        v66[1] = v165[0];
        *((_QWORD *)v66 + 1) = 2;
      }
      *(_QWORD *)v66 = 11;
      if ( v144 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, 32 * v144, 8);
      if ( v84 )
        return v66;
LABEL_161:
      v76 = *((_QWORD *)&v165[4] + 1);
      v112 = *(_QWORD *)&v165[5];
      if ( *(_QWORD *)&v165[5] )
      {
        v113 = (_QWORD *)(*((_QWORD *)&v165[4] + 1) + 8LL);
        do
        {
          v114 = *(v113 - 1);
          if ( v114 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v114, 1);
          v113 += 3;
          --v112;
        }
        while ( v112 );
      }
      v83 = *(_QWORD *)&v165[4];
      v66 = v172;
      if ( !*(_QWORD *)&v165[4] )
        return v66;
LABEL_167:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 24 * v83, 8);
      return v66;
    }
    v38 = v145;
    v39 = v145;
    codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v153, v145, v146);
    v43 = std::time::Instant::now::hda76af2c3a449055(&v153, v39, v40, v41, v42);
    v45 = v43 == v148;
    v46 = v43 < v148;
    if ( v45 )
      v46 = v44 < v159;
    v47 = v180;
    if ( v180 )
      break;
    if ( v163 )
    {
      if ( !v46 || v181 >= 3u )
        goto LABEL_130;
    }
    else if ( (v46 & v164 & (v181 < 3u)) == 0 )
    {
LABEL_130:
      *(_QWORD *)&v161[0] = v182;
      *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v161[1] = &v153;
      *((_QWORD *)&v161[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C77CB, v161);
      *((_QWORD *)&v161[0] + 1) = v176;
      v161[1] = v177;
      *(_QWORD *)&v161[0] = 10;
      *(_QWORD *)&v166[0] = 0;
      *((_QWORD *)&v166[0] + 1) = 1;
      *(_QWORD *)&v166[1] = 0;
      *(_QWORD *)&v171[1] = 1610612768;
      *(_QWORD *)&v171[0] = v166;
      *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              v161,
                              v171) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          &v168,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v99 = v166[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v175,
        (unsigned __int8)v182[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((void **)&v166[0] + 1),
        *(__int64 *)&v166[1]);
      if ( (_QWORD)v99 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v99 + 1), v99, 1);
      *(_QWORD *)&v166[0] = v37;
      *(_QWORD *)&v171[0] = &v181;
      *((_QWORD *)&v171[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v171[1] = v166;
      *((_QWORD *)&v171[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v178, &unk_1017C77EC, v171);
      LOBYTE(v156) = v182[0];
      v100 = *(_QWORD *)&v178[8];
      v168 = *(_QWORD *)&v178[8];
      v169 = *(_QWORD *)&v178[16];
      *(_QWORD *)&v171[0] = &v156;
      *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v171[1] = &v168;
      *((_QWORD *)&v171[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v166, &unk_1017C7632, v171);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v166);
      if ( *(_QWORD *)v178 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, *(_QWORD *)v178, 1);
      v66 = v172;
      qmemcpy(v172, v161, 0x60u);
      LOBYTE(v158) = 1;
      goto LABEL_149;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v171[0] = v182;
      *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v171[1] = &v181;
      *((_QWORD *)&v171[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v171[2] = &v153;
      *((_QWORD *)&v171[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v161[3] = 2;
      *((_QWORD *)&v161[3] + 1) = &unk_101677721;
      *(_QWORD *)&v161[4] = 45;
      *(_QWORD *)&v161[5] = &unk_1017C7865;
      *((_QWORD *)&v161[5] + 1) = v171;
      *(_QWORD *)&v161[0] = 0;
      *((_QWORD *)&v161[0] + 1) = &unk_101677721;
      v161[1] = 0x2Du;
      *(_QWORD *)&v161[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&v161[2] + 1) = 35;
      *((_QWORD *)&v161[4] + 1) = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v168, v161);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v154,
      v155);
    if ( v153 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v153, 1);
    v56 = (_QWORD *)(v38 + 8);
    do
    {
      v57 = *(v56 - 1);
      if ( v57 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v56, v57, 1);
      v56 += 4;
      --v37;
    }
    while ( v37 );
    v54 = v144;
    if ( v144 )
    {
      v54 = 32 * v144;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 32 * v144, 8);
    }
    v55 = v165;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v165);
    v58 = *((_OWORD **)&v165[4] + 1);
    v59 = *(_QWORD *)&v165[5];
    if ( *(_QWORD *)&v165[5] )
    {
      v60 = (_QWORD *)(*((_QWORD *)&v165[4] + 1) + 8LL);
      do
      {
        v54 = *(v60 - 1);
        if ( v54 )
        {
          v55 = (_OWORD *)*v60;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v54, 1);
        }
        v60 += 3;
        --v59;
      }
      while ( v59 );
    }
    if ( *(_QWORD *)&v165[4] )
    {
      v54 = 24LL * *(_QWORD *)&v165[4];
      v55 = v58;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24LL * *(_QWORD *)&v165[4], 8);
    }
LABEL_65:
    if ( (_BYTE)v158 != 3 )
    {
      v19 = v149;
      if ( (unsigned __int8)v149 <= 3u )
        continue;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, v54);
    v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
    if ( !v61 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
    v62 = v61;
    memcpy(v61, &unk_101677756, 0x6Du);
    *((_QWORD *)&v161[0] + 1) = 109;
    *(_QWORD *)&v161[1] = v62;
    *((_QWORD *)&v161[1] + 1) = 109;
    *(_QWORD *)&v161[0] = 10;
    *(_QWORD *)&v166[0] = 0;
    *((_QWORD *)&v166[0] + 1) = 1;
    *(_QWORD *)&v166[1] = 0;
    *(_QWORD *)&v171[1] = 1610612768;
    *(_QWORD *)&v171[0] = v166;
    *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v161,
                            v171) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v168,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v63 = v166[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrec"
      "oncile_retrystop_failed",
      6,
      *((void **)&v166[0] + 1),
      *(__int64 *)&v166[1]);
    if ( (_QWORD)v63 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v63 + 1), v63, 1);
    *(_QWORD *)&v166[0] = 0;
    *((_QWORD *)&v166[0] + 1) = 1;
    *(_QWORD *)&v166[1] = 0;
    *(_QWORD *)&v171[1] = 1610612768;
    *(_QWORD *)&v171[0] = v166;
    *((_QWORD *)&v171[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v161,
                            v171) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v168,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v64 = v166[0];
    LOBYTE(v132[0]) = v182[0];
    v165[0] = *(_OWORD *)((char *)v166 + 8);
    *(_QWORD *)&v171[0] = v132;
    *((_QWORD *)&v171[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v171[1] = v165;
    *((_QWORD *)&v171[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v166, &unk_1017C7632, v171);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      15,
      v166);
    if ( (_QWORD)v64 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v64 + 1), v64, 1);
    v65 = v161;
    v66 = v172;
    goto LABEL_87;
  }
  *(_OWORD *)&v160[8] = v132[5];
  *(_QWORD *)v160 = *((_QWORD *)&v132[4] + 1);
  *(_QWORD *)&v161[0] = &v153;
  *((_QWORD *)&v161[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v150, &unk_1017C7805, v161);
  v89 = *(_QWORD *)&v160[16];
  if ( *(_QWORD *)&v160[16] == *(_QWORD *)v160 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v160);
  v90 = *(_QWORD *)&v160[8];
  v91 = 3 * v89;
  *(_QWORD *)(*(_QWORD *)&v160[8] + 8 * v91 + 16) = v152;
  v92 = v150;
  *(_QWORD *)(v90 + 8 * v91 + 8) = v151;
  *(_QWORD *)(v90 + 8 * v91) = v92;
  *(_QWORD *)&v160[16] = v89 + 1;
  codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
    v166,
    a10,
    (__int64)v132 + 8,
    *a11);
  LOBYTE(v158) = *(_QWORD *)&v166[0] != 11;
  if ( *(_QWORD *)&v166[0] == 11 )
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v161, *(_QWORD *)&v160[8], *(_QWORD *)&v160[16], &unk_10167774E, 3);
    v106 = v161[0];
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      *((void **)&v161[0] + 1),
      *(__int64 *)&v161[1]);
    if ( (_QWORD)v106 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v106 + 1), v106, 1);
    v107 = std::time::Instant::elapsed::h457f209775ed485c(&v140);
    v171[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v107 + v108 / 0xF4240uLL;
    *(_QWORD *)v178 = *(_QWORD *)&v160[16];
    *(_QWORD *)&v161[0] = &v181;
    *((_QWORD *)&v161[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v161[1] = v171;
    *((_QWORD *)&v161[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v161[2] = v178;
    *((_QWORD *)&v161[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v166, &unk_1017C77A1, v161);
    LOBYTE(v176) = v182[0];
    v109 = *((_QWORD *)&v166[0] + 1);
    *(_QWORD *)v178 = *((_QWORD *)&v166[0] + 1);
    *(_QWORD *)&v178[8] = *(_QWORD *)&v166[1];
    *(_QWORD *)&v161[0] = &v176;
    *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v161[1] = v178;
    *((_QWORD *)&v161[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v171, &unk_1017C7632, v161);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v171);
    if ( *(_QWORD *)&v166[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, *(_QWORD *)&v166[0], 1);
    v161[3] = v165[3];
    v161[2] = v165[2];
    v161[1] = v165[1];
    v161[0] = v165[0];
    v161[4] = *(_OWORD *)v160;
    *(_QWORD *)&v161[5] = *(_QWORD *)&v160[16];
    v66 = v172;
    qmemcpy(v172 + 8, v161, 0x58u);
    *(_QWORD *)v66 = 11;
  }
  else
  {
    qmemcpy(v171, v166, sizeof(v171));
    *(_QWORD *)&v161[0] = v182;
    *((_QWORD *)&v161[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v161[1] = v171;
    *((_QWORD *)&v161[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017C7842, v161);
    *((_QWORD *)&v161[0] + 1) = v156;
    v161[1] = v157;
    *(_QWORD *)&v161[0] = 10;
    v176 = 0;
    v177 = 1u;
    *(_QWORD *)&v178[16] = 1610612768;
    *(_QWORD *)v178 = &v176;
    *(_QWORD *)&v178[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v161,
                            v178) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v168,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v93 = v176;
    v94 = v177;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v175,
      (unsigned __int8)v182[0],
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      (void *)v177,
      *((__int64 *)&v177 + 1));
    if ( v93 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1);
    *(_QWORD *)v178 = &v181;
    *(_QWORD *)&v178[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&v178[16] = v161;
    v179 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v168, &unk_1017C7774, v178);
    v173 = v182[0];
    v95 = v169;
    v124[0] = v169;
    v124[1] = v170;
    *(_QWORD *)v178 = &v173;
    *(_QWORD *)&v178[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&v178[16] = v124;
    v179 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7632, v178);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      &v176);
    if ( v168 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v168, 1);
    qmemcpy(v172, v161, 0x60u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v171);
    v96 = *(_QWORD *)&v160[16];
    if ( *(_QWORD *)&v160[16] )
    {
      v97 = (_QWORD *)(*(_QWORD *)&v160[8] + 8LL);
      do
      {
        v98 = *(v97 - 1);
        if ( v98 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v97, v98, 1);
        v97 += 3;
        --v96;
      }
      while ( v96 );
    }
    v66 = v172;
    if ( *(_QWORD *)v160 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v160[8], 24LL * *(_QWORD *)v160, 8);
  }
LABEL_149:
  if ( v153 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v153, 1);
  v104 = v47 ^ 1;
  v110 = (_QWORD *)(v38 + 8);
  do
  {
    v111 = *(v110 - 1);
    if ( v111 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v110, v111, 1);
    v110 += 4;
    --v37;
  }
  while ( v37 );
  v105 = v158;
LABEL_156:
  if ( v144 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 32 * v144, 8);
  if ( v105 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v165);
  if ( v104 )
    goto LABEL_161;
  return v66;
}
