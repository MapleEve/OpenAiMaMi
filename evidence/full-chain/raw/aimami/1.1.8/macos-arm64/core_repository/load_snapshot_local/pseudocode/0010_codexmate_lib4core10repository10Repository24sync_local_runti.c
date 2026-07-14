// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x10052d3a0 depth=2
_QWORD *__fastcall codexmate_lib::core::repository::Repository::sync_local_runtime_state::h302170dd703d5dc4(
        _QWORD *a1,
        _QWORD *a2,
        __m128i a3,
        double a4,
        double a5)
{
  const void *v5; // rbx
  size_t v6; // r15
  int v7; // edx
  size_t v8; // rax
  __int64 v9; // rdx
  _UNKNOWN **v10; // r12
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  double v14; // xmm0_8
  size_t v15; // r13
  int v16; // edx
  __int64 v17; // r12
  size_t v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r15
  size_t v29; // rdx
  size_t *v30; // r14
  size_t v31; // rax
  size_t v32; // rdx
  size_t *v33; // r14
  size_t v34; // rax
  __int64 v35; // rsi
  size_t v36; // r14
  size_t v37; // r15
  void *v38; // rbx
  size_t v39; // r14
  size_t v40; // r13
  size_t v41; // r15
  size_t v42; // rax
  size_t v43; // rbx
  __int64 v44; // rbx
  char v45; // r13
  __int64 v46; // rbx
  char **v47; // rbx
  void *v48; // rax
  size_t v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  char *v54; // rax
  __int64 v55; // rdx
  void *v56; // r14
  size_t v57; // rsi
  char *v58; // rcx
  __int64 v59; // r15
  size_t v60; // r12
  __int64 v61; // r14
  __int64 v62; // rbx
  __int64 v63; // r13
  _QWORD *v64; // rdi
  _QWORD *v65; // rbx
  __int64 v66; // rcx
  size_t v67; // r12
  __int64 v68; // rdx
  size_t v69; // rax
  size_t v70; // rcx
  int v71; // r15d
  int v72; // r13d
  __int64 v73; // rdx
  int v74; // edx
  size_t v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rcx
  size_t v78; // rax
  int v79; // edx
  size_t v80; // rax
  void *v81; // rax
  size_t v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // r14
  __int64 v91; // rsi
  size_t v93; // rdx
  size_t v94; // rcx
  __int64 *v95; // r14
  __int64 v96; // rax
  __int64 v97; // rsi
  size_t v98; // rdx
  size_t v99; // rcx
  size_t v100; // rdx
  size_t *v101; // r14
  size_t v102; // rax
  size_t v103; // rdx
  size_t *v104; // r14
  size_t v105; // rax
  __int64 v106; // r14
  __int64 v107; // r15
  __int64 v108; // [rsp+0h] [rbp-540h] BYREF
  _BYTE v109[80]; // [rsp+8h] [rbp-538h] BYREF
  _QWORD v110[12]; // [rsp+60h] [rbp-4E0h] BYREF
  size_t v111[3]; // [rsp+C0h] [rbp-480h] BYREF
  size_t v112[3]; // [rsp+D8h] [rbp-468h] BYREF
  size_t v113[11]; // [rsp+F0h] [rbp-450h] BYREF
  _DWORD __dst[4]; // [rsp+148h] [rbp-3F8h] BYREF
  char v115[8]; // [rsp+158h] [rbp-3E8h] BYREF
  void *v116; // [rsp+160h] [rbp-3E0h]
  size_t v117; // [rsp+168h] [rbp-3D8h]
  char v118[8]; // [rsp+170h] [rbp-3D0h] BYREF
  void *v119; // [rsp+178h] [rbp-3C8h]
  __int64 v120; // [rsp+180h] [rbp-3C0h]
  _QWORD v121[3]; // [rsp+188h] [rbp-3B8h] BYREF
  _QWORD v122[3]; // [rsp+1A0h] [rbp-3A0h] BYREF
  _QWORD v123[4]; // [rsp+1B8h] [rbp-388h] BYREF
  char v124; // [rsp+1D8h] [rbp-368h] BYREF
  char v125; // [rsp+1DAh] [rbp-366h] BYREF
  __int64 v126; // [rsp+1E0h] [rbp-360h] BYREF
  void *v127; // [rsp+1E8h] [rbp-358h]
  size_t v128; // [rsp+1F0h] [rbp-350h]
  size_t v129; // [rsp+1F8h] [rbp-348h]
  size_t v130; // [rsp+200h] [rbp-340h]
  size_t v131; // [rsp+208h] [rbp-338h]
  __int64 v132; // [rsp+210h] [rbp-330h]
  __int64 v133; // [rsp+218h] [rbp-328h]
  size_t v134; // [rsp+220h] [rbp-320h] BYREF
  size_t v135; // [rsp+228h] [rbp-318h]
  size_t v136; // [rsp+230h] [rbp-310h] BYREF
  size_t v137; // [rsp+238h] [rbp-308h]
  size_t v138; // [rsp+240h] [rbp-300h]
  _QWORD *v139; // [rsp+248h] [rbp-2F8h]
  _QWORD v140[10]; // [rsp+250h] [rbp-2F0h] BYREF
  size_t __src[45]; // [rsp+2A0h] [rbp-2A0h] BYREF
  __int64 v142; // [rsp+408h] [rbp-138h] BYREF
  __int64 v143; // [rsp+410h] [rbp-130h]
  __int64 v144; // [rsp+418h] [rbp-128h]
  __int64 v145; // [rsp+420h] [rbp-120h]
  __int64 v146; // [rsp+428h] [rbp-118h]
  int v147; // [rsp+430h] [rbp-110h]
  int v148; // [rsp+434h] [rbp-10Ch]
  unsigned int v149; // [rsp+438h] [rbp-108h]
  unsigned int v150; // [rsp+43Ch] [rbp-104h]
  size_t v151; // [rsp+440h] [rbp-100h]
  size_t v152; // [rsp+448h] [rbp-F8h] BYREF
  void *v153; // [rsp+450h] [rbp-F0h]
  size_t v154; // [rsp+458h] [rbp-E8h]
  size_t v155; // [rsp+460h] [rbp-E0h] BYREF
  void *v156; // [rsp+468h] [rbp-D8h]
  size_t v157; // [rsp+470h] [rbp-D0h]
  __int64 v158; // [rsp+478h] [rbp-C8h] BYREF
  void *v159; // [rsp+480h] [rbp-C0h]
  size_t v160; // [rsp+488h] [rbp-B8h]
  __int64 v161; // [rsp+490h] [rbp-B0h] BYREF
  __int64 v162; // [rsp+498h] [rbp-A8h]
  __int64 v163; // [rsp+4A0h] [rbp-A0h]
  size_t v164; // [rsp+4A8h] [rbp-98h]
  size_t __n; // [rsp+4B0h] [rbp-90h]
  _QWORD *v166; // [rsp+4B8h] [rbp-88h]
  void *v167; // [rsp+4C0h] [rbp-80h]
  size_t v168; // [rsp+4C8h] [rbp-78h]
  void *__s2; // [rsp+4D0h] [rbp-70h]
  void *v170; // [rsp+4D8h] [rbp-68h]
  size_t v171; // [rsp+4E0h] [rbp-60h]
  __int64 v172; // [rsp+4E8h] [rbp-58h] BYREF
  size_t v173; // [rsp+4F0h] [rbp-50h]
  size_t v174; // [rsp+4F8h] [rbp-48h]
  size_t v175; // [rsp+500h] [rbp-40h]
  size_t v176; // [rsp+508h] [rbp-38h]
  size_t v177; // [rsp+510h] [rbp-30h]

  v139 = a1; /*0x10052d3b7*/
  v161 = 0; /*0x10052d3be*/
  v162 = 8; /*0x10052d3c9*/
  v163 = 0; /*0x10052d3d4*/
  v5 = (const void *)a2[4]; /*0x10052d3df*/
  v6 = a2[5]; /*0x10052d3e3*/
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::ha447bd27a8750416(__dst); /*0x10052d3f4*/
  v166 = a2; /*0x10052d403*/
  codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(&v108, (__int64)a2); /*0x10052d40d*/
  if ( (_DWORD)v108 == 10 ) /*0x10052d423*/
  {
    qmemcpy(v140, v109, sizeof(v140)); /*0x10052d438*/
  }
  else
  {
    v113[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052d445*/
    LODWORD(v113[1]) = v7; /*0x10052d44c*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)v113, 0, 0); /*0x10052d464*/
    if ( LOBYTE(__src[0]) ) /*0x10052d470*/
      v8 = 0; /*0x10052d47b*/
    else
      v8 = __src[1]; /*0x10052d472*/
    HIDWORD(v140[8]) = 2; /*0x10052d47d*/
    v140[6] = v8; /*0x10052d487*/
    v140[3] = 0x8000000000000000LL; /*0x10052d48e*/
    v140[0] = 0; /*0x10052d495*/
    v140[1] = 8; /*0x10052d4a0*/
    v140[2] = 0; /*0x10052d4ab*/
    v140[7] = 0; /*0x10052d4b6*/
    LOBYTE(v140[8]) = 0; /*0x10052d4c1*/
    LOBYTE(v140[9]) = 1; /*0x10052d4c8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v108); /*0x10052d4d6*/
  }
  v9 = v166[53]; /*0x10052d4e9*/
  v132 = v166[52]; /*0x10052d4f7*/
  v133 = v9; /*0x10052d4fe*/
  codexmate_lib::core::quota_store::load::he744ac4ef03d474a(v110, v132, v9, a3); /*0x10052d505*/
  if ( LODWORD(v110[0]) == 10 ) /*0x10052d511*/
  {
    v146 = v110[5]; /*0x10052d51a*/
    v145 = v110[4]; /*0x10052d528*/
    v144 = v110[3]; /*0x10052d536*/
    v143 = v110[2]; /*0x10052d54b*/
    v142 = v110[1]; /*0x10052d552*/
  }
  else
  {
    LODWORD(v146) = 1; /*0x10052d55b*/
    v145 = 0; /*0x10052d565*/
    v142 = 0; /*0x10052d570*/
    v143 = 8; /*0x10052d57b*/
    v144 = 0; /*0x10052d586*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v110); /*0x10052d598*/
  }
  if ( __dst[0] != 2 ) /*0x10052d5a4*/
  {
    v10 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)v166); /*0x10052d5b6*/
    if ( v10 ) /*0x10052d5bc*/
    {
      v11 = 2; /*0x10052d5be*/
LABEL_96:
      __src[0] = v11; /*0x10052e001*/
      __src[1] = (size_t)v10; /*0x10052e008*/
      qmemcpy(&__src[2], v113, 0x50u); /*0x10052e022*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10052e025*/
      v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 1u); /*0x10052e034*/
      if ( !v48 ) /*0x10052e03c*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x10052ebdb*/
      v49 = (size_t)v48; /*0x10052e042*/
      qmemcpy(v48, "CURRENT_AUTH_SYNC_FAILED", 24); /*0x10052e06b*/
      v172 = (__int64)__src; /*0x10052e075*/
      v173 = (size_t)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x10052e080*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v112, byte_10122AE36, (unsigned __int64)&v172); /*0x10052e096*/
      v172 = 24; /*0x10052e09b*/
      v173 = v49; /*0x10052e0a3*/
      v174 = 24; /*0x10052e0a7*/
      v175 = v112[0]; /*0x10052e0bd*/
      v176 = v112[1]; /*0x10052e0c1*/
      v177 = v112[2]; /*0x10052e0cc*/
      v50 = v163; /*0x10052e0d0*/
      if ( v163 == v161 ) /*0x10052e0de*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v161); /*0x10052e0e7*/
      v51 = v162; /*0x10052e0ec*/
      v52 = 48 * v50; /*0x10052e0f7*/
      *(_QWORD *)(v162 + v52 + 40) = v177; /*0x10052e0ff*/
      *(_QWORD *)(v51 + v52 + 32) = v176; /*0x10052e108*/
      *(_QWORD *)(v51 + v52 + 24) = v175; /*0x10052e111*/
      *(_QWORD *)(v51 + v52 + 16) = v174; /*0x10052e11a*/
      v53 = v172; /*0x10052e11f*/
      *(_QWORD *)(v51 + v52 + 8) = v173; /*0x10052e127*/
      *(_QWORD *)(v51 + v52) = v53; /*0x10052e12c*/
      v163 = v50 + 1; /*0x10052e133*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__src); /*0x10052e141*/
      goto LABEL_100; /*0x10052e141*/
    }
    v12 = v166[31]; /*0x10052d5de*/
    v13 = v166[32]; /*0x10052d5e5*/
    __s2 = v116; /*0x10052d5f3*/
    __n = v117; /*0x10052d5f7*/
    v14 = codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1( /*0x10052d5fe*/
            (unsigned __int64)&v126,
            v12,
            v13,
            (__int64)v116,
            v117);
    v15 = v128; /*0x10052d60a*/
    v167 = v127; /*0x10052d611*/
    v136 = (size_t)v127; /*0x10052d615*/
    v137 = v128; /*0x10052d61c*/
    v172 = 0; /*0x10052d623*/
    v173 = 1; /*0x10052d62b*/
    v174 = 0; /*0x10052d633*/
    __src[2] = 1610612768; /*0x10052d63b*/
    __src[0] = (size_t)&v172; /*0x10052d64a*/
    __src[1] = (size_t)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x10052d658*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x10052d66d*/
                            &v136,
                            __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10052eb9a*/
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
        55,
        (__int64)&v134,
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
    v158 = v172; /*0x10052d682*/
    v159 = (void *)v173; /*0x10052d689*/
    v160 = v174; /*0x10052d694*/
    v172 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052d6a0*/
    LODWORD(v173) = v16; /*0x10052d6a4*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)&v172, 0, 0); /*0x10052d6b6*/
    if ( LOBYTE(__src[0]) ) /*0x10052d6c2*/
      v168 = 0; /*0x10052d6d1*/
    else
      v168 = __src[1]; /*0x10052d6cb*/
    std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)__src, v5, v6); /*0x10052d6e6*/
    if ( LODWORD(__src[0]) == 1 ) /*0x10052d6f2*/
    {
      if ( (__src[1] & 3) != 1 ) /*0x10052d707*/
      {
LABEL_24:
        v10 = nullptr; /*0x10052d74c*/
        goto LABEL_25; /*0x10052d74c*/
      }
      v17 = *(_QWORD *)(__src[1] + 7); /*0x10052d711*/
      if ( *(_QWORD *)v17 ) /*0x10052d715*/
        (*(void (__fastcall **)(_QWORD, double))v17)(*(_QWORD *)(__src[1] - 1), v14); /*0x10052d721*/
      if ( *(_QWORD *)(v17 + 8) ) /*0x10052d723*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d735*/
LABEL_23:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d747*/
      goto LABEL_24; /*0x10052d747*/
    }
    std::fs::read::inner::h6a30c15c40add28b(__src, v5, v6); /*0x10052d9cc*/
    v37 = __src[0]; /*0x10052d9d1*/
    v10 = (_UNKNOWN **)__src[1]; /*0x10052d9d8*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10052d9e2*/
    {
      v11 = 2; /*0x10052d9e8*/
      goto LABEL_92; /*0x10052d9ee*/
    }
    v43 = __src[2]; /*0x10052da6a*/
    std::fs::read::inner::h6a30c15c40add28b(__src, v167, v15); /*0x10052da7f*/
    v171 = __src[0]; /*0x10052da8b*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10052da92*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f((__int64 *)&__src[1]); /*0x10052da9f*/
    }
    else
    {
      v170 = (void *)__src[1]; /*0x10052df56*/
      if ( __src[2] == v43 && !memcmp((const void *)__src[1], v10, v43) ) /*0x10052df69*/
      {
        if ( v171 ) /*0x10052eb50*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052eb5b*/
        if ( !v37 ) /*0x10052eb63*/
          goto LABEL_24; /*0x10052eb63*/
        goto LABEL_23; /*0x10052eb63*/
      }
    }
    v47 = std::fs::write::inner::had0c1bee0a2c1e21(v167, v15, (char *)v10, v43, v14, a4, a5); /*0x10052df81*/
    if ( v37 ) /*0x10052df87*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052df94*/
    if ( v47 ) /*0x10052df9c*/
    {
      v11 = 2; /*0x10052dfa2*/
      if ( 2 * v171 ) /*0x10052dfac*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052dfc2*/
      v10 = (_UNKNOWN **)v47; /*0x10052dfc7*/
      goto LABEL_92; /*0x10052dfc7*/
    }
    LOBYTE(v10) = 1; /*0x10052e7a0*/
    if ( 2 * v171 ) /*0x10052e7a7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e7c1*/
