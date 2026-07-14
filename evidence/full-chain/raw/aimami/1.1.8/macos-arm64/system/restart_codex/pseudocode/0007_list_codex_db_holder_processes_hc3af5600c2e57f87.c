// codexmate_lib::platform::process::list_codex_db_holder_processes @ 0x1001c1c40
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

double __fastcall codexmate_lib::platform::process::list_codex_db_holder_processes::hc3af5600c2e57f87(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  double result; // xmm0_8
  void *v5; // r12
  size_t v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  char *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rbx
  _QWORD *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rbx
  char **v47; // rax
  char *v48; // rsi
  char *v49; // rbx
  _BYTE *v50; // rax
  __int64 v51; // rdx
  int v52; // esi
  __int64 v53; // rcx
  __int64 v54; // rsi
  unsigned __int64 v55; // rdi
  _BYTE *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // r15d
  unsigned int v60; // esi
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdi
  int v64; // eax
  unsigned int v65; // edx
  bool v66; // al
  __int64 v67; // rcx
  const void *v68; // rax
  __int64 v69; // rdx
  size_t v70; // r14
  const void *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r15
  __int64 v76; // rbx
  __int64 v77; // rsi
  char *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  size_t v81; // rbx
  const void *v82; // r14
  __int64 v83; // rax
  size_t v84; // rax
  size_t v85; // rdi
  unsigned __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rcx
  _QWORD *v90; // rdx
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rbx
  _QWORD *v94; // r14
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // [rsp+0h] [rbp-3A0h] BYREF
  __int64 v99; // [rsp+8h] [rbp-398h]
  __int64 v100; // [rsp+10h] [rbp-390h]
  __int64 v101; // [rsp+18h] [rbp-388h]
  __int64 v102; // [rsp+20h] [rbp-380h]
  __int64 v103; // [rsp+28h] [rbp-378h]
  __int64 v104; // [rsp+30h] [rbp-370h]
  __int64 v105; // [rsp+38h] [rbp-368h] BYREF
  __int64 v106; // [rsp+40h] [rbp-360h]
  __int64 v107; // [rsp+48h] [rbp-358h]
  __int64 v108; // [rsp+100h] [rbp-2A0h]
  __int64 v109; // [rsp+108h] [rbp-298h]
  __int64 v110; // [rsp+110h] [rbp-290h]
  __int64 v111; // [rsp+118h] [rbp-288h]
  __int64 v112; // [rsp+120h] [rbp-280h]
  __int64 v113; // [rsp+128h] [rbp-278h]
  __int64 v114; // [rsp+130h] [rbp-270h]
  char ***v115; // [rsp+138h] [rbp-268h] BYREF
  char *v116; // [rsp+140h] [rbp-260h]
  char **v117; // [rsp+148h] [rbp-258h]
  __int64 (__fastcall *v118)(); // [rsp+150h] [rbp-250h]
  __int64 v119; // [rsp+158h] [rbp-248h]
  __int64 v120; // [rsp+160h] [rbp-240h]
  __int64 v121; // [rsp+168h] [rbp-238h]
  char *v122; // [rsp+200h] [rbp-1A0h] BYREF
  __int64 v123; // [rsp+208h] [rbp-198h]
  __int64 v124; // [rsp+210h] [rbp-190h]
  __int64 v125; // [rsp+218h] [rbp-188h]
  __int64 v126; // [rsp+220h] [rbp-180h]
  __int64 v127; // [rsp+228h] [rbp-178h]
  char ***v128; // [rsp+230h] [rbp-170h]
  char *v129; // [rsp+238h] [rbp-168h]
  char **v130; // [rsp+240h] [rbp-160h]
  __int64 (__fastcall *v131)(); // [rsp+248h] [rbp-158h]
  __int64 v132; // [rsp+250h] [rbp-150h]
  __int64 v133; // [rsp+258h] [rbp-148h]
  __int64 v134; // [rsp+260h] [rbp-140h]
  __int64 v135; // [rsp+268h] [rbp-138h]
  __int64 v136; // [rsp+270h] [rbp-130h] BYREF
  __int64 v137; // [rsp+278h] [rbp-128h]
  size_t v138; // [rsp+280h] [rbp-120h]
  __int64 v139; // [rsp+288h] [rbp-118h] BYREF
  void *__src; // [rsp+290h] [rbp-110h]
  size_t __n; // [rsp+298h] [rbp-108h]
  char **v142; // [rsp+2A0h] [rbp-100h] BYREF
  size_t v143; // [rsp+2A8h] [rbp-F8h]
  _QWORD v144[5]; // [rsp+2B0h] [rbp-F0h] BYREF
  char v145; // [rsp+2D8h] [rbp-C8h]
  __int16 v146; // [rsp+2E0h] [rbp-C0h]
  _QWORD *v147; // [rsp+2E8h] [rbp-B8h]
  char v148[10]; // [rsp+2F6h] [rbp-AAh] BYREF
  __int64 v149; // [rsp+300h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+308h] [rbp-98h]
  __int64 v151; // [rsp+310h] [rbp-90h]
  char *v152; // [rsp+318h] [rbp-88h] BYREF
  __int64 v153; // [rsp+320h] [rbp-80h]
  size_t v154; // [rsp+328h] [rbp-78h]
  size_t v155; // [rsp+330h] [rbp-70h]
  __int64 v156; // [rsp+338h] [rbp-68h]
  size_t v157; // [rsp+340h] [rbp-60h]
  char *v158; // [rsp+348h] [rbp-58h]
  __int64 v159; // [rsp+350h] [rbp-50h] BYREF
  __int64 v160; // [rsp+358h] [rbp-48h]
  __int64 v161; // [rsp+360h] [rbp-40h]
  void *v162; // [rsp+368h] [rbp-38h]
  char *v163; // [rsp+370h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::hac90456ee84df9c2(&v115); /*0x1001c1c5e*/
  v2 = (__int64 *)v116; /*0x1001c1c63*/
  v3 = &v139; /*0x1001c1c71*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h75b5e13ea96a0347(&v139, v116, v117); /*0x1001c1c7b*/
  if ( v115 ) /*0x1001c1c8a*/
  {
    v3 = v2; /*0x1001c1c91*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v115, 1); /*0x1001c1c94*/
  }
  v159 = 0; /*0x1001c1c99*/
  v160 = 8; /*0x1001c1ca1*/
  v161 = 0; /*0x1001c1ca9*/
  v5 = __src; /*0x1001c1cb1*/
  v6 = __n; /*0x1001c1cb8*/
  v152 = (char *)1; /*0x1001c1cbf*/
  v153 = 0; /*0x1001c1cca*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1001c1cd5*/
  {
    v7 = 0; /*0x1001c1cd7*/
    goto LABEL_5; /*0x1001c1cd7*/
  }
  v147 = a1; /*0x1001c1ce9*/
  if ( __n ) /*0x1001c1cf0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3); /*0x1001c1cf2*/
    v7 = 1; /*0x1001c1cf7*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1001c1d04*/
    if ( !v8 ) /*0x1001c1d0c*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1001c1cd9*/
    v9 = v8; /*0x1001c1d0e*/
  }
  else
  {
    v9 = 1; /*0x1001c1d13*/
  }
  memcpy((void *)v9, v5, v6); /*0x1001c1d22*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v115, v9, v6); /*0x1001c1d37*/
  if ( (_BYTE)v115 ) /*0x1001c1d43*/
  {
    if ( ((unsigned __int8)v116 & 3) != 1 ) /*0x1001c1d54*/
    {
      if ( !v6 ) /*0x1001c1d5d*/
        goto LABEL_17; /*0x1001c1d5d*/
      goto LABEL_13; /*0x1001c1d5d*/
    }
    v163 = v116 - 1; /*0x1001c2335*/
    v162 = *(void **)(v116 - 1); /*0x1001c233d*/
    v40 = *(_QWORD *)(v116 + 7); /*0x1001c2341*/
    if ( *(_QWORD *)v40 ) /*0x1001c2345*/
      (*(void (__fastcall **)(void *))v40)(v162); /*0x1001c2354*/
    v41 = *(_QWORD *)(v40 + 8); /*0x1001c235a*/
    if ( v41 ) /*0x1001c2361*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v41, *(_QWORD *)(v40 + 16)); /*0x1001c2367*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, 24, 8); /*0x1001c237a*/
    if ( v6 ) /*0x1001c2382*/
LABEL_13:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v6, 1); /*0x1001c1d5f*/
  }
  else
  {
    v10 = v161; /*0x1001c1d71*/
    if ( v161 == v159 ) /*0x1001c1d79*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v159); /*0x1001c1d82*/
    v11 = v160; /*0x1001c1d87*/
    v12 = 3 * v10; /*0x1001c1d8b*/
    *(_QWORD *)(v160 + 8 * v12) = v6; /*0x1001c1d8f*/
    *(_QWORD *)(v11 + 8 * v12 + 8) = v9; /*0x1001c1d93*/
    *(_QWORD *)(v11 + 8 * v12 + 16) = v6; /*0x1001c1d98*/
    v161 = v10 + 1; /*0x1001c1da0*/
  }
