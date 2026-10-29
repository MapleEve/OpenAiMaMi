// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::codex_app_server::load_paginated_messages::h708cd05f9c40da3d; addr: 0x100af24b0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
_QWORD *__fastcall codexmate_lib::core::codex_app_server::load_paginated_messages::h708cd05f9c40da3d(
        _QWORD *a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  size_t v11; // rbx
  __int64 v12; // r12
  _QWORD *v13; // rax
  const void *v14; // r15
  void *v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r14
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  _QWORD *v31; // rax
  __int64 v32; // rdx
  size_t v33; // r15
  void *v34; // rax
  void *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  char v39; // al
  size_t v40; // rcx
  size_t v41; // r15
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // rax
  __int64 v48; // rdx
  _DWORD *v49; // rax
  __int64 v51; // r13
  __int64 v52; // r12
  __int64 v53; // r13
  char v54; // al
  unsigned __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // r12
  __int64 v63; // r15
  __int64 v64; // r14
  unsigned __int64 v65; // rbx
  __int64 v66; // r14
  __m128i *v67; // rax
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rcx
  unsigned __int64 v72; // rbx
  _QWORD *v73; // r14
  __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // r14
  __int64 v77; // rbx
  const __m128i *v78; // r15
  const __m128i *v80; // r12
  int v81; // r13d
  __int64 v82; // rax
  __int64 v83; // rsi
  unsigned __int64 v84; // rax
  __int64 v85; // r14
  __int64 v86; // r14
  _QWORD *v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rsi
  unsigned __int64 v91; // rcx
  __m128i *v92; // rdx
  __m128i *v93; // rax
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  bool v98; // cf
  __int64 v100; // r14
  __int64 v101; // rbx
  const __m128i *v102; // r15
  const __m128i *v104; // r12
  int v105; // r13d
  __int64 v106; // rax
  __int64 v107; // rsi
  unsigned __int64 v108; // rax
  __int64 v109; // r14
  __int64 v110; // r14
  __int64 v111; // [rsp+10h] [rbp-370h] BYREF
  _BYTE v112[96]; // [rsp+18h] [rbp-368h] BYREF
  __int64 v113; // [rsp+78h] [rbp-308h]
  __int64 v114; // [rsp+80h] [rbp-300h]
  __int64 v115; // [rsp+88h] [rbp-2F8h]
  char v116; // [rsp+90h] [rbp-2F0h] BYREF
  __int64 v117; // [rsp+98h] [rbp-2E8h]
  __int64 v118; // [rsp+A0h] [rbp-2E0h]
  __int64 v119; // [rsp+A8h] [rbp-2D8h]
  _QWORD v120[4]; // [rsp+B0h] [rbp-2D0h] BYREF
  _QWORD v121[8]; // [rsp+D0h] [rbp-2B0h] BYREF
  _QWORD v122[2]; // [rsp+110h] [rbp-270h] BYREF
  __int64 v123; // [rsp+120h] [rbp-260h] BYREF
  int v124; // [rsp+128h] [rbp-258h]
  __int64 v125; // [rsp+130h] [rbp-250h]
  size_t v126; // [rsp+138h] [rbp-248h]
  size_t v127; // [rsp+140h] [rbp-240h]
  __int64 v128; // [rsp+148h] [rbp-238h]
  __int64 v129; // [rsp+150h] [rbp-230h]
  _QWORD *v130; // [rsp+158h] [rbp-228h]
  __int64 v131; // [rsp+160h] [rbp-220h]
  __int64 v132; // [rsp+168h] [rbp-218h]
  _QWORD v133[12]; // [rsp+170h] [rbp-210h] BYREF
  __int64 v134; // [rsp+1D0h] [rbp-1B0h]
  _QWORD *v135; // [rsp+1D8h] [rbp-1A8h]
  __int64 v136; // [rsp+1E0h] [rbp-1A0h]
  __int64 v137; // [rsp+1E8h] [rbp-198h]
  _QWORD v138[16]; // [rsp+1F0h] [rbp-190h] BYREF
  const __m128i *v139; // [rsp+270h] [rbp-110h] BYREF
  __int64 v140; // [rsp+278h] [rbp-108h]
  __int64 v141; // [rsp+280h] [rbp-100h]
  __int64 v142; // [rsp+288h] [rbp-F8h]
  __int64 v143; // [rsp+290h] [rbp-F0h]
  __int64 v144; // [rsp+298h] [rbp-E8h]
  unsigned __int64 v145; // [rsp+2A0h] [rbp-E0h]
  unsigned __int64 v146; // [rsp+2A8h] [rbp-D8h]
  void *__src; // [rsp+2B0h] [rbp-D0h]
  __int64 v148; // [rsp+2B8h] [rbp-C8h] BYREF
  __int64 v149; // [rsp+2C0h] [rbp-C0h]
  __int64 v150; // [rsp+2C8h] [rbp-B8h]
  size_t v151; // [rsp+2D0h] [rbp-B0h]
  _QWORD *v152; // [rsp+2D8h] [rbp-A8h] BYREF
  __int64 (__fastcall *v153)(); // [rsp+2E0h] [rbp-A0h]
  __int128 v154; // [rsp+2E8h] [rbp-98h]
  __int64 v155; // [rsp+2F8h] [rbp-88h] BYREF
  _QWORD *v156; // [rsp+300h] [rbp-80h]
  __int64 v157; // [rsp+308h] [rbp-78h]
  void *v158; // [rsp+310h] [rbp-70h]
  void *v159; // [rsp+318h] [rbp-68h]
  __int64 v160; // [rsp+320h] [rbp-60h] BYREF
  __int64 v161; // [rsp+328h] [rbp-58h]
  unsigned __int64 v162; // [rsp+330h] [rbp-50h]
  unsigned __int64 v163; // [rsp+338h] [rbp-48h]
  unsigned __int64 v164; // [rsp+340h] [rbp-40h]
  _QWORD *v165; // [rsp+348h] [rbp-38h]
  size_t __n; // [rsp+350h] [rbp-30h]

  v146 = a6; /*0x100af24c4*/
  v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a4, a5); /*0x100af24d7*/
  if ( !v10 ) /*0x100af24df*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, a5, 0); /*0x100af24f4*/
    v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100af2503*/
    if ( !v13 ) /*0x100af250b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100af3742*/
    *(_QWORD *)((char *)v13 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x100af251b*/
    v13[1] = 0xBD83E88DB8E42044LL; /*0x100af2529*/
    *v13 = 0x49208BA8E7BFBAE7LL; /*0x100af2537*/
    *a1 = 9; /*0x100af253a*/
    a1[1] = 22; /*0x100af2542*/
    a1[2] = v13; /*0x100af254a*/
    a1[3] = 22; /*0x100af254e*/
    return a1; /*0x100af2556*/
  }
  v11 = v10; /*0x100af24e1*/
  if ( v10 < 0 ) /*0x100af24e4*/
  {
    v12 = 0; /*0x100af24e6*/
    goto LABEL_4; /*0x100af24e6*/
  }
  v14 = (const void *)v9; /*0x100af255b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, a5, v10); /*0x100af255e*/
  v12 = 1; /*0x100af2563*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x100af2571*/
  if ( !v15 ) /*0x100af2579*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x100af24e9*/
  __src = v15; /*0x100af257f*/
  memcpy(v15, v14, v11); /*0x100af258f*/
  codexmate_lib::core::codex_app_server::AppServerClient::connect::h7c1c93bed08b3597(v138); /*0x100af259e*/
  qmemcpy(v133, &v138[1], sizeof(v133)); /*0x100af25bd*/
  if ( v138[0] == 3 ) /*0x100af25c4*/
  {
    qmemcpy(a1, v133, 0x60u); /*0x100af25d5*/
    goto LABEL_110; /*0x100af25d5*/
  }
  v115 = v138[15]; /*0x100af25e4*/
  v114 = v138[14]; /*0x100af25f9*/
  v113 = v138[13]; /*0x100af2600*/
  qmemcpy(v112, v133, sizeof(v112)); /*0x100af261a*/
  v111 = v138[0]; /*0x100af261d*/
  v123 = std::time::Instant::now::hda76af2c3a449055(a2); /*0x100af2629*/
  v124 = v16; /*0x100af2630*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100af263d*/
  v18 = v17; /*0x100af263f*/
  v19 = *(_BYTE *)(v17 + 16) == 1; /*0x100af2642*/
  __n = v11; /*0x100af2646*/
  if ( v19 ) /*0x100af264a*/
  {
    v20 = *(_QWORD *)v17; /*0x100af2650*/
    v21 = *(_QWORD *)(v18 + 8); /*0x100af2653*/
  }
  else
  {
    v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a2); /*0x100af3704*/
    *(_QWORD *)v18 = v20; /*0x100af3709*/
    *(_QWORD *)(v18 + 8) = v21; /*0x100af370c*/
    *(_BYTE *)(v18 + 16) = 1; /*0x100af3710*/
  }
  v22 = v146; /*0x100af2657*/
  v165 = a1; /*0x100af265e*/
  *(_QWORD *)v18 = v20 + 1; /*0x100af2666*/
  v142 = 0; /*0x100af2670*/
  v141 = 0; /*0x100af267e*/
  v140 = 0; /*0x100af268c*/
  v139 = (const __m128i *)anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100af269a*/
  v143 = v20; /*0x100af26a1*/
  v144 = v21; /*0x100af26a8*/
  v23 = -1; /*0x100af26b5*/
  if ( v22 != -1 ) /*0x100af26bc*/
    v23 = v22 + 1; /*0x100af26bc*/
  v24 = 512; /*0x100af26c7*/
  if ( v23 < 0x200 ) /*0x100af26cc*/
    v24 = v23; /*0x100af26cc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100af26d7*/
    &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
    v22,
    v21);
  v25 = 8; /*0x100af26dc*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((unsigned int)((_DWORD)v24 << 6), 8); /*0x100af26e4*/
  if ( !v26 ) /*0x100af26ec*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, (unsigned int)((_DWORD)v24 << 6)); /*0x100af3760*/
  v160 = v24; /*0x100af26fc*/
  v161 = v26; /*0x100af2700*/
  v162 = 0; /*0x100af2704*/
  v163 = 0x8000000000000000LL; /*0x100af2721*/
  v27 = 0; /*0x100af2725*/
  v145 = v23; /*0x100af2728*/
  while ( 1 ) /*0x100af2767*/
  {
    if ( (unsigned __int64)std::time::Instant::elapsed::h457f209775ed485c(&v123) > 0x1D ) /*0x100af2770*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v123, v25, v29); /*0x100af2e6b*/
      v64 = 62; /*0x100af2e70*/
      _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1); /*0x100af2e80*/
      if ( _RAX ) /*0x100af2e88*/
      {
        *(_QWORD *)(_RAX + 54) = 0x9099E98AB8E4A885LL; /*0x100af2e98*/
        *(_QWORD *)(_RAX + 48) = 0xA885E589AEE592A7LL; /*0x100af2ea6*/
        *(_QWORD *)(_RAX + 40) = 0xE72030332087BFE8LL; /*0x100af2eb4*/
        *(_QWORD *)(_RAX + 32) = 0x85B6E8968FE5BBAFLL; /*0x100af2ec2*/
        *(_QWORD *)(_RAX + 24) = 0xE8B9AEE58586E58BLL; /*0x100af2ed0*/
        *(_QWORD *)(_RAX + 16) = 0xA8E7BFBAE7207265LL; /*0x100af2ede*/
        qmemcpy((void *)_RAX, "ChatGPT app-serv", 16); /*0x100af2efa*/
        a1 = v165; /*0x100af2efd*/
        *v165 = 10; /*0x100af2f01*/
        a1[1] = 62; /*0x100af2f09*/
        a1[2] = _RAX; /*0x100af2f11*/
        a1[3] = 62; /*0x100af2f15*/
        goto LABEL_87; /*0x100af2f1d*/
      }
      goto LABEL_142; /*0x100af2e88*/
    }
    v125 = v27; /*0x100af2776*/
    v148 = 0; /*0x100af277d*/
    v150 = 0; /*0x100af2788*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v123, v25, v29); /*0x100af2793*/
    v30 = 8; /*0x100af2798*/
    v31 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100af27a8*/
    if ( !v31 ) /*0x100af27b0*/
      goto LABEL_137; /*0x100af27b0*/
    *v31 = 0x6449646165726874LL; /*0x100af27c3*/
    v155 = 8; /*0x100af27c7*/
    v156 = v31; /*0x100af27d2*/
    v157 = 8; /*0x100af27d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1, v32); /*0x100af27de*/
    v33 = __n; /*0x100af27e8*/
    v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100af27ef*/
    if ( !v34 ) /*0x100af27f7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v33); /*0x100af3731*/
    v35 = v34; /*0x100af27fd*/
    memcpy(v34, __src, v33); /*0x100af280d*/
    LOBYTE(v138[0]) = 3; /*0x100af2812*/
    v138[1] = v33; /*0x100af2819*/
    v138[2] = v35; /*0x100af2820*/
    v138[3] = v33; /*0x100af2827*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v152, &v148, &v155, v138); /*0x100af2846*/
    if ( (_BYTE)v152 != 6 ) /*0x100af2852*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v152); /*0x100af285b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v152, &v148, v36); /*0x100af2860*/
    v30 = 6; /*0x100af2865*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100af2875*/
    if ( !v37 ) /*0x100af287d*/
      goto LABEL_137; /*0x100af287d*/
    *(_WORD *)(v37 + 4) = 29295; /*0x100af2886*/
    *(_DWORD *)v37 = 1936880995; /*0x100af288c*/
    v155 = 6; /*0x100af2892*/
    v156 = (_QWORD *)v37; /*0x100af289d*/
    v157 = 6; /*0x100af28a1*/
    if ( v163 == 0x8000000000000000LL ) /*0x100af28b7*/
    {
      v39 = 0; /*0x100af28b9*/
      v40 = v126; /*0x100af28bb*/
      v41 = v127; /*0x100af28c2*/
    }
    else
    {
      if ( (v151 & 0x8000000000000000LL) != 0LL ) /*0x100af28d3*/
      {
        v42 = 0; /*0x100af2e54*/
LABEL_61:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v151); /*0x100af2e57*/
      }
      if ( v151 ) /*0x100af28d9*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v38); /*0x100af28db*/
        v42 = 1; /*0x100af28e0*/
        v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v151, 1); /*0x100af28f2*/
        if ( !v43 ) /*0x100af28fa*/
          goto LABEL_61; /*0x100af28fa*/
      }
      else
      {
        v43 = 1; /*0x100af2901*/
      }
      v128 = v43; /*0x100af2906*/
      v41 = v151; /*0x100af2914*/
      memcpy((void *)v43, v159, v151); /*0x100af291e*/
      v39 = 3; /*0x100af2923*/
      v40 = v41; /*0x100af2925*/
    }
    LOBYTE(v138[0]) = v39; /*0x100af2928*/
    v127 = v41; /*0x100af292e*/
    v138[1] = v41; /*0x100af2935*/
    v138[2] = v128; /*0x100af2943*/
    v126 = v40; /*0x100af294a*/
    v138[3] = v40; /*0x100af2951*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v152, &v148, &v155, v138); /*0x100af2970*/
    if ( (_BYTE)v152 != 6 ) /*0x100af297c*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v152); /*0x100af2985*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v152, &v148, v44); /*0x100af298a*/
    v30 = 5; /*0x100af298f*/
    v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100af299f*/
    if ( !v45 ) /*0x100af29a7*/
      goto LABEL_137; /*0x100af29a7*/
    *(_BYTE *)(v45 + 4) = 116; /*0x100af29ad*/
    *(_DWORD *)v45 = 1768778092; /*0x100af29b1*/
    v155 = 5; /*0x100af29b7*/
    v156 = (_QWORD *)v45; /*0x100af29c2*/
    v157 = 5; /*0x100af29c6*/
    LOBYTE(v138[0]) = 2; /*0x100af29ce*/
    v138[1] = 0; /*0x100af29d5*/
    v138[2] = 100; /*0x100af29e0*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v152, &v148, &v155, v138); /*0x100af2a03*/
    if ( (_BYTE)v152 != 6 ) /*0x100af2a0f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v152); /*0x100af2a18*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v152, &v148, v46); /*0x100af2a1d*/
    v30 = 13; /*0x100af2a22*/
    v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100af2a32*/
    if ( !v47 ) /*0x100af2a3a*/