LABEL_25:
    v172 = (__int64)&v125; /*0x10052d74f*/
    v173 = (size_t)_$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h5788e8ec8fe42d9f; /*0x10052d761*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, byte_101224633, (unsigned __int64)&v172); /*0x10052d777*/
    v18 = __src[0]; /*0x10052d77c*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v155, __src[1], __src[2], v19, v20, v21); /*0x10052d79b*/
    if ( v18 ) /*0x10052d7a3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d7b0*/
    v172 = (__int64)&v124; /*0x10052d7bc*/
    v173 = (size_t)_$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h440c81a8257c185d; /*0x10052d7c7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, byte_101224633, (unsigned __int64)&v172); /*0x10052d7dd*/
    v22 = __src[0]; /*0x10052d7e2*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v152, __src[1], __src[2], v23, v24, v25); /*0x10052d801*/
    if ( v22 ) /*0x10052d809*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d816*/
    if ( v140[2] ) /*0x10052d82c*/
    {
      v26 = v140[1]; /*0x10052d832*/
      v27 = 360LL * v140[2]; /*0x10052d839*/
      v28 = 0; /*0x10052d840*/
      while ( *(_QWORD *)(v26 + v28 + 144) != __n || memcmp(*(const void **)(v26 + v28 + 136), __s2, __n) ) /*0x10052d88b*/
      {
        v28 += 360; /*0x10052d850*/
        if ( v27 == v28 ) /*0x10052d85a*/
          goto LABEL_49; /*0x10052d85a*/
      }
      v29 = *(_QWORD *)(v26 + v28 + 168); /*0x10052d88d*/
      if ( v29 != v160 || memcmp(*(const void **)(v26 + v28 + 160), v159, v29) ) /*0x10052d8ad*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)&v158); /*0x10052d8c4*/
        v30 = (size_t *)(v26 + v28 + 152); /*0x10052d8c9*/
        if ( *v30 ) /*0x10052d8d1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d8e6*/
        *(_QWORD *)(v26 + v28 + 168) = __src[2]; /*0x10052d8f2*/
        v31 = __src[0]; /*0x10052d8f6*/
        *(_QWORD *)(v26 + v28 + 160) = __src[1]; /*0x10052d904*/
        *v30 = v31; /*0x10052d908*/
        LOBYTE(v10) = 1; /*0x10052d90b*/
      }
      v32 = *(_QWORD *)(v26 + v28 + 192); /*0x10052d90e*/
      if ( v32 != v120 || memcmp(*(const void **)(v26 + v28 + 184), v119, v32) ) /*0x10052d92e*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v118); /*0x10052d945*/
        v33 = (size_t *)(v26 + v28 + 176); /*0x10052d94a*/
        if ( *v33 ) /*0x10052d952*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052d967*/
        *(_QWORD *)(v26 + v28 + 192) = __src[2]; /*0x10052d973*/
        v34 = __src[0]; /*0x10052d977*/
        *(_QWORD *)(v26 + v28 + 184) = __src[1]; /*0x10052d985*/
        *v33 = v34; /*0x10052d989*/
        LOBYTE(v10) = 1; /*0x10052d98c*/
      }
      v35 = *(_QWORD *)(v26 + v28 + 272); /*0x10052d98f*/
      v36 = 0x8000000000000000LL; /*0x10052d99e*/
      if ( v35 == 0x8000000000000000LL ) /*0x10052d9ab*/
      {
        if ( v121[0] == 0x8000000000000000LL ) /*0x10052d9b4*/
          goto LABEL_165; /*0x10052d9b4*/
      }
      else
      {
        if ( v121[0] == 0x8000000000000000LL ) /*0x10052e7ce*/
          goto LABEL_162; /*0x10052e7ce*/
        v93 = *(_QWORD *)(v26 + v28 + 288); /*0x10052e7d0*/
        if ( v93 == v121[2] && !memcmp(*(const void **)(v26 + v28 + 280), (const void *)v121[1], v93) ) /*0x10052e7f7*/
        {
LABEL_165:
          if ( *(_QWORD *)(v26 + v28 + 296) == 0x8000000000000000LL && v122[0] != 0x8000000000000000LL ) /*0x10052e89d*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v122); /*0x10052e8b1*/
            v95 = (__int64 *)(v26 + v28 + 296); /*0x10052e8b6*/
            v174 = __src[2]; /*0x10052e8c5*/
            v173 = __src[1]; /*0x10052e8d7*/
            v172 = __src[0]; /*0x10052e8db*/
            if ( *v95 != 0x8000000000000000LL && *v95 ) /*0x10052e8df*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e903*/
            *(_QWORD *)(v26 + v28 + 312) = v174; /*0x10052e90c*/
            v96 = v172; /*0x10052e910*/
            *(_QWORD *)(v26 + v28 + 304) = v173; /*0x10052e918*/
            *v95 = v96; /*0x10052e91c*/
            LOBYTE(v10) = 1; /*0x10052e91f*/
            v36 = 0x8000000000000000LL; /*0x10052e922*/
          }
          v97 = *(_QWORD *)(v26 + v28 + 320); /*0x10052e92c*/
          if ( v97 == 0x8000000000000000LL ) /*0x10052e93e*/
          {
            if ( v123[0] == 0x8000000000000000LL ) /*0x10052e943*/
            {
LABEL_181:
              v100 = *(_QWORD *)(v26 + v28 + 240); /*0x10052ea07*/
              if ( v100 != v157 || memcmp(*(const void **)(v26 + v28 + 232), v156, v100) ) /*0x10052ea27*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10052ea3e*/
                  __src,
                  (__int64)&v155);
                v101 = (size_t *)(v26 + v28 + 224); /*0x10052ea43*/
                if ( *v101 ) /*0x10052ea4b*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052ea60*/
                *(_QWORD *)(v26 + v28 + 240) = __src[2]; /*0x10052ea6c*/
                v102 = __src[0]; /*0x10052ea70*/
                *(_QWORD *)(v26 + v28 + 232) = __src[1]; /*0x10052ea7e*/
                *v101 = v102; /*0x10052ea82*/
                LOBYTE(v10) = 1; /*0x10052ea85*/
              }
              v103 = *(_QWORD *)(v26 + v28 + 264); /*0x10052ea92*/
              if ( v103 != v154 || memcmp(*(const void **)(v26 + v28 + 256), v153, v103) ) /*0x10052eab2*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10052eac9*/
                  __src,
                  (__int64)&v152);
                v104 = (size_t *)(v26 + v28 + 248); /*0x10052eace*/
                if ( *v104 ) /*0x10052ead6*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052eaeb*/
                *(_QWORD *)(v26 + v28 + 264) = __src[2]; /*0x10052eaf7*/
                v105 = __src[0]; /*0x10052eafb*/
                *(_QWORD *)(v26 + v28 + 256) = __src[1]; /*0x10052eb09*/
                *v104 = v105; /*0x10052eb0d*/
                LOBYTE(v10) = 1; /*0x10052eb10*/
              }
              v45 = 1; /*0x10052eb1d*/
              if ( !*(_QWORD *)(v26 + v28 + 16) ) /*0x10052eb20*/
              {
                *(_QWORD *)(v26 + v28 + 16) = 1; /*0x10052eb2c*/
                *(_QWORD *)(v26 + v28 + 24) = v168; /*0x10052eb39*/
                v45 = 1; /*0x10052eb3e*/
                LOBYTE(v10) = 1; /*0x10052eb41*/
              }
