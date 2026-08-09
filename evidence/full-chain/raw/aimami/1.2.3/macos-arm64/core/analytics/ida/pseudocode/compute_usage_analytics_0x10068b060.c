// __ZN13codexmate_lib4core9analytics23compute_usage_analytics @ 0x10068b060 | 基线 same-set
// [FULL hexrays]

__int64 __fastcall codexmate_lib::core::analytics::compute_usage_analytics::hdee5a18885b88118(
        __int64 a1,
        _QWORD *a2,
        __m128i si128)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __m128i *v7; // rbx
  __int64 v8; // rsi
  const __m128i *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r15
  int v17; // r14d
  const __m128i *v18; // r14
  __m128i *v19; // r14
  __int64 v20; // rsi
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // edx
  __m128i *v36; // rsi
  char v37; // al
  __int64 v38; // rbx
  const __m128i **v39; // r13
  const __m128i **v41; // rdi
  __int64 v42; // r14
  const __m128i **v43; // r12
  const __m128i **v44; // r14
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rsi
  char v48; // al
  __int64 v49; // r15
  const __m128i *v51; // r14
  const __m128i *v52; // rdx
  int v53; // ecx
  unsigned __int64 v54; // rax
  __int8 *v55; // r14
  __m128i v56; // xmm1
  __int64 v57; // rbx
  size_t v58; // rax
  __m128i v59; // xmm2
  size_t v61; // r15
  __int64 v62; // r12
  unsigned __int32 v63; // eax
  __int64 v64; // r12
  char v65; // al
  size_t v66; // rdx
  __int64 v67; // rdx
  __m128i *v68; // rax
  __m128i *v69; // rdi
  __m128i *v70; // r15
  int *v71; // rsi
  __m128i **v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v78; // rsi
  long double *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __m128i **v85; // r13
  __m128i **v86; // r12
  const __m128i *v87; // rdx
  __int64 v88; // rcx
  __m128i *v89; // r14
  const __m128i *v90; // rax
  unsigned __int64 v91; // r8
  char v94; // r8
  size_t v95; // r10
  unsigned __int64 v96; // rsi
  __int64 v97; // r15
  __int64 v98; // r10
  int v100; // edx
  __m128i *v101; // rsi
  __int64 v102; // rdi
  unsigned __int64 v104; // rax
  const __m128i *v105; // r15
  __int64 v106; // rsi
  __m128i v107; // xmm1
  const __m128i *v108; // r14
  size_t v109; // r13
  size_t v110; // r9
  __m128i v111; // xmm2
  unsigned __int64 v112; // rax
  __m128i v113; // xmm3
  __m128i v114; // xmm0
  __int64 v116; // rbx
  unsigned int v117; // eax
  __int64 v118; // r15
  unsigned __int64 v119; // r12
  __int64 v120; // rbx
  unsigned __int64 v121; // rsi
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // r13
  const __m128i *v124; // rax
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rcx
  const __m128i *v129; // rcx
  __m128i v130; // xmm0
  unsigned __int64 v131; // rdx
  __m128i v132; // xmm1
  __m128i v133; // xmm1
  unsigned __int64 v134; // rcx
  _QWORD *v135; // rax
  const char *v136; // rax
  __int64 v137; // r8
  __int64 v138; // rsi
  __m128i *v139; // rcx
  size_t v140; // rax
  unsigned __int64 v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rbx
  unsigned __int64 v144; // rcx
  __int64 v145; // r9
  __int64 v146; // rsi
  __int64 v147; // r10
  __int64 v148; // rdi
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // r9
  const __m128i *v152; // rcx
  const __m128i *v153; // rsi
  int i; // edi
  __int16 v155; // dx
  __int64 v157; // r8
  int v158; // edx
  __m128i *v159; // rbx
  __int64 v160; // rax
  const __m128i *v162; // rcx
  const __m128i *v163; // rdi
  int j; // edx
  __int16 v166; // r10
  __int64 v167; // rdx
  __int64 v168; // rax
  const __m128i *v169; // r12
  __m128d v170; // xmm1
  __int64 v171; // rax
  const __m128i *v172; // r13
  __int64 v173; // rax
  __int64 v174; // rcx
  size_t v175; // r15
  unsigned __int64 v176; // r14
  __m128i v177; // xmm1
  size_t v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // r14
  __m128i v182; // xmm2
  __int64 v184; // r15
  int v185; // eax
  unsigned __int64 v186; // r14
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // r12
  __int64 v190; // rax
  __int64 v191; // rcx
  __m128d v192; // xmm1
  __m128d v193; // xmm0
  int v194; // r15d
  unsigned __int64 v195; // r14
  unsigned __int64 v196; // r13
  __m128i *v197; // rbx
  unsigned __int64 k; // r12
  __int64 v199; // rax
  __int64 v200; // rcx
  unsigned __int64 v201; // r14
  size_t v202; // r15
  unsigned __int64 v203; // r13
  __int64 v204; // rdx
  double v205; // xmm0_8
  __int64 v206; // r14
  __int64 v207; // rsi
  const __m128i **v208; // rdi
  __int64 v209; // rdx
  __int64 v210; // rcx
  const __m128i ***v211; // rbx
  unsigned __int64 v213; // rbx
  __int64 v214; // r13
  unsigned __int64 v215; // rsi
  __int64 v216; // rbx
  __int64 v217; // rbx
  int v218; // eax
  _QWORD *v219; // rdi
  __int64 v220; // rax
  __int64 *v221; // rcx
  __int64 v222; // rdx
  _QWORD *v223; // r8
  __int64 v224; // r9
  __int64 v225; // rsi
  __int64 v226; // r8
  long double __x; // [rsp+0h] [rbp-310h]
  long double __xa; // [rsp+0h] [rbp-310h]
  _BYTE v229[24]; // [rsp+20h] [rbp-2F0h] BYREF
  _QWORD *v230; // [rsp+38h] [rbp-2D8h]
  _QWORD *v231; // [rsp+40h] [rbp-2D0h]
  double v232; // [rsp+48h] [rbp-2C8h]
  __int64 v233; // [rsp+50h] [rbp-2C0h]
  unsigned __int64 v234; // [rsp+58h] [rbp-2B8h]
  __int64 v235; // [rsp+60h] [rbp-2B0h]
  unsigned __int64 v236; // [rsp+68h] [rbp-2A8h]
  __int64 v237; // [rsp+70h] [rbp-2A0h]
  size_t v238; // [rsp+78h] [rbp-298h]
  __m128i v239; // [rsp+80h] [rbp-290h] BYREF
  __int64 *v240; // [rsp+90h] [rbp-280h] BYREF
  __int64 v241; // [rsp+98h] [rbp-278h]
  __int64 v242; // [rsp+A0h] [rbp-270h]
  __int64 v243; // [rsp+A8h] [rbp-268h]
  const char *v244; // [rsp+B0h] [rbp-260h]
  double v245; // [rsp+B8h] [rbp-258h]
  __int64 v246; // [rsp+C0h] [rbp-250h]
  __m128i *v247; // [rsp+C8h] [rbp-248h]
  _BYTE *v248; // [rsp+D0h] [rbp-240h] BYREF
  size_t v249; // [rsp+D8h] [rbp-238h]
  const char *v250; // [rsp+E0h] [rbp-230h]
  __int64 v251; // [rsp+E8h] [rbp-228h]
  __int64 v252; // [rsp+F0h] [rbp-220h]
  __int64 v253; // [rsp+F8h] [rbp-218h]
  __m128i v254; // [rsp+100h] [rbp-210h] BYREF
  __m128i v255; // [rsp+110h] [rbp-200h] BYREF
  const __m128i *v256; // [rsp+120h] [rbp-1F0h]
  __int64 v257; // [rsp+128h] [rbp-1E8h]
  __m128i v258; // [rsp+130h] [rbp-1E0h] BYREF
  __m128i v259; // [rsp+140h] [rbp-1D0h] BYREF
  __int64 v260; // [rsp+158h] [rbp-1B8h] BYREF
  unsigned __int64 v261; // [rsp+160h] [rbp-1B0h]
  __int64 v262; // [rsp+168h] [rbp-1A8h] BYREF
  void *__s1; // [rsp+170h] [rbp-1A0h]
  size_t __n; // [rsp+178h] [rbp-198h]
  __m128i v265; // [rsp+180h] [rbp-190h] BYREF
  __int64 *v266; // [rsp+198h] [rbp-178h] BYREF
  __m128i **v267; // [rsp+1A0h] [rbp-170h]
  __int64 v268; // [rsp+1A8h] [rbp-168h]
  __m128i **v269; // [rsp+1B0h] [rbp-160h]
  unsigned __int64 v270; // [rsp+1B8h] [rbp-158h] BYREF
  __m128i *v271; // [rsp+1C0h] [rbp-150h]
  size_t v272; // [rsp+1C8h] [rbp-148h]
  const __m128i *v273; // [rsp+1D0h] [rbp-140h]
  unsigned __int64 v274; // [rsp+1D8h] [rbp-138h]
  __int64 v275; // [rsp+1E0h] [rbp-130h]
  __int64 v276; // [rsp+1E8h] [rbp-128h]
  void *v277; // [rsp+1F0h] [rbp-120h]
  __int64 v278; // [rsp+1F8h] [rbp-118h]
  __int64 v279; // [rsp+200h] [rbp-110h]
  char *v280; // [rsp+208h] [rbp-108h]
  __int64 v281; // [rsp+210h] [rbp-100h]
  int v282; // [rsp+254h] [rbp-BCh]
  size_t v283; // [rsp+258h] [rbp-B8h]
  long double v284; // [rsp+260h] [rbp-B0h] BYREF
  unsigned __int64 v285; // [rsp+270h] [rbp-A0h]
  const char *v286; // [rsp+278h] [rbp-98h]
  __int64 v287; // [rsp+280h] [rbp-90h] BYREF
  __int64 v288; // [rsp+288h] [rbp-88h]
  __int64 v289; // [rsp+290h] [rbp-80h]
  const __m128i *v290; // [rsp+298h] [rbp-78h] BYREF
  __int64 v291; // [rsp+2A0h] [rbp-70h]
  size_t v292; // [rsp+2A8h] [rbp-68h]
  const char *v293; // [rsp+2B0h] [rbp-60h]
  __int64 v294; // [rsp+2B8h] [rbp-58h] BYREF
  __int64 v295; // [rsp+2C0h] [rbp-50h]
  __int64 v296; // [rsp+2C8h] [rbp-48h] BYREF
  long double v297; // [rsp+2D0h] [rbp-40h]
  _BYTE v298[41]; // [rsp+2E7h] [rbp-29h] BYREF

  v243 = a1;
  if ( qword_1019FED28 )
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::he517a04c9a5cbfdf(&codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7);
    v4 = codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7;
    if ( codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7 )
      goto LABEL_3;
  }
  else
  {
    v4 = codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7;
    if ( codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7 )
      goto LABEL_3;
  }
  v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7);
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4);
  v261 = 0x8000000000000000LL;
  v237 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v218 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, 0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v218) = v218 ^ 1;
    v282 = v218;
  }
  else
  {
    v282 = 0;
  }
  v240 = nullptr;
  v241 = 8;
  v242 = 0;
  v6 = a2[43];
  v256 = (const __m128i *)a2[44];
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v270,
    v6,
    v256,
    "usage-analytics-index-v1.json[AiMaMi][usage-analytics] ignored invalid incremental index\"timestamp\"",
    29);
  v7 = v271;
  std::fs::read::inner::h6a30c15c40add28b(&v290, v271, v272);
  v8 = v270;
  if ( v270 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v270, 1);
  v9 = v290;
  if ( v290 == (const __m128i *)0x8000000000000000LL )
  {
    if ( (v291 & 3) == 1 )
    {
      v10 = v291 - 1;
      v11 = *(_QWORD *)(v291 - 1);
      v12 = *(_QWORD *)(v291 + 7);
      if ( *(_QWORD *)v12 )
        (*(void (__fastcall **)(__int64))v12)(v11);
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16));
      v8 = 24;
      v14 = 8;
      v15 = v10;
      goto LABEL_31;
    }
  }
  else
  {
    v16 = v291;
    v290 = (const __m128i *)v291;
    v291 = v292;
    v292 = 0;
    v293 = nullptr;
    v8 = (__int64)&v290;
    serde_json::de::from_trait::h004ef8f666025cde(&v270, &v290);
    if ( v270 )
    {
      v296 = v276;
      v295 = v275;
      v294 = v274;
      v293 = (const char *)v273;
      v292 = v272;
      v291 = (__int64)v271;
      v290 = (const __m128i *)v270;
      if ( (_DWORD)v276 == 1 )
      {
        v17 = HIDWORD(v296);
        chrono::offset::local::Local::now::hebd14454bded543d(&v270);
        if ( v17 == HIDWORD(v271) )
        {
          v18 = v290;
          v248 = (_BYTE *)v291;
          v249 = v292;
          v250 = v293;
          v251 = v294;
          v252 = v295;
          v253 = v296;
          if ( v9 )
          {
            v8 = (__int64)v9;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v9, 1);
          }
          if ( v18 )
          {
            *(_QWORD *)&v284 = v18;
            *((_QWORD *)&v284 + 1) = v248;
            v285 = v249;
            v286 = v250;
            v287 = v251;
            v288 = v252;
            v289 = v253;
            v259.i32[0] = 0;
            goto LABEL_35;
          }
          goto LABEL_32;
        }
      }
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h092752aad4499960(&v290);
    }
    else
    {
      v19 = v271;
      if ( v271->i64[0] == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v271->u64[1]);
      }
      else if ( !v271->i64[0] )
      {
        v20 = v271[1].i64[0];
        if ( v20 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271->i64[1], v20, 1);
      }
      v8 = 40;
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 40, 8);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        v276 = 2;
        v277 = &unk_1016044DB;
        v278 = 30;
        v280 = "[AiMaMi][usage-analytics] ignored invalid incremental index\"timestamp\"";
        v281 = 119;
        v270 = 0;
        v271 = (__m128i *)&unk_1016044DB;
        v272 = 30;
        v273 = nullptr;
        v274 = (unsigned __int64)"src/core/analytics.rs";
        v275 = 21;
        v279 = 0xF400000001LL;
        v8 = (__int64)&v270;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v298, &v270);
      }
    }
    if ( v9 )
    {
      v14 = 1;
      v15 = v16;
      v8 = (__int64)v9;
LABEL_31:
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v8, v14);
    }
  }