LABEL_17:
  v152 = "-wal-shmlsof"; /*0x1001c1da4*/
  v153 = 4; /*0x1001c1db2*/
  v142 = (char **)v5; /*0x1001c1dba*/
  v143 = v6; /*0x1001c1dc1*/
  v115 = &v142; /*0x1001c1dcf*/
  v116 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1001c1ddd*/
  v117 = &v152; /*0x1001c1deb*/
  v118 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001c1df9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v105, "\xC0\xC0", &v115); /*0x1001c1e15*/
  v13 = v105; /*0x1001c1e1a*/
  v14 = v106; /*0x1001c1e21*/
  v15 = v107; /*0x1001c1e28*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v115, v106, v107); /*0x1001c1e3c*/
  if ( (_BYTE)v115 ) /*0x1001c1e48*/
  {
    if ( ((unsigned __int8)v116 & 3) != 1 ) /*0x1001c1e59*/
    {
      if ( !v13 ) /*0x1001c1e69*/
        goto LABEL_24; /*0x1001c1e69*/
      goto LABEL_20; /*0x1001c1e69*/
    }
    v163 = v116 - 1; /*0x1001c2391*/
    v162 = *(void **)(v116 - 1); /*0x1001c2399*/
    v42 = *(_QWORD *)(v116 + 7); /*0x1001c239d*/
    if ( *(_QWORD *)v42 ) /*0x1001c23a1*/
      (*(void (__fastcall **)(void *))v42)(v162); /*0x1001c23ad*/
    v43 = *(_QWORD *)(v42 + 8); /*0x1001c23b3*/
    if ( v43 ) /*0x1001c23ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v43, *(_QWORD *)(v42 + 16)); /*0x1001c23c0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, 24, 8); /*0x1001c23d3*/
    if ( v13 ) /*0x1001c23e2*/
LABEL_20:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1001c1e6b*/
  }
  else
  {
    v162 = v5; /*0x1001c1e7d*/
    v16 = v161; /*0x1001c1e81*/
    if ( v161 == v159 ) /*0x1001c1e89*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v159); /*0x1001c1e8f*/
    v17 = v160; /*0x1001c1e94*/
    v18 = 3 * v16; /*0x1001c1e98*/
    *(_QWORD *)(v160 + 8 * v18) = v13; /*0x1001c1e9c*/
    *(_QWORD *)(v17 + 8 * v18 + 8) = v14; /*0x1001c1ea0*/
    *(_QWORD *)(v17 + 8 * v18 + 16) = v15; /*0x1001c1ea5*/
    v161 = v16 + 1; /*0x1001c1ead*/
    v5 = v162; /*0x1001c1eb1*/
  }
