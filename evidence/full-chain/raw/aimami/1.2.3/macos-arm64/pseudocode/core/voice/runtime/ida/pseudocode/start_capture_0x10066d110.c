// __ZN13codexmate_lib4core5voice7runtime13start_capture @ 0x10066d110 | 基线 same-set
// [FULL decompile]

_QWORD *__fastcall codexmate_lib::core::voice::runtime::start_capture::hefa5b6a2d79b1300(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbx
  char v15; // r13
  int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // rax
  signed __int64 v28; // r8
  signed __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  _QWORD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r15
  _QWORD *v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // r13
  char v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  signed __int64 v60; // r14
  __int64 v61; // r12
  int v62; // r12d
  _QWORD *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // r12
  _QWORD *v68; // rax
  _QWORD *v69; // r15
  __int64 v70; // r13
  __int64 v71; // rsi
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  char v74; // r12
  __int64 v75; // rax
  __int64 v76; // r14
  char v77; // r15
  bool v78; // al
  void *v79; // rax
  __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // r13
  __int64 v83; // rax
  _QWORD *v84; // r15
  char v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r13
  __int64 v90; // rbx
  char v91; // r13
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r13
  __int64 v96; // rbx
  __int64 v97; // r12
  __int64 v98; // r13
  _QWORD *v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // r15
  __int64 v105; // r15
  __int64 v106; // rbx
  __int64 v107; // r12
  __int64 v108; // r15
  __int64 v109; // r12
  __int64 v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbx
  char v114; // r12
  _QWORD *v115; // rbx
  __int64 v116; // rsi
  __int64 v117; // rax
  _QWORD *v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rsi
  __int64 *v124; // r12
  __int64 v125; // r15
  __int64 *v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  _QWORD *v133; // r15
  __int64 v134; // r15
  char v135; // bl
  __int64 v136; // rsi
  char v137; // al
  __int64 v138; // rbx
  __int64 v139; // rsi
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // r15
  unsigned __int8 v143; // al
  __int64 v144; // rax
  __int64 v145; // r14
  __int64 v146; // r13
  __int64 v147; // r12
  __int64 v148; // rbx
  __int64 v149; // r12
  __int64 v150; // r13
  __int64 v151; // rsi
  __int64 v152; // rax
  void *v153; // r13
  size_t v154; // r12
  _QWORD *v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // r15
  unsigned __int8 v160; // al
  _BYTE v161[72]; // [rsp+8h] [rbp-6B8h] BYREF
  _BYTE v162[24]; // [rsp+50h] [rbp-670h] BYREF
  _QWORD __src[93]; // [rsp+68h] [rbp-658h] BYREF
  _QWORD v164[3]; // [rsp+350h] [rbp-370h] BYREF
  __int64 v165; // [rsp+368h] [rbp-358h]
  __int64 v166; // [rsp+370h] [rbp-350h]
  __int64 v167; // [rsp+378h] [rbp-348h]
  __int64 v168; // [rsp+380h] [rbp-340h]
  __int64 v169; // [rsp+388h] [rbp-338h] BYREF
  __int64 v170; // [rsp+390h] [rbp-330h]
  __int64 v171; // [rsp+398h] [rbp-328h]
  __int64 v172; // [rsp+3A0h] [rbp-320h]
  _QWORD v173[9]; // [rsp+3A8h] [rbp-318h] BYREF
  __int64 v174; // [rsp+3F0h] [rbp-2D0h] BYREF
  __int64 v175; // [rsp+3F8h] [rbp-2C8h]
  __int64 v176; // [rsp+400h] [rbp-2C0h]
  __int64 v177; // [rsp+410h] [rbp-2B0h]
  __int64 v178; // [rsp+430h] [rbp-290h]
  __int64 v179; // [rsp+438h] [rbp-288h]
  __int64 v180; // [rsp+440h] [rbp-280h]
  __int64 v181; // [rsp+448h] [rbp-278h]
  __int64 *v182; // [rsp+450h] [rbp-270h]
  __int64 v183; // [rsp+458h] [rbp-268h]
  __int64 v184; // [rsp+460h] [rbp-260h] BYREF
  __int64 v185; // [rsp+468h] [rbp-258h]
  unsigned __int64 v186; // [rsp+470h] [rbp-250h]
  __int64 v187; // [rsp+478h] [rbp-248h]
  __int64 v188; // [rsp+480h] [rbp-240h]
  unsigned __int64 v189; // [rsp+488h] [rbp-238h]
  __int64 v190; // [rsp+490h] [rbp-230h]
  __int64 v191; // [rsp+498h] [rbp-228h]
  __int64 v192; // [rsp+4A0h] [rbp-220h]
  __int64 v193; // [rsp+4A8h] [rbp-218h]
  __int64 v194; // [rsp+4B0h] [rbp-210h]
  __int64 v195; // [rsp+4B8h] [rbp-208h]
  __int64 v196; // [rsp+4C0h] [rbp-200h]
  __int64 v197; // [rsp+4C8h] [rbp-1F8h]
  __int64 v198; // [rsp+4D0h] [rbp-1F0h]
  __int64 v199; // [rsp+4D8h] [rbp-1E8h] BYREF
  __int64 v200; // [rsp+4E0h] [rbp-1E0h]
  __int64 v201; // [rsp+4E8h] [rbp-1D8h]
  __int64 v202; // [rsp+4F0h] [rbp-1D0h] BYREF
  __int64 v203; // [rsp+4F8h] [rbp-1C8h]
  __int64 v204; // [rsp+500h] [rbp-1C0h]
  _QWORD *v205; // [rsp+508h] [rbp-1B8h] BYREF
  __int64 v206; // [rsp+510h] [rbp-1B0h]
  __int64 v207; // [rsp+518h] [rbp-1A8h]
  _DWORD v208[2]; // [rsp+520h] [rbp-1A0h]
  _QWORD v209[16]; // [rsp+528h] [rbp-198h] BYREF
  __int64 v210; // [rsp+5A8h] [rbp-118h]
  __int64 v211; // [rsp+5B0h] [rbp-110h] BYREF
  _QWORD *v212; // [rsp+5B8h] [rbp-108h]
  __int64 v213; // [rsp+5C0h] [rbp-100h]
  _QWORD v214[16]; // [rsp+5C8h] [rbp-F8h] BYREF
  __int64 v215; // [rsp+648h] [rbp-78h]
  _BYTE v216[10]; // [rsp+650h] [rbp-70h] BYREF
  __int16 v217; // [rsp+65Ah] [rbp-66h]
  unsigned int v218; // [rsp+65Ch] [rbp-64h] BYREF
  signed __int64 v219; // [rsp+660h] [rbp-60h]
  void *__dst; // [rsp+668h] [rbp-58h]
  __int64 v221; // [rsp+670h] [rbp-50h]
  __int64 v222; // [rsp+678h] [rbp-48h]
  __int64 v223; // [rsp+680h] [rbp-40h]
  int v224; // [rsp+68Ch] [rbp-34h]
  __int64 v225; // [rsp+690h] [rbp-30h]

  v3 = a1;
  codexmate_lib::core::voice::runtime::sync_permissions_internal::h1300a66e8cd539dc(__src, a2);
  if ( !__OFSUB__(0, __src[0]) )
  {
    a1[3] = __src[2];
    v17 = __src[0];
    a1[2] = __src[1];
    a1[1] = v17;
LABEL_11:
    *v3 = 2;
    return v3;
  }
  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a2);
  v5 = v4;
  v6 = (_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v4 + 32);
  if ( !v7 )
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32);
  __dst = v3;
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7);
  v225 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, 0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v9) = v9 ^ 1;
    if ( *(_BYTE *)(v5 + 40) )
      goto LABEL_6;
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(v5 + 40) )
    {
LABEL_6:
      v214[0] = 0;
      v214[1] = 1;
      v214[2] = 0;
      __src[2] = 1610612768;
      __src[0] = v214;
      __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v216,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v11 = v9;
      v12 = v5;
      v13 = v214[0];
      v14 = v214[1];
      v15 = v214[2];
      v208[0] = *(_DWORD *)((char *)&v214[2] + 1);
      *(_DWORD *)((char *)v208 + 3) = HIDWORD(v214[2]);
      if ( !(_BYTE)v11
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               v11) )
      {
        *(_BYTE *)(v12 + 40) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6);
      v3 = __dst;
      *((_QWORD *)__dst + 1) = v13;
      v3[2] = v14;
      *((_BYTE *)v3 + 24) = v15;
      v16 = *(_DWORD *)((char *)v208 + 3);
      *(_DWORD *)((char *)v3 + 25) = v208[0];
      *((_DWORD *)v3 + 7) = v16;
      goto LABEL_11;
    }
  }
  if ( (unsigned __int8)(*(_BYTE *)(v5 + 908) - 1) < 4u )
  {
    codexmate_lib::core::voice::runtime::VoiceRuntimeInner::to_payload::h8404c411b85a7667(__src, v5 + 48);
    v19 = (__int64)__src;
    v20 = (__int64)__dst;
    memcpy(__dst, __src, 0x2C8u);
    if ( (_BYTE)v9 )
      goto LABEL_31;
LABEL_30:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v19, v21, v22) )
    {
      *(_BYTE *)(v5 + 40) = 1;
    }
    goto LABEL_31;
  }
  if ( *(_BYTE *)(v5 + 898) )
  {
    if ( *(_BYTE *)(v5 + 905) )
    {
      v23 = *(_QWORD *)(v5 + 592);
      if ( v23 != 0x8000000000000000LL && v23 )
      {
        v7 = *(_QWORD *)(v5 + 600);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v23, 1);
      }
      *(_QWORD *)(v5 + 592) = 0x8000000000000000LL;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v23);
      v24 = 27;
      v20 = 27;
      v19 = 1;
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
      if ( v25 )
      {
        *(_QWORD *)(v25 + 16) = 0x839DE68EA3E98B85LL;
        *(_QWORD *)(v25 + 8) = 0xE5A6BAE988BAE488LL;
        *(_QWORD *)v25 = 0x8EE68885E5B7AFE8LL;
        *(_DWORD *)(v25 + 23) = -1868961405;
        v22 = __dst;
        *((_QWORD *)__dst + 1) = 27;
        v22[2] = v25;
        v22[3] = 27;
        *v22 = 2;
        if ( (_BYTE)v9 )
          goto LABEL_31;
        goto LABEL_30;
      }
