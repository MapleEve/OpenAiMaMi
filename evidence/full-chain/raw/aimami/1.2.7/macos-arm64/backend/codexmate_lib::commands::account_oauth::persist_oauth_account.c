// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_oauth::persist_oauth_account::h822d9bcecadce704; addr: 0x100320780; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:15Z
char *__fastcall codexmate_lib::commands::account_oauth::persist_oauth_account::h822d9bcecadce704(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  char *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  char v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r15
  char v19; // r12
  __int64 v20; // rdi
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // r14
  char v26; // r15
  const void *v27; // r15
  size_t v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdi
  size_t v31; // r13
  __int64 v32; // r14
  __int64 v33; // r12
  unsigned int v34; // r15d
  _DWORD *v35; // rsi
  _DWORD *v36; // rdi
  __int64 i; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _DWORD *v40; // rdi
  _DWORD *v41; // rsi
  __int64 j; // rcx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rbx
  int v46; // r14d
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // r14
  bool v55; // al
  unsigned __int64 v56; // rbx
  void *v57; // rax
  __int128 v58; // kr00_16
  __int64 v59; // r13
  __int64 (__fastcall *v60)(); // rdi
  __int64 *v61; // rsi
  double v62; // xmm0_8
  __int64 v63; // rdx
  __int64 v64; // rbx
  __int128 v65; // kr20_16
  __int64 v66; // rsi
  void *v67; // rax
  void *v68; // rbx
  __int64 v69; // rsi
  __int64 (__fastcall *v70)(); // rax
  _BYTE v71[72]; // [rsp+8h] [rbp-348h] BYREF
  _BYTE v72[24]; // [rsp+50h] [rbp-300h] BYREF
  _QWORD v73[3]; // [rsp+68h] [rbp-2E8h] BYREF
  _QWORD v74[2]; // [rsp+80h] [rbp-2D0h] BYREF
  _QWORD v75[7]; // [rsp+90h] [rbp-2C0h] BYREF
  _QWORD v76[13]; // [rsp+C8h] [rbp-288h] BYREF
  __int64 v77; // [rsp+130h] [rbp-220h]
  __int64 v78; // [rsp+138h] [rbp-218h]
  __int64 v79; // [rsp+140h] [rbp-210h]
  __int64 v80; // [rsp+148h] [rbp-208h]
  __int64 *v81; // [rsp+150h] [rbp-200h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+158h] [rbp-1F8h]
  __int64 v83; // [rsp+160h] [rbp-1F0h]
  __int64 v84; // [rsp+168h] [rbp-1E8h] BYREF
  __int128 v85; // [rsp+170h] [rbp-1E0h]
  __int64 v86; // [rsp+180h] [rbp-1D0h]
  __int64 v87; // [rsp+188h] [rbp-1C8h]
  __int64 v88; // [rsp+190h] [rbp-1C0h]
  __int64 v89; // [rsp+198h] [rbp-1B8h]
  __int64 v90; // [rsp+1A0h] [rbp-1B0h]
  __int64 v91; // [rsp+1A8h] [rbp-1A8h]
  _QWORD v92[13]; // [rsp+1B0h] [rbp-1A0h] BYREF
  _QWORD v93[13]; // [rsp+218h] [rbp-138h] BYREF
  __int64 *v94; // [rsp+280h] [rbp-D0h] BYREF
  __int64 (__fastcall *v95)(); // [rsp+288h] [rbp-C8h]
  __int64 v96; // [rsp+290h] [rbp-C0h]
  char *v97; // [rsp+298h] [rbp-B8h]
  size_t v98; // [rsp+2A0h] [rbp-B0h]
  __int64 *v99; // [rsp+2A8h] [rbp-A8h] BYREF
  __int64 (__fastcall *v100)(); // [rsp+2B0h] [rbp-A0h]
  __int64 v101; // [rsp+2B8h] [rbp-98h]
  __int64 v102; // [rsp+2C0h] [rbp-90h] BYREF
  __int128 __src; // [rsp+2C8h] [rbp-88h]
  __int64 v104; // [rsp+2D8h] [rbp-78h]
  __int64 v105; // [rsp+2E0h] [rbp-70h]
  __int64 v106; // [rsp+2E8h] [rbp-68h]
  __int64 v107; // [rsp+2F0h] [rbp-60h]
  __int64 v108; // [rsp+2F8h] [rbp-58h]
  __int64 v109; // [rsp+300h] [rbp-50h]
  __int64 v110; // [rsp+308h] [rbp-48h] BYREF
  __int64 (__fastcall *v111)(); // [rsp+310h] [rbp-40h]
  __int64 v112; // [rsp+318h] [rbp-38h]
  unsigned int v113; // [rsp+320h] [rbp-30h] BYREF
  unsigned __int8 v114; // [rsp+327h] [rbp-29h]

  v108 = a3; /*0x100320794*/
  v5 = (char *)a1; /*0x10032079b*/
  v6 = *(_QWORD *)(a2 + 136); /*0x10032079e*/
  v7 = tauri::state::StateManager::try_get::h7aded0c5892c0acf(*(_QWORD *)(v6 + 4872) + 16LL, a4); /*0x1003207b0*/
  if ( !v7 ) /*0x1003207b8*/
  {
    v92[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1506; /*0x100320a31*/
    v92[1] = 61; /*0x100320a38*/
    v93[0] = v92; /*0x100320a43*/
    v93[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100320a51*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100320a6d*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      v93,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v8 = v7; /*0x1003207d4*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hd33f803dee4bb26e( /*0x1003207d7*/
    v92,
    v7,
    "saving ChatGPT OAuth credentialsaccount_oauthdisk_committed",
    32);
  if ( LODWORD(v92[0]) == 11 )
  {
    v109 = a2; /*0x1003207e9*/
    v97 = (char *)a1; /*0x1003207ed*/
    v90 = v92[1]; /*0x1003207fb*/
    v114 = v92[2]; /*0x100320809*/
    v9 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(v6 + 4872) + 16LL); /*0x100320817*/
    v10 = v9; /*0x10032081c*/
    if ( !v9 ) /*0x100320822*/
    {
      v92[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100320a79*/
      v92[1] = 76; /*0x100320a80*/
      v93[0] = v92; /*0x100320a8b*/
      v93[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100320a99*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100320ab5*/
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
        v93,
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
    }
    v11 = *v9; /*0x100320828*/
    if ( !*v9 ) /*0x100320828*/
      v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v9); /*0x100320af2*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x100320834*/
    v15 = 0x7FFFFFFFFFFFFFFFLL; /*0x10032084d*/
    v80 = 0x7FFFFFFFFFFFFFFFLL; /*0x100320850*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10032085a*/
    {
      v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11) ^ 1; /*0x100320b02*/
      if ( *((_BYTE *)v10 + 8) ) /*0x100320b06*/
        goto LABEL_8; /*0x100320b0d*/
    }
    else
    {
      v16 = 0; /*0x100320860*/
      if ( *((_BYTE *)v10 + 8) ) /*0x100320863*/
      {
LABEL_8:
        v92[0] = 0; /*0x100320870*/
        v92[1] = 1; /*0x10032087b*/
        v92[2] = 0; /*0x100320886*/
        v93[2] = 1610612768; /*0x100320891*/
        v93[0] = v92; /*0x10032089c*/
        v93[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x1003208aa*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x1003208c4*/
                                &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                                41,
                                v93,
                                v15,
                                v13,
                                v14) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100321984*/
            &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
            55,
            &v84,
            &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
            &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
        v17 = v92[0]; /*0x1003208d1*/
        v18 = v92[1]; /*0x1003208d8*/
        v19 = v92[2]; /*0x1003208df*/
        LODWORD(v76[0]) = *(_DWORD *)((char *)&v92[2] + 1); /*0x1003208ed*/
        *(_DWORD *)((char *)v76 + 3) = HIDWORD(v92[2]); /*0x1003208f9*/
        if ( !v16 /*0x1003219ab*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v80) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
        {
          *((_BYTE *)v10 + 8) = 1; /*0x1003219b8*/
        }
        v20 = *v10; /*0x10032091b*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x10032091e*/
        v21 = v76[0]; /*0x100320923*/
        v22 = v97; /*0x10032092f*/
        *((_DWORD *)v97 + 7) = *(_DWORD *)((char *)v76 + 3); /*0x100320936*/
        *(_DWORD *)((char *)v22 + 25) = v21; /*0x100320939*/
        v22[1] = v17; /*0x10032093c*/
        v22[2] = v18; /*0x100320940*/
        *((_BYTE *)v22 + 24) = v19; /*0x100320944*/
        v5 = (char *)v22; /*0x100320948*/
        *v22 = 0x8000000000000000LL; /*0x100320955*/
        goto LABEL_39; /*0x100320958*/
      }
    }
    v27 = (const void *)v10[27]; /*0x100320b13*/
    v28 = v10[28]; /*0x100320b1a*/
    if ( v28 ) /*0x100320b24*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v8, v12); /*0x100320b26*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x100320b33*/
      if ( !v29 ) /*0x100320b3b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x100320b45*/
    }
    else
    {
      v29 = 1; /*0x100320b4f*/
    }
    v91 = v29; /*0x100320b54*/
    v30 = v29; /*0x100320b5b*/
    v98 = v28; /*0x100320b61*/
    memcpy((void *)v29, v27, v28); /*0x100320b6b*/
    if ( !v16 /*0x1003219c2*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v80) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v30) )
    {
      *((_BYTE *)v10 + 8) = 1; /*0x1003219cf*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x100320b8f*/
    v31 = v98; /*0x100320baf*/
    std::path::Path::_join::hb1a495d4f06b13b8(v76, v91, v98, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_236, 24); /*0x100320bb9*/
    v32 = v76[1]; /*0x100320bbe*/
    codexmate_lib::core::account_coordination::FileLock::acquire::h303ea95e4bf2b86e( /*0x100320be3*/
      v93,
      v76[1],
      v76[2],
      "account transition",
      18);
    v33 = v93[0]; /*0x100320be8*/
    v34 = v93[1]; /*0x100320bef*/
    if ( v93[0] != 11 ) /*0x100320bfa*/
    {
      v35 = (_DWORD *)&v93[1] + 1; /*0x100320bfc*/
      v36 = v92; /*0x100320c03*/
      for ( i = 21; i; --i ) /*0x100320c0a*/
        *v36++ = *v35++; /*0x100320c0f*/
    }
    if ( v76[0] ) /*0x100320c1b*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v76[0], 1); /*0x100320c25*/
    if ( (_DWORD)v33 != 11 ) /*0x100320c2e*/
    {
      v93[0] = v33; /*0x100320cc9*/
      LODWORD(v93[1]) = v34; /*0x100320cd0*/
      v40 = (_DWORD *)&v93[1] + 1; /*0x100320cd7*/
      v41 = v92; /*0x100320cde*/
      for ( j = 21; j; --j ) /*0x100320ce5*/
        *v40++ = *v41++; /*0x100320cea*/
      v102 = 0; /*0x100320cec*/
      __src = 1u; /*0x100320cf7*/
      v76[2] = 1610612768; /*0x100320d0a*/
      v76[0] = &v102; /*0x100320d1c*/
      v76[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x100320d2a*/
      v43 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100320d3f*/
              v93,
              v76);
      v5 = v97; /*0x100320d46*/
      if ( v43 ) /*0x100320d4d*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003219fa*/
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
          55,
          &v84,
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
          &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
      v45 = v102; /*0x100320d53*/
      v46 = __src; /*0x100320d5a*/
      v84 = *(_QWORD *)((char *)&__src + 4); /*0x100320d68*/
      LODWORD(v85) = HIDWORD(__src); /*0x100320d72*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v93, v76, v44); /*0x100320d7f*/
      *((_DWORD *)v5 + 7) = v85; /*0x100320d8a*/
      *(_QWORD *)(v5 + 20) = v84; /*0x100320d96*/
      *((_QWORD *)v5 + 1) = v45; /*0x100320d9b*/
      *((_DWORD *)v5 + 4) = v46; /*0x100320da0*/
      *(_QWORD *)v5 = 0x8000000000000000LL; /*0x100320daf*/
      v20 = v91; /*0x100320db6*/
      if ( !v31 ) /*0x100320dbd*/
        goto LABEL_39; /*0x100320dbd*/
      goto LABEL_38; /*0x100320dbd*/
    }
    v113 = v34; /*0x100320c34*/
    codexmate_lib::commands::account_oauth::persist_oauth_account::_$u7b$$u7b$closure$u7d$$u7d$::h490ab108d34a0e16( /*0x100320c48*/
      v93,
      v6,
      v108,
      0,
      a4);
    v5 = v97; /*0x100320c4d*/
    v38 = v93[0]; /*0x100320c5e*/
    v77 = v93[1]; /*0x100320c70*/
    v78 = v93[2]; /*0x100320c7e*/
    v79 = v93[3]; /*0x100320c8c*/
    if ( v93[0] == 0x8000000000000001LL ) /*0x100320c96*/
    {
      *((_QWORD *)v97 + 3) = v79; /*0x100320ca3*/
      v39 = v77; /*0x100320ca8*/
      *((_QWORD *)v5 + 2) = v78; /*0x100320cb6*/
      *((_QWORD *)v5 + 1) = v39; /*0x100320cbb*/
      *(_QWORD *)v5 = 0x8000000000000000LL; /*0x100320cc0*/
      goto LABEL_47; /*0x100320cc4*/
    }
    qmemcpy(v71, &v93[4], sizeof(v71)); /*0x100320e20*/
    if ( v93[0] != 0x8000000000000000LL ) /*0x100320e26*/
    {
      *((_QWORD *)v97 + 3) = v79; /*0x100320e89*/
      v50 = v77; /*0x100320e8e*/
      *((_QWORD *)v5 + 2) = v78; /*0x100320e9c*/
      *((_QWORD *)v5 + 1) = v50; /*0x100320ea1*/
      qmemcpy(v5 + 32, v71, 0x48u); /*0x100320eb7*/
      *(_QWORD *)v5 = v38; /*0x100320eba*/
      goto LABEL_47; /*0x100320eba*/
    }
    _$LT$codexmate_lib..commands..account_transition..DesktopClient$u20$as$u20$codexmate_lib..commands..account_transition..TransitionClient$GT$::begin::h1b97ac72f44dd013(v93); /*0x100320e2f*/
    if ( BYTE2(v93[6]) == 2 ) /*0x100320e3d*/
    {
      v92[2] = v93[2]; /*0x100320e4a*/
      v48 = v93[0]; /*0x100320e51*/
      v49 = v93[1]; /*0x100320e58*/
      v92[1] = v93[1]; /*0x100320e5f*/
      v92[0] = v93[0]; /*0x100320e66*/
      *((_QWORD *)v5 + 3) = v93[2]; /*0x100320e6d*/
      *((_QWORD *)v5 + 2) = v49; /*0x100320e72*/
      *((_QWORD *)v5 + 1) = v48; /*0x100320e77*/
      *(_QWORD *)v5 = 0x8000000000000000LL; /*0x100320e7c*/
      goto LABEL_47; /*0x100320e80*/
    }
    LOWORD(v92[6]) = v93[6]; /*0x100320eeb*/
    v92[5] = v93[5]; /*0x100320ef9*/
    v92[4] = v93[4]; /*0x100320f07*/
    v92[3] = v93[3]; /*0x100320f15*/
    v92[2] = v93[2]; /*0x100320f23*/
    v92[1] = v93[1]; /*0x100320f38*/
    v92[0] = v93[0]; /*0x100320f3f*/
    v89 = v93[6]; /*0x100320f4c*/
    v88 = v93[5]; /*0x100320f74*/
    v87 = v93[4]; /*0x100320f82*/
    v86 = v93[3]; /*0x100320f90*/
    v85 = *(_OWORD *)&v93[1]; /*0x100320fb3*/
    v84 = v93[0]; /*0x100320fba*/
    codexmate_lib::commands::account_oauth::persist_oauth_account::_$u7b$$u7b$closure$u7d$$u7d$::h490ab108d34a0e16( /*0x100320fda*/
      v92,
      v6,
      v108,
      1,
      a4);
    if ( v92[0] < (__int64)0x8000000000000002LL )
    {
      qmemcpy(v93, v92, sizeof(v93)); /*0x100320fff*/
      v52 = (__int64)v93; /*0x100320fff*/
      v53 = v93[0]; /*0x100321002*/
      if ( v93[0] == 0x8000000000000001LL )
      {
        v112 = v92[3]; /*0x100321019*/
        v111 = (__int64 (__fastcall *)())v92[2]; /*0x10032102b*/
        v110 = v92[1]; /*0x10032102f*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v94, v93, v51); /*0x1003210c3*/
        v52 = 1; /*0x1003210cd*/
        v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1); /*0x1003210d2*/
        if ( !v57 ) /*0x1003210da*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59); /*0x100321a8e*/
        qmemcpy(v57, "OAUTH_COMMIT_NOT_STARTED: active account could not be saved", 59);
        v110 = 59; /*0x100321148*/
        v111 = (__int64 (__fastcall *)())v57; /*0x100321150*/
        v112 = 59; /*0x100321154*/
      }
      v107 = v89; /*0x100321163*/
      v106 = v88; /*0x10032116e*/
      v105 = v87; /*0x100321179*/
      v104 = v86; /*0x100321184*/
      __src = v85; /*0x1003211a1*/
      v102 = v84; /*0x1003211a8*/
      _$LT$codexmate_lib..commands..account_transition..DesktopClient$u20$as$u20$codexmate_lib..commands..account_transition..TransitionClient$GT$::finish::h0abff4cac8faa0b1( /*0x1003211bd*/
        &v94,
        v52,
        &v102);
      if ( v94 == (__int64 *)0x8000000000000000LL ) /*0x1003211c9*/
      {
        if ( (_DWORD)v95 || (BYTE4(v95) & 1) != 0 ) /*0x1003211e3*/
        {
          v69 = v112; /*0x100321896*/
          if ( (unsigned __int64)(v110 - v112) <= 0x3C ) /*0x1003218a1*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100321a42*/
              &v110,
              v112,
              61,
              1,
              1);
            v69 = v112; /*0x100321a47*/
          }
          v70 = v111; /*0x1003218a7*/
          *(_QWORD *)((char *)v111 + v69 + 53) = 0x9AAEE5B3A8E7AA9CLL; /*0x1003218b5*/
          *(_QWORD *)((char *)v70 + v69 + 48) = 0xE7AA9CE69AB0E58BLL; /*0x1003218c4*/
          *(_QWORD *)((char *)v70 + v69 + 40) = 0xA8E79BBFE8A585E5LL; /*0x1003218d3*/
          *(_QWORD *)((char *)v70 + v69 + 32) = 0x9986E5AFABE7B788LL; /*0x1003218e2*/
          *(_QWORD *)((char *)v70 + v69 + 24) = 0xE6A2AEE5203A4445LL; /*0x1003218f1*/
          qmemcpy((char *)v70 + v69, " | CLIENT_RESTART_DEFERR", 24); /*0x10032191e*/
          v112 = v69 + 61; /*0x100321926*/
          goto LABEL_94; /*0x100321926*/
        }
        _$LT$codexmate_lib..commands..account_transition..DesktopClient$u20$as$u20$codexmate_lib..commands..account_transition..TransitionClient$GT$::launch::h3cc2c433ff5e40af(&v81); /*0x1003211f0*/
        if ( v81 == (__int64 *)0x8000000000000000LL ) /*0x1003211fc*/
        {
LABEL_94:
          *((_QWORD *)v5 + 3) = v112; /*0x10032192a*/
          *((_QWORD *)v5 + 2) = v111; /*0x100321937*/
          *((_QWORD *)v5 + 1) = v110; /*0x100321940*/
          *(_QWORD *)v5 = 0x8000000000000000LL; /*0x100321945*/
          if ( v53 != 0x8000000000000001LL ) /*0x10032194c*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..account_io..PersistAccountAuthResult$C$alloc..string..String$GT$$GT$::hcb06d28b55910943(v93); /*0x100321959*/
LABEL_47:
          _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(&v113); /*0x100320ebe*/
          close_NOCANCEL(v113); /*0x100320eca*/
          v20 = v91; /*0x100320ed2*/
          if ( !v31 ) /*0x100320ed9*/
          {
LABEL_39:
            if ( !v114 /*0x10032198e*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v80) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20) )
            {
              *(_BYTE *)(v90 + 8) = 1; /*0x1003219a2*/
            }
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v90); /*0x100320df3*/
            return v5; /*0x100320df3*/
          }
LABEL_38:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v31, 1); /*0x100320dbf*/
          goto LABEL_39; /*0x100320dc7*/
        }
        v108 = v53; /*0x100321202*/
        v101 = v83; /*0x10032120d*/
        v100 = v82; /*0x100321222*/
        v99 = v81; /*0x100321229*/
        v74[0] = &v99; /*0x100321237*/
        v74[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100321245*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v102, &unk_1018F569C, v74); /*0x100321261*/
        v109 = v102; /*0x10032126d*/
        v58 = __src; /*0x100321278*/
        v59 = v112; /*0x100321280*/
        if ( *((_QWORD *)&__src + 1) > (unsigned __int64)(v110 - v112) ) /*0x10032128a*/
          goto LABEL_104; /*0x10032128a*/
      }
      else
      {
        v108 = v53; /*0x1003212af*/
        v101 = v96; /*0x1003212ba*/
        v100 = v95; /*0x1003212cf*/
        v99 = v94; /*0x1003212d6*/
        v81 = (__int64 *)&v99; /*0x1003212e4*/
        v82 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003212f2*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v102, &unk_1018F56B9, &v81); /*0x10032130e*/
        v109 = v102; /*0x10032131a*/
        v59 = v112; /*0x10032132d*/
        v58 = __src; /*0x100321337*/
        if ( *((_QWORD *)&__src + 1) > (unsigned __int64)(v110 - v112) ) /*0x100321337*/
        {
LABEL_104:
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100321a04*/
            &v110,
            v112,
            *((_QWORD *)&__src + 1),
            1,
            1);
          v59 = v112; /*0x100321a1e*/
          v5 = v97; /*0x100321a22*/
        }
      }
      memcpy((char *)v111 + v59, (const void *)v58, *((size_t *)&v58 + 1)); /*0x10032133d*/
      v112 = *((_QWORD *)&v58 + 1) + v59; /*0x100321352*/
      if ( v109 ) /*0x10032135d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v109, 1); /*0x100321367*/
      v31 = v98; /*0x100321376*/
      if ( v99 ) /*0x100321387*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1); /*0x100321395*/
      v53 = v108; /*0x10032139a*/
      goto LABEL_94; /*0x10032139e*/
    }
    qmemcpy(v76, v92, sizeof(v76)); /*0x10032104b*/
    v93[0] = (char *)&v76[12] + 4; /*0x100321055*/
    v93[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100321063*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, &unk_1018F55F6, v93); /*0x10032107f*/
    v54 = v109; /*0x100321084*/
    codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x1003210a7*/
      "account_oauthdisk_committed",
      13,
      "disk_committed",
      14,
      v72);
    if ( v76[9] == 0x8000000000000000LL ) /*0x1003210b3*/
    {
      v55 = 0; /*0x1003210b9*/
      v56 = 0x8000000000000000LL; /*0x1003210bb*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v93, &v76[9]); /*0x1003213b1*/
      v56 = v93[0]; /*0x1003213b6*/
      v102 = v93[1]; /*0x1003213c4*/
      *(_QWORD *)&__src = v93[2]; /*0x1003213d2*/
      v55 = v76[9] != 0x8000000000000000LL /*0x10032140c*/
         && v76[11] == v76[2]
         && memcmp((const void *)v76[10], (const void *)v76[1], v76[11]) == 0;
    }
    v92[6] = v54; /*0x10032140e*/
    v92[7] = v108; /*0x100321419*/
    v92[3] = v56; /*0x100321420*/
    v92[4] = v102; /*0x100321435*/
    v92[5] = __src; /*0x10032143c*/
    LOBYTE(v92[8]) = v55; /*0x100321443*/
    v92[0] = 0; /*0x100321449*/
    v92[1] = 8; /*0x100321454*/
    v92[2] = 0; /*0x10032145f*/
    v107 = v89; /*0x100321471*/
    v106 = v88; /*0x10032147c*/
    v105 = v87; /*0x100321487*/
    v104 = v86; /*0x100321492*/
    __src = v85; /*0x1003214af*/
    v102 = v84; /*0x1003214b6*/
    v60 = (__int64 (__fastcall *)())v93; /*0x1003214bf*/
    v61 = &v102; /*0x1003214c6*/
    v62 = codexmate_lib::commands::account_transition::finish_account_transition::h66c5f52759d78e50( /*0x1003214d4*/
            v93,
            &v102,
            (__int64)v92);
    if ( v93[0] == 0x8000000000000000LL ) /*0x1003214e0*/
    {
      v102 = v93[2]; /*0x100321509*/
      *((_QWORD *)&__src + 1) = v93[1]; /*0x100321510*/
      *(_QWORD *)&__src = v93[2]; /*0x100321514*/
      v104 = v93[2] + 48LL * v93[3]; /*0x10032151b*/
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h83e0235e6d3930d8( /*0x100321526*/
        &v76[6],
        &v102,
        v62);
    }
    else
    {
      v96 = v93[2]; /*0x10032153e*/
      v63 = v93[1]; /*0x10032154c*/
      v95 = (__int64 (__fastcall *)())v93[1]; /*0x100321553*/
      v94 = (__int64 *)v93[0]; /*0x10032155a*/
      if ( BYTE2(v93[9]) != 2 ) /*0x100321563*/
      {
        v75[6] = v93[9]; /*0x100321570*/
        v75[5] = v93[8]; /*0x10032157e*/
        v75[4] = v93[7]; /*0x10032158c*/
        v75[3] = v93[6]; /*0x10032159a*/
        v75[2] = v93[5]; /*0x1003215a8*/
        v75[1] = v93[4]; /*0x1003215bd*/
        v75[0] = v93[3]; /*0x1003215c4*/
        v60 = (__int64 (__fastcall *)())&v81; /*0x1003215ea*/
        _$LT$codexmate_lib..commands..account_transition..DesktopClient$u20$as$u20$codexmate_lib..commands..account_transition..TransitionClient$GT$::finish::h0abff4cac8faa0b1( /*0x1003215f8*/
          &v81,
          &v102,
          v75);
        if ( v81 != (__int64 *)0x8000000000000000LL ) /*0x100321604*/
        {
          v101 = v83; /*0x100321611*/
          v100 = v82; /*0x100321626*/
          v99 = v81; /*0x10032162d*/
          v110 = (__int64)&v99; /*0x10032163b*/
          v111 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100321646*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v102, &unk_1018F560B, &v110); /*0x10032165c*/
          v64 = v102; /*0x100321661*/
          v65 = __src; /*0x10032166f*/
          v66 = v96; /*0x10032167a*/
          if ( *((_QWORD *)&__src + 1) > (unsigned __int64)v94 - v96 ) /*0x100321687*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100321a65*/
              &v94,
              v96,
              *((_QWORD *)&__src + 1),
              1,
              1);
            v66 = v96; /*0x100321a6a*/
            v31 = v98; /*0x100321a71*/
            v5 = v97; /*0x100321a78*/
          }
          v60 = (__int64 (__fastcall *)())((char *)v95 + v66); /*0x100321694*/
          memcpy((char *)v95 + v66, (const void *)v65, *((size_t *)&v65 + 1)); /*0x10032169d*/
          v96 += *((_QWORD *)&v65 + 1); /*0x1003216a2*/
          if ( v64 ) /*0x1003216ac*/
          {
            v60 = (__int64 (__fastcall *)())v65; /*0x1003216b3*/
            v62 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x1003216b9*/
          }
          v61 = v99; /*0x1003216be*/
          if ( v99 ) /*0x1003216d2*/
          {
            v60 = v100; /*0x1003216d4*/
            v62 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1); /*0x1003216e0*/
          }
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v61, v63); /*0x1003216e5*/
      v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x1003216f4*/
      if ( !v67 ) /*0x1003216fc*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100321a9f*/
      v68 = v67; /*0x100321702*/
      qmemcpy(v67, "OAUTH_CLIENT_UPDATE_DEFERRED", 28); /*0x10032172b*/
      v102 = (__int64)&v94; /*0x10032173c*/
      *(_QWORD *)&__src = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10032174a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v73, &unk_1018F5627, &v102); /*0x100321766*/
      v102 = 28; /*0x100321772*/
      *(_QWORD *)&__src = v68; /*0x10032177d*/
      *((_QWORD *)&__src + 1) = 28; /*0x100321784*/
      v104 = v73[0]; /*0x10032179a*/
      v105 = v73[1]; /*0x10032179e*/
      v106 = v73[2]; /*0x1003217a9*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h859dc338a6111e70(&v76[6], &v102, v62); /*0x1003217b4*/
      if ( v94 ) /*0x1003217c3*/
        v62 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94, 1); /*0x1003217d1*/
    }
    v93[0] = v92[1]; /*0x1003217fd*/
    v93[2] = v92[0]; /*0x100321804*/
    v93[1] = v92[1]; /*0x10032180b*/
    v93[3] = v92[1] + 48LL * v92[2]; /*0x100321812*/
    _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h83e0235e6d3930d8( /*0x100321822*/
      &v76[6],
      v93,
      v62);
    qmemcpy(v5, v76, 0x68u); /*0x100321836*/
    if ( v92[3] != 0x8000000000000000LL && v92[3] ) /*0x100321848*/
      v62 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92[4], v92[3], 1); /*0x100321856*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h0aa27eb5d623d765( /*0x10032185f*/
      &v113,
      v62);
    if ( v31 ) /*0x100321867*/
      v62 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v31, 1); /*0x100321878*/
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h793352aefa4ab8b1( /*0x100321888*/
      v90,
      v114,
      v62);
  }
  else
  {
    qmemcpy(v93, v92, 0x60u); /*0x100320973*/
    v102 = 0; /*0x100320976*/
    __src = 1u; /*0x100320981*/
    v76[2] = 1610612768; /*0x100320994*/
    v76[0] = &v102; /*0x1003209a6*/
    v76[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x1003209b4*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x1003209c5*/
                            v93,
                            v76) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100320ae0*/
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
        55,
        &v84,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
    v24 = v102; /*0x1003209d2*/
    v25 = __src; /*0x1003209d9*/
    v26 = BYTE8(__src); /*0x1003209e0*/
    *((_DWORD *)a1 + 7) = HIDWORD(__src); /*0x1003209e8*/
    *(_DWORD *)((char *)a1 + 25) = *(_DWORD *)((char *)&__src + 9); /*0x1003209f0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v92, v76, v23); /*0x1003209fc*/
    a1[1] = v24; /*0x100320a01*/
    a1[2] = v25; /*0x100320a06*/
    *((_BYTE *)a1 + 24) = v26; /*0x100320a0b*/
    *a1 = 0x8000000000000000LL; /*0x100320a1a*/
  }
  return v5; /*0x100320dfb*/
}