LABEL_32:
  chrono::offset::local::Local::now::hebd14454bded543d(&v270);
  v21 = HIDWORD(v271);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v25 = v22;
  if ( *(_BYTE *)(v22 + 16) == 1 )
  {
    v26 = *(_QWORD *)v22;
    v27 = *(_QWORD *)(v25 + 8);
  }
  else
  {
    v26 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v23,
            v24);
    *(_QWORD *)v25 = v26;
    *(_QWORD *)(v25 + 8) = v27;
    *(_BYTE *)(v25 + 16) = 1;
  }
  *(_QWORD *)v25 = v26 + 1;
  LODWORD(v289) = 1;
  HIDWORD(v289) = v21;
  *(_OWORD *)&v284 = (unsigned __int64)anon_4776471024d1e9bb78f2861cb2b51e1e_263;
  v285 = 0;
  v286 = nullptr;
  v287 = v26;
  v288 = v27;
  LOBYTE(v26) = 1;
  v259.i32[0] = v26;
LABEL_35:
  chrono::offset::local::Local::now::hebd14454bded543d(&v270);
  v28 = HIDWORD(v271);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v32 = v29;
  if ( *(_BYTE *)(v29 + 16) == 1 )
  {
    v33 = *(_QWORD *)v29;
    v34 = *(_QWORD *)(v32 + 8);
  }
  else
  {
    v33 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v29,
            v30,
            v31);
    *(_QWORD *)v32 = v33;
    *(_QWORD *)(v32 + 8) = v34;
    *(_BYTE *)(v32 + 16) = 1;
  }
  v254.i64[0] = v32;
  *(_QWORD *)v32 = v33 + 1;
  LODWORD(v296) = 1;
  HIDWORD(v296) = v28;
  v290 = (const __m128i *)anon_4776471024d1e9bb78f2861cb2b51e1e_263;
  v291 = 0;
  v292 = 0;
  v293 = nullptr;
  v294 = v33;
  v295 = v34;
  v262 = std::time::SystemTime::now::h1fe79e41f9d5677f(
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           v32);
  LODWORD(__s1) = v35;
  std::time::SystemTime::duration_since::had059553cab94f96(&v270, &v262, 0, 0);
  if ( (_BYTE)v270 )
    v36 = nullptr;
  else
    v36 = v271;
  codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(&v262, v36);
  v257 = v6;
  v230 = a2 + 15;
  v231 = a2 + 18;
  *(_QWORD *)&v297 = a2[1];
  v265.i64[0] = a2[2];
  v258.i64[0] = (__int64)__s1;
  v283 = __n;
  v37 = 1;
  v38 = 0;
  v39 = (const __m128i **)&v270;
