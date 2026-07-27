/* addr=0x1001370a0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=689 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h171484e34b0f5c2c(
        char *__src,
        __int64 a2)
{
  __int64 v2; // r15
  char *v4; // r12
  _QWORD *v5; // r15
  char v6; // r13
  char v7; // r12
  __int64 v8; // rax
  char *v9; // r14
  char v10; // of
  volatile signed __int64 **v11; // rcx
  char v12; // r13
  char v13; // r11
  volatile signed __int64 *v14; // rax
  __int64 v15; // rt0
  volatile signed __int64 *v16; // rdx
  __int64 v17; // rt0
  volatile signed __int64 *v18; // rsi
  __int64 v19; // rt0
  volatile signed __int64 *v20; // rdi
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r8
  __int64 v23; // rt0
  volatile signed __int64 *v24; // r9
  __int64 v25; // rt0
  volatile signed __int64 *v26; // r10
  volatile signed __int64 *v27; // rcx
  char v28; // of
  volatile signed __int64 *v29; // r14
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r12
  __int64 v32; // rt0
  char v33; // cl
  _QWORD *v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r14
  const void *v40; // r13
  signed __int64 v41; // r12
  bool v42; // zf
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // r12
  __int64 v48; // r14
  char v49; // cl
  char result; // al
  __int64 v51; // rdi
  __int64 j; // r15
  __int64 v53; // rdi
  __int64 i; // r12
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  _QWORD v58[46]; // [rsp+8h] [rbp-D68h] BYREF
  _DWORD v59[92]; // [rsp+178h] [rbp-BF8h] BYREF
  _QWORD __dst[19]; // [rsp+2E8h] [rbp-A88h] BYREF
  _BYTE v61[328]; // [rsp+380h] [rbp-9F0h] BYREF
  __int64 v62[40]; // [rsp+4C8h] [rbp-8A8h] BYREF
  char v63; // [rsp+608h] [rbp-768h]
  _BYTE *v64; // [rsp+610h] [rbp-760h]
  __int64 v65; // [rsp+618h] [rbp-758h]
  _QWORD v66[37]; // [rsp+620h] [rbp-750h] BYREF
  _BYTE v67[408]; // [rsp+748h] [rbp-628h] BYREF
  _QWORD v68[46]; // [rsp+8E0h] [rbp-490h] BYREF
  _QWORD v69[6]; // [rsp+A50h] [rbp-320h] BYREF
  _BYTE v70[408]; // [rsp+A80h] [rbp-2F0h] BYREF
  __int64 v71; // [rsp+C18h] [rbp-158h] BYREF
  char v72; // [rsp+C20h] [rbp-150h]
  char v73; // [rsp+C21h] [rbp-14Fh]
  int v74; // [rsp+C22h] [rbp-14Eh]
  __int16 v75; // [rsp+C26h] [rbp-14Ah]
  __int64 v76; // [rsp+C28h] [rbp-148h]
  __int64 v77; // [rsp+C30h] [rbp-140h]
  __int64 v78; // [rsp+C38h] [rbp-138h]
  __int64 v79; // [rsp+C40h] [rbp-130h]
  signed __int64 v80; // [rsp+C48h] [rbp-128h]
  __int64 v81; // [rsp+C50h] [rbp-120h]
  __int64 v82; // [rsp+C58h] [rbp-118h]
  __int64 v83; // [rsp+C60h] [rbp-110h]
  volatile signed __int64 *v84; // [rsp+C68h] [rbp-108h]
  volatile signed __int64 *v85; // [rsp+C70h] [rbp-100h]
  volatile signed __int64 *v86; // [rsp+C78h] [rbp-F8h]
  volatile signed __int64 *v87; // [rsp+C80h] [rbp-F0h]
  volatile signed __int64 *v88; // [rsp+C88h] [rbp-E8h]
  volatile signed __int64 *v89; // [rsp+C90h] [rbp-E0h]
  volatile signed __int64 *v90; // [rsp+C98h] [rbp-D8h]
  volatile signed __int64 *v91; // [rsp+CA0h] [rbp-D0h]
  __int64 v92; // [rsp+CA8h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+CB0h] [rbp-C0h]
  signed __int64 v94; // [rsp+CB8h] [rbp-B8h]
  __int64 v95; // [rsp+CC0h] [rbp-B0h]
  signed __int64 v96; // [rsp+CC8h] [rbp-A8h]
  void *__srca; // [rsp+CD0h] [rbp-A0h]
  const void *v98; // [rsp+CD8h] [rbp-98h]
  int v99; // [rsp+CE0h] [rbp-90h]
  __int16 v100; // [rsp+CE4h] [rbp-8Ch]
  int v101; // [rsp+CE8h] [rbp-88h]
  __int16 v102; // [rsp+CECh] [rbp-84h]
  __int64 v103; // [rsp+CF0h] [rbp-80h]
  signed __int64 v104; // [rsp+CF8h] [rbp-78h]
  _BYTE *v105; // [rsp+D00h] [rbp-70h] BYREF
  __int64 v106; // [rsp+D08h] [rbp-68h]
  signed __int64 v107; // [rsp+D10h] [rbp-60h]
  char v108; // [rsp+D1Fh] [rbp-51h] BYREF
  char *v109; // [rsp+D20h] [rbp-50h]
  char *v110; // [rsp+D28h] [rbp-48h]
  int v111; // [rsp+D30h] [rbp-40h]
  __int16 v112; // [rsp+D34h] [rbp-3Ch]
  __int64 v113; // [rsp+D38h] [rbp-38h]
  char *v114; // [rsp+D40h] [rbp-30h]

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
          goto LABEL_82;
        case 2:
          goto LABEL_81;
        case 3:
          goto LABEL_6;
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
          v113 = a2;
          v5 = __src + 2480;
          v68[6] = 0;
          v68[0] = "set_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v68[1] = 32;
          v68[2] = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v68[3] = 3;
          v114 = v4;
          v68[4] = v4;
          v68[5] = __src + 2480;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v70);
          v6 = v70[8];
          v7 = v70[9];
          v59[0] = *(_DWORD *)&v70[10];
          LOWORD(v59[1]) = *(_WORD *)&v70[14];
          v58[0] = *(_QWORD *)&v70[24];
          v58[1] = *(_QWORD *)&v70[32];
          if ( *(_QWORD *)v70 == 3 )
          {
            v113 = *(_QWORD *)&v70[16];
            v111 = v59[0];
            v112 = v59[1];
            v103 = v58[0];
            v104 = v58[1];
            goto LABEL_64;
          }
          qmemcpy(&v67[40], &v70[40], 0x70u);
          *(_DWORD *)&v67[10] = v59[0];
          *(_WORD *)&v67[14] = v59[1];
          *(_QWORD *)&v67[24] = v58[0];
          *(_QWORD *)&v67[32] = v58[1];
          *(_QWORD *)v67 = *(_QWORD *)v70;
          *(_WORD *)&v67[8] = *(_WORD *)&v70[8];
          *(_QWORD *)&v67[16] = *(_QWORD *)&v70[16];
          *(_QWORD *)&v70[48] = 0;
          *(_QWORD *)v70 = "set_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&v70[8] = 32;
          *(_QWORD *)&v70[16] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&v70[24] = 7;
          v37 = (__int64)v114;
          *(_QWORD *)&v70[32] = v114;
          *(_QWORD *)&v70[40] = __src + 2480;
          v38 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 309) + 16LL);
          if ( v38 )
            goto LABEL_29;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            v68,
            v70,
            &v70[16]);
          v6 = v68[0];
          if ( LOBYTE(v68[0]) == 6 )
          {
            v38 = v68[1];
            v37 = (__int64)v114;
LABEL_29:
            *(_QWORD *)&v70[48] = 0;
            *(_QWORD *)v70 = "set_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v70[8] = 32;
            *(_QWORD *)&v70[16] = "enableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v70[24] = 7;
            *(_QWORD *)&v70[32] = v37;
            *(_QWORD *)&v70[40] = __src + 2480;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v68, v70);
            v6 = v68[0];
            v7 = BYTE1(v68[0]);
            if ( LOBYTE(v68[0]) == 6 )
            {
              *(_QWORD *)&v70[48] = 0;
              *(_QWORD *)v70 = "set_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
              *(_QWORD *)&v70[8] = 32;
              *(_QWORD *)&v70[16] = "relaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
              *(_QWORD *)&v70[24] = 8;
              *(_QWORD *)&v70[32] = v114;
              *(_QWORD *)&v70[40] = __src + 2480;
              _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hcd56ac80a77c6f8c(v68, v70);
              v6 = v68[0];
              LOBYTE(v110) = BYTE1(v68[0]);
              if ( LOBYTE(v68[0]) == 6 )
              {
                memcpy(__src + 2504, v67, 0x98u);
                *((_QWORD *)__src + 332) = v38;
                __src[2832] = v7;
                *(_WORD *)(__src + 2833) = (unsigned __int8)v110;
                __srca = __src + 2840;
                memcpy(__src + 2840, __src + 2504, 0x150u);
                v109 = __src + 3512;
                __src[3512] = 0;
                v4 = v114;
                v2 = v113;
LABEL_7:
                v9 = __src + 3176;
                memcpy(__src + 3176, __srca, 0x150u);
                switch ( __src[3506] )
                {
                  case 0:
                    goto LABEL_9;
                  case 1:
                    goto LABEL_84;
                  case 2:
                    goto LABEL_83;
                  case 3:
                    goto LABEL_23;
                }
              }
              v112 = HIWORD(v68[0]);
              v111 = *(_DWORD *)((char *)v68 + 2);
              v113 = v68[1];
              v103 = v68[2];
              v104 = v68[3];
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)v67);
              v7 = (char)v110;
            }
            else
            {
              v112 = HIWORD(v68[0]);
              v111 = *(_DWORD *)((char *)v68 + 2);
              v113 = v68[1];
              v103 = v68[2];
              v104 = v68[3];
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)v67);
            }
          }
          else
          {
            v7 = BYTE1(v68[0]);
            v111 = *(_DWORD *)((char *)v68 + 2);
            v112 = HIWORD(v68[0]);
            v113 = v68[1];
            v103 = v68[2];
            v104 = v68[3];
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)v67);
          }
LABEL_64:
          LOBYTE(v110) = v7;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v114);
          LOBYTE(v47) = 1;
          if ( __OFSUB__(0, *v5) )
          {
            v48 = v113;
            goto LABEL_71;
          }
          v109 = __src + 2488;
          v53 = *((_QWORD *)__src + 311);
          for ( i = *((_QWORD *)__src + 312) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v53);
            v53 += 96;
          }
          v55 = *v5;
          LOBYTE(v47) = 1;
          v48 = v113;
          if ( *v5 )
            goto LABEL_70;
          goto LABEL_71;
        case 1:
LABEL_82:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_81:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v109 = __src + 3512;
  v8 = (unsigned __int8)__src[3512];
  __srca = __src + 2840;
  switch ( v8 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3LL:
      v9 = __src + 3176;
      switch ( __src[3506] )
      {
        case 0:
LABEL_9:
          v113 = v2;
          v114 = v4;
          *(_WORD *)(__src + 3507) = 0;
          memcpy(__src + 3336, v9, 0x98u);
          v11 = *((volatile signed __int64 ***)__src + 416);
          *((_QWORD *)__src + 436) = v11;
          v12 = __src[3504];
          v13 = __src[3505];
          v14 = *v11;
          v15 = _InterlockedIncrement64(*v11);
          if ( (v15 < 0) ^ v10 | (v15 == 0) )
            goto LABEL_88;
          v16 = v11[1];
          v17 = _InterlockedIncrement64(v16);
          if ( (v17 < 0) ^ v10 | (v17 == 0) )
            goto LABEL_88;
          v18 = v11[2];
          v19 = _InterlockedIncrement64(v18);
          if ( (v19 < 0) ^ v10 | (v19 == 0) )
            goto LABEL_88;
          v20 = v11[3];
          v21 = _InterlockedIncrement64(v20);
          if ( (v21 < 0) ^ v10 | (v21 == 0) )
            goto LABEL_88;
          v22 = v11[4];
          v23 = _InterlockedIncrement64(v22);
          if ( (v23 < 0) ^ v10 | (v23 == 0) )
            goto LABEL_88;
          v24 = v11[5];
          v25 = _InterlockedIncrement64(v24);
          if ( (v25 < 0) ^ v10 | (v25 == 0) )
            goto LABEL_88;
          v26 = v11[7];
          if ( v26 )
          {
            if ( _InterlockedIncrement64(v26) <= 0 )
              goto LABEL_88;
          }
          v27 = v11[6];
          if ( _InterlockedIncrement64(v27) <= 0 )
            goto LABEL_88;
          LOBYTE(v98) = v13;
          v110 = v9;
          v84 = v14;
          v85 = v16;
          v86 = v18;
          v87 = v20;
          v88 = v22;
          v89 = v24;
          v91 = v26;
          v90 = v27;
          __src[3508] = 1;
          _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
            v70,
            __src + 3336);
          v29 = *((volatile signed __int64 **)__src + 434);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v28 | (v30 == 0)
            || (v31 = *((volatile signed __int64 **)__src + 435),
                v32 = _InterlockedIncrement64(v31),
                (v32 < 0) ^ v28 | (v32 == 0)) )
          {
LABEL_88:
            BUG();
          }
          memcpy(__dst, v70, 0x88u);
          __dst[17] = v29;
          __dst[18] = v31;
          *(_WORD *)(__src + 3507) = 0;
          memcpy(v70, __dst, 0x98u);
          *(_QWORD *)&v70[152] = v84;
          *(_QWORD *)&v70[160] = v85;
          *(_QWORD *)&v70[168] = v86;
          *(_QWORD *)&v70[176] = v87;
          *(_QWORD *)&v70[184] = v88;
          *(_QWORD *)&v70[192] = v89;
          *(_QWORD *)&v70[200] = v90;
          *(_QWORD *)&v70[208] = v91;
          v70[216] = v12;
          v33 = 1;
          if ( (_BYTE)v98 != 2 )
            v33 = (char)v98;
          v70[217] = v33;
          *((_QWORD *)__src + 437) = tauri::async_runtime::spawn_blocking::haa4fa2f550e370dd(v70);
          v4 = v114;
          v9 = v110;
          break;
        case 1:
LABEL_84:
          v110 = v9;
          JUMPOUT(0x1001381B7LL);
        case 2:
LABEL_83:
          v110 = v9;
          v114 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019528E8);
        case 3:
          break;
      }
LABEL_23:
      v114 = v4;
      v34 = __src + 3496;
      _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h01af4b3cec1730c0(
        v70,
        (_QWORD *)__src + 437);
      v35 = *(_QWORD *)v70;
      if ( *(_QWORD *)v70 == 0x8000000000000002LL )
      {
        __src[3506] = 3;
        goto LABEL_33;
      }
      v110 = v9;
      if ( *(_QWORD *)v70 == 0x8000000000000001LL )
      {
        v107 = *(_QWORD *)&v70[24];
        v106 = *(_QWORD *)&v70[16];
        v105 = *(_BYTE **)&v70[8];
        v36 = 0x800000000000000CLL;
      }
      else
      {
        v36 = *(_QWORD *)&v70[8];
        v105 = *(_BYTE **)&v70[16];
        v106 = *(_QWORD *)&v70[24];
        v107 = *(_QWORD *)&v70[32];
        memcpy(v62, &v70[40], 0x120u);
      }
      v64 = v105;
      v65 = v106;
      v66[0] = v107;
      memcpy(&v66[1], v62, 0x120u);
      v39 = *v34;
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*v34) )
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v39);
      if ( v35 == 0x8000000000000001LL )
      {
        *(_QWORD *)v70 = v36;
        *(_QWORD *)&v70[8] = v64;
        *(_QWORD *)&v70[16] = v65;
        *(_QWORD *)&v70[24] = v66[0];
        *(_QWORD *)&v70[32] = v66[1];
        *(_QWORD *)&v70[40] = v66[2];
        v105 = v70;
        v106 = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          v62,
          "\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs",
          &v105);
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)v70);
        v113 = v62[0];
        v40 = (const void *)v62[1];
        v41 = v62[2];
        goto LABEL_42;
      }
      if ( v35 == 0x8000000000000000LL )
      {
        *(_QWORD *)v70 = v36;
        *(_QWORD *)&v70[8] = v64;
        *(_QWORD *)&v70[16] = v65;
        qmemcpy(&v70[24], v66, 0x48u);
        v105 = nullptr;
        v106 = 1;
        v107 = 0;
        v62[2] = 1610612768;
        v62[0] = (__int64)&v105;
        v62[1] = (__int64)&off_101952F18;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v70,
                                v62) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v108, &unk_101952FE0, &off_101952F48);
        v113 = (__int64)v105;
        v40 = (const void *)v106;
        v41 = v107;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v70);
LABEL_42:
        __src[3507] = 0;
        __src[3508] = 0;
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 3336));
        memcpy(v59, v68, sizeof(v59));
        __src[3506] = 1;
        memcpy(v58, v59, sizeof(v58));
        v42 = v41 == 0;
        if ( v41 < 0 )
        {
LABEL_43:
          v43 = 0;
          goto LABEL_44;
        }
        goto LABEL_49;
      }
      memcpy(&v61[32], v66, 0x128u);
      *(_QWORD *)&v61[8] = v36;
      *(_QWORD *)&v61[16] = v64;
      *(_QWORD *)&v61[24] = v65;
      *(_QWORD *)v61 = v35;
      codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922((__int64)(__src + 3336));
      memcpy(v62, v61, 0x128u);
      v62[37] = v66[33];
      v62[38] = v66[34];
      v62[39] = v66[35];
      v63 = v61[320];
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h45687a04b670ac59((__int64)v70, v62);
      v44 = *(_QWORD *)v70;
      v113 = *(_QWORD *)&v70[8];
      v98 = *(const void **)&v70[16];
      v41 = *(_QWORD *)&v70[24];
      v83 = *(_QWORD *)&v70[32];
      memcpy(v68, &v70[40], sizeof(v68));
      __src[3507] = 0;
      __src[3508] = 0;
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 3336));
      memcpy(v59, v68, sizeof(v59));
      __src[3506] = 1;
      if ( v44 == 0x8000000000000001LL )
      {
LABEL_33:
        *v109 = 3;
LABEL_57:
        __src[3520] = 3;
        v49 = 3;
        result = 1;
        goto LABEL_72;
      }
      memcpy(v58, v59, sizeof(v58));
      if ( v44 != 0x8000000000000000LL )
      {
        memcpy(&v67[40], v58, 0x170u);
        *(_QWORD *)v67 = v44;
        *(_QWORD *)&v67[8] = v113;
        *(_QWORD *)&v67[16] = v98;
        *(_QWORD *)&v67[24] = v41;
        *(_QWORD *)&v67[32] = v83;
        _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hff827dfbb2194112(v70, v67);
        v68[0] = *(_QWORD *)&v70[8];
        v68[1] = *(_QWORD *)&v70[16];
        v68[2] = *(_QWORD *)&v70[24];
        v68[3] = *(_QWORD *)&v70[32];
        if ( *(_QWORD *)v70 == 0x8000000000000025LL )
        {
          v93 = v68[0];
          v94 = v68[1];
          v95 = v68[2];
          v96 = v68[3];
          v92 = 0;
          v47 = 0;
        }
        else
        {
          v69[0] = *(_QWORD *)v70;
          v69[1] = v68[0];
          v69[2] = v68[1];
          v69[3] = v68[2];
          v69[4] = v68[3];
          v69[5] = *(_QWORD *)&v70[40];
          _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
            &v92,
            v69);
          v47 = v92;
        }
        goto LABEL_56;
      }
      v40 = v98;
      v42 = v41 == 0;
      if ( v41 < 0 )
        goto LABEL_43;
LABEL_49:
      if ( v42 )
      {
        v46 = 1;
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, v59);
        v43 = 1;
        v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1);
        if ( !v45 )
LABEL_44:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43, v41);
        v46 = v45;
      }
      memcpy((void *)v46, v40, v41);
      if ( v113 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v113, 1);
      LOBYTE(v93) = 3;
      v94 = v41;
      v95 = v46;
      v96 = v41;
      v92 = 1;
      v47 = 1;
LABEL_56:
      v6 = v93;
      LOBYTE(v110) = BYTE1(v93);
      v99 = *(_DWORD *)((char *)&v93 + 2);
      v100 = HIWORD(v93);
      v48 = v94;
      v79 = v95;
      v80 = v96;
      *v109 = 1;
      if ( v47 == 2 )
        goto LABEL_57;
      v112 = v100;
      v111 = v99;
      v103 = v79;
      v104 = v80;
      core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..commands..relay..CodexRouterNoAccountModePayload$GT$$C$alloc..string..String$C$codexmate_lib..commands..relay..set_codex_router_no_account_mode..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h27fa51d75cec0649((__int64)__srca);
      core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v114);
      if ( *((_QWORD *)__src + 310) != 0x8000000000000000LL )
      {
        v113 = v48;
        v109 = __src + 2488;
        v51 = *((_QWORD *)__src + 311);
        for ( j = *((_QWORD *)__src + 312) + 1LL; j != 1; --j )
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v51);
          v51 += 96;
        }
        v55 = *((_QWORD *)__src + 310);
        v48 = v113;
        if ( v55 )
LABEL_70:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v109, 96 * v55, 8);
      }
LABEL_71:
      v102 = v112;
      v101 = v111;
      v81 = v103;
      v82 = v104;
      __src[3520] = 1;
      core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0708071ff4a485ef((__int64)v114);
      v75 = v102;
      v74 = v101;
      v77 = v81;
      v78 = v82;
      v72 = v6;
      v73 = (char)v110;
      v76 = v48;
      v71 = v47 & 1;
      __src[3539] = 0;
      memcpy(v70, __src, 0x168u);
      __src[3538] = 0;
      v56 = *((_QWORD *)__src + 48);
      __src[3537] = 0;
      *(_QWORD *)&v67[16] = *((_QWORD *)__src + 47);
      v57 = *((_QWORD *)__src + 45);
      *(_QWORD *)&v67[8] = *((_QWORD *)__src + 46);
      *(_QWORD *)v67 = v57;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        v70,
        v56,
        &v71,
        v67,
        *((unsigned int *)__src + 882),
        *((unsigned int *)__src + 883));
      v49 = 1;
      result = 0;
LABEL_72:
      __src[3536] = v49;
      return result;
  }
}