LABEL_61:
              if ( v140[3] != 0x8000000000000000LL && v140[5] == __n && !memcmp((const void *)v140[4], __s2, __n) ) /*0x10052dd82*/
              {
                if ( !(_BYTE)v10 ) /*0x10052e795*/
                {
LABEL_70:
                  if ( v45 ) /*0x10052de63*/
                  {
                    if ( v152 ) /*0x10052de6f*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052de7d*/
                    if ( v155 ) /*0x10052de8c*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052de9a*/
                    if ( v158 ) /*0x10052dea9*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052deb7*/
                  }
                  if ( v126 ) /*0x10052dec6*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052ded5*/
                  goto LABEL_100; /*0x10052deda*/
                }
              }
              else
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10052dd96*/
                  __src,
                  (__int64)v115);
                v174 = __src[2]; /*0x10052dda9*/
                v173 = __src[1]; /*0x10052ddbb*/
                v172 = __src[0]; /*0x10052ddbf*/
                if ( v140[3] != 0x8000000000000000LL && v140[3] ) /*0x10052dddc*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052ddea*/
                v140[5] = v174; /*0x10052ddf3*/
                v140[4] = v173; /*0x10052ddff*/
                v140[3] = v172; /*0x10052de03*/
              }
              v46 = v140[1]; /*0x10052de06*/
              __src[0] = (size_t)&v134; /*0x10052de1b*/
              if ( v140[2] >= 2u ) /*0x10052de26*/
              {
                if ( v140[2] >= 0x15u ) /*0x10052eba5*/
                {
                  core::slice::sort::stable::driftsort_main::h9f56452b6dbf473f(v140[1], v140[2], __src, v14); /*0x10052ebfd*/
                }
                else
                {
                  v106 = 360LL * v140[2]; /*0x10052eba7*/
                  v107 = 360; /*0x10052ebae*/
                  do /*0x10052ebca*/
                  {
                    core::slice::sort::shared::smallsort::insert_tail::hd03d099f3722d457(v46, v46 + v107); /*0x10052ebbb*/
                    v107 += 360; /*0x10052ebc0*/
                  }
                  while ( v106 != v107 ); /*0x10052ebca*/
                }
              }
              v140[6] = v168; /*0x10052de30*/
              codexmate_lib::core::repository::Repository::persist_registry::haf3cfbaf5a89afb4( /*0x10052de4e*/
                (__int64 *)__src,
                v166,
                (__int64)v140,
                0);
              v11 = __src[0]; /*0x10052de53*/
              if ( __src[0] == 10 ) /*0x10052de5e*/
                goto LABEL_70; /*0x10052de5e*/
              v10 = (_UNKNOWN **)__src[1]; /*0x10052dedf*/
              qmemcpy(v113, &__src[2], 0x50u); /*0x10052def9*/
              if ( !v45 ) /*0x10052deff*/
              {
LABEL_94:
                if ( v126 ) /*0x10052dff1*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052dffc*/
                goto LABEL_96; /*0x10052dffc*/
              }
              if ( v152 ) /*0x10052df0f*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052df1d*/
              if ( v155 ) /*0x10052df2c*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052df3e*/