LABEL_41:
  BYTE8(v297) = v37;
  v38 += 8;
  do
  {
    v42 = *(_QWORD *)&v229[v38 + 16];
    _RSI = *(_QWORD *)(v42 + 8);
    v41 = v39;
    std::sys::fs::metadata::h32fa16d3052ea535(v39, _RSI, *(_QWORD *)(v42 + 16));
    if ( !(_BYTE)v270 )
    {
      v41 = *(const __m128i ***)(v42 + 8);
      _RSI = *(_QWORD *)(v42 + 16);
      v48 = codexmate_lib::core::analytics::visit_dir::h6b28d406e57ace1e(
              (_DWORD)v41,
              _RSI,
              LODWORD(v297),
              v265.i32[0],
              v258.i32[0],
              v283,
              (__int64)&v284,
              (__int64)&v290,
              (__int64)&v240);
      v37 = v48 & BYTE8(v297);
      if ( v38 != 16 )
        goto LABEL_41;
      if ( (v37 & 1) == 0 )
        goto LABEL_83;
      goto LABEL_52;
    }
    if ( ((unsigned __int8)v271 & 3) == 1 )
    {
      v43 = v39;
      v44 = (const __m128i **)((char *)&v271[-1].i64[1] + 7);
      v45 = *(__int64 *)((char *)&v271[-1].i64[1] + 7);
      v46 = *(__int64 *)((char *)v271->i64 + 7);
      if ( *(_QWORD *)v46 )
        (*(void (__fastcall **)(__int64))v46)(v45);
      v47 = *(_QWORD *)(v46 + 8);
      if ( v47 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v47, *(_QWORD *)(v46 + 16));
      _RSI = 24;
      v41 = v44;
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24, 8);
      v39 = v43;
    }
    v38 += 8;
  }
  while ( v38 != 24 );
  if ( (BYTE8(v297) & 1) == 0 )
  {
LABEL_83:
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
    {
      v276 = 2;
      v277 = &unk_1016044DB;
      v278 = 30;
      v280 = (char *)&unk_10160448F;
      v281 = 153;
      v270 = 0;
      v271 = (__m128i *)&unk_1016044DB;
      v272 = 30;
      v273 = nullptr;
      v274 = (unsigned __int64)"src/core/analytics.rs";
      v275 = 21;
      v279 = 0xB100000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v298, &v270);
    }
    goto LABEL_103;
  }
