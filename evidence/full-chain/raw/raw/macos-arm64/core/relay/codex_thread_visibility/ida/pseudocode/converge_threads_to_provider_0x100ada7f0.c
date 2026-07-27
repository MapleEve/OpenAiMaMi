// __ZN13codexmate_lib4core5relay23codex_thread_visibility28converge_threads_to_provider @ 0x100ada7f0 | 基线 same-set
// [FULL IDA decompiler]

__m128i *__fastcall codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h11024501c8d0762b(
        __m128i *a1,
        _QWORD *a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  __m128i *v4; // rbx
  _WORD *v5; // r14
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  __int128 *v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  void *v16; // rbx
  void *v17; // rdi
  __int64 v18; // r14
  size_t v19; // r15
  char *v20; // r14
  __int64 v21; // r13
  size_t v22; // rsi
  __int64 v23; // rbx
  size_t v24; // r14
  size_t v25; // r12
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rbx
  size_t v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rsi
  _QWORD *v35; // r14
  __int64 v36; // r14
  unsigned __int64 v37; // r12
  char *v38; // rbx
  char *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // r13
  signed __int64 v43; // r14
  __int128 *v44; // rsi
  bool v45; // zf
  __int128 v46; // rax
  __int64 v47; // rbx
  const void *v48; // rsi
  size_t v49; // r14
  const void *v50; // r13
  __int64 v51; // r13
  __int64 v52; // r13
  __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // r14
  size_t v56; // r15
  __int64 v57; // r15
  __int64 v58; // rsi
  char *v59; // r14
  char *v60; // rbx
  __int64 v61; // rsi
  _QWORD *v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rsi
  __int64 v67; // rcx
  __int64 v68; // r14
  const __m128i *v70; // r13
  int v71; // ebx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdi
  unsigned __int64 v75; // rax
  int v76; // r14d
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // r13
  __int64 v81; // r8
  const void *v82; // rax
  char *v83; // r14
  char *v84; // r14
  __int64 v85; // r13
  __int64 v86; // r14
  __int64 v87; // rsi
  __int64 v88; // rbx
  unsigned __int64 v89; // rbx
  __int64 *v90; // r13
  char *v91; // r14
  char *v92; // r12
  char *v93; // rbx
  unsigned __int64 v94; // r14
  char *v95; // r15
  __int64 v96; // rsi
  __int64 v97; // rsi
  const void **v98; // rax
  size_t v99; // r14
  char *v100; // r12
  __int32 v101; // ecx
  bool v102; // dl
  int v103; // eax
  size_t v104; // r14
  int autocommit; // eax
  unsigned __int64 v106; // rbx
  size_t v107; // r14
  __int64 v108; // rbx
  void *v109; // r14
  char *v110; // r14
  __int64 v111; // rbx
  void *v112; // rbx
  __int64 v113; // rax
  char *v114; // r14
  char *v115; // rbx
  int v116; // r9d
  unsigned __int64 v117; // r13
  __int64 v118; // r15
  unsigned __int64 v119; // r14
  size_t v120; // rbx
  __int64 v121; // rbx
  void *v122; // r14
  __int64 v123; // r14
  size_t v124; // rbx
  _QWORD *v125; // rbx
  __int64 v126; // rsi
  __int64 v127; // rsi
  __int64 v128; // rsi
  __m128i v129; // xmm0
  unsigned __int64 v130; // r14
  __int64 v131; // rdx
  __m128i v132; // xmm1
  __m128i *v133; // rcx
  __int64 v134; // rbx
  _QWORD *v135; // r15
  __int64 v136; // rsi
  _QWORD *v137; // rsi
  __int64 v138; // rax
  _QWORD *v139; // r14
  __int64 v140; // rax
  __int64 v141; // rbx
  _QWORD *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rbx
  __m128i *v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rbx
  _QWORD *v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rbx
  _QWORD *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rbx
  _QWORD *v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rbx
  _QWORD *v160; // rax
  __int64 v161; // rcx
  unsigned __int64 v162; // rdx
  __int64 v163; // rbx
  _QWORD *v164; // rax
  __int64 v165; // rcx
  char *v166; // rdx
  __int64 v167; // rbx
  _QWORD *v168; // r14
  __int64 v169; // rsi
  __int64 *v170; // rbx
  __int64 v171; // rax
  __int64 v172; // rbx
  unsigned __int64 v173; // r14
  _QWORD *v174; // r15
  __int64 v175; // rsi
  __int64 v176; // rdi
  _BYTE v177[24]; // [rsp+10h] [rbp-7F0h] BYREF
  _DWORD v178[24]; // [rsp+28h] [rbp-7D8h] BYREF
  _QWORD v179[11]; // [rsp+88h] [rbp-778h] BYREF
  _QWORD v180[12]; // [rsp+E0h] [rbp-720h] BYREF
  _QWORD v181[3]; // [rsp+140h] [rbp-6C0h] BYREF
  _QWORD v182[3]; // [rsp+158h] [rbp-6A8h] BYREF
  _QWORD v183[3]; // [rsp+170h] [rbp-690h] BYREF
  __int64 v184; // [rsp+188h] [rbp-678h] BYREF
  __int128 v185; // [rsp+190h] [rbp-670h]
  _QWORD v186[3]; // [rsp+1A0h] [rbp-660h] BYREF
  _QWORD v187[3]; // [rsp+1B8h] [rbp-648h] BYREF
  _QWORD v188[3]; // [rsp+1D0h] [rbp-630h] BYREF
  __int64 v189; // [rsp+1E8h] [rbp-618h] BYREF
  size_t v190; // [rsp+1F0h] [rbp-610h]
  __int64 v191; // [rsp+1F8h] [rbp-608h]
  __int64 v192; // [rsp+200h] [rbp-600h]
  __int64 v193; // [rsp+208h] [rbp-5F8h]
  __int64 v194; // [rsp+210h] [rbp-5F0h]
  __int64 v195; // [rsp+218h] [rbp-5E8h]
  __int64 v196; // [rsp+220h] [rbp-5E0h]
  __int128 v197; // [rsp+228h] [rbp-5D8h]
  __int128 v198; // [rsp+238h] [rbp-5C8h]
  _OWORD v199[6]; // [rsp+248h] [rbp-5B8h] BYREF
  __int64 v200; // [rsp+2A8h] [rbp-558h] BYREF
  __int64 v201; // [rsp+2B0h] [rbp-550h]
  __int64 v202; // [rsp+2B8h] [rbp-548h]
  __int64 v203; // [rsp+2C0h] [rbp-540h] BYREF
  __int128 v204; // [rsp+2C8h] [rbp-538h]
  __int64 v205; // [rsp+2D8h] [rbp-528h]
  __int64 v206; // [rsp+2E0h] [rbp-520h]
  size_t v207; // [rsp+2E8h] [rbp-518h]
  unsigned __int64 v208; // [rsp+2F0h] [rbp-510h] BYREF
  __int64 v209; // [rsp+2F8h] [rbp-508h]
  sqlite3 *v210; // [rsp+300h] [rbp-500h]
  __int64 v211; // [rsp+308h] [rbp-4F8h]
  __m128i v212; // [rsp+310h] [rbp-4F0h]
  __m128i v213; // [rsp+320h] [rbp-4E0h]
  __int64 v214; // [rsp+330h] [rbp-4D0h]
  __int64 v215; // [rsp+338h] [rbp-4C8h]
  __int64 v216; // [rsp+340h] [rbp-4C0h]
  __int64 v217; // [rsp+348h] [rbp-4B8h]
  __int64 v218; // [rsp+350h] [rbp-4B0h]
  unsigned __int8 v219; // [rsp+358h] [rbp-4A8h]
  _BYTE v220[7]; // [rsp+359h] [rbp-4A7h]
  _QWORD v221[12]; // [rsp+360h] [rbp-4A0h] BYREF
  __m128i v222; // [rsp+3C0h] [rbp-440h] BYREF
  __m128i v223; // [rsp+3D0h] [rbp-430h] BYREF
  char *v224; // [rsp+3E8h] [rbp-418h] BYREF
  char *v225; // [rsp+3F0h] [rbp-410h]
  unsigned __int64 v226; // [rsp+3F8h] [rbp-408h]
  __int64 v227; // [rsp+400h] [rbp-400h] BYREF
  __int64 v228; // [rsp+408h] [rbp-3F8h]
  __int64 v229; // [rsp+410h] [rbp-3F0h]
  __int64 v230; // [rsp+418h] [rbp-3E8h]
  _QWORD *v231; // [rsp+420h] [rbp-3E0h]
  __int128 *v232; // [rsp+428h] [rbp-3D8h]
  __int64 v233; // [rsp+430h] [rbp-3D0h] BYREF
  __int64 v234; // [rsp+438h] [rbp-3C8h]
  unsigned __int64 v235; // [rsp+440h] [rbp-3C0h]
  char *v236; // [rsp+448h] [rbp-3B8h] BYREF
  char *v237; // [rsp+450h] [rbp-3B0h]
  unsigned __int64 v238; // [rsp+458h] [rbp-3A8h]
  _QWORD v239[12]; // [rsp+460h] [rbp-3A0h] BYREF
  void *__src; // [rsp+4C0h] [rbp-340h]
  __int64 v241; // [rsp+4C8h] [rbp-338h]
  unsigned __int64 v242; // [rsp+4D0h] [rbp-330h]
  _QWORD v243[15]; // [rsp+4D8h] [rbp-328h] BYREF
  char *v244; // [rsp+550h] [rbp-2B0h] BYREF
  char *v245; // [rsp+558h] [rbp-2A8h]
  char *v246; // [rsp+560h] [rbp-2A0h]
  void *__dst; // [rsp+568h] [rbp-298h]
  unsigned __int64 v248; // [rsp+570h] [rbp-290h]
  __int64 v249; // [rsp+578h] [rbp-288h]
  char *v250; // [rsp+580h] [rbp-280h]
  char *v251; // [rsp+588h] [rbp-278h] BYREF
  __int64 v252; // [rsp+590h] [rbp-270h]
  char *v253; // [rsp+598h] [rbp-268h]
  char *v254; // [rsp+5A0h] [rbp-260h] BYREF
  char *v255; // [rsp+5A8h] [rbp-258h]
  unsigned __int64 v256; // [rsp+5B0h] [rbp-250h]
  void *v257; // [rsp+5B8h] [rbp-248h] BYREF
  signed __int64 v258; // [rsp+5C0h] [rbp-240h]
  __m128i *v259; // [rsp+5C8h] [rbp-238h]
  __int64 v260; // [rsp+5D0h] [rbp-230h]
  __int64 v261; // [rsp+5D8h] [rbp-228h]
  _BYTE v262[192]; // [rsp+5E0h] [rbp-220h] BYREF
  __int64 v263; // [rsp+6A0h] [rbp-160h] BYREF
  _QWORD *v264; // [rsp+6A8h] [rbp-158h]
  __int64 v265; // [rsp+6B0h] [rbp-150h]
  __m128i v266; // [rsp+6B8h] [rbp-148h] BYREF
  unsigned __int64 v267; // [rsp+6C8h] [rbp-138h] BYREF
  unsigned __int64 v268; // [rsp+6D0h] [rbp-130h] BYREF
  __int64 v269; // [rsp+6D8h] [rbp-128h] BYREF
  _BYTE v270[120]; // [rsp+6E0h] [rbp-120h] BYREF
  __int64 v271; // [rsp+758h] [rbp-A8h]
  __int64 v272; // [rsp+760h] [rbp-A0h]
  __int64 v273; // [rsp+768h] [rbp-98h]
  unsigned __int64 v274; // [rsp+770h] [rbp-90h]
  void *v275; // [rsp+778h] [rbp-88h]
  __m128i v276; // [rsp+780h] [rbp-80h]
  __int64 v277; // [rsp+798h] [rbp-68h]
  volatile signed __int64 *v278; // [rsp+7A0h] [rbp-60h] BYREF
  void *__s2; // [rsp+7A8h] [rbp-58h]
  size_t __n; // [rsp+7B0h] [rbp-50h]
  void *__s1; // [rsp+7B8h] [rbp-48h]
  __m128i v282; // [rsp+7C0h] [rbp-40h]
  char *v283; // [rsp+7D0h] [rbp-30h]

  v4 = a1;
  v243[0] = a3;
  v243[1] = a4;
  if ( a4 != 6 || (v5 = a3, *(_DWORD *)a3 ^ 0x6E65706F | a3[2] ^ 0x6961) && *(_DWORD *)a3 ^ 0x616D6961 | a3[2] ^ 0x3169 )
  {
    *(_QWORD *)v270 = v243;
    *(_QWORD *)&v270[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v262[8], &unk_1017CAC73, v270);
    *(_QWORD *)v262 = 10;
    qmemcpy(a1, v262, 0x60u);
    return v4;
  }
  v231 = a2;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v7 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
  *(_WORD *)(v7 + 4) = v5[2];
  v8 = *(_DWORD *)v5;
  v241 = v7;
  *(_DWORD *)v7 = v8;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(&v233, v231);
  v259 = a1;
  if ( !v235 )
  {
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0;
LABEL_216:
    v133 = v259;
    v259->i64[1] = 6;
    v133[1].i64[0] = v241;
    v133[1].i64[1] = 6;
    v133[2] = v129;
    v133[3] = v132;
    v133[4].i64[0] = v131;
    v133->i64[0] = 11;
    v134 = v234;
    if ( v130 )
    {
      v135 = (_QWORD *)(v234 + 8);
      do
      {
        v136 = *(v135 - 1);
        if ( v136 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v135, v136, 1);
        v135 += 3;
        --v130;
      }
      while ( v130 );
    }
    if ( v233 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, 24 * v233, 8);
    return v259;
  }
  v206 = v234 + 24 * v235;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v232 = v10;
  v222 = 0;
  v11 = v262;
  v223 = 0;
  v261 = 0;
  __src = v5;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v205 = v9;
    v13 = *(_QWORD *)(v9 + 16);
    v257 = v5;
    v258 = 6;
    v14 = v12;
    std::sys::fs::metadata::h32fa16d3052ea535(v262, v12, v13);
    if ( *(_DWORD *)v262 == 1 )
    {
      v15 = 6;
      v16 = __src;
      if ( (v262[8] & 3) == 1 )
      {
        v31 = *(_QWORD *)&v262[8] - 1LL;
        v32 = *(_QWORD *)(*(_QWORD *)&v262[8] - 1LL);
        v33 = *(_QWORD *)(*(_QWORD *)&v262[8] + 7LL);
        if ( *(_QWORD *)v33 )
          (*(void (__fastcall **)(__int64))v33)(v32);
        v34 = *(_QWORD *)(v33 + 8);
        if ( v34 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16));
        v14 = 24;
        v11 = (_BYTE *)v31;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8);
        v15 = v258;
        if ( v258 < 0 )
        {
          v18 = 0;
          goto LABEL_225;
        }
        v16 = v257;
        if ( !v258 )
        {
          __dst = (void *)1;
          v19 = 0;
LABEL_14:
          v20 = (char *)__dst;
          memcpy(__dst, v16, v19);
          v282 = 0;
          v21 = 0;
          v283 = v20;
          v22 = v19;
          v276 = 0;
          v23 = v261;
          if ( !v19 )
            goto LABEL_10;
          goto LABEL_9;
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v14);
      v17 = (void *)v15;
      v18 = 1;
      v19 = (size_t)v17;
      __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1);
      if ( __dst )
        goto LABEL_14;
      __dst = v17;
