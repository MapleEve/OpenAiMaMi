// __ZN13codexmate_lib4core5relay17router_transition22run_with_writer_policy @ 0x1009049a0
// [FULL — IDA decompiler 全解 67313B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::router_transition::run_with_writer_policy | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::router_transition::run_with_writer_policy::h95f8fadb6cf11dd8(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // r15
  __int64 v18; // rcx
  _OWORD *v19; // rdi
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r15
  __int64 *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // r12d
  __int64 v36; // r9
  const __m128i *v37; // rsi
  __int64 v38; // rdx
  __m128i v39; // xmm1
  __int64 v40; // r15
  __int64 v41; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rsi
  void *v44; // rax
  void *v45; // r15
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // rbx
  __int64 v56; // r12
  __int64 v57; // rsi
  __int64 v58; // r15
  __int64 v59; // rbx
  _QWORD *v60; // r14
  __int64 v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rbx
  _QWORD *v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r8
  int v68; // r12d
  int v69; // r14d
  unsigned __int8 v70; // bl
  __int64 v71; // rax
  unsigned int v72; // edx
  bool v73; // zf
  bool v74; // al
  __int64 v75; // r12
  __int64 (__fastcall *v76)(); // r13
  __int64 (__fastcall *v77)(); // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  unsigned int v82; // edx
  bool v83; // al
  char v84; // r15
  __int64 v85; // r15
  __int64 v86; // rsi
  _QWORD *v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rbx
  _OWORD *v90; // r15
  _QWORD *v91; // r14
  __int128 v92; // kr30_16
  __int64 v93; // rax
  unsigned int v94; // edx
  __int64 v95; // r14
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int128 v98; // kr50_16
  __int64 v99; // r14
  __int64 result; // rax
  char *v101; // rdi
  _BYTE *v102; // rsi
  void *v103; // rax
  void *v104; // rbx
  __int128 v105; // kr60_16
  __int128 v106; // kr70_16
  __int128 v107; // kr80_16
  _BYTE *v108; // r14
  _QWORD *v109; // rax
  __int128 v110; // kr90_16
  __int64 v111; // r14
  _QWORD *v112; // rax
  __int64 v113; // rbx
  __int64 v114; // r14
  _QWORD *v115; // r15
  __int64 v116; // rsi
  __int64 v117; // rbx
  __int128 v118; // krB0_16
  __int64 v119; // rax
  unsigned int v120; // edx
  __int64 v121; // r14
  __int64 v122; // rsi
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rbx
  __int128 v128; // krD0_16
  __int64 v129; // rax
  unsigned int v130; // edx
  __int64 v131; // r14
  char v132; // bl
  __int128 v133; // krF0_16
  __int64 v134; // r14
  char v135; // r15
  _QWORD *v136; // r14
  __int64 v137; // rsi
  __int64 v138; // rax
  unsigned int v139; // edx
  __int64 v140; // r14
  _QWORD *v141; // r14
  __int128 v142; // kr110_16
  _BYTE *v143; // r14
  _QWORD *v144; // rax
  __int64 v145; // r14
  _QWORD *v146; // r15
  __int64 v147; // rsi
  __int128 v148; // kr130_16
  __int64 v149; // r14
  _QWORD *v150; // rax
  __int64 v151; // rbx
  _QWORD *v152; // r14
  __int64 v153; // rsi
  _QWORD v154[12]; // [rsp+18h] [rbp-798h] BYREF
  _BYTE v155[96]; // [rsp+78h] [rbp-738h] BYREF
  __int64 v156; // [rsp+D8h] [rbp-6D8h] BYREF
  __int128 v157; // [rsp+E0h] [rbp-6D0h]
  __int64 v158; // [rsp+F0h] [rbp-6C0h] BYREF
  __int128 v159; // [rsp+F8h] [rbp-6B8h]
  __int64 v160; // [rsp+108h] [rbp-6A8h] BYREF
  __int128 v161; // [rsp+110h] [rbp-6A0h]
  __int64 v162; // [rsp+120h] [rbp-690h] BYREF
  __int128 v163; // [rsp+128h] [rbp-688h]
  __int64 v164; // [rsp+138h] [rbp-678h] BYREF
  __int64 v165; // [rsp+140h] [rbp-670h]
  __int64 v166; // [rsp+148h] [rbp-668h]
  __int64 v167; // [rsp+150h] [rbp-660h] BYREF
  __int128 v168; // [rsp+158h] [rbp-658h]
  __int64 v169; // [rsp+168h] [rbp-648h] BYREF
  __int64 v170; // [rsp+170h] [rbp-640h]
  __int64 v171; // [rsp+178h] [rbp-638h]
  __int64 v172; // [rsp+180h] [rbp-630h] BYREF
  __int128 v173; // [rsp+188h] [rbp-628h]
  __int64 v174; // [rsp+198h] [rbp-618h] BYREF
  __int128 v175; // [rsp+1A0h] [rbp-610h]
  __int64 v176; // [rsp+1B0h] [rbp-600h] BYREF
  _BYTE *v177; // [rsp+1B8h] [rbp-5F8h]
  __int64 v178; // [rsp+1C0h] [rbp-5F0h]
  __int64 v179; // [rsp+1C8h] [rbp-5E8h] BYREF
  _BYTE *v180; // [rsp+1D0h] [rbp-5E0h]
  __int64 v181; // [rsp+1D8h] [rbp-5D8h]
  __int64 v182; // [rsp+1E0h] [rbp-5D0h] BYREF
  __int64 v183; // [rsp+1E8h] [rbp-5C8h]
  __int64 v184; // [rsp+1F0h] [rbp-5C0h]
  __int64 v185; // [rsp+1F8h] [rbp-5B8h] BYREF
  __int64 v186; // [rsp+200h] [rbp-5B0h]
  __int64 v187; // [rsp+208h] [rbp-5A8h]
  __int64 v188; // [rsp+210h] [rbp-5A0h] BYREF
  __int128 v189; // [rsp+218h] [rbp-598h]
  __int64 v190; // [rsp+228h] [rbp-588h] BYREF
  __int128 v191; // [rsp+230h] [rbp-580h]
  __int64 v192; // [rsp+240h] [rbp-570h] BYREF
  __int64 v193; // [rsp+248h] [rbp-568h]
  __int64 v194; // [rsp+250h] [rbp-560h]
  __int64 v195; // [rsp+258h] [rbp-558h] BYREF
  __int128 v196; // [rsp+260h] [rbp-550h]
  _QWORD v197[3]; // [rsp+270h] [rbp-540h] BYREF
  __int64 v198; // [rsp+288h] [rbp-528h] BYREF
  int v199; // [rsp+290h] [rbp-520h]
  __int64 v200; // [rsp+298h] [rbp-518h]
  unsigned __int8 *v201; // [rsp+2A0h] [rbp-510h]
  _BYTE *v202; // [rsp+2A8h] [rbp-508h]
  __int64 v203; // [rsp+2B0h] [rbp-500h]
  const __m128i *v204; // [rsp+2B8h] [rbp-4F8h]
  unsigned __int8 *v205; // [rsp+2C0h] [rbp-4F0h]
  __int128 v206; // [rsp+2C8h] [rbp-4E8h]
  __int128 v207; // [rsp+2D8h] [rbp-4D8h]
  __int128 v208; // [rsp+2E8h] [rbp-4C8h]
  __int64 v209; // [rsp+2F8h] [rbp-4B8h]
  __int64 v210; // [rsp+300h] [rbp-4B0h] BYREF
  int v211; // [rsp+308h] [rbp-4A8h]
  __int64 v212; // [rsp+310h] [rbp-4A0h] BYREF
  __int64 v213; // [rsp+318h] [rbp-498h]
  __int64 v214; // [rsp+320h] [rbp-490h]
  const __m128i *v215; // [rsp+328h] [rbp-488h]
  _OWORD v216[10]; // [rsp+330h] [rbp-480h] BYREF
  unsigned int v217; // [rsp+3DCh] [rbp-3D4h]
  __int64 v218; // [rsp+3E0h] [rbp-3D0h] BYREF
  __int64 (__fastcall *v219)(); // [rsp+3E8h] [rbp-3C8h]
  __int64 v220; // [rsp+3F0h] [rbp-3C0h]
  _QWORD *v221; // [rsp+3F8h] [rbp-3B8h]
  unsigned int v222; // [rsp+404h] [rbp-3ACh]
  _OWORD __dst[10]; // [rsp+408h] [rbp-3A8h] BYREF
  _QWORD v224[12]; // [rsp+4A8h] [rbp-308h] BYREF
  __int64 v225; // [rsp+508h] [rbp-2A8h]
  _OWORD v226[10]; // [rsp+510h] [rbp-2A0h] BYREF
  _BYTE __src[136]; // [rsp+5B0h] [rbp-200h] BYREF
  __int128 v228; // [rsp+638h] [rbp-178h] BYREF
  __int128 v229; // [rsp+648h] [rbp-168h]
  __int128 v230; // [rsp+658h] [rbp-158h]
  __int128 v231; // [rsp+668h] [rbp-148h]
  int v232; // [rsp+678h] [rbp-138h] BYREF
  unsigned __int8 v233; // [rsp+67Ch] [rbp-134h] BYREF
  _QWORD v234[2]; // [rsp+680h] [rbp-130h] BYREF
  _OWORD v235[6]; // [rsp+690h] [rbp-120h] BYREF
  __int64 v236; // [rsp+6F0h] [rbp-C0h] BYREF
  __int64 v237; // [rsp+6F8h] [rbp-B8h]
  __int64 v238; // [rsp+700h] [rbp-B0h]
  _BYTE v239[72]; // [rsp+708h] [rbp-A8h] BYREF
  __int64 v240; // [rsp+750h] [rbp-60h] BYREF
  __int128 v241; // [rsp+758h] [rbp-58h]
  void *v242; // [rsp+768h] [rbp-48h]
  char v243; // [rsp+777h] [rbp-39h] BYREF
  __int64 v244; // [rsp+778h] [rbp-38h]
  unsigned __int8 v245; // [rsp+784h] [rbp-2Ch] BYREF
  char v246; // [rsp+785h] [rbp-2Bh] BYREF
  unsigned __int8 v247; // [rsp+786h] [rbp-2Ah] BYREF
  _BYTE v248[41]; // [rsp+787h] [rbp-29h] BYREF

  v10 = a3;
  v244 = a2;
  v242 = a1;
  v248[0] = a3;
  v246 = a4;
  v212 = a5;
  v213 = a6;
  v210 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5);
  v211 = v11;
  v14 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v11, v12, v13);
  v214 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
           v14,
           v15,
           12,
           0);
  v222 = v16;
  *(_QWORD *)&__dst[0] = &v246;
  *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda;
  *(_QWORD *)&__dst[1] = &v212;
  *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v195, &unk_1017C7698, __dst);
  __src[0] = v10;
  v17 = v196;
  v216[0] = v196;
  *(_QWORD *)&__dst[0] = __src;
  *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&__dst[1] = v216;
  *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v226, &unk_1017C7632, __dst);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_101677751, 5, v226);
  if ( v195 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v195, 1);
  v221 = *(_QWORD **)a7;
  v225 = *(_QWORD *)(a7 + 8);
  v215 = *(const __m128i **)(a7 + 16);
  v201 = *(unsigned __int8 **)(a7 + 24);
  v202 = *(_BYTE **)(a7 + 32);
  v203 = *a8;
  v204 = (const __m128i *)a8[1];
  v205 = (unsigned __int8 *)a8[2];
  LOBYTE(v18) = 1;
  while ( 1 )
  {
    v20 = (unsigned __int8)(v18 + 1);
    if ( (_BYTE)v18 == 3 )
      v20 = 3;
    v217 = v20;
    v200 = v18;
    v247 = v18;
    v21 = v212;
    v22 = v213;
    v23 = v248[0];
    v24 = v244;
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v244,
      v248[0],
      "stopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      14,
      v212,
      v213);
    v198 = std::time::Instant::now::hda76af2c3a449055(v24, v23, v25, v26, v27);
    v199 = v28;
    if ( v246 )
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v154, 3, 0, 1, 0);
      if ( LODWORD(v154[0]) != 11 )
        goto LABEL_125;
    }
    else
    {
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v154, 5, 0, 0, 0);
      if ( LODWORD(v154[0]) != 11 )
      {
LABEL_125:
        qmemcpy(__dst, v154, 0x60u);
        *(_QWORD *)&v216[0] = 0;
        *((_QWORD *)&v216[0] + 1) = 1;
        *(_QWORD *)&v216[1] = 0;
        *(_QWORD *)&v226[1] = 1610612768;
        *(_QWORD *)&v226[0] = v216;
        *((_QWORD *)&v226[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                __dst,
                                v226) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v92 = v216[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((_QWORD *)&v216[0] + 1),
          *(_QWORD *)&v216[1]);
        if ( (_QWORD)v92 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v92 + 1), v92, 1);
        v93 = std::time::Instant::elapsed::h457f209775ed485c(&v198);
        v216[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v93 + v94 / 0xF4240uLL;
        *(_QWORD *)&v226[0] = &v247;
        *((_QWORD *)&v226[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v226[1] = v216;
        *((_QWORD *)&v226[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&v226[2] = __dst;
        *((_QWORD *)&v226[2] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v192, &unk_1017C7949, v226);
        LOBYTE(v235[0]) = v248[0];
        v95 = v193;
        *(_QWORD *)__src = v193;
        *(_QWORD *)&__src[8] = v194;
        *(_QWORD *)&v226[0] = v235;
        *((_QWORD *)&v226[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v226[1] = __src;
        *((_QWORD *)&v226[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v226);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, "stop_failed", 11, v216);
        v96 = v192;
        if ( v192 )
        {
          v97 = v95;
          goto LABEL_143;
        }
LABEL_144:
        result = (__int64)v242;
        v101 = (char *)v242 + 8;
        v102 = __dst;
LABEL_145:
        qmemcpy(v101, v102, 0x60u);
        *(_QWORD *)result = 4;
        return result;
      }
    }
    v208 = *(_OWORD *)&v154[5];
    v207 = *(_OWORD *)&v154[3];
    v206 = *(_OWORD *)&v154[1];
    v209 = v154[7];
    v245 = v154[7];
    v29 = std::time::Instant::elapsed::h457f209775ed485c(&v198);
    v226[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    *(_QWORD *)&__dst[0] = &v247;
    *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
    *(_QWORD *)&__dst[1] = v226;
    *((_QWORD *)&__dst[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&__dst[2] = &v245;
    *((_QWORD *)&__dst[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v190, &unk_1017C76AC, __dst);
    __src[0] = v248[0];
    v31 = v191;
    v216[0] = v191;
    *(_QWORD *)&__dst[0] = __src;
    *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
    *(_QWORD *)&__dst[1] = v216;
    *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v226, &unk_1017C7632, __dst);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_101677710,
      17,
      "stop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      13,
      v226);
    if ( v190 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v190, 1);
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v244,
      v248[0],
      "reconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
      11,
      v21,
      v22);
    *(_QWORD *)&v235[0] = *v221;
    v32 = (__int64 *)v221[1];
    v33 = *v32;
    v34 = v32[1];
    v35 = v245;
    if ( v34 == 3 && !(*(_WORD *)v33 ^ 0x6C61 | *(unsigned __int8 *)(v33 + 2) ^ 0x6C) )
      codexmate_lib::core::relay::codex_diagnostic::fix_all::h6d81f868efc23743(
        __dst,
        v221[2],
        v221[3],
        v235,
        &unk_10196DB78,
        v245);
    else
      codexmate_lib::core::relay::codex_diagnostic::fix_issue::h260abb9ade4e9823(
        (unsigned int)__dst,
        v221[2],
        v221[3],
        v33,
        v34,
        (unsigned int)v235,
        (__int64)&unk_10196DB78,
        v245);
    qmemcpy(__src, (char *)__dst + 8, 0x48u);
    if ( *(_QWORD *)&__dst[0] != 11 )
    {
      *(_OWORD *)((char *)&v216[5] + 8) = __dst[5];
      qmemcpy(&v216[1], __src, 0x48u);
      *((_QWORD *)&v216[0] + 1) = *(_QWORD *)&__dst[0];
      *(_QWORD *)&v216[0] = 3;
      goto LABEL_66;
    }
    qmemcpy(v239, __src, sizeof(v239));
    *(_QWORD *)&v228 = 2;
    codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
      &v236,
      *(__m128i **)(v225 + 24),
      v215,
      *v201,
      0);
    if ( *v202 || v238 )
      goto LABEL_20;
    codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(__dst, v225);
    if ( *(_QWORD *)&__dst[0] != 0x8000000000000000LL )
    {
      if ( *(_QWORD *)&__dst[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
LABEL_20:
      codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_after_stop::h8008c833b4b9f7f0(
        __dst,
        v225,
        v215,
        "diagnostic repair",
        17,
        v35);
      qmemcpy(__src, (char *)__dst + 8, 0x58u);
      if ( *(_QWORD *)&__dst[0] != 11 )
      {
        qmemcpy(&v216[1], __src, 0x58u);
        *((_QWORD *)&v216[0] + 1) = *(_QWORD *)&__dst[0];
        *(_QWORD *)&v216[0] = 3;
        v40 = v237;
        v41 = v238;
        if ( v238 )
        {
          v42 = (_QWORD *)(v237 + 8);
          do
          {
            v43 = *(v42 - 1);
            if ( v43 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1);
            v42 += 4;
            --v41;
          }
          while ( v41 );
        }
        v57 = v236;
        if ( !v236 )
          goto LABEL_48;
        goto LABEL_47;
      }
      qmemcpy(v235, __src, 0x58u);
      v37 = (const __m128i *)&__src[88];
      if ( *(_QWORD *)&v239[16] )
      {
        v38 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(*(_QWORD *)&v239[8] + v38 + 16) == 20 )
          {
            v37 = *(const __m128i **)(*(_QWORD *)&v239[8] + v38 + 8);
            v39 = _mm_or_si128(
                    _mm_xor_si128(_mm_cvtsi32_si128(v37[1].u32[0]), (__m128i)xmmword_1015DCAD0),
                    _mm_xor_si128(_mm_loadu_si128(v37), (__m128i)xmmword_1015DCAE0));
            if ( _mm_testz_si128(v39, v39) )
              break;
          }
          v38 += 24;
          if ( 24LL * *(_QWORD *)&v239[16] == v38 )
            goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&v235[5] + 8, v37);
        v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
        if ( !v44 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
        v45 = v44;
        qmemcpy(v44, "router_postcondition", 20);
        v46 = *(_QWORD *)&v239[16];
        if ( *(_QWORD *)&v239[16] == *(_QWORD *)v239 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v239);
        v47 = *(_QWORD *)&v239[8];
        v48 = 3 * v46;
        *(_QWORD *)(*(_QWORD *)&v239[8] + 8 * v48) = 20;
        *(_QWORD *)(v47 + 8 * v48 + 8) = v45;
        *(_QWORD *)(v47 + 8 * v48 + 16) = 20;
        *(_QWORD *)&v239[16] = v46 + 1;
      }
      v50 = *((_QWORD *)&v235[1] + 1);
      v49 = *(_QWORD *)&v235[1];
      v51 = *(_QWORD *)&v239[64];
      if ( *((_QWORD *)&v235[1] + 1) > *(_QWORD *)&v239[48] - *(_QWORD *)&v239[64] )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v239[48],
          *(_QWORD *)&v239[64],
          *((_QWORD *)&v235[1] + 1),
          8,
          24,
          v36);
        v52 = *(_QWORD *)&v239[56];
        v51 = *(_QWORD *)&v239[64];
      }
      else
      {
        if ( !*((_QWORD *)&v235[1] + 1) )
        {
LABEL_44:
          *(_QWORD *)&v239[64] = v51;
          v228 = v235[0];
          v229 = v235[1];
          v230 = v235[2];
          v231 = v235[3];
          codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(&v240, v225);
          v56 = v240;
          if ( v240 == 0x8000000000000000LL )
          {
            qmemcpy(&__src[64], v239, 0x48u);
            *(_OWORD *)&__src[48] = v235[3];
            *(_OWORD *)&__src[32] = v235[2];
            *(_OWORD *)&__src[16] = v235[1];
            *(_OWORD *)__src = v235[0];
            __dst[9] = *(_OWORD *)((char *)&v235[4] + 8);
            *((_QWORD *)&__dst[8] + 1) = *(_QWORD *)&v235[4];
            memcpy(__dst, __src, 0x88u);
            memcpy(v216, __dst, sizeof(v216));
          }
          else
          {
            *(_OWORD *)&__src[8] = v241;
            *(_QWORD *)__src = v240;
            v218 = (__int64)__src;
            v219 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C796B, &v218);
            *(_QWORD *)&v216[2] = *(_QWORD *)&__dst[1];
            v216[1] = __dst[0];
            *((_QWORD *)&v216[0] + 1) = 10;
            *(_QWORD *)&v216[0] = 3;
            if ( *(_QWORD *)__src )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], *(_QWORD *)__src, 1);
            v58 = *((_QWORD *)&v235[4] + 1);
            v59 = *(_QWORD *)&v235[5];
            if ( *(_QWORD *)&v235[5] )
            {
              v60 = (_QWORD *)(*((_QWORD *)&v235[4] + 1) + 8LL);
              do
              {
                v61 = *(v60 - 1);
                if ( v61 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1);
                v60 += 3;
                --v59;
              }
              while ( v59 );
            }
            if ( *(_QWORD *)&v235[4] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24LL * *(_QWORD *)&v235[4], 8);
          }
          v62 = v237;
          v63 = v238;
          if ( v238 )
          {
            v64 = (_QWORD *)(v237 + 8);
            do
            {
              v65 = *(v64 - 1);
              if ( v65 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v65, 1);
              v64 += 4;
              --v63;
            }
            while ( v63 );
          }
          if ( v236 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 32 * v236, 8);
          if ( v56 == 0x8000000000000000LL )
            goto LABEL_66;
          if ( (_DWORD)v228 != 2 )
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(&v228);
LABEL_48:
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(v239);
          goto LABEL_66;
        }
        v52 = *(_QWORD *)&v239[56];
      }
      v53 = v52 + 24 * v51;
      v54 = -v50;
      v55 = 0;
      do
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v49);
        *(_QWORD *)(v53 + 16) = *(_QWORD *)&__dst[1];
        *(_OWORD *)v53 = __dst[0];
        --v55;
        v53 += 24;
        v49 += 24;
      }
      while ( v54 != v55 );
      v51 -= v55;
      goto LABEL_44;
    }
    codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(v235, v225);
    if ( *(_QWORD *)&v235[0] != 0x8000000000000000LL )
    {
      *(_QWORD *)&__src[16] = *(_QWORD *)&v235[1];
      *(_OWORD *)__src = v235[0];
      v240 = (__int64)__src;
      *(_QWORD *)&v241 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C796B, &v240);
      *(_QWORD *)&v216[2] = *(_QWORD *)&__dst[1];
      v216[1] = __dst[0];
      *((_QWORD *)&v216[0] + 1) = 10;
      *(_QWORD *)&v216[0] = 3;
      if ( *(_QWORD *)__src )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], *(_QWORD *)__src, 1);
      v40 = v237;
      v57 = v236;
      if ( !v236 )
        goto LABEL_48;
