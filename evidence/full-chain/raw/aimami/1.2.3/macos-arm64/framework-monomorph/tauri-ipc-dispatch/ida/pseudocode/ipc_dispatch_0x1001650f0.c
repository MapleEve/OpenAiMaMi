/* addr=0x1001650f0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=716 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h5a6e53a16a35a59d(
        unsigned __int8 *__src,
        char *a2)
{
  __int64 v3; // rax
  char *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // r14
  char v7; // r13
  size_t v8; // rax
  __int128 v9; // xmm0
  unsigned __int64 v10; // r15
  size_t v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 i; // r15
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // r14
  unsigned int v22; // r15d
  char v23; // al
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  size_t v29; // r12
  __int64 v30; // rax
  __int64 v31; // r15
  int v32; // r12d
  unsigned int v33; // r15d
  __int64 v34; // r15
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r15
  unsigned __int8 v38; // r12
  int v39; // r10d
  unsigned int v40; // r9d
  __int64 v41; // r13
  __int64 v42; // r8
  size_t v43; // r13
  __int64 v44; // r13
  int v45; // r12d
  unsigned int v46; // r15d
  __int64 v47; // r14
  __int64 v48; // r13
  size_t v49; // r15
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // r12
  char v53; // cl
  char result; // al
  __int64 v55; // rdi
  __int64 j; // r12
  __int64 v57; // rsi
  size_t v58; // rax
  _BYTE v59[120]; // [rsp+8h] [rbp-A28h] BYREF
  _BYTE v60[120]; // [rsp+80h] [rbp-9B0h] BYREF
  _BYTE v61[120]; // [rsp+F8h] [rbp-938h] BYREF
  _QWORD v62[5]; // [rsp+170h] [rbp-8C0h] BYREF
  _BYTE v63[120]; // [rsp+198h] [rbp-898h] BYREF
  size_t __srca[93]; // [rsp+210h] [rbp-820h] BYREF
  _BYTE __dst[744]; // [rsp+4F8h] [rbp-538h] BYREF
  __int64 v66; // [rsp+7E0h] [rbp-250h]
  __int64 v67; // [rsp+7E8h] [rbp-248h]
  __int128 v68; // [rsp+7F0h] [rbp-240h]
  __int64 v69; // [rsp+800h] [rbp-230h]
  __int64 v70; // [rsp+808h] [rbp-228h]
  _QWORD v71[2]; // [rsp+810h] [rbp-220h] BYREF
  __int128 v72; // [rsp+820h] [rbp-210h]
  size_t v73; // [rsp+830h] [rbp-200h]
  __int64 v74; // [rsp+838h] [rbp-1F8h]
  _QWORD v75[2]; // [rsp+840h] [rbp-1F0h] BYREF
  char v76; // [rsp+850h] [rbp-1E0h]
  int v77; // [rsp+851h] [rbp-1DFh]
  __int16 v78; // [rsp+855h] [rbp-1DBh]
  char v79; // [rsp+857h] [rbp-1D9h]
  size_t v80; // [rsp+858h] [rbp-1D8h]
  __int64 v81; // [rsp+860h] [rbp-1D0h]
  __int64 v82; // [rsp+868h] [rbp-1C8h]
  __int64 v83; // [rsp+870h] [rbp-1C0h]
  __int64 v84; // [rsp+878h] [rbp-1B8h]
  __int64 v85; // [rsp+880h] [rbp-1B0h]
  __int64 v86; // [rsp+888h] [rbp-1A8h]
  __int64 v87; // [rsp+890h] [rbp-1A0h] BYREF
  char v88; // [rsp+898h] [rbp-198h]
  _BYTE v89[7]; // [rsp+899h] [rbp-197h]
  __int128 v90; // [rsp+8A0h] [rbp-190h]
  size_t v91; // [rsp+8B0h] [rbp-180h]
  __int64 v92; // [rsp+8B8h] [rbp-178h]
  __int128 v93; // [rsp+8C0h] [rbp-170h]
  __int64 v94; // [rsp+8D8h] [rbp-158h] BYREF
  size_t v95; // [rsp+8E0h] [rbp-150h]
  __int128 v96; // [rsp+8E8h] [rbp-148h]
  size_t v97; // [rsp+8F8h] [rbp-138h]
  __int64 v98; // [rsp+900h] [rbp-130h]
  size_t v99; // [rsp+908h] [rbp-128h]
  __int64 v100; // [rsp+910h] [rbp-120h]
  __int64 v101; // [rsp+918h] [rbp-118h]
  __int64 v102; // [rsp+920h] [rbp-110h]
  __int64 v103; // [rsp+928h] [rbp-108h]
  __int64 v104; // [rsp+930h] [rbp-100h]
  __int64 v105; // [rsp+938h] [rbp-F8h]
  int v106; // [rsp+944h] [rbp-ECh]
  __int64 v107; // [rsp+948h] [rbp-E8h]
  __int64 v108; // [rsp+950h] [rbp-E0h]
  __int64 v109; // [rsp+958h] [rbp-D8h]
  char *v110; // [rsp+960h] [rbp-D0h]
  _DWORD v111[2]; // [rsp+968h] [rbp-C8h]
  _BYTE v112[7]; // [rsp+970h] [rbp-C0h]
  __int64 *v113; // [rsp+978h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+980h] [rbp-B0h]
  __int64 v115; // [rsp+988h] [rbp-A8h]
  __int64 v116; // [rsp+990h] [rbp-A0h]
  __int64 v117; // [rsp+998h] [rbp-98h]
  __int64 v118; // [rsp+9A0h] [rbp-90h]
  _BYTE *v119; // [rsp+9A8h] [rbp-88h]
  __int64 v120; // [rsp+9B0h] [rbp-80h] BYREF
  __int64 v121; // [rsp+9B8h] [rbp-78h]
  size_t v122; // [rsp+9C0h] [rbp-70h]
  char *v123; // [rsp+9C8h] [rbp-68h]
  __int128 v124; // [rsp+9D0h] [rbp-60h]
  _BYTE v125[7]; // [rsp+9E0h] [rbp-50h]
  _QWORD *v126; // [rsp+9E8h] [rbp-48h]
  size_t v127; // [rsp+9F0h] [rbp-40h]
  size_t v128; // [rsp+9F8h] [rbp-38h]
  _BYTE v129[41]; // [rsp+A07h] [rbp-29h] BYREF

  v3 = __src[2000];
  v126 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(__src + 2001) = 257;
      __src[2003] = 1;
      a2 = (char *)(__src + 392);
      v4 = (char *)(__src + 1192);
      memcpy(__src + 1192, __src + 392, 0x320u);
      switch ( __src[1984] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_95;
        case 2u:
          goto LABEL_94;
        case 3u:
          goto LABEL_10;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v4 = (char *)(__src + 1192);
      switch ( __src[1984] )
      {
        case 0u:
LABEL_4:
          v5 = __src + 1712;
          *(_QWORD *)&__dst[48] = 0;
          *(_QWORD *)__dst = "export_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[8] = 23;
          *(_QWORD *)&__dst[16] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          *(_QWORD *)&__dst[24] = 4;
          v123 = v4;
          *(_QWORD *)&__dst[32] = v4;
          *(_QWORD *)&__dst[40] = __src + 1712;
          v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 213) + 16LL);
          if ( v6 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            __srca,
            __dst,
            &__dst[16]);
          v7 = __srca[0];
          if ( LOBYTE(__srca[0]) != 6 )
            goto LABEL_12;
          v6 = __srca[1];
LABEL_7:
          *(_QWORD *)&__dst[48] = 0;
          *(_QWORD *)__dst = "export_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[8] = 23;
          *(_QWORD *)&__dst[16] = "sessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[24] = 9;
          *(_QWORD *)&__dst[32] = v123;
          *(_QWORD *)&__dst[40] = __src + 1712;
          _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(__srca, __dst);
          v7 = __srca[0];
          if ( LOBYTE(__srca[0]) == 6 )
          {
            v127 = __srca[2];
            v128 = __srca[1];
            *(_QWORD *)&v124 = __srca[3];
            *(_QWORD *)&__dst[48] = 0;
            *(_QWORD *)__dst = "export_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&__dst[8] = 23;
            *(_QWORD *)&__dst[16] = "targetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&__dst[24] = 10;
            *(_QWORD *)&__dst[32] = v123;
            *(_QWORD *)&__dst[40] = __src + 1712;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
              __srca,
              __dst);
            v7 = __srca[0];
            if ( LOBYTE(__srca[0]) == 6 )
            {
              v8 = __srca[3];
              v9 = *(_OWORD *)&__srca[1];
              *((_QWORD *)__src + 223) = v6;
              *((_QWORD *)__src + 217) = v128;
              *((_QWORD *)__src + 218) = v127;
              *((_QWORD *)__src + 219) = v124;
              *((_OWORD *)__src + 110) = v9;
              *((_QWORD *)__src + 222) = v8;
              __src[1808] = 0;
              qmemcpy(__src + 1816, __src + 1736, 0x50u);
              v119 = __src + 1976;
              __src[1976] = 0;
              v110 = (char *)(__src + 1896);
              qmemcpy(__src + 1896, __src + 1816, 0x50u);
              a2 = (char *)(__src + 1896);
              v10 = 0x8000000000000000LL;
              switch ( __src[1968] )
              {
                case 0u:
                  goto LABEL_18;
                case 1u:
                  goto LABEL_97;
                case 2u:
                  goto LABEL_96;
                case 3u:
                  goto LABEL_30;
              }
            }
            *(_DWORD *)&v125[3] = HIDWORD(__srca[0]);
            *(_DWORD *)v125 = *(_DWORD *)((char *)__srca + 1);
            v124 = *(_OWORD *)&__srca[1];
            v11 = __srca[3];
            if ( v128 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v128, 1);
          }
          else
          {
LABEL_12:
            *(_DWORD *)&v125[3] = HIDWORD(__srca[0]);
            *(_DWORD *)v125 = *(_DWORD *)((char *)__srca + 1);
            v124 = *(_OWORD *)&__srca[1];
            v11 = __srca[3];
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v123);
          LOBYTE(v12) = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_78;
          v128 = v11;
          v126 = __src + 1720;
          v13 = *((_QWORD *)__src + 215);
          for ( i = *((_QWORD *)__src + 216) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13);
            v13 += 96;
          }
          v30 = *v5;
          LOBYTE(v12) = 1;
          v11 = v128;
          if ( !*v5 )
            goto LABEL_78;
          goto LABEL_77;
        case 1u:
LABEL_95:
          v123 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_94:
          v123 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_10;
      }
  }
LABEL_10:
  v123 = v4;
  v119 = __src + 1976;
  switch ( __src[1976] )
  {
    case 0u:
      v110 = (char *)(__src + 1896);
      qmemcpy(__src + 1896, __src + 1816, 0x50u);
      a2 = (char *)(__src + 1896);
      v10 = 0x8000000000000000LL;
      switch ( __src[1968] )
      {
        case 0u:
          goto LABEL_18;
        case 1u:
          goto LABEL_97;
        case 2u:
          goto LABEL_96;
        case 3u:
          goto LABEL_30;
      }
    case 1u:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2u:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3u:
      v10 = 0x8000000000000000LL;
      v110 = (char *)(__src + 1896);
      switch ( __src[1968] )
      {
        case 0u:
LABEL_18:
          v128 = 0x8000000000000000LL;
          v15 = *((__int64 **)__src + 243);
          *((_QWORD *)__src + 244) = v15;
          v107 = *((_QWORD *)__src + 237);
          v108 = *((_QWORD *)__src + 238);
          *(_WORD *)(__src + 1969) = 257;
          v98 = *((_QWORD *)__src + 240);
          v93 = *(_OWORD *)(__src + 1912);
          v109 = *((_QWORD *)__src + 241);
          v92 = *((_QWORD *)__src + 242);
          v16 = *v15;
          if ( !*v15 )
            v16 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v15);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v16);
          v10 = v128;
          v99 = v128 - 1;
          if ( ((v128 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, a2, v17, v128 - 1) ^ 1;
            v10 = v128;
            if ( !*((_BYTE *)v15 + 8) )
              goto LABEL_27;
          }
          else
          {
            v18 = 0;
            if ( !*((_BYTE *)v15 + 8) )
              goto LABEL_27;
          }
          v113 = nullptr;
          v114 = 1;
          v115 = 0;
          *(_QWORD *)&__dst[16] = 1610612768;
          *(_QWORD *)__dst = &v113;
          *(_QWORD *)&__dst[8] = &off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v129, &unk_101952FE0, &off_101952F48);
          *(_QWORD *)&v124 = v113;
          v21 = (__int64 *)v114;
          v127 = (unsigned __int8)v115;
          v106 = HIBYTE(v115);
          v22 = *(unsigned __int16 *)((char *)&v115 + 5);
          v23 = v18;
          v24 = *(unsigned int *)((char *)&v115 + 1);
          if ( !v23
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v99) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v19,
                                   v20) )
          {
            *((_BYTE *)v15 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15);
          if ( (_QWORD)v124 != v128 )
          {
            v34 = (v106 << 16) | v22;
LABEL_54:
            v43 = (v34 << 32) | v24;
            v35 = v124;
            v38 = v127;
            goto LABEL_55;
          }
          v15 = v21;
          v18 = v127;
          v10 = v128;
LABEL_27:
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __srca,
            v15 + 2);
          if ( (v18 & 1) == 0
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v99) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   __srca,
                                   v15 + 2,
                                   v25,
                                   v26) )
          {
            *((_BYTE *)v15 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15);
          *(_WORD *)(__src + 1969) = 0;
          memcpy(__dst, __srca, sizeof(__dst));
          v66 = v107;
          v67 = v108;
          v68 = v93;
          v69 = v109;
          v70 = v92;
          *((_QWORD *)__src + 245) = tauri::async_runtime::spawn_blocking::h83d613c8d6d0ad31(__dst);
LABEL_30:
          v128 = v10;
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hf717d5ce5b427545(
            __dst,
            __src + 1960,
            v126);
          v27 = *(_QWORD *)__dst;
          if ( *(_QWORD *)__dst == 13 )
          {
            __src[1968] = 3;
            goto LABEL_36;
          }
          if ( *(_DWORD *)__dst == 12 )
          {
            *(_QWORD *)&v124 = *(_QWORD *)&__dst[8];
            LOBYTE(v126) = __dst[16];
            v28 = ((unsigned __int64)((__dst[23] << 16) | (unsigned int)*(unsigned __int16 *)&__dst[21]) << 32)
                | *(unsigned int *)&__dst[17];
            v127 = *(_QWORD *)&__dst[24];
            v29 = v128 + 12;
          }
          else
          {
            v29 = *(_QWORD *)&__dst[8];
            *(_QWORD *)&v124 = *(_QWORD *)&__dst[16];
            LOBYTE(v126) = __dst[24];
            v28 = ((unsigned __int64)((__dst[31] << 16) | (unsigned int)*(unsigned __int16 *)&__dst[29]) << 32)
                | *(unsigned int *)&__dst[25];
            v127 = *(_QWORD *)&__dst[32];
            v113 = *(__int64 **)&__dst[40];
            v114 = *(_QWORD *)&__dst[48];
            v115 = *(_QWORD *)&__dst[56];
            v116 = *(_QWORD *)&__dst[64];
            v117 = *(_QWORD *)&__dst[72];
            v118 = *(_QWORD *)&__dst[80];
            *(_QWORD *)&v93 = *(_QWORD *)&__dst[88];
          }
          v100 = (__int64)v113;
          v101 = v114;
          v102 = v115;
          v103 = v116;
          v104 = v117;
          v105 = v118;
          v31 = *((_QWORD *)__src + 245);
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v31) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v31);
          if ( (_DWORD)v27 != 11 )
          {
            if ( (_DWORD)v27 == 12 )
            {
              *(_QWORD *)__dst = v29;
              *(_QWORD *)&__dst[8] = v124;
              __dst[16] = (_BYTE)v126;
              *(_DWORD *)&__dst[17] = v28;
              __dst[23] = BYTE6(v28);
              *(_WORD *)&__dst[21] = WORD2(v28);
              *(_QWORD *)&__dst[24] = v127;
              *(_QWORD *)&__dst[32] = v100;
              *(_QWORD *)&__dst[40] = v101;
              v120 = 0;
              v121 = 1;
              v122 = 0;
              v115 = 1610612768;
              v113 = &v120;
              v114 = (__int64)&off_101952F18;
              if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
                                      __dst,
                                      &v113) )
                core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v129, &unk_101952FE0, &off_101952F48);
              *(_QWORD *)&v124 = v120;
              v21 = (__int64 *)v121;
              v127 = (unsigned __int8)v122;
              v32 = HIBYTE(v122);
              v33 = *(unsigned __int16 *)((char *)&v122 + 5);
              v24 = *(unsigned int *)((char *)&v122 + 1);
              core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)__dst);
              v34 = (v32 << 16) | v33;
              goto LABEL_54;
            }
            *(_QWORD *)__dst = v27;
            *(_QWORD *)&__dst[8] = v29;
            *(_QWORD *)&__dst[16] = v124;
            __dst[24] = (_BYTE)v126;
            *(_DWORD *)&__dst[25] = v28;
            __dst[31] = BYTE6(v28);
            *(_WORD *)&__dst[29] = WORD2(v28);
            *(_QWORD *)&__dst[32] = v127;
            *(_QWORD *)&__dst[40] = v100;
            *(_QWORD *)&__dst[48] = v101;
            *(_QWORD *)&__dst[56] = v102;
            *(_QWORD *)&__dst[64] = v103;
            *(_QWORD *)&__dst[72] = v104;
            *(_QWORD *)&__dst[80] = v105;
            *(_QWORD *)&__dst[88] = v93;
            v120 = 0;
            v121 = 1;
            v122 = 0;
            v115 = 1610612768;
            v113 = &v120;
            v114 = (__int64)&off_101952F18;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    __dst,
                                    (__int64 *)&v113) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v129, &unk_101952FE0, &off_101952F48);
            v44 = v120;
            LOBYTE(v126) = v121;
            v45 = HIBYTE(v121);
            v46 = *(unsigned __int16 *)((char *)&v121 + 5);
            v47 = *(unsigned int *)((char *)&v121 + 1);
            v127 = v122;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
            v28 = ((unsigned __int64)((v45 << 16) | v46) << 32) | v47;
            v35 = v44;
LABEL_50:
            v21 = (__int64 *)((unsigned __int8)v126 | (v28 << 8));
            v38 = v127;
            v43 = v127 >> 8;
LABEL_55:
            if ( ((v98 != 0) & __src[1969]) != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v98, 1);
            __src[1969] = 0;
            if ( ((v107 != 0) & __src[1970]) != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1);
            *(_QWORD *)&v124 = v35;
            __src[1970] = 0;
            qmemcpy(v61, v59, sizeof(v61));
            __src[1968] = 1;
            qmemcpy(v60, v61, sizeof(v60));
            goto LABEL_60;
          }
          v35 = v124;
          if ( v29 == v128 )
            goto LABEL_50;
          v86 = v105;
          v85 = v104;
          v84 = v103;
          v83 = v102;
          v82 = v101;
          v81 = v100;
          v75[0] = v29;
          v75[1] = v124;
          v76 = (char)v126;
          v77 = v28;
          v79 = BYTE6(v28);
          v78 = WORD2(v28);
          v80 = v127;
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h7e5d3fedf5491edb((__int64)__dst, v75);
          v36 = *(_QWORD *)__dst;
          v37 = *(_QWORD *)&__dst[8];
          v21 = *(__int64 **)&__dst[16];
          v38 = __dst[24];
          v39 = __dst[31];
          v40 = *(unsigned __int16 *)&__dst[29];
          v41 = *(unsigned int *)&__dst[25];
          v42 = *(_QWORD *)&__dst[32];
          qmemcpy(v59, &__dst[40], sizeof(v59));
          *(_WORD *)(__src + 1969) = 0;
          qmemcpy(v61, v59, sizeof(v61));
          __src[1968] = 1;
          if ( v36 == v128 + 1 )
          {
LABEL_36:
            *v119 = 3;
LABEL_71:
            __src[1984] = 3;
            v53 = 3;
            result = 1;
            goto LABEL_79;
          }
          v43 = ((unsigned __int64)((v39 << 16) | v40) << 32) | v41;
          qmemcpy(v60, v61, sizeof(v60));
          if ( v36 != v128 )
          {
            qmemcpy(v63, v60, sizeof(v63));
            v62[0] = v36;
            v62[1] = v37;
            v62[2] = v21;
            v62[3] = v38 | (v43 << 8);
            v62[4] = v42;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h0cf237f1e930ccb6(__dst, v62);
            __srca[0] = *(_QWORD *)&__dst[8];
            *(_OWORD *)&__srca[1] = *(_OWORD *)&__dst[16];
            __srca[3] = *(_QWORD *)&__dst[32];
            if ( *(_QWORD *)__dst == v128 + 37 )
            {
              v95 = __srca[0];
              v96 = *(_OWORD *)&__srca[1];
              v97 = __srca[3];
              v12 = 0;
            }
            else
            {
              v71[0] = *(_QWORD *)__dst;
              v71[1] = __srca[0];
              v72 = *(_OWORD *)&__srca[1];
              v73 = __srca[3];
              v74 = *(_QWORD *)&__dst[40];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v94,
                v71);
              v12 = v94;
            }
            goto LABEL_70;
          }
          *(_QWORD *)&v124 = v37;
LABEL_60:
          v48 = v43 << 8;
          v49 = v48 | v38;
          if ( v48 < 0 )
          {
            v50 = 0;
            goto LABEL_62;
          }
          if ( v49 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, v62);
            v50 = 1;
            v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v49, 1);
            if ( !v51 )
LABEL_62:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v50, v49);
            v52 = v51;
          }
          else
          {
            v52 = 1;
          }
          memcpy((void *)v52, v21, v49);
          if ( (_QWORD)v124 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v124, 1);
          LOBYTE(v95) = 3;
          *(_QWORD *)&v96 = v49;
          *((_QWORD *)&v96 + 1) = v52;
          v97 = v49;
          v12 = 1;
LABEL_70:
          v7 = v95;
          v111[0] = *(_DWORD *)((char *)&v95 + 1);
          *(_DWORD *)((char *)v111 + 3) = HIDWORD(v95);
          v124 = v96;
          v11 = v97;
          *v119 = 1;
          if ( v12 == 2 )
            goto LABEL_71;
          *(_DWORD *)&v125[3] = *(_DWORD *)((char *)v111 + 3);
          *(_DWORD *)v125 = v111[0];
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v123);
          if ( *((_QWORD *)__src + 214) != v128 )
          {
            v128 = v11;
            v126 = __src + 1720;
            v55 = *((_QWORD *)__src + 215);
            for ( j = *((_QWORD *)__src + 216) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v55);
              v55 += 96;
            }
            v30 = *((_QWORD *)__src + 214);
            v11 = v128;
            if ( v30 )
LABEL_77:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v126, 96 * v30, 8);
          }
LABEL_78:
          *(_DWORD *)&v112[3] = *(_DWORD *)&v125[3];
          *(_DWORD *)v112 = *(_DWORD *)v125;
          __src[1984] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3b8568391739dd4d((__int64)v123);
          *(_DWORD *)&v89[3] = *(_DWORD *)&v112[3];
          *(_DWORD *)v89 = *(_DWORD *)v112;
          v91 = v11;
          v88 = v7;
          v90 = v124;
          v87 = v12 & 1;
          __src[2003] = 0;
          memcpy(__dst, __src, 0x168u);
          __src[2002] = 0;
          v57 = *((_QWORD *)__src + 48);
          __src[2001] = 0;
          __srca[2] = *((_QWORD *)__src + 47);
          v58 = *((_QWORD *)__src + 45);
          __srca[1] = *((_QWORD *)__src + 46);
          __srca[0] = v58;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v57,
            &v87,
            __srca,
            *((unsigned int *)__src + 498),
            *((unsigned int *)__src + 499));
          v53 = 1;
          result = 0;
LABEL_79:
          __src[2000] = v53;
          return result;
        case 1u:
LABEL_97:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952BD0);
        case 2u:
LABEL_96:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952BD0);
        case 3u:
          goto LABEL_30;
      }
  }
}