LABEL_137:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v30); /*0x100af3722*/
    qmemcpy(v47, "sortDirection", 13); /*0x100af2a5b*/
    v155 = 13; /*0x100af2a5e*/
    v156 = v47; /*0x100af2a69*/
    v157 = 13; /*0x100af2a6d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1, v48); /*0x100af2a75*/
    v49 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100af2a84*/
    if ( !v49 ) /*0x100af2a8c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100af3751*/
    *v49 = 1668506980; /*0x100af2a92*/
    LOBYTE(v138[0]) = 3; /*0x100af2a98*/
    v138[1] = 4; /*0x100af2a9f*/
    v138[2] = v49; /*0x100af2aaa*/
    v138[3] = 4; /*0x100af2ab1*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v152, &v148, &v155, v138); /*0x100af2ad4*/
    if ( (_BYTE)v152 != 6 ) /*0x100af2ae0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v152); /*0x100af2ae9*/
    v119 = v150; /*0x100af2afc*/
    v118 = v149; /*0x100af2b0e*/
    v117 = v148; /*0x100af2b12*/
    v116 = 5; /*0x100af2b15*/
    codexmate_lib::core::codex_app_server::AppServerClient::request_rpc_with_timeout::h28ed6dc4315e98a9( /*0x100af2b46*/
      (unsigned int)v138,
      (unsigned int)&v111,
      (unsigned int)"thread/items/list",
      17,
      (unsigned int)&v116,
      10,
      0);
    _RAX = v138[0]; /*0x100af2b4b*/
    if ( v138[0] != 12 ) /*0x100af2b56*/
    {
      v122[0] = "thread/items/list"; /*0x100af2f29*/
      v122[1] = 17; /*0x100af2f30*/
      if ( LODWORD(v138[0]) == 11 ) /*0x100af2f3e*/
      {
        v150 = v138[5]; /*0x100af2f4b*/
        v149 = v138[4]; /*0x100af2f60*/
        v148 = v138[3]; /*0x100af2f67*/
        v152 = v122; /*0x100af2f75*/
        v153 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100af2f83*/
        *(_QWORD *)&v154 = &v148; /*0x100af2f91*/
        *((_QWORD *)&v154 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100af2f9f*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v155, &anon_0f4958e580c48b75b8f6e2e6da3e4224_393, &v152); /*0x100af2fbb*/
        a1 = v165; /*0x100af2fc0*/
        v134 = v155; /*0x100af2fcf*/
        v135 = v156; /*0x100af2fd6*/
        v136 = v157; /*0x100af2fe1*/
        if ( v148 ) /*0x100af2ff2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v148, 1); /*0x100af3000*/
        _RAX = 10; /*0x100af3005*/
      }
      else
      {
        v137 = v138[4]; /*0x100af321d*/
        v136 = v138[3]; /*0x100af3228*/
        v135 = (_QWORD *)v138[2]; /*0x100af3236*/
        v134 = v138[1]; /*0x100af323d*/
        v133[0] = v138[5]; /*0x100af3252*/
        v133[1] = v138[6]; /*0x100af3259*/
        v133[2] = v138[7]; /*0x100af3267*/
        v133[3] = v138[8]; /*0x100af3275*/
        v133[4] = v138[9]; /*0x100af3283*/
        v133[5] = v138[10]; /*0x100af3291*/
        v133[6] = v138[11]; /*0x100af329f*/
        a1 = v165; /*0x100af32a6*/
      }
      v129 = v134; /*0x100af32b8*/
      v130 = v135; /*0x100af32bf*/
      v131 = v136; /*0x100af32cd*/
      v132 = v137; /*0x100af32db*/
      a1[11] = v133[6]; /*0x100af32e9*/
      a1[10] = v133[5]; /*0x100af32f4*/
      a1[9] = v133[4]; /*0x100af32ff*/
      a1[8] = v133[3]; /*0x100af330a*/
      a1[7] = v133[2]; /*0x100af3315*/
      v70 = v133[0]; /*0x100af3319*/
      a1[6] = v133[1]; /*0x100af3327*/
      a1[5] = v70; /*0x100af332b*/
      a1[4] = v132; /*0x100af3336*/
      a1[3] = v131; /*0x100af3341*/
      v71 = v129; /*0x100af3345*/
      a1[2] = v130; /*0x100af3353*/
      a1[1] = v71; /*0x100af3357*/
      *a1 = _RAX; /*0x100af335b*/
      goto LABEL_87; /*0x100af335b*/
    }
    v129 = v138[1]; /*0x100af2b72*/
    v130 = (_QWORD *)v138[2]; /*0x100af2b79*/
    v120[0] = v138[1]; /*0x100af2b80*/
    v120[1] = v138[2]; /*0x100af2b87*/
    v120[2] = v138[3]; /*0x100af2b8e*/
    v120[3] = v138[4]; /*0x100af2b95*/
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::hc8a72bc174390cfb( /*0x100af2bbf*/
      v138,
      v120,
      &unk_1017950AA,
      15,
      &off_101ABC298,
      2);
    v51 = v138[1]; /*0x100af2bcb*/
    if ( v138[0] == 0x8000000000000000LL ) /*0x100af2bdf*/
    {
      _RAX = (__int64)v165; /*0x100af300f*/
      *v165 = 3; /*0x100af3013*/
      *(_QWORD *)(_RAX + 8) = v51; /*0x100af301a*/
      a1 = (_QWORD *)_RAX; /*0x100af301e*/
      goto LABEL_87; /*0x100af3021*/
    }
    v164 = v138[3]; /*0x100af2bf3*/
    v158 = (void *)v138[4]; /*0x100af2bfe*/
    v151 = v138[5]; /*0x100af2c09*/
    v52 = v138[1] + 32LL * v138[2]; /*0x100af2c17*/
    v133[0] = v138[1]; /*0x100af2c1a*/
    v133[1] = v138[1]; /*0x100af2c21*/
    v133[2] = v138[0]; /*0x100af2c28*/
    v133[3] = v52; /*0x100af2c2f*/
    if ( v138[2] ) /*0x100af2c39*/
    {
      v53 = v138[1] + 32LL; /*0x100af2c3f*/
      while ( 1 ) /*0x100af2c50*/
      {
        v54 = *(_BYTE *)(v53 - 32); /*0x100af2c50*/
        *(_QWORD *)((char *)&v154 + 7) = *(_QWORD *)(v53 - 8); /*0x100af2c59*/
        *(_QWORD *)&v154 = *(_QWORD *)(v53 - 15); /*0x100af2c64*/
        v153 = *(__int64 (__fastcall **)())(v53 - 23); /*0x100af2c6f*/
        v152 = *(_QWORD **)(v53 - 31); /*0x100af2c7a*/
        if ( v54 == 6 ) /*0x100af2c83*/
          goto LABEL_53; /*0x100af2c83*/
        LOBYTE(v138[0]) = v54; /*0x100af2c89*/
        v138[3] = *(_QWORD *)((char *)&v154 + 7); /*0x100af2c96*/
        *(_OWORD *)((char *)&v138[1] + 1) = __PAIR128__(v154, (unsigned __int64)v153); /*0x100af2cb3*/
        *(_QWORD *)((char *)v138 + 1) = v152; /*0x100af2cb7*/
        codexmate_lib::core::codex_app_server::display_message_from_item::h69fe05ebbf57f5ae(v121, v138, 0, v153); /*0x100af2cc6*/
        if ( LODWORD(v121[0]) != 2 ) /*0x100af2cd2*/
        {
          v55 = v162; /*0x100af2cd8*/
          if ( v162 == v160 ) /*0x100af2ce0*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hed8876ce805bde4c(&v160); /*0x100af2ce6*/
          v56 = v161; /*0x100af2ceb*/
          v57 = v55 << 6; /*0x100af2cf2*/
          *(_QWORD *)(v161 + v57 + 56) = v121[7]; /*0x100af2cfd*/
          *(_QWORD *)(v56 + v57 + 48) = v121[6]; /*0x100af2d09*/
          *(_QWORD *)(v56 + v57 + 40) = v121[5]; /*0x100af2d15*/
          *(_QWORD *)(v56 + v57 + 32) = v121[4]; /*0x100af2d21*/
          *(_QWORD *)(v56 + v57 + 24) = v121[3]; /*0x100af2d2d*/
          *(_QWORD *)(v56 + v57 + 16) = v121[2]; /*0x100af2d39*/
          v58 = v121[0]; /*0x100af2d3e*/
          *(_QWORD *)(v56 + v57 + 8) = v121[1]; /*0x100af2d4c*/
          *(_QWORD *)(v56 + v57) = v58; /*0x100af2d51*/
          v162 = v55 + 1; /*0x100af2d58*/
          if ( v55 + 1 >= v145 ) /*0x100af2d63*/
            break; /*0x100af2d63*/
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v138); /*0x100af2d6c*/
        v59 = v53 - 32; /*0x100af2d71*/
        v53 += 32; /*0x100af2d75*/
        if ( v59 + 32 == v52 ) /*0x100af2d80*/
        {
          v53 = v52; /*0x100af2d86*/
LABEL_53:
          v133[1] = v53; /*0x100af2d89*/
          goto LABEL_54; /*0x100af2d89*/
        }
      }
      v133[1] = v53; /*0x100af2e40*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v138); /*0x100af2e4a*/
    }
