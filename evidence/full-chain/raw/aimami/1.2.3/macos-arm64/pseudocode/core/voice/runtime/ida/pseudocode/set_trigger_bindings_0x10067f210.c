// __ZN13codexmate_lib4core5voice7runtime20set_trigger_bindings @ 0x10067f210 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::set_trigger_bindings::h17a3c6ae908568c6(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  void *v16; // rbx
  void (__fastcall __noreturn *v17)(); // rsi
  size_t v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rdx
  __int128 v26; // kr00_16
  char v27; // r15
  int v28; // eax
  char *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rsi
  _QWORD *v34; // rbx
  __int64 v35; // rsi
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int128 v43; // kr10_16
  char v44; // r12
  int v45; // eax
  char *v46; // rdx
  int v47; // eax
  double v48; // xmm0_8
  unsigned int v49; // eax
  size_t v50; // r15
  const void *v51; // rbx
  void *v52; // rax
  __int64 v53; // rdx
  char v54; // bl
  _QWORD *v55; // rbx
  _QWORD *v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rax
  double v60; // xmm0_8
  __int64 v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int128 v67; // kr20_16
  char v68; // dl
  unsigned int v69; // eax
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int128 v87; // [rsp+0h] [rbp-750h] BYREF
  __int64 v88; // [rsp+10h] [rbp-740h]
  __int128 v89; // [rsp+18h] [rbp-738h]
  __int64 v90; // [rsp+28h] [rbp-728h]
  __int128 v91; // [rsp+230h] [rbp-520h]
  __int128 v92; // [rsp+2E8h] [rbp-468h] BYREF
  __int128 v93; // [rsp+2F8h] [rbp-458h]
  __int128 v94; // [rsp+308h] [rbp-448h]
  __int64 v95; // [rsp+318h] [rbp-438h]
  __int64 v96; // [rsp+320h] [rbp-430h]
  __int64 v97; // [rsp+328h] [rbp-428h]
  __int128 v98; // [rsp+330h] [rbp-420h]
  __int64 v99; // [rsp+340h] [rbp-410h]
  __int128 v100; // [rsp+348h] [rbp-408h]
  __int64 v101; // [rsp+358h] [rbp-3F8h]
  __int128 v102; // [rsp+360h] [rbp-3F0h]
  __int64 v103; // [rsp+370h] [rbp-3E0h]
  __int128 v104; // [rsp+378h] [rbp-3D8h]
  __int64 v105; // [rsp+388h] [rbp-3C8h]
  __int128 v106; // [rsp+390h] [rbp-3C0h]
  __int64 v107; // [rsp+3A0h] [rbp-3B0h]
  __int128 v108; // [rsp+3A8h] [rbp-3A8h]
  __int64 v109; // [rsp+3B8h] [rbp-398h]
  __int64 v110; // [rsp+3C0h] [rbp-390h]
  __int64 v111; // [rsp+3C8h] [rbp-388h]
  __int64 v112; // [rsp+3D0h] [rbp-380h]
  __int64 v113; // [rsp+3D8h] [rbp-378h]
  void *v114; // [rsp+3E0h] [rbp-370h]
  __int64 v115; // [rsp+3E8h] [rbp-368h]
  __int64 v116; // [rsp+3F0h] [rbp-360h]
  __int64 v117; // [rsp+3F8h] [rbp-358h]
  __int64 v118; // [rsp+400h] [rbp-350h]
  __int128 v119; // [rsp+408h] [rbp-348h]
  __int128 v120; // [rsp+418h] [rbp-338h]
  __int128 v121; // [rsp+428h] [rbp-328h]
  __int64 v122; // [rsp+438h] [rbp-318h]
  __int64 v123; // [rsp+440h] [rbp-310h]
  __int64 v124; // [rsp+448h] [rbp-308h]
  __int64 v125; // [rsp+450h] [rbp-300h]
  __int64 v126; // [rsp+458h] [rbp-2F8h]
  __int64 v127; // [rsp+460h] [rbp-2F0h]
  int v128; // [rsp+468h] [rbp-2E8h]
  __int16 v129; // [rsp+46Ch] [rbp-2E4h]
  char v130; // [rsp+46Eh] [rbp-2E2h]
  char v131; // [rsp+46Fh] [rbp-2E1h]
  char v132; // [rsp+470h] [rbp-2E0h]
  char v133; // [rsp+471h] [rbp-2DFh]
  char v134; // [rsp+472h] [rbp-2DEh]
  char v135; // [rsp+473h] [rbp-2DDh]
  _QWORD v136[3]; // [rsp+478h] [rbp-2D8h] BYREF
  __int64 v137; // [rsp+490h] [rbp-2C0h] BYREF
  __int128 v138; // [rsp+498h] [rbp-2B8h]
  __int128 v139; // [rsp+4A8h] [rbp-2A8h] BYREF
  __int64 v140; // [rsp+4B8h] [rbp-298h]
  __int64 v141; // [rsp+4C0h] [rbp-290h] BYREF
  __int64 v142; // [rsp+4C8h] [rbp-288h]
  __int64 v143; // [rsp+4D0h] [rbp-280h]
  __int64 v144; // [rsp+4D8h] [rbp-278h]
  __int64 *v145; // [rsp+4E0h] [rbp-270h]
  __int64 *v146; // [rsp+4E8h] [rbp-268h]
  __int64 v147; // [rsp+4F0h] [rbp-260h]
  __int128 v148; // [rsp+4F8h] [rbp-258h]
  __int128 v149; // [rsp+508h] [rbp-248h]
  __int128 v150; // [rsp+518h] [rbp-238h]
  __int64 v151; // [rsp+528h] [rbp-228h]
  __int128 v152; // [rsp+530h] [rbp-220h]
  _OWORD v153[6]; // [rsp+548h] [rbp-208h] BYREF
  __int128 v154; // [rsp+5A8h] [rbp-1A8h] BYREF
  __int64 v155; // [rsp+5B8h] [rbp-198h]
  __int128 v156; // [rsp+5C0h] [rbp-190h] BYREF
  __int64 v157; // [rsp+5D0h] [rbp-180h]
  __int128 v158; // [rsp+5D8h] [rbp-178h] BYREF
  __int64 v159; // [rsp+5E8h] [rbp-168h]
  __int128 v160; // [rsp+5F0h] [rbp-160h] BYREF
  __int64 v161; // [rsp+600h] [rbp-150h]
  __int64 v162; // [rsp+608h] [rbp-148h]
  __int64 v163; // [rsp+610h] [rbp-140h]
  char v164; // [rsp+618h] [rbp-138h]
  __int128 v165; // [rsp+620h] [rbp-130h] BYREF
  __int64 v166; // [rsp+630h] [rbp-120h]
  void *__dst; // [rsp+638h] [rbp-118h]
  void *v168; // [rsp+640h] [rbp-110h]
  __int128 v169; // [rsp+648h] [rbp-108h] BYREF
  __int64 v170; // [rsp+658h] [rbp-F8h]
  __int128 v171; // [rsp+660h] [rbp-F0h] BYREF
  __int64 v172; // [rsp+670h] [rbp-E0h]
  __int64 v173; // [rsp+678h] [rbp-D8h]
  __int16 v174; // [rsp+682h] [rbp-CEh]
  int v175; // [rsp+684h] [rbp-CCh]
  _QWORD *v176; // [rsp+688h] [rbp-C8h]
  __int128 v177; // [rsp+690h] [rbp-C0h] BYREF
  __int64 v178; // [rsp+6A0h] [rbp-B0h]
  _QWORD *v179; // [rsp+6A8h] [rbp-A8h]
  _OWORD v180[6]; // [rsp+6B0h] [rbp-A0h] BYREF
  __int64 v181; // [rsp+710h] [rbp-40h]
  _QWORD *v182; // [rsp+718h] [rbp-38h]
  char v183; // [rsp+725h] [rbp-2Bh]
  char v184; // [rsp+726h] [rbp-2Ah]
  char v185; // [rsp+727h] [rbp-29h]

  v179 = a5; /*0x10067f224*/
  v175 = a3; /*0x10067f22b*/
  v173 = a2; /*0x10067f231*/
  v6 = a4[6]; /*0x10067f23b*/
  v176 = a4; /*0x10067f23f*/
  v7 = a4[7]; /*0x10067f246*/
  if ( v6 | v7 ) /*0x10067f24d*/
  {
    v8 = a4[7]; /*0x10067f255*/
    if ( !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(v6, v8) ) /*0x10067f25f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v8); /*0x10067f380*/
      if ( !v7 ) /*0x10067f388*/
        goto LABEL_24; /*0x10067f388*/
      goto LABEL_8; /*0x10067f388*/
    }
  }
  v9 = v179[6]; /*0x10067f26c*/
  v10 = v179[7]; /*0x10067f270*/
  if ( *((_OWORD *)v179 + 3) != 0 ) /*0x10067f27a*/
  {
    v11 = v179[6]; /*0x10067f27c*/
    v12 = v179[7]; /*0x10067f27f*/
    if ( !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d( /*0x10067f289*/
                             v11,
                             v12) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x10067f61c*/
      if ( !v10 ) /*0x10067f624*/
      {
LABEL_24:
        v14 = 285; /*0x10067f62a*/
        v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x10067f63a*/
        if ( v31 ) /*0x10067f642*/
        {
          v16 = (void *)v31; /*0x10067f648*/
          v17 = (void (__fastcall __noreturn *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x10067f64b*/
          v18 = 285; /*0x10067f652*/
          goto LABEL_26; /*0x10067f652*/
        }
        goto LABEL_107; /*0x10067f642*/
      }
LABEL_8:
      v14 = 129; /*0x10067f38e*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x10067f39e*/
      if ( v15 ) /*0x10067f3a6*/
      {
        v16 = (void *)v15; /*0x10067f3ac*/
        v17 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x10067f3af*/
        v18 = 129; /*0x10067f3b6*/
LABEL_26:
        memcpy(v16, v17, v18); /*0x10067f657*/
        a1[1] = v14; /*0x10067f65f*/
        a1[2] = v16; /*0x10067f663*/
        a1[3] = v14; /*0x10067f667*/
        *a1 = 2; /*0x10067f66b*/
LABEL_27:
        v32 = v179; /*0x10067f672*/
        if ( *v179 ) /*0x10067f679*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v179[1], *v179, 1); /*0x10067f68a*/
        v33 = v32[3]; /*0x10067f68f*/
        if ( v33 ) /*0x10067f696*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32[4], v33, 1); /*0x10067f6a1*/
        v34 = v176; /*0x10067f6a6*/
        if ( *v176 ) /*0x10067f6ad*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176[1], *v176, 1); /*0x10067f6be*/
        v35 = v34[3]; /*0x10067f6c3*/
        if ( v35 ) /*0x10067f6ca*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34[4], v35, 1); /*0x10067f6d5*/
        return a1; /*0x10067f6d5*/
      }
LABEL_107:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x10068085f*/
    }
  }
  __dst = a1; /*0x10067f296*/
  if ( (_BYTE)v175 ) /*0x10067f29d*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, v179); /*0x10067f2b1*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v92, v179 + 3); /*0x10067f2c8*/
    v88 = *(_QWORD *)&v180[1]; /*0x10067f2d4*/
    v87 = v180[0]; /*0x10067f2f0*/
    v89 = v92; /*0x10067f305*/
    v13 = v93; /*0x10067f313*/
    v90 = v93; /*0x10067f31a*/
    v162 = v9; /*0x10067f321*/
    v158 = v180[0]; /*0x10067f328*/
    v159 = *(_QWORD *)&v180[1]; /*0x10067f336*/
    v161 = v93; /*0x10067f344*/
    v160 = v92; /*0x10067f360*/
    v164 = 1; /*0x10067f367*/
    v163 = v10; /*0x10067f36e*/
    v7 = v10; /*0x10067f375*/
    v6 = v9; /*0x10067f378*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, v176); /*0x10067f3ce*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v92, v176 + 3); /*0x10067f3e5*/
    v88 = *(_QWORD *)&v180[1]; /*0x10067f3f1*/
    v87 = v180[0]; /*0x10067f40d*/
    v89 = v92; /*0x10067f422*/
    v13 = v93; /*0x10067f430*/
    v90 = v93; /*0x10067f437*/
    v162 = v6; /*0x10067f43e*/
    v158 = v180[0]; /*0x10067f445*/
    v159 = *(_QWORD *)&v180[1]; /*0x10067f453*/
    v161 = v93; /*0x10067f461*/
    v160 = v92; /*0x10067f47d*/
    v164 = 0; /*0x10067f484*/
    v163 = v7; /*0x10067f48b*/
  }
  v19 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(v173 + 136) + 4872LL) + 16LL); /*0x10067f4ab*/
  v20 = v19; /*0x10067f4b0*/
  if ( !v19 ) /*0x10067f4b6*/
  {
    *(_QWORD *)&v92 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x10067f6f6*/
    *((_QWORD *)&v92 + 1) = 76; /*0x10067f6fd*/
    *(_QWORD *)&v87 = &v92; /*0x10067f70f*/
    *((_QWORD *)&v87 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10067f71d*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10067f739*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v87,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v21 = *v19; /*0x10067f4bc*/
  if ( !*v19 ) /*0x10067f4bc*/
    v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v19); /*0x10067f74b*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x10067f4c8*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v24 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v13, v22, v23) ^ 1; /*0x10067f75a*/
    if ( *((_BYTE *)v20 + 8) )
    {
LABEL_16:
      *(_QWORD *)&v180[0] = 0; /*0x10067f4f2*/
      *((_QWORD *)&v180[0] + 1) = 1; /*0x10067f4fd*/
      *(_QWORD *)&v180[1] = 0; /*0x10067f508*/
      *(_QWORD *)&v93 = 1610612768; /*0x10067f513*/
      *(_QWORD *)&v92 = v180; /*0x10067f525*/
      *((_QWORD *)&v92 + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10067f533*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v92) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10067f91a*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v177,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v26 = v180[0]; /*0x10067f561*/
      v27 = v180[1]; /*0x10067f568*/
      LODWORD(v153[0]) = *(_DWORD *)((char *)&v180[1] + 1); /*0x10067f576*/
      *(_DWORD *)((char *)v153 + 3) = DWORD1(v180[1]); /*0x10067f582*/
      if ( !v24
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v25,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v20 + 8) = 1; /*0x10068020a*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x10067f5ac*/
      v28 = v153[0]; /*0x10067f5b1*/
      v29 = (char *)__dst; /*0x10067f5bd*/
      *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v153 + 3); /*0x10067f5c4*/
      *(_DWORD *)(v29 + 25) = v28; /*0x10067f5c7*/
      *(_OWORD *)(v29 + 8) = v26; /*0x10067f5ca*/
      v29[24] = v27; /*0x10067f5d2*/
      a1 = v29; /*0x10067f5d6*/
      *(_QWORD *)v29 = 2; /*0x10067f5d9*/
      v30 = v158; /*0x10067f5e0*/
      if ( !(_QWORD)v158 ) /*0x10067f5ea*/
        goto LABEL_21; /*0x10067f5ea*/
      goto LABEL_20; /*0x10067f5ea*/
    }
  }
  else
  {
    v24 = 0; /*0x10067f4e3*/
    if ( *((_BYTE *)v20 + 8) ) /*0x10067f4e5*/
      goto LABEL_16; /*0x10067f4ec*/
  }
  v37 = v20 + 2; /*0x10067f76d*/
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x10067f778*/
    &v87,
    v20 + 2);
  if ( !v24 /*0x10068023f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &v87,
                           v37,
                           v38,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v20 + 8) = 1; /*0x10068024c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x10067f7a1*/
  v39 = tauri::Manager::state::hb5ba04dc9da9798f(v173); /*0x10067f7b2*/
  v182 = (_QWORD *)(v39 + 32); /*0x10067f7b9*/
  v40 = *(_QWORD *)(v39 + 32); /*0x10067f7bd*/
  if ( !v40 ) /*0x10067f7c4*/
    v40 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v182); /*0x10067f92d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v40); /*0x10067f7ca*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v47 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v40, v37, v41, 0x7FFFFFFFFFFFFFFFLL); /*0x10067f935*/
    LOBYTE(v47) = v47 ^ 1; /*0x10067f93a*/
    LODWORD(v181) = v47; /*0x10067f93c*/
    if ( *(_BYTE *)(v39 + 40) ) /*0x10067f93f*/
      goto LABEL_44; /*0x10067f946*/
  }
  else
  {
    LODWORD(v181) = 0; /*0x10067f7ec*/
    if ( *(_BYTE *)(v39 + 40) )
    {
LABEL_44:
      *(_QWORD *)&v153[0] = 0; /*0x10067f800*/
      *((_QWORD *)&v153[0] + 1) = 1; /*0x10067f80b*/
      *(_QWORD *)&v153[1] = 0; /*0x10067f816*/
      *(_QWORD *)&v180[1] = 1610612768; /*0x10067f821*/
      *(_QWORD *)&v180[0] = v153; /*0x10067f833*/
      *((_QWORD *)&v180[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10067f841*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v180) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100680235*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v177,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v43 = v153[0]; /*0x10067f86f*/
      v44 = v153[1]; /*0x10067f876*/
      LODWORD(v177) = *(_DWORD *)((char *)&v153[1] + 1); /*0x10067f884*/
      *(_DWORD *)((char *)&v177 + 3) = DWORD1(v153[1]); /*0x10067f890*/
      if ( !(_BYTE)v181
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v42,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v39 + 40) = 1; /*0x100680263*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v182); /*0x10067f8c0*/
      v45 = v177; /*0x10067f8c5*/
      v46 = (char *)__dst; /*0x10067f8d1*/
      *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v177 + 3); /*0x10067f8d8*/
      *(_DWORD *)(v46 + 25) = v45; /*0x10067f8db*/
      *(_OWORD *)(v46 + 8) = v43; /*0x10067f8de*/
      a1 = v46; /*0x10067f8e6*/
      v46[24] = v44; /*0x10067f8e9*/
      *(_QWORD *)v46 = 2; /*0x10067f8ed*/
      goto LABEL_66; /*0x10067f8f4*/
    }
  }
  v184 = *(_BYTE *)(v39 + 898); /*0x10067f954*/
  v183 = *(_BYTE *)(v39 + 901); /*0x10067f95f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v165, v39 + 256); /*0x10067f970*/
  v185 = *(_BYTE *)(v39 + 903); /*0x10067f97d*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v177, v39 + 280); /*0x10067f98e*/
  v152 = *(_OWORD *)(v39 + 808); /*0x10067f9a2*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h08697cf7f9d0479a( /*0x10067f9b0*/
    v180,
    v39 + 776);
  v48 = *(double *)&v152; /*0x10067f9b5*/
  v180[2] = v152; /*0x10067f9bc*/
  v153[0] = v180[0]; /*0x10067f9ce*/
  v153[1] = v180[1]; /*0x10067f9e3*/
  v153[2] = v152; /*0x10067fa00*/
  v174 = *(_WORD *)(v39 + 896); /*0x10067fa16*/
  v49 = 8 * *(unsigned __int8 *)(v39 + 902); /*0x10067fa25*/
  v50 = *(_QWORD *)((char *)&unk_101605D30 + v49); /*0x10067fa2f*/
  v51 = *(_UNKNOWN **)((char *)&off_101968990 + v49); /*0x10067fa3a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v180, v39 + 776); /*0x10067fa3e*/
  v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v50, 1); /*0x10067fa4b*/
  if ( !v52 ) /*0x10067fa53*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v50); /*0x100680876*/
  v168 = v52; /*0x10067fa59*/
  *(_QWORD *)&v152 = v50; /*0x10067fa66*/
  memcpy(v52, v51, v50); /*0x10067fa70*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v141, v39 + 568); /*0x10067fa86*/
  v54 = *(_BYTE *)(v39 + 904); /*0x10067fa8b*/
  v172 = v166; /*0x10067fa9a*/
  v171 = v165; /*0x10067fab6*/
  v169 = v177; /*0x10067facb*/
  v170 = v178; /*0x10067fae0*/
  v92 = v153[0]; /*0x10067faf5*/
  v93 = v153[1]; /*0x10067fb0a*/
  v94 = v153[2]; /*0x10067fb2d*/
  if ( !(_BYTE)v181 /*0x10068026d*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &v141,
                           v39 + 568,
                           v53,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v39 + 40) = 1; /*0x10068027a*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v182); /*0x10067fb65*/
  v157 = v172; /*0x10067fb71*/
  v156 = v171; /*0x10067fb8d*/
  v155 = v170; /*0x10067fb9b*/
  v154 = v169; /*0x10067fbb7*/
  v148 = v92; /*0x10067fbcc*/
  v149 = v93; /*0x10067fbe1*/
  v150 = v94; /*0x10067fbfd*/
  v151 = v141; /*0x10067fc19*/
  v147 = v142; /*0x10067fc35*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v139, &v158); /*0x10067fc3c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v137, &v158); /*0x10067fc4f*/
  a1 = __dst; /*0x10067fc54*/
  LOBYTE(v182) = v54; /*0x10067fc5b*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v136, &v160); /*0x10067fc6c*/
  v55 = v176; /*0x10067fc71*/
  v181 = v176[6]; /*0x10067fc7c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v165, v176); /*0x10067fc8a*/
  v145 = v55 + 3; /*0x10067fc9a*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v177, v55 + 3); /*0x10067fca1*/
  v144 = v55[7]; /*0x10067fcaa*/
  v56 = v179; /*0x10067fcb1*/
  v57 = v179[6]; /*0x10067fcb8*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v171, v179); /*0x10067fcc6*/
  v146 = v56 + 3; /*0x10067fcd6*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v169, v56 + 3); /*0x10067fcdd*/
  v58 = v56[7]; /*0x10067fce2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v153, &v156); /*0x10067fcf4*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, &v154); /*0x10067fd07*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v180, &v154); /*0x10067fd0c*/
  v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10067fd1b*/
  if ( !v59 ) /*0x10067fd23*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100680887*/
  *(_WORD *)(v59 + 4) = 28005; /*0x10067fd29*/
  *(_DWORD *)v59 = 1953724787; /*0x10067fd2f*/
  v113 = v152; /*0x10067fd3c*/
  v114 = v168; /*0x10067fd4a*/
  v115 = v152; /*0x10067fd51*/
  v116 = v141; /*0x10067fd66*/
  v117 = v142; /*0x10067fd6d*/
  v118 = v143; /*0x10067fd7b*/
  v128 = 7; /*0x10067fd82*/
  v130 = v184; /*0x10067fd90*/
  v92 = v139; /*0x10067fda4*/
  *(_QWORD *)&v93 = v140; /*0x10067fdb9*/
  v122 = v6; /*0x10067fdc0*/
  v94 = v138; /*0x10067fde3*/
  *((_QWORD *)&v93 + 1) = v137; /*0x10067fdea*/
  v97 = v136[2]; /*0x10067fdf8*/
  v96 = v136[1]; /*0x10067fe0d*/
  v95 = v136[0]; /*0x10067fe14*/
  v131 = v175; /*0x10067fe21*/
  v123 = v7; /*0x10067fe27*/
  v124 = v181; /*0x10067fe32*/
  v98 = v165; /*0x10067fe47*/
  v99 = v166; /*0x10067fe5c*/
  v101 = v178; /*0x10067fe6a*/
  v100 = v177; /*0x10067fe86*/
  v125 = v144; /*0x10067fe94*/
  v126 = v57; /*0x10067fe9b*/
  v103 = v172; /*0x10067fea9*/
  v102 = v171; /*0x10067fec5*/
  v105 = v170; /*0x10067fed3*/
  v104 = v169; /*0x10067feef*/
  v127 = v58; /*0x10067fef6*/
  v133 = v183; /*0x10067ff01*/
  v107 = *(_QWORD *)&v153[1]; /*0x10067ff0e*/
  v106 = v153[0]; /*0x10067ff2a*/
  v134 = v185; /*0x10067ff35*/
  v109 = *(_QWORD *)&v180[1]; /*0x10067ff42*/
  v108 = v180[0]; /*0x10067ff5e*/
  v121 = v150; /*0x10067ff7a*/
  v120 = v149; /*0x10067ff96*/
  v119 = v148; /*0x10067ffb2*/
  v110 = 6; /*0x10067ffb9*/
  v111 = v59; /*0x10067ffc4*/
  v112 = 6; /*0x10067ffcb*/
  v129 = v174; /*0x10067ffdd*/
  v132 = 0; /*0x10067ffe4*/
  v135 = (char)v182; /*0x10067ffef*/
  v60 = codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65( /*0x10068000c*/
          v153,
          (__int64)&v87,
          (__int64)&v92,
          v48);
  if ( LODWORD(v153[0]) != 11 ) /*0x100680018*/
  {
    qmemcpy(v180, v153, sizeof(v180)); /*0x1006800d6*/
    *(_QWORD *)&v171 = 0; /*0x1006800d9*/
    *((_QWORD *)&v171 + 1) = 1; /*0x1006800e4*/
    v172 = 0; /*0x1006800ef*/
    v170 = 1610612768; /*0x1006800fa*/
    *(_QWORD *)&v169 = &v171; /*0x10068010c*/
    *((_QWORD *)&v169 + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068011a*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10068012b*/
                            v180,
                            &v169) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006802b6*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v177,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v177 = v171; /*0x100680146*/
    v178 = v172; /*0x10068015b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v153); /*0x100680169*/
    a1[3] = v178; /*0x100680175*/
    *(_OWORD *)(a1 + 1) = v177; /*0x10068018b*/
    goto LABEL_62; /*0x10068018b*/
  }
  v61 = tauri::Manager::state::hb5ba04dc9da9798f(v173); /*0x10068002a*/
  v182 = (_QWORD *)(v61 + 32); /*0x100680031*/
  v62 = *(_QWORD *)(v61 + 32); /*0x100680035*/
  if ( !v62 ) /*0x10068003c*/
    v62 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v182); /*0x10068028d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v62); /*0x100680042*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10068005e*/
  {
    v69 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v62, &v87, v63, 0x7FFFFFFFFFFFFFFFLL); /*0x1006802c0*/
    v66 = v69; /*0x1006802c5*/
    LOBYTE(v66) = v69 ^ 1; /*0x1006802c7*/
    if ( *(_BYTE *)(v61 + 40) ) /*0x1006802ca*/
      goto LABEL_59; /*0x1006802d1*/
  }
  else
  {
    v66 = 0; /*0x100680064*/
    if ( *(_BYTE *)(v61 + 40) ) /*0x100680066*/
    {
LABEL_59:
      codexmate_lib::core::voice::runtime::set_trigger_bindings::_$u7b$$u7b$closure$u7d$$u7d$::hf58be6894db2c6d5( /*0x100680073*/
        v180,
        v182,
        (unsigned __int8)v66,
        v66,
        v64,
        v65,
        v60,
        v87,
        *((_QWORD *)&v87 + 1),
        v88,
        v89,
        *((_QWORD *)&v89 + 1),
        v90);
      v67 = v180[0]; /*0x10068008d*/
      v68 = v180[1]; /*0x100680094*/
      *((_DWORD *)a1 + 7) = DWORD1(v180[1]); /*0x1006800a1*/
      *(_DWORD *)((char *)a1 + 25) = *(_DWORD *)((char *)&v180[1] + 1); /*0x1006800ab*/
      *(_OWORD *)(a1 + 1) = v67; /*0x1006800af*/
      *((_BYTE *)a1 + 24) = v68; /*0x1006800b7*/
LABEL_62:
      *a1 = 2; /*0x10068018f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(&v92); /*0x10068019d*/
      if ( (_QWORD)v154 ) /*0x1006801ac*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v154 + 1), v154, 1); /*0x1006801ba*/
      if ( (_QWORD)v156 ) /*0x1006801c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v156 + 1), v156, 1); /*0x1006801d7*/
LABEL_66:
      core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v87); /*0x1006801dc*/
      v30 = v158; /*0x1006801e8*/
      if ( !(_QWORD)v158 ) /*0x1006801f2*/
      {
LABEL_21:
        if ( (_QWORD)v160 ) /*0x10067f607*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v160 + 1), v160, 1); /*0x10067f615*/
        goto LABEL_27; /*0x10067f61a*/
      }
LABEL_20:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v158 + 1), v30, 1); /*0x10067f5ec*/
      goto LABEL_21; /*0x10067f5f8*/
    }
  }
  LODWORD(v181) = v66; /*0x1006802d7*/
  *(_BYTE *)(v61 + 898) = v184; /*0x1006802de*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, &v158); /*0x1006802f5*/
  v70 = *(_QWORD *)(v61 + 88); /*0x1006802fe*/
  if ( v70 ) /*0x100680305*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 96), v70, 1); /*0x100680310*/
  *(_QWORD *)(v61 + 104) = *(_QWORD *)&v180[1]; /*0x10068031c*/
  *(_OWORD *)(v61 + 88) = v180[0]; /*0x100680332*/
  *(_QWORD *)(v61 + 824) = v6; /*0x100680335*/
  *(_QWORD *)&v180[1] = v159; /*0x100680343*/
  v180[0] = v158; /*0x10068035f*/
  v71 = *(_QWORD *)(v61 + 112); /*0x10068036a*/
  if ( v71 ) /*0x100680371*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 120), v71, 1); /*0x10068037c*/
  *(_QWORD *)(v61 + 128) = *(_QWORD *)&v180[1]; /*0x100680388*/
  *(_OWORD *)(v61 + 112) = v180[0]; /*0x10068039e*/
  *(_QWORD *)&v180[1] = v161; /*0x1006803ac*/
  v180[0] = v160; /*0x1006803c1*/
  v72 = *(_QWORD *)(v61 + 136); /*0x1006803cf*/
  if ( v72 ) /*0x1006803d9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 144), v72, 1); /*0x1006803e7*/
  *(_QWORD *)(v61 + 152) = *(_QWORD *)&v180[1]; /*0x1006803f3*/
  *(_OWORD *)(v61 + 136) = v180[0]; /*0x100680409*/
  *(_BYTE *)(v61 + 899) = v175; /*0x100680412*/
  *(_QWORD *)(v61 + 832) = v7; /*0x100680419*/
  v73 = v176; /*0x100680420*/
  *(_QWORD *)(v61 + 840) = v176[6]; /*0x10068042b*/
  *(_QWORD *)&v180[1] = v73[2]; /*0x100680436*/
  v74 = *v73; /*0x10068043d*/
  *((_QWORD *)&v180[0] + 1) = v73[1]; /*0x100680444*/
  *(_QWORD *)&v180[0] = v74; /*0x10068044b*/
  v75 = *(_QWORD *)(v61 + 160); /*0x100680459*/
  if ( v75 ) /*0x100680463*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 168), v75, 1); /*0x100680471*/
  *(_QWORD *)(v61 + 176) = *(_QWORD *)&v180[1]; /*0x10068047d*/
  *(_OWORD *)(v61 + 160) = v180[0]; /*0x100680493*/
  *(_QWORD *)&v180[1] = v145[2]; /*0x1006804a1*/
  v76 = *v145; /*0x1006804a8*/
  *((_QWORD *)&v180[0] + 1) = v145[1]; /*0x1006804af*/
  *(_QWORD *)&v180[0] = v76; /*0x1006804b6*/
  v77 = *(_QWORD *)(v61 + 184); /*0x1006804c4*/
  if ( v77 ) /*0x1006804ce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 192), v77, 1); /*0x1006804dc*/
  *(_QWORD *)(v61 + 200) = *(_QWORD *)&v180[1]; /*0x1006804e8*/
  *(_OWORD *)(v61 + 184) = v180[0]; /*0x1006804fe*/
  *(_QWORD *)(v61 + 848) = v176[7]; /*0x10068050c*/
  v78 = v179; /*0x100680513*/
  *(_QWORD *)(v61 + 856) = v179[6]; /*0x10068051e*/
  *(_QWORD *)&v180[1] = v78[2]; /*0x100680529*/
  v79 = *v78; /*0x100680530*/
  *((_QWORD *)&v180[0] + 1) = v78[1]; /*0x100680537*/
  *(_QWORD *)&v180[0] = v79; /*0x10068053e*/
  v80 = *(_QWORD *)(v61 + 208); /*0x10068054c*/
  if ( v80 ) /*0x100680556*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 216), v80, 1); /*0x100680564*/
  *(_QWORD *)(v61 + 224) = *(_QWORD *)&v180[1]; /*0x100680570*/
  *(_OWORD *)(v61 + 208) = v180[0]; /*0x100680586*/
  *(_QWORD *)&v180[1] = v146[2]; /*0x100680594*/
  v81 = *v146; /*0x10068059b*/
  *((_QWORD *)&v180[0] + 1) = v146[1]; /*0x1006805a2*/
  *(_QWORD *)&v180[0] = v81; /*0x1006805a9*/
  v82 = *(_QWORD *)(v61 + 232); /*0x1006805b7*/
  if ( v82 ) /*0x1006805c1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 240), v82, 1); /*0x1006805cf*/
  *(_QWORD *)(v61 + 248) = *(_QWORD *)&v180[1]; /*0x1006805db*/
  *(_OWORD *)(v61 + 232) = v180[0]; /*0x1006805f1*/
  *(_QWORD *)(v61 + 864) = v179[7]; /*0x1006805ff*/
  *(_BYTE *)(v61 + 901) = v183; /*0x10068060a*/
  *(_QWORD *)&v180[1] = v157; /*0x100680618*/
  v180[0] = v156; /*0x100680634*/
  v83 = *(_QWORD *)(v61 + 256); /*0x100680642*/
  if ( v83 ) /*0x10068064c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 264), v83, 1); /*0x10068065a*/
  *(_QWORD *)(v61 + 272) = *(_QWORD *)&v180[1]; /*0x100680666*/
  *(_OWORD *)(v61 + 256) = v180[0]; /*0x10068067c*/
  *(_BYTE *)(v61 + 903) = v185; /*0x100680683*/
  *(_QWORD *)&v180[1] = v155; /*0x100680691*/
  v180[0] = v154; /*0x1006806ad*/
  v84 = *(_QWORD *)(v61 + 280); /*0x1006806bb*/
  if ( v84 ) /*0x1006806c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 288), v84, 1); /*0x1006806d3*/
  *(_QWORD *)(v61 + 296) = *(_QWORD *)&v180[1]; /*0x1006806df*/
  *(_OWORD *)(v61 + 280) = v180[0]; /*0x1006806f5*/
  v153[0] = v91; /*0x100680706*/
  _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(v180, v153); /*0x100680724*/
  v85 = *(_QWORD *)(v61 + 544); /*0x100680733*/
  if ( v85 ) /*0x100680740*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 552), v85, 1); /*0x10068074f*/
  *(_QWORD *)(v61 + 560) = *(_QWORD *)&v180[1]; /*0x10068075b*/
  *(_OWORD *)(v61 + 544) = v180[0]; /*0x100680771*/
  v86 = *(_QWORD *)(v61 + 664); /*0x100680774*/
  if ( v86 != 0x8000000000000000LL && v86 ) /*0x100680794*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 672), v86, 1); /*0x1006807a3*/
  *(_QWORD *)(v61 + 664) = 0x8000000000000000LL; /*0x1006807a8*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..resources..ResourceTable$GT$$GT$::h15095e88e3d36389( /*0x1006807ba*/
    v182,
    (unsigned __int8)v181);
  codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)v180, v173); /*0x1006807cf*/
  if ( *(_QWORD *)&v180[0] == 0x8000000000000000LL /*0x1006807f9*/
    && (codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)v180, v173),
        *(_QWORD *)&v180[0] == 0x8000000000000000LL) )
  {
    codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(a1, v173); /*0x100680807*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(&v92); /*0x100680813*/
  }
  else
  {
    a1[3] = *(_QWORD *)&v180[1]; /*0x100680821*/
    *(_OWORD *)(a1 + 1) = v180[0]; /*0x100680837*/
    *a1 = 2; /*0x10068083b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(&v92); /*0x100680849*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v87); /*0x100680855*/
  return a1; /*0x10067f6dd*/
}