LABEL_52:
  if ( v259.i8[0] || v296 != v289 || v293 != v286 )
  {
LABEL_86:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, _RSI);
    v68 = (__m128i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
    if ( !v68 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
    v270 = 128;
    v271 = v68;
    v260 = (__int64)v39;
    v68->i8[0] = 123;
    v272 = 1;
    LOWORD(v266) = 256;
    v267 = (__m128i **)&v260;
    v69 = (__m128i *)&v266;
    v70 = (__m128i *)serde_core::ser::SerializeMap::serialize_entry::h772ab4565b06103e(
                       &v266,
                       "schemaVersion",
                       13,
                       &v296);
    if ( v70 )
      goto LABEL_91;
    if ( (_BYTE)v266 )
      goto LABEL_89;
    v69 = (__m128i *)&v266;
    v70 = (__m128i *)serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274(
                       &v266,
                       &anon_4776471024d1e9bb78f2861cb2b51e1e_596,
                       21,
                       (char *)&v296 + 4);
    if ( !v70 )
    {
      if ( (_BYTE)v266 )
      {
LABEL_89:
        v70 = (__m128i *)serde_json::ser::invalid_raw_value::hd0c8797395d11416(*(double *)si128.i64);
        goto LABEL_91;
      }
      v71 = &anon_4776471024d1e9bb78f2861cb2b51e1e_597;
      v69 = (__m128i *)&v266;
      v70 = (__m128i *)serde_core::ser::SerializeMap::serialize_entry::h05b442fc3d0b6852(
                         &v266,
                         &anon_4776471024d1e9bb78f2861cb2b51e1e_597,
                         5,
                         &v290);
      if ( !v70 )
      {
        if ( ((unsigned __int8)v266 & 1) == 0 && BYTE1(v266) )
        {
          v69 = *v267;
          v71 = (int *)&anon_4776471024d1e9bb78f2861cb2b51e1e_133;
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(
            *v267,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
            1);
        }
        v213 = v270;
        v70 = v271;
        if ( v270 != 0x8000000000000000LL )
        {
          v214 = v272;
          std::path::Path::_join::hb1a495d4f06b13b8(
            &v270,
            v257,
            v256,
            "usage-analytics-index-v1.json[AiMaMi][usage-analytics] ignored invalid incremental index\"timestamp\"",
            29);
          *((_QWORD *)&v297 + 1) = v271;
          v73 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
                  v271,
                  v272,
                  (__int64)v70,
                  v214,
                  1);
          if ( v213 )
          {
            v215 = v213;
            v216 = v73;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v215, 1);
            v73 = v216;
          }
          if ( v270 )
          {
            v217 = v73;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v297 + 1), v270, 1);
            v73 = v217;
          }
          if ( !v73 )
            goto LABEL_103;
LABEL_95:
          v260 = v73;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            v266 = &v260;
            v267 = (__m128i **)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
            v276 = 2;
            v277 = &unk_1016044DB;
            v278 = 30;
            v280 = (char *)&unk_1017C3194;
            v281 = (__int64)&v266;
            v270 = 0;
            v271 = (__m128i *)&unk_1016044DB;
            v272 = 30;
            v273 = nullptr;
            v274 = (unsigned __int64)"src/core/analytics.rs";
            v275 = 21;
            v279 = 0xAB00000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v298, &v270);
            v73 = v260;
          }
          if ( (v73 & 3) == 1 )
          {
            v74 = v73 - 1;
            v75 = *(_QWORD *)(v73 - 1);
            v76 = *(_QWORD *)(v73 + 7);
            if ( *(_QWORD *)v76 )
              (*(void (__fastcall **)(__int64))v76)(v75);
            v77 = *(_QWORD *)(v76 + 8);
            if ( v77 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v77, *(_QWORD *)(v76 + 16));
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, 24, 8);
          }
          goto LABEL_103;
        }
LABEL_93:
        v270 = (unsigned __int64)v70;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, v71);
        v72 = (__m128i **)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 8);
        if ( !v72 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 8);
        *v72 = v70;
        v73 = std::io::error::Error::_new::h73f9b193369f24ba(40, v72, &off_101967B98);
        goto LABEL_95;
      }
    }
LABEL_91:
    v71 = (int *)v270;
    if ( v270 )
    {
      v69 = v271;
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, v270, 1);
    }
    goto LABEL_93;
  }
  si128 = _mm_load_si128(v290);
  _RSI = (unsigned int)~_mm_movemask_epi8(si128);
  LOWORD(v273) = _RSI;
  v270 = (unsigned __int64)v290;
  v271 = (__m128i *)&v290[1];
  v272 = (size_t)v290->u64 + v291 + 1;
  v274 = (unsigned __int64)v293;
  if ( !v293 )
  {
    v41 = (const __m128i **)&v270;
    if ( !_$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha2215888de33ecc2(&v270) )
      goto LABEL_103;
    goto LABEL_86;
  }
  v49 = *(_QWORD *)&v284;
  v265.i64[0] = *(_QWORD *)&v284 - 104LL;
  v297 = v284;
  while ( v274 )
  {
    _ECX = (unsigned __int16)v273;
    v51 = (const __m128i *)v270;
    if ( !(_WORD)v273 )
    {
      v52 = v271;
      do
      {
        v53 = _mm_movemask_epi8(_mm_load_si128(v52));
        v51 -= 104;
        ++v52;
      }
      while ( v53 == 0xFFFF );
      _ECX = ~v53;
      v271 = (__m128i *)v52;
      v270 = (unsigned __int64)v51;
    }
    __asm { tzcnt   esi, ecx }
    LOWORD(v273) = _ECX & (_ECX - 1);
    --v274;
    v41 = (const __m128i **)&v287;
    v54 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v287, (char *)&v51[-6] - 104 * _RSI - 8);
    v55 = &v51->i8[-104 * _RSI];
    v56 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v54 >> 57), (__m128i)0LL);
    for ( _RSI = 0; ; _RSI += 16 )
    {
      v57 = v265.i64[0];
      v58 = *((_QWORD *)&v297 + 1) & v54;
      v59 = _mm_loadu_si128((const __m128i *)(v49 + v58));
      si128 = _mm_cmpeq_epi8(v59, v56);
      _RCX = (unsigned int)_mm_movemask_epi8(si128);
      if ( (_DWORD)_RCX )
        break;
LABEL_68:
      si128.i64[0] = -1;
      v49 = *(_QWORD *)&v297;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v59, (__m128i)-1LL)) )
        goto LABEL_86;
      v54 = v58 + _RSI + 16;
    }
    v61 = *((_QWORD *)v55 - 11);
    v283 = v58;
    v259 = v56;
    v239.i64[0] = _RSI;
    v255 = v59;
    while ( 1 )
    {
      v258.i64[0] = _RCX;
      __asm { tzcnt   ecx, ecx }
      v62 = -104LL * (*((_QWORD *)&v297 + 1) & (v58 + _RCX));
      if ( v61 == *(_QWORD *)(v57 - 104 * (*((_QWORD *)&v297 + 1) & (v58 + _RCX)) + 16) )
      {
        _RSI = *(_QWORD *)(v57 - 104 * (*((_QWORD *)&v297 + 1) & (v58 + _RCX)) + 8);
        v41 = *((const __m128i ***)v55 - 12);
        if ( !memcmp(v41, (const void *)_RSI, v61) )
          break;
      }
      v63 = v258.i32[0] - 1;
      LOWORD(v63) = v258.i16[0] & (v258.i16[0] - 1);
      _RCX = v63;
      v58 = v283;
      v56 = _mm_load_si128(&v259);
      _RSI = v239.i64[0];
      v59 = _mm_load_si128(&v255);
      if ( (v258.i16[0] & (unsigned __int16)(v258.i16[0] - 1)) == 0 )
        goto LABEL_68;
    }
    v49 = *(_QWORD *)&v297;
    if ( *((_QWORD *)v55 - 2) != *(_QWORD *)(*(_QWORD *)&v297 + v62 - 16) )
      goto LABEL_86;
    v64 = *(_QWORD *)&v297 + v62;
    if ( *((_QWORD *)v55 - 1) != *(_QWORD *)(v64 - 8) )
      goto LABEL_86;
    v65 = *(_BYTE *)(v64 - 80);
    if ( *((_DWORD *)v55 - 20) == 1 )
    {
      if ( !v65 || *((_QWORD *)v55 - 9) != *(_QWORD *)(v64 - 72) )
        goto LABEL_86;
    }
    else if ( v65 )
    {
      goto LABEL_86;
    }
    v66 = *((_QWORD *)v55 - 6);
    if ( v66 == *(_QWORD *)(v64 - 48) )
    {
      _RSI = *(_QWORD *)(v64 - 56);
      v41 = *((const __m128i ***)v55 - 7);
      if ( !memcmp(v41, (const void *)_RSI, v66) )
      {
        v67 = *((_QWORD *)v55 - 3);
        if ( v67 == *(_QWORD *)(v64 - 24) )
        {
          _RSI = *(_QWORD *)(v64 - 32);
          v41 = *((const __m128i ***)v55 - 4);
          if ( !memcmp(v41, (const void *)_RSI, 8 * v67) )
            continue;
        }
      }
    }
    goto LABEL_86;
  }
