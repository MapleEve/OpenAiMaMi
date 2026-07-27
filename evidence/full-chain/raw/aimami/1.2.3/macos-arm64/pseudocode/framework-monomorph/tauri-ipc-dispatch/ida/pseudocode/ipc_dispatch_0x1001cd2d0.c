/* addr=0x1001cd2d0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * n_lines=405 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::hf1a72ec4a90d67ae(
        char *__src,
        char *a2)
{
  char *v2; // r15
  char *v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // r13
  char v7; // al
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  char v10; // r15
  void *v11; // rdi
  _BYTE *v12; // r14
  char *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 i; // r13
  __int64 v17; // rax
  int v18; // ecx
  size_t v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // r13
  __int64 v22; // r12
  signed __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r13
  void *v27; // r14
  char v28; // cl
  char result; // al
  __int64 v30; // rdi
  __int64 j; // r12
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  _BYTE v34[72]; // [rsp+0h] [rbp-390h] BYREF
  _QWORD __dst[45]; // [rsp+48h] [rbp-348h] BYREF
  __int128 v36; // [rsp+1B0h] [rbp-1E0h]
  _QWORD v37[6]; // [rsp+1C8h] [rbp-1C8h] BYREF
  __int64 v38; // [rsp+1F8h] [rbp-198h] BYREF
  char v39; // [rsp+200h] [rbp-190h]
  _BYTE v40[7]; // [rsp+201h] [rbp-18Fh]
  _BYTE *v41; // [rsp+208h] [rbp-188h]
  size_t v42; // [rsp+210h] [rbp-180h]
  size_t v43; // [rsp+218h] [rbp-178h]
  size_t v44; // [rsp+220h] [rbp-170h]
  size_t v45; // [rsp+228h] [rbp-168h]
  __int64 v46; // [rsp+230h] [rbp-160h]
  __int64 v47; // [rsp+238h] [rbp-158h]
  __int64 v48; // [rsp+240h] [rbp-150h]
  size_t v49; // [rsp+248h] [rbp-148h]
  size_t v50; // [rsp+250h] [rbp-140h]
  __int64 v51; // [rsp+258h] [rbp-138h]
  signed __int64 v52; // [rsp+260h] [rbp-130h]
  size_t v53; // [rsp+268h] [rbp-128h]
  size_t v54; // [rsp+270h] [rbp-120h]
  size_t v55; // [rsp+278h] [rbp-118h]
  size_t v56; // [rsp+280h] [rbp-110h]
  __int64 v57; // [rsp+288h] [rbp-108h] BYREF
  __int64 v58; // [rsp+290h] [rbp-100h]
  signed __int64 v59; // [rsp+298h] [rbp-F8h]
  size_t v60; // [rsp+2A0h] [rbp-F0h]
  size_t v61; // [rsp+2A8h] [rbp-E8h]
  unsigned __int64 v62; // [rsp+2B0h] [rbp-E0h] BYREF
  __int64 v63; // [rsp+2B8h] [rbp-D8h]
  void *v64; // [rsp+2C0h] [rbp-D0h]
  size_t __n[2]; // [rsp+2C8h] [rbp-C8h]
  _QWORD v66[9]; // [rsp+2D8h] [rbp-B8h] BYREF
  _DWORD v67[2]; // [rsp+320h] [rbp-70h] BYREF
  _BYTE v68[7]; // [rsp+328h] [rbp-68h]
  size_t v69; // [rsp+330h] [rbp-60h]
  size_t v70; // [rsp+338h] [rbp-58h]
  _DWORD v71[2]; // [rsp+340h] [rbp-50h]
  void *__srca; // [rsp+348h] [rbp-48h]
  _DWORD v73[2]; // [rsp+350h] [rbp-40h]
  _BYTE *v74; // [rsp+358h] [rbp-38h]
  char *v75; // [rsp+360h] [rbp-30h]

  v2 = a2;
  switch ( __src[8672] )
  {
    case 0:
      *(_WORD *)(__src + 8673) = 257;
      __src[8675] = 1;
      v4 = __src + 4528;
      memcpy(__src + 4528, __src + 392, 0x1028u);
      switch ( __src[8656] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_52;
        case 2:
          goto LABEL_51;
        case 3:
          goto LABEL_12;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v4 = __src + 4528;
      switch ( __src[8656] )
      {
        case 0:
LABEL_4:
          __srca = a2;
          v5 = __src + 5048;
          __dst[6] = 0;
          __dst[0] = "upload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 19;
          __dst[2] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[3] = 7;
          v75 = v4;
          __dst[4] = v4;
          __dst[5] = __src + 5048;
          v6 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 630) + 16LL);
          if ( v6 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v62,
            __dst,
            &__dst[2]);
          v7 = v62;
          if ( (_BYTE)v62 != 6 )
            goto LABEL_14;
          v6 = v63;
LABEL_7:
          __dst[6] = 0;
          __dst[0] = "upload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 19;
          __dst[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          __dst[3] = 4;
          __dst[4] = v75;
          __dst[5] = __src + 5048;
          v8 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 630) + 16LL);
          if ( v8 )
            goto LABEL_10;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v62,
            __dst,
            &__dst[2]);
          v7 = v62;
          if ( (_BYTE)v62 != 6 )
          {
LABEL_14:
            *(_DWORD *)((char *)v73 + 3) = HIDWORD(v62);
            v73[0] = *(_DWORD *)((char *)&v62 + 1);
            v12 = (_BYTE *)v63;
            v69 = (size_t)v64;
            v70 = __n[0];
            v10 = v7;
            goto LABEL_15;
          }
          v8 = v63;
LABEL_10:
          __dst[6] = 0;
          __dst[0] = "upload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 19;
          __dst[2] = "inputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[3] = 5;
          __dst[4] = v75;
          __dst[5] = __src + 5048;
          _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hf32d24ebaec3439f(&v62, __dst);
          v9 = v62;
          v10 = v63;
          v71[0] = *(_DWORD *)((char *)&v63 + 1);
          *(_DWORD *)((char *)v71 + 3) = HIDWORD(v63);
          v11 = v64;
          v55 = __n[0];
          v56 = __n[1];
          if ( v62 == 2 )
          {
            v73[0] = v71[0];
            *(_DWORD *)((char *)v73 + 3) = *(_DWORD *)((char *)v71 + 3);
            v69 = v55;
            v70 = v56;
            v12 = v64;
LABEL_15:
            core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v75);
            LOBYTE(v14) = 1;
            if ( __OFSUB__(0, *v5) )
              goto LABEL_47;
            v74 = v12;
            __srca = __src + 5056;
            v15 = *((_QWORD *)__src + 632);
            for ( i = *((_QWORD *)__src + 633) + 1LL; i != 1; --i )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v15);
              v15 += 96;
            }
            v17 = *v5;
            LOBYTE(v14) = 1;
            v12 = v74;
            if ( !*v5 )
              goto LABEL_47;
            goto LABEL_46;
          }
          v48 = v66[2];
          v47 = v66[1];
          v46 = v66[0];
          *((_QWORD *)__src + 642) = v6;
          *((_QWORD *)__src + 643) = v8;
          *((_QWORD *)__src + 634) = v9;
          __src[5080] = v10;
          v18 = *(_DWORD *)((char *)v71 + 3);
          *(_DWORD *)(__src + 5081) = v71[0];
          *((_DWORD *)__src + 1271) = v18;
          *((_QWORD *)__src + 636) = v11;
          v19 = v56;
          *((_QWORD *)__src + 637) = v55;
          *((_QWORD *)__src + 638) = v19;
          v20 = v47;
          *((_QWORD *)__src + 639) = v46;
          *((_QWORD *)__src + 640) = v20;
          *((_QWORD *)__src + 641) = v48;
          __src[5304] = 0;
          v13 = __src + 6264;
          memcpy(__src + 6264, __src + 5072, 0x4A8u);
          v74 = __src + 8648;
          __src[8648] = 0;
          v4 = v75;
          v2 = (char *)__srca;
LABEL_22:
          memcpy(__src + 7456, v13, 0x4A8u);
LABEL_23:
          v75 = v4;
          codexmate_lib::commands::debug_report::upload_debug_report::_$u7b$$u7b$closure$u7d$$u7d$::h6a209fee615dbc94(
            &v62,
            (_QWORD *)__src + 932,
            v2);
          v21 = v62;
          if ( v62 == 0x8000000000000001LL )
          {
            *v74 = 3;
            goto LABEL_40;
          }
          v22 = v63;
          __srca = v64;
          v36 = *(_OWORD *)__n;
          v23 = __n[0];
          qmemcpy(v34, v66, sizeof(v34));
          core::ptr::drop_in_place$LT$codexmate_lib..commands..debug_report..upload_debug_report..$u7b$$u7b$closure$u7d$$u7d$$GT$::hff0466bd1d93b916(__src + 7456);
          if ( v21 == 0x8000000000000000LL )
          {
            if ( v23 < 0 )
            {
              v24 = 0;
              goto LABEL_28;
            }
            if ( v23 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src + 7456, v67);
              v24 = 1;
              v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1);
              if ( !v25 )
LABEL_28:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23);
              v26 = v25;
            }
            else
            {
              v26 = 1;
            }
            v27 = __srca;
            memcpy((void *)v26, __srca, v23);
            if ( v22 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v22, 1);
            LOBYTE(v58) = 3;
            v59 = v23;
            v60 = v26;
            v61 = v23;
            v14 = 1;
          }
          else
          {
            qmemcpy(&__dst[5], v34, 0x48u);
            __dst[0] = v21;
            __dst[1] = v22;
            __dst[2] = __srca;
            *(_OWORD *)&__dst[3] = v36;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h3c73aef0a4b2783a(&v62, __dst);
            v51 = v63;
            v52 = (signed __int64)v64;
            v53 = __n[0];
            v54 = __n[1];
            if ( v62 == 0x8000000000000025LL )
            {
              v58 = v51;
              v59 = v52;
              v60 = v53;
              v61 = v54;
              v14 = 0;
            }
            else
            {
              v37[0] = v62;
              v37[1] = v51;
              v37[2] = v52;
              v37[3] = v53;
              v37[4] = v54;
              v37[5] = v66[0];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v57,
                v37);
              v14 = v57;
            }
          }
          v10 = v58;
          v67[0] = *(_DWORD *)((char *)&v58 + 1);
          *(_DWORD *)((char *)v67 + 3) = HIDWORD(v58);
          v12 = (_BYTE *)v59;
          v44 = v60;
          v45 = v61;
          *v74 = 1;
          if ( v14 != 2 )
          {
            *(_DWORD *)((char *)v73 + 3) = *(_DWORD *)((char *)v67 + 3);
            v73[0] = v67[0];
            v69 = v44;
            v70 = v45;
            core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v75);
            if ( *((_QWORD *)__src + 631) == 0x8000000000000000LL )
              goto LABEL_47;
            v74 = v12;
            __srca = __src + 5056;
            v30 = *((_QWORD *)__src + 632);
            for ( j = *((_QWORD *)__src + 633) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v30);
              v30 += 96;
            }
            v17 = *((_QWORD *)__src + 631);
            v12 = v74;
            if ( !v17 )
              goto LABEL_47;
LABEL_46:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)__srca, 96 * v17, 8);
LABEL_47:
            *(_DWORD *)&v68[3] = *(_DWORD *)((char *)v73 + 3);
            *(_DWORD *)v68 = v73[0];
            v49 = v69;
            v50 = v70;
            __src[8656] = 1;
            core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3936df8d4a16b18c((__int64)v75);
            *(_DWORD *)&v40[3] = *(_DWORD *)&v68[3];
            *(_DWORD *)v40 = *(_DWORD *)v68;
            v42 = v49;
            v43 = v50;
            v39 = v10;
            v41 = v12;
            v38 = v14 & 1;
            __src[8675] = 0;
            memcpy(__dst, __src, sizeof(__dst));
            __src[8674] = 0;
            v32 = *((_QWORD *)__src + 48);
            __src[8673] = 0;
            v64 = *((void **)__src + 47);
            v33 = *((_QWORD *)__src + 45);
            v63 = *((_QWORD *)__src + 46);
            v62 = v33;
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
              __dst,
              v32,
              &v38,
              &v62,
              *((unsigned int *)__src + 2166),
              *((unsigned int *)__src + 2167));
            v28 = 1;
            result = 0;
            goto LABEL_48;
          }
LABEL_40:
          __src[8656] = 3;
          v28 = 3;
          result = 1;
LABEL_48:
          __src[8672] = v28;
          return result;
        case 1:
LABEL_52:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_51:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
LABEL_12:
          v74 = __src + 8648;
          v13 = __src + 6264;
          switch ( __src[8648] )
          {
            case 0:
              goto LABEL_22;
            case 1:
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
            case 2:
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
            case 3:
              goto LABEL_23;
          }
      }
  }
}
