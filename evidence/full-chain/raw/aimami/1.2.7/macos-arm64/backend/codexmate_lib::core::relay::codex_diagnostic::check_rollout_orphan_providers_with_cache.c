// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers_with_cache::h0042e7a3edb22fbb; addr: 0x100890240; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
double __fastcall codexmate_lib::core::relay::codex_diagnostic::check_rollout_orphan_providers_with_cache::h0042e7a3edb22fbb(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        const __m128i ***a5,
        __m128i si128)
{
  __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  const __m128i *v17; // rdx
  unsigned __int64 v18; // r12
  const __m128i ***v19; // rsi
  const __m128i **v20; // rdi
  const __m128i *v21; // r14
  const __m128i *v22; // rbx
  unsigned __int64 v23; // r13
  void *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  void *v27; // r15
  _DWORD *v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // r12
  __int64 v31; // rax
  __int64 v32; // r13
  const __m128i *v33; // rax
  unsigned __int64 v34; // rbx
  const void *v35; // r15
  size_t v36; // r14
  __int64 v37; // r12
  char v38; // al
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  const __m128i ***v41; // r14
  const __m128i ***v42; // r12
  size_t v43; // r15
  const __m128i ***v44; // r15
  __int64 v45; // r15
  unsigned __int64 v46; // r14
  const __m128i **v47; // rcx
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  const char *v50; // r14
  _QWORD *v51; // r15
  const char *v52; // rsi
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  void *v55; // rax
  void *v56; // r14
  void **v57; // rsi
  unsigned __int64 v58; // r14
  _QWORD *v59; // r12
  __int64 v60; // rsi
  unsigned __int64 v61; // r12
  _QWORD *v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  _QWORD *v65; // r14
  __int64 v66; // r12
  bool v67; // r13
  const char *v68; // r14
  void *v69; // rax
  __int64 v70; // rdx
  void *v71; // r15
  size_t v72; // r12
  void *v73; // rax
  void *v74; // r13
  __int64 v75; // r14
  _QWORD *v76; // rdx
  __int64 v77; // rax
  const __m128i *v79; // r15
  const __m128i *v80; // r12
  const __m128i *v82; // r13
  int v83; // r14d
  __int64 v84; // rax
  __int64 v85; // rsi
  unsigned __int64 v86; // rax
  __int64 v88; // r15
  const __m128i *v89; // r12
  const __m128i *v91; // r13
  int v92; // r14d
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rax
  __int64 v97; // r15
  const __m128i *v98; // r12
  const __m128i *v100; // r13
  int v101; // r14d
  __int64 v102; // rax
  __int64 v103; // rsi
  unsigned __int64 v104; // rax
  const __m128i *v105; // r14
  _QWORD v107[3]; // [rsp+8h] [rbp-258h] BYREF
  __int16 v108; // [rsp+20h] [rbp-240h]
  const __m128i *v109; // [rsp+28h] [rbp-238h]
  _QWORD v110[3]; // [rsp+30h] [rbp-230h] BYREF
  const __m128i *v111[12]; // [rsp+48h] [rbp-218h] BYREF
  const __m128i *v112; // [rsp+A8h] [rbp-1B8h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-1B0h]
  const __m128i ***v114; // [rsp+B8h] [rbp-1A8h]
  const __m128i **v115; // [rsp+C0h] [rbp-1A0h]
  __int8 *v116; // [rsp+C8h] [rbp-198h]
  const __m128i **v117; // [rsp+D0h] [rbp-190h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-188h]
  unsigned __int64 v119; // [rsp+E0h] [rbp-180h]
  const __m128i *v120; // [rsp+E8h] [rbp-178h]
  const __m128i *v121; // [rsp+F0h] [rbp-170h]
  const __m128i *v122; // [rsp+F8h] [rbp-168h]
  void **v123; // [rsp+100h] [rbp-160h] BYREF
  __int64 v124; // [rsp+108h] [rbp-158h]
  __int64 v125; // [rsp+110h] [rbp-150h]
  const __m128i *v126; // [rsp+118h] [rbp-148h] BYREF
  __int64 (__fastcall **v127)(); // [rsp+120h] [rbp-140h]
  __int64 v128; // [rsp+128h] [rbp-138h]
  __int64 v129; // [rsp+130h] [rbp-130h]
  __int64 v130; // [rsp+138h] [rbp-128h]
  const __m128i *v131; // [rsp+140h] [rbp-120h]
  const __m128i *v132; // [rsp+148h] [rbp-118h] BYREF
  __int64 v133; // [rsp+150h] [rbp-110h]
  __int64 v134; // [rsp+158h] [rbp-108h]
  __int64 v135; // [rsp+160h] [rbp-100h]
  __int64 v136; // [rsp+178h] [rbp-E8h] BYREF
  void *__s1; // [rsp+180h] [rbp-E0h]
  void *v138; // [rsp+188h] [rbp-D8h]
  _QWORD v139[13]; // [rsp+190h] [rbp-D0h] BYREF
  _QWORD *v140; // [rsp+1F8h] [rbp-68h] BYREF
  const __m128i *v141; // [rsp+200h] [rbp-60h]
  const __m128i **v142; // [rsp+208h] [rbp-58h] BYREF
  __int64 (__fastcall *v143)(); // [rsp+210h] [rbp-50h]
  unsigned __int64 v144; // [rsp+218h] [rbp-48h]
  const __m128i *v145; // [rsp+220h] [rbp-40h]
  const __m128i ***v146; // [rsp+228h] [rbp-38h]
  __int64 i64; // [rsp+230h] [rbp-30h]

  v146 = a5; /*0x100890254*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::hdcc4745326ed4935(v139, a2); /*0x10089026b*/
  v9 = v139[2]; /*0x100890270*/
  if ( !v139[2] ) /*0x10089027a*/
  {
    if ( v139[0] ) /*0x10089043f*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139[1], 24LL * v139[0], 8); /*0x100890455*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100890487*/
      a1,
      "rollout_orphan_providersconfig-backups",
      24,
      &unk_10178A885,
      47);
    return *(double *)si128.i64; /*0x100890487*/
  }
  i64 = a3; /*0x100890280*/
  v140 = a1; /*0x100890284*/
  v10 = v139[1]; /*0x100890288*/
  v11 = (_QWORD *)(v139[1] + 8LL); /*0x10089028f*/
  do /*0x1008902a7*/
  {
    v12 = *(v11 - 1); /*0x1008902a9*/
    if ( v12 ) /*0x1008902b0*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x1008902ba*/
    v11 += 3; /*0x1008902a0*/
    --v9; /*0x1008902a4*/
  }
  while ( v9 ); /*0x1008902a7*/
  if ( v139[0] ) /*0x1008902cb*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24LL * v139[0], 8); /*0x1008902dd*/
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h77c8e8996f4c34a7(v111, a2); /*0x1008902ec*/
  if ( LODWORD(v111[0]) != 11 ) /*0x1008902f8*/
  {
    qmemcpy(v139, v111, 0x60u); /*0x10089049f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v139[12], &v112, v13); /*0x1008904a2*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1008904b1*/
    v26 = v140; /*0x1008904b9*/
    if ( !v24 ) /*0x1008904bd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100891080*/
    v27 = v24; /*0x1008904c3*/
    qmemcpy(v24, "rollout_orphan_providers", 24); /*0x1008904ec*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v25); /*0x1008904ef*/
    v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008904fe*/
    if ( !v28 ) /*0x100890506*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100891091*/
    v30 = v28; /*0x10089050c*/
    *(_DWORD *)((char *)v28 + 3) = 1735289198; /*0x10089050f*/
    *v28 = 1852989815; /*0x100890516*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v29); /*0x10089051c*/
    v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x10089052b*/
    if ( !v31 ) /*0x100890533*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1008910a2*/
    v32 = v31; /*0x100890539*/
    *(_QWORD *)(v31 + 24) = 0xBCE5A2B4E7207475LL; /*0x100890546*/
    *(_QWORD *)(v31 + 16) = 0x6F6C6C6F5220968FLL; /*0x100890554*/
    *(_QWORD *)(v31 + 8) = 0xE5BBAFE8B495E68CLL; /*0x100890562*/
    *(_QWORD *)v31 = 0xAEE595B3E6A097E6LL; /*0x100890570*/
    *(_BYTE *)(v31 + 32) = -107; /*0x100890574*/
    v132 = nullptr; /*0x100890579*/
    v133 = 1; /*0x100890584*/
    v134 = 0; /*0x10089058f*/
    v128 = 1610612768; /*0x10089059a*/
    v126 = (const __m128i *)&v132; /*0x1008905ac*/
    v127 = &anon_0868f19ff3e9f3569e732f60bdb020cc_1449; /*0x1008905ba*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x1008905cf*/
                            v139,
                            &v126) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100890a65*/
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1450,
        55,
        &v142,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1468,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1452);
    v26[11] = v134; /*0x1008905e3*/
    v33 = v132; /*0x1008905e7*/
    v26[10] = v133; /*0x1008905f5*/
    v26[9] = v33; /*0x1008905f9*/
    *v26 = 24; /*0x1008905fd*/
    v26[1] = v27; /*0x100890604*/
    v26[2] = 24; /*0x100890608*/
    v26[3] = 7; /*0x100890610*/
    v26[4] = v30; /*0x100890618*/
    v26[5] = 7; /*0x10089061c*/
    v26[6] = 33; /*0x100890624*/
    v26[7] = v32; /*0x10089062c*/
    v26[8] = 33; /*0x100890630*/
    *((_BYTE *)v26 + 96) = 0; /*0x100890638*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v111); /*0x100890643*/
    return *(double *)si128.i64; /*0x100890648*/
  }
  v122 = v111[3]; /*0x100890305*/
  v121 = v111[2]; /*0x10089031a*/
  v120 = v111[1]; /*0x100890321*/
  codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::h39189bfa2cc8d042(&v132, a2, i64, a4); /*0x10089033a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100890346*/
  v15 = v14; /*0x100890348*/
  if ( *(_BYTE *)(v14 + 16) == 1 ) /*0x10089034f*/
  {
    v16 = *(_QWORD *)v14; /*0x100890355*/
    v17 = *(const __m128i **)(v15 + 8); /*0x100890358*/
  }
  else
  {
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x100890a32*/
    *(_QWORD *)v15 = v16; /*0x100890a37*/
    *(_QWORD *)(v15 + 8) = v17; /*0x100890a3a*/
    *(_BYTE *)(v15 + 16) = 1; /*0x100890a3e*/
  }
  v18 = 0x8000000000000000LL; /*0x10089035c*/
  v19 = nullptr; /*0x10089036a*/
  v129 = 0; /*0x100890371*/
  v20 = nullptr; /*0x100890378*/
  v128 = 0; /*0x10089037f*/
  v127 = nullptr; /*0x10089038d*/
  v126 = (const __m128i *)&xmmword_1016F24C0; /*0x10089039b*/
  v130 = v16; /*0x1008903a2*/
  v131 = v17; /*0x1008903a9*/
  *(_QWORD *)v15 = v16 + 2; /*0x1008903b4*/
  memset(&v111[1], 0, 24); /*0x1008903c5*/
  v111[0] = (const __m128i *)&xmmword_1016F24C0; /*0x1008903cc*/
  v111[4] = (const __m128i *)(v16 + 1); /*0x1008903d3*/
  v111[5] = v17; /*0x1008903da*/
  v136 = 0; /*0x1008903e1*/
  v21 = v121; /*0x1008903ec*/
  v22 = v122; /*0x1008903f3*/
  v145 = v121; /*0x1008903fd*/
  if ( !v122 ) /*0x100890401*/
  {
LABEL_51:
    v142 = (const __m128i **)&v136; /*0x10089093e*/
    v143 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100890950*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_101901F8F, &v142); /*0x100890966*/
    v50 = (const char *)v139[0]; /*0x10089096b*/
    v51 = (_QWORD *)v139[1]; /*0x100890972*/
    v52 = "rollout_orphan_providersconfig-backups"; /*0x100890980*/
    v53 = v139; /*0x100890987*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100890996*/
      v139,
      "rollout_orphan_providersconfig-backups",
      24,
      v139[1],
      v139[2]);
    if ( v50 ) /*0x10089099e*/
    {
      v53 = v51; /*0x1008909a5*/
      v52 = v50; /*0x1008909a8*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x1008909ab*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v52, v54); /*0x1008909b0*/
    v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(105, 1); /*0x1008909bf*/
    if ( !v55 ) /*0x1008909c7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 105); /*0x1008910b3*/
    v56 = v55; /*0x1008909cd*/
    memcpy(v55, &unk_10178A8B4, 0x69u); /*0x1008909df*/
    if ( v139[9] != v18 && v139[9] ) /*0x1008909f3*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139[10], v139[9], 1); /*0x1008909fe*/
    v139[9] = 105; /*0x100890a03*/
    v139[10] = v56; /*0x100890a0e*/
    v139[11] = 105; /*0x100890a12*/
    qmemcpy(v140, v139, 0x68u); /*0x100890a2a*/
    v57 = (void **)&v140; /*0x100890a2a*/
    goto LABEL_83; /*0x100890a2a*/
  }
  v141 = v122; /*0x100890407*/
  i64 = 176LL * (_QWORD)v122; /*0x100890412*/
  v116 = &v121[1].i8[8]; /*0x10089041a*/
  v23 = 0; /*0x100890421*/
  v113 = 0x7FFFFFFFFFFFFFFFLL; /*0x100890429*/
  do /*0x10089066b*/
  {
    if ( v21[v23 / 0x10 + 4].i64[1] == v18 ) /*0x100890676*/
      goto LABEL_23; /*0x100890676*/
    v34 = v18; /*0x100890678*/
    v35 = (const void *)v21[v23 / 0x10 + 5].i64[0]; /*0x10089067b*/
    v36 = v21[v23 / 0x10 + 5].u64[1]; /*0x100890680*/
    if ( v36 ) /*0x100890688*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v19, v17); /*0x10089068a*/
      v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x10089069c*/
      if ( !v37 ) /*0x1008906a2*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36); /*0x10089106f*/
    }
    else
    {
      v37 = 1; /*0x1008906a9*/
    }
    memcpy((void *)v37, v35, v36); /*0x1008906b8*/
    v139[0] = v36; /*0x1008906bd*/
    v139[1] = v37; /*0x1008906c4*/
    v139[2] = v36; /*0x1008906cb*/
    v20 = &v126; /*0x1008906d2*/
    v19 = (const __m128i ***)v139; /*0x1008906d9*/
    v38 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h62a3ac88aaa81a14(&v126, v139); /*0x1008906e0*/
    v21 = v145; /*0x1008906e5*/
    v18 = v34; /*0x1008906e9*/
    if ( v38 ) /*0x1008906ee*/
      goto LABEL_23; /*0x1008906ee*/
    ++v136; /*0x1008906f4*/
    v20 = (const __m128i **)v139; /*0x100890705*/
    v19 = v146; /*0x10089070c*/
    codexmate_lib::core::relay::codex_diagnostic::DiagnosticRolloutProviderCache::read::h876948a47cc8cfa5( /*0x100890710*/
      v139,
      v146,
      v145[v23 / 0x10 + 5].i64[0],
      v145[v23 / 0x10 + 5].i64[1]);
    v39 = v139[0]; /*0x100890715*/
    if ( v139[0] <= v34 ) /*0x10089071f*/
      v39 = v34; /*0x10089071f*/
    v40 = v113 & v39; /*0x100890723*/
    if ( v40 ) /*0x10089072a*/
    {
      if ( v40 != 1 ) /*0x100890730*/
      {
        v19 = (const __m128i ***)v139[2]; /*0x100890736*/
        if ( v139[2] ) /*0x100890740*/
        {
          v20 = (const __m128i **)v139[3]; /*0x10089064d*/
LABEL_22:
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100890659*/
          goto LABEL_23; /*0x100890659*/
        }
      }
      goto LABEL_23; /*0x100890740*/
    }
    v41 = (const __m128i ***)v139[0]; /*0x10089074b*/
    __s1 = (void *)v139[1]; /*0x100890759*/
    v42 = (const __m128i ***)v139[3]; /*0x100890763*/
    v138 = (void *)v139[4]; /*0x100890771*/
    v43 = v139[5]; /*0x100890778*/
    v114 = (const __m128i ***)v139[6]; /*0x100890786*/
    v115 = (const __m128i **)v139[7]; /*0x100890794*/
    if ( v139[0] != v34 /*0x1008907d4*/
      && (v19 = (const __m128i ***)v139[2],
          v20 = (const __m128i **)__s1,
          (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_diagnostic_orphan_provider::h501a8523fbab8ba9(
                             (unsigned int *)__s1,
                             v139[2],
                             (__int64 *)&v132))
      || v42 != (const __m128i ***)v34
      && (v20 = (const __m128i **)v138,
          v19 = (const __m128i ***)v43,
          (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_diagnostic_orphan_provider::h501a8523fbab8ba9(
                             (unsigned int *)v138,
                             v43,
                             (__int64 *)&v132)) )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v142, &v116[v23]); /*0x1008907ef*/
      v20 = v111; /*0x1008907f4*/
      v19 = &v142; /*0x1008907fb*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(v111, &v142); /*0x1008907fe*/
    }
    if ( 2LL * (_QWORD)v41 ) /*0x100890803*/
    {
      v20 = (const __m128i **)__s1; /*0x100890855*/
      v19 = v41; /*0x10089085c*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v41, 1); /*0x10089085f*/
      v44 = v114; /*0x10089086f*/
      if ( !(2LL * (_QWORD)v42) ) /*0x100890876*/
        goto LABEL_43; /*0x100890876*/
    }
    else
    {
      v44 = v114; /*0x10089081b*/
      if ( !(2LL * (_QWORD)v42) ) /*0x100890810*/
        goto LABEL_43; /*0x100890822*/
    }
    v20 = (const __m128i **)v138; /*0x10089087d*/
    v19 = v42; /*0x100890884*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v42, 1); /*0x100890887*/