LABEL_225:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, __dst);
    }
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
      v262,
      v12,
      v13);
    v24 = *(_QWORD *)&v262[8];
    v25 = *(_QWORD *)&v262[24];
    v26 = _mm_loadu_si128((const __m128i *)&v262[32]);
    v27 = _mm_loadu_si128((const __m128i *)&v262[48]);
    v21 = *(_QWORD *)&v262[64];
    *(_QWORD *)v270 = *(_QWORD *)&v262[72];
    *(_QWORD *)&v270[8] = *(_QWORD *)&v262[80];
    *(_QWORD *)&v270[16] = *(_QWORD *)&v262[88];
    if ( v262[104] == 3 )
    {
      v276 = v27;
      v282 = v26;
      v283 = *(char **)&v262[16];
      v271 = *(_QWORD *)v270;
      v272 = *(_QWORD *)&v270[8];
      v273 = *(_QWORD *)&v270[16];
      v28 = *(_QWORD *)v262;
      goto LABEL_88;
    }
    v276.i64[0] = v12;
    *(_DWORD *)&v220[3] = *(_DWORD *)&v262[108];
    *(_DWORD *)v220 = *(_DWORD *)&v262[105];
    v208 = *(_QWORD *)v262;
    v209 = *(_QWORD *)&v262[8];
    v210 = *(sqlite3 **)&v262[16];
    v211 = *(_QWORD *)&v262[24];
    v212 = v26;
    v213 = v27;
    v214 = *(_QWORD *)&v262[64];
    v217 = *(_QWORD *)&v270[16];
    v216 = *(_QWORD *)&v270[8];
    v215 = *(_QWORD *)v270;
    v218 = *(_QWORD *)&v262[96];
    v219 = v262[104];
    codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h29551f1dfa54e579(
      v262,
      &v208);
    v24 = *(_QWORD *)&v262[8];
    v25 = *(_QWORD *)&v262[24];
    v283 = *(char **)&v262[16];
    if ( *(_QWORD *)v262 != 11 )
    {
      v282 = *(__m128i *)&v262[32];
      v276 = _mm_loadu_si128((const __m128i *)&v262[48]);
      v21 = *(_QWORD *)&v262[64];
      v271 = *(_QWORD *)&v262[72];
      v272 = *(_QWORD *)&v262[80];
      v273 = *(_QWORD *)&v262[88];
      v28 = *(_QWORD *)v262;
      goto LABEL_87;
    }
    v203 = *(_QWORD *)&v262[8];
    v204 = *(_OWORD *)&v262[16];
    __n = v258;
    v29 = v207;
    if ( v258 < 0 )
    {
      v176 = 0;
LABEL_227:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v176, v29);
    }
    __s2 = v257;
    v248 = *(_QWORD *)&v262[24];
    v249 = *(_QWORD *)&v262[8];
    if ( v258 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v262, v207);
      v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      if ( !v30 )
      {
        v29 = __n;
        v176 = 1;
        goto LABEL_227;
      }
    }
    else
    {
      v30 = 1;
    }
    v25 = __n;
    v35 = (_QWORD *)v30;
    memcpy((void *)v30, __s2, __n);
    v263 = v25;
    v264 = v35;
    v265 = v25;
    v266 = (__m128i)v248;
    v267 = 0;
    v268 = 0;
    v269 = 0;
    v207 = (size_t)v35;
    if ( !v248 )
    {
      v282 = 0;
      v28 = 11;
      __s2 = v35;
      v21 = 0;
      v276 = 0;
      v55 = v249;
      v56 = v25;
      goto LABEL_84;
    }
    v221[0] = v257;
    v221[1] = v258;
    v282.i64[0] = 72 * v248;
    v36 = 0;
    v37 = v248;
    do
    {
      if ( *(_QWORD *)&v283[v36 + 48] == 0x8000000000000000LL )
      {
        *(_QWORD *)v262 = &v283[v36];
        *(_QWORD *)&v262[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v262[16] = v221;
        *(_QWORD *)&v262[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v270[8], &unk_1017CB201, v262);
LABEL_71:
        v56 = *(_QWORD *)&v270[8];
        __s2 = *(void **)&v270[16];
        __s1 = *(void **)&v270[24];
        v282 = *(__m128i *)&v270[32];
        v276 = _mm_loadu_si128((const __m128i *)&v270[48]);
        v21 = *(_QWORD *)&v270[64];
        v271 = *(_QWORD *)&v270[72];
        v272 = *(_QWORD *)&v270[80];
        v273 = *(_QWORD *)&v270[88];
        v277 = 10;
        v55 = v249;
        goto LABEL_72;
      }
      v38 = *(_QWORD **)&v283[v36 + 56];
      v39 = *(char **)&v283[v36 + 64];
      std::sys::fs::metadata::h32fa16d3052ea535(v262, (char *)v38, v39);
      if ( *(_DWORD *)v262 == 1 )
      {
        if ( (v262[8] & 3) == 1 )
        {
          v276.i64[0] = *(_QWORD *)&v262[8] - 1LL;
          v282.i64[0] = *(_QWORD *)(*(_QWORD *)&v262[8] - 1LL);
          v57 = *(_QWORD *)(*(_QWORD *)&v262[8] + 7LL);
          if ( *(_QWORD *)v57 )
            (*(void (__fastcall **)(__int64))v57)(v282.i64[0]);
          v58 = *(_QWORD *)(v57 + 8);
          if ( v58 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282.i64[0], v58, *(_QWORD *)(v57 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v276.i64[0], 24, 8);
        }
        v59 = &v283[v36];
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          v236 = (char *)v38;
          v237 = v39;
          v243[0] = v59;
          v243[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          v243[2] = &v236;
          v243[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          *(_QWORD *)&v262[48] = 2;
          *(_QWORD *)&v262[56] = &unk_10167D5D6;
          *(_QWORD *)&v262[64] = 51;
          *(_QWORD *)&v262[80] = &unk_1017CB4D7;
          *(_QWORD *)&v262[88] = v243;
          *(_QWORD *)v262 = 0;
          *(_QWORD *)&v262[8] = &unk_10167D5D6;
          *(_QWORD *)&v262[16] = 51;
          *(_QWORD *)&v262[24] = 0;
          *(_QWORD *)&v262[32] = "src/core/relay/codex_thread_visibility.rs";
          *(_QWORD *)&v262[40] = 41;
          *(_QWORD *)&v262[72] = 0x45100000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v199, v262);
        }
        *(_QWORD *)v262 = v59;
        *(_QWORD *)&v262[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v262[16] = v221;
        *(_QWORD *)&v262[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v270[8], &unk_1017CB513, v262);
        goto LABEL_71;
      }
      v36 += 72;
    }
    while ( v282.i64[0] != v36 );
    v42 = v257;
    v43 = v258;
    if ( v37 < 8 )
      goto LABEL_58;
    v44 = v232;
    v45 = *((_BYTE *)v232 + 16) == 1;
    v275 = (void *)v258;
    if ( v45 )
    {
      v46 = *v232;
    }
    else
    {
      *(_QWORD *)&v46 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v262, v232, v40, v41);
      v44 = v232;
      *v232 = v46;
      *((_BYTE *)v44 + 16) = 1;
    }
    *(_QWORD *)v44 = v46 + 1;
    memset(&v262[8], 0, 24);
    *(_QWORD *)v262 = &xmmword_1015FBEC0;
    *(_OWORD *)&v262[32] = v46;
    v47 = 0;
    __s1 = v42;
    while ( 2 )
    {
      if ( *(_QWORD *)&v283[v47 + 48] != 0x8000000000000000LL )
      {
        std::sys::fs::canonicalize::h06efd38dcb2724a4(v270, *(_QWORD *)&v283[v47 + 56], *(_QWORD *)&v283[v47 + 64]);
        if ( *(_QWORD *)v270 == 0x8000000000000000LL )
        {
          v274 = *(_QWORD *)&v270[8];
          v221[0] = *(_QWORD *)&v270[8];
          v48 = *(const void **)&v283[v47 + 56];
          v49 = *(_QWORD *)&v283[v47 + 64];
          if ( v49 )
          {
            v50 = *(const void **)&v283[v47 + 56];
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v270, v48);
            v48 = v50;
            v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v49, 1);
            if ( !v51 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v49);
          }
          else
          {
            v51 = 1;
          }
          memcpy((void *)v51, v48, v49);
          v243[0] = v49;
          v243[1] = v51;
          v243[2] = v49;
          if ( (v274 & 3) == 1 )
          {
            v277 = v274 - 1;
            v52 = *(_QWORD *)(v274 - 1);
            v53 = *(_QWORD *)(v274 + 7);
            if ( *(_QWORD *)v53 )
              (*(void (__fastcall **)(_QWORD))v53)(*(_QWORD *)(v274 - 1));
            v54 = *(_QWORD *)(v53 + 8);
            if ( v54 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v54, *(_QWORD *)(v53 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v277, 24, 8);
          }
          v42 = __s1;
        }
        else
        {
          v243[2] = *(_QWORD *)&v270[16];
          v243[1] = *(_QWORD *)&v270[8];
          v243[0] = *(_QWORD *)v270;
        }
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(v262, v243) )
        {
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb229d8e83351aee(v262);
          v43 = (signed __int64)v275;
LABEL_58:
          codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollouts_serial::heb77275c47a759f1(
            v262,
            v283,
            v37,
            v42,
            v43);
          *(_QWORD *)v270 = *(_QWORD *)v262;
          *(_QWORD *)&v270[8] = *(_QWORD *)&v262[8];
          *(_QWORD *)&v270[16] = *(_QWORD *)&v262[16];
          if ( *(_QWORD *)&v262[24] == 11 )
          {
            v182[0] = *(_QWORD *)v270;
            v182[1] = *(_QWORD *)&v270[8];
            v182[2] = *(_QWORD *)&v270[16];
            codexmate_lib::core::relay::codex_thread_visibility::verify_patched_convergence_rollouts::h2d31580b734281bd(
              &v236,
              v283,
              v37,
              v42,
              v43,
              v182);
            goto LABEL_129;
          }
          qmemcpy(&v239[1], &v262[32], 0x58u);
          v236 = *(char **)v270;
          v237 = *(char **)&v270[8];
          v238 = *(_QWORD *)&v270[16];
          v239[0] = *(_QWORD *)&v262[24];
LABEL_135:
          v92 = v236;
          v93 = v237;
          v94 = v238;
          qmemcpy(v180, v239, sizeof(v180));
          codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
            v262,
            v237,
            v238,
            v180);
          v277 = *(_QWORD *)v262;
          __n = *(_QWORD *)&v262[8];
          __s2 = *(void **)&v262[16];
          __s1 = *(void **)&v262[24];
          v282 = *(__m128i *)&v262[32];
          v276 = _mm_loadu_si128((const __m128i *)&v262[48]);
          v21 = *(_QWORD *)&v262[64];
          v271 = *(_QWORD *)&v262[72];
          v272 = *(_QWORD *)&v262[80];
          v273 = *(_QWORD *)&v262[88];
          if ( v94 )
          {
            v95 = v93;
            do
            {
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v95);
              v95 += 120;
              --v94;
            }
            while ( v94 );
          }
          if ( v92 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, 120LL * (_QWORD)v92, 8);
          v55 = v249;
          v60 = v283;
          v56 = __n;
          v37 = v248;
          v61 = v263;
          if ( v263 )
            goto LABEL_73;
          goto LABEL_74;
        }
      }
      v47 += 72;
      if ( v282.i64[0] != v47 )
        continue;
      break;
    }
    HIDWORD(_RAX) = *(_DWORD *)&v262[12];
    if ( *(_QWORD *)&v262[8] )
    {
      v274 = *(_QWORD *)&v262[8];
      v67 = *(_QWORD *)&v262[24];
      if ( *(_QWORD *)&v262[24] )
      {
        v68 = *(_QWORD *)v262;
        _EBX = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v262));
        v70 = (const __m128i *)(*(_QWORD *)v262 + 16LL);
        do
        {
          if ( !(_WORD)_EBX )
          {
            do
            {
              v71 = _mm_movemask_epi8(_mm_load_si128(v70));
              v68 -= 384;
              ++v70;
            }
            while ( v71 == 0xFFFF );
            _EBX = ~v71;
          }
          __asm { tzcnt   eax, ebx }
          v72 = -3 * _RAX;
          v73 = *(_QWORD *)(v68 + 8 * v72 - 24);
          if ( v73 )
          {
            v74 = *(_QWORD *)(v68 + 8 * v72 - 16);
            v282.i64[0] = v67;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1);
            v67 = v282.i64[0];
          }
          --v67;
          _RAX = _EBX & (unsigned int)(_EBX - 1);
          _EBX &= _EBX - 1;
        }
        while ( v67 );
      }
      v75 = (24 * v274 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v42 = __s1;
      if ( v75 + v274 != -17 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v262 - v75, v75 + v274 + 17, 16);
    }
    *(_QWORD *)v262 = 0;
    *(_QWORD *)&v262[16] = 4;
    *(_QWORD *)&v262[24] = 0;
    *(_QWORD *)&v262[40] = 1;
    *(_QWORD *)&v262[48] = &anon_338d2c24067067f307e22096ebff88a8_1;
    *(_QWORD *)&v262[56] = 0;
    *(_QWORD *)&v262[72] = 0;
    *(_WORD *)&v262[88] = 0;
    rayon_core::registry::Registry::new::hb2bc9749757c351b(v270, v262);
    v76 = (int)v275;
    if ( *(_QWORD *)v270 != 3 )
    {
      v221[0] = *(_QWORD *)v270;
      v221[1] = *(_QWORD *)&v270[8];
      *(_QWORD *)v262 = 0;
      *(_QWORD *)&v262[8] = 8;
      *(_QWORD *)&v262[16] = 0;
      *(_QWORD *)v270 = v221;
      *(_QWORD *)&v270[8] = _$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v181, &unk_1017CB760, v270);
      *(_QWORD *)v270 = v181[0];
      *(_QWORD *)&v270[8] = v181[1];
      *(_QWORD *)&v270[16] = v181[2];
      v254 = *(char **)v262;
      v255 = *(char **)&v262[8];
      v256 = *(_QWORD *)&v262[16];
      if ( LODWORD(v221[0]) >= 2 && (v221[1] & 3) == 1 )
      {
        v282.i64[0] = v221[1] - 1LL;
        v85 = *(_QWORD *)(v221[1] - 1LL);
        v86 = *(_QWORD *)(v221[1] + 7LL);
        if ( *(_QWORD *)v86 )
          (*(void (__fastcall **)(__int64))v86)(v85);
        v87 = *(_QWORD *)(v86 + 8);
        if ( v87 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v87, *(_QWORD *)(v86 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282.i64[0], 24, 8);
        v76 = (int)v275;
        LODWORD(v42) = (_DWORD)__s1;
      }
      v88 = 10;
      goto LABEL_128;
    }
    v278 = *(volatile signed __int64 **)&v270[8];
    *(_QWORD *)v262 = v283;
    *(_QWORD *)&v262[8] = v37;
    *(_QWORD *)&v262[16] = v42;
    *(_QWORD *)&v262[24] = v275;
    rayon_core::registry::Registry::in_worker::h4025bb32ae8eaf8e(&v200, *(_QWORD *)&v270[8] + 128LL, v262);
    v77 = v202;
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v262, v202, 0, 8, 192);
    if ( *(_DWORD *)v262 == 1 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&v262[8], *(_QWORD *)&v262[16]);
    v244 = *(char **)&v262[8];
    v245 = *(char **)&v262[16];
    v246 = nullptr;
    v251 = nullptr;
    v252 = 8;
    v253 = nullptr;
    *(_QWORD *)&v199[0] = 11;
    v78 = v77;
    v79 = 192 * v77;
    v227 = v201;
    v228 = v201;
    v229 = v200;
    v282.i64[0] = v201 + v79;
    v230 = v201 + v79;
    if ( v78 )
    {
      v80 = v201 + 192;
      while ( 1 )
      {
        v81 = *(_QWORD *)(v80 - 192);
        if ( v81 == 0x8000000000000001LL )
          break;
        v82 = (const void *)(v80 - 184);
        qmemcpy(v221, (const void *)(v80 - 184), sizeof(v221));
        qmemcpy(v179, (const void *)(v80 - 88), sizeof(v179));
        if ( v81 == 0x8000000000000000LL )
        {
          qmemcpy(v262, v82, 0x60u);
          if ( LODWORD(v199[0]) == 11 )
            qmemcpy(v199, v82, sizeof(v199));
          else
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v262);
        }
        else
        {
          *(_QWORD *)v262 = v81;
          qmemcpy(&v262[8], v221, 0x60u);
          qmemcpy(&v262[104], v179, 0x58u);
          if ( *(_QWORD *)&v262[72] != 0x8000000000000000LL )
          {
            _$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$u20$as$u20$core..clone..Clone$GT$::clone::h523d68ed5c49ca83(
              v270,
              &v262[72]);
            qmemcpy(v243, v270, sizeof(v243));
            v83 = v253;
            if ( v253 == v251 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h1b084316e5dd5683(&v251);
            qmemcpy((void *)(v252 + 120LL * (_QWORD)v83), v243, 0x78u);
            v253 = v83 + 1;
          }
          v84 = (__int64)v246;
          if ( v246 == (_QWORD *)v244 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he120a85c2e37736d(&v244);
          memmove(&v245[192 * v84], v262, 0xC0u);
          v246 = (_QWORD *)(v84 + 1);
        }
        v80 += 192;
        v79 -= 192;
        if ( !v79 )
        {
          v80 = v282.i64[0];
          break;
        }
      }
      v228 = v80;
    }
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha9dd3ca791ffeead(&v227);
    v88 = *(_QWORD *)&v199[0];
    LODWORD(v42) = (_DWORD)__s1;
    if ( *(_QWORD *)&v199[0] != 11 )
    {
      *(_OWORD *)&v270[8] = v199[1];
      *(_QWORD *)v270 = *((_QWORD *)&v199[0] + 1);
      *(_OWORD *)v262 = v199[2];
      *(_OWORD *)&v262[16] = v199[3];
      *(_OWORD *)&v262[32] = v199[4];
      *(_OWORD *)&v262[48] = v199[5];
      v256 = (unsigned __int64)v253;
      v255 = (char *)v252;
      v254 = v251;
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a16eb385c5b8308(&v244);
      v76 = (int)v275;
      if ( v244 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v245, 192LL * (_QWORD)v244, 8);
      _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v278);
      if ( !_InterlockedDecrement64(v278) )
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v278);
LABEL_128:
      v189 = v88;
      v192 = *(_QWORD *)&v270[16];
      v191 = *(_QWORD *)&v270[8];
      v190 = *(_QWORD *)v270;
      v198 = *(_OWORD *)&v262[48];
      v197 = *(_OWORD *)&v262[32];
      v196 = *(_QWORD *)&v262[24];
      v195 = *(_QWORD *)&v262[16];
      v194 = *(_QWORD *)&v262[8];
      v193 = *(_QWORD *)v262;
      codexmate_lib::core::relay::codex_thread_visibility::retry_convergence_rollouts_serial::h94c518a5fe0b9c74(
        (unsigned int)&v236,
        (_DWORD)v283,
        v37,
        (_DWORD)v42,
        v76,
        (unsigned int)&v254,
        (__int64)&v189);
      goto LABEL_129;
    }
    v256 = (unsigned __int64)v246;
    v255 = v245;
    v254 = v244;
    v110 = v253;
    if ( v253 )
    {
      v111 = v252;
      do
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v111);
        v111 += 120;
        --v110;
      }
      while ( v110 );
    }
    if ( v251 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v252, 120LL * (_QWORD)v251, 8);
    _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v278);
    v112 = v275;
    if ( !_InterlockedDecrement64(v278) )
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v278);
    v113 = (__int64)v112;
    v114 = v254;
    v115 = v255;
    v116 = (int)v42;
    v117 = v256;
    codexmate_lib::core::relay::codex_thread_visibility::verify_convergence_rollout_targets::he70d6027738f6e4a(
      (unsigned int)v178,
      (_DWORD)v283,
      v37,
      (_DWORD)v255,
      v256,
      v116,
      v113);
    if ( v178[0] == 11 )
    {
      v238 = v256;
      v237 = v255;
      v236 = v254;
      v239[0] = 11;
    }
    else
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h733a6396f938f466(
        v177,
        v115,
        &v115[192 * v117]);
      qmemcpy(v262, v178, 0x60u);
      codexmate_lib::core::relay::codex_thread_visibility::retry_convergence_rollouts_serial::h94c518a5fe0b9c74(
        (unsigned int)&v236,
        (_DWORD)v283,
        v37,
        (_DWORD)__s1,
        (_DWORD)v275,
        (unsigned int)v177,
        (__int64)v262);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a16eb385c5b8308(&v254);
      if ( v114 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 192LL * (_QWORD)v114, 8);
    }
