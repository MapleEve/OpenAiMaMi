// __ZN13codexmate_lib4core5relay16codex_diagnostic31fix_thread_provider_consistency @ 0x10050db20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_thread_provider_consistency::h65b4351e9c8337a6(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3)
{
  char *v5; // rdx
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r15
  void *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r14
  void *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // r14
  void *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  __int64 v44; // rdi
  _BYTE v45[184]; // [rsp+8h] [rbp-2B8h] BYREF
  _QWORD v46[3]; // [rsp+C0h] [rbp-200h] BYREF
  _QWORD v47[3]; // [rsp+D8h] [rbp-1E8h] BYREF
  _QWORD v48[3]; // [rsp+F0h] [rbp-1D0h] BYREF
  __int64 v49; // [rsp+108h] [rbp-1B8h]
  __int64 v50; // [rsp+110h] [rbp-1B0h]
  __int64 v51; // [rsp+118h] [rbp-1A8h]
  char **v52; // [rsp+120h] [rbp-1A0h] BYREF
  _QWORD v53[12]; // [rsp+128h] [rbp-198h] BYREF
  _QWORD v54[11]; // [rsp+188h] [rbp-138h] BYREF
  _QWORD v55[12]; // [rsp+1E0h] [rbp-E0h] BYREF
  char *v56; // [rsp+240h] [rbp-80h] BYREF
  __int64 v57; // [rsp+248h] [rbp-78h]
  unsigned __int64 v58; // [rsp+250h] [rbp-70h] BYREF
  __int64 v59; // [rsp+258h] [rbp-68h]
  __int64 v60; // [rsp+260h] [rbp-60h]
  char *v61; // [rsp+268h] [rbp-58h]
  __int64 v62; // [rsp+270h] [rbp-50h]
  char v63; // [rsp+278h] [rbp-48h]
  __int64 v64; // [rsp+280h] [rbp-40h]
  _QWORD *v65; // [rsp+288h] [rbp-38h]
  __int64 v66; // [rsp+290h] [rbp-30h]

  v5 = "openaicodex_router_catalog.jsonmodels_cache.json"; /*0x10050db44*/
  if ( (a3 & 1) != 0 ) /*0x10050db4f*/
    v5 = "aimai1openaicodex_router_catalog.jsonmodels_cache.json"; /*0x10050db4f*/
  v56 = v5; /*0x10050db53*/
  v57 = 6; /*0x10050db57*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337( /*0x10050db6b*/
    &v52,
    a2,
    v5,
    6);
  if ( v53[9] || v53[10] || v53[11] || v54[0] || v53[4] ) /*0x10050dba0*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(&v52); /*0x10050dbb7*/
    v61 = v56; /*0x10050dbc4*/
    v62 = v57; /*0x10050dbc8*/
    v63 = 0; /*0x10050dbcc*/
    v58 = 0x8000000000000000LL; /*0x10050dbd0*/
    result = codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads::hfdb93758fe0846e8(&v52, a2, &v58); /*0x10050dbe5*/
    qmemcpy(v55, v53, sizeof(v55)); /*0x10050dc04*/
    if ( v52 == (char **)2 ) /*0x10050dc0b*/
    {
      qmemcpy(a1, v55, 0x60u); /*0x10050dc1c*/
      return result; /*0x10050dc1c*/
    }
    qmemcpy(&v45[96], v54, 0x58u); /*0x10050dc3a*/
    qmemcpy(v45, v55, 0x60u); /*0x10050dc53*/
    if ( *(_OWORD *)&v45[88] != 0 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x10050dc7f*/
    {
      v55[0] = &v45[88]; /*0x10050dc8c*/
      v55[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050dc9a*/
      v55[2] = &v45[96]; /*0x10050dca1*/
      v55[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050dca8*/
      v53[5] = 3; /*0x10050dcaf*/
      v53[6] = &anon_92869709a5e99ce1936aa4e326b6c562_437; /*0x10050dcc1*/
      v53[7] = 44; /*0x10050dcc8*/
      v53[9] = &unk_1017C092B; /*0x10050dcda*/
      v53[10] = v55; /*0x10050dce1*/
      v52 = nullptr; /*0x10050dce8*/
      v53[0] = &anon_92869709a5e99ce1936aa4e326b6c562_437; /*0x10050dcf3*/
      v53[1] = 44; /*0x10050dcfa*/
      v53[2] = 0; /*0x10050dd05*/
      v53[3] = "src/core/relay/codex_diagnostic.rs"; /*0x10050dd17*/
      v53[4] = 34; /*0x10050dd1e*/
      v53[8] = 0x6F100000001LL; /*0x10050dd33*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, &v52); /*0x10050dd45*/
    }
    codexmate_lib::core::relay::codex_diagnostic::check_thread_provider_consistency::h1a6e8cd0b3bb277e(&v52, a2, a3); /*0x10050dd58*/
    if ( v53[4] == 2 && (v7 = v53[3], *(_WORD *)v53[3] == 27503) ) /*0x10050dd74*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v52, a2); /*0x10050e281*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050e290*/
      if ( !v34 ) /*0x10050e298*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e4f7*/
      v35 = (_QWORD *)v34; /*0x10050e29e*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050e2a1*/
      v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x10050e2b0*/
      if ( !v36 ) /*0x10050e2b8*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x10050e53b*/
      qmemcpy(v36, "thread_provider_consistency", 27); /*0x10050e2e4*/
      *v35 = 27; /*0x10050e2ee*/
      v35[1] = v36; /*0x10050e2f5*/
      v35[2] = 27; /*0x10050e2f9*/
      v64 = 1; /*0x10050e301*/
      v65 = v35; /*0x10050e309*/
      v66 = 1; /*0x10050e30d*/
      v58 = 0; /*0x10050e315*/
      v59 = 8; /*0x10050e31d*/
      v60 = 0; /*0x10050e325*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1); /*0x10050e32d*/
      v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050e33c*/
      if ( !v37 ) /*0x10050e344*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e508*/
      v38 = (_QWORD *)v37; /*0x10050e34a*/
      v55[0] = &v45[152]; /*0x10050e354*/
      v55[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050e362*/
      v55[2] = &v56; /*0x10050e36d*/
      v55[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10050e37b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, &unk_1017C09CA, v55); /*0x10050e397*/
      v38[2] = v47[2]; /*0x10050e3a3*/
      v39 = v47[0]; /*0x10050e3a7*/
      v38[1] = v47[1]; /*0x10050e3b5*/
      *v38 = v39; /*0x10050e3b9*/
      v40 = v64; /*0x10050e3bc*/
      v41 = v65; /*0x10050e3c0*/
      v55[0] = v64; /*0x10050e3c4*/
      v55[1] = v65; /*0x10050e3cb*/
      v42 = v66; /*0x10050e3d2*/
      v55[2] = v66; /*0x10050e3d6*/
      v43 = v58; /*0x10050e3dd*/
      v44 = v59; /*0x10050e3e1*/
      v55[3] = v58; /*0x10050e3e5*/
      v55[4] = v59; /*0x10050e3ec*/
      v55[5] = v60; /*0x10050e3f7*/
      a1[6] = v60; /*0x10050e3fe*/
      a1[5] = v44; /*0x10050e402*/
      a1[4] = v43; /*0x10050e406*/
      a1[3] = v42; /*0x10050e40a*/
      a1[2] = v41; /*0x10050e40e*/
      a1[1] = v40; /*0x10050e412*/
      a1[7] = 1; /*0x10050e416*/
      a1[8] = v38; /*0x10050e41e*/
      a1[9] = 1; /*0x10050e422*/
      *a1 = 11; /*0x10050e42a*/
      if ( v52 ) /*0x10050e43b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[0], v52, 1); /*0x10050e449*/
      if ( v53[2] ) /*0x10050e458*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v53[2], 1); /*0x10050e462*/
      if ( v53[5] ) /*0x10050e471*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[6], v53[5], 1); /*0x10050e47f*/
      v28 = v53[8]; /*0x10050e484*/
      if ( !(2LL * v53[8]) ) /*0x10050e496*/
        goto LABEL_33; /*0x10050e496*/
      v29 = &v53[9]; /*0x10050e49c*/
    }
    else
    {
      v49 = 0; /*0x10050dd7a*/
      v50 = 8; /*0x10050dd85*/
      v51 = 0; /*0x10050dd90*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v52, a2); /*0x10050dd9b*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050ddaa*/
      if ( !v8 ) /*0x10050ddb2*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e4b2*/
      v9 = (_QWORD *)v8; /*0x10050ddb8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050ddbb*/
      v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x10050ddca*/
      if ( !v10 ) /*0x10050ddd2*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x10050e519*/
      qmemcpy(v10, "thread_provider_consistency", 27); /*0x10050ddfe*/
      *v9 = 27; /*0x10050de08*/
      v9[1] = v10; /*0x10050de0f*/
      v9[2] = 27; /*0x10050de13*/
      v64 = 1; /*0x10050de1b*/
      v65 = v9; /*0x10050de23*/
      v66 = 1; /*0x10050de27*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1); /*0x10050de2f*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050de3e*/
      if ( !v11 ) /*0x10050de4a*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e4c6*/
      v12 = (_QWORD *)v11; /*0x10050de50*/
      if ( v53[8] == 0x8000000000000000LL ) /*0x10050de67*/
      {
        v60 = v53[7]; /*0x10050de78*/
        v59 = v53[6]; /*0x10050de83*/
        v58 = v53[5]; /*0x10050de87*/
      }
      else
      {
        v58 = v53[8]; /*0x10050e067*/
        v59 = v53[9]; /*0x10050e079*/
        v60 = v53[10]; /*0x10050e07d*/
        if ( v53[5] ) /*0x10050e084*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[6], v53[5], 1); /*0x10050e08b*/
      }
      v55[0] = &v45[152]; /*0x10050e090*/
      v55[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050e09e*/
      v55[2] = &v58; /*0x10050e0a5*/
      v55[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050e0b3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1017C0993, v55); /*0x10050e0cf*/
      if ( v58 ) /*0x10050e0e5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x10050e0f0*/
      v12[2] = v46[2]; /*0x10050e0fc*/
      v22 = v46[0]; /*0x10050e100*/
      v12[1] = v46[1]; /*0x10050e10e*/
      *v12 = v22; /*0x10050e112*/
      v23 = v49; /*0x10050e115*/
      v24 = v50; /*0x10050e11c*/
      v55[0] = v49; /*0x10050e123*/
      v55[1] = v50; /*0x10050e12a*/
      v25 = v51; /*0x10050e131*/
      v55[2] = v51; /*0x10050e138*/
      v26 = v64; /*0x10050e13f*/
      v27 = v65; /*0x10050e143*/
      v55[3] = v64; /*0x10050e147*/
      v55[4] = v65; /*0x10050e14e*/
      v55[5] = v66; /*0x10050e159*/
      a1[6] = v66; /*0x10050e160*/
      a1[5] = v27; /*0x10050e164*/
      a1[4] = v26; /*0x10050e168*/
      a1[3] = v25; /*0x10050e16c*/
      a1[2] = v24; /*0x10050e170*/
      a1[1] = v23; /*0x10050e174*/
      a1[7] = 1; /*0x10050e178*/
      a1[8] = v12; /*0x10050e180*/
      a1[9] = 1; /*0x10050e184*/
      *a1 = 11; /*0x10050e18c*/
      if ( v52 ) /*0x10050e19d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[0], v52, 1); /*0x10050e1ab*/
      v28 = v53[2]; /*0x10050e1b0*/
      if ( !v53[2] ) /*0x10050e1ba*/
        goto LABEL_33; /*0x10050e1ba*/
      v29 = &v53[3]; /*0x10050e1bc*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v28, 1); /*0x10050e1cb*/
LABEL_33:
    if ( *(_QWORD *)&v45[48] != 0x8000000000000000LL && *(_QWORD *)&v45[48] ) /*0x10050e1df*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v45[56], *(_QWORD *)&v45[48], 1); /*0x10050e1ed*/
    v30 = *(_QWORD *)&v45[32]; /*0x10050e1f2*/
    v31 = *(_QWORD *)&v45[40]; /*0x10050e1f9*/
    if ( *(_QWORD *)&v45[40] ) /*0x10050e203*/
    {
      v32 = (_QWORD *)(*(_QWORD *)&v45[32] + 8LL); /*0x10050e205*/
      do /*0x10050e217*/
      {
        v33 = *(v32 - 1); /*0x10050e219*/
        if ( v33 ) /*0x10050e220*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x10050e22a*/
        v32 += 3; /*0x10050e210*/
        --v31; /*0x10050e214*/
      }
      while ( v31 ); /*0x10050e217*/
    }
    result = *(_QWORD *)&v45[24]; /*0x10050e231*/
    if ( *(_QWORD *)&v45[24] ) /*0x10050e23b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24LL * *(_QWORD *)&v45[24], 8); /*0x10050e24d*/
    if ( *(_QWORD *)&v45[112] ) /*0x10050e25c*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v45[120], *(_QWORD *)&v45[112], 1); /*0x10050e26a*/
    return result; /*0x10050e26a*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(&v52); /*0x10050de97*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v52, a2); /*0x10050de9c*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050deab*/
  if ( !v13 ) /*0x10050deb3*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e4d7*/
  v14 = (_QWORD *)v13; /*0x10050deb9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050debc*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x10050decb*/
  if ( !v15 ) /*0x10050ded3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x10050e52a*/
  qmemcpy(v15, "thread_provider_consistency", 27); /*0x10050deff*/
  *v14 = 27; /*0x10050df09*/
  v14[1] = v15; /*0x10050df10*/
  v14[2] = 27; /*0x10050df14*/
  v55[0] = 1; /*0x10050df1c*/
  v55[1] = v14; /*0x10050df27*/
  v55[2] = 1; /*0x10050df2e*/
  *(_QWORD *)v45 = 8; /*0x10050df44*/
  *(_QWORD *)&v45[8] = 0; /*0x10050df4f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(27, 1); /*0x10050df5a*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050df69*/
  if ( !v16 ) /*0x10050df71*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050e4e6*/
  v17 = (_QWORD *)v16; /*0x10050df77*/
  v52 = &v56; /*0x10050df7e*/
  v53[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10050df8c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, &unk_1017C0A02, &v52); /*0x10050dfa8*/
  v17[2] = v48[2]; /*0x10050dfb4*/
  v18 = v48[0]; /*0x10050dfb8*/
  v17[1] = v48[1]; /*0x10050dfc6*/
  *v17 = v18; /*0x10050dfca*/
  result = v55[0]; /*0x10050dfcd*/
  v19 = v55[1]; /*0x10050dfd4*/
  v52 = (char **)v55[0]; /*0x10050dfdb*/
  v53[0] = v55[1]; /*0x10050dfe2*/
  v20 = v55[2]; /*0x10050dfe9*/
  v53[1] = v55[2]; /*0x10050dff0*/
  v21 = *(_QWORD *)v45; /*0x10050dffe*/
  v53[2] = 0; /*0x10050e005*/
  v53[3] = *(_QWORD *)v45; /*0x10050e00c*/
  v53[4] = *(_QWORD *)&v45[8]; /*0x10050e01a*/
  a1[6] = *(_QWORD *)&v45[8]; /*0x10050e021*/
  a1[5] = v21; /*0x10050e025*/
  a1[4] = 0; /*0x10050e029*/
  a1[3] = v20; /*0x10050e02d*/
  a1[2] = v19; /*0x10050e031*/
  a1[1] = result; /*0x10050e035*/
  a1[7] = 1; /*0x10050e039*/
  a1[8] = v17; /*0x10050e041*/
  a1[9] = 1; /*0x10050e045*/
  *a1 = 11; /*0x10050e04d*/
  return result; /*0x10050e26f*/
}