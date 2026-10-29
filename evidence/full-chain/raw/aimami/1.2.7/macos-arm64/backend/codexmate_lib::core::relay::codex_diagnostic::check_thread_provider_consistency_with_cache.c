// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency_with_cache::ha293b9c077f58eb6; addr: 0x1008914e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency_with_cache::ha293b9c077f58eb6(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // r12
  int *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 *v9; // rdi
  __int64 (__fastcall *v10)(); // r15
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 (__fastcall *v13)(); // r12
  __int64 (__fastcall *v14)(); // r15
  char *v15; // r13
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  void **v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // r14
  char *v24; // r15
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  _QWORD *v27; // r14
  __int64 v28; // rsi
  _QWORD *v29; // r14
  __int64 v30; // rbx
  _QWORD *v31; // r15
  __int64 v32; // rsi
  void *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdx
  void *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rax
  bool v40; // zf
  char *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // r12
  __int64 v46; // r13
  __int64 v47; // r15
  _QWORD *v48; // rax
  void *v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rbx
  _QWORD *v66; // rax
  __int64 v67; // rcx
  void *v68; // rax
  __int64 v69; // rdx
  void *v70; // r14
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbx
  _QWORD *v76; // r14
  __int64 v77; // rsi
  __int64 v78; // rsi
  void *v80; // rax
  __int64 v81; // rdx
  void *v82; // r14
  _DWORD *v83; // rax
  _DWORD *v84; // r15
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rax
  _QWORD v90[3]; // [rsp+8h] [rbp-248h] BYREF
  __int64 v91; // [rsp+20h] [rbp-230h] BYREF
  __int64 v92; // [rsp+28h] [rbp-228h]
  __int64 v93; // [rsp+30h] [rbp-220h]
  _QWORD v94[3]; // [rsp+38h] [rbp-218h] BYREF
  __int64 v95; // [rsp+50h] [rbp-200h] BYREF
  __int64 v96; // [rsp+58h] [rbp-1F8h]
  __int64 v97; // [rsp+60h] [rbp-1F0h]
  __int64 v98; // [rsp+68h] [rbp-1E8h] BYREF
  __int64 v99; // [rsp+70h] [rbp-1E0h]
  __int64 v100; // [rsp+78h] [rbp-1D8h]
  char *v101; // [rsp+80h] [rbp-1D0h] BYREF
  __int64 v102; // [rsp+88h] [rbp-1C8h]
  __int64 v103; // [rsp+90h] [rbp-1C0h]
  _QWORD *v104; // [rsp+98h] [rbp-1B8h]
  void *v105; // [rsp+A0h] [rbp-1B0h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-1A8h]
  __int64 v107; // [rsp+B0h] [rbp-1A0h]
  __int64 v108; // [rsp+B8h] [rbp-198h] BYREF
  _QWORD *v109; // [rsp+C0h] [rbp-190h]
  __int64 v110; // [rsp+C8h] [rbp-188h]
  int *v111; // [rsp+D0h] [rbp-180h] BYREF
  __int64 v112; // [rsp+D8h] [rbp-178h]
  __int64 v113; // [rsp+E0h] [rbp-170h]
  __int64 v114; // [rsp+E8h] [rbp-168h] BYREF
  __int64 v115; // [rsp+F0h] [rbp-160h]
  unsigned __int64 v116; // [rsp+F8h] [rbp-158h]
  __int64 v117; // [rsp+100h] [rbp-150h]
  unsigned __int64 v118; // [rsp+108h] [rbp-148h] BYREF
  __int64 v119; // [rsp+110h] [rbp-140h]
  __int64 v120; // [rsp+118h] [rbp-138h]
  __int64 v121; // [rsp+120h] [rbp-130h] BYREF
  const char *v122; // [rsp+128h] [rbp-128h]
  __int64 v123; // [rsp+130h] [rbp-120h]
  __int64 v124; // [rsp+138h] [rbp-118h]
  void *v125; // [rsp+140h] [rbp-110h] BYREF
  __int64 v126; // [rsp+148h] [rbp-108h]
  __int64 v127; // [rsp+150h] [rbp-100h]
  void *v128; // [rsp+158h] [rbp-F8h]
  _QWORD *v129; // [rsp+160h] [rbp-F0h]
  __int64 v130; // [rsp+168h] [rbp-E8h] BYREF
  __int64 v131; // [rsp+170h] [rbp-E0h] BYREF
  _QWORD v132[9]; // [rsp+178h] [rbp-D8h] BYREF
  __int64 v133; // [rsp+1C0h] [rbp-90h] BYREF
  _QWORD *v134; // [rsp+1C8h] [rbp-88h]
  __int64 v135; // [rsp+1D0h] [rbp-80h]
  __int64 *v136; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+1E0h] [rbp-70h]
  __int64 v138; // [rsp+1E8h] [rbp-68h]
  __int64 (__fastcall *v139)(); // [rsp+1F0h] [rbp-60h]
  volatile signed __int64 *v140; // [rsp+1F8h] [rbp-58h] BYREF
  int v141; // [rsp+204h] [rbp-4Ch]
  __int64 v142; // [rsp+208h] [rbp-48h] BYREF
  _QWORD *v143; // [rsp+210h] [rbp-40h]
  __int64 v144; // [rsp+218h] [rbp-38h]
  __int64 v145; // [rsp+220h] [rbp-30h]

  v5 = a2; /*0x1008914f7*/
  v117 = a1; /*0x1008914fa*/
  v6 = (int *)"openai"; /*0x100891508*/
  v141 = a3; /*0x10089150f*/
  if ( (a3 & 1) != 0 ) /*0x100891515*/
    v6 = &anon_0868f19ff3e9f3569e732f60bdb020cc_75; /*0x100891515*/
  v111 = v6; /*0x100891519*/
  v112 = 6; /*0x100891520*/
  codexmate_lib::core::relay::codex_thread_visibility::collect_existing_convergence_rollout_paths::h896db11210e41fad(&v108); /*0x100891532*/
  v105 = v109; /*0x10089154d*/
  v106 = (__int64)&v109[3 * v110]; /*0x100891554*/
  v145 = a4; /*0x10089155b*/
  v107 = a4; /*0x10089155f*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h448f500bce4373f4( /*0x100891574*/
    &v114,
    &v105);
  v8 = v116; /*0x100891579*/
  if ( v116 < 8 ) /*0x100891584*/
    goto LABEL_31; /*0x100891584*/
  v113 = a2; /*0x10089158a*/
  v118 = 0; /*0x100891591*/
  v120 = 4; /*0x10089159c*/
  v121 = 0; /*0x1008915a7*/
  v123 = 1; /*0x1008915b2*/
  v124 = (__int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_7; /*0x1008915c4*/
  v125 = nullptr; /*0x1008915cb*/
  v127 = 0; /*0x1008915d6*/
  LOWORD(v129) = 0; /*0x1008915e1*/
  rayon_core::registry::Registry::new::hd25ab9d26de5ca1a(v132, &v118, v7); /*0x1008915fb*/
  v9 = (__int64 *)v132[0]; /*0x100891600*/
  v10 = (__int64 (__fastcall *)())v132[1]; /*0x100891607*/
  if ( v132[0] != 3 ) /*0x100891612*/
  {
    v136 = (__int64 *)v132[0]; /*0x10089182c*/
    v137 = (__int64 (__fastcall *)())v132[1]; /*0x100891830*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100891842*/
    {
      v132[0] = &v136; /*0x10089184c*/
      v132[1] = _$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50; /*0x10089185a*/
      v124 = 2; /*0x100891861*/
      v125 = &anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x100891873*/
      v126 = 44; /*0x10089187a*/
      v128 = &unk_101900C0D; /*0x10089188c*/
      v129 = v132; /*0x100891893*/
      v118 = 0; /*0x10089189a*/
      v119 = (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_314; /*0x1008918a5*/
      v120 = 44; /*0x1008918ac*/
      v121 = 0; /*0x1008918b7*/
      v122 = "src/core/relay/codex_diagnostic.rs"; /*0x1008918c9*/
      v123 = 34; /*0x1008918d0*/
      v127 = 0xC200000001LL; /*0x1008918e5*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v142, &v118); /*0x1008918f7*/
      v9 = v136; /*0x1008918fc*/
      v10 = v137; /*0x100891900*/
    }
    core::ptr::drop_in_place$LT$rayon_core..ThreadPoolBuildError$GT$::h0da18503b5620f99(v9, v10); /*0x100891907*/
    v8 = v116; /*0x10089190c*/
    v5 = v113; /*0x100891913*/
LABEL_31:
    if ( v8 ) /*0x10089191d*/
    {
      v21 = (_QWORD *)(v115 + 8); /*0x10089192a*/
      do /*0x100891937*/
      {
        v22 = *(v21 - 1); /*0x10089193d*/
        if ( v22 ) /*0x100891944*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1); /*0x10089194e*/
        v21 += 3; /*0x100891930*/
        --v8; /*0x100891934*/
      }
      while ( v8 ); /*0x100891937*/
    }
    goto LABEL_52; /*0x100891937*/
  }
  v140 = (volatile signed __int64 *)v132[1]; /*0x100891618*/
  v11 = *(_QWORD *)core::ops::function::FnOnce::call_once::hc12fbaf0475b87b0(0); /*0x10089162a*/
  if ( v11 ) /*0x100891630*/
  {
    if ( *(__int64 (__fastcall **)())(v11 + 272) == v10 ) /*0x10089163d*/
    {
      v118 = 0; /*0x10089164a*/
      v119 = 8; /*0x100891655*/
      v120 = 0; /*0x100891660*/
      rayon::iter::extend::_$LT$impl$u20$rayon..iter..ParallelExtend$LT$T$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::par_extend::hc95c86af1e0274fc( /*0x100891675*/
        &v118,
        v115,
        v8);
      v135 = v120; /*0x100891681*/
      v134 = (_QWORD *)v119; /*0x100891693*/
      v133 = v118; /*0x10089169a*/
    }
    else
    {
      rayon_core::registry::Registry::in_worker_cross::h0fe1eb070cc6dfd3(&v133, (char *)v10 + 128, v11, &v114); /*0x100892362*/
    }
  }
  else
  {
    std::thread::local::LocalKey$LT$T$GT$::with::h28f1458ab1fb646c( /*0x100892347*/
      &v133,
      &anon_d9d2f5b2094eba1d5a276dc1a2756762_17,
      &v114,
      (char *)v10 + 128);
  }
  v12 = v134; /*0x1008916a8*/
  v13 = (__int64 (__fastcall *)())&v134[12 * v135]; /*0x1008916bb*/
  v136 = v134; /*0x1008916be*/
  v137 = (__int64 (__fastcall *)())v134; /*0x1008916c2*/
  v103 = v133; /*0x1008916c6*/
  v138 = v133; /*0x1008916cd*/
  v139 = v13; /*0x1008916d1*/
  v14 = (__int64 (__fastcall *)())v134; /*0x1008916d5*/
  if ( v135 ) /*0x1008916db*/
  {
    v104 = v134; /*0x1008916eb*/
    v14 = (__int64 (__fastcall *)())(v134 + 12); /*0x1008916f2*/
    v102 = 0x7FFFFFFFFFFFFFFFLL; /*0x1008916fe*/
    while ( 1 ) /*0x100891731*/
    {
      if ( *((_QWORD *)v14 - 12) == 0x8000000000000000LL ) /*0x100891738*/
      {
LABEL_37:
        v137 = v14; /*0x100891958*/
        v12 = v104; /*0x10089195c*/
        break; /*0x10089195c*/
      }
      v15 = (char *)v14 - 96; /*0x10089173e*/
      v142 = *((_QWORD *)v14 - 12); /*0x100891742*/
      v16 = *((_QWORD **)v14 - 11); /*0x100891746*/
      v144 = *((_QWORD *)v14 - 10); /*0x100891752*/
      v143 = v16; /*0x100891756*/
      qmemcpy(v132, (char *)v14 - 72, sizeof(v132)); /*0x10089176c*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hd1b0d30361c15727(&v118, v145, &v142, v132); /*0x100891781*/
      if ( v118 != 0x8000000000000003LL ) /*0x100891790*/
      {
        v17 = 0x8000000000000000LL; /*0x100891795*/
        if ( v118 > 0x8000000000000000LL ) /*0x100891798*/
          v17 = v118; /*0x100891798*/
        v18 = v102 & v17; /*0x10089179c*/
        if ( v18 ) /*0x1008917a3*/
        {
          if ( v18 == 1 ) /*0x1008917a9*/
            goto LABEL_11; /*0x1008917a9*/
          v19 = v120; /*0x1008917af*/
          v20 = (void **)&v121; /*0x1008917b6*/
          if ( !v120 ) /*0x1008917c0*/
            goto LABEL_11; /*0x1008917c0*/
        }
        else
        {
          if ( v118 != 0x8000000000000000LL && v118 ) /*0x1008917d3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v118, 1); /*0x1008917e1*/
          if ( v121 != 0x8000000000000000LL && v121 ) /*0x1008917f5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v121, 1); /*0x100891803*/
          v19 = v124; /*0x100891808*/
          v20 = &v125; /*0x100891817*/
          if ( !(2 * v124) ) /*0x100891821*/
            goto LABEL_11; /*0x100891821*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v19, 1); /*0x10089170f*/
      }
LABEL_11:
      v14 = (__int64 (__fastcall *)())((char *)v14 + 96); /*0x100891720*/
      if ( v15 + 96 == (char *)v13 ) /*0x10089172b*/
      {
        v14 = v13; /*0x100891955*/
        goto LABEL_37; /*0x100891955*/
      }
    }
  }
  if ( v13 != v14 ) /*0x100891979*/
  {
    v23 = ((char *)v13 - (char *)v14) / 0x60uLL; /*0x10089197e*/
    v24 = (char *)v14 + 24; /*0x100891982*/
    do /*0x10089199f*/
    {
      v25 = *((_QWORD *)v24 - 3); /*0x1008919a1*/
      if ( v25 ) /*0x1008919a8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v24 - 2), v25, 1); /*0x1008919b3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..CachedRolloutProviderAnchors$GT$::h7e93fe0cada65c2e(v24); /*0x100891993*/
      v24 += 96; /*0x100891998*/
      --v23; /*0x10089199c*/
    }
    while ( v23 ); /*0x10089199f*/
  }
  if ( v103 ) /*0x1008919c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 96 * v103, 8); /*0x1008919d6*/
  _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v140); /*0x1008919df*/
  if ( !_InterlockedDecrement64(v140) ) /*0x1008919e8*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v140); /*0x1008919f2*/
  v26 = v116; /*0x1008919f7*/
  v5 = v113; /*0x100891a01*/
  if ( v116 ) /*0x100891a08*/
  {
    v27 = (_QWORD *)(v115 + 8); /*0x100891a11*/
    do /*0x100891a27*/
    {
      v28 = *(v27 - 1); /*0x100891a29*/
      if ( v28 ) /*0x100891a30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v28, 1); /*0x100891a3a*/
      v27 += 3; /*0x100891a20*/
      --v26; /*0x100891a24*/
    }
    while ( v26 ); /*0x100891a27*/
  }
LABEL_52:
  if ( v114 ) /*0x100891a4b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 24 * v114, 8); /*0x100891a61*/
  v29 = v109; /*0x100891a66*/
  v30 = v110; /*0x100891a6d*/
  if ( v110 ) /*0x100891a77*/
  {
    v31 = v109 + 1; /*0x100891a79*/
    do /*0x100891a87*/
    {
      v32 = *(v31 - 1); /*0x100891a89*/
      if ( v32 ) /*0x100891a90*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v32, 1); /*0x100891a9a*/
      v31 += 3; /*0x100891a80*/
      --v30; /*0x100891a84*/
    }
    while ( v30 ); /*0x100891a87*/
  }
  if ( v108 ) /*0x100891aab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24 * v108, 8); /*0x100891abd*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence_with_reader::hcb68beed1a11bed5( /*0x100891ade*/
    &v118,
    v5,
    v111,
    v112,
    v145);
  if ( !v128 && !v129 && !v130 && !(v123 | v131) ) /*0x100891b08*/
  {
    v33 = &unk_10178AB26; /*0x100891b18*/
    if ( (v141 & 1) != 0 ) /*0x100891b23*/
      v33 = &unk_10178AB47; /*0x100891b23*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100891b40*/
      v117,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_465,
      27,
      v33,
      33);
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h9a16b6063e438470(&v118); /*0x100891b45*/
  }
  if ( v126 ) /*0x100891b54*/
  {
    v34 = (__int64)v125; /*0x100891b56*/
    v35 = (__int64)v132; /*0x100891b64*/
    alloc::str::join_generic_copy::h877a7dfcc3252013(v132, v125, v126, &unk_101787E23, 3); /*0x100891b71*/
    v135 = v132[2]; /*0x100891b7d*/
    v134 = (_QWORD *)v132[1]; /*0x100891b8f*/
    v133 = v132[0]; /*0x100891b96*/
    v37 = v128; /*0x100891b9d*/
    v38 = v129; /*0x100891ba4*/
    if ( v128 ) /*0x100891bae*/
      goto LABEL_76; /*0x100891bae*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v118, v5, 0); /*0x100891bb2*/
    v35 = 9; /*0x100891bb7*/
    v34 = 1; /*0x100891bbc*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100891bc1*/
    if ( !v39 ) /*0x100891bc9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1008923a5*/
    *(_QWORD *)v39 = 0xBEE4BAA4E7A097E6LL; /*0x100891bd9*/
    *(_BYTE *)(v39 + 8) = -117; /*0x100891bdc*/
    v133 = 9; /*0x100891be0*/
    v134 = (_QWORD *)v39; /*0x100891beb*/
    v135 = 9; /*0x100891bf2*/
    v37 = v128; /*0x100891bfa*/
    v38 = v129; /*0x100891c01*/
    if ( v128 ) /*0x100891c0b*/
      goto LABEL_76; /*0x100891c0b*/
  }
  if ( !v38 && !v130 && !v123 ) /*0x100891c24*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, v34, v36); /*0x1008921ab*/
    v47 = 27; /*0x1008921b0*/
    v80 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1008921c0*/
    if ( v80 ) /*0x1008921c8*/
    {
      v82 = v80; /*0x1008921ce*/
      qmemcpy(v80, "thread_provider_consistency", 27); /*0x1008921f7*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1, v81); /*0x100892202*/
      v83 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100892211*/
      if ( !v83 ) /*0x100892219*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1008923b6*/
      v84 = v83; /*0x10089221f*/
      *(_DWORD *)((char *)v83 + 3) = 1735289198; /*0x100892222*/
      *v83 = 1852989815; /*0x100892229*/
      v136 = &v131; /*0x100892236*/
      v137 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100892241*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_1019020A4, &v136); /*0x100892257*/
      v85 = v132[0]; /*0x10089225c*/
      v86 = v132[1]; /*0x100892263*/
      v87 = v132[2]; /*0x10089226a*/
      v132[0] = &v133; /*0x100892278*/
      v132[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100892286*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v94, &unk_10178AA44, v132); /*0x1008922a2*/
      v88 = v117; /*0x1008922ae*/
      *(_QWORD *)(v117 + 88) = v94[2]; /*0x1008922b5*/
      v89 = v94[0]; /*0x1008922b9*/
      *(_QWORD *)(v88 + 80) = v94[1]; /*0x1008922c7*/
      *(_QWORD *)(v88 + 72) = v89; /*0x1008922cb*/
      *(_QWORD *)v88 = 27; /*0x1008922cf*/
      *(_QWORD *)(v88 + 8) = v82; /*0x1008922d6*/
      *(_QWORD *)(v88 + 16) = 27; /*0x1008922da*/
      *(_QWORD *)(v88 + 24) = 7; /*0x1008922e2*/
      *(_QWORD *)(v88 + 32) = v84; /*0x1008922ea*/
      *(_QWORD *)(v88 + 40) = 7; /*0x1008922ee*/
      *(_QWORD *)(v88 + 48) = v85; /*0x1008922f6*/
      *(_QWORD *)(v88 + 56) = v86; /*0x1008922fa*/
      *(_QWORD *)(v88 + 64) = v87; /*0x1008922fe*/
      *(_BYTE *)(v88 + 96) = 0; /*0x100892302*/
      v78 = v133; /*0x100892306*/
      if ( v133 ) /*0x100892310*/
        goto LABEL_108; /*0x100892310*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h9a16b6063e438470(&v118); /*0x100892310*/
    }
    goto LABEL_119; /*0x1008921c8*/
  }