LABEL_24:
  v152 = "-shmlsof"; /*0x1001c1ebc*/
  v153 = 4; /*0x1001c1eca*/
  v142 = (char **)v5; /*0x1001c1ed2*/
  v143 = v6; /*0x1001c1ed9*/
  v115 = &v142; /*0x1001c1ee0*/
  v116 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1001c1eee*/
  v117 = &v152; /*0x1001c1efc*/
  v118 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001c1f0a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v105, "\xC0\xC0", &v115); /*0x1001c1f26*/
  v19 = v105; /*0x1001c1f2b*/
  v20 = v106; /*0x1001c1f32*/
  v21 = v107; /*0x1001c1f39*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v115, v106, v107); /*0x1001c1f4d*/
  if ( !(_BYTE)v115 ) /*0x1001c1f59*/
  {
    v34 = v161; /*0x1001c2101*/
    if ( v161 == v159 ) /*0x1001c2109*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v159); /*0x1001c210f*/
    v35 = v160; /*0x1001c2114*/
    v22 = 3 * v34; /*0x1001c2118*/
    *(_QWORD *)(v160 + 8 * v22) = v19; /*0x1001c211c*/
    *(_QWORD *)(v35 + 8 * v22 + 8) = v20; /*0x1001c2120*/
    *(_QWORD *)(v35 + 8 * v22 + 16) = v21; /*0x1001c2125*/
    v161 = v34 + 1; /*0x1001c212d*/
    v23 = v147; /*0x1001c2134*/
    if ( v34 != -1 ) /*0x1001c213b*/
      goto LABEL_29; /*0x1001c213b*/
LABEL_47:
    *v23 = 0; /*0x1001c2141*/
    v23[1] = 8; /*0x1001c2149*/
    v23[2] = 0; /*0x1001c2151*/
    goto LABEL_48; /*0x1001c2151*/
  }
  v22 = (unsigned __int8)v116 & 3; /*0x1001c1f68*/
  if ( (_DWORD)v22 != 1 ) /*0x1001c1f6e*/
  {
    if ( !v19 ) /*0x1001c1f77*/
      goto LABEL_28; /*0x1001c1f77*/
    goto LABEL_27; /*0x1001c1f77*/
  }
  v163 = v116 - 1; /*0x1001c23f1*/
  v162 = *(void **)(v116 - 1); /*0x1001c23f9*/
  v44 = *(_QWORD *)(v116 + 7); /*0x1001c23fd*/
  if ( *(_QWORD *)v44 ) /*0x1001c2401*/
    (*(void (__fastcall **)(void *))v44)(v162); /*0x1001c240d*/
  v45 = *(_QWORD *)(v44 + 8); /*0x1001c2413*/
  if ( v45 ) /*0x1001c241a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v45, *(_QWORD *)(v44 + 16)); /*0x1001c2420*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, 24, 8); /*0x1001c2433*/
  if ( v19 ) /*0x1001c243b*/
