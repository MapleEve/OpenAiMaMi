// codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h57d6eda4abd96646
// addr=0x100825030 size=0x16d2 module=AiMaMi (mac, symbolized) idb=/Volumes/Work/internal-history/C5CodexManager/raw/binary/AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
// FULL BODY, NO TRUNCATION MARKER. decompiled via mcp__ida-pro-mcp-mac__decompile.
// 顶层递归编排函数：串联 catalog 准备 -> proxy 启动 -> auth 准备/提交 -> config takeover -> thread reconcile -> project state 修复 -> model catalog 收敛 -> windows-retry 配置变更 -> auth commit。
// 每个阶段都经 record_timing 记录耗时并调用可选进度回调 a7/a8(vtable+32) 上报阶段名字符串。
char *__fastcall codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h57d6eda4abd96646(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // edx
  int v15; // r15d
  unsigned __int8 v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r15
  int v20; // edx
  int v21; // r12d
  __int64 v22; // rsi
  void *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  _BYTE *v27; // rdi
  __int64 v28; // r15
  int v29; // edx
  int v30; // r13d
  __int64 v31; // rbx
  unsigned __int8 v32; // r12
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // r15
  char v38; // bl
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  int v42; // edx
  int v43; // r13d
  _BYTE *v44; // rsi
  __int64 v45; // rbx
  _QWORD *v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rbx
  _QWORD *v49; // r14
  __int64 v50; // rsi
  char *v52; // r14
  char *v53; // r14
  __int64 v54; // rdx
  _QWORD *v55; // r8
  __int64 v56; // r13
  unsigned int v57; // edx
  unsigned int v58; // ebx
  __int64 *v59; // rdi
  int v60; // edx
  int v61; // r13d
  __int64 v62; // r15
  char v63; // bl
  __int64 v64; // r13
  int v65; // edx
  int v66; // r15d
  __int64 *v67; // rdi
  __int64 v68; // r15
  int v69; // edx
  int v70; // r13d
  __int64 v71; // rax
  __int64 *v72; // rdi
  __int64 v73; // r15
  int v74; // edx
  int v75; // r13d
  char v76; // bl
  __int64 v77; // r15
  _QWORD *v78; // rax
  __int64 v79; // rcx
  char *v80; // r14
  void *v81; // rax
  void *v82; // r14
  _QWORD *v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // r8
  char v86; // al
  char *v87; // rdx
  __int64 v88; // [rsp+18h] [rbp-6B8h] BYREF
  _BYTE v89[96]; // [rsp+20h] [rbp-6B0h] BYREF
  _QWORD v90[3]; // [rsp+80h] [rbp-650h] BYREF
  _BYTE v91[24]; // [rsp+98h] [rbp-638h] BYREF
  _QWORD v92[3]; // [rsp+B0h] [rbp-620h] BYREF
  _QWORD v93[3]; // [rsp+C8h] [rbp-608h] BYREF
  _QWORD v94[3]; // [rsp+E0h] [rbp-5F0h] BYREF
  _QWORD v95[3]; // [rsp+F8h] [rbp-5D8h] BYREF
  _QWORD v96[3]; // [rsp+110h] [rbp-5C0h] BYREF
  _BYTE v97[24]; // [rsp+128h] [rbp-5A8h] BYREF
  _BYTE v98[24]; // [rsp+140h] [rbp-590h] BYREF
  _QWORD v99[3]; // [rsp+158h] [rbp-578h] BYREF
  _QWORD v100[3]; // [rsp+170h] [rbp-560h] BYREF
  __int64 v101; // [rsp+188h] [rbp-548h] BYREF
  _QWORD v102[13]; // [rsp+190h] [rbp-540h] BYREF
  _QWORD v103[12]; // [rsp+1F8h] [rbp-4D8h] BYREF
  _QWORD v104[10]; // [rsp+258h] [rbp-478h] BYREF
  _BYTE v105[104]; // [rsp+2A8h] [rbp-428h] BYREF
  _BYTE __dst[184]; // [rsp+310h] [rbp-3C0h] BYREF
  _QWORD v107[3]; // [rsp+3C8h] [rbp-308h] BYREF
  _QWORD v108[2]; // [rsp+3E0h] [rbp-2F0h] BYREF
  __int64 v109; // [rsp+3F0h] [rbp-2E0h]
  __int64 v110; // [rsp+3F8h] [rbp-2D8h]
  __int64 v111; // [rsp+400h] [rbp-2D0h]
  __int64 v112; // [rsp+408h] [rbp-2C8h]
  _QWORD *v113; // [rsp+410h] [rbp-2C0h]
  __int64 v114; // [rsp+418h] [rbp-2B8h]
  _BYTE v115[104]; // [rsp+420h] [rbp-2B0h] BYREF
  _QWORD v116[23]; // [rsp+488h] [rbp-248h] BYREF
  __int64 v117; // [rsp+540h] [rbp-190h] BYREF
  __int64 v118; // [rsp+548h] [rbp-188h] BYREF
  __int64 v119; // [rsp+550h] [rbp-180h] BYREF
  __int64 v120; // [rsp+558h] [rbp-178h] BYREF
  __int64 v121; // [rsp+560h] [rbp-170h] BYREF
  __int64 v122; // [rsp+568h] [rbp-168h] BYREF
  __int64 v123; // [rsp+570h] [rbp-160h] BYREF
  __int64 v124; // [rsp+578h] [rbp-158h]
  __int64 v125; // [rsp+580h] [rbp-150h]
  __int64 v126; // [rsp+588h] [rbp-148h]
  _OWORD v127[6]; // [rsp+590h] [rbp-140h] BYREF
  __int64 v128; // [rsp+5F0h] [rbp-E0h] BYREF
  __int64 v129; // [rsp+5F8h] [rbp-D8h]
  __int64 v130; // [rsp+600h] [rbp-D0h]
  __int64 v131; // [rsp+608h] [rbp-C8h] BYREF
  _QWORD *v132; // [rsp+610h] [rbp-C0h]
  __int64 v133; // [rsp+618h] [rbp-B8h]
  _BYTE v134[104]; // [rsp+620h] [rbp-B0h] BYREF
  __int64 v135; // [rsp+688h] [rbp-48h]
  char v136; // [rsp+696h] [rbp-3Ah] BYREF
  char v137; // [rsp+697h] [rbp-39h] BYREF
  char *v138; // [rsp+698h] [rbp-38h]
  _BYTE v139[41]; // [rsp+6A7h] [rbp-29h] BYREF

  v135 = a2; /*0x10082504a*/
  v138 = a1; /*0x10082504e*/
  v108[0] = a5; /*0x100825052*/
  v108[1] = a6; /*0x100825059*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100825060*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10082506f*/
  if ( !v10 ) /*0x100825077*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100825d9f*/
  v11 = (_QWORD *)v10; /*0x10082507d*/
  *(_QWORD *)v115 = v108; /*0x100825087*/
  *(_QWORD *)&v115[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100825095*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v107, &unk_1018651D6, v115); /*0x1008250b1*/
  v11[2] = v107[2]; /*0x1008250bd*/
  v12 = v107[0]; /*0x1008250c1*/
  v11[1] = v107[1]; /*0x1008250cf*/
  *v11 = v12; /*0x1008250d3*/
  v131 = 1; /*0x1008250d6*/
  v132 = v11; /*0x1008250e1*/
  v133 = 1; /*0x1008250e8*/
  v128 = 0; /*0x1008250f3*/
  v129 = 8; /*0x1008250fe*/
  v130 = 0; /*0x100825109*/
  v13 = std::time::Instant::now::hda76af2c3a449055(v107); /*0x100825119*/
  v15 = v14; /*0x10082511c*/
  v16 = *(_BYTE *)(a4 + 72); /*0x10082512f*/
  codexmate_lib::core::relay::codex_catalog::prepare_router_catalog::h26790cae2666606c( /*0x100825159*/
    (unsigned int)v115,
    v135,
    *(_QWORD *)(a4 + 8),
    *(_QWORD *)(a4 + 16),
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 40),
    v16 ^ 1,
    *(_QWORD *)(a4 + 56),
    *(_QWORD *)(a4 + 64));
  qmemcpy(v105, &v115[8], 0x60u); /*0x10082517e*/
  if ( __OFSUB__(-*(_QWORD *)v115, 1) ) /*0x100825168*/
  {
    qmemcpy(v138, v105, 0x60u); /*0x100825193*/
LABEL_35:
    v45 = v130; /*0x100825a96*/
    if ( v130 ) /*0x100825aa0*/
    {
      v46 = (_QWORD *)(v129 + 8); /*0x100825aa9*/
      do /*0x100825ab7*/
      {
        v47 = *(v46 - 1); /*0x100825ab9*/
        if ( v47 ) /*0x100825ac0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v46, v47, 1); /*0x100825aca*/
        v46 += 3; /*0x100825ab0*/
        --v45; /*0x100825ab4*/
      }
      while ( v45 ); /*0x100825ab7*/
    }
    if ( v128 ) /*0x100825adb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, 24 * v128, 8); /*0x100825af1*/
    v48 = v133; /*0x100825af6*/
    if ( v133 ) /*0x100825b00*/
    {
      v49 = v132 + 1; /*0x100825b09*/
      do /*0x100825b17*/
      {
        v50 = *(v49 - 1); /*0x100825b19*/
        if ( v50 ) /*0x100825b20*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v49, v50, 1); /*0x100825b2a*/
        v49 += 3; /*0x100825b10*/
        --v48; /*0x100825b14*/
      }
      while ( v48 ); /*0x100825b17*/
    }
    if ( v131 ) /*0x100825b3b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, 24 * v131, 8); /*0x100825b51*/
    return v138; /*0x100825b51*/
  }
  qmemcpy(v102, v105, 0x60u); /*0x1008251bc*/
  v101 = *(_QWORD *)v115; /*0x1008251bf*/
  v102[12] = v116[0]; /*0x1008251c6*/
  v17 = qword_1016F72B8[BYTE1(v102[11])]; /*0x1008251db*/
  *(_QWORD *)v105 = (char *)dword_1016F72E0 + dword_1016F72E0[BYTE1(v102[11])]; /*0x1008251ed*/
  *(_QWORD *)&v105[8] = v17; /*0x1008251f4*/
  *(_QWORD *)v134 = v102[4]; /*0x100825202*/
  LOBYTE(v127[0]) = v102[11]; /*0x100825210*/
  *(_QWORD *)v115 = a4 + 72; /*0x100825216*/
  *(_QWORD *)&v115[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100825224*/
  *(_QWORD *)&v115[16] = v105; /*0x10082522b*/
  *(_QWORD *)&v115[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100825239*/
  *(_QWORD *)&v115[32] = v134; /*0x100825247*/
  *(_QWORD *)&v115[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825255*/
  *(_QWORD *)&v115[48] = v127; /*0x100825263*/
  *(_QWORD *)&v115[56] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10082526a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v100, &unk_101865201, v115); /*0x100825286*/
  v18 = 0; /*0x10082529e*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302( /*0x1008252a6*/
    0,
    (__int64)"catalog_preflightstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_preflight",
    17,
    v13,
    v15,
    v100);
  if ( a7 ) /*0x1008252b0*/
  {
    v18 = (__int64)a7; /*0x1008252be*/
    (*(void (__fastcall **)(_BYTE *, char *, __int64))(a8 + 32))( /*0x1008252c6*/
      a7,
      "starting_proxyproxy_startedproxy_root_present=truepreparing_authauth_preflight",
      14);
  }
  v19 = std::time::Instant::now::hda76af2c3a449055(v18); /*0x1008252ce*/
  v21 = v20; /*0x1008252d1*/
  codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::h1d3cd4056591a882(v115, a3); /*0x1008252de*/
  if ( *(_DWORD *)v115 != 11 ) /*0x1008252ea*/
  {
    qmemcpy(v138, v115, 0x60u); /*0x1008253c2*/
LABEL_34:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..PreparedRouterCatalog$GT$::hd63470662830d861(&v101); /*0x100825a8a*/
    goto LABEL_35; /*0x100825a91*/
  }
  v22 = *(_QWORD *)(a3 + 24); /*0x1008252f0*/
  codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h9ce41c2c24451f8d(v115, v22); /*0x1008252fb*/
  if ( *(_QWORD *)v115 == 0x8000000000000000LL ) /*0x100825314*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v115, v22); /*0x10082531a*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100825329*/
    if ( !v23 ) /*0x100825331*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1008266ca*/
    qmemcpy(v23, "relay proxy started without an available root URL", 49); /*0x100825387*/
    v24 = v138; /*0x10082538e*/
    *(_QWORD *)v138 = 10; /*0x100825392*/
    v24[1] = 49; /*0x100825399*/
    v24[2] = v23; /*0x1008253a1*/
    v24[3] = 49; /*0x1008253a5*/
    goto LABEL_34; /*0x1008253ad*/
  }
  v123 = *(_QWORD *)v115; /*0x1008253d8*/
  v124 = *(_QWORD *)&v115[8]; /*0x1008253df*/
  v125 = *(_QWORD *)&v115[16]; /*0x1008253e6*/
  LOBYTE(v117) = 0; /*0x1008253ed*/
  v104[0] = "proxy_startedproxy_root_present=truepreparing_authauth_preflight"; /*0x1008253fb*/
  v104[1] = 13; /*0x100825402*/
  v103[0] = v19; /*0x10082540d*/
  LODWORD(v103[1]) = v21; /*0x100825414*/
  v25 = std::time::Instant::elapsed::h457f209775ed485c(v103); /*0x100825422*/
  v127[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v25 + v26 / 0xF4240uLL; /*0x100825445*/
  *(_QWORD *)v134 = "proxy_root_present=truepreparing_authauth_preflight"; /*0x10082545a*/
  *(_QWORD *)&v134[8] = 23; /*0x100825461*/
  *(_QWORD *)v115 = &v117; /*0x100825473*/
  *(_QWORD *)&v115[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h12200cec4eeaa7ff; /*0x100825481*/
  *(_QWORD *)&v115[16] = v104; /*0x10082548f*/
  *(_QWORD *)&v115[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x10082549d*/
  *(_QWORD *)&v115[32] = v127; /*0x1008254ab*/
  *(_QWORD *)&v115[40] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x1008254b9*/
  *(_QWORD *)&v115[48] = v134; /*0x1008254c7*/
  *(_QWORD *)&v115[56] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x1008254ce*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v105, &unk_1018651B2, v115); /*0x1008254ea*/
  codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a( /*0x10082550e*/
    "router_transitionphase_timingcatalog_preflightstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_preflight",
    17,
    "phase_timingcatalog_preflightstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_preflight",
    12,
    v105);
  codexmate_lib::platform::process::collect_external_codex_writers::h3be8251710adafef(v115); /*0x10082551a*/
  if ( *(_QWORD *)v115 != 11 ) /*0x10082553f*/
  {
    *(_QWORD *)&v105[88] = *(_QWORD *)&v115[88]; /*0x1008259d5*/
    *(_QWORD *)&v105[80] = *(_QWORD *)&v115[80]; /*0x1008259e3*/
    *(_QWORD *)&v105[72] = *(_QWORD *)&v115[72]; /*0x1008259f1*/
    *(_QWORD *)&v105[64] = *(_QWORD *)&v115[64]; /*0x1008259ff*/
    *(_QWORD *)&v105[56] = *(_QWORD *)&v115[56]; /*0x100825a0d*/
    *(_QWORD *)&v105[48] = *(_QWORD *)&v115[48]; /*0x100825a1b*/
    *(_QWORD *)&v105[40] = *(_QWORD *)&v115[40]; /*0x100825a30*/
    *(_QWORD *)&v105[32] = *(_QWORD *)&v115[32]; /*0x100825a37*/
    *(_QWORD *)v105 = *(_QWORD *)v115; /*0x100825a3e*/
    *(_QWORD *)&v105[8] = *(_QWORD *)&v115[8]; /*0x100825a45*/
    *(_QWORD *)&v105[16] = *(_QWORD *)&v115[16]; /*0x100825a4c*/
    *(_QWORD *)&v105[24] = *(_QWORD *)&v115[24]; /*0x100825a53*/
    goto LABEL_31; /*0x100825a53*/
  }
  *(_QWORD *)v134 = *(_QWORD *)&v115[16]; /*0x10082554c*/
  *(_QWORD *)&v134[8] = *(_QWORD *)&v115[16]; /*0x100825553*/
  *(_QWORD *)&v134[16] = *(_QWORD *)&v115[8]; /*0x10082555a*/
  *(_QWORD *)&v134[24] = *(_QWORD *)&v115[16] + 32LL * *(_QWORD *)&v115[24]; /*0x100825561*/
  alloc::vec::in_place_collect::from_iter_in_place::h73f6946e3acb007f(v127, v134); /*0x100825576*/
  v27 = v105; /*0x10082557b*/
  codexmate_lib::platform::process::reject_external_codex_writers::h1eb039688026abfd(v105, v127); /*0x100825589*/
  if ( *(_DWORD *)v105 != 11 ) /*0x100825595*/
  {
LABEL_31:
    qmemcpy(v138, v105, 0x60u); /*0x100825a5a*/
    goto LABEL_32; /*0x100825a6a*/
  }
  if ( a7 ) /*0x1008255a0*/
  {
    v27 = a7; /*0x1008255ae*/
    (*(void (__fastcall **)(_BYTE *, char *, __int64))(a8 + 32))(a7, "preparing_authauth_preflight", 14); /*0x1008255b6*/
  }
  v28 = std::time::Instant::now::hda76af2c3a449055(v27); /*0x1008255be*/
  v30 = v29; /*0x1008255c1*/
  codexmate_lib::core::relay::router_unlock_auth::prepare_auth_for_router::hac5b4d4d3c119a75(v115, v135, v16); /*0x1008255d2*/
  v31 = *(_QWORD *)v115; /*0x1008255d7*/
  v32 = v115[8]; /*0x1008255de*/
  if ( *(_QWORD *)v115 != 11 ) /*0x1008255ea*/
  {
    v52 = v138; /*0x100825b73*/
    memcpy(v138 + 9, &v115[9], 0x57u); /*0x100825b80*/
    *(_QWORD *)v52 = v31; /*0x100825b85*/
    v52[8] = v32; /*0x100825b88*/
    goto LABEL_32; /*0x100825b8c*/
  }
  v139[0] = v115[8]; /*0x1008255f0*/
  *(_QWORD *)v115 = v139; /*0x1008255f8*/
  *(_QWORD *)&v115[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100825606*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v99, &unk_101865245, v115); /*0x100825622*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302( /*0x100825642*/
    0,
    (__int64)"auth_preflight",
    14,
    v28,
    v30,
    v99);
  v33 = std::time::Instant::now::hda76af2c3a449055(0); /*0x100825647*/
  LODWORD(v126) = v34; /*0x10082564c*/
  v35 = v33; /*0x100825652*/
  v36 = v135; /*0x10082565c*/
  codexmate_lib::core::relay::codex_diagnostic::fix_config_preflight::h9135df8c08acac6d(v115, v135); /*0x100825660*/
  v37 = *(_QWORD *)v115; /*0x100825665*/
  v38 = v115[8]; /*0x10082566c*/
  if ( *(_QWORD *)v115 != 11 ) /*0x100825677*/
  {
    v53 = v138; /*0x100825b98*/
    memcpy(v138 + 9, &v115[9], 0x57u); /*0x100825ba5*/
    *(_QWORD *)v53 = v37; /*0x100825baa*/
    v53[8] = v38; /*0x100825bad*/
    goto LABEL_32; /*0x100825bb1*/
  }
  v137 = v115[8]; /*0x10082567d*/
  if ( (v115[8] & 1) != 0 ) /*0x100825683*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v115, v36); /*0x100825689*/
    v39 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x100825698*/
    if ( !v39 ) /*0x1008256a0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37); /*0x1008266db*/
    // NOTE: 37-byte blob 是硬编码 UTF-8 中文字符串（0x98A2E9AE97E982B1 等 LE u64 逐字节还原），语义待人工核对 -- 出现在 config_preflight 修复分支，疑为"检测到冲突配置"一类提示。
    *(_QWORD *)((char *)v39 + 29) = 0x98A2E9AE97E982B1LL; /*0x1008256b0*/
    v39[3] = 0xE982B1E595B3E6ADLL; /*0x1008256be*/
    v39[2] = 0xAFE8206C6D6F742ELL; /*0x1008256cc*/
    v39[1] = 0x6769666E6F63208DLL; /*0x1008256da*/
    *v39 = 0xA4E5AEBFE4B2B7E5LL; /*0x1008256e8*/
    *(_QWORD *)v115 = 37; /*0x1008256eb*/
    *(_QWORD *)&v115[8] = v39; /*0x1008256f6*/
    *(_QWORD *)&v115[16] = 37; /*0x1008256fd*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v131, v115); /*0x100825716*/
  }
  codexmate_lib::core::relay::config_takeover::takeover::h211aae70da9a8385(v115, v135); /*0x100825726*/
  v40 = *(_QWORD *)v115; /*0x10082572b*/
  qmemcpy(v105, &v115[8], 0x50u); /*0x100825745*/
  if ( *(_QWORD *)v115 != 11 ) /*0x10082574c*/
  {
    v54 = *(_QWORD *)&v115[88]; /*0x100825bb6*/
    v55 = v138; /*0x100825bbd*/
    qmemcpy(v138 + 8, v105, 0x50u); /*0x100825bd1*/
    *v55 = v40; /*0x100825bd4*/
    v55[11] = v54; /*0x100825bd7*/
    goto LABEL_32; /*0x100825bdb*/
  }
  qmemcpy(v104, v105, sizeof(v104)); /*0x100825768*/
  if ( v104[8] ) /*0x100825775*/
  {
    alloc::str::join_generic_copy::h02d08564f831751b(v115, v104[7], v104[8], &unk_1016F5D32, 3); /*0x100825796*/
    *(_QWORD *)&v105[16] = *(_QWORD *)&v115[16]; /*0x1008257a2*/
    *(_QWORD *)&v105[8] = *(_QWORD *)&v115[8]; /*0x1008257b7*/
    *(_QWORD *)v105 = *(_QWORD *)v115; /*0x1008257be*/
    *(_QWORD *)v115 = v105; /*0x1008257c5*/
    *(_QWORD *)&v115[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008257d3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_101865258, v115); /*0x1008257ef*/
    if ( *(_QWORD *)v105 ) /*0x1008257fe*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v105[8], *(_QWORD *)v105, 1); /*0x10082580c*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v128, v98); /*0x10082581f*/
  }
  v122 = v104[2]; /*0x100825832*/
  v121 = v104[5]; /*0x100825839*/
  if ( v104[2] | v104[5] ) /*0x100825840*/
  {
    *(_QWORD *)v115 = &v122; /*0x10082584c*/
    *(_QWORD *)&v115[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10082585a*/
    *(_QWORD *)&v115[16] = &v121; /*0x100825868*/
    *(_QWORD *)&v115[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10082586f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1018652D1, v115); /*0x10082588b*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v131, v97); /*0x10082589e*/
  }
  *(_QWORD *)v115 = &v137; /*0x1008258a7*/
  *(_QWORD *)&v115[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1008258b5*/
  *(_QWORD *)&v115[16] = &v122; /*0x1008258c3*/
  *(_QWORD *)&v115[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008258d1*/
  *(_QWORD *)&v115[32] = &v121; /*0x1008258df*/
  *(_QWORD *)&v115[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008258e6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v96, &unk_101865302, v115); /*0x100825902*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302( /*0x100825926*/
    0,
    (__int64)&unk_1016F5D23,
    15,
    v35,
    v126,
    v96);
  codexmate_lib::platform::process::assert_no_external_codex_writers::h5dd5236f58a76499(v115); /*0x100825932*/
  if ( *(_DWORD *)v115 != 11 ) /*0x10082593e*/
  {
    v44 = v115; /*0x100825be0*/
    goto LABEL_54; /*0x100825be0*/
  }
  v41 = std::time::Instant::now::hda76af2c3a449055(v115); /*0x100825949*/
  v43 = v42; /*0x10082594c*/
  *((_QWORD *)&v127[1] + 1) = &anon_597a1ab5dc54f5a7c7ef0ba6972bc544_191; /*0x100825956*/
  *(_QWORD *)&v127[2] = 6; /*0x10082595d*/
  WORD4(v127[2]) = 0; /*0x100825968*/
  *(_QWORD *)&v127[0] = 0x8000000000000000LL; /*0x10082597b*/
  codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress::hedb8602cf4909d61( /*0x100825996*/
    v115,
    v135,
    v127,
    0);
  qmemcpy(v134, &v115[8], 0x60u); /*0x1008259b5*/
  if ( *(_QWORD *)v115 == 2 ) /*0x1008259bc*/
  {
    v44 = v134; /*0x1008259c2*/
LABEL_54:
    qmemcpy(v138, v44, 0x60u); /*0x100825be7*/
LABEL_85:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd6ce6ce320c2b2f8(v104); /*0x100826495*/
LABEL_32:
    if ( v123 ) /*0x100825a77*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v123, 1); /*0x100825a85*/
    goto LABEL_34; /*0x100825a85*/
  }
  memcpy(__dst, v116, sizeof(__dst)); /*0x100825c0b*/
  qmemcpy(&v105[8], v134, 0x60u); /*0x100825c23*/
  *(_QWORD *)v105 = *(_QWORD *)v115; /*0x100825c26*/
  codexmate_lib::core::relay::router_reconciler::record_thread_summary::h1977f27c29649b40(v41, v43, (__int64)v105); /*0x100825c3a*/
  codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h9a788c47605ee6a1( /*0x100825c59*/
    v134,
    (__int64)&unk_1016F4968,
    8,
    (__int64)v105);
  *(_QWORD *)v115 = *(_QWORD *)&v134[8]; /*0x100825c7b*/
  *(_QWORD *)&v115[16] = *(_QWORD *)v134; /*0x100825c82*/
  *(_QWORD *)&v115[8] = *(_QWORD *)&v134[8]; /*0x100825c89*/
  *(_QWORD *)&v115[24] = *(_QWORD *)&v134[8] + 24LL * *(_QWORD *)&v134[16]; /*0x100825c90*/
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h905bbc641d74b26f( /*0x100825ca5*/
    &v131,
    v115);
  codexmate_lib::core::relay::router_reconciler::append_thread_reconcile_warnings::habe6076c14f87082( /*0x100825cc4*/
    &v128,
    (__int64)&unk_1016F4968,
    8,
    (__int64)v105);
  v56 = std::time::Instant::now::hda76af2c3a449055(&v128); /*0x100825cce*/
  v58 = v57; /*0x100825cd1*/
  codexmate_lib::core::relay::codex_project_state::inspect::hcb684185c418e8f5(v115, v135); /*0x100825cde*/
  codexmate_lib::core::relay::codex_project_state::stability_issue::h829c06402e62b9be(v134, v115); /*0x100825cf1*/
  if ( *(_QWORD *)v134 == 0x8000000000000000LL )
  {
    // project_state 稳定：跳过 repair_if_needed，直接记录 project_state 阶段耗时。
    *(_QWORD *)v134 = &v116[5]; /*0x100825d25*/
    *(_QWORD *)&v134[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825d33*/
    *(_QWORD *)&v134[16] = &v116[9]; /*0x100825d3a*/
    *(_QWORD *)&v134[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825d41*/
    *(_QWORD *)&v134[32] = &v116[10]; /*0x100825d48*/
    *(_QWORD *)&v134[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825d4f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v94, &unk_10186537D, v134); /*0x100825d6b*/
    v59 = nullptr; /*0x100825d83*/
    codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
      0,
      (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider,"
               " proxy, or catalogmodel_restoreauth_commit",
      13,
      v56,
      v58,
      v94);
  }
  else
  {
    // project_state 不稳定：先尝试 codex_project_state::repair_if_needed 自动修复。
    if ( *(_QWORD *)v134 ) /*0x100825da7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v134[8], *(_QWORD *)v134, 1); /*0x100825db5*/
    codexmate_lib::core::relay::codex_project_state::repair_if_needed::hd64c5cca3a8ebccf(&v88, v135); /*0x100825dc5*/
    if ( v88 == 0x8000000000000000LL ) /*0x100825de5*/
    {
      // repair 无操作（None）：走 reconcile_router_on::{{closure}} 收尾分支，直接返回。
      qmemcpy(v127, v89, sizeof(v127)); /*0x100825df9*/
      codexmate_lib::core::relay::router_reconciler::reconcile_router_on::_$u7b$$u7b$closure$u7d$$u7d$::h209333e368d48951( /*0x100825e0b*/
        v103,
        v56,
        v58,
        v127);
      qmemcpy(v89, v103, sizeof(v89)); /*0x100825e1f*/
      qmemcpy(v138, v89, 0x60u); /*0x100825e2e*/
LABEL_84:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(v115); /*0x10082647d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::h2b41588bb47f903d(v105); /*0x100826490*/
      goto LABEL_85; /*0x100826490*/
    }
    // repair 执行了修复动作：记录 writing_config/config_sync 阶段耗时并追加警告。
    qmemcpy(&v134[8], v89, 0x60u); /*0x100825e45*/
    *(_QWORD *)v134 = v88; /*0x100825e48*/
    *(_QWORD *)&v127[0] = &v134[96]; /*0x100825e5f*/
    *((_QWORD *)&v127[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100825e6d*/
    *(_QWORD *)&v127[1] = &v134[72]; /*0x100825e74*/
    *((_QWORD *)&v127[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825e82*/
    *(_QWORD *)&v127[2] = &v134[80]; /*0x100825e89*/
    *((_QWORD *)&v127[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825e90*/
    *(_QWORD *)&v127[3] = &v134[88]; /*0x100825e97*/
    *((_QWORD *)&v127[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100825e9e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v95, &unk_10186533B, v127); /*0x100825ebd*/
    codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
      0,
      (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider,"
               " proxy, or catalogmodel_restoreauth_commit",
      13,
      v56,
      v58,
      v95);
    *(_QWORD *)&v127[1] = *(_QWORD *)&v134[16]; /*0x100825ee9*/
    v127[0] = *(_OWORD *)v134; /*0x100825f05*/
    v59 = &v131; /*0x100825f0f*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v131, v127); /*0x100825f1d*/
    if ( 2LL * *(_QWORD *)&v134[24] ) /*0x100825f29*/
    {
      v59 = *(__int64 **)&v134[32]; /*0x100825f36*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v134[32], *(_QWORD *)&v134[24], 1); /*0x100825f42*/
    }
    if ( 2LL * *(_QWORD *)&v134[48] ) /*0x100825f4b*/
    {
      v59 = *(__int64 **)&v134[56]; /*0x100825f58*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v134[56], *(_QWORD *)&v134[48], 1); /*0x100825f61*/
    }
  }
  if ( a7 )
  {
    v59 = (__int64 *)a7; /*0x100825f79*/
    (*(void (__fastcall **)(_BYTE *, char *, __int64))(a8 + 32))(
      a7,
      "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit",
      14);
  }
  v126 = std::time::Instant::now::hda76af2c3a449055(v59); /*0x100825f89*/
  v61 = v60; /*0x100825f90*/
  *(_QWORD *)&v127[0] = v135; /*0x100825f97*/
  *((_QWORD *)&v127[0] + 1) = a4; /*0x100825f9e*/
  *(_QWORD *)&v127[1] = &v123; /*0x100825fac*/
  *((_QWORD *)&v127[1] + 1) = v139; /*0x100825fb7*/
  *(_QWORD *)&v127[2] = &v101; /*0x100825fc5*/
  // ⚠ 关键调用点：run_config_mutation_with_windows_retry — 配置变更的 Windows 重试封装，见 0005 文件。
  codexmate_lib::core::relay::router_reconciler::run_config_mutation_with_windows_retry::h653807a6acdd9390( /*0x100825fda*/
    (__int64)v134,
    (__int64 *)v127);
  v62 = *(_QWORD *)v134; /*0x100825fdf*/
  v63 = v134[8]; /*0x100825fe6*/
  if ( *(_QWORD *)v134 != 11 ) /*0x100825ff1*/
  {
    v80 = v138; /*0x1008263c7*/
    memcpy(v138 + 9, &v134[9], 0x57u); /*0x1008263d4*/
    *(_QWORD *)v80 = v62; /*0x1008263d9*/
    v80[8] = v63; /*0x1008263dc*/
    goto LABEL_84; /*0x1008263e0*/
  }
  v136 = v134[8]; /*0x100825ff7*/
  *(_QWORD *)v134 = &v136; /*0x100825ffe*/
  *(_QWORD *)&v134[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10082600c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v93, &unk_1018653B4, v134); /*0x100826028*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
    0,
    (__int64)"config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit",
    11,
    v126,
    v61,
    v93);
  if ( (v63 & 1) == 0 )
  {
    // ⚠ 硬失败：router reconcile 未生效（缺 active provider/proxy/catalog）— 分配错误字符串 "router reconcile did not become effective: ..." 并直接 goto 收尾返回错误。
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
      0,
      "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit");
    v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(85, 1); /*0x1008263f4*/
    if ( !v81 ) /*0x1008263fc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 85); /*0x1008266ec*/
    v82 = v81; /*0x100826402*/
    memcpy(
      v81,
      "router reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit",
      0x55u);
    v83 = v138; /*0x100826419*/
    *(_QWORD *)v138 = 10; /*0x10082641d*/
    v83[1] = 85; /*0x100826424*/
    v83[2] = v82; /*0x10082642c*/
    v83[3] = 85; /*0x100826430*/
    goto LABEL_84; /*0x100826438*/
  }
  v64 = std::time::Instant::now::hda76af2c3a449055(0); /*0x10082605f*/
  v66 = v65; /*0x100826062*/
  codexmate_lib::core::relay::codex_thread_visibility::restore_relay_model_threads::h82535d2c1b73415e(&v117, v135); /*0x100826070*/
  *(_QWORD *)v134 = &v117; /*0x100826091*/
  *(_QWORD *)&v134[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10082609f*/
  *(_QWORD *)&v134[16] = &v118; /*0x1008260a6*/
  *(_QWORD *)&v134[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008260ad*/
  *(_QWORD *)&v134[32] = &v119; /*0x1008260b4*/
  *(_QWORD *)&v134[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008260bb*/
  *(_QWORD *)&v134[48] = &v120; /*0x1008260c2*/
  *(_QWORD *)&v134[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008260c6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v92, &unk_10185FC73, v134); /*0x1008260df*/
  v67 = nullptr; /*0x1008260f7*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302( /*0x1008260ff*/
    0,
    (__int64)"model_restoreauth_commit",
    13,
    v64,
    v66,
    v92);
  if ( v117 | v120 ) /*0x10082610b*/
  {
    *(_QWORD *)&v127[0] = v118 + v119; /*0x100826126*/
    *(_QWORD *)v134 = &v117; /*0x100826134*/
    *(_QWORD *)&v134[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100826142*/
    *(_QWORD *)&v134[16] = v127; /*0x100826150*/
    *(_QWORD *)&v134[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100826157*/
    *(_QWORD *)&v134[32] = &v120; /*0x10082615e*/
    *(_QWORD *)&v134[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100826165*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v91, &unk_1018653C1, v134); /*0x100826181*/
    v67 = &v131; /*0x100826186*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v131, v91); /*0x100826194*/
  }
  v68 = std::time::Instant::now::hda76af2c3a449055(v67); /*0x10082619e*/
  v70 = v69; /*0x1008261a1*/
  codexmate_lib::core::relay::codex_thread_visibility::converge_router_thread_models_to_catalog::hf327ff37c61d7e1b( /*0x1008261b6*/
    v134,
    v135,
    LOBYTE(v102[11]));
  v71 = *(_QWORD *)v134; /*0x1008261bb*/
  qmemcpy(v127, &v134[8], 0x50u); /*0x1008261d5*/
  if ( *(_QWORD *)v134 != 11 ) /*0x1008261dc*/
  {
    v84 = *(_QWORD *)&v134[88]; /*0x10082643a*/
    v85 = v138; /*0x10082643e*/
    qmemcpy(v138 + 8, v127, 0x50u); /*0x100826452*/
    *v85 = v71; /*0x100826455*/
    v85[11] = v84; /*0x100826458*/
    goto LABEL_84; /*0x10082645c*/
  }
  qmemcpy(v103, v127, 0x50u); /*0x1008261f8*/
  codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary::he8cbc8d6e38f9664( /*0x100826201*/
    v68,
    v70,
    (__int64)v103);
  codexmate_lib::core::relay::router_reconciler::describe_model_catalog_reconcile::h66d13ef64f1e4a34(v127, v103); /*0x100826214*/
  *(_QWORD *)v134 = *((_QWORD *)&v127[0] + 1); /*0x100826236*/
  *(_QWORD *)&v134[8] = *((_QWORD *)&v127[0] + 1); /*0x100826244*/
  *(_QWORD *)&v134[16] = *(_QWORD *)&v127[0]; /*0x100826244*/
  *(_QWORD *)&v134[24] = *((_QWORD *)&v127[0] + 1) + 24LL * *(_QWORD *)&v127[1]; /*0x10082624b*/
  v72 = &v131; /*0x100826252*/
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h905bbc641d74b26f( /*0x100826260*/
    &v131,
    v134);
  // ⚠ auth commit 边界校验：verify_managed_auth_commit_boundary 检查是否为 managed 场景后才 commit_auth_for_router — 这是 auth 提交前的最后一道守卫，任一失败均导致整体返回错误、跳过后续 auth_commit。
  if ( v139[0] /*0x1008262bf*/
    && (v72 = (__int64 *)v134,
        codexmate_lib::core::relay::router_reconciler::verify_managed_auth_commit_boundary::h169b32a5f0773ce1(
          v134,
          v135,
          v124,
          v125,
          a4),
        *(_DWORD *)v134 != 11)
    || (v73 = std::time::Instant::now::hda76af2c3a449055(v72),
        v75 = v74,
        codexmate_lib::core::relay::router_unlock_auth::commit_auth_for_router::hf3f73f5a9c70c848(v134, v135, v32),
        *(_DWORD *)v134 != 11) )
  {
    qmemcpy(v138, v134, 0x60u); /*0x10082646e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogConvergenceSummary$GT$::hf86c85f38b698ac7(v103); /*0x100826478*/
    goto LABEL_84; /*0x100826478*/
  }
  *(_QWORD *)v134 = v139; /*0x1008262c9*/
  *(_QWORD *)&v134[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1008262d7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v90, &unk_101865245, v134); /*0x1008262f3*/
  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302( /*0x100826313*/
    0,
    (__int64)"auth_commit",
    11,
    v73,
    v75,
    v90);
  v76 = v139[0]; /*0x100826318*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, "auth_commit"); /*0x10082631c*/
  if ( !v76 ) /*0x100826323*/
  {
    // NOTE: 37-byte 中文字符串（0xA894E7AF8FE58180 等），疑为"认证已提交"一类完成态提示。
    v77 = 37; /*0x1008264a6*/
    v78 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x1008264b6*/
    if ( v78 ) /*0x1008264be*/
    {
      *(_QWORD *)((char *)v78 + 29) = 0xA894E7AF8FE58180LL; /*0x1008264ce*/
      v78[3] = 0xE58180E695BDE5BBLL; /*0x1008264dc*/
      v78[2] = 0x99E720687475414FLL; /*0x1008264ea*/
      v78[1] = 0x209EAEE59F9CE7A4LL; /*0x1008264f8*/
      *v78 = 0xAEE8AEA1E7B2B7E5LL; /*0x100826506*/
      v79 = 37; /*0x100826509*/
      goto LABEL_88; /*0x100826509*/
    }
LABEL_97:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v77); /*0x1008266f3*/
  }
  // NOTE: 64-byte 中文字符串（0x8B9EE5A1A8E6ACBD 等），疑为 managed 场景下另一种 auth commit 提示文本（区分于上面的 37 字节文本）。
  v77 = 64; /*0x100826329*/
  v78 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1); /*0x100826339*/
  if ( !v78 ) /*0x100826341*/
    goto LABEL_97; /*0x100826341*/
  v78[7] = 0x8B9EE5A1A8E6ACBDLL; /*0x100826351*/
  v78[6] = 0xE8ADB8E4BE94E680LL; /*0x10082635f*/
  v78[5] = 0xBCE585BBE48CBCEFLL; /*0x10082636d*/
  v78[4] = 0x8180E681AFE8A4AELL; /*0x10082637b*/
  v78[3] = 0xE82079654B204950LL; /*0x100826389*/
  v78[2] = 0x41209F94E79F8EE5LL; /*0x100826397*/
  v78[1] = 0x207865646F4320A8LL; /*0x1008263a5*/
  *v78 = 0x94E7AF90E5B2B7E5LL; /*0x1008263b3*/
  v79 = 64; /*0x1008263b6*/
LABEL_88:
  *(_QWORD *)v134 = v79; /*0x10082650e*/
  *(_QWORD *)&v134[8] = v78; /*0x100826515*/
  *(_QWORD *)&v134[16] = v79; /*0x10082651c*/
  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v131, v134); /*0x100826531*/
  v114 = v133; /*0x10082653d*/
  v113 = v132; /*0x100826552*/
  v112 = v131; /*0x100826559*/
  v111 = v130; /*0x100826567*/
  v110 = v129; /*0x10082657c*/
  v109 = v128; /*0x100826583*/
  if ( v139[0] ) /*0x10082658e*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd9c904b08d4d62c1(v127, a4 + 48); /*0x10082659e*/
    v86 = v139[0]; /*0x1008265a3*/
  }
  else
  {
    *(_QWORD *)&v127[0] = 0; /*0x1008265a9*/
    *((_QWORD *)&v127[0] + 1) = 8; /*0x1008265b4*/
    *(_QWORD *)&v127[1] = 0; /*0x1008265bf*/
    v86 = 0; /*0x1008265ca*/
  }
  *(_QWORD *)&v134[16] = v114; /*0x1008265d3*/
  *(_QWORD *)&v134[8] = v113; /*0x1008265e8*/
  *(_QWORD *)v134 = v112; /*0x1008265ef*/
  *(_QWORD *)&v134[24] = v109; /*0x100826604*/
  *(_QWORD *)&v134[32] = v110; /*0x10082660b*/
  *(_QWORD *)&v134[40] = v111; /*0x100826619*/
  *(_OWORD *)&v134[48] = v127[0]; /*0x10082662e*/
  *(_QWORD *)&v134[64] = *(_QWORD *)&v127[1]; /*0x10082663d*/
  v87 = v138; /*0x100826641*/
  qmemcpy(v138 + 8, v134, 0x48u); /*0x100826655*/
  v87[80] = v86; /*0x100826658*/
  *(_QWORD *)v87 = 11; /*0x10082665b*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogConvergenceSummary$GT$::hf86c85f38b698ac7(v103); /*0x100826669*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(v115); /*0x100826675*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::h2b41588bb47f903d(v105); /*0x100826681*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd6ce6ce320c2b2f8(v104); /*0x10082668d*/
  if ( v123 ) /*0x10082669c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v123, 1); /*0x1008266aa*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..PreparedRouterCatalog$GT$::hd63470662830d861(&v101); /*0x1008266b6*/
  return v138; /*0x100825b5a*/
}