LABEL_54:
    v28 = v133; /*0x100af2d90*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h46d3f3a9f6e6f870(v133); /*0x100af2d97*/
    v61 = v162; /*0x100af2d9c*/
    v62 = v145; /*0x100af2da0*/
    a1 = v165; /*0x100af2daa*/
    v25 = v164; /*0x100af2dae*/
    if ( v162 >= v145 || v164 == 0x8000000000000000LL ) /*0x100af2dc5*/
      break; /*0x100af2dc5*/
    v133[0] = v164; /*0x100af2dcb*/
    v133[1] = v158; /*0x100af2dd6*/
    v133[2] = v151; /*0x100af2de4*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v138, v133); /*0x100af2df5*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(&v139, v138) ) /*0x100af2e04*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v139, v138, v60); /*0x100af305c*/
      _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x100af306b*/
      if ( !_RAX ) /*0x100af3073*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61); /*0x100af3780*/
      *(_QWORD *)(_RAX + 53) = 0x87A0E6B8B8E6B5A1LL; /*0x100af3083*/
      *(_QWORD *)(_RAX + 48) = 0xE6B5A1E98688E5B9LL; /*0x100af3091*/
      *(_QWORD *)(_RAX + 40) = 0xAEE58586E58BA8E7LL; /*0x100af309f*/
      *(_QWORD *)(_RAX + 32) = 0xBFBAE7849AE78DA4LL; /*0x100af30ad*/
      *(_QWORD *)(_RAX + 24) = 0xE58D87E986BAE49ELL; /*0x100af30bb*/
      *(_QWORD *)(_RAX + 16) = 0x9BE594BFE8207265LL; /*0x100af30c9*/
      qmemcpy((void *)_RAX, "ChatGPT app-serv", 16); /*0x100af30e5*/
      *a1 = 10; /*0x100af30e8*/
      a1[1] = 61; /*0x100af30f0*/
      a1[2] = _RAX; /*0x100af30f8*/
      a1[3] = 61; /*0x100af30fc*/
      if ( v164 ) /*0x100af310b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, v164, 1); /*0x100af311a*/
      goto LABEL_87; /*0x100af311f*/
    }
    v25 = v163; /*0x100af2e11*/
    v63 = v125; /*0x100af2e20*/
    if ( 2 * v163 ) /*0x100af2e15*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v163, 1); /*0x100af2e36*/
    v27 = v63 + 1; /*0x100af2740*/
    v159 = v158; /*0x100af2747*/
    v163 = v164; /*0x100af274f*/
    v28 = &v123; /*0x100af275a*/
    if ( v27 == 1000 ) /*0x100af2761*/
    {
      v65 = v162; /*0x100af3124*/
      v159 = v158; /*0x100af3128*/
      v163 = v164; /*0x100af312c*/
      a1 = v165; /*0x100af3130*/
LABEL_77:
      if ( v65 >= v62 ) /*0x100af3137*/
      {
        v66 = 0; /*0x100af31e2*/
        goto LABEL_81; /*0x100af31e2*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v25, v60); /*0x100af313d*/
      v64 = 55; /*0x100af3142*/
      _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1); /*0x100af3152*/
      if ( _RAX ) /*0x100af315a*/
      {
        *(_QWORD *)(_RAX + 47) = 0x9099E98AB8E4A885LL; /*0x100af316a*/
        *(_QWORD *)(_RAX + 40) = 0x85E589AEE587BFE8LL; /*0x100af3178*/
        *(_QWORD *)(_RAX + 32) = 0x85B6E8B5A1E98688LL; /*0x100af3186*/
        *(_QWORD *)(_RAX + 24) = 0xE5B9AEE58586E58BLL; /*0x100af3194*/
        *(_QWORD *)(_RAX + 16) = 0xA8E7BFBAE7207265LL; /*0x100af31a2*/
        qmemcpy((void *)_RAX, "ChatGPT app-serv", 16); /*0x100af31be*/
        *a1 = 10; /*0x100af31c1*/
        a1[1] = 55; /*0x100af31c9*/
        a1[2] = _RAX; /*0x100af31d1*/
        a1[3] = 55; /*0x100af31d5*/
LABEL_87:
        v72 = v162; /*0x100af335f*/
        if ( v162 ) /*0x100af3366*/
        {
          v73 = (_QWORD *)(v161 + 48); /*0x100af336c*/
          do /*0x100af3387*/
          {
            v74 = *(v73 - 4); /*0x100af3389*/
            if ( v74 ) /*0x100af3390*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v73 - 3), v74, 1); /*0x100af339b*/
            v75 = *(v73 - 1); /*0x100af33a0*/
            if ( v75 ) /*0x100af33a7*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v73, v75, 1); /*0x100af33b1*/
            v73 += 8; /*0x100af3380*/
            --v72; /*0x100af3384*/
          }
          while ( v72 ); /*0x100af3387*/
        }
        if ( v160 ) /*0x100af33bf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, v160 << 6, 8); /*0x100af33ce*/
        v76 = v140; /*0x100af33d3*/
        if ( v140 ) /*0x100af33dd*/
        {
          v77 = v142; /*0x100af33e3*/
          if ( v142 ) /*0x100af33ed*/
          {
            v78 = v139; /*0x100af33f3*/
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v139)); /*0x100af3404*/
            v80 = v139 + 1; /*0x100af3407*/
            do /*0x100af3420*/
            {
              if ( !(_WORD)_R13D ) /*0x100af3426*/
              {
                do /*0x100af344d*/
                {
                  v81 = _mm_movemask_epi8(_mm_load_si128(v80)); /*0x100af3436*/
                  v78 -= 24; /*0x100af343b*/
                  ++v80; /*0x100af3442*/
                }
                while ( v81 == 0xFFFF ); /*0x100af344d*/
                _R13D = ~v81; /*0x100af344f*/
              }
              __asm { tzcnt eax, r13d } /*0x100af3452*/
              v82 = -3 * _RAX; /*0x100af345a*/
              v83 = *((_QWORD *)&v78[-1] + v82 - 1); /*0x100af345e*/
              if ( v83 ) /*0x100af3466*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78[-1].i64[v82], v83, 1); /*0x100af3475*/
              --v77; /*0x100af3410*/
              _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100af3417*/
              _R13D &= _R13D - 1; /*0x100af341a*/
            }
            while ( v77 ); /*0x100af3420*/
          }
          v84 = (24 * v76 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100af3488*/
          v85 = v84 + v76; /*0x100af348c*/
          v19 = v85 == -17; /*0x100af348f*/
          v86 = v85 + 17; /*0x100af348f*/
          a1 = v165; /*0x100af3493*/
          if ( !v19 ) /*0x100af3497*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v139 - v84, v86, 16); /*0x100af34ab*/
        }
        if ( 2 * v163 ) /*0x100af34b4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v163, 1); /*0x100af34ca*/
        goto LABEL_109; /*0x100af34ca*/
      }