LABEL_92:
              if ( v158 ) /*0x10052dfd4*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052dfe2*/
              goto LABEL_94; /*0x10052dfe2*/
            }
          }
          else
          {
            if ( v123[0] == 0x8000000000000000LL ) /*0x10052e94d*/
              goto LABEL_178; /*0x10052e94d*/
            v98 = *(_QWORD *)(v26 + v28 + 336); /*0x10052e94f*/
            if ( v98 == v123[2] && !memcmp(*(const void **)(v26 + v28 + 328), (const void *)v123[1], v98) ) /*0x10052e976*/
              goto LABEL_181; /*0x10052e976*/
          }
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v123); /*0x10052e98a*/
          v36 = __src[0]; /*0x10052e98f*/
          v172 = __src[1]; /*0x10052e99d*/
          v173 = __src[2]; /*0x10052e9a8*/
          v97 = *(_QWORD *)(v26 + v28 + 320); /*0x10052e9ac*/
          if ( v97 == 0x8000000000000000LL ) /*0x10052e9c1*/
          {
LABEL_180:
            *(_QWORD *)(v26 + v28 + 320) = v36; /*0x10052e9da*/
            v99 = v173; /*0x10052e9e6*/
            *(_QWORD *)(v26 + v28 + 328) = v172; /*0x10052e9ea*/
            *(_QWORD *)(v26 + v28 + 336) = v99; /*0x10052e9f2*/
            LOBYTE(v10) = 1; /*0x10052e9fa*/
            goto LABEL_181; /*0x10052e9fa*/
          }