LABEL_129:
    if ( v239[0] != 11 )
      goto LABEL_135;
    v226 = v238;
    v225 = v237;
    v224 = v236;
    v274 = v238;
    v250 = v237;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h733a6396f938f466(
      &v189,
      v237,
      &v237[192 * v238]);
    v260 = v191;
    v269 = v191;
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
      v262,
      &v208,
      *(&off_1019753C8 + (unsigned int)v219),
      qword_10167F028[v219]);
    v242 = 0x8000000000000016LL;
    if ( *(_QWORD *)v262 != 0x8000000000000016LL )
    {
      v243[7] = *(_QWORD *)&v262[56];
      *(_OWORD *)((char *)&v243[5] + 1) = *(_OWORD *)&v262[41];
      *(_QWORD *)((char *)&v243[4] + 1) = *(_QWORD *)&v262[33];
      *(_OWORD *)((char *)&v243[2] + 1) = *(_OWORD *)&v262[17];
      v243[0] = *(_QWORD *)v262;
      v243[1] = *(_QWORD *)&v262[8];
      LOBYTE(v243[2]) = v262[16];
      v104 = v190;
      v236 = (char *)v243;
      v237 = (char *)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v187, &unk_1017CA91C, &v236);
      *(_QWORD *)&v262[24] = v187[2];
      *(_QWORD *)&v262[16] = v187[1];
      *(_QWORD *)&v262[8] = v187[0];
      *(_QWORD *)v262 = 10;
      codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
        v270,
        v104,
        v260,
        v262);
      __n = v104;
      v277 = *(_QWORD *)v270;
      v56 = *(_QWORD *)&v270[8];
      __s2 = *(void **)&v270[16];
      __s1 = *(void **)&v270[24];
      v282 = *(__m128i *)&v270[32];
      v276 = _mm_loadu_si128((const __m128i *)&v270[48]);
      v21 = *(_QWORD *)&v270[64];
      v271 = *(_QWORD *)&v270[72];
      v272 = *(_QWORD *)&v270[80];
      v273 = *(_QWORD *)&v270[88];
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v243);
      goto LABEL_196;
    }
    v89 = v37;
    if ( v274 < v37 )
      v89 = v274;
    if ( v274 )
      break;