LABEL_47:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v57, 8);
      goto LABEL_48;
    }
    qmemcpy(&v226[4], v239, 0x48u);
    v226[3] = v231;
    v226[2] = v230;
    v226[1] = v229;
    v226[0] = v228;
    memcpy(v216, v226, 0x88u);
    *((_QWORD *)&v216[8] + 1) = 0;
    v216[9] = 8u;
    if ( v236 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237, 32 * v236, 8);
LABEL_66:
    *(_QWORD *)&__dst[3] = v209;
    __dst[2] = v208;
    __dst[1] = v207;
    __dst[0] = v206;
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v155, __dst);
    memcpy(__dst, v216, sizeof(__dst));
    qmemcpy(v224, v155, sizeof(v224));
    v68 = __dst[0];
    if ( *(_QWORD *)&__dst[0] == 3 )
    {
      if ( LODWORD(v224[0]) != 11 )
      {
        qmemcpy(v235, (char *)v216 + 8, sizeof(v235));
        qmemcpy(__src, v155, 0x60u);
        *(_QWORD *)&v226[0] = v235;
        *((_QWORD *)&v226[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&v226[1] = __src;
        *((_QWORD *)&v226[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v162, &unk_1017C791E, v226);
        *((_QWORD *)&v226[0] + 1) = v162;
        v226[1] = v163;
        *(_QWORD *)&v226[0] = 10;
        *(_QWORD *)&v228 = 0;
        *((_QWORD *)&v228 + 1) = 1;
        *(_QWORD *)&v229 = 0;
        *(_QWORD *)&v239[16] = 1610612768;
        *(_QWORD *)v239 = &v228;
        *(_QWORD *)&v239[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v226,
                                v239) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v107 = v228;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((_QWORD *)&v228 + 1),
          v229);
        if ( (_QWORD)v107 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v107 + 1), v107, 1);
        *(_QWORD *)v239 = &v247;
        *(_QWORD *)&v239[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v239[16] = v226;
        *(_QWORD *)&v239[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v179, &unk_1017C7774, v239);
        LOBYTE(v236) = v248[0];
        v108 = v180;
        v240 = (__int64)v180;
        *(_QWORD *)&v241 = v181;
        *(_QWORD *)v239 = &v236;
        *(_QWORD *)&v239[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v239[16] = &v240;
        *(_QWORD *)&v239[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v228, &unk_1017C7632, v239);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, &v228);
        if ( v179 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v179, 1);
        v109 = v242;
        qmemcpy((char *)v242 + 8, v226, 0x60u);
        *v109 = 4;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
        return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v235);
      }
      qmemcpy(__src, (char *)v216 + 8, 0x60u);
      v69 = v224[1];
      v70 = BYTE4(v224[1]);
      v71 = std::time::Instant::now::hda76af2c3a449055(&__src[96], (char *)&v216[6] + 8, v66, 0, v67);
      v73 = v71 == v214;
      v74 = v71 < v214;
      if ( v73 )
        v74 = v72 < v222;
      if ( v246 )
      {
LABEL_130:
        *(_QWORD *)&v235[0] = 0;
        *((_QWORD *)&v235[0] + 1) = 1;
        *(_QWORD *)&v235[1] = 0;
        *(_QWORD *)&v226[1] = 1610612768;
        *(_QWORD *)&v226[0] = v235;
        *((_QWORD *)&v226[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                __src,
                                v226) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v98 = v235[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((_QWORD *)&v235[0] + 1),
          *(_QWORD *)&v235[1]);
        if ( (_QWORD)v98 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v98 + 1), v98, 1);
        *(_QWORD *)&v226[0] = &v247;
        *((_QWORD *)&v226[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v226[1] = __src;
        *((_QWORD *)&v226[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v185, &unk_1017C7774, v226);
        LOBYTE(v228) = v248[0];
        v99 = v186;
        *(_QWORD *)v239 = v186;
        *(_QWORD *)&v239[8] = v187;
        *(_QWORD *)&v226[0] = &v228;
        *((_QWORD *)&v226[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v226[1] = v239;
        *((_QWORD *)&v226[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v235, &unk_1017C7632, v226);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101677710, 17, &unk_1016764A0, 16, v235);
        if ( v185 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v185, 1);
        result = (__int64)v242;
        v101 = (char *)v242 + 8;
        v102 = __src;
        goto LABEL_145;
      }
      if ( v69 )
      {
        if ( !v74 || v247 >= 3u )
          goto LABEL_130;
      }
      else if ( (v74 & v70 & (v247 < 3u)) == 0 )
      {
        goto LABEL_130;
      }
      *(_QWORD *)&v235[0] = 0;
      *((_QWORD *)&v235[0] + 1) = 1;
      *(_QWORD *)&v235[1] = 0;
      *(_QWORD *)&v226[1] = 1610612768;
      *(_QWORD *)&v226[0] = v235;
      *((_QWORD *)&v226[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              __src,
                              v226) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v234,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      *(_OWORD *)v239 = v235[0];
      *(_QWORD *)&v239[16] = *(_QWORD *)&v235[1];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v235[0] = v248;
        *((_QWORD *)&v235[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v235[1] = &v247;
        *((_QWORD *)&v235[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v235[2] = v239;
        *((_QWORD *)&v235[2] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v226[3] = 2;
        *((_QWORD *)&v226[3] + 1) = &unk_101677721;
        *(_QWORD *)&v226[4] = 45;
        *(_QWORD *)&v226[5] = &unk_1017C78C2;
        *((_QWORD *)&v226[5] + 1) = v235;
        *(_QWORD *)&v226[0] = 0;
        *((_QWORD *)&v226[0] + 1) = &unk_101677721;
        v226[1] = 0x2Du;
        *(_QWORD *)&v226[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&v226[2] + 1) = 35;
        *((_QWORD *)&v226[4] + 1) = 0xA800000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v234, v226);
      }
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v244,
        v248[0],
        "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
        8,
        *(_QWORD *)&v239[8],
        *(_QWORD *)&v239[16]);
      *(_QWORD *)&v226[0] = &v247;
      *((_QWORD *)&v226[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&v226[1] = v239;
      *((_QWORD *)&v226[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v188, &unk_1017C7774, v226);
      LOBYTE(v240) = v248[0];
      v85 = v189;
      v228 = v189;
      *(_QWORD *)&v226[0] = &v240;
      *((_QWORD *)&v226[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&v226[1] = &v228;
      *((_QWORD *)&v226[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v235, &unk_1017C7632, v226);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "reconcile_retrystop_failed",
        15,
        v235);
      if ( v188 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v188, 1);
      v86 = *(_QWORD *)v239;
      if ( *(_QWORD *)v239 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v239[8], *(_QWORD *)v239, 1);
      v19 = __src;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
      if ( (_BYTE)v200 == 3 )
      {
LABEL_136:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v86);
        v103 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1);
        if ( !v103 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 109);
        v104 = v103;
        memcpy(v103, &unk_101677756, 0x6Du);
        *((_QWORD *)&__dst[0] + 1) = 109;
        *(_QWORD *)&__dst[1] = v104;
        *((_QWORD *)&__dst[1] + 1) = 109;
        *(_QWORD *)&__dst[0] = 10;
        *(_QWORD *)&v216[0] = 0;
        *((_QWORD *)&v216[0] + 1) = 1;
        *(_QWORD *)&v216[1] = 0;
        *(_QWORD *)&v226[1] = 1610612768;
        *(_QWORD *)&v226[0] = v216;
        *((_QWORD *)&v226[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                __dst,
                                v226) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v105 = v216[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_faile"
          "dreconcile_retrystop_failed",
          6,
          *((_QWORD *)&v216[0] + 1),
          *(_QWORD *)&v216[1]);
        if ( (_QWORD)v105 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v105 + 1), v105, 1);
        *(_QWORD *)&v216[0] = 0;
        *((_QWORD *)&v216[0] + 1) = 1;
        *(_QWORD *)&v216[1] = 0;
        *(_QWORD *)&v226[1] = 1610612768;
        *(_QWORD *)&v226[0] = v216;
        *((_QWORD *)&v226[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                __dst,
                                v226) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v106 = v216[0];
        LOBYTE(v235[0]) = v248[0];
        *(_QWORD *)__src = *((_QWORD *)&v216[0] + 1);
        *(_QWORD *)&__src[8] = *(_QWORD *)&v216[1];
        *(_QWORD *)&v226[0] = v235;
        *((_QWORD *)&v226[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v226[1] = __src;
        *((_QWORD *)&v226[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C7632, v226);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "retry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          15,
          v216);
        if ( (_QWORD)v106 )
        {
          v97 = *((_QWORD *)&v106 + 1);
          v96 = v106;
LABEL_143:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1);
        }
        goto LABEL_144;
      }
      goto LABEL_5;
    }
    if ( LODWORD(v224[0]) != 11 )
      break;
    memcpy(v226, v216, sizeof(v226));
    v232 = v224[1];
    v233 = BYTE4(v224[1]);
    codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
      &v218,
      *(__m128i **)(v203 + 24),
      v204,
      *v205,
      (LODWORD(v224[1]) == 0) & (BYTE4(v224[1]) ^ 1));
    v75 = v220;
    if ( !v220 )
    {
      if ( (v232 || (v233 & 1) != 0) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)__src = v248;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&__src[16] = &v247;
        *(_QWORD *)&__src[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&__src[32] = &v232;
        *(_QWORD *)&__src[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
        *(_QWORD *)&__src[48] = &v233;
        *(_QWORD *)&__src[56] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
        *(_QWORD *)&__dst[3] = 2;
        *((_QWORD *)&__dst[3] + 1) = &unk_101677721;
        *(_QWORD *)&__dst[4] = 45;
        *(_QWORD *)&__dst[5] = &unk_1017C76CE;
        *((_QWORD *)&__dst[5] + 1) = __src;
        *(_QWORD *)&__dst[0] = 0;
        *((_QWORD *)&__dst[0] + 1) = &unk_101677721;
        __dst[1] = 0x2Du;
        *(_QWORD *)&__dst[2] = "src/core/relay/router_transition.rs";
        *((_QWORD *)&__dst[2] + 1) = 35;
        *((_QWORD *)&__dst[4] + 1) = 0xDA00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v234, __dst);
      }
      if ( LODWORD(v226[0]) != 2 )
      {
        codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
          v235,
          a9,
          v226,
          *a10);
        if ( *(_QWORD *)&v235[0] != 11 )
        {
          qmemcpy(__src, v235, 0x60u);
          *(_QWORD *)&__dst[0] = v248;
          *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
          *(_QWORD *)&__dst[1] = __src;
          *((_QWORD *)&__dst[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_1017C7740, __dst);
          *((_QWORD *)&__dst[0] + 1) = v160;
          __dst[1] = v161;
          *(_QWORD *)&__dst[0] = 10;
          *(_QWORD *)&v228 = 0;
          *((_QWORD *)&v228 + 1) = 1;
          *(_QWORD *)&v229 = 0;
          *(_QWORD *)&v239[16] = 1610612768;
          *(_QWORD *)v239 = &v228;
          *(_QWORD *)&v239[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                  __dst,
                                  v239) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              &anon_155c4da9b5393270cfa7378e2b52c417_745,
              55,
              v234,
              &anon_155c4da9b5393270cfa7378e2b52c417_758,
              &anon_155c4da9b5393270cfa7378e2b52c417_747);
          v142 = v228;
          codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
            v244,
            v248[0],
            "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
            13,
            *((_QWORD *)&v228 + 1),
            v229);
          if ( (_QWORD)v142 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v142 + 1), v142, 1);
          *(_QWORD *)v239 = &v247;
          *(_QWORD *)&v239[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
          *(_QWORD *)&v239[16] = __dst;
          *(_QWORD *)&v239[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C7774, v239);
          LOBYTE(v236) = v248[0];
          v143 = v177;
          v240 = (__int64)v177;
          *(_QWORD *)&v241 = v178;
          *(_QWORD *)v239 = &v236;
          *(_QWORD *)&v239[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
          *(_QWORD *)&v239[16] = &v240;
          *(_QWORD *)&v239[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v228, &unk_1017C7632, v239);
          codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
            &unk_101677710,
            17,
            "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
            13,
            &v228);
          if ( v176 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v176, 1);
          v144 = v242;
          qmemcpy((char *)v242 + 8, __dst, 0x60u);
          *v144 = 4;
          result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
          v135 = 1;
          v76 = v219;
          v132 = 1;
          goto LABEL_213;
        }
      }
      v117 = *((_QWORD *)&v226[9] + 1);
      if ( *((_QWORD *)&v226[9] + 1) )
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(
          __dst,
          *(_QWORD *)&v226[9],
          *((_QWORD *)&v226[9] + 1),
          &unk_10167774E,
          3);
        v118 = __dst[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          *((_QWORD *)&__dst[0] + 1),
          *(_QWORD *)&__dst[1]);
        if ( (_QWORD)v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v118 + 1), v118, 1);
        v119 = std::time::Instant::elapsed::h457f209775ed485c(&v210);
        *(_OWORD *)__src = 0x3E8 * (unsigned __int128)(unsigned __int64)v119 + v120 / 0xF4240uLL;
        *(_QWORD *)&v235[0] = v117;
        *(_QWORD *)&__dst[0] = &v247;
        *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&__dst[1] = __src;
        *((_QWORD *)&__dst[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&__dst[2] = v235;
        *((_QWORD *)&__dst[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v172, &unk_1017C77A1, __dst);
        v239[0] = v248[0];
        v121 = v173;
        v235[0] = v173;
        *(_QWORD *)&__dst[0] = v239;
        *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&__dst[1] = v235;
        *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C7632, __dst);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          __src);
        if ( v172 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v172, 1);
        memcpy(__dst, v226, 0x88u);
        *((_QWORD *)&__dst[8] + 1) = *((_QWORD *)&v226[8] + 1);
        __dst[9] = v226[9];
        result = (__int64)memcpy(v242, __dst, 0xA0u);
        v122 = v218;
        if ( v218 )
          goto LABEL_178;
      }
      else
      {
        codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v244);
        v138 = std::time::Instant::elapsed::h457f209775ed485c(&v210);
        *(_OWORD *)__src = 0x3E8 * (unsigned __int128)(unsigned __int64)v138 + v139 / 0xF4240uLL;
        *(_QWORD *)&__dst[0] = &v247;
        *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&__dst[1] = __src;
        *((_QWORD *)&__dst[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v174, &unk_1017C7788, __dst);
        v239[0] = v248[0];
        v140 = v175;
        v235[0] = v175;
        *(_QWORD *)&__dst[0] = v239;
        *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&__dst[1] = v235;
        *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C7632, __dst);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "stablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          6,
          __src);
        if ( v174 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v174, 1);
        v141 = v242;
        result = (__int64)memcpy((char *)v242 + 8, v226, 0x88u);
        *v141 = 3;
        v122 = v218;
        if ( v218 )
LABEL_178:
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, 32 * v122, 8);
      }
      if ( !v117 )
        goto LABEL_219;
      return result;
    }
    v76 = v219;
    v77 = v219;
    codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(&v236, v219, v220);
    v81 = std::time::Instant::now::hda76af2c3a449055(&v236, v77, v78, v79, v80);
    v73 = v81 == v214;
    v83 = v81 < v214;
    if ( v73 )
      v83 = v82 < v222;
    v84 = v246;
    if ( v246 )
    {
      v241 = v216[9];
      v240 = *((_QWORD *)&v216[8] + 1);
      *(_QWORD *)&__dst[0] = &v236;
      *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v197, &unk_1017C7805, __dst);
      v123 = *((_QWORD *)&v241 + 1);
      if ( *((_QWORD *)&v241 + 1) == v240 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v240);
      v124 = v241;
      v125 = 3 * v123;
      *(_QWORD *)(v241 + 8 * v125 + 16) = v197[2];
      v126 = v197[0];
      *(_QWORD *)(v124 + 8 * v125 + 8) = v197[1];
      *(_QWORD *)(v124 + 8 * v125) = v126;
      v127 = v123 + 1;
      *((_QWORD *)&v241 + 1) = v127;
      if ( LODWORD(v226[0]) == 2 )
      {
LABEL_186:
        alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, v241, v127, &unk_10167774E, 3);
        v128 = __dst[0];
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          *((_QWORD *)&__dst[0] + 1),
          *(_QWORD *)&__dst[1]);
        if ( (_QWORD)v128 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128 + 1), v128, 1);
        v129 = std::time::Instant::elapsed::h457f209775ed485c(&v210);
        *(_OWORD *)__src = 0x3E8 * (unsigned __int128)(unsigned __int64)v129 + v130 / 0xF4240uLL;
        *(_QWORD *)&v235[0] = *((_QWORD *)&v241 + 1);
        *(_QWORD *)&__dst[0] = &v247;
        *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&__dst[1] = __src;
        *((_QWORD *)&__dst[1] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
        *(_QWORD *)&__dst[2] = v235;
        *((_QWORD *)&__dst[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v167, &unk_1017C77A1, __dst);
        v239[0] = v248[0];
        v131 = v168;
        v235[0] = v168;
        *(_QWORD *)&__dst[0] = v239;
        *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&__dst[1] = v235;
        *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C7632, __dst);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "degradedretryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
          8,
          __src);
        if ( v167 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v167, 1);
        memcpy(__dst, v226, 0x88u);
        *((_QWORD *)&__dst[8] + 1) = v240;
        __dst[9] = v241;
        result = (__int64)memcpy(v242, __dst, 0xA0u);
        v132 = 0;
      }
      else
      {
        codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
          v235,
          a9,
          v216,
          *a10);
        if ( *(_QWORD *)&v235[0] == 11 )
        {
          v127 = *((_QWORD *)&v241 + 1);
          goto LABEL_186;
        }
        qmemcpy(__src, v235, 0x60u);
        *(_QWORD *)&__dst[0] = v248;
        *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&__dst[1] = __src;
        *((_QWORD *)&__dst[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v158, &unk_1017C7842, __dst);
        *((_QWORD *)&__dst[0] + 1) = v158;
        __dst[1] = v159;
        *(_QWORD *)&__dst[0] = 10;
        *(_QWORD *)&v228 = 0;
        *((_QWORD *)&v228 + 1) = 1;
        *(_QWORD *)&v229 = 0;
        *(_QWORD *)&v239[16] = 1610612768;
        *(_QWORD *)v239 = &v228;
        *(_QWORD *)&v239[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                __dst,
                                v239) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_155c4da9b5393270cfa7378e2b52c417_745,
            55,
            v234,
            &anon_155c4da9b5393270cfa7378e2b52c417_758,
            &anon_155c4da9b5393270cfa7378e2b52c417_747);
        v148 = v228;
        codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
          v244,
          v248[0],
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          *((_QWORD *)&v228 + 1),
          v229);
        if ( (_QWORD)v148 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v148 + 1), v148, 1);
        *(_QWORD *)v239 = &v247;
        *(_QWORD *)&v239[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
        *(_QWORD *)&v239[16] = __dst;
        *(_QWORD *)&v239[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v169, &unk_1017C7774, v239);
        v243 = v248[0];
        v149 = v170;
        v234[0] = v170;
        v234[1] = v171;
        *(_QWORD *)v239 = &v243;
        *(_QWORD *)&v239[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
        *(_QWORD *)&v239[16] = v234;
        *(_QWORD *)&v239[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v228, &unk_1017C7632, v239);
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
          &unk_101677710,
          17,
          "commit_failedstablepostcondition_failedsettle_failedreconcile_retrystop_failed",
          13,
          &v228);
        if ( v169 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v169, 1);
        v150 = v242;
        qmemcpy((char *)v242 + 8, __dst, 0x60u);
        *v150 = 4;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
        v151 = *((_QWORD *)&v241 + 1);
        if ( *((_QWORD *)&v241 + 1) )
        {
          v152 = (_QWORD *)(v241 + 8);
          do
          {
            v153 = *(v152 - 1);
            if ( v153 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v152, v153, 1);
            v152 += 3;
            --v151;
          }
          while ( v151 );
        }
        result = v240;
        v132 = 1;
        if ( v240 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v241, 24 * v240, 8);
      }
LABEL_197:
      if ( v236 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237, v236, 1);
      v135 = v84 ^ 1;
      v136 = (_QWORD *)((char *)v76 + 8);
      do
      {
        v137 = *(v136 - 1);
        if ( v137 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v136, v137, 1);
        v136 += 4;
        --v75;
      }
      while ( v75 );
LABEL_213:
      if ( v218 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 32 * v218, 8);
      if ( v132 )
      {
        result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(&v226[4]);
        if ( LODWORD(v226[0]) != 2 )
          result = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v226);
      }
      if ( v135 )
      {
LABEL_219:
        v145 = *((_QWORD *)&v226[9] + 1);
        v113 = *(_QWORD *)&v226[9];
        if ( *((_QWORD *)&v226[9] + 1) )
        {
          v146 = (_QWORD *)(*(_QWORD *)&v226[9] + 8LL);
          do
          {
            v147 = *(v146 - 1);
            if ( v147 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v146, v147, 1);
            v146 += 3;
            --v145;
          }
          while ( v145 );
        }
        result = *((_QWORD *)&v226[8] + 1);
        if ( *((_QWORD *)&v226[8] + 1) )
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, 24 * result, 8);
      }
      return result;
    }
    if ( v232 )
    {
      if ( !v83 || v247 >= 3u )
        goto LABEL_191;
    }
    else if ( (v83 & v233 & (v247 < 3u)) == 0 )
    {
LABEL_191:
      *(_QWORD *)&__dst[0] = v248;
      *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&__dst[1] = &v236;
      *((_QWORD *)&__dst[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017C77CB, __dst);
      *((_QWORD *)&__dst[0] + 1) = v156;
      __dst[1] = v157;
      *(_QWORD *)&__dst[0] = 10;
      *(_QWORD *)&v235[0] = 0;
      *((_QWORD *)&v235[0] + 1) = 1;
      *(_QWORD *)&v235[1] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v235;
      *(_QWORD *)&__src[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              __dst,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v234,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v133 = v235[0];
      codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        v244,
        v248[0],
        "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedr"
        "econcile_retrystop_failed",
        6,
        *((_QWORD *)&v235[0] + 1),
        *(_QWORD *)&v235[1]);
      if ( (_QWORD)v133 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v133 + 1), v133, 1);
      *(_QWORD *)&v235[0] = v75;
      *(_QWORD *)__src = &v247;
      *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&__src[16] = v235;
      *(_QWORD *)&__src[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v164, &unk_1017C77EC, __src);
      LOBYTE(v228) = v248[0];
      v134 = v165;
      *(_QWORD *)v239 = v165;
      *(_QWORD *)&v239[8] = v166;
      *(_QWORD *)__src = &v228;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&__src[16] = v239;
      *(_QWORD *)&__src[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v235, &unk_1017C7632, __src);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        &unk_101677710,
        17,
        "postcondition_failedsettle_failedreconcile_retrystop_failed",
        20,
        v235);
      if ( v164 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v164, 1);
      result = (__int64)v242;
      qmemcpy((char *)v242 + 8, __dst, 0x60u);
      *(_QWORD *)result = 4;
      v132 = 1;
      goto LABEL_197;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)__src = v248;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
      *(_QWORD *)&__src[16] = &v247;
      *(_QWORD *)&__src[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
      *(_QWORD *)&__src[32] = &v236;
      *(_QWORD *)&__src[40] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&__dst[3] = 2;
      *((_QWORD *)&__dst[3] + 1) = &unk_101677721;
      *(_QWORD *)&__dst[4] = 45;
      *(_QWORD *)&__dst[5] = &unk_1017C7865;
      *((_QWORD *)&__dst[5] + 1) = __src;
      *(_QWORD *)&__dst[0] = 0;
      *((_QWORD *)&__dst[0] + 1) = &unk_101677721;
      __dst[1] = 0x2Du;
      *(_QWORD *)&__dst[2] = "src/core/relay/router_transition.rs";
      *((_QWORD *)&__dst[2] + 1) = 35;
      *((_QWORD *)&__dst[4] + 1) = 0x10B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v234, __dst);
    }
    codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
      v244,
      v248[0],
      "retryingid-tokenbackupIDlastTimebundleIdkeyLabelcallbackattemptsOverflow",
      8,
      v237,
      v238);
    if ( v236 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237, v236, 1);
    v87 = (_QWORD *)((char *)v76 + 8);
    do
    {
      v88 = *(v87 - 1);
      if ( v88 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v87, v88, 1);
      v87 += 4;
      --v75;
    }
    while ( v75 );
    v86 = v218;
    if ( v218 )
    {
      v86 = 32 * v218;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 32 * v218, 8);
    }
    v19 = &v226[4];
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(&v226[4]);
    if ( LODWORD(v226[0]) != 2 )
    {
      v19 = v226;
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v226);
    }
    v89 = *((_QWORD *)&v226[9] + 1);
    v90 = *(_OWORD **)&v226[9];
    if ( *((_QWORD *)&v226[9] + 1) )
    {
      v91 = (_QWORD *)(*(_QWORD *)&v226[9] + 8LL);
      do
      {
        v86 = *(v91 - 1);
        if ( v86 )
        {
          v19 = (_OWORD *)*v91;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v91, v86, 1);
        }
        v91 += 3;
        --v89;
      }
      while ( v89 );
    }
    if ( *((_QWORD *)&v226[8] + 1) )
    {
      v86 = 24LL * *((_QWORD *)&v226[8] + 1);
      v19 = v90;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, 24LL * *((_QWORD *)&v226[8] + 1), 8);
    }
    if ( (_BYTE)v200 == 3 )
      goto LABEL_136;