LABEL_27:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x1001c1f79*/
LABEL_28:
  v23 = v147; /*0x1001c1f89*/
  if ( !v161 ) /*0x1001c1f97*/
    goto LABEL_47; /*0x1001c1f97*/
LABEL_29:
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v105, "lsof", 4, v22); /*0x1001c1f9d*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v105, "-t-- | ", 2); /*0x1001c1fc8*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v105, "-- | ", 2); /*0x1001c1fe0*/
  if ( v161 ) /*0x1001c1fec*/
  {
    v24 = v160; /*0x1001c1fee*/
    v25 = 24 * v161; /*0x1001c1ff6*/
    v26 = 0; /*0x1001c1ffa*/
    do /*0x1001c2029*/
    {
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c201d*/
        &v105,
        *(_QWORD *)(v24 + v26 + 8),
        *(_QWORD *)(v24 + v26 + 16));
      v26 += 24; /*0x1001c2022*/
    }
    while ( v25 != v26 ); /*0x1001c2029*/
  }
  std::process::Command::output::h737eedd4de2ee22e(&v115, &v105); /*0x1001c2039*/
  if ( __OFSUB__(0, v115) ) /*0x1001c2040*/
  {
    if ( ((unsigned __int8)v116 & 3) == 1 ) /*0x1001c205c*/
    {
      v27 = v116 - 1; /*0x1001c205e*/
      v28 = *(_QWORD *)(v116 - 1); /*0x1001c2062*/
      v29 = *(_QWORD *)(v116 + 7); /*0x1001c2066*/
      if ( *(_QWORD *)v29 ) /*0x1001c206a*/
        (*(void (__fastcall **)(__int64))v29)(v28); /*0x1001c2076*/
      v30 = *(_QWORD *)(v29 + 8); /*0x1001c2078*/
      if ( v30 ) /*0x1001c2080*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v30, *(_QWORD *)(v29 + 16)); /*0x1001c208a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24, 8); /*0x1001c209c*/
    }
    *v23 = 0; /*0x1001c20a1*/
    v23[1] = 8; /*0x1001c20a9*/
    v23[2] = 0; /*0x1001c20b1*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v105); /*0x1001c20c0*/
    v31 = v161; /*0x1001c20c5*/
    if ( v161 ) /*0x1001c20cc*/
    {
      v32 = (_QWORD *)(v160 + 8); /*0x1001c20d6*/
      do /*0x1001c20e7*/
      {
        v33 = *(v32 - 1); /*0x1001c20e9*/
        if ( v33 ) /*0x1001c20f0*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x1001c20fa*/
        v32 += 3; /*0x1001c20e0*/
        --v31; /*0x1001c20e4*/
      }
      while ( v31 ); /*0x1001c20e7*/
    }
    goto LABEL_48; /*0x1001c20e7*/
  }
  v134 = v121; /*0x1001c21ae*/
  v133 = v120; /*0x1001c21bc*/
  v132 = v119; /*0x1001c21ca*/
  v131 = v118; /*0x1001c21d8*/
  v130 = v117; /*0x1001c21e6*/
  v129 = v116; /*0x1001c21fb*/
  v128 = v115; /*0x1001c2202*/
  LODWORD(v162) = std::process::id::ha72f58ec62264e78(&v115, &v105); /*0x1001c220e*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v136, v129, v130); /*0x1001c2226*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1001c2232*/
  v37 = v36; /*0x1001c2234*/
  if ( *(_BYTE *)(v36 + 16) == 1 ) /*0x1001c223b*/
  {
    v38 = *(_QWORD *)v36; /*0x1001c2241*/
    v39 = *(_QWORD *)(v37 + 8); /*0x1001c2244*/
  }
  else
  {
    v38 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1001c2aff*/
    *(_QWORD *)v37 = v38; /*0x1001c2b04*/
    *(_QWORD *)(v37 + 8) = v39; /*0x1001c2b07*/
    *(_BYTE *)(v37 + 16) = 1; /*0x1001c2b0b*/
  }
  *(_QWORD *)v37 = v38 + 1; /*0x1001c224c*/
  v125 = 0; /*0x1001c2256*/
  v124 = 0; /*0x1001c2264*/
  v123 = 0; /*0x1001c2272*/
  v122 = (char *)anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001c2280*/
  v126 = v38; /*0x1001c2287*/
  v127 = v39; /*0x1001c228e*/
  v149 = 0; /*0x1001c2295*/
  v150 = 8; /*0x1001c22a0*/
  v151 = 0; /*0x1001c22ab*/
  v142 = nullptr; /*0x1001c22c4*/
  v143 = v138; /*0x1001c22cf*/
  v144[0] = v137; /*0x1001c22dd*/
  v144[1] = v138; /*0x1001c22e4*/
  v144[2] = 0; /*0x1001c22eb*/
  v144[3] = v138; /*0x1001c22f6*/
  v144[4] = 0xA0000000ALL; /*0x1001c2307*/
  v145 = 1; /*0x1001c230e*/
  v146 = 0; /*0x1001c2315*/
  do /*0x1001c246d*/
  {
    v46 = v144[0]; /*0x1001c246d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1001c247a*/
      &v115,
      v144);
    if ( (_DWORD)v115 == 1 ) /*0x1001c2486*/
    {
      v47 = v142; /*0x1001c248f*/
      v142 = v117; /*0x1001c2496*/
      v48 = (char *)((char *)v117 - (char *)v47); /*0x1001c249d*/
      v49 = (char *)v47 + v46; /*0x1001c24a0*/
      if ( v117 != v47 ) /*0x1001c24a6*/
        goto LABEL_82; /*0x1001c24a6*/
      goto LABEL_88; /*0x1001c24a6*/
    }
    if ( HIBYTE(v146) ) /*0x1001c24b7*/
      break; /*0x1001c24b7*/
    HIBYTE(v146) = 1; /*0x1001c24bd*/
    v48 = (char *)(v143 - (_QWORD)v142); /*0x1001c24d2*/
    if ( ((unsigned __int8)v146 | (v143 != (_QWORD)v142)) != 1 ) /*0x1001c24e0*/
      break; /*0x1001c24e0*/
    v49 = (char *)v142 + v144[0]; /*0x1001c24e6*/
    if ( v48 ) /*0x1001c24f0*/
    {
LABEL_82:
      if ( v48[(_QWORD)v49 - 1] == 10 ) /*0x1001c24f7*/
      {
        if ( v48 == (char *)1 ) /*0x1001c24ff*/
        {
          v48 = nullptr; /*0x1001c250e*/
        }
        else if ( v48[(_QWORD)v49 - 2] == 13 ) /*0x1001c2506*/
        {
          v48 -= 2; /*0x1001c2508*/
        }
        else
        {
          --v48; /*0x1001c2512*/
        }
      }
    }