LABEL_164:
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(&v236, &v208, &unk_10167EFAD, 6);
    if ( v208 >= 0x7FFFFFFFFFFFFFFFLL )
      core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
    ++v208;
    autocommit = sqlite3_get_autocommit(v210);
    --v208;
    if ( !autocommit )
    {
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v262, &v208, &unk_1015FBFE8, 8);
      if ( *(_QWORD *)v262 != v242 )
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v262);
    }
    if ( v236 != (char *)v242 )
    {
      v243[7] = v239[4];
      v243[6] = v239[3];
      v243[5] = v239[2];
      v243[4] = v239[1];
      v243[3] = v239[0];
      v243[2] = v238;
      v243[1] = v237;
      v243[0] = v236;
      v107 = v190;
      v221[0] = v243;
      v221[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v183, &unk_1017CA83F, v221);
      *(_QWORD *)&v262[24] = v183[2];
      *(_QWORD *)&v262[16] = v183[1];
      *(_QWORD *)&v262[8] = v183[0];
      *(_QWORD *)v262 = 10;
      codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
        v270,
        v107,
        v260,
        v262);
      __n = v107;
      v108 = *(_QWORD *)v270;
      v56 = *(_QWORD *)&v270[8];
      v109 = *(void **)&v270[16];
      __s1 = *(void **)&v270[24];
      v282 = *(__m128i *)&v270[32];
      v276 = _mm_loadu_si128((const __m128i *)&v270[48]);
      v21 = *(_QWORD *)&v270[64];
      v271 = *(_QWORD *)&v270[72];
      v272 = *(_QWORD *)&v270[80];
      v273 = *(_QWORD *)&v270[88];
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v243);
      __s2 = v109;
      v277 = v108;
      goto LABEL_196;
    }
    codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::h67b31aee3cf0b26a(
      (__int64)&v208,
      (__int64)"thread provider convergence",
      27);
    v106 = v267;
    if ( v267 )
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
      {
        v243[0] = v276.i64[0];
        v243[1] = v13;
        *(_QWORD *)v262 = v243;
        *(_QWORD *)&v262[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        *(_QWORD *)&v262[16] = &v257;
        *(_QWORD *)&v262[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        *(_QWORD *)&v262[32] = &v266;
        *(_QWORD *)&v262[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&v262[48] = &v267;
        *(_QWORD *)&v262[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&v262[64] = &v268;
        *(_QWORD *)&v262[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&v262[80] = &v269;
        *(_QWORD *)&v262[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)v270 = &unk_10167D5D6;
        *(_QWORD *)&v270[8] = 51;
        *(_QWORD *)&v270[16] = &unk_10167D5D6;
        *(_QWORD *)&v270[24] = 51;
        *(_QWORD *)&v270[32] = &off_101974888;
        log::__private_api::log::h719f4907c7336ae9(&unk_1017CA86D, v262, 3, v270);
        v106 = v267;
      }
    }
    else
    {
      v106 = 0;
    }
    v118 = v263;
    v283 = (char *)v264;
    v282 = _mm_loadu_si128(&v266);
    v119 = v268;
    v21 = v269;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$$GT$::h82ad24c16a5e9d85(&v189);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..RolloutConvergenceResult$GT$$GT$::hb718d680f676f0b4((char **)&v224);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..ProviderConvergenceTarget$GT$$GT$::h15b353006b1200d8(&v203);
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v208);
    v276 = _mm_unpacklo_epi64((__m128i)v106, (__m128i)v119);
    v23 = v261;
    v22 = v118;
    if ( v118 )
      goto LABEL_9;
LABEL_10:
    v9 = v205 + 24;
    v222 = _mm_add_epi64(_mm_load_si128(&v222), v282);
    v223 = _mm_add_epi64(_mm_load_si128(&v223), v276);
    v261 = v21 + v23;
    v5 = __src;
    v11 = v262;
    if ( v205 + 24 == v206 )
    {
      v130 = v235;
      if ( v235 > 1 )
      {
        v137 = v231;
        codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337(
          v262,
          v231,
          __src,
          6);
        if ( *(_QWORD *)&v262[80]
          || *(_QWORD *)&v262[88]
          || *(_QWORD *)&v262[96]
          || __PAIR128__(*(unsigned __int64 *)&v262[104], 0) != *(unsigned __int64 *)&v262[40] )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v262, v137);
          v138 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
          if ( !v138 )
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
          v139 = (_QWORD *)v138;
          *(_QWORD *)v270 = v262;
          *(_QWORD *)&v270[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v179, &unk_1017CB0A3, v270);
          v139[2] = v179[2];
          v140 = v179[0];
          v139[1] = v179[1];
          *v139 = v140;
          v263 = 1;
          v264 = v139;
          v265 = 1;
          if ( *(_QWORD *)&v262[80] )
          {
            *(_QWORD *)v270 = &v262[80];
            *(_QWORD *)&v270[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, &unk_1017CB0AD, v270);
            v141 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v142 = v264;
            v143 = 3 * v141;
            v264[v143 + 2] = v180[2];
            v144 = v180[0];
            v142[v143 + 1] = v180[1];
            v142[v143] = v144;
            v145 = v141 + 1;
            v265 = v145;
          }
          else
          {
            v145 = 1;
          }
          if ( *(_QWORD *)&v262[88] )
          {
            *(_QWORD *)v270 = &v262[88];
            *(_QWORD *)&v270[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v189, &unk_1017CB0BE, v270);
            v148 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v149 = v264;
            v150 = 3 * v148;
            v264[v150 + 2] = v191;
            v151 = v189;
            v149[v150 + 1] = v190;
            v149[v150] = v151;
            v145 = v148 + 1;
            v265 = v145;
          }
          if ( *(_QWORD *)&v262[96] )
          {
            *(_QWORD *)v270 = &v262[96];
            *(_QWORD *)&v270[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v199, &unk_1017CB0D4, v270);
            v152 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v153 = v264;
            v154 = 3 * v152;
            v264[v154 + 2] = *(_QWORD *)&v199[1];
            *(_OWORD *)&v153[v154] = v199[0];
            v145 = v152 + 1;
            v265 = v145;
          }
          if ( *(_QWORD *)&v262[104] )
          {
            *(_QWORD *)v270 = &v262[104];
            *(_QWORD *)&v270[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v221, &unk_1017CB0E8, v270);
            v155 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v156 = v264;
            v157 = 3 * v155;
            v264[v157 + 2] = v221[2];
            v158 = v221[0];
            v156[v157 + 1] = v221[1];
            v156[v157] = v158;
            v145 = v155 + 1;
            v265 = v145;
          }
          if ( *(_QWORD *)&v262[40] )
          {
            v243[0] = *(_QWORD *)&v262[40];
            *(_QWORD *)v270 = v243;
            *(_QWORD *)&v270[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v208, &unk_1017CB0FF, v270);
            v159 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v160 = v264;
            v161 = 3 * v159;
            v264[v161 + 2] = v210;
            v162 = v208;
            v160[v161 + 1] = v209;
            v160[v161] = v162;
            v145 = v159 + 1;
            v265 = v145;
          }
          if ( *(_QWORD *)&v262[64] )
          {
            alloc::str::join_generic_copy::heca7a5e86402c6b6(
              v270,
              *(_QWORD *)&v262[56],
              *(_QWORD *)&v262[64],
              &unk_10167DB6B,
              3);
            v243[2] = *(_QWORD *)&v270[16];
            v243[1] = *(_QWORD *)&v270[8];
            v243[0] = *(_QWORD *)v270;
            *(_QWORD *)v270 = v243;
            *(_QWORD *)&v270[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v236, &unk_1017CB10E, v270);
            if ( v243[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243[1], v243[0], 1);
            v163 = v265;
            if ( v265 == v263 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v263);
            v164 = v264;
            v165 = 3 * v163;
            v264[v165 + 2] = v238;
            v166 = v236;
            v164[v165 + 1] = v237;
            v164[v165] = v166;
            v145 = v163 + 1;
            v265 = v145;
          }
          alloc::str::join_generic_copy::heca7a5e86402c6b6(
            v270,
            v264,
            v145,
            ", codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
            2);
          v243[2] = *(_QWORD *)&v270[16];
          v243[1] = *(_QWORD *)&v270[8];
          v243[0] = *(_QWORD *)v270;
          v167 = v265;
          if ( v265 )
          {
            v168 = v264 + 1;
            do
            {
              v169 = *(v168 - 1);
              if ( v169 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v168, v169, 1);
              v168 += 3;
              --v167;
            }
            while ( v167 );
          }
          if ( v263 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264, 24 * v263, 8);
          *(_QWORD *)v270 = v243;
          *(_QWORD *)&v270[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v188, &unk_1017CADBD, v270);
          v170 = (__int64 *)v259;
          if ( v243[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243[1], v243[0], 1);
          v170[3] = v188[2];
          v171 = v188[0];
          v170[2] = v188[1];
          v170[1] = v171;
          *v170 = 10;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(v262);
          goto LABEL_273;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(v262);
      }
      v129 = _mm_load_si128(&v222);
      v132 = _mm_load_si128(&v223);
      v131 = v261;
      goto LABEL_216;
    }
  }
  v90 = (__int64 *)(v250 + 64);
  v91 = v283;
  while ( 1 )
  {
    v96 = *(v90 - 3);
    __s1 = (void *)*(v90 - 4);
    v282.i64[0] = v96;
    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33() )
      goto LABEL_144;
    v97 = *v90;
    v275 = (void *)*(v90 - 1);
    v277 = v97;
    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33() )
      goto LABEL_144;
    v98 = (const void **)v91;
    v99 = __n;
    v100 = (char *)v98;
    if ( v98[5] == (const void *)__n )
      LOBYTE(v101) = memcmp(v98[4], __s2, __n) == 0;
    else
      v101 = 0;
    v102 = 1;
    if ( v282.i64[0] != v99 )
    {
      v91 = v100;
      goto LABEL_158;
    }
    v282.i32[0] = v101;
    v103 = memcmp(__s1, __s2, v99);
    if ( v277 != v99 )
      break;
    v91 = v100;
    LOBYTE(v101) = v282.i8[0];
    v102 = 1;
    if ( !v103 )
    {
      v102 = memcmp(v275, __s2, __n) != 0;
      if ( !v282.i8[0] )
        goto LABEL_154;
      goto LABEL_159;
    }
LABEL_158:
    if ( !(_BYTE)v101 )
      goto LABEL_154;
LABEL_159:
    v37 = v248;
    if ( !v102 )
    {
      ++v266.i64[1];
      goto LABEL_144;
    }
LABEL_143:
    ++v267;
LABEL_144:
    v90 += 24;
    v91 += 72;
    if ( !--v89 )
      goto LABEL_164;
  }
  v91 = v100;
  v102 = 1;
  if ( v282.i8[0] )
    goto LABEL_159;
LABEL_154:
  *(_QWORD *)&v199[0] = v91;
  *((_QWORD *)&v199[0] + 1) = &off_1019747D0;
  *(_QWORD *)&v199[1] = &v257;
  *((_QWORD *)&v199[1] + 1) = &unk_1019747F0;
  rusqlite::Connection::execute::h1e8b76b744a4c88a(&v236, &v208, &unk_10167D562, 52, v199, 2);
  v37 = v248;
  if ( v236 == (char *)v242 )
  {
    if ( !v237 )
    {
      __n = v190;
      v243[0] = v91;
      v243[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v184, &unk_1017CA8BE, v243);
      *(_OWORD *)&v262[16] = v185;
      *(_QWORD *)&v262[8] = v184;
      *(_QWORD *)v262 = 10;
      codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
        v270,
        __n,
        v260,
        v262);
      v121 = *(_QWORD *)v270;
      v56 = *(_QWORD *)&v270[8];
      v122 = *(void **)&v270[16];
      __s1 = *(void **)&v270[24];
      v282 = *(__m128i *)&v270[32];
      v276 = _mm_loadu_si128((const __m128i *)&v270[48]);
      v21 = *(_QWORD *)&v270[64];
      v271 = *(_QWORD *)&v270[72];
      v272 = *(_QWORD *)&v270[80];
      v273 = *(_QWORD *)&v270[88];
      goto LABEL_195;
    }
    ++v268;
    goto LABEL_143;
  }
  v243[7] = v239[4];
  v243[6] = v239[3];
  v243[5] = v239[2];
  v243[4] = v239[1];
  v243[3] = v239[0];
  v243[2] = v238;
  v243[1] = v237;
  v243[0] = v236;
  v120 = v190;
  v221[0] = v91;
  v221[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  v221[2] = v243;
  v221[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017CA8F0, v221);
  *(_QWORD *)&v262[24] = v186[2];
  *(_QWORD *)&v262[16] = v186[1];
  *(_QWORD *)&v262[8] = v186[0];
  *(_QWORD *)v262 = 10;
  codexmate_lib::core::relay::codex_thread_visibility::with_convergence_rollout_rollback::h024811f90dbd1b3a(
    v270,
    v120,
    v260,
    v262);
  __n = v120;
  v121 = *(_QWORD *)v270;
  v56 = *(_QWORD *)&v270[8];
  v122 = *(void **)&v270[16];
  __s1 = *(void **)&v270[24];
  v282 = *(__m128i *)&v270[32];
  v276 = _mm_loadu_si128((const __m128i *)&v270[48]);
  v21 = *(_QWORD *)&v270[64];
  v271 = *(_QWORD *)&v270[72];
  v272 = *(_QWORD *)&v270[80];
  v273 = *(_QWORD *)&v270[88];
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v243);
LABEL_195:
  __s2 = v122;
  v277 = v121;
  core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::heb3566c666645b77(&v208);
