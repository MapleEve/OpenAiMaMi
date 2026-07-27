// __ZN13codexmate_lib4core8sessions24migrate_session_worktree @ 0x10053a020 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::sessions::migrate_session_worktree::h4d27e7630e1e03cc(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __m128i a5)
{
  size_t v9; // rdx
  size_t v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  _QWORD *v32; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rdx
  size_t v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r8
  _QWORD *v48; // rdx
  __int64 v49; // r13
  char v50; // r12
  _QWORD *v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rsi
  _QWORD *v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r15
  char v57; // r12
  char *v58; // rsi
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rbx
  unsigned __int64 v63; // r13
  __int64 v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rcx
  unsigned __int64 v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // r14
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rsi
  _QWORD v76[14]; // [rsp+10h] [rbp-490h] BYREF
  _QWORD v77[8]; // [rsp+80h] [rbp-420h] BYREF
  _QWORD v78[3]; // [rsp+C0h] [rbp-3E0h] BYREF
  _QWORD v79[3]; // [rsp+D8h] [rbp-3C8h] BYREF
  _QWORD v80[8]; // [rsp+F0h] [rbp-3B0h] BYREF
  _QWORD v81[13]; // [rsp+130h] [rbp-370h] BYREF
  __int64 v82; // [rsp+198h] [rbp-308h] BYREF
  __int64 v83; // [rsp+1A0h] [rbp-300h]
  __int64 v84; // [rsp+1A8h] [rbp-2F8h]
  __int64 v85; // [rsp+1B0h] [rbp-2F0h] BYREF
  __int64 v86; // [rsp+1B8h] [rbp-2E8h]
  __int64 v87; // [rsp+1C0h] [rbp-2E0h]
  __int64 v88; // [rsp+1C8h] [rbp-2D8h]
  _QWORD __dst[41]; // [rsp+1D0h] [rbp-2D0h] BYREF
  __int64 v90; // [rsp+318h] [rbp-188h]
  __int64 v91; // [rsp+320h] [rbp-180h]
  __int64 v92; // [rsp+328h] [rbp-178h]
  size_t v93; // [rsp+330h] [rbp-170h] BYREF
  int v94[2]; // [rsp+338h] [rbp-168h]
  int v95[2]; // [rsp+340h] [rbp-160h]
  __int64 v96; // [rsp+348h] [rbp-158h]
  __int64 v97; // [rsp+350h] [rbp-150h]
  _QWORD *v98; // [rsp+358h] [rbp-148h]
  __int64 v99; // [rsp+360h] [rbp-140h]
  __int64 v100; // [rsp+368h] [rbp-138h]
  __int64 v101; // [rsp+370h] [rbp-130h]
  __int64 v102; // [rsp+378h] [rbp-128h]
  __int64 v103; // [rsp+380h] [rbp-120h]
  int v104[2]; // [rsp+388h] [rbp-118h]
  size_t v105; // [rsp+390h] [rbp-110h]
  __int64 v106; // [rsp+398h] [rbp-108h]
  __int64 v107; // [rsp+3A0h] [rbp-100h]
  __int64 v108; // [rsp+3A8h] [rbp-F8h]
  __int64 v109; // [rsp+3B0h] [rbp-F0h]
  __int64 v110; // [rsp+3B8h] [rbp-E8h]
  __int64 v111; // [rsp+3C0h] [rbp-E0h]
  __int64 v112; // [rsp+3C8h] [rbp-D8h]
  __int64 v113; // [rsp+3D0h] [rbp-D0h]
  __int64 v114; // [rsp+3D8h] [rbp-C8h]
  __int64 v115; // [rsp+3E0h] [rbp-C0h]
  __int64 v116; // [rsp+3E8h] [rbp-B8h]
  __int64 v117; // [rsp+3F0h] [rbp-B0h]
  void *__src; // [rsp+3F8h] [rbp-A8h]
  int v119[2]; // [rsp+400h] [rbp-A0h]
  int v120[2]; // [rsp+408h] [rbp-98h]
  unsigned __int64 v121; // [rsp+410h] [rbp-90h]
  __int64 v122; // [rsp+418h] [rbp-88h]
  __int64 v123; // [rsp+420h] [rbp-80h]
  __int64 v124; // [rsp+428h] [rbp-78h]
  __int64 v125; // [rsp+430h] [rbp-70h]
  __int64 v126; // [rsp+438h] [rbp-68h]
  __int64 v127; // [rsp+440h] [rbp-60h]
  _QWORD *v128; // [rsp+448h] [rbp-58h]
  unsigned __int64 v129; // [rsp+450h] [rbp-50h]
  void *__s2; // [rsp+458h] [rbp-48h]
  size_t __n; // [rsp+460h] [rbp-40h]
  _QWORD *v132; // [rsp+468h] [rbp-38h]
  char v133; // [rsp+477h] [rbp-29h]

  __s2 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x10053a045*/
  if ( !v9 ) /*0x10053a04c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a4); /*0x10053a3f9*/
    v24 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x10053a408*/
    if ( !v24 ) /*0x10053a410*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x10053b4bd*/
    *(_QWORD *)((char *)v24 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x10053a420*/
    v24[1] = 0xBD83E88DB8E42044LL; /*0x10053a42e*/
    *v24 = 0x49208BA8E7BFBAE7LL; /*0x10053a43c*/
    a1[1] = 9; /*0x10053a43f*/
    a1[2] = 22; /*0x10053a447*/
    a1[3] = v24; /*0x10053a44f*/
    a1[4] = 22; /*0x10053a453*/
    goto LABEL_21; /*0x10053a45b*/
  }
  v10 = v9; /*0x10053a052*/
  v11 = (__int64)a2; /*0x10053a05c*/
  codexmate_lib::core::sessions::load_sessions::h8bd835a57b4abc44(__dst, a2, a5); /*0x10053a05f*/
  v12 = __dst[0]; /*0x10053a064*/
  v13 = (_QWORD *)__dst[1]; /*0x10053a06b*/
  v14 = (_QWORD *)__dst[2]; /*0x10053a072*/
  v15 = __dst[3]; /*0x10053a079*/
  if ( __dst[0] != 11 ) /*0x10053a084*/
  {
    a1[12] = __dst[11]; /*0x10053a464*/
    a1[11] = __dst[10]; /*0x10053a46f*/
    a1[10] = __dst[9]; /*0x10053a47a*/
    a1[9] = __dst[8]; /*0x10053a485*/
    a1[8] = __dst[7]; /*0x10053a490*/
    a1[7] = __dst[6]; /*0x10053a49b*/
    v25 = __dst[4]; /*0x10053a49f*/
    a1[6] = __dst[5]; /*0x10053a4ad*/
    a1[5] = v25; /*0x10053a4b1*/
    a1[1] = v12; /*0x10053a4b5*/
    a1[2] = v13; /*0x10053a4b9*/
    a1[3] = v14; /*0x10053a4bd*/
    a1[4] = v15; /*0x10053a4c1*/
LABEL_21:
    *a1 = 0x8000000000000000LL; /*0x10053a4c5*/
    return a1; /*0x10053a4d3*/
  }
  v128 = a2; /*0x10053a08a*/
  v16 = 328LL * __dst[3]; /*0x10053a08e*/
  v76[0] = __dst[2]; /*0x10053a099*/
  v127 = __dst[1]; /*0x10053a0a0*/
  v76[2] = __dst[1]; /*0x10053a0a4*/
  v76[1] = __dst[2]; /*0x10053a0ab*/
  v126 = __dst[2] + 328LL * __dst[3]; /*0x10053a0b2*/
  v76[3] = v126; /*0x10053a0b6*/
  v17 = __dst[2]; /*0x10053a0bd*/
  if ( !__dst[3] ) /*0x10053a0c3*/
  {
LABEL_23:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v11); /*0x10053a4e7*/
    v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x10053a4f6*/
    if ( !v26 ) /*0x10053a4fe*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x10053b4de*/
    v27 = v126; /*0x10053a507*/
    v28 = (0xC7CE0C7CE0C7CE0DLL * (unsigned __int128)(unsigned __int64)(v126 - v17)) >> 64; /*0x10053a51b*/
    *(_QWORD *)((char *)v26 + 13) = 0x8BA8E7BFBAE794BALL; /*0x10053a528*/
    v26[1] = 0xE794BAE5B9AFE5B0LL; /*0x10053a536*/
    *v26 = 0x88E5BE89E6AA9CE6LL; /*0x10053a544*/
    a1[1] = 10; /*0x10053a547*/
    a1[2] = 21; /*0x10053a54f*/
    a1[3] = v26; /*0x10053a557*/
    a1[4] = 21; /*0x10053a55b*/
    *a1 = 0x8000000000000000LL; /*0x10053a56d*/
    if ( v27 != v17 ) /*0x10053a574*/
    {
      v29 = v28 >> 8; /*0x10053a579*/
      do /*0x10053a592*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(v17); /*0x10053a583*/
        v17 += 328; /*0x10053a588*/
        --v29; /*0x10053a58f*/
      }
      while ( v29 ); /*0x10053a592*/
    }
    if ( !v127 ) /*0x10053a59b*/
      return a1; /*0x10053a59b*/
    v30 = 328 * v127; /*0x10053a59d*/
    v31 = 8; /*0x10053a5a4*/
    v32 = v14; /*0x10053a5a9*/
    goto LABEL_29; /*0x10053a5a9*/
  }
  v132 = a1; /*0x10053a0c9*/
  v18 = 0; /*0x10053a0cd*/
  while ( 1 ) /*0x10053a0f8*/
  {
    v11 = (__int64)&v14[v18 / 8]; /*0x10053a0f8*/
    memcpy(__dst, &v14[v18 / 8], sizeof(__dst)); /*0x10053a104*/
    if ( __dst[4] == v10 ) /*0x10053a110*/
    {
      v13 = (_QWORD *)__dst[3]; /*0x10053a112*/
      v11 = (__int64)__s2; /*0x10053a119*/
      if ( !memcmp((const void *)__dst[3], __s2, v10) ) /*0x10053a120*/
        break; /*0x10053a120*/
    }
    v13 = __dst; /*0x10053a0e0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(__dst); /*0x10053a0e3*/
LABEL_6:
    v18 += 328LL; /*0x10053a0e8*/
    if ( v16 == v18 ) /*0x10053a0f2*/
    {
      v17 = v126; /*0x10053a4d8*/
      v76[1] = v126; /*0x10053a4dc*/
      a1 = v132; /*0x10053a4e3*/
      goto LABEL_23; /*0x10053a4e3*/
    }
  }
  if ( __dst[0] == 2 ) /*0x10053a131*/
    goto LABEL_6; /*0x10053a131*/
  v110 = v14[v18 / 8 + 2]; /*0x10053a138*/
  v96 = v14[v18 / 8 + 3]; /*0x10053a144*/
  v88 = v14[v18 / 8 + 4]; /*0x10053a150*/
  v108 = v14[v18 / 8 + 5]; /*0x10053a15c*/
  v97 = v14[v18 / 8 + 6]; /*0x10053a168*/
  v122 = v14[v18 / 8 + 8]; /*0x10053a174*/
  __src = (void *)v14[v18 / 8 + 9]; /*0x10053a180*/
  __n = v14[v18 / 8 + 10]; /*0x10053a18c*/
  v117 = v14[v18 / 8 + 11]; /*0x10053a195*/
  v103 = v14[v18 / 8 + 12]; /*0x10053a1a1*/
  v116 = v14[v18 / 8 + 14]; /*0x10053a1ad*/
  v102 = v14[v18 / 8 + 15]; /*0x10053a1b9*/
  v115 = v14[v18 / 8 + 17]; /*0x10053a1c8*/
  v133 = BYTE1(v14[v18 / 8 + 38]); /*0x10053a1d8*/
  v101 = v14[v18 / 8 + 18]; /*0x10053a1e3*/
  v125 = v14[v18 / 8 + 20]; /*0x10053a1f2*/
  v100 = v14[v18 / 8 + 21]; /*0x10053a1fe*/
  v114 = v14[v18 / 8 + 23]; /*0x10053a20d*/
  v99 = v14[v18 / 8 + 24]; /*0x10053a21c*/
  v109 = v14[v18 / 8 + 26]; /*0x10053a22b*/
  v98 = (_QWORD *)v14[v18 / 8 + 27]; /*0x10053a23a*/
  v126 = v14[v18 / 8 + 29]; /*0x10053a249*/
  *(_QWORD *)v120 = v14[v18 / 8 + 30]; /*0x10053a255*/
  *(_QWORD *)v104 = v14[v18 / 8 + 31]; /*0x10053a264*/
  v111 = v14[v18 / 8 + 32]; /*0x10053a273*/
  *(_QWORD *)v119 = v14[v18 / 8 + 33]; /*0x10053a282*/
  v105 = v14[v18 / 8 + 34]; /*0x10053a291*/
  v123 = v14[v18 / 8 + 35]; /*0x10053a2a0*/
  v112 = v14[v18 / 8 + 36]; /*0x10053a2ac*/
  v113 = v14[v18 / 8 + 37]; /*0x10053a2bb*/
  if ( v16 - 328 != v18 ) /*0x10053a2cc*/
  {
    v19 = (__int64)&v14[v18 / 8 + 41]; /*0x10053a2d8*/
    v20 = (v16 - v18 - 328) / 0x148; /*0x10053a2f3*/
    do /*0x10053a312*/
    {
      v13 = (_QWORD *)v19; /*0x10053a300*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h33ddcaa040d12613(v19); /*0x10053a303*/
      v19 += 328; /*0x10053a308*/
      --v20; /*0x10053a30f*/
    }
    while ( v20 ); /*0x10053a312*/
  }
  if ( v127 ) /*0x10053a31b*/
  {
    v11 = 328 * v127; /*0x10053a31d*/
    v13 = v14; /*0x10053a329*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 328 * v127, 8); /*0x10053a32c*/
  }
  v21 = v125; /*0x10053a342*/
  if ( __OFSUB__(-v126, 1) ) /*0x10053a33f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v11); /*0x10053a34c*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1); /*0x10053a35b*/
    if ( !v22 ) /*0x10053a363*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59); /*0x10053b4ef*/
    *(_QWORD *)(v22 + 48) = 0x81BFE8809CE9A097LL; /*0x10053a373*/
    *(_QWORD *)(v22 + 40) = 0xE68CBCEF8BA8E7BFLL; /*0x10053a381*/
    *(_QWORD *)(v22 + 32) = 0xBAE720656572746BLL; /*0x10053a38f*/
    *(_QWORD *)(v22 + 24) = 0x726F7720B697E6B4LL; /*0x10053a39d*/
    *(_QWORD *)(v22 + 16) = 0xB8E4207865646F43LL; /*0x10053a3ab*/
    *(_QWORD *)(v22 + 8) = 0x20AF98E68DB8E48BLL; /*0x10053a3b9*/
    *(_QWORD *)v22 = 0xA8E7BFBAE7A5AFE8LL; /*0x10053a3c7*/
    *(_DWORD *)(v22 + 55) = -1146624127; /*0x10053a3ca*/
    v23 = v132; /*0x10053a3d1*/
    v132[1] = 10; /*0x10053a3d5*/
    v23[2] = 59; /*0x10053a3dd*/
    v23[3] = v22; /*0x10053a3e5*/
    v23[4] = 59; /*0x10053a3e9*/
    *v23 = 0x8000000000000000LL; /*0x10053a3f1*/
    goto LABEL_105; /*0x10053a3f4*/
  }
  if ( (v133 & 1) == 0 ) /*0x10053a5ca*/
  {
    if ( v123 == 0x8000000000000000LL ) /*0x10053a650*/
    {
      codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::hef2c1044127fb04b( /*0x10053a659*/
        __dst,
        *(double *)a5.i64);
    }
    else
    {
      __dst[0] = v123; /*0x10053a660*/
      __dst[1] = v112; /*0x10053a66e*/
      __dst[2] = v113; /*0x10053a67c*/
    }
    v37 = v132; /*0x10053a68a*/
    v132[4] = __dst[2]; /*0x10053a68e*/
    v38 = __dst[0]; /*0x10053a692*/
    v37[3] = __dst[1]; /*0x10053a6a0*/
    v37[2] = v38; /*0x10053a6a4*/
    v37[1] = 10; /*0x10053a6a8*/
    *v37 = 0x8000000000000000LL; /*0x10053a6b0*/
    goto LABEL_98; /*0x10053a6b3*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v85, v128[43], v128[44], "session-migration-backupsrollout", 25); /*0x10053a5f2*/
  LOWORD(__dst[0]) = 511; /*0x10053a5f7*/
  BYTE2(__dst[0]) = 1; /*0x10053a600*/
  v34 = v87; /*0x10053a60e*/
  v127 = v86; /*0x10053a61c*/
  v35 = std::fs::DirBuilder::_create::h099c6e2853c95452(__dst, v86, v87); /*0x10053a623*/
  if ( !v35 ) /*0x10053a62b*/
  {
    codexmate_lib::platform::paths::CodexPaths::current_codex_state_db_path::h76ad95bf527978ce( /*0x10053a6c3*/
      &v82,
      v128,
      *(double *)a5.i64);
    v128 = (_QWORD *)v83; /*0x10053a6dd*/
    v113 = v84; /*0x10053a6e1*/
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v83, v84); /*0x10053a6e8*/
    v39 = __dst[0]; /*0x10053a6ed*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10053a6fe*/
      __dst[0],
      __dst[1]);
    if ( v39 ) /*0x10053a706*/
    {
      v121 = 0x8000000000000000LL; /*0x10053a708*/
    }
    else
    {
      codexmate_lib::core::sessions::backup_codex_db::hc614d40006689cde( /*0x10053a732*/
        __dst,
        (__int64)v128,
        v113,
        v127,
        v34,
        (int)__s2,
        v10);
      v40 = __dst[0]; /*0x10053a737*/
      v41 = __dst[1]; /*0x10053a73e*/
      v42 = __dst[2]; /*0x10053a745*/
      v39 = __dst[3]; /*0x10053a74c*/
      if ( __dst[0] != 11 ) /*0x10053a757*/
      {
        v51 = v132; /*0x10053a9f1*/
        v132[12] = __dst[11]; /*0x10053a9f5*/
        v51[11] = __dst[10]; /*0x10053aa00*/
        v51[10] = __dst[9]; /*0x10053aa0b*/
        v51[9] = __dst[8]; /*0x10053aa16*/
        v51[8] = __dst[7]; /*0x10053aa21*/
        v51[7] = __dst[6]; /*0x10053aa2c*/
        v52 = __dst[4]; /*0x10053aa30*/
        v51[6] = __dst[5]; /*0x10053aa3e*/
        v51[5] = v52; /*0x10053aa42*/
        v51[2] = v41; /*0x10053aa46*/
        v51[3] = v42; /*0x10053aa4a*/
        v51[4] = v39; /*0x10053aa4e*/
        v51[1] = v40; /*0x10053aa52*/
        *v51 = 0x8000000000000000LL; /*0x10053aa56*/
        v53 = v82; /*0x10053aa59*/
        if ( !v82 ) /*0x10053aa63*/
          goto LABEL_96; /*0x10053aa63*/
        goto LABEL_95; /*0x10053aa63*/
      }
      v107 = __dst[2]; /*0x10053a75d*/
      v121 = __dst[1]; /*0x10053a764*/
    }
    if ( v122 == 0x8000000000000000LL /*0x10053a78f*/
      || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__src, __n), !v43) )
    {
      __dst[0] = 0x8000000000000000LL; /*0x10053a80d*/
    }
    else
    {
      v106 = v39; /*0x10053a791*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(__dst, __n, 0, 1, 1); /*0x10053a7ac*/
      v129 = __dst[1]; /*0x10053a7b8*/
      if ( LOBYTE(__dst[0]) ) /*0x10053a7c3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v129, __dst[2]); /*0x10053b4cd*/
      v124 = __dst[2]; /*0x10053a7d0*/
      v44 = __n; /*0x10053a7db*/
      memcpy((void *)__dst[2], __src, __n); /*0x10053a7e2*/
      __dst[0] = v129; /*0x10053a7eb*/
      __dst[1] = v124; /*0x10053a7f6*/
      __dst[2] = v44; /*0x10053a7fd*/
      v39 = v106; /*0x10053a804*/
    }
    core::option::Option$LT$T$GT$::filter::he034c246e0a3cf17(&v93, __dst); /*0x10053a822*/
    __n = v93; /*0x10053a82e*/
    if ( v93 == 0x8000000000000000LL ) /*0x10053a835*/
    {
      v129 = 0x8000000000000000LL; /*0x10053a837*/
    }
    else
    {
      codexmate_lib::core::sessions::backup_regular_file::h0586201b51cc4559( /*0x10053a861*/
        __dst,
        *(void **)v94,
        *(size_t *)v95,
        v127,
        v34,
        (int)__s2,
        v10);
      v45 = __dst[0]; /*0x10053a866*/
      v46 = __dst[1]; /*0x10053a86d*/
      v47 = __dst[2]; /*0x10053a874*/
      v34 = __dst[3]; /*0x10053a87b*/
      if ( __dst[0] != 11 ) /*0x10053a886*/
      {
        v54 = v132; /*0x10053aa75*/
        v132[12] = __dst[11]; /*0x10053aa79*/
        v54[11] = __dst[10]; /*0x10053aa84*/
        v54[10] = __dst[9]; /*0x10053aa8f*/
        v54[9] = __dst[8]; /*0x10053aa9a*/
        v54[8] = __dst[7]; /*0x10053aaa5*/
        v54[7] = __dst[6]; /*0x10053aab0*/
        v55 = __dst[4]; /*0x10053aab4*/
        v54[6] = __dst[5]; /*0x10053aac2*/
        v54[5] = v55; /*0x10053aac6*/
        v54[2] = v46; /*0x10053aaca*/
        v54[3] = v47; /*0x10053aace*/
        v54[4] = v34; /*0x10053aad2*/
        v54[1] = v45; /*0x10053aad6*/
        *v54 = 0x8000000000000000LL; /*0x10053aada*/
        goto LABEL_92; /*0x10053aadd*/
      }
      v124 = __dst[2]; /*0x10053a88c*/
      v129 = __dst[1]; /*0x10053a890*/
    }
    codexmate_lib::core::sessions::open_codex_db::h5838dac6be6fd626((__int64)__dst, (__int64)v128, v113, 0); /*0x10053a8a8*/
    if ( LOBYTE(__dst[13]) == 3 ) /*0x10053a8b9*/
    {
      qmemcpy(v81, __dst, 0x60u); /*0x10053a8d1*/
      v48 = v132; /*0x10053a8d4*/
      qmemcpy(v132 + 1, v81, 0x60u); /*0x10053a8e4*/
      *v48 = 0x8000000000000000LL; /*0x10053a8e7*/
      goto LABEL_90; /*0x10053a8ea*/
    }
    v106 = v39; /*0x10053a8ef*/
    qmemcpy(v81, __dst, sizeof(v81)); /*0x10053a90c*/
    v76[13] = __dst[13]; /*0x10053a91b*/
    qmemcpy(v76, v81, 0x68u); /*0x10053a939*/
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x10053a963*/
      __dst,
      v76,
      *(&off_101964A70 + LOBYTE(__dst[13])),
      qword_1015FFAC8[LOBYTE(__dst[13])]);
    if ( __dst[0] != 0x8000000000000016LL ) /*0x10053a976*/
    {
      v81[7] = __dst[7]; /*0x10053aaf7*/
      *(_OWORD *)((char *)&v81[5] + 1) = *(_OWORD *)((char *)&__dst[5] + 1); /*0x10053ab13*/
      *(_OWORD *)((char *)&v81[3] + 1) = *(_OWORD *)((char *)&__dst[3] + 1); /*0x10053ab2f*/
      *(_QWORD *)((char *)&v81[2] + 1) = *(_QWORD *)((char *)&__dst[2] + 1); /*0x10053ab3d*/
      v81[0] = __dst[0]; /*0x10053ab44*/
      v81[1] = __dst[1]; /*0x10053ab4b*/
      LOBYTE(v81[2]) = __dst[2]; /*0x10053ab52*/
      codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::h2d6be56a27a219ce( /*0x10053ab66*/
        __dst,
        v81);
      __s2 = (void *)__dst[0]; /*0x10053ab72*/
      v56 = __dst[1]; /*0x10053ab76*/
      v57 = __dst[2]; /*0x10053ab7d*/
      v58 = (char *)&__dst[2] + 1; /*0x10053ab85*/
      v59 = v132; /*0x10053ab8c*/
      memcpy((char *)v132 + 25, (char *)&__dst[2] + 1, 0x4Fu); /*0x10053ab99*/
      v59[1] = __s2; /*0x10053aba2*/
      v59[2] = v56; /*0x10053aba6*/
      *((_BYTE *)v59 + 24) = v57; /*0x10053abaa*/
      *v59 = 0x8000000000000000LL; /*0x10053abae*/
      goto LABEL_89; /*0x10053abb1*/
    }
    codexmate_lib::core::sessions::update_session_cwd_in_connection::hff55390873cd6b8a( /*0x10053a9b6*/
      (unsigned int)__dst,
      (unsigned int)v76,
      (_DWORD)__s2,
      v10,
      v120[0],
      v104[0],
      *(__int64 *)v119,
      v105);
    v49 = __dst[0]; /*0x10053a9bb*/
    v50 = __dst[1]; /*0x10053a9c2*/
    if ( __dst[0] == 11 ) /*0x10053a9ce*/
    {
      if ( __n == 0x8000000000000000LL ) /*0x10053a9d8*/
      {
        LODWORD(__s2) = 0; /*0x10053a9de*/
LABEL_64:
        v63 = v129; /*0x10053ac44*/
        rusqlite::transaction::Transaction::commit::h0e4e45420f48cafe(v77, v76); /*0x10053ac56*/
        if ( v77[0] == 0x8000000000000016LL ) /*0x10053ac62*/
        {
          v65 = v132; /*0x10053ac68*/
          *v132 = v110; /*0x10053ac73*/
          v65[1] = v96; /*0x10053ac7d*/
          v65[2] = v88; /*0x10053ac88*/
          v65[3] = v126; /*0x10053ac90*/
          v65[4] = *(_QWORD *)v120; /*0x10053ac9b*/
          v65[5] = *(_QWORD *)v104; /*0x10053aca6*/
          v65[6] = v111; /*0x10053acb1*/
          v65[7] = *(_QWORD *)v119; /*0x10053acbc*/
          v65[8] = v105; /*0x10053acc7*/
          v65[9] = v121; /*0x10053acd2*/
          v65[10] = v107; /*0x10053acdd*/
          v65[11] = v106; /*0x10053ace8*/
          v65[12] = v63; /*0x10053acec*/
          v65[13] = v124; /*0x10053acf4*/
          v65[14] = v34; /*0x10053acf8*/
          *((_BYTE *)v65 + 120) = v50; /*0x10053acfc*/
          v66 = (unsigned int)__s2; /*0x10053ad00*/
          LOBYTE(v66) = (unsigned __int8)__s2 & 1; /*0x10053ad03*/
          *((_BYTE *)v65 + 121) = (unsigned __int8)__s2 & 1; /*0x10053ad06*/
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v76, v76, v64, v66); /*0x10053ad10*/
          if ( 2 * __n ) /*0x10053ad19*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v94, __n, 1); /*0x10053ad36*/
          if ( v82 ) /*0x10053ad45*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128, v82, 1); /*0x10053ad50*/
          if ( v85 ) /*0x10053ad5f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v85, 1); /*0x10053ad6a*/
          if ( 2 * v123 ) /*0x10053ad73*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v123, 1); /*0x10053ad90*/
          if ( v108 ) /*0x10053ad9f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v108, 1); /*0x10053adad*/
          if ( 2 * v122 ) /*0x10053adb9*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v122, 1); /*0x10053b315*/
            if ( !(2 * v117) ) /*0x10053b32c*/
            {
LABEL_77:
              if ( !(2 * v116) ) /*0x10053ade9*/
                goto LABEL_78; /*0x10053adf4*/
              goto LABEL_130; /*0x10053adf4*/
            }
          }
          else if ( !(2 * v117) ) /*0x10053add1*/
          {
            goto LABEL_77; /*0x10053addc*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v117, 1); /*0x10053b345*/
          if ( !(2 * v116) ) /*0x10053b35c*/
          {
LABEL_78:
            if ( !(2 * v115) ) /*0x10053ae01*/
              goto LABEL_79; /*0x10053ae0c*/
            goto LABEL_131; /*0x10053ae0c*/
          }
LABEL_130:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v116, 1); /*0x10053b362*/
          if ( !(2 * v115) ) /*0x10053b38c*/
          {
LABEL_79:
            if ( !(2 * v125) ) /*0x10053ae16*/
              goto LABEL_80; /*0x10053ae21*/
            goto LABEL_132; /*0x10053ae21*/
          }
LABEL_131:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, v115, 1); /*0x10053b392*/
          if ( !(2 * v125) ) /*0x10053b3b9*/
          {
LABEL_80:
            if ( !(2 * v114) ) /*0x10053ae2e*/
            {
LABEL_81:
              v30 = v109; /*0x10053ae3f*/
              a1 = v132; /*0x10053ae51*/
              if ( !(2 * v109) ) /*0x10053ae55*/
                return a1; /*0x10053ae55*/
              v31 = 1; /*0x10053ae5b*/
              v32 = v98; /*0x10053ae60*/
              goto LABEL_29; /*0x10053ae67*/
            }
LABEL_133:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v114, 1); /*0x10053b3ec*/
            goto LABEL_81; /*0x10053b404*/
          }
