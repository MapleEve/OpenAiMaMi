// __ZN13codexmate_lib4core5relay7manager12RelayManager32set_codex_router_no_account_mode @ 0x10027ba60 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::h03e4dd64117760f8(
        char *__dst,
        _QWORD *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  int v17; // eax
  __int128 v18; // kr00_16
  char v19; // r15
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  char *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  char *v26; // rdi
  __int64 v27; // rcx
  _BYTE *v28; // rdi
  __m128i *v29; // rsi
  __int64 v30; // rbx
  char v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r15
  void *v34; // rax
  char v35; // bl
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int64 v40; // rax
  __int128 v41; // kr20_16
  void *v42; // rax
  void *v43; // rbx
  __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rbx
  _QWORD *v49; // r13
  char v51; // bl
  __int64 v52; // r15
  __int64 v53; // rax
  char v54; // r14
  _QWORD *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE __dsta[296]; // [rsp+28h] [rbp-D98h] BYREF
  _BYTE v59[744]; // [rsp+150h] [rbp-C70h] BYREF
  char v60[8]; // [rsp+438h] [rbp-988h] BYREF
  __int64 v61; // [rsp+440h] [rbp-980h]
  __int64 v62; // [rsp+448h] [rbp-978h]
  char v63; // [rsp+55Dh] [rbp-863h]
  _BYTE v64[296]; // [rsp+560h] [rbp-860h] BYREF
  _QWORD v65[36]; // [rsp+688h] [rbp-738h] BYREF
  char v66; // [rsp+7ADh] [rbp-613h]
  _BYTE v67[296]; // [rsp+7B0h] [rbp-610h] BYREF
  _BYTE v68[744]; // [rsp+8D8h] [rbp-4E8h] BYREF
  _OWORD v69[6]; // [rsp+BC0h] [rbp-200h] BYREF
  _QWORD v70[3]; // [rsp+C20h] [rbp-1A0h] BYREF
  _QWORD v71[3]; // [rsp+C38h] [rbp-188h] BYREF
  _QWORD v72[3]; // [rsp+C50h] [rbp-170h] BYREF
  _QWORD v73[3]; // [rsp+C68h] [rbp-158h] BYREF
  __int64 v74; // [rsp+C80h] [rbp-140h]
  __int64 v75; // [rsp+C88h] [rbp-138h]
  __int64 v76; // [rsp+C90h] [rbp-130h] BYREF
  __int128 v77; // [rsp+C98h] [rbp-128h]
  __int128 v78; // [rsp+CA8h] [rbp-118h] BYREF
  __int128 v79; // [rsp+CB8h] [rbp-108h]
  __int128 v80; // [rsp+CC8h] [rbp-F8h]
  __int128 v81; // [rsp+CD8h] [rbp-E8h]
  __int64 v82; // [rsp+CE8h] [rbp-D8h]
  __int64 v83; // [rsp+CF0h] [rbp-D0h]
  __int128 v84; // [rsp+CF8h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+D08h] [rbp-B8h]
  __int128 v86; // [rsp+D10h] [rbp-B0h]
  __int64 v87; // [rsp+D20h] [rbp-A0h]
  char v88; // [rsp+D28h] [rbp-98h]
  __int64 v89; // [rsp+D30h] [rbp-90h] BYREF
  __int64 v90; // [rsp+D38h] [rbp-88h]
  __int64 v91; // [rsp+D40h] [rbp-80h]
  __int64 v92; // [rsp+D48h] [rbp-78h]
  __int64 v93; // [rsp+D50h] [rbp-70h]
  __int64 v94; // [rsp+D58h] [rbp-68h]
  char **v95; // [rsp+D60h] [rbp-60h]
  _QWORD *v96; // [rsp+D68h] [rbp-58h]
  __int128 v97; // [rsp+D70h] [rbp-50h] BYREF
  __int64 v98; // [rsp+D80h] [rbp-40h]
  int v99; // [rsp+D8Ch] [rbp-34h]
  char v100; // [rsp+D93h] [rbp-2Dh] BYREF
  char v101; // [rsp+D94h] [rbp-2Ch] BYREF
  char v102; // [rsp+D95h] [rbp-2Bh] BYREF
  unsigned __int8 v103; // [rsp+D96h] [rbp-2Ah]
  _BYTE v104[41]; // [rsp+D97h] [rbp-29h] BYREF

  v94 = a4; /*0x10027ba74*/
  v104[0] = a3; /*0x10027ba88*/
  v89 = a5; /*0x10027ba8b*/
  v90 = a6; /*0x10027ba92*/
  v8 = a2[2]; /*0x10027ba99*/
  if ( !__OFSUB__(0, *(_QWORD *)(v8 + 16)) ) /*0x10027baa3*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v68[8], v8 + 16); /*0x10027bbe9*/
    *(_QWORD *)v68 = 9; /*0x10027bbee*/
    qmemcpy(__dst + 8, v68, 0x60u); /*0x10027bc0a*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027bc0d*/
    return __dst; /*0x10027bc11*/
  }
  v9 = a2[4]; /*0x10027baa9*/
  v10 = (_QWORD *)(v9 + 16); /*0x10027baad*/
  v91 = v9; /*0x10027bab1*/
  v11 = *(_QWORD *)(v9 + 16); /*0x10027bab5*/
  if ( !v11 ) /*0x10027babc*/
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9 + 16); /*0x10027bc1e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x10027bac2*/
  v92 = 0x7FFFFFFFFFFFFFFFLL; /*0x10027bade*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10027bae5*/
  {
    v17 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v8, v12, 0x7FFFFFFFFFFFFFFFLL); /*0x10027bc26*/
    LOBYTE(v17) = v17 ^ 1; /*0x10027bc2b*/
    v99 = v17; /*0x10027bc2d*/
    if ( *(_BYTE *)(v91 + 24) ) /*0x10027bc34*/
      goto LABEL_6; /*0x10027bc3a*/
  }
  else
  {
    v99 = 0; /*0x10027baeb*/
    if ( *(_BYTE *)(v91 + 24) ) /*0x10027baf6*/
    {
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v8); /*0x10027bb02*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10027bb11*/
      if ( !v13 ) /*0x10027bb19*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10027ca4e*/
      v16 = (unsigned __int64)v13; /*0x10027bb1f*/
      qmemcpy(v13, "Codex router transition lock is poisoned", 40); /*0x10027bb64*/
      if ( !(_BYTE)v99 /*0x10027c9f6*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v92) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v14, v15) )
      {
        *(_BYTE *)(v91 + 24) = 1; /*0x10027ca07*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x10027bb84*/
      *((_QWORD *)__dst + 1) = 10; /*0x10027bb90*/
      *((_QWORD *)__dst + 2) = 40; /*0x10027bb99*/
      __dst[24] = v16; /*0x10027bba2*/
      __dst[31] = HIBYTE(v16); /*0x10027bbae*/
      *(_WORD *)(__dst + 29) = HIDWORD(v16) >> 8; /*0x10027bbb7*/
      *(_DWORD *)(__dst + 25) = v16 >> 8; /*0x10027bbbd*/
      *((_QWORD *)__dst + 4) = 40; /*0x10027bbc2*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027bbd5*/
      return __dst; /*0x10027bbd9*/
    }
  }
  v96 = v10; /*0x10027bc57*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x10027bc5b*/
    v68,
    a2 + 5,
    "switching router account moderouter auth-mode toggle",
    29);
  v18 = *(_OWORD *)v68; /*0x10027bc67*/
  v19 = v68[16]; /*0x10027bc6e*/
  if ( *(_QWORD *)v68 != 11 ) /*0x10027bc7a*/
  {
    v20 = (__int64)&v68[17]; /*0x10027bd05*/
    v22 = __dst + 25; /*0x10027bd0c*/
    memcpy(__dst + 25, &v68[17], 0x4Fu); /*0x10027bd16*/
    *(_OWORD *)(__dst + 8) = v18; /*0x10027bd1b*/
    __dst[24] = v19; /*0x10027bd25*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027bd34*/
    v21 = v96; /*0x10027bd38*/
    goto LABEL_54; /*0x10027bd3c*/
  }
  v103 = v68[16]; /*0x10027bc80*/
  v95 = *(char ***)&v68[8]; /*0x10027bc84*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v64, a2); /*0x10027bc92*/
  if ( !v64[292] ) /*0x10027bc9e*/
  {
    memcpy(__dsta, v64, sizeof(__dsta)); /*0x10027bd57*/
    __dsta[293] = v104[0]; /*0x10027bd60*/
    v21 = v96; /*0x10027bd73*/
    codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v68, a2, __dsta); /*0x10027bd77*/
    if ( *(_DWORD *)v68 == 11 ) /*0x10027bd83*/
    {
      codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v68, a2); /*0x10027bd93*/
      codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v59, v68); /*0x10027bda6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v68); /*0x10027bdb2*/
      v20 = (__int64)v59; /*0x10027bdb7*/
      v26 = __dst; /*0x10027bdc3*/
      memcpy(__dst, v59, 0x128u); /*0x10027bdc6*/
      *((_QWORD *)__dst + 37) = 0x8000000000000000LL; /*0x10027bdd5*/
      __dst[320] = 0; /*0x10027bddd*/
      if ( (v103 & 1) != 0 ) /*0x10027bdea*/
        goto LABEL_53; /*0x10027bdea*/
    }
    else
    {
      qmemcpy(__dst + 8, v68, 0x60u); /*0x10027c0db*/
      v20 = (__int64)&v68[96]; /*0x10027c0db*/
      v26 = __dst + 104; /*0x10027c0db*/
      v27 = 0; /*0x10027c0db*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027c0e8*/
      if ( (v103 & 1) != 0 ) /*0x10027c0f0*/
        goto LABEL_53; /*0x10027c0f0*/
    }
