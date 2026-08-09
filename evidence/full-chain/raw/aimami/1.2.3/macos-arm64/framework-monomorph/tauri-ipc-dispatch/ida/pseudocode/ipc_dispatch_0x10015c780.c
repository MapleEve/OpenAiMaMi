/* addr=0x10015c780 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=641 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h508c0bbdcd9091b7(
        char *__src,
        __int64 a2)
{
  __int64 v2; // r12
  char *v4; // r13
  _QWORD *v5; // r14
  unsigned __int64 v6; // r13
  signed __int64 v7; // r12
  __int64 v8; // r15
  _DWORD *v9; // r14
  char *v10; // r15
  char *v11; // r14
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rax
  const void *v16; // r14
  __int64 v17; // r15
  volatile signed __int64 **v18; // rcx
  volatile signed __int64 *v19; // rax
  volatile signed __int64 *v20; // rdx
  volatile signed __int64 *v21; // rsi
  volatile signed __int64 *v22; // rdi
  volatile signed __int64 *v23; // r8
  volatile signed __int64 *v24; // r9
  volatile signed __int64 *v25; // r10
  volatile signed __int64 *v26; // rcx
  char v27; // of
  volatile signed __int64 *v28; // r15
  __int64 v29; // rt0
  volatile signed __int64 *v30; // r12
  __int64 v31; // rt0
  __int64 *v32; // r13
  __int64 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 i; // r12
  __int64 v39; // rax
  bool v40; // zf
  char *v41; // rdi
  char v42; // cl
  char result; // al
  __int64 v44; // rdi
  _BYTE *v45; // rdi
  __int64 v46; // rsi
  _BYTE *v47; // r14
  __int64 v48; // r15
  _QWORD *v49; // r12
  void *v50; // rax
  __int64 v51; // r9
  _DWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // r12d
  unsigned int v56; // r15d
  __int64 v57; // r13
  char *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63[39]; // [rsp+8h] [rbp-628h] BYREF
  _BYTE __srca[352]; // [rsp+140h] [rbp-4F0h] BYREF
  _QWORD v65[39]; // [rsp+2A0h] [rbp-390h] BYREF
  _BYTE __dst[360]; // [rsp+3D8h] [rbp-258h] BYREF
  __int64 v67; // [rsp+540h] [rbp-F0h] BYREF
  char v68; // [rsp+548h] [rbp-E8h]
  int v69; // [rsp+549h] [rbp-E7h]
  __int16 v70; // [rsp+54Dh] [rbp-E3h]
  char v71; // [rsp+54Fh] [rbp-E1h]
  __int64 v72; // [rsp+550h] [rbp-E0h]
  _DWORD *v73; // [rsp+558h] [rbp-D8h]
  signed __int64 v74; // [rsp+560h] [rbp-D0h]
  volatile signed __int64 *v75; // [rsp+568h] [rbp-C8h]
  volatile signed __int64 *v76; // [rsp+570h] [rbp-C0h]
  volatile signed __int64 *v77; // [rsp+578h] [rbp-B8h]
  volatile signed __int64 *v78; // [rsp+580h] [rbp-B0h]
  volatile signed __int64 *v79; // [rsp+588h] [rbp-A8h]
  volatile signed __int64 *v80; // [rsp+590h] [rbp-A0h]
  volatile signed __int64 *v81; // [rsp+598h] [rbp-98h]
  volatile signed __int64 *v82; // [rsp+5A0h] [rbp-90h]
  _BYTE *v83; // [rsp+5A8h] [rbp-88h] BYREF
  __int64 v84; // [rsp+5B0h] [rbp-80h]
  signed __int64 v85; // [rsp+5B8h] [rbp-78h]
  __int128 v86; // [rsp+5C0h] [rbp-70h]
  char v87; // [rsp+5DFh] [rbp-51h] BYREF
  char *v88; // [rsp+5E0h] [rbp-50h]
  char *v89; // [rsp+5E8h] [rbp-48h]
  __int64 v90; // [rsp+5F0h] [rbp-40h]
  char *v91; // [rsp+5F8h] [rbp-38h]
  char *v92; // [rsp+600h] [rbp-30h]

  v2 = a2;
  switch ( __src[3536] )
  {
    case 0:
      *(_WORD *)(__src + 3537) = 257;
      __src[3539] = 1;
      v4 = __src + 1960;
      memcpy(__src + 1960, __src + 392, 0x620u);
      switch ( __src[3520] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_89;
        case 2:
          goto LABEL_88;
        case 3:
          goto LABEL_8;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v4 = __src + 1960;
      switch ( __src[3520] )
      {
        case 0:
LABEL_4:
          *(_QWORD *)&v86 = a2;
          v5 = __src + 2480;
          v65[6] = 0;
          v65[0] = "quit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v65[1] = 25;
          v65[2] = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v65[3] = 3;
          v91 = v4;
          v65[4] = v4;
          v65[5] = __src + 2480;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__dst);
          v6 = ((unsigned __int64)((__dst[15] << 16) | (unsigned int)*(unsigned __int16 *)&__dst[13]) << 32)
             | *(unsigned int *)&__dst[9];
          v7 = *(_QWORD *)&__dst[32];
          if ( *(_QWORD *)__dst == 3 )
          {
            *(_QWORD *)&v86 = *(_QWORD *)&__dst[16];
            v89 = (char *)__dst[8];
            v90 = *(_QWORD *)&__dst[24];
LABEL_6:
            core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v91);
            v8 = 1;
            if ( __OFSUB__(0, *v5) )
            {
              v9 = (_DWORD *)v90;
LABEL_83:
              __src[3520] = 1;
              core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h350e50978f05fdd6((__int64)v91);
              v69 = v6;
              v71 = BYTE6(v6);
              v70 = WORD2(v6);
              v73 = v9;
              v74 = v7;
              v68 = (char)v89;
              v72 = v86;
              v67 = v8;
              __src[3539] = 0;
              memcpy(__dst, __src, sizeof(__dst));
              __src[3538] = 0;
              v61 = *((_QWORD *)__src + 48);
              __src[3537] = 0;
              *(_QWORD *)&__srca[16] = *((_QWORD *)__src + 47);
              v62 = *((_QWORD *)__src + 45);
              *(_QWORD *)&__srca[8] = *((_QWORD *)__src + 46);
              *(_QWORD *)__srca = v62;
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                __dst,
                v61,
                &v67,
                __srca,
                *((unsigned int *)__src + 882),
                *((unsigned int *)__src + 883));
              v42 = 1;
              result = 0;
              goto LABEL_84;
            }
            v92 = (char *)v7;
            v88 = __src + 2488;
            v37 = *((_QWORD *)__src + 311);
            for ( i = *((_QWORD *)__src + 312) + 1LL; i != 1; --i )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v37);
              v37 += 96;
            }
            v39 = *v5;
            v8 = 1;
            v40 = *v5 == 0;
            v7 = (signed __int64)v92;
            v9 = (_DWORD *)v90;
            if ( v40 )
              goto LABEL_83;
LABEL_82:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v88, 96 * v39, 8);
            goto LABEL_83;
          }
          qmemcpy(&__srca[40], &__dst[40], 0x70u);
          *(_DWORD *)&__srca[9] = *(_DWORD *)&__dst[9];
          __srca[15] = (((unsigned __int64)((__dst[15] << 16) | (unsigned int)*(unsigned __int16 *)&__dst[13]) << 32)
                      | *(unsigned int *)&__dst[9]) >> 48;
          *(_WORD *)&__srca[13] = *(_WORD *)&__dst[13];
          *(_QWORD *)&__srca[32] = *(_QWORD *)&__dst[32];
          *(_QWORD *)__srca = *(_QWORD *)__dst;
          __srca[8] = __dst[8];
          *(_OWORD *)&__srca[16] = *(_OWORD *)&__dst[16];
          *(_QWORD *)&__dst[48] = 0;
          *(_QWORD *)__dst = "quit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[8] = 25;
          *(_QWORD *)&__dst[16] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[24] = 7;
          v4 = v91;
          *(_QWORD *)&__dst[32] = v91;
          *(_QWORD *)&__dst[40] = __src + 2480;
          v12 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 309) + 16LL);
          if ( !v12 )
          {
            _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
              v65,
              __dst,
              &__dst[16]);
            if ( LOBYTE(v65[0]) != 6 )
            {
              v89 = (char *)LOBYTE(v65[0]);
              v55 = HIBYTE(v65[0]);
              v56 = *(unsigned __int16 *)((char *)v65 + 5);
              v57 = *(unsigned int *)((char *)v65 + 1);
              *(_QWORD *)&v86 = v65[1];
              v90 = v65[2];
              v92 = (char *)v65[3];
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)__srca);
              v6 = ((unsigned __int64)((v55 << 16) | v56) << 32) | v57;
              v7 = (signed __int64)v92;
              goto LABEL_6;
            }
            v12 = v65[1];
          }
          memcpy(__src + 2504, __srca, 0x98u);
          *((_QWORD *)__src + 332) = v12;
          __src[2832] = 0;
          v10 = __src + 2840;
          memcpy(__src + 2840, __src + 2504, 0x150u);
          v88 = __src + 3512;
          __src[3512] = 0;
          v2 = v86;
LABEL_14:
          v11 = __src + 3176;
          memcpy(__src + 3176, v10, 0x150u);
          switch ( __src[3504] )
          {
            case 0:
              goto LABEL_15;
            case 1:
              goto LABEL_91;
            case 2:
              goto LABEL_90;
            case 3:
              goto LABEL_18;
            case 4:
              goto LABEL_98;
            case 5:
              goto jpt_10015C93D;
          }
        case 1:
LABEL_89:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_88:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v88 = __src + 3512;
  v10 = __src + 2840;
  switch ( __src[3512] )
  {
    case 0:
      goto LABEL_14;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3:
      v11 = __src + 3176;
      switch ( __src[3504] )
      {
        case 0:
LABEL_15:
          __src[3505] = 0;
          v89 = v11;
          memcpy(__src + 3336, v11, 0x98u);
          v13 = *((_QWORD *)__src + 416);
          *((_QWORD *)__src + 436) = v13;
          v92 = v10;
          if ( codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103(
                 v13,
                 (__int64)v11) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v11);
            v7 = 54;
            v14 = 1;
            v15 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1);
            if ( !v15 )
            {
              v91 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54);
            }
            v16 = v15;
            *(_QWORD *)((char *)v15 + 46) = 0xBA87E58080E98D86LL;
            v15[5] = 0x8D86E58E90E59088LL;
            v15[4] = 0xE68CAEE585BEE589LL;
            v15[3] = 0xADE7B7AFE88CBCEFLL;
            v15[2] = 0xA28DE68788E5A89CLL;
            v15[1] = 0xE5A3ADE6B194E7AFLL;
            *v15 = 0xB7E8BD83E8BA99E6LL;
            v17 = 54;
            goto LABEL_49;
          }
          v18 = *((volatile signed __int64 ***)__src + 436);
          v19 = *v18;
          if ( _InterlockedIncrement64(*v18) <= 0 )
            goto LABEL_96;
          v20 = v18[1];
          if ( _InterlockedIncrement64(v20) <= 0 )
            goto LABEL_96;
          v21 = v18[2];
          if ( _InterlockedIncrement64(v21) <= 0 )
            goto LABEL_96;
          v22 = v18[3];
          if ( _InterlockedIncrement64(v22) <= 0 )
            goto LABEL_96;
          v23 = v18[4];
          if ( _InterlockedIncrement64(v23) <= 0 )
            goto LABEL_96;
          v24 = v18[5];
          if ( _InterlockedIncrement64(v24) <= 0 )
            goto LABEL_96;
          v25 = v18[7];
          if ( v25 )
          {
            if ( _InterlockedIncrement64(v25) <= 0 )
              goto LABEL_96;
          }
          v26 = v18[6];
          if ( _InterlockedIncrement64(v26) <= 0 )
            goto LABEL_96;
          v75 = v19;
          v76 = v20;
          v77 = v21;
          v78 = v22;
          v79 = v23;
          v80 = v24;
          v82 = v25;
          v81 = v26;
          __src[3505] = 1;
          v91 = v4;
          _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
            __srca,
            __src + 3336);
          *(_QWORD *)&v86 = v2;
          v28 = *((volatile signed __int64 **)__src + 434);
          v29 = _InterlockedIncrement64(v28);
          if ( (v29 < 0) ^ v27 | (v29 == 0)
            || (v30 = *((volatile signed __int64 **)__src + 435),
                v31 = _InterlockedIncrement64(v30),
                (v31 < 0) ^ v27 | (v31 == 0)) )
          {
LABEL_96:
            BUG();
          }
          memcpy(__dst, __srca, 0x88u);
          __src[3505] = 0;
          *(_QWORD *)&__dst[136] = v28;
          *(_QWORD *)&__dst[144] = v30;
          *(_QWORD *)&__dst[152] = v75;
          *(_QWORD *)&__dst[160] = v76;
          *(_QWORD *)&__dst[168] = v77;
          *(_QWORD *)&__dst[176] = v78;
          *(_QWORD *)&__dst[184] = v79;
          *(_QWORD *)&__dst[192] = v80;
          *(_QWORD *)&__dst[200] = v81;
          *(_QWORD *)&__dst[208] = v82;
          *((_QWORD *)__src + 437) = tauri::async_runtime::spawn_blocking::h99d6e6f45793c8c8(__dst);
          v10 = v92;
          v11 = v89;
LABEL_31:
          v32 = (__int64 *)(__src + 3496);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h5faf69203ff9adcc(__dst);
          v33 = *(_QWORD *)__dst;
          if ( *(_QWORD *)__dst != 0x8000000000000002LL )
          {
            v89 = v11;
            v92 = v10;
            if ( *(_QWORD *)__dst == 0x8000000000000001LL )
            {
              v90 = *(_QWORD *)&__dst[8];
              v86 = *(_OWORD *)&__dst[16];
              v34 = 0x800000000000000CLL;
            }
            else
            {
              v34 = *(_QWORD *)&__dst[8];
              v90 = *(_QWORD *)&__dst[16];
              v86 = *(_OWORD *)&__dst[24];
              memcpy(v63, &__dst[40], sizeof(v63));
            }
            memcpy(v65, v63, sizeof(v65));
            v35 = *v32;
            v36 = *v32;
            v4 = v91;
            if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v36) )
              tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v35);
            if ( __OFSUB__(-v33, 1) )
            {
              *(_QWORD *)__dst = v34;
              *(_QWORD *)&__dst[8] = v90;
              *(_OWORD *)&__dst[16] = v86;
              *(_QWORD *)&__dst[32] = v65[0];
              *(_QWORD *)&__dst[40] = v65[1];
              *(_QWORD *)&__dst[48] = v65[2];
              *(_QWORD *)&__dst[56] = v65[3];
              *(_QWORD *)&__dst[64] = v65[4];
              *(_QWORD *)&__dst[72] = v65[5];
              *(_QWORD *)&__dst[80] = v65[6];
              *(_QWORD *)&__dst[88] = v65[7];
              v83 = nullptr;
              v84 = 1;
              v85 = 0;
              v63[2] = 1610612768;
              v63[0] = (__int64)&v83;
              v63[1] = (__int64)&off_101952F18;
              v14 = (__int64)v63;
              if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                      __dst,
                                      v63) )
                core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v87, &unk_101952FE0, &off_101952F48);
              v17 = (__int64)v83;
              v16 = (const void *)v84;
              v7 = v85;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
            }
            else
            {
              if ( v33 != 0x8000000000000001LL )
              {
                memcpy(&__srca[40], v65, 0x138u);
                *(_QWORD *)__srca = v33;
                *(_QWORD *)&__srca[8] = v34;
                *(_QWORD *)&__srca[16] = v90;
                *(_OWORD *)&__srca[24] = v86;
                v45 = __srca;
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__srca);
                v46 = *(_QWORD *)&__srca[320];
                if ( !__OFSUB__(-*(_QWORD *)&__srca[320], 1) && *(_QWORD *)&__srca[320] )
                {
                  v45 = *(_BYTE **)&__srca[328];
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__srca[328], *(_QWORD *)&__srca[320], 1);
                }
                v47 = *(_BYTE **)&__srca[304];
                v48 = *(_QWORD *)&__srca[312];
                if ( *(_QWORD *)&__srca[312] )
                {
                  v49 = (_QWORD *)(*(_QWORD *)&__srca[304] + 8LL);
                  do
                  {
                    v46 = *(v49 - 1);
                    if ( v46 )
                    {
                      v45 = (_BYTE *)*v49;
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v49, v46, 1);
                    }
                    v49 += 3;
                    --v48;
                  }
                  while ( v48 );
                }
                if ( *(_QWORD *)&__srca[296] )
                {
                  v46 = 24LL * *(_QWORD *)&__srca[296];
                  v45 = v47;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 24LL * *(_QWORD *)&__srca[296], 8);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v46);
                v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
                if ( !v50 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
                qmemcpy(v50, "router closed via exit dialog; quitting", 39);
                *(_QWORD *)__dst = 39;
                *(_QWORD *)&__dst[8] = v50;
                *(_QWORD *)&__dst[16] = 39;
                codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
                  (unsigned __int64)"exit_guardRUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATEAuto-switch configuration c"
                                    "ommittedRUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removedaccountRUNTIME_REFRE"
                                    "SH_FAILED_AFTER_LOGOUTshellexecutewindowprogramoptionscommandScopeglobalScope",
                  10,
                  (unsigned __int64)&unk_1015DA1A0,
                  16,
                  __dst,
                  v51);
                codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a = 1;
                v14 = 0;
                tauri::app::AppHandle$LT$R$GT$::exit::h3fe6fa98deeed9cb(__src + 3336, 0);
                __src[3505] = 0;
                v41 = __src + 3336;
                core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 3336));
                __src[3504] = 1;
                goto LABEL_67;
              }
              *(_QWORD *)__dst = v34;
              *(_QWORD *)&__dst[8] = v90;
              *(_OWORD *)&__dst[16] = v86;
              *(_QWORD *)&__dst[32] = v65[0];
              *(_QWORD *)&__dst[40] = v65[1];
              v83 = __dst;
              v84 = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
              v14 = (__int64)"\x1Eblocking command task failed: \xC0\"router diagnostics worker failed: \xC0src/commands/voice.rs";
              alloc::fmt::format::format_inner::h3c16c74008a310d4(
                v63,
                "\x1Eblocking command task failed: \xC0\"router diagnostics worker failed: \xC0src/commands/voice.rs",
                &v83);
              core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)__dst);
              v17 = v63[0];
              v16 = (const void *)v63[1];
              v7 = v63[2];
            }
            __src[3505] = 0;
LABEL_49:
            v41 = __src + 3336;
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 3336));
            __src[3504] = 1;
            if ( !__OFSUB__(-v17, 1) )
            {
              if ( v17 == 0x8000000000000001LL )
                goto LABEL_51;
              if ( v7 < 0 )
              {
                v44 = 0;
                goto LABEL_54;
              }
              if ( v7 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v14);
                v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1);
                v44 = 1;
                if ( !v53 )
LABEL_54:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v7);
                v54 = v53;
              }
              else
              {
                v54 = 1;
              }
              v90 = v54;
              v58 = (char *)memcpy((void *)v54, v16, v7);
              if ( v17 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v17, 1);
              v8 = 1;
              LOBYTE(v58) = 3;
              v89 = v58;
              *(_QWORD *)&v86 = v7;
              v9 = (_DWORD *)v90;
LABEL_77:
              *v88 = 1;
              core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$$LP$$RP$$C$alloc..string..String$C$codexmate_lib..commands..relay..quit_after_closing_router..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd4a27704d88ac107((__int64)v92);
              v91 = v4;
              core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v4);
              v6 = 0;
              if ( __OFSUB__(0, *((_QWORD *)__src + 310)) )
                goto LABEL_83;
              v90 = (__int64)v9;
              v92 = (char *)v7;
              v59 = *((_QWORD *)__src + 311);
              v60 = *((_QWORD *)__src + 312) + 1LL;
              v88 = __src + 2488;
              while ( v60 != 1 )
              {
                --v60;
                core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v59);
                v59 += 96;
              }
              v39 = *((_QWORD *)__src + 310);
              v6 = 0;
              v7 = (signed __int64)v92;
              v9 = (_DWORD *)v90;
              if ( !v39 )
                goto LABEL_83;
              goto LABEL_82;
            }
LABEL_67:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v14);
            *(_QWORD *)&v86 = 128;
            v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
            if ( !v52 )
              JUMPOUT(0x10015D564LL);
            v9 = v52;
            *v52 = 1819047278;
            v7 = 4;
            v89 = nullptr;
            v8 = 0;
            goto LABEL_77;
          }
          __src[3504] = 3;
LABEL_51:
          __src[3512] = 3;
          __src[3520] = 3;
          v42 = 3;
          result = 1;
LABEL_84:
          __src[3536] = v42;
          return result;
        case 1:
LABEL_91:
          v89 = v11;
          v92 = v10;
          v91 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952870);
        case 2:
LABEL_90:
          v89 = v11;
          v92 = v10;
          v91 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952870);
        case 3:
LABEL_18:
          v91 = v4;
          goto LABEL_31;
        case 4:
LABEL_98:
          JUMPOUT(0x10099F7A7LL);
        case 5:
jpt_10015C93D:
          JUMPOUT(0x10015D898LL);
      }
  }
}