LABEL_132:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v125, 1); /*0x10053b3bf*/
          if ( !(2 * v114) ) /*0x10053b3e6*/
            goto LABEL_81; /*0x10053b3e6*/
          goto LABEL_133; /*0x10053b3e6*/
        }
        v80[7] = v77[7]; /*0x10053ae73*/
        v80[6] = v77[6]; /*0x10053ae81*/
        v80[5] = v77[5]; /*0x10053ae8f*/
        v80[4] = v77[4]; /*0x10053ae9d*/
        v80[3] = v77[3]; /*0x10053aeab*/
        v80[2] = v77[2]; /*0x10053aeb9*/
        v80[1] = v77[1]; /*0x10053aece*/
        v80[0] = v77[0]; /*0x10053aed5*/
        if ( v63 == 0x8000000000000000LL || ((unsigned __int8)__s2 & 1) == 0 ) /*0x10053aee5*/
          goto LABEL_87; /*0x10053aee5*/
        if ( __n == 0x8000000000000000LL ) /*0x10053aeeb*/
          core::option::unwrap_failed::h44626cade04bbf1e(&off_1019646A8); /*0x10053b4fd*/
        codexmate_lib::core::sessions::restore_regular_file_from_backup::hf3e08824a0de1725( /*0x10053af0d*/
          v81,
          v124,
          v34,
          *(_QWORD *)v94,
          *(_QWORD *)v95);
        if ( v81[0] == 11 ) /*0x10053af1d*/
        {
LABEL_87:
          __dst[0] = v80; /*0x10053af2a*/
          __dst[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10053af38*/
          v58 = (char *)&unk_1017C1B69; /*0x10053af3f*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017C1B69, __dst); /*0x10053af54*/
          v90 = v78[0]; /*0x10053af67*/
          v91 = v78[1]; /*0x10053af6e*/
          v92 = v78[2]; /*0x10053af7c*/
        }
        else
        {
          qmemcpy(&__dst[1], &v81[1], 0x58u); /*0x10053b41c*/
          __dst[0] = v81[0]; /*0x10053b41f*/
          v81[0] = v80; /*0x10053b42d*/
          v81[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10053b43b*/
          v81[2] = __dst; /*0x10053b449*/
          v81[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10053b457*/
          v58 = (char *)&unk_1017C1B8E; /*0x10053b45e*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v79, &unk_1017C1B8E, v81); /*0x10053b473*/
          v90 = v79[0]; /*0x10053b486*/
          v91 = v79[1]; /*0x10053b48d*/
          v92 = v79[2]; /*0x10053b49b*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x10053b4a9*/
        }
        v67 = v132; /*0x10053af83*/
        v132[1] = 10; /*0x10053af87*/
        v68 = v91; /*0x10053af96*/
        v67[2] = v90; /*0x10053af9d*/
        v67[3] = v68; /*0x10053afa1*/
        v67[4] = v92; /*0x10053afac*/
        *v67 = 0x8000000000000000LL; /*0x10053afb0*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v80); /*0x10053afba*/
        v21 = v125; /*0x10053afbf*/
LABEL_89:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v76, v58, v60, v61); /*0x10053afc3*/
LABEL_90:
        if ( 2 * v129 ) /*0x10053afd3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v129, 1); /*0x10053afe9*/
LABEL_92:
        if ( 2 * __n ) /*0x10053aff2*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v94, __n, 1); /*0x10053b29b*/
          v69 = v121; /*0x10053b2a0*/
          if ( !(2 * v121) ) /*0x10053b2b2*/
          {
LABEL_94:
            v53 = v82; /*0x10053b01b*/
            if ( !v82 ) /*0x10053b025*/
              goto LABEL_96; /*0x10053b025*/
LABEL_95:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128, v53, 1); /*0x10053b027*/
            goto LABEL_96; /*0x10053b030*/
          }
        }
        else
        {
          v69 = v121; /*0x10053b003*/
          if ( !(2 * v121) ) /*0x10053b00a*/
            goto LABEL_94; /*0x10053b015*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v69, 1); /*0x10053b2c4*/
        v53 = v82; /*0x10053b2c9*/
        if ( !v82 ) /*0x10053b2d3*/
          goto LABEL_96; /*0x10053b2d3*/
        goto LABEL_95; /*0x10053b2d3*/
      }
      codexmate_lib::core::sessions::patch_rollout_cwd::hc5553e10255ff27b( /*0x10053ac24*/
        __dst,
        *(void **)v94,
        *(size_t *)v95,
        *(void **)v120,
        *(size_t *)v104,
        *(void **)v119,
        v105);
      v49 = __dst[0]; /*0x10053ac29*/
      LODWORD(__s2) = LOBYTE(__dst[1]); /*0x10053ac37*/
      if ( __dst[0] == 11 ) /*0x10053ac3e*/
        goto LABEL_64; /*0x10053ac3e*/
      v58 = (char *)&__dst[1] + 1; /*0x10053b2de*/
      v62 = v132; /*0x10053b2e5*/
      memcpy((char *)v132 + 17, (char *)&__dst[1] + 1, 0x57u); /*0x10053b2f2*/
      v50 = (char)__s2; /*0x10053b2fa*/
    }
    else
    {
      v58 = (char *)&__dst[1] + 1; /*0x10053abb6*/
      v62 = v132; /*0x10053abbd*/
      memcpy((char *)v132 + 17, (char *)&__dst[1] + 1, 0x57u); /*0x10053abca*/
    }
    v62[1] = v49; /*0x10053abcf*/
    *((_BYTE *)v62 + 16) = v50; /*0x10053abd3*/
    *v62 = 0x8000000000000000LL; /*0x10053abd7*/
    v21 = v125; /*0x10053abe1*/
    core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::heb3566c666645b77(v76); /*0x10053abe5*/
    goto LABEL_89; /*0x10053abea*/
  }
  v36 = v132; /*0x10053a631*/
  v132[1] = 2; /*0x10053a635*/
  v36[2] = v35; /*0x10053a63d*/
  *v36 = 0x8000000000000000LL; /*0x10053a641*/