LABEL_88:
    v50 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v49, v48); /*0x1001c2520*/
    if ( v51 ) /*0x1001c252b*/
    {
      if ( v51 == 1 ) /*0x1001c2535*/
      {
        v52 = (unsigned __int8)*v50; /*0x1001c2537*/
        if ( v52 == 43 || v52 == 45 ) /*0x1001c2546*/
          continue; /*0x1001c2546*/
      }
      else
      {
        LOBYTE(v52) = *v50; /*0x1001c2550*/
      }
      v53 = (_BYTE)v52 == 43; /*0x1001c2559*/
      v54 = -v53; /*0x1001c255f*/
      v55 = v51 - v53; /*0x1001c2565*/
      v56 = &v50[v53]; /*0x1001c2568*/
      if ( v55 >= 9 ) /*0x1001c256f*/
      {
        v61 = -(v54 + v51); /*0x1001c25c3*/
        v62 = 0; /*0x1001c25c6*/
        v59 = 0; /*0x1001c25c8*/
        while ( v62 + v61 ) /*0x1001c25d1*/
        {
          v63 = v61; /*0x1001c25d3*/
          v64 = 10 * v59; /*0x1001c25de*/
          if ( is_mul_ok(0xAu, v59) ) /*0x1001c25de*/
          {
            v65 = (unsigned __int8)v56[v62] - 48; /*0x1001c25ed*/
            v59 = v65 + v64; /*0x1001c25f0*/
            v66 = __CFADD__(v65, v64); /*0x1001c25f3*/
            if ( v65 <= 9 ) /*0x1001c25f9*/
            {
              ++v62; /*0x1001c25ff*/
              v61 = v63; /*0x1001c2604*/
              if ( !v66 ) /*0x1001c2607*/
                continue; /*0x1001c2607*/
            }
          }
          goto LABEL_75; /*0x1001c2607*/
        }
      }
      else
      {
        if ( v55 ) /*0x1001c2574*/
        {
          v57 = -(v54 + v51); /*0x1001c257d*/
          v58 = 0; /*0x1001c2580*/
          v59 = 0; /*0x1001c2582*/
          while ( 1 ) /*0x1001c2594*/
          {
            v60 = (unsigned __int8)v56[v58] - 48; /*0x1001c2594*/
            if ( v60 > 9 ) /*0x1001c259a*/
              goto LABEL_75; /*0x1001c259a*/
            v59 = v60 + 10 * v59; /*0x1001c25a4*/
            if ( !(++v58 + v57) ) /*0x1001c25ae*/
              goto LABEL_107; /*0x1001c25b1*/
          }
        }
        v59 = 0; /*0x1001c260e*/
      }
LABEL_107:
      if ( (_DWORD)v162 != v59 /*0x1001c2625*/
        && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h66247658788e8c84(&v122, v59) )
      {
        std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001c2641*/
          &v115,
          "ps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
          2,
          v67);
        v68 = (const void *)core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::h94ede26950885649(v59, v148, 10); /*0x1001c2651*/
        v70 = v69; /*0x1001c2656*/
        if ( v69 < 0 ) /*0x1001c265c*/
        {
          v96 = 0; /*0x1001c2ae5*/
        }
        else
        {
          if ( !v69 ) /*0x1001c2665*/
          {
            v73 = 1; /*0x1001c268d*/
LABEL_114:
            v163 = (char *)v73; /*0x1001c2692*/
            memcpy((void *)v73, v68, v70); /*0x1001c269f*/
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c26b3*/
              &v115,
              "-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
              2);
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v115, v163, v70); /*0x1001c26c2*/
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c26d6*/
              &v115,
              "-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
              2);
            std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v115, &unk_10125B530, 8); /*0x1001c26ea*/
            std::process::Command::output::h737eedd4de2ee22e(&v98, &v115); /*0x1001c26f9*/
            v74 = v98; /*0x1001c26fe*/
            if ( v98 == 0x8000000000000000LL ) /*0x1001c2712*/
            {
              if ( (v99 & 3) == 1 ) /*0x1001c2723*/
              {
                v156 = v99 - 1; /*0x1001c2729*/
                v75 = *(_QWORD *)(v99 - 1); /*0x1001c272d*/
                v76 = *(_QWORD *)(v99 + 7); /*0x1001c2731*/
                if ( *(_QWORD *)v76 ) /*0x1001c2735*/
                  (*(void (__fastcall **)(__int64))v76)(v75); /*0x1001c2740*/
                v77 = *(_QWORD *)(v76 + 8); /*0x1001c2742*/
                if ( v77 ) /*0x1001c2749*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v77, *(_QWORD *)(v76 + 16)); /*0x1001c2752*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, 24, 8); /*0x1001c2765*/
              }
              if ( v70 ) /*0x1001c276d*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v70, 1); /*0x1001c277f*/
              core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v115); /*0x1001c2449*/
            }
            else
            {
              v114 = v104; /*0x1001c279b*/
              v113 = v103; /*0x1001c27a3*/
              v112 = v102; /*0x1001c27ab*/
              v111 = v101; /*0x1001c27b3*/
              v110 = v100; /*0x1001c27be*/
              v109 = v99; /*0x1001c27c2*/
              v108 = v98; /*0x1001c27c5*/
              if ( v70 ) /*0x1001c27cf*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v70, 1); /*0x1001c27dd*/
              core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v115); /*0x1001c27e5*/
              if ( !(_DWORD)v114 ) /*0x1001c27f8*/
              {
                v135 = v109; /*0x1001c284a*/
                alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v115, v109, v110); /*0x1001c2851*/
                v156 = v74; /*0x1001c2856*/
                v78 = v116; /*0x1001c285a*/
                v158 = v116; /*0x1001c2868*/
                v79 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v116, v117); /*0x1001c286c*/
                v81 = v80; /*0x1001c2871*/
                if ( v80 >= 0 ) /*0x1001c2877*/
                {
                  v82 = (const void *)v79; /*0x1001c287d*/
                  if ( v80 ) /*0x1001c2883*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78); /*0x1001c2885*/
                    v83 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v81, 1); /*0x1001c2892*/
                    if ( !v83 ) /*0x1001c289a*/
                    {
                      v154 = v81; /*0x1001c2b1f*/
                      v97 = 1; /*0x1001c2b23*/
                      goto LABEL_171; /*0x1001c2b28*/
                    }
                  }
                  else
                  {
                    v83 = 1; /*0x1001c28a1*/
                  }
                  v154 = v83; /*0x1001c28a9*/
                  memcpy((void *)v83, v82, v81); /*0x1001c28b3*/
                  if ( 2LL * (_QWORD)v115 ) /*0x1001c28bf*/
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, v115, 1); /*0x1001c28d5*/
                  v84 = v155; /*0x1001c28dd*/
                  if ( v81 ) /*0x1001c28e1*/
                    v84 = v81; /*0x1001c28e1*/
                  v155 = v84; /*0x1001c28e5*/
                  v85 = v157; /*0x1001c28e9*/
                  if ( v81 ) /*0x1001c28ed*/
                    v85 = v154; /*0x1001c28ed*/
                  v86 = v81; /*0x1001c28f2*/
                  if ( !v81 ) /*0x1001c28ff*/
                    v86 = 0x8000000000000000LL; /*0x1001c28ff*/
                  v158 = (char *)v86; /*0x1001c2903*/
                  v157 = v85; /*0x1001c2915*/
                  if ( v156 ) /*0x1001c2919*/
                  {
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v156, 1); /*0x1001c2927*/
                    v85 = v157; /*0x1001c292c*/
                  }
                  if ( v111 ) /*0x1001c293a*/
                  {
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x1001c2948*/
                    v85 = v157; /*0x1001c294d*/
                  }
                  if ( v81 ) /*0x1001c2954*/
                  {
                    if ( v155 ) /*0x1001c295f*/
                    {
                      v87 = v151; /*0x1001c2961*/
                      if ( v151 == v149 ) /*0x1001c296f*/
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he87f7d6f2e49d34f(&v149); /*0x1001c2978*/
                      v88 = v150; /*0x1001c297d*/
                      v89 = 32 * v87; /*0x1001c2987*/
                      *(_DWORD *)(v150 + v89) = v59; /*0x1001c298b*/
                      *(_QWORD *)(v88 + v89 + 8) = v158; /*0x1001c2993*/
                      *(_QWORD *)(v88 + v89 + 16) = v157; /*0x1001c299c*/
                      *(_QWORD *)(v88 + v89 + 24) = v155; /*0x1001c29a5*/
                      v151 = v87 + 1; /*0x1001c29ad*/
                    }
                    else
                    {
                      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v158, 1); /*0x1001c29c2*/
                      v155 = 0; /*0x1001c29c7*/
                    }
                  }
                  continue; /*0x1001c29b4*/
                }
                v97 = 0; /*0x1001c2af2*/