LABEL_242:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24);
    }
    if ( !*(_BYTE *)(v5 + 901) && *(_BYTE *)(v5 + 906) )
    {
      v71 = *(_QWORD *)(v5 + 592);
      if ( v71 != 0x8000000000000000LL && v71 )
      {
        v7 = *(_QWORD *)(v5 + 600);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v71, 1);
      }
      *(_QWORD *)(v5 + 592) = 0x8000000000000000LL;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v71);
      v24 = 46;
      v20 = 46;
      v19 = 1;
      v72 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
      if ( v72 )
      {
        *(_QWORD *)((char *)v72 + 38) = 0x9099E9839DE6AB88LL;
        v72[4] = 0xAB88E586AFE8B39FLL;
        v72[3] = 0xE9ADAFE888BAE488LL;
        v72[2] = 0x8EE68885E581A6E8LL;
        v72[1] = 0x809CE92068636565LL;
        *v72 = 0x705320656C707041LL;
        v22 = __dst;
        *((_QWORD *)__dst + 1) = 46;
        v22[2] = v72;
        v22[3] = 46;
        *v22 = 2;
        if ( (_BYTE)v9 )
          goto LABEL_31;
        goto LABEL_30;
      }
      goto LABEL_242;
    }
    v223 = a2;
    v28 = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_SESSION_COUNTER::h7a6a95b37a1ec95d);
    v29 = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1);
    __src[2] = *(_QWORD *)(v5 + 608);
    v30 = *(_QWORD *)(v5 + 592);
    __src[1] = *(_QWORD *)(v5 + 600);
    __src[0] = v30;
    *(_QWORD *)(v5 + 592) = 0x8000000000000000LL;
    v31 = *(_QWORD *)(v5 + 616);
    v219 = v28;
    if ( v31 != 0x8000000000000000LL && v31 )
    {
      v7 = *(_QWORD *)(v5 + 624);
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v31, 1);
      v28 = v219;
    }
    *(_QWORD *)(v5 + 632) = __src[2];
    v32 = __src[0];
    v33 = __src[1];
    *(_QWORD *)(v5 + 624) = __src[1];
    *(_QWORD *)(v5 + 616) = v32;
    *(_QWORD *)(v5 + 872) = v29;
    *(_QWORD *)(v5 + 880) = v28;
    *(_BYTE *)(v5 + 908) = 1;
    *(_QWORD *)(v5 + 320) = 0;
    *(_QWORD *)(v5 + 344) = 0;
    v34 = *(_QWORD *)(v5 + 664);
    if ( v34 != 0x8000000000000000LL && v34 )
    {
      v7 = *(_QWORD *)(v5 + 672);
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v34, 1);
    }
    *(_QWORD *)(v5 + 664) = 0x8000000000000000LL;
    v35 = std::time::Instant::now::hda76af2c3a449055(v7, v34, v8, v33, v28);
    v203 = v29;
    *(_QWORD *)(v5 + 712) = v35;
    *(_DWORD *)(v5 + 720) = v36;
    if ( !(_BYTE)v9
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v34, v36, v37) )
    {
      *(_BYTE *)(v5 + 40) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6);
    v38 = v223;
    _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h97f86209a0ab5d4a(__src);
    codexmate_lib::core::voice::runtime::watchdog::spawn_starting_watchdog::h711021a648ebcbff(__src, v203);
    v39 = (_QWORD *)tauri::Manager::state::hb5ba04dc9da9798f(v38);
    v40 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v39[1] + 24LL))(&v184, *v39);
    v165 = v185;
    LOBYTE(v40) = 1;
    v224 = v40;
    if ( v186 >= 0x20 )
      v41 = core::str::count::do_count_chars::h4875767a8f682eeb(v185, v186);
    else
      v41 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v185, v186);
    v166 = v188;
    LOBYTE(v41) = 1;
    v224 = v41;
    if ( v189 >= 0x20 )
      v42 = core::str::count::do_count_chars::h4875767a8f682eeb(v188, v189);
    else
      v42 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v188, v189);
    LOBYTE(v42) = 1;
    v224 = v42;
    v167 = v191;
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v191, v192);
    v168 = v194;
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v194, v195);
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v214, v39 + 4);
    if ( LOBYTE(v214[0]) )
    {
      LODWORD(v43) = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        __src[0] = "codexmate_lib::core::voice::runtimestandby";
        __src[1] = 35;
        __src[2] = "codexmate_lib::core::voice::runtimestandby";
        __src[3] = 35;
        __src[4] = &off_101967AB8;
        v43 = log::__private_api::log::h719f4907c7336ae9(
                "[TypeMami] failed to capture foreground context: runtime lock poisonedcodexmate_lib::core::voice::runtimestandby",
                141,
                2,
                __src);
      }
      LOBYTE(v43) = 1;
      v224 = v43;
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$GT$$GT$$GT$::h84ea48b3f2e297a0(v214);
    }
    else
    {
      v44 = (_QWORD *)v214[1];
      LOBYTE(v224) = v214[2];
      v45 = (_QWORD *)(v214[1] + 320LL);
      v46 = *(_QWORD *)(v214[1] + 320LL);
      if ( v46 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v214[1] + 328LL), v46, 1);
      v45[2] = v186;
      v47 = v184;
      v45[1] = v185;
      *v45 = v47;
      v48 = v44[43];
      if ( v48 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[44], v48, 1);
      v44[45] = v189;
      v49 = v187;
      v44[44] = v188;
      v44[43] = v49;
      v50 = v44[46];
      if ( v50 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[47], v50, 1);
      v44[48] = v192;
      v51 = v190;
      v44[47] = v191;
      v44[46] = v51;
      v52 = v44[49];
      if ( v52 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[50], v52, 1);
      v44[51] = v195;
      v53 = v193;
      v44[50] = v194;
      v44[49] = v53;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..resources..ResourceTable$GT$$GT$::h15095e88e3d36389(
        v44,
        (unsigned __int8)v224);
      v224 = 0;
    }
    v54 = tauri::Manager::state::hb5ba04dc9da9798f(v223);
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v209, v54 + 32);
    v55 = (_QWORD *)v209[1];
    v56 = v209[2];
    if ( LODWORD(v209[0]) == 1 )
    {
      v214[0] = 0;
      v214[1] = 1;
      v214[2] = 0;
      __src[2] = 1610612768;
      __src[0] = v214;
      __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v216,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v59 = v214[0];
      v60 = v214[1];
      v61 = v214[2];
      if ( !v56
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v57,
                               v58) )
      {
        *((_BYTE *)v55 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v55);
LABEL_181:
      v214[0] = v59;
      v214[1] = v60;
      v214[2] = v61;
      v141 = tauri::Manager::state::hb5ba04dc9da9798f(v223);
      v3 = __dst;
      std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(__src, v141 + 32);
      v142 = __src[1];
      v143 = __src[2];
      if ( !LOBYTE(__src[0]) )
      {
        codexmate_lib::core::voice::runtime::start_capture::_$u7b$$u7b$closure$u7d$$u7d$::h743b90a78ba01985(
          v203,
          v214,
          __src[1],
          LOBYTE(__src[2]));
        v143 = 2;
      }
      core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeInner$GT$$GT$$GT$$GT$::h5f894d83e3cfffe9(
        v142,
        v143);
      codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(v223);
      codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v223, 0);
      codexmate_lib::platform::audio_feedback::restore_volume::h57816de92cf42a19();
      codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, v223);
      if ( 2LL * __src[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1);
      v3[3] = v214[2];
      v144 = v214[0];
      v3[2] = v214[1];
      v3[1] = v144;
      *v3 = 2;
LABEL_186:
      if ( (_BYTE)v224 )
      {
        if ( v184 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v185, v184, 1);
        if ( v187 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v188, v187, 1);
        if ( v190 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v191, v190, 1);
        if ( v193 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v194, v193, 1);
      }
      return v3;
    }
    v62 = *(unsigned __int8 *)(v209[1] + 869LL);
    codexmate_lib::core::voice::runtime::normalize_recognition_language::h7e55ddc3ae8f6e78(
      __src,
      *(_QWORD *)(v209[1] + 232LL),
      *(_QWORD *)(v209[1] + 240LL));
    v63 = v55 + 46;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v164, v55 + 46);
    v210 = __src[0];
    v204 = __src[1];
    v222 = __src[2];
    if ( !v56
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v164, v63, v64, v65) )
    {
      *((_BYTE *)v55 + 8) = 1;
    }
    v66 = *v55;
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v55);
    v201 = v164[2];
    v200 = v164[1];
    v199 = v164[0];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v63);
    if ( v62 )
    {
      if ( v62 == 1 )
      {
        v67 = 12;
        v68 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( v68 )
        {
          v69 = v68;
          qmemcpy(v68, "aliyunFunAsr", 12);
          v70 = 12;
LABEL_82:
          v74 = 0;
LABEL_83:
          v211 = v70;
          v212 = v69;
          v213 = v70;
          codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581((__int64)__src, (__int64)v69, v70);
          v76 = __src[0];
          if ( __src[0] == 0x8000000000000000LL )
          {
            qmemcpy(v214, &__src[1], 0x60u);
            v174 = 0;
            v175 = 1;
            v176 = 0;
            v209[2] = 1610612768;
            v209[0] = &v174;
            v209[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    v214,
                                    v209) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
                55,
                v216,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
            v59 = v174;
            v219 = v175;
            v61 = v176;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]);
            v77 = 1;
LABEL_175:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v70, 1);
LABEL_176:
            if ( v199 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v199, 1);
            if ( ((v210 != 0) & (unsigned __int8)v77) != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, v210, 1);
            v60 = v219;
            goto LABEL_181;
          }
          qmemcpy(v173, &__src[4], sizeof(v173));
          v170 = __src[1];
          v171 = __src[2];
          v215 = __src[3];
          v172 = __src[3];
          v169 = __src[0];
          if ( v74 )
            v78 = (*v69 ^ 0x657053656C707061LL | *(_QWORD *)((char *)v69 + 3) ^ 0x686365657053656CLL) == 0;
          else
            v78 = 0;
          if ( v78 || LOBYTE(v173[8]) )
          {
            v82 = __src[0];
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v174, &__src[13]);
            v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
            if ( !v79 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
            v80 = (__int64)v79;
            qmemcpy(v79, "appleSpeech", 11);
            a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v70, 1);
            v211 = 11;
            v212 = (_QWORD *)v80;
            v213 = 11;
            codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581((__int64)__src, v80, 11);
            if ( __src[0] == 0x8000000000000000LL )
            {
              qmemcpy(v214, &__src[1], 0x60u);
              v174 = 0;
              v175 = 1;
              v176 = 0;
              v209[2] = 1610612768;
              v209[0] = &v174;
              v209[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
              if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                      v214,
                                      v209) )
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
                  55,
                  v216,
                  &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
                  &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
              v81 = v174;
              v219 = v175;
              v61 = v176;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]);
              v225 = v81;