LABEL_5:
    v18 = v217;
    if ( (unsigned __int8)v217 > 3u )
      goto LABEL_136;
  }
  qmemcpy(v226, v155, 0x60u);
  *(_QWORD *)&v235[0] = 0;
  *((_QWORD *)&v235[0] + 1) = 1;
  *(_QWORD *)&v235[1] = 0;
  *(_QWORD *)&__src[16] = 1610612768;
  *(_QWORD *)__src = v235;
  *(_QWORD *)&__src[8] = &anon_155c4da9b5393270cfa7378e2b52c417_744;
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                          v226,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      v234,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  v110 = v235[0];
  codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
    v244,
    v248[0],
    "failedretry_exhaustedstopping_codexstop_completereconcilingcommit_failedstablepostcondition_failedsettle_failedrecon"
    "cile_retrystop_failed",
    6,
    *((_QWORD *)&v235[0] + 1),
    *(_QWORD *)&v235[1]);
  if ( (_QWORD)v110 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v110 + 1), v110, 1);
  *(_QWORD *)__src = &v247;
  *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b;
  *(_QWORD *)&__src[16] = v226;
  *(_QWORD *)&__src[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v182, &unk_1017C7774, __src);
  LOBYTE(v228) = v248[0];
  v111 = v183;
  *(_QWORD *)v239 = v183;
  *(_QWORD *)&v239[8] = v184;
  *(_QWORD *)__src = &v228;
  *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
  *(_QWORD *)&__src[16] = v239;
  *(_QWORD *)&__src[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v235, &unk_1017C7632, __src);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
    &unk_101677710,
    17,
    "settle_failedreconcile_retrystop_failed",
    13,
    v235);
  if ( v182 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v182, 1);
  v112 = v242;
  qmemcpy((char *)v242 + 8, v226, 0x60u);
  *v112 = 4;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(&__dst[4]);
  if ( v68 != 2 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(__dst);
  v114 = *((_QWORD *)&__dst[9] + 1);
  v113 = *(_QWORD *)&__dst[9];
  if ( *((_QWORD *)&__dst[9] + 1) )
  {
    v115 = (_QWORD *)(*(_QWORD *)&__dst[9] + 8LL);
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
  result = *((_QWORD *)&__dst[8] + 1);
  if ( *((_QWORD *)&__dst[8] + 1) )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, 24 * result, 8);
  return result;
}
