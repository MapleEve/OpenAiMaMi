_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::h9a7e2a1f189a607c(
        _QWORD *__dst,
        __int64 *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  _QWORD *v11; // r12
  __int64 v12; // rbx
  void *v13; // rax
  char v14; // r13
  __int64 v15; // r15
  char v16; // r12
  void *v17; // rax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdx
  char v25; // al
  __int64 *v26; // rdi
  __int64 *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  char v30; // al
  _QWORD *v31; // rbx
  __int64 v32; // r15
  void *v33; // rax
  void *v34; // r14
  char v35; // r14
  char v36; // bl
  __int64 v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rdx
  char v40; // al
  char v41; // r12
  __int64 v42; // r15
  char v43; // r13
  void *v44; // rax
  void *v46; // rax
  void *v47; // r14
  _BYTE v48[344]; // [rsp+0h] [rbp-820h] BYREF
  _BYTE v49[344]; // [rsp+158h] [rbp-6C8h] BYREF
  _BYTE v50[344]; // [rsp+2B0h] [rbp-570h] BYREF
  _QWORD __src[43]; // [rsp+408h] [rbp-418h] BYREF
  _QWORD v52[12]; // [rsp+560h] [rbp-2C0h] BYREF
  int v53; // [rsp+5C0h] [rbp-260h] BYREF
  char v54; // [rsp+5C8h] [rbp-258h]
  __int64 __dsta[46]; // [rsp+620h] [rbp-200h] BYREF
  _QWORD v56[3]; // [rsp+790h] [rbp-90h] BYREF
  __int64 v57; // [rsp+7A8h] [rbp-78h] BYREF
  __int64 v58; // [rsp+7B0h] [rbp-70h]
  __int64 v59; // [rsp+7B8h] [rbp-68h] BYREF
  __int64 v60; // [rsp+7C0h] [rbp-60h]
  __int64 v61; // [rsp+7C8h] [rbp-58h]
  int v62; // [rsp+7D4h] [rbp-4Ch]
  __int64 v63; // [rsp+7D8h] [rbp-48h]
  __int64 v64; // [rsp+7E0h] [rbp-40h]
  void *v65; // [rsp+7E8h] [rbp-38h]
  char v66; // [rsp+7F5h] [rbp-2Bh] BYREF
  unsigned __int8 v67; // [rsp+7F6h] [rbp-2Ah]
  char v68; // [rsp+7F7h] [rbp-29h] BYREF

  v62 = a4; /*0x1005c90aa*/
  LODWORD(v64) = a3; /*0x1005c90ad*/
  v11 = __dst; /*0x1005c90b3*/
  v57 = a5; /*0x1005c90b6*/
  v58 = a6; /*0x1005c90ba*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v50, (__int64)a2, a7, a8); /*0x1005c90c5*/
  v67 = v50[341]; /*0x1005c90d1*/
  if ( v50[340] ) /*0x1005c90db*/
  {
    v66 = 4; /*0x1005c90e1*/
    v56[0] = &v68; /*0x1005c90e9*/
    v56[1] = &v57; /*0x1005c90f4*/
    v56[2] = &v66; /*0x1005c90ff*/
    v68 = 1; /*0x1005c9103*/
    v65 = __dst; /*0x1005c910a*/
    if ( a5 ) /*0x1005c910e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50); /*0x1005c9110*/
      v12 = 14; /*0x1005c9115*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c9124*/
      if ( !v13 ) /*0x1005c912c*/
        goto LABEL_70; /*0x1005c912c*/
      qmemcpy(v13, "stopping_codex", 14); /*0x1005c914a*/
      __dsta[0] = 14; /*0x1005c914d*/
      __dsta[1] = (__int64)v13; /*0x1005c9158*/
      __dsta[2] = 14; /*0x1005c915f*/
      LOWORD(__dsta[3]) = 1025; /*0x1005c916a*/
      (*(void (__fastcall **)(__int64, __int64 *))(a6 + 40))(a5, __dsta); /*0x1005c917d*/
      v11 = v65; /*0x1005c9181*/
    }
    codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120(__dsta, 5, 0); /*0x1005c9193*/
    if ( LODWORD(__dsta[0]) != 10 ) /*0x1005c91a9*/
    {
      v26 = v11 + 1; /*0x1005c9388*/
      v27 = __dsta; /*0x1005c938d*/
LABEL_21:
      qmemcpy(v26, v27, 0x60u); /*0x1005c9399*/
      goto LABEL_51; /*0x1005c9399*/
    }
    v14 = ++v68; /*0x1005c91b4*/
    v15 = v57; /*0x1005c91bb*/
    if ( v57 ) /*0x1005c91c2*/
    {
      v63 = v58; /*0x1005c91cc*/
      v16 = v66; /*0x1005c91d0*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dsta); /*0x1005c91d5*/
      v12 = 14; /*0x1005c91da*/
      v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c91e9*/
      if ( !v17 ) /*0x1005c91f1*/
        goto LABEL_70; /*0x1005c91f1*/
      qmemcpy(v17, "preparing_auth", 14); /*0x1005c920f*/
      __dsta[0] = 14; /*0x1005c9212*/
      __dsta[1] = (__int64)v17; /*0x1005c921d*/
      __dsta[2] = 14; /*0x1005c9224*/
      LOBYTE(__dsta[3]) = v14; /*0x1005c922f*/
      BYTE1(__dsta[3]) = v16; /*0x1005c9236*/
      (*(void (__fastcall **)(__int64, __int64 *))(v63 + 40))(v15, __dsta); /*0x1005c924b*/
      v11 = v65; /*0x1005c924e*/
    }
    if ( (_BYTE)v64 ) /*0x1005c9256*/
    {
      v18 = *a2 + 16; /*0x1005c925f*/
      codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h2f0328bac8ed85a3(__dsta, v18, 1, a7); /*0x1005c926f*/
      v20 = __dsta[0]; /*0x1005c9274*/
      if ( __dsta[0] != 10 ) /*0x1005c927f*/
      {
        v35 = __dsta[1]; /*0x1005c94cc*/
        memcpy((char *)v11 + 17, (char *)&__dsta[1] + 1, 0x57u); /*0x1005c94e5*/
        v11[1] = v20; /*0x1005c94ea*/
        *((_BYTE *)v11 + 16) = v35; /*0x1005c94ef*/
        goto LABEL_51; /*0x1005c94f4*/
      }
      LOBYTE(v19) = 1; /*0x1005c9285*/
      LODWORD(v63) = v19; /*0x1005c9287*/
    }
    else
    {
      v31 = (_QWORD *)(*a2 + 16); /*0x1005c9436*/
      v18 = (__int64)v31; /*0x1005c9441*/
      codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392((__int64)__dsta, v31, a7); /*0x1005c9444*/
      v32 = __dsta[0]; /*0x1005c9449*/
      if ( __dsta[0] != 10 ) /*0x1005c9454*/
      {
        v36 = __dsta[1]; /*0x1005c94f9*/
        memcpy((char *)v11 + 17, (char *)&__dsta[1] + 1, 0x57u); /*0x1005c9511*/
        v11[1] = v32; /*0x1005c9516*/
        *((_BYTE *)v11 + 16) = v36; /*0x1005c951b*/
        goto LABEL_51; /*0x1005c9520*/
      }
      if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb(v31) ) /*0x1005c945d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31); /*0x1005c946a*/
        v12 = 111; /*0x1005c946f*/
        v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(111, 1); /*0x1005c947e*/
        if ( !v33 ) /*0x1005c9486*/
          goto LABEL_70; /*0x1005c9486*/
        v34 = v33; /*0x1005c948c*/
        memcpy(v33, &unk_1012CBA5A, 0x6Fu); /*0x1005c949e*/
        v11 = v65; /*0x1005c94a3*/
        *((_QWORD *)v65 + 1) = 9; /*0x1005c94a7*/
        v11[2] = 111; /*0x1005c94b0*/
        v11[3] = v34; /*0x1005c94b9*/
        v11[4] = 111; /*0x1005c94be*/
LABEL_51:
        *v11 = 0x8000000000000000LL; /*0x1005c96ec*/
        goto LABEL_52; /*0x1005c96ef*/
      }
      LODWORD(v63) = 0; /*0x1005c9525*/
    }
    v37 = a2[1]; /*0x1005c952c*/
    v38 = *(_QWORD *)(v37 + 16); /*0x1005c9534*/
    if ( !v38 ) /*0x1005c953b*/
      v38 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v37 + 16); /*0x1005c9906*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c9541*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c955e*/
    {
      v40 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v38, v18, v39, a7, a8) ^ 1; /*0x1005c9913*/
      if ( !*(_BYTE *)(v37 + 24) ) /*0x1005c991c*/
      {
LABEL_40:
        *(_BYTE *)(v37 + 373) = v64; /*0x1005c9573*/
        if ( !v40 /*0x1005c9957*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v38, v18, v39, a7, a8) )
        {
          *(_BYTE *)(v37 + 24) = 1; /*0x1005c9964*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v37 + 16), v18, v39, a7, a8); /*0x1005c959b*/
        codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3( /*0x1005c95aa*/
          (__int64)v48,
          (__int64)a2,
          a7,
          a8);
        codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v52, a2, v48, a7, a8); /*0x1005c95c0*/
        if ( LODWORD(v52[0]) != 10 ) /*0x1005c95cc*/
        {
          codexmate_lib::core::relay::manager::RelayManager::rollback_no_account_mode_change::h34954cee4f0bb57e(a2, v67); /*0x1005c96c9*/
          qmemcpy(v11 + 1, v52, 0x60u); /*0x1005c96df*/
          goto LABEL_51; /*0x1005c96df*/
        }
        v41 = ++v68; /*0x1005c95d7*/
        v42 = v57; /*0x1005c95de*/
        if ( v57 ) /*0x1005c95e5*/
        {
          v64 = v58; /*0x1005c95ef*/
          v43 = v66; /*0x1005c95f3*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52); /*0x1005c95f8*/
          v12 = 14; /*0x1005c95fd*/
          v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c960c*/
          if ( !v44 ) /*0x1005c9614*/
            goto LABEL_70; /*0x1005c9614*/
          qmemcpy(v44, "writing_config", 14); /*0x1005c9632*/
          __dsta[0] = 14; /*0x1005c9635*/
          __dsta[1] = (__int64)v44; /*0x1005c9640*/
          __dsta[2] = 14; /*0x1005c9647*/
          LOBYTE(__dsta[3]) = v41; /*0x1005c9652*/
          BYTE1(__dsta[3]) = v43; /*0x1005c9659*/
          a7 = (*(double (__fastcall **)(__int64, __int64 *))(v64 + 40))(v42, __dsta); /*0x1005c966e*/
        }
        codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005c967b*/
          &v53,
          a2,
          a7,
          a8);
        v11 = v65; /*0x1005c9680*/
        if ( v53 == 10 ) /*0x1005c968b*/
        {
          if ( v54 ) /*0x1005c9698*/
          {
            if ( (_BYTE)v62 ) /*0x1005c96a2*/
            {
              codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h503b57a0c105b514(v56); /*0x1005c96af*/
              codexmate_lib::core::relay::manager::launch_codex_app_warning::h1ea13dd506032be3(&v59); /*0x1005c96b8*/
            }
            else
            {
              v59 = 0x8000000000000000LL; /*0x1005c97b6*/
            }
            codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hf65da0a57567b4ce(__src, a2); /*0x1005c97c4*/
            __dsta[45] = v61; /*0x1005c97cd*/
            __dsta[44] = v60; /*0x1005c97dc*/
            __dsta[43] = v59; /*0x1005c97e3*/
            memcpy(__dsta, __src, 0x158u); /*0x1005c9800*/
            memcpy(v11, __dsta, 0x170u); /*0x1005c9810*/
            *((_BYTE *)v11 + 368) = v63; /*0x1005c9818*/
            goto LABEL_52; /*0x1005c9820*/
          }
          codexmate_lib::core::relay::manager::RelayManager::rollback_no_account_mode_change::h34954cee4f0bb57e(a2, v67); /*0x1005c9742*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2); /*0x1005c9747*/
          v12 = 126; /*0x1005c974c*/
          v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(126, 1); /*0x1005c975b*/
          if ( v46 ) /*0x1005c9763*/
          {
            v47 = v46; /*0x1005c9769*/
            memcpy(v46, &unk_1012CBAC9, 0x7Eu); /*0x1005c977b*/
            v11 = v65; /*0x1005c9780*/
            *((_QWORD *)v65 + 1) = 9; /*0x1005c9784*/
            v11[2] = 126; /*0x1005c978d*/
            v11[3] = v47; /*0x1005c9796*/
            v11[4] = 126; /*0x1005c979b*/
            goto LABEL_51; /*0x1005c97a4*/
          }
LABEL_70:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v12); /*0x1005c996e*/
        }
        codexmate_lib::core::relay::manager::RelayManager::rollback_no_account_mode_change::h34954cee4f0bb57e(a2, v67); /*0x1005c971b*/
        v26 = v11 + 1; /*0x1005c972a*/
        v27 = (__int64 *)&v53; /*0x1005c972f*/
        goto LABEL_21; /*0x1005c9736*/
      }
    }
    else
    {
      v40 = 0; /*0x1005c9564*/
      if ( !*(_BYTE *)(v37 + 24) ) /*0x1005c9566*/
        goto LABEL_40; /*0x1005c956d*/
    }
    __dsta[0] = v37 + 16; /*0x1005c9922*/
    LOBYTE(__dsta[1]) = v40; /*0x1005c9929*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c9950*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      __dsta,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534480);
  }
  v21 = a2[1]; /*0x1005c928f*/
  v22 = (__int64 *)(v21 + 16); /*0x1005c9293*/
  v23 = *(_QWORD *)(v21 + 16); /*0x1005c9297*/
  if ( !v23 ) /*0x1005c929e*/
    v23 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v21 + 16); /*0x1005c982d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c92a4*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005c92b3*/
  {
    v25 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v23, a2, v24, a7, a8) ^ 1; /*0x1005c983a*/
    if ( !*(_BYTE *)(v21 + 24) ) /*0x1005c9842*/
      goto LABEL_16; /*0x1005c9842*/