LABEL_103:
  v268 = v242;
  v267 = (__m128i **)v241;
  v266 = v240;
  v78 = v262;
  if ( v262 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v262, 1);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h092752aad4499960(&v290);
  v79 = &v284;
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h092752aad4499960(&v284);
  v82 = v254.i64[0];
  if ( *(_BYTE *)(v254.i64[0] + 16) == 1 )
  {
    v83 = *(_QWORD *)v254.i64[0];
    v84 = *(_QWORD *)(v254.i64[0] + 8);
  }
  else
  {
    v83 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&v284, v78, v80, v81);
    *(_QWORD *)v82 = v83;
    *(_QWORD *)(v82 + 8) = v84;
    *(_BYTE *)(v82 + 16) = 1;
  }
  *(_QWORD *)v82 = v83 + 1;
  v293 = nullptr;
  v292 = 0;
  v291 = 0;
  v290 = (const __m128i *)anon_4776471024d1e9bb78f2861cb2b51e1e_263;
  v294 = v83;
  v295 = v84;
  v269 = v267;
  v255.i64[0] = v268;
  if ( v268 )
  {
    v85 = v269;
    v86 = &v269[5 * v255.i64[0]];
    do
    {
      codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(v229, v85[4]);
      v79 = (long double *)&v270;
      v78 = (__int64)&v290;
      hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hd06f2a090e6d06d8(
        &v270,
        &v290,
        v229,
        *(double *)si128.i64);
      v88 = v270;
      v89 = v271;
      if ( v270 != 0x8000000000000000LL )
      {
        v90 = v273;
        v87 = (const __m128i *)v273->i64[0];
        v79 = (long double *)v273->i64[1];
        v91 = v274 & (unsigned __int64)v79;
        _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v273->i64[0]
                                                                              + (v274 & (unsigned __int64)v79))));
        if ( !(_DWORD)_R9 )
        {
          v98 = 16;
          do
          {
            v91 = (unsigned __int64)v79 & (v98 + v91);
            _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v87 + v91)));
            v98 += 16;
          }
          while ( !(_DWORD)_R9 );
        }
        __asm { tzcnt   r9d, r9d }
        _R9 = (unsigned __int64)v79 & (v91 + _R9);
        v94 = v87->i8[_R9];
        if ( v94 >= 0 )
        {
          _R8D = _mm_movemask_epi8(_mm_load_si128(v87));
          __asm { tzcnt   r9d, r8d }
          v94 = v87->i8[_R9];
        }
        v95 = v272;
        v96 = v274 >> 57;
        v87->i8[_R9] = v274 >> 57;
        v87[1].i8[(unsigned __int64)v79 & (_R9 - 16)] = v96;
        v78 = -48LL * _R9;
        *(__int64 *)((char *)v87[-3].i64 + v78) = v88;
        *(_QWORD *)((char *)&v87[-2] + v78 - 8) = v89;
        v89 = (__m128i *)&v87[-3 * _R9];
        *(__int64 *)((char *)v87[-2].i64 + v78) = v95;
        *(_QWORD *)((char *)&v87[-1] + v78 - 8) = 0;
        *(__int64 *)((char *)v87[-1].i64 + v78) = 8;
        *(__int64 *)((char *)&v87->i64[-1] + v78) = 0;
        si128 = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v94 & 1, 0);
        v90[1] = _mm_sub_epi64(_mm_loadu_si128(v90 + 1), si128);
      }
      v97 = v89[-1].i64[1];
      if ( v97 == v89[-2].i64[1] )
      {
        v79 = (long double *)&v89[-2].u64[1];
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9a78bff108d63cfd(&v89[-2].u64[1], v78, v87);
      }
      *(_QWORD *)(v89[-1].i64[0] + 8 * v97) = v85;
      v85 += 5;
      v89[-1].i64[1] = v97 + 1;
    }
    while ( v85 != v86 );
  }
  *(_QWORD *)&v284 = std::time::SystemTime::now::h1fe79e41f9d5677f(v79, v78);
  DWORD2(v284) = v100;
  std::time::SystemTime::duration_since::had059553cab94f96(&v270, &v284, 0, 0);
  if ( (_BYTE)v270 )
    v101 = nullptr;
  else
    v101 = v271;
  v102 = (__int64)&v262;
  codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(&v262, v101);
  if ( !v293 )
  {
LABEL_132:
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = v255.i64[0];
    if ( !v255.i64[0] )
      goto LABEL_174;
    goto LABEL_133;
  }
  v104 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v294, &v262);
  v105 = v290;
  v106 = v291;
  v107 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v104 >> 57), (__m128i)0LL);
  v108 = v290 - 3;
  v102 = (__int64)__s1;
  v109 = __n;
  v110 = 0;
  v111 = (__m128i)-1LL;
  while ( 1 )
  {
    v112 = v106 & v104;
    v113 = _mm_loadu_si128((const __m128i *)((char *)v105 + v112));
    v114 = _mm_cmpeq_epi8(v113, v107);
    _RCX = (unsigned int)_mm_movemask_epi8(v114);
    if ( (_DWORD)_RCX )
      break;
LABEL_130:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v113, v111)) )
      goto LABEL_132;
    v104 = v112 + v110 + 16;
    v110 += 16LL;
  }
  *(_QWORD *)&v297 = v112;
  v265.i64[0] = v106;
  v258 = v107;
  v283 = v110;
  v254 = v113;
  while ( 1 )
  {
    *((_QWORD *)&v297 + 1) = _RCX;
    __asm { tzcnt   ecx, ecx }
    v116 = 0xFFFFFFFFFFFFFFDLL * (v106 & (v112 + _RCX));
    if ( v109 == v108[-3 * (v106 & (v112 + _RCX)) + 1].i64[0]
      && !memcmp((const void *)v102, (const void *)v108[-3 * (v106 & (v112 + _RCX))].i64[1], v109) )
    {
      break;
    }
    v117 = DWORD2(v297) - 1;
    LOWORD(v117) = WORD4(v297) & (WORD4(v297) - 1);
    _RCX = v117;
    v112 = *(_QWORD *)&v297;
    v106 = v265.i64[0];
    v107 = _mm_load_si128(&v258);
    v110 = v283;
    v111 = (__m128i)-1LL;
    v113 = _mm_load_si128(&v254);
    if ( (WORD4(v297) & (unsigned __int16)(WORD4(v297) - 1)) == 0 )
      goto LABEL_130;
  }
  v124 = &v105[v116];
  v119 = v105[v116 - 1].u64[1];
  if ( v119 )
  {
    v125 = v105[v116 - 1].i64[0];
    v126 = v105[v116 - 1].i64[1] & 3;
    if ( v119 >= 4 )
    {
      v127 = 0;
      v118 = 0;
      do
      {
        v118 += *(_QWORD *)(*(_QWORD *)(v125 + 8 * v127 + 24) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v125 + 8 * v127 + 16) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v125 + 8 * v127 + 8) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v125 + 8 * v127) + 24LL);
        v127 += 4;
      }
      while ( (v119 & 0xFFFFFFFFFFFFFFCLL) != v127 );
    }
    else
    {
      v127 = 0;
      v118 = 0;
    }
    if ( (v119 & 3) != 0 )
    {
      v137 = v125 + 8 * v127;
      v138 = 0;
      do
        v118 += *(_QWORD *)(*(_QWORD *)(v137 + 8 * v138++) + 24LL);
      while ( v126 != v138 );
    }
  }
  else
  {
    v118 = 0;
  }
  v248 = (_BYTE *)v102;
  v249 = v109;
  v139 = (__m128i *)v124[-1].i64[0];
  v140 = (size_t)v139 + 8 * v124[-1].i64[1];
  v271 = v139;
  v272 = v140;
  v273 = nullptr;
  v275 = 0;
  v270 = (unsigned __int64)&v248;
  v102 = (__int64)&v284;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd4a977694cc9cbd6(
    &v284,
    &v270,
    *(double *)v114.i64,
    *(double *)v107.i64,
    *(double *)v111.i64);
  v141 = v285;
  if ( v285 )
  {
    if ( v285 != 1 )
    {
      v219 = *((_QWORD **)&v284 + 1);
      if ( v285 >= 0x15 )
      {
        core::slice::sort::stable::driftsort_main::ha93aa98eaa0e3fb9(*((_QWORD *)&v284 + 1), v285, v298);
      }
      else
      {
        v220 = *((_QWORD *)&v284 + 1) + 8 * v285;
        v221 = (__int64 *)(*((_QWORD *)&v284 + 1) + 8LL);
        v222 = 8;
        do
        {
          v224 = *(v221 - 1);
          v225 = *v221;
          if ( *v221 < v224 )
          {
            v226 = v222;
            do
            {
              *(_QWORD *)((char *)v219 + v226) = v224;
              if ( v226 == 8 )
              {
                v223 = v219;
                goto LABEL_255;
              }
              v224 = *(_QWORD *)((char *)v219 + v226 - 16);
              v226 -= 8;
            }
            while ( v225 < v224 );
            v223 = (_QWORD *)((char *)v219 + v226);
LABEL_255:
            *v223 = v225;
          }
          ++v221;
          v222 += 8;
        }
        while ( v221 != (__int64 *)v220 );
        v141 = v285;
        if ( !v285 )
          core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_101967BF0, v221);
      }
    }
    HIDWORD(_R8) = HIDWORD(v284);
    v142 = **((_QWORD **)&v284 + 1);
    v143 = 8 * v141;
    v144 = 1;
    if ( v143 == 8 )
    {
      v145 = **((_QWORD **)&v284 + 1);
      v102 = 1;
    }
    else
    {
      v147 = 8;
      v148 = 0;
      v149 = **((_QWORD **)&v284 + 1);
      do
      {
        v145 = *(_QWORD *)(*((_QWORD *)&v284 + 1) + v147);
        if ( v145 - v149 >= 301 )
        {
          v150 = v149 - v142;
          if ( v150 < 2 )
            v150 = 1;
          v148 += v150 / 0x3CuLL + 1;
          v142 = *(_QWORD *)(*((_QWORD *)&v284 + 1) + v147);
        }
        v147 += 8;
        v149 = v145;
      }
      while ( v143 != v147 );
      v102 = v148 + 1;
    }
    v151 = v145 - v142;
    if ( v151 >= 2 )
      v144 = v151;
    v120 = 1440;
    if ( (__int64)(v102 + v144 / 0x3C) < 1440 )
      v120 = v102 + v144 / 0x3C;
    v146 = *(_QWORD *)&v284;
    if ( *(_QWORD *)&v284 )
      goto LABEL_172;
  }
  else
  {
    v120 = 0;
    v146 = *(_QWORD *)&v284;
    if ( *(_QWORD *)&v284 )
    {
LABEL_172:
      v102 = *((_QWORD *)&v284 + 1);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v284 + 1), 8 * v146, 8);
    }
  }
  v269 = v267;
  v121 = v268;
  if ( !v268 )
  {
LABEL_174:
    v123 = 0;
    v136 = v293;
    if ( (int)v293 <= 0 )
      goto LABEL_175;
    goto LABEL_146;
  }