LABEL_76:
  v40 = (_QWORD *)((char *)v38 + (_QWORD)v37) == nullptr; /*0x100891c2a*/
  v41 = (char *)v38 + (_QWORD)v37; /*0x100891c2a*/
  v101 = v41; /*0x100891c2d*/
  if ( !v40 ) /*0x100891c34*/
  {
    v136 = (__int64 *)&v101; /*0x100891c3d*/
    v137 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100891c48*/
    v42 = (__int64)&unk_101902038; /*0x100891c4c*/
    v43 = (__int64)v132; /*0x100891c53*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_101902038, &v136); /*0x100891c5e*/
    v145 = v132[0]; /*0x100891c6a*/
    v45 = (_QWORD *)v132[1]; /*0x100891c6e*/
    v46 = v132[2]; /*0x100891c75*/
    goto LABEL_80; /*0x100891c7c*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, v34, v36); /*0x100891c81*/
  v47 = 55; /*0x100891c86*/
  v43 = 55; /*0x100891c8c*/
  v42 = 1; /*0x100891c91*/
  v48 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1); /*0x100891c96*/
  if ( !v48 ) /*0x100891c9e*/
LABEL_119:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v47); /*0x10089238c*/
  v45 = v48; /*0x100891ca4*/
  *(_QWORD *)((char *)v48 + 47) = 0x89BCEF98A2E9AE97LL; /*0x100891cb1*/
  v48[5] = 0x97E9B28FE5868EE5LL; /*0x100891cc0*/
  v48[4] = 0x83AEE5B685E5899CLL; /*0x100891ccf*/
  v48[3] = 0xE68DBBE488BCEF9BLL; /*0x100891cde*/
  v48[2] = 0x95E6B694E6B2B7E5LL; /*0x100891ced*/
  v48[1] = 0x2072656469766F72LL; /*0x100891cfc*/
  *v48 = 0x70208BA8E7BFBAE7LL; /*0x100891d0b*/
  v46 = 55; /*0x100891d0f*/
  v145 = 55; /*0x100891d1a*/