LABEL_43:
    v21 = v145; /*0x100890824*/
    v18 = v34; /*0x100890833*/
    if ( 2LL * (_QWORD)v44 ) /*0x100890824*/
    {
      v20 = v115; /*0x100890841*/
      v19 = v44; /*0x100890848*/
      goto LABEL_22; /*0x10089084b*/
    }
LABEL_23:
    v23 += 176LL; /*0x100890660*/
  }
  while ( i64 != v23 ); /*0x10089066b*/
  v22 = v141; /*0x100890898*/
  if ( !v111[3] ) /*0x10089089c*/
    goto LABEL_51; /*0x10089089c*/
  si128 = _mm_load_si128(v111[0]); /*0x1008908b5*/
  v107[0] = v111[0]; /*0x1008908bf*/
  v107[1] = v111[0] + 1; /*0x1008908ca*/
  v107[2] = (char *)v111[0]->i64 + (unsigned __int64)v111[1] + 1; /*0x1008908d1*/
  v108 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x1008908d8*/
  v109 = v111[3]; /*0x1008908df*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4d55bf202b1139c1( /*0x1008908f4*/
    &v117,
    v107);
  v45 = v118; /*0x1008908f9*/
  v46 = v119; /*0x100890900*/
  if ( v119 >= 2 ) /*0x100890915*/
  {
    if ( v119 >= 0x15 ) /*0x100890a76*/
    {
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v118, v119, &v142); /*0x1008910e4*/
      v47 = v117; /*0x1008910e9*/
      v48 = v45 + 24 * v46; /*0x1008910f4*/
      v22 = v141; /*0x1008910f8*/
    }
    else
    {
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v118, v119, 1, &v142); /*0x100890a8b*/
      v47 = v117; /*0x100890a90*/
      v48 = v45 + 24 * v46; /*0x100890a9b*/
      v22 = v141; /*0x100890aa7*/
      if ( v46 - 2 < 3 ) /*0x100890aae*/
      {
LABEL_50:
        v49 = v48; /*0x100890936*/
        goto LABEL_70; /*0x100890939*/
      }
    }
    v49 = v45 + 120; /*0x100890ab4*/
    goto LABEL_63; /*0x100890ab4*/
  }
  v47 = v117; /*0x10089091b*/
  v48 = v118 + 24 * v119; /*0x100890926*/
  v49 = v118; /*0x10089092a*/
  if ( v119 ) /*0x100890930*/
    goto LABEL_50; /*0x100890930*/