LABEL_133:
  if ( v121 >= 5 )
  {
    v128 = 4;
    if ( (v121 & 3) != 0 )
      v128 = v121 & 3;
    v122 = v121 - v128;
    v129 = (const __m128i *)(v269 + 18);
    v130 = 0;
    v131 = v122;
    v132 = 0;
    do
    {
      v130 = _mm_add_epi64(
               v130,
               _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v129 - 120)), _mm_loadl_epi64(v129 - 5)));
      v132 = _mm_add_epi64(
               v132,
               _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v129 - 40)), _mm_loadl_epi64(v129)));
      v129 += 10;
      v131 -= 4LL;
    }
    while ( v131 );
    v133 = _mm_add_epi64(v132, v130);
    v123 = _mm_add_epi64(_mm_shuffle_epi32(v133, 238), v133).u64[0];
  }
  else
  {
    v122 = 0;
    v123 = 0;
  }
  v134 = v121 - v122;
  v135 = &v269[5 * v122 + 3];
  do
  {
    v123 += *v135;
    v135 += 5;
    --v134;
  }
  while ( v134 );
  v136 = v293;
  if ( (int)v293 <= 0 )
  {
LABEL_175:
    v245 = 0.0;
    v244 = v136;
    v255.i64[0] = v121;
    if ( !v136 )
      goto LABEL_180;
    goto LABEL_176;
  }