LABEL_96:
  if ( v85 ) /*0x10053b03f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v85, 1); /*0x10053b04a*/
LABEL_98:
  if ( v126 ) /*0x10053b056*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v120, v126, 1); /*0x10053b064*/
  v70 = v123; /*0x10053b073*/
  if ( v111 ) /*0x10053b077*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v119, v111, 1); /*0x10053b085*/
  if ( (v133 & 1) != 0 && (v70 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10053b096*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v70, 1); /*0x10053b0a7*/
LABEL_105:
  if ( v110 ) /*0x10053b0b6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v110, 1); /*0x10053b0c4*/
  v71 = v109; /*0x10053b0d3*/
  v72 = v114; /*0x10053b0da*/
  if ( v108 ) /*0x10053b0e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v108, 1); /*0x10053b0ef*/
  if ( 2 * v122 ) /*0x10053b0fb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v122, 1); /*0x10053b19c*/
    v73 = v117; /*0x10053b1a1*/
    if ( 2 * v117 ) /*0x10053b1a8*/
      goto LABEL_118; /*0x10053b1b3*/
LABEL_111:
    v74 = v116; /*0x10053b124*/
    if ( !(2 * v116) ) /*0x10053b12b*/
      goto LABEL_112; /*0x10053b136*/
LABEL_119:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v74, 1); /*0x10053b1e2*/
    v75 = v115; /*0x10053b1f3*/
    if ( 2 * v115 ) /*0x10053b1fa*/
      goto LABEL_120; /*0x10053b205*/