LABEL_63:
  if ( v48 == v49 ) /*0x100890ac4*/
  {
    v48 = v49; /*0x100890b16*/
  }
  else
  {
    i64 = (__int64)v47; /*0x100890ac9*/
    v58 = (v48 - v49) / 0x18; /*0x100890acd*/
    v59 = (_QWORD *)(v49 + 8); /*0x100890ad1*/
    do /*0x100890ae7*/
    {
      v60 = *(v59 - 1); /*0x100890ae9*/
      if ( v60 ) /*0x100890af1*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v59, v60, 1); /*0x100890afc*/
      v59 += 3; /*0x100890ae0*/
      --v58; /*0x100890ae4*/
    }
    while ( v58 ); /*0x100890ae7*/
    v48 = v49; /*0x100890b03*/
    v47 = (const __m128i **)i64; /*0x100890b06*/
  }
LABEL_70:
  v61 = 0xAAAAAAAAAAAAAAABLL * ((v48 - v45) >> 3); /*0x100890b19*/
  i64 = (__int64)v47; /*0x100890b24*/
  v142 = v47; /*0x100890b28*/
  v143 = (__int64 (__fastcall *)())v45; /*0x100890b2c*/
  v144 = v61; /*0x100890b30*/
  v62 = v139; /*0x100890b3b*/
  v63 = v45; /*0x100890b48*/
  alloc::str::join_generic_copy::h877a7dfcc3252013(v139, v45, v61, &unk_10178860B, 3); /*0x100890b4e*/
  v125 = v139[2]; /*0x100890b5a*/
  v124 = v139[1]; /*0x100890b6f*/
  v123 = (void **)v139[0]; /*0x100890b76*/
  if ( v49 != v45 ) /*0x100890b80*/
  {
    v65 = (_QWORD *)(v45 + 8); /*0x100890b82*/
    do /*0x100890b97*/
    {
      v63 = *(v65 - 1); /*0x100890b99*/
      if ( v63 ) /*0x100890ba0*/
      {
        v62 = (_QWORD *)*v65; /*0x100890ba2*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v65, v63, 1); /*0x100890baa*/
      }
      v65 += 3; /*0x100890b90*/
      --v61; /*0x100890b94*/
    }
    while ( v61 ); /*0x100890b97*/
  }
  if ( i64 ) /*0x100890bb8*/
  {
    v63 = 24 * i64; /*0x100890bbe*/
    v62 = (_QWORD *)v45; /*0x100890bc7*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 24 * i64, 8); /*0x100890bca*/
  }
  v112 = v111[3]; /*0x100890bd6*/
  v66 = 0; /*0x100890bdd*/
  v67 = v111[3] < (const __m128i *)0xB; /*0x100890be4*/
  v68 = "error/choices/0/finish_reason"; /*0x100890bef*/
  if ( v111[3] < (const __m128i *)0xB ) /*0x100890bf6*/
    v68 = (const char *)&unk_101787DA2; /*0x100890bf6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v63, v64); /*0x100890bfa*/
  v69 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100890c09*/
  if ( !v69 ) /*0x100890c11*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1008910c4*/
  v71 = v69; /*0x100890c17*/
  LOBYTE(v66) = v67; /*0x100890c1a*/
  v72 = 2 * v66 + 5; /*0x100890c1d*/
  qmemcpy(v69, "rollout_orphan_providers", 24); /*0x100890c48*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v70); /*0x100890c4b*/
  v73 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v72, 1); /*0x100890c58*/
  if ( !v73 ) /*0x100890c60*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v72); /*0x1008910d3*/
  v74 = v73; /*0x100890c66*/
  memcpy(v73, v68, v72); /*0x100890c72*/
  v142 = &v112; /*0x100890c7e*/
  v143 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100890c89*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_101901FD1, &v142); /*0x100890c9f*/
  i64 = v139[0]; /*0x100890cab*/
  v146 = (const __m128i ***)v139[1]; /*0x100890cb6*/
  v75 = v139[2]; /*0x100890cba*/
  v139[0] = &v123; /*0x100890cc8*/
  v139[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100890cd6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v110, &unk_10178A91D, v139); /*0x100890cf2*/
  v76 = v140; /*0x100890cfe*/
  v140[11] = v110[2]; /*0x100890d02*/
  v77 = v110[0]; /*0x100890d06*/
  v76[10] = v110[1]; /*0x100890d14*/
  v76[9] = v77; /*0x100890d18*/
  *v76 = 24; /*0x100890d1c*/
  v76[1] = v71; /*0x100890d23*/
  v76[2] = 24; /*0x100890d27*/
  v76[3] = v72; /*0x100890d2f*/
  v76[4] = v74; /*0x100890d33*/
  v76[5] = v72; /*0x100890d37*/
  v76[6] = i64; /*0x100890d3f*/
  v76[7] = v146; /*0x100890d47*/
  v76[8] = v75; /*0x100890d4b*/
  *((_BYTE *)v76 + 96) = 1; /*0x100890d4f*/
  v57 = v123; /*0x100890d53*/
  if ( v123 ) /*0x100890d5d*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v123, 1); /*0x100890d6b*/
