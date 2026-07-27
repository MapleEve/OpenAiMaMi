// __ZN13codexmate_lib8commands8accounts28refresh_single_account_usage28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100700580 | 基线 same-set
double __fastcall codexmate_lib::commands::accounts::refresh_single_account_usage::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd03ce44fb26a7ca3(
        _DWORD *__dst,
        __int64 a2,
        double result)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12
  char v13; // r14
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  const void *v18; // rbx
  size_t v19; // r14
  __int64 v20; // rax
  size_t v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  char v30; // r15
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rsi
  int v34; // eax
  void *v35; // rax
  void *v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  _DWORD *v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // rbx
  _QWORD *v48; // r14
  __int64 v49; // rsi
  _QWORD v50[134]; // [rsp+0h] [rbp-13E0h] BYREF
  _QWORD v51[102]; // [rsp+430h] [rbp-FB0h] BYREF
  _QWORD v52[134]; // [rsp+760h] [rbp-C80h] BYREF
  _QWORD v53[102]; // [rsp+B90h] [rbp-850h] BYREF
  _QWORD v54[134]; // [rsp+EC0h] [rbp-520h] BYREF
  _QWORD v55[5]; // [rsp+12F0h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+1318h] [rbp-C8h]
  __int64 v57; // [rsp+1320h] [rbp-C0h]
  __int64 v58; // [rsp+1328h] [rbp-B8h]
  __int64 v59; // [rsp+1330h] [rbp-B0h]
  __int64 v60; // [rsp+1338h] [rbp-A8h]
  __int64 v61; // [rsp+1340h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+1348h] [rbp-98h]
  __int64 v63; // [rsp+1350h] [rbp-90h]
  __int64 v64; // [rsp+1358h] [rbp-88h]
  __int64 v65; // [rsp+1360h] [rbp-80h]
  __int64 v66; // [rsp+1368h] [rbp-78h] BYREF
  __int64 v67; // [rsp+1370h] [rbp-70h]
  __int64 v68; // [rsp+1378h] [rbp-68h]
  size_t v69; // [rsp+1380h] [rbp-60h]
  unsigned __int64 v70; // [rsp+1388h] [rbp-58h]
  __int64 v71; // [rsp+1390h] [rbp-50h]
  __int64 v72; // [rsp+1398h] [rbp-48h]
  int v73; // [rsp+13A4h] [rbp-3Ch]
  _QWORD *v74; // [rsp+13A8h] [rbp-38h]
  bool v75; // [rsp+13B7h] [rbp-29h]

  v50[119] = 0; /*0x100700594*/
  v71 = a2; /*0x1007005a6*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1007005bc*/
  v74 = v4; /*0x1007005c1*/
  if ( !v4 ) /*0x1007005cc*/
  {
    v52[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100700706*/
    v52[1] = 76; /*0x10070070d*/
    v54[0] = v52; /*0x10070071f*/
    v54[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10070072d*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100700749*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v54,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = *v4; /*0x1007005d2*/
  if ( !*v4 ) /*0x1007005d2*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v74); /*0x10070075c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1007005de*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x10070076c*/
    v9 = v74; /*0x100700770*/
    if ( *((_BYTE *)v74 + 8) ) /*0x100700774*/
      goto LABEL_6; /*0x10070077c*/
  }
  else
  {
    v8 = 0; /*0x1007005f9*/
    v9 = v74; /*0x1007005fc*/
    if ( *((_BYTE *)v74 + 8) )
    {
LABEL_6:
      v52[0] = 0; /*0x10070060e*/
      v52[1] = 1; /*0x100700619*/
      v52[2] = 0; /*0x100700624*/
      v54[2] = 1610612768; /*0x10070062f*/
      v54[0] = v52; /*0x100700641*/
      v54[1] = &off_101969DD0; /*0x10070064f*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v54) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v61, &unk_101969E38, &off_101969E00); /*0x100700c2a*/
      v11 = v52[0]; /*0x100700676*/
      v12 = v52[1]; /*0x10070067d*/
      v13 = v52[2]; /*0x100700684*/
      LODWORD(v51[0]) = *(_DWORD *)((char *)&v52[2] + 1); /*0x100700692*/
      *(_DWORD *)((char *)v51 + 3) = HIDWORD(v52[2]); /*0x10070069e*/
      if ( !v8
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v74 + 8) = 1; /*0x100700c45*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1007006cd*/
      v14 = v51[0]; /*0x1007006d2*/
      __dst[7] = *(_DWORD *)((char *)v51 + 3); /*0x1007006de*/
      *(_DWORD *)((char *)__dst + 25) = v14; /*0x1007006e2*/
      *((_QWORD *)__dst + 1) = v11; /*0x1007006e6*/
      *((_QWORD *)__dst + 2) = v12; /*0x1007006ea*/
      *((_BYTE *)__dst + 24) = v13; /*0x1007006ee*/
      *(_QWORD *)__dst = 3; /*0x1007006f2*/
      goto LABEL_35; /*0x1007006fa*/
    }
  }
  v15 = (__int64)(v9 + 2); /*0x100700782*/
  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v54); /*0x100700790*/
  if ( v54[0] == 2 ) /*0x1007007a7*/
  {
    qmemcpy(v51, &v54[1], 0x60u); /*0x1007007bf*/
    v66 = 0; /*0x1007007c2*/
    v67 = 1; /*0x1007007ca*/
    v68 = 0; /*0x1007007d2*/
    v53[2] = 1610612768; /*0x1007007da*/
    v53[0] = &v66; /*0x1007007e9*/
    v53[1] = &off_101969DD0; /*0x1007007f7*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100700808*/
                            v51,
                            v53) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v61, &unk_101969E38, &off_101969E00); /*0x100700c6f*/
    v61 = v66; /*0x100700827*/
    v62 = v67; /*0x10070082e*/
    v63 = v68; /*0x100700839*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v54[1]); /*0x100700843*/
    v16 = v61; /*0x10070084f*/
    v17 = v62; /*0x100700856*/
    v55[3] = v61; /*0x10070085d*/
    v55[4] = v62; /*0x100700864*/
    v56 = v63; /*0x10070086b*/
    *((_QWORD *)__dst + 3) = v63; /*0x100700872*/
    *((_QWORD *)__dst + 2) = v17; /*0x100700876*/
    *((_QWORD *)__dst + 1) = v16; /*0x10070087a*/
    *(_QWORD *)__dst = 3; /*0x10070087e*/
    if ( !v8 /*0x10070120a*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v54[1], v53, v17, v16) )
    {
      *((_BYTE *)v74 + 8) = 1; /*0x10070121b*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1007008a5*/
    goto LABEL_35; /*0x1007008aa*/
  }
  v59 = v54[3]; /*0x1007008b3*/
  v58 = v54[2]; /*0x1007008c1*/
  v57 = v54[1]; /*0x1007008c8*/
  memcpy(&v52[4], &v54[4], 0x410u); /*0x1007008e2*/
  v56 = v54[3]; /*0x1007008ee*/
  v52[1] = v54[1]; /*0x100700903*/
  v52[2] = v54[2]; /*0x10070090a*/
  v52[3] = v54[3]; /*0x100700911*/
  v52[0] = v54[0]; /*0x100700918*/
  v18 = (const void *)v74[51]; /*0x100700923*/
  v19 = v74[52]; /*0x10070092a*/
  if ( v19 ) /*0x100700934*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v52[4], &v54[4]); /*0x100700936*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x100700943*/
    v21 = v19; /*0x10070094b*/
    if ( !v20 ) /*0x100700958*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x100700962*/
  }
  else
  {
    v20 = 1; /*0x10070096c*/
    v21 = 0; /*0x100700971*/
  }
  v64 = v20; /*0x10070097e*/
  v69 = v21; /*0x10070098b*/
  memcpy((void *)v20, v18, v21); /*0x10070098f*/
  memcpy(v50, v52, sizeof(v50)); /*0x1007009a7*/
  if ( !v8 /*0x1007011f0*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v50, v52, v22, v23) )
  {
    *((_BYTE *)v74 + 8) = 1; /*0x100701201*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1007009cb*/
  memcpy(v54, v50, sizeof(v54)); /*0x1007009e9*/
  codexmate_lib::core::repository::enrich_single_account_usage::ha95d96dc350686fe( /*0x100700a15*/
    v52,
    v54,
    *(_QWORD *)(v71 + 160),
    *(_QWORD *)(v71 + 168),
    v64,
    v69);
  v65 = v52[1]; /*0x100700a28*/
  v72 = v52[0]; /*0x100700a33*/
  v70 = 0x8000000000000000LL; /*0x100700a37*/
  v75 = v52[0] == 0x8000000000000000LL; /*0x100700a3e*/
  v60 = v52[2]; /*0x100700a49*/
  v24 = *v74; /*0x100700a54*/
  if ( !*v74 ) /*0x100700a54*/
    v24 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v74); /*0x100700c88*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v24); /*0x100700a66*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v34 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, v54, v25, v26); /*0x100700c96*/
    LOBYTE(v34) = v34 ^ 1; /*0x100700c9b*/
    v73 = v34; /*0x100700c9d*/
    if ( *((_BYTE *)v74 + 8) ) /*0x100700ca7*/
      goto LABEL_27; /*0x100700cad*/
  }
  else
  {
    v73 = 0; /*0x100700a81*/
    if ( *((_BYTE *)v74 + 8) )
    {
LABEL_27:
      v51[0] = 0; /*0x100700a98*/
      v51[1] = 1; /*0x100700aa3*/
      v51[2] = 0; /*0x100700aae*/
      v52[2] = 1610612768; /*0x100700ab9*/
      v52[0] = v51; /*0x100700acb*/
      v52[1] = &off_101969DD0; /*0x100700ad9*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v52) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v61, &unk_101969E38, &off_101969E00); /*0x1007011e6*/
      v70 = v51[0]; /*0x100700b07*/
      v29 = v51[1]; /*0x100700b0b*/
      v30 = v51[2]; /*0x100700b12*/
      LODWORD(v53[0]) = *(_DWORD *)((char *)&v51[2] + 1); /*0x100700b20*/
      *(_DWORD *)((char *)v53 + 3) = HIDWORD(v51[2]); /*0x100700b2c*/
      if ( !(_BYTE)v73
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v27,
                               v28) )
      {
        *((_BYTE *)v74 + 8) = 1; /*0x10070123b*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x100700b58*/
      v31 = v53[0]; /*0x100700b5d*/
      __dst[7] = *(_DWORD *)((char *)v53 + 3); /*0x100700b69*/
      *(_DWORD *)((char *)__dst + 25) = v31; /*0x100700b6d*/
      *((_QWORD *)__dst + 1) = v70; /*0x100700b75*/
      *((_QWORD *)__dst + 2) = v29; /*0x100700b79*/
      *((_BYTE *)__dst + 24) = v30; /*0x100700b7d*/
      *(_QWORD *)__dst = 3; /*0x100700b81*/
      if ( 2 * v72 ) /*0x100700b8d*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v72, 1); /*0x100700ba3*/
      if ( v69 ) /*0x100700baf*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v69, 1); /*0x100700bbd*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(v54, result); /*0x100700bc9*/
      goto LABEL_35; /*0x100700bc9*/
    }
  }
  codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(v51, v15, v54); /*0x100700cc4*/
  if ( LODWORD(v51[0]) != 11 ) /*0x100700cd0*/
  {
    qmemcpy(v52, v51, 0x60u); /*0x100700cec*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v52[12], &v51[12]); /*0x100700cef*/
    v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100700cfe*/
    if ( !v35 ) /*0x100700d06*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100701272*/
    v36 = v35; /*0x100700d0c*/
    qmemcpy(v35, "PROGRESSIVE_STATE_SAVE_FAILED", 29); /*0x100700d43*/
    v53[0] = v52; /*0x100700d46*/
    v53[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100700d54*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, &unk_1017C347E, v53); /*0x100700d70*/
    v53[0] = 29; /*0x100700d75*/
    v53[1] = v36; /*0x100700d80*/
    v53[2] = 29; /*0x100700d87*/
    v53[3] = v55[0]; /*0x100700da0*/
    v53[4] = v55[1]; /*0x100700da7*/
    v53[5] = v55[2]; /*0x100700db5*/
    v37 = v54[106]; /*0x100700dbc*/
    if ( v54[106] == v54[104] ) /*0x100700dca*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v54[104]); /*0x100700dd3*/
    v38 = v54[105]; /*0x100700dd8*/
    v39 = 48 * v37; /*0x100700de3*/
    *(_QWORD *)(v54[105] + v39 + 40) = v53[5]; /*0x100700dee*/
    *(_QWORD *)(v38 + v39 + 32) = v53[4]; /*0x100700dfa*/
    *(_QWORD *)(v38 + v39 + 24) = v53[3]; /*0x100700e06*/
    *(_QWORD *)(v38 + v39 + 16) = v53[2]; /*0x100700e12*/
    v40 = v53[0]; /*0x100700e17*/
    *(_QWORD *)(v38 + v39 + 8) = v53[1]; /*0x100700e25*/
    *(_QWORD *)(v38 + v39) = v40; /*0x100700e2a*/
    v54[106] = v37 + 1; /*0x100700e31*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v52); /*0x100700e3f*/
  }
  codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h05def326631eb6ea(v52); /*0x100700e5f*/
  v53[86] = v54[103]; /*0x100700e6b*/
  v53[85] = v54[102]; /*0x100700e80*/
  v53[84] = v54[101]; /*0x100700e87*/
  qmemcpy(&v53[87], &v54[117], 0x78u); /*0x100700ea1*/
  memcpy(v53, v52, 0x2A0u); /*0x100700eba*/
  codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f( /*0x100700ed1*/
    v15,
    (__int64)v53,
    (__int64)&unk_10167214D,
    15);
  if ( v72 == v70 ) /*0x100700ee5*/
  {
    memcpy(v51, v53, sizeof(v51)); /*0x100700f01*/
    v68 = v54[106]; /*0x100700f0a*/
    v67 = v54[105]; /*0x100700f15*/
    v66 = v54[104]; /*0x100700f19*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(v52, v51, &v66); /*0x100700f2b*/
    v41 = __dst; /*0x100700f41*/
    memcpy(__dst, v52, 0x380u); /*0x100700f44*/
    *((_QWORD *)__dst + 112) = v70; /*0x100700f57*/
    if ( (_BYTE)v73 ) /*0x100700f60*/
      goto LABEL_53; /*0x100700f60*/
LABEL_52:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10070124e*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v41,
                             v52,
                             v42,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v74 + 8) = 1; /*0x10070125f*/
    }
    goto LABEL_53; /*0x100701263*/
  }
  memcpy(v51, v53, sizeof(v51)); /*0x100700f81*/
  v68 = v54[106]; /*0x100700f8a*/
  v67 = v54[105]; /*0x100700f95*/
  v66 = v54[104]; /*0x100700f99*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(v52, v51, &v66); /*0x100700fab*/
  v41 = __dst; /*0x100700fbc*/
  memcpy(__dst, v52, 0x380u); /*0x100700fbf*/
  *((_QWORD *)__dst + 112) = v72; /*0x100700fc8*/
  *((_QWORD *)__dst + 113) = v65; /*0x100700fd3*/
  *((_QWORD *)__dst + 114) = v60; /*0x100700ff0*/
  if ( !(_BYTE)v73 ) /*0x100700ff9*/
    goto LABEL_52; /*0x100700ff9*/