LABEL_52:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v92) != 0 /*0x10027ca2a*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v20, v25, v27) )
    {
      *((_BYTE *)v95 + 8) = 1; /*0x10027ca3b*/
    }
    goto LABEL_53; /*0x10027ca3f*/
  }
  codexmate_lib::core::relay::manager::RelayManager::transition_paths::h8ef4521bfd1dad53(v68); /*0x10027bcaf*/
  qmemcpy(v67, &v68[8], 0x60u); /*0x10027bcce*/
  if ( *(_QWORD *)v68 == 0x8000000000000000LL ) /*0x10027bcde*/
  {
    qmemcpy(__dst + 8, v67, 0x60u); /*0x10027bcf5*/
    v20 = (__int64)&v67[96]; /*0x10027bcf5*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027bcf8*/
    v21 = v96; /*0x10027bcfc*/
    goto LABEL_51; /*0x10027bd00*/
  }
  memcpy(&v59[104], &v68[104], 0x280u); /*0x10027be08*/
  qmemcpy(&v59[8], v67, 0x60u); /*0x10027be20*/
  v29 = (__m128i *)&v67[96]; /*0x10027be20*/
  v28 = &v59[104]; /*0x10027be20*/
  *(_QWORD *)v59 = *(_QWORD *)v68; /*0x10027be23*/
  if ( v64[293] != v104[0] /*0x10027be68*/
    || (v29 = (__m128i *)a2[3],
        codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
          (__int64 *)v68,
          v29,
          (const __m128i *)v59,
          0,
          0),
        v30 = *(_QWORD *)&v68[16],
        v28 = v68,
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$tauri_runtime..webview..InitializationScript$GT$$GT$::hc4ef94c49e9c448d(v68),
        v30) )
  {
LABEL_22:
    v31 = v94 + 4; /*0x10027be6e*/
    v101 = v94 + 4; /*0x10027be76*/
    v73[0] = &v100; /*0x10027be7e*/
    v73[1] = &v89; /*0x10027be8c*/
    v73[2] = &v101; /*0x10027be97*/
    v100 = 1; /*0x10027be9e*/
    v32 = v89; /*0x10027bea2*/
    if ( v89 ) /*0x10027beac*/
    {
      v33 = v90; /*0x10027beae*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29); /*0x10027beb5*/
      v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x10027bec4*/
      if ( !v34 ) /*0x10027becc*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x10027ca5f*/
      qmemcpy(v34, "stopping_codex", 14); /*0x10027beea*/
      *(_QWORD *)v68 = 14; /*0x10027beed*/
      *(_QWORD *)&v68[8] = v34; /*0x10027bef8*/
      *(_QWORD *)&v68[16] = 14; /*0x10027beff*/
      v68[24] = 1; /*0x10027bf0a*/
      v68[25] = v31; /*0x10027bf11*/
      (*(void (__fastcall **)(__int64, _BYTE *))(v33 + 40))(v32, v68); /*0x10027bf22*/
    }
    _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10027bf34*/
      v60,
      v64);
    v35 = v104[0]; /*0x10027bf39*/
    v63 = v104[0]; /*0x10027bf3d*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x10027bf62*/
      v67,
      v61,
      v61 + 232 * v62);
    codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(v68, v60); /*0x10027bf78*/
    v85 = *(_QWORD *)&v67[16]; /*0x10027bf84*/
    v84 = *(_OWORD *)v67; /*0x10027bfa0*/
    v86 = *(_OWORD *)v68; /*0x10027bfb5*/
    v87 = *(_QWORD *)&v68[16]; /*0x10027bfca*/
    v88 = v35; /*0x10027bfd1*/
    if ( *(_QWORD *)&v67[16] && v87 ) /*0x10027bfe8*/
    {
      if ( v104[0] /*0x10027c00e*/
        || (codexmate_lib::core::relay::router_unlock_auth::verify_real_auth_restore_ready::hd6c33ff9eb693774(v68, v59),
            *(_DWORD *)v68 == 11) )
      {
        *(_QWORD *)v68 = v73; /*0x10027c01b*/
        *(_QWORD *)&v68[8] = v104; /*0x10027c026*/
        *(_QWORD *)&v68[16] = v59; /*0x10027c034*/
        *(_QWORD *)&v68[24] = a2; /*0x10027c03b*/
        *(_QWORD *)&v68[32] = &v84; /*0x10027c049*/
        codexmate_lib::core::relay::router_transition::run::h691af2bc0aba412d( /*0x10027c080*/
          (unsigned int)v69,
          (unsigned int)v59,
          0,
          0,
          (unsigned int)"router auth-mode toggle",
          23,
          (__int64)v68,
          (__int64)a2,
          (__int64)v59,
          (__int64)a2,
          (__int64)v104);
        if ( LODWORD(v69[0]) == 11 ) /*0x10027c08c*/
        {
          if ( *((_QWORD *)&v69[0] + 1) == 2 ) /*0x10027c09a*/
          {
            v36 = v69[1]; /*0x10027c0a0*/
            v37 = v69[2]; /*0x10027c0a7*/
            v38 = v69[3]; /*0x10027c0ae*/
            v39 = v69[4]; /*0x10027c0b5*/
            v40 = 0; /*0x10027c0c1*/
            v41 = 8u; /*0x10027c0c5*/
          }
          else
          {
            v36 = *(_OWORD *)((char *)v69 + 8); /*0x10027c438*/
            v37 = *(_OWORD *)((char *)&v69[1] + 8); /*0x10027c43f*/
            v38 = *(_OWORD *)((char *)&v69[2] + 8); /*0x10027c446*/
            v39 = *(_OWORD *)((char *)&v69[3] + 8); /*0x10027c44d*/
            v40 = *((_QWORD *)&v69[4] + 1); /*0x10027c454*/
            v41 = v69[5]; /*0x10027c462*/
          }
          v78 = v36; /*0x10027c469*/
          v79 = v37; /*0x10027c470*/
          v80 = v38; /*0x10027c477*/
          v81 = v39; /*0x10027c47e*/
          v76 = v40; /*0x10027c485*/
          v77 = v41; /*0x10027c48c*/
          if ( *((_QWORD *)&v41 + 1) ) /*0x10027c49d*/
          {
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x10027c4b1*/
            {
              alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10027c4cb*/
                v68,
                v41,
                *((_QWORD *)&v41 + 1),
                " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
                3);
              *(_QWORD *)&v67[16] = *(_QWORD *)&v68[16]; /*0x10027c4d7*/
              *(_OWORD *)v67 = *(_OWORD *)v68; /*0x10027c4f3*/
              v65[0] = v67; /*0x10027c4fa*/
              v65[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027c508*/
              *(_QWORD *)v68 = "codexmate_lib::core::relay::manager"; /*0x10027c516*/
              *(_QWORD *)&v68[8] = 35; /*0x10027c51d*/
              *(_QWORD *)&v68[16] = "codexmate_lib::core::relay::manager"; /*0x10027c528*/
              *(_QWORD *)&v68[24] = 35; /*0x10027c52f*/
              *(_QWORD *)&v68[32] = &off_10195DC30; /*0x10027c541*/
              log::__private_api::log::h719f4907c7336ae9(&unk_1017BA6BE, v65, 2, v68); /*0x10027c562*/
              if ( *(_QWORD *)v67 ) /*0x10027c571*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v67[8], *(_QWORD *)v67, 1); /*0x10027c57f*/
            }
          }
          codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v65, a2); /*0x10027c58e*/
          v102 = v66; /*0x10027c59a*/
          if ( v66 == v104[0] ) /*0x10027c5a0*/
          {
            if ( (_BYTE)v94 ) /*0x10027c5a6*/
            {
              codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h85337424ec03525b(v73); /*0x10027c5b3*/
              codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(&v97); /*0x10027c5bc*/
            }
            else
            {
              *(_QWORD *)&v97 = 0x8000000000000000LL; /*0x10027c6d0*/
            }
            codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0( /*0x10027c6de*/
              (__int64)v67,
              (__int64)a2);
            *(_QWORD *)&v68[312] = v98; /*0x10027c6e7*/
            *(_OWORD *)&v68[296] = v97; /*0x10027c6fd*/
            memcpy(v68, v67, 0x128u); /*0x10027c71a*/
            v54 = v102; /*0x10027c71f*/
            memcpy(__dst, v68, 0x140u); /*0x10027c72f*/
            __dst[320] = v54; /*0x10027c734*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v65); /*0x10027c743*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v76); /*0x10027c74f*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(&v78); /*0x10027c75b*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnPlan$GT$::hfa03d8b1bce7796f(&v84); /*0x10027c767*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v60); /*0x10027c773*/
            core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v59); /*0x10027c77f*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v64); /*0x10027c78b*/
            v55 = v96; /*0x10027c798*/
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x10027c79c*/
              v95,
              v103);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x10027c7a8*/
              v55,
              (unsigned __int8)v99);
            return __dst; /*0x10027c7ad*/
          }
          if ( (_BYTE)v94 /*0x10027c608*/
            && (codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(v68),
                v74 = *(_QWORD *)&v68[8],
                v75 = *(_QWORD *)&v68[16],
                *(_QWORD *)v68 != 0x8000000000000000LL) )
          {
            *(_QWORD *)&v68[16] = v75; /*0x10027c7c0*/
            *(_QWORD *)&v68[8] = v74; /*0x10027c7c7*/
            codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h226398926b67a727( /*0x10027c7e3*/
              v67,
              v68);
            v97 = *(_OWORD *)v67; /*0x10027c7f6*/
            v98 = *(_QWORD *)&v67[16]; /*0x10027c805*/
          }
          else
          {
            *(_QWORD *)&v97 = 0; /*0x10027c60e*/
            *((_QWORD *)&v97 + 1) = 1; /*0x10027c616*/
            v98 = 0; /*0x10027c61e*/
          }
          *(_QWORD *)v68 = &v97; /*0x10027c80d*/
          *(_QWORD *)&v68[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027c81b*/
          *(_QWORD *)&v68[16] = v104; /*0x10027c822*/
          *(_QWORD *)&v68[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10027c830*/
          *(_QWORD *)&v68[32] = &v102; /*0x10027c83b*/
          *(_QWORD *)&v68[40] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10027c842*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v70, &unk_1017BA70D, v68); /*0x10027c85e*/
          *((_QWORD *)__dst + 4) = v70[2]; /*0x10027c86a*/
          v56 = v70[0]; /*0x10027c86f*/
          *((_QWORD *)__dst + 3) = v70[1]; /*0x10027c87d*/
          *((_QWORD *)__dst + 2) = v56; /*0x10027c882*/
          *((_QWORD *)__dst + 1) = 10; /*0x10027c887*/
          *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027c89a*/
          v20 = v97; /*0x10027c89e*/
          if ( (_QWORD)v97 ) /*0x10027c8a5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v97 + 1), v97, 1); /*0x10027c8b0*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v65); /*0x10027c8bc*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v76); /*0x10027c8c8*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(&v78); /*0x10027c8d4*/
        }
        else
        {
          qmemcpy(v65, v69, 0x60u); /*0x10027c320*/
          *(_QWORD *)v67 = v65; /*0x10027c323*/
          *(_QWORD *)&v67[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027c331*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v68, &unk_1017BA756, v67); /*0x10027c350*/
          v52 = *(_QWORD *)&v68[8]; /*0x10027c360*/
          v93 = *(_QWORD *)v68; /*0x10027c360*/
          codexmate_lib::core::relay::manager::RelayManager::restore_router_enabled_stably::h7cdb26249eaa89f9( /*0x10027c389*/
            (__int64 *)v67,
            (__int64)a2,
            (__int64)v59,
            *(__int64 *)&v68[8],
            *(__int64 *)&v68[16],
            (__int64)v64);
          if ( *(_DWORD *)v67 == 11 ) /*0x10027c395*/
          {
            if ( (_BYTE)v94 /*0x10027c3dd*/
              && (codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(v68),
                  v82 = *(_QWORD *)&v68[8],
                  v83 = *(_QWORD *)&v68[16],
                  *(_QWORD *)v68 != 0x8000000000000000LL) )
            {
              *(_QWORD *)&v68[16] = v83; /*0x10027c8ec*/
              *(_QWORD *)&v68[8] = v82; /*0x10027c8f3*/
              codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h226398926b67a727( /*0x10027c90f*/
                &v78,
                v68);
              v97 = v78; /*0x10027c922*/
              v98 = v79; /*0x10027c931*/
            }
            else
            {
              *(_QWORD *)&v97 = 0; /*0x10027c3e3*/
              *((_QWORD *)&v97 + 1) = 1; /*0x10027c3eb*/
              v98 = 0; /*0x10027c3f3*/
            }
            *(_QWORD *)v68 = &v97; /*0x10027c939*/
            *(_QWORD *)&v68[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027c947*/
            *(_QWORD *)&v68[16] = v65; /*0x10027c955*/
            *(_QWORD *)&v68[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027c95c*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, &unk_1017BA77C, v68); /*0x10027c978*/
            *((_QWORD *)__dst + 4) = v72[2]; /*0x10027c984*/
            v57 = v72[0]; /*0x10027c989*/
            *((_QWORD *)__dst + 3) = v72[1]; /*0x10027c997*/
            *((_QWORD *)__dst + 2) = v57; /*0x10027c99c*/
            *((_QWORD *)__dst + 1) = 10; /*0x10027c9a1*/
            *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027c9b4*/
            if ( (_QWORD)v97 ) /*0x10027c9bf*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v97 + 1), v97, 1); /*0x10027c9ca*/
          }
          else
          {
            qmemcpy(v68, v67, 0x60u); /*0x10027c63a*/
            *(_QWORD *)&v78 = v65; /*0x10027c644*/
            *((_QWORD *)&v78 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027c64b*/
            *(_QWORD *)&v79 = v68; /*0x10027c652*/
            *((_QWORD *)&v79 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027c659*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v71, &unk_1017BA7C9, &v78); /*0x10027c675*/
            *((_QWORD *)__dst + 4) = v71[2]; /*0x10027c681*/
            v53 = v71[0]; /*0x10027c686*/
            *((_QWORD *)__dst + 3) = v71[1]; /*0x10027c694*/
            *((_QWORD *)__dst + 2) = v53; /*0x10027c699*/
            *((_QWORD *)__dst + 1) = 10; /*0x10027c69e*/
            *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027c6b1*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v68); /*0x10027c6bc*/
          }
          v20 = v93; /*0x10027c9cf*/
          if ( v93 ) /*0x10027c9d6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v93, 1); /*0x10027c9e0*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v65); /*0x10027c9ec*/
        }
        goto LABEL_37; /*0x10027c8d9*/
      }
      qmemcpy(__dst + 8, v68, 0x60u); /*0x10027c430*/
      v20 = (__int64)&v68[96]; /*0x10027c430*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v60); /*0x10027c0fb*/
      v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(157, 1); /*0x10027c10a*/
      if ( !v42 ) /*0x10027c112*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 157); /*0x10027ca70*/
      v43 = v42; /*0x10027c118*/
      v20 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_171; /*0x10027c11b*/
      memcpy(v42, &anon_b0ee9adff4519c22b647af231a5a39fa_171, 0x9Du); /*0x10027c12a*/
      *((_QWORD *)__dst + 1) = 10; /*0x10027c12f*/
      *((_QWORD *)__dst + 2) = 157; /*0x10027c138*/
      *((_QWORD *)__dst + 3) = v43; /*0x10027c141*/
      *((_QWORD *)__dst + 4) = 157; /*0x10027c146*/
    }
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027c159*/
LABEL_37:
    v44 = *((_QWORD *)&v84 + 1); /*0x10027c15d*/
    v45 = v85; /*0x10027c164*/
    if ( v85 ) /*0x10027c16e*/
    {
      v46 = *((_QWORD *)&v84 + 1); /*0x10027c170*/
      do /*0x10027c192*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v46); /*0x10027c183*/
        v46 += 232; /*0x10027c188*/
        --v45; /*0x10027c18f*/
      }
      while ( v45 ); /*0x10027c192*/
    }
    if ( (_QWORD)v84 ) /*0x10027c19e*/
    {
      v20 = 232 * v84; /*0x10027c1a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 232 * v84, 8); /*0x10027c1af*/
    }
    v47 = *((_QWORD *)&v86 + 1); /*0x10027c1b4*/
    v48 = v87; /*0x10027c1bb*/
    if ( v87 ) /*0x10027c1c5*/
    {
      v49 = (_QWORD *)(*((_QWORD *)&v86 + 1) + 8LL); /*0x10027c1c7*/
      do /*0x10027c1d7*/
      {
        v20 = *(v49 - 1); /*0x10027c1d9*/
        if ( v20 ) /*0x10027c1e0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v49, v20, 1); /*0x10027c1eb*/
        v49 += 3; /*0x10027c1d0*/
        --v48; /*0x10027c1d4*/
      }
      while ( v48 ); /*0x10027c1d7*/
    }
    if ( (_QWORD)v86 ) /*0x10027c1fc*/
    {
      v20 = 24 * v86; /*0x10027c202*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 24 * v86, 8); /*0x10027c20e*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v60); /*0x10027c21a*/
    goto LABEL_50; /*0x10027c21a*/
  }
  v28 = v68; /*0x10027c298*/
  codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(v68, a2); /*0x10027c2a2*/
  v29 = *(__m128i **)v68; /*0x10027c2a7*/
  if ( *(_QWORD *)v68 != 0x8000000000000000LL ) /*0x10027c2bb*/
  {
    if ( *(_QWORD *)v68 ) /*0x10027c403*/
    {
      v28 = *(_BYTE **)&v68[8]; /*0x10027c409*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v68[8], *(_QWORD *)v68, 1); /*0x10027c415*/
    }
    goto LABEL_22; /*0x10027c41a*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0((__int64)v68, (__int64)a2); /*0x10027c2cb*/
  v51 = v64[293]; /*0x10027c2d0*/
  v20 = (__int64)v68; /*0x10027c2d7*/
  memcpy(__dst, v68, 0x128u); /*0x10027c2e6*/
  *((_QWORD *)__dst + 37) = 0x8000000000000000LL; /*0x10027c2f5*/
  __dst[320] = v51; /*0x10027c2fd*/
LABEL_50:
  v21 = v96; /*0x10027c21f*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v59); /*0x10027c22a*/
LABEL_51:
  v26 = v64; /*0x10027c22f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v64); /*0x10027c236*/
  if ( (v103 & 1) == 0 ) /*0x10027c23f*/
    goto LABEL_52; /*0x10027c23f*/
LABEL_53:
  v22 = *v95; /*0x10027c255*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v95); /*0x10027c25c*/
LABEL_54:
  if ( !(_BYTE)v99 /*0x10027ca10*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v92) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, v20, v23, v24) )
  {
    *(_BYTE *)(v91 + 24) = 1; /*0x10027ca21*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x10027c27e*/
  return __dst; /*0x10027c286*/
}