LABEL_80:
  v49 = &unk_10178A9E0; /*0x100891d1e*/
  if ( (v141 & 1) != 0 ) /*0x100891d30*/
    v49 = &unk_10178AA10; /*0x100891d30*/
  v105 = v49; /*0x100891d34*/
  v106 = 48; /*0x100891d3b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v42, v44); /*0x100891d46*/
  v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100891d55*/
  if ( !v50 ) /*0x100891d5d*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100892325*/
  v51 = (_QWORD *)v50; /*0x100891d63*/
  v132[0] = &v105; /*0x100891d6d*/
  v132[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100891d7b*/
  v132[2] = &v111; /*0x100891d89*/
  v132[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100891d90*/
  v52 = (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_839; /*0x100891d97*/
  v53 = (__int64)&v91; /*0x100891d9e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v91, &anon_0868f19ff3e9f3569e732f60bdb020cc_839, v132); /*0x100891dac*/
  v51[2] = v93; /*0x100891dbe*/
  v54 = v91; /*0x100891dc2*/
  v55 = v92; /*0x100891dc9*/
  v51[1] = v92; /*0x100891dd0*/
  *v51 = v54; /*0x100891dd4*/
  v142 = 1; /*0x100891dd7*/
  v143 = v51; /*0x100891ddf*/
  v144 = 1; /*0x100891de3*/
  if ( ((v41 != nullptr) & (unsigned __int8)v141) != 0 ) /*0x100891dee*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100891df4*/
      &v91,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_839,
      v55);
    v56 = 28; /*0x100891df9*/
    v53 = 28; /*0x100891dff*/
    v52 = 1; /*0x100891e04*/
    v57 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x100891e09*/
    if ( !v57 ) /*0x100891e11*/
      goto LABEL_117; /*0x100891e11*/
    v58 = v57; /*0x100891e17*/
    *(_QWORD *)(v57 + 16) = 0xBAE78F97E8909AE9LL; /*0x100891e24*/
    *(_QWORD *)(v57 + 8) = 0x9ABCE4207865646FLL; /*0x100891e32*/
    *(_QWORD *)v57 = 0x43209988E5A690E5LL; /*0x100891e40*/
    *(_DWORD *)(v57 + 24) = -1951864897; /*0x100891e43*/
    v59 = v144; /*0x100891e4b*/
    if ( v144 == v142 ) /*0x100891e53*/
    {
      v53 = (__int64)&v142; /*0x100891e55*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v142); /*0x100891e59*/
    }
    v60 = v143; /*0x100891e5e*/
    v61 = 3 * v59; /*0x100891e62*/
    v143[v61] = 28; /*0x100891e66*/
    v60[v61 + 1] = v58; /*0x100891e6e*/
    v60[v61 + 2] = 28; /*0x100891e73*/
    v144 = v59 + 1; /*0x100891e7f*/
  }
  if ( v130 ) /*0x100891e8b*/
  {
    v132[0] = &v130; /*0x100891e94*/
    v132[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100891ea2*/
    v53 = (__int64)&v98; /*0x100891eb0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v98, &unk_101900D29, v132); /*0x100891ebe*/
    v62 = v144; /*0x100891ec3*/
    if ( v144 == v142 ) /*0x100891ecb*/
    {
      v53 = (__int64)&v142; /*0x100891ecd*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v142); /*0x100891ed1*/
    }
    v63 = v143; /*0x100891ed6*/
    v64 = 3 * v62; /*0x100891eda*/
    v143[v64 + 2] = v100; /*0x100891ee5*/
    v55 = v98; /*0x100891eea*/
    v52 = v99; /*0x100891ef1*/
    v63[v64 + 1] = v99; /*0x100891ef8*/
    v63[v64] = v55; /*0x100891efd*/
    v144 = v62 + 1; /*0x100891f04*/
  }
  if ( v131 ) /*0x100891f10*/
  {
    v132[0] = &v131; /*0x100891f19*/
    v132[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100891f27*/
    v53 = (__int64)&v95; /*0x100891f35*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v95, &unk_10190205D, v132); /*0x100891f43*/
    v65 = v144; /*0x100891f48*/
    if ( v144 == v142 ) /*0x100891f50*/
    {
      v53 = (__int64)&v142; /*0x100891f52*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v142); /*0x100891f56*/
    }
    v66 = v143; /*0x100891f5b*/
    v67 = 3 * v65; /*0x100891f5f*/
    v143[v67 + 2] = v97; /*0x100891f6a*/
    v55 = v95; /*0x100891f6f*/
    v52 = v96; /*0x100891f76*/
    v66[v67 + 1] = v96; /*0x100891f7d*/
    v66[v67] = v55; /*0x100891f82*/
    v144 = v65 + 1; /*0x100891f89*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v52, v55); /*0x100891f8d*/
  v56 = 27; /*0x100891f92*/
  v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x100891fa2*/
  if ( !v68 ) /*0x100891faa*/
LABEL_117:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v56); /*0x10089236c*/
  v70 = v68; /*0x100891fb0*/
  qmemcpy(v68, "thread_provider_consistency", 27); /*0x100891fd9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1, v69); /*0x100891fe4*/
  v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100891ff3*/
  v72 = v71; /*0x100891ff8*/
  if ( !v71 ) /*0x100891ffe*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100892385*/
  *(_BYTE *)(v71 + 4) = 114; /*0x100892004*/
  *(_DWORD *)v71 = 1869771365; /*0x100892009*/
  alloc::str::join_generic_copy::h877a7dfcc3252013(v132, v143, v144, &unk_101787E23, 3); /*0x10089202c*/
  v138 = v132[2]; /*0x100892038*/
  v137 = (__int64 (__fastcall *)())v132[1]; /*0x10089204a*/
  v136 = (__int64 *)v132[0]; /*0x10089204e*/
  v132[0] = &v136; /*0x100892056*/
  v132[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100892064*/
  v132[2] = &v133; /*0x100892072*/
  v132[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100892079*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v90, &unk_101902094, v132); /*0x100892095*/
  if ( v136 ) /*0x1008920a1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1); /*0x1008920ac*/
  v73 = v117; /*0x1008920b8*/
  *(_QWORD *)(v117 + 88) = v90[2]; /*0x1008920bf*/
  v74 = v90[0]; /*0x1008920c3*/
  *(_QWORD *)(v73 + 80) = v90[1]; /*0x1008920d1*/
  *(_QWORD *)(v73 + 72) = v74; /*0x1008920d5*/
  *(_QWORD *)v73 = 27; /*0x1008920d9*/
  *(_QWORD *)(v73 + 8) = v70; /*0x1008920e0*/
  *(_QWORD *)(v73 + 16) = 27; /*0x1008920e4*/
  *(_QWORD *)(v73 + 24) = 5; /*0x1008920ec*/
  *(_QWORD *)(v73 + 32) = v72; /*0x1008920f4*/
  *(_QWORD *)(v73 + 40) = 5; /*0x1008920f8*/
  *(_QWORD *)(v73 + 48) = v145; /*0x100892104*/
  *(_QWORD *)(v73 + 56) = v45; /*0x100892108*/
  *(_QWORD *)(v73 + 64) = v46; /*0x10089210c*/
  *(_BYTE *)(v73 + 96) = 1; /*0x100892110*/
  v75 = v144; /*0x100892114*/
  if ( v144 ) /*0x10089211b*/
  {
    v76 = v143 + 1; /*0x100892121*/
    do /*0x100892137*/
    {
      v77 = *(v76 - 1); /*0x100892139*/
      if ( v77 ) /*0x100892140*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v76, v77, 1); /*0x10089214a*/
      v76 += 3; /*0x100892130*/
      --v75; /*0x100892134*/
    }
    while ( v75 ); /*0x100892137*/
  }
  if ( v142 ) /*0x100892158*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, 24 * v142, 8); /*0x10089216b*/
  v78 = v133; /*0x100892170*/
  if ( v133 ) /*0x10089217a*/
LABEL_108:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v78, 1); /*0x10089217c*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h9a16b6063e438470(&v118); /*0x100892199*/
}