LABEL_83:
  HIDWORD(_RAX) = HIDWORD(v111[1]); /*0x100890d70*/
  if ( v111[1] ) /*0x100890d7a*/
  {
    i64 = (__int64)v111[1]->i64; /*0x100890d80*/
    v79 = v111[3]; /*0x100890d84*/
    if ( v111[3] ) /*0x100890d8e*/
    {
      v80 = v111[0]; /*0x100890d94*/
      si128 = _mm_load_si128(v111[0]); /*0x100890d9b*/
      _R14D = ~_mm_movemask_epi8(si128); /*0x100890da6*/
      v82 = v111[0] + 1; /*0x100890da9*/
      do /*0x100890dc0*/
      {
        if ( !(_WORD)_R14D ) /*0x100890dc6*/
        {
          do /*0x100890ded*/
          {
            si128 = _mm_load_si128(v82); /*0x100890dd0*/
            v83 = _mm_movemask_epi8(si128); /*0x100890dd6*/
            v80 -= 24; /*0x100890ddb*/
            ++v82; /*0x100890de2*/
          }
          while ( v83 == 0xFFFF ); /*0x100890ded*/
          _R14D = ~v83; /*0x100890def*/
        }
        __asm { tzcnt eax, r14d } /*0x100890df2*/
        v84 = -3 * _RAX; /*0x100890dfa*/
        v85 = *((_QWORD *)&v80[-1] + v84 - 1); /*0x100890dfe*/
        if ( v85 ) /*0x100890e06*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80[-1].i64[v84], v85, 1); /*0x100890e15*/
        v79 = (const __m128i *)((char *)v79 - 1); /*0x100890db0*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100890db7*/
        _R14D &= _R14D - 1; /*0x100890dba*/
      }
      while ( v79 ); /*0x100890dc0*/
    }
    v86 = (24 * i64 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100890e2c*/
    v57 = (void **)(v86 + i64 + 17); /*0x100890e33*/
    if ( v86 + i64 != -17 ) /*0x100890e37*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v111[0] - v86, v57, 16); /*0x100890e48*/
  }
  HIDWORD(_RAX) = HIDWORD(v127); /*0x100890e4d*/
  if ( v127 ) /*0x100890e57*/
  {
    i64 = (__int64)v127; /*0x100890e5d*/
    v88 = v129; /*0x100890e61*/
    if ( v129 ) /*0x100890e6b*/
    {
      v89 = v126; /*0x100890e71*/
      si128 = _mm_load_si128(v126); /*0x100890e78*/
      _R14D = ~_mm_movemask_epi8(si128); /*0x100890e83*/
      v91 = v126 + 1; /*0x100890e86*/
      do /*0x100890ea0*/
      {
        if ( !(_WORD)_R14D ) /*0x100890ea6*/
        {
          do /*0x100890ecd*/
          {
            si128 = _mm_load_si128(v91); /*0x100890eb0*/
            v92 = _mm_movemask_epi8(si128); /*0x100890eb6*/
            v89 -= 24; /*0x100890ebb*/
            ++v91; /*0x100890ec2*/
          }
          while ( v92 == 0xFFFF ); /*0x100890ecd*/
          _R14D = ~v92; /*0x100890ecf*/
        }
        __asm { tzcnt eax, r14d } /*0x100890ed2*/
        v93 = -3 * _RAX; /*0x100890eda*/
        v94 = *((_QWORD *)&v89[-1] + v93 - 1); /*0x100890ede*/
        if ( v94 ) /*0x100890ee6*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89[-1].i64[v93], v94, 1); /*0x100890ef5*/
        --v88; /*0x100890e90*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100890e97*/
        _R14D &= _R14D - 1; /*0x100890e9a*/
      }
      while ( v88 ); /*0x100890ea0*/
    }
    v95 = (24 * i64 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100890f0c*/
    v57 = (void **)(v95 + i64 + 17); /*0x100890f13*/
    if ( v95 + i64 != -17 ) /*0x100890f17*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v126 - v95, v57, 16); /*0x100890f28*/
  }
  HIDWORD(_RAX) = HIDWORD(v133); /*0x100890f2d*/
  if ( v133 ) /*0x100890f37*/
  {
    i64 = v133; /*0x100890f3d*/
    v97 = v135; /*0x100890f41*/
    if ( v135 ) /*0x100890f4b*/
    {
      v98 = v132; /*0x100890f51*/
      si128 = _mm_load_si128(v132); /*0x100890f58*/
      _R14D = ~_mm_movemask_epi8(si128); /*0x100890f63*/
      v100 = v132 + 1; /*0x100890f66*/
      do /*0x100890f80*/
      {
        if ( !(_WORD)_R14D ) /*0x100890f86*/
        {
          do /*0x100890fad*/
          {
            si128 = _mm_load_si128(v100); /*0x100890f90*/
            v101 = _mm_movemask_epi8(si128); /*0x100890f96*/
            v98 -= 24; /*0x100890f9b*/
            ++v100; /*0x100890fa2*/
          }
          while ( v101 == 0xFFFF ); /*0x100890fad*/
          _R14D = ~v101; /*0x100890faf*/
        }
        __asm { tzcnt eax, r14d } /*0x100890fb2*/
        v102 = -3 * _RAX; /*0x100890fba*/
        v103 = *((_QWORD *)&v98[-1] + v102 - 1); /*0x100890fbe*/
        if ( v103 ) /*0x100890fc6*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98[-1].i64[v102], v103, 1); /*0x100890fd5*/
        --v97; /*0x100890f70*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100890f77*/
        _R14D &= _R14D - 1; /*0x100890f7a*/
      }
      while ( v97 ); /*0x100890f80*/
    }
    v104 = (24 * i64 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100890fec*/
    v57 = (void **)(v104 + i64 + 17); /*0x100890ff3*/
    if ( v104 + i64 != -17 ) /*0x100890ff7*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v132 - v104, v57, 16); /*0x100891008*/
  }
  if ( v22 ) /*0x100891010*/
  {
    v105 = v145; /*0x100891012*/
    do /*0x100891032*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h6f2c4d672fa81d90( /*0x100891023*/
        v105,
        v57);
      v105 += 11; /*0x100891028*/
      v22 = (const __m128i *)((char *)v22 - 1); /*0x10089102f*/
    }
    while ( v22 ); /*0x100891032*/
  }
  if ( v120 ) /*0x10089103e*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, 176LL * (_QWORD)v120, 8); /*0x100891050*/
  return *(double *)si128.i64; /*0x100890476*/
}