LABEL_59:
    __dsta[0] = v21 + 16; /*0x1005c9848*/
    LOBYTE(__dsta[1]) = v25; /*0x1005c984f*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c9876*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      __dsta,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534450);
  }
  v25 = 0; /*0x1005c92bf*/
  if ( *(_BYTE *)(v21 + 24) ) /*0x1005c92c1*/
    goto LABEL_59; /*0x1005c92c7*/
LABEL_16:
  *(_BYTE *)(v21 + 373) = v64; /*0x1005c92cd*/
  if ( !v25 /*0x1005c9880*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v23, a2, v24, a7, a8) )
  {
    *(_BYTE *)(v21 + 24) = 1; /*0x1005c988d*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v22, a2, v24, a7, a8); /*0x1005c92fa*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v49, (__int64)a2, a7, a8); /*0x1005c9309*/
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(__src, a2, v49, a7, a8); /*0x1005c931f*/
  if ( LODWORD(__src[0]) == 10 ) /*0x1005c932b*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)__dsta, (__int64)a2, a7, a8); /*0x1005c9337*/
    codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)__src, (__int64)__dsta); /*0x1005c934a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__dsta); /*0x1005c9356*/
    memcpy(v11, __src, 0x158u); /*0x1005c936a*/
    v11[43] = 0x8000000000000000LL; /*0x1005c9372*/
    *((_BYTE *)v11 + 368) = 0; /*0x1005c937a*/
    goto LABEL_52; /*0x1005c9383*/
  }
  qmemcpy(__dsta, __src, 0x60u); /*0x1005c93b4*/
  v28 = *v22; /*0x1005c93b7*/
  if ( !*v22 ) /*0x1005c93b7*/
    v28 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v21 + 16); /*0x1005c989e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c93c3*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005c93d5*/
  {
    v30 = 0; /*0x1005c93db*/
    if ( !*(_BYTE *)(v21 + 24) ) /*0x1005c93dd*/
      goto LABEL_26; /*0x1005c93e3*/
LABEL_63:
    v59 = v21 + 16; /*0x1005c98b9*/
    LOBYTE(v60) = v30; /*0x1005c98bd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c98de*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      &v59,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534468);
  }
  v30 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v28, &__src[12], v29, a7, a8) ^ 1; /*0x1005c98ab*/
  if ( *(_BYTE *)(v21 + 24) ) /*0x1005c98ad*/
    goto LABEL_63; /*0x1005c98b3*/
LABEL_26:
  *(_BYTE *)(v21 + 373) = v67; /*0x1005c93e9*/
  qmemcpy(v11 + 1, __dsta, 0x60u); /*0x1005c9404*/
  *v11 = 0x8000000000000000LL; /*0x1005c940b*/
  if ( !v30 /*0x1005c98e8*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v11 + 13,
                           &__dsta[12],
                           v29,
                           a7,
                           a8) )
  {
    *(_BYTE *)(v21 + 24) = 1; /*0x1005c98f5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v22, &__dsta[12], v29, a7, a8); /*0x1005c9429*/
LABEL_52:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v50); /*0x1005c96f3*/
  return v11; /*0x1005c9702*/
}
---REFS---
0x1005cdf60 __ZN13codexmate_lib4core5relay7manager12RelayManager8snapshot17h0d4cb54a50479cd3E
0x100001470 __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
0x100001430 __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc
0x1001c0ce0 __ZN13codexmate_lib8platform7process24stop_codex_for_file_edit17h58b70230213b1120E
0x10068eeb0 __ZN13codexmate_lib4core5relay18router_unlock_auth27install_virtual_unlock_auth17h2f0328bac8ed85a3E
0x101130a02 _memcpy
0x10068fab0 __ZN13codexmate_lib4core5relay18router_unlock_auth7cleanup17h242b88d72bef9392E
0x1012cba5a unk_1012CBA5A
0x100689b50 __ZN13codexmate_lib4core5relay18router_unlock_auth13marker_exists17hea0986d78849e3cbE
0x1010fb380 __ZN3std3sys4sync8once_box16OnceBox$LT$T$GT$10initialize17hf1a0da68c4a8085fE
0x1010a4220 __ZN3std3sys3pal4unix4sync5mutex5Mutex4lock17h6b8bb4259dcc18d0E
0x10112adb0 __ZN3std9panicking11panic_count17is_zero_slow_path17h509d4bac4686b0cdE
0x1015b9b78 __ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h0191519d82e04aa6E
0x1010a4240 __ZN3std3sys3pal4unix4sync5mutex5Mutex6unlock17hb9acd26a137dd78dE
0x1005cccf0 __ZN13codexmate_lib4core5relay7manager12RelayManager7persist17he97af7bc6e4923b9E
0x1005c8b30 __ZN13codexmate_lib4core5relay7manager12RelayManager31rollback_no_account_mode_change17h34954cee4f0bb57eE
0x1005c8130 __ZN13codexmate_lib4core5relay7manager12RelayManager30sync_codex_config_with_outcome17h7744b56677bf50f9E
0x1005c9a60 __ZN13codexmate_lib4core5relay7manager12RelayManager32set_codex_router_no_account_mode28_$u7b$$u7b$closure$u7d$$u7d$17h503b57a0c105b514E
0x1005cf290 __ZN13codexmate_lib4core5relay7manager24launch_codex_app_warning17h1ea13dd506032be3E
0x1005c1310 __ZN13codexmate_lib4core5relay7manager12RelayManager18snapshot_sanitized17hf65da0a57567b4ceE
0x1012cbac9 unk_1012CBAC9
0x10112fd51 __ZN5alloc7raw_vec12handle_error17h81a7e8c5d8a11b4fE
0x101130130 __ZN4core6result13unwrap_failed17h855bccc0ecc45c4fE
0x1012cb463 _anon.1f22c03b288e649fafb3d21192ed4cff.595
0x101534850 _anon.1f22c03b288e649fafb3d21192ed4cff.853
0x101534480 off_101534480
0x101534450 off_101534450
0x1004b14b0 __ZN13codexmate_lib4core5relay7storage19sanitize_for_export17heb20e442c9650b92E
0x1005f0940 __ZN4core3ptr67drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$17ha31523a10c4e8151E_5
0x101534468 off_101534468