LABEL_53:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x10070100e*/
  if ( v69 ) /*0x10070102b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v69, 1); /*0x100701039*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(&v54[63]); /*0x100701045*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(v54); /*0x100701051*/
  v43 = v70; /*0x100701061*/
  if ( v54[88] != v70 && v54[88] ) /*0x10070106c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[89], v54[88], 1); /*0x10070107a*/
  v44 = v54[86]; /*0x10070107f*/
  v45 = v54[87]; /*0x100701086*/
  if ( v54[87] ) /*0x100701090*/
  {
    v46 = v54[86]; /*0x100701092*/
    do /*0x1007010b2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v46); /*0x1007010a3*/
      v46 += 424; /*0x1007010a8*/
      --v45; /*0x1007010af*/
    }
    while ( v45 ); /*0x1007010b2*/
  }
  if ( v54[85] ) /*0x1007010be*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 424LL * v54[85], 8); /*0x1007010cf*/
  v47 = v54[98]; /*0x1007010d4*/
  if ( v54[98] ) /*0x1007010e1*/
  {
    v48 = (_QWORD *)(v54[97] + 128LL); /*0x1007010ea*/
    do /*0x1007010fa*/
    {
      v49 = *(v48 - 1); /*0x1007010fc*/
      if ( v49 ) /*0x100701103*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v48, v49, 1); /*0x10070110d*/
      v48 += 20; /*0x1007010f0*/
      --v47; /*0x1007010f7*/
    }
    while ( v47 ); /*0x1007010fa*/
  }
  if ( v54[96] ) /*0x10070111e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[97], 160LL * v54[96], 8); /*0x100701134*/
  if ( LODWORD(v54[19]) != 2 ) /*0x100701140*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&v54[19]); /*0x100701149*/
  if ( v54[107] != v43 && v54[107] ) /*0x10070115d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[108], v54[107], 1); /*0x10070116b*/
  if ( v54[110] != v43 && v54[110] ) /*0x10070117f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[111], v54[110], 1); /*0x10070118d*/
  if ( v54[114] != v43 && v54[114] ) /*0x1007011a1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[115], v54[114], 1); /*0x1007011af*/
LABEL_35:
  v32 = v71; /*0x100700bce*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v71); /*0x100700bd5*/
  v33 = *(_QWORD *)(v32 + 152); /*0x100700bda*/
  if ( v33 ) /*0x100700be4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v32 + 160), v33, 1); /*0x100700bf2*/
  return result; /*0x100700bf7*/
}