LABEL_113:
    if ( !(2 * v21) ) /*0x10053b154*/
      goto LABEL_114; /*0x10053b15f*/
LABEL_121:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v21, 1); /*0x10053b22d*/
    if ( 2 * v72 ) /*0x10053b241*/
      goto LABEL_122; /*0x10053b24c*/
LABEL_115:
    a1 = v132; /*0x10053b176*/
    if ( !(2 * v71) ) /*0x10053b185*/
      return a1; /*0x10053b185*/
LABEL_123:
    v31 = 1; /*0x10053b27b*/
    v32 = v98; /*0x10053b280*/
    v30 = v71; /*0x10053b287*/
LABEL_29:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v30, v31); /*0x10053a5ac*/
    return a1; /*0x10053a5ac*/
  }
  v73 = v117; /*0x10053b10c*/
  if ( !(2 * v117) ) /*0x10053b113*/
    goto LABEL_111; /*0x10053b11e*/
LABEL_118:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v73, 1); /*0x10053b1b9*/
  v74 = v116; /*0x10053b1ca*/
  if ( 2 * v116 ) /*0x10053b1d1*/
    goto LABEL_119; /*0x10053b1dc*/
LABEL_112:
  v75 = v115; /*0x10053b13c*/
  if ( !(2 * v115) ) /*0x10053b143*/
    goto LABEL_113; /*0x10053b14e*/
LABEL_120:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, v75, 1); /*0x10053b20b*/
  if ( 2 * v21 ) /*0x10053b21c*/
    goto LABEL_121; /*0x10053b227*/
LABEL_114:
  if ( !(2 * v72) ) /*0x10053b165*/
    goto LABEL_115; /*0x10053b170*/
LABEL_122:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v72, 1); /*0x10053b252*/
  a1 = v132; /*0x10053b271*/
  if ( 2 * v71 ) /*0x10053b266*/
    goto LABEL_123; /*0x10053b275*/
  return a1; /*0x10053a5b4*/
}