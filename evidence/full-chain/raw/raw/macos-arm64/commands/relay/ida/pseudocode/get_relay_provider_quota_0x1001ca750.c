// __ZN5tauri3ipc23InvokeResolver$LT$R$GT$30respond_async_serialized_inner28_$u7b$$u7b$closure$u7d$$u7d$17he6293f93a56fe901E @ 0x1001ca750 | 基线 same-set | Tauri command=get_relay_provider_quota
__int64 __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::he6293f93a56fe901(
        unsigned __int8 *__src,
        _QWORD *a2)
{
  __int64 v3; // rax
  char *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // r13
  char v7; // r12
  char *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 i; // r13
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // [rsp+4F8h] [rbp-448h] BYREF
  __int64 v20; // [rsp+500h] [rbp-440h]
  __int64 v21; // [rsp+508h] [rbp-438h]
  __int128 v22; // [rsp+510h] [rbp-430h]
  _QWORD v23[45]; // [rsp+628h] [rbp-318h] BYREF
  __int64 v24; // [rsp+7D0h] [rbp-170h] BYREF
  char v25; // [rsp+7D8h] [rbp-168h]
  _BYTE v26[7]; // [rsp+7D9h] [rbp-167h]
  __int64 v27; // [rsp+7E0h] [rbp-160h]
  __int64 v28; // [rsp+7E8h] [rbp-158h]
  __int64 v29; // [rsp+7F0h] [rbp-150h]
  __int64 v30; // [rsp+868h] [rbp-D8h]
  __int64 v31; // [rsp+870h] [rbp-D0h]
  __int64 v32; // [rsp+878h] [rbp-C8h]
  __int64 v33; // [rsp+880h] [rbp-C0h]
  __int64 v34; // [rsp+8B0h] [rbp-90h]
  __int64 v35; // [rsp+8B8h] [rbp-88h]
  _BYTE v36[7]; // [rsp+8C8h] [rbp-78h]
  _BYTE v37[7]; // [rsp+8F0h] [rbp-50h]
  _QWORD *v38; // [rsp+8F8h] [rbp-48h]
  __int64 v39; // [rsp+908h] [rbp-38h]
  char *v40; // [rsp+910h] [rbp-30h]

  v3 = __src[11024]; /*0x1001ca767*/
  v38 = a2; /*0x1001ca77c*/
  switch ( v3 ) /*0x1001ca780*/
  {
    case 0LL: /*0x1001ca780*/
      *(_WORD *)(__src + 11025) = 257; /*0x1001ca782*/
      __src[11027] = 1; /*0x1001ca78b*/
      v4 = (char *)(__src + 5704); /*0x1001ca799*/
      memcpy(__src + 5704, __src + 392, 0x14C0u); /*0x1001ca7a8*/
      switch ( __src[11008] ) /*0x1001ca7c2*/
      {
        case 0u: /*0x1001ca7c2*/
          goto LABEL_4;
        case 1u: /*0x1001ca7c2*/
          goto LABEL_24;
        case 2u: /*0x1001ca7c2*/
          goto LABEL_23;
        case 3u: /*0x1001ca7c2*/
          goto LABEL_10;
      }
    case 1LL: /*0x1001ca780*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0); /*0x1001cb52d*/
    case 2LL: /*0x1001ca780*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0); /*0x1001cb521*/
    case 3LL: /*0x1001ca780*/
      v4 = (char *)(__src + 5704); /*0x1001ca7c4*/
      switch ( __src[11008] ) /*0x1001ca7e0*/
      {
        case 0u: /*0x1001ca7e0*/
LABEL_4:
          v5 = __src + 6224; /*0x1001ca7e2*/
          v23[6] = 0; /*0x1001ca7e9*/
          v23[0] = "get_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001ca7fe*/
          v23[1] = 24; /*0x1001ca805*/
          v23[2] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001ca817*/
          v23[3] = 7; /*0x1001ca81e*/
          v40 = v4; /*0x1001ca829*/
          v23[4] = v4; /*0x1001ca82d*/
          v23[5] = __src + 6224; /*0x1001ca834*/
          v6 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 777) + 16LL); /*0x1001ca84b*/
          if ( v6 ) /*0x1001ca851*/
            goto LABEL_7; /*0x1001ca851*/
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1001ca868*/
            &v19,
            v23,
            &v23[2]);
          v7 = v19; /*0x1001ca86d*/
          if ( (_BYTE)v19 == 6 ) /*0x1001ca879*/
          {
            v6 = v20; /*0x1001ca87f*/
LABEL_7:
            v23[6] = 0; /*0x1001ca886*/
            v23[0] = "get_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001ca891*/
            v23[1] = 24; /*0x1001ca898*/
            v23[2] = "providerIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001ca8aa*/
            v23[3] = 10; /*0x1001ca8b1*/
            v8 = v40; /*0x1001ca8bc*/
            v23[4] = v40; /*0x1001ca8c0*/
            v23[5] = __src + 6224; /*0x1001ca8c7*/
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v19, v23); /*0x1001ca8dc*/
            v7 = v19; /*0x1001ca8e1*/
            if ( (_BYTE)v19 == 6 ) /*0x1001ca8ed*/
            {
              v9 = v20; /*0x1001ca8f3*/
              v32 = v21; /*0x1001ca901*/
              v33 = v22; /*0x1001ca90f*/
              *((_QWORD *)__src + 784) = v6; /*0x1001ca91d*/
              *((_QWORD *)__src + 781) = v9; /*0x1001ca924*/
              v10 = v33; /*0x1001ca932*/
              *((_QWORD *)__src + 782) = v32; /*0x1001ca939*/
              *((_QWORD *)__src + 783) = v10; /*0x1001ca940*/
              __src[7824] = 0; /*0x1001ca947*/
              memcpy(__src + 7832, __src + 6248, 0x630u); /*0x1001ca95d*/
              JUMPOUT(0x1001CA962LL); /*0x1001ca962*/
            }
            *(_DWORD *)&v37[3] = HIDWORD(v19); /*0x1001caba5*/
            *(_DWORD *)v37 = *(_DWORD *)((char *)&v19 + 1); /*0x1001caba8*/
            v39 = v20; /*0x1001cabb2*/
            v32 = v21; /*0x1001cabbd*/
            v33 = v22; /*0x1001cabcb*/
            v34 = v21; /*0x1001cabd2*/
            v35 = v22; /*0x1001cabd9*/
          }
          else
          {
            *(_DWORD *)&v37[3] = HIDWORD(v19); /*0x1001cb1df*/
            *(_DWORD *)v37 = *(_DWORD *)((char *)&v19 + 1); /*0x1001cb1e2*/
            v39 = v20; /*0x1001cb1ec*/
            v34 = v21; /*0x1001cb1f7*/
            v35 = v22; /*0x1001cb205*/
            v8 = v40; /*0x1001cb20c*/
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v8); /*0x1001cb213*/
          if ( __OFSUB__(0, *v5) ) /*0x1001cb220*/
          {
            v11 = v39; /*0x1001cb225*/
          }
          else
          {
            v38 = __src + 6232; /*0x1001cb235*/
            v12 = *((_QWORD *)__src + 779); /*0x1001cb239*/
            for ( i = *((_QWORD *)__src + 780) + 1LL; i != 1; --i ) /*0x1001cb247*/
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1001cb25d*/
              v12 += 96; /*0x1001cb262*/
            }
            v14 = *v5; /*0x1001cb267*/
            v15 = *v5 == 0; /*0x1001cb270*/
            v8 = v40; /*0x1001cb273*/
            v11 = v39; /*0x1001cb277*/
            if ( !v15 ) /*0x1001cb27b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, 96 * v14, 8); /*0x1001cb3cf*/
          }
          *(_DWORD *)&v36[3] = *(_DWORD *)&v37[3]; /*0x1001cb3da*/
          *(_DWORD *)v36 = *(_DWORD *)v37; /*0x1001cb3dd*/
          v30 = v34; /*0x1001cb3ee*/
          v31 = v35; /*0x1001cb3f5*/
          __src[11008] = 1; /*0x1001cb3fc*/
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb52061c4936998c3(v8); /*0x1001cb406*/
          *(_DWORD *)&v26[3] = *(_DWORD *)&v36[3]; /*0x1001cb411*/
          *(_DWORD *)v26 = *(_DWORD *)v36; /*0x1001cb417*/
          v28 = v30; /*0x1001cb42b*/
          v29 = v31; /*0x1001cb432*/
          v25 = v7; /*0x1001cb43d*/
          v27 = v11; /*0x1001cb444*/
          v24 = 1; /*0x1001cb44b*/
          __src[11027] = 0; /*0x1001cb452*/
          memcpy(v23, __src, sizeof(v23)); /*0x1001cb46b*/
          __src[11026] = 0; /*0x1001cb470*/
          v16 = *((_QWORD *)__src + 48); /*0x1001cb477*/
          __src[11025] = 0; /*0x1001cb47e*/
          v21 = *((_QWORD *)__src + 47); /*0x1001cb48c*/
          v17 = *((_QWORD *)__src + 45); /*0x1001cb493*/
          v20 = *((_QWORD *)__src + 46); /*0x1001cb4a1*/
          v19 = v17; /*0x1001cb4a8*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1001cb4ce*/
            v23,
            v16,
            &v24,
            &v19,
            *((unsigned int *)__src + 2754),
            *((unsigned int *)__src + 2755));
          __src[11024] = 1; /*0x1001cb4d7*/
          return 0;
        case 1u: /*0x1001ca7e0*/
LABEL_24:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0); /*0x1001cb540*/
        case 2u: /*0x1001ca7e0*/
LABEL_23:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0); /*0x1001cb532*/
        case 3u: /*0x1001ca7e0*/
LABEL_10:
          JUMPOUT(0x1001CA97DLL); /*0x1001ca97d*/
      }
  }
}