LABEL_178:
          if ( v97 ) /*0x10052e9c6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e9d5*/
          goto LABEL_180; /*0x10052e9d5*/
        }
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v121); /*0x10052e80b*/
      v36 = __src[0]; /*0x10052e810*/
      v172 = __src[1]; /*0x10052e81e*/
      v173 = __src[2]; /*0x10052e829*/
      v35 = *(_QWORD *)(v26 + v28 + 272); /*0x10052e82d*/
      if ( v35 == 0x8000000000000000LL ) /*0x10052e842*/
      {
LABEL_164:
        *(_QWORD *)(v26 + v28 + 272) = v36; /*0x10052e85b*/
        v94 = v173; /*0x10052e867*/
        *(_QWORD *)(v26 + v28 + 280) = v172; /*0x10052e86b*/
        *(_QWORD *)(v26 + v28 + 288) = v94; /*0x10052e873*/
        LOBYTE(v10) = 1; /*0x10052e87b*/
        v36 = 0x8000000000000000LL; /*0x10052e87e*/
        goto LABEL_165; /*0x10052e87e*/
      }
LABEL_162:
      if ( v35 ) /*0x10052e847*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e856*/
      goto LABEL_164; /*0x10052e856*/
    }
LABEL_49:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v136, (__int64)v115); /*0x10052d9f3*/
    v171 = v158; /*0x10052da09*/
    v38 = v159; /*0x10052da0d*/
    v39 = v160; /*0x10052da14*/
    v170 = v159; /*0x10052da26*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10052da2a*/
      (size_t *)&v172,
      (__int64)v118);
    if ( v121[0] == 0x8000000000000000LL ) /*0x10052da40*/
    {
      v40 = 0x8000000000000000LL; /*0x10052da42*/
      if ( v122[0] == 0x8000000000000000LL ) /*0x10052da4c*/
        goto LABEL_51; /*0x10052da4c*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v121); /*0x10052dab7*/
      v40 = __src[0]; /*0x10052dabc*/
      v164 = __src[1]; /*0x10052daca*/
      v151 = __src[2]; /*0x10052dad8*/
      if ( v122[0] == 0x8000000000000000LL ) /*0x10052daf0*/
      {
LABEL_51:
        v41 = 0x8000000000000000LL; /*0x10052da52*/
        v42 = 0x8000000000000000LL; /*0x10052da55*/
        if ( v123[0] == 0x8000000000000000LL ) /*0x10052da5f*/
          goto LABEL_58; /*0x10052da5f*/
        goto LABEL_57; /*0x10052da5f*/
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v122); /*0x10052db04*/
    v41 = __src[0]; /*0x10052db09*/
    v10 = (_UNKNOWN **)__src[1]; /*0x10052db10*/
    v38 = (void *)__src[2]; /*0x10052db17*/
    v42 = 0x8000000000000000LL; /*0x10052db28*/
    if ( v123[0] == 0x8000000000000000LL ) /*0x10052db32*/
    {
LABEL_58:
      __src[30] = v157; /*0x10052db6a*/
      __src[29] = (size_t)v156; /*0x10052db7f*/
      __src[28] = v155; /*0x10052db8d*/
      __src[31] = v152; /*0x10052db9b*/
      __src[32] = (size_t)v153; /*0x10052dba9*/
      __src[33] = v154; /*0x10052dbb7*/
      __src[16] = v136; /*0x10052dbc5*/
      __src[17] = v137; /*0x10052dbd3*/
      __src[18] = v138; /*0x10052dbe1*/
      __src[19] = v171; /*0x10052dbec*/
      __src[20] = (size_t)v170; /*0x10052dbf7*/
      __src[21] = v39; /*0x10052dbfe*/
      __src[22] = v172; /*0x10052dc09*/
      __src[23] = v173; /*0x10052dc14*/
      __src[24] = v174; /*0x10052dc1f*/
      __src[25] = 0; /*0x10052dc26*/
      __src[26] = 1; /*0x10052dc31*/
      __src[27] = 0; /*0x10052dc3c*/
      __src[34] = v40; /*0x10052dc47*/
      __src[35] = v164; /*0x10052dc55*/
      __src[36] = v151; /*0x10052dc63*/
      __src[37] = v41; /*0x10052dc6a*/
      __src[38] = (size_t)v10; /*0x10052dc71*/
      __src[39] = (size_t)v38; /*0x10052dc78*/
      __src[40] = v42; /*0x10052dc7f*/
      __src[42] = v135; /*0x10052dc8d*/
      __src[41] = v134; /*0x10052dc9b*/
      LOWORD(__src[44]) = 514; /*0x10052dca9*/
      __src[0] = 0; /*0x10052dcb2*/
      __src[43] = v123[3]; /*0x10052dcbd*/
      __src[2] = 1; /*0x10052dcc4*/
      __src[3] = v168; /*0x10052dcd3*/
      __src[4] = 0; /*0x10052dcda*/
      __src[6] = 2; /*0x10052dce5*/
      __src[11] = 2; /*0x10052dcf0*/
      v44 = v140[2]; /*0x10052dcfb*/
      if ( v140[2] == v140[0] ) /*0x10052dd09*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h11ed8d038cb0ca10(v140); /*0x10052dd12*/
      memcpy((void *)(v140[1] + 360 * v44), __src, 0x168u); /*0x10052dd31*/
      v140[2] = v44 + 1; /*0x10052dd39*/
      LOBYTE(v10) = 1; /*0x10052dd40*/
      v45 = 0; /*0x10052dd43*/
      goto LABEL_61; /*0x10052dd43*/
    }
LABEL_57:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)v123); /*0x10052db34*/
    v42 = __src[0]; /*0x10052db47*/
    v134 = __src[1]; /*0x10052db55*/
    v135 = __src[2]; /*0x10052db63*/
    goto LABEL_58; /*0x10052db63*/
  }