LABEL_171:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v97, v154); /*0x1001c2af4*/
              }
              if ( v74 ) /*0x1001c27fd*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v74, 1); /*0x1001c280e*/
              if ( v111 ) /*0x1001c281d*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x1001c282f*/
            }
            continue; /*0x1001c2449*/
          }
          v71 = v68; /*0x1001c2667*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59); /*0x1001c266a*/
          v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v70, 1); /*0x1001c2677*/
          if ( v72 ) /*0x1001c267f*/
          {
            v73 = v72; /*0x1001c2685*/
            v68 = v71; /*0x1001c2688*/
            goto LABEL_114; /*0x1001c268b*/
          }
          v163 = (char *)v70; /*0x1001c2b14*/
          v96 = 1; /*0x1001c2b18*/
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v96, v163); /*0x1001c2aeb*/
      }
    }
LABEL_75:
    ; /*0x1001c2467*/
  }
  while ( !HIBYTE(v146) ); /*0x1001c246d*/
  v90 = v147; /*0x1001c29d4*/
  v147[2] = v151; /*0x1001c29e2*/
  v91 = v149; /*0x1001c29e6*/
  v90[1] = v150; /*0x1001c29f4*/
  *v90 = v91; /*0x1001c29f8*/
  if ( v123 ) /*0x1001c2a05*/
  {
    v92 = (4 * v123 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001c2a0f*/
    if ( v92 + v123 != -17 ) /*0x1001c2a1a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v122[-v92], v92 + v123 + 17, 16); /*0x1001c2a2b*/
  }
  if ( v136 != 0x8000000000000000LL && v136 ) /*0x1001c2a49*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1); /*0x1001c2a57*/
  if ( v128 ) /*0x1001c2a66*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1); /*0x1001c2a74*/
  if ( v131 ) /*0x1001c2a83*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x1001c2a91*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v105); /*0x1001c2a9d*/
  v93 = v161; /*0x1001c2aa2*/
  if ( v161 ) /*0x1001c2aa9*/
  {
    v94 = (_QWORD *)(v160 + 8); /*0x1001c2ab3*/
    do /*0x1001c2ac7*/
    {
      v95 = *(v94 - 1); /*0x1001c2acd*/
      if ( v95 ) /*0x1001c2ad4*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v94, v95, 1); /*0x1001c2ade*/
      v94 += 3; /*0x1001c2ac0*/
      --v93; /*0x1001c2ac4*/
    }
    while ( v93 ); /*0x1001c2ac7*/
  }
LABEL_48:
  if ( v159 ) /*0x1001c2160*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, 24 * v159, 8); /*0x1001c2173*/
  if ( v139 ) /*0x1001c2182*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v139, 1); /*0x1001c2190*/
  return result; /*0x1001c2195*/
}
