/* addr=0x1001c72c0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * n_lines=657 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::he21fd1b1a9dd6cd3(
        char *__src,
        const void *a2,
        __m128 a3)
{
  char *v4; // r15
  _QWORD *v5; // r14
  __int8 v6; // r12
  __int64 v7; // r15
  char *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // of
  volatile signed __int64 *v12; // r15
  __int64 v13; // rt0
  volatile signed __int64 *v14; // r12
  __int64 v15; // rt0
  char *v16; // r13
  __int64 v17; // rcx
  char *v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // r14
  _BYTE *v21; // r13
  char *v22; // r15
  __int64 v23; // rdi
  char *v24; // rax
  __int64 v25; // rdx
  char *v26; // rcx
  __int64 v27; // rsi
  char *v28; // r14
  __int64 v29; // r12
  __int64 v30; // r13
  signed __int64 v31; // r12
  char *v32; // rsi
  __int64 v33; // r13
  char *v34; // r14
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 i; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  char result; // al
  void *v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // r13
  void *v47; // r15
  __int64 v48; // rdi
  __int64 j; // r13
  __int64 v50; // rsi
  __int64 v51; // rax
  _BYTE v52[96]; // [rsp+8h] [rbp-BA8h] BYREF
  _BYTE v53[96]; // [rsp+68h] [rbp-B48h] BYREF
  _BYTE v54[96]; // [rsp+C8h] [rbp-AE8h] BYREF
  _QWORD v55[12]; // [rsp+128h] [rbp-A88h] BYREF
  _BYTE v56[888]; // [rsp+188h] [rbp-A28h] BYREF
  __int64 v57; // [rsp+500h] [rbp-6B0h]
  _BYTE __srca[856]; // [rsp+508h] [rbp-6A8h] BYREF
  _QWORD v59[12]; // [rsp+860h] [rbp-350h] BYREF
  __m256i v60; // [rsp+8C0h] [rbp-2F0h] BYREF
  _QWORD *v61; // [rsp+8E0h] [rbp-2D0h]
  _BYTE v62[96]; // [rsp+8E8h] [rbp-2C8h] BYREF
  _QWORD v63[3]; // [rsp+948h] [rbp-268h] BYREF
  __int128 v64; // [rsp+960h] [rbp-250h]
  __int64 v65; // [rsp+970h] [rbp-240h]
  __int64 v66; // [rsp+978h] [rbp-238h] BYREF
  __int8 v67; // [rsp+980h] [rbp-230h]
  __int128 v68; // [rsp+981h] [rbp-22Fh]
  _BYTE v69[15]; // [rsp+991h] [rbp-21Fh]
  _QWORD v70[2]; // [rsp+9A0h] [rbp-210h] BYREF
  _BYTE __dst[136]; // [rsp+9B0h] [rbp-200h] BYREF
  _OWORD v72[6]; // [rsp+A38h] [rbp-178h] BYREF
  __int128 v73; // [rsp+A98h] [rbp-118h]
  _BYTE v74[15]; // [rsp+AA8h] [rbp-108h]
  __int64 v75; // [rsp+AB8h] [rbp-F8h]
  __int64 v76; // [rsp+AC0h] [rbp-F0h]
  __int64 v77; // [rsp+AC8h] [rbp-E8h]
  __m128i v78; // [rsp+AD0h] [rbp-E0h] BYREF
  _OWORD v79[2]; // [rsp+AE0h] [rbp-D0h]
  __int64 v80; // [rsp+B00h] [rbp-B0h] BYREF
  __m256i v81; // [rsp+B08h] [rbp-A8h]
  __int128 v82; // [rsp+B28h] [rbp-88h]
  _QWORD v83[2]; // [rsp+B38h] [rbp-78h]
  void *v84; // [rsp+B48h] [rbp-68h]
  _BYTE *v85; // [rsp+B50h] [rbp-60h]
  _BYTE *v86; // [rsp+B58h] [rbp-58h]
  const void *v87; // [rsp+B60h] [rbp-50h]
  char *v88; // [rsp+B68h] [rbp-48h]
  void *v89; // [rsp+B70h] [rbp-40h]
  _QWORD *v90; // [rsp+B78h] [rbp-38h]
  char *v91; // [rsp+B80h] [rbp-30h]

  v87 = a2;
  switch ( __src[8960] )
  {
    case 0:
      *(_WORD *)(__src + 8961) = 257;
      __src[8963] = 1;
      v4 = __src + 4672;
      memcpy(__src + 4672, __src + 392, 0x10B8u);
      switch ( __src[8944] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_88;
        case 2:
          goto LABEL_87;
        case 3:
          goto LABEL_6;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v4 = __src + 4672;
      switch ( __src[8944] )
      {
        case 0:
LABEL_4:
          v5 = __src + 5192;
          *(_QWORD *)&__dst[48] = 0;
          *(_QWORD *)__dst = "remove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[8] = 15;
          *(_QWORD *)&__dst[16] = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[24] = 3;
          v91 = v4;
          *(_QWORD *)&__dst[32] = v4;
          *(_QWORD *)&__dst[40] = __src + 5192;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v56);
          v6 = v56[8];
          *(_QWORD *)&v72[0] = *(_QWORD *)&v56[9];
          *(_OWORD *)((char *)v72 + 8) = *(_OWORD *)&v56[17];
          *(_QWORD *)((char *)&v72[1] + 7) = *(_QWORD *)&v56[32];
          if ( *(_QWORD *)v56 == 3 )
          {
            v82 = v72[0];
            v83[0] = *(_QWORD *)&v72[1];
            *(_QWORD *)((char *)v83 + 7) = *(_QWORD *)((char *)&v72[1] + 7);
            v7 = (__int64)v91;
          }
          else
          {
            qmemcpy(&__srca[40], &v56[40], 0x70u);
            *(_QWORD *)&__srca[9] = *(_QWORD *)&v72[0];
            *(_OWORD *)&__srca[17] = *(_OWORD *)((char *)v72 + 8);
            *(_QWORD *)&__srca[32] = *(_QWORD *)((char *)&v72[1] + 7);
            *(_QWORD *)__srca = *(_QWORD *)v56;
            __srca[8] = v56[8];
            *(_QWORD *)&v56[48] = 0;
            *(_QWORD *)v56 = "remove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v56[8] = 15;
            *(_QWORD *)&v56[16] = "accountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v56[24] = 11;
            v7 = (__int64)v91;
            *(_QWORD *)&v56[32] = v91;
            *(_QWORD *)&v56[40] = __src + 5192;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2acca326e8d04504(__dst, v56);
            v6 = __dst[0];
            if ( __dst[0] == 6 )
            {
              *(__int64 *)((char *)&v60.i64[2] + 7) = *(_QWORD *)&__dst[24];
              *(__int64 *)((char *)&v60.i64[1] + 7) = *(_QWORD *)&__dst[16];
              *(__int64 *)((char *)v60.i64 + 7) = *(_QWORD *)&__dst[8];
              memcpy(__src + 5216, __srca, 0x98u);
              v9 = *(__int64 *)((char *)&v60.i64[1] + 7);
              *((_QWORD *)__src + 671) = *(__int64 *)((char *)v60.i64 + 7);
              *((_QWORD *)__src + 672) = v9;
              *((_QWORD *)__src + 673) = *(__int64 *)((char *)&v60.i64[2] + 7);
              __src[5544] = 0;
              v8 = __src + 6456;
              v4 = v91;
              memcpy(__src + 6456, __src + 5216, 0x4D8u);
              v86 = __src + 8936;
              __src[8936] = 0;
LABEL_10:
              v84 = __src + 7696;
              memcpy(__src + 7696, v8, 0x4D8u);
              v90 = (_QWORD *)0x8000000000000000LL;
              switch ( __src[8024] )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_92;
                case 2:
                  goto LABEL_91;
                case 3:
                  goto LABEL_14;
                case 4:
                  goto LABEL_20;
              }
            }
            *(__int64 *)((char *)&v60.i64[2] + 7) = *(_QWORD *)&__dst[24];
            *(__int128 *)((char *)v60.i128 + 8) = *(_OWORD *)&__dst[9];
            v60.i64[0] = *(_QWORD *)&__dst[1];
            v82 = *(_OWORD *)&__dst[1];
            v83[0] = *(_QWORD *)&__dst[17];
            *(_QWORD *)((char *)v83 + 7) = *(__int64 *)((char *)&v60.i64[2] + 7);
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)__srca);
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v7);
          LOBYTE(v7) = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_83;
          v90 = __src + 5200;
          v37 = *((_QWORD *)__src + 650);
          for ( i = *((_QWORD *)__src + 651) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v37);
            v37 += 96;
          }
          v39 = *v5;
          LOBYTE(v7) = 1;
          if ( !*v5 )
            goto LABEL_83;
          goto LABEL_82;
        case 1:
LABEL_88:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_87:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v86 = __src + 8936;
  v8 = __src + 6456;
  switch ( __src[8936] )
  {
    case 0:
      goto LABEL_10;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3:
      v90 = (_QWORD *)0x8000000000000000LL;
      v84 = __src + 7696;
      switch ( __src[8024] )
      {
        case 0:
LABEL_11:
          v91 = v4;
          __src[8025] = 1;
          memcpy(__src + 7872, v84, 0x98u);
          __src[8026] = 1;
          v10 = *((_QWORD *)__src + 982);
          v75 = *((_QWORD *)__src + 981);
          v76 = v10;
          v77 = *((_QWORD *)__src + 983);
          _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
            v56,
            __src + 7872);
          v12 = *((volatile signed __int64 **)__src + 1001);
          v13 = _InterlockedIncrement64(v12);
          if ( (v13 < 0) ^ v11 | (v13 == 0)
            || (v14 = *((volatile signed __int64 **)__src + 1002),
                v15 = _InterlockedIncrement64(v14),
                (v15 < 0) ^ v11 | (v15 == 0)) )
          {
            BUG();
          }
          memcpy(__dst, v56, sizeof(__dst));
          __src[8026] = 0;
          v16 = __src + 8032;
          memcpy(__src + 8032, __dst, 0x88u);
          *((_QWORD *)__src + 1021) = v12;
          *((_QWORD *)__src + 1022) = v14;
          v17 = v76;
          *((_QWORD *)__src + 1023) = v75;
          *((_QWORD *)__src + 1024) = v17;
          *((_QWORD *)__src + 1025) = v77;
          v85 = __src + 8216;
          __src[8216] = 0;
          v4 = v91;
LABEL_16:
          v88 = v16;
          memcpy(v56, v16, 0xB0u);
          *((_QWORD *)__src + 1026) = tauri::async_runtime::spawn_blocking::h62fc355c36116136(v56);
          v18 = v88;
LABEL_17:
          v91 = v4;
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h4bb55506b85aab77(__srca);
          v19 = *(_QWORD **)__srca;
          if ( *(_QWORD *)__srca == 0x8000000000000002LL )
          {
            *v85 = 3;
            __src[8024] = 3;
LABEL_59:
            *v86 = 3;
            goto LABEL_60;
          }
          v88 = v18;
          if ( *(_QWORD *)__srca == 0x8000000000000001LL )
          {
            v89 = *(void **)&__srca[8];
            v78 = _mm_loadu_si128((const __m128i *)&__srca[16]);
            v20 = (__int64)v90 + 12;
          }
          else
          {
            v20 = *(_QWORD *)&__srca[8];
            v89 = *(void **)&__srca[16];
            v78 = _mm_loadu_si128((const __m128i *)&__srca[24]);
            qmemcpy(v59, &__srca[40], sizeof(v59));
          }
          qmemcpy(v55, v59, sizeof(v55));
          v30 = *((_QWORD *)__src + 1026);
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v30) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v30);
          if ( v19 == (_QWORD *)((char *)v90 + 1) )
          {
            *(_QWORD *)__srca = v20;
            *(_QWORD *)&__srca[8] = v89;
            *(__m128i *)&__srca[16] = _mm_load_si128(&v78);
            *(_QWORD *)&__srca[32] = v55[0];
            *(_QWORD *)&__srca[40] = v55[1];
            v70[0] = __srca;
            v70[1] = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              v59,
              "\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs",
              v70);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)__srca);
            v20 = v59[0];
            v89 = (void *)v59[1];
            v31 = v59[2];
            v78 = (__m128i)v59[2];
            v19 = v90;
          }
          else
          {
            v31 = _mm_load_si128(&v78).u64[0];
            qmemcpy(v72, v55, sizeof(v72));
          }
          qmemcpy(v52, v72, sizeof(v52));
          *v85 = 1;
          qmemcpy(v54, v52, sizeof(v54));
          v32 = v53;
          *(double *)a3.i64 = core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..RemovePayload$GT$$C$codexmate_lib..commands..accounts..remove_accounts..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1bf38b3cbd20be27((__int64)v88);
          if ( v19 == v90 )
          {
            __src[8026] = 0;
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 7872));
            *((_WORD *)__src + 4012) = 1;
            v33 = (__int64)v90;
            goto LABEL_61;
          }
          qmemcpy(v56, v54, 0x60u);
          *((_QWORD *)__src + 1004) = v19;
          *((_QWORD *)__src + 1005) = v20;
          *((_QWORD *)__src + 1006) = v89;
          a3 = (__m128)_mm_load_si128(&v78);
          *(__m128 *)(__src + 8056) = a3;
          qmemcpy(__src + 8072, v56, 0x60u);
          __src[8025] = 0;
          v22 = __src + 8168;
          memcpy(__src + 8168, __src + 7872, 0x98u);
          v23 = (__int64)v88;
          *((_QWORD *)__src + 1040) = v88;
          v24 = "RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removedaccountRUNTIME_REFRESH_FAILED_AFTER_LOGOUTshellexecutewindowprogramoptionscommandScopeglobalScope";
          *((_QWORD *)__src + 1041) = "RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removedaccountRUNTIME_REFRESH_FAILED_AFTER_LOGOUTshellexecutewindowprogramoptionscommandScopeglobalScope";
          *((_QWORD *)__src + 1042) = 35;
          v26 = "Accounts were removedaccountRUNTIME_REFRESH_FAILED_AFTER_LOGOUTshellexecutewindowprogramoptionscommandScopeglobalScope";
          *((_QWORD *)__src + 1043) = "Accounts were removedaccountRUNTIME_REFRESH_FAILED_AFTER_LOGOUTshellexecutewindowprogramoptionscommandScopeglobalScope";
          *((_QWORD *)__src + 1044) = 21;
          v28 = "mutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
          *((_QWORD *)__src + 1045) = "mutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
          *((_QWORD *)__src + 1046) = 8;
          v21 = __src + 8928;
          __src[8928] = 0;
          v25 = 35;
          v27 = 21;
          v29 = 8;
LABEL_32:
          *((_QWORD *)__src + 1047) = v23;
          *((_QWORD *)__src + 1048) = v24;
          *((_QWORD *)__src + 1049) = v25;
          *((_QWORD *)__src + 1050) = v26;
          *((_QWORD *)__src + 1051) = v27;
          memcpy(__src + 8416, v22, 0x98u);
          *((_QWORD *)__src + 1071) = v28;
          *((_QWORD *)__src + 1072) = v29;
          __src[8920] = 0;
LABEL_33:
          v34 = __src + 8416;
          codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$::h222848084844028a(
            (__int64 *)v56,
            (__int64)(__src + 8416),
            v87);
          v35 = *(_QWORD *)v56;
          if ( *(_QWORD *)v56 == 4 )
          {
            *v21 = 3;
            __src[8024] = 4;
            goto LABEL_59;
          }
          v87 = v21;
          *(_OWORD *)((char *)v72 + 8) = *(_OWORD *)&v56[16];
          *(_QWORD *)&v72[0] = *(_QWORD *)&v56[8];
          memcpy(__srca, &v56[32], sizeof(__srca));
          v36 = v57;
          if ( __src[8920] == 3 )
          {
            if ( __src[8912] == 3 )
            {
              _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf01894121b818ffa(__src + 8904);
            }
            else if ( !__src[8912] )
            {
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 8752));
            }
            v34 = __src + 8584;
          }
          else if ( __src[8920] )
          {
            goto LABEL_51;
          }
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)v34);
LABEL_51:
          if ( (_DWORD)v35 == 3 )
          {
            *(_OWORD *)&__dst[16] = *(_OWORD *)((char *)v72 + 8);
            *(_QWORD *)&__dst[8] = *(_QWORD *)&v72[0];
            v40 = 1;
          }
          else
          {
            *(_QWORD *)v56 = v35;
            *(_QWORD *)&v56[8] = *(_QWORD *)&v72[0];
            *(_OWORD *)&v56[16] = *(_OWORD *)((char *)v72 + 8);
            memcpy(&v56[32], __srca, 0x358u);
            v57 = v36;
            if ( *(_QWORD *)&v56[816] )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                    *(_QWORD *)&v56[824],
                                    *(_QWORD *)&v56[816],
                                    1);
            if ( *(_QWORD *)&v56[840] )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                    *(_QWORD *)&v56[848],
                                    *(_QWORD *)&v56[840],
                                    1);
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(v56);
            *(_QWORD *)&__dst[8] = *(_QWORD *)&__srca[832];
            *(_QWORD *)&__dst[16] = *(_QWORD *)&__srca[840];
            *(_QWORD *)&__dst[24] = *(_QWORD *)&__srca[848];
            v40 = 0;
          }
          *(_QWORD *)__dst = v40;
          codexmate_lib::commands::accounts::merge_post_commit_refresh_result::h45f05e795d4637e8(
            *((_QWORD **)__src + 1047),
            (__int64)__dst,
            *((const void **)__src + 1048),
            *((_QWORD *)__src + 1049),
            *((_QWORD *)__src + 1050),
            *((_QWORD *)__src + 1051));
          __src[8928] = 1;
          v33 = *((_QWORD *)__src + 1004);
          v19 = *((_QWORD **)__src + 1008);
          qmemcpy(v53, __src + 8072, sizeof(v53));
          v32 = __src + 8168;
          __src[8026] = 0;
          v20 = *((_QWORD *)__src + 1005);
          v89 = *((void **)__src + 1006);
          v31 = *((_QWORD *)__src + 1007);
          *((_WORD *)__src + 4012) = 1;
          if ( (_QWORD *)v33 == (_QWORD *)((char *)v90 + 1) )
            goto LABEL_59;
LABEL_61:
          v43 = v84;
          core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..remove_accounts..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c3d5c33012767a3((__int64)v84);
          if ( (_QWORD *)v33 == v90 )
          {
            if ( v31 < 0 )
            {
              v44 = 0;
              goto LABEL_64;
            }
            if ( v31 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v32);
              v44 = 1;
              v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1);
              if ( !v45 )
LABEL_64:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v31);
              v46 = v45;
            }
            else
            {
              v46 = 1;
            }
            v47 = v89;
            memcpy((void *)v46, v89, v31);
            if ( v20 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v20, 1);
            v81.i8[0] = 3;
            v81.i64[1] = v31;
            v81.i64[2] = v46;
            v81.i64[3] = v31;
            LOBYTE(v7) = 1;
            v6 = 3;
            goto LABEL_76;
          }
          qmemcpy(v62, v53, sizeof(v62));
          v60.i64[0] = v33;
          v60.i64[1] = v20;
          v60.i64[2] = (__int64)v89;
          v60.i64[3] = v31;
          v61 = v19;
          _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h487f751d666f47c1(v56, &v60, *(double *)a3.i64);
          *(_QWORD *)__srca = *(_QWORD *)&v56[8];
          *(_QWORD *)&__srca[8] = *(_QWORD *)&v56[16];
          *(_OWORD *)&__srca[16] = *(_OWORD *)&v56[24];
          if ( *(_QWORD **)v56 == (_QWORD *)((char *)v90 + 37) )
          {
            v6 = __srca[0];
            v81 = *(__m256i *)__srca;
            LOBYTE(v7) = 0;
LABEL_76:
            *(_QWORD *)((char *)&v79[1] + 7) = v81.i64[3];
            *(_OWORD *)((char *)v79 + 8) = *(__int128 *)((char *)v81.i128 + 9);
            *(_QWORD *)&v79[0] = *(__int64 *)((char *)v81.i64 + 1);
            *v86 = 1;
            goto LABEL_77;
          }
          v63[0] = *(_QWORD *)v56;
          v63[1] = *(_QWORD *)__srca;
          v63[2] = *(_QWORD *)&__srca[8];
          v64 = *(_OWORD *)&__srca[16];
          v65 = *(_QWORD *)&v56[40];
          _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
            &v80,
            v63);
          v7 = v80;
          v6 = v81.i8[0];
          v79[0] = *(__int128 *)((char *)v81.i128 + 1);
          *(_QWORD *)&v79[1] = *(__int64 *)((char *)&v81.i64[2] + 1);
          *(_QWORD *)((char *)&v79[1] + 7) = v81.i64[3];
          *v86 = 1;
          if ( v7 == 2 )
          {
LABEL_60:
            __src[8944] = 3;
            v41 = 3;
            result = 1;
            goto LABEL_84;
          }
LABEL_77:
          *(_QWORD *)((char *)v83 + 7) = *(_QWORD *)((char *)&v79[1] + 7);
          v83[0] = *(_QWORD *)&v79[1];
          v82 = v79[0];
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v91);
          if ( *((_QWORD **)__src + 649) != v90 )
          {
            v90 = __src + 5200;
            v48 = *((_QWORD *)__src + 650);
            for ( j = *((_QWORD *)__src + 651) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v48);
              v48 += 96;
            }
            v39 = *((_QWORD *)__src + 649);
            if ( v39 )
LABEL_82:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v90, 96 * v39, 8);
          }
LABEL_83:
          *(_QWORD *)&v74[7] = *(_QWORD *)((char *)v83 + 7);
          *(_QWORD *)v74 = v83[0];
          v73 = v82;
          __src[8944] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h253afd86d1dd3e90((__int64)v91);
          *(_QWORD *)&v69[7] = *(_QWORD *)&v74[7];
          *(_QWORD *)v69 = *(_QWORD *)v74;
          v68 = v73;
          v67 = v6;
          v66 = v7 & 1;
          __src[8963] = 0;
          memcpy(v56, __src, 0x168u);
          __src[8962] = 0;
          v50 = *((_QWORD *)__src + 48);
          __src[8961] = 0;
          *(_QWORD *)&__srca[16] = *((_QWORD *)__src + 47);
          v51 = *((_QWORD *)__src + 45);
          *(_QWORD *)&__srca[8] = *((_QWORD *)__src + 46);
          *(_QWORD *)__srca = v51;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            v56,
            v50,
            &v66,
            __srca,
            *((unsigned int *)__src + 2238),
            *((unsigned int *)__src + 2239));
          v41 = 1;
          result = 0;
LABEL_84:
          __src[8960] = v41;
          return result;
        case 1:
LABEL_92:
          v91 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952AC8);
        case 2:
LABEL_91:
          v91 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952AC8);
        case 3:
LABEL_14:
          v85 = __src + 8216;
          v18 = __src + 8032;
          switch ( __src[8216] )
          {
            case 0:
              v16 = __src + 8032;
              goto LABEL_16;
            case 1:
              JUMPOUT(0x1001C83C0LL);
            case 2:
              JUMPOUT(0x1001C839CLL);
            case 3:
              goto LABEL_17;
          }
        case 4:
LABEL_20:
          v91 = v4;
          v21 = __src + 8928;
          v22 = __src + 8168;
          switch ( __src[8928] )
          {
            case 0:
              v23 = *((_QWORD *)__src + 1040);
              v24 = *((char **)__src + 1041);
              v25 = *((_QWORD *)__src + 1042);
              v26 = *((char **)__src + 1043);
              v27 = *((_QWORD *)__src + 1044);
              v28 = *((char **)__src + 1045);
              v29 = *((_QWORD *)__src + 1046);
              goto LABEL_32;
            case 1:
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952B58);
            case 2:
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952B58);
            case 3:
              goto LABEL_33;
          }
      }
  }
}
