/* addr=0x10013a9b0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * n_lines=668 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h1b11683447aa8eed(
        unsigned __int8 *__src,
        __int64 a2)
{
  __int64 v3; // rax
  char *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // r14
  char v7; // r13
  __int64 v8; // r15
  size_t v9; // rax
  size_t v10; // rcx
  char *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdx
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  char v21; // al
  unsigned int v22; // r14d
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  volatile signed __int64 *v26; // rax
  __int64 v27; // rt0
  char v28; // of
  _QWORD *v29; // r15
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned int *v34; // rax
  unsigned __int64 v35; // r13
  size_t v36; // r14
  __int64 v37; // r15
  __int64 v38; // rdi
  __int64 i; // r15
  __int64 v40; // rax
  __int64 v41; // r13
  size_t v42; // r15
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r14
  unsigned int v47; // r12d
  __int64 v48; // r13
  void *v49; // r14
  char v50; // cl
  char result; // al
  __int64 v52; // rdi
  __int64 j; // r12
  __int64 v54; // rsi
  size_t v55; // rax
  _BYTE v56[168]; // [rsp+8h] [rbp-B88h] BYREF
  _BYTE v57[168]; // [rsp+B0h] [rbp-AE0h] BYREF
  _BYTE v58[168]; // [rsp+158h] [rbp-A38h] BYREF
  _QWORD v59[5]; // [rsp+200h] [rbp-990h] BYREF
  _BYTE v60[168]; // [rsp+228h] [rbp-968h] BYREF
  _QWORD v61[11]; // [rsp+2D0h] [rbp-8C0h] BYREF
  size_t __srca[93]; // [rsp+328h] [rbp-868h] BYREF
  _QWORD v63[3]; // [rsp+610h] [rbp-580h] BYREF
  unsigned __int8 v64; // [rsp+628h] [rbp-568h]
  _BYTE v65[7]; // [rsp+629h] [rbp-567h]
  __int64 v66; // [rsp+630h] [rbp-560h]
  _BYTE v67[88]; // [rsp+638h] [rbp-558h] BYREF
  __int64 __dst[97]; // [rsp+690h] [rbp-500h] BYREF
  _QWORD v69[6]; // [rsp+998h] [rbp-1F8h] BYREF
  __int64 v70; // [rsp+9C8h] [rbp-1C8h] BYREF
  char v71; // [rsp+9D0h] [rbp-1C0h]
  _BYTE v72[7]; // [rsp+9D1h] [rbp-1BFh]
  size_t v73; // [rsp+9D8h] [rbp-1B8h]
  size_t v74; // [rsp+9E0h] [rbp-1B0h]
  size_t v75; // [rsp+9E8h] [rbp-1A8h]
  _QWORD v76[11]; // [rsp+9F0h] [rbp-1A0h] BYREF
  size_t v77; // [rsp+A48h] [rbp-148h]
  size_t v78; // [rsp+A50h] [rbp-140h]
  size_t v79; // [rsp+A58h] [rbp-138h]
  size_t v80; // [rsp+A60h] [rbp-130h]
  __int64 v81; // [rsp+A68h] [rbp-128h]
  size_t v82; // [rsp+A70h] [rbp-120h]
  size_t v83; // [rsp+A78h] [rbp-118h]
  unsigned __int64 v84; // [rsp+A80h] [rbp-110h]
  _DWORD v85[2]; // [rsp+A88h] [rbp-108h] BYREF
  __int64 v86; // [rsp+A90h] [rbp-100h] BYREF
  size_t v87; // [rsp+A98h] [rbp-F8h]
  size_t v88; // [rsp+AA0h] [rbp-F0h]
  size_t v89; // [rsp+AA8h] [rbp-E8h]
  size_t v90; // [rsp+AB0h] [rbp-E0h]
  __int64 v91; // [rsp+AB8h] [rbp-D8h]
  __int64 *v92; // [rsp+AC0h] [rbp-D0h]
  __int64 v93; // [rsp+AC8h] [rbp-C8h]
  _DWORD v94[2]; // [rsp+AD0h] [rbp-C0h]
  _DWORD v95[2]; // [rsp+AD8h] [rbp-B8h]
  _BYTE v96[7]; // [rsp+AE0h] [rbp-B0h]
  size_t v97; // [rsp+AE8h] [rbp-A8h]
  size_t v98; // [rsp+AF0h] [rbp-A0h]
  _BYTE *v99; // [rsp+AF8h] [rbp-98h]
  _QWORD *v100; // [rsp+B00h] [rbp-90h] BYREF
  __int64 v101; // [rsp+B08h] [rbp-88h]
  __int64 v102; // [rsp+B10h] [rbp-80h]
  __int64 v103; // [rsp+B18h] [rbp-78h]
  _DWORD v104[2]; // [rsp+B20h] [rbp-70h] BYREF
  char *v105; // [rsp+B28h] [rbp-68h]
  char *v106; // [rsp+B30h] [rbp-60h]
  void *v107; // [rsp+B38h] [rbp-58h]
  _BYTE v108[7]; // [rsp+B40h] [rbp-50h]
  _QWORD *v109; // [rsp+B48h] [rbp-48h]
  char v110; // [rsp+B57h] [rbp-39h] BYREF
  unsigned __int64 v111; // [rsp+B58h] [rbp-38h]
  unsigned __int8 v112; // [rsp+B67h] [rbp-29h]

  v3 = __src[1952];
  v91 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(__src + 1953) = 257;
      __src[1955] = 1;
      v4 = (char *)(__src + 1168);
      memcpy(__src + 1168, __src + 392, 0x308u);
      switch ( __src[1936] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_90;
        case 2u:
          goto LABEL_89;
        case 3u:
          goto LABEL_12;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v4 = (char *)(__src + 1168);
      switch ( __src[1936] )
      {
        case 0u:
LABEL_4:
          v5 = __src + 1688;
          __dst[6] = 0;
          __dst[0] = (__int64)"migrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 24;
          __dst[2] = (__int64)"repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          __dst[3] = 4;
          v106 = v4;
          __dst[4] = (__int64)v4;
          __dst[5] = (__int64)(__src + 1688);
          v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 210) + 16LL);
          if ( v6 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            __srca,
            __dst,
            &__dst[2]);
          v7 = __srca[0];
          if ( LOBYTE(__srca[0]) != 6 )
            goto LABEL_42;
          v6 = __srca[1];
LABEL_7:
          __dst[6] = 0;
          __dst[0] = (__int64)"migrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 24;
          __dst[2] = (__int64)"mutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[3] = 12;
          __dst[4] = (__int64)v106;
          __dst[5] = (__int64)(__src + 1688);
          v8 = tauri::state::StateManager::try_get::h18d7865deb554c60(*((_QWORD *)__src + 210) + 16LL);
          if ( v8 )
            goto LABEL_10;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            __srca,
            __dst,
            &__dst[2]);
          v7 = __srca[0];
          if ( LOBYTE(__srca[0]) == 6 )
          {
            v8 = __srca[1];
LABEL_10:
            __dst[6] = 0;
            __dst[0] = (__int64)"migrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[1] = 24;
            __dst[2] = (__int64)"sessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[3] = 9;
            __dst[4] = (__int64)v106;
            __dst[5] = (__int64)(__src + 1688);
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
              __srca,
              __dst);
            v7 = __srca[0];
            if ( LOBYTE(__srca[0]) == 6 )
            {
              v9 = __srca[1];
              v82 = __srca[2];
              v83 = __srca[3];
              *((_QWORD *)__src + 217) = v6;
              *((_QWORD *)__src + 218) = v8;
              *((_QWORD *)__src + 214) = v9;
              v10 = v83;
              *((_QWORD *)__src + 215) = v82;
              *((_QWORD *)__src + 216) = v10;
              __src[1776] = 0;
              qmemcpy(__src + 1784, __src + 1712, 0x48u);
              v99 = __src + 1928;
              __src[1928] = 0;
              v105 = (char *)(__src + 1856);
              v92 = (__int64 *)(__src + 1784);
              qmemcpy(__src + 1856, __src + 1784, 0x48u);
              v11 = (char *)(__src + 1856);
              v12 = 0x8000000000000000LL;
              switch ( __src[1920] )
              {
                case 0u:
                  goto LABEL_15;
                case 1u:
                  goto LABEL_92;
                case 2u:
                  goto LABEL_91;
                case 3u:
                  goto LABEL_28;
              }
            }
            *(_DWORD *)&v108[3] = HIDWORD(__srca[0]);
            *(_DWORD *)v108 = *(_DWORD *)((char *)__srca + 1);
            v36 = __srca[1];
            v82 = __srca[2];
            v83 = __srca[3];
            v97 = __srca[2];
            v98 = __srca[3];
          }
          else
          {
LABEL_42:
            *(_DWORD *)&v108[3] = HIDWORD(__srca[0]);
            *(_DWORD *)v108 = *(_DWORD *)((char *)__srca + 1);
            v36 = __srca[1];
            v97 = __srca[2];
            v98 = __srca[3];
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v106);
          LOBYTE(v37) = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_76;
          v111 = v36;
          v109 = __src + 1696;
          v38 = *((_QWORD *)__src + 212);
          for ( i = *((_QWORD *)__src + 213) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v38);
            v38 += 96;
          }
          v40 = *v5;
          LOBYTE(v37) = 1;
          v36 = v111;
          if ( !*v5 )
            goto LABEL_76;
          goto LABEL_75;
        case 1u:
LABEL_90:
          v106 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_89:
          v106 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_12;
      }
  }
LABEL_12:
  v106 = v4;
  v99 = __src + 1928;
  v13 = __src[1928];
  v11 = (char *)(__src + 1784);
  v92 = (__int64 *)(__src + 1784);
  switch ( v13 )
  {
    case 0LL:
      v105 = (char *)(__src + 1856);
      qmemcpy(__src + 1856, v11, 0x48u);
      v11 = (char *)(__src + 1856);
      v12 = 0x8000000000000000LL;
      switch ( __src[1920] )
      {
        case 0u:
          goto LABEL_15;
        case 1u:
          goto LABEL_92;
        case 2u:
          goto LABEL_91;
        case 3u:
          goto LABEL_28;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3LL:
      v12 = 0x8000000000000000LL;
      v105 = (char *)(__src + 1856);
      switch ( __src[1920] )
      {
        case 0u:
LABEL_15:
          v111 = 0x8000000000000000LL;
          v14 = *((__int64 **)__src + 235);
          *(_OWORD *)(__src + 1896) = *(_OWORD *)(__src + 1880);
          *(_WORD *)(__src + 1921) = 1;
          v103 = *((_QWORD *)__src + 232);
          v93 = *((_QWORD *)__src + 233);
          v81 = *((_QWORD *)__src + 234);
          v15 = *v14;
          if ( !*v14 )
            v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v14);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15);
          v12 = v111;
          v84 = v111 - 1;
          if ( ((v111 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v17 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v11, v16, v111 - 1) ^ 1;
            v12 = v111;
            if ( !*((_BYTE *)v14 + 8) )
              goto LABEL_24;
          }
          else
          {
            v17 = 0;
            if ( !*((_BYTE *)v14 + 8) )
              goto LABEL_24;
          }
          v76[0] = 0;
          v76[1] = 1;
          v76[2] = 0;
          __dst[2] = 1610612768;
          __dst[0] = (__int64)v76;
          __dst[1] = (__int64)&off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v110, &unk_101952FE0, &off_101952F48);
          v109 = (_QWORD *)v76[0];
          v107 = (void *)v76[1];
          v112 = v76[2];
          v20 = HIBYTE(v76[2]);
          v21 = v17;
          v22 = *(unsigned __int16 *)((char *)&v76[2] + 5);
          v23 = *(unsigned int *)((char *)&v76[2] + 1);
          if ( !v21
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v84) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v18,
                                   v19) )
          {
            *((_BYTE *)v14 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14);
          if ( v109 != (_QWORD *)v111 )
          {
            v35 = ((unsigned __int64)((v20 << 16) | v22) << 32) | v23;
            goto LABEL_51;
          }
          v14 = (__int64 *)v107;
          v17 = v112;
          v12 = v111;
LABEL_24:
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __srca,
            v14 + 2);
          __src[1922] = 1;
          if ( (v17 & 1) == 0
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v84) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   __srca,
                                   v14 + 2,
                                   v24,
                                   v25) )
          {
            *((_BYTE *)v14 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14);
          v26 = **((volatile signed __int64 ***)__src + 238);
          v27 = _InterlockedIncrement64(v26);
          if ( (v27 < 0) ^ v28 | (v27 == 0) )
            BUG();
          *(_WORD *)(__src + 1921) = 0;
          __dst[96] = (__int64)v26;
          memcpy(__dst, __srca, 0x2E8u);
          __dst[93] = v103;
          __dst[94] = v93;
          __dst[95] = v81;
          *((_QWORD *)__src + 239) = tauri::async_runtime::spawn_blocking::hb8be660abfa503dc(__dst);
LABEL_28:
          v29 = __src + 1912;
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h9cb99b0b66ad6ca5(
            __dst,
            __src + 1912,
            v91);
          v30 = __dst[0];
          if ( __dst[0] == 0x8000000000000002LL )
          {
            __src[1920] = 3;
            goto LABEL_32;
          }
          v111 = v12;
          if ( __dst[0] == 0x8000000000000001LL )
          {
            v107 = (void *)__dst[1];
            v112 = __dst[2];
            LODWORD(v100) = *(_DWORD *)((char *)&__dst[2] + 1);
            *(_DWORD *)((char *)&v100 + 3) = HIDWORD(__dst[2]);
            v31 = __dst[3];
            v109 = (_QWORD *)(v111 + 12);
          }
          else
          {
            v109 = (_QWORD *)__dst[1];
            v107 = (void *)__dst[2];
            v112 = __dst[3];
            LODWORD(v100) = *(_DWORD *)((char *)&__dst[3] + 1);
            *(_DWORD *)((char *)&v100 + 3) = HIDWORD(__dst[3]);
            v31 = __dst[4];
            qmemcpy(v76, &__dst[5], sizeof(v76));
          }
          v104[0] = (_DWORD)v100;
          *(_DWORD *)((char *)v104 + 3) = *(_DWORD *)((char *)&v100 + 3);
          qmemcpy(v61, v76, sizeof(v61));
          v32 = *v29;
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*v29) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v32);
          v33 = v111 + 1;
          if ( v30 == v111 + 1 )
          {
            __dst[0] = (__int64)v109;
            __dst[1] = (__int64)v107;
            LOBYTE(__dst[2]) = v112;
            *(_DWORD *)((char *)&__dst[2] + 1) = v104[0];
            HIDWORD(__dst[2]) = *(_DWORD *)((char *)v104 + 3);
            __dst[3] = v31;
            __dst[4] = v61[0];
            __dst[5] = v61[1];
            v100 = nullptr;
            v101 = 1;
            v102 = 0;
            v76[2] = 1610612768;
            v76[0] = &v100;
            v76[1] = &off_101952F18;
            if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
                                    __dst,
                                    v76) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v110, &unk_101952FE0, &off_101952F48);
            v109 = v100;
            v107 = (void *)v101;
            v112 = v102;
            v94[0] = *(_DWORD *)((char *)&v102 + 1);
            *(_DWORD *)((char *)v94 + 3) = HIDWORD(v102);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__dst);
            v85[0] = v94[0];
            *(_DWORD *)((char *)v85 + 3) = *(_DWORD *)((char *)v94 + 3);
            v34 = v85;
            goto LABEL_41;
          }
          if ( v30 == v111 )
          {
            v34 = v104;
LABEL_41:
            v35 = ((unsigned __int64)(*((unsigned __int16 *)v34 + 2) | (*((unsigned __int8 *)v34 + 6) << 16)) << 32)
                | *v34;
LABEL_51:
            __src[1922] = 0;
            if ( ((v103 != 0) & __src[1921]) != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v103, 1);
            __src[1921] = 0;
            memcpy(v58, v56, sizeof(v58));
            __src[1920] = 1;
            memcpy(v57, v58, sizeof(v57));
            goto LABEL_54;
          }
          v66 = v31;
          qmemcpy(v67, v61, sizeof(v67));
          v63[0] = v30;
          v63[1] = v109;
          v63[2] = v107;
          v64 = v112;
          *(_DWORD *)v65 = v104[0];
          *(_DWORD *)&v65[3] = *(_DWORD *)((char *)v104 + 3);
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1c53b334ef90e766((__int64)__dst, v63);
          v46 = __dst[0];
          v109 = (_QWORD *)__dst[1];
          v107 = (void *)__dst[2];
          v112 = __dst[3];
          LODWORD(v91) = HIBYTE(__dst[3]);
          v47 = *(unsigned __int16 *)((char *)&__dst[3] + 5);
          v48 = *(unsigned int *)((char *)&__dst[3] + 1);
          v103 = __dst[4];
          memcpy(v56, &__dst[5], sizeof(v56));
          __src[1922] = 0;
          __src[1921] = 0;
          memcpy(v58, v56, sizeof(v58));
          __src[1920] = 1;
          if ( v46 == v33 )
          {
LABEL_32:
            *v99 = 3;
LABEL_69:
            __src[1936] = 3;
            v50 = 3;
            result = 1;
            goto LABEL_77;
          }
          v35 = ((unsigned __int64)(((_DWORD)v91 << 16) | v47) << 32) | v48;
          memcpy(v57, v58, sizeof(v57));
          if ( v46 != v111 )
          {
            memcpy(v60, v57, sizeof(v60));
            v59[0] = v46;
            v59[1] = v109;
            v59[2] = v107;
            v59[3] = v112 | (v35 << 8);
            v59[4] = v103;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hfac0d83186300f62(__dst, v59);
            __srca[0] = __dst[1];
            __srca[1] = __dst[2];
            __srca[2] = __dst[3];
            __srca[3] = __dst[4];
            if ( __dst[0] == v111 + 37 )
            {
              v87 = __srca[0];
              v88 = __srca[1];
              v89 = __srca[2];
              v90 = __srca[3];
              v86 = 0;
              v37 = 0;
            }
            else
            {
              v69[0] = __dst[0];
              v69[1] = __srca[0];
              v69[2] = __srca[1];
              v69[3] = __srca[2];
              v69[4] = __srca[3];
              v69[5] = __dst[5];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v86,
                v69);
              v37 = v86;
            }
            goto LABEL_68;
          }
LABEL_54:
          v41 = v35 << 8;
          v42 = v41 | v112;
          if ( v41 < 0 )
          {
            v43 = 0;
            goto LABEL_56;
          }
          if ( v42 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v58);
            v43 = 1;
            v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1);
            if ( !v44 )
LABEL_56:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43, v42);
            v45 = v44;
          }
          else
          {
            v45 = 1;
          }
          v49 = v107;
          memcpy((void *)v45, v107, v42);
          if ( v109 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v109, 1);
          LOBYTE(v87) = 3;
          v88 = v42;
          v89 = v45;
          v90 = v42;
          v86 = 1;
          v37 = 1;
LABEL_68:
          v7 = v87;
          v95[0] = *(_DWORD *)((char *)&v87 + 1);
          *(_DWORD *)((char *)v95 + 3) = HIDWORD(v87);
          v36 = v88;
          v77 = v89;
          v78 = v90;
          *v99 = 1;
          if ( v37 == 2 )
            goto LABEL_69;
          *(_DWORD *)&v108[3] = *(_DWORD *)((char *)v95 + 3);
          *(_DWORD *)v108 = v95[0];
          v97 = v77;
          v98 = v78;
          core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SessionMigrateWorktreePayload$GT$$C$alloc..string..String$C$codexmate_lib..commands..sessions..migrate_session_worktree..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hfd929e601037d868(v92);
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v106);
          if ( *((_QWORD *)__src + 211) != v111 )
          {
            v111 = v36;
            v109 = __src + 1696;
            v52 = *((_QWORD *)__src + 212);
            for ( j = *((_QWORD *)__src + 213) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v52);
              v52 += 96;
            }
            v40 = *((_QWORD *)__src + 211);
            v36 = v111;
            if ( v40 )
LABEL_75:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v109, 96 * v40, 8);
          }
LABEL_76:
          *(_DWORD *)&v96[3] = *(_DWORD *)&v108[3];
          *(_DWORD *)v96 = *(_DWORD *)v108;
          v79 = v97;
          v80 = v98;
          __src[1936] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h45830e25ab9d622e((__int64)v106);
          *(_DWORD *)&v72[3] = *(_DWORD *)&v96[3];
          *(_DWORD *)v72 = *(_DWORD *)v96;
          v74 = v79;
          v75 = v80;
          v71 = v7;
          v73 = v36;
          v70 = v37 & 1;
          __src[1955] = 0;
          memcpy(__dst, __src, 0x168u);
          __src[1954] = 0;
          v54 = *((_QWORD *)__src + 48);
          __src[1953] = 0;
          __srca[2] = *((_QWORD *)__src + 47);
          v55 = *((_QWORD *)__src + 45);
          __srca[1] = *((_QWORD *)__src + 46);
          __srca[0] = v55;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v54,
            &v70,
            __srca,
            *((unsigned int *)__src + 486),
            *((unsigned int *)__src + 487));
          v50 = 1;
          result = 0;
LABEL_77:
          __src[1952] = v50;
          return result;
        case 1u:
LABEL_92:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952BE8);
        case 2u:
LABEL_91:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952BE8);
        case 3u:
          goto LABEL_28;
      }
  }
}
