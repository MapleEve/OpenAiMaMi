// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4963c4eae674b00c; addr: 0x1006f6c80; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4963c4eae674b00c(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  _BYTE v17[360]; // [rsp+18h] [rbp-CF8h] BYREF
  _BYTE v18[360]; // [rsp+180h] [rbp-B90h] BYREF
  _BYTE v19[360]; // [rsp+2E8h] [rbp-A28h] BYREF
  _QWORD __dst[65]; // [rsp+450h] [rbp-8C0h] BYREF
  _QWORD v21[50]; // [rsp+658h] [rbp-6B8h] BYREF
  _QWORD v22[45]; // [rsp+7E8h] [rbp-528h] BYREF
  __int64 v23; // [rsp+950h] [rbp-3C0h] BYREF
  __int128 v24; // [rsp+958h] [rbp-3B8h]
  size_t __n; // [rsp+968h] [rbp-3A8h]
  __int64 v26; // [rsp+970h] [rbp-3A0h]
  _BYTE v27[72]; // [rsp+978h] [rbp-398h] BYREF
  __int64 v28; // [rsp+9C0h] [rbp-350h] BYREF
  __int128 v29; // [rsp+9C8h] [rbp-348h]
  size_t v30; // [rsp+9D8h] [rbp-338h]
  __int64 v31; // [rsp+9E0h] [rbp-330h]
  _BYTE v32[72]; // [rsp+9E8h] [rbp-328h] BYREF
  _OWORD v33[25]; // [rsp+A30h] [rbp-2E0h] BYREF
  _QWORD v34[3]; // [rsp+BC0h] [rbp-150h] BYREF
  _QWORD v35[3]; // [rsp+BD8h] [rbp-138h] BYREF
  _BYTE v36[31]; // [rsp+BF1h] [rbp-11Fh]
  __int64 v37; // [rsp+C10h] [rbp-100h] BYREF
  __m256i v38; // [rsp+C18h] [rbp-F8h]
  __int64 v39; // [rsp+C38h] [rbp-D8h]
  __int64 v40; // [rsp+C40h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+C48h] [rbp-C8h]
  __int64 v42; // [rsp+C50h] [rbp-C0h]
  __int64 v43; // [rsp+C58h] [rbp-B8h] BYREF
  __m256i v44; // [rsp+C60h] [rbp-B0h]
  __int64 v45; // [rsp+C80h] [rbp-90h]
  __int64 v46; // [rsp+C88h] [rbp-88h]
  __int64 v47; // [rsp+C90h] [rbp-80h] BYREF
  __m256i v48; // [rsp+C98h] [rbp-78h]
  __int64 v49; // [rsp+CB8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+CC0h] [rbp-50h]
  __int64 v51; // [rsp+CC8h] [rbp-48h]
  void *__srca; // [rsp+CD0h] [rbp-40h]
  char v53; // [rsp+CDFh] [rbp-31h] BYREF
  int v54; // [rsp+CE0h] [rbp-30h]
  unsigned __int8 v55; // [rsp+CE7h] [rbp-29h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f6ca9*/
  __srca = __src + 520; /*0x1006f6cc1*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1006f6cc5*/
  v51 = *((_QWORD *)__src + 117); /*0x1006f6cd1*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f6cd5*/
  v50 = *((_QWORD *)__src + 116); /*0x1006f6ce3*/
  v49 = v2; /*0x1006f6ce7*/
  *(_QWORD *)&v33[3] = 0; /*0x1006f6ceb*/
  *(_QWORD *)&v33[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usa" /*0x1006f6cfd*/
                       "ge_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_onceres"
                       "tart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_"
                       "auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_"
                       "restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_"
                       "if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_syst"
                       "em_infodefault_debug_bundle_file_name";
  *((_QWORD *)&v33[0] + 1) = 20; /*0x1006f6d04*/
  v3 = &unk_1016E98EC; /*0x1006f6d0f*/
  *(_QWORD *)&v33[1] = &unk_1016E98EC; /*0x1006f6d16*/
  *((_QWORD *)&v33[1] + 1) = 4; /*0x1006f6d1d*/
  *(_QWORD *)&v33[2] = __dst; /*0x1006f6d28*/
  *((_QWORD *)&v33[2] + 1) = &v49; /*0x1006f6d33*/
  LOBYTE(v3) = 1; /*0x1006f6d45*/
  v54 = (int)v3; /*0x1006f6d47*/
  v4 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x1006f6d4a*/
  v5 = v4; /*0x1006f6d4f*/
  if ( v4 ) /*0x1006f6d55*/
  {
    v44.i64[0] = v4; /*0x1006f6d57*/
    LOBYTE(v43) = 6; /*0x1006f6d5e*/
  }
  else
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f6d7c*/
      &v43,
      v33,
      &v33[1]);
    if ( (_BYTE)v43 != 6 ) /*0x1006f6d88*/
    {
      *(_QWORD *)&v33[2] = v44.i64[2]; /*0x1006f703f*/
      v33[1] = v44.i128[0]; /*0x1006f7062*/
      *((_QWORD *)&v33[0] + 1) = v43; /*0x1006f7069*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1006f7083*/
      *(_QWORD *)&v33[0] = 1; /*0x1006f70a4*/
      v54 = 0; /*0x1006f70af*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f70c3*/
        v19,
        v21[48],
        v33,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_14; /*0x1006f70c3*/
    }
    v5 = v44.i64[0]; /*0x1006f6d8e*/
  }
  *(_QWORD *)&v33[3] = 0; /*0x1006f6d95*/
  *(_QWORD *)&v33[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usa" /*0x1006f6da0*/
                       "ge_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_onceres"
                       "tart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pending_"
                       "auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_switch_and_"
                       "restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_"
                       "if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_syst"
                       "em_infodefault_debug_bundle_file_name";
  *((_QWORD *)&v33[0] + 1) = 20; /*0x1006f6da7*/
  *(_QWORD *)&v33[1] = &unk_1016E98F4; /*0x1006f6db9*/
  *((_QWORD *)&v33[1] + 1) = 4; /*0x1006f6dc0*/
  *(_QWORD *)&v33[2] = __dst; /*0x1006f6dcb*/
  *((_QWORD *)&v33[2] + 1) = &v49; /*0x1006f6dd2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h1d4e6584816adb74(&v28, v33); /*0x1006f6de7*/
  if ( (_BYTE)v28 == 6 ) /*0x1006f6df3*/
  {
    v55 = BYTE1(v28); /*0x1006f6e00*/
    *(_QWORD *)&v33[3] = 0; /*0x1006f6e03*/
    *(_QWORD *)&v33[0] = "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_u" /*0x1006f6e0e*/
                         "sage_refresh_intervalget_usage_refresh_all_accountsset_usage_refresh_all_accountsrun_daemon_onc"
                         "erestart_codexgraceful_restart_for_updatecheck_update_installabilityload_bootstrap_stateload_pe"
                         "nding_auto_switchdismiss_pending_auto_switchconfirm_pending_auto_switchconfirm_pending_auto_swi"
                         "tch_and_restart_codexopen_pathget_device_idget_or_create_remote_device_secretimport_remote_devi"
                         "ce_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_s"
                         "tateget_system_infodefault_debug_bundle_file_name";
    *((_QWORD *)&v33[0] + 1) = 20; /*0x1006f6e15*/
    *(_QWORD *)&v33[1] = &unk_1017832FC; /*0x1006f6e27*/
    *((_QWORD *)&v33[1] + 1) = 3; /*0x1006f6e2e*/
    *(_QWORD *)&v33[2] = __dst; /*0x1006f6e39*/
    *((_QWORD *)&v33[2] + 1) = &v49; /*0x1006f6e40*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h6a455551ed41f2f8(v22, v33); /*0x1006f6e55*/
    if ( LOBYTE(v22[0]) == 6 ) /*0x1006f6e61*/
    {
      v35[2] = v22[3]; /*0x1006f6e6e*/
      v35[1] = v22[2]; /*0x1006f6e83*/
      v35[0] = v22[1]; /*0x1006f6e8a*/
      codexmate_lib::commands::system::set_api_proxy_config::h234ff0d685fdf055(&v23, v5, v55, v35); /*0x1006f6ea6*/
      memcpy(v33, __srca, sizeof(v33)); /*0x1006f6ebe*/
      if ( v23 == 0x8000000000000000LL ) /*0x1006f6ed7*/
      {
        v7 = v24; /*0x1006f6ee4*/
        v8 = __n; /*0x1006f6eeb*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f6ef5*/
        {
          v9 = 0; /*0x1006f6efb*/
          goto LABEL_10; /*0x1006f6efb*/
        }
        if ( __n ) /*0x1006f7334*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, __srca, v6); /*0x1006f7336*/
          v9 = 1; /*0x1006f733b*/
          v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006f7349*/
          if ( !v15 ) /*0x1006f7351*/
LABEL_10:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1006f6efe*/
          v16 = v15; /*0x1006f7357*/
        }
        else
        {
          v16 = 1; /*0x1006f7366*/
        }
        memcpy((void *)v16, *((const void **)&v7 + 1), v8); /*0x1006f7375*/
        if ( (_QWORD)v7 ) /*0x1006f737d*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v7 + 1), v7, 1); /*0x1006f738a*/
        memcpy(v22, __srca, sizeof(v22)); /*0x1006f739f*/
        v13 = *(_QWORD *)&v33[24]; /*0x1006f73a4*/
        v46 = *(_QWORD *)&v33[24]; /*0x1006f73ab*/
        v48.i8[0] = 3; /*0x1006f73b2*/
        v48.i64[1] = v8; /*0x1006f73b6*/
        v48.i64[2] = v16; /*0x1006f73ba*/
        v48.i64[3] = v8; /*0x1006f73be*/
        v47 = 1; /*0x1006f73c2*/
      }
      else
      {
        qmemcpy(v32, v27, sizeof(v32)); /*0x1006f715e*/
        memcpy(v22, __srca, sizeof(v22)); /*0x1006f7170*/
        v13 = *(_QWORD *)&v33[24]; /*0x1006f7175*/
        v46 = *(_QWORD *)&v33[24]; /*0x1006f717c*/
        v28 = v23; /*0x1006f7183*/
        v29 = v24; /*0x1006f7191*/
        v30 = __n; /*0x1006f71a3*/
        v31 = v26; /*0x1006f71ae*/
        _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hee5a5335e0346369(&v37, &v28); /*0x1006f71c3*/
        if ( v37 == 0x8000000000000025LL ) /*0x1006f71d4*/
        {
          v48 = v38; /*0x1006f71e8*/
          v14 = 0; /*0x1006f7202*/
        }
        else
        {
          v45 = v39; /*0x1006f7210*/
          v44 = v38; /*0x1006f722c*/
          v43 = v37; /*0x1006f7256*/
          v40 = 0; /*0x1006f725d*/
          v41 = 1; /*0x1006f7268*/
          v42 = 0; /*0x1006f7273*/
          v34[2] = 1610612768; /*0x1006f727e*/
          v34[0] = &v40; /*0x1006f7290*/
          v34[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f729e*/
          if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f72b3*/
                                  &v43,
                                  v34) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f7415*/
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
              55,
              &v53,
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
              &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
          *(_QWORD *)&v36[7] = v40; /*0x1006f72d5*/
          *(_QWORD *)&v36[15] = v41; /*0x1006f72dc*/
          *(_QWORD *)&v36[23] = v42; /*0x1006f72e3*/
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v43); /*0x1006f72f1*/
          v48.i8[0] = 3; /*0x1006f72f6*/
          *(__int128 *)((char *)v48.i128 + 1) = *(_OWORD *)v36; /*0x1006f7308*/
          *(__int64 *)((char *)&v48.i64[2] + 1) = *(_QWORD *)&v36[16]; /*0x1006f7317*/
          v48.i64[3] = *(_QWORD *)&v36[23]; /*0x1006f7322*/
          v14 = 1; /*0x1006f7326*/
        }
        v47 = v14; /*0x1006f732b*/
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f73ed*/
        v22,
        v13,
        &v47,
        (char *)&v33[22] + 8,
        DWORD2(v33[24]),
        HIDWORD(v33[24]));
    }
    else
    {
      *(_QWORD *)&v33[2] = v22[3]; /*0x1006f6faa*/
      v33[1] = *(_OWORD *)&v22[1]; /*0x1006f6fcd*/
      *((_QWORD *)&v33[0] + 1) = v22[0]; /*0x1006f6fd4*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1006f6fee*/
      *(_QWORD *)&v33[0] = 1; /*0x1006f700f*/
      v54 = 0; /*0x1006f701a*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f702e*/
        v17,
        v21[48],
        v33,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
    }
  }
  else
  {
    *(_QWORD *)&v33[2] = v30; /*0x1006f6f15*/
    v33[1] = v29; /*0x1006f6f38*/
    *((_QWORD *)&v33[0] + 1) = v28; /*0x1006f6f3f*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1006f6f59*/
    *(_QWORD *)&v33[0] = 1; /*0x1006f6f7a*/
    v54 = 0; /*0x1006f6f85*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f6f99*/
      v18,
      v21[48],
      v33,
      __src + 880,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_14:
  if ( v49 != 0x8000000000000000LL ) /*0x1006f70d6*/
  {
    v10 = v50; /*0x1006f70d8*/
    for ( i = v51 + 1; i != 1; --i ) /*0x1006f70e0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f70fd*/
      v10 += 96; /*0x1006f7102*/
    }
    if ( v49 ) /*0x1006f710e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 96 * v49, 8); /*0x1006f7121*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f7132*/
}