LABEL_196:
  v123 = v260;
  if ( v260 )
  {
    v124 = __n;
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v124);
      v124 += 120LL;
      --v123;
    }
    while ( v123 );
  }
  if ( v189 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 120 * v189, 8);
    v250 = v225;
    v274 = v226;
  }
  v55 = v249;
  if ( v274 )
  {
    v125 = v250 + 72;
    do
    {
      v126 = *(v125 - 9);
      if ( v126 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v125 - 8), v126, 1);
      v127 = *(v125 - 6);
      if ( v127 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v125 - 5), v127, 1);
      v128 = *(v125 - 3);
      if ( v128 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v125 - 2), v128, 1);
      if ( *v125 != 0x8000000000000000LL )
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v125);
      v125 += 24;
      --v274;
    }
    while ( v274 );
  }
  if ( v224 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v250, 192LL * (_QWORD)v224, 8);
LABEL_72:
  v60 = v283;
  v61 = v263;
  if ( v263 )
LABEL_73:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264, v61, 1);
LABEL_74:
  v62 = v60 + 56;
  while ( 2 )
  {
    v63 = *(v62 - 7);
    if ( v63 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v62 - 6), v63, 1);
    v64 = *(v62 - 1);
    if ( 2 * v64 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v64, 1);
      v65 = *(v62 - 4);
      if ( !v65 )
        goto LABEL_75;
      goto LABEL_82;
    }
    v65 = *(v62 - 4);
    if ( v65 )