LABEL_146:
  v245 = (double)(int)v121 / (double)(int)v136;
  v244 = v136;
  v255.i64[0] = v121;
  if ( !v136 )
    goto LABEL_180;
LABEL_176:
  v152 = v290;
  v153 = v290 + 1;
  for ( i = _mm_movemask_epi8(_mm_load_si128(v290)); i == 0xFFFF; ++v153 )
  {
    i = _mm_movemask_epi8(_mm_load_si128(v153));
    v152 -= 48;
  }
  v155 = -2 - i;
  _EDI = ~i;
  __asm { tzcnt   r8d, edi }
  v157 = -3 * _R8;
  *(_QWORD *)&v284 = v152[v157 - 1].i64[1];
  *((_QWORD *)&v284 + 1) = &v152[v157 - 3];
  v285 = (unsigned __int64)&v152[v157 - 1] - 8;
  v270 = (unsigned __int64)v152;
  v271 = (__m128i *)v153;
  v272 = (size_t)v290->u64 + v291 + 1;
  LOWORD(v273) = v155 & _EDI;
  v102 = (__int64)&v248;
  hashbrown::raw::RawIterRange$LT$T$GT$::fold_impl::h0b67070736efd261(&v248, &v270, v244 - 1, &v284, v298);
  v121 = v249;
  if ( v249 )
  {
    v246 = *((_QWORD *)v250 + 2);
    v102 = (__int64)&v270;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v270, v249);
    v261 = v270;
    v247 = v271;
    v238 = v272;
    goto LABEL_181;
  }
LABEL_180:
  v246 = 0;
LABEL_181:
  *(_QWORD *)&v284 = std::time::SystemTime::now::h1fe79e41f9d5677f(v102, v121);
  DWORD2(v284) = v158;
  std::time::SystemTime::duration_since::had059553cab94f96(&v270, &v284, 0, 0);
  v233 = v120;
  if ( (_BYTE)v270 )
    v159 = nullptr;
  else
    v159 = v271;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v270, &v284);
  v160 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14600, 8);
  if ( !v160 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 14600);
  *(_QWORD *)&v284 = 365;
  *((_QWORD *)&v284 + 1) = v160;
  v285 = 0;
  v234 = v119;
  v235 = v118;
  v236 = v123;
  if ( v293 )
  {
    v162 = v290;
    v163 = v290 + 1;
    for ( j = _mm_movemask_epi8(_mm_load_si128(v290)); j == 0xFFFF; ++v163 )
    {
      j = _mm_movemask_epi8(_mm_load_si128(v163));
      v162 -= 48;
    }
    _R8D = ~j;
    __asm { tzcnt   r9d, r8d }
    v166 = ~(_WORD)j & (-2 - j);
    v167 = v162[-3 * _R9 - 1].i64[1];
    v248 = v298;
    v270 = (unsigned __int64)v162;
    v271 = (__m128i *)v163;
    v272 = (size_t)v290->u64 + v291 + 1;
    LOWORD(v273) = v166;
    v168 = hashbrown::raw::RawIterRange$LT$T$GT$::fold_impl::h5188fc0e29290ff0(&v270, v293 - 1, v167, &v248);
    v169 = v290;
    v254.i64[0] = v291;
    v170 = _mm_sub_pd(
             (__m128d)_mm_unpacklo_epi32((__m128i)((unsigned __int64)(v168 == 0) + v168), (__m128i)xmmword_1015DBA50),
             (__m128d)xmmword_1015DBA60);
    log(__x);
    v232 = _mm_unpackhi_pd(v170, v170).f64[0] + v170.f64[0] + 1.0;
    if ( v293 )
    {
      v259.i64[0] = (__int64)v169[-3].i64;
      v171 = 365;
      v172 = v169;
      v256 = v169;
      while ( 1 )
      {
        v258.i64[0] = v171;
        v175 = v171 - 1;
        codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(&v270, &v159[-5400 * v171 + 5400]);
        v176 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v294, &v270);
        v283 = v175;
        v177 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v176 >> 57), (__m128i)0LL);
        HIDWORD(_RAX) = HIDWORD(v271);
        *((_QWORD *)&v297 + 1) = v271;
        v179 = v272;
        v180 = 0;
        *(_QWORD *)&v297 = v272;
        while ( 1 )
        {
          v181 = v254.i64[0] & v176;
          v182 = _mm_loadu_si128((const __m128i *)((char *)v172 + v181));
          _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v182, v177));
          if ( _R12D )
            break;