LABEL_142:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v64); /*0x100af3767*/
    }
  }
  v65 = v162; /*0x100af302e*/
  if ( 2 * v164 ) /*0x100af3026*/
  {
    v28 = (__int64 *)v158; /*0x100af303b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, v164, 1); /*0x100af303f*/
    v65 = v162; /*0x100af3044*/
  }
  v66 = 1; /*0x100af3048*/
  if ( v61 >= v62 ) /*0x100af3051*/
    goto LABEL_77; /*0x100af3051*/
LABEL_81:
  v67 = (__m128i *)v161; /*0x100af31e5*/
  v68 = v65 - v146; /*0x100af31f3*/
  if ( v65 >= v146 ) /*0x100af31f6*/
  {
    v162 = v146; /*0x100af3200*/
    if ( v65 == v146 ) /*0x100af3204*/
    {
      v69 = v146; /*0x100af320a*/
    }
    else
    {
      v88 = (_QWORD *)((v146 << 6) + v161 + 48); /*0x100af350c*/
      do /*0x100af351a*/
      {
        v89 = *(v88 - 4); /*0x100af351c*/
        if ( v89 ) /*0x100af3524*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v88 - 3), v89, 1); /*0x100af3530*/
        v90 = *(v88 - 1); /*0x100af3535*/
        if ( v90 ) /*0x100af353d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v88, v90, 1); /*0x100af3548*/
        v88 += 8; /*0x100af3513*/
        --v68; /*0x100af3517*/
      }
      while ( v68 ); /*0x100af351a*/
      v67 = (__m128i *)v161; /*0x100af354f*/
      v69 = v162; /*0x100af3553*/
    }
  }
  else
  {
    v69 = v65; /*0x100af31f8*/
  }
  if ( v69 >= 2 ) /*0x100af355b*/
  {
    v91 = v69 >> 1; /*0x100af3560*/
    v92 = &v67[4 * v69 - 1]; /*0x100af3567*/
    v93 = v67 + 3; /*0x100af356c*/
    do /*0x100af35b9*/
    {
      v94 = v93[-3]; /*0x100af3570*/
      v93[-3] = v92[-3]; /*0x100af3578*/
      v92[-3] = v94; /*0x100af357c*/
      v95 = v93[-2]; /*0x100af3580*/
      v93[-2] = v92[-2]; /*0x100af3588*/
      v92[-2] = v95; /*0x100af358c*/
      v96 = v93[-1]; /*0x100af3590*/
      v93[-1] = v92[-1]; /*0x100af3598*/
      v92[-1] = v96; /*0x100af359c*/
      v97 = _mm_loadu_si128(v93); /*0x100af35a0*/
      *v93 = *v92; /*0x100af35a7*/
      *v92 = v97; /*0x100af35aa*/
      v93 += 4; /*0x100af35ae*/
      v92 -= 4; /*0x100af35b2*/
      --v91; /*0x100af35b6*/
    }
    while ( v91 ); /*0x100af35b9*/
  }
  v98 = v65 < v146; /*0x100af35bb*/
  v19 = v65 == v146; /*0x100af35bb*/
  a1[5] = v162; /*0x100af35c6*/
  _RAX = v160; /*0x100af35ca*/
  a1[4] = v161; /*0x100af35d2*/
  a1[3] = _RAX; /*0x100af35d6*/
  a1[1] = v66; /*0x100af35da*/
  a1[2] = v65; /*0x100af35de*/
  *((_BYTE *)a1 + 48) = !v98 && !v19; /*0x100af35e2*/
  *a1 = 11; /*0x100af35e7*/
  v100 = v140; /*0x100af35ef*/
  if ( v140 ) /*0x100af35f9*/
  {
    v101 = v142; /*0x100af35ff*/
    if ( v142 ) /*0x100af3609*/
    {
      v102 = v139; /*0x100af360f*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v139)); /*0x100af3620*/
      v104 = v139 + 1; /*0x100af3623*/
      do /*0x100af3639*/
      {
        if ( !(_WORD)_R13D ) /*0x100af363f*/
        {
          do /*0x100af366d*/
          {
            v105 = _mm_movemask_epi8(_mm_load_si128(v104)); /*0x100af3656*/
            v102 -= 24; /*0x100af365b*/
            ++v104; /*0x100af3662*/
          }
          while ( v105 == 0xFFFF ); /*0x100af366d*/
          _R13D = ~v105; /*0x100af366f*/
        }
        __asm { tzcnt eax, r13d } /*0x100af3672*/
        v106 = -3 * _RAX; /*0x100af367a*/
        v107 = *((_QWORD *)&v102[-1] + v106 - 1); /*0x100af367e*/
        if ( v107 ) /*0x100af3686*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102[-1].i64[v106], v107, 1); /*0x100af3695*/
        --v101; /*0x100af3629*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100af3630*/
        _R13D &= _R13D - 1; /*0x100af3633*/
      }
      while ( v101 ); /*0x100af3639*/
    }
    v108 = (24 * v100 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100af36a8*/
    v109 = v108 + v100; /*0x100af36ac*/
    v19 = v109 == -17; /*0x100af36af*/
    v110 = v109 + 17; /*0x100af36af*/
    a1 = v165; /*0x100af36b3*/
    if ( !v19 ) /*0x100af36b7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v139 - v108, v110, 16); /*0x100af36cb*/
  }
  if ( 2 * v163 ) /*0x100af36d4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v163, 1); /*0x100af36ea*/
LABEL_109:
  v11 = __n; /*0x100af34cf*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerClient$GT$::h82ca92cb16e6ce22(&v111); /*0x100af34da*/
LABEL_110:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v11, 1); /*0x100af34df*/
  return a1; /*0x100af34f6*/
}