LABEL_82:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v62 - 3), v65, 1);
LABEL_75:
    v62 += 9;
    if ( --v37 )
      continue;
    break;
  }
  v25 = (size_t)__s1;
  v28 = v277;
LABEL_84:
  if ( v55 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v283, 72 * v55, 8);
  v283 = (char *)__s2;
  v24 = v56;
LABEL_87:
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v208);
LABEL_88:
  if ( v28 == 11 )
  {
    v23 = v261;
    v22 = v24;
    if ( !v24 )
      goto LABEL_10;
LABEL_9:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v283, v22, 1);
    goto LABEL_10;
  }
  v146 = v259;
  v259[5].i64[1] = v273;
  v147 = v271;
  v146[5].i64[0] = v272;
  v146[4].i64[1] = v147;
  v146[2] = v282;
  v146[3] = v276;
  v146[4].i64[0] = v21;
  v146->i64[0] = v28;
  v146->i64[1] = v24;
  v146[1].i64[0] = (__int64)v283;
  v146[1].i64[1] = v25;
LABEL_273:
  v172 = v234;
  v173 = v235;
  if ( v235 )
  {
    v174 = (_QWORD *)(v234 + 8);
    do
    {
      v175 = *(v174 - 1);
      if ( v175 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v174, v175, 1);
      v174 += 3;
      --v173;
    }
    while ( v173 );
  }
  if ( v233 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, 24 * v233, 8);
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v241, 6, 1);
  return v259;
}