LABEL_101:
              v90 = v215;
              if ( v76 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v76, 1);
              if ( v90 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[0], v90, 1);
              v77 = 1;
              v91 = 1;
              goto LABEL_168;
            }
            v96 = __src[1];
            v97 = __src[2];
            v221 = __src[0];
            v98 = __src[3];
            qmemcpy(v161, &__src[4], sizeof(v161));
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceAsrConfigPayload$GT$::ha09a02f17b7d9880(
              &v169,
              a3);
            v169 = v221;
            v170 = v96;
            v171 = v97;
            v215 = v98;
            v172 = v98;
            v82 = v221;
            qmemcpy(v173, v161, sizeof(v173));
            v99 = __src;
            v100 = tauri::Manager::state::hb5ba04dc9da9798f(v223) + 32;
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(__src, v100);
            if ( LOBYTE(__src[0]) )
            {
              v103 = __src[1];
              if ( !LOBYTE(__src[2])
                && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                       __src,
                                       v100,
                                       v101,
                                       v102) )
              {
                *(_BYTE *)(v103 + 8) = 1;
              }
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v103);
            }
            else
            {
              v134 = __src[1];
              v135 = __src[2];
              *(_BYTE *)(__src[1] + 869LL) = 0;
              v136 = *(_QWORD *)(v134 + 632);
              if ( v136 != 0x8000000000000000LL && v136 )
              {
                v99 = *(_QWORD **)(v134 + 640);
                a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v136, 1);
              }
              *(_QWORD *)(v134 + 632) = 0x8000000000000000LL;
              if ( !v135
                && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                       v99,
                                       v136,
                                       v101,
                                       v102) )
              {
                *(_BYTE *)(v134 + 8) = 1;
              }
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v134);
            }
          }
          v83 = tauri::Manager::state::he23903daf699d7bb(v223);
          std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(&v174, v83);
          v221 = v82;
          v84 = (_QWORD *)v175;
          v85 = v176;
          if ( (_DWORD)v174 == 1 )
          {
            v209[0] = 0;
            v209[1] = 1;
            v209[2] = 0;
            v214[2] = 1610612768;
            v214[0] = v209;
            v214[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
            if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                    "poisoned lock: another task failed inside",
                                    41,
                                    v214) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
                55,
                v216,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
            v88 = v209[0];
            v219 = v209[1];
            v61 = v209[2];
            if ( !v85
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                     "poisoned lock: another task failed inside",
                                     41,
                                     v86,
                                     v87) )
            {
              *((_BYTE *)v84 + 8) = 1;
            }
            v89 = v221;
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v84);
            v225 = v88;
            v76 = v89;
            goto LABEL_101;
          }
          v92 = v175 + 16;
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __src,
            v175 + 16);
          if ( !v85
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__src, v92, v93, v94) )
          {
            *((_BYTE *)v84 + 8) = 1;
          }
          v95 = v210;
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v84);
          codexmate_lib::core::voice::workspace::load_workspace::h3bd5764166137b0d(v209, __src);
          if ( v209[0] == 0x8000000000000000LL )
          {
            qmemcpy(v214, &v209[1], 0x60u);
            if ( v214[0] != 11 )
            {
              v196 = 0;
              v197 = 8;
              v198 = 0;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v214);
LABEL_128:
              core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(__src);
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v209, &v211);
              v108 = v173[0];
              v109 = v173[1];
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v214, &v173[2]);
              __src[11] = v173[7];
              __src[10] = v173[6];
              __src[9] = v173[5];
              __src[12] = v95;
              __src[13] = v204;
              __src[14] = v222;
              __src[15] = v196;
              __src[16] = v197;
              __src[17] = v198;
              __src[0] = v209[0];
              __src[1] = v209[1];
              __src[2] = v209[2];
              __src[3] = v215;
              __src[4] = v108;
              __src[5] = v109;
              __src[6] = v214[0];
              __src[7] = v214[1];
              __src[8] = v214[2];
              v110 = tauri::Manager::state::hb5ba04dc9da9798f(v223) + 32;
              std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v209, v110);
              if ( LOBYTE(v209[0]) )
              {
                v113 = v209[1];
                if ( !LOBYTE(v209[2])
                  && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
                  && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                         v209,
                                         v110,
                                         v111,
                                         v112) )
                {
                  *(_BYTE *)(v113 + 8) = 1;
                }
                LOBYTE(v108) = 1;
                std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v113);
              }
              else
              {
                v108 = v209[1];
                v114 = v209[2];
                v214[2] = v213;
                v214[1] = v212;
                v214[0] = v211;
                v115 = (_QWORD *)(v209[1] + 416LL);
                v116 = *(_QWORD *)(v209[1] + 416LL);
                if ( v116 )
                  a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209[1] + 424LL), v116, 1);
                v115[2] = v214[2];
                v117 = v214[0];
                v115[1] = v214[1];
                *v115 = v117;
                v118 = v214;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v214, &__src[6]);
                v120 = *(_QWORD *)(v108 + 440);
                if ( v120 )
                {
                  v118 = *(_QWORD **)(v108 + 448);
                  a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v120, 1);
                }
                *(_QWORD *)(v108 + 456) = v214[2];
                v121 = v214[0];
                v122 = v214[1];
                *(_QWORD *)(v108 + 448) = v214[1];
                *(_QWORD *)(v108 + 440) = v121;
                *(_QWORD *)(v108 + 480) = 0;
                *(_QWORD *)(v108 + 504) = 0;
                *(_QWORD *)(v108 + 16) = 0;
                v123 = *(_QWORD *)(v108 + 608);
                if ( v123 != 0x8000000000000000LL && v123 )
                {
                  v118 = *(_QWORD **)(v108 + 616);
                  a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v123, 1);
                }
                *(_QWORD *)(v108 + 608) = 0x8000000000000000LL;
                if ( !v114
                  && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v225) != 0
                  && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                         v118,
                                         v123,
                                         v119,
                                         v122) )
                {
                  *(_BYTE *)(v108 + 8) = 1;
                }
                std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v108);
                LODWORD(v108) = 0;
              }
              std::env::temp_dir::h8078010294fc1613(v214);
              LODWORD(v222) = v108;
              v124 = (__int64 *)v214[1];
              v125 = v214[2];
              uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v205);
              *(_QWORD *)v216 = &v205;
              v209[0] = v216;
              v209[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a4d7c20b9399658;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v162, &unk_1017C302B, v209);
              v126 = &v174;
              std::path::Path::join::hd8b46286031c5a87(&v174, v124, v125, v162);
              v127 = v214[0];
              if ( v214[0] )
              {
                v126 = v124;
                a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v214[0], 1);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v126, v127);
              v128 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
              if ( !v128 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
              v214[0] = 128;
              v214[1] = v128;
              v214[2] = 0;
              v205 = v214;
              alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(
                v214,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_137,
                1);
              LOWORD(v209[0]) = 256;
              v209[1] = &v205;
              v133 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(
                                 v209,
                                 &unk_1016021B8,
                                 8,
                                 __src);
              if ( v133 )
                goto LABEL_155;
              if ( LOBYTE(v209[0]) )
                goto LABEL_147;
              v133 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(
                                 v209,
                                 &anon_4776471024d1e9bb78f2861cb2b51e1e_277,
                                 6,
                                 &__src[3]);
              if ( v133 )
                goto LABEL_155;
              if ( LOBYTE(v209[0]) )
                goto LABEL_147;
              v133 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(
                                 v209,
                                 "model",
                                 5,
                                 &__src[6]);
              if ( v133 )
                goto LABEL_155;
              if ( LOBYTE(v209[0]) )
                goto LABEL_147;
              v133 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(
                                 v209,
                                 &anon_4776471024d1e9bb78f2861cb2b51e1e_400,
                                 7,
                                 &__src[9]);
              if ( v133 )
                goto LABEL_155;
              if ( LOBYTE(v209[0]) )
              {
LABEL_147:
                v133 = (_QWORD *)serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3);
                goto LABEL_155;
              }
              v133 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(
                                 v209,
                                 &unk_1015E3AB0,
                                 8,
                                 &__src[12]);
              if ( v133
                || (v133 = (_QWORD *)_$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hf5ccc6a959ac73c1(
                                       v209,
                                       &__src[15])) != nullptr )
              {
LABEL_155:
                if ( v214[0] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[1], v214[0], 1);
                goto LABEL_157;
              }
              if ( (v209[0] & 1) == 0 && BYTE1(v209[0]) )
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(
                  *(_QWORD *)v209[1],
                  &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
                  1);
              v130 = v214[0];
              v133 = (_QWORD *)v214[1];
              if ( v214[0] == 0x8000000000000000LL )
              {
LABEL_157:
                v205 = v133;
                v209[0] = 0;
                v209[1] = 1;
                v209[2] = 0;
                v214[2] = 1610612768;
                v214[0] = v209;
                v214[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
                v137 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
                         &v205,
                         v214,
                         v129,
                         v130,
                         v131,
                         v132);
                v138 = v221;
                v91 = v222;
                if ( v137 )
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
                    55,
                    v216,
                    &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
                    &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
                v225 = v209[0];
                v219 = v209[1];
                v61 = v209[2];
                if ( *v133 == 1 )
                {
                  core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v133 + 1);
                }
                else if ( !*v133 )
                {
                  v139 = v133[2];
                  if ( v139 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133[1], v139, 1);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, 40, 8);
                v140 = v174;
                if ( !v174 )
                  goto LABEL_165;
                goto LABEL_164;
              }
              v145 = v214[0];
              v146 = v214[2];
              *(_DWORD *)v216 = 0;
              *(_DWORD *)&v216[6] = 256;
              v217 = 256;
              *(_WORD *)&v216[4] = 384;
              v147 = v176;
              v148 = v175;
              std::fs::OpenOptions::_open::h1dad73452047b8aa(&v205, v216, v175, v176);
              if ( (_DWORD)v205 == 1 )
              {
                v202 = v206;
                v209[0] = &v202;
                v209[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v214, (char *)&loc_1017C3044 + 1, v209);
                if ( (v202 & 3) == 1 )
                {
                  v225 = v202 - 1;
                  v149 = *(_QWORD *)(v202 - 1);
                  v150 = *(_QWORD *)(v202 + 7);
                  if ( *(_QWORD *)v150 )
                    (*(void (__fastcall **)(__int64))v150)(v149);
                  v151 = *(_QWORD *)(v150 + 8);
                  if ( v151 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v151, *(_QWORD *)(v150 + 16));
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, 24, 8);
                }
                v225 = v214[0];
                v219 = v214[1];
                v61 = v214[2];
