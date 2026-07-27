// __ZN13codexmate_lib4core5relay17router_reconciler19reconcile_router_on @ 0x100324ed0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v10; // rax
  _QWORD *v11; // r12
  char *v12; // rsi
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  int v19; // edx
  int v20; // r13d
  void *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // rdi
  char *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r14
  int v30; // edx
  int v31; // r12d
  __int64 v32; // r13
  char v33; // r15
  char v34; // r14
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // r14
  __int64 v41; // r14
  _QWORD *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // r14
  _QWORD *v45; // r15
  __int64 v46; // rsi
  _QWORD *v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  _QWORD *v51; // rax
  __int64 v52; // r15
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // r15
  char v60; // r14
  __int64 v61; // r14
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r14
  unsigned int v68; // edx
  unsigned int v69; // r12d
  _BYTE *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r14
  int v76; // edx
  int v77; // r12d
  char *v78; // rsi
  __int64 *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // edx
  int v84; // r15d
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // r14
  char v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r15
  int v94; // edx
  int v95; // r13d
  char *v96; // rsi
  __int64 *v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r14
  unsigned int v102; // edx
  unsigned int v103; // r15d
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  _QWORD *v107; // rdx
  __int64 v108; // rdi
  __int64 v109; // r8
  char v110; // r9
  void *v111; // rax
  void *v112; // r14
  __int64 v113; // rcx
  __int64 v114; // [rsp+8h] [rbp-548h] BYREF
  _BYTE v115[96]; // [rsp+10h] [rbp-540h] BYREF
  _BYTE v116[24]; // [rsp+70h] [rbp-4E0h] BYREF
  _QWORD v117[3]; // [rsp+88h] [rbp-4C8h] BYREF
  _QWORD v118[3]; // [rsp+A0h] [rbp-4B0h] BYREF
  _QWORD v119[3]; // [rsp+B8h] [rbp-498h] BYREF
  _QWORD v120[3]; // [rsp+D0h] [rbp-480h] BYREF
  _QWORD v121[3]; // [rsp+E8h] [rbp-468h] BYREF
  _BYTE v122[24]; // [rsp+100h] [rbp-450h] BYREF
  _BYTE v123[24]; // [rsp+118h] [rbp-438h] BYREF
  _QWORD v124[3]; // [rsp+130h] [rbp-420h] BYREF
  _QWORD v125[12]; // [rsp+148h] [rbp-408h] BYREF
  _QWORD v126[10]; // [rsp+1A8h] [rbp-3A8h] BYREF
  __int64 v127; // [rsp+1F8h] [rbp-358h] BYREF
  __int64 v128; // [rsp+200h] [rbp-350h]
  __int64 v129; // [rsp+208h] [rbp-348h]
  _BYTE v130[104]; // [rsp+210h] [rbp-340h] BYREF
  _BYTE v131[88]; // [rsp+278h] [rbp-2D8h] BYREF
  _QWORD v132[2]; // [rsp+2D0h] [rbp-280h] BYREF
  __int64 v133; // [rsp+2E0h] [rbp-270h]
  __int64 v134; // [rsp+2E8h] [rbp-268h] BYREF
  __int64 v135; // [rsp+2F0h] [rbp-260h] BYREF
  __int64 v136; // [rsp+2F8h] [rbp-258h] BYREF
  __int64 v137; // [rsp+300h] [rbp-250h] BYREF
  __int64 v138; // [rsp+308h] [rbp-248h] BYREF
  __int64 v139; // [rsp+310h] [rbp-240h] BYREF
  __int64 v140; // [rsp+318h] [rbp-238h]
  _BYTE v141[104]; // [rsp+320h] [rbp-230h] BYREF
  _BYTE v142[120]; // [rsp+388h] [rbp-1C8h] BYREF
  _OWORD v143[6]; // [rsp+400h] [rbp-150h] BYREF
  __int64 v144; // [rsp+468h] [rbp-E8h] BYREF
  __int64 v145; // [rsp+470h] [rbp-E0h]
  __int64 v146; // [rsp+478h] [rbp-D8h]
  _QWORD *v147; // [rsp+480h] [rbp-D0h]
  _BYTE v148[104]; // [rsp+488h] [rbp-C8h] BYREF
  __int64 v149; // [rsp+4F0h] [rbp-60h]
  __int64 v150; // [rsp+4F8h] [rbp-58h] BYREF
  _QWORD *v151; // [rsp+500h] [rbp-50h]
  __int64 v152; // [rsp+508h] [rbp-48h]
  __int64 v153; // [rsp+510h] [rbp-40h]
  __int64 v154; // [rsp+518h] [rbp-38h]
  char v155; // [rsp+525h] [rbp-2Bh] BYREF
  char v156; // [rsp+526h] [rbp-2Ah] BYREF
  char v157; // [rsp+527h] [rbp-29h] BYREF

  v140 = a4; /*0x100324ee4*/
  v154 = a2; /*0x100324eee*/
  v132[0] = a5; /*0x100324ef5*/
  v132[1] = a6; /*0x100324efc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100324f03*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100324f12*/
  if ( !v10 ) /*0x100324f1a*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100325bdb*/
  v11 = (_QWORD *)v10; /*0x100324f20*/
  *(_QWORD *)v141 = v132; /*0x100324f2a*/
  *(_QWORD *)&v141[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100324f38*/
  v12 = (char *)&unk_1017BBC75; /*0x100324f3f*/
  v13 = &v127; /*0x100324f46*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v127, &unk_1017BBC75, v141); /*0x100324f54*/
  v11[2] = v129; /*0x100324f60*/
  v16 = v127; /*0x100324f65*/
  v17 = v128; /*0x100324f6c*/
  v11[1] = v128; /*0x100324f73*/
  *v11 = v16; /*0x100324f78*/
  v150 = 1; /*0x100324f7c*/
  v151 = v11; /*0x100324f84*/
  v152 = 1; /*0x100324f88*/
  v144 = 0; /*0x100324f90*/
  v145 = 8; /*0x100324f9b*/
  v146 = 0; /*0x100324fa6*/
  if ( a7 ) /*0x100324fb6*/
  {
    v12 = "starting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready"; /*0x100324fb8*/
    v13 = a7; /*0x100324fc4*/
    (*(void (__fastcall **)(__int64 *, char *, __int64))(a8 + 32))( /*0x100324fcc*/
      a7,
      "starting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
      14);
  }
  v18 = std::time::Instant::now::hda76af2c3a449055(v13, v12, v14, v17, v15); /*0x100324fd4*/
  v20 = v19; /*0x100324fd7*/
  codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hc950904f39b7e9e1((__int64)v141, a3); /*0x100324fe4*/
  if ( *(_DWORD *)v141 != 11 ) /*0x100324ff0*/
  {
    qmemcpy(a1, v141, 0x60u); /*0x1003250bb*/
    goto LABEL_21; /*0x1003250bb*/
  }
  codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h0e74109fd00d63ed(v141, a3); /*0x100325000*/
  if ( __OFSUB__(-*(_QWORD *)v141, 1) ) /*0x10032500f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v141, a3); /*0x100325018*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100325027*/
    if ( !v21 ) /*0x10032502f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x100326196*/
    qmemcpy(v21, "relay proxy started without an available root URL", 49); /*0x100325085*/
    *a1 = 10; /*0x10032508c*/
    a1[1] = 49; /*0x100325093*/
    a1[2] = v21; /*0x10032509b*/
    a1[3] = 49; /*0x10032509f*/
    goto LABEL_21; /*0x1003250a7*/
  }
  v153 = *(_QWORD *)v141; /*0x1003250c3*/
  v147 = *(_QWORD **)&v141[8]; /*0x1003250ce*/
  v133 = *(_QWORD *)&v141[16]; /*0x1003250dc*/
  LOBYTE(v134) = 0; /*0x1003250e3*/
  v126[0] = "proxy_startedproxy_root_present=truepreparing_authauth_ready"; /*0x1003250f1*/
  v126[1] = 13; /*0x1003250f8*/
  v125[0] = v18; /*0x100325103*/
  LODWORD(v125[1]) = v20; /*0x10032510a*/
  v22 = std::time::Instant::elapsed::h457f209775ed485c(v125); /*0x100325118*/
  v143[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v22 + v23 / 0xF4240uLL; /*0x10032513b*/
  *(_QWORD *)v148 = "proxy_root_present=truepreparing_authauth_ready"; /*0x100325150*/
  *(_QWORD *)&v148[8] = 23; /*0x100325157*/
  *(_QWORD *)v141 = &v134; /*0x100325169*/
  *(_QWORD *)&v141[8] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x100325177*/
  *(_QWORD *)&v141[16] = v126; /*0x100325185*/
  *(_QWORD *)&v141[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10032518c*/
  *(_QWORD *)&v141[32] = v143; /*0x10032519a*/
  *(_QWORD *)&v141[40] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x1003251a8*/
  *(_QWORD *)&v141[48] = v148; /*0x1003251b6*/
  *(_QWORD *)&v141[56] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003251bd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v130, &unk_1017BBC51, v141); /*0x1003251d9*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x1003251fd*/
    "router_transitionphase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
    17,
    "phase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
    12,
    v130);
  codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(v141); /*0x100325209*/
  if ( *(_QWORD *)v141 != 11 ) /*0x10032522e*/
  {
    *(_QWORD *)&v130[88] = *(_QWORD *)&v141[88]; /*0x1003253bd*/
    *(_QWORD *)&v130[80] = *(_QWORD *)&v141[80]; /*0x1003253cb*/
    *(_QWORD *)&v130[72] = *(_QWORD *)&v141[72]; /*0x1003253d9*/
    *(_QWORD *)&v130[64] = *(_QWORD *)&v141[64]; /*0x1003253e7*/
    *(_QWORD *)&v130[56] = *(_QWORD *)&v141[56]; /*0x1003253f5*/
    *(_QWORD *)&v130[48] = *(_QWORD *)&v141[48]; /*0x100325403*/
    *(_QWORD *)&v130[40] = *(_QWORD *)&v141[40]; /*0x100325418*/
    *(_QWORD *)&v130[32] = *(_QWORD *)&v141[32]; /*0x10032541f*/
    *(_QWORD *)v130 = *(_QWORD *)v141; /*0x100325426*/
    *(_QWORD *)&v130[8] = *(_QWORD *)&v141[8]; /*0x10032542d*/
    *(_QWORD *)&v130[16] = *(_QWORD *)&v141[16]; /*0x100325434*/
    *(_QWORD *)&v130[24] = *(_QWORD *)&v141[24]; /*0x10032543b*/
    goto LABEL_18; /*0x10032543b*/
  }
  *(_QWORD *)v148 = *(_QWORD *)&v141[16]; /*0x10032523b*/
  *(_QWORD *)&v148[8] = *(_QWORD *)&v141[16]; /*0x100325242*/
  *(_QWORD *)&v148[16] = *(_QWORD *)&v141[8]; /*0x100325249*/
  *(_QWORD *)&v148[24] = *(_QWORD *)&v141[16] + 32LL * *(_QWORD *)&v141[24]; /*0x100325250*/
  alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(v143, v148); /*0x100325265*/
  v24 = (__int64 *)v130; /*0x10032526a*/
  v25 = (char *)v143; /*0x100325271*/
  codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(v130, v143); /*0x100325278*/
  if ( *(_DWORD *)v130 != 11 ) /*0x100325284*/
  {
LABEL_18:
    qmemcpy(a1, v130, 0x60u); /*0x100325451*/
    goto LABEL_19; /*0x100325451*/
  }
  if ( a7 ) /*0x10032528f*/
  {
    v25 = "preparing_authauth_ready"; /*0x100325291*/
    v24 = a7; /*0x10032529d*/
    (*(void (__fastcall **)(__int64 *, char *, __int64))(a8 + 32))(a7, "preparing_authauth_ready", 14); /*0x1003252a5*/
  }
  v29 = std::time::Instant::now::hda76af2c3a449055(v24, v25, v26, v27, v28); /*0x1003252ad*/
  v31 = v30; /*0x1003252b0*/
  codexmate_lib::core::relay::router_unlock_auth::prepare_auth_for_router::h5194b92ecafd8ccf( /*0x1003252c9*/
    v141,
    v154,
    *(unsigned __int8 *)(v140 + 48));
  v32 = *(_QWORD *)v141; /*0x1003252ce*/
  v33 = v141[8]; /*0x1003252d5*/
  if ( *(_QWORD *)v141 != 11 ) /*0x1003252e1*/
  {
    memcpy((char *)a1 + 9, &v141[9], 0x57u); /*0x100325555*/
    *a1 = v32; /*0x10032555a*/
    *((_BYTE *)a1 + 8) = v33; /*0x10032555d*/
    goto LABEL_19; /*0x100325561*/
  }
  v157 = v141[8]; /*0x1003252e7*/
  *(_QWORD *)v141 = &v157; /*0x1003252ef*/
  *(_QWORD *)&v141[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1003252fd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v124, &unk_1017BBCA0, v141); /*0x100325319*/
  codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989( /*0x100325339*/
    0,
    (__int64)"auth_ready",
    10,
    v29,
    v31,
    v124);
  v34 = v157; /*0x10032533e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, "auth_ready"); /*0x100325343*/
  if ( v34 ) /*0x10032534b*/
  {
    v35 = 36; /*0x100325351*/
    v36 = 36; /*0x100325357*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100325361*/
    if ( !v37 ) /*0x100325369*/
      goto LABEL_87; /*0x100325369*/
    v40 = (_QWORD *)v37; /*0x10032536f*/
    *(_QWORD *)(v37 + 24) = 0x8FE58180E695BDE5LL; /*0x10032537c*/
    *(_QWORD *)(v37 + 16) = 0xBB99E7B78FE5A6B4LL; /*0x10032538a*/
    *(_QWORD *)(v37 + 8) = 0xE89F8BE69A99E8A4LL; /*0x100325398*/
    *(_QWORD *)v37 = 0xAEE8AEA1E7B2B7E5LL; /*0x1003253a6*/
    *(_DWORD *)(v37 + 32) = -1466636369; /*0x1003253a9*/
  }
  else
  {
    v35 = 37; /*0x100325566*/
    v36 = 37; /*0x10032556c*/
    v51 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x100325576*/
    if ( !v51 ) /*0x10032557e*/
      goto LABEL_87; /*0x10032557e*/
    v40 = v51; /*0x100325584*/
    *(_QWORD *)((char *)v51 + 29) = 0xA894E7AF8FE58180LL; /*0x100325591*/
    v51[3] = 0xE58180E695BDE5BBLL; /*0x10032559f*/
    v51[2] = 0x99E720687475414FLL; /*0x1003255ad*/
    v51[1] = 0x209EAEE59F9CE7A4LL; /*0x1003255bb*/
    *v51 = 0xAEE8AEA1E7B2B7E5LL; /*0x1003255c9*/
  }
  v52 = v152; /*0x1003255cc*/
  if ( v152 == v150 ) /*0x1003255d4*/
  {
    v36 = (__int64)&v150; /*0x1003255d6*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v150); /*0x1003255da*/
  }
  v53 = v151; /*0x1003255df*/
  v54 = 3 * v52; /*0x1003255e3*/
  v151[v54] = v35; /*0x1003255e7*/
  v53[v54 + 1] = v40; /*0x1003255eb*/
  v53[v54 + 2] = v35; /*0x1003255f0*/
  v152 = v52 + 1; /*0x1003255f8*/
  v55 = std::time::Instant::now::hda76af2c3a449055(v36, 1, v38, 3 * v52, v39); /*0x1003255fc*/
  LODWORD(v149) = v56; /*0x100325601*/
  v57 = v55; /*0x100325604*/
  v58 = v154; /*0x10032560e*/
  codexmate_lib::core::relay::codex_diagnostic::fix_config_preflight::h229fe8c2ec3369f8(v141, v154); /*0x100325612*/
  v59 = *(_QWORD *)v141; /*0x100325617*/
  v60 = v141[8]; /*0x10032561e*/
  if ( *(_QWORD *)v141 != 11 ) /*0x10032562a*/
  {
    memcpy((char *)a1 + 9, &v141[9], 0x57u); /*0x100325984*/
    *a1 = v59; /*0x100325989*/
    *((_BYTE *)a1 + 8) = v60; /*0x10032598c*/
    goto LABEL_19; /*0x100325990*/
  }
  v156 = v141[8]; /*0x100325630*/
  if ( (v141[8] & 1) != 0 ) /*0x100325638*/
  {
    v61 = v57; /*0x10032563e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v141, v58); /*0x100325641*/
    v35 = 37; /*0x100325646*/
    v62 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x100325656*/
    if ( v62 ) /*0x10032565e*/
    {
      *(_QWORD *)((char *)v62 + 29) = 0x98A2E9AE97E982B1LL; /*0x10032566e*/
      v62[3] = 0xE982B1E595B3E6ADLL; /*0x10032567c*/
      v62[2] = 0xAFE8206C6D6F742ELL; /*0x10032568a*/
      v62[1] = 0x6769666E6F63208DLL; /*0x100325698*/
      *v62 = 0xA4E5AEBFE4B2B7E5LL; /*0x1003256a6*/
      *(_QWORD *)v141 = 37; /*0x1003256a9*/
      *(_QWORD *)&v141[8] = v62; /*0x1003256b4*/
      *(_QWORD *)&v141[16] = 37; /*0x1003256bb*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v150, v141); /*0x1003256d1*/
      v57 = v61; /*0x1003256d6*/
      goto LABEL_46; /*0x1003256d6*/
    }
LABEL_87:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v35); /*0x10032619d*/
  }
