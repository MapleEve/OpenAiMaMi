// __ZN13codexmate_lib8commands8accounts29capture_switch_rollback_state @ 0x100699a90 | 基线 same-set
double __fastcall codexmate_lib::commands::accounts::capture_switch_rollback_state::he4656c31ac00a9e7(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r12
  char v12; // bl
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  void *v19; // r12
  __int64 v20; // rax
  double result; // xmm0_8
  __int64 v22; // rsi
  __int64 v23; // rdi
  void *v24; // r13
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // r15
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // [rsp+8h] [rbp-468h] BYREF
  __int64 v45; // [rsp+10h] [rbp-460h]
  __int64 v46; // [rsp+18h] [rbp-458h]
  __int64 v47; // [rsp+20h] [rbp-450h]
  __int64 v48; // [rsp+28h] [rbp-448h]
  __int64 v49; // [rsp+30h] [rbp-440h]
  __int64 v50; // [rsp+38h] [rbp-438h]
  __int64 v51; // [rsp+40h] [rbp-430h]
  __int64 v52; // [rsp+48h] [rbp-428h]
  __int64 v53; // [rsp+50h] [rbp-420h]
  __int64 v54; // [rsp+58h] [rbp-418h]
  __int64 v55; // [rsp+60h] [rbp-410h]
  __int64 v56; // [rsp+68h] [rbp-408h]
  __int64 v57; // [rsp+70h] [rbp-400h]
  __int64 v58; // [rsp+78h] [rbp-3F8h]
  void *v59; // [rsp+80h] [rbp-3F0h]
  __int64 v60; // [rsp+88h] [rbp-3E8h]
  __int64 v61; // [rsp+90h] [rbp-3E0h]
  __int64 v62; // [rsp+98h] [rbp-3D8h]
  __int64 v63; // [rsp+A0h] [rbp-3D0h]
  __int64 v64; // [rsp+A8h] [rbp-3C8h]
  void *v65; // [rsp+B0h] [rbp-3C0h]
  __int64 v66; // [rsp+B8h] [rbp-3B8h]
  __int64 v67; // [rsp+C0h] [rbp-3B0h]
  __int64 v68; // [rsp+C8h] [rbp-3A8h]
  __int64 v69; // [rsp+D0h] [rbp-3A0h]
  __int64 v70; // [rsp+D8h] [rbp-398h]
  __int64 v71; // [rsp+E0h] [rbp-390h]
  __int64 v72; // [rsp+E8h] [rbp-388h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-380h]
  __int64 v74; // [rsp+F8h] [rbp-378h]
  __int64 v75; // [rsp+100h] [rbp-370h]
  __int64 v76; // [rsp+108h] [rbp-368h]
  __int64 v77; // [rsp+110h] [rbp-360h]
  _DWORD v78[2]; // [rsp+118h] [rbp-358h]
  void **v79; // [rsp+120h] [rbp-350h] BYREF
  __int64 (__fastcall **v80)(); // [rsp+128h] [rbp-348h]
  __int64 v81; // [rsp+130h] [rbp-340h]
  __int64 v82; // [rsp+138h] [rbp-338h]
  __int64 v83; // [rsp+140h] [rbp-330h]
  __int64 v84; // [rsp+148h] [rbp-328h]
  __int64 v85; // [rsp+150h] [rbp-320h]
  __int64 v86; // [rsp+158h] [rbp-318h]
  __int64 v87; // [rsp+168h] [rbp-308h]
  __int64 v88; // [rsp+170h] [rbp-300h]
  __int64 v89; // [rsp+180h] [rbp-2F0h]
  __int64 v90; // [rsp+188h] [rbp-2E8h]
  __int64 v91; // [rsp+198h] [rbp-2D8h]
  __int64 v92; // [rsp+1A0h] [rbp-2D0h]
  __int64 v93; // [rsp+1B0h] [rbp-2C0h]
  __int64 v94; // [rsp+1B8h] [rbp-2B8h]
  __int64 v95; // [rsp+1C8h] [rbp-2A8h]
  __int64 v96; // [rsp+1D0h] [rbp-2A0h]
  __int64 v97; // [rsp+1E0h] [rbp-290h]
  __int64 v98; // [rsp+1E8h] [rbp-288h]
  __int64 v99; // [rsp+1F0h] [rbp-280h]
  __int64 v100; // [rsp+1F8h] [rbp-278h]
  __int64 v101; // [rsp+200h] [rbp-270h]
  __int64 v102; // [rsp+208h] [rbp-268h]
  __int64 v103; // [rsp+210h] [rbp-260h]
  __int64 v104; // [rsp+218h] [rbp-258h]
  __int64 v105; // [rsp+228h] [rbp-248h]
  __int64 v106; // [rsp+230h] [rbp-240h]
  __int64 v107; // [rsp+240h] [rbp-230h]
  __int64 v108; // [rsp+248h] [rbp-228h]
  __int64 v109; // [rsp+258h] [rbp-218h]
  __int64 v110; // [rsp+260h] [rbp-210h]
  __int64 v111; // [rsp+270h] [rbp-200h]
  __int64 v112; // [rsp+278h] [rbp-1F8h]
  __int64 v113; // [rsp+288h] [rbp-1E8h]
  __int64 v114; // [rsp+290h] [rbp-1E0h]
  __int64 v115; // [rsp+2A0h] [rbp-1D0h]
  __int64 v116; // [rsp+2A8h] [rbp-1C8h]
  __int64 v117; // [rsp+2B8h] [rbp-1B8h]
  __int64 v118; // [rsp+2C0h] [rbp-1B0h]
  __int64 v119; // [rsp+2D0h] [rbp-1A0h]
  __int64 v120; // [rsp+2D8h] [rbp-198h]
  __int64 v121; // [rsp+2E8h] [rbp-188h]
  __int64 v122; // [rsp+2F0h] [rbp-180h]
  __int64 v123; // [rsp+300h] [rbp-170h]
  __int64 v124; // [rsp+308h] [rbp-168h]
  __int64 v125; // [rsp+310h] [rbp-160h]
  __int64 v126; // [rsp+318h] [rbp-158h]
  __int64 v127; // [rsp+320h] [rbp-150h]
  __int64 v128; // [rsp+328h] [rbp-148h]
  __int64 v129; // [rsp+330h] [rbp-140h]
  __int64 v130; // [rsp+338h] [rbp-138h]
  __int64 v131; // [rsp+348h] [rbp-128h]
  __int64 v132; // [rsp+350h] [rbp-120h]
  __int64 v133; // [rsp+360h] [rbp-110h]
  __int64 v134; // [rsp+368h] [rbp-108h]
  __int64 v135; // [rsp+378h] [rbp-F8h]
  __int64 v136; // [rsp+380h] [rbp-F0h]
  __int64 v137; // [rsp+390h] [rbp-E0h]
  __int64 v138; // [rsp+398h] [rbp-D8h]
  __int64 v139; // [rsp+3A8h] [rbp-C8h]
  __int64 v140; // [rsp+3B0h] [rbp-C0h]
  __int64 v141; // [rsp+3C0h] [rbp-B0h]
  __int64 v142; // [rsp+3C8h] [rbp-A8h]
  __int64 v143; // [rsp+3D8h] [rbp-98h]
  __int64 v144; // [rsp+3E0h] [rbp-90h]
  __int64 v145; // [rsp+3F0h] [rbp-80h]
  __int64 v146; // [rsp+3F8h] [rbp-78h]
  void *v147; // [rsp+408h] [rbp-68h] BYREF
  __int64 v148; // [rsp+410h] [rbp-60h]
  __int64 v149; // [rsp+418h] [rbp-58h]
  __int64 v150; // [rsp+420h] [rbp-50h]
  __int64 v151; // [rsp+428h] [rbp-48h]
  __int64 v152; // [rsp+430h] [rbp-40h]
  __int64 v153; // [rsp+438h] [rbp-38h]
  __int64 v154; // [rsp+440h] [rbp-30h]

  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(a2 + 4872) + 16LL); /*0x100699ab2*/
  if ( !v3 ) /*0x100699aba*/
  {
    v147 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100699be8*/
    v148 = 76; /*0x100699bec*/
    v79 = &v147; /*0x100699bf8*/
    v80 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100699c06*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100699c22*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v79,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = v3; /*0x100699ac0*/
  v5 = *v3; /*0x100699ac3*/
  if ( !*v3 ) /*0x100699ac3*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x100699c2f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100699ad9*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x100699c3c*/
    LOBYTE(v8) = v8 ^ 1; /*0x100699c3f*/
    if ( *((_BYTE *)v4 + 8) ) /*0x100699c43*/
      goto LABEL_6; /*0x100699c4a*/
  }
  else
  {
    v8 = 0; /*0x100699af5*/
    if ( *((_BYTE *)v4 + 8) )
    {
LABEL_6:
      v147 = nullptr; /*0x100699b05*/
      v148 = 1; /*0x100699b0d*/
      v149 = 0; /*0x100699b15*/
      v81 = 1610612768; /*0x100699b1d*/
      v79 = &v147; /*0x100699b2c*/
      v80 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100699b3a*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v79) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069ab30*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v72,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v10 = v8; /*0x100699b61*/
      v11 = v147; /*0x100699b64*/
      v71 = v148; /*0x100699b6c*/
      v12 = v149; /*0x100699b73*/
      v78[0] = *(_DWORD *)((char *)&v149 + 1); /*0x100699b7a*/
      *(_DWORD *)((char *)v78 + 3) = HIDWORD(v149); /*0x100699b83*/
      if ( !(_BYTE)v10
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               v10) )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x10069ab44*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100699ba3*/
      *(_QWORD *)(a1 + 8) = v11; /*0x100699ba8*/
      *(_QWORD *)(a1 + 16) = v71; /*0x100699bb3*/
      *(_BYTE *)(a1 + 24) = v12; /*0x100699bb7*/
      v13 = *(_DWORD *)((char *)v78 + 3); /*0x100699bc1*/
      *(_DWORD *)(a1 + 25) = v78[0]; /*0x100699bc7*/
      *(_DWORD *)(a1 + 28) = v13; /*0x100699bcb*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100699bd9*/
      return result; /*0x100699bdc*/
    }
  }
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x100699c5e*/
    &v79,
    v4 + 2);
  if ( !(_BYTE)v8 /*0x10069ab4e*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v79, v4 + 2, v14, v15) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x10069ab5b*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100699c7e*/
  v16 = (_QWORD *)a1; /*0x100699c83*/
  v17 = v97; /*0x100699c86*/
  v18 = v98; /*0x100699c8d*/
  v71 = v99; /*0x100699c9b*/
  v74 = v84; /*0x100699ca9*/
  v73 = v83; /*0x100699cbe*/
  v72 = v82; /*0x100699cc5*/
  codexmate_lib::commands::accounts::FileRestoreState::capture::h8419f3a9c55eea81(&v147, &v72); /*0x100699cd7*/
  v19 = v147; /*0x100699cdc*/
  v56 = v148; /*0x100699ce4*/
  v57 = v149; /*0x100699cef*/
  v58 = v150; /*0x100699cfa*/
  if ( v147 == (void *)0x8000000000000000LL ) /*0x100699d04*/
  {
    v16[3] = v58; /*0x100699d11*/
    v20 = v56; /*0x100699d15*/
    v16[2] = v57; /*0x100699d23*/
    v16[1] = v20; /*0x100699d27*/
    *v16 = 0x8000000000000000LL; /*0x100699d2b*/
    if ( v17 ) /*0x100699d31*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100699d3e*/
    if ( v79 ) /*0x100699d4d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100699d5b*/
    if ( v85 ) /*0x100699d6a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x100699d78*/
    if ( v87 ) /*0x100699d87*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100699d95*/
    if ( v89 ) /*0x100699da4*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x100699db2*/
    if ( v145 != 0x8000000000000000LL && v145 ) /*0x100699dc3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v145, 1); /*0x100699dce*/
    if ( v91 ) /*0x100699ddd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x100699deb*/
    if ( v93 ) /*0x100699dfa*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x100699e08*/
    if ( v95 ) /*0x100699e17*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v95, 1); /*0x100699e25*/
    v22 = v100; /*0x100699e2a*/
    if ( v100 ) /*0x100699e34*/
    {
      v23 = v101; /*0x100699e3a*/
LABEL_61:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x10069a04e*/
      goto LABEL_62; /*0x10069a053*/
    }
    goto LABEL_62; /*0x100699e34*/
  }
  v153 = v18; /*0x100699e46*/
  v70 = v152; /*0x100699e52*/
  v69 = v151; /*0x100699e59*/
  v66 = v56; /*0x100699e6e*/
  v67 = v57; /*0x100699e75*/
  v68 = v58; /*0x100699e83*/
  v65 = v147; /*0x100699e8a*/
  v74 = v102; /*0x100699e98*/
  v73 = v101; /*0x100699ead*/
  v72 = v100; /*0x100699eb4*/
  codexmate_lib::commands::accounts::FileRestoreState::capture::h8419f3a9c55eea81(&v147, &v72); /*0x100699ec6*/
  v24 = v147; /*0x100699ecb*/
  v53 = v148; /*0x100699ed3*/
  v54 = v149; /*0x100699ede*/
  v55 = v150; /*0x100699ee9*/
  if ( v147 == (void *)0x8000000000000000LL ) /*0x100699ef3*/
  {
    v16[3] = v55; /*0x100699f00*/
    v25 = v53; /*0x100699f04*/
    v16[2] = v54; /*0x100699f12*/
    v16[1] = v25; /*0x100699f16*/
    *v16 = 0x8000000000000000LL; /*0x100699f1a*/
    v26 = v153; /*0x100699f20*/
    if ( v19 ) /*0x100699f24*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v19, 1); /*0x100699f35*/
    if ( v68 != 0x8000000000000000LL && v68 ) /*0x100699f49*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100699f57*/
    if ( v17 ) /*0x100699f5f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v17, 1); /*0x100699f6c*/
    if ( v79 ) /*0x100699f7b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100699f89*/
    if ( v85 ) /*0x100699f98*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x100699fa6*/
    if ( v87 ) /*0x100699fb5*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100699fc3*/
    if ( v89 ) /*0x100699fd2*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x100699fe0*/
    if ( v145 != 0x8000000000000000LL && v145 ) /*0x100699ff1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v145, 1); /*0x100699ffc*/
    if ( v91 ) /*0x10069a00b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x10069a019*/
    if ( v93 ) /*0x10069a028*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x10069a036*/
    v22 = v95; /*0x10069a03b*/
    if ( v95 ) /*0x10069a045*/
    {
      v23 = v96; /*0x10069a047*/
      goto LABEL_61; /*0x10069a047*/
    }
LABEL_62:
    if ( v103 ) /*0x10069a062*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x10069a070*/
    if ( v105 ) /*0x10069a07f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1); /*0x10069a08d*/
    if ( v107 ) /*0x10069a09c*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x10069a0aa*/
    if ( v109 ) /*0x10069a0b9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x10069a0c7*/
    if ( v111 ) /*0x10069a0d6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x10069a0e4*/
    if ( v113 ) /*0x10069a0f3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x10069a101*/
    if ( v115 ) /*0x10069a110*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x10069a11e*/
    if ( v117 ) /*0x10069a12d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v117, 1); /*0x10069a13b*/
    if ( v119 ) /*0x10069a14a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v119, 1); /*0x10069a158*/
    if ( v121 ) /*0x10069a167*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v121, 1); /*0x10069a175*/
    v27 = v123; /*0x10069a17a*/
    if ( v123 ) /*0x10069a184*/
    {
      v28 = v124; /*0x10069a186*/
LABEL_84:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x10069a18d*/
      goto LABEL_85; /*0x10069a192*/
    }
    goto LABEL_85; /*0x10069a184*/
  }
  v154 = v17; /*0x10069a2ae*/
  v64 = v152; /*0x10069a2ba*/
  v63 = v151; /*0x10069a2c1*/
  v60 = v53; /*0x10069a2d6*/
  v61 = v54; /*0x10069a2dd*/
  v62 = v55; /*0x10069a2eb*/
  v59 = v147; /*0x10069a2f2*/
  v46 = v125; /*0x10069a300*/
  v45 = v124; /*0x10069a315*/
  v44 = v123; /*0x10069a31c*/
  codexmate_lib::commands::accounts::FileRestoreState::capture::h8419f3a9c55eea81(&v147, &v44); /*0x10069a32e*/
  v31 = v147; /*0x10069a333*/
  v50 = v148; /*0x10069a33b*/
  v51 = v149; /*0x10069a346*/
  v52 = v150; /*0x10069a351*/
  if ( v147 != (void *)0x8000000000000000LL ) /*0x10069a35b*/
  {
    v77 = v152; /*0x10069a628*/
    v76 = v151; /*0x10069a62f*/
    v73 = v50; /*0x10069a644*/
    v74 = v51; /*0x10069a64b*/
    v75 = v52; /*0x10069a659*/
    v72 = (__int64)v147; /*0x10069a660*/
    v46 = v128; /*0x10069a66e*/
    v45 = v127; /*0x10069a683*/
    v44 = v126; /*0x10069a68a*/
    codexmate_lib::commands::accounts::FileRestoreState::capture::h8419f3a9c55eea81(&v147, &v44); /*0x10069a69c*/
    v35 = v147; /*0x10069a6a1*/
    v47 = v148; /*0x10069a6a9*/
    v48 = v149; /*0x10069a6b4*/
    v49 = v150; /*0x10069a6bf*/
    if ( v147 == (void *)0x8000000000000000LL ) /*0x10069a6c9*/
    {
      v16[3] = v49; /*0x10069a6d6*/
      v36 = v47; /*0x10069a6da*/
      v16[2] = v48; /*0x10069a6e8*/
      v16[1] = v36; /*0x10069a6ec*/
      *v16 = 0x8000000000000000LL; /*0x10069a6f0*/
      if ( v31 ) /*0x10069a6f6*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v31, 1); /*0x10069a707*/
      if ( v75 != 0x8000000000000000LL && v75 ) /*0x10069a71b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x10069a729*/
      v37 = v154; /*0x10069a731*/
      if ( v24 ) /*0x10069a735*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v24, 1); /*0x10069a746*/
      if ( v62 != 0x8000000000000000LL && v62 ) /*0x10069a75a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v62, 1); /*0x10069a768*/
      v38 = v153; /*0x10069a770*/
      if ( v19 ) /*0x10069a774*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v19, 1); /*0x10069a785*/
      if ( v68 != 0x8000000000000000LL && v68 ) /*0x10069a799*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x10069a7a7*/
      if ( v37 ) /*0x10069a7af*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x10069a7c0*/
    }
    else
    {
      v39 = v151; /*0x10069a7ca*/
      v16[26] = v152; /*0x10069a7d2*/
      v16[25] = v39; /*0x10069a7d9*/
      v16[24] = v49; /*0x10069a7e7*/
      v40 = v47; /*0x10069a7ee*/
      v16[23] = v48; /*0x10069a7fc*/
      v16[22] = v40; /*0x10069a803*/
      v16[8] = v70; /*0x10069a811*/
      v16[7] = v69; /*0x10069a81c*/
      v16[6] = v68; /*0x10069a827*/
      v16[5] = v67; /*0x10069a832*/
      v41 = v65; /*0x10069a836*/
      v16[4] = v66; /*0x10069a844*/
      v16[3] = v41; /*0x10069a848*/
      v16[14] = v64; /*0x10069a853*/
      v16[13] = v63; /*0x10069a85e*/
      v16[12] = v62; /*0x10069a869*/
      v16[11] = v61; /*0x10069a874*/
      v42 = v59; /*0x10069a878*/
      v16[10] = v60; /*0x10069a886*/
      v16[9] = v42; /*0x10069a88a*/
      v43 = v73; /*0x10069a895*/
      v16[15] = v72; /*0x10069a89c*/
      v16[16] = v43; /*0x10069a8a0*/
      v16[17] = v74; /*0x10069a8ae*/
      v16[18] = v75; /*0x10069a8bc*/
      v16[19] = v76; /*0x10069a8ca*/
      v16[20] = v77; /*0x10069a8d8*/
      *v16 = v154; /*0x10069a8e3*/
      v16[1] = v153; /*0x10069a8ea*/
      v16[2] = v71; /*0x10069a8f5*/
      v16[21] = v35; /*0x10069a8f9*/
      v16[27] = 0x8000000000000000LL; /*0x10069a900*/
    }
    if ( v79 ) /*0x10069a911*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x10069a91f*/
    if ( v85 ) /*0x10069a92e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x10069a93c*/
    if ( v87 ) /*0x10069a94b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x10069a959*/
    if ( v89 ) /*0x10069a968*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x10069a976*/
    if ( v145 != 0x8000000000000000LL && v145 ) /*0x10069a987*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v145, 1); /*0x10069a992*/
    if ( v91 ) /*0x10069a9a1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x10069a9af*/
    if ( v93 ) /*0x10069a9be*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x10069a9cc*/
    if ( v95 ) /*0x10069a9db*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v95, 1); /*0x10069a9e9*/
    if ( v103 ) /*0x10069a9f8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x10069aa06*/
    if ( v105 ) /*0x10069aa15*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1); /*0x10069aa23*/
    if ( v107 ) /*0x10069aa32*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x10069aa40*/
    if ( v109 ) /*0x10069aa4f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x10069aa5d*/
    if ( v111 ) /*0x10069aa6c*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x10069aa7a*/
    if ( v113 ) /*0x10069aa89*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x10069aa97*/
    if ( v115 ) /*0x10069aaa6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x10069aab4*/
    if ( v117 ) /*0x10069aac3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v117, 1); /*0x10069aad1*/
    if ( v119 ) /*0x10069aae0*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v119, 1); /*0x10069aaee*/
    v29 = v121; /*0x10069aaf3*/
    if ( !v121 ) /*0x10069aafd*/
      goto LABEL_88; /*0x10069aafd*/
    v30 = v122; /*0x10069ab03*/
    goto LABEL_87; /*0x10069ab0a*/
  }
  v16[3] = v52; /*0x10069a368*/
  v32 = v50; /*0x10069a36c*/
  v16[2] = v51; /*0x10069a37a*/
  v16[1] = v32; /*0x10069a37e*/
  *v16 = 0x8000000000000000LL; /*0x10069a382*/
  v33 = v154; /*0x10069a388*/
  if ( v24 ) /*0x10069a38c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v24, 1); /*0x10069a39d*/
  if ( v62 != 0x8000000000000000LL && v62 ) /*0x10069a3b1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v62, 1); /*0x10069a3bf*/
  v34 = v153; /*0x10069a3c7*/
  if ( v19 ) /*0x10069a3cb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v19, 1); /*0x10069a3dc*/
  if ( v68 != 0x8000000000000000LL && v68 ) /*0x10069a3f0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x10069a3fe*/
  if ( v33 ) /*0x10069a406*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x10069a413*/
  if ( v79 ) /*0x10069a422*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x10069a430*/
  if ( v85 ) /*0x10069a43f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x10069a44d*/
  if ( v87 ) /*0x10069a45c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x10069a46a*/
  if ( v89 ) /*0x10069a479*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x10069a487*/
  if ( v145 != 0x8000000000000000LL && v145 ) /*0x10069a498*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v145, 1); /*0x10069a4a3*/
  if ( v91 ) /*0x10069a4b2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x10069a4c0*/
  if ( v93 ) /*0x10069a4cf*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x10069a4dd*/
  if ( v95 ) /*0x10069a4ec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v95, 1); /*0x10069a4fa*/
  if ( v103 ) /*0x10069a509*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x10069a517*/
  if ( v105 ) /*0x10069a526*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1); /*0x10069a534*/
  if ( v107 ) /*0x10069a543*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x10069a551*/
  if ( v109 ) /*0x10069a560*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x10069a56e*/
  if ( v111 ) /*0x10069a57d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x10069a58b*/
  if ( v113 ) /*0x10069a59a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x10069a5a8*/
  if ( v115 ) /*0x10069a5b7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x10069a5c5*/
  if ( v117 ) /*0x10069a5d4*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v117, 1); /*0x10069a5e2*/
  if ( v119 ) /*0x10069a5f1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v119, 1); /*0x10069a5ff*/
  v27 = v121; /*0x10069a604*/
  if ( v121 ) /*0x10069a60e*/
  {
    v28 = v122; /*0x10069a614*/
    goto LABEL_84; /*0x10069a61b*/
  }
LABEL_85:
  v29 = v126; /*0x10069a197*/
  if ( v126 ) /*0x10069a1a1*/
  {
    v30 = v127; /*0x10069a1a3*/
LABEL_87:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x10069a1aa*/
  }
LABEL_88:
  if ( v129 ) /*0x10069a1be*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1); /*0x10069a1cc*/
  if ( v131 ) /*0x10069a1db*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x10069a1e9*/
  if ( v133 ) /*0x10069a1f8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v133, 1); /*0x10069a206*/
  if ( v135 ) /*0x10069a215*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1); /*0x10069a223*/
  if ( v137 ) /*0x10069a232*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v137, 1); /*0x10069a240*/
  if ( v139 ) /*0x10069a24f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1); /*0x10069a25d*/
  if ( v141 ) /*0x10069a26c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v141, 1); /*0x10069a27a*/
  if ( v143 ) /*0x10069a289*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v143, 1); /*0x10069a297*/
  return result; /*0x10069a29c*/
}