LABEL_245:
                if ( v145 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v145, 1);
                v138 = v221;
                v91 = v222;
                v140 = v174;
                if ( !v174 )
                  goto LABEL_165;
LABEL_164:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v175, v140, 1);
LABEL_165:
                core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..SidecarAsrConfig$GT$::ha16fa4d355c7ac3c(__src);
                if ( v138 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v138, 1);
                v77 = 0;
LABEL_168:
                v59 = v225;
                if ( v173[2] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[3], v173[2], 1);
                if ( v77 && v173[5] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[6], v173[5], 1);
                if ( !v91 )
                  goto LABEL_176;
                v70 = v211;
                if ( !v211 )
                  goto LABEL_176;
                goto LABEL_175;
              }
              v218 = HIDWORD(v205);
              v152 = std::io::Write::write_all::he2fd9a54c4cbfe2a(&v218, v133, v146);
              if ( v152 )
              {
                codexmate_lib::core::voice::runtime::build_sidecar_asr_config::_$u7b$$u7b$closure$u7d$$u7d$::h9ef8bf50b0e07383(
                  v214,
                  v152);
                v225 = v214[0];
                v219 = v214[1];
                v61 = v214[2];
                close_NOCANCEL(v218);
                goto LABEL_245;
              }
              v209[0] = v148;
              v209[1] = v147;
              _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(v214, v209);
              v225 = v214[0];
              v153 = (void *)v214[1];
              v154 = v214[2];
              close_NOCANCEL(v218);
              if ( v145 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v145, 1);
              if ( v174 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, v174, 1);
              core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..SidecarAsrConfig$GT$::ha16fa4d355c7ac3c(__src);
              if ( v221 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v221, 1);
              if ( v173[2] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[3], v173[2], 1);
              if ( (_BYTE)v222 && v211 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v211, 1);
              if ( v199 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v199, 1);
              codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, v223);
              if ( __src[0] == 0x8000000000000000LL )
              {
                if ( !(unsigned __int8)codexmate_lib::core::voice::runtime::try_start_via_standby::h3d631c6e535767e9(
                                         v223,
                                         v153,
                                         v154,
                                         v219) )
                {
                  codexmate_lib::core::voice::runtime::start_capture_legacy::hc4830eeb5bb65184(
                    v209,
                    v223,
                    v153,
                    v154,
                    v219);
                  if ( v209[0] != 0x8000000000000000LL )
                  {
                    v214[2] = v209[2];
                    v214[1] = v209[1];
                    v214[0] = v209[0];
                    __src[0] = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v153, v154);
                    if ( __src[0] )
                      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src);
                    v158 = tauri::Manager::state::hb5ba04dc9da9798f(v223);
                    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(__src, v158 + 32);
                    v159 = __src[1];
                    v160 = __src[2];
                    if ( !LOBYTE(__src[0]) )
                    {
                      codexmate_lib::core::voice::runtime::start_capture::_$u7b$$u7b$closure$u7d$$u7d$::h743b90a78ba01985(
                        v203,
                        v214,
                        __src[1],
                        LOBYTE(__src[2]));
                      v160 = 2;
                    }
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeInner$GT$$GT$$GT$$GT$::h5f894d83e3cfffe9(
                      v159,
                      v160);
                    codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(v223);
                    codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v223, 0);
                    codexmate_lib::platform::audio_feedback::restore_volume::h57816de92cf42a19();
                    codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, v223);
                    if ( 2LL * __src[0] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1);
                    v155 = __dst;
                    *((_QWORD *)__dst + 3) = v214[2];
                    v156 = v214[0];
                    v157 = v214[1];
                    goto LABEL_279;
                  }
                }
                codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, v223);
                if ( __src[0] == 0x8000000000000000LL )
                {
                  if ( v225 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153, v225, 1);
                  if ( (_BYTE)v224 )
                  {
                    if ( v184 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, v184, 1);
                    if ( v187 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v187, 1);
                    if ( v190 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, v190, 1);
                    if ( v193 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v168, v193, 1);
                  }
                  v3 = __dst;
                  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, v223);
                  return v3;
                }
              }
              v155 = __dst;
              *((_QWORD *)__dst + 3) = __src[2];
              v156 = __src[0];
              v157 = __src[1];