LABEL_46:
  codexmate_lib::core::relay::config_takeover::takeover::h0751a2fbecf2bbb0(v141, v154); /*0x1003256d9*/
  v63 = *(_QWORD *)v141; /*0x1003256e9*/
  qmemcpy(v130, &v141[8], 0x50u); /*0x100325703*/
  if ( *(_QWORD *)v141 != 11 ) /*0x10032570a*/
  {
    v71 = *(_QWORD *)&v141[88]; /*0x100325995*/
    qmemcpy(a1 + 1, v130, 0x50u); /*0x1003259ac*/
    *a1 = v63; /*0x1003259af*/
    a1[11] = v71; /*0x1003259b2*/
    goto LABEL_19; /*0x1003259b6*/
  }
  qmemcpy(v126, v130, sizeof(v126)); /*0x100325726*/
  if ( v126[8] ) /*0x100325733*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v141, v126[7], v126[8], &unk_1015E417C, 3); /*0x100325754*/
    *(_QWORD *)&v130[16] = *(_QWORD *)&v141[16]; /*0x100325760*/
    *(_QWORD *)&v130[8] = *(_QWORD *)&v141[8]; /*0x100325775*/
    *(_QWORD *)v130 = *(_QWORD *)v141; /*0x10032577c*/
    *(_QWORD *)v141 = v130; /*0x100325783*/
    *(_QWORD *)&v141[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100325791*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v123, &unk_1017BBCB0, v141); /*0x1003257ad*/
    if ( *(_QWORD *)v130 ) /*0x1003257bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v130[8], *(_QWORD *)v130, 1); /*0x1003257ca*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v144, v123); /*0x1003257dd*/
  }
  v139 = v126[2]; /*0x1003257f0*/
  v138 = v126[5]; /*0x1003257f7*/
  if ( v126[2] | v126[5] ) /*0x1003257fe*/
  {
    *(_QWORD *)v141 = &v139; /*0x10032580a*/
    *(_QWORD *)&v141[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325818*/
    *(_QWORD *)&v141[16] = &v138; /*0x100325826*/
    *(_QWORD *)&v141[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032582d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, &unk_1017BBD29, v141); /*0x100325849*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v150, v122); /*0x100325859*/
  }
  *(_QWORD *)v141 = &v156; /*0x100325862*/
  *(_QWORD *)&v141[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100325869*/
  *(_QWORD *)&v141[16] = &v139; /*0x100325877*/
  *(_QWORD *)&v141[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325885*/
  *(_QWORD *)&v141[32] = &v138; /*0x100325893*/
  *(_QWORD *)&v141[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032589a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v121, &unk_1017BBD5A, v141); /*0x1003258b6*/
  codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
    0,
    (__int64)"config_takeoverproject_statewriting_configconfig_syncrouter reconcile did not become effective: missing act"
             "ive provider, proxy, or catalogmodel_restore",
    15,
    v57,
    v149,
    v121);
  codexmate_lib::platform::process::assert_no_external_codex_writers::hee72a366f7c4ee9d(v141); /*0x1003258e3*/
  if ( *(_DWORD *)v141 != 11 ) /*0x1003258ef*/
  {
    v70 = v141; /*0x1003259bb*/
    goto LABEL_59; /*0x1003259bb*/
  }
  v67 = std::time::Instant::now::hda76af2c3a449055(
          v141,
          "config_takeoverproject_statewriting_configconfig_syncrouter reconcile did not become effective: missing active"
          " provider, proxy, or catalogmodel_restore",
          v64,
          v65,
          v66);
  v69 = v68; /*0x1003258fd*/
  *((_QWORD *)&v143[1] + 1) = "aimai1"; /*0x100325911*/
  *(_QWORD *)&v143[2] = 6; /*0x100325918*/
  BYTE8(v143[2]) = 0; /*0x100325923*/
  *(_QWORD *)&v143[0] = 0x8000000000000000LL; /*0x10032592a*/
  codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads::hfdb93758fe0846e8(v141, v154, v143); /*0x100325943*/
  qmemcpy(v148, &v141[8], 0x60u); /*0x100325962*/
  if ( *(_QWORD *)v141 != 2 )
  {
    qmemcpy(v131, v142, sizeof(v131)); /*0x1003259e5*/
    qmemcpy(&v130[8], v148, 0x60u); /*0x1003259fb*/
    *(_QWORD *)v130 = *(_QWORD *)v141; /*0x1003259fe*/
    codexmate_lib::core::relay::router_reconciler::record_thread_summary::h2e3c0038a3c425e4(v67, v69, v130); /*0x100325a12*/
    codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h074221fb86954afe( /*0x100325a31*/
      v148,
      "RouterOntakeoverexceeded",
      8,
      v130);
    *(_QWORD *)v141 = *(_QWORD *)&v148[8]; /*0x100325a53*/
    *(_QWORD *)&v141[16] = *(_QWORD *)v148; /*0x100325a5a*/
    *(_QWORD *)&v141[8] = *(_QWORD *)&v148[8]; /*0x100325a61*/
    *(_QWORD *)&v141[24] = *(_QWORD *)&v148[8] + 24LL * *(_QWORD *)&v148[16]; /*0x100325a68*/
    _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100325a7a*/
      &v150,
      v141);
    v75 = std::time::Instant::now::hda76af2c3a449055(&v150, v141, v72, v73, v74); /*0x100325a84*/
    v77 = v76; /*0x100325a87*/
    codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(v141, v154); /*0x100325a95*/
    codexmate_lib::core::relay::codex_project_state::stability_issue::haa4350ab63214d44(v148, v141); /*0x100325aa8*/
    if ( *(_QWORD *)v148 == 0x8000000000000000LL )
    {
      *(_QWORD *)v148 = &v142[40]; /*0x100325ad2*/
      *(_QWORD *)&v148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325ae0*/
      *(_QWORD *)&v148[16] = &v142[72]; /*0x100325ae7*/
      *(_QWORD *)&v148[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325aee*/
      *(_QWORD *)&v148[32] = &v142[80]; /*0x100325af5*/
      *(_QWORD *)&v148[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325afc*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v119, &unk_1017BBDD5, v148); /*0x100325b18*/
      v78 = "project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore";
      v79 = nullptr; /*0x100325b30*/
      codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
        0,
        (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
        13,
        v75,
        v77,
        v119);
    }
    else
    {
      if ( *(_QWORD *)v148 ) /*0x100325b45*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[8], *(_QWORD *)v148, 1); /*0x100325b53*/
      codexmate_lib::core::relay::codex_project_state::repair_if_needed::h6ff0d1e866baa369(&v114, v154); /*0x100325b63*/
      LODWORD(v149) = v77; /*0x100325b68*/
      if ( v114 == 0x8000000000000000LL ) /*0x100325b80*/
      {
        qmemcpy(v143, v115, sizeof(v143)); /*0x100325b94*/
        codexmate_lib::core::relay::router_reconciler::reconcile_router_on::_$u7b$$u7b$closure$u7d$$u7d$::h9c5015906a0d02ff( /*0x100325ba7*/
          v125,
          v75,
          (unsigned int)v149,
          v143);
        qmemcpy(v115, v125, sizeof(v115)); /*0x100325bbb*/
        qmemcpy(a1, v115, 0x60u); /*0x100325bc9*/
LABEL_84:
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(v141); /*0x100326163*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::hdf8d2837b81a54e9(v130); /*0x100326176*/
        goto LABEL_85; /*0x100326176*/
      }
      qmemcpy(&v148[8], v115, 0x60u); /*0x100325bef*/
      *(_QWORD *)v148 = v114; /*0x100325bf2*/
      *(_QWORD *)&v143[0] = &v148[96]; /*0x100325c09*/
      *((_QWORD *)&v143[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100325c10*/
      *(_QWORD *)&v143[1] = &v148[72]; /*0x100325c17*/
      *((_QWORD *)&v143[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325c25*/
      *(_QWORD *)&v143[2] = &v148[80]; /*0x100325c2c*/
      *((_QWORD *)&v143[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325c33*/
      *(_QWORD *)&v143[3] = &v148[88]; /*0x100325c3a*/
      *((_QWORD *)&v143[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325c41*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_1017BBD93, v143); /*0x100325c60*/
      codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
        0,
        (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
        13,
        v75,
        v149,
        v120);
      *(_QWORD *)&v143[1] = *(_QWORD *)&v148[16]; /*0x100325c8d*/
      v143[0] = *(_OWORD *)v148; /*0x100325ca9*/
      v79 = &v150; /*0x100325cb3*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v150, v143); /*0x100325cbe*/
      if ( 2LL * *(_QWORD *)&v148[24] ) /*0x100325cca*/
      {
        v79 = *(__int64 **)&v148[32]; /*0x100325cd7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[32], *(_QWORD *)&v148[24], 1); /*0x100325ce3*/
      }
      v78 = *(char **)&v148[48]; /*0x100325ce8*/
      if ( 2LL * *(_QWORD *)&v148[48] ) /*0x100325cef*/
      {
        v79 = *(__int64 **)&v148[56]; /*0x100325cfc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[56], *(_QWORD *)&v148[48], 1); /*0x100325d08*/
      }
    }
    if ( a7 )
    {
      v78 = "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore";
      v79 = a7; /*0x100325d20*/
      (*(void (__fastcall **)(__int64 *, char *, __int64))(a8 + 32))(
        a7,
        "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
        14);
    }
    v149 = std::time::Instant::now::hda76af2c3a449055(v79, v78, v80, v81, v82); /*0x100325d30*/
    v84 = v83; /*0x100325d34*/
    v85 = *(_QWORD *)(v140 + 16); /*0x100325d42*/
    v86 = *(_QWORD *)(v140 + 32); /*0x100325d46*/
    v87 = *(_QWORD *)(v140 + 40); /*0x100325d4a*/
    *(_QWORD *)&v143[0] = *(_QWORD *)(v140 + 8); /*0x100325d4e*/
    *((_QWORD *)&v143[0] + 1) = v85; /*0x100325d55*/
    *(_QWORD *)&v143[1] = v86; /*0x100325d5c*/
    *((_QWORD *)&v143[1] + 1) = v87; /*0x100325d63*/
    *(_QWORD *)&v143[2] = v147; /*0x100325d71*/
    *((_QWORD *)&v143[2] + 1) = v133; /*0x100325d7f*/
    LOBYTE(v143[3]) = 1; /*0x100325d86*/
    codexmate_lib::core::relay::codex_config_reconciler::reconcile::h1c034bae44515f5c(v148, v154, v143); /*0x100325d9f*/
    v88 = *(_QWORD *)v148; /*0x100325da4*/
    v89 = v148[8]; /*0x100325dab*/
    if ( *(_QWORD *)v148 == 11 )
    {
      v155 = v148[8]; /*0x100325dbd*/
      *(_QWORD *)v148 = &v155; /*0x100325dc5*/
      *(_QWORD *)&v148[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100325dcc*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_1017BBE0C, v148); /*0x100325de8*/
      codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
        0,
        (__int64)"config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
        11,
        v149,
        v84,
        v118);
      if ( (v89 & 1) != 0 )
      {
        v93 = std::time::Instant::now::hda76af2c3a449055(
                0,
                "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
                v90,
                v91,
                v92);
        v95 = v94; /*0x100325e20*/
        codexmate_lib::core::relay::codex_thread_visibility::restore_relay_model_threads::h77dd3ecc898a3538(&v134, v154); /*0x100325e31*/
        *(_QWORD *)v148 = &v134; /*0x100325e4b*/
        *(_QWORD *)&v148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325e59*/
        *(_QWORD *)&v148[16] = &v135; /*0x100325e60*/
        *(_QWORD *)&v148[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325e67*/
        *(_QWORD *)&v148[32] = &v136; /*0x100325e6e*/
        *(_QWORD *)&v148[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325e75*/
        *(_QWORD *)&v148[48] = &v137; /*0x100325e7c*/
        *(_QWORD *)&v148[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325e83*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_1017BBE19, v148); /*0x100325e9f*/
        v96 = "model_restore"; /*0x100325ea4*/
        v97 = nullptr; /*0x100325eb7*/
        codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989( /*0x100325ebf*/
          0,
          (__int64)"model_restore",
          13,
          v93,
          v95,
          v117);
        if ( v134 | v137 ) /*0x100325ecb*/
        {
          *(_QWORD *)&v143[0] = v135 + v136; /*0x100325ee2*/
          *(_QWORD *)v148 = &v134; /*0x100325ee9*/
          *(_QWORD *)&v148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325ef7*/
          *(_QWORD *)&v148[16] = v143; /*0x100325f05*/
          *(_QWORD *)&v148[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325f0c*/
          *(_QWORD *)&v148[32] = &v137; /*0x100325f13*/
          *(_QWORD *)&v148[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100325f1a*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v116, &unk_1017BBE55, v148); /*0x100325f36*/
          v97 = &v150; /*0x100325f3b*/
          v96 = v116; /*0x100325f3f*/
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v150, v116); /*0x100325f46*/
        }
        v101 = std::time::Instant::now::hda76af2c3a449055(v97, v96, v98, v99, v100); /*0x100325f50*/
        v103 = v102; /*0x100325f53*/
        codexmate_lib::core::relay::codex_thread_visibility::converge_router_thread_models_to_catalog::h65d472a51982a375( /*0x100325f61*/
          v148,
          v154);
        v104 = *(_QWORD *)v148; /*0x100325f66*/
        qmemcpy(v143, &v148[8], 0x48u); /*0x100325f80*/
        if ( *(_QWORD *)v148 == 11 ) /*0x100325f87*/
        {
          qmemcpy(v125, v143, 0x48u); /*0x100325fa3*/
          codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary::hd941043d4138eb44( /*0x100325fac*/
            v101,
            v103,
            v125);
          codexmate_lib::core::relay::router_reconciler::describe_model_catalog_reconcile::h62a45e0a1a9a7db8(v143, v125); /*0x100325fbf*/
          *(_QWORD *)v148 = *((_QWORD *)&v143[0] + 1); /*0x100325fe1*/
          *(_QWORD *)&v148[8] = *((_QWORD *)&v143[0] + 1); /*0x100325fef*/
          *(_QWORD *)&v148[16] = *(_QWORD *)&v143[0]; /*0x100325fef*/
          *(_QWORD *)&v148[24] = *((_QWORD *)&v143[0] + 1) + 24LL * *(_QWORD *)&v143[1]; /*0x100325ff6*/
          _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100326008*/
            &v150,
            v148);
          v105 = v152; /*0x10032600d*/
          *(_QWORD *)&v148[16] = v152; /*0x100326011*/
          v106 = v150; /*0x100326018*/
          v107 = v151; /*0x10032601c*/
          *(_QWORD *)&v148[8] = v151; /*0x100326020*/
          *(_QWORD *)v148 = v150; /*0x100326027*/
          *(_QWORD *)&v148[40] = v146; /*0x100326035*/
          v108 = v144; /*0x10032603c*/
          v109 = v145; /*0x100326043*/
          *(_QWORD *)&v148[32] = v145; /*0x10032604a*/
          *(_QWORD *)&v148[24] = v144; /*0x100326051*/
          v110 = v157; /*0x100326058*/
          a1[6] = v146; /*0x10032605d*/
          a1[5] = v109; /*0x100326061*/
          a1[4] = v108; /*0x100326065*/
          a1[3] = v105; /*0x100326069*/
          a1[2] = v107; /*0x10032606d*/
          a1[1] = v106; /*0x100326071*/
          *((_BYTE *)a1 + 56) = v110; /*0x100326075*/
          *a1 = 11; /*0x100326079*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogConvergenceSummary$GT$::hc2c3bf371b175797(v125); /*0x100326087*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(v141); /*0x100326093*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::hdf8d2837b81a54e9(v130); /*0x10032609f*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::h926f6b52d30c7e49(v126); /*0x1003260ab*/
          v48 = v153; /*0x1003260b0*/
          if ( !v153 ) /*0x1003260b7*/
            return a1; /*0x1003260b7*/
          v49 = 1; /*0x1003260bd*/
          v47 = v147; /*0x1003260c2*/
          goto LABEL_35; /*0x1003260c9*/
        }
        v113 = *(_QWORD *)&v148[80]; /*0x10032613d*/
        a1[11] = *(_QWORD *)&v148[88]; /*0x100326145*/
        a1[10] = v113; /*0x100326149*/
        qmemcpy(a1 + 1, v143, 0x48u); /*0x10032615d*/
        *a1 = v104; /*0x100326160*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
          0,
          "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore");
        v111 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(85, 1); /*0x1003260fb*/
        if ( !v111 ) /*0x100326103*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 85); /*0x1003261b6*/
        v112 = v111; /*0x100326109*/
        memcpy(
          v111,
          "router reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
          0x55u);
        *a1 = 10; /*0x100326120*/
        a1[1] = 85; /*0x100326127*/
        a1[2] = v112; /*0x10032612f*/
        a1[3] = 85; /*0x100326133*/
      }
    }
    else
    {
      memcpy((char *)a1 + 9, &v148[9], 0x57u); /*0x1003260de*/
      *a1 = v88; /*0x1003260e3*/
      *((_BYTE *)a1 + 8) = v89; /*0x1003260e6*/
    }
    goto LABEL_84; /*0x100326160*/
  }
  v70 = v148; /*0x10032596b*/
LABEL_59:
  qmemcpy(a1, v70, 0x60u); /*0x1003259ca*/
LABEL_85:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::h926f6b52d30c7e49(v126); /*0x10032617b*/
LABEL_19:
  if ( v153 ) /*0x10032545b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v153, 1); /*0x100325469*/
LABEL_21:
  v41 = v146; /*0x10032546e*/
  if ( v146 ) /*0x100325478*/
  {
    v42 = (_QWORD *)(v145 + 8); /*0x100325481*/
    do /*0x100325497*/
    {
      v43 = *(v42 - 1); /*0x100325499*/
      if ( v43 ) /*0x1003254a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x1003254aa*/
      v42 += 3; /*0x100325490*/
      --v41; /*0x100325494*/
    }
    while ( v41 ); /*0x100325497*/
  }
  if ( v144 ) /*0x1003254bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, 24 * v144, 8); /*0x1003254d1*/
  v44 = v152; /*0x1003254d6*/
  if ( v152 ) /*0x1003254dd*/
  {
    v45 = v151 + 1; /*0x1003254e3*/
    do /*0x1003254f7*/
    {
      v46 = *(v45 - 1); /*0x1003254f9*/
      if ( v46 ) /*0x100325500*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v45, v46, 1); /*0x10032550a*/
      v45 += 3; /*0x1003254f0*/
      --v44; /*0x1003254f4*/
    }
    while ( v44 ); /*0x1003254f7*/
  }
  if ( v150 ) /*0x100325518*/
  {
    v47 = v151; /*0x10032551a*/
    v48 = 24 * v150; /*0x100325522*/
    v49 = 8; /*0x100325526*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v48, v49); /*0x10032552b*/
  }
  return a1; /*0x100325533*/
}