LABEL_198:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v182, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
          {
            v189 = 0;
            v265.i64[0] = 0;
            goto LABEL_213;
          }
          v176 = v181 + v180 + 16;
          v180 += 16;
        }
        v265 = v177;
        v257 = v180;
        v239 = v182;
        while ( 1 )
        {
          __asm { tzcnt   eax, r12d }
          v184 = -3 * (v254.i64[0] & (v181 + _RAX));
          if ( v179 == *(_QWORD *)(v259.i64[0] - 48 * (v254.i64[0] & (v181 + _RAX)) + 16) )
          {
            v185 = memcmp(*((const void **)&v297 + 1), *(const void **)(v184 * 16 + v259.i64[0] + 8), *(size_t *)&v297);
            v179 = *(_QWORD *)&v297;
            if ( !v185 )
              break;
          }
          _RAX = (unsigned int)(_R12D - 1);
          LOWORD(_RAX) = _R12D & (_R12D - 1);
          _R12D = _RAX;
          v177 = _mm_load_si128(&v265);
          v180 = v257;
          v182 = _mm_load_si128(&v239);
          if ( !(_WORD)_RAX )
            goto LABEL_198;
        }
        v186 = v172[v184 - 1].u64[1];
        v265.i64[0] = 0;
        if ( v186 )
        {
          v187 = v172[v184 - 1].i64[0];
          if ( v186 >= 4 )
          {
            v188 = 0;
            v189 = 0;
            do
            {
              v189 += *(_QWORD *)(*(_QWORD *)(v187 + 8 * v188 + 24) + 24LL)
                    + *(_QWORD *)(*(_QWORD *)(v187 + 8 * v188 + 16) + 24LL)
                    + *(_QWORD *)(*(_QWORD *)(v187 + 8 * v188 + 8) + 24LL)
                    + *(_QWORD *)(*(_QWORD *)(v187 + 8 * v188) + 24LL);
              v188 += 4;
            }
            while ( (v186 & 0xFFFFFFFFFFFFFFCLL) != v188 );
          }
          else
          {
            v188 = 0;
            v189 = 0;
          }
          if ( (v186 & 3) != 0 )
          {
            v190 = v187 + 8 * v188;
            v191 = 0;
            do
              v189 += *(_QWORD *)(*(_QWORD *)(v190 + 8 * v191++) + 24LL);
            while ( (v186 & 3) != v191 );
          }
          if ( (_DWORD)v186 )
          {
            v192 = _mm_sub_pd(
                     (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)(int)v186, (__m128i)xmmword_1015DBA50),
                     (__m128d)xmmword_1015DBA60);
            v193 = _mm_unpackhi_pd(v192, v192);
            log(__xa);
            v193.f64[0] = (v193.f64[0] + v192.f64[0] + 1.0) * 4.0 / v232;
            v194 = (int)fmin(
                          fmax(fmin(fmax(_mm_round_sd(v193, v193, 9).f64[0], 1.0), 4.0), -2147483648.0),
                          2147483647.0);
            v265.i64[0] = v186;
            v195 = v270;
            v196 = v285;
            if ( v285 == *(_QWORD *)&v284 )
              goto LABEL_190;
            goto LABEL_191;
          }
        }
        else
        {
          v189 = 0;
        }
LABEL_213:
        v194 = 0;
        v195 = v270;
        v196 = v285;
        if ( v285 == *(_QWORD *)&v284 )
LABEL_190:
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v284);
LABEL_191:
        v173 = *((_QWORD *)&v284 + 1);
        v174 = 5 * v196;
        *(_QWORD *)(*((_QWORD *)&v284 + 1) + 8 * v174) = v195;
        *(_QWORD *)(v173 + 8 * v174 + 8) = *((_QWORD *)&v297 + 1);
        *(_QWORD *)(v173 + 8 * v174 + 16) = *(_QWORD *)&v297;
        *(_QWORD *)(v173 + 8 * v174 + 24) = v189;
        *(_DWORD *)(v173 + 8 * v174 + 32) = v265.i32[0];
        *(_DWORD *)(v173 + 8 * v174 + 36) = v194;
        v285 = v196 + 1;
        v171 = v283;
        v172 = v256;
        if ( v258.i64[0] <= 1uLL )
          goto LABEL_219;
      }
    }
  }
  v197 = v159 - 1965600;
  for ( k = 366; k > 1; --k )
  {
    codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(&v270, v197);
    v201 = v270;
    *((_QWORD *)&v297 + 1) = v271;
    v202 = v272;
    v203 = v285;
    if ( v285 == *(_QWORD *)&v284 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v284);
    v199 = *((_QWORD *)&v284 + 1);
    v200 = 5 * v203;
    *(_QWORD *)(*((_QWORD *)&v284 + 1) + 8 * v200) = v201;
    *(_QWORD *)(v199 + 8 * v200 + 8) = *((_QWORD *)&v297 + 1);
    *(_QWORD *)(v199 + 8 * v200 + 16) = v202;
    *(_QWORD *)(v199 + 8 * v200 + 24) = 0;
    *(_QWORD *)(v199 + 8 * v200 + 32) = 0;
    v285 = v203 + 1;
    v197 += 5400;
  }
LABEL_219:
  v204 = v243;
  *(_QWORD *)(v243 + 24) = v285;
  *(long double *)(v204 + 8) = v284;
  *(_QWORD *)(v204 + 32) = v261;
  *(_QWORD *)(v204 + 40) = v247;
  *(_QWORD *)(v204 + 48) = v238;
  *(_QWORD *)(v204 + 56) = v236;
  v205 = v245;
  *(double *)(v204 + 64) = v245;
  v206 = v255.i64[0];
  *(_DWORD *)(v204 + 72) = v255.i32[0];
  *(_DWORD *)(v204 + 76) = (_DWORD)v244;
  *(_DWORD *)(v204 + 80) = v246;
  *(_QWORD *)(v204 + 88) = v235;
  *(_DWORD *)(v204 + 96) = v234;
  *(_DWORD *)(v204 + 100) = v233;
  *(_QWORD *)v204 = 0;
  v207 = v262;
  if ( v262 )
    v205 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v262, 1);
  v208 = &v290;
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he90cce7341778326(&v290, v205);
  if ( v206 )
  {
    v211 = (const __m128i ***)(v269 + 1);
    do
    {
      v207 = (__int64)*(v211 - 1);
      if ( v207 )
      {
        v208 = *v211;
        v207 *= 8;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v211, v207, 8);
      }
      v211 += 5;
      --v206;
    }
    while ( v206 );
  }
  if ( v266 )
  {
    v207 = 40LL * (_QWORD)v266;
    v208 = (const __m128i **)v269;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v269, 40LL * (_QWORD)v266, 8);
  }
  if ( !(_BYTE)v282
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v237) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v208, v207, v209, v210) )
  {
    byte_1019FED20 = 1;
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::core::analytics::ANALYTICS_SCAN_LOCK::hb1187f7fe16e0ae7);
  return v243;
}