LABEL_279:
              v155[2] = v157;
              v155[1] = v156;
              *v155 = 2;
              v3 = __dst;
              if ( v225 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153, v225, 1);
              goto LABEL_186;
            }
          }
          else
          {
            qmemcpy(v214, v209, sizeof(v214));
            v174 = 0;
            v177 = 0;
            v178 = v214[4];
            v179 = v214[4];
            v180 = v214[3];
            v181 = v214[4] + 160LL * v214[5];
            v182 = &v199;
            v183 = 200;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h0352e7fcd9646129(
              &v205,
              &v174);
            v104 = v214[1];
            core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..models..VoicePromptTemplate$u5d$$GT$::hd6af1f5b3fc8a147(
              v214[1],
              v214[2]);
            if ( v214[0] )
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, 112LL * v214[0], 8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcddca5922a9e4867(&v214[6]);
            if ( v214[6] )
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[7], 72LL * v214[6], 8);
            v105 = v214[10];
            v106 = v214[11];
            if ( v214[11] )
            {
              v107 = v214[10];
              do
              {
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v107);
                v107 += 440;
                --v106;
              }
              while ( v106 );
            }
            if ( v214[9] )
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, 440LL * v214[9], 8);
            if ( v214[12] )
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[13], v214[12], 1);
            v214[1] = v205;
            v214[2] = v206;
            v214[3] = v207;
          }
          v198 = v214[3];
          v197 = v214[2];
          v196 = v214[1];
          goto LABEL_128;
        }
      }
      else
      {
        v67 = 6;
        v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( v75 )
        {
          v69 = (_QWORD *)v75;
          *(_WORD *)(v75 + 4) = 26977;
          *(_DWORD *)v75 = 1852141679;
          v70 = 6;
          goto LABEL_82;
        }
      }
    }
    else
    {
      v67 = 11;
      v73 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( v73 )
      {
        v69 = v73;
        qmemcpy(v73, "appleSpeech", 11);
        v70 = 11;
        v74 = 1;
        goto LABEL_83;
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v67);
  }
  v26 = *(_QWORD *)(v5 + 592);
  if ( v26 != 0x8000000000000000LL && v26 )
  {
    v7 = *(_QWORD *)(v5 + 600);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v26, 1);
  }
  *(_QWORD *)(v5 + 592) = 0x8000000000000000LL;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v26);
  v24 = 30;
  v20 = 30;
  v19 = 1;
  v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1);
  if ( !v27 )
    goto LABEL_242;
  *(_QWORD *)((char *)v27 + 22) = 0xBD83E89F8AE59986LL;
  v27[2] = 0x9986E5ACBDE8B39FLL;
  v27[1] = 0xE9ADAFE8AF90E580LL;
  *v27 = 0xBCE58885E5B7AFE8LL;
  v22 = __dst;
  *((_QWORD *)__dst + 1) = 30;
  v22[2] = v27;
  v22[3] = 30;
  *v22 = 2;
  if ( !(_BYTE)v9 )
    goto LABEL_30;
LABEL_31:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6);
  return __dst;
}