LABEL_100:
  v54 = (char *)v140[1]; /*0x10052e146*/
  v55 = v140[1] + 360LL * v140[2]; /*0x10052e158*/
  v56 = nullptr; /*0x10052e15b*/
  v57 = 0; /*0x10052e15e*/
  v164 = v55; /*0x10052e160*/
  while ( v54 != (char *)v55 ) /*0x10052e173*/
  {
    v58 = v54; /*0x10052e179*/
    v59 = *((_QWORD *)v54 + 6); /*0x10052e17c*/
    if ( v59 == 2 ) /*0x10052e184*/
    {
      v54 += 360; /*0x10052e186*/
      if ( *((_DWORD *)v58 + 22) == 2 ) /*0x10052e191*/
        continue; /*0x10052e191*/
    }
    __s2 = v58; /*0x10052e193*/
    v168 = v57; /*0x10052e197*/
    v167 = v56; /*0x10052e19b*/
    if ( !v144 ) /*0x10052e1a9*/
    {
LABEL_110:
      v65 = __s2; /*0x10052e225*/
      v66 = 16LL * *((_QWORD *)__s2 + 4) + 24; /*0x10052e234*/
      if ( !(*((_QWORD *)__s2 + 2) | *((_QWORD *)__s2 + 4)) ) /*0x10052e238*/
        v66 = 344; /*0x10052e248*/
      v67 = *(_QWORD *)((char *)__s2 + v66); /*0x10052e24c*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v113, (__int64)__s2 + 128); /*0x10052e25a*/
      v68 = v65[6]; /*0x10052e25f*/
      v69 = 2; /*0x10052e263*/
      v70 = 2; /*0x10052e268*/
      v71 = v171; /*0x10052e271*/
      v72 = (int)v170; /*0x10052e275*/
      if ( v68 == 2 ) /*0x10052e279*/
      {
LABEL_117:
        v73 = v65[11]; /*0x10052e2be*/
        if ( v73 == 2 ) /*0x10052e2c6*/
          goto LABEL_125; /*0x10052e2c6*/
      }
      else
      {
        v71 = 0; /*0x10052e27b*/
        if ( *((_BYTE *)v65 + 64) ) /*0x10052e27e*/
        {
          v149 = *((_DWORD *)v65 + 17); /*0x10052e287*/
          v71 = 1; /*0x10052e28d*/
        }
        v151 = v65[9]; /*0x10052e298*/
        v147 = *((_DWORD *)v65 + 20); /*0x10052e2a3*/
        if ( (v68 & 1) != 0 ) /*0x10052e2ac*/
        {
          v130 = v65[7]; /*0x10052e2b2*/
          v70 = 1; /*0x10052e2b9*/
          goto LABEL_117; /*0x10052e2b9*/
        }
        v70 = 0; /*0x10052e311*/
        v73 = v65[11]; /*0x10052e313*/
        if ( v73 == 2 ) /*0x10052e31b*/
        {
LABEL_125:
          __src[18] = v113[2]; /*0x10052e321*/
          __src[17] = v113[1]; /*0x10052e33a*/
          __src[16] = v113[0]; /*0x10052e345*/
          __src[0] = v70; /*0x10052e348*/
          __src[1] = v130; /*0x10052e356*/
          __src[2] = __PAIR64__(v149, v71); /*0x10052e35d*/
          __src[3] = v151; /*0x10052e378*/
          LODWORD(__src[4]) = v147; /*0x10052e386*/
          __src[5] = v69; /*0x10052e38c*/
          __src[6] = v131; /*0x10052e39a*/
          __src[7] = __PAIR64__(v150, v72); /*0x10052e3a1*/
          __src[8] = v129; /*0x10052e3bc*/
          LODWORD(__src[9]) = v148; /*0x10052e3ca*/
          __src[10] = 2; /*0x10052e3d0*/
          __src[19] = v67; /*0x10052e3db*/
          LOBYTE(__src[20]) = 1; /*0x10052e3e2*/
          v172 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052e3ee*/
          LODWORD(v173) = v74; /*0x10052e3f2*/
          std::time::SystemTime::duration_since::had059553cab94f96((__int64)v113, (__int64)&v172, 0, 0); /*0x10052e400*/
          if ( LOBYTE(v113[0]) ) /*0x10052e40c*/
            v75 = 0; /*0x10052e417*/
          else
            v75 = v113[1]; /*0x10052e40e*/
          LODWORD(v170) = v72; /*0x10052e419*/
          LODWORD(v171) = v71; /*0x10052e41d*/
          v76 = codexmate_lib::core::quota_store::upsert_item::h5807e96fc6a8e28c(&v142, __src, v75); /*0x10052e42f*/
          v64 = __s2; /*0x10052e434*/
          LOBYTE(v76) = (v168 | v76) & 1; /*0x10052e43b*/
          v59 = *((_QWORD *)__s2 + 6); /*0x10052e43d*/
          v57 = v76; /*0x10052e441*/
          v55 = v164; /*0x10052e443*/
          goto LABEL_129; /*0x10052e443*/
        }
      }
      v72 = 0; /*0x10052e2c8*/
      if ( *((_BYTE *)__s2 + 104) ) /*0x10052e2cf*/
      {
        v150 = *((_DWORD *)__s2 + 27); /*0x10052e2d8*/
        v72 = 1; /*0x10052e2de*/
      }
      v129 = *((_QWORD *)__s2 + 14); /*0x10052e2e9*/
      v148 = *((_DWORD *)__s2 + 30); /*0x10052e2f4*/
      if ( (v73 & 1) != 0 ) /*0x10052e2fd*/
      {
        v131 = *((_QWORD *)__s2 + 12); /*0x10052e303*/
        v69 = 1; /*0x10052e30a*/
      }
      else
      {
        v69 = 0; /*0x10052e31f*/
      }
      goto LABEL_125; /*0x10052e30f*/
    }
    __n = *((_QWORD *)__s2 + 17); /*0x10052e1b6*/
    v60 = *((_QWORD *)__s2 + 18); /*0x10052e1bd*/
    v61 = v143; /*0x10052e1c4*/
    v62 = 168 * v144; /*0x10052e1cb*/
    v63 = 0; /*0x10052e1d2*/
    while ( *(_QWORD *)(v61 + v63 + 144) != v60 || memcmp(*(const void **)(v61 + v63 + 136), (const void *)__n, v60) ) /*0x10052e20f*/
    {
      v63 += 168; /*0x10052e1e0*/
      if ( v62 == v63 ) /*0x10052e1ea*/
        goto LABEL_110; /*0x10052e1ea*/
    }
    v55 = v164; /*0x10052e211*/
    v57 = v168; /*0x10052e218*/
    v64 = __s2; /*0x10052e21c*/
LABEL_129:
    v54 = (char *)(v64 + 45); /*0x10052e44a*/
    v64[6] = 2; /*0x10052e451*/
    v77 = v64[11]; /*0x10052e45d*/
    v64[11] = 2; /*0x10052e461*/
    v56 = v167; /*0x10052e473*/
    LOBYTE(v56) = ((v59 ^ 2 | v77 ^ 2) != 0) | (unsigned __int8)v167; /*0x10052e477*/
  }
  if ( (v57 & 1) != 0 ) /*0x10052e483*/
  {
    codexmate_lib::core::quota_store::save::hf1c84fcccf34deb2((__int64 *)__src, v132, v133, (__int64)&v142); /*0x10052e4a1*/
    v78 = __src[0]; /*0x10052e4a6*/
    if ( __src[0] != 10 ) /*0x10052e4b1*/
      goto LABEL_136; /*0x10052e4b1*/
  }
  if ( ((unsigned __int8)v56 & 1) != 0 ) /*0x10052e4b7*/
  {
    v113[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052e4c2*/
    LODWORD(v113[1]) = v79; /*0x10052e4c9*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)v113, 0, 0); /*0x10052e4e1*/
    v80 = 0; /*0x10052e4e6*/
    if ( !LOBYTE(__src[0]) ) /*0x10052e4ef*/
      v80 = __src[1]; /*0x10052e4f1*/
    v140[6] = v80; /*0x10052e4ff*/
    codexmate_lib::core::repository::Repository::persist_registry::haf3cfbaf5a89afb4( /*0x10052e516*/
      (__int64 *)__src,
      v166,
      (__int64)v140,
      0);
    v78 = __src[0]; /*0x10052e51b*/
    if ( __src[0] != 10 ) /*0x10052e526*/
    {
LABEL_136:
      qmemcpy(v113, &__src[1], sizeof(v113)); /*0x10052e53f*/
      __src[0] = v78; /*0x10052e542*/
      qmemcpy(&__src[1], v113, 0x58u); /*0x10052e55c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10052e55f*/
      v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x1Du, 1u); /*0x10052e56e*/
      if ( !v81 ) /*0x10052e576*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x10052ebec*/
      v82 = (size_t)v81; /*0x10052e57c*/
      qmemcpy(v81, "LEGACY_QUOTA_MIGRATION_FAILED", 29); /*0x10052e5b3*/
      v172 = (__int64)__src; /*0x10052e5bd*/
      v173 = (size_t)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x10052e5c8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v111, byte_10122AE74, (unsigned __int64)&v172); /*0x10052e5de*/
      v172 = 29; /*0x10052e5e3*/
      v173 = v82; /*0x10052e5eb*/
      v174 = 29; /*0x10052e5ef*/
      v175 = v111[0]; /*0x10052e605*/
      v176 = v111[1]; /*0x10052e609*/
      v177 = v111[2]; /*0x10052e614*/
      v83 = v163; /*0x10052e618*/
      if ( v163 == v161 ) /*0x10052e626*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v161); /*0x10052e62f*/
      v84 = v162; /*0x10052e634*/
      v85 = 48 * v83; /*0x10052e63f*/
      *(_QWORD *)(v162 + v85 + 40) = v177; /*0x10052e647*/
      *(_QWORD *)(v84 + v85 + 32) = v176; /*0x10052e650*/
      *(_QWORD *)(v84 + v85 + 24) = v175; /*0x10052e659*/
      *(_QWORD *)(v84 + v85 + 16) = v174; /*0x10052e662*/
      v86 = v172; /*0x10052e667*/
      *(_QWORD *)(v84 + v85 + 8) = v173; /*0x10052e66f*/
      *(_QWORD *)(v84 + v85) = v86; /*0x10052e674*/
      v163 = v83 + 1; /*0x10052e67b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__src); /*0x10052e689*/
    }
  }
  v87 = v139; /*0x10052e695*/
  v139[3] = v163; /*0x10052e69c*/
  v88 = v161; /*0x10052e6a0*/
  v87[2] = v162; /*0x10052e6ae*/
  v87[1] = v88; /*0x10052e6b2*/
  *v87 = 10; /*0x10052e6b6*/
  v89 = v144; /*0x10052e6bd*/
  if ( v144 ) /*0x10052e6c7*/
  {
    v90 = v143 + 136; /*0x10052e6d0*/
    do /*0x10052e6ea*/
    {
      if ( *(_QWORD *)(v90 - 8) ) /*0x10052e6ec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e6fd*/
      if ( *(_DWORD *)(v90 - 56) != 2 ) /*0x10052e707*/
      {
        v91 = *(_QWORD *)(v90 - 40); /*0x10052e709*/
        if ( v91 != 0x8000000000000000LL ) /*0x10052e71a*/
        {
          if ( v91 ) /*0x10052e71f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e72a*/
        }
      }
      v90 += 168; /*0x10052e6e0*/
      --v89; /*0x10052e6e7*/
    }
    while ( v89 ); /*0x10052e6ea*/
  }
  if ( v142 ) /*0x10052e73b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052e750*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(v140); /*0x10052e75f*/
  if ( __dst[0] != 2 ) /*0x10052e76b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h3db126d9da633c1d(__dst); /*0x10052e774*/
  return v139; /*